#ifndef CATISchPostReplace_H
#define CATISchPostReplace_H

//	COPYRIGHT DASSAULT SYSTEMES 2003

/**
 * @CAA2Level L1
 * @CAA2Usage U3
 */

// System
#include "IUnknown.h"
#include "CATBoolean.h"

extern "C" const IID IID_CATISchPostReplace ;

/**
 * Interface to manage Schematic platform replace behavior after replace component.
 * <b>Role</b>: To update the misc. data after the component is replaced.
 */
class CATISchPostReplace : public IUnknown
{
  public:   
  
  /**
  * Handle associated annotations after replace.
  * @param iNewSchObject
  *   Pointer to the object that is replacing 'this' object.
  */
  virtual HRESULT PostReplaceText (const IUnknown *iNewSchObject) = 0;

};
#endif
