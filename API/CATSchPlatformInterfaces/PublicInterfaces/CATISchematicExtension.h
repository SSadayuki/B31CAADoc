#ifndef CATISchematicExtension_H
#define CATISchematicExtension_H

//	COPYRIGHT DASSAULT SYSTEMES 2000

/**
 * @CAA2Level L1
 * @CAA2Usage U3
 */

// System
#include "IUnknown.h"

#include "CATSchGeneralEnum.h"

class CATIUnknownList;

extern "C" const IID IID_CATISchematicExtension ;

/**
 * Interface to add schematic extensions to existing application objects.
 * <b>Role</b>: Used by the application to add schematic behavior
 * to existing application objects.
 */

class CATISchematicExtension : public IUnknown
{
  public: 
  
  /**
  * Adds a Schematic extension to an application object.
  * @param iAppObjToBeExtended
  *   The application object to be extended.
  * @param iExtensionType
  *   The extension type.
  * @param iLGRR
  *   If iLGRR is not NULL, then its members will be linked to the extension as graphics
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
  virtual HRESULT AddExtension (const IUnknown *iAppObjToBeExtended, const CATSchExtensionType iExtensionType, const CATIUnknownList *iLGRR = NULL) = 0;

  /**
  * Removes a Schematic extension to an application object.
  * @param iAppExtendedObj
  *   The application object to be have its extension removed.
  * @param iExtensionType
  *   The extension type.
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
  virtual HRESULT RemoveExtension (const IUnknown *iAppExtendedObj, const CATSchExtensionType iExtensionType) = 0;

};
#endif
