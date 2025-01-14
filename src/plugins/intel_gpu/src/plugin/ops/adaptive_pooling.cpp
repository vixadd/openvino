// Copyright (C) 2022 Intel Corporation
// SPDX-License-Identifier: Apache-2.0
//

#include "intel_gpu/plugin/program.hpp"
#include "intel_gpu/plugin/common_utils.hpp"

#include "ngraph/op/adaptive_max_pool.hpp"

#include "intel_gpu/primitives/mutable_data.hpp"
#include "intel_gpu/primitives/adaptive_pooling.hpp"

namespace ov {
namespace intel_gpu {

static void CreateAdaptiveAvgPoolOp(Program& p, const std::shared_ptr<ngraph::op::v8::AdaptiveAvgPool>& op) {
    validate_inputs_count(op, {2});

    const auto input_primitives = p.GetInputPrimitiveIDs(op);
    const auto layer_name = layer_type_name_ID(op);

    const cldnn::adaptive_pooling poolPrim{layer_name,
                                           input_primitives[0],
                                           tensor_from_dims(op->get_output_shape(0))};
    p.add_primitive(*op, poolPrim);
}

static void CreateAdaptiveMaxPoolOp(Program& p, const std::shared_ptr<ngraph::op::v8::AdaptiveMaxPool>& op) {
    validate_inputs_count(op, {2});
    OPENVINO_ASSERT(op->get_output_size() == 2, "[GPU] AdaptiveMaxPool requires 2 outputs");

    auto input_primitives = p.GetInputPrimitiveIDs(op);
    const auto layer_type_name = layer_type_name_ID(op);
    const auto layer_name = layer_type_name + ".out0";

    const auto indices_precision = op->get_output_element_type(1);
    const auto indices_shape = op->get_output_shape(1);
    const cldnn::layout indices_layout{DataTypeFromPrecision(indices_precision),
                                       cldnn::format::get_default_format(indices_shape.size()),
                                       tensor_from_dims(indices_shape)};
    const auto indices_memory = p.GetEngine().allocate_memory(indices_layout);

    const cldnn::primitive_id indices_id_w = layer_type_name + "_md_write";
    const cldnn::mutable_data indices_mutable_prim_w{indices_id_w, indices_memory};
    p.add_primitive(*op, indices_mutable_prim_w);

    input_primitives.push_back(indices_id_w);

    const cldnn::adaptive_pooling poolPrim{layer_name,
                                           input_primitives[0],
                                           tensor_from_dims(op->get_output_shape(0)),
                                           input_primitives.back(),
                                           DataTypeFromPrecision(op->get_index_element_type())};
    p.add_primitive(*op, poolPrim);

    const cldnn::primitive_id indices_id_r = layer_type_name + ".out1";
    const cldnn::mutable_data indices_mutable_prim_r{indices_id_r, {layer_name}, indices_memory};
    p.add_primitive(*op, indices_mutable_prim_r);
}

REGISTER_FACTORY_IMPL(v8, AdaptiveAvgPool);
REGISTER_FACTORY_IMPL(v8, AdaptiveMaxPool);

}  // namespace intel_gpu
}  // namespace ov
