// COPYRIGHT Dassault Systemes 2004
//===================================================================
#ifndef CATIMfgMachiningOperationUpdateCustom_H
#define CATIMfgMachiningOperationUpdateCustom_H

/**
* @CAA2Level L1
* @CAA2Usage U5
*/

#include "MfgItfEnv.h"
#include "CATBaseUnknown.h"

#ifndef LOCAL_DEFINITION_FOR_IID
extern ExportedByMfgItfEnv IID IID_CATIMfgMachiningOperationUpdateCustom;
#else
extern "C" const IID IID_CATIMfgMachiningOperationUpdateCustom ;
#endif

//------------------------------------------------------------------

/**
* Interface dedicated to Machining Operation / the update mechanism.
*  Allow customize the behavior of the Machining Operations at the beginning
*  and at the end of the Update and IsUpToDate mechanisms.
*  
*  <b> Note: </b> The update mechanism rebuilds the feature ( generate the result ).
*  The default update mechanism detects all features that have been modified upstream from a 
*  feature, updates all the features impacting the updated feature, and finally rebuilds
*  the final feature.
*  <p>
*/
class ExportedByMfgItfEnv CATIMfgMachiningOperationUpdateCustom: public CATBaseUnknown
{
   CATDeclareInterface;
   
public:
   
  /**
   * Method called at the beginning of the IsUpToDate mechanism.
   * The return code of this method is not taken into account for the IsUpToDate status.
   * If this method failed, the update mechanism continues all the same.
   * @return HRESULT
   *    S_OK : the method has succeeded.
   *    E_FAIL : the method has failed.
   */
   virtual HRESULT Init_IsUpToDate() const = 0;

  /**
   * Method called at the end of the IsUpToDate mechanism.
   * Returns a post-status of the object concerning the update mechanism.
   * This post-status replaces iCurrentStatus and is returned by the IsUpToDate method
   * @param  iCurrentStatus
   *    The IsUpToDate status just before the call of this method.
   * @return CATBoolean
   *    TRUE : the object is up-to-date.
   *    FALSE : the object has to be updated.
   */
   virtual CATBoolean End_IsUpToDate(CATBoolean iCurrentStatus) const = 0;
   
  /** 
   * Method called at the beginning of the update mechanism.
   * If this method failed, the update mechanism continues all the same.
   * @return int
   *    0 : the method has succeeded.
   *    1 : the method has failed.
   */
   virtual int Init_Update() = 0;

  /**
   * Method called at the end of the update mechanism.
   * The returned value replaces iCurrentRC and is returned by the Update method
   * @param  iCurrentRC
   *    The current return code of the Update method just before the call of this method.
   * @return int
   *    0 : the method has succeeded.
   *    1 : the method has failed.
   */
   virtual int End_Update(int iCurrentRC) = 0;
   
  // No constructors or destructors on this pure virtual base class
  // --------------------------------------------------------------
};

//------------------------------------------------------------------

CATDeclareHandler(CATIMfgMachiningOperationUpdateCustom,CATBaseUnknown);

#endif
