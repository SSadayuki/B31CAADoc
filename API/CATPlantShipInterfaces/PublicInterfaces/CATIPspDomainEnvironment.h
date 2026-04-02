#ifndef CATIPspDomainEnvironment_H
#define CATIPspDomainEnvironment_H

//	COPYRIGHT DASSAULT SYSTEMES 2000
/**
  * @CAA2Level L1
  * @CAA2Usage U3
  */

// System
#include "IUnknown.h"
class CATUnicodeString;
class CATIContainer;
class CATString;

extern "C" const IID IID_CATIPspDomainEnvironment;

/**
 * Interface to manage Plant Ship Application Feature Catalogs.
 * <b>Role</b>: This is the controler for Plant Ship Application Catalogs.
 */

class CATIPspDomainEnvironment : public IUnknown
{  
  public:  
  
  /**
  * Get the domain feat file name.
  * @param oFeatFile
  *   Domain feat file name.
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
  virtual HRESULT GetFeatFile( CATUnicodeString& oFeatFile ) = 0;

  /**
  * Get the domain user defined feat file name.
  * @param oUserFeatFile
  *   User feat file name.
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
  virtual HRESULT GetUserFeatFile( CATUnicodeString& oUserFeatFile ) = 0;

  /**
  * @nodoc
  * Get the domain container name.
  * @param oContainerName
  *   Domain container name.
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
  virtual HRESULT GetContainerName( CATUnicodeString& oContainerName ) = 0;

  /**
  * @nodoc
  * Load the associated domain *.feat or *.CATfct files.
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
  * @nodoc
  * Return the standard name 
  * @return oStandard
  *   An HRESULT value.
  *   <br><b>Legal values</b>:
  *   <dl>
  *     <dt>S_OK</dt>
  *     <dd>operation is successful</dd>
  *     <dt>E_FAIL</dt>
  *     <dd>operation failed</dd>
  *   </dl>
  */
  virtual HRESULT GetStandard( CATUnicodeString& oStandard ) = 0;
  
  /**
  * Retrieve the 3D application name associated to this domain.
  * @return oApplName
  *   An HRESULT value.
  *   <br><b>Legal values</b>:
  *   <dl>
  *     <dt>S_OK</dt>
  *     <dd>operation is successful</dd>
  *     <dt>E_FAIL</dt>
  *     <dd>operation failed</dd>
  *   </dl>
  */
  virtual HRESULT Get3DApplication( CATString& oApplName ) = 0;
  
};
#endif
