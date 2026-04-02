#ifndef GetCATCafTreeSettingCtrl_H
#define GetCATCafTreeSettingCtrl_H
/**
 *  @quickReview EGD-JAC 01:11:29
 */
//===========================================================================
// COPYRIGHT DASSAULT SYSTEMES 2001
//===========================================================================
/**
 * @CAA2Level L1
 * @CAA2Usage U1
 */
#include "IUnknown.h"  // for IID 
#include "CATTreeOptions.h" // To export the function

/**
 * Global function to retrieve the controler which manages the 
 * different settings attached to the presentation of the specification tree.
 * <br><br>
 * @param iInterfaceIdentifier 
 *   The identifier of the interface which is queried on the implementation.
 *   <br>This interface can be:
 *  <li>@href CATIIniSettingManagment, for every aspect regarding the general methods on a @href CATSettingRepository class (Commit, Rollback, ResetToAdminValues, etc.)</li>
 *  <li>@href CATICafTreeSettingAtt, for all the methods to access to data stored in the embedded .CATSetting file.</li>
 * @param oInterfacePointer 
 *   The address where the returned pointer to the interface is located. It is up to the user of this method to release the pointer.
 **/
HRESULT ExportedByCATTreeOptions GetCATCafTreeSettingCtrl(const IID & iInterfaceIdentifier,
                                                          void     ** oInterfacePointer) ;
#endif
