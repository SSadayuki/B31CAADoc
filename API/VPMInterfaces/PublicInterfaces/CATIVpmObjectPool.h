// -*- C++ -*-
#ifndef _CATIVpmObjectPool_H
#define _CATIVpmObjectPool_H
// --------------------------------------------------------------
// VPM (c) Copyright Dassault Systemes 1996-2004                           
// --------------------------------------------------------------       
// 
// Macro: CATIVpmObjectPool.h                                      
//    ENOVIA LCA Object pool interface.
// 
// --------------------------------------------------------------       
// Contents  :  VPM Pool Manager and Base of Facts        
// --------------------------------------------------------------       
// Historique:                                                          
// Creator   : A.HAMONIC                                            
// Date      : 98/10/09                                            
// --------------------------------------------------------------       
//
/**
 *	@CAA2Level L1
 *	@CAA2Usage U3
 */


#include "GUIDVPMInterfaces.h"
#include "CATBaseUnknown.h"
#include "CATUnicodeString.h"
#include "CATListOfCATUnicodeString.h"
#include "CATLISTV_CATBaseUnknown.h"
#include "CATListOfCATIVpmFactoryObject.h"

#include "GUIDVPMInterfaces.h"

#ifndef LOCAL_DEFINITION_FOR_IID
extern ExportedByGUIDVPMInterfaces IID IID_CATIVpmObjectPool ;
#else
extern "C" const IID IID_CATIVpmObjectPool ;
#endif

/**
 * Activation of a base of facts.
 * @param NOACTIVEBD
 *    The base of facts is not active.
 * @param ACTIVEBD
 *    The base of facts is active.
 */
enum ActivateBase {
  NOACTIVEBD =0,
  ACTIVEBD   =1
};

/**
 * Pool operation mode.
 * @param NOREPLACE
 *     No replace mode: operations using this mode will fail if the slot is already occupied.
 * @param REPLACE
 *     Replace mode: operations using this mode will work even if the designated slot is already occupied.
 */
enum PoolSetMode  {
  NOREPLACE =0,
  REPLACE   =1
};

/**
 *  This interface provides a set of methods to manage a list of 
 *  VPMObject Pools. These pools will be used by the ENOVIA LCA applications
 *  to share some information. A Pool could be considered as a kind of 
 *  base of facts by the Business Rules Manager.
 *
 */
class ExportedByGUIDVPMInterfaces CATIVpmObjectPool : public CATBaseUnknown   
{
  /** @nodoc */
  CATDeclareInterface;
  
public:

  /**
   *
   * Activate a pool as current.
   * @param iPoolName
   *   the name of the pool that is to be activated.
   *
   * @return
   *   An HRESULT value. 
   *   <br><b>Legal values</b>:
   *   <dl>
   *     <dt>S_OK</dt>
   *     <dd>Pool activated</dd>
   *     <dt>E_FAIL</dt>
   *     <dd>Error raised during processing </dd>
   *   </dl>
   *
   */
  virtual  HRESULT SetCurrentPool 
  ( const CATUnicodeString& iPoolName   ) = 0 ; 

  /**
   *
   * Get the name of a current pool.
   * @param oPoolName
   *   returns the name of the current pool.
   *
   * @return
   *   An HRESULT value. 
   *   <br><b>Legal values</b>:
   *   <dl>
   *     <dt>S_OK</dt>
   *     <dd>Pool name returned</dd>
   *     <dt>E_FAIL</dt>
   *     <dd>Error raised during processing </dd>
   *   </dl>
   *
   */
  virtual  HRESULT GetCurrentPool 
  ( CATUnicodeString& oPoolName ) = 0 ; 
  /**
   *
   * Change the pool activation flag.
   * @param iPoolName
   *   the name of the pool for which you want to change the flag value.
   * @param iActivateFlag
   *   the desired value of the flag.
   *
   * @return
   *   An HRESULT value. 
   *   <br><b>Legal values</b>:
   *   <dl>
   *     <dt>S_OK</dt>
   *     <dd>Activated</dd>
   *     <dt>E_FAIL</dt>
   *     <dd>Error raised during processing </dd>
   *   </dl>
   *
   */
  virtual  HRESULT ActivateSwitch
  ( const CATUnicodeString& iPoolName    ,
    const ActivateBase&     iActivateFlag) = 0 ;


  /**
   *
   * Query the pool activation status.
   * @param iPoolName
   *   the name of the pool for which you want to query the status.
   *
   * @return
   *   An HRESULT value. 
   *   <br><b>Legal values</b>:
   *   <dl>
   *     <dt>S_OK</dt>
   *     <dd>Is activated</dd>
   *     <dt>S_FALSE</dt>
   *     <dd>Not activated</dd>
   *     <dt>E_FAIL</dt>
   *     <dd> Error raised during processing </dd>
   *   </dl>
   *
   */
  virtual  HRESULT IsActivated 
  ( const CATUnicodeString& iPoolName ) = 0 ;

  /**
   *
   * Get the list of VPMObject names defined in a pool.
   * @param iPoolName
   *   the name of the pool for which to query the list.
   * @param ioVPMObjectNameList
   *   the list of VPMObject names.
   *
   * @return
   *   An HRESULT value. 
   *   <br><b>Legal values</b>:
   *   <dl>
   *     <dt>S_OK</dt>
   *     <dd>Defined VPMObject names returned</dd>
   *     <dt>S_FALSE</dt>
   *     <dd>No VPMObject defined</dd>
   *     <dt>E_FAIL</dt>
   *     <dd>Error raised during processing</dd>
   *   </dl>
   *
   */
  virtual HRESULT GetListOfVPMObject 
  ( const CATUnicodeString&    iPoolName          ,
    CATListOfCATUnicodeString& ioVPMObjectNameList ) const =0 ;


  /**
   *
   * Clean a set of variables included into the Pool.
   * @param iPoolName
   *   the name of the pool on which to perform the operation.
   *
   * @return
   *   An HRESULT value. 
   *   <br><b>Legal values</b>:
   *   <dl>
   *     <dt>S_OK</dt>
   *     <dd>Flush successful</dd>
   *     <dt>S_FALSE</dt>
   *     <dd>Pool is empty</dd>
   *     <dt>E_FAIL</dt>
   *     <dd>Error raised during processing</dd>
   *   </dl>
   *
   */
  virtual HRESULT Flush 
  (const CATUnicodeString& iPoolName ) = 0 ; 
  
  /**
   *
   * Retrieve a typed VPMObject from a pool.
   * @param iPoolName
   *   the name of the pool on which to perform the operation.
   * @param iVPMObjectName
   *   the type of the object
   * @param oVPMObject
   *   the retrieved VPMObject
   *
   *
   * @return
   *   An HRESULT value. 
   *   <br><b>Legal values</b>:
   *   <dl>
   *     <dt>S_OK</dt>
   *     <dd>The object exists</dd>
   *     <dt>S_FALSE</dt>
   *     <dd>The object does not exist</dd>
   *     <dt>E_FAIL</dt>
   *     <dd>Error raised during processing</dd>
   *   </dl>
   *
   */
  virtual  HRESULT GetVPMObject 
  (const CATUnicodeString&   iPoolName      , 
   const CATUnicodeString&   iVPMObjectName ,
   CATIVpmFactoryObject_var& oVPMObject     ) const = 0; 

  /**
   *
   * Retrieve typed VPMObjects from a pool.
   * @param iPoolName
   *   the name of the pool on which to perform the operation.
   * @param iVPMObjectName
   *   the type of the object
   * @param oListOfVPMObject
   *   the list of VPMObjects retrieved
   *
   *
   * @return
   *   An HRESULT value. 
   *   <br><b>Legal values</b>:
   *   <dl>
   *     <dt>S_OK</dt>
   *     <dd>VPMObjects of given type exist</dd>
   *     <dt>S_FALSE</dt>
   *     <dd>No VPMObject of given type found</dd>
   *     <dt>E_FAIL</dt>
   *     <dd>Error raised during processing</dd>
   *   </dl>
   *
   */
  virtual  HRESULT GetVPMObjectList 
  ( const CATUnicodeString&             iPoolName        , 
    const CATUnicodeString&             iVPMObjectName   ,
    CATLISTV(CATIVpmFactoryObject_var)& oListOfVPMObject )const = 0; 
  

  /**
   *
   * Add a typed VPMObject to the pool.
   * @param iPoolName
   *   the name of the pool on which to perform the operation.
   * @param iVPMObjectName
   *   the type of the VPMObject
   * @param iVPMObject
   *   the VPMObject to be added
   * @param iSetMode
   *   indicates whether existing VPMObject should be replaced or not. (NOREPLACE by default)
   *
   *
   * @return
   *   An HRESULT value. 
   *   <br><b>Legal values</b>:
   *   <dl>
   *     <dt>S_OK</dt>
   *     <dd>The VPMObject is created</dd>
   *     <dt>S_FALSE</dt>
   *     <dd>The VPMObject already exists</dd>
   *     <dt>E_FAIL</dt>
   *     <dd>Error raised during processing</dd>
   *   </dl>
   *
   */
  virtual  HRESULT SetVPMObject 
  (const CATUnicodeString&         iPoolName      , 
   const CATUnicodeString&         iVPMObjectName ,
   const CATIVpmFactoryObject_var& iVPMObject     ,
   const PoolSetMode&              iSetMode = NOREPLACE ) = 0; 

  /**
   *
   * Add a list of typed VPMObjects.
   * @param iPoolName
   *   the name of the pool on which to perform the operation.
   * @param iVPMObjectName
   *   the type of the object
   * @param iListOfVPMObject
   *   the VPMObjects to be added
   * @param iSetMode
   *   indicates whether existing VPMObjects should be replaced or not. (NOREPLACE by default)
   *
   * @return
   *   An HRESULT value. 
   *   <br><b>Legal values</b>:
   *   <dl>
   *     <dt>S_OK</dt>
   *     <dd>The list of VPMObjects is created</dd>
   *     <dt>S_FALSE</dt>
   *     <dd>The list of VPMObjects already exist</dd>
   *     <dt>E_FAIL</dt>
   *     <dd>Error raised during processing</dd>
   *   </dl>
   *
   */
  virtual  HRESULT SetVPMObjectList 
  ( const CATUnicodeString&             iPoolName              , 
    const CATUnicodeString&             iVPMObjectName         ,
    const CATLISTV(CATIVpmFactoryObject_var)& iListOfVPMObject , 
    const PoolSetMode&                  iSetMode  = NOREPLACE  ) = 0; 
  
  /**
   *
   * Remove a typed VPMObject from a pool.
   * @param iPoolName
   *   the name of the pool on which to perform the operation.
   * @param iVPMObjectName
   *   the type of the VPMObject to remove
   *
   *
   * @return
   *   An HRESULT value. 
   *   <br><b>Legal values</b>:
   *   <dl>
   *     <dt>S_OK</dt>
   *     <dd>the VPMObject is removed from the pool</dd>
   *     <dt>S_FALSE</dt>
   *     <dd>the VPMObject does not exist</dd>
   *     <dt>E_FAIL</dt>
   *     <dd>Error raised during processing</dd>
   *   </dl>
   *
   */
  virtual  HRESULT EraseVPMObject 
  (const CATUnicodeString&   iPoolName      , 
   const CATUnicodeString&   iVPMObjectName ) = 0 ; 
  /**
   *
   * Remove a list of typed VPMObjects from a pool.
   * @param iPoolName
   *   the name of the pool on which to perform the operation.
   * @param iVPMObjectName
   *   the type of the VPMObjects
   *
   * @return
   *   An HRESULT value. 
   *   <br><b>Legal values</b>:
   *   <dl>
   *     <dt>S_OK</dt>
   *     <dd>The list is removed</dd>
   *     <dt>S_FALSE</dt>
   *     <dd>The list does not exist</dd>
   *     <dt>E_FAIL</dt>
   *     <dd>Error raised during processing</dd>
   *   </dl>
   */
  virtual  HRESULT EraseVPMObjectList 
  ( const CATUnicodeString&             iPoolName        , 
    const CATUnicodeString&             iVPMObjectName  ) = 0 ; 

};
CATDeclareHandler(CATIVpmObjectPool,CATBaseUnknown);

#endif
