// COPYRIGHT DASSAULT SYSTEMES  2000
//=============================================================================
// Class CATAnalysisExplicitDefinitions
//=============================================================================
// Usage Notes: Definitions of usual types in the explicit model
//=============================================================================

#ifndef CATAnalysisExplicitDefinitions_H_
#define CATAnalysisExplicitDefinitions_H_

#include "CATAnalysisInterface.h"

/**
 * @CAA2Level L1
 * @CAA2Usage U1
 */


/**
 * The number ID of a physical type.
 */
typedef int CATSamPhysicalType ;

/**
 * The types of values which can be manipulated by the field model.
 * @param CATSamValueCharacter
 *   One character.
 * @param CATSamValueShort
 *   A short integer.
 * @param CATSamValueInteger
 *   An integer.
 * @param CATSamValueReal
 *   A single precision real.
 * @param CATSamValueDouble
 *   A double precision real.
 * @param CATSamValueComplex
 *   A single precision complex.
 * @param CATSamValueComplexDouble
 *   A double precision complex.
 * @param CATSamValuePointer
 *   A pointer to an object.<br>
 *   <b>Warning : values of this type can not be streamed</b>.
 * @param CATSamValueNode
 *   A reference to a node.<br>
 *   <b>Note</b> : all value types defined after this one (and none before) must be references to entities.
 * @param CATSamValueElement
 *   A reference to an element.
 * @param CATSamValueMaterial
 *   A reference to a material.
 * @param CATSamValueAxis
 *   A reference to an axis.
 * @param CATSamValueProperty
 *   A reference to a property.
 * @param CATSamValueRestraint
 *   A reference to a restraint.
 * @param CATSamValueLoad
 *   A reference to a load.
 * @param CATSamValueMass
 *   A reference to a mass.
 * @param CATSamValueSet
 *   A reference to a set.
 * @param CATSamValueGroup
 *   A reference to a Group.
 * @param CATSamValueIExpression.
 *   A reference to a IExpression.
 * @param CATSamValueVirtualNode
 *   A reference to a virtual node (i.e without mesh definition).
 * @param CATSamValueVirtualElement
 *   A reference to an virtual element (i.e without mesh definition).
 * @param CATSamValueBoundaryCondition
 *   A reference to a boundary condition
 * @param CATSamValueLast
 *   No type of value specified.<br>
 *   It also represents the number of valid enumerated values.
 */
enum CATSamValue
{
  CATSamValueCharacter,
  CATSamValueShort,
  CATSamValueInteger,
  CATSamValueReal,
  CATSamValueDouble,
  CATSamValueComplex,
  CATSamValueComplexDouble,
  CATSamValuePointer,
  CATSamValueNode,
  CATSamValueElement,
  CATSamValueMaterial,
  CATSamValueAxis,
  CATSamValueProperty,
  CATSamValueRestraint,
  CATSamValueLoad,
  CATSamValueMass,
  CATSamValueSet,
  CATSamValueGroup,
  CATSamValueIExpression,
  CATSamValueVirtualNode,
  CATSamValueVirtualElement,
  CATSamValueBoundaryCondition,
  CATSamValueLast
} ;

/**
 * The mathematical types which can be manipulated by the field model.
 * @param CATSamMathTypeScalar
 *   A scalar.
 * @param CATSamMathTypeVector
 *   A vector.
 * @param CATSamMathTypeSymTensor
 *   A symmetrical tensor.
 * @param CATSamMathTypeTensor
 *   A tensor.
 * @param CATSamMathTypeEigenValue
 *   Eigen values.
 * @param CATSamMathTypeBitArray
 *   An array of bits.
 * @param CATSamMathTypeLast
 *   No mathematical type defined.<br>
 *   It also represents the number of valid enumerated values.
 */
enum CATSamMathType
{
  CATSamMathTypeScalar,
  CATSamMathTypeVector,
  CATSamMathTypeSymTensor,
  CATSamMathTypeTensor,
  CATSamMathTypeEigenValue,
  CATSamMathTypeBitArray,
  CATSamMathTypeLast
} ;

/**
 * The types of lists which can be manipulated by the field model.
 * @param CATSamListTypeChild
 *   The list of children.
 * @param CATSamListTypeParent
 *   The list of parents.
 * @param CATSamListTypeApplyTo
 *   The list of entities or sets on which an entity is applied to.
 * @param CATSamListTypeApplyBy
 *   The list of entities which are applied to an entity or a set.
 * @param CATSamListTypePhysical
 *   The list of objects which have a particular physical type.
 * @param CATSamListTypeUser
 *   An user list of objects.
 * @param CATSamListTypeLast
 *   No list type defined.<br>
 *   It also represents the number of valid enumerated values.
 */
enum CATSamListType
{
  CATSamListTypeChild,
  CATSamListTypeParent,
  CATSamListTypeApplyTo,
  CATSamListTypeApplyBy,
  CATSamListTypePhysical,
  CATSamListTypeUser,
  CATSamListTypeLast
} ;

/**
 * The positions on which field data entities can be applied to.
 * @param CATSamPositionNode
 *   A node.
 * @param CATSamPositionElement
 *   An element.
 * @param CATSamPositionCenter
 *   The center of an element.
 * @param CATSamPositionDof
 *   A degree of freedom.<br>
 *   <b>Note</b> : all positions defined after this one (and none before)
 *   need a number to be specified with the apply definition<br>.
 *   The valid numbers for this position are defined by <b>CATSamDof</b>.
 * @param CATSamPositionNodeOfElement
 *   A node of an element.
 * @param CATSamPositionEdge
 *   An edge of an element.
 * @param CATSamPositionFace
 *   A face of an element.
 * @param CATSamPositionGauss
 *   A gauss point of an element.
 * @param CATSamPositionVirtualNode
 *   A virtual node.
 * @param CATSamPositionVirtualElement
 *   A virtual element.
 * @param CATSamPositionUserDefined
 *   An user defined position.
 * @param CATSamPositionGroup
 *   A Group position.
 * @param CATSamPositionSet
 *   A Set position.
 * @param CATSamPositionLast
 *   No position type defined.<br>
 *   It also represents the number of valid enumerated values.
 * @see CATSamDof
 */
enum CATSamPosition
{
  CATSamPositionNode,
  CATSamPositionElement,
  CATSamPositionCenter,
  CATSamPositionDof,
  CATSamPositionNodeOfElement,
  CATSamPositionEdge,
  CATSamPositionFace,
  CATSamPositionGauss,
  CATSamPositionVirtualNode,
  CATSamPositionVirtualElement,
  CATSamPositionUserDefined,
  CATSamPositionGroup,
  CATSamPositionSet,
  CATSamPositionLast
} ;

/**
 * Flags representing the degrees of freedom.
 * @param CATSamDofTranslationX
 *   Translation in the X direction.
 * @param CATSamDofTranslationY
 *   Translation in the Y direction.
 * @param CATSamDofTranslationZ
 *   Translation in the Z direction.
 * @param CATSamDofRotationX
 *   Rotation about the X axis.
 * @param CATSamDofRotationY
 *   Rotation about the Y axis.
 * @param CATSamDofRotationZ
 *   Rotation about the Z axis.
 * @param CATSamDofTranslationR
 *   Translation in the R direction (for axisymmetric problems).
 * @param CATSamDofRotationRZ
 *   Rotation in the RZ plane (for axisymmetric problems).
 * @param CATSamDofTemperature
 *   Temperature.
 * @param CATSamDofPressure
 *   Pressure.
 * @param CATSamDofElectricPotential
 *   Electric potential.
 * @param CATSamDofDensity
 *   Density.
 * @param CATSamDofVelocityX
 *   Velocity in the X direction.
 * @param CATSamDofVelocityY
 *   Velocity in the Y direction.
 * @param CATSamDofVelocityZ
 *   Velocity in the Z direction.
 * @param CATSamDofBallJoin
 *   A ball join (= CATSamDofTranslationX | CATSamDofTranslationY | CATSamDofTranslationZ).
 * @param CATSamDofPinned
 *   A pinned join (= CATSamDofRotationX | CATSamDofRotationY | CATSamDofRotationZ).
 * @param CATSamDofClamp
 *   A clamp (= CATSamDofBallJoin | CATSamDofPinned).
 * @param CATSamDofPivot
 *   A pivot around the Z axis (= CATSamDofBallJoin | CATSamDofRotationX | CATSamDofRotationY).
 * @param CATSamDofSlidingPivot
 *   A sliding pivot about the Z direction (= CATSamDofTranslationX | CATSamDofTranslationY | CATSamDofRotationX | CATSamDofRotationY).
 * @param CATSamDofSurfaceSlider
 *   A surface slider in the XY plane (= CATSamDofTranslationZ | CATSamDofPinned).
 * @param CATSamDofSlider
 *   A slider in the Z direction (= CATSamDofTranslationX | CATSamDofTranslationY | CATSamDofPinned).
 * @param CATSamDofFluid
 *   A fluid (= CATSamDofTemperature | CATSamDofPressure |CATSamDofDensity | CATSamDofVelocityX | CATSamDofVelocityY | CATSamDofVelocityZ).
 * @param CATSamDofLastFlag
 *   The number of flags.
 * @param CATSamDofAll
 *   The sum of the flags (= (1 << CATSamDofLastFlag) - 1).
 * @param CATSamDofLast
 *   The number of valid enumerated values.
 */
enum CATSamDof
{
  CATSamDofTranslationX      = 1 <<  0,
  CATSamDofTranslationY      = 1 <<  1,
  CATSamDofTranslationZ      = 1 <<  2,
  CATSamDofRotationX         = 1 <<  3,
  CATSamDofRotationY         = 1 <<  4,
  CATSamDofRotationZ         = 1 <<  5,
  CATSamDofTranslationR      = 1 <<  6,
  CATSamDofRotationRZ        = 1 <<  7,
  CATSamDofTemperature       = 1 <<  8,
  CATSamDofPressure          = 1 <<  9,
  CATSamDofElectricPotential = 1 << 10,
  CATSamDofDensity           = 1 << 11,
  CATSamDofVelocityX         = 1 << 12,
  CATSamDofVelocityY         = 1 << 13,
  CATSamDofVelocityZ         = 1 << 14,
  CATSamDofLastFlag          = 15,
  CATSamDofBallJoin          = CATSamDofTranslationX | CATSamDofTranslationY | CATSamDofTranslationZ,
  CATSamDofPinned            = CATSamDofRotationX | CATSamDofRotationY | CATSamDofRotationZ,
  CATSamDofClamp             = CATSamDofBallJoin | CATSamDofPinned,
  CATSamDofPivot             = CATSamDofBallJoin | CATSamDofRotationX | CATSamDofRotationY,
  CATSamDofSlidingPivot      = CATSamDofTranslationX | CATSamDofTranslationY | CATSamDofRotationX | CATSamDofRotationY,
  CATSamDofSurfaceSlider     = CATSamDofTranslationZ | CATSamDofPinned,
  CATSamDofSlider            = CATSamDofTranslationX | CATSamDofTranslationY | CATSamDofPinned,
  CATSamDofFluid             = CATSamDofTemperature | CATSamDofPressure |CATSamDofDensity | CATSamDofVelocityX | CATSamDofVelocityY | CATSamDofVelocityZ,
  CATSamDofAll               = (1 << CATSamDofLastFlag) - 1,
  CATSamDofLast              = 23
} ;

/**
 * The types of objects which are present in the field model.
 * @param CATSamDataTypeSet
 *   A set.
 * @param CATSamDataTypeEntity
 *   An entity.
 * @param CATSamDataTypeCharac
 *   A simple characteristic.
 * @param CATSamDataTypeList
 *   A list.
 * @param CATSamDataTypeMath
 *   <b>Internal use only</b>.
 * @param CATSamDataTypeApply
 *   <b>Internal use only</b>.
 * @param CATSamDataTypeLast
 *   No object type defined.<br>
 *   It also represents the number of valid enumerated values.
 */
enum CATSamDataType
{
  CATSamDataTypeSet,
  CATSamDataTypeEntity,
  CATSamDataTypeCharac,
  CATSamDataTypeList,
  CATSamDataTypeMath,
  CATSamDataTypeApply,
  CATSamDataTypeLast
} ;

/**
 * Flags representing the status of an object of the field model.
 * @param CATSamStatusDisplayed
 *   The object is displayed in the graph.
 * @param CATSamStatusExtPointer
 *   The object contains an external pointer and not an external tag.
 * @param CATSamStatusDeleted
 *   The object is deleted in the feature tree by user.
 * @param CATSamStatusDead
 *   The object doesn't exist in the feature tree.
 * @param CATSamStatusIsolated
 *   The object, if it is destroyed, will not command destuction of his children.
 * @param CATSamStatusCheck
 *   The object is being checked for test of cyclicity of the explicit model.
 * @param CATSamStatusDesactivated
 *   The object is desactivated in the explicitation.
 * @param CATSamStatusExternalLinked
 *   The object is Linked From an other Model.
 * @param CATSamStatusCondensedMesh
 *   The object is a condensed Mesh Entity.
 * @param CATSamStatusAll
 *   The sum of the flags.
 * @param CATSamStatusLast
 *   The number of flags.
 */
enum CATSamStatus
{
  CATSamStatusDisplayed      = 1 <<  0,
  CATSamStatusExtPointer     = 1 <<  1,
  CATSamStatusDeleted        = 1 <<  2,
  CATSamStatusDead           = 1 <<  3,
  CATSamStatusIsolated       = 1 <<  4,
  CATSamStatusCheck          = 1 <<  5,
  CATSamStatusDesactivated   = 1 <<  6,
  CATSamStatusExternalLinked = 1 <<  7,
  CATSamStatusCondensedMesh  = 1 <<  8,
  CATSamStatusLast           = 9,
  CATSamStatusAll            = (1 << CATSamStatusLast) - 1
} ;

/**
 * The types of comparisons which can be made during sorting or searching.
 * @param CATSamCompareTypePointer
 *   The pointer on the objects.
 * @param CATSamCompareTypeTag
 *   The tag of the objects.
 * @param CATSamCompareTypeCategory
 *   The category of the objects.
 * @param CATSamCompareTypeUserNum
 *   The user number of the objects.
 * @param CATSamCompareTypePhysType
 *   The physical type of the objects.
 * @param CATSamCompareTypeSolvName
 *   The solver name of the objects.
 * @param CATSamCompareTypeUserName
 *   The user name of the objects.
 * @param CATSamCompareTypeExtPtr
 *   The external pointer of the objects.
 * @param CATSamCompareTypeSeqNum
 *   The sequential number of the objects.
 * @param CATSamCompareTypeDataType
 *   The data type of the objects.
 * @param CATSamCompareTypeExtTag
 *   The external tag of the objects.
 * @param CATSamCompareTypeLast
 *   No compare type specified.<br>
 *   It also represents the number of valid enumerated values.
 */
enum CATSamCompareType
{
  CATSamCompareTypePointer,
  CATSamCompareTypeTag,
  CATSamCompareTypeCategory,
  CATSamCompareTypeUserNum,
  CATSamCompareTypePhysType,
  CATSamCompareTypeSolvName,
  CATSamCompareTypeUserName,
  CATSamCompareTypeExtPtr,
  CATSamCompareTypeSeqNum,
  CATSamCompareTypeDataType,
  CATSamCompareTypeExtTag,
  CATSamCompareTypeLast
} ;

/**
 * The types of check which can be made.
 * @param CATSamCheckTypePointer
 *   The check on pointer of the object.
 * @param CATSamCheckTypeChild
 *   The check on children of the object.
 * @param CATSamCheckTypeApplyTo
 *   The check on apply to list of the object.
 * @param CATSamCheckTypeRecurse
 *   The recursive check.
 * @param CATSamCheckTypeValid
 *   The check of validity.
 * @param CATSamCheckTypeAll
 *   The full check.
 * @param CATSamCheckTypeLast
 *   The number of check.
 */
enum CATSamCheckType
{
  CATSamCheckTypePointer   = 1 <<  0,
  CATSamCheckTypeChild     = 1 <<  1,
  CATSamCheckTypeApplyTo   = 1 <<  2,
  CATSamCheckTypeRecurse   = 1 <<  3,
  CATSamCheckTypeValid     = 1 <<  4,
  CATSamCheckTypeLast      = 5,
  CATSamCheckTypeAll       = (1 << CATSamCheckTypeLast) - 1
} ;

/**
 * The type of reference frame for which the values of a collector characteristic are expressed.
 * @param CATSamRefFrameLocal
 *   Local reference frames are used and the collector characteristic has their definition.
 * @param CATSamRefFrameGlobal
 *   The values are expressed in the global reference frame.
 * @param CATSamRefFrameNone
 *   The values are not expressed in a reference frame.
 * @param CATSamRefFrameLast
 *   No reference frame defined.<br>
 *   It also represents the number of valid enumerated values.
 */
enum CATSamRefFrame
{
  CATSamRefFrameLocal,
  CATSamRefFrameGlobal,
  CATSamRefFrameNone,
  CATSamRefFrameLast
} ;

/**
 * The mathematical type of reference frame for which the values of a collector characteristic are expressed.
 * @param CATSamRefFrameTypeRectangular
 *   The reference frame is rectangular.
 * @param CATSamRefFrameTypeCylindrical
 *   The reference frame is cylindrical.
 * @param CATSamRefFrameTypeInvCylindrical
 *   The reference frame is cylindrical and pointing inwards.
 * @param CATSamRefFrameTypeSpherical
 *   The reference frame is spherical.
 * @param CATSamRefFrameTypeInvSpherical
 *   The reference frame is spherical and pointing inwards.
 * @param CATSamRefFrameTypeLast
 *   No reference frame defined.<br>
 *   It also represents the number of valid enumerated values.
 */
enum CATSamRefFrameType
{
  CATSamRefFrameTypeRectangular,
  CATSamRefFrameTypeCylindrical,
  CATSamRefFrameTypeInvCylindrical,
  CATSamRefFrameTypeSpherical,
  CATSamRefFrameTypeInvSpherical,
  CATSamRefFrameTypeLast
} ;

/**
 * A qualifier on the apply-to relationship.
 * @param CATSamApplyQualifierUpper
 *   The upper side of a face.
 * @param CATSamApplyQualifierMiddle
 *   The middle of a face.
 * @param CATSamApplyQualifierLower
 *   The lower side of a face.
 * @param CATSamApplyQualifierMaster
 *   The master part of a relationship.
 * @param CATSamApplyQualifierSlave
 *   The slave part of a relationship.
 * @param CATSamApplyQualifierNodeOfElement
 *   The apply-to is done to nodes of elements.
 * @param CATSamApplyQualifierNone
 *   The apply-to is not qualified.
 * @param CATSamApplyQualifierLast
 *   No qualifier.<br>
 *   It also represents the number of valid enumerated values.
 */
enum CATSamApplyQualifier
{
  CATSamApplyQualifierUpper,
  CATSamApplyQualifierMiddle,
  CATSamApplyQualifierLower,
  CATSamApplyQualifierMaster,
  CATSamApplyQualifierSlave,
  CATSamApplyQualifierNodeOfElement,
  CATSamApplyQualifierNone,
  CATSamApplyQualifierLast
} ;

/**
 * The type of the 1D space in the CATISamExpression.
 * @param CATSamSpace1DTypeVector
 *   A 1D space on which can be iterated.
 * @param CATSamSpace1DTypeContinuous
 *   A continuous 1D space.
 * @param CATSamSpace1DTypeSparse
 *   A sparse 1D space.
 * @param CATSamSpace1DTypeLast
 *   An undefined 1D space.
 */
enum CATSamSpace1DType
{
  CATSamSpace1DTypeVector,
  CATSamSpace1DTypeContinuous,
  CATSamSpace1DTypeSparse,
  CATSamSpace1DTypeLast
} ;

/**
 * The type of the 2D space in the CATISamExpression.
 * @param CATSamSpace2DTypeMatrix
 *   A 2D space on which can be iterated.
 * @param CATSamSpace2DTypeContinuous
 *   A continuous 2D space.
 * @param CATSamSpace2DTypeSparse
 *   A sparse 2D space.
 * @param CATSamSpace2DTypeSymmetric
 *   A symmetric 2D space.
 * @param CATSamSpace2DTypeLast
 *   An undefined 2D space.
 */
enum CATSamSpace2DType
{
  CATSamSpace2DTypeMatrix,
  CATSamSpace2DTypeContinuous,
  CATSamSpace2DTypeSparse,
  CATSamSpace2DTypeSymmetric,
  CATSamSpace2DTypeLast
} ;

/**
 * The type of the 3D space in the CATISamExpression.
 * @param CATSamSpace3DTypeTensor
 *   A 3D space on which can be iterated.
 * @param CATSamSpace3DTypeContinuous
 *   A continuous 3D space.
 * @param CATSamSpace3DTypeSparse
 *   A sparse 3D space.
 * @param CATSamSpace3DTypeLast
 *   An undefined 3D space.
 */
enum CATSamSpace3DType
{
  CATSamSpace3DTypeTensor,
  CATSamSpace3DTypeContinuous,
  CATSamSpace3DTypeSparse,
  CATSamSpace3DTypeLast
} ;

/**
 * The type of the vector space in the CATISamExpression.
 * @param CATSamSpaceVectorTypeNominal
 *   Should only be interpreted as named values.
 * @param CATSamSpaceVectorTypeOrdinal
 *   The order of the values is useful.
 * @param CATSamSpaceVectorTypeInterval
 *   The distance between values is useful.
 * @param CATSamSpaceVectorTypeRatio
 *   The ratio of values is useful.
 * @param CATSamSpaceVectorTypeContinuous
 *   Interpolation is useful.
 * @param CATSamSpace1DTypeLast
 *   An undefined vector space.
 */
enum CATSamSpaceVectorType
{
  CATSamSpaceVectorTypeNominal,
  CATSamSpaceVectorTypeOrdinal,
  CATSamSpaceVectorTypeInterval,
  CATSamSpaceVectorTypeRatio,
  CATSamSpaceVectorTypeContinuous,
  CATSamSpaceVectorTypeLast
} ;

/**
 * The aggregation mode of the values of a collector characteristics.
 * @param CATSamAggregationModeAdd
 *   Values must be added in combination process.
 * @param CATSamAggregationModeReplace
 *   Values must replace other values in combination process.
 */
enum CATSamAggregationMode
{
  CATSamAggregationModeAdd,
  CATSamAggregationModeReplace,
  CATSamAggregationModeMultiply,
  CATSamAggregationModeSuppress,
  CATSamAggregationModeJuxtapose,
  CATSamAggregationModeLast
} ;

/**
 * The type of the explicit mesh.
 * @param CATSamMeshTypePhysical
 *   When explicit mesh is linked to a finite elements grid.
 * @param CATSamMeshTypeVirtual
 *   When explicit mesh is not linked to a finite elements grid.
 * @param CATSamMeshTypeAll
 *   When it is containing both physical and virtual mesh.
 */
enum CATSamMeshType
{
  CATSamMeshTypePhysical    = 1 <<  0,
  CATSamMeshTypeVirtual     = 1 <<  1,
  CATSamMeshTypeLast        = 2,
  CATSamMeshTypeAll         = (1 << CATSamMeshTypeLast) - 1
} ;

/**
 * The subtypes of some physical types like Stress, Strain or Energy.
 * @param CATSamSubTypeNominal,
 *   A reference to nominal subtype.
 * @param CATSamSubTypeLogarithmic
 *   A reference to logarithmic subtype.
 * @param CATSamSubTypeElastic
 *   A reference to elastic subtype.
 * @param CATSamSubTypeInelastic
 *   A reference to inelastic subtype.
 * @param CATSamSubTypeThermal
 *   A reference to thermal subtype.
 * @param CATSamSubTypePlastic
 *   A reference to plastic subtype.
 * @param CATSamSubTypeLast
 *   No subtype defined.
 */
enum CATSamSubType
{
  CATSamSubTypeNominal,
  CATSamSubTypeLogarithmic,
  CATSamSubTypeElastic,
  CATSamSubTypeInelastic,
  CATSamSubTypeThermal,
  CATSamSubTypePlastic,
  CATSamSubTypeLast
} ;

/**
 * The component for a vector or a tensor.
 * For example, see below descriptions for the several types:
 * 2D Vector : { C11 C22 }
 * 3D Vector : { C11 C22 C33 }
 * 2D Tensor : { C11 C12
 *               C21 C22 }
 * 3D Tensor : { C11 C12 C13
 *               C21 C22 C23
 *               C31 C32 C33 }
 */
enum CATSamComponent
{
  CATSamComponentNone     = 0,
  CATSamComponentC11      = 1 << 0,
  CATSamComponentC12      = 1 << 1,
  CATSamComponentC13      = 1 << 2,
  CATSamComponentC21      = 1 << 3,
  CATSamComponentC22      = 1 << 4,
  CATSamComponentC23      = 1 << 5,
  CATSamComponentC31      = 1 << 6,
  CATSamComponentC32      = 1 << 7,
  CATSamComponentC33      = 1 << 8,
  CATSamComponentLast     = 10,
  CATSamComponentAll      = (1 << (CATSamComponentLast-1)) - 1
} ;

/**
 * The types of bending connections.
 * @param CATSamBendingTypeCenterOfCurvature
 *   The connection by specifying the center of curve.
 * @param CATSamBendingTypeTangency
 *   The connection by specifying a tangent to the centroid arc.
 * @param CATSamBendingTypeBendRadius
 *   The connection by specifying the bend radius.
 * @param CATSamBendingTypeArcAngle
 *   The connection by specifying the arc angle.
 * @param CATSamBendingTypeLast
 *   No connection type defined.<br>
 *   It also represents the number of valid enumerated values.
 */
enum CATSamBendingType
{
  CATSamBendingTypeCenterOfCurvature,
  CATSamBendingTypeTangency,
  CATSamBendingTypeBendRadius,
  CATSamBendingTypeArcAngle,
  CATSamBendingTypeLast
} ;

/**
 * The types of wall (for simulation of crash).
 * @param CATSamWallTypeInfinitePlane
 *   The wall is represented by a infinite plane.
 * @param CATSamWallTypeLimitedPlane
 *   The wall is represented by a limited plane.
 * @param CATSamWallTypeCylindrical
 *   The wall is represented by a cylinder.
 * @param CATSamWallTypeSpherical
 *   The wall is represented by a sphere.
 * @param CATSamWallTypeLast
 *   No wall type defined.<br>
 *   It also represents the number of valid enumerated values.
 */
enum CATSamWallType
{
  CATSamWallTypeInfinitePlane,
  CATSamWallTypeLimitedPlane,
  CATSamWallTypeCylindrical,
  CATSamWallTypeSpherical,
  CATSamWallTypeLast   
} ;

/**
 * The distribution mode of the characteristic values.
 * This parameter pilots the way the values will be collected regarding to the apply entities.<br>
 * <font color="red">Use only the commented enumerate values. Other may be not implemented.</font>
 * @param CATSamValuesDistributionModeRepeated
 *   The values are repeated. (The same values are applied on each apply).
 * @param CATSamValuesDistributionModeDistributed
 *   The values are distributed.<br>
 *   The values are distributed regarding to the dimension of the characteristic.
 * @param CATSamValuesDistributionModeRepeatedOnVertexOfElements
 *   The values are distributed on each Vertex Nodes of the elements, and repeated on each ApplyTo elements.<br>
 *   The values are distributed regarding to the dimension of the characteristic and the number of the vertex nodes of the ApplyTo elements.
 * @param CATSamValuesDistributionModeDistributedOnVertexOfElements
 *   The values are distributed on each vertex node of the elements and on each ApplyTo elements.<br>
 *   The values are distributed regarding to the dimension of the characteristic and the number of the vertex nodes of the ApplyTo elements.
 * @param CATSamValuesDistributionModeRepeatedOnPositions
 *   The values are distributed on each user defined positions of the elements, and repeated on each ApplyTo elements.<br>
 *   The values are distributed regarding to the dimension of the characteristic and the number of user defined positions of the ApplyTo elements.
 * @param CATSamValuesDistributionModeDistributedOnPositions
 *   The values are distributed on each user defined positions of the elements and on each ApplyTo elements.<br>
 *   The values are distributed regarding to the dimension of the characteristic and the number of user defined positions of the ApplyTo elements.
*/
enum CATSamValuesDistributionMode
{
  CATSamValuesDistributionModePositive,
  CATSamValuesDistributionModeNegative,
  CATSamValuesDistributionModeRepeated,
  CATSamValuesDistributionModeDistributed,
  CATSamValuesDistributionModeRepeatedOnVertexOfElements,
  CATSamValuesDistributionModeDistributedOnVertexOfElements,
  CATSamValuesDistributionModeRepeatedOnVertexOfFaces,
  CATSamValuesDistributionModeDistributedOnVertexOfFaces,
  CATSamValuesDistributionModeRepeatedOnVertexOfEdges,
  CATSamValuesDistributionModeDistributedOnVertexOfEdges,
  CATSamValuesDistributionModeRepeatedOnUserDefinePositions,
  CATSamValuesDistributionModeDistributedOnUserDefinePositions,
  CATSamValuesDistributionModeOneValueDifferentForEachPosition,
  CATSamValuesDistributionModeNValuesDifferentForEachPosition,
  CATSamValuesDistributionModeLast
} ;

extern ExportedByCATAnalysisInterface const CATSamPhysicalType CATSamPhysicalTypeNone ;

#endif
