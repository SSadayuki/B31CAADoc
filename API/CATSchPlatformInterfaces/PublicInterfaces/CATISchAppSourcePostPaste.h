#ifndef CATISchAppSourcePostPaste_H
#define CATISchAppSourcePostPaste_H

//	COPYRIGHT DASSAULT SYSTEMES 2003

/**
 * @CAA2Level L1
 * @CAA2Usage U4 CATEASchAppSourcePostPaste
 */

// System
#include "IUnknown.h"

class CATIUnknownList;


extern "C" const IID IID_CATISchAppSourcePostPaste ;

/**
 * Interface to manage specific application object behaviors after copy-paste.
 * Applications must derive implementation of this interface 
 * from the adapter class CATEASchAppSourcePostPaste.
 * <b>Role</b>: Get source information from the source object.
 * <p><b>BOA information</b>: this interface CANNOT be implemented
 * using the BOA (Basic Object Adapter).
 * To know more about the BOA, refer to the CAA Encyclopedia home page.
 * Click Middleware at the bottom left, then click the Object Modeler tab page.
 * Several articles deal with the BOA.</p>
 */

class CATISchAppSourcePostPaste : public IUnknown
{
  public:  

  /**
  * Specifies a list of group that 
  * this source object (of the copy-paste operation) is a member of.
  * @param oListGroup [out, IUnknown#Release]
  *   A list of interface pointers to groups.
  */
  virtual HRESULT AppListSourceObjectGroups (CATIUnknownList **oListGroup) = 0;

};
#endif
