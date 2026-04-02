#ifndef CATIMSHLocalSpecification_h
#define CATIMSHLocalSpecification_h

// COPYRIGHT DASSAULT SYSTEMES 2003

/**
 * @CAA2Level L1 
 * @CAA2Usage U3 
 */

#include "MSHModel.h"
#include "CATBaseUnknown.h"
#include "CATISpecDeclarations.h"

class CATILinkableObject;
class CATIProduct;
class CATUnicodeString;
class CATICkeLaw;

extern ExportedByMSHModel IID IID_CATIMSHLocalSpecification;

/**
 * Interface representing a local specification within a <b>Mesh Part</b>.
 * <b>Role</b>: This interface should be used to create local Specifications of a <b>Mesh Part</b>, 
 */

class ExportedByMSHModel CATIMSHLocalSpecification: public CATBaseUnknown
{
  CATDeclareInterface;

  public:

  /**
   * Valuates a local specification attribute to an integer value.
   * @param iName
   *   Name of the local specification. 
   * @param iValue
   *   Integer value to be used for the attribute. 
	 * @return
	 *   An HRESULT.
	 *   <br><b>Legal values</b>:
	 *   <dl><dt>S_OK</dt><dd>The attribute has been successfully set.
	 *   <dt>E_FAIL</dt><dd>The attribute does not exist for this specification.
	 *   </dl>
   */
  virtual HRESULT SetAttribute ( const CATUnicodeString & iName, int iValue ) = 0;

  /**
   * Retreives the integer value of a local specification.
   * @param iName
   *   Name of the local specification. 
   * @param oValue
   *   Integer value. 
	 * @return
	 *   An HRESULT.
	 *   <br><b>Legal values</b>:
	 *   <dl><dt>S_OK</dt><dd>The attribute has been successfully set.
	 *   <dt>E_FAIL</dt><dd>The attribute does not exist for this specification.
	 *   </dl>
   */
  virtual HRESULT GetAttribute ( const CATUnicodeString & iName, int & oValue ) = 0;

  /**
   * Valuates a local specification attribute to a real double value.
   * @param iName
   *   Name of the local specification. 
   * @param iValue
   *   Real double value to be used for the attribute. 
   *   ( In case of Length, oValue is evaluated in millimeters ).
	 * @return
	 *   An HRESULT.
	 *   <br><b>Legal values</b>:
	 *   <dl><dt>S_OK</dt><dd>The attribute has been successfully set.
	 *   <dt>E_FAIL</dt><dd>The attribute does not exist for this specification.
	 *   </dl>
   */
  virtual HRESULT SetAttribute ( const CATUnicodeString & iName, double iValue ) = 0;

  /**
   * Retreives the real double value of a local specification.
   * @param iName
   *   Name of the local specification. 
   * @param iValue
   *   Real double value. 
   *   ( In case of Length, oValue is evaluated in millimeters ).
	 * @return
	 *   An HRESULT.
	 *   <br><b>Legal values</b>:
	 *   <dl><dt>S_OK</dt><dd>The attribute has been successfully set.
	 *   <dt>E_FAIL</dt><dd>The attribute does not exist for this specification.
	 *   </dl>
   */
  virtual HRESULT GetAttribute ( const CATUnicodeString & iName, double & oValue ) = 0;

  /**
   * Valuates a local specification attribute to a Character value.
   * @param iName
   *   Name of the local specification. 
   * @param iValue
   *   Character value to be used for the attribute. 
	 * @return
	 *   An HRESULT.
	 *   <br><b>Legal values</b>:
	 *   <dl><dt>S_OK</dt><dd>The attribute has been successfully set.
	 *   <dt>E_FAIL</dt><dd>The attribute does not exist for this specification.
	 *   </dl>
   */
  virtual HRESULT SetAttribute ( const CATUnicodeString & iName, const CATUnicodeString  & iValue ) = 0;

  /**
   * Retreives the Character Value of a local specification.
   * @param iName
   *   Name of the local specification. 
   * @param oValue
   *   Character value. 
	 * @return
	 *   An HRESULT.
	 *   <br><b>Legal values</b>:
	 *   <dl><dt>S_OK</dt><dd>The attribute has been successfully set.
	 *   <dt>E_FAIL</dt><dd>The attribute does not exist for this specification.
	 *   </dl>
   */
  virtual HRESULT GetAttribute ( const CATUnicodeString & iName, CATUnicodeString & oValue ) = 0;

  /**
   * Defines the support of the local specification.
   * <br><b>Role</b>: A support is defined by a product instance which is use for positionning the mesh and
   * a geometric support which is handled by its CATILinkableObject interface.
   * @param iName
   *   Name of the support of local specification. 
   * @param iProduct
   *   The product instance which contains the support.
   * @param iSupport
   *   CATILinkableObject interface of the geometric support.
	 * @return
	 *   An HRESULT.
	 *   <br><b>Legal values</b>:
	 *   <dl><dt>S_OK</dt><dd>The support has been successfully created.
	 *   <dt>E_FAIL</dt><dd>The support is not allowed for this local specification.
	 *   </dl>
   */
  virtual HRESULT AddSupport ( const CATUnicodeString & iName, CATIProduct * iProduct, CATILinkableObject * iSupport ) = 0;

  /**
   * Defines the support of the local specification.
   * <br><b>Role</b>: A support is defined by a product instance which is use for positionning the mesh and
   * a geometric support which is handled by its CATILinkableObject interface.
   * @param iName
   *   Name of the support of local specification. 
   * @param iNbSupports
   *   Number of the supports to add in the local specification. 
   * @param iProducts
   *   The product instances which contains the supports.
   * @param iSupports
   *   CATILinkableObject interface of the geometric supports.
	 * @return
	 *   An HRESULT.
	 *   <br><b>Legal values</b>:
	 *   <dl><dt>S_OK</dt><dd>The support has been successfully created.
	 *   <dt>E_FAIL</dt><dd>The support is not allowed for this local specification.
	 *   </dl>
   */
  virtual HRESULT AddSupports ( const CATUnicodeString & iName, int iNbSupports, CATIProduct ** iProducts, CATILinkableObject ** iSupports ) = 0;

  /**
   * Retreives all supports.
   * <br><b>Role</b>: A support is defined by a product instance which is use for positionning the mesh and
   * a geometric support which is handled by its CATILinkableObject interface.
   * @param oNbSupports
       The number of supports
   *   The product instances which contains the supports.
   *   CATILinkableObject interfaces of the geometric support.
   */
  virtual HRESULT GetSupports ( const CATUnicodeString & iName, int & oNbSupports, CATIProduct ** & oProducts, CATILinkableObject ** & oSupports ) = 0;
  
  /**
   * @nodoc
   */
  virtual HRESULT GetSupport  ( const CATUnicodeString & iName, CATBaseUnknown *& oObject ) = 0;
 
  /**
   * @nodoc
   */
  virtual HRESULT GetSupports ( const CATUnicodeString & iName, int & oNbSupports, CATBaseUnknown ** & oObjects ) = 0;
  
  /**
   * @nodoc
   */
  virtual HRESULT RemoveSupport ( const CATUnicodeString & iName, CATIProduct * iProduct, CATILinkableObject * iSupport ) = 0;

  /**
   * @nodoc
   */
  virtual HRESULT GetUpdateStamps ( unsigned int &oTopoStamp, unsigned int &oMeshStamp ) = 0;
  
  /**
   * @nodoc
   */  
  virtual HRESULT AddSupport ( const CATUnicodeString & iName,  int iNbObjects, CATBaseUnknown ** iObjects, int AdditiveMode = 1 ) = 0;

  /**
   * @nodoc
   */
  virtual HRESULT GetAttribute ( CATICkeLaw * &Law ) = 0;
  
  /**
   * @nodoc
   */  
  virtual HRESULT GetId ( int & oId ) = 0;
};

CATDeclareHandler ( CATIMSHLocalSpecification , CATBaseUnknown );

#endif
