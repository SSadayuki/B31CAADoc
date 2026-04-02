#ifndef CATIPspGroupable_H
#define CATIPspGroupable_H

//	COPYRIGHT DASSAULT SYSTEMES 2000
/**
  * @CAA2Level L1
  * @CAA2Usage U3
  */

// System
#include "IUnknown.h"
#include "CATBooleanDef.h"

class CATIUnknownList;
class CATIPspGroup;

extern "C" const IID IID_CATIPspGroupable ;

/**
 * Interface to query the group object. 
 * <b>Role</b>: To query the group object link to this object.
 */

class CATIPspGroupable : public IUnknown
{
  public:  
    
  /**
  * Returns a list of group objects of this object.
  * @param iClassType
  *   class type filter
  * @param oListOfGroups  [out, IUnknown#Release]
  *   A list of groups containing this object as a member
  * @return
  *   An HRESULT value.
  *   <br><b>Legal values</b>:
  *   <dl>
  *     <dt>S_OK</dt>
  *     <dd>operation is successful</dd>
  *     <dt>E_FAIL</dt>
  *     <dd>operation failed</dd>
  *   </dl>
  */
  virtual HRESULT ListGroups ( const char *iClassType,
    CATIUnknownList **oListOfGroups ) = 0;

  /**
  * Query whether it is OK to transfer to another group.
  * @param iGroup
  *   group to transfer object to.
  * @param oBYes
  *   If TRUE, then it is OK to transfer to the group
  * @return
  *   An HRESULT value.
  *   <br><b>Legal values</b>:
  *   <dl>
  *     <dt>S_OK</dt>
  *     <dd>operation is successful</dd>
  *     <dt>E_FAIL</dt>
  *     <dd>operation failed</dd>
  *   </dl>
  */
  virtual HRESULT OKToTransfer (CATIPspGroup *iGroup, CATBoolean *oBYes) = 0;

  /**
  * Query whether it is OK to remove from the group.
  * @param iGroup
  *   group of the object to query.
  *   (if NULL, assume there is only one group)
  * @param oBYes
  *   If TRUE, then it is OK to remove from the group
  * @return
  *   An HRESULT value.
  *   <br><b>Legal values</b>:
  *   <dl>
  *     <dt>S_OK</dt>
  *     <dd>operation is successful</dd>
  *     <dt>E_FAIL</dt>
  *     <dd>operation failed</dd>
  *   </dl>
  */
  virtual HRESULT OKToRemove (CATIPspGroup *iGroup, CATBoolean *oBYes) = 0;

  /**
  * @nodoc
  * Provide process after object has been transfered from the group.
  * @return
  *   An HRESULT value.
  *   <br><b>Legal values</b>:
  *   <dl>
  *     <dt>S_OK</dt>
  *     <dd>operation is successful</dd>
  *     <dt>E_FAIL</dt>
  *     <dd>operation failed</dd>
  *   </dl>
  */
  virtual HRESULT PostTransferProcess () = 0;
};
#endif
