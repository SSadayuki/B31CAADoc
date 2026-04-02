#ifndef CATEASchAppListContMem_H
#define CATEASchAppListContMem_H

//	COPYRIGHT DASSAULT SYSTEMES 2003

/**
 * @CAA2Level L1
 * @CAA2Usage U2
 */

// System
#include "CATBaseUnknown.h"
#include "CATSchItfCPP.h"

/**
 * Super class to derive implementation for interface CATISchAppListContMem.
 * <b>Role</b>: Adaptor
 */

class CATIUnknownList;
class CATIContainer;

class ExportedByCATSchItfCPP CATEASchAppListContMem : public CATBaseUnknown
{
  public: 

  /**
   * Constructs an empty CATEASchAppListContMem.
   */
  CATEASchAppListContMem();
  virtual ~CATEASchAppListContMem();  

  /**
  * List members in a specific container.
  * @param iIID
  *   Interface identifier.
  * @param oLMembers  [out, IUnknown#Release]
  *   A list of interface pointers to list members.
  */
  virtual HRESULT ListContainerMembers (const IID &iIID, 
    const CATIContainer *iCont, CATIUnknownList **oLMembers);

  private:
  // do not implement
  CATEASchAppListContMem (CATEASchAppListContMem&);
  CATEASchAppListContMem& operator=(CATEASchAppListContMem&);
};

#endif
