/* -*-c++-*- */
// COPYRIGHT DASSAULT SYSTEMES	2001
//=============================================================================
// October  00 Creation                                             C. Cressend
// November 01  Modification                                            S. Dami
//              Insert CAA2 documentation                                 
//=============================================================================

#ifndef CATIVpmAFLSubscribePV_H 
#define CATIVpmAFLSubscribePV_H 

/**
 * @CAA2Level L1
 * @CAA2Usage U3
 */

#include "CATBaseUnknown.h" 
#include "GUIDVPMInterfaces.h"

#ifndef LOCAL_DEFINITION_FOR_IID
extern ExportedByGUIDVPMInterfaces IID IID_CATIVpmAFLSubscribePV ;
#else
extern "C" const IID IID_CATIVpmAFLSubscribePV ;
#endif

// Class used
class CATIVpmAFLAction_var;			
class CATIConfigurableObject_var;
  
/**
 * Interface for Subscribers to Product-View events.
 * <b>Role</b>: The interface provides callback functions handling Product-View events.
 */
class ExportedByGUIDVPMInterfaces CATIVpmAFLSubscribePV : public  CATBaseUnknown
{
     CATDeclareInterface ;  

  public:

  /**
   * The function which is called back before a product-view is added.
   *  @param iAction
   *    The action to which the PV is related.
   *  @param iCfgObj
   *    The configuration object to which the PV is related.
   */             
  virtual HRESULT EventAddPVBefore(CATIVpmAFLAction_var& iAction, CATIConfigurableObject_var& iCfgObj)=0;

  /**
   * The function which is called back after a product-view is added.
   *  @param iAction
   *    The action to which the PV is related.
   *  @param iCfgObj
   *    The configuration object to which the PV is related.
   */             
  virtual HRESULT EventAddPVAfter(CATIVpmAFLAction_var& iAction, CATIConfigurableObject_var& iCfgObj)=0;

};

CATDeclareHandler (CATIVpmAFLSubscribePV, CATBaseUnknown);

#endif
