#ifndef CATIEhiNetwork_H
#define CATIEhiNetwork_H
// COPYRIGHT DASSAULT SYSTEMES 2001

/**
 * @CAA2Level L1
 * @CAA2Usage U3
 */

#include "CATEhiInterfaces.h"
#include "CATBaseUnknown.h"

#ifndef LOCAL_DEFINITION_FOR_IID
extern ExportedByCATEhiInterfaces IID IID_CATIEhiNetwork;
#else
extern "C" const IID IID_CATIEhiNetwork ;
#endif
 /**
  * Interface to get connectors of an alectrical object.
  */

class CATListValCATBaseUnknown_var;

class ExportedByCATEhiInterfaces CATIEhiNetwork: public CATBaseUnknown
{
  CATDeclareInterface;

  public:

  /**
  * Retrieve list of connector points of an electrical device 
  * or bundle segment. 
  * @param oConnectorPoints
  *  List of connected connector points .
  * <br>Method returns NULL value if no connector is found.
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

  virtual HRESULT ListConnectorPoints ( CATListValCATBaseUnknown_var** oConnectorPoints ) = 0;

};


#endif
