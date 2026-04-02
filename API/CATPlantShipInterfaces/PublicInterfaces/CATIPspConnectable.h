#ifndef CATIPspConnectable_H
#define CATIPspConnectable_H

//	COPYRIGHT DASSAULT SYSTEMES 2000
/**
  * @CAA2Level L1
  * @CAA2Usage U3
  */

// System
#include "IUnknown.h"
#include "CATBooleanDef.h"

class CATIUnknownList;
class CATIPspConnector;
class CATICStringList;
class CATUnicodeString;

extern "C" const IID IID_CATIPspConnectable ;

/**
 * Interface to manage object behaviors in making connections. 
 * <b>Role</b>: To specify object behaviors such as
 * adding a connector and removing a connector.
 */

class CATIPspConnectable : public IUnknown
{
  public:  
  
  /**
  * Find all the connectors of this object.
  * @param iLCntrClassFilter 
  *   A list of all the class types for filtering the output connector
  *   list.
  * @param oLCntrs [out, IUnknown#Release]
  *   A list of connectors included in this connection.
  *   (members are CATIPspConnector interface pointers).
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
  virtual HRESULT ListConnectors (CATICStringList *iLCntrClassFilter,
    CATIUnknownList **oLCntrs) = 0;

  /**
  * Find all the objects connected to this object through
  * their connectors.
  * @param iLCntbleClassFilter
  *   A list of all the class types for filtering the output 
  *   objects list. If NULL, then no filtering is done.
  * @param oLCntbles [out, IUnknown#Release]
  *   A list of objects connected to this object.
  *   (members are CATIPspConnectable interface pointers). 
  * @param oLCntrsOnThisObj [out, IUnknown#Release]
  *   A list of connectors on this object through which 
  *   the connection is made.
  *   (members are CATIPspConnector interface pointers).
  * @param oLCntrsOnConnected [out, IUnknown#Release]
  *   A list of connectors on the connected objects through which 
  *   the connection is made.
  *   (members are CATIPspConnector interface pointers).
  *   Members in this list corresponds to those in oLCntrsOnThisObj in
  *   making the corresponding connections.
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
  virtual HRESULT ListConnectables (CATICStringList *iLCntbleClassFilter,
    CATIUnknownList **oLCntbles, CATIUnknownList **oLCntrsOnThisObj,
    CATIUnknownList **oLCntrsOnConnected) = 0;

 /**
  * Find all the objects connected to this object through
  * their connectors subject to class filters.
  * @param iLCntbleClassFilter
  *   A list of all the class types for filtering the output 
  *   connectable objects list.
	* @param iLCntrsClassFilter
  *   A list of all the class types for filtering the output 
  *   connector objects list.
	* @param iLCnxsClassFilter
  *   A list of all the class types for filtering the output 
  *   other connector objects list.
  * @param oLCntbles [out, IUnknown#Release]
  *   A list of objects connected to this object.
  *   (members are CATIPspConnectable interface pointers). 
  * @param oLCntrsOnThisObj [out, IUnknown#Release]
  *   A list of connectors on this object through which 
  *   the connection is made.
  *   (members are CATIPspConnector interface pointers).
  * @param oLCntrsOnConnected [out, IUnknown#Release]
  *   A list of connectors on the connected objects through which 
  *   the connection is made.
  *   (members are CATIPspConnector interface pointers).
  *   Members in this list corresponds to those in oLCntrsOnThisObj in
  *   making the corresponding connections.
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
	virtual HRESULT ListConnectables (CATICStringList *iLCntbleClassFilter,
		CATICStringList *iLCntrsClassFilter, CATICStringList *iLCnxsClassFilter,
    CATIUnknownList **oLCntbles, CATIUnknownList **oLCntrsOnThisObj,
    CATIUnknownList **oLCntrsOnConnected) = 0;

  /**
	* @nodoc
  * Add a connector.
  * @param iClassType 
  *   Class type of the connector to be added.
  * @param oNewCntr
  *   The new Connector object created.
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
  virtual HRESULT AddConnector (const char *iClassType,
    CATIPspConnector **oNewCntr) = 0;

  /**
	* @nodoc
  * Remove a connector.
  * @param iCntrToRemove
  *    The connector object to be removed 
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
  virtual HRESULT RemoveConnector (CATIPspConnector *iCntrToRemove) = 0;

  /**
	* @nodoc
  * Post process after connecting 2 objects.
  * @param iConnectedObject
  *    The object connected to this object 
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
  virtual HRESULT PostConnectProcess (CATIPspConnectable *iConnectedObject) = 0;

  /**
  * List the valid application connector types allowed to be created.
  * @param oLValidCntrTypes [out, IUnknown#Release]
  *   A list of connector class types allowed.
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
  virtual HRESULT ListValidCntrTypes (CATICStringList **oLValidCntrTypes) = 0;

  /**
  * Find a connector with the given name. 
  * @param iConnectorName
  *   Connector name to look for.
  * @param oCntr [out, IUnknown#Release]
  *   Connector with given name. 
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
  virtual HRESULT GetConnector (const CATUnicodeString &iConnectorName,
    CATIPspConnector **oCntr) = 0;

};
#endif
