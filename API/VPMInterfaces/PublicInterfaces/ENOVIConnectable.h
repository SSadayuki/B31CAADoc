//=============================================================================
// COPYRIGHT DASSAULT SYSTEMES 2001
//=============================================================================
/**
* @CAA2Level L1
* @CAA2Usage U3 
*/
#ifndef ENOVIConnectable_H_
#define ENOVIConnectable_H_

#include "CATBaseUnknown.h"
#include "GUIDVPMInterfaces.h"
#include "CATListOfCATIVpmFactoryObject.h"
#include "CATListOfCATUnicodeString.h"
#include "CATLISTV_CATBaseUnknown.h"
#include "CATTypUtilit.h"

#ifndef LOCAL_DEFINITION_FOR_IID
extern ExportedByGUIDVPMInterfaces IID IID_ENOVIConnectable;
#else
extern "C" const IID IID_ENOVIConnectable;
#endif

class CATIVpmPSDMUFilter_var;
/**
* Base interface for connectable objects.
* <br><b>Role</b>: Any instance of a class implementing ENOVIConnectable 
* can be connected to any other implementation of ENOVIConnectable
* or to a connector object, through connection objects. Such an object
* is an implementation of ENOVIConnexion. Methods related to connectors
* are optional.</p>
* A connector is an implementation of ENOVIConnectable that also provides
* CreateConnector, RemoveConnector, GetConnectors, GetConnectorTimeStamp,
* GetConnectorObject, GetConnectorName methods.<p>
* Connector objects allows connection pointing to a sub-object of a more
* complex object.
* </p>
* @see ENOVIConnexion
*/
class ExportedByGUIDVPMInterfaces ENOVIConnectable : public CATBaseUnknown 
{
  CATDeclareInterface;
  
public:
	/**
	* Retrieves connection objects.
	* @param oConnection
	*	The retrieved list of connections objects.
	* @param iConnectionTypeFilter
	*	A filter to connection types.
	*  "all", thus returning all types.
	* @param oConnectors
	*	The retrieved list of connectors name. 
	* @param iConnectionDirectionFilter
	*  A filter to connections directions.
	*	<br><b>Legal values:</b>
	*	<ul>
	*		<li><code>all</code>: get all connections, default value.</li>
	*		<li><code>pointed</code>: get connections pointed by this.</li>
	*		<li><code>pointing</code>: get connection pointing to this.</li>
	*	</ul>
  	* @return S_OK 
  	*	The method succeeds.
  	* @return E_FAIL
  	*	The method fails.
	*/
  virtual HRESULT GetConnexions(CATLISTV(CATIVpmFactoryObject_var)& oConnections,
				CATListOfCATUnicodeString& oConnectors,
				const CATUnicodeString& iConnectionTypeFilter = "all",
				// iConnexionDirectionFilter=("all","pointed","pointing")
				const CATUnicodeString& iConnectionDirectionFilter = "all") = 0;

  /**
  * Creates a connection.
  * @param iConnectionType
  *	The type of connection to be created, depends upon sub-types
  *	of ENOVIConnexion you may have created.
  * @param oConnection 
  *	The reference to the newly created connection.
  * @param iOwner
  * 	Owner of the connection.
  * @param iFiltrable
  *	A flag to indicate whether the connection can be filtered.
  *	<ul>
  *		<li><code>1</code>: created connection is filtrable, default value.</li>
  *	</ul>
  * @return S_OK 
  *	The method succeeds.
  * @return E_FAIL
  *	The method fails.
  */
  virtual HRESULT CreateConnexion(const CATUnicodeString& iConnectionType, 
				  CATIVpmFactoryObject_var& oConnection,
				  const CATIVpmFactoryObject_var& iOwner = NULL_var,
				  const CATUnicodeString& iConnector = "unval", 
				  int iFiltrable=1) = 0;
	/**
	* Creates a dependence connection.
	* <br><b>Role</b>:
	* A dependence connection is an historical connection established
	* between an owner object and pointed objects. Dependence is
	* implemented through pointed object times stamps. This behavior
	* is inherited from historical connections. Dependence connections add
	* orientation to the historical connection. The connection owner is the
	* object that did create the dependence connection. The owner is not
	* pointed by the connection.
	*@param iConnexionType
	* 	The name of the connection type to be created.
	*@param oConnexion
	*	The newly created dependence connection. 
	*@param iFiltrable
	*	A flag to indicate whether the connection can be filtered.
	*	<ul>
	*		<li><code>1</code>: created connection is filtrable, default value.</li>
	*	</ul>
  	*@return S_OK 
  	*	The method succeeds.
  	*@return E_FAIL
  	*	The method fails.
	*/
  virtual HRESULT CreateDependenceConnexion(const CATUnicodeString& iConnexionType, 
					    CATIVpmFactoryObject_var& oConnexion,
					    int iFiltrable=1) = 0;

	/**
	* Creates many dependence connections at once.  Additionally, allows dependence
   * connections to be created with specified timestamps.
	* <br><b>Role</b>:
	* A dependence connection is an historical connection established
	* between an owner object and pointed objects. Dependence is
	* implemented through pointed object times stamps. This behavior
	* is inherited from historical connections. Dependence connections add
	* orientation to the historical connection. The connection owner is the
	* object that did create the dependence connection. The owner is not
	* pointed by the connection.
	*@param iConnexionType
	* 	The name of the connection type to be created.
   *@param iPointedObjects
   *  A list of objects which will be pointed by dependence connections.
   *@param iTimestamps
   *  An array of timestamps.  This array may be NULL or it may be valuated. If
   *  it is valuated, it must be the same length as iPointedObjects.  Each connection
   *  will be created using the corresponding timestamp in iTimestamps.
	*@param oConnexions
	*	The newly created dependence connections. 
	*@param iFiltrable
	*	A flag to indicate whether the connections can be filtered.
	*	<ul>
	*		<li><code>1</code>: created connections are filtrable, default value.</li>
	*	</ul>
  	*@return S_OK 
  	*	The method succeeds.
  	*@return E_FAIL
  	*	The method fails.
	*/
  virtual HRESULT CreateDependenceConnexions(const CATUnicodeString& iConnexionType, 
                   const CATListValCATBaseUnknown_var& iPointedObjects,
                   const SEQUENCE_octet*& iTimestamps,
                   CATListValCATIVpmFactoryObject_var& oConnexions,
                   int iFiltrable=1)=0;
  
  // oState : =0 all connection synchronized; =1 to be updated; =-1 no connection
  // if (oState = 1) oListOfConnexionToBeSynchronized valuated

  /**
  * Checks connections states.
  * <br><b>Role</b>:
  * For each connection it checks connected object states. If one of them
  * has a state value equal to 1, the concerned connection is appended to
  * the list of connections to be synchronized.
  *@param oState 
  *		This state is set to 0 if all connection and connectors 
  *		are synchronized. 1 is returned if it is not the case.
  *@param oListOfConnexionToBeSynchronized 
  *		The list of connections. An empty list is returned if
  *		all connection and connectors are synchronized. Otherwise it
  *		contains the connections to be synchronized.
  *@return S_OK 
  *	The method succeeds.
  *@return E_FAIL
  *	The method fails.
  */
  virtual HRESULT CheckState(long& oState, 
			     CATLISTV(CATIVpmFactoryObject_var)& oListOfConnexionToBeSynchronized) = 0;

  /**
  * Creates a connector.
  *@param iConnector 
  *		The connector's name. Connectors on a given
  *		object must have distinct names.
  *@return S_OK 
  *	The method succeeds.
  *@return E_FAIL
  *	The method fails.
  */
  virtual HRESULT CreateConnector(const CATUnicodeString& iConnector) = 0;

  /**
  * Removes a connector.
  *@param iConnector
  *	The name of the connector to remove.
  *@return S_OK 
  *	The method succeeds.
  *@return E_FAIL
  *	The method fails.
  */
  virtual HRESULT RemoveConnector(const CATUnicodeString& iConnector) = 0;

  /** 
  * Retrieves the list of created connectors.
  *@param oConnectors 
  *	The list of created connectors.
  *@return S_OK 
  *	The method succeeds.
  *@return E_FAIL
  *	The method fails.
  */
  virtual HRESULT GetConnectors(CATListOfCATUnicodeString& oConnectors) = 0;

  /**
  * Retrieves a connector's time stamp.
  *@param iConnector
  *	The name of the connector.
  *@param oTimeStamp 
  *	The retrieved time stamp.
  *@return S_OK 
  *	The method succeeds.
  *@return E_FAIL
  *	The method fails.
  */
  virtual HRESULT GetConnectorTimeStamp(const CATUnicodeString& iConnector, 
					SEQUENCE_octet& oTimeStamp) = 0;

  /**
  * Retrieves the connector object.
  *@param iConnector 
  *	The name of the connector to retrieve.
  *@param oConnector 
  *	The retrieved connector object.
  *@return S_OK 
  *	The method succeeds.
  *@return E_FAIL
  *	The method fails.
  */
  virtual HRESULT GetConnectorObject(const CATUnicodeString& iConnector, 
				     CATIVpmFactoryObject_var& oConnector) = 0;

  /**
  * Retrieves the connector name.
  *@param iConnector
  *	The concerned connector.
  *@param oConnector 
  *	The retrieved name of the connector.
  *@return S_OK 
  *	The method succeeds.
  *@return E_FAIL
  *	The method fails.
  */
  virtual HRESULT GetConnectorName(const CATIVpmFactoryObject_var& iConnector,
				   CATUnicodeString& oConnector) = 0;

	/**
	* @nodoc
	* Use explicit filter parameter.
	*/
  virtual HRESULT GetConnections(CATLISTV(CATIVpmFactoryObject_var)& oConnections,
				CATListOfCATUnicodeString& oConnectors,
				const CATIVpmPSDMUFilter_var &ihFilter,
				const CATUnicodeString& iConnectionTypeFilter = "all",
				// iConnexionDirectionFilter=("all","pointed","pointing")
				const CATUnicodeString& iConnectionDirectionFilter = "all") = 0;

	/**
	* @nodoc
	* Use explicit filter parameter.
	*/
  virtual HRESULT GetConnectors(CATListOfCATUnicodeString& oConnectors,
			const CATIVpmPSDMUFilter_var &ihFilter) = 0;

	/**
	* @nodoc
	* Use explicit filter parameter.
	*/
  virtual HRESULT GetConnectorObject(
		const CATUnicodeString& iConnector, 
		CATIVpmFactoryObject_var& oConnector,
		const CATIVpmPSDMUFilter_var &ihFilter) = 0;
};

CATDeclareHandler(ENOVIConnectable, CATBaseUnknown);

#endif
