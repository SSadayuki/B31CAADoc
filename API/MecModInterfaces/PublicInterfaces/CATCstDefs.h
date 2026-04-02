#ifndef CATCstDefs_h
#define CATCstDefs_h

// COPYRIGHT DASSAULT SYSTEMES 1999

/**
* @CAA2Level L1
* @CAA2Usage U1
*/

#include "CATIAV5Level.h"
#include "CATUnicodeString.h"
#include "MecModItfCPP.h"

/**
* Types used to specify constraint attribute type.
* <B>Role</B>: used by the @href CATICst#GetCstAttr
* , @href CATICst#GetCstAttrValue
* , @href CATICst#GetCstAttrRealValue
* , @href CATICst#SetCstAttrValue and 
* @href CATICst#SetCstAttrRealValue methods.
* @param CATCstAttr_Type
* @param CATCstAttr_Mode
* @param CATCstAttr_Reference
* @param CATCstAttr_Side
* @param CATCstAttr_Orientation
* @param CATCstAttr_Parallelism
* @param CATCstAttr_RefAxis
* @param CATCstAttr_Dimension
* @param CATCstAttr_DimensionAxis
* @param CATCstAttr_Direction
* @param CATCstAttr_AngSector
* @param CATCstAttr_Crv1Param
* @param CATCstAttr_Crv2Param
* @param CATCstAttr_FsPercentage
* @param CATCstAttr_FsContinuity
* @param CATCstAttr_FsDiffusion
* @param CATCstAttr_FsOrder
* @param CATCstAttr_FsType
* @param CATCstAttr_FsDirection
* @param CATCstAttr_FsCouplingPoints
* @param CATCstAttr_FsLimitPointProjection
* @param CATCstAttr_FsBoundaryProjection
* @param CATCstAttr_FsModifiedElement
* @param CATCstAttr_FsGlobalTension
* @param CATCstAttr_FsAutomaticTrap
* @param CATCstAttr_FsProjectionDirection
* @param CATCstAttr_FsTension
* @param CATCstAttr_FsCurvatureVariation
*/

typedef CATUnicodeString CATCstAttrType;

/**
* Type used to specify constraint attribute values.
* <B>Role</B>: used by the @href CATICst#GetCstAttrValue
* and @href CATICst#SetCstAttrValue methods
* @param CATCstVal_Type_Reference
* @param CATCstVal_Type_Distance
* @param CATCstVal_Type_On
* @param CATCstVal_Type_Concentric
* @param CATCstVal_Type_Tangent
* @param CATCstVal_Type_Length
* @param CATCstVal_Type_Angle
* @param CATCstVal_Type_AnglePlanar
* @param CATCstVal_Type_Parallel
* @param CATCstVal_Type_ParallelAxis
* @param CATCstVal_Type_Perpend
* @param CATCstVal_Type_PerpendAxis
* @param CATCstVal_Type_Radius
* @param CATCstVal_Type_Symmetry
* @param CATCstVal_Type_Equidistant
* @param CATCstVal_Type_Chamfer
* @param CATCstVal_Type_ChamferPerpend
* @param CATCstVal_Type_DistanceDirected
* @param CATCstVal_Type_AngleInternal
* @param CATCstVal_Type_StContinuity
* @param CATCstVal_Type_StDistance
* @param CATCstVal_Type_SdContinuity
* @param CATCstVal_Type_SdShape
* @param CATCstVal_Reference_Absolute
* @param CATCstVal_Reference_Relative
* @param CATCstVal_Side_Positive
* Outside first element.
* @param CATCstVal_Side_Negative
* Inside first element.
* @param CATCstVal_Side_Undefined
* Undefined.
* @param CATCstVal_Side_SignedFromValue
* Outside first element if the value is positive.
* @param CATCstVal_Side_SignedFromOppositeValue
* Inside first element if the value is positive.
* @param CATCstVal_Orient_Same
* Same orientation.
* @param CATCstVal_Orient_Opposite
* Opposite orientation.
* @param CATCstVal_Orient_Undefined
* Undefined.
* @param CATCstVal_Parallelism_Same
* Same orientation.
* @param CATCstVal_Parallelism_Opposite
* Opposite orientation.
* @param CATCstVal_Parallelism_Parallel
* Same or opposite orientation.
* @param CATCstVal_Parallelism_NoParallel
* Undefined.
* @param CATCstVal_RefAxis_1
* X Axis (H in a sketch).
* @param CATCstVal_RefAxis_2
* Y Axis (V in a sketch).
* @param CATCstVal_RefAxis_3
* Z Axis.
* @param CATCstVal_Dimension_x1
* Diameter.
* @param CATCstVal_Dimension_x2
* Radius.
* @param CATCstVal_DimensionAxis_1
* Major axis.
* @param CATCstVal_DimensionAxis_2
* Minor axis.
* @param CATCstVal_Direction_None
* No direction (true length).
* @param CATCstVal_Direction_1
* Along X axis (H in a sketch).
* @param CATCstVal_Direction_2
* Along Y axis (V in a sketch).
* @param CATCstVal_Direction_3
* Along Z axis
* @param CATCstVal_AngSector_1
* CATCstVal_Side_Positive and CATCstVal_Orientation_Same.
* @param CATCstVal_AngSector_2
* CATCstVal_Side_Positive and CATCstVal_Orientation_Opposite.
* @param CATCstVal_AngSector_3
* CATCstVal_Side_Negative and CATCstVal_Orientation_Opposite.
* @param CATCstVal_AngSector_4
* CATCstVal_Side_Negative and CATCstVal_Orientation_Same.
* @param CATCstVal_FsContinuity_1
* @param CATCstVal_FsContinuity_2
* @param CATCstVal_FsType_1
* @param CATCstVal_FsType_2
* @param CATCstVal_FsModifiedElement_1
* @param CATCstVal_FsModifiedElement_2
* @param CATCstVal_Mode_Constrained
* The value cannot be edited.
* @param CATCstVal_Mode_Measured
* The value cannot be edited (the constraint is used as a reference).
*/

typedef CATUnicodeString CATCstAttrVal;

/**
* Geometrical types.
* @param CstType_Reference
* Fix.
* @param CstType_Distance
* Distance.
* @param CstType_On
* Coincidence.
* @param CstType_Concentric
* Concentricity.
* @param CstType_Tangent
* Tangency.
* @param CstType_Length
* Length.
* @param CstType_Angle
* Angle (2 elements).
* @param CstType_AnglePlanar
* Angle with axis.
* @param CstType_Parallel
* Parallelism (2 elements).
* @param CstType_ParallelAxis
* Parallelism (1 element).
* @param CstType_Perpend
* Perpendicularity (2 elements).
* @param CstType_PerpendAxis
* Perpendicularity (1 element).
* @param CstType_Radius
* Radius or Diameter and Semimajor axis or Semiminor axis.
* @param CstType_Symmetry
* Symmetry.
* @param CstType_Equidistant
* Equidistant point.
* @param CstType_Chamfer
* Chamfer (3 elements).
* @param CstType_ChamferPerpend
* Chamfer (2 elements).
* @param CstType_DistanceDirected
* Distance along a direction.
* @param CstType_AngleInternal
* Angle (1 element).
* @param CstType_StContinuity 
* FreeFrom Continuity.
* @param CstType_StDistance 
* FreeFormDistance.
* @param CstType_SdContinuity 
* Styling Continuity.
* @param CstType_SdShape 
* Styling Shape.
* .
*/
typedef int CATCstType;

const CATCstType
CstType_ERROR = 0,  
CstType_Reference = 1, 
CstType_Distance = 2, 
CstType_On = 3, 
CstType_Concentric = 4, 
CstType_Tangent = 5, 
CstType_Length = 6, 
CstType_Angle = 7, 
CstType_AnglePlanar = 8, 
CstType_Parallel = 9, 
CstType_ParallelAxis = 10, 
CstType_Perpend = 11, 
CstType_PerpendAxis = 12, 
CstType_Radius = 13, 
CstType_Diameter = 13,   // 'deprecated' 
CstType_Symmetry = 14, 
CstType_Equidistant = 15, 
CstType_Chamfer = 16, 
CstType_ChamferPerpend = 17, 
CstType_DistanceDirected = 18, 
CstType_AngleInternal = 19, 
CstType_StContinuity = 20, 
CstType_StDistance = 21, 
CstType_SdContinuity = 22, 
CstType_SdShape = 23,
#ifdef CATIAV5R28		  
CstType_CurvilinearDistance = 24,
CstType_Equal = 25;
#else
CstType_CurvilinearDistance = 24;
#endif
ExportedByMecModItfCPP extern const CATCstAttrType CATCstAttr_Type; 

ExportedByMecModItfCPP extern const CATCstAttrVal 
CATCstVal_Type_Reference, 
CATCstVal_Type_Distance, 
CATCstVal_Type_On, 
CATCstVal_Type_Concentric, 
CATCstVal_Type_Tangent, 
CATCstVal_Type_Length, 
CATCstVal_Type_Angle, 
CATCstVal_Type_AnglePlanar, 
CATCstVal_Type_Parallel, 
CATCstVal_Type_ParallelAxis, 
CATCstVal_Type_Perpend, 
CATCstVal_Type_PerpendAxis, 
CATCstVal_Type_Radius, 
CATCstVal_Type_Symmetry, 
CATCstVal_Type_Equidistant, 
CATCstVal_Type_Chamfer, 
CATCstVal_Type_ChamferPerpend, 
CATCstVal_Type_DistanceDirected, 
CATCstVal_Type_AngleInternal, 
CATCstVal_Type_StContinuity, 
CATCstVal_Type_StDistance, 
CATCstVal_Type_SdContinuity, 
CATCstVal_Type_SdShape,
 #ifdef CATIAV5R28
CATCstVal_Type_CurvilinearDistance,
CATCstVal_Type_Equal;
#else
 CATCstVal_Type_CurvilinearDistance;
#endif

ExportedByMecModItfCPP extern const CATCstAttrType 
CATCstAttr_Mode, 
CATCstAttr_Reference, 
CATCstAttr_Side, 
CATCstAttr_Orientation, 
CATCstAttr_Sense,   // internal 
CATCstAttr_Parallelism, 
CATCstAttr_RefAxis, 
CATCstAttr_Dimension, 
CATCstAttr_DimensionAxis, 
CATCstAttr_Direction, 
CATCstAttr_AngSector, 
CATCstAttr_Crv1Param,
CATCstAttr_Crv2Param,
CATCstAttr_FsPercentage,
CATCstAttr_FsContinuity,
CATCstAttr_FsDiffusion,
CATCstAttr_FsOrder,
CATCstAttr_FsType,
CATCstAttr_FsDirection,
CATCstAttr_FsCouplingPoints,
CATCstAttr_FsLimitPointProjection,
CATCstAttr_FsBoundaryProjection,
CATCstAttr_FsModifiedElement,
CATCstAttr_FsGlobalTension,
CATCstAttr_FsAutomaticTrap,
CATCstAttr_FsProjectionDirection,
CATCstAttr_FsTension,
CATCstAttr_FsCurvatureVariation;

ExportedByMecModItfCPP extern const CATCstAttrVal
CATCstVal_Mode_Constrained, 
CATCstVal_Mode_Measured; 

/**
* Constraint modes.
* @param CstMode_Undefined
* @param CstMode_Signed
* @param CstMode_Unsigned
* @param CstMode_ERROR
*/

typedef CATCstAttrType CATCstMode;

ExportedByMecModItfCPP extern const CATCstMode
CstMode_Undefined,
CstMode_Signed,
CstMode_Unsigned,
CstMode_ERROR;

ExportedByMecModItfCPP extern const CATCstAttrVal
CATCstVal_Reference_Absolute, 
CATCstVal_Reference_Relative; 

ExportedByMecModItfCPP extern const CATCstAttrVal 
CATCstVal_Side_Positive, 
CATCstVal_Side_Negative, 
CATCstVal_Side_Undefined, 
CATCstVal_Side_Signed_FromValue, 
CATCstVal_Side_Signed_FromOppositeValue; 

ExportedByMecModItfCPP extern const CATCstAttrVal 
CATCstVal_Orient_Same, 
CATCstVal_Orient_Opposite, 
CATCstVal_Orient_Undefined; 

ExportedByMecModItfCPP extern const CATCstAttrVal 
CATCstVal_Parallelism_Same, 
CATCstVal_Parallelism_Opposite, 
CATCstVal_Parallelism_Parallel, 
CATCstVal_Parallelism_NoParallel; 

ExportedByMecModItfCPP extern const CATCstAttrVal 
CATCstVal_RefAxis_1, 
CATCstVal_RefAxis_2, 
CATCstVal_RefAxis_3; 

ExportedByMecModItfCPP extern const CATCstAttrVal 
CATCstVal_Dimension_x1, 
CATCstVal_Dimension_x2; 

ExportedByMecModItfCPP extern const CATCstAttrVal 
CATCstVal_DimensionAxis_1, 
CATCstVal_DimensionAxis_2; 

ExportedByMecModItfCPP extern const CATCstAttrVal 
CATCstVal_Direction_None, 
CATCstVal_Direction_1, 
CATCstVal_Direction_2, 
CATCstVal_Direction_3; 

ExportedByMecModItfCPP extern const CATCstAttrVal 
CATCstVal_AngSector_1, 
CATCstVal_AngSector_2, 
CATCstVal_AngSector_3, 
CATCstVal_AngSector_4; 

ExportedByMecModItfCPP extern const CATCstAttrVal 
CATCstVal_FsContinuity_1, 
CATCstVal_FsContinuity_2; 

ExportedByMecModItfCPP extern const CATCstAttrVal 
CATCstVal_FsType_1, 
CATCstVal_FsType_2; 

ExportedByMecModItfCPP extern const CATCstAttrVal 
CATCstVal_FsModifiedElement_1, 
CATCstVal_FsModifiedElement_2; 

/**
* Status of a constraint.
* @param CstStatus_True
* Valid.
* @param CstStatus_False
* Invalid.
* @param CstStatus_False_Imp_Attr
* Invalid because specifications.
* @param CstStatus_False_Val_Attr
* Invalid because specifications.
* @param CstStatus_False_Value
* Invalid because value.
* @param CstStatus_False_Usr
* Invalid because user.
* @param CstStatus_False_Broken
* Invalid because missing geometry.
* @param CstStatus_False_VisuMode
* Invalid because geometry cannot be accessed (Visualization Mode).
*/

enum CATCstStatus 
{  
  CstStatus_ERROR = 0,
  CstStatus_True = 1,	        
  CstStatus_False = 2,          
  CstStatus_False_Imp_Attr = 3,
  CstStatus_False_Val_Attr = 4,
  CstStatus_False_Value = 5,  
  CstStatus_False_Usr = 6,   
  CstStatus_False_Broken = 7,
  CstStatus_False_VisuMode = 8
};

/**
* Validity of an element.
* @param CstElemValidity_NoConstraint
* No constraint can be defined.
* @param CstElemValidity_MeasuredOnly
* A driven constraint can be defined.
* @param CstElemValidity_ConstrainedOnly
* A driving constraint can be defined.
* @param CstElemValidity_ConstrainedOrMeasured
* A driving or driven constraint can be defined.
*/

enum CATCstElemValidity
{
  CstElemValidity_NoConstraint = 0,
  CstElemValidity_MeasuredOnly = 1,
  CstElemValidity_ConstrainedOnly = 2,
  CstElemValidity_ConstrainedOrMeasured = 3
};

/**
* @nodoc
* Internal use only.
*/

ExportedByMecModItfCPP extern const CATCstAttrVal 
CATCstVal_Sense12, 
CATCstVal_Sense21, 
CATCstVal_NoSense;

#endif
