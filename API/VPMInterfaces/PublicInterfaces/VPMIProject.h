//
// COPYRIGHT DASSAULT SYSTEMES 1999
//=============================================================================
//
// VPMIProject.h
// 
//
//=============================================================================
//=============================================================================
// July 1999   Creation                                     JDC
// Oct. 1999   Mise a jour                                  JDC
//=============================================================================
#include "GUIDVPMInterfaces.h"

#ifndef VPMIProject_h
#define VPMIProject_h
#include <CATDbBinary.h>
#include <CATLISTPIUnknown.h>
class VPMIDataDomain ;
class VPMIAdmin      ;
class VPMIServer     ;

//===========================//
#ifndef LOCAL_DEFINITION_FOR_IID
extern ExportedByGUIDVPMInterfaces IID IID_VPMIProject;
#else
extern "C" const IID IID_VPMIProject;
#endif

/**
 * @CAA2Level L1 
 * @CAA2Usage U3
 */ 

/**
 * This class supplies methods to manage projects
 * <b>role</b>: This class enables to create/delete/modify administration data
 */
class ExportedByGUIDVPMInterfaces VPMIProject : public CATBaseUnknown
{
  CATDeclareInterface;
  public :

  /**
   * Get the name of the project
   */
  virtual CATUnicodeString GetName() =0;
  
  /**
   * @nodoc
   */
  virtual HRESULT GetListOfDataDomains(CATLISTP(IUnknown) * oListOfDataDomains)=0;

  /**
   * @nodoc
   */
  virtual HRESULT GetDataDomain(const CATUnicodeString & iName      ,
				VPMIDataDomain **         ioDataDomain)=0;
  
  /**
   * @nodoc
   */
  virtual HRESULT AddDataDomain( VPMIDataDomain * iDataDomain)=0;

//===================//
//    Servers        //
//===================//
  
  /**
   * @nodoc
   */
  virtual HRESULT GetListOfAppServers(CATLISTP(IUnknown) * oListOfServers)  =0;
  /**
   * @nodoc
   */
  virtual HRESULT GetAppServer(const CATUnicodeString & iName       ,
			    VPMIServer **             ioServer    )         =0;
  /**
   * @nodoc
   */
  virtual HRESULT AddAppServer( VPMIServer * iServer)=0;
  /**
   * @nodoc
   */
  virtual HRESULT GetListOfVaultServers(CATLISTP(IUnknown) * oListOfServers)=0;
  /**
   * @nodoc
   */
  virtual HRESULT GetVaultServer(const CATUnicodeString & iName       ,
				 VPMIServer **             ioServer    )    =0;
  /**
   * @nodoc
   */
  virtual HRESULT AddVaultServer( VPMIServer * iServer)                     =0;
  /**
   * @nodoc
   */
  virtual HRESULT GetListOfDataServers(CATLISTP(IUnknown) * oListOfServers) =0;
  
  /**
   * @nodoc
   */
  virtual HRESULT GetDataServer(const CATUnicodeString & iName       ,
				VPMIServer **             ioServer    )     =0;
  /**
   * @nodoc
   */
  virtual HRESULT AddDataServer( VPMIServer * iServer)                      =0;
  
  //-- ADD V5R8
  /**
   * Set the name of the project
   * @param iName
   * the name of the project
   * @return
   * an HRESULT value.
   * <br> <b>Legal values</b>:
   *  <tt>S_OK</tt>:
   *  <tt>S_FALSE</tt>:
   *  <tt>E_FAIL</tt>:system error
   */
  virtual HRESULT SetName(const CATUnicodeString& iName)=0;
  
  /**
   * Get the identifier of the businessdomain
   * @param oOid
   * the identifier returned
   * @return
   * an HRESULT value.
   * <br> <b>Legal values</b>:
   *  <tt>S_OK</tt>: 
   *  <tt>S_FALSE</tt>: 
   *  <tt>E_FAIL</tt>:
   */
  virtual HRESULT GetOID(CATDbBinary& oOid) const =0  ;
  //-- FIN ADD V5R8
  
  virtual HRESULT Dump()=0;
};
CATDeclareHandler(VPMIProject, CATBaseUnknown); 

#endif
