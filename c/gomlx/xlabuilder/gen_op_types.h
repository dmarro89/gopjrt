
/***** File generated by ./cmd/xlabuilder_codegen, based on xlabuilder/op_types.txt. Don't edit it directly. *****/

#ifndef _GOMLX_XLABUILDER_GEN_OP_TYPES_H
#define _GOMLX_XLABUILDER_GEN_OP_TYPES_H

#ifdef __cplusplus
extern "C" {
#endif

enum OpType {
  InvalidOp,
  ConstantOp,
  IotaOp,
  ParameterOp,
  ConvertTypeOp,
  WhereOp,
  TupleOp,
  GetTupleElementOp,
  ReshapeOp,
  BroadcastOp,
  BroadcastInDimOp,
  ReduceSumOp,
  ReduceMaxOp,
  ReduceMultiplyOp,
  SliceOp,
  PadOp,
  GatherOp,
  ScatterOp,
  ConcatenateOp,
  ConvGeneralDilatedOp,
  ReverseOp,
  TransposeOp,
  ReduceWindowOp,
  SelectAndScatterOp,
  BatchNormTrainingOp,
  BatchNormInferenceOp,
  BatchNormGradOp,
  DotGeneralOp,
  ArgMinMaxOp,
  FftOp,
  AbsOp,
  NegOp,
  ExpOp,
  Expm1Op,
  FloorOp,
  CeilOp,
  RoundOp,
  LogOp,
  Log1pOp,
  LogicalNotOp,
  LogisticOp,
  SignOp,
  ClzOp,
  CosOp,
  SinOp,
  TanhOp,
  SqrtOp,
  RsqrtOp,
  ImagOp,
  RealOp,
  ConjOp,
  AddOp,
  MulOp,
  SubOp,
  DivOp,
  RemOp,
  AndOp,
  OrOp,
  XorOp,
  DotOp,
  MinOp,
  MaxOp,
  PowOp,
  ComplexOp,
  EqualOp,
  NotEqualOp,
  GreaterOrEqualOp,
  GreaterThanOp,
  LessOrEqualOp,
  LessThanOp,
  EqualTotalOrderOp,
  NotEqualTotalOrderOp,
  GreaterOrEqualTotalOrderOp,
  GreaterThanTotalOrderOp,
  LessOrEqualTotalOrderOp,
  LessThanTotalOrderOp,
  RngBitGeneratorOp,
  RngNormalOp,
  RngUniformOp,
};

#ifdef __cplusplus
}
#endif

#endif 