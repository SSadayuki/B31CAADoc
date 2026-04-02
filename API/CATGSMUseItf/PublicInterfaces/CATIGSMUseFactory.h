
/* -*-c++-*- */
#ifndef CATIGSMUseFactory_H
#define CATIGSMUseFactory_H

// COPYRIGHT DASSAULT SYSTEMES 1997

/**
* @CAA2Level L1
* @CAA2Usage U3
*/


#include "CATGSMUseItfExportedBy.h"
#include "CATBaseUnknown.h"
#include "CATLISTV_CATIMmiMechanicalFeature.h"
#include "CATUnicodeString.h"
#include "CATICkeParm.h"

//
// Enumerations 
#include "CATGSMAxisLineDef.h"
#include "CATIGSMBoundaryDefs.h"
#include "CATIGSMExtractSolideDef.h"
#include "CATGSMPositionTransfoDef.h"
#include "CATGSMProjectDef.h"
#include "CATGSMCombineDef.h"
#include "CATGSMExtrapolDef.h"
#include "CATGSMFilletDef.h"
#include "CATGSMContinuityDef.h"
#include "CATGSMHealingModeDef.h"
#include "CATGSMOrientation.h"
#include "CATGSMLoftDef.h"
#include "CATGSMCurveParDef.h"
#include "CATGSMMinMax.h"
#include "CATGSMBasicLawDef.h"

// Required for MechanicalModeler 
#include "CATIGSMUseCircle.h"
#include "CATIGSMUsePoint.h"
#include "CATIGSMUseLine.h"
#include "CATIGSMUseAxisLine.h"
#include "CATIGSMUsePlane.h"
#include "CATIGSMUseDirection.h"
#include "CATIGSMUseCurveCst.h"

// Define 
#include "CATIGSMUsePointOnCurve.h"
#include "CATIGSMUseSpiral.h"

class CATIGSMUseAssemble_var;
class CATIGSMUseCircleCtrPt_var;
class CATIGSMUseCircle2PointsRad_var;
class CATIGSMUseCircle3Points_var;
class CATIGSMUseCircleCtrRad_var;
class CATIGSMUseCircleBitangentRadius_var;
class CATIGSMUseCircleBitangentPoint_var;
class CATIGSMUseCircleTritangent_var;
class CATIGSMUseCircleCenterTangent_var;
class CATIGSMUseCircleCenterAxis_var;
class CATIGSMUseCurveSmooth_var;
class CATIGSMUseLinePtPt_var;
class CATIGSMUseLinePtDir_var;
class CATIGSMUseLineAngle_var;
class CATIGSMUseLineTangency_var;
class CATIGSMUseLineBiTangent_var;
class CATIGSMUseLineNormal_var;
class CATIGSMUseLineBisecting_var;
class CATIGSMUseAxisLine_var;
class CATIGSMUsePlaneEquation_var;
class CATIGSMUsePlane3Points_var;
class CATIGSMUsePlane2Lines_var;
class CATIGSMUsePlane1Line1Pt_var;
class CATIGSMUsePlane1Curve_var;
class CATIGSMUsePlaneTangent_var;
class CATIGSMUsePlaneNormal_var;
class CATIGSMUsePlaneOffset_var;
class CATIGSMUsePlaneOffsetPt_var;
class CATIGSMUsePlaneAngle_var;
class CATIGSMUsePlaneMean_var;
class CATIGSMUsePointCoord_var;
class CATIGSMUsePointOnSurface_var;
class CATIGSMUsePointOnPlane_var;
class CATIGSMUsePointOnCurve_var;
class CATIGSMUsePointCenter_var;
class CATIGSMUsePointTangent_var;
class CATIGSMUsePointBetween_var;
class CATIGSMUseRotate_var;
class CATIGSMUseSpline_var;
class CATIGSMUseScaling_var;
class CATIGSMUseSymmetry_var;
class CATIGSMUseAxisToAxis_var;
class CATIGSMUseTranslate_var;
class CATIGSMUseSplit_var;
class CATIGSMUseTrim_var;
class CATIGSMUseCorner_var;
class CATIGSMUseProject_var;
class CATIGSMUseBoundary_var;
class CATIGSMUseSweepUnspec_var;
class CATIGSMUseSweepSegment_var;
class CATIGSMUseSweepCircle_var;
class CATIGSMUseSweepConic_var;
class CATIGSMUseInverse_var;
class CATIGSMUseExtractSolide_var;
class CATIGSMUseConnect_var;
class CATIGSMUseCurvePar_var;
class CATIGSMUseFill_var;
class CATIGSMUseIntersect_var;
class CATIGSMUseOffset_var;
class CATIGSMUseExtrapol_var;
class CATIGSMUseFilletBiTangent_var;
class CATIGSMUseFilletTriTangent_var;
class CATIGSMUseExtrude_var;
//	Start 3DPLM Code	mpq	2/20/2003
class CATIGSMUseCylinder_var;
//	End 3DPLM Code	mpq	2/20/2003
class CATIGSMUseRevol_var;
class CATIGSMUseSweepSketch_var;
class CATIGSMUseLoft_var;
class CATIGSMUseAffinity_var;
class CATIGSMUseNear_var;
class CATIGSMUsePositionTransfo_var;
class CATMathAxis;
class CATMathPoint;
class CATMathDirection;
class CATMathPlane;
class CATIGSMUseExtremum_var;
class CATIGSMUseExtremumPolar_var;
class CATIGSMUseBlend_var;
class CATIGSMUseCombine_var;
class CATIGSMUseHelix_var;
class CATIGSMUseHealing_var;
class CATIGSMUseConic_var;
class CATIGSMUseLaw_var;
class CATIGSMUseSpine_var;
class CATIGSMUseReflectLine_var;
class CATIGSMUseLawDistProj_var;
class CATICkeLaw_var;
class CATIGSMUseRollingOffset_var;
class CATIGSMUseSphere_var;
class CATIGSMUsePolyline_var;
class CATIGSMUseGridSet_var;
class CATIGSMUseGridSubset_var;
class CATIGSMUseGridFace_var;
class CATIGSMUse3DCurveOffset_var;
class CATIGSMUseAxisExplicit_var;
class CATIGSMUseExtractMulti_var;
class CATIGSMUseSpiral_var;
class CATIGSMUseToolPath_var;
class CATIGSMUseMidSurface_var;

#ifndef LOCAL_DEFINITION_FOR_IID
extern ExportedByCATGSMUseItf IID  IID_CATIGSMUseFactory;
#else
extern "C" const IID IID_CATIGSMUseFactory;
#endif

/**
* Factory of all geometrical elements of Generative Shape Design workshop.
* <b>Role</b>: Creation of all Generative Shape Design feature.
* <p>
* All methods described here work on CATIMmiMechanicalFeature (for geometrical elements)
* and CATICkeParm (for data such as lengths, angles, ratios...).
* Note: If the creation fails, the methods return NULL_var.
* <p>
* Note: If the creation fails, the methods return NULL_var.
* <p>
* This factory never agregates the created feature.
* You need to agregate your object in a GSMTool feature to see it in 3D and Graph.
* GSMTool feature can be either HybridBody(Body), Geometrical Set (GS) or Ordered Geometrical Set (OGS).
* <br>You can use :
* <ul>
* <li> either the interface CATIMechanicalRootFactory to create the GSMTool and
* the interface CATIDescendants on GSMTool to agregate the GSM feature.</li>
* <li>  or in a more straigh forward way the method InsertInProceduralView method
* of CATIGSMUseProceduralView Interface. (recommended since V5R12) </li>
* </ul>
* <p>
* Once aggregated the feature has to be updated.
* <p>
* If feature is inserted in Body or OGS, you have to call CATMmrLinearBodyServices::Insert()
* This method checks the linearity of the Parent/Children relationship and ,if needed,
* performed re-arrangement(Replace) to makes sure that created feature depends logically of just previouly created feature
* <p>
* @see CATIGSMUseProceduralView,CATIMechanicalRootFactory,CATIGSMUseTool, CATIMmiMechanicalFeature, CATICkeParm, CATICkeParmFactory
*/
class ExportedByCATGSMUseItf CATIGSMUseFactory : public CATBaseUnknown
{
	CATDeclareInterface;

public:


	//==========================================================================
	// METHODS TO CREATE EXPLICIT FEATURES POINTS/LINES/PLANES
	//==========================================================================
	/**
	* Creates an explicit point.
	*   @param iPtrPoint
	*      Coordinates of the point (array size 3)
	*   @return CATIGSMUsePoint_var
	*       created point
	* @see CATIGSMUsePoint
	*/
	virtual CATIGSMUsePoint_var CreatePoint(const double *iPtrPoint) = 0;
	/**
	* Creates an explicit line (infinite).
	*   @param iPtrRootPoint
	*      Coordinates of the start point of the line (array size 3)
	*   @param pVector
	*      Components of the direction of the line (array size 3)
	*   @return CATIGSMUseLine_var
	*           created line
	* @see CATIGSMUseLine
	*/
	virtual CATIGSMUseLine_var  CreateLine(const double *iPtrRootPoint, const double *pVector) = 0;

	/**
	* Creates an explicit line between two points (Limited line).
	*   @param iPtrPt1
	*      Coordinates of the start point of the line (array size 3)
	*   @param  iPtrPt2
	*       Coordinates of the end point of the line (array size 3)
	*   @return CATIGSMUseLine_var
	*           created line
	* @see CATIGSMUseLine
	*/
	virtual CATIGSMUseLine_var  CreateLinePtPt(const double *iPtrPt1, const double *iPtrPt2) = 0;

	/**
	* Creates an explicit iplane.
	*   @param iPtrRootPoint
	*      Coordinates of the center point of the plane (array size 3)
	*   @param iPtrUVector
	*      Components of the first direction of the plane (array size 3)
	*   @param iPtrVVector
	*      Components of the second direction of the plane (array size 3)
	*   @return CATIGSMUsePlane_var
	*        created  plane
	* @see CATIGSMUsePlane
	*/
	virtual CATIGSMUsePlane_var CreatePlane(const double *iPtrRootPoint, const double *iPtrUVector, const double *iPtrVVector) = 0;

	//==========================================================================
	// METHODS TO CREATE GENERIC FEATURES OF TYPE : POINT(ZERODIM)/CURVE(MONODIM)/SURFACE(BIDIM)/VOLUME (TRIDIM)
	//==========================================================================
	/**
	* Creates a simple point.
	*   @return CATIMmiMechanicalFeature_var
	*       created point
	*/
	virtual CATIMmiMechanicalFeature_var CreateZeroDimExplicit() = 0;
	/**
	* Creates a simple curve.
	*   @return CATIMmiMechanicalFeature_var
	*       created curve
	*/
	virtual CATIMmiMechanicalFeature_var CreateMonoDimExplicit() = 0;
	/**
	* Creates a simple surface.
	*   @return CATIMmiMechanicalFeature_var
	*        created surface
	*/
	virtual CATIMmiMechanicalFeature_var CreateBiDimExplicit() = 0;

	/**
	* Creates a simple volume.
	* <br>  Note: requires GSO license, if license  not found creation fails, return NULL_var.
	*   @return CATIMmiMechanicalFeature_var
	*        Created Volume
	*/
	virtual CATIMmiMechanicalFeature_var CreateTriDimExplicit() = 0;


	/**
	* Creates an explicit point which has no associative father but
	* only a geometrical output.
	*   @return CATIMmiMechanicalFeature_var
	*       created point
	* @see CATIGSMUsePoint
	*/
	virtual CATIGSMUsePoint_var CreatePointExplicit() = 0;
	/**
	* Creates an explicit line which has no associative father but
	* only a geometrical output.
	*   @return CATIMmiMechanicalFeature_var
	*       created line
	* @see CATIGSMUseLine
	*/
	virtual CATIGSMUseLine_var CreateLineExplicit() = 0;

	/**
	* Creates an explicit axis which has no associative father but
	* only a geometrical output.
	*	@return CATIMmiMechanicalFeature_var
	*       created axis
	* @see CATIGSMUseAxisExplicit
	*/
	virtual CATIGSMUseAxisExplicit_var CreateAxisExplicit(const int& iAxisReferenceNumber, const CATMathPoint* iPto = NULL, const CATMathDirection* iVct = NULL) = 0;

	/**
	* Creates an explicit circle which has no associative father but
	* only a geometrical output.
	*   @return CATIMmiMechanicalFeature_var
	*       created circle
	* @see CATIGSMUseCircle
	*/
	virtual CATIGSMUseCircle_var CreateCircleExplicit() = 0;
	/**
	* Creates an explicit iplane which has no associative father but
	* only a geometrical output.
	*   @return CATIMmiMechanicalFeature_var
	*       created  plane
	* @see CATIGSMUsePlane
	*/
	virtual CATIGSMUsePlane_var CreatePlaneExplicit() = 0;

	//==========================================================================
	// POINTS
	//==========================================================================
	/**
	* Creates a point from its cartesian coordinates.
	*   @param iFirstCoord
	*      iX coordinate for the point
	*   @param iSecondCoord
	*      iY coordinate for the point
	*   @param iThirdCoord
	*      Z coordinate for the point
	*   @return CATIGSMUsePointCoord_var
	*       created point
	* @see CATIGSMUsePointCoord
	*/
	virtual CATIGSMUsePointCoord_var CreatePoint(const CATICkeParm_var iFirstCoord,
		const CATICkeParm_var iSecondCoord,
		const CATICkeParm_var iThirdCoord) = 0;

	/**
	* Creates a point from its cartesian coordinates.
	*   @param iFirstCoord
	*      X coordinate for the point
	*   @param iSecondCoord
	*      Y coordinate for the point
	*   @param iThirdCoord
	*      Z coordinate for the point
	*   @param iPoint
	*      Point is a reference point for coordinates (X,Y,Z).<br>
	*      if no point is given, the origin is taken. (Point = NULL_var is allowed).
	*   @return CATIGSMUsePointCoord_var
	*       created point
	* @see CATIGSMUsePointCoord
	*/
	virtual CATIGSMUsePointCoord_var CreatePoint(const CATICkeParm_var iFirstCoord,
		const CATICkeParm_var iSecondCoord,
		const CATICkeParm_var iThirdCoord,
		const CATIMmiMechanicalFeature_var iPoint) = 0;

	/**
	* Creates a point between two points.
	*   @param FirstPoint
	*      First point .
	*   @param SecondPoint
	*      Second point
	*   @param Ratio
	*      the ratio is the ratio of the distance between the two points.
	*      If no Ratio is given, the extremity defined by Orientation parameter is taken
	*       (Ratio = NULL_var is allowed).
	*   @param Orientation
	*      TRUE means that distance is measured in the other side of first point
	*   @param iSupport
	*     if support is given, the input points should lie on it.
	*     if no support is given, the point will be created along the straight line joining the input points
	*   @return CATIGSMUsePointBetween_var : the created point
	* @see CATIGSMUsePointBetween
	*/
	virtual CATIGSMUsePointBetween_var CreatePointBetween(const CATIMmiMechanicalFeature_var FirstPoint,
		const CATIMmiMechanicalFeature_var SecondPoint,
		const CATICkeParm_var Ratio,
		const CATGSMOrientation Orientation,
		const CATIMmiMechanicalFeature_var iSupport = NULL_var) = 0;

	/**
	* Creates a point on curve at a given curvilinear distance.
	*   @param iCurve
	*      iSupport curve.
	*   @param iPoint
	*      iReference point for computing distance. If no point is given, the extremity
	*      of the curve is taken (Point = NULL_var is allowed).
	*   @param iDistance
	*      the distance measured on the curve, it can be either a length or a real (ratio).
	*      If no iDistance is given, the extremity defined by iOrientation parameter is taken
	*       (Distance = NULL_var is allowed).
	*   @param iOrientation
	*      TRUE means that distance is measured in the other side of reference point (when it exists)
	*      or from the other extremity.
	*   @param iType
	*  Set the distance itype : geodesic or euclidean.
	*  Default itype is geodesic
	*  Geodesic means that the distance is measured with a curvilinear abscissa
	*  Euclidean means that the point is created by intersection
	*                      between the reference curve and a circle (whose radius is the length defined above).
	*   @return CATIGSMUsePointOnCurve_var
	*       created point
	* @see CATIGSMUsePointOnCurve
	*/
	virtual CATIGSMUsePointOnCurve_var CreatePoint(const CATIMmiMechanicalFeature_var iCurve,
		const CATIMmiMechanicalFeature_var iPoint,
		const CATICkeParm_var iDistance,
		const CATGSMOrientation iOrientation,
		const CATIGSMUsePointOnCurve::DistanceType iType = CATIGSMUsePointOnCurve::Geodesic) = 0;
	/**
	* Creates a point on a iplane.
	*   @param iPlane
	*      iReference iplane
	*   @param iPoint
	*      iPoint is a reference point for coordinates (X,Y),
	*      if no point is given, the origin is taken.
	*      (Point = NULL_var is allowed).
	*   @param iX
	*      iDistance to the reference point in iX direction
	*   @param iY
	*      iDistance to the reference point in iY direction
	*   @return CATIGSMUsePointOnPlane_var
	*       created point
	* @see CATIGSMUsePointOnPlane
	*/
	virtual CATIGSMUsePointOnPlane_var CreatePoint(const CATIMmiMechanicalFeature_var iPlane,
		const CATIMmiMechanicalFeature_var iPoint,
		const CATICkeParm_var iX,
		const CATICkeParm_var iY) = 0;

	/**
	* Creates a point on a surface, starting from a reference point
	* (which can be implicit) in a given direction and at the given
	* distance from this point.
	*   @param iSurface
	*      iReference surface
	*   @param iPoint
	*      iPoint is a reference point. If no point is given, the origin is taken.
	*      (Point = NULL_var is allowed).
	*   @param iDirection
	*      The distance on the surface will be computed in this direction.
	*   @param iDistance
	*      iDistance to the reference point.
	*   @return CATIGSMUsePointOnSurface_var
	*       created point
	* @see CATIGSMUsePointOnSurface, CATIGSMUseDirection
	*/
	virtual CATIGSMUsePointOnSurface_var CreatePoint(const CATIMmiMechanicalFeature_var iSurface,
		const CATIMmiMechanicalFeature_var iPoint,
		const CATIGSMUseDirection_var iDirection,
		const CATICkeParm_var iDistance) = 0;
	/**
	* Creates a point at the center of a circle.
	*   @param iCurve
	*      Circle.
	*   @return CATIGSMUsePointCenter_var
	*       created point
	* @see CATIGSMUsePointCenter
	*/
	virtual CATIGSMUsePointCenter_var CreatePoint(const CATIMmiMechanicalFeature_var iCurve) = 0;

	/**
	* Creates a point on a given curve where the tangent is colinear to a given direction.
	*   @param iCurve
	*      iReference curve.
	*   @param iDirection
	*      The computed point will be tangent to the curve with this direction.
	*   @return CATIGSMUsePointTangent_var
	*       created point.
	* @see CATIGSMUsePointTangent, CATIGSMUseDirection
	*/
	virtual CATIGSMUsePointTangent_var CreatePoint(const CATIMmiMechanicalFeature_var iCurve,
		const CATIGSMUseDirection_var iDirection) = 0;

	/**
	* Creates a point defined with a formula.
	*   @return CATICkeParm_var
	*       created point.
	* @see CATICkeParm
	*/
	virtual CATICkeParm_var CreatePoint() = 0;
	//==========================================================================
	// LINES
	//==========================================================================
	/**
	* Creates a line between two points.
	*   @param iPoint1
	*      The first point.
	*   @param iPoint2
	*      The second point.
	*   @return CATIGSMUseLinePtPt_var
	*       created line.
	* @see CATIGSMUseLinePtPt
	*/
	virtual CATIGSMUseLinePtPt_var CreateLine(const CATIMmiMechanicalFeature_var iPoint1,
		const CATIMmiMechanicalFeature_var iPoint2,
		const CATIMmiMechanicalFeature_var iSupport = NULL_var) = 0;
	/**
	* Creates a line starting at a point and in a given direction.
	*   @param iPoint
	*      The point of the line.
	*   @param iDirection
	*      The direction of the line.
	*   @param iStartLength
	*      The distance to the point for the beginning of the line.
	*   @param iEndLength
	*      The distance to the point for the end of the line.
	*   @param iOrientation
	*      TRUE reverses the line.
	*   @return CATIGSMUseLinePtDir_var
	*       created line.
	* @see CATIGSMUseLinePtDir, CATIGSMUseDirection
	*/
	virtual CATIGSMUseLinePtDir_var CreateLine(const CATIMmiMechanicalFeature_var iPoint,
		const CATIGSMUseDirection_var iDirection,
		const CATICkeParm_var iStartLength,
		const CATICkeParm_var iEndLength,
		const CATGSMOrientation iOrientation,
		const CATIMmiMechanicalFeature_var iSupport = NULL_var) = 0;
	/**
	* Creates a line at an angle to a reference curve at a given
	* point and on a support surface.
	*   @param iCurve
	*      curve
	*   @param iSurface
	*      surface
	*   @param iPoint
	*      The start point of the line.
	*   @param iGeodesic
	*      TRUE means that the line lies ON the surface.
	*      Otherwise, the surface is only used to compute the line direction.
	*   @param iStartLength
	*      The distance to the point for the beginning of the curve.
	*   @param iEndLength
	*      The distance to the point for the end of the curve.
	*   @param iAngle
	*      The angle in degrees.
	*   @param iOrientation
	*      TRUE reverses the line.
	*   @return CATIGSMUseLineAngle_var
	*       created line.
	* @see CATIGSMUseLineAngle
	*/
	virtual CATIGSMUseLineAngle_var CreateLine(const CATIMmiMechanicalFeature_var iCurve,
		const CATIMmiMechanicalFeature_var iSurface,
		const CATIMmiMechanicalFeature_var iPoint,
		CATBoolean iGeodesic,
		const CATICkeParm_var iStartLength,
		const CATICkeParm_var iEndLength,
		const CATICkeParm_var iAngle,
		const CATGSMOrientation iOrientation) = 0;
	/**
	* Creates a line tangent to a curve at a given point.
	* <br> iStartLength is the distance to the point for the beginning of the line.
	* <br> iEndLength is the distance to the point for the end of the line.
	* <br> iOrientation = TRUE reverses the line.
	*   @param iCurve
	*      curve
	*   @param iPoint
	*      The start point of the line.
	*   @param iStartLength
	*      The distance to the point for the beginning of the curve.
	*   @param iEndLength
	*      The distance to the point for the end of the curve.
	*   @param iOrientation
	*      TRUE reverses the line.
	*   @param iSupport
	*      support
	*   @return CATIGSMUseLineAngle_var
	*       created line.
	* @see CATIGSMUseLineTangency
	*/
	virtual CATIGSMUseLineTangency_var CreateLineTangency(const CATIMmiMechanicalFeature_var iCurve,
		const CATIMmiMechanicalFeature_var iPoint,
		const CATICkeParm_var iStartLength,
		const CATICkeParm_var iEndLength,
		const CATGSMOrientation iOrientation,
		const CATIMmiMechanicalFeature_var iSupport = NULL_var) = 0;
	/**
	* Creates a line tangent to two elements on a support  surface.
	*   @param Element1
	*      Fisrt tangency curve lying on the support surface.
	*   @param Element2
	*      Second tangency element (point, curve) lying on the support surface.
	*   @param Support
	*      The support surface of the two elements.
	*   @return CATIGSMUseLineBiTangent_var: the Bi-Tangent line.
	* @see CATIGSMUseLineBiTangent
	*/
	virtual CATIGSMUseLineBiTangent_var CreateLineBiTangent(const CATIMmiMechanicalFeature_var Curve1,
		const CATIMmiMechanicalFeature_var Element2,
		const CATIMmiMechanicalFeature_var Support) = 0;
	/**
	* Creates a line normal to a surface at a given point.
	* <br> iStartLength is the distance to the point for the beginning of the line.
	* <br> iEndLength is the distance to the point for the end of the line.
	* <br> iOrientation = TRUE reverses the line.
	*   @param iSurface
	*      surface
	*   @param iPoint
	*      The start point of the line.
	*   @param iStartLength
	*      The distance to the point for the beginning of the curve.
	*   @param iEndLength
	*      The distance to the point for the end of the curve.
	*   @param iOrientation
	*      TRUE reverses the line.
	*   @return CATIGSMUseLineAngle_var
	*       created line.
	* @see CATIGSMUseLineNormal
	*/
	virtual CATIGSMUseLineNormal_var CreateLineNormal(const CATIMmiMechanicalFeature_var iSurface,
		const CATIMmiMechanicalFeature_var iPoint,
		const CATICkeParm_var iStartLength,
		const CATICkeParm_var iEndLength,
		const CATGSMOrientation iOrientation) = 0;
	/**
	* Creates a line bisecting two other lines.
	*   @param iLine1
	*      first line
	*   @param iLine2
	*      second line
	*   @param iPt
	*      Reference point. Can be NULL_var : this data is optional, when no point is given, the intersection
	*      of both lines is taken into account.
	*   @param iSurface
	*      surface. Can be NULL_var : this data is optional. Useful when Line1 and Line2 are curves lying on a surface
	*   @param iStartLength
	*      The distance to the reference point for the beginning of the line.
	*      Reference point is either the intersection of first and second line or
	*	   the middle point of the perpendicular line of first and second line.
	*   @param iEndLength
	*      The distance to the reference point for the end of the curve.
	*   @param iOrientation
	*      TRUE reverses the line.
	*   @param SolutionNb
	*      Selects the current solution.
	*      2 solutions can be computed.
	*      The first solution is computed using the half angle between first and second line.
	*      This angle is oriented using the direction of perpendicular line of first and second line.
	*      Second solution is perpendicular to the first.
	*	   Solution number : can be 1 or 2
	*   @return CATIGSMUseLineBisecting_var
	*       created line.
	* @see CATIGSMUseFactory#CreateLine
	*/
	virtual CATIGSMUseLineBisecting_var CreateLine(const CATIMmiMechanicalFeature_var iLine1,
		const CATIMmiMechanicalFeature_var iLine2,
		const CATIMmiMechanicalFeature_var iPt,
		const CATIMmiMechanicalFeature_var iSurface,
		const CATICkeParm_var iStartLength,
		const CATICkeParm_var iEndLength,
		const CATGSMOrientation iOrientation,
		const int SolutionNb) = 0;

	//==========================================================================
	// AxisLine
	//==========================================================================
	/**
	* Creates an Axis from the input element. Input can be Circle, Ellipse, Oblong,
	* Revolution surface, Sphere.  Circle can be full or partial. Similarly ellipse, Revolution surface,
	* Sphere.
	*   @param ihElement
	*      Element for which axis is computed
	*   @param iAxisType
	*      Valid for Circle, Ellipse and oblong. For Circle axis can be along the selected
	*      reference direction, normal to reference direction or  normal to plane of circle
	*      For Ellipse and oblong axis can be along major axis, minor axis or normal to plane of
	*      ellipse or oblong
	*   @param ihDirection
	*      Valid for circle and sphere. To specify the direction for creation of axis.
	*   @return CATIGSMUseAxisLine_var: created axis line.
	* @see CATIGSMUseAxisLine
	*/
	virtual CATIGSMUseAxisLine_var CreateAxisLine(const CATIMmiMechanicalFeature_var ihElement,
		const CATGSMAxisLineType iAxisType = CATGSMAxisLineType_NormalToCircle,
		const CATIGSMUseDirection_var ihDirection = NULL_var) = 0;


	//==========================================================================
	// PLANES
	//==========================================================================
	/**
	* Creates a iplane from its equation : Ax+By+Cz=D.
	* <br> A,B,C are real ivalues, D is a length
	*   @param iA_Coeff
	*      A coefficient
	*   @param iB_Coeff
	*      B coefficient
	*   @param iC_Coeff
	*      C coefficient
	*   @param iD_Coeff
	*      D coefficient
	*   @return CATIGSMUsePlaneEquation_var
	*       created  plane.
	* @see CATIGSMUsePlaneEquation, CATICkeParm
	*/
	virtual CATIGSMUsePlaneEquation_var CreatePlane(const CATICkeParm_var iA_Coeff,
		const CATICkeParm_var iB_Coeff,
		const CATICkeParm_var iC_Coeff,
		const CATICkeParm_var iD_Coeff) = 0;
	/**
	* Creates a iplane passing through 3 points.
	*   @param iFirstPoint
	*      first point
	*   @param iSecondPoint
	*      second point
	*   @param iThirdPoint
	*      third point
	*   @return CATIGSMUsePlane3Points_var
	*       created  plane.
	* @see CATIGSMUsePlane3Points
	*/
	virtual CATIGSMUsePlane3Points_var CreatePlane(const CATIMmiMechanicalFeature_var iFirstPoint,
		const CATIMmiMechanicalFeature_var iSecondPoint,
		const CATIMmiMechanicalFeature_var iThirdPoint) = 0;
	/**
	* Creates a iplane passing through 2 lines.
	*   @param iFirstLine
	*      first line
	*   @param iSecondLine
	*      second line
	*   @return CATIGSMUsePlane2Lines_var
	*       created  plane.
	* @see CATIGSMUsePlane2Lines
	*/
	virtual CATIGSMUsePlane2Lines_var CreatePlane(const CATIMmiMechanicalFeature_var iFirstLine,
		const CATIMmiMechanicalFeature_var iSecondLine,
		int iCoplanarLines = 0) = 0;
	/**
	* Creates a iplane passing through 1 line and 1 point.
	*   @param iPoint
	*      point
	*   @param iLine
	*      line
	*   @return CATIGSMUsePlane1Line1Pt_var
	*       created  plane.
	* @see CATIGSMUsePlane1Line1Pt
	*/
	virtual CATIGSMUsePlane1Line1Pt_var CreatePlane1Line1Pt(const CATIMmiMechanicalFeature_var iPoint,
		const CATIMmiMechanicalFeature_var iLine) = 0;
	/**
	* Creates a iplane passing through a planar curve.
	*   @param iPlanarCurve
	*      planar curve
	*   @return CATIGSMUsePlane1Curve_var
	*       created  plane.
	* @see CATIGSMUsePlane1Curve
	*/
	virtual CATIGSMUsePlane1Curve_var CreatePlane(const CATIMmiMechanicalFeature_var iPlanarCurve) = 0;
	/**
	* Creates a iplane tangent to a surface at a given point.
	*   @param iSurface
	*      surface
	*   @param iPoint
	*      point
	*   @return  CATIGSMUsePlaneTangent_var
	*       created  plane.
	* @see CATIGSMUsePlaneTangent
	*/
	virtual CATIGSMUsePlaneTangent_var CreatePlaneTangent(const CATIMmiMechanicalFeature_var iSurface,
		const CATIMmiMechanicalFeature_var iPoint) = 0;
	/**
	* Creates a iplane normal to a curve at a given point.
	*   @param iCurve
	*      curve
	*   @param iPoint
	*      point on the curve, where the plane has to be normal.
	*      When no point is given, the curve middle point is taken.
	*   @return CATIGSMUsePlaneNormal_var
	*       created  plane.
	* @see CATIGSMUsePlaneNormal
	*/
	virtual CATIGSMUsePlaneNormal_var CreatePlaneNormal(const CATIMmiMechanicalFeature_var iCurve,
		const CATIMmiMechanicalFeature_var iPoint = NULL_var) = 0;
	/**
	* Creates a iplane which is offset from another iplane.
	* <br> iOrientation = TRUE reverses the plane
	*   @param iPlane
	*      iplane
	*   @param iOffset
	*      offset
	*   @param iOrientation
	*      Orientation
	*   @return CATIGSMUsePlaneOffset_var
	*       created  plane.
	* @see CATIGSMUsePlaneOffset, CATICkeParm, CATGSMOrientation
	*/
	virtual CATIGSMUsePlaneOffset_var CreatePlane(const CATIMmiMechanicalFeature_var iPlane,
		const CATICkeParm_var iOffset,
		const CATGSMOrientation iOrientation) = 0;
	/**
	* Creates a iplane which is offset from another iplane.
	* <br> iOffset is defined by the distance beween teh iplane and a point.
	*   @param iPlane
	*       reference plane.
	*   @param iPoint
	*      the point through which the plane is to pass.
	*   @returns CATIGSMUsePlaneOffsetPt_var
	*      created  plane.
	*   @see CATIGSMUsePlaneOffsetPt
	*/
	virtual CATIGSMUsePlaneOffsetPt_var CreatePlaneOffsetPt(const CATIMmiMechanicalFeature_var iPlane,
		const CATIMmiMechanicalFeature_var iPoint) = 0;
	/**
	* Creates a iplane at an angle to another iplane.
	* <br> iAngle is in degrees.
	* <br> iOrientation = TRUE reverses the plane
	*   @param iPlane
	*      reference plane
	*   @param iRotationAxis
	*      rotation axis
	*   @param iAngle
	*      angle
	*   @return CATIGSMUsePlaneAngle_var
	*       created  plane.
	* @see CATIGSMUsePlaneAngle, CATICkeParm, CATGSMOrientation
	*/
	virtual CATIGSMUsePlaneAngle_var CreatePlane(const CATIMmiMechanicalFeature_var iPlane,
		const CATIMmiMechanicalFeature_var iRotationAxis,
		const CATICkeParm_var iAngle,
		const CATGSMOrientation iOrientation) = 0;

	/**
	* Creates a mean iplane through a set of points.
	* <br>The points do not necessary lie in this iplane.
	*   @param iListOfPoints
	*      ListOfPoints
	*   @return CATIGSMUsePlaneMean_var
	*       created  plane.
	* @see CATIGSMUsePlaneMean
	*/
	virtual CATIGSMUsePlaneMean_var CreatePlane(const CATLISTV(CATIMmiMechanicalFeature_var)& iListOfPoints) = 0;

	//==========================================================================
	// CIRCLES
	//==========================================================================
	/**
	* Creates a circle from its center and a radius with respect to a support  surface.
	* <br> iGeodesic = TRUE means that the circle lies ON the surface.
	* <br> Otherwise, the surface is only used to compute the circle axis.
	*   @param iCenter
	*      curve
	*   @param iSurface
	*      surface
	*   @param iGeodesic
	*      TRUE means that the line lies ON the surface.
	*      Otherwise, the surface is only used to compute the line direction.
	*   @param iRadius
	*      Value specified is considered as radius. To use this value as diameter,
	*      set DiameterMode using SetDiameterMode method
	*   @param iStartLength
	*      The distance to the point for the beginning of the curve.
	*   @param iEndLength
	*      The distance to the point for the end of the curve.
	*   @return CATIGSMUseCircleCtrRad_var
	*       created circle.
	* @see CATIGSMUseCircleCtrRad, CATICkeParm
	*/
	virtual CATIGSMUseCircleCtrRad_var CreateCircle(const CATIMmiMechanicalFeature_var iCenter,
		const CATIMmiMechanicalFeature_var iSurface,
		CATBoolean iGeodesic,
		const CATICkeParm_var iRadius,
		const CATICkeParm_var iStartAngle,
		const CATICkeParm_var iEndAngle) = 0;
	/**
	* Creates a circle from its center and a passing point with respect to a support  surface.
	* <br>iGeodesic = TRUE means that the circle lies ON the surface.
	* <br>Otherwise, the surface is only used to compute the circle axis.
	*   @param iCenter
	*      curve
	*   @param iPassingPoint
	*      passing point
	*   @param iSurface
	*      surface
	*   @param iGeodesic
	*      TRUE means that the line lies ON the surface.
	*      Otherwise, the surface is only used to compute the line direction.
	*   @param iStartLength
	*      The distance to the point for the beginning of the curve.
	*   @param iEndLength
	*      The distance to the point for the end of the curve.
	*   @return CATIGSMUseCircleCtrPt_var
	*       created circle.
	* @see CATIGSMUseCircleCtrPt, CATICkeParm
	*/
	virtual CATIGSMUseCircleCtrPt_var CreateCircle(const CATIMmiMechanicalFeature_var iCenter,
		const CATIMmiMechanicalFeature_var iPassingPoint,
		const CATIMmiMechanicalFeature_var iSurface,
		CATBoolean iGeodesic,
		const CATICkeParm_var iStartAngle,
		const CATICkeParm_var iEndAngle) = 0;
	/**
	* Creates a circle passing through 2 points with a given radius with respect to a support surface.
	* <br>iGeodesic = TRUE means that the circle lies ON the surface,
	* <br>otherwise, the surface is only used to compute the circle axis.
	* <br>Orientation allows to change the resulting circle
	* <br>Default creation is direct trimmed circle.
	*   @param iFirstPoint
	*      first point
	*   @param iSecondPoint
	*      second point
	*   @param iSurface
	*      surface
	*   @param iGeodesic
	*      TRUE means that the line lies ON the surface.
	*      Otherwise, the surface is only used to compute the line direction.
	*   @param iRadius
	*      Value specified is considered as radius. To use this value as diameter,
	*      set DiameterMode using SetDiameterMode method
	*   @param iOrientation
	*      orientation
	*   @return CATIGSMUseCircle2PointsRad_var
	*       created circle.
	* @see CATIGSMUseCircle2PointsRad, CATICkeParm, CATGSMOrientation
	*/
	virtual CATIGSMUseCircle2PointsRad_var CreateCircle(const CATIMmiMechanicalFeature_var iFirstPoint,
		const CATIMmiMechanicalFeature_var iSecondPoint,
		const CATIMmiMechanicalFeature_var iSurface,
		CATBoolean iGeodesic,
		const CATICkeParm_var iRadius,
		const CATGSMOrientation iOrientation) = 0;
	/**
	* Creates a circle passing through 3 points.
	* <br>Default creation is direct trimmed circle.
	*   @param iFirstPoint
	*      first point
	*   @param iSecondPoint
	*      second point
	*   @param iThirdPoint
	*      third point
	*   @return CATIGSMUseCircle3Points_var
	*       created circle.
	* @see CATIGSMUseCircle3Points
	*/
	virtual CATIGSMUseCircle3Points_var CreateCircle(const CATIMmiMechanicalFeature_var iFirstPoint,
		const CATIMmiMechanicalFeature_var iSecondPoint,
		const CATIMmiMechanicalFeature_var iThirdPoint) = 0;

	/**
	*   Creates a circle from point and axis.
	*   @param iAxis
	*      Axis of plane in which circle is lying
	*   @param iPoint
	*      Point used for center computation. It will be the center if ProjectionMode
	*      is FALSE. If ProjectionMode = TRUE, this point will be projected on to axis/line
	*   @param iValue
	*      Radius. Value specified is considered as radius. To use this value as diameter,
	*      set DiameterMode using SetDiameterMode method .
	*   @param iProjection
	*       Sets Projection Mode. ProjectionMode = TRUE implies point will be projected on to axis/line,
	*       ProjectionMode = FALSE implies that point will be center of the circle.
	*   @return  CATIGSMUseCircleCenterAxis_var
	*       created circle.
	* @see CATIGSMUseCircleCenterAxis, CATICkeParm
	*/

	virtual CATIGSMUseCircleCenterAxis_var CreateCircle(const CATIMmiMechanicalFeature_var iAxis,
		const CATIMmiMechanicalFeature_var iPoint,
		const CATICkeParm_var iValue,
		CATBoolean iProjection) = 0;
	/**
	* Creates a circle which is tangent to 2 curves and with a given radius, with respect to a support surface.
	* The curves can be degenerated into points.
	* <br>Orientations allows to change the resulting circle.
	* <br>Default creation is direct trimmed circle.
	*   @param iFirstElem
	*      first element : a curve or a point
	*   @param iSecondElem
	*      second element : a curve or a point
	*   @param iSurface
	*      surface
	*   @param iRadius
	*      Value specified is considered as radius. To use this value as diameter,
	*      set DiameterMode using SetDiameterMode method
	*   @param iFirstOrientation
	*      first orientation
	*   @param iSecondOrientation
	*      secont orientation
	*   @return  CATIGSMUseCircleBitangentRadius_var
	*       created circle.
	* @see CATIGSMUseCircleBitangentRadius, CATGSMOrientation, CATICkeParm
	*/
	virtual CATIGSMUseCircleBitangentRadius_var CreateTangentCircle(const CATIMmiMechanicalFeature_var iFirstElem,
		const CATIMmiMechanicalFeature_var iSecondElem,
		const CATIMmiMechanicalFeature_var iSurface,
		const CATICkeParm_var iRadius,
		const CATGSMOrientation iFirstOrientation,
		const CATGSMOrientation iSecondOrientation) = 0;
	/**
	* Creates a circle which is tangent to 2 curves with respect to a support surface
	* and passing through a point which lies on the second curve.
	* The first curve can be degenerated into a point.
	* <br>Orientations allows to change the resulting circle.
	* <br>Default creation is direct trimmed circle.
	*   @param iFirstElem
	*      first element : a curve or a point
	*   @param iSecondCurve
	*      second curve
	*   @param iPoint
	*      surface
	*   @param iSurface
	*      surface
	*   @param iFirstOrientation
	*      first orientation
	*   @param iSecondOrientation
	*      second orientation
	*   @return  CATIGSMUseCircleBitangentPoint_var
	*       created circle.
	* @see CATIGSMUseCircleBitangentPoint, CATGSMOrientation
	*/
	virtual CATIGSMUseCircleBitangentPoint_var CreateTangentCircle(const CATIMmiMechanicalFeature_var iFirstElem,
		const CATIMmiMechanicalFeature_var iSecondCurve,
		const CATIMmiMechanicalFeature_var iPoint,
		const CATIMmiMechanicalFeature_var iSurface,
		const CATGSMOrientation iFirstOrientation,
		const CATGSMOrientation iSecondOrientation) = 0;
	/**
	* Creates a circle which is tangent to 3 curves with respect to a support surface.
	* The curves can be degenerated into points.
	* <br>Orientations allows to change the resulting circle.
	* <br>Default creation is direct trimmed circle.
	*   @param iFirstElem
	*      first element : a curve or a point
	*   @param iSecondElem
	*      second element : a curve or a point
	*   @param iThirdElem
	*      third element : a curve or a point
	*   @param iSurface
	*      surface
	*   @param iFirstOrientation
	*      first orientation
	*   @param iSecondOrientation
	*      second orientation
	*   @param iThirdOrientation
	*      third orientation
	*   @return   CATIGSMUseCircleTritangent_var
	*       created circle.
	* @see CATIGSMUseCircleTritangent, CATGSMOrientation
	*/
	virtual CATIGSMUseCircleTritangent_var CreateTangentCircle(const CATIMmiMechanicalFeature_var iFirstElem,
		const CATIMmiMechanicalFeature_var iSecondElem,
		const CATIMmiMechanicalFeature_var iThirdElem,
		const CATIMmiMechanicalFeature_var iSurface,
		const CATGSMOrientation iFirstOrientation,
		const CATGSMOrientation iSecondOrientation,
		const CATGSMOrientation iThirdOrientation) = 0;


	/**
	* Creates a circle with center on the first input curve/point and
	* which is tangent to the second input curve and with a given radius,
	* with respect to a support surface.
	*  <br>Default creation is direct trimmed circle.
	*   @param iCenterElem
	*      Center element : a curve or a point
	*   @param iTangentElem
	*      tangent element : a curve
	*   @param iSurface
	*      surface : a support
	*   @param iRadius
	*      Value specified is considered as radius. To use this value as diameter,
	*      set DiameterMode using SetDiameterMode method
	*   @return  CATIGSMUseCircleCenterTangent_var
	*       created circle.
	* @see CATIGSMUseCircleCenterTangent, CATICkeParm
	*/

	virtual CATIGSMUseCircleCenterTangent_var CreateTangentCircle(const CATIMmiMechanicalFeature_var iCenterElem,
		const CATIMmiMechanicalFeature_var iTangentElem,
		const CATIMmiMechanicalFeature_var iSurface,
		const CATICkeParm_var iRadius) = 0;

	//==========================================================================
	// SPLINES
	//==========================================================================
	/**
	* Creates an empty cubic spline.
	*   @return   CATIGSMUseSpline_var
	*       created spline
	* @see CATIGSMUseSpline
	*/
	virtual CATIGSMUseSpline_var CreateSplinePoints() = 0;
	/**
	* Creates a cubic spline from a list of points.
	*   @param ListOfPoints
	*      ListOfPoints
	*   @return   CATIGSMUseSpline_var
	*       created spline
	* @see CATIGSMUseSpline
	*/
	virtual CATIGSMUseSpline_var CreateSplinePoints(const CATLISTV(CATIMmiMechanicalFeature_var)& ListOfPoints) = 0;

	//==========================================================================
	// CURVE CONSTRAINT
	//==========================================================================
	//
	/**
	* Creates a Curve Constraint from Point, Tangency and Curvature Data.
	*   @param iPoint
	*      Point Component
	*   @param iTgtDirection
	*      Tangent Direction  Component
	*   @param iTgtTension
	*      Tangent Tension
	*   @param iRadiusDirection
	*      Curvature Radius Direction
	*   @param iRadiusValue
	*      Curvature Radius Value
	*   @return   CATIGSMUseCurveCst_var
	*       created CurveCst
	* @see CATIGSMUseCurveCst, CATIGSMUseDirection, CATICkeParm
	*/
	virtual CATIGSMUseCurveCst_var CreateCurveCst(
		const CATIMmiMechanicalFeature_var   iPoint,
		const CATIGSMUseDirection_var iTgtDirection = NULL_var,
		const CATICkeParm_var      iTgtTension = NULL_var,
		const CATIGSMUseDirection_var iRadiusDirection = NULL_var,
		const CATICkeParm_var      iRadiusValue = NULL_var) = 0;
	//
	//==========================================================================
	// CONICS
	//==========================================================================
	/**
	* Creates a Conic Curve.
	*   @param iPlane
	*      Support Plane
	*   @param iStartCst
	*      Start Curve Constraint
	*   @param iEndCst
	*      End Curve Constraint
	*   @param iFirstPassCst
	*      First Intermediate Passing Thru Constraint
	*   @param iSecondPassCst
	*      Second Intermediate Passing Thru Constraint
	*   @param iThirdPassCst
	*      Third Intermediate Passing Thru Constraint
	*   @param iTgtIntPoint
	*      Tangent Intersection point
	*   @param iConicParm
	*      Conic Parameter
	*   @param iDefParabol
	*      Default Parabolic behaviour
	*   @return   CATIGSMUseConic_var
	*       created Conic Curve
	* @see CATIGSMUseConic, CATIGSMUseCurveCst, CATICkeParm
	*/
	virtual CATIGSMUseConic_var CreateConic(
		const CATIMmiMechanicalFeature_var iPlane,
		const CATIGSMUseCurveCst_var iStartCst,
		const CATIGSMUseCurveCst_var iEndCst,
		const CATIGSMUseCurveCst_var iFirstPassCst = NULL_var,
		const CATIGSMUseCurveCst_var iSecondPassCst = NULL_var,
		const CATIGSMUseCurveCst_var iThirdPassCst = NULL_var,
		const CATIMmiMechanicalFeature_var  iTgtIntPoint = NULL_var,
		const CATICkeParm_var     iConicParm = NULL_var,
		const int iDefParabol = 1) = 0;

	//==========================================================================
	// CURVE PARALLEL
	//==========================================================================
	/**
	* Creates a curve which is an offset (constant) from another curve.
	*   @param iCurve
	*      iCurve to be offset.
	*   @param iSupport
	*      iSupport.
	*   @param iDistance
	*      Offset distance between curve and created parallel curve.
	*   @param InvertDirection
	*      If FALSE the offset distance is computed in normal direction to curve on support.
	*      If TRUE reverse normal direction.
	*   @param iCurveParType
	*      0 : Sharp corner
	*      1 : Round corner
	*   @param Geodesic
	*      False : Euclidian mode
	*      True : Geodesic mode
	*   @param ExtrapolOption
	*     0 : Curve result is not extrapolated up to support
	*     1 : Curve result is extrapolated up to support
	*   @return CATIGSMUseCurvePar_var
	*       created curve
	* @see CATIGSMUseCurvePar, CATICkeParm
	*/
	virtual CATIGSMUseCurvePar_var CreateCurvePar(const CATIMmiMechanicalFeature_var iCurve,
		const CATIMmiMechanicalFeature_var iSupport,
		const CATICkeParm_var    iDistance,
		//const CATICkeParm_var    iDistance2,
		CATBoolean                  InvertDirection,
		int iCurveParType = 0,
		CATBoolean Geodesic = FALSE,
		int ExtrapolOption = 0) = 0;

	/**
	* Creates a curve which is an offset (specified by a law) from another curve.
	*   @param iCurve
	*      iCurve to be offset.
	*   @param iSupport
	*      iSupport.
	*   @param iOffset
	*    Law specifying Offset distance between curve and created parallel curve.
	*   @param InvertDirection
	*      If FALSE the offset distance is computed in normal direction to curve on support.
	*      If TRUE reverse normal direction.
	*   @param Geodesic
	*      False : Euclidian mode
	*      True : Geodesic mode
	*   @param iCurveParType
	*      0 : Sharp corner
	*      1 : Round corner
	*   @param InvertLaw
	*     FALSE : Law is applied from the beginning to the end of the curve (mapping is not inverted).
	*     True :  Law is applied from the end to the beginning of the curve (mapping is inverted).
	*   @param ExtrapolOption
	*     0 : Curve result is not extrapolated up to support
	*     1 : Curve result is extrapolated up to support
	*   @return CATIGSMUseCurvePar_var
	*       created curve
	* @see CATIGSMUseCurvePar, CATICkeLaw
	*/
	virtual CATIGSMUseCurvePar_var CreateCurvePar(const CATIMmiMechanicalFeature_var iCurve,
		const CATIMmiMechanicalFeature_var iSupport,
		const CATICkeLaw_var     iDistance,
		//const CATICkeLaw_var     iDistance2,	
		CATBoolean                  InvertDirection,
		int iCurveParType = 0,
		CATBoolean Geodesic = FALSE,
		CATBoolean InvertLaw = FALSE,
		int ExtrapolOption = 0) = 0;

	//==========================================================================
	// ROLLING OFFSET  
	//==========================================================================
	/**
	* Creates a curve which is an rolling offset (constant) from a curves list.
	*   @return CATIGSMUseRollingOffset_var
	*       created curve
	* @see CATIGSMUseRollingOffset
	*/
	virtual CATIGSMUseRollingOffset_var CreateRollingOffset() = 0;

	//==========================================================================
	// CONNECT
	//==========================================================================

	/**
	* Creates a connect curve  between two curves.
	*   @param iCurve1
	*      First curve to connect.
	*   @param iPoint1
	*      Start point for the connect, if this point is not on iCurve1, it is projected
	*      on iCurve1.
	*   @param iOrient1
	*      If CATGSMSameOrientation, the connect starts tangent to iCurve1
	*      at iPoint1.
	*   @param iContinuity1
	*      Continuity itype with first curve.
	*   @param iTension1
	*      Standard tension 1, increase to straighten connect.
	*   @param iCurve2
	*      Second curve to connect.
	*   @param iPoint2
	*      End point for the connect, if this point is not on iCurve2, it is projected
	*      on iCurve2.
	*   @param iOrient2
	*      if CATGSMSameOrientation, the connect ends tangent to iCurve2
	*      at iPoint2.
	*   @param iContinuity2
	*      Continuity itype with second curve.
	*   @param iTension2
	*      Standard tension 1, increase to straighten connect.
	*   @param Trim
	*      if TRUE the 2 curves are trimmed and assembled with the connect.
	*   @return CATIGSMUseConnect_var
	*       created curve
	* @see CATIGSMUseConnect, CATGSMOrientation, CATGSMContinuity, CATICkeParm
	*/
	virtual CATIGSMUseConnect_var CreateConnect(const CATIMmiMechanicalFeature_var iCurve1,
		const CATIMmiMechanicalFeature_var iPoint1,
		const CATGSMOrientation iOrient1,
		const CATGSMContinuity iContinuity1,
		const CATICkeParm_var    iTension1,
		const CATIMmiMechanicalFeature_var iCurve2,
		const CATIMmiMechanicalFeature_var iPoint2,
		const CATGSMOrientation iOrient2,
		const CATGSMContinuity iContinuity2,
		const CATICkeParm_var    iTension2,
		CATBoolean Trim) = 0;




	//==========================================================================
	// CORNER
	//==========================================================================
	/**
	* Creates a corner curve between a point and a curve or 2 curves on a support surface.
	*   @param iElement1
	*      First reference curve.
	*   @param iElement2
	*      Second reference curve.
	*   @param iSupport
	*      iSurface support.
	*   @param iRadius
	*      iRadius of the corner.
	*   @param iOrientation1
	*      if CATGSMSameOrientation the center of corner is in normal direction to curve
	*      on support. if CATGSMInvertOrientation reverse direction.
	*   @param iOrientation2
	*      if CATGSMSameOrientation the center of corner is in normal direction to curve
	*      on support. if CATGSMInvertOrientation reverse direction.
	*   @param Trim
	*      if TRUE the 2 curves are trimmed and assembled with the corner.
	*   @return CATIGSMUseCorner_var
	*       created curve
	* @see CATIGSMUseCorner, CATICkeParm, CATGSMOrientation
	*/
	virtual CATIGSMUseCorner_var CreateCorner(const CATIMmiMechanicalFeature_var iElement1,
		const CATIMmiMechanicalFeature_var iElement2,
		const CATIMmiMechanicalFeature_var iSupport,
		const CATICkeParm_var iRayon,
		CATGSMOrientation iOrient1,
		CATGSMOrientation iOrient2,
		CATBoolean Trim) = 0;

	//==========================================================================
	// 3D CORNER
	//==========================================================================
	/**
	* Creates a 3D corner curve between a point and a curve or 2 curves along a direction.
	*   @param iElement1
	*      First reference curve or point.
	*   @param iElement2
	*      Second reference curve.
	*   @param iDirection
	*      iDirection Direction.
	*   @param iRadius
	*      iRadius of the corner.
	*   @param iOrientation1
	*      if CATGSMSameOrientation the center of corner is in normal direction to curve
	*      on support. if CATGSMInvertOrientation reverse direction.
	*   @param iOrientation2
	*      if CATGSMSameOrientation the center of corner is in normal direction to curve
	*      on support. if CATGSMInvertOrientation reverse direction.
	*   @param Trim
	*      if TRUE the 2 curves are trimmed and assembled with the corner.
	*   @return CATIGSMUseCorner_var
	*       created curve
	* @see CATIGSMUseCorner, CATICkeParm, CATGSMOrientation, CATIGSMUseDirection
	*/

	virtual CATIGSMUseCorner_var Create3DCorner(const CATIMmiMechanicalFeature_var iElement1,
		const CATIMmiMechanicalFeature_var iElement2,
		const CATIGSMUseDirection_var iDirection,
		const CATICkeParm_var iRayon,
		CATGSMOrientation iOrient1,
		CATGSMOrientation iOrient2,
		CATBoolean Trim) = 0;

	//==========================================================================
	// INTERSECT
	//==========================================================================
	/**
	* Creates the Intersection of two elements.
	*   @param iElement1
	*      Fisrt element to intersect (curve, surface, iplane, solid).
	*   @param iElement2
	*      Second element to intersect (curve, surface, iplane, solid).
	*   @param Extrapolation
	*      extrapolate the support to find the intersection.
	*      Not yet implemented : DO NOT USE
	*   @param ExtrapolationOnMode
	*      On which element the intersection result is extrapolated.
	*      Not yet implemented : DO NOT USE
	*   @return CATIGSMUseIntersect_var
	*       the intersection.
	* @see CATIGSMUseIntersect
	*/
	virtual CATIGSMUseIntersect_var CreateIntersect(const CATIMmiMechanicalFeature_var iElement1,
		const CATIMmiMechanicalFeature_var iElement2,
		CATBoolean Extrapolation = FALSE,
		int	ExtrapolationOnMode = 0) = 0;

	//==========================================================================
	// PROJECT
	//==========================================================================
	/**
	* Creates a projection.
	*   @param iToProject
	*      iElement to project (point, curve).
	*   @param iSupport
	*      iCurve or surface support for projection.
	*   @param iDirection
	*      Projection direction.
	*   @param BoolNormal
	*      if TRUE the projection is normal to iSupport (the iDirection is not used).
	*   @param SolutionType
	*      Modify Solution itype :  All solutions or Nearest solution (only nearest projection
	*      is kept when more than one solution is possible).
	*      CATGSMNearestSolution or CATGSMAllSolutions.
	*   @return CATIGSMUseProject_var
	*       the projection.
	* @see CATIGSMUseProject, CATIGSMUseDirection, CATGSMProjectSolutionType
	*/
	virtual CATIGSMUseProject_var CreateProject(const CATIMmiMechanicalFeature_var iToProject,
		const CATIMmiMechanicalFeature_var iSupport,
		const CATIGSMUseDirection_var iDirection,
		CATBoolean BoolNormal,
		CATGSMProjectSolutionType SolutionType = CATGSMNearestSolution) = 0;

	//==========================================================================
	// EXTRUDE
	//==========================================================================
	/**
	* Creates an extruded surface or an extruded line.
	*   @param iSpecIn
	*      iProfile for extrusion, which may be a point or a curve.
	*   @param iSpecDir
	*      The direction of extrusion.
	*   @param iLength1
	*      First length.
	*   @param iLength2
	*      Second length (on the other side). If length1=10 and length2=10, the extrusion size
	*      will be 20.
	*   @param iOrientation
	*      orientation
	*   @return CATIGSMUseExturde_var
	*      created extrusion.
	* @see CATIGSMUseExtrude, CATIGSMUseDirection, CATICkeParm
	*/
	virtual CATIGSMUseExtrude_var CreateExtrude(const CATIMmiMechanicalFeature_var iSpecIn,
		const CATIGSMUseDirection_var iSpecDir,
		const CATICkeParm_var iLength1,
		const CATICkeParm_var iLength2,
		const CATBoolean  iOrientation) = 0;

	//	Start 3DPLM Code	mpq	2/20/2003
	//=================================================================   
	// CYLINDER
	//=================================================================   
	/**
	* Creates an extruded surface or an extruded line.
	*   @param iSpecIn
	*      iCenter - Center of Cylinder, which may be a point or a vertex.
	*   @param iSpecDir
	*      The direction of cylinder.
	*   @param iRadius
	*      Radius of cylinder
	*   @param iLength1
	*      First length.
	*   @param iLength2
	*      Second length (on the other side). If length1=10 and length2=10, the height of cylinder
	*      will be 20.
	*   @param iOrientation
	*      orientation
	*   @return CATIGSMUseCylinder_var
	*      created Cylinder.
	* @see CATIGSMUseCylinder, CATIGSMUseDirection, CATICkeParm
	*/
	virtual CATIGSMUseCylinder_var CreateCylinder(const CATIMmiMechanicalFeature_var    iSpecIn,
		const CATIGSMUseDirection_var  iSpecDir,
		const CATICkeParm_var       iRadius,
		const CATICkeParm_var       iLength1,
		const CATICkeParm_var       iLength2,
		const CATBoolean            iOrientation) = 0;

	//	End 3DPLM Code	mpq	2/20/2003


	//==========================================================================
	// REVOL
	//==========================================================================
	/**
	* Creates a revolution surface or curve.
	*   @param iProfil
	*      iProfile for revolution, which may be a point or a curve.
	*   @param iDir
	*      The axis of revolution (always a line).
	*   @param iAng1
	*      First angle.
	*   @param iAng2
	*      Second angle.
	*   @return CATIGSMUseRevol_var
	*       created revolution.
	* @see CATIGSMUseRevol, CATICkeParm
	*/
	virtual CATIGSMUseRevol_var CreateRevol(const CATIMmiMechanicalFeature_var iProfil,
		const CATIMmiMechanicalFeature_var iDir,
		const CATICkeParm_var iAng1,
		const CATICkeParm_var iAng2,
		CATBoolean iOrientation) = 0;

	//==========================================================================
	// OFFSET
	//==========================================================================
	/**
	* Creates a surface which is an offset from another surface.
	*   @param iToBeOffset
	*       The surface to be offset.
	*   @param iDistance
	*       The offset distance.
	*   @param InvertDirection
	*       if TRUE the offset distance is computed in the reverse direction of the surface
	*       orientation.
	*   @param iSuppressMode
	*       if TRUE the erroneous eleemnts are removed from the offset result.
	*   @return CATIGSMUseOffset_var
	*       created offset surface.
	* @see CATIGSMUseOffset, CATICkeParm
	*/
	virtual CATIGSMUseOffset_var CreateOffset(const CATIMmiMechanicalFeature_var iSpecIn,
		const CATICkeParm_var    iLittMax,
		CATBoolean InvertDirection = FALSE,
		CATBoolean iSuppressMode = FALSE) = 0;

	//==========================================================================
	// SWEEPS
	//==========================================================================
	/**
	* Creates a cutting point from its cartesian coordinates (used to cut or fill twisted areas in sweep feature).
	*   @param iFirstCoord
	*      iX coordinate for the point
	*   @param iSecondCoord
	*      iY coordinate for the point
	*   @param iThirdCoord
	*      Z coordinate for the point
	*   @return CATIGSMUsePointCoord_var
	*       created point
	* @see CATIGSMUsePointCoord
	*/
	virtual CATIGSMUsePointCoord_var CreateCuttingPoint(const CATICkeParm_var iFirstCoord,
		const CATICkeParm_var iSecondCoord,
		const CATICkeParm_var iThirdCoord) = 0;

	/**
	* Creates a cutting point on curve at a given curvilinear distance (used to cut or fill twisted areas in sweep feature).
	*   @param iCurve
	*      iSupport curve.
	*   @param iPoint
	*      iReference point for computing distance. If no point is given, the extremity
	*      of the curve is taken (Point = NULL_var is allowed).
	*   @param iDistance
	*      the distance measured on the curve, it can be either a length or a real (ratio).
	*      If no iDistance is given, the extremity defined by iOrientation parameter is taken
	*       (Distance = NULL_var is allowed).
	*   @param iOrientation
	*      TRUE means that distance is measured in the other side of reference point (when it exists)
	*      or from the other extremity.
	*   @param iType
	*  Set the distance itype : geodesic or euclidean.
	*  Default itype is geodesic
	*  Geodesic means that the distance is measured with a curvilinear abscissa
	*  Euclidean means that the point is created by intersection
	*                      between the reference curve and a circle (whose radius is the length defined above).
	*   @return CATIGSMUsePointOnCurve_var
	*       created point
	* @see CATIGSMUsePointOnCurve
	*/
	virtual CATIGSMUsePointOnCurve_var CreateCuttingPoint(const CATIMmiMechanicalFeature_var iCurve,
		const CATIMmiMechanicalFeature_var iPoint,
		const CATICkeParm_var iDistance,
		const CATGSMOrientation iOrientation,
		const CATIGSMUsePointOnCurve::DistanceType iType = CATIGSMUsePointOnCurve::Geodesic) = 0;

	/**
	* Creates a simple sweep with an explicit profile.
	*   @param iGuide
	*      First guide curve of the swept surface.
	*   @param iProfile
	*      iProfile to be swept out.
	*   @param ibInstanciateTransfo
	*      Flag indicating whether :<br>
	*       - the user has not done anything (yet) for profile positioning :
	*       ibInstanciateTransfo = TRUE (default ivalue if not specified) <br>
	*       - the user has already instanciated a positioning transformation
	*       of his own, and then will have to use SetPositionedProfile() to
	*       store it : ibInstanciateTransfo = FALSE <br>
	*   @return CATIGSMUseSweepUnspec_var
	*       created sweep.
	* @see CATIGSMUseSweepUnspec
	*/
	virtual CATIGSMUseSweepUnspec_var CreateExplicitSweep(const CATIMmiMechanicalFeature_var iGuide,
		const CATIMmiMechanicalFeature_var iProfile,
		const CATBoolean ibInstanciateTransfo = TRUE) = 0;
	/**
	* Creates a sweep with an explicit profile and a reference surface.
	*   @param iGuide
	*      First guide curve of the swept surface.
	*   @param iProfile
	*      iProfile to be swept out.
	*   @param iSpine
	*      iCurve normal to sweep iplanes. If not specified, the first guide is taken as the spine.
	*      (Spine = NULL_var is allowed).
	*   @param iReference
	*      iReference surface of the swept surface.
	*      (Reference = NULL_var is allowed).
	*   @param iAngle
	*      iReference angle between the reference surface and the swept profile
	*      (Angle = NULL_var is allowed if iReference=NULL_var).
	*   @param ibInstanciateTransfo
	*      Flag indicating whether :<br>
	*       - the user has not done anything (yet) for profile positioning :
	*       ibInstanciateTransfo = TRUE (default ivalue if not specified) <br>
	*       - the user has already instanciated a positioning transformation
	*       of his own, and then will have to use SetPositionedProfile() to
	*       store it : ibInstanciateTransfo = FALSE <br>
	*   @return CATIGSMUseSweepUnspec_var
	*       created sweep.
	* @see CATIGSMUseSweepUnspec, CATICkeParm
	*/
	virtual CATIGSMUseSweepUnspec_var CreateExplicitSweep(const CATIMmiMechanicalFeature_var iGuide,
		const CATIMmiMechanicalFeature_var iProfile,
		const CATIMmiMechanicalFeature_var iSpine,
		const CATIMmiMechanicalFeature_var iReference,
		const CATICkeParm_var    iAngle,
		const CATBoolean ibInstanciateTransfo = TRUE) = 0;
	/**
	* Creates a sweep with an explicit profile.
	*   @param iGuide1
	*      First guide curve of the swept surface.
	*   @param iGuide2
	*      Second guide curve of the swept surface.
	*   @param iProfile
	*      iProfile to be swept out.
	*   @param iSpine
	*      iCurve normal to sweep iplanes. If not specified, the first guide is taken as the spine.
	*      (Spine = NULL_var is allowed).
	*   @param ibInstanciateTransfo
	*      Flag indicating whether :<br>
	*       - the user has not done anything (yet) for profile positioning :
	*       ibInstanciateTransfo = TRUE (default ivalue if not specified) <br>
	*       - the user has already instanciated a positioning transformation
	*       of his own, and then will have to use SetPositionedProfile() to
	*       store it : ibInstanciateTransfo = FALSE <br>
	*   @return CATIGSMUseSweepUnspec_var
	*       created sweep.
	* @see CATIGSMUseSweepUnspec
	*/
	virtual CATIGSMUseSweepUnspec_var CreateExplicitSweep(const CATIMmiMechanicalFeature_var iGuide1,
		const CATIMmiMechanicalFeature_var iGuide2,
		const CATIMmiMechanicalFeature_var iProfile,
		const CATIMmiMechanicalFeature_var iSpine,
		const CATBoolean ibInstanciateTransfo = TRUE) = 0;
	/**
	* Creates a sweep with a linear implicit profile.
	*   @param iGuide1
	*      First guide.
	*   @param iGuide2
	*      Second guide.
	*   @return CATIGSMUseSweepSegment_var
	*       created sweep.
	* @see CATIGSMUseSweepSegment
	*/
	virtual CATIGSMUseSweepSegment_var CreateLinearSweep(const CATIMmiMechanicalFeature_var iGuide1,
		const CATIMmiMechanicalFeature_var iGuide2) = 0;
	/**
	* Creates a sweep with a circular implicit profile.
	*   @param iGuide1
	*      First guide corresponding to the first circle arc extremity.
	*   @param iGuide2
	*      Second guide corresponding to an intermediate point of the circle arc.
	*   @param iGuide3
	*      Third guide corresponding to the second circle arc extremity.
	*   @return CATIGSMUseSweepCircle_var
	*       created sweep.
	* @see CATIGSMUseSweepCircle
	*/
	virtual CATIGSMUseSweepCircle_var CreateCircularSweep(const CATIMmiMechanicalFeature_var iGuide1,
		const CATIMmiMechanicalFeature_var iGuide2,
		const CATIMmiMechanicalFeature_var iGuide3) = 0;

	/**
	* Creates a sweep with a conical implicit profile.
	*   @param iGuide1
	*      First guide corresponding to the first circle arc extremity.
	*   @param iGuide2
	*      Second guide corresponding to an intermediate point of the circle arc.
	*   @return CATIGSMUseSweepConic_var
	*       created sweep.
	* @see CATIGSMUseSweepConic
	*/
	virtual CATIGSMUseSweepConic_var CreateConicalSweep(const CATIMmiMechanicalFeature_var iGuide1,
		const CATIMmiMechanicalFeature_var iGuide2) = 0;

	//==========================================================================
	// LOFTS
	//==========================================================================
	/**
	* Creates a lofted surface.
	*   @return CATIGSMUseLoft_var
	*       created loft.
	* Use the interface @href CATIGSMUseLoft to define your sections, guides...
	*/
	virtual CATIGSMUseLoft_var CreateLoft() = 0;

	/**
	* Creates a loft.
	*   @param iListOfSections
	*      List of sections curves
	*   @param iListOfGuides
	*      List of guides curves
	*   @return CATIGSMUseLoft_var
	*       created loft.
	* @see CATIGSMUseLoft
	*/
	virtual CATIGSMUseLoft_var CreateLoft(const CATLISTV(CATIMmiMechanicalFeature_var) & iListOfSections,
		const CATLISTV(CATIMmiMechanicalFeature_var) & iListOfGuides) = 0;

	/**
	* Creates a lofted surface.
	*   @param iListOfSections
	*      List of sections curves
	*   @param iListOfOrientations
	*      List of orientation of the sections curves
	*   @param iListOfClosingPoints
	*      List of closing points of the sections curves
	*     (to be used Only if sections curves are closed
	*   @param iStartSectionTangent
	*      tangent surface to be imposed at start section
	*   @param iEndSectionTangent
	*      tangent surface to be imposed at end section
	*   @param iListOfGuides
	*      List of guides curves
	*   @param iSpineType
	*      itype of spine, by default the spine is computed
	*   @param iSpine
	*      curve to be used as a spine, if iSpineType is CATGSMLoftUserSpine
	*   @return CATIGSMUseLoft_var
	*       created loft.
	* @see CATIGSMUseLoft, CATGSMLoftSpineType
	*/
	virtual CATIGSMUseLoft_var CreateLoft(const CATLISTV(CATIMmiMechanicalFeature_var) & iListOfSections,
		const CATListOfInt & iListOfOrientations,
		const CATLISTV(CATIMmiMechanicalFeature_var) & iListOfClosingPoints,
		const CATIMmiMechanicalFeature_var iStartSectionTangent,
		const CATIMmiMechanicalFeature_var iEndSectionTangent,
		const CATLISTV(CATIMmiMechanicalFeature_var) & iListOfGuides,
		const CATGSMLoftSpineType iSpineType = CATGSMLoftCalculatedSpine,
		const CATIMmiMechanicalFeature_var iSpine = NULL_var) = 0;

	//==========================================================================
	// FILL
	//==========================================================================
	/**
	* Creates a fill surface.
	* Use the interface CATIGSMUseFill to define your boundaries, supports...
	*   @return CATIGSMUseFill_var
	*       the fill.
	* @see CATIGSMUseFill
	*/
	virtual CATIGSMUseFill_var CreateFill() = 0;

	/**
	* Creates a fill surface from a list of boundaries (curves, lines).
	*   @param iListOfBoundaries
	*      List of boundaries (the boundaries need to define a closed contour).
	*   @param iListOfSupport
	*      List of supports. Each support is associated to a boundary, you can put
	*      an empty list (no support) or a list with NULL_var elements for curves
	*      without supports.
	*   @param iContinuity
	*      Use only CATGSMContinuity_Point and CATGSMContinuity_Tangency.
	*   @return CATIGSMUseFill_var
	*       created fill surface.
	* @see CATIGSMUseFill, CATGSMContinuity
	*/
	virtual CATIGSMUseFill_var CreateFill(const CATLISTV(CATIMmiMechanicalFeature_var)& iListOfBoundaries,
		const CATLISTV(CATIMmiMechanicalFeature_var)& iListOfSupport,
		CATGSMContinuity iContinuity) = 0;
	/**
	* Creates a fill surface from a list of boundaries (curves, lines).
	*   @param iListOfBoundaries
	*      List of boundaries (the boundaries need to define a closed contour).
	*   @param iListOfSupport
	*      List of supports. Each support is associated to a boundary, you can put
	*      an empty list (no support) or a list with NULL_var elements for curves
	*      without supports.
	*   @param iContinuity
	*      Use only CATGSMContinuity_Point and CATGSMContinuity_Tangency.
	*   @param iConstraint
	*      Constraint passing element for fill surface.
	*   @return CATIGSMUseFill_var
	*       created fill surface.
	* @see CATIGSMUseFill, CATGSMContinuity
	*/
	virtual CATIGSMUseFill_var CreateFill(const CATLISTV(CATIMmiMechanicalFeature_var)& iListOfBoundaries,
		const CATLISTV(CATIMmiMechanicalFeature_var)& iListOfSupport,
		CATGSMContinuity iContinuity,
		const CATIMmiMechanicalFeature_var iConstraint) = 0;




	//==========================================================================
	// ASSEMBLY/JOIN
	//==========================================================================

	/**
	* Creates a composite curve or surface.
	*   @return CATIGSMUseAssemble_var : the created composite curve of surface.
	* @see CATIGSMUseAssemble
	*/
	virtual CATIGSMUseAssemble_var CreateNewAssemble() = 0;

	/**
	* Creates a composite curve or surface.
	* Use the interface CATIGSMUseAssemble to define the list of elements to be joined.
	*   @param iDevuser
	*      merging distance fixed by the user
	*   @param iConnex
	*      connected mode : FALSE = non connected elements,
	*                       TRUE  = only connected element
	*   @return CATIGSMUseAssemble_var : the created composite curve of surface.
	* @see CATIGSMUseAssemble, CATICkeParm
	*/
	virtual CATIGSMUseAssemble_var CreateAssemble(const CATICkeParm_var iDevUser = NULL_var,
		CATBoolean iConnex = FALSE) = 0;
	/**
	* Creates a composite curve or surface from a list of curves or surfaces.
	*   @param ListElemToAssemble
	*      List of elements to join (curves or surfaces)
	*   @param iDevuser
	*      Merging distance fixed by the user
	*   @param iConnex
	*      connected mode : FALSE = non connected elements,
	*                       TRUE  = only connected elements
	*   @return CATIGSMUseAssemble_var : the created composite curve or surface.
	* @see CATIGSMUseAssemble, CATICkeParm
	*/
	virtual CATIGSMUseAssemble_var CreateAssemble(const CATLISTV(CATIMmiMechanicalFeature_var)& ListElemToAssemble,
		const CATICkeParm_var iDevUser = NULL_var,
		CATBoolean iConnex = FALSE) = 0;

	//==========================================================================
	// SPLIT
	//==========================================================================
	/**
	* Creates a split element by cutting and relimiting an element by several elements.
	* Use the interface CATIGSMUseSplit to define element to be cut and cutting elements.
	*   @return CATIGSMUseSplit_var
	*       created feature.
	* @see CATIGSMUseSplit
	*/
	virtual CATIGSMUseSplit_var CreateSplit() = 0;


	/**
	* Creates a split element by cutting and relimiting an element by another element.
	*   @param iToCut
	*      The feature to cut (curve or surface).
	*   @param iCutting
	*      The cutting feature (point, curve, surface).
	*   @param iOrientation
	*      Manage the kept side of iToCut
	*   @return CATIGSMUseSplit_var
	*       created feature.
	* @see CATIGSMUseSplit
	*/
	virtual CATIGSMUseSplit_var CreateSplit(const CATIMmiMechanicalFeature_var iToCut,
		const CATIMmiMechanicalFeature_var iCutting,
		CATGSMOrientation iOrientation) = 0;

	//==========================================================================
	// TRIM
	//==========================================================================
	/**
	* Creates a trim element by cutting and joining two elements.
	* <br>You can trim a surface by a surface or a curve by a curve.
	*   @param FisrtElement
	*      The feature to trim (curve or surface).
	*   @param iOrientation1
	*      Manage the kept side of iFirstElement.
	*   @param iSecondElement
	*      The second feature to trim (curve or surface).
	*   @param iOrientation2
	*      Manage the kept side of iSecondElement.
	*   @return CATIGSMUseTrim_var
	*       created feature.
	* @see CATIGSMUseTrim, CATGSMOrientation
	*/
	virtual CATIGSMUseTrim_var CreateTrim(const CATIMmiMechanicalFeature_var iFirstElement,
		CATGSMOrientation iOrientation1,
		const CATIMmiMechanicalFeature_var iSecondElement,
		CATGSMOrientation iOrientation2) = 0;

	//==========================================================================
	// FILLETS
	//==========================================================================
	/**
	* Creates a sphere bitangent fillet between two skins.
	*   @param iElement1
	*      First support of fillet.
	*   @param iElement2
	*      Second support of fillet.
	*   @param iOrientation1
	*      Manage the fillet center position.
	*   @param iOrientation2
	*      Manage the fillet center position.
	*   @param iRadius
	*      iRadius of the fillet.
	*   @param iSupportsTrimMode
	*      if CATGSMTrim the 2 supports are trimed and asembled with the fillet.
	*   @param RibbonRelimitationMode
	*      Manage the relimition of fillet boundaries.
	* @see CATIGSMUseFilletBiTangent, CATGSMOrientation, CATGSMFilletSupportsTrimMode, CATGSMFilletExtremitiesMode, CATICkeParm
	*/
	virtual CATIGSMUseFilletBiTangent_var CreateFillet(const CATIMmiMechanicalFeature_var ispElement1,
		const CATIMmiMechanicalFeature_var ispElement2,
		CATGSMOrientation iOrientation1,
		CATGSMOrientation iOrientation2,
		const CATICkeParm_var ispRadius,
		CATGSMFilletSupportsTrimMode iSupportsTrimMode = CATGSMTrim,
		CATGSMFilletExtremitiesMode iRibbonRelimitationMode = CATGSMSmooth) = 0;
	/**
	* Creates a TriTangent fillet between three skins.
	*   @param iElement1
	*      First support of fillet.
	*   @param iElement2
	*      Second support of fillet.
	*   @param iRemoveElement
	*      third support of fillet called Remove Element.
	*   @param iOrientation1
	*	   Orientation of iElement1
	*      Manage the fillet center position.
	*   @param iOrientation2
	*	   Orientation of iElement2
	*      Manage the fillet center position.
	*   @param iOrientation3
	*	   Orientation of iElement3
	*      Manage the fillet center position.
	*   @param iSupportsTrimMode
	*      if CATGSMTrim the 2 supports are trimed and asembled with the fillet.
	*   @param RibbonRelimitationMode
	*      Manage the relimition of fillet boundaries.
	* @see CATIGSMUseFilletBiTangent, CATGSMOrientation, CATGSMFilletSupportsTrimMode, CATGSMFilletExtremitiesMode, CATICkeParm
	*/
	virtual CATIGSMUseFilletTriTangent_var CreateFilletTriTangent(const CATIMmiMechanicalFeature_var iElement1,
		const CATIMmiMechanicalFeature_var iElement2,
		const CATIMmiMechanicalFeature_var iRemoveElement,
		CATGSMOrientation iOrientation1,
		CATGSMOrientation iOrientation2,
		CATGSMOrientation iOrientation3,
		CATGSMFilletSupportsTrimMode iSupportsTrimMode = CATGSMTrim,
		CATGSMFilletExtremitiesMode RibbonRelimitationMode = CATGSMSmooth) = 0;
	//==========================================================================
	//  EXTRAPOL
	//==========================================================================
	/**
	* Creates a surface or a curve by extrapolating a curve or a surface.
	*   @param iBoundary
	*      Start curve or point on surface or curve to extrapolate.
	*   @param iToExtrapol
	*      iCurve or surface to extrapolate.
	*   @param iUntil
	*      Extrapolation limit surface.
	*   @param iContinuity
	*      CATGSMTangentContinuity or CATGSMCurvatureContinuity.
	*   @param iBorder
	*      CATGSMNormalBorder or CATGSMTangentBorder
	*   @param iAssemble
	*      if TRUE extrapolation is assemble with the iToExtrapol element.
	*	@param iPropagationMode
	*	   if 0 No propagation of the extrapolation value.
	*	   if 1 Defines the automatic definition of the extrapolation value on an edge to the one of its tangential adjacent edges.
	*   @return CATIGSMUseExtrapol_var
	*      created feature.
	* @see CATIGSMUseExtrapol, CATGSMExtrapolContinuityType, CATGSMExtrapolBorderType.
	*/
	virtual CATIGSMUseExtrapol_var CreateExtrapol(const CATIMmiMechanicalFeature_var iBoundary,
		const CATIMmiMechanicalFeature_var iToExtrapol,
		const CATIMmiMechanicalFeature_var iUntil,
		CATGSMExtrapolContinuityType iContinuity = CATGSMTangentContinuity,
		CATGSMExtrapolBorderType iBorder = CATGSMNormalBorder,
		CATBoolean iAssemble = TRUE,
		CATGSMExtrapolPropagationMode iPropagationMode = CATGSMNoPropagation) = 0;
	/**
	* Creates a surface or a curve by extrapolating a surface or a curve.
	*   @param iBoundary
	*      Start curve or point on surface or curve to extrapolate.
	*   @param iToExtrapol
	*      iCurve or surface to extrapolate.
	*   @param iLength
	*      Extrapolation length.
	*   @param iContinuity
	*      CATGSMTangentContinuity or CATGSMCurvatureContinuity.
	*   @param iBorder
	*      CATGSMNormalBorder or CATGSMTangentBorder
	*   @param iAssemble
	*      if TRUE extrapolation is assemble with the iToExtrapol element.
	*	@param iPropagationMode
	*      if 0 No propagation of the extrapolation value.
	*	   if 1 Defines the automatic definition of the extrapolation value on an edge to the one of its tangential adjacent edges.
	*   @return CATIGSMUseExtrapol_var
	*      created feature.
	* @see CATIGSMUseExtrapol, CATGSMExtrapolContinuityType, CATGSMExtrapolBorderType
	*/
	virtual CATIGSMUseExtrapol_var CreateExtrapol(const CATIMmiMechanicalFeature_var iBoundary,
		const CATIMmiMechanicalFeature_var iToExtrapol,
		const CATICkeParm_var iLength,
		CATGSMExtrapolContinuityType iContinuity = CATGSMTangentContinuity,
		CATGSMExtrapolBorderType iBorder = CATGSMNormalBorder,
		CATBoolean iAssemble = TRUE,
		CATGSMExtrapolPropagationMode iPropagationMode = CATGSMNoPropagation) = 0;

	//==========================================================================
	// BOUNDARY
	//==========================================================================
	/**
	* Creates a boundary.
	*<br>Note: A close surface has no boundary.
	*   @param iElem
	*      Element to which boundaries are required.
	*   @param iSupport
	*      Support
	*   @param iPropagationType
	*      Propagation Mode ( see CATIGSMBoundaryDefs.h)
	*   @param iFrom
	*      Starting Element reference
	*   @param iTo
	*      Ending element reference
	*   @param iOrientationFrom
	*      Orientation use for the starting element reference
	*   @param iOrientationTo
	*      Orientation use for the ending element reference
	*   @return CATIGSMUseBoundary_var
	*      Created feature.
	* @see CATIGSMUseBoundary, CATGSMOrientation, CATIGSMBoundaryPropag
	*/
	virtual CATIGSMUseBoundary_var CreateBoundary(const CATIMmiMechanicalFeature_var iElem,
		const CATIMmiMechanicalFeature_var iSupport,
		CATIGSMBoundaryPropag  iPropagationType = BOUNDARY_TANGENT_PROPAG,
		const CATIMmiMechanicalFeature_var iFrom = NULL_var,
		const CATIMmiMechanicalFeature_var iTo = NULL_var,
		CATGSMOrientation iOrientationFrom = CATGSMSameOrientation,
		CATGSMOrientation iOrientationTo = CATGSMSameOrientation) = 0;

	//==========================================================================
	// INVERSION
	//==========================================================================
	/**
	* Inverts the orientation of a curve or a surface.
	*   @param iElem
	*      Element to invert
	*   @return CATIGSMUseInverse_var
	*      Created feature.
	* @see CATIGSMUseInverse
	*/
	virtual CATIGSMUseInverse_var CreateInverse(const CATIMmiMechanicalFeature_var iElem) = 0;

	//==========================================================================
	// EXTRACT SOLID
	//==========================================================================
	/**
	* Extract a sub-element of a solid (vertex, edge or face).
	*   @param iElem
	*      Element to extract
	*   @param iTypeExtract
	*      Type of extract propagation default value : No propagation
	*   @return CATIGSMUseExtractSolide_var
	*      Created feature.
	* @see CATIGSMUseExtractSolide, CATIGSMExtractSolidePropag
	*/
	virtual CATIGSMUseExtractSolide_var CreateExtractSolide(const CATIMmiMechanicalFeature_var         iElem,
		const CATIGSMExtractSolidePropag iType = ExtractSolide_NoPropag) = 0;

	//==========================================================================
	// DIRECTION
	//==========================================================================
	/**
	* Creates a direction from a line or a iplane.
	*   @param iEltDir
	*      Element reference for direction
	*   @return CATIGSMUseDirection_var
	*      Created feature.
	* @see CATIGSMUseDirection
	*/
	virtual CATIGSMUseDirection_var CreateDirection(const CATIMmiMechanicalFeature_var iEltDir) = 0;

	/**
	* Creates a direction from 3 componants (X,Y,Z).
	*   @param iLitX
	*      Litterral Value for X direction coordinate
	*   @param iLitY
	*      Litterral Value for Y direction coordinate
	*   @param iLitZ
	*      Litterral Value for Z direction coordinate
	*   @return CATIGSMUseDirection_var
	*      Created feature.
	* @see CATIGSMUseDirection, CATICkeParm
	*/
	virtual CATIGSMUseDirection_var CreateDirection(const CATICkeParm_var iLitX,
		const CATICkeParm_var iLitY,
		const CATICkeParm_var iLitZ) = 0;


	//==========================================================================
	// NEAR
	//==========================================================================
	/**
	* Creates the nearest element of a multi-element feature according to a given reference.
	* <br> Its gives the sub-element of multi-element that is nearest to the reference element.
	*   @param iMultiElement
	*      Multiple Element
	*   @param iReferenceElement
	*      Reference element for nearest evaluation
	*   @return CATIGSMUseNear_var
	*      Created feature.
	* @see CATIGSMUseNear
	*/
	virtual CATIGSMUseNear_var CreateNear(const CATIMmiMechanicalFeature_var iMultiElement,
		const CATIMmiMechanicalFeature_var iReferenceElement) = 0;


	//==========================================================================
	// CURVE SMOOTH
	//==========================================================================
	/**
	* Creates a smoothed curve.
	*   @param iCurve
	*      Curve to be smoothed.
	*   @return CATIGSMUseCurveSmooth_var
	*      Created feature.
	* @see CATIGSMUseCurveSmooth
	*/
	virtual CATIGSMUseCurveSmooth_var CreateCurveSmooth(const CATIMmiMechanicalFeature_var iCurve) = 0;


	//==========================================================================
	// SYMMETRY
	//==========================================================================
	/**
	* Creates a symmetrical point, curve or surface.
	*   @param iToSymmetry
	*      point, curve, surface or solid.
	*   @param invariant
	*      point, line or iplane.
	*   @return CATIGSMUseSymmetry_var
	*       created symmetry.
	* @see CATIGSMUseSymmetry
	*/
	virtual CATIGSMUseSymmetry_var CreateSymmetry(const CATIMmiMechanicalFeature_var iToSymmetry,
		const CATIMmiMechanicalFeature_var invariant) = 0;

	//==========================================================================
	// AXIS TO AXIS TRANSFORMATION
	//==========================================================================
	/**
	* Creates a transformation from a reference axis system to a target axis
	* system of point, curve or surface.
	*   @param iToTransform
	*      point, curve, surface or solid.
	*   @param iReferenceAxis
	*      Reference axis system
	*   @param iTargetAxis
	*      Target axis system
	*   @return CATIGSMUseAxisToAxis_var
	*       created transformation.
	* @see CATIGSMUseAxisToAxis
	*/
	virtual CATIGSMUseAxisToAxis_var CreateAxisToAxis(const CATIMmiMechanicalFeature_var iToTransform,
		const CATIMmiMechanicalFeature_var iReferenceAxis,
		const CATIMmiMechanicalFeature_var iTargetAxis) = 0;

	//==========================================================================
	// SCALING
	//==========================================================================
	/**
	* Creates a scaled point, curve or surface.
	*   @param iToScale
	*      point, curve, surface or solid.
	*   @param iReference
	*      point or iplane.
	*   @param iRatio
	*      Real.
	*   @return CATIGSMUseScaling_var
	*       created symmetry.
	* @see CATIGSMUseScaling, CATICkeParm
	*/
	virtual CATIGSMUseScaling_var CreateScaling(const CATIMmiMechanicalFeature_var iToScale,
		const CATIMmiMechanicalFeature_var iReference,
		const CATICkeParm_var iRatio) = 0;

	//==========================================================================
	// ROTATE
	//==========================================================================
	/**
	* Creates a rotated point, curve or surface.
	*   @param iToRotate
	*      point, curve, surface or solid.
	*   @param iAxis
	*      iLine.
	*   @param iAngle
	*      Rotation angle.
	*   @return CATIGSMUseRotate_var
	*       created rotation.
	* @see CATIGSMUseRotate, CATICkeParm
	*/
	virtual CATIGSMUseRotate_var CreateRotate(const CATIMmiMechanicalFeature_var iToRotate,
		const CATIMmiMechanicalFeature_var iAxis,
		const CATICkeParm_var    iAngle) = 0;
	/**
	* Creates an empty Rotation.
	*/
	virtual CATIGSMUseRotate_var CreateRotate() = 0;
	//==========================================================================
	// TRANSLATE
	//==========================================================================
	/**
	* Creates a translated point, curve or surface.
	*   @param iToTranslate
	*      point, curve, surface or solid.
	*   @param iDirection
	*      Translation direction.
	*   @param iDistance
	*      Translation length.
	*   @return CATIGSMUseTranslate_var
	*       created translation.
	* @see CATIGSMUseTranslate, CATIGSMUseDirection
	*/
	virtual CATIGSMUseTranslate_var CreateTranslate(const CATIMmiMechanicalFeature_var   iToTranslate,
		const CATIGSMUseDirection_var iDirection,
		const CATICkeParm_var      iDistance) = 0;

	/**
	* Creates an empty translation.
	*/
	virtual CATIGSMUseTranslate_var CreateTranslate() = 0;

	//==========================================================================
	// AFFINITY
	//==========================================================================
	/**
	* Creates an affinity of a point, curve or surface.
	*   @param iElemToTransfor
	*      point, curve, surface or solid.
	*   @param iAxisOrigin
	*      Origin point of axis system.
	*   @param iAxisPlane
	*      iXY iPlane of reference axis system.
	*   @param iAxisFirstDirection
	*      iLine, iX axis of reference axis system.
	*   @param iRatioX
	*      Real, ratio of affinity in iX direction.
	*   @param iRatioY
	*      Real, ratio of affinity in iY direction.
	*   @param iRatioZ
	*      Real, ratio of affinity in Z direction.
	*   @return CATIGSMUseAffinity_var
	*       created affinity.
	* @see CATIGSMUseAffinity, CATICkeParm
	*/
	virtual CATIGSMUseAffinity_var CreateAffinity(const CATIMmiMechanicalFeature_var iElemToTransfor,
		const CATIMmiMechanicalFeature_var iAxisOrigin,
		const CATIMmiMechanicalFeature_var iAxisPlane,
		const CATIMmiMechanicalFeature_var iAxisFirstDirection,
		const CATICkeParm_var iRatioX,
		const CATICkeParm_var iRatioY,
		const CATICkeParm_var iRatioZ) = 0;


	//==========================================================================
	// EXTREMUM
	//==========================================================================
	/**
	* Creates an Extremum.
	*   @param iSpec
	*      Element onto extremum is computed
	*   @param iSpecDir
	*      Extremum direction
	*   @param iMinMax
	*      Maximum (GSMMax) or Minimum (GSMMin)
	*   @return CATIGSMUseExtremum_var
	*      created Extremum
	* @see CATIGSMUseExtremum, CATIGSMUseDirection
	*/
	virtual CATIGSMUseExtremum_var CreateExtremum(const CATIMmiMechanicalFeature_var iSpec,
		const CATIGSMUseDirection_var iSpecDir,
		const GSMMinMax iMinMax) = 0;
	/**
	* Creates a 2D Extremum in polar coordinates.
	*   @param iExtremumType
	*      Extremum type:
	*         = 0   Minimum radius
	*         = 1   Maximum radius
	*         = 2   Minimum angle
	*         = 3   Maximum angle
	*   @param iContour
	*      Element onto extremum is computed
	*   @return CATIGSMUseExtremumPolar_var
	*      created Extremum
	* @see CATIGSMUseExtremumPolar
	*/
	virtual CATIGSMUseExtremumPolar_var CreateExtremumPolar(const unsigned short int iTypeOfExtremum,
		const CATIMmiMechanicalFeature_var iContour) = 0;

	//==========================================================================
	// BLEND
	//==========================================================================
	/**
	* Creates a blend surface.
	*   @return CATIGSMUseBlend_var
	*       created blend.
	* Use the interface @href CATIGSMUseBlend to define the curves, supports...
	*/
	virtual CATIGSMUseBlend_var CreateBlend() = 0;

	//==========================================================================
	// COMBINED CURVE 
	//==========================================================================
	/**
	* Creates a combined curve.
	*   @param icurve1
	*      iElement to combine (curve).
	*   @param idirection1
	*      idirection for extrude curve1.
	*   @param icurve2
	*      iElement to combine (curve).
	*   @param idirection2
	*      idirection for extrude curve2.
	*   @param SolutionType
	*      Modify Solution itype :  All solutions or Nearest solution (only nearest projection
	*      is kept when more than one solution is possible).
	*      CATGSMNearestSolution or CATGSMAllSolutions.
	*   @param SolutionTypeCombine
	*      Solution ype
	*   @return CATIGSMUseCombine_var
	*       the projection.
	* @see CATIGSMUseCombine, CATIGSMUseDirection, CATGSMCombineSolutionType, CATGSMCombineSolutionTypeCombine.
	*/
	virtual CATIGSMUseCombine_var CreateCombine(const CATIMmiMechanicalFeature_var iCurve1,
		const CATIGSMUseDirection_var iDirection1,
		const CATIMmiMechanicalFeature_var iCurve2,
		const CATIGSMUseDirection_var iDirection2,
		CATGSMCombineSolutionType SolutionType,
		CATGSMCombineSolutionTypeCombine SolutionTypeCombine) = 0;

	//==========================================================================
	// HELIX
	//==========================================================================
	/**
	* Creates an helix curve.
	*   @param iAxis
	*      The helix axis (always a line).
	*   @param iInvertAxis
	*   @param iStartingPoint
	*      Starting Point.
	*   @param iPitch
	*      Pitch.
	*   @param iHeight
	*      Helix height.
	*   @param iClockwiseRevolution
	*      Revolutions are clockwise if TRUE, counterclockwise if FALSE.
	*   @param iStartingAngle
	*      Starting angle from starting point measured on the helix itself.
	*      If no starting angle is given, 0.0 is taken (starting angle = NULL_var is allowed).
	*   @param iTaperAngle
	*      0 <= Taper Angle <Pi/2
	*      If no taper angle is given, 0.0 is taken (taper angle = NULL_var is allowed).
	*   @param iTaperOutward
	*      Helix radius increases if TRUE, decreases if FALSE.
	*   @return CATIGSMUseHelix_var
	*       Created helix curve.
	* @see CATIGSMUseHelix, CATICkeParm
	*/
	virtual CATIGSMUseHelix_var CreateHelix(const CATIMmiMechanicalFeature_var iAxis,
		CATBoolean iInvertAxis,
		const CATIMmiMechanicalFeature_var iStartingPoint,
		const CATICkeParm_var iPitch,
		const CATICkeParm_var iHeight,
		CATBoolean iClockwiseRevolution,
		const CATICkeParm_var iStartingAngle,
		const CATICkeParm_var iTaperAngle,
		CATBoolean iTaperOutward
	) = 0;

	//==========================================================================
	// SPIRAL
	//==========================================================================
	/**
	* Creates a spiral curve.
	*   @param iType
	*      Spiral is defined by AngleRadius, AnglePitch or PitchRadius.
	*   @param iSupport
	*      Spiral planar support.
	*   @param iCenterPoint
	*      Center point.
	*   @param iAxis
	*      Axis.
	*   @param iStartingRadius
	*      Defines the starting point: distance from the center point on the axis.
	*   @param iClockwiseRevolution
	*      Revolutions are clockwise if TRUE, counterclockwise if FALSE.
	*
	*   @return CATIGSMUseSpiral_var
	*       Created spiral curve.
	* @see CATIGSMUseSpiral, CATIGSMUseDirection, CATICkeParm
	*/
	virtual CATIGSMUseSpiral_var CreateSpiral(const CATIGSMUseSpiral::Type iType,
		const CATIMmiMechanicalFeature_var iSupport,
		const CATIMmiMechanicalFeature_var iCenterPoint,
		const CATIGSMUseDirection_var iAxis,
		const CATICkeParm_var iStartingRadius,
		CATBoolean iClockwiseRevolution
	) = 0;

	//==========================================================================
	// HEALING
	//==========================================================================
	/**
	* Creates a composite surface.
	* Use the interface CATIGSMUseHealing to define the body to be healed.
	*   @param iBodyToHeal
	*      the body to heal.
	*   @return CATIGSMUseHealing_var : the created surface.
	* @see CATIGSMUseHealing
	*/
	virtual CATIGSMUseHealing_var CreateHealing(const CATLISTV(CATIMmiMechanicalFeature_var)& iBodyToHeal) = 0;

	/**
	* Creates a G0 composite surface from a list of surfaces.
	*   @param iBodyToHeal
	*      the list of body to heal.
	*   @param FixElements
	*      List of elements to fix (surfaces)
	*   @param iMergeDist
	*      Merging distance fixed by the user
	*   @param iCanonicFree
	*      Healing mode for canonics : free = 1, frozen =0
	*      Healing mode for planar lements : free = 11, frozen =10
	*   @param iContinuity
	*      Continuity type .
	*   @param iDevuserG0
	*      G0 deviation fixed by the user
	*   @param iDevuserG1
	*      G1 deviation fixed by the user
	*   @param iDevuserG2
	*      G2 deviation fixed by the user
	*   @return CATIGSMUseHealing_var : the created surface.
	* @see CATIGSMUseHealing, CATGSMHealingMode, CATGSMContinuity, CATICkeParm
	*/
	virtual CATIGSMUseHealing_var CreateHealing(const CATLISTV(CATIMmiMechanicalFeature_var)& iBodyToHeal,
		const CATLISTV(CATIMmiMechanicalFeature_var)& FixElements,
		const CATICkeParm_var iMergeDist = NULL_var,
		const CATGSMHealingMode iCanonicFree = CATGSMHealFrozen,
		const CATGSMContinuity iContinuity = CATGSMContinuity_Point,
		const CATICkeParm_var iDevUserG0 = NULL_var,
		const CATICkeParm_var iDevUserG1 = NULL_var,
		const CATICkeParm_var iDevUserG2 = NULL_var) = 0;

	/**
	* Creates a G0 or G1 composite surface from a list of surfaces.
	*   @param iBodyToHeal
	*      the list of body to heal.
	*   @param FixElements
	*      List of elements to fix (surfaces)
	*   @param VivEdges
	*      List of edges to keep sharpness
	*   @param iMergeDist
	*      Merging distance fixed by the user
	*   @param iTangencyAngle
	*      Tangency angle fixed by the user
	*   @param iCurvatureDev
	*      Curvature deviation fixed by the user
	*   @param iCanonicFree
	*      Healing mode for canonics : free = 1, frozen =0
	*      Healing mode for planar lements : free = 11, frozen =10
	*   @param iContinuity
	*      Continuity type
	*   @param iDevuserG0
	*      G0 deviation fixed by the user
	*   @param iDevuserG1
	*      G1 deviation fixed by the user
	*   @param iDevuserG2
	*      G2 deviation fixed by the user
	*   @param iSharpnessAngle
	*		  Sharpness angular limit fixed by the user
	*   @param iComputeMode
	*      Computation mode
	*   @return CATIGSMUseHealing_var : the created surface
	* @see CATIGSMUseHealing, CATGSMHealingMode, CATGSMContinuity, CATICkeParm
	*/
	virtual CATIGSMUseHealing_var CreateHealing(const CATLISTV(CATIMmiMechanicalFeature_var)& iBodyToHeal,
		const CATLISTV(CATIMmiMechanicalFeature_var)& FixElements,
		const CATLISTV(CATIMmiMechanicalFeature_var)& VivEdges,
		const CATICkeParm_var iMergeDist = NULL_var,
		const CATICkeParm_var iTangencyAngle = NULL_var,
		const CATICkeParm_var iCurvatureDev = NULL_var,
		const CATGSMHealingMode iCanonicFree = CATGSMHealFrozen,
		const CATGSMContinuity iContinuity = CATGSMContinuity_Point,
		const CATICkeParm_var iDevUserG0 = NULL_var,
		const CATICkeParm_var iDevUserG1 = NULL_var,
		const CATICkeParm_var iDevUserG2 = NULL_var,
		const CATICkeParm_var iSharpnessAngle = NULL_var,
		const CATGSMHealingMode iComputeMode = CATGSMHealStandard) = 0;


	//==========================================================================
	// REFLECTLINE
	//==========================================================================
	/**
	* Creates a reflectine.
	*   @param isupport
	*      support of the reflectline (surface).
	*   @param idirection
	*      direction for the reflectline.
	*   @param iangle
	*      angle of the reflectline.
	*   @param iOrientationSupport
	*      Orientation use for the support element
	*   @param iOrientationDirection
	*      Orientation use for the direction
	*   @return CATIGSMUseReflectLine_var
	*       the reflectline.
	* @see CATIGSMUseReflectLine, CATIGSMUseDirection
	*/
	virtual CATIGSMUseReflectLine_var CreateReflectLine(const CATIMmiMechanicalFeature_var iSupport,
		const CATIGSMUseDirection_var iDirection,
		const CATICkeParm_var iAngle,
		CATGSMOrientation iOrientationSupport = CATGSMSameOrientation,
		CATGSMOrientation iOrientationDirection = CATGSMSameOrientation) = 0;


	//==========================================================================
	// SPINE
	//==========================================================================
	/**
	* Creates a spine curve.
	*   @return CATIGSMUseSpine_var
	*       created spine.
	*/
	virtual CATIGSMUseSpine_var CreateSpine() = 0;

	/**
	* Creates a spine curve.
	*   @param iListOfSections
	*      List of sections curves or planes
	*   @param iStartPoint
	*      point to be used as a start point
	*   @return CATIGSMUseSpine_var
	*       created spine.
	* @see CATIGSMUseSpine
	*/
	virtual CATIGSMUseSpine_var CreateSpine(const CATLISTV(CATIMmiMechanicalFeature_var) & iListOfSections,
		const CATIMmiMechanicalFeature_var iStartPoint = NULL_var) = 0;

	/**
	* Creates a spine curve.
	*   @param iListOfSections
	*      List of sections curves or planes
	*   @param iStartSectionTangent
	*      tangent surface to be imposed at start section
	*   @param iEndSectionTangent
	*      tangent surface to be imposed at end section
	*   @param iListOfGuides
	*      List of guides curves
	*   @param iStartPoint
	*      point to be used as a start point
	*   @return CATIGSMUseSpine_var
	*       created spine.
	* @see CATIGSMUseSpine
	virtual CATIGSMUseSpine_var CreateSpine(const CATLISTV(CATIMmiMechanicalFeature_var) & iListOfSections,
	const CATIMmiMechanicalFeature_var iStartSectionTangent,
	const CATIMmiMechanicalFeature_var iEndSectionTangent,
	const CATLISTV(CATIMmiMechanicalFeature_var) & iListOfGuides,
	const CATIMmiMechanicalFeature_var iStartPoint = NULL_var) = 0;
	*/

	//==========================================================================
	// LAW
	//==========================================================================
	/**
	* Creates a law from two curves : a reference and a definition curve.
	* Law is created by measuring distance between each point on reference curve
	* and its projection on definition curve.
	*   @param iReference
	*     Reference curve
	*   @param iDefinition
	*     Definition or "target" curve
	*
	* @see CATIGSMUseLawDistProj
	*/
	virtual CATIGSMUseLawDistProj_var CreateLawDistProj(const CATIMmiMechanicalFeature_var iReference,
		const CATIMmiMechanicalFeature_var iDefinition,
		CATBoolean iParameterOnDefinition = FALSE) = 0;


	//==========================================================================
	// SPHERE
	//==========================================================================
	/**
	* Creates a sphere surface.
	*   @param iCenter
	*      The center (a point) of the sphere.
	*   @param iAxis
	*      The axis of the sphere.
	*   @param iRadius
	*      The radius of the sphere.
	*   @param iAng1
	*      First parallel angle.
	*   @param iAng2
	*      Second parallel angle.
	*   @param iAng3
	*      First meridian angle.
	*   @param iAng4
	*      Second meridian angle.
	*   @return CATIGSMUseSphere_var
	*       created sphere.
	* @see CATIGSMUseSphere, CATICkeParm
	*/
	virtual CATIGSMUseSphere_var CreateSphere(const CATIMmiMechanicalFeature_var iCenter,
		const CATIMmiMechanicalFeature_var iAxis,
		const CATICkeParm_var iRadius,
		const CATICkeParm_var iAng1,
		const CATICkeParm_var iAng2,
		const CATICkeParm_var iAng3,
		const CATICkeParm_var iAng4) = 0;


	//==========================================================================
	// POLYLINE
	//==========================================================================
	/**
	* Creates a polyline curve.
	*   @return CATIGSMUsePolyline_var
	*       created polyline.
	*/
	virtual CATIGSMUsePolyline_var CreatePolyline() = 0;

	/**
	* Creates a polyline curve.
	*   @param iListOfPoints
	*      List of points
	*   @param iListOfRadius
	*      List of radius
	*      Radius can be NULL_var
	*   @param iSupport
	*      Support
	*   @return CATIGSMUsePolyline_var
	*       created polyline.
	* @see CATIGSMUsePolyline
	*/
	virtual CATIGSMUsePolyline_var CreatePolyline(const CATLISTV(CATIMmiMechanicalFeature_var) & iListOfPoints,
		const CATCkeListOf(Parm) & iListOfRadius,
		const CATIMmiMechanicalFeature_var iSupport = NULL_var) = 0;

	//==========================================================================
	// GRID SET 
	//==========================================================================
	/**
	* Creates a GridSet with a point and a direction.
	*   @param ihIOrigin
	*      GridSet's origin: a point.
	*   @param ihIDirection
	*      GridSet's direction.
	*   @param iOrientation
	*      GridSet's orientation.
	*      <br><b>Legal values</b>:
	*      <tt>TRUE</tt> means that direction is not inverted
	*      <tt>FALSE</tt> means that direction is inverted
	*   @return CATIGSMUseGridSet_var
	*      created GridSet.
	* @see CATIGSMUseGridSet, CATIGSMUseDirection
	*/
	virtual CATIGSMUseGridSet_var CreateGridSet(const CATIMmiMechanicalFeature_var   &ihIOrigin = NULL_var
		, const CATIGSMUseDirection_var &ihIDirection = NULL_var
		, const CATBoolean            iOrientation = TRUE) = 0;

	//==========================================================================
	// 3D CURVE OFFSET 
	//==========================================================================
	/**
	* Creates a 3D Curve Offset.
	*   @param iCurve
	*      The curve to offset
	*   @param iDirection
	*      Offset pulling direction.
	*   @param iOffsetValue
	*      Offset Value.
	*   @param iCornerRadius
	*      Radius of the 3D corners.
	*   @param iCornerTension
	*      Tension of the 3D corners.
	*   @return CATIGSMUse3DCurveOffset_var
	*      created 3DCurveOffset.
	* @see CATIGSMUse3DCurveOffset, CATIGSMUseDirection
	*/
	virtual CATIGSMUse3DCurveOffset_var Create3DCurveOffset(const CATIMmiMechanicalFeature_var   &iCurve,
		const CATIGSMUseDirection_var &iDirection,
		const CATICkeParm_var      &iOffset,
		const CATICkeParm_var      &iCornerRadius,
		const CATICkeParm_var   &iCornerTension) = 0;

	//==========================================================================
	// EXTRACT MULTI
	//==========================================================================
	/**
	* Extract a sub-element of a solid (vertex, edge or face).
	*   @param iElem
	*      Element to extract
	*   @param iTypeExtract
	*      Type of extract propagation default value : No propagation
	*   @return CATIGSMUseExtractSolide_var
	*      Created feature.
	* @see CATIGSMUseExtractMulti, CATIGSMUseExtractSolidePropag
	*/
	virtual CATIGSMUseExtractMulti_var CreateExtractMulti(const CATLISTV(CATIMmiMechanicalFeature_var) & iReferenceElems) = 0;



	//==========================================================================
	// Convert To Datum 
	//==========================================================================
	/**
	* Converts the spec to a datum feature.
	* <br> WARNING : This method is only available for features which do not have any child,
	* set Verif=0 if you do not want to check this point.
	* <br> Feature to convert should not be in error
	*  @param iSpecOrigin
	*       Spec to convert into datum
	*  @param oListDatumSpec
	*       list of resulting datum
	*  @param iVerif
	*       Check Spec is correct / No child , Inserted in procedural View
	*   <br>Note: for feature Multi-domain, one datum is generated by domain
	*
	*/
	virtual HRESULT ConvertToDatum(const CATIMmiMechanicalFeature_var &iSpecOrigin, CATListValCATIMmiMechanicalFeature_var *&oListDatumSpec, int iVerif = 1) = 0;


	//==========================================================================  
	// OLD METHODS
	//==========================================================================

	/**
	* @nodoc
	* == DO NOT USE ==
	* Creates an explicit point. Preferably, use previous methods with double*.
	*
	* //  Alternative use of GSM Methods (recommended)
	* .....
	* double ptCoord[3];
	* ipt.GetCoord(ptCoord[0],ptCoord[1],ptCoord[2]);
	* CATIGSMUsePoint_var pt  = ispGsmFactory ->CreatePoint(ptCoord);
	* if (!iName.IsNull()){
	*		  CATIAlias_var spIAlias(pt);
	*		  if(!!spIAlias){
	*			  spIAlias -> SetAlias(iName);
	*	  }
	* }
	* ....
	*/
	virtual CATIGSMUsePoint_var CreatePoint(const CATMathPoint & iPt, const CATUnicodeString iUserName = "") = 0;

	/**
	* @nodoc
	* == DO NOT USE ==
	* Creates an explicit line.Preferably, use previous methods with double*.
	*
	* //  Alternative use of GSM Methods (recommended)
	* .....
	*  double ptCoord[3];
	*  double vctCoord[3];
	*  ipt.GetCoord(ptCoord[0],ptCoord[1],ptCoord[2]);
	*  ivct.GetCoord(vctCoord[0],vctCoord[1],vctCoord[2]);
	*  ln   = ispGsmFactory -> CreateLine(ptCoord,vctCoord);
	*  if (!iName.IsNull()){
	*	  CATIAlias_var spIAlias(ln);
	*	  if(!!spIAlias){
	*		  spIAlias -> SetAlias(iName);
	*	  }
	* }
	* ....
	*/

	virtual CATIGSMUseLine_var  CreateLine(const CATMathPoint & iPto, const CATMathDirection & iVct, const CATUnicodeString iUserName = "") = 0;

	/**
	* @nodoc
	* == DO NOT USE ==
	* Creates an explicit line. Preferably, use previous methods with double*.
	*
	* //  Alternative use of GSM Methods (recommended)
	* .....
	*  double pt1Coord[3],  pt2Coord[3];
	*  double vtCoord[3];
	*  ipt1.GetCoord(pt1Coord[0],pt1Coord[1],pt1Coord[2]);
	*  ipt2.GetCoord(pt2Coord[0],pt2Coord[1],pt2Coord[2]);
	*  vtCoord[0] = pt2Coord[0] - pt1Coord[0];
	*  vtCoord[1] = pt2Coord[1] - pt1Coord[1];
	*  vtCoord[2] = pt2Coord[2] - pt1Coord[2];
	*  ln  = ispGsmFactory -> CreateLine (pt1Coord,vtCoord);
	*  if (!iName.IsNull()){
	*	  CATIAlias_var spIAlias(ln );
	*	  if(!!spIAlias){
	*		  spIAlias -> SetAlias(iName);
	*	  }
	*  }
	*   //
	* ....
	*/
	virtual CATIGSMUseLine_var  CreateLine(const CATMathPoint & iPt1, const CATMathPoint & iPt2, const CATUnicodeString iUserName = "") = 0;

	/**
	* @nodoc
	* == DO NOT USE ==
	* Creates an explicit iplane. Preferably, use previous methods with double*.
	*
	* //  Alternative use of GSM Methods
	* .....
	*
	*  CATMathPoint Pt1,Pt2 ;
	*  double ptCoord1[3],ptCoord2[3];
	*  Pt1.GetCoord(ptCoord1[0],ptCoord1[1],ptCoord1[2]);
	*  Pt2.GetCoord(ptCoord2[0],ptCoord2[1],ptCoord2[2]);
	*  pln  =ispGsmFactory -> CreatePlanePtPt(ptCoord1,ptCorrd2);
	*  if (!iName.IsNull()){
	*	  CATIAlias_var spIAlias(pln);
	*	  if(!!spIAlias){
	*		  spIAlias -> SetAlias(iName);
	*	  }
	* }
	* ....
	*/
	virtual CATIGSMUsePlane_var CreatePlane(const CATMathPlane & iPln, const CATUnicodeString iUserName = "") = 0;

	/**
	* @nodoc
	* Creates a tool path feature.
	*   @param ohToolPath
	*      Created tool path feature
	* @return S_OK if the feature has been created correctly
	* @see CATIGSMUseToolPath
	*/
	virtual HRESULT CreateToolPath(CATIGSMUseToolPath_var &ohToolPath) = 0;

  //==========================================================================
  // Mid Surface
  //==========================================================================
  /**
  * Creates a Mid Surface.
  *   @param CATIGSMUseMidSurface_var
  *       the MidSurface feature
  *   @return S_OK if the feature has been created correctly
  * @see CATIGSMUseMidSurface
  */
  virtual HRESULT CreateMidSurface(CATIGSMUseMidSurface_var & ospMidSurface) = 0;
};
CATDeclareHandler(CATIGSMUseFactory, CATBaseUnknown);
#endif // CATGSMFactory_H


