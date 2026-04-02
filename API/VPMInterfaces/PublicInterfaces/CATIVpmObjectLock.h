#ifndef CATIVpmObjectLock_H
#define CATIVpmObjectLock_H
// COPYRIGHT DASSAULT SYSTEMES 1997  

/**

 *  @CAA2Level L1
 *  @CAA2Usage U5
*/

#include "CATBaseUnknown.h"
#include "CATUnicodeString.h"
#include "CATListOfCATUnicodeString.h"
#include "GUIDVPMInterfaces.h"
//
#ifndef LOCAL_DEFINITION_FOR_IID
extern ExportedByGUIDVPMInterfaces IID IID_CATIVpmObjectLock ;
#else
extern "C" const IID IID_CATIVpmObjectLock ;
#endif
/**
 * This class is an interface on VPMObject to manage Locks
 * <b>role</b>: This class provides for Lock management on VPMObject
 */
class ExportedByGUIDVPMInterfaces CATIVpmObjectLock: public CATBaseUnknown 
   {
   //
   CATDeclareInterface;
   //
   public:
   //----------------------------------------------------------------

/**
*   Get owner of the object.
*   @param oOwner
*   The name of the owner.
*   @return
*   An HRESULT value. 
*   <br><b>Legal values</b>:
*   <dl>
*     <dt>S_OK</dt>
*     <dd>Lock Owner is valuated</dd>
*     <dt>S_FALSE</dt>
*     <dd>Lock Owner is not assign</dd>
*     <dt>E_FAIL</dt>
*     <dd>An error occured during the process</dd>
*   </dl>		
*/
   virtual HRESULT GetLockOwner
                  (CATUnicodeString& oOwner )  = 0;

/**
*   Lock an object.
*   @return
*   An HRESULT value. 
*   <br><b>Legal values</b>:
*   <dl>
*     <dt>S_OK</dt>
*     <dd>The object is locked</dd>
*     <dt>S_FALSE</dt>
*     <dd>The object is already locked by another user</dd>
*     <dt>E_FAIL</dt>
*     <dd>An error occured during the lock process</dd>
*   </dl>		
*/
   virtual HRESULT SetLock () = 0 ;

/**
*   Unlock an object.
*   @return
*   An HRESULT value. 
*   <br><b>Legal values</b>:
*   <dl>
*     <dt>S_OK</dt>
*     <dd>The object is unlocked</dd>
*     <dt>E_FAIL</dt>
*     <dd>An error occured during the process</dd>
*   </dl>		
*/
   virtual HRESULT UnsetLock () = 0 ; 

/**
*   Override lock of an object.
*   @return
*   An HRESULT value. 
*   <br><b>Legal values</b>:
*   <dl>
*     <dt>S_OK</dt>
*     <dd>OverRide Lock processing</dd>
*     <dd>Warning: the overide will be available only during runtime.</dd>
*     <dd>The commit process will verify all locked objects.</dd>
*     <dt>E_FAIL</dt>
*     <dd>An error occured during the process</dd>
*   </dl>		
*/
   virtual HRESULT OverRideLock () = 0 ; 

/**
*   Ask an object if it locked.
*   @return
*   An HRESULT value. 
*   <br><b>Legal values</b>:
*   <dl>
*     <dt>S_OK</dt>
*     <dd>The object is locked</dd>
*     <dt>S_FALSE</dt>
*     <dd>The object is not locked</dd>
*     <dt>E_FAIL</dt>
*     <dd>An error occured during the process</dd>
*   </dl>		
*/
   virtual HRESULT IsLocked ( ) = 0 ;
   };
//-----------------------------------------------------------------
// Handler definition 
//-----------------------------------------------------------------
   CATDeclareHandler(CATIVpmObjectLock, CATBaseUnknown);
//
#endif
