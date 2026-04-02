#ifndef CATISchAppContCutAndPaste_H
#define CATISchAppContCutAndPaste_H

//	COPYRIGHT DASSAULT SYSTEMES 2000

/**
 * @CAA2Level L1
 * @CAA2Usage U3
 */

// System
#include "IUnknown.h"
#include "CATBaseUnknown.h"
#include "CATBaseUnknowns.h"
#include "CATBaseUnknown_Associations.h"

extern "C" const IID IID_CATISchAppContCutAndPaste ;

/**
 * Interface to provide component group post copy-paste behavior.
 * <b>Role</b>: To be called by CATISchContCutAndPastable implementation 
 * on the Schematic component group extensions.
 */
class CATISchAppContCutAndPaste : public IUnknown
{
  public:   

  /**
  * Application post process after copy paste a component group.
  * @param iCompGroupSource
  *        the schematic component group extensions in the source
  *        container
  * @param iCompGroupTarget
  *        the schematic component group extensions in the target
  *        container
  * @param ioAssociationOfObjects
  *        couples of objects source/target.
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
  virtual HRESULT AppPostCCPCompGroupProcess (
     IUnknown *iCompGroupSource, CATBaseUnknown_Associations& ioAssociationOfObjects,
	 IUnknown *iCompGroupTarget) = 0;
};
#endif

