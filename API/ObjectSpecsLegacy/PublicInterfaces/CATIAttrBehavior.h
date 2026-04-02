
#ifndef __CATIAttrBehavior_h__
#define __CATIAttrBehavior_h__


/**
 * @CAA2Level L1
 * @CAA2Usage U5
 */
// COPYRIGHT DASSAULT SYSTEMES 1999


#include "AC0SPBAS.h"
#include "CATBehaviorSpecs.h"

class CATUnicodeString;
#include "CATBaseUnknown.h"

extern ExportedByAC0SPBAS IID IID_CATIAttrBehavior ;

/**
 * @deprecated V5R21 CATSpecReplaceExt
 * Interface to describe expected behavior on object valuating an attribute.
 * @see CATIReplace
 */
class ExportedByAC0SPBAS CATIAttrBehavior : public CATBaseUnknown
{
  CATDeclareInterface;

public:
	/**
   * @deprecated V5R21 CATSpecReplaceExt#GetRequestedBehavior
	 * Returns for a given attribute the expected behavior of its valuating objects.
	 * @param iAttrName
	 *        name of the concerned attribute.
	 * @param oBehavior
	 *        list of lists of interfaces in the CATBehaviorSpecs format.This parameter
	 *        has to be deleted by the caller.
	 *        <br> this list is a combination of interfaces implemented by the object valuating the attribute.
   */	  
  virtual HRESULT GetRequestedBehavior(const CATUnicodeString * iAttrName, CATBehaviorSpecs ** oBehavior ) = 0;

};

CATDeclareHandler(CATIAttrBehavior, CATBaseUnknown);


#endif // __CATIAttrBehavior_h__
