#ifndef CATISchAppConnector_H
#define CATISchAppConnector_H

//	COPYRIGHT DASSAULT SYSTEMES 2000

/**
 * @CAA2Level L1
 * @CAA2Usage U5
 */

// System
#include "IUnknown.h"
#include "CATBooleanDef.h"

class CATISchAppConnector;
class CATISchAppConnectable;
class CATISchAppConnection;
class CATIUnknownList;
class CATICStringList;

extern "C" const IID IID_CATISchAppConnector ;

/**
 * Interface to mangage application connector object behaviors. 
 * <b>Role</b>: To specify application connector behaviors such as
 * connect and disconnect.
 */

class CATISchAppConnector : public IUnknown
{

  public:  
  
  /**
  * Find the application object that owns this connector.
  * @param oConnectable
  *   An application object that the connector belongs to.
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
  virtual HRESULT AppGetAssociatedConnectable (
    CATISchAppConnectable **oConnectable) = 0;

  /**
  * Find all the class types of connector that are compatible with
  * this connector for connections.
  * @param oLCntrCompatClassTypes
  *   A list of all the class types of connectors that are compatible
  *   with this connector for connections.
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
  virtual HRESULT AppListCompatibleTypes (
    CATICStringList **oLCntrCompatClassTypes) = 0;

  /**
  * Find all the connections that include this connector.
  * @param oLCntnClassFilter
  *   A list of all the class types for filtering the output connection
  *   list.
  * @param oLConnections
  *   A list of connections that include this connector
  *   (members are CATISchAppConnection interface pointers).
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
  virtual HRESULT AppListConnections (CATICStringList *iLCntnClassFilter,
    CATIUnknownList **oLConnections) = 0;

  /**
  * Connect to an input connector.
  * @param iCntrToConnect
  *   A schematic connector object to connect to
  * @param oConnection
  *   Connection created
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
  virtual HRESULT AppConnect (CATISchAppConnector *iCntrToConnect,
    CATISchAppConnection **oConnection) = 0;

  /**
  * Connect to an input connector for Branch.
  * @param iCntrToConnect
  *   A schematic connector object to connect to
  * @param oConnection
  *   Connection created
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
  virtual HRESULT AppConnectBranch (CATISchAppConnector *iCntrToConnect,
    CATISchAppConnection **oConnection) = 0;

  /**
  * Disconnect from an input connector.
  * @param iCntrToDisconnect
  *   A schematic connector object to disconnect from
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
  virtual HRESULT AppDisconnect (CATISchAppConnector *iCntrToDisConnect) = 0;

  /**
  * Query whether it is OK to no show the connector after it is connected.
  * @param oBYes
  *   If TRUE, then it is OK to no show.
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
  virtual HRESULT AppOKToNoShowConnectedCntr (CATBoolean *oBYes) = 0;

  /**
  * Query whether the connector has been connected. 
  * @param oBYes
  *   If TRUE, then it is connected
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
  virtual HRESULT AppIsCntrConnected (CATBoolean *oBYes) = 0;


};
#endif
