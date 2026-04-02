/* -*-c++-*- */
#ifndef CATIGSMUsePlaneNormal_H
#define CATIGSMUsePlaneNormal_H
// 
// COPYRIGHT DASSAULT SYSTEMES 2014

/**
  * @CAA2Level L1
  * @CAA2Usage U3
  */

#include "CATGSMUseItfExportedBy.h"

#include "CATBaseUnknown.h"
#include "CATICkeParm.h"
#include "CATGSMOrientation.h"

class CATIMmiMechanicalFeature_var; 



#ifndef LOCAL_DEFINITION_FOR_IID
extern ExportedByCATGSMUseItf IID  IID_CATIGSMUsePlaneNormal;
#else
extern "C" const IID IID_CATIGSMUsePlaneNormal;
#endif
/**
 * Interface to normal plane feature. 
 * <b>Role</b>: Allows you to access data of the plane feature normal to a
 * curve at a given point.
 * @see CATIGSMUseFactory#CreatePlaneNormal
 */
class ExportedByCATGSMUseItf CATIGSMUsePlaneNormal : public CATBaseUnknown
{
   CATDeclareInterface;
public: 

 /**
 * Gets the support curve
 *<br>
 * Gets the curve to which the plane is to be normal.
        *   @param oSupport 
 *      reference  curve 
 *    @HRESULT resturn
 *    <dl>
 *    <dt>S_OK, if GetSupportCurve succeeds
 *    <dt>E_FAIL, if GetSupportCurve fails
 *    </dl>
 */
 virtual HRESULT GetSupportCurve(CATIMmiMechanicalFeature_var& oSupport) = 0;

 /**
 *Sets the support curve
 *<br>
 * Sets the curve to which the plane is to be normal.
        *   @param iSupport 
 *      reference curve 
 *   @HRESULT resturn
 *    <dl>
 *    <dt>S_OK, if SetSupportCurve succeeds
 *    <dt>E_FAIL, if SetSupportCurve fails
 *    </dl>
 */
  virtual HRESULT SetSupportCurve(const CATIMmiMechanicalFeature_var iSupport) = 0;

 /**
 *Gets the point
 *<br>
 * Gets the point where the plane is to be normal.
        *   @param oPoint
 *      Reference point.
 *   @HRESULT resturn
 *    <dl>
 *    <dt>S_OK, if GetPoint succeeds
 *    <dt>E_FAIL, if GetPoint fails
 *    </dl>
 *     
 */
 virtual HRESULT GetPoint(CATIMmiMechanicalFeature_var& oPoint) = 0;

 /**
 * Sets the point
 *<br>
 * Sets the point where the plane is to be normal.
        *   @param iPoint
 *      Reference point 
  *   @HRESULT resturn
 *    <dl>
 *    <dt>S_OK, if SetPoint succeeds
 *    <dt>E_FAIL, if SetPoint fails
 *    </dl>
 *      
 */
 virtual HRESULT SetPoint(const CATIMmiMechanicalFeature_var iPoint) = 0;

 /*
 * Sets the Ratio Mode
 * <br>
 *   Sets the status of the Check button(Ratio of curve length) ON/OFF to make Enable/Disable the Ratio parameter(Spinner).
 *   @param iMode
 *          TRUE  : Sets the status of check button ON
 *          False : Sets the status of check button as OFF  
 *    @HRESULT resturn
 *    <dl>
 *    <dt>S_OK, if SetRatioMode succeeds
 *    <dt>E_FAIL, if SetRatioMode fails
 *    </dl>
 */
  virtual HRESULT SetRatioMode(const CATBoolean iMode) = 0; 


/*
 * Gets the Ratio Mode
 * <br>
 *  Gets the status of Check button - Ratio of curve length. 
 *  Depending upon the status the Ratio parameter will be enabled or disabled.
 *    @param oMode
 *          TRUE  : When check button is ON
 *          False : When check button is OFF  
 *    @HRESULT resturn
 *    <dl>
 *    <dt>S_OK, if GetRatioMode succeeds
 *    <dt>E_FAIL, if GetRatioMode fails
 *    </dl>
 */
 
 
  virtual HRESULT GetRatioMode(CATBoolean & oMode) = 0;



/*
 * Sets the Ratio.
 * <br>
 *   @Param iRatio
 *     
 *   @HRESULT resturn
 *    <dl>
 *    <dt>S_OK, if SetRatio succeeds
 *    <dt>E_FAIL, if SetRatio fails
 *    </dl>
 */

 virtual HRESULT SetRatio(const CATICkeParm_var iRatio) = 0; 

/**
 * Gets the Ratio.
 * <br>
 *   @Param oRatio
 *
 *   @HRESULT resturn
 *    <dl>
 *    <dt>S_OK, if GetRatio succeeds
 *    <dt>E_FAIL, if GetRatio fails
 *    </dl>
 */

 virtual HRESULT GetRatio(CATICkeParm_var& oRatio) = 0;


/**
 * Gets the orientation.
 * <br>
 * Orientation = TRUE means that distance (ratio) is measured :
 * - in the other orientation of the curve, when a reference point has been set,
 * - in the other orientation of the curve and from the other extremity, when no reference point has been set.
 *   @param oOrientation
 *      orientation 
 *   @HRESULT resturn
 *    <dl>
 *    <dt>S_OK, if GetOrientation succeeds
 *    <dt>E_FAIL, if GetOrientation fails
 *    </dl>
 */
 virtual HRESULT GetOrientation(CATGSMOrientation & oOrientation) = 0;

/**
 * Sets the orientation.
 * <br>
 * Orientation = TRUE means that distance (ratio) is measured :
 * - in the other orientation of the curve, when a reference point has been set,
 * - in the other orientation of the curve and from the other extremity, when no reference point has been set.
 *   @param iOrientation
 *      orientation
 *   @HRESULT resturn
 *    <dl>
 *    <dt>S_OK, if SetOrientation succeeds
 *    <dt>E_FAIL, if SetOrientation fails
 *    </dl>
 */
 virtual HRESULT SetOrientation(const CATGSMOrientation iOrientation) = 0;




};
CATDeclareHandler (CATIGSMUsePlaneNormal, CATBaseUnknown);
#endif
