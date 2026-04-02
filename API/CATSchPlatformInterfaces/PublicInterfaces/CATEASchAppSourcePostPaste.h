#ifndef CATEASchAppSourcePostPaste_H
#define CATEASchAppSourcePostPaste_H

//	COPYRIGHT DASSAULT SYSTEMES 2002

/**
 * @CAA2Level L1
 * @CAA2Usage U2
 */

// System
#include "CATBaseUnknown.h"
#include "CATSchItfCPP.h"

/**
 * Super class to derive implementation for interface CATISchAppSourcePostPaste.
 * <b>Role</b>: Adaptor
 */

class CATIUnknownList;

class ExportedByCATSchItfCPP CATEASchAppSourcePostPaste : public CATBaseUnknown
{
  public: 
      
  CATDeclareClass;


  /**
   * Constructs an empty CATEASchAppSourcePostPaste.
   */
  CATEASchAppSourcePostPaste();
  virtual ~CATEASchAppSourcePostPaste();  

  /**
  * Specifies a list of group that 
  * this source object (of the copy-paste operation) is a member of.
  * @param oListGroup [out, IUnknown#Release]
  *   A list of interface pointers to groups.
  */
  virtual HRESULT AppListSourceObjectGroups (CATIUnknownList **oListGroup);


  private:
  // do not implement
  CATEASchAppSourcePostPaste (CATEASchAppSourcePostPaste&);
  CATEASchAppSourcePostPaste& operator=(CATEASchAppSourcePostPaste&);
};

#endif
