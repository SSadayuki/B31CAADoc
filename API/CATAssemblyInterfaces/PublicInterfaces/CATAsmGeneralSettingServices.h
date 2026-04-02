/* -*-c++-*- */
#ifndef CATAsmGeneralSettingServices_H
#define CATAsmGeneralSettingServices_H

// COPYRIGHT DASSAULT SYSTEMES 2004
/**
 * @CAA2Level L1
 * @CAA2Usage U1
 */

#include "IUnknown.h"
#include "CATAssemblyInterfaces.h"

/**
* Returns the Assembly general settings controller.
* @param iInterfaceIdentifier
*   The identifier of the interface which is queryied on the controller.
* @param oInterfacePointer
*   The address where the returned pointer to the interface is located.
 * @return
 *   <dl>
 *   <dt><tt>S_OK</tt>          <dd>if the controller is successfully returned
 *   <dt><tt>E_NOINTERFACE</tt> <dd>if the interface does not exist
 *   <dt>Other                  <dd>if the controller cannot be returned.
 *   </dl>
*/
ExportedByCATAssemblyInterfaces 
HRESULT GetCATAsmGeneralSettingCtrl( const IID & iInterfaceIdentifier,
                                     void ** oInterfacePointer );
#endif
