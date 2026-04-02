#ifndef CATIPspConnector_H
#define CATIPspConnector_H

//	COPYRIGHT DASSAULT SYSTEMES 2000
/**
  * @CAA2Level L1
  * @CAA2Usage U3
  */

// System
#include "IUnknown.h"
#include "CATBooleanDef.h"

class CATIPspConnectable;
class CATIPspConnection;
class CATIUnknownList;
class CATICStringList;
class CATUnicodeString;
class CATListValCATUnicodeString;

extern "C" const IID IID_CATIPspConnector ;

/**
 * Interface to manage connector object behaviors. 
 * <b>Role</b>: To specify connector behaviors such as
 * connect and disconnect.
 */

class CATIPspConnector : public IUnknown
{
  public:  
  
  /**
  * Find the object that owns this connector.
  * @param oConnectable [out, IUnknown#Release]
  *   An object that the connector belongs to.
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
  virtual HRESULT GetAssociatedConnectable (
    CATIPspConnectable **oConnectable) = 0;

  /**
  * Find all the connections that include this connector.
  * @param iLCntnClassFilter
  *   A list of all the class types for filtering the output connection
  *   list. 
  * @param oLConnections [out, IUnknown#Release]
  *   A list of connections that include this connector
  *   (members are CATIPspConnection interface pointers).
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
  virtual HRESULT ListConnections (CATICStringList *iLCntnClassFilter,
    CATIUnknownList **oLConnections) = 0;

  /**
  * Connect to an input connector.
  * @param iClassType
  *   A connection class type.
  * @param iCntrToConnect
  *   A connector object to connect to
  * @param oConnection [out, IUnknown#Release]
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
  virtual HRESULT Connect ( const char * iClassType,
    CATIPspConnector *iCntrToConnect,
    CATIPspConnection **oConnection) = 0;
  
  /**
  * @nodoc
  * Connect to a list of connectors.
  * @param iCnxClassType
  *   A connection class type.
  * @param iListOfConnectors 
  *   A list of connectors object to connect to
  * @param oConnection [out, IUnknown#Release]
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
  virtual HRESULT Connect ( const char * iCnxClassType,
    const CATIUnknownList *iListOfConnectors,
    CATIPspConnection **oConnection) = 0;

  /**
  * @nodoc
  * Connect to an input connector in the input connection.
  * @param iCntrToConnect
  *   A connector object to connect to
  * @param iConnection
  *   Connection to used for 'connect'
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
  virtual HRESULT Connect (const CATIPspConnector *iCntrToConnect,
    const CATIPspConnection *iConnection) = 0;

  /**
  * Disconnect from an input connector.
  * @param iCntrToDisconnect
  *   A connector object to disconnect from
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
  virtual HRESULT Disconnect (CATIPspConnector *iCntrToDisConnect) = 0;

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
  virtual HRESULT IsCntrConnected (CATBoolean *oBYes) = 0;
  
  /**
  * @nodoc
  * Provide post process after connector is created.
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
  virtual HRESULT PostAddConnector () = 0;
 
  /**
  * Get the connection class type for this connector and the input connector.
  * @param iCntrToConnect
  *   A connector object to connect to
  * @param oCnxClassType
  *   Valid connection class type
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
  virtual HRESULT GetValidConnection (const CATIPspConnector *iCntrToConnect,
    CATUnicodeString &oCnxClassType) = 0;

  /**
  * Set the connector display name.
  * @param iConnectorName
  *   A connector name
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
  virtual HRESULT SetName (const CATUnicodeString &iConnectorName) = 0;

  /**
  * Get the connector display name.
  * @param oConnectorName
  *   A connector name
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
  virtual HRESULT GetName (CATUnicodeString &oConnectorName) = 0;

  /**
  * 
  * Get connector number.
  * @param oCtrNumber
  *   Connector number on this connector. 
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
  virtual HRESULT GetConnectorNumber (int &oCtrNumber) = 0;

  /**
  * Find connectors connected to this connector in the input connection.
  * @param iConnection
  *   Connection used for finding the connected connectors.
  * @param oLConnectedCntrs [out, IUnknown#Release]
  *   A list of connectors connected to this connector.
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
  virtual HRESULT ListConnectedCntrs (const CATIPspConnection *iConnection,
    CATIUnknownList **oLConnectedCntrs) = 0;

  /**
  * Set a list of attribute names associated to this connector.
  * @param opListOfAttrNames
  *   List of attribute names associated to the connector.
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
  virtual HRESULT SetAttrNames (const CATListValCATUnicodeString *ipListOfAttrNames) = 0;
  
  /**
  * Returns a list of attribute names associated to this connector.
  * @param opListOfAttrNames
  *   List of attribute names associated to the connector.
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
  virtual HRESULT ListAttrNames (CATListValCATUnicodeString *&opListOfAttrNames) = 0;

};
#endif
