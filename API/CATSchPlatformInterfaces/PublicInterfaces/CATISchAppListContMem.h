#ifndef CATISchAppListContMem_H
#define CATISchAppListContMem_H

//	COPYRIGHT DASSAULT SYSTEMES 2002

/**
 * @CAA2Level L1
 * @CAA2Usage U4 CATEASchListContMem
 */

// System
#include "IUnknown.h"
class CATIContainer;
class CATIUnknownList;

extern "C" const IID IID_CATISchAppListContMem;

/**
 * Interface to list members in a container in specific application way. 
 * Application must derive implementation of this interface 
 * from CATEASchListContMem.
 * <b>Role</b>: List container members.
 * <p><b>BOA information</b>: this interface CANNOT be implemented
 * using the BOA (Basic Object Adapter).
 * To know more about the BOA, refer to the CAA Encyclopedia home page.
 * Click Middleware at the bottom left, then click the Object Modeler tab page.
 * Several articles deal with the BOA.</p>
 */
class CATISchAppListContMem : public IUnknown
{
  public:
  /**
  * List members in a specific container.
  * @param iIID
  *   Interface identifier.
  * @param oLMembers  [out, IUnknown#Release]
  *   A list of interface pointers to list members.
  */
  virtual HRESULT ListContainerMembers (const IID &iIID, 
    const CATIContainer *iCont, CATIUnknownList **oLMembers)=0;
};
#endif
