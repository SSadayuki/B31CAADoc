#ifndef CATISchAppConnection_H
#define CATISchAppConnection_H

//	COPYRIGHT DASSAULT SYSTEMES 2000

/**
 * @CAA2Level L1
 * @CAA2Usage U5
 */

// System
#include "IUnknown.h"
#include "CATBooleanDef.h"

class CATISchAppConnector;
class CATIUnknownList;
class CATICStringList;

extern "C" const IID IID_CATISchAppConnection ;

/**
 * Interface to mangage application connection object behaviors. 
 * <b>Role</b>: To specify application connection behaviors such as
 * adding a connector and removing a connector.
 */

class CATISchAppConnection : public IUnknown
{
  public:  
  
  /**
  * Find all the connectors included in this connection.
  * @param oLCntrClassFilter
  *   A list of all the class types for filtering the output connector
  *   list.
  * @param oLCntrs
  *   A list of connectors included in this connection.
  *   (members are CATISchAppConnector interface pointers).
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
  virtual HRESULT AppListConnectors (CATICStringList *iLCntrClassFilter,
    CATIUnknownList **oLCntrs) = 0;

  /**
  * Find all the application object connected to this connection through
  * their connectors.
  * @param oLCntrClassFilter
  *   A list of all the class types for filtering the output application
  *   objects list.
  * @param oLCntbles
  *   A list of application objects connected to this connection.
  *   (members are CATISchAppConnectable interface pointers). 
  * @param oLCntrs
  *   A list of connectors through which this connection is made.
  *   (members are CATISchAppConnector interface pointers).
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
  virtual HRESULT AppListConnectables (CATICStringList *iLCntbleClassFilter,
    CATIUnknownList **oLCntbles, CATIUnknownList **oLCntrs) = 0;

  /**
  * Add a connector.
  * @param iCntrToAdd
  *   The Application Connector to be added to the 
  *   connection
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
  virtual HRESULT AppAddConnector (CATISchAppConnector *iCntrToAdd) = 0;

  /**
  * Remove a connector.
  * @param iCntrToRemove
  *    The Application Connector to be removed 
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
  virtual HRESULT AppRemoveConnector (CATISchAppConnector *iCntrToRemove) = 0;
};
#endif
