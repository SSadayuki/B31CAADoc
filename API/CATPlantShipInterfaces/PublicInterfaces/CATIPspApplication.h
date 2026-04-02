#ifndef CATIPspApplication_H
#define CATIPspApplication_H

//	COPYRIGHT DASSAULT SYSTEMES 2000
/**
  * @CAA2Level L1
  * @CAA2Usage U3
  */


// System
#include "IUnknown.h"
#include "CATBooleanDef.h"
class CATICStringList;
class CATIContainer;
class CATString;

extern "C" const IID IID_CATIPspApplication;

/**
 * Interface to initialize and query an application.
 * <b>Role</b>: To activate and query a Plant Ship application.
 */

class CATIPspApplication : public IUnknown
{
  public:  
  
  /**
  * Retrieve a list of all domain names supported by this application.
  * @param oListOfDomains [out, IUnknown#Release]
  *   A list of domain names.
  * @return
  *   An HRESULT value.
  *   <br><b>Legal values</b>:
  *   <dl>
  *     <dt>S_OK</dt>
  *     <dd>operation is successful</dd>
  *     <dt>E_FAIL</dt>
  *     <dd>operation failed</dd>
  *   </dl>
  */
  virtual HRESULT ListDomains ( CATICStringList ** oListOfDomains ) = 0;
  
  /**
  * Load the associated application domains *.feat and *.CATfct files.
  * @return
  *   An HRESULT value.
  *   <br><b>Legal values</b>:
  *   <dl>
  *     <dt>S_OK</dt>
  *     <dd>operation is successful</dd>
  *     <dt>E_FAIL</dt>
  *     <dd>operation failed</dd>
  *   </dl>
  */
  virtual HRESULT LoadFeatFiles( CATIContainer *iCont) = 0;

  /**
  * Is the application that we are dealing with a 3D Application?.
  * @param obYesOrNo
  *   TRUE  the application is a 3D application.
  *   FALSE the application is not a 3D application.
  * @return
  *   An HRESULT value.
  *   <br><b>Legal values</b>:
  *   <dl>
  *     <dt>S_OK</dt>
  *     <dd>operation is successful</dd>
  *     <dt>E_FAIL</dt>
  *     <dd>operation failed</dd>
  *   </dl>
  */
  virtual HRESULT Is3DApplication (CATBoolean *obYesOrNo) =0;

  /**
  * Initialize the application environment (load feature start up objects,
  * activate the application...)
  * @param iCont
  *   The container of the application objects.
  * @return
  *   An HRESULT value.
  *   <br><b>Legal values</b>:
  *   <dl>
  *     <dt>S_OK</dt>
  *     <dd>operation is successful</dd>
  *     <dt>E_FAIL</dt>
  *     <dd>operation failed</dd>
  *   </dl>
  */
  virtual HRESULT Initialization ( CATIContainer *iCont ) = 0;

  /**
  * Retrieve the application main domain.
  * @param oAppDomainName
  *   Application main domain name.
  * @return
  *   An HRESULT value.
  *   <br><b>Legal values</b>:
  *   <dl>
  *     <dt>S_OK</dt>
  *     <dd>operation is successful</dd>
  *     <dt>E_FAIL</dt>
  *     <dd>operation failed</dd>
  *   </dl>
  */
  virtual HRESULT GetApplicationDomain ( CATString &oAppDomainName ) = 0;
};
#endif
