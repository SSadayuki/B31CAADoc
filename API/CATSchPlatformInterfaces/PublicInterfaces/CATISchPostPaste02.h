#ifndef CATISchPostPaste02_H
#define CATISchPostPaste02_H

//	COPYRIGHT DASSAULT SYSTEMES 2000

/**
 * @CAA2Level L1
 * @CAA2Usage U3
 */

// System
#include "IUnknown.h"
#include "CATBoolean.h"

extern "C" const IID IID_CATISchPostPaste02 ;

class CATIUnknownList;

/**
 * Interface to manage Schematic platform copy-paste behavior after paste. 
 * <b>Role</b>: To get and set information for paste-processing
 */
class CATISchPostPaste02 : public IUnknown
{
  public:   
  
  /**
  * Handle associated annotations after paste.
  * @param iListSourceObject 
  *   A list of interface pointers to source objects. 
  * @param iListCopiedObject
  *   A list of interface pointers to copied objects.
  */
  virtual HRESULT PostPasteText (
    const CATIUnknownList *iListSourceObject,
    const CATIUnknownList *iListCopiedObject) = 0;

};
#endif
