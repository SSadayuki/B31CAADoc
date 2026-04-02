#ifndef CATIPspBuildPart_H
#define CATIPspBuildPart_H

// COPYRIGHT Dassault Systemes 2004
/**
  * @CAA2Level L1
  * @CAA2Usage U3
  */

#include "IUnknown.h"

class CATIProduct;
class CATIUnknownList;
class CATUnicodeString;
class CATListValCATUnicodeString;

extern "C" const IID IID_CATIPspBuildPart;

/**
 * Interface to create and modify a part.
 * <b>Role</b>: To build and define a part.
 */

class CATIPspBuildPart: public IUnknown
{
  public:
  
  /**
  * Create a new part.
  * @param iPartType
  *   Part class type.
  * @param iPartNumber
  *   Part number.
  * @param oReferencePart [out, IUnknown#Release]
  *   Reference Product pointer in new CATPart document.
  * @param iLightPart
  *   Optional parameter to indicate creation of a light part.
  *   Default is not to create light part.
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
  virtual HRESULT NewPart (const CATUnicodeString &iPartType, 
      const CATUnicodeString &iPartNumber, 
      CATIProduct **oReferencePart, const int iLightPart=0 ) = 0;

  /**
  * Change the part type of an existing part.
  * @param iReferencePart
  *   Reference Product in CATPart document to modify.
  * @param iPartType
  *   New part class type.
  * @param iPartNumber
  *   New part number.
  * @param oNewReferencePart
  *   New reference Product in CATPart document.
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
  virtual HRESULT ChangePartType (const CATIProduct *iReferencePart,
      const CATUnicodeString &iPartType, 
      const CATUnicodeString &iPartNumber,
      CATIProduct **oNewReferencePart) = 0;

  /**
  * Set the part parametric attribute names.
  * @param iReferencePart
  *   Reference Product in CATPart document to modify.
  * @param iListofAttributeNames
  *   List of parametric attribute names.
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
  virtual HRESULT SetPartParametricAttributes (const CATIProduct *iReferencePart,
      const CATListValCATUnicodeString *iListofAttributeNames) = 0;

  /**
  * Retrieve a list of part parametric attribute names.
  * @param iReferencePart
  *   Reference Product in CATPart document to query.
  * @param oListofAttributeNames
  *   List of parametric attribute names.
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
  virtual HRESULT ListPartParametricAttributes (const CATIProduct *iReferencePart,
      CATListValCATUnicodeString *&oListofAttributeNames) = 0;

};

#endif
