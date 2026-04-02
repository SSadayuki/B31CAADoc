#ifndef CATIVpmLongTransaction_H_
#define CATIVpmLongTransaction_H_

/**
 * @CAA2Level L1
 * @CAA2Usage U5
 */

//======================================================================== 
// ENOVIA_VPM (C) Copyright Dassault Systemes 1999-2004
// -----------------------------------------------------------------------
// Responsable: JNI
// -----------------------------------------------------------------------
// History:
// Creation : 96/09/12 > AHC
//======================================================================== 
#include "GUIDVPMInterfaces.h"
#include "CATBaseUnknown.h"
#include "CATUnicodeString.h"
#include "CATListOfCATUnicodeString.h"

#ifndef LOCAL_DEFINITION_FOR_IID
extern ExportedByGUIDVPMInterfaces IID IID_CATIVpmLongTransaction;
#else
extern "C" const IID IID_CATIVpmLongTransaction;
#endif



/** Interface to implement to participate in the LCA 2 phase commit protocol.
 *
 * <b>Role</b>: This transaction interface is implemented by middleware components. 
 *        A transactional component has to register itself to the loginSession
 *        to participate to the current transaction. Customers can implement their
 *        own transaction component in order to participate in the LCA 2 phase commit.
 *        The login session will call back all registered components during
 *        the event transaction management.
 *
 * onAbort is called when the LCA LoginSession is aborted.
 * onPrepareSave is called in the prepare phase of the LCA 2 phase commit.
 * onConfirmSave is called in the commit phase of the LCA 2 phase commit, if the prepare
 *      phase has been successful.
 * onUnconfirmSave is called in the commit phase of the LCA 2 phase commit, if the prepare
 *      phase has not been successful. 
 *
 */

class ExportedByGUIDVPMInterfaces CATIVpmLongTransaction : public CATBaseUnknown
{
  
  CATDeclareInterface;
  
public:
  /**
    * This method is called when the LCA transaction is aborted.
    * The transaction component must roll back everything that has been done since the
    * last Save (or since the beginning if no Save has been done).
    *
    * @return
    * An HRESULT value
    *
    *   <br><b>Legal values</b>:
    *   <dl>
    *     <dt>S_OK</dt>
    *     <dd>Undo is successful</dd>
    *     <dt>S_FALSE</dt>
    *     <dd>nothing to undo</dd>
    *     <dt>E_FAIL</dt>
    *     <dd>An error occurred during processing</dd>
    *   </dl>		
    */
   virtual HRESULT onAbort () = 0 ;

   /**
    * Prepare the Save procedure.
    * The LCA LoginSession calls each component registered in the LCA transaction,
    * in the prepare phase of the LCA 2 phase commit. Returning a value other than S_OK will block the LCA commit.
    * Note that a component that returns S_OK in the prepare phase is not allowed to fail in the
    * commit phase.
    *
    * Prepare the Save procedure
    *
    * @return
    * An HRESULT value
    *
    *   <br><b>Legal values</b>:
    *   <dl>
    *     <dt>S_OK</dt>
    *     <dd>prepare is successful</dd>
    *     <dt>S_FALSE</dt>
    *     <dd>nothing to prepare</dd>
    *     <dt>E_FAIL</dt>
    *     <dd>An error occurred during processing</dd>
    *   </dl>		
    */
   virtual HRESULT onPrepareSave () = 0 ;

   /**
    * Confirm what has been done in the PrepareSave method.
    * The LCA LoginSession calls each registered components to effectively commit the transaction
    * in the commit phase of the LCA 2 phase commit.
    *
    * @return
    * An HRESULT value
    *
    *   <br><b>Legal values</b>:
    *   <dl>
    *     <dt>S_OK</dt>
    *     <dd>commit is successful </dd>
    *     <dt>S_FALSE</dt>
    *     <dd>nothing to commit</dd>
    *     <dt>E_FAIL</dt>
    *     <dd>An error occurred during processing</dd>
    *   </dl>		
    */
   virtual HRESULT onConfirmSave () = 0 ; 

   /**
    * Undo what has been done in the PreparseSave method.
    * This is called by the LCA LoginSession when one (possibly the same) component has blocked the
    * commit by returning a failure code in the prepare phase, so that components can revert any changes made during
    * that phase. For instance if a transaction
    * component has performed database modifications, the onUnconfirmSave should roll back the
    * database, while the onConfirmSave should commit it.
    *
    * @return
    * An HRESULT value
    *
    *   <br><b>Legal values</b>:
    *   <dl>
    *     <dt>S_OK</dt>
    *     <dd>UnConfirm is successful</dd>
    *     <dt>E_FAIL</dt>
    *     <dd>An error occurred during processing</dd>
    *   </dl>		
    */
   virtual HRESULT onUnconfirmSave () = 0;

};

CATDeclareHandler(CATIVpmLongTransaction,CATBaseUnknown);

#endif

