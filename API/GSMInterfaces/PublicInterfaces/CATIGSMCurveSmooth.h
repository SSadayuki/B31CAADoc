#ifndef CATIGSMCurveSmooth_H
#define CATIGSMCurveSmooth_H

// COPYRIGHT Dassault Systemes 2000

/**
 * @CAA2Level L1
 * @CAA2Usage U3
 */

#include "CATGitInterfacesExportedBy.h"

#include "CATBaseUnknown.h"
#include "CATGSMContinuityDef.h"
#include "CATISpecObject.h"

class CATICkeParm_var;

#ifndef LOCAL_DEFINITION_FOR_IID
extern ExportedByCATGitInterfaces IID IID_CATIGSMCurveSmooth;
#else
extern "C" const IID IID_CATIGSMCurveSmooth;
#endif

/**
  * Interface to curve smoothing operation feature. 
  * <b>Role</b>: Allows you to access (query and modifications) data 
  * of the curve smoothing operation.
  * @see CATIGSMFactory#CreateCurveSmooth
  */
class ExportedByCATGitInterfaces CATIGSMCurveSmooth : public CATBaseUnknown
{

	CATDeclareInterface;

  public:

/**
 * Gets the curve to smooth.
 *   @param oElem
 *      Curve feature
 */
 virtual HRESULT GetCurveToSmooth(CATISpecObject_var & oElem) = 0;

/**
 * Sets the curve to smooth.
 *   @param iElem
 *      Curve feature
 */
 virtual HRESULT SetCurveToSmooth(const CATISpecObject_var iElem) = 0;


/**
 * Gets optional curve support surface.
 *   @param oElem
 *      Support surface feature
 */
 virtual HRESULT GetSupport(CATISpecObject_var & oElem) = 0;

/**
 * Sets optional curve support surface.
 *   @param iElem
 *      Support surface feature
 */
 virtual HRESULT SetSupport(const CATISpecObject_var iElem) = 0;


/**
 * Gets the tangency deviation threshold literal feature.
 * <br> This threshold is to be compared with the angle of both 
 * tangency lines at the discontinuity.
 * <br> Over this threshold, tangency discontinuities won't be smoothed.
 *   @param Elem
 *      Tangency deviation threshold literal feature
 */
 virtual HRESULT GetTangencyThreshold(CATICkeParm_var & Elem) = 0;

/**
 * Gets the tangency deviation threshold value. 
 * <br>This threshold is to be compared with the angle of both 
 * tangency lines at the discontinuity.
 * <br>Over this threshold, tangency discontinuities won't be smoothed.
 *   @param val
 *      Tangency deviation threshold value
 */
 virtual HRESULT GetTangencyThreshold(double & val) = 0;

/**
 * Sets the tangency deviation threshold literal feature.
 * <br> This threshold is
 * to be compared with the angle of both tangency lines at the discontinuity.
 * <br> Over this threshold, tangency discontinuities won't be smoothed.
 *   @param Elem
 *      Tangency deviation threshold literal feature
 */
 virtual HRESULT SetTangencyThreshold(const CATICkeParm_var Elem) = 0;

/**
 * Sets the tangency deviation threshold value. 
 * <br> This threshold is
 * to be compared with the angle of both tangency lines at the discontinuity.
 * <br>  Over this threshold, tangency discontinuities won't be smoothed.
 *   @param val
 *      Tangency deviation threshold value
 */
 virtual HRESULT SetTangencyThreshold(const double val) = 0;


/**
 * Gets the curvature deviation threshold literal feature.
 * <br> This threshold is  a ratio between 0 and 1
 * <br>  if sets to 0, all curvature discontinuities are smoothed.
 * <br>  if sets to 1, no curvature discontinuity is smoothed.
 *   @param Elem
 *      Tangency deviation threshold literal feature
 */
 virtual HRESULT GetCurvatureThreshold(CATICkeParm_var & Elem) = 0;

/**
 * Gets the curvature deviation threshold value. 
 * <br>This threshold is a ratio between 0 and 1.
 * <br>  if sets to 0, all curvature discontinuities are smoothed.
 * <br>  if sets to 1, no curvature discontinuity is smoothed.
 *   @param val
 *      Tangency deviation threshold value
 */
 virtual HRESULT GetCurvatureThreshold(double & val) = 0;

/**
 * Sets the curvature deviation threshold literal feature.
 * <br> This threshold is a ratio between 0 and 1.
 * <br>  if sets to 0, all curvature discontinuities are smoothed.
 * <br>  if sets to 1, no curvature discontinuity is smoothed.
 *   @param Elem
 *      Tangency deviation threshold literal feature
 */
 virtual HRESULT SetCurvatureThreshold(const CATICkeParm_var Elem) = 0;

/**
 * Sets the curvature deviation threshold value. 
 * <br>This threshold is a ratio between 0 and 1
 * <br> if sets to 0, all curvature discontinuities are smoothed
 * <br> if sets to 1, no curvature discontinuity is smoothed.
 *   @param val
 *      Tangency deviation threshold value
 */
 virtual HRESULT SetCurvatureThreshold(const double val) = 0;

/**
 * Gets the curvature deviation threshold activity (whether it is taken into
 * account or not). 
 * <br>This activity is a boolean (TRUE or FALSE).
 *   @param bAct
 *      Curvature deviation threshold activity
 */
 virtual HRESULT GetCurvatureThresholdActivity(boolean & bAct) = 0;

/**
 * Sets the curvature deviation threshold activity (whether it is taken into
 * account or not). 
 * <br>This activity is a boolean (TRUE or FALSE).
 *   @param bAct
 *      Curvature deviation threshold activity
 */
 virtual HRESULT SetCurvatureThresholdActivity(const boolean bAct) = 0;


/**
 * Gets the maximum deviation allowed for smoothing operation.
 * <br> Sets in distance unit, it corresponds to the radius of a 
 * pipe around the input curve in which the result is allowed to be.
 *   @param Elem
 *      Maximum deviation literal feature
 */
 virtual HRESULT GetMaximumDeviation(CATICkeParm_var & Elem) = 0;

/**
 * Sets the maximum deviation allowed for smoothing operation.
 * <br> Sets in distance unit, it corresponds to the radius of a 
 * pipe around the input curve in which the result is allowed to be.
 *   @param val
 *      Maximum deviation value
 *		<br> Note: value is expressed in MKS = Meters 
 *		<br> Example to set up 1mm , use .001
 */
 virtual HRESULT GetMaximumDeviation(double & val) = 0;

/**
 * Gets the maximum deviation allowed for smoothing operation. 
 * <br> Sets in  distance unit, it corresponds to the radius of a
 * pipe around the input curve in which the result is allowed to be.
 *   @param Elem
 *      Maximum deviation literal feature
 */
 virtual HRESULT SetMaximumDeviation(const CATICkeParm_var Elem) = 0;

/**
 * Sets the maximum deviation allowed for smoothing operation. 
 * <br> Sets in distance unit, it corresponds to the radius of a 
 * pipe around the  input curve in which the result is allowed to be.
 *   @param val
 *      Maximum deviation value
 *		<br> Note: value is expressed in MKS = Meters 
 *		<br> Example to set up 1mm , use .001
 */
 virtual HRESULT SetMaximumDeviation(const double val) = 0;

 /**
 * Gets the maximum deviation activity (whether it is taken into
 * account or not). 
 * <br>This activity is a boolean (TRUE or FALSE).
 *   @param bAct
 *      Maximum deviation activity
 */
 virtual HRESULT GetMaximumDeviationActivity(boolean & bAct) = 0;

/**
 * Sets the maximum deviation activity (whether it is taken into
 * account or not). 
 * <br>This activity is a boolean (TRUE or FALSE).
 *   @param bAct
 *      Maximum deviation activity
 */
 virtual HRESULT SetMaximumDeviationActivity(const boolean bAct) = 0;

/**
 * Gets the topology simplification activity (whether continuous vertices
 * are erased or not).
 * <br>This activity is a boolean (TRUE or FALSE).
 *   @param bAct
 *      Topology simplification activity
 */
 virtual HRESULT GetTopologySimplificationActivity(boolean & bAct) = 0;

/**
 * Activates or deactivates topology simplification (whether continuous
 * vertices are erased or not).
 * <br>This activity is a boolean (TRUE or FALSE).
 *   @param bAct
 *      Topology simplification activity
 */
 virtual HRESULT SetTopologySimplificationActivity(const boolean bAct) = 0;


/**
 * Gets all frozen points.
 *   @param oElems
 *      List of the frozen points
 */
 virtual HRESULT GetFrozenPoints(CATLISTV(CATISpecObject_var) & oElems) = 0;

/**
 * Adds a frozen point.
 *   @param iElem
 *      Frozen point
 */
 virtual HRESULT AddFrozenPoint(const CATISpecObject_var & iElem) = 0;

/**
 * Removes a frozen point.
 *   @param iElem
 *      Frozen point to be removed
 */
 virtual HRESULT RemoveFrozenPoint(const CATISpecObject_var & iElem) = 0;

/**
 * Removes all frozen points.
 */
 virtual HRESULT RemoveAllFrozenPoints() = 0;

/**
 * Gets all frozen curve segments.
 *   @param oElems
 *      List of the frozen curve segments
 */
 virtual HRESULT GetFrozenCurveSegments(CATLISTV(CATISpecObject_var) & oElems) = 0;

/**
 * Adds a frozen curve segment.
 *   @param iElem
 *      Frozen curve segment
 */
 virtual HRESULT AddFrozenCurveSegment(const CATISpecObject_var & iElem) = 0;

/**
 * Removes a frozen curve segment.
 *   @param iElem
 *      Frozen curve segment to be removed
 */
 virtual HRESULT RemoveFrozenCurveSegment(const CATISpecObject_var & iElem) = 0;

/**
 * Removes all frozen curve segments.
 */
 virtual HRESULT RemoveAllFrozenCurveSegments() = 0;


/**
 * Gets the continuity condition (curvature, tangency or point) applied to
 * the smoothed curve with regard to the input curve (default is curvature)
 * at the start extremity of the input curve.
 *   @param oStartCond
 *      Output continuity condition (CATGSMContinuity_Point, CATGSMContinuity_Tangency or CATGSMContinuity_Curvature)
 */
 virtual HRESULT GetStartExtremityContinuityCondition(enum CATGSMContinuity & oStartCond) = 0;

/**
 * Sets the continuity condition (curvature, tangency or point) applied to
 * the smoothed curve with regard to the input curve (default is curvature)
 * at the start extremity of the input curve.
 *   @param iStartCond
 *      Input continuity condition (CATGSMContinuity_Point, CATGSMContinuity_Tangency or CATGSMContinuity_Curvature)
 */
 virtual HRESULT SetStartExtremityContinuityCondition(const enum CATGSMContinuity iStartCond) = 0;

/**
 * Gets the continuity condition (curvature, tangency or point) applied to
 * the smoothed curve with regard to the input curve (default is curvature)
 * at the end extremity of the input curve.
 *   @param oEndCond
 *      Output continuity condition (CATGSMContinuity_Point, CATGSMContinuity_Tangency or CATGSMContinuity_Curvature)
 */
 virtual HRESULT GetEndExtremityContinuityCondition(enum CATGSMContinuity & oEndCond) = 0;

/**
 * Sets the continuity condition (curvature, tangency or point) applied to
 * the smoothed curve with regard to the input curve (default is curvature)
 * at the end extremity of the input curve.
 *   @param iEndCond
 *      Input continuity condition (CATGSMContinuity_Point, CATGSMContinuity_Tangency or CATGSMContinuity_Curvature)
 */
 virtual HRESULT SetEndExtremityContinuityCondition(const enum CATGSMContinuity iEndCond) = 0;

/**
 * Gets the correction mode (threshold, point, tangency or curvature) applied to
 * the smoothed curve (default is threshold).
 *   @param oCorrectionMode
 *      Output continuity condition (CATGSMCSCorrectionMode_Threshold, CATGSMCSCorrectionMode_Point, CATGSMCSCorrectionMode_Tangency or CATGSMCSCorrectionMode_Curvature)
 */
 virtual HRESULT GetCorrectionMode(enum CATGSMCSCorrectionMode & oCorrectionMode) = 0;
 
/**
 * Sets the correction mode (threshold, point, tangency or curvature) applied to
 * the smoothed curve (default is threshold).
 *   @param oCorrectionMode
 *      Input continuity condition (CATGSMCSCorrectionMode_Threshold, CATGSMCSCorrectionMode_Point, CATGSMCSCorrectionMode_Tangency or CATGSMCSCorrectionMode_Curvature)
 */
 virtual HRESULT SetCorrectionMode(const enum CATGSMCSCorrectionMode iCorrectionMode) = 0;

};
CATDeclareHandler(CATIGSMCurveSmooth, CATBaseUnknown);
#endif
