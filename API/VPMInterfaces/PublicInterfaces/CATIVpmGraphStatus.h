// --------------------------------------------------------            
// VPM (c) Copyright Dassault Systemes 1996                           
// -------------------------------------------------------------       
// Responsable: AHC                                                     
// --------------------------------------------------------------       
// Macro: CATIVpmGraphStatus.h                                        
// --------------------------------------------------------------       
// Historique:                                                          
// Creation : 96/09/12 > AHC                                           
// --------------------------------------------------------------       
//
#ifndef CATIVpmGraphStatus_H_
#define CATIVpmGraphStatus_H_
//
/**
 * @CAA2Level L1
 * @CAA2Usage U3
 */
//
// -------------------------------
// Include des classes utilisees 
// -------------------------------
//
#include "GUIDVPMInterfaces.h"
//
#include "CATBaseUnknown.h"
#include "CATLISTV_CATBaseUnknown.h"


#ifndef LOCAL_DEFINITION_FOR_IID
extern ExportedByGUIDVPMInterfaces IID IID_CATIVpmGraphStatus ;
#else
extern "C" const IID IID_CATIVpmGraphStatus ;
#endif
//


class  CATIVpmGraphTransition_var ;
class  CATUnicodeString ;

/**
 * This interface is implemented by the status objects of the
 * LCA lifecycle status graph model.
 */
class ExportedByGUIDVPMInterfaces CATIVpmGraphStatus :public CATBaseUnknown  
  {
  //
  CATDeclareInterface ;
  //
  public:

    enum ENOVIAStatus {Proposed, InWork, ChangeControl, Released, Obsolete, Rejected, Modify, Delete, Rel_state, Prerelease};

   /**
    * Define status as a System status. 
    * @param iStatus - 
    *  @return
    *   <br><b>Legal values</b>
    *   <dl>
    *     <dt>S_OK</dt>
    *     <dd>The status is now defined as a System status</dd>
    *     <dt>E_FAIL</dt>
    *     <dd>A problem occurs</dd>
    *   </dl>
    *
    */
    virtual HRESULT SetSystemStatus(CATIVpmGraphStatus::ENOVIAStatus iStatus)=0;

   /**
    * To know if a status is defined as a System Status. 
    * @param iStatus - 
    *  @return
    *   <br><b>Legal values</b>
    *   <dl>
    *     <dt>S_OK</dt>
    *     <dd>The status is defined as a System status</dd>
    *     <dt>S_FALSE</dt>
    *     <dd>The status is not defined as a System status</dd>
    *     <dt>E_FAIL</dt>
    *     <dd>A problem occurs</dd>
    *   </dl>
    *
    */
    virtual HRESULT DoesSystemStatus(CATIVpmGraphStatus::ENOVIAStatus iStatus)=0;

   /**
    * Undefine status as a System status. 
    * @param iStatus - 
    *  @return
    *   <br><b>Legal values</b>
    *   <dl>
    *     <dt>S_OK</dt>
    *     <dd>The status is now not defined as a System status</dd>
    *     <dt>E_FAIL</dt>
    *     <dd>A problem occurs</dd>
    *   </dl>
    *
    */
    virtual HRESULT RemoveSystemStatus(CATIVpmGraphStatus::ENOVIAStatus iStatus)=0;

   /**
    * Get the name of the status. 
    * @param oStatusName - 
    *  @return
    *   <br><b>Legal values</b>
    *   <dl>
    *     <dt>S_OK</dt>
    *     <dd>Operation succeeded</dd>
    *     <dt>E_FAIL</dt>
    *     <dd>A problem occurs</dd>
    *   </dl>
    *
    */
    virtual HRESULT  GetName 
                  (CATUnicodeString& oStatusName )= 0 ;
   /**
    * Get the name of the substatus. 
    * @param oSubStatusName - 
    *  @return
    *   <br><b>Legal values</b>
    *   <dl>
    *     <dt>S_OK</dt>
    *     <dd>Operation succeeded</dd>
    *     <dt>E_FAIL</dt>
    *     <dd>A problem occurs</dd>
    *   </dl>
    *
    */
    virtual HRESULT  GetSubStatus 
                  (CATUnicodeString& oSubStatusName )= 0 ;

   /**
    * Set the substatus. 
    * @param iSubStatusName - 
    *  @return
    *   <br><b>Legal values</b>
    *   <dl>
    *     <dt>S_OK</dt>
    *     <dd>Operation succeeded</dd>
    *     <dt>E_FAIL</dt>
    *     <dd>A problem occurs</dd>
    *   </dl>
    *
    */
    virtual HRESULT  SetSubStatus 
                  (const CATUnicodeString& oSubStatusName )= 0 ;

   /**
    * Get the list of transitions. 
    * @param oListOfTransition - 
    *  @return
    *   <br><b>Legal values</b>
    *   <dl>
    *     <dt>S_OK</dt>
    *     <dd>Operation succeeded</dd>
    *     <dt>E_FAIL</dt>
    *     <dd>A problem occurs</dd>
    *   </dl>
    *
    */
    virtual HRESULT  GetListOfTransitions 
                  (CATLISTV(CATBaseUnknown_var)  & oListOfTransition )= 0 ;

   /**
    * Add a transition. 
    * @param iTransition - 
    *  @return
    *   <br><b>Legal values</b>
    *   <dl>
    *     <dt>S_OK</dt>
    *     <dd>Operation succeeded</dd>
    *     <dt>E_FAIL</dt>
    *     <dd>A problem occurs</dd>
    *   </dl>
    *
    */
    /** @nodoc */ 
    virtual HRESULT  AddTransition
                  ( const CATIVpmGraphTransition_var & iTransition  ) =0;

  /**
    * Remove a transition. 
    * @param iTransition - 
    *  @return
    *   <br><b>Legal values</b>
    *   <dl>
    *     <dt>S_OK</dt>
    *     <dd>Operation succeeded</dd>
    *     <dt>E_FAIL</dt>
    *     <dd>A problem occurs</dd>
    *   </dl>
    *
    */
    /** @nodoc */  
    virtual HRESULT  RemoveTransition ( const CATIVpmGraphTransition_var & iTransition  ) =0;
  };
  CATDeclareHandler(CATIVpmGraphStatus,CATBaseUnknown);
//
//
// --------------------------------------------------------------
// Fin de la macro                                                    
// --------------------------------------------------------------       
#endif

