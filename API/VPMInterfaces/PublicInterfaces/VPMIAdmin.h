//
// COPYRIGHT DASSAULT SYSTEMES 1999-2014
//=============================================================================
//
// VPMIAdmin.h
// this Object is aggregated in the VPMSession.
//
/**
 * @CAA2Level L1 
 * @CAA2Usage U3
 */ 
//=============================================================================
//=============================================================================
// July 1999   Creation                                     JDC
// Oct. 1999   Mise a jour                                  JDC
// Jun. 2001   Mise a jour                                  JDC
//=============================================================================
#include "GUIDVPMInterfaces.h"

#ifndef VPMIAdmin_h
#define VPMIAdmin_h

#include "CATUnicodeString.h"
#include "CATLISTPIUnknown.h"

class CATDbBinary;

//===========================//
class VPMIAppServer     ;
class VPMIBusinessDomain;
class VPMIDataDomain    ;
class VPMIDataRDB       ;
class VPMIDataServer    ;
class VPMIDomain        ;
class VPMIHost          ;
class VPMIProject       ;
class VPMIServer        ;
class VPMIVaultServer   ;

//===========================//
class VPMIExternSite;
class VPMILocalSite;
class VPMIReplApplyStatus;
class VPMIReplCaptureStatus;
class VPMIReplMedia;
class VPMIReplPackageDefinition;
class VPMIReplSubscription;
class VPMIReplSubscribingTarget;

//===========================//
#ifndef LOCAL_DEFINITION_FOR_IID
extern ExportedByGUIDVPMInterfaces IID IID_VPMIAdmin;
#else
extern "C" const IID IID_VPMIAdmin;
#endif


/**
 * This class supplies methods to manage administration data
 * <b>role</b>: This class enables to create/delete/modify administration data
 */
class ExportedByGUIDVPMInterfaces VPMIAdmin : public CATBaseUnknown
{
  CATDeclareInterface;
  public :
  /**
   * How to use : 
   *          1. GetVPMIAdmin
   *          2. Init
   *          3...
   *          4. End
   */
   
  /**
   * Initialization.
   * Default Authentication is System
   * N.B.: iLoadAdmin > 0 in the LoadAdmin load only.
   * @return
   * an HRESULT value.
   * <br> <b>Legal values</b>:
   *  <tt>S_OK</tt>: 
   *  <tt>E_FAIL</tt>:
   */
  virtual HRESULT Init (const CATUnicodeString & iUserName="",
		       const CATUnicodeString & iPassword="",
		       const int iLoadAdmin = 0             )=0;
  /**
   * Save of all the modifications which have been done during the current logical unit of work.
   * @return
   * an HRESULT value.
   * <br> <b>Legal values</b>:
   *  <tt>S_OK</tt>: 
   *  <tt>E_FAIL</tt>:
   */ 
  virtual HRESULT Save()              =0;
  /**
   * Cancel of all the modifications which have been done since the last Save.
   * @return
   * an HRESULT value.
   * <br> <b>Legal values</b>:
   *  <tt>S_OK</tt>: 
   *  <tt>E_FAIL</tt>:
   */ 
  virtual HRESULT Abort()             =0;
  /**
   * Release of the allocated resources.
   * @return
   * an HRESULT value.
   * <br> <b>Legal values</b>:
   *  <tt>S_OK</tt>: 
   *  <tt>E_FAIL</tt>:
   */ 
  virtual HRESULT End()               =0;
  
  /**
   * Enable modifications.  
   * =>Do not use it during the VPMSession.
   * @return
   * an HRESULT value.
   * <br> <b>Legal values</b>:
   *  <tt>S_OK</tt>: 
   *  <tt>E_FAIL</tt>:
   */
  virtual HRESULT BeginModifications()=0;

//===================//
//    Project Mngmt  //
//===================//
  
  /**
   * Get the list of all projects.
   *    N.B.: input user name parameter is not used.
   * @return
   * an HRESULT value.
   * <br> <b>Legal values</b>:
   *  <tt>S_OK</tt>: 
   *  <tt>S_FALSE</tt>:
   *  <tt>E_FAIL</tt>:  
   */ 
  virtual HRESULT GetListOfProjects(const CATUnicodeString & iUserName      ,
				    CATLISTP(IUnknown)     * oListOfProjects) const = 0;
  
  /**
   * Get the list of all project objects.
   * @return
   * an HRESULT value.
   * <br> <b>Legal values</b>:
   *  <tt>S_OK</tt>: 
   *  <tt>E_FAIL</tt>: 
   */ 
  virtual HRESULT GetListOfProjects(CATLISTP(IUnknown)     * oListOfProjects) const = 0;
  
  /**
   * Get a project object named iName.
   * @param oProject [out, VPMIProject#Release]
   * 
   * @return
   * an HRESULT value.
   * <br> <b>Legal values</b>:
   *  <tt>S_OK</tt>: 
   *  <tt>S_FALSE</tt>:
   *  <tt>E_FAIL</tt>:  
   */ 
  virtual HRESULT GetProject (const CATUnicodeString & iName     ,
			     VPMIProject  **          oProject) const = 0;
  
//===================//
//    Domain Mgmt    //
//===================//  
  /**
   * Get the list of all domain objects.
   * @return
   * an HRESULT value.
   * <br> <b>Legal values</b>:
   *  <tt>S_OK</tt>: 
   *  <tt>E_FAIL</tt>:  
   */ 
  virtual HRESULT GetListOfDomains (CATLISTP(IUnknown) *    oListOfDomains) const = 0;
  
  /** @nodoc
   * Get a domain object named iDomainName.
   * @param oDomain [out, VPMIDomain#Release]
   */ 
  virtual HRESULT GetDomain (const CATUnicodeString &    iDomainName,
			    VPMIDomain **                oDomain    ) const =0;

//===================//
//    Host Mgmt      //
//===================// 

  /**
   * Get the list of all host objects.
   */ 
  virtual HRESULT GetListOfHosts (CATLISTP(IUnknown) * oListOfHosts) const = 0;

  /** @nodoc
   * get a host object from its name.
   * @param oHost [out, VPMIHost#Release]
   */ 
  virtual HRESULT GetHost (const CATUnicodeString & iName,
			  VPMIHost **               oHost) const = 0;

//===================//
//  Data Server Mgmt //
//===================// 

  /**
   * Get the list of all data server objects.
   */  
  virtual HRESULT GetListOfDataServers (CATLISTP(IUnknown) * oListOfDataServers) const = 0;

  /** @nodoc
   * Get a data server object named iName.
   * @param oServer [out, VPMIDataServer#Release]
   */  
  virtual HRESULT GetDataServer (const CATUnicodeString &     iName  ,
				VPMIDataServer **            oServer) const = 0;

//===================//
//  App Server Mgmt  //
//===================// 

  /**
   * Get the list of all application server objects.
   */ 
  virtual HRESULT GetListOfAppServers (CATLISTP(IUnknown) * oListOfAppServers) const = 0;

  /** @nodoc
   * Get an application server object named iName.
   * @param oServer [out, VPMIAppServer#Release]
   */  
  virtual HRESULT GetAppServer (const CATUnicodeString & iName  ,
			       VPMIAppServer **    oServer      ) const = 0;

//====================//
//  Vault Server Mgmt //
//====================// 

  /**
   * Get the list of all vault server objects.
   */ 
  virtual HRESULT GetListOfVaultServers (CATLISTP(IUnknown) * oListOfVaultServers) const = 0;
  
  /** @nodoc
   * Get a vault server object named iName.
   * @param oServer [out, VPMIVaultServer#Release]
   */ 
  virtual HRESULT GetVaultServer (const CATUnicodeString & iName    ,
				 VPMIVaultServer **    oServer      ) const = 0;

//===================//
// DataDomain Mgmt   //
//===================// 

  /**
   * Get the list of all data domain objects.
   */
  virtual HRESULT GetListOfDataDomains (CATLISTP(IUnknown) * oListOfDataDomains) const = 0;
  
  /** @nodoc
   * Get a data domain object named iName.
   * @param oDataRDB [out, VPMIDataDomain#Release]
   */
  virtual HRESULT GetDataDomain (const CATUnicodeString &  iName   ,
				VPMIDataDomain  **        oDataRDB) const = 0;
    
  /** @nodoc
   * Get a DataDomain object from its OID.
   * @param oDataDomain [out, VPMIDataDomain#Release]
   */
  virtual HRESULT GetDataDomain (CATDbBinary * iOID           ,
				VPMIDataDomain ** oDataDomain) const = 0;

//====================//
// BusinessDomain Mgmt//
//====================//

  /**
   * Get the list of all business domain objects.
   */ 
  virtual HRESULT GetListOfBusinessDomains (CATLISTP(IUnknown) * oListOfBusinessDomains) const = 0;

  /** @nodoc
   * Get a business domain object named iName.
   * @param oBusinessDomain [out, VPMIBusinessDomain#Release]
   */  
  virtual HRESULT GetBusinessDomain (const CATUnicodeString & iName          ,
				    VPMIBusinessDomain **     oBusinessDomain) const = 0;
  
  //-- begin Add V5R8
  //
  // MULTISITE MANAGEMENT 
  //
    
  /** @nodoc
   * Create a new replication package. 
   * @param iOid
   * <br> <b>Legal values</b>: a 16-bytes identifier. 
   * @param iName
   * this string is not an identifier.<BR>
   * but is required to be unique for all package definition
   * @param oPackage
   * a new package
   * @return
   * an HRESULT value.
   * <br> <b>Legal values</b>:
   *  <tt>S_OK</tt>:package created
   *  <tt>S_FALSE</tt>:the identifier iOid already exists.
   *  <tt>E_FAIL</tt>:
   */
  virtual HRESULT CreateReplPackageDefinition (const CATDbBinary&          iOid   ,
					      const CATUnicodeString&     iName  ,
					      VPMIReplPackageDefinition *& oPackage)=0;
  
  /** @nodoc
   * Create a new known site.
   * @param iOid
   * <br> <b>Legal values</b>: a 16-bytes identifier. 
   * @param iName
   * this string is not an identifier.<BR>
   * but is required to be unique for all site definition.
   * @param oSite
   * a new site
   * @return
   * an HRESULT value.
   * <br> <b>Legal values</b>:
   *  <tt>S_OK</tt>:site created
   *  <tt>S_FALSE</tt>:the identifier iOid already exists.
   *  <tt>E_FAIL</tt>:
   */
  virtual HRESULT CreateExternSite(const CATDbBinary&             iOid ,
				   const CATUnicodeString&        iName,
				   VPMIExternSite *&              oSite)=0;

  /** @nodoc
   * Get the extern site named iName.
   * @param iName
   * the name of the site looked for.
   * @param oSite [out, VPMIExternSite#Release]
   * the looked for site.
   * @return
   * an HRESULT value.
   * <br> <b>Legal values</b>:
   *  <tt>S_OK</tt>:site found
   *  <tt>S_FALSE</tt>:site not found
   *  <tt>E_FAIL</tt>:
   */ 
  virtual HRESULT GetExternSite (const CATUnicodeString& iName,
				VPMIExternSite *&       oSite) const =0;
  
  /** @nodoc
   * Create a new definition to replicate data for a site.
   * @param iOid
   * <br> <b>Legal values</b>: a 16-bytes identifier. 
   * @param iName
   * this string is not an identifier.<BR>
   * but is required to be unique for all target definition.
   * @param iPackage
   * the package to send.
   * @param iSite
   * the site where data will be send.
   * @param oTarget
   * the subscribing target created.
   * @return
   * an HRESULT value.
   * <br> <b>Legal values</b>:
   *  <tt>S_OK</tt>:target created
   *  <tt>S_FALSE</tt>:the identifier iOid already exists. 
   *  <tt>E_FAIL</tt>:
   */
  virtual HRESULT CreateReplSubscribingTarget(const CATDbBinary&              iOid   ,
					      const CATUnicodeString&         iName  ,
					      const VPMIReplPackageDefinition* iPackage,
					      const VPMIExternSite*           iSite  ,
					      VPMIReplSubscribingTarget*&     oTarget)=0;

  /** @nodoc
   * Get the subscribing target named iName.
   * @param iName
   * the name of the target looked for. 
   * @param oTarget [out, VPMIReplSubscribingTarget#Release]
   * the site looked for.
   * @return
   * an HRESULT value.
   * <br> <b>Legal values</b>:
   *  <tt>S_OK</tt>:site found
   *  <tt>S_FALSE</tt>:site not found
   *  <tt>E_FAIL</tt>:
   */ 
  virtual HRESULT GetReplSubscribingTarget(const CATUnicodeString& iName       ,
					   VPMIReplSubscribingTarget *& oTarget)=0;
 
  /** @nodoc
   * Generate a subscription string for a given target.
   * @param iTarget
   * the target where the string will be send.
   * @param oBuf
   * the string containing the subscription
   * @return
   * an HRESULT value.
   * <br> <b>Legal values</b>:
   *  <tt>S_OK</tt>:
   *  <tt>S_FALSE</tt>:subscription refused
   *  <tt>E_FAIL</tt>:
   */
  virtual HRESULT GenerateSubscription(const VPMIReplSubscribingTarget* iTarget,
				       CATUnicodeString& oBuf                  )=0;
  
  
  /** @nodoc
   * Update the Admin with a new subscription.
   * @param iBuf
   * the string containing the subscription definition
   * @param oSubscription
   * @return
   * an HRESULT value.
   * <br> <b>Legal values</b>:
   *  <tt>S_OK</tt>:
   *  <tt>S_FALSE</tt>:subscription refused
   *  <tt>E_FAIL</tt>:
   */
  virtual HRESULT Subscribe(const CATUnicodeString& iBuf         ,
			    VPMIReplSubscription *& oSubscription)=0;
  
  /** @nodoc
   * Create a replication subscription.
   * @param iOid
   * <br> <b>Legal values</b>: a 16-bytes identifier. 
   * @param iName
   * this string is not an identifier.<BR>
   * but is required to be unique for all subscription.
   * @param iPackage
   * the package defining the data received
   * @param iSite
   * the site from which the data are coming.
   * @param oSubscription
   * the replication subscription created.
   * @return
   * an HRESULT value.
   * <br> <b>Legal values</b>:
   *  <tt>S_OK</tt>:subscription created
   *  <tt>S_FALSE</tt>:the identifier iOid already exists. 
   *  <tt>E_FAIL</tt>:
   */
  virtual HRESULT CreateReplSubscription(const CATDbBinary&              iOid         ,
					 const CATUnicodeString&         iName        ,
					 const VPMIReplPackageDefinition* iPackage    ,
					 const VPMIExternSite*           iSite        ,
					 VPMIReplSubscription *&         oSubscription)=0;
	
  /**
   * mark all instances aggregated by the VPMIAdmin to be deleted.
   * @return
   * an HRESULT value.
   * <br> <b>Legal values</b>:
   *  <tt>S_OK</tt>:
   *  <tt>S_FALSE</tt>:
   *  <tt>E_FAIL</tt>:
   */
  virtual HRESULT RemoveAllInstances()=0;
  
  /**
   * Get all subscribing targets known by the site.
   * @param oSubscribingTargets
   * the list required
   * @return
   * an HRESULT value.
   * <br> <b>Legal values</b>:
   *  <tt>S_OK</tt>:site found
   *  <tt>S_FALSE</tt>:site not found
   *  <tt>E_FAIL</tt>:
   */ 
  virtual HRESULT GetAllReplSubscribingTarget (CATLISTP(IUnknown)& oSubscribingTargets) const = 0;
  
  /**
   * Get the list of all Subscription objects.
   */ 
  virtual HRESULT GetAllReplSubscription (CATLISTP(IUnknown)& oSubscription) const = 0;
  
  /** @nodoc
   * Get the business domain identified by iOid.
   * @param iOid
   * <br> <b>Legal values</b>: a 16-bytes identifier. 
   * @param oBusinessDomain [out, VPMIBusinessDomain#Release]
   * the business domain required
   * @return
   * an HRESULT value.
   * <br> <b>Legal values</b>:
   *  <tt>S_OK</tt>: business domain found
   *  <tt>S_FALSE</tt>:business domain not found
   *  <tt>E_FAIL</tt>:system error
   */
  virtual HRESULT GetBusinessDomain ( const CATDbBinary&  iOid,
				    VPMIBusinessDomain*& oBusinessDomain) const = 0;
  
  /** @nodoc
   * Get the dataRDB identified by iOid.
   * @param iOid
   * <br> <b>Legal values</b>: a 16-bytes identifier. 
   * @param oDataRDB [out, VPMIDataDomain#Release]
   * the dataserver required
   * @return
   * an HRESULT value.
   * <br> <b>Legal values</b>:
   *  <tt>S_OK</tt>: domain found
   *  <tt>S_FALSE</tt>:domain not found
   *  <tt>E_FAIL</tt>:system error
   */
  virtual HRESULT GetDataDomain ( const CATDbBinary& iOid,
				VPMIDataDomain*& oDataRDB    ) const = 0;
  
  /** @nodoc
   * Get the dataserver identified by iOid.
   * @param iOid
   * <br> <b>Legal values</b>: a 16-bytes identifier. 
   * @param oDataServer [out, VPMIDataServer#Release]
   * the dataserver required
   * @return
   * an HRESULT value.
   * <br> <b>Legal values</b>:
   *  <tt>S_OK</tt>: domain found
   *  <tt>S_FALSE</tt>:domain not found
   *  <tt>E_FAIL</tt>:system error
   */
  virtual HRESULT GetDataServer (const CATDbBinary& iOid,
				VPMIDataServer*& oDataServer    ) const = 0;

  /** @nodoc
   * Get the domain identified by iOid.
   * @param iOid
   * <br> <b>Legal values</b>: a 16-bytes identifier. 
   * @param oDomain [out, VPMIDomain#Release]
   * the domain required
   * @return
   * an HRESULT value.
   * <br> <b>Legal values</b>:
   *  <tt>S_OK</tt>: domain found
   *  <tt>S_FALSE</tt>:domain not found
   *  <tt>E_FAIL</tt>:system error
   */
  virtual HRESULT GetDomain (const CATDbBinary& iOid,
			    VPMIDomain*& oDomain    ) const = 0;
  
  /** @nodoc
   * Get the site identified by iOid.
   * @param iOid
   * <br> <b>Legal values</b>: a 16-bytes identifier. 
   * @param oDomain [out, VPMIExternSite#Release]
   * the domain required
   * @return
   * an HRESULT value.
   * <br> <b>Legal values</b>:
   *  <tt>S_OK</tt>: site found
   *  <tt>S_FALSE</tt>:site not found
   *  <tt>E_FAIL</tt>:system error
   */
  virtual HRESULT GetExternSite (const CATDbBinary& iOid,
				VPMIExternSite*& oDomain    ) const = 0;
  
  /** @nodoc
   * Get the host identified by iOid.
   * @param iOid
   * <br> <b>Legal values</b>: a 16-bytes identifier. 
   * @param oHost [out, VPMIHost#Release]
   * the host required
   * @return
   * an HRESULT value.
   * <br> <b>Legal values</b>:
   *  <tt>S_OK</tt>: domain found
   *  <tt>S_FALSE</tt>:domain not found
   *  <tt>E_FAIL</tt>:system error
   */
  virtual HRESULT GetHost (const CATDbBinary& iOid,
			  VPMIHost*& oHost    ) const = 0;
 
  /** @nodoc
   * Get the local site definition.
   * @param oSite [out, VPMILocalSite#Release]
   * the looked for site.
   * @return
   * an HRESULT value.
   * <br> <b>Legal values</b>:
   *  <tt>S_OK</tt>:site found
   *  <tt>S_FALSE</tt>:site not found
   *  <tt>E_FAIL</tt>:
   */ 
  virtual HRESULT GetLocalSite (VPMILocalSite *&  oSite) const = 0;
  
  /**
   * Get the project identified by iOid.
   * @param iOid
   * <br> <b>Legal values</b>: a 16-bytes identifier. 
   * @param oProject [out, VPMIProject#Release]
   * the project required
   * @return
   * an HRESULT value.
   * <br> <b>Legal values</b>:
   *  <tt>S_OK</tt>: project not found
   *  <tt>S_FALSE</tt>:project not found
   *  <tt>E_FAIL</tt>:system error
   */
  virtual HRESULT GetProject (const CATDbBinary& iOid,
			     VPMIProject *& oProject) const = 0;
  
  /** @nodoc
   * Get the apply status identified by iOid.
   * @param iOid
   * <br> <b>Legal values</b>: a 16-bytes identifier. 
   * @param oStatus [out, VPMIReplApplyStatus#Release]
   * the status looked for.
   * @return
   * an HRESULT value.
   * <br> <b>Legal values</b>:
   *  <tt>S_OK</tt>:status found
   *  <tt>S_FALSE</tt>:status not found
   *  <tt>E_FAIL</tt>:
   */ 
  virtual HRESULT GetReplApplyStatus (const CATDbBinary& iOid,
				      VPMIReplApplyStatus *& oStatus) const = 0; 
  
  /** @nodoc
   * Get the capture status identified by iOid.
   * @param iOid
   * <br> <b>Legal values</b>: a 16-bytes identifier. 
   * @param oStatus [out, VPMIReplCaptureStatus#Release]
   * the status looked for.
   * @return
   * an HRESULT value.
   * <br> <b>Legal values</b>:
   *  <tt>S_OK</tt>:status found
   *  <tt>S_FALSE</tt>:status not found
   *  <tt>E_FAIL</tt>:
   */ 
  virtual HRESULT GetReplCaptureStatus (const CATDbBinary& iOid,
					VPMIReplCaptureStatus *& oStatus) const = 0; 
  
  /** @nodoc
   * Get the media identified by iOid.
   * @param iOid
   * <br> <b>Legal values</b>: a 16-bytes identifier. 
   * @param oMedia [out, VPMIReplMedia#Release]
   * the media looked for.
   * @return
   * an HRESULT value.
   * <br> <b>Legal values</b>:
   *  <tt>S_OK</tt>:media found
   *  <tt>S_FALSE</tt>:media not found
   *  <tt>E_FAIL</tt>:
   */ 
  virtual HRESULT GetReplMedia (const CATDbBinary& iOid,
				VPMIReplMedia *& oMedia) const = 0;
  
  /** @nodoc
   * Get the package definition identified by iOid.
   * @param iOid
   * <br> <b>Legal values</b>: a 16-bytes identifier. 
   * @param oPackage [out, VPMIReplPackageDefinition#Release]
   * the package looked for.
   * @return
   * an HRESULT value.
   * <br> <b>Legal values</b>:
   *  <tt>S_OK</tt>:package found
   *  <tt>S_FALSE</tt>:package not found
   *  <tt>E_FAIL</tt>:
   */ 
  virtual HRESULT GetReplPackageDefinition (const CATDbBinary& iOid       ,
					   VPMIReplPackageDefinition *& oPackage) const = 0;
  
  /** @nodoc
   * Get the subscribing target named iName.
   * @param iOid
   * <br> <b>Legal values</b>: a 16-bytes identifier. 
   * @param oTarget [out, VPMIReplSubscribingTarget#Release]
   * the site looked for.
   * @return
   * an HRESULT value.
   * <br> <b>Legal values</b>:
   *  <tt>S_OK</tt>:site found
   *  <tt>S_FALSE</tt>:site not found
   *  <tt>E_FAIL</tt>:
   */ 
  virtual HRESULT GetReplSubscribingTarget (const CATDbBinary& iOid       ,
					   VPMIReplSubscribingTarget *& oTarget) const = 0;
  
   /** @nodoc
   * Get the subscription from its iOid.
   * @param iOid
   * <br> <b>Legal values</b>: a 16-bytes identifier. 
   * @param oSubscription   [out, VPMIReplSubscription#Release]
   * the Subscription looked for.
   * @return
   * an HRESULT value.
   * <br> <b>Legal values</b>:
   *  <tt>S_OK</tt>:site found
   *  <tt>S_FALSE</tt>:site not found
   *  <tt>E_FAIL</tt>:
   */ 
  virtual HRESULT GetReplSubscription(const CATDbBinary& iOid       ,
				      VPMIReplSubscription *& oSubscription) const = 0;

  /** @nodoc
   * Get the server identified by iOid.
   * @param iOid
   * <br> <b>Legal values</b>: a 16-bytes identifier. 
   * @param oServer [out, VPMIServer#Release]
   * the server required
   * @return
   * an HRESULT value.
   * <br> <b>Legal values</b>:
   *  <tt>S_OK</tt>: server not found
   *  <tt>S_FALSE</tt>: server not found
   *  <tt>E_FAIL</tt>:system error
   */
  virtual HRESULT GetServer(const CATDbBinary& iOid,
			     VPMIServer * oServer) const = 0;
  
  /** @nodoc
   * Create the business domain identified by iOid.
   * @param iOid
   * <br> <b>Legal values</b>: a 16-bytes identifier. 
   * @param oBusinessDomain [out, VPMIBusinessDomain#Release]
   * the business domain to create
   * @return
   * an HRESULT value.
   * <br> <b>Legal values</b>:
   *  <tt>S_OK</tt>: business domain created
   *  <tt>S_FALSE</tt>:business domain not created
   *  <tt>E_FAIL</tt>:system error
   */
  virtual HRESULT CreateBusinessDomain(const CATDbBinary&  iOid,
				    VPMIBusinessDomain*& oBusinessDomain)=0;
  
  /** @nodoc
   * Create the dataRDB identified by iOid.
   * @param iOid
   * <br> <b>Legal values</b>: a 16-bytes identifier. 
   * @param oRDB [out, VPMIDataRDB#Release]
   * the dataserver to create
   * @return
   * an HRESULT value.
   * <br> <b>Legal values</b>:
   *  <tt>S_OK</tt>: domain created
   *  <tt>S_FALSE</tt>:domain not created
   *  <tt>E_FAIL</tt>:system error
   */
  virtual HRESULT CreateDataRDB(const CATDbBinary& iOid,
				VPMIDataRDB*& oRDB     )=0;
  
  /** @nodoc
   * Create the dataserver identified by iOid.
   * @param iOid
   * <br> <b>Legal values</b>: a 16-bytes identifier. 
   * @param oDataServer [out, VPMIDataServer#Release]
   * the dataserver to create
   * @return
   * an HRESULT value.
   * <br> <b>Legal values</b>:
   *  <tt>S_OK</tt>: domain created
   *  <tt>S_FALSE</tt>:domain not created
   *  <tt>E_FAIL</tt>:system error
   */
  virtual HRESULT CreateDataServer(const CATDbBinary& iOid,
				   VPMIDataServer*& oDataServer    )=0;

  /** @nodoc
   * Create the domain identified by iOid.
   * @param iOid
   * <br> <b>Legal values</b>: a 16-bytes identifier. 
   * @param oDomain [out, VPMIDomain#Release]
   * the domain to create
   * @return
   * an HRESULT value.
   * <br> <b>Legal values</b>:
   *  <tt>S_OK</tt>: domain created
   *  <tt>S_FALSE</tt>:domain not created
   *  <tt>E_FAIL</tt>:system error
   */
  virtual HRESULT CreateDomain(const CATDbBinary& iOid,
			       VPMIDomain*& oDomain    )=0;
  
  /** @nodoc
   * Create the site identified by iOid.
   * @param iOid
   * <br> <b>Legal values</b>: a 16-bytes identifier. 
   * @param oDomain [out, VPMIExternSite#Release]
   * the domain to create
   * @return
   * an HRESULT value.
   * <br> <b>Legal values</b>:
   *  <tt>S_OK</tt>: site created
   *  <tt>S_FALSE</tt>:site not created
   *  <tt>E_FAIL</tt>:system error
   */
  virtual HRESULT CreateExternSite(const CATDbBinary& iOid,
				   VPMIExternSite*& oDomain    )=0;
 
  /** @nodoc
   * Create the host identified by iOid.
   * @param iOid
   * <br> <b>Legal values</b>: a 16-bytes identifier. 
   * @param oHost [out, VPMIHost#Release]
   * the host to create
   * @return
   * an HRESULT value.
   * <br> <b>Legal values</b>:
   *  <tt>S_OK</tt>: domain created
   *  <tt>S_FALSE</tt>:domain not created
   *  <tt>E_FAIL</tt>:system error
   */
  virtual HRESULT CreateHost(const CATDbBinary& iOid,
			     VPMIHost*& oHost          )=0;
 
  /** @nodoc
   * Create the local installation definition.
   * @param iBin 
   * the identifier of the localSite.
   * but is required to be unique for all site definition.
   * @param oSite [out, VPMILocalSite#Release]
   * a new site
   * @return
   * an HRESULT value.
   * <br> <b>Legal values</b>:
   *  <tt>S_OK</tt>:site created
   *  <tt>S_FALSE</tt>:the site already exists
   *  <tt>E_FAIL</tt>:
   */
  virtual HRESULT CreateLocalSite( const CATDbBinary& iBin,
				  VPMILocalSite *&   oSite )=0;
  
  /**
   * Create the project identified by iOid.
   * @param iOid
   * <br> <b>Legal values</b>: a 16-bytes identifier. 
   * @param oProject  [out, VPMIProject#Release]
   * the project to create
   * @return
   * an HRESULT value.
   * <br> <b>Legal values</b>:
   *  <tt>S_OK</tt>: project not created
   *  <tt>S_FALSE</tt>:project not created
   *  <tt>E_FAIL</tt>:system error
   */
  virtual HRESULT CreateProject(const CATDbBinary& iOid,
				VPMIProject *& oProject)=0;
  
  /** @nodoc
   * Create applystatus identified by iOid.
   * @param iOid
   * <br> <b>Legal values</b>: a 16-bytes identifier. 
   * @param oStatus [out, VPMIReplApplyStatus#Release]
   * the project to create
   * @return
   * an HRESULT value.
   * <br> <b>Legal values</b>:
   *  <tt>S_OK</tt>: project not created
   *  <tt>S_FALSE</tt>:project not created
   *  <tt>E_FAIL</tt>:system error
   */
  virtual HRESULT CreateReplApplyStatus(const CATDbBinary& iOid,
					VPMIReplApplyStatus *& oStatus)=0;
  
  /** @nodoc
   * Create capturestatus identified by iOid.
   * @param iOid
   * <br> <b>Legal values</b>: a 16-bytes identifier. 
   * @param oStatus [out, VPMIReplCaptureStatus#Release]
   * the project to create
   * @return
   * an HRESULT value.
   * <br> <b>Legal values</b>:
   *  <tt>S_OK</tt>: status not created
   *  <tt>S_FALSE</tt>:status not created
   *  <tt>E_FAIL</tt>:system error
   */
  virtual HRESULT CreateReplCaptureStatus(const CATDbBinary& iOid,
					  VPMIReplCaptureStatus *& oStatus)=0;
   
  /** @nodoc
   * Create a new definition to store the media for replication.
   * @param iOid
   * <br> <b>Legal values</b>: a 16-bytes identifier. 
   * @param oMedia [out, VPMIReplMedia#Release]
   * the media object created.
   * @return
   * an HRESULT value.
   * <br> <b>Legal values</b>:
   *  <tt>S_OK</tt>:media created
   *  <tt>S_FALSE</tt>:the identifier iOid already exists. 
   *  <tt>E_FAIL</tt>:
   */
  virtual HRESULT CreateReplMedia(const CATDbBinary& iOid,
				  VPMIReplMedia *& oMedia) =0;
  
  /** @nodoc
   * Create the replication package identified by iOid.
   * @param iOid
   * <br> <b>Legal values</b>: a 16-bytes identifier. 
   * @param oReplPackage  [out, VPMIReplPackageDefinition#Release]
   * the replication package to create
   * @return
   * an HRESULT value.
   * <br> <b>Legal values</b>:
   *  <tt>S_OK</tt>: 
   *  <tt>S_FALSE</tt>: 
   *  <tt>E_FAIL</tt>:system error
   */
  virtual HRESULT CreateReplPackageDefinition(const CATDbBinary& iOid,
					      VPMIReplPackageDefinition *& oReplPackage)=0;
  
  /** @nodoc
   * Create the replication target identified by iOid.
   * @param iOid
   * <br> <b>Legal values</b>: a 16-bytes identifier. 
   * @param oReplTarget [out, VPMIReplSubscribingTarget#Release]
   * the replication target to create
   * @return
   * an HRESULT value.
   * <br> <b>Legal values</b>:
   *  <tt>S_OK</tt>: 
   *  <tt>S_FALSE</tt>: 
   *  <tt>E_FAIL</tt>:system error
   */
  virtual HRESULT CreateReplSubscribingTarget(const CATDbBinary& iOid,
					      VPMIReplSubscribingTarget *& oReplTarget)=0;
  
  /** @nodoc
   * Create the replication Subscription identified by iOid.
   * @param iOid
   * <br> <b>Legal values</b>: a 16-bytes identifier. 
   * @param oReplSubscription  [out, VPMIReplSubscription#Release]
   * the replication Subscription to create
   * @return
   * an HRESULT value.
   * <br> <b>Legal values</b>:
   *  <tt>S_OK</tt>: 
   *  <tt>S_FALSE</tt>: 
   *  <tt>E_FAIL</tt>:system error
   */
  virtual HRESULT CreateReplSubscription(const CATDbBinary& iOid,
					 VPMIReplSubscription *& oReplSubscription)=0;
  
  /** @nodoc
   * Create the server identified by iOid.
   * @param iOid
   * <br> <b>Legal values</b>: a 16-bytes identifier. 
   * @param oServer
   * the server to create
   * @return
   * an HRESULT value.
   * <br> <b>Legal values</b>:
   *  <tt>S_OK</tt>: server not created
   *  <tt>S_FALSE</tt>: server not created
   *  <tt>E_FAIL</tt>:system error
   */
  virtual HRESULT CreateServer(const CATDbBinary& iOid,
			     VPMIServer *& oServer)=0;

  /** @nodoc
   * Aggregate a businessdomain.
   * @param iBusinessDomain
   * the BusinessDomain to aggregate
   * @return
   * an HRESULT value.
   * <br> <b>Legal values</b>:
   *  <tt>S_OK</tt>: 
   *  <tt>S_FALSE</tt>: 
   *  <tt>E_FAIL</tt>:
   */
  virtual HRESULT AddBusinessDomain(const VPMIBusinessDomain* pBusinessDomain)=0;

  /** @nodoc
   * Aggregate a datadomain.
   * @param iDataDomain
   * the DataDomain to aggregate
   * @return
   * an HRESULT value.
   * <br> <b>Legal values</b>:
   *  <tt>S_OK</tt>: 
   *  <tt>S_FALSE</tt>: 
   *  <tt>E_FAIL</tt>:
   */
  virtual HRESULT AddDataDomain(const VPMIDataDomain* iDataDomain)=0;
  
  /** @nodoc
   * Aggregate a domain.
   * @param iBusinessDomain
   * the BusinessDomain to aggregate
   * @return
   * an HRESULT value.
   * <br> <b>Legal values</b>:
   *  <tt>S_OK</tt>: 
   *  <tt>S_FALSE</tt>: 
   *  <tt>E_FAIL</tt>:
   */
  virtual HRESULT AddDomain(const VPMIDomain* pDomain)=0;

  /** @nodoc
   * Aggregate an externsite.
   * @param iExternSite
   * the Site to aggregate
   * @return
   * an HRESULT value.
   * <br> <b>Legal values</b>:
   *  <tt>S_OK</tt>: 
   *  <tt>S_FALSE</tt>: 
   *  <tt>E_FAIL</tt>:
   */
  virtual HRESULT AddExternSite(const VPMIExternSite* iExternSite)=0;
 
 /**
   * Get the list of all external site objects.
   */ 
  virtual HRESULT GetAllExternSite(CATLISTP(IUnknown)& lExternSite)const=0;

  /** @nodoc
   * Aggregate a host.
   * @param iBusinessDomain
   * the BusinessDomain to aggregate
   * @return
   * an HRESULT value.
   * <br> <b>Legal values</b>:
   *  <tt>S_OK</tt>: 
   *  <tt>S_FALSE</tt>: 
   *  <tt>E_FAIL</tt>:
   */
  virtual HRESULT AddHost(const VPMIHost* pHost)=0;

  /**
   * Aggregate a project.
   * @param iProject
   * the Project to aggregate
   * @return
   * an HRESULT value.
   * <br> <b>Legal values</b>:
   *  <tt>S_OK</tt>: 
   *  <tt>S_FALSE</tt>: 
   *  <tt>E_FAIL</tt>:
   */
  virtual HRESULT AddProject(const VPMIProject* iProject)=0;
  
  /** @nodoc
   * Aggregate a replication package definition.
   * @param iPackage
   * the replication package to aggregate
   * @return
   * an HRESULT value.
   * <br> <b>Legal values</b>:
   *  <tt>S_OK</tt>: 
   *  <tt>S_FALSE</tt>: 
   *  <tt>E_FAIL</tt>:
   */
  virtual HRESULT AddReplPackageDefinition(const VPMIReplPackageDefinition * iPackageDefinition)=0; 

  /**
   * Get the list of all package definition objects.
   */ 
  virtual HRESULT GetAllReplPackageDefinition(CATLISTP(IUnknown)& olReplPackageDefinition) const =0;

  /** @nodoc
   * Aggregate a replication target.
   * @param iTarget
   * the replication target to aggregate
   * @return
   * an HRESULT value.
   * <br> <b>Legal values</b>:
   *  <tt>S_OK</tt>: 
   *  <tt>S_FALSE</tt>: 
   *  <tt>E_FAIL</tt>:
   */
  virtual HRESULT AddReplSubscribingTarget(const VPMIReplSubscribingTarget* iTarget)=0; 
   
  /** @nodoc
   * Aggregate a Subscription.
   * @param iSubscription
   * the replication Subscription to aggregate
   * @return
   * an HRESULT value.
   * <br> <b>Legal values</b>:
   *  <tt>S_OK</tt>: 
   *  <tt>S_FALSE</tt>: 
   *  <tt>E_FAIL</tt>:
   */
  virtual HRESULT AddReplSubscription(const VPMIReplSubscription* iSubscription)=0; 
  
  /** @nodoc
   * Aggregate a server.
   * @param iServer
   * the server to aggregate
   * @return
   * an HRESULT value.
   * <br> <b>Legal values</b>:
   *  <tt>S_OK</tt>: 
   *  <tt>S_FALSE</tt>: 
   *  <tt>E_FAIL</tt>:
   */
  virtual HRESULT AddServer(const VPMIServer* iServer)=0; 
 
  /** @nodoc
   * set the local site of the current installation.
   * @param iSite
   * the local site.
   * @return
   * an HRESULT value.
   * <br> <b>Legal values</b>:
   *  <tt>S_OK</tt>: 
   *  <tt>S_FALSE</tt>: 
   *  <tt>E_FAIL</tt>:
   */
  virtual HRESULT SetLocalSite (const VPMILocalSite* iSite)=0; 
  
  /**
   * Enum of admin types.
   */
  enum ADMINTYPE
    {
      ADMINAPPLYSTATUS    ,
      ADMINAPPSERVER      ,
      ADMINCAPTURESTATUS  ,
      ADMINBUSINESSDOMAIN ,
      ADMINDATAFILE       ,
      ADMINDATARDB        ,
      ADMINDATASERVER     ,
      ADMINDOMAIN         ,
      ADMINEXTERNSITE     ,
      ADMINHOST           ,
      ADMINLOCALSITE      ,
      ADMINMEDIA          ,
      ADMINPACKAGEDEFINITION ,
      ADMINPROJECT           ,
      ADMINSERVER            ,
      ADMINSUBSCRIBINGTARGET ,
      ADMINSUBSCRIPTION      ,
      ADMINVAULTSERVER     
    };
  
  /**
   * Method for parsing purpose: create object.
   */
  virtual HRESULT CreateObject(const CATDbBinary& iOid   ,
			       const VPMIAdmin::ADMINTYPE    iType  ,    
			       IUnknown *&        oObject)=0;
  /**
   * Method for parsing purpose: get object.
   */
  virtual HRESULT GetObject   (const CATDbBinary& iOid   ,
			       const VPMIAdmin::ADMINTYPE    iType  ,
			       IUnknown *&        oObject)=0;

  //-- end Add V5R8

  /**
   * Get the list of all business domains objects related to a given schema.
   */
  virtual HRESULT GetListOfRelatedBusinessDomains(const CATUnicodeString& iSchemaName,
						  CATLISTP(IUnknown) *   oList) const = 0; 
  /** @nodoc
   * Get the master business domain object for a given schema.
   */
  virtual HRESULT GetMasterBusinessDomain(const CATUnicodeString& iSchemaName  ,
					  VPMIBusinessDomain ** oBusinessDomain ) const = 0;

};

CATDeclareHandler(VPMIAdmin, CATBaseUnknown); 


/**
*
* <br><b>Role</b>: 
* @param oiVPMAdmin [out, VPMIAdmin#Release]
* 
* @return
* <dl>
* <dt><code>S_OK</code> <dd>
* <dt><code>E_FAIL</code> <dd>
* </dl>
*/
ExportedByGUIDVPMInterfaces HRESULT GetVPMIAdmin(VPMIAdmin *& oiVPMAdmin   );

#endif 
