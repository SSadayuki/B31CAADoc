
/* -*-c++-*- */
#ifndef CATIGSMFactory_H
#define CATIGSMFactory_H

// COPYRIGHT DASSAULT SYSTEMES 1997

/**
* @CAA2Level L1
* @CAA2Usage U3
*/

#include "CATIAV5Level.h"

#include "CATGitInterfacesExportedBy.h"
#include "CATBaseUnknown.h"
#include "CATLISTV_CATISpecObject.h"
#include "CATUnicodeString.h"
#include "CATICkeParm.h"

//
// Enumerations 
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
#include "CATIGSMCircle.h"
#include "CATIGSMPoint.h"
#include "CATIGSMLine.h"
#include "CATIGSMAxisLine.h"
#include "CATIGSMPlane.h"
#include "CATIGSMDirection.h"
#include "CATIGSMCurveCst.h"

// Define 
#include "CATIGSMPointOnCurve.h"
//#include "CATIGSMPointBetween.h"
#include "CATIGSMSpiral.h"

class CATIGSMAssemble_var;
class CATIGSMCircleCtrPt_var;
class CATIGSMCircle2PointsRad_var;
class CATIGSMCircle3Points_var;
class CATIGSMCircleCtrRad_var;
class CATIGSMCircleBitangentRadius_var;
class CATIGSMCircleBitangentPoint_var;
class CATIGSMCircleTritangent_var;
class CATIGSMCircleCenterTangent_var;
class CATIGSMCircleCenterAxis_var;
class CATIGSMCurveSmooth_var;
class CATIGSMLinePtPt_var;
class CATIGSMLinePtDir_var;
class CATIGSMLineAngle_var;
class CATIGSMLineTangency_var;
class CATIGSMLineBiTangent_var;
class CATIGSMLineNormal_var;
class CATIGSMLineBisecting_var;
class CATIGSMAxisLine_var;
class CATIGSMPlaneEquation_var;
class CATIGSMPlane3Points_var;
class CATIGSMPlane2Lines_var;
class CATIGSMPlane1Line1Pt_var;
class CATIGSMPlane1Curve_var;
class CATIGSMPlaneTangent_var;
class CATIGSMPlaneNormal_var;
class CATIGSMPlaneOffset_var;
class CATIGSMPlaneOffsetPt_var;
class CATIGSMPlaneAngle_var;
class CATIGSMPlaneMean_var;
class CATIGSMPointCoord_var;
class CATIGSMPointOnSurface_var;
class CATIGSMPointOnPlane_var;
class CATIGSMPointOnCurve_var;
class CATIGSMPointCenter_var;
class CATIGSMPointTangent_var;
class CATIGSMPointBetween_var;
class CATIGSMRotate_var;
class CATIGSMSpline_var;
class CATIGSMScaling_var;
class CATIGSMSymmetry_var;
class CATIGSMAxisToAxis_var;
class CATIGSMTranslate_var;
class CATIGSMSplit_var;
class CATIGSMTrim_var;
class CATIGSMCorner_var;
class CATIGSMProject_var;
class CATIGSMBoundary_var;
class CATIGSMSweepUnspec_var;
class CATIGSMSweepSegment_var;
class CATIGSMSweepCircle_var;
class CATIGSMSweepConic_var;
class CATIGSMInverse_var;
class CATIGSMExtractSolide_var;
class CATIGSMConnect_var;
class CATIGSMCurvePar_var;
class CATIGSMFill_var;
class CATIGSMIntersect_var;
class CATIGSMOffset_var;
class CATIGSMExtrapol_var;
class CATIGSMFilletBiTangent_var;
class CATIGSMFilletTriTangent_var;
class CATIGSMExtrude_var;
//	Start 3DPLM Code	mpq	2/20/2003
class CATIGSMCylinder_var;
//	End 3DPLM Code	mpq	2/20/2003
class CATIGSMRevol_var;
class CATIGSMSweepSketch_var;
class CATIGSMLoft_var;
class CATIGSMAffinity_var;
class CATIGSMNear_var;
class CATIGSMPositionTransfo_var;
class CATMathAxis;
class CATMathPoint;
class CATMathDirection;
class CATMathPlane;
class CATIGSMExtremum_var;
class CATIGSMExtremumPolar_var;
class CATIGSMBlend_var;
class CATIGSMCombine_var;
class CATIGSMHelix_var;
class CATIGSMHealing_var;
class CATIGSMConic_var;
class CATIGSMLaw_var;
class CATIGSMSpine_var;
class CATIGSMReflectLine_var;
class CATIGSMLawDistProj_var;
class CATICkeLaw_var;
class CATIGSMRollingOffset_var;
class CATIGSMSphere_var;
class CATIGSMPolyline_var;
class CATIGSMGridSet_var;
class CATIGSMGridSubset_var;
class CATIGSMGridFace_var;
class CATIGSM3DCurveOffset_var;
class CATIGSMAxisExplicit_var;
class CATIGSMExtractMulti_var;
class CATIGSMSpiral_var;
class CATIGSMSurfaceSimplification_var;
class CATIGSMMidSurface_var;

#ifndef LOCAL_DEFINITION_FOR_IID
extern ExportedByCATGitInterfaces IID  IID_CATIGSMFactory;
#else
extern "C" const IID IID_CATIGSMFactory;
#endif

/**
* Factory of all geometrical elements of Generative Shape Design workshop.
* <b>Role</b>: Creation of all Generative Shape Design feature.
* <p>
* All methods described here work on CATISpecObject (for geometrical elements)
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
* of CATIGSMProceduralView Interface. (recommended since V5R12) </li>
* </ul>
* <p>
* Once aggregated the feature has to be updated.
* <p>
* If feature is inserted in Body or OGS, you have to call CATMmrLinearBodyServices::Insert()
* This method checks the linearity of the Parent/Children relationship and ,if needed,
* performed re-arrangement(Replace) to makes sure that created feature depends logically of just previouly created feature
* <p>
* @see CATIGSMProceduralView,CATIMechanicalRootFactory,CATIGSMTool, CATISpecObject, CATICkeParm, CATICkeParmFactory
*/
class ExportedByCATGitInterfaces CATIGSMFactory : public CATBaseUnknown
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
	*   @return CATIGSMPoint_var
	*       created point
	* @see CATIGSMPoint
	*/
	virtual CATIGSMPoint_var CreatePoint(const double *iPtrPoint) = 0;
	/**
	* Creates an explicit line (infinite).
	*   @param iPtrRootPoint
	*      Coordinates of the start point of the line (array size 3)
	*   @param pVector
	*      Components of the direction of the line (array size 3)
	*   @return CATIGSMLine_var
	*           created line
	* @see CATIGSMLine
	*/
	virtual CATIGSMLine_var  CreateLine(const double *iPtrRootPoint, const double *pVector) = 0;

	/**
	* Creates an explicit line between two points (Limited line).
	*   @param iPtrPt1
	*      Coordinates of the start point of the line (array size 3)
	*   @param  iPtrPt2
	*       Coordinates of the end point of the line (array size 3)
	*   @return CATIGSMLine_var
	*           created line
	* @see CATIGSMLine
	*/
	virtual CATIGSMLine_var  CreateLinePtPt(const double *iPtrPt1, const double *iPtrPt2) = 0;

	/**
	* Creates an explicit iplane.
	*   @param iPtrRootPoint
	*      Coordinates of the center point of the plane (array size 3)
	*   @param iPtrUVector
	*      Components of the first direction of the plane (array size 3)
	*   @param iPtrVVector
	*      Components of the second direction of the plane (array size 3)
	*   @return CATIGSMPlane_var
	*        created  plane
	* @see CATIGSMPlane
	*/
	virtual CATIGSMPlane_var CreatePlane(const double *iPtrRootPoint, const double *iPtrUVector, const double *iPtrVVector) = 0;

	//==========================================================================
	// METHODS TO CREATE GENERIC FEATURES OF TYPE : POINT(ZERODIM)/CURVE(MONODIM)/SURFACE(BIDIM)/VOLUME (TRIDIM)
	//==========================================================================
	/**
	* Creates a simple point.
	*   @return CATISpecObject_var
	*       created point
	*/
	virtual CATISpecObject_var CreateZeroDimExplicit() = 0;
	/**
	* Creates a simple curve.
	*   @return CATISpecObject_var
	*       created curve
	*/
	virtual CATISpecObject_var CreateMonoDimExplicit() = 0;
	/**
	* Creates a simple surface.
	*   @return CATISpecObject_var
	*        created surface
	*/
	virtual CATISpecObject_var CreateBiDimExplicit() = 0;

	/**
	* Creates a simple volume.
	* <br>  Note: requires GSO license, if license  not found creation fails, return NULL_var.
	*   @return CATISpecObject_var
	*        Created Volume
	*/
	virtual CATISpecObject_var CreateTriDimExplicit() = 0;


	/**
	* Creates an explicit point which has no associative father but
	* only a geometrical output.
	*   @return CATISpecObject_var
	*       created point
	* @see CATIGSMPoint
	*/
	virtual CATIGSMPoint_var CreatePointExplicit() = 0;
	/**
	* Creates an explicit line which has no associative father but
	* only a geometrical output.
	*   @return CATISpecObject_var
	*       created line
	* @see CATIGSMLine
	*/
	virtual CATIGSMLine_var CreateLineExplicit() = 0;

	/**
	* Creates an explicit axis which has no associative father but
	* only a geometrical output.
	*	@return CATISpecObject_var
	*       created axis
	* @see CATIGSMAxisExplicit
	*/
	virtual CATIGSMAxisExplicit_var CreateAxisExplicit(const int& iAxisReferenceNumber, const CATMathPoint* iPto = NULL, const CATMathDirection* iVct = NULL) = 0;

	/**
	* Creates an explicit circle which has no associative father but
	* only a geometrical output.
	*   @return CATISpecObject_var
	*       created circle
	* @see CATIGSMCircle
	*/
	virtual CATIGSMCircle_var CreateCircleExplicit() = 0;
	/**
	* Creates an explicit iplane which has no associative father but
	* only a geometrical output.
	*   @return CATISpecObject_var
	*       created  plane
	* @see CATIGSMPlane
	*/
	virtual CATIGSMPlane_var CreatePlaneExplicit() = 0;

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
	*   @return CATIGSMPointCoord_var
	*       created point
	* @see CATIGSMPointCoord
	*/
	virtual CATIGSMPointCoord_var CreatePoint(const CATICkeParm_var iFirstCoord,
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
	*   @return CATIGSMPointCoord_var
	*       created point
	* @see CATIGSMPointCoord
	*/
	virtual CATIGSMPointCoord_var CreatePoint(const CATICkeParm_var iFirstCoord,
		const CATICkeParm_var iSecondCoord,
		const CATICkeParm_var iThirdCoord,
		const CATISpecObject_var iPoint) = 0;

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
	*   @return CATIGSMPointBetween_var : the created point
	* @see CATIGSMPointBetween
	*/
	virtual CATIGSMPointBetween_var CreatePointBetween(const CATISpecObject_var FirstPoint,
		const CATISpecObject_var SecondPoint,
		const CATICkeParm_var Ratio,
		const CATGSMOrientation Orientation,
		const CATISpecObject_var iSupport = NULL_var) = 0;

	/**
	* Creates a point on curve at a given curvilinear distance.
	*   @param iCurve
	*      iSupport curve.
	*   @param iPoint
	*      iReference point for computing distance.
	*      If iCurve is a closed curve, a valid point is mandatory.
	*      If iCurve is an open curve, NULL_var is allowed and the extremity of the curve is taken.
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
	*   @return CATIGSMPointOnCurve_var
	*       created point
	* @see CATIGSMPointOnCurve
	*/
	virtual CATIGSMPointOnCurve_var CreatePoint(const CATISpecObject_var iCurve,
		const CATISpecObject_var iPoint,
		const CATICkeParm_var iDistance,
		const CATGSMOrientation iOrientation,
		const CATIGSMPointOnCurve::DistanceType iType = CATIGSMPointOnCurve::Geodesic) = 0;
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
	*   @return CATIGSMPointOnPlane_var
	*       created point
	* @see CATIGSMPointOnPlane
	*/
	virtual CATIGSMPointOnPlane_var CreatePoint(const CATISpecObject_var iPlane,
		const CATISpecObject_var iPoint,
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
	*   @return CATIGSMPointOnSurface_var
	*       created point
	* @see CATIGSMPointOnSurface, CATIGSMDirection
	*/
	virtual CATIGSMPointOnSurface_var CreatePoint(const CATISpecObject_var iSurface,
		const CATISpecObject_var iPoint,
		const CATIGSMDirection_var iDirection,
		const CATICkeParm_var iDistance) = 0;
	/**
	* Creates a point at the center of a circle.
	*   @param iCurve
	*      Circle.
	*   @return CATIGSMPointCenter_var
	*       created point
	* @see CATIGSMPointCenter
	*/
	virtual CATIGSMPointCenter_var CreatePoint(const CATISpecObject_var iCurve) = 0;

	/**
	* Creates a point on a given curve where the tangent is colinear to a given direction.
	*   @param iCurve
	*      iReference curve.
	*   @param iDirection
	*      The computed point will be tangent to the curve with this direction.
	*   @return CATIGSMPointTangent_var
	*       created point.
	* @see CATIGSMPointTangent, CATIGSMDirection
	*/
	virtual CATIGSMPointTangent_var CreatePoint(const CATISpecObject_var iCurve,
		const CATIGSMDirection_var iDirection) = 0;

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
	*   @return CATIGSMLinePtPt_var
	*       created line.
	* @see CATIGSMLinePtPt
	*/
	virtual CATIGSMLinePtPt_var CreateLine(const CATISpecObject_var iPoint1,
		const CATISpecObject_var iPoint2,
		const CATISpecObject_var iSupport = NULL_var) = 0;
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
	*   @return CATIGSMLinePtDir_var
	*       created line.
	* @see CATIGSMLinePtDir, CATIGSMDirection
	*/
	virtual CATIGSMLinePtDir_var CreateLine(const CATISpecObject_var iPoint,
		const CATIGSMDirection_var iDirection,
		const CATICkeParm_var iStartLength,
		const CATICkeParm_var iEndLength,
		const CATGSMOrientation iOrientation,
		const CATISpecObject_var iSupport = NULL_var) = 0;
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
	*   @return CATIGSMLineAngle_var
	*       created line.
	* @see CATIGSMLineAngle
	*/
	virtual CATIGSMLineAngle_var CreateLine(const CATISpecObject_var iCurve,
		const CATISpecObject_var iSurface,
		const CATISpecObject_var iPoint,
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
	*   @return CATIGSMLineAngle_var
	*       created line.
	* @see CATIGSMLineTangency
	*/
	virtual CATIGSMLineTangency_var CreateLineTangency(const CATISpecObject_var iCurve,
		const CATISpecObject_var iPoint,
		const CATICkeParm_var iStartLength,
		const CATICkeParm_var iEndLength,
		const CATGSMOrientation iOrientation,
		const CATISpecObject_var iSupport = NULL_var) = 0;
	/**
	* Creates a line tangent to two elements on a support  surface.
	*   @param Element1
	*      Fisrt tangency curve lying on the support surface.
	*   @param Element2
	*      Second tangency element (point, curve) lying on the support surface.
	*   @param Support
	*      The support surface of the two elements.
	*   @return CATIGSMLineBiTangent_var: the Bi-Tangent line.
	* @see CATIGSMLineBiTangent
	*/
	virtual CATIGSMLineBiTangent_var CreateLineBiTangent(const CATISpecObject_var Curve1,
		const CATISpecObject_var Element2,
		const CATISpecObject_var Support) = 0;
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
	*   @return CATIGSMLineAngle_var
	*       created line.
	* @see CATIGSMLineNormal
	*/
	virtual CATIGSMLineNormal_var CreateLineNormal(const CATISpecObject_var iSurface,
		const CATISpecObject_var iPoint,
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
	*   @return CATIGSMLineBisecting_var
	*       created line.
	* @see CATIGSMFactory#CreateLine
	*/
	virtual CATIGSMLineBisecting_var CreateLine(const CATISpecObject_var iLine1,
		const CATISpecObject_var iLine2,
		const CATISpecObject_var iPt,
		const CATISpecObject_var iSurface,
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
	*   @return CATIGSMAxisLine_var: created axis line.
	* @see CATIGSMAxisLine
	*/
	virtual CATIGSMAxisLine_var CreateAxisLine(const CATISpecObject_var ihElement,
		const CATGSMAxisLineType iAxisType = CATGSMAxisLineType_NormalToCircle,
		const CATIGSMDirection_var ihDirection = NULL_var) = 0;


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
	*   @return CATIGSMPlaneEquation_var
	*       created  plane.
	* @see CATIGSMPlaneEquation, CATICkeParm
	*/
	virtual CATIGSMPlaneEquation_var CreatePlane(const CATICkeParm_var iA_Coeff,
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
	*   @return CATIGSMPlane3Points_var
	*       created  plane.
	* @see CATIGSMPlane3Points
	*/
	virtual CATIGSMPlane3Points_var CreatePlane(const CATISpecObject_var iFirstPoint,
		const CATISpecObject_var iSecondPoint,
		const CATISpecObject_var iThirdPoint) = 0;
	/**
	* Creates a iplane passing through 2 lines.
	*   @param iFirstLine
	*      first line
	*   @param iSecondLine
	*      second line
	*   @return CATIGSMPlane2Lines_var
	*       created  plane.
	* @see CATIGSMPlane2Lines
	*/
	virtual CATIGSMPlane2Lines_var CreatePlane(const CATISpecObject_var iFirstLine,
		const CATISpecObject_var iSecondLine,
		int iCoplanarLines = 0) = 0;
	/**
	* Creates a iplane passing through 1 line and 1 point.
	*   @param iPoint
	*      point
	*   @param iLine
	*      line
	*   @return CATIGSMPlane1Line1Pt_var
	*       created  plane.
	* @see CATIGSMPlane1Line1Pt
	*/
	virtual CATIGSMPlane1Line1Pt_var CreatePlane1Line1Pt(const CATISpecObject_var iPoint,
		const CATISpecObject_var iLine) = 0;
	/**
	* Creates a iplane passing through a planar curve.
	*   @param iPlanarCurve
	*      planar curve
	*   @return CATIGSMPlane1Curve_var
	*       created  plane.
	* @see CATIGSMPlane1Curve
	*/
	virtual CATIGSMPlane1Curve_var CreatePlane(const CATISpecObject_var iPlanarCurve) = 0;
	/**
	* Creates a iplane tangent to a surface at a given point.
	*   @param iSurface
	*      surface
	*   @param iPoint
	*      point
	*   @return  CATIGSMPlaneTangent_var
	*       created  plane.
	* @see CATIGSMPlaneTangent
	*/
	virtual CATIGSMPlaneTangent_var CreatePlaneTangent(const CATISpecObject_var iSurface,
		const CATISpecObject_var iPoint) = 0;
	/**
	* Creates a iplane normal to a curve at a given point.
	*   @param iCurve
	*      curve
	*   @param iPoint
	*      point on the curve, where the plane has to be normal.
	*      When no point is given, the curve middle point is taken.
	*   @return CATIGSMPlaneNormal_var
	*       created  plane.
	* @see CATIGSMPlaneNormal
	*/
	virtual CATIGSMPlaneNormal_var CreatePlaneNormal(const CATISpecObject_var iCurve,
		const CATISpecObject_var iPoint = NULL_var) = 0;
	/**
	* Creates a iplane which is offset from another iplane.
	* <br> iOrientation = TRUE reverses the plane
	*   @param iPlane
	*      iplane
	*   @param iOffset
	*      offset
	*   @param iOrientation
	*      Orientation
	*   @return CATIGSMPlaneOffset_var
	*       created  plane.
	* @see CATIGSMPlaneOffset, CATICkeParm, CATGSMOrientation
	*/
	virtual CATIGSMPlaneOffset_var CreatePlane(const CATISpecObject_var iPlane,
		const CATICkeParm_var iOffset,
		const CATGSMOrientation iOrientation) = 0;
	/**
	* Creates a iplane which is offset from another iplane.
	* <br> iOffset is defined by the distance beween teh iplane and a point.
	*   @param iPlane
	*       reference plane.
	*   @param iPoint
	*      the point through which the plane is to pass.
	*   @returns CATIGSMPlaneOffsetPt_var
	*      created  plane.
	*   @see CATIGSMPlaneOffsetPt
	*/
	virtual CATIGSMPlaneOffsetPt_var CreatePlaneOffsetPt(const CATISpecObject_var iPlane,
		const CATISpecObject_var iPoint) = 0;
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
	*   @return CATIGSMPlaneAngle_var
	*       created  plane.
	* @see CATIGSMPlaneAngle, CATICkeParm, CATGSMOrientation
	*/
	virtual CATIGSMPlaneAngle_var CreatePlane(const CATISpecObject_var iPlane,
		const CATISpecObject_var iRotationAxis,
		const CATICkeParm_var iAngle,
		const CATGSMOrientation iOrientation) = 0;

	/**
	* Creates a mean iplane through a set of points.
	* <br>The points do not necessary lie in this iplane.
	*   @param iListOfPoints
	*      ListOfPoints
	*   @return CATIGSMPlaneMean_var
	*       created  plane.
	* @see CATIGSMPlaneMean
	*/
	virtual CATIGSMPlaneMean_var CreatePlane(const CATLISTV(CATISpecObject_var)& iListOfPoints) = 0;

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
	*   @return CATIGSMCircleCtrRad_var
	*       created circle.
	* @see CATIGSMCircleCtrRad, CATICkeParm
	*/
	virtual CATIGSMCircleCtrRad_var CreateCircle(const CATISpecObject_var iCenter,
		const CATISpecObject_var iSurface,
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
	*   @return CATIGSMCircleCtrPt_var
	*       created circle.
	* @see CATIGSMCircleCtrPt, CATICkeParm
	*/
	virtual CATIGSMCircleCtrPt_var CreateCircle(const CATISpecObject_var iCenter,
		const CATISpecObject_var iPassingPoint,
		const CATISpecObject_var iSurface,
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
	*   @return CATIGSMCircle2PointsRad_var
	*       created circle.
	* @see CATIGSMCircle2PointsRad, CATICkeParm, CATGSMOrientation
	*/
	virtual CATIGSMCircle2PointsRad_var CreateCircle(const CATISpecObject_var iFirstPoint,
		const CATISpecObject_var iSecondPoint,
		const CATISpecObject_var iSurface,
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
	*   @return CATIGSMCircle3Points_var
	*       created circle.
	* @see CATIGSMCircle3Points
	*/
	virtual CATIGSMCircle3Points_var CreateCircle(const CATISpecObject_var iFirstPoint,
		const CATISpecObject_var iSecondPoint,
		const CATISpecObject_var iThirdPoint) = 0;

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
	*   @return  CATIGSMCircleCenterAxis_var
	*       created circle.
	* @see CATIGSMCircleCenterAxis, CATICkeParm
	*/

	virtual CATIGSMCircleCenterAxis_var CreateCircle(const CATISpecObject_var iAxis,
		const CATISpecObject_var iPoint,
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
	*   @return  CATIGSMCircleBitangentRadius_var
	*       created circle.
	* @see CATIGSMCircleBitangentRadius, CATGSMOrientation, CATICkeParm
	*/
	virtual CATIGSMCircleBitangentRadius_var CreateTangentCircle(const CATISpecObject_var iFirstElem,
		const CATISpecObject_var iSecondElem,
		const CATISpecObject_var iSurface,
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
	*   @return  CATIGSMCircleBitangentPoint_var
	*       created circle.
	* @see CATIGSMCircleBitangentPoint, CATGSMOrientation
	*/
	virtual CATIGSMCircleBitangentPoint_var CreateTangentCircle(const CATISpecObject_var iFirstElem,
		const CATISpecObject_var iSecondCurve,
		const CATISpecObject_var iPoint,
		const CATISpecObject_var iSurface,
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
	*   @return   CATIGSMCircleTritangent_var
	*       created circle.
	* @see CATIGSMCircleTritangent, CATGSMOrientation
	*/
	virtual CATIGSMCircleTritangent_var CreateTangentCircle(const CATISpecObject_var iFirstElem,
		const CATISpecObject_var iSecondElem,
		const CATISpecObject_var iThirdElem,
		const CATISpecObject_var iSurface,
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
	*   @return  CATIGSMCircleCenterTangent_var
	*       created circle.
	* @see CATIGSMCircleCenterTangent, CATICkeParm
	*/

	virtual CATIGSMCircleCenterTangent_var CreateTangentCircle(const CATISpecObject_var iCenterElem,
		const CATISpecObject_var iTangentElem,
		const CATISpecObject_var iSurface,
		const CATICkeParm_var iRadius) = 0;

	//==========================================================================
	// SPLINES
	//==========================================================================
	/**
	* Creates an empty cubic spline.
	*   @return   CATIGSMSpline_var
	*       created spline
	* @see CATIGSMSpline
	*/
	virtual CATIGSMSpline_var CreateSplinePoints() = 0;
	/**
	* Creates a cubic spline from a list of points.
	*   @param ListOfPoints
	*      ListOfPoints
	*   @return   CATIGSMSpline_var
	*       created spline
	* @see CATIGSMSpline
	*/
	virtual CATIGSMSpline_var CreateSplinePoints(const CATLISTV(CATISpecObject_var)& ListOfPoints) = 0;

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
	*   @return   CATIGSMCurveCst_var
	*       created CurveCst
	* @see CATIGSMCurveCst, CATIGSMDirection, CATICkeParm
	*/
	virtual CATIGSMCurveCst_var CreateCurveCst(
		const CATISpecObject_var   iPoint,
		const CATIGSMDirection_var iTgtDirection = NULL_var,
		const CATICkeParm_var      iTgtTension = NULL_var,
		const CATIGSMDirection_var iRadiusDirection = NULL_var,
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
	*   @return   CATIGSMConic_var
	*       created Conic Curve
	* @see CATIGSMConic, CATIGSMCurveCst, CATICkeParm
	*/
	virtual CATIGSMConic_var CreateConic(
		const CATISpecObject_var iPlane,
		const CATIGSMCurveCst_var iStartCst,
		const CATIGSMCurveCst_var iEndCst,
		const CATIGSMCurveCst_var iFirstPassCst = NULL_var,
		const CATIGSMCurveCst_var iSecondPassCst = NULL_var,
		const CATIGSMCurveCst_var iThirdPassCst = NULL_var,
		const CATISpecObject_var  iTgtIntPoint = NULL_var,
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
	*   @return CATIGSMCurvePar_var
	*       created curve
	* @see CATIGSMCurvePar, CATICkeParm
	*/
	virtual CATIGSMCurvePar_var CreateCurvePar(const CATISpecObject_var iCurve,
		const CATISpecObject_var iSupport,
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
	*   @return CATIGSMCurvePar_var
	*       created curve
	* @see CATIGSMCurvePar, CATICkeLaw
	*/
	virtual CATIGSMCurvePar_var CreateCurvePar(const CATISpecObject_var iCurve,
		const CATISpecObject_var iSupport,
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
	* @nodoc
	* - DO NOT USE - DO NOT USE - DO NOT USE - DO NOT USE - DO NOT USE -
	* Creates a curves list which is an offset (constant) from another curves list.
	*   @param iCurves
	*      List of Curve to be offset.
	*   @param iSupport
	*      Support.
	*   @param iDistance
	*      Offset distance.
	*   @param Geodesic
	*      False : Euclidian mode
	*      True : Geodesic mode
	*   @return CATIRollingOffset_var
	*       created curve
	* @see CATIGSMCurvePar2, CATICkeParm
	* - DO NOT USE - DO NOT USE - DO NOT USE - DO NOT USE - DO NOT USE -
	*/
	virtual CATIGSMRollingOffset_var CreateRollingOffset( /*const CATLISTV(CATISpecObject_var) iCurves,
														  const CATISpecObject_var iSupport,
														  const CATICkeParm_var    iDistance , CATBoolean Geodesic=FALSE*/) = 0;

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
														  *   @return CATIGSMConnect_var
														  *       created curve
														  * @see CATIGSMConnect, CATGSMOrientation, CATGSMContinuity, CATICkeParm
														  */
	virtual CATIGSMConnect_var CreateConnect(const CATISpecObject_var iCurve1,
		const CATISpecObject_var iPoint1,
		const CATGSMOrientation iOrient1,
		const CATGSMContinuity iContinuity1,
		const CATICkeParm_var    iTension1,
		const CATISpecObject_var iCurve2,
		const CATISpecObject_var iPoint2,
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
	*   @return CATIGSMCorner_var
	*       created curve
	* @see CATIGSMCorner, CATICkeParm, CATGSMOrientation
	*/
	virtual CATIGSMCorner_var CreateCorner(const CATISpecObject_var iElement1,
		const CATISpecObject_var iElement2,
		const CATISpecObject_var iSupport,
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
	*   @return CATIGSMCorner_var
	*       created curve
	* @see CATIGSMCorner, CATICkeParm, CATGSMOrientation, CATIGSMDirection
	*/

	virtual CATIGSMCorner_var Create3DCorner(const CATISpecObject_var iElement1,
		const CATISpecObject_var iElement2,
		const CATIGSMDirection_var iDirection,
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
	*   @return CATIGSMIntersect_var
	*       the intersection.
	* @see CATIGSMIntersect
	*/
	virtual CATIGSMIntersect_var CreateIntersect(const CATISpecObject_var iElement1,
		const CATISpecObject_var iElement2,
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
	*   @return CATIGSMProject_var
	*       the projection.
	* @see CATIGSMProject, CATIGSMDirection, CATGSMProjectSolutionType
	*/
	virtual CATIGSMProject_var CreateProject(const CATISpecObject_var iToProject,
		const CATISpecObject_var iSupport,
		const CATIGSMDirection_var iDirection,
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
	*   @return CATIGSMExturde_var
	*      created extrusion.
	* @see CATIGSMExtrude, CATIGSMDirection, CATICkeParm
	*/
	virtual CATIGSMExtrude_var CreateExtrude(const CATISpecObject_var iSpecIn,
		const CATIGSMDirection_var iSpecDir,
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
	*   @return CATIGSMCylinder_var
	*      created Cylinder.
	* @see CATIGSMCylinder, CATIGSMDirection, CATICkeParm
	*/
	virtual CATIGSMCylinder_var CreateCylinder(const CATISpecObject_var    iSpecIn,
		const CATIGSMDirection_var  iSpecDir,
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
	*   @return CATIGSMRevol_var
	*       created revolution.
	* @see CATIGSMRevol, CATICkeParm
	*/
	virtual CATIGSMRevol_var CreateRevol(const CATISpecObject_var iProfil,
		const CATISpecObject_var iDir,
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
	*   @return CATIGSMOffset_var
	*       created offset surface.
	* @see CATIGSMOffset, CATICkeParm
	*/
	virtual CATIGSMOffset_var CreateOffset(const CATISpecObject_var iSpecIn,
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
	*   @return CATIGSMPointCoord_var
	*       created point
	* @see CATIGSMPointCoord
	*/
	virtual CATIGSMPointCoord_var CreateCuttingPoint(const CATICkeParm_var iFirstCoord,
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
	*   @return CATIGSMPointOnCurve_var
	*       created point
	* @see CATIGSMPointOnCurve
	*/
	virtual CATIGSMPointOnCurve_var CreateCuttingPoint(const CATISpecObject_var iCurve,
		const CATISpecObject_var iPoint,
		const CATICkeParm_var iDistance,
		const CATGSMOrientation iOrientation,
		const CATIGSMPointOnCurve::DistanceType iType = CATIGSMPointOnCurve::Geodesic) = 0;

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
	*   @return CATIGSMSweepUnspec_var
	*       created sweep.
	* @see CATIGSMSweepUnspec
	*/
	virtual CATIGSMSweepUnspec_var CreateExplicitSweep(const CATISpecObject_var iGuide,
		const CATISpecObject_var iProfile,
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
	*   @return CATIGSMSweepUnspec_var
	*       created sweep.
	* @see CATIGSMSweepUnspec, CATICkeParm
	*/
	virtual CATIGSMSweepUnspec_var CreateExplicitSweep(const CATISpecObject_var iGuide,
		const CATISpecObject_var iProfile,
		const CATISpecObject_var iSpine,
		const CATISpecObject_var iReference,
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
	*   @return CATIGSMSweepUnspec_var
	*       created sweep.
	* @see CATIGSMSweepUnspec
	*/
	virtual CATIGSMSweepUnspec_var CreateExplicitSweep(const CATISpecObject_var iGuide1,
		const CATISpecObject_var iGuide2,
		const CATISpecObject_var iProfile,
		const CATISpecObject_var iSpine,
		const CATBoolean ibInstanciateTransfo = TRUE) = 0;
	/**
	* Creates a sweep with a linear implicit profile.
	*   @param iGuide1
	*      First guide.
	*   @param iGuide2
	*      Second guide.
	*   @return CATIGSMSweepSegment_var
	*       created sweep.
	* @see CATIGSMSweepSegment
	*/
	virtual CATIGSMSweepSegment_var CreateLinearSweep(const CATISpecObject_var iGuide1,
		const CATISpecObject_var iGuide2) = 0;
	/**
	* Creates a sweep with a circular implicit profile.
	*   @param iGuide1
	*      First guide corresponding to the first circle arc extremity.
	*   @param iGuide2
	*      Second guide corresponding to an intermediate point of the circle arc.
	*   @param iGuide3
	*      Third guide corresponding to the second circle arc extremity.
	*   @return CATIGSMSweepCircle_var
	*       created sweep.
	* @see CATIGSMSweepCircle
	*/
	virtual CATIGSMSweepCircle_var CreateCircularSweep(const CATISpecObject_var iGuide1,
		const CATISpecObject_var iGuide2,
		const CATISpecObject_var iGuide3) = 0;

	/**
	* Creates a sweep with a conical implicit profile.
	*   @param iGuide1
	*      First guide corresponding to the first circle arc extremity.
	*   @param iGuide2
	*      Second guide corresponding to an intermediate point of the circle arc.
	*   @return CATIGSMSweepConic_var
	*       created sweep.
	* @see CATIGSMSweepConic
	*/
	virtual CATIGSMSweepConic_var CreateConicalSweep(const CATISpecObject_var iGuide1,
		const CATISpecObject_var iGuide2) = 0;

	//==========================================================================
	// LOFTS
	//==========================================================================
	/**
	* Creates a lofted surface.
	*   @return CATIGSMLoft_var
	*       created loft.
	* Use the interface @href CATIGSMLoft to define your sections, guides...
	*/
	virtual CATIGSMLoft_var CreateLoft() = 0;

	/**
	* Creates a loft.
	*   @param iListOfSections
	*      List of sections curves
	*   @param iListOfGuides
	*      List of guides curves
	*   @return CATIGSMLoft_var
	*       created loft.
	* @see CATIGSMLoft
	*/
	virtual CATIGSMLoft_var CreateLoft(const CATLISTV(CATISpecObject_var) & iListOfSections,
		const CATLISTV(CATISpecObject_var) & iListOfGuides) = 0;

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
	*   @return CATIGSMLoft_var
	*       created loft.
	* @see CATIGSMLoft, CATGSMLoftSpineType
	*/
	virtual CATIGSMLoft_var CreateLoft(const CATLISTV(CATISpecObject_var) & iListOfSections,
		const CATListOfInt & iListOfOrientations,
		const CATLISTV(CATISpecObject_var) & iListOfClosingPoints,
		const CATISpecObject_var iStartSectionTangent,
		const CATISpecObject_var iEndSectionTangent,
		const CATLISTV(CATISpecObject_var) & iListOfGuides,
		const CATGSMLoftSpineType iSpineType = CATGSMLoftCalculatedSpine,
		const CATISpecObject_var iSpine = NULL_var) = 0;

	//==========================================================================
	// FILL
	//==========================================================================
	/**
	* Creates a fill surface.
	* Use the interface CATIGSMFill to define your boundaries, supports...
	*   @return CATIGSMFill_var
	*       the fill.
	* @see CATIGSMFill
	*/
	virtual CATIGSMFill_var CreateFill() = 0;

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
	*   @return CATIGSMFill_var
	*       created fill surface.
	* @see CATIGSMFill, CATGSMContinuity
	*/
	virtual CATIGSMFill_var CreateFill(const CATLISTV(CATISpecObject_var)& iListOfBoundaries,
		const CATLISTV(CATISpecObject_var)& iListOfSupport,
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
	*   @return CATIGSMFill_var
	*       created fill surface.
	* @see CATIGSMFill, CATGSMContinuity
	*/
	virtual CATIGSMFill_var CreateFill(const CATLISTV(CATISpecObject_var)& iListOfBoundaries,
		const CATLISTV(CATISpecObject_var)& iListOfSupport,
		CATGSMContinuity iContinuity,
		const CATISpecObject_var iConstraint) = 0;




	//==========================================================================
	// ASSEMBLY/JOIN
	//==========================================================================

	/**
	* Creates a composite curve or surface.
	*   @return CATIGSMAssemble_var : the created composite curve of surface.
	* @see CATIGSMAssemble
	*/
	virtual CATIGSMAssemble_var CreateNewAssemble() = 0;

	/**
	* Creates a composite curve or surface.
	* Use the interface CATIGSMAssemble to define the list of elements to be joined.
	*   @param iDevuser
	*      merging distance fixed by the user
	*   @param iConnex
	*      connected mode : FALSE = non connected elements,
	*                       TRUE  = only connected element
	*   @return CATIGSMAssemble_var : the created composite curve of surface.
	* @see CATIGSMAssemble, CATICkeParm
	*/
	virtual CATIGSMAssemble_var CreateAssemble(const CATICkeParm_var iDevUser = NULL_var,
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
	*   @return CATIGSMAssemble_var : the created composite curve or surface.
	* @see CATIGSMAssemble, CATICkeParm
	*/
	virtual CATIGSMAssemble_var CreateAssemble(const CATLISTV(CATISpecObject_var)& ListElemToAssemble,
		const CATICkeParm_var iDevUser = NULL_var,
		CATBoolean iConnex = FALSE) = 0;

	//==========================================================================
	// SPLIT
	//==========================================================================
	/**
	* Creates a split element by cutting and relimiting an element by several elements.
	* Use the interface CATIGSMSplit to define element to be cut and cutting elements.
	*   @return CATIGSMSplit_var
	*       created feature.
	* @see CATIGSMSplit
	*/
	virtual CATIGSMSplit_var CreateSplit() = 0;


	/**
	* Creates a split element by cutting and relimiting an element by another element.
	*   @param iToCut
	*      The feature to cut (curve or surface).
	*   @param iCutting
	*      The cutting feature (point, curve, surface).
	*   @param iOrientation
	*      Manage the kept side of iToCut
	*   @return CATIGSMSplit_var
	*       created feature.
	* @see CATIGSMSplit
	*/
	virtual CATIGSMSplit_var CreateSplit(const CATISpecObject_var iToCut,
		const CATISpecObject_var iCutting,
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
	*   @return CATIGSMTrim_var
	*       created feature.
	* @see CATIGSMTrim, CATGSMOrientation
	*/
	virtual CATIGSMTrim_var CreateTrim(const CATISpecObject_var iFirstElement,
		CATGSMOrientation iOrientation1,
		const CATISpecObject_var iSecondElement,
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
	* @see CATIGSMFilletBiTangent, CATGSMOrientation, CATGSMFilletSupportsTrimMode, CATGSMFilletExtremitiesMode, CATICkeParm
	*/
	virtual CATIGSMFilletBiTangent_var CreateFillet(const CATISpecObject_var ispElement1,
		const CATISpecObject_var ispElement2,
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
	* @see CATIGSMFilletBiTangent, CATGSMOrientation, CATGSMFilletSupportsTrimMode, CATGSMFilletExtremitiesMode, CATICkeParm
	*/
	virtual CATIGSMFilletTriTangent_var CreateFilletTriTangent(const CATISpecObject_var iElement1,
		const CATISpecObject_var iElement2,
		const CATISpecObject_var iRemoveElement,
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
	*   @return CATIGSMExtrapol_var
	*      created feature.
	* @see CATIGSMExtrapol, CATGSMExtrapolContinuityType, CATGSMExtrapolBorderType.
	*/
	virtual CATIGSMExtrapol_var CreateExtrapol(const CATISpecObject_var iBoundary,
		const CATISpecObject_var iToExtrapol,
		const CATISpecObject_var iUntil,
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
	*   @return CATIGSMExtrapol_var
	*      created feature.
	* @see CATIGSMExtrapol, CATGSMExtrapolContinuityType, CATGSMExtrapolBorderType
	*/
	virtual CATIGSMExtrapol_var CreateExtrapol(const CATISpecObject_var iBoundary,
		const CATISpecObject_var iToExtrapol,
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
	*   @return CATIGSMBoundary_var
	*      Created feature.
	* @see CATIGSMBoundary, CATGSMOrientation, CATIGSMBoundaryPropag
	*/
	virtual CATIGSMBoundary_var CreateBoundary(const CATISpecObject_var iElem,
		const CATISpecObject_var iSupport,
		CATIGSMBoundaryPropag  iPropagationType = BOUNDARY_TANGENT_PROPAG,
		const CATISpecObject_var iFrom = NULL_var,
		const CATISpecObject_var iTo = NULL_var,
		CATGSMOrientation iOrientationFrom = CATGSMSameOrientation,
		CATGSMOrientation iOrientationTo = CATGSMSameOrientation) = 0;

	//==========================================================================
	// INVERSION
	//==========================================================================
	/**
	* Inverts the orientation of a curve or a surface.
	*   @param iElem
	*      Element to invert
	*   @return CATIGSMInverse_var
	*      Created feature.
	* @see CATIGSMInverse
	*/
	virtual CATIGSMInverse_var CreateInverse(const CATISpecObject_var iElem) = 0;

	//==========================================================================
	// EXTRACT SOLID
	//==========================================================================
	/**
	* Extract a sub-element of a solid (vertex, edge or face).
	*   @param iElem
	*      Element to extract
	*   @param iTypeExtract
	*      Type of extract propagation default value : No propagation
	*   @return CATIGSMExtractSolide_var
	*      Created feature.
	* @see CATIGSMExtractSolide, CATIGSMExtractSolidePropag
	*/
	virtual CATIGSMExtractSolide_var CreateExtractSolide(const CATISpecObject_var         iElem,
		const CATIGSMExtractSolidePropag iType = ExtractSolide_NoPropag) = 0;

	//==========================================================================
	// DIRECTION
	//==========================================================================
	/**
	* Creates a direction from a line or a iplane.
	*   @param iEltDir
	*      Element reference for direction
	*   @return CATIGSMDirection_var
	*      Created feature.
	* @see CATIGSMDirection
	*/
	virtual CATIGSMDirection_var CreateDirection(const CATISpecObject_var iEltDir) = 0;

	/**
	* Creates a direction from 3 componants (X,Y,Z).
	*   @param iLitX
	*      Litterral Value for X direction coordinate
	*   @param iLitY
	*      Litterral Value for Y direction coordinate
	*   @param iLitZ
	*      Litterral Value for Z direction coordinate
	*   @return CATIGSMDirection_var
	*      Created feature.
	* @see CATIGSMDirection, CATICkeParm
	*/
	virtual CATIGSMDirection_var CreateDirection(const CATICkeParm_var iLitX,
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
	*   @return CATIGSMNear_var
	*      Created feature.
	* @see CATIGSMNear
	*/
	virtual CATIGSMNear_var CreateNear(const CATISpecObject_var iMultiElement,
		const CATISpecObject_var iReferenceElement) = 0;


	//==========================================================================
	// CURVE SMOOTH
	//==========================================================================
	/**
	* Creates a smoothed curve.
	*   @param iCurve
	*      Curve to be smoothed.
	*   @return CATIGSMCurveSmooth_var
	*      Created feature.
	* @see CATIGSMCurveSmooth
	*/
	virtual CATIGSMCurveSmooth_var CreateCurveSmooth(const CATISpecObject_var iCurve) = 0;


	//==========================================================================
	// SYMMETRY
	//==========================================================================
	/**
	* Creates a symmetrical point, curve or surface.
	*   @param iToSymmetry
	*      point, curve, surface or solid.
	*   @param invariant
	*      point, line or iplane.
	*   @return CATIGSMSymmetry_var
	*       created symmetry.
	* @see CATIGSMSymmetry
	*/
	virtual CATIGSMSymmetry_var CreateSymmetry(const CATISpecObject_var iToSymmetry,
		const CATISpecObject_var invariant) = 0;

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
	*   @return CATIGSMAxisToAxis_var
	*       created transformation.
	* @see CATIGSMAxisToAxis
	*/
	virtual CATIGSMAxisToAxis_var CreateAxisToAxis(const CATISpecObject_var iToTransform,
		const CATISpecObject_var iReferenceAxis,
		const CATISpecObject_var iTargetAxis) = 0;

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
	*   @return CATIGSMScaling_var
	*       created symmetry.
	* @see CATIGSMScaling, CATICkeParm
	*/
	virtual CATIGSMScaling_var CreateScaling(const CATISpecObject_var iToScale,
		const CATISpecObject_var iReference,
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
	*   @return CATIGSMRotate_var
	*       created rotation.
	* @see CATIGSMRotate, CATICkeParm
	*/
	virtual CATIGSMRotate_var CreateRotate(const CATISpecObject_var iToRotate,
		const CATISpecObject_var iAxis,
		const CATICkeParm_var    iAngle) = 0;
	/**
	* Creates an empty Rotation.
	*/
	virtual CATIGSMRotate_var CreateRotate() = 0;
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
	*   @return CATIGSMTranslate_var
	*       created translation.
	* @see CATIGSMTranslate, CATIGSMDirection
	*/
	virtual CATIGSMTranslate_var CreateTranslate(const CATISpecObject_var   iToTranslate,
		const CATIGSMDirection_var iDirection,
		const CATICkeParm_var      iDistance) = 0;

	/**
	* Creates an empty translation.
	*/
	virtual CATIGSMTranslate_var CreateTranslate() = 0;

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
	*   @return CATIGSMAffinity_var
	*       created affinity.
	* @see CATIGSMAffinity, CATICkeParm
	*/
	virtual CATIGSMAffinity_var CreateAffinity(const CATISpecObject_var iElemToTransfor,
		const CATISpecObject_var iAxisOrigin,
		const CATISpecObject_var iAxisPlane,
		const CATISpecObject_var iAxisFirstDirection,
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
	*   @return CATIGSMExtremum_var
	*      created Extremum
	* @see CATIGSMExtremum, CATIGSMDirection
	*/
	virtual CATIGSMExtremum_var CreateExtremum(const CATISpecObject_var iSpec,
		const CATIGSMDirection_var iSpecDir,
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
	*   @return CATIGSMExtremumPolar_var
	*      created Extremum
	* @see CATIGSMExtremumPolar
	*/
	virtual CATIGSMExtremumPolar_var CreateExtremumPolar(const unsigned short int iTypeOfExtremum,
		const CATISpecObject_var iContour) = 0;

	//==========================================================================
	// BLEND
	//==========================================================================
	/**
	* Creates a blend surface.
	*   @return CATIGSMBlend_var
	*       created blend.
	* Use the interface @href CATIGSMBlend to define the curves, supports...
	*/
	virtual CATIGSMBlend_var CreateBlend() = 0;

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
	*   @return CATIGSMCombine_var
	*       the projection.
	* @see CATIGSMCombine, CATIGSMDirection, CATGSMCombineSolutionType, CATGSMCombineSolutionTypeCombine.
	*/
	virtual CATIGSMCombine_var CreateCombine(const CATISpecObject_var iCurve1,
		const CATIGSMDirection_var iDirection1,
		const CATISpecObject_var iCurve2,
		const CATIGSMDirection_var iDirection2,
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
	*   @return CATIGSMHelix_var
	*       Created helix curve.
	* @see CATIGSMHelix, CATICkeParm
	*/
	virtual CATIGSMHelix_var CreateHelix(const CATISpecObject_var iAxis,
		CATBoolean iInvertAxis,
		const CATISpecObject_var iStartingPoint,
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
	*   @return CATIGSMSpiral_var
	*       Created spiral curve.
	* @see CATIGSMSpiral, CATIGSMDirection, CATICkeParm
	*/
	virtual CATIGSMSpiral_var CreateSpiral(const CATIGSMSpiral::Type iType,
		const CATISpecObject_var iSupport,
		const CATISpecObject_var iCenterPoint,
		const CATIGSMDirection_var iAxis,
		const CATICkeParm_var iStartingRadius,
		CATBoolean iClockwiseRevolution
	) = 0;

	//==========================================================================
	// HEALING
	//==========================================================================
	/**
	* Creates a composite surface.
	* Use the interface CATIGSMHealing to define the body to be healed.
	*   @param iBodyToHeal
	*      the body to heal.
	*   @return CATIGSMHealing_var : the created surface.
	* @see CATIGSMHealing
	*/
	virtual CATIGSMHealing_var CreateHealing(const CATLISTV(CATISpecObject_var)& iBodyToHeal) = 0;

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
	*   @return CATIGSMHealing_var : the created surface.
	* @see CATIGSMHealing, CATGSMHealingMode, CATGSMContinuity, CATICkeParm
	*/
	virtual CATIGSMHealing_var CreateHealing(const CATLISTV(CATISpecObject_var)& iBodyToHeal,
		const CATLISTV(CATISpecObject_var)& FixElements,
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
	*   @return CATIGSMHealing_var : the created surface
	* @see CATIGSMHealing, CATGSMHealingMode, CATGSMContinuity, CATICkeParm
	*/
	virtual CATIGSMHealing_var CreateHealing(const CATLISTV(CATISpecObject_var)& iBodyToHeal,
		const CATLISTV(CATISpecObject_var)& FixElements,
		const CATLISTV(CATISpecObject_var)& VivEdges,
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
	*   @return CATIGSMReflectLine_var
	*       the reflectline.
	* @see CATIGSMReflectLine, CATIGSMDirection
	*/
	virtual CATIGSMReflectLine_var CreateReflectLine(const CATISpecObject_var iSupport,
		const CATIGSMDirection_var iDirection,
		const CATICkeParm_var iAngle,
		CATGSMOrientation iOrientationSupport = CATGSMSameOrientation,
		CATGSMOrientation iOrientationDirection = CATGSMSameOrientation) = 0;


	//==========================================================================
	// SPINE
	//==========================================================================
	/**
	* Creates a spine curve.
	*   @return CATIGSMSpine_var
	*       created spine.
	*/
	virtual CATIGSMSpine_var CreateSpine() = 0;

	/**
	* Creates a spine curve.
	*   @param iListOfSections
	*      List of sections curves or planes
	*   @param iStartPoint
	*      point to be used as a start point
	*   @return CATIGSMSpine_var
	*       created spine.
	* @see CATIGSMSpine
	*/
	virtual CATIGSMSpine_var CreateSpine(const CATLISTV(CATISpecObject_var) & iListOfSections,
		const CATISpecObject_var iStartPoint = NULL_var) = 0;

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
	*   @return CATIGSMSpine_var
	*       created spine.
	* @see CATIGSMSpine
	virtual CATIGSMSpine_var CreateSpine(const CATLISTV(CATISpecObject_var) & iListOfSections,
	const CATISpecObject_var iStartSectionTangent,
	const CATISpecObject_var iEndSectionTangent,
	const CATLISTV(CATISpecObject_var) & iListOfGuides,
	const CATISpecObject_var iStartPoint = NULL_var) = 0;
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
	* @see CATIGSMLawDistProj
	*/
	virtual CATIGSMLawDistProj_var CreateLawDistProj(const CATISpecObject_var iReference,
		const CATISpecObject_var iDefinition,
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
	*   @return CATIGSMSphere_var
	*       created sphere.
	* @see CATIGSMSphere, CATICkeParm
	*/
	virtual CATIGSMSphere_var CreateSphere(const CATISpecObject_var iCenter,
		const CATISpecObject_var iAxis,
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
	*   @return CATIGSMPolyline_var
	*       created polyline.
	*/
	virtual CATIGSMPolyline_var CreatePolyline() = 0;

	/**
	* Creates a polyline curve.
	*   @param iListOfPoints
	*      List of points
	*   @param iListOfRadius
	*      List of radius
	*      Radius can be NULL_var
	*   @param iSupport
	*      Support
	*   @return CATIGSMPolyline_var
	*       created polyline.
	* @see CATIGSMPolyline
	*/
	virtual CATIGSMPolyline_var CreatePolyline(const CATLISTV(CATISpecObject_var) & iListOfPoints,
		const CATLISTV(CATISpecObject_var) & iListOfRadius,
		const CATISpecObject_var iSupport = NULL_var) = 0;

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
	*   @return CATIGSMGridSet_var
	*      created GridSet.
	* @see CATIGSMGridSet, CATIGSMDirection
	*/
	virtual CATIGSMGridSet_var CreateGridSet(const CATISpecObject_var   &ihIOrigin = NULL_var
		, const CATIGSMDirection_var &ihIDirection = NULL_var
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
	*   @return CATIGSM3DCurveOffset_var
	*      created 3DCurveOffset.
	* @see CATIGSM3DCurveOffset, CATIGSMDirection
	*/
	virtual CATIGSM3DCurveOffset_var Create3DCurveOffset(const CATISpecObject_var   &iCurve,
		const CATIGSMDirection_var &iDirection,
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
	*   @return CATIGSMExtractSolide_var
	*      Created feature.
	* @see CATIGSMExtractMulti, CATIGSMExtractSolidePropag
	*/
	virtual CATIGSMExtractMulti_var CreateExtractMulti(const CATLISTV(CATISpecObject_var) & iReferenceElems) = 0;



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
	virtual HRESULT ConvertToDatum(const CATISpecObject_var &iSpecOrigin, CATListValCATISpecObject_var *&oListDatumSpec, int iVerif = 1) = 0;


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
	* CATIGSMPoint_var pt  = ispGsmFactory ->CreatePoint(ptCoord);
	* if (!iName.IsNull()){
	*		  CATIAlias_var spIAlias(pt);
	*		  if(!!spIAlias){
	*			  spIAlias -> SetAlias(iName);
	*	  }
	* }
	* ....
	*/
	virtual CATIGSMPoint_var CreatePoint(const CATMathPoint & iPt, const CATUnicodeString iUserName = "") = 0;

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

	virtual CATIGSMLine_var  CreateLine(const CATMathPoint & iPto, const CATMathDirection & iVct, const CATUnicodeString iUserName = "") = 0;

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
	virtual CATIGSMLine_var  CreateLine(const CATMathPoint & iPt1, const CATMathPoint & iPt2, const CATUnicodeString iUserName = "") = 0;

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
	virtual CATIGSMPlane_var CreatePlane(const CATMathPlane & iPln, const CATUnicodeString iUserName = "") = 0;


#ifndef CATIAR201
	//==========================================================================
	// INTERNAL DS - DO NOT USE - 
	//==========================================================================

	//
	// METHODS TO CREATE LITERAL FEATURES
	//==========================================================================
	/**
	* @nodoc
	* For internal use only : DO NOT USE
	*/
	virtual CATICkeParm_var CreateLitteralLength(const double ivalue, const CATUnicodeString iName = "Length") = 0;
	/**
	* @nodoc
	* For internal use only : DO NOT USE
	*/
	virtual CATICkeParm_var CreateLitteralAngle(const double ivalue, const CATUnicodeString iName = "Angle") = 0;
	/**
	* @nodoc
	* For internal use only : DO NOT USE
	*/
	virtual CATICkeParm_var CreateLitteralReal(const double ivalue, const CATUnicodeString iName = "Real") = 0;
	/**
	* @nodoc
	* For internal use only : DO NOT USE
	*/
	virtual CATIGSMPlane_var CreateRefPlane(const CATMathPlane & iPln, const CATUnicodeString iUserName = "") = 0;
	/**
	* Creates an explicit reference iplane.
	* Use this method only to create the three reference iplanes xy, yz and zx.
	* This iplane will be fixed. It can't move with constraints.
	*   @param iPtrRootPoint
	*      Coordinates of the center point of the plane (array size 3)
	*   @param iPtrUVector
	*      Components of the first direction of the plane (array size 3)
	*   @param iPtrVVector
	*      Components of the second direction of the plane (array size 3)
	*   @return CATIGSMPlane_var
	*        created  plane
	* @see CATIGSMPlane
	*/
	virtual CATIGSMPlane_var CreateRefPlane(const double *iPtrRootPoint, const double *iPtrUVector, const double *iPtrVVector) = 0;
#endif
	/**
	* Creates a Surface Simplification feature.
	* <br> Note: requires GSO license.
	*   @return CATIGSMSurfaceSimplification_var
	*       the Surface Simplification feature.
	* @see CATIGSMSurfaceSimplification
	*/
	virtual CATIGSMSurfaceSimplification_var CreateSurfaceSimplification() = 0;

  //==========================================================================
  // Mid Surface
  //==========================================================================
  /**
  * Creates a Mid Surface.
  *   @param CATIGSMMidSurface_var
  *       the MidSurface feature
  *   @return S_OK if the feature has been created correctly
  * @see CATIGSMMidSurface
  */
  virtual HRESULT CreateMidSurface(CATIGSMMidSurface_var & ospMidSurface) = 0;
};
CATDeclareHandler(CATIGSMFactory, CATBaseUnknown);
#endif // CATGSMFactory_H


