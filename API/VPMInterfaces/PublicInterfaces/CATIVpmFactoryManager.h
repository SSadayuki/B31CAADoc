// --------------------------------------------------------            
// VPM (c) Copyright Dassault Systemes 1996                           
// -------------------------------------------------------------       
// Responsable: AHC                                                     
// --------------------------------------------------------------       
// Macro: CATIVpmFactoryManager.h                                      
// --------------------------------------------------------------       
// Contenu:  VPM Manager, gestion des objets du VPM         
// --------------------------------------------------------------       
// Historique:                                                          
// Creation : 96/09/12 > AHC                                           
// --------------------------------------------------------------       
//
/**
*	@CAA2Level L1
*	@CAA2Usage U3
*/
#ifndef CATIVpmFactoryManager_H_
#define CATIVpmFactoryManager_H_
//
#include "GUIDVPMInterfaces.h"
#include "CORBAAnyDef.h"
#include "sequence_CORBAAny.h"
#include "CATAttributeDescription.h"
#include "CATListOfVPMCA.h"
#include "CATBaseUnknown.h"
#include "CATUnicodeString.h"
#include "CATInterfaceObject.h"
#include "CATLISTV_CATBaseUnknown.h"
#include "CATLISTV_sequence_octet.h"
#include "CATListOfCATIVpmFactoryObject.h"
#include "CATIVpmQuery.h"

#include "GUIDVPMInterfaces.h"

#include "ENOVQueryResult.h"
#include "CATListOfENOVFetchedRange.h"

#ifndef LOCAL_DEFINITION_FOR_IID
extern ExportedByGUIDVPMInterfaces IID IID_CATIVpmFactoryManager ;
#else
extern "C" const IID IID_CATIVpmFactoryManager ;
#endif

class CATIVpmPropertiesManager_var ;
class CATIVpmObjectRules_var ;
class CATIVpmObjectPool_var ;
class CATIVpmGraphMng_var ;
class ENOVIObjectInfo_var ;
class CATIContainer_var ;

class ENOVQueryResult;

//
// -------------------------------
// Definition de la classe Interface
// -------------------------------
//
/**
 * Interface to the VPM factory manager.
 * <b>Role</b>: This interface manages the environment, creates, 
retrieves, loads, and binds objects,
 * runs queries, and retrieves a pool manager.   
 */
class ExportedByGUIDVPMInterfaces CATIVpmFactoryManager : public CATBaseUnknown   
  {
  //
  CATDeclareInterface;
  //
  public:
  // Manage the current Environment
  //---------------------------------------------------------

/**
*   Push the environment.
*   @param iEnvironment
*   The name of the environment.
*   @return
*   An HRESULT value. 
*   <br><b>Legal values</b>:
*   <dl>
*     <dt>S_OK</dt>
*     <dd>Push successful</dd>
*     <dt>E_FAIL</dt>
*     <dd>Bad environment</dd>
*   </dl>		
*/
  virtual HRESULT push_Environment(const CATUnicodeString& iEnvironment) = 0 ;

/**
*   Pop the environment.
*   @return
*   An HRESULT value. 
*   <br><b>Legal values</b>:
*   <dl>
*     <dt>S_OK</dt>
*     <dd>Pop successful</dd>
*     <dt>E_FAIL</dt>
*     <dd>No environment found</dd>
*   </dl>		
*/
  virtual HRESULT pop_Environment() = 0 ;

/** @nodoc */
  virtual const CATUnicodeString GetCurrentEnvironment() = 0 ;

/**
 * @deprecated V5R14
 *
*   VPMobject Bind.
*   @param iObjectInfo
*   .
*   @param iCont
*   Container to parse.
*   @param iRealObject
*   Object to bind
*   @param oVpmObject
*   VPMObject found
*   @return
*   An HRESULT value. 
*   <br><b>Legal values</b>:
*   <dl>
*     <dt>S_OK</dt>
*     <dd>VPMObject found</dd>
*     <dt>E_FAIL</dt>
*     <dd>VPMObject not found or errors occured during process</dd>
*   </dl>		
*/
  virtual HRESULT BindVPMObjectP
                          ( const ENOVIObjectInfo_var&  iObjectInfo    , 
                            const CATIContainer_var&    iCont          , 
                            void*                       iRealObject    ,
                            CATIVpmFactoryObject_var&   oVpmObject     ) = 0 ;

/**
*   VPMobject creation with identifier.
*   @param iDomainName
*   Name of the domain.
*   @param iContainer
*   The receptacle container.
*   @param iLateEntityName
*   The late type of the entity.
*   @param iIdentifier
*   The Identifier.
*   @return
*   The created VPMObject. 
*/
  virtual CATIVpmFactoryObject_var  CreateVPMObjectWithIdentifier
                          ( const CATUnicodeString&  iDomainName     , 
                            const CATIContainer_var& iContainer      ,
                            const CATUnicodeString&  iLateEntityName ,
                            const CORBAAny&          iIdentifier      ) = 0 ;

/**
*   VPMobject creation without identifier.
*   @param iDomainName
*   Name of the domain.
*   @param iContainer
*   The receptacle container.
*   @param iLateEntityName
*   The late type of the entity.
*   @return
*   The created VPMObject. 
*/
  virtual CATIVpmFactoryObject_var  CreateVPMObject
                          ( const CATUnicodeString&  iDomainName , 
                            const CATIContainer_var& iContainer,
                            const CATUnicodeString&  iLateEntityName ) = 0 ;

/**
*   VPMobject Query.
*   @param iQuery
*   The query to run.
*   @param iDomainName
*   Name of the domain.
*   @param iContainer
*   The target container.
*   @param oList
*   The list of objects found.
*   @param iResultLimit
*   .
*   @param iMemory
*   .
*   @return
*   An HRESULT value. 
*   <br><b>Legal values</b>:
*   <dl>
*     <dt>S_OK</dt>
*     <dd>Query successful</dd>
*     <dt>E_FAIL</dt>
*     <dd>VPMObject not found or errors occured during process</dd>
*   </dl>		 
*/
  virtual HRESULT RunQuery
		 ( const CATIVpmQuery_var&              iQuery,
		   const CATUnicodeString&              iDomainName,
		   const CATIContainer_var&             iContainer, 
		   CATLISTV(CATBaseUnknown_var)*&       oList,
		   int iResultLimit = 0,
		   int iMemory = 0) = 0;



//Method(s) added on April 2003
  /**
   * @nodoc
   * run a query without building the selected VPMObjects.
   * @param iQuery [in].
   * The query to run.
   * @param iContainer [in].
   * The target container.
   * @param iListOfPathExpressions [in].
   * The path expressions to valuate.
   * @param iSortAttr [in].
   * The path expression needed to sort the output result.
   * @param oQueryResult [out].
   * The query result .
   * @param iResultLimit [in].
   * the max number of results to select.
   * @param iMemory [in].
   * the query mode .
   */
  virtual  HRESULT RunQuery
		 ( const CATIVpmQuery_var&           iQuery,
		   const CATIContainer_var&          iContainer, 
		   const CATListOfCATUnicodeString & iListOfPathExpressions,
                  const CATUnicodeString& cSortPE,
		   ENOVQueryResult   *             &  oQueryResult,
		   int iResultLimit = 0,
		   int iMemory = 0)= 0;
    
  

//  END Method(s) added on 2003


/**
 * @deprecated V5R14
 *
*   VPMobject Bind.
*   @param iDomainName
*   The name of the domain.
*   @param iContainer
*   Container to parse.
*   @param iRealObjectName
*   Name of the object to bind
*   @param iRealObject
*   Object to bind
*   @return
*   The created VPMObject.
*/
  virtual CATIVpmFactoryObject_var  BindVPMObjectP
                          ( const CATUnicodeString&  iDomainName,
                            const CATIContainer_var& iContainer    ,
                            const CATUnicodeString&  iRealObjectName,
                            void*                    iRealObject    ) = 0;

/**
 * @deprecated V5R14
 *
*   Seek a VPMobject by Identifier.
*   @param iContainer
*   Container to parse.
*   @param iDomainName
*   The name of the domain.
*   @param iLateEntityName
*   Entity late type.
*   @param iIdentifier
*   The Identifier.
*   @return
*   The VPMObject found.
*/
  virtual CATIVpmFactoryObject_var  GetVPMObject
                                 ( const CATIContainer_var& iContainer     ,
                                   const CATUnicodeString&  iDomainName    ,
                                   const CATUnicodeString&  iLateEntityName,
                                   const CORBAAny&          iIdentifier ) = 0 ;

/**
 * @deprecated V5R14
 *
*   Get VPMobject Identifier.
*   @param iDomainName
*   The name of the domain.
*   @param iVPMObject
*   The VPMObject.
*   @return
*   The Identifier.
*/
  virtual CORBAAny  GetIdentifier
                   ( const CATUnicodeString&  iDomainName       ,
                     const CATIVpmFactoryObject_var& iVPMObject ) = 0 ;

  //
  // Get the list of Attributes access.
  //-----------------------------------------------------------------
/** @nodoc */
  virtual CATListOfVPMCA  GetVpmObjectAttributeNames
                  ( const CATUnicodeString&  iDomainName    ,
                    const CATIContainer_var& iContainer      ,
                    const CATUnicodeString&  iLateEntityName , 
                    const AccessControl&     iAccessControl  ) = 0;
  //
  // Get the specific Attribute access 
  //-----------------------------------------------------------------
/** @nodoc */
  virtual VPMCA    GetVpmObjectAttributeName
                  ( const CATUnicodeString&  iDomainName     ,
                    const CATIContainer_var& iContainer      ,
                    const CATUnicodeString&  iLateEntityName , 
                    const CATUnicodeString&  iAttributeName  , 
                    const AccessControl&     iAccessControl  ) = 0;

/**
*   Get a Graph Manager.
*   @param iGraphName
*   The name of the graph.
*   @param iRules
*   .
*   @return
*   The graph manager.
*/
  virtual CATIVpmGraphMng_var GetGraphManager 
                         ( const CATUnicodeString&   iGraphName       , 
                           const CATBaseUnknown_var& iRules)= 0;
  //
  // Get the Property Manager given a Domain name (PEOPLE, PRODUCT, etc)
  //---------------------------------------------------------

/** @nodoc */
  virtual HRESULT GetPropertiesManager
                  ( const CATUnicodeString        &iDomainName,
                    CATIVpmPropertiesManager_var  &oTheMgr) = 0;
  //
  // Get the current Property Manager name (PEOPLE, PRODUCT, etc)
  //---------------------------------------------------------

/** @nodoc */
  virtual HRESULT GetCurrentPropertiesManagerName
                  ( CATUnicodeString& oDomainName ) = 0 ;

/**
*   Get a Pool Manager.
*   @param PoolManager
*   The pool manager found.
*   @return
*   An HRESULT value. 
*   <br><b>Legal values</b>:
*   <dl>
*     <dt>S_OK</dt>
*     <dd>.</dd>
*   </dl>		 
*/
  virtual HRESULT GetPoolManager 
                  (CATIVpmObjectPool_var& PoolManager) = 0 ; 

/**
 * @deprecated V5R14
 *
*   Retrieve VPMobject by Name (Default= All).
*   @param iName
*   The name of the VPMObject (Default= All).
*   @return
*   The list of VPMObjects.
*/
  virtual CATLISTV(CATIVpmFactoryObject_var) GetFactoryObjectList(const CATUnicodeString& iName="") = 0 ;

/** @nodoc
 * @deprecated V5R14
 *
*   Retrieve VPMobject related to a Real object.
*   @param iRealObjectHandler
*   A Handler on a real object).
*   @return
*   The VPMObject found.
*/
  virtual CATIVpmFactoryObject_var GetFactoryObject
			(const CATInterfaceObject_var& iRealObjectHandler)= 0 ;

/**
 * @deprecated V5R14
 *
*   Retrieve VPMobject related to a Real object.
*   @param iRealObject
*   A pointer on a real object).
*   @return
*   The VPMObject found.
*/
  virtual CATIVpmFactoryObject_var GetRealObject
			          (void* iRealObject)= 0 ;

/**
 * @deprecated V5R14
 *
*   Retrieve object UUID by domain.
*   @param iDomainName
*   Name of the domain.
*   @param ListOfObjectId
*   The list of octet sequences found.
*   @return
*   An HRESULT value. 
*   <br><b>Legal values</b>:
*   <dl>
*     <dt>S_OK</dt>
*     <dd>Octet sequences found</dd>
*     <dt>S_FALSE</dt>
*     <dd>Empty domain</dd> 
*     <dt>E_FAIL</dt>
*     <dd>An error occured during the process</dd>
*   </dl>		
*/
  virtual  HRESULT GetObjectIdentifierList ( const CATUnicodeString& iDomainName ,
                                             CATLISTV(_SEQUENCE_octet) & ListOfObjectId ) =0 ;

/**
*   Load objects from their sequence.
*   @param ListOfObjectId
*   The list of octet sequences.
*   @return
*   An HRESULT value. 
*   <br><b>Legal values</b>:
*   <dl>
*     <dt>S_OK</dt>
*     <dd>Load is OK (in the container of the first object)</dd> 
*     <dt>E_FAIL</dt>
*     <dd>Load failed</dd>
*   </dl>		
*/
  virtual  HRESULT LoadListOfInstances  ( const CATLISTV(_SEQUENCE_octet) & ListOfObjectId ) =0 ;


/**
*   Load a list of objects linked by reference attribute from a list of object.
*   example :   object  
*             < attref1 --> object1   
*                          < attref2 -->  object 2
*   @param iListOfVPMobject
*   The list of VPM objects.
*   @param iAttributePath
*   string defining attribute path  ( name of attribute separated by dot )   
*   example :  attref1.attref2 
*   current limitation :  all input VPM object must have the same type
*   maximum level of depth is 2   i.e : path = entity::att1.att2  
*   works only for single reference attribute ( reference aggregate not allowed )
*   @return
*   An HRESULT value. 
*   <br><b>Legal values</b>:
*   <dl>
*     <dt>S_OK</dt>
*     <dd>Load is OK</dd> 
*     <dt>E_FAIL</dt>
*     <dd>Load failed</dd>
*   </dl>		
*/
  virtual  HRESULT LoadListOfLinkedObject ( CATLISTV(CATBaseUnknown_var)* & iListOfVPMobject, 
	                                        const CATUnicodeString & iAttributPath ) =0 ;


/** @nodoc */
  virtual HRESULT Register 
            ( const CATUnicodeString& iEvent         ,
              const CATIVpmFactoryObject_var& iObject) = 0 ;
  /**
   * @nodoc
   * initializes the query in fetched mode.
   * @param iQuery [in].
   * The query to run.
   * @param iContainer [in].
   * The target container.
   * @param iListOfPathExpressions [in].
   * The path expressions to valuate.
   * @param iSortAttr [in].
   * The path expression needed to sort the output result.
   * @param oQueryResult [out].
   * The query result on the first range.
   * @param oListOfFetchedRanges [out].
   * The computed query ranges.
   * @param oNbSelectedObjectsBeforeSecurity [out].
   * The number of objects selected before having apply the security rules.
   * @param oNbSelectedObjectsAfterSecurity [out].
   * The number of objects selected after having apply the security rules.
   * @param iNbLinesPerPage [in].
   * The number of result per page (or range ) .
   * @return
   *   An HRESULT value. 
   *   <br><b>Legal values</b>:
   *   <dl>
   *     <dt>S_OK</dt>
   *     <dt>E_FAIL</dt>
   *   </dl>		
   */
  virtual HRESULT InitFetchedQuery ( const CATIVpmQuery_var&           iQuery,
                                    const CATIContainer_var&          iContainer, 
                                    const CATListOfCATUnicodeString & iListOfPathExpressions,
                                    const CATUnicodeString          & iSortAttr,
                                    ENOVQueryResult   *             & oQueryResult,
                                    CATListOfENOVFetchedRange       & oListOfFetchedRanges,
                                    int&                              oNbSelectedObjectsBeforeSecurity,
                                    int&                              oNbSelectedObjectsAfterSecurity ,						  
                                    int iNbLinesPerPage) =0;
  /**
   * @nodoc
   * executes a query in fetched mode on a specific range.
   * @param iQuery [in].
   * The query to run.
   * @param iContainer [in].
   * The target container.
   * @param iListOfPathExpressions [in].
   * The path expressions to valuate.
   * @param iSortAttr [in].
   * The path expression needed to sort the output result. 
   * @param iWantedRange [in].
   * the requested range of values.
   * @param oQueryResult [out].
   * the query result.
   * @return
   *   An HRESULT value. 
   *   <br><b>Legal values</b>:
   *   <dl>
   *     <dt>S_OK</dt>
   *     <dt>E_FAIL</dt>
   *   </dl>		
   */
  virtual HRESULT ExecuteFetchedQuery ( const CATIVpmQuery_var&           iQuery,
                                       const CATIContainer_var&          iContainer, 
                                       const CATListOfCATUnicodeString & iListOfPathExpressions,
                                       const CATUnicodeString          & iSortAttr,
                                       const ENOVFetchedRange * iWantedRange,
                                       ENOVQueryResult   *             & oQueryResult)=0;
  

  
  };
  CATDeclareHandler(CATIVpmFactoryManager,CATBaseUnknown);
//
// --------------------------------------------------------------
// Fin de la macro                                                    
// --------------------------------------------------------------       
#endif








