#ifndef CATIPspConnection_H
#define CATIPspConnection_H

//	COPYRIGHT DASSAULT SYSTEMES 2000
/**
  * @CAA2Level L1
  * @CAA2Usage U3
  */


// System
#include "IUnknown.h"
#include "CATBooleanDef.h"

class CATIPspConnector;
class CATIUnknownList;
class CATICStringList;

extern "C" const IID IID_CATIPspConnection ;

/**
 * Interface to mangage connection object behaviors. 
 * <b>Role</b>: To specify  connection behaviors such as
 * adding a connector and removing a connector.
 */

class CATIPspConnection : public IUnknown
{
  public:  
  
  /**
  * Find all the connectors included in this connection.
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
  * Find all the object connected to this connection through
  * their connectors.
  * @param iLCntbleClassFilter
  *   A list of all the class types for filtering the output 
  *   objects list.
  * @param oLCntbles [out, IUnknown#Release]
  *   A list of  objects connected to this connection.
  *   (members are CATIPspConnectable interface pointers). 
  * @param oLCntrs [out, IUnknown#Release]
  *   A list of connectors through which this connection is made.
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
  virtual HRESULT ListConnectables (CATICStringList *iLCntbleClassFilter,
    CATIUnknownList **oLCntbles, CATIUnknownList **oLCntrs) = 0;

  /**
	* @nodoc
  * Add a connector.
  * @param iCntrToAdd
  *   The Connector to be added to the 
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
  virtual HRESULT AddConnector (CATIPspConnector *iCntrToAdd) = 0;

  /**
	* @nodoc
  * Add a connector.
  * @param ipiCntrToAdd
  *   The Connector to be added to the 
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
  virtual HRESULT AddConnector (const IUnknown *ipiCntrToAdd) = 0;

  /**
	* @nodoc
  * Remove a connector.
  * @param iCntrToRemove
  *    The Connector to be removed 
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
  * Remove a connector.
  * @param iCntrToRemove
  *    The Connector to be removed 
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
  virtual HRESULT RemoveConnector (const IUnknown *ipiCntrToRemove) = 0;
};
#endif
