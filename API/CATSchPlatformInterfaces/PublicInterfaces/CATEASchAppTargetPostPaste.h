#ifndef CATEASchAppTargetPostPaste_H
#define CATEASchAppTargetPostPaste_H

//	COPYRIGHT DASSAULT SYSTEMES 2002

/**
 * @CAA2Level L1
 * @CAA2Usage U2
 */

// System
#include "CATBaseUnknown.h"
#include "CATSchItfCPP.h"
#include "CATBoolean.h"

/**
 * Super class to derive implementation for interface CATISchAppTargetPostPaste.
 * <b>Role</b>: Adaptor
 */

class CATIUnknownList;
class CATICStringList;

class ExportedByCATSchItfCPP CATEASchAppTargetPostPaste : public CATBaseUnknown
{
  public: 
      
  CATDeclareClass;

  /**
   * Constructs an empty CATEASchAppTargetPostPaste.
   */
  CATEASchAppTargetPostPaste();
  virtual ~CATEASchAppTargetPostPaste();  

  /**
  * Copy input groups (if needed, use existing and matching ones if found)
  * and add this copied object (target object) to the copied groups.
  * @param iListGroup 
  *   A list of interface pointers to groups to copy.
  */
  virtual HRESULT AppCopyGroupAndAddMembers (
    const CATIUnknownList *iLGroupToCopy);

  /**
  * Copy input groups (if needed, use existing and matching ones if found)
  * and add this copied object (target object) to the copied groups.
  * @param iLGroupNameToCopy 
  *   A list of names of groups to copy.
  * @param iLGroupType
  *   A list of types of groups to copy.
  */
  virtual HRESULT AppCopyGroupByNameAndAddMembers (
    const CATICStringList *iLGroupNameToCopy,
    const CATICStringList *iLGroupType);

  private:
  // do not implement
  CATEASchAppTargetPostPaste (CATEASchAppTargetPostPaste&);
  CATEASchAppTargetPostPaste& operator=(CATEASchAppTargetPostPaste&);
};

#endif
