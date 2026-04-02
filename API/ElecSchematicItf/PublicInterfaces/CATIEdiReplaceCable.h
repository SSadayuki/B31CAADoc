#ifndef CATIEdiReplaceCable_H
#define CATIEdiReplaceCable_H
//	COPYRIGHT DASSAULT SYSTEMES 2002

/**
  * @CAA2Level L1
  * @CAA2Usage U3
  */

#include "IUnknown.h"
#include "CATUnicodeString.h"

class CATIProduct;
class CATIAProduct;

extern "C" const IID IID_CATIEdiReplaceCable;

/**
 * Interface to manage cable.
 * <b>Role</b>:This interfaces to replace cable implemented on the Root product.   
 */
class CATIEdiReplaceCable : public IUnknown
{
  
 public:

  /**
  *  Replace A Cable.
  * @param iProdInst
  *   Pointer to the product instance to be replaced.
  * @param iRefName
  *   Reference name of the product to replace with.
  * @param oNewComponent
  *   Pointer to the new cable instance. Caller must release this output
  *   pointer after use.
  */
   virtual HRESULT ReplaceCable (const CATIProduct* iProdInst,
     const CATUnicodeString &iRefname, CATIAProduct **oNewComponent) = 0;

};
#endif





