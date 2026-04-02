#ifndef CATIVpmLoginSession_H_
#define CATIVpmLoginSession_H_
//======================================================================== 
// ENOVIA_VPM (c) Copyright Dassault Systemes 1999
// -------------------------------------------------------------
// Responsable: AHC
// --------------------------------------------------------------
// Macro: CATIVpmLoginSession.h
//       
//        A LoginSession object manages a set of informations related
//        to a user with a specific role. It manages transactions with        
//        a security and privileges context.
// --------------------------------------------------------------
// Historic:
// Creation : 96/09/12 > AHC
//======================================================================== 
//
// Include
//
/**
 *	@CAA2Level L1
 *	@CAA2Usage U3
 */
#include "GUIDVPMInterfaces.h"
#include "CATBaseUnknown.h"
#include "CATUnicodeString.h"
#include "CATListOfCATUnicodeString.h"
#include "CORBAAnyDef.h"
#include "sequence_CORBAAny.h"
#include "ENOVIEventManager.h"
class CATIVpmLongTransaction;
class CATIVpmLongTransaction_var;
//#include "CATIVpmCommandTransaction.h"

class _SEQUENCE_octet;
class VPMIProject;

class CATIVpmCommandTransaction_var;

class ENOVIVaultSession;
class ENOVIVaultUserSession;

//

//
// Interface Identifier
//
#ifndef LOCAL_DEFINITION_FOR_IID
extern ExportedByGUIDVPMInterfaces IID IID_CATIVpmLoginSession;
#else
extern "C" const IID IID_CATIVpmLoginSession;
#endif
class CATVpmAssocObject;

/**
 * This interface represents the working context of a logged-in user and its
 * LCA transaction.
 */
class ExportedByGUIDVPMInterfaces CATIVpmLoginSession :public CATBaseUnknown
{
    //
    CATDeclareInterface ;
    //
    public:
    //
    //-------------------------------------------------------------
    // Methods declaration  
    //-------------------------------------------------------------
    //
    /**
     * @deprecated V5R14
     *
    *   Is cache activated.
    *   @return
    *   An HRESULT value. 
    *   <br><b>Legal values</b>:
    *   <dl>
    *     <dt>S_OK</dt>
    *     <dd>Cache is activated</dd>
    *     <dt>S_FALSE</dt>
    *     <dd>Cache is not activated</dd>
    *   </dl>		
    */
    virtual HRESULT IsCached() = 0 ;

    /**
     * @deprecated V5R14
     *
    *   Activate the cache.
    *   @return
    *   An HRESULT value. 
    *   <br><b>Legal values</b>:
    *   <dl>
    *     <dt>S_OK</dt>
    *     <dd>Cache is activated</dd>
    *     <dt>S_FALSE</dt>
    *     <dd>Cache is already activated</dd>
    *     <dt>E_FAIL</dt>
    *     <dd>An error occured during the process</dd>
    *   </dl>		
    */
    virtual HRESULT SetCache() = 0 ;

    /**
     * @deprecated V5R14
     *
    *   Deactivate the cache.
    *   @return
    *   An HRESULT value. 
    *   <br><b>Legal values</b>:
    *   <dl>
    *     <dt>S_OK</dt>
    *     <dd>Cache is deactivated</dd>
    *     <dt>S_FALSE</dt>
    *     <dd>Cache is already deactivated</dd>
    *     <dt>E_FAIL</dt>
    *     <dd>An error occured during the process</dd>
    *   </dl>		
    */
    virtual HRESULT UnsetCache() = 0 ;

    /**
     * @deprecated V5R14
     *
    *   Activate the refresh.
    *   @return
    *   An HRESULT value. 
    *   <br><b>Legal values</b>:
    *   <dl>
    *     <dt>S_OK</dt>
    *     <dd>Refresh is activated</dd>
    *     <dt>S_FALSE</dt>
    *     <dd>Refresh is already activated</dd>
    *     <dt>E_FAIL</dt>
    *     <dd>An error occured during the process</dd>
    *   </dl>		
    */
    virtual HRESULT SetRefresh() = 0;

    /**
    *   Deactivate the refresh.
    *   @return
    *   An HRESULT value. 
    *   <br><b>Legal values</b>:
    *   <dl>
    *     <dt>S_OK</dt>
    *     <dd>Refresh is deactivated</dd>
    *     <dt>S_FALSE</dt>
    *     <dd>Refresh is already deactivated</dd>
    *     <dt>E_FAIL</dt>
    *     <dd>An error occured during the process</dd>
    *   </dl>		
    */
    virtual HRESULT UnsetRefresh() = 0;

    /**
    *   Is Refresh activated.
    *   @return
    *   An HRESULT value. 
    *   <br><b>Legal values</b>:
    *   <dl>
    *     <dt>S_OK</dt>
    *     <dd>Refresh is activated</dd>
    *     <dt>S_FALSE</dt>
    *     <dd>Refresh is not activated</dd>
    *   </dl>		
    */
    virtual HRESULT IsRefreshed() = 0 ;


    /** @nodoc
     *
     *   Retrieve the event manager.
     *   @param oEventManager
     *   The event manager found
     *   @return
     *   An HRESULT value. 
     *   <br><b>Legal values</b>:
     *   <dl>
     *     <dt>S_OK</dt>
     *     <dd>Operation succeeded</dd>
     *     <dt>E_FAIL</dt>
     *     <dd>A problem occurs during the process</dd>
     *   </dl>		
     */
      virtual  HRESULT get_ENOVEventManager
        ( ENOVIEventManager_var&  oEventManager )= 0 ;

    /**
    *   Get login session identifier.
    *   @param oLoginSessionId
    *   The login session identifier 
    *   @return
    *   An HRESULT value. 
    *   <br><b>Legal values</b>:
    *   <dl>
    *     <dt>S_OK</dt>
    *     <dd>Identifier is defined</dd>
    *     <dt>S_FALSE</dt>
    *     <dd>An error occured during the process</dd>
    *   </dl>		
    */
    virtual HRESULT get_LoginSessionId
        ( CATUnicodeString&  oLoginSessionId ) const = 0 ;

    //
    // ->Get the current transaction  Identifier 
    //
    // HRESULT S_OK    -> Identifier is defined 
    // HRESULT E_FAIL  -> An error occurs during the process 
    //
    /** @nodoc */
    virtual HRESULT get_LongTransactionId
        ( CATUnicodeString &  oTransactionId ) const = 0 ;

    //
    // ->Get the current command transaction  Identifier 
    //
    // HRESULT S_OK    -> Identifier is defined 
    // HRESULT E_FAIL  -> An error occurs during the process 
    //
    /** @nodoc */
    virtual HRESULT get_CommandTransactionId
        ( CATUnicodeString &  oTransactionId ) const = 0 ;

    //
    //
    // -> Register a transactional component 
    //
    // HRESULT S_OK    -> Identifier is defined 
    // HRESULT S_FALSE -> Modeler already registered
    // HRESULT E_FAIL  -> An error occurs during the process 
    //
    /** @nodoc */
    virtual HRESULT Register
        (CATIVpmLongTransaction_var& iTransactionComponent)= 0 ;

    //
    //
    // -> Register a CommandTransaction
    //
    // HRESULT S_OK    -> Identifier is defined
    // HRESULT S_FALSE -> A CommandTransaction with same Id is already registered
    // HRESULT E_FAIL  -> An error occurs during the process
    //
    /** @nodoc */
    virtual HRESULT Register
        (CATIVpmCommandTransaction_var& iCommandTransaction)= 0 ;


    //
    //
    // -> Unregister a CommandTransaction or a LongTransaction
    //
    // HRESULT S_OK    -> Identifier is defined
    // HRESULT S_FALSE -> No CommandTransaction or LongTransaction with iName has been found
    // HRESULT E_FAIL  -> An error occurs during the process
    //
    /** @nodoc */
    virtual HRESULT Unregister
        (const CATUnicodeString & iName)= 0 ;

    /**
    *   RefreshContents.
    *   @return
    *   An HRESULT value. 
    *   <br><b>Legal values</b>:
    *   <dl>
    *     <dt>S_OK</dt>
    *     <dd>At least one object needs to be refreshed</dd>
    *     <dt>S_FALSE</dt>
    *     <dd>No object needs to be refreshed</dd>
    *     <dt>E_FAIL</dt>
    *     <dd>An error occured during the process</dd>
    *   </dl>		
    */
    virtual HRESULT RefreshContents()=0;

    /**
    *   Is save operation needed.
    *   @return
    *   An HRESULT value. 
    *   <br><b>Legal values</b>:
    *   <dl>
    *     <dt>S_OK</dt>
    *     <dd>At least one modification needs to be saved</dd>
    *     <dt>S_FALSE</dt>
    *     <dd>No modification needs to be saved</dd>
    *     <dt>E_FAIL</dt>
    *     <dd>An error occured during the process</dd>
    *   </dl>		
    */
    virtual HRESULT IsSaveNeeded()=0;

    /**
    *   Save operation.
    *   @return
    *   An HRESULT value. 
    *   <br><b>Legal values</b>:
    *   <dl>
    *     <dt>S_OK</dt>
    *     <dd>Save is successful</dd>
    *     <dt>S_FALSE</dt>
    *     <dd>Nothing to save</dd>
    *     <dt>E_FAIL</dt>
    *     <dd>An error occured during the process</dd>
    *   </dl>		
    */
    virtual HRESULT Save () = 0 ; 

    //
    // -> SetSaveActivation
    //
    // HRESULT S_OK, if previous save was activated
    // HRESULT S_FALSE, if previous save was desactivated
    //
    /** @nodoc */
    virtual HRESULT SetSaveActivation(boolean iActivated)= 0 ;

    //
    // -> GetSaveActivation
    //
    // HRESULT S_OK, if save activated
    // HRESULT S_FALSE, if save desactivated
    //
    /** @nodoc */    
    virtual HRESULT GetSaveActivation()= 0 ;

    /**
    *   Start operation.
    *   @return
    *   An HRESULT value. 
    *   <br><b>Legal values</b>:
    *   <dl>
    *     <dt>S_OK</dt>
    *     <dd>Start is successful</dd>
    *     <dt>E_FAIL</dt>
    *     <dd>An error occured during the process</dd>
    *   </dl>		
    */
    virtual HRESULT Start () = 0 ; 

    /**
    *   Close operation.
    *   @return
    *   An HRESULT value. 
    *   <br><b>Legal values</b>:
    *   <dl>
    *     <dt>S_OK</dt>
    *     <dd>Close is successful</dd>
    *     <dt>E_FAIL</dt>
    *     <dd>An error occured during the process</dd>
    *   </dl>		
    */
    virtual HRESULT Close() = 0 ;

    /**
    *   Abort operation.
    *   @return
    *   An HRESULT value. 
    *   <br><b>Legal values</b>:
    *   <dl>
    *     <dt>S_OK</dt>
    *     <dd>Abort is successful</dd>
    *     <dt>S_FALSE</dt>
    *     <dd>Nothing to abort</dd>
    *     <dt>E_FAIL</dt>
    *     <dd>An error occured during the process</dd>
    *   </dl>		
    */
    virtual HRESULT Abort() = 0 ;


    /**
    *   Set the current project.
    *   @param iProject
    *   The VPMIProject to set
    *   @return
    *   An HRESULT value. 
    *   <br><b>Legal values</b>:
    *   <dl>
    *     <dt>S_OK</dt>
    *     <dd>Set is OK</dd>
    *     <dd></dd>
    *   </dl>		
    */
    virtual HRESULT SetCurrentProject
        (VPMIProject * iProject) = 0;

    //
    // -> GetCurrentProject
    //
    // HRESULT S_OK
    // HRESULT S_FALSE
    //

    /**
    *   Set the current project.
    *   @param ioProject
    *   The retrieved VPMIProject to set
    *   @return
    *   An HRESULT value. 
    *   <br><b>Legal values</b>:
    *   <dl>
    *     <dt>S_OK</dt>
    *     <dd>Get is OK</dd>
    *     <dd></dd>
    *   </dl>		
    */
    virtual HRESULT GetCurrentProject(VPMIProject ** ioProject) = 0;


    #define AppObjectMngmt
    /**
     * @nodoc
     * establish a link between an AssocObject and a VPMObject.
     * The LoginSession will take ownership of the AssocObject which
     * will be deleted when it is closed.
     * Once a link is establish subsequent links to the same object will fail.
     * @param i2Register 
     *          the AssocObject to link.
     * @param iID
     *          the unique id of the VPMObject.
     * @result
     *      S_OK the link was established.
     *      E_??? an error occured
     */
    virtual HRESULT RegisterAssocObject(CATVpmAssocObject*  i2Register, SEQUENCE(octet)& iID) = 0;
    /**
     * @nodoc
     * Retrieve a linked object from the symbolic link of a linked object.
     * @param oLinked 
     *          the linked object
     * @param iID
     *          the unique id of the VPMObject 
     * @result
     *      S_OK the object was retrieved.
     *      E_FAIL no linked object.
     */
    virtual HRESULT RetrieveAssocObject(CATVpmAssocObject**  oLinked, SEQUENCE(octet)& iID)=0;

/**
 * This method replaces VPMSession::GetLogicalUser.
 *
 * Get the logical User
 *   @param oUser
 *   The name of the logical user
 *   @return
 *   An HRESULT value. 
 *   <br><b>Legal values</b>:
 *   <dl>
 *     <dt>S_OK</dt>
 *     <dd></dd>
 *   </dl>		
 */
  virtual HRESULT GetLogicalUser(CATUnicodeString& oUser ) const = 0;


/**
 * @nodoc not implemented in V5R12, will be in V5R13
 *   Retrieve vault sessions.
 *   @param oVaultSession
 *   The vault sessions found
 *   @return
 *   An HRESULT value. 
 *   <br><b>Legal values</b>:
 *   <dl>
 *     <dt>S_OK</dt>
 *     <dd>Operation succeeded</dd>
 *     <dt>E_FAIL</dt>
 *     <dd>A problem occurs during the process</dd>
 *   </dl>		
 */
  virtual HRESULT GetVaultSession(ENOVIVaultSession ** oVaultSession)=0;
  
  /**
   * @nodoc not implemented in V5R12, will be in V5R13
   *   Retrieve vault user session.
   *   @param iVaultName
   *   The vault name
   *   @param oVaultUserSession
   *   The vault user sessions found
   *   @return
   *   An HRESULT value. 
   *   <br><b>Legal values</b>:
   *   <dl>
   *     <dt>S_OK</dt>
   *     <dd>Operation succeeded</dd>
   *     <dt>E_FAIL</dt>
   *     <dd>A problem occurs during the process</dd>
   *   </dl>		
   */
  virtual HRESULT GetVaultUserSession(const CATUnicodeString& iVaultName,
                                      ENOVIVaultUserSession ** oVaultUserSession )=0;  
  
};
//
// Handler Definition
//
CATDeclareHandler(CATIVpmLoginSession,CATBaseUnknown);
//
// How to get a LoginSession
//
#ifdef  _WINDOWS_SOURCE
#ifdef  __VX0FACTO
#define ExportedByVX0FACTO      __declspec(dllexport)
#else
#define ExportedByVX0FACTO      __declspec(dllimport)
#endif
#else
#define ExportedByVX0FACTO
#endif

    /**
    *   Get a login session.
    *   @param oLoginSession
    *   The login session
    */

ExportedByVX0FACTO HRESULT get_ENOVLoginSession 
(CATIVpmLoginSession_var& oLoginSession) ; 
//
// --------------------------------------------------------------
// End of the Header
// --------------------------------------------------------------
#endif

