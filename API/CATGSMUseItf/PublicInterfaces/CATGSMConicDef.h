/* -*-c++-*- */
#ifndef CATGSMConicDef_H
#define CATGSMConicDef_H 

// COPYRIGHT DASSAULT SYSTEMES 1999

/**
  * @CAA2Level L1
  * @CAA2Usage U1
  */

//------------------------------------------------------------------
/**
 * Types for conic curve definition.
 * <b>Role</b>: Defines the different values of the CATGSMConicType to define the 
 * way the Conic Curve is specified:
 * @param StartAndEndTangentsPlusPassingPoint
 * @param StartAndEndTangentsPlusConicParameter
 * @param TangentIntersectPointPlusPassingPoint
 * @param TangentIntersectPointPlusConicParameter
 * @param ThreeIntermediatePassingPoints
 * @param TwoIntermediatePassingPointsPlusOneTangent
 * @param OneIntermediatePassingPointPlusTwoTangents
 * @param UndefinedType
 *
 * @see CATIGSMFactory
 */
enum CATGSMConicType
  {
      StartAndEndTangentsPlusPassingPoint,
      StartAndEndTangentsPlusConicParameter,
      TangentIntersectPointPlusPassingPoint,
      TangentIntersectPointPlusConicParameter,
      ThreeIntermediatePassingPoints,
      TwoIntermediatePassingPointsPlusOneTangent,
      OneIntermediatePassingPointPlusTwoTangents,
      UndefinedType
  };

#endif
