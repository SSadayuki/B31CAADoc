#ifndef CATIEdiReferenceFactory_H
#define CATIEdiReferenceFactory_H

//	COPYRIGHT DASSAULT SYSTEMES 2000

/**
  * @CAA2Level L1
  * @CAA2Usage U3
  */

// System
#include "CATBaseUnknown.h"
#include "CATBooleanDef.h"
class CATIEdiReferenceFactory;
class IUnknown;

extern "C" const IID IID_CATIEdiReferenceFactory;

/**
 * Interface to create application object references.
 * <b>Role</b>: This is the factory for application objects that are 
 * associated with schematic basic set of objects.
 */
class CATIEdiReferenceFactory : public IUnknown
{
 public:
  
  /**
   * Creates an application component reference.
   * Allowed types are : ElecSchPlug
   *                     ElecSchEquipment
   *                     ElecSchSocket
   *                     ElecSchJunctionBox
   *                     ElecSchBusBar
   *                       (For the BusBar a WidePin connector is created 
   *                        on the fly on the reference product)
   *
   * @param iEdiCompClassType
   *   The class type of the application component reference.
   * @param iEdiCompPartNumber
   *   The part number of the application component reference.
   * @param oEdiComp
   *   The new application component object created 
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
  virtual HRESULT CreateEdiComponentReference (const char    *iEdiCompClassType, 
					       const wchar_t *iEdiCompPartNumber,
					       IUnknown **oEdiComp) = 0;
  
  /**
   * Creates an application routable reference.
   * Allowed types are : ElecSchCable
   *
   * @param iEdiRouteClassType
   *   The class type of the application routable reference.
   * @param iEdiRoutePartNumber
   *   The part number of the application routable reference.
   * @param oEdiRoute
   *   The new application routable object created 
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
  virtual HRESULT CreateEdiRoutableReference (const char    *iEdiRouteClassType, 
					      const wchar_t *iEdiRoutePartNumber, 
					      IUnknown **oEdiRoute) = 0;
};
#endif





