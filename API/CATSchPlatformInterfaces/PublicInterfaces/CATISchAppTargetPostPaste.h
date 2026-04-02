#ifndef CATISchAppTargetPostPaste_H
#define CATISchAppTargetPostPaste_H

//	COPYRIGHT DASSAULT SYSTEMES 2003

/**
 * @CAA2Level L1
 * @CAA2Usage U4 CATEASchAppTargetPostPaste
 */

// System
#include "IUnknown.h"
#include "CATBoolean.h"

class CATIUnknownList;
class CATICStringList;


extern "C" const IID IID_CATISchAppTargetPostPaste ;

/**
 * Interface to manage specific application object behaviors after copy-paste.
 * Applications must derive implementation of this interface 
 * from the adapter class CATEASchAppTargetPostPaste.
 * <b>Role</b>: Post process the copied object after copy-paste.
 * <p><b>BOA information</b>: this interface CANNOT be implemented
 * using the BOA (Basic Object Adapter).
 * To know more about the BOA, refer to the CAA Encyclopedia home page.
 * Click Middleware at the bottom left, then click the Object Modeler tab page.
 * Several articles deal with the BOA.</p>
 */

class CATISchAppTargetPostPaste : public IUnknown
{
  public:  

  /**
  * Copy input groups (if needed, use existing and matching ones if found)
  * and add this copied object (target object) to the copied groups.
  * @param iListGroup 
  *   A list of interface pointers to groups to copy.
  */
  virtual HRESULT AppCopyGroupAndAddMembers (const CATIUnknownList *iLGroupToCopy) = 0;

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
    const CATICStringList *iLGroupType) = 0;

};
#endif
