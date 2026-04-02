#ifndef CATIEhiNetworkExtremity_H
#define CATIEhiNetworkExtremity_H

// COPYRIGHT DASSAULT SYSTEMES 2001

/**
 * @CAA2Level L1
 * @CAA2Usage U3
 */

#include "CATEhiInterfaces.h"
#include "CATBaseUnknown.h"

#ifndef LOCAL_DEFINITION_FOR_IID
extern ExportedByCATEhiInterfaces IID IID_CATIEhiNetworkExtremity;
#else
extern "C" const IID IID_CATIEhiNetworkExtremity ;
#endif

class CATListValCATBaseUnknown_var;
 /**
  * Interface to manage connector points of an electrical device
  * or a bundle segment .
  */

class ExportedByCATEhiInterfaces CATIEhiNetworkExtremity: public CATBaseUnknown
{
  CATDeclareInterface;

  public:


  /**
  * Retrieve list of connected connector points . 
  * @param oConnectorPoints
  *  List of connected connector points .
  * <br>Method returns NULL value if no connector is linked.
  * @return
  *   An HRESULT value. 
  *   <br><b>Legal values</b>:
  *   <dl>
  *     <dt>S_OK</dt>
  *     <dd>no error. </dd>
  *     <dt>E_FAIL </dt>
  *     <dd>Error occured while searching connected connectors.</dd>
  *   </dl>
  */

  virtual HRESULT ListConnectedConnectorPoints ( CATListValCATBaseUnknown_var** oConnectorPoints ) = 0;

  /**
  * Retrieve electrical object to which connector point belongs . 
  * @param oElectricalObject
  *  Electrical object .
  * <br>Method returns NULL value if no object found.
  * @return
  *   An HRESULT value. 
  *   <br><b>Legal values</b>:
  *   <dl>
  *     <dt>S_OK</dt>
  *     <dd>no error. </dd>
  *     <dt>E_FAIL </dt>
  *     <dd>Error occured while searching electrical object.</dd>
  *   </dl>
  */

  virtual HRESULT GetElectricalObject ( CATBaseUnknown** oElectricalObject ) = 0;

};


#endif
