#ifndef CATIPspObject_H
#define CATIPspObject_H

//	COPYRIGHT DASSAULT SYSTEMES 2000
/**
  * @CAA2Level L1
  * @CAA2Usage U3
  */

// System
#include "IUnknown.h"
#include "CATString.h"

class CATICStringList;

extern "C" const IID IID_CATIPspObject ;

/**
 * Interface to access Plant Ship object information. 
 * <b>Role</b>: To access Plant Ship object information. 
 */

class CATIPspObject : public IUnknown
{
  public:  
  
  /**
  * Gets the associated application name.
  * @param ioApplName
  *   The application name.
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
  virtual HRESULT GetApplicationName (CATString &ioApplName)=0;
  
  /**
  * Gets the associated domain name.
  * @param oDomainName
  *   The domain name.
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
  virtual HRESULT GetDomainName (CATString &ioApplName)=0;
  
  /**
  * @nodoc
  * Gets the specification attribute name.
  * @param oSpecAttrName
  *   The specification attribute name.
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
  virtual HRESULT GetSpecAttrName (CATString & oSpecAttrName)=0;

  /**
  * @nodoc
  * Gets the size attribute names.
  * @param oListOfSizeAttrNames [out, IUnknown#Release]
  *   List of size attribute names.
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
  virtual HRESULT ListSizeAttributes (CATICStringList *&oListOfSizeAttrNames)=0;  

};
#endif
