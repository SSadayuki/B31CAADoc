/* -*-c++-*-    */
#ifndef CATGSMSweepDef_H_ 
#define CATGSMSweepDef_H_ 


// COPYRIGHT DASSAULT SYSTEMES 1999

/**
  * @CAA2Level L1
  * @CAA2Usage U1
  */

/**
  * Types for explicit sweep.
  * @param CATGSMExplicitSweep_None
  *     Undefined explicit profile swept surface
  * @param CATGSMExplicitSweep_ReferenceSurface
  *     Explicit profile swept surface with optional reference surface
  * @param CATGSMExplicitSweep_TwoGuideCurves
  *     Explicit profile swept surface with two guide curves or
  * @param CATGSMExplicitSweep_PullingDirection
  *     Explicit profile swept surface with pulling direction
  * 
  * @see CATIGSMSweepUnspec, CATIGSMFactory
  */
enum CATGSMExplicitSweepCase { CATGSMExplicitSweep_None             = 0,
                               CATGSMExplicitSweep_ReferenceSurface = 1,
                               CATGSMExplicitSweep_TwoGuideCurves   = 2,
                               CATGSMExplicitSweep_PullingDirection = 3 };

/**
  * Types for sweep circle.
  * @param CATGSMCircularSweep_None
  *     Undefined circular profile swept surface
  * @param CATGSMCircularSweep_ThreeGuides
  *     Circular profile swept surface defined by three guide curves (4 solutions)
  * @param CATGSMCircularSweep_TwoGuidesAndRadius
  *     Circular profile swept surface defined by a center curve and a reference curve (for angles and radius)
  * @param CATGSMCircularSweep_CenterAndAngleCurve
  *     Circular profile swept surface defined by a center curve and a reference curve (for angles and radius)
  * @param CATGSMCircularSweep_CenterAndRadius
  *     Circular profile swept surface defined by a center curve and a radius
  * @param CATGSMCircularSweep_GuideAndTangencyAndRadius
  *     Circular profile swept surface defined by a guide curve, a radius and a tangency surface
  * @param CATGSMCircularSweep_LimitCurveAndTangencyAndRadius
  *     Circular profile swept surface defined by a tangency surface, a radius and a limit curve lying on the tangency surface
  * 
  * @see CATIGSMSweepCircle, CATIGSMFactory
  */ 
enum CATGSMCircularSweepCase { CATGSMCircularSweep_None                      = 0,
                               CATGSMCircularSweep_ThreeGuides               = 2,
                               CATGSMCircularSweep_TwoGuidesAndRadius        = 3,
                               CATGSMCircularSweep_CenterAndAngleCurve       = 5,
                               CATGSMCircularSweep_CenterAndRadius           = 6,
                               CATGSMCircularSweep_TwoGuidesAndTangency      = 7,
                               CATGSMCircularSweep_GuideAndTangencyAndRadius = 8,
                               CATGSMCircularSweep_LimitCurveAndTangencyAndRadius = 9};

/**
  * Types for sweep segment.
  * @param CATGSMLinearSweep_None
  *     Undefined linear profile swept surface 
  * @param CATGSMLinearSweep_TwoGuides 
  *     Linear profile swept surface defined by two guide curves 
  * @param CATGSMLinearSweep_GuideAndAngleCurve
  *     Linear profile swept surface defined by a guide curve and an angle 
  * @param CATGSMLinearSweep_GuideAndMiddle 
  *     Linear profile swept surface defined by a guide curve and a middle curve
  * @param CATGSMLinearSweep_GuideAndRefSurfaceAngle 
  *     Linear profile swept surface defined by a guide curve and an angle from a reference surface
  * @param CATGSMLinearSweep_GuideAndTangencySurface 
  *     Linear profile swept surface defined by a guide curve and a tangency surface
  * @param CATGSMLinearSweep_GuideAndDraftDirection 
  *     Linear profile swept surface defined by a guide curve and a draft direction
  * @param CATGSMLinearSweep_TwoTangencySurfaces 
  *     Linear profile swept surface defined by two tangency surfaces
  * 
  * @see CATIGSMSweepSegment, CATIGSMFactory
  */
enum CATGSMLinearSweepCase { CATGSMLinearSweep_None                    = 0,
                             CATGSMLinearSweep_TwoGuides               = 1,
                             CATGSMLinearSweep_GuideAndAngleCurve      = 2,
                             CATGSMLinearSweep_GuideAndMiddle          = 3,
                             CATGSMLinearSweep_GuideAndRefSurfaceAngle = 4,
                             CATGSMLinearSweep_GuideAndTangencySurface = 5,
                             CATGSMLinearSweep_GuideAndDraftDirection  = 6,
                             CATGSMLinearSweep_TwoTangencySurfaces     = 7 };

/**
  * Linear swept surface with draft direction computation mode.
  * @param CATGSMLinearDraftSweepComp_None
  *     Undefined computation mode
  * @param CATGSMLinearDraftSweepComp_Square
  *     Square sweeping computation mode
  * @param CATGSMLinearDraftSweepComp_ConeEnvelop
  *     Cone envelop computation mode
  * 
  * @see CATIGSMSweepSegment, CATIGSMFactory
  */
enum CATGSMLinearDraftSweepComp { CATGSMLinearDraftSweepComp_None        = 0,
                                  CATGSMLinearDraftSweepComp_Square      = 1,
                                  CATGSMLinearDraftSweepComp_ConeEnvelop = 2 };

/**
  * Length definition for linear swept surfaces (for draft surfaces only, so far).
  * @param CATGSMLinearSweepLengthType_None
  *     Undefined length type
  * @param CATGSMLinearSweepLengthType_Standard
  *     Length of the swept line in the sweeping plane from guide curve
  * @param CATGSMLinearSweepLengthType_FromCurve
  *     No numerical value is required : equivalent to standard length at zero
  * @param CATGSMLinearSweepLengthType_Reference
  *     Up to or from a geometrical reference (a surface)
  * @param CATGSMLinearSweepLengthType_FromExtremum
  *     Only for draft surfaces (case 6) : length computed in the draft
  *     direction from an extremum point on the guide curve (available from V5R8SP3)
  * @param CATGSMLinearSweepLengthType_AlongSurface
  *     Only for draft surfaces (case 6) : length will be used in a way similar to
  *     euclidean parallel curve distance on the swept surface (available from V5R11)
  * 
  * @see CATIGSMSweepSegment, CATIGSMFactory
  */
enum CATGSMLinearSweepLengthType { CATGSMLinearSweepLengthType_None         = 0,
                                   CATGSMLinearSweepLengthType_Standard     = 1,
                                   CATGSMLinearSweepLengthType_FromCurve    = 2,
                                   CATGSMLinearSweepLengthType_Reference    = 3,
                                   CATGSMLinearSweepLengthType_FromExtremum = 4,
                                   CATGSMLinearSweepLengthType_AlongSurface = 5 };

/**
  * Trim option in swept surface definition (for tangent cases).
  * @param CATGSMSweepTrimMode_None
  *     No trim computed or undefined
  * @param CATGSMSweepTrimMode_On
  *     Trim computed
  * 
  * @see CATIGSMSweepSegment, CATIGSMSweepCircle
  */
enum CATGSMSweepTrimMode { CATGSMSweepTrimMode_None             = 0,
                           CATGSMSweepTrimMode_On               = 1 };

/**
  * Fill mode for twisted areas.
  * @param CATGSMSweepNoFill
  *     Twisted areas are not filled
  * @param CATGSMSweepFillAutomatic
  *		Twisted areas are filled with automatic connection mode
  * @param CATGSMSweepFillStandard
  *		Twisted areas are filled with standard connection curve mode
  * @param CATGSMSweepFillSimilar
  *		Twisted areas are filled with similar to guide connection mode
  * 
  * @see CATIGSMSweep
  */
enum CATGSMSweepFillMode {CATGSMSweepNoFill = 0,
						  CATGSMSweepFillAutomatic = 1,
						  CATGSMSweepFillStandard = 2,
						  CATGSMSweepFillSimilar = 3};

#endif
