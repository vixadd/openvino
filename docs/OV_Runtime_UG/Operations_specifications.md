# Operations Specifications {#openvino_docs_operations_specifications}

@sphinxdirective

.. toctree::
   :maxdepth: 1
   
   openvino_docs_ops_arithmetic_Abs_1
   openvino_docs_ops_arithmetic_Acos_1
   openvino_docs_ops_arithmetic_Acosh_3
   openvino_docs_ops_pooling_AdaptiveAvgPool_8
   openvino_docs_ops_pooling_AdaptiveMaxPool_8
   openvino_docs_ops_arithmetic_Add_1
   openvino_docs_ops_arithmetic_Asin_1
   openvino_docs_ops_arithmetic_Asinh_3
   openvino_docs_ops_infrastructure_Assign_3
   openvino_docs_ops_arithmetic_Atan_1
   openvino_docs_ops_arithmetic_Atanh_3
   openvino_docs_ops_pooling_AvgPool_1
   openvino_docs_ops_normalization_BatchNormInference_1
   openvino_docs_ops_normalization_BatchNormInference_5
   openvino_docs_ops_movement_BatchToSpace_2
   openvino_docs_ops_convolution_BinaryConvolution_1
   openvino_docs_ops_movement_Broadcast_1
   openvino_docs_ops_movement_Broadcast_3
   openvino_docs_ops_condition_Bucketize_3
   openvino_docs_ops_sequence_CTCGreedyDecoder_1
   openvino_docs_ops_sequence_CTCGreedyDecoderSeqLen_6
   openvino_docs_ops_arithmetic_Ceiling_1
   openvino_docs_ops_activation_Clamp_1
   openvino_docs_ops_movement_Concat_1
   openvino_docs_ops_infrastructure_Constant_1
   openvino_docs_ops_type_ConvertLike_1
   openvino_docs_ops_type_Convert_1
   openvino_docs_ops_convolution_ConvolutionBackpropData_1
   openvino_docs_ops_convolution_Convolution_1
   openvino_docs_ops_arithmetic_Cos_1
   openvino_docs_ops_arithmetic_Cosh_1
   openvino_docs_ops_sequence_CTCLoss_4
   openvino_docs_ops_arithmetic_CumSum_3
   openvino_docs_ops_convolution_DeformableConvolution_1
   openvino_docs_ops_convolution_DeformableConvolution_8
   openvino_docs_ops_detection_DeformablePSROIPooling_1
   openvino_docs_ops_movement_DepthToSpace_1
   openvino_docs_ops_detection_DetectionOutput_1
   openvino_docs_ops_detection_DetectionOutput_8
   openvino_docs_ops_signals_DFT_7
   openvino_docs_ops_arithmetic_Divide_1
   openvino_docs_ops_matrix_Einsum_7
   openvino_docs_ops_activation_Elu_1
   openvino_docs_ops_sparse_EmbeddingBagOffsetsSum_3
   openvino_docs_ops_sparse_EmbeddingBagPackedSum_3
   openvino_docs_ops_sparse_EmbeddingSegmentsSum_3
   openvino_docs_ops_comparison_Equal_1
   openvino_docs_ops_arithmetic_Erf_1
   openvino_docs_ops_activation_Exp_1
   openvino_docs_ops_detection_ExperimentalDetectronDetectionOutput_6
   openvino_docs_ops_detection_ExperimentalDetectronGenerateProposalsSingleImage_6
   openvino_docs_ops_detection_ExperimentalDetectronPriorGridGenerator_6
   openvino_docs_ops_detection_ExperimentalDetectronROIFeatureExtractor_6
   openvino_docs_ops_sort_ExperimentalDetectronTopKROIs_6
   openvino_docs_ops_movement_ExtractImagePatches_3
   openvino_docs_ops_quantization_FakeQuantize_1
   openvino_docs_ops_arithmetic_FloorMod_1
   openvino_docs_ops_arithmetic_Floor_1
   openvino_docs_ops_normalization_GRN_1
   openvino_docs_ops_sequence_GRUCell_3
   openvino_docs_ops_sequence_GRUSequence_5
   openvino_docs_ops_movement_GatherTree_1
   openvino_docs_ops_movement_Gather_1
   openvino_docs_ops_movement_Gather_7
   openvino_docs_ops_movement_Gather_8
   openvino_docs_ops_movement_GatherElements_6
   openvino_docs_ops_movement_GatherND_5
   openvino_docs_ops_movement_GatherND_8
   openvino_docs_ops_activation_GELU_2
   openvino_docs_ops_activation_GELU_7
   openvino_docs_ops_comparison_GreaterEqual_1
   openvino_docs_ops_comparison_Greater_1
   openvino_docs_ops_convolution_GroupConvolutionBackpropData_1
   openvino_docs_ops_convolution_GroupConvolution_1
   openvino_docs_ops_activation_HardSigmoid_1
   openvino_docs_ops_activation_HSigmoid_5
   openvino_docs_ops_activation_HSwish_4
   openvino_docs_ops_image_I420toBGR_8
   openvino_docs_ops_image_I420toRGB_8
   openvino_docs_ops_signals_IDFT_7
   openvino_docs_ops_infrastructure_If_8
   openvino_docs_ops_image_Interpolate_1
   openvino_docs_ops_image_Interpolate_4
   openvino_docs_ops_normalization_LRN_1
   openvino_docs_ops_sequence_LSTMCell_1
   openvino_docs_ops_sequence_LSTMSequence_1
   openvino_docs_ops_comparison_LessEqual_1
   openvino_docs_ops_comparison_Less_1
   openvino_docs_ops_arithmetic_Log_1
   openvino_docs_ops_logical_LogicalAnd_1
   openvino_docs_ops_logical_LogicalNot_1
   openvino_docs_ops_logical_LogicalOr_1
   openvino_docs_ops_logical_LogicalXor_1
   openvino_docs_ops_activation_LogSoftmax_5
   openvino_docs_ops_infrastructure_Loop_5
   openvino_docs_ops_normalization_MVN_1
   openvino_docs_ops_normalization_MVN_6
   openvino_docs_ops_matrix_MatMul_1
   openvino_docs_ops_sort_MatrixNms_8
   openvino_docs_ops_pooling_MaxPool_1
   openvino_docs_ops_pooling_MaxPool_8
   openvino_docs_ops_arithmetic_Maximum_1
   openvino_docs_ops_arithmetic_Minimum_1
   openvino_docs_ops_activation_Mish_4
   openvino_docs_ops_arithmetic_Mod_1
   openvino_docs_ops_sort_MulticlassNonMaxSuppression_8
   openvino_docs_ops_arithmetic_Multiply_1
   openvino_docs_ops_arithmetic_Negative_1
   openvino_docs_ops_sort_NonMaxSuppression_1
   openvino_docs_ops_sort_NonMaxSuppression_3
   openvino_docs_ops_sort_NonMaxSuppression_4
   openvino_docs_ops_sort_NonMaxSuppression_5
   openvino_docs_ops_condition_NonZero_3
   openvino_docs_ops_normalization_NormalizeL2_1
   openvino_docs_ops_comparison_NotEqual_1
   openvino_docs_ops_image_NV12toBGR_8
   openvino_docs_ops_image_NV12toRGB_8
   openvino_docs_ops_sequence_OneHot_1
   openvino_docs_ops_activation_PReLU_1
   openvino_docs_ops_detection_PSROIPooling_1
   openvino_docs_ops_movement_Pad_1
   openvino_docs_ops_infrastructure_Parameter_1
   openvino_docs_ops_arithmetic_Power_1
   openvino_docs_ops_detection_PriorBoxClustered_1
   openvino_docs_ops_detection_PriorBox_1
   openvino_docs_ops_detection_PriorBox_8
   openvino_docs_ops_detection_Proposal_1
   openvino_docs_ops_detection_Proposal_4
   openvino_docs_ops_generation_RandomUniform_8
   openvino_docs_ops_generation_Range_1
   openvino_docs_ops_generation_Range_4
   openvino_docs_ops_infrastructure_ReadValue_3
   openvino_docs_ops_activation_ReLU_1
   openvino_docs_ops_reduction_ReduceL1_4
   openvino_docs_ops_reduction_ReduceL2_4
   openvino_docs_ops_reduction_ReduceLogicalAnd_1
   openvino_docs_ops_reduction_ReduceLogicalOr_1
   openvino_docs_ops_reduction_ReduceMax_1
   openvino_docs_ops_reduction_ReduceMean_1
   openvino_docs_ops_reduction_ReduceMin_1
   openvino_docs_ops_reduction_ReduceProd_1
   openvino_docs_ops_reduction_ReduceSum_1
   openvino_docs_ops_detection_RegionYolo_1
   openvino_docs_ops_detection_ReorgYolo_1
   openvino_docs_ops_shape_Reshape_1
   openvino_docs_ops_infrastructure_Result_1
   openvino_docs_ops_movement_Reverse_1
   openvino_docs_ops_movement_ReverseSequence_1
   openvino_docs_ops_sequence_RNNCell_3
   openvino_docs_ops_sequence_RNNSequence_5
   openvino_docs_ops_detection_ROIAlign_3
   openvino_docs_ops_detection_ROIPooling_1
   openvino_docs_ops_movement_Roll_7
   openvino_docs_ops_arithmetic_Round_5
   openvino_docs_ops_movement_ScatterElementsUpdate_3
   openvino_docs_ops_movement_ScatterNDUpdate_3
   openvino_docs_ops_movement_ScatterUpdate_3
   openvino_docs_ops_condition_Select_1
   openvino_docs_ops_activation_Selu_1
   openvino_docs_ops_shape_ShapeOf_1
   openvino_docs_ops_shape_ShapeOf_3
   openvino_docs_ops_movement_ShuffleChannels_1
   openvino_docs_ops_activation_Sigmoid_1
   openvino_docs_ops_arithmetic_Sign_1
   openvino_docs_ops_arithmetic_Sin_1
   openvino_docs_ops_arithmetic_Sinh_1
   openvino_docs_ops_movement_Slice_8
   openvino_docs_ops_activation_SoftMax_1
   openvino_docs_ops_activation_SoftMax_8
   openvino_docs_ops_activation_SoftPlus_4
   openvino_docs_ops_movement_SpaceToBatch_2
   openvino_docs_ops_movement_SpaceToDepth_1
   openvino_docs_ops_movement_Split_1
   openvino_docs_ops_arithmetic_Sqrt_1
   openvino_docs_ops_arithmetic_SquaredDifference_1
   openvino_docs_ops_shape_Squeeze_1
   openvino_docs_ops_movement_StridedSlice_1
   openvino_docs_ops_arithmetic_Subtract_1
   openvino_docs_ops_activation_Swish_4
   openvino_docs_ops_arithmetic_Tan_1
   openvino_docs_ops_arithmetic_Tanh_1
   openvino_docs_ops_infrastructure_TensorIterator_1
   openvino_docs_ops_movement_Tile_1
   openvino_docs_ops_sort_TopK_1
   openvino_docs_ops_sort_TopK_3
   openvino_docs_ops_movement_Transpose_1
   openvino_docs_ops_shape_Unsqueeze_1
   openvino_docs_ops_movement_VariadicSplit_1

@endsphinxdirective