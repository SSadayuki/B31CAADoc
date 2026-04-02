/* -*-c++-*- */
#ifndef CATGSMAxisLineDef_H
#define CATGSMAxisLineDef_H

// COPYRIGHT DASSAULT SYSTEMES 1999

/**
* @CAA2Level L1
* @CAA2Usage U3
*/

/**
 * Type for Axis Line. 
 * <b>Role</b>:  Used for Axis Line creation and modifications
 *   @param CATGSMAxisLineType_MajorAxis
 *     Axis created will be along major axis
 *   @param CATGSMAxisLineType_AlignedWithDirection
 *     Axis created will be aligned with direction specified
 *   @param CATGSMAxisLineType_RevolutionAxis
 *     Axis created will coincide with revolution axis
 *   @param CATGSMAxisLineType_MinorAxis
 *     Axis created will be along minor axis
 *   @param CATGSMAxisLineType_NormalToDirection
 *     Axis created will be normal to direction specified
 *   @param CATGSMAxisLineType_NormalToCircle
 *     Axis created will be along normal to plane of circle
 *   @param CATGSMAxisLineType_NormalToEllipse
 *     Axis created will be along normal to plane of ellipse
 *   @param CATGSMAxisLineType_NormalToOblong
 *     Axis created will be along normal to plane of oblong
 */
  enum CATGSMAxisLineType {CATGSMAxisLineType_None = 0,
    CATGSMAxisLineType_MajorAxis = 1,
    CATGSMAxisLineType_AlignedWithDirection = 1,
    CATGSMAxisLineType_RevolutionAxis = 1,
    CATGSMAxisLineType_MinorAxis  = 2,
    CATGSMAxisLineType_NormalToDirection = 2,
    CATGSMAxisLineType_NormalToCircle = 3,
    CATGSMAxisLineType_NormalToEllipse = 3,
    CATGSMAxisLineType_NormalToOblong = 3
  };

#endif
