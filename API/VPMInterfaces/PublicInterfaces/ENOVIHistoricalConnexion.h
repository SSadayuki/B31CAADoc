//=============================================================================
// COPYRIGHT DASSAULT SYSTEMES 2001
//=============================================================================
/** 
* @CAA2Level L1
* @CAA2Usage U3
*/

#ifndef ENOVIHistoricalConnexion_H_
#define ENOVIHistoricalConnexion_H_

#include "ENOVIConnexion.h"
#include "CATIAV5Level.h"
#include "GUIDVPMInterfaces.h"

#ifndef LOCAL_DEFINITION_FOR_IID
extern ExportedByGUIDVPMInterfaces IID IID_ENOVIHistoricalConnexion;
#else
extern "C" const IID IID_ENOVIHistoricalConnexion;
#endif

/**
* @nodoc
*/
#define HTY_SYNC 0
/** 
* @nodoc
*/
#define HTY_UNSYNC 1
/** 
* @nodoc 
*/
#define HTY_AUTHORIZED_SYNC 2

/**
* Subclass of ENOVIConnexion.
*<br><b>Role</b> Interface to connections pointing objects,
* connection objects and connectors through branches.
* An historical connection is a connection pointing objects,
* connectable objects and/or connectors through branches. A branch is a
* kind of relationship attribute object.<p>
* An historical connection also manages
* timestamps on pointed objects and branches. So an historical connection
* knows if it is synchronized with its pointed objets.</p>
* A more complex operation is to authorize an object.
* An authorized object represents a collection of
* unsynchronized objects. The authorized object is synchronous with at least
* one object of the collection it represents.
* It allows a branch to return a synchronous state on a set of 
* equivalent objects with different timestamps instead of being
* synchronous only to one object.
* It's a kind of acceptable set of time stamps.
*/
class ExportedByGUIDVPMInterfaces ENOVIHistoricalConnexion : public ENOVIConnexion 
{
  CATDeclareInterface;
  public:

  // oState=0 synchronized / oState=1 unsynchronized / oState=2 missing object
  /**
  * Checks connection synchronization state.
  * <br><b>Role</b>: When an historical connection is
  * created it takes a copy of the time stamp attribute for each pointed
  * object. CheckConnexionState then tells if the copy and the actual time
  * stamps are equal for each pointed object.
  *@param oState 
  *	The output state the method valuate this attribute.
  *	<br><b>Legal value:</b>
  *	<ul>
  *		<li><code>0</code>: The connection is synchronized with each 
  *		of its pointed object.</li>
  *		<li><code>1</code>: not.</li> 
  *		<li><code>2</code>: If there is a missing object.</li>
  *	</ul>
  *@param iApplyFilter 
  *	The default value is 1, that means to apply a filter.
  *@return S_OK 
  *	The method succeeds.
  *@return E_FAIL 
  *	The method fails.
  */
  virtual HRESULT CheckConnexionState(long& oState, int iApplyFilter=1) = 0; 

  // oState=0 synchronized / oState=1 unsynchronized / oState=2 authorized
  /**
  * Checks a particular object synchronization state.
  *@param iConnectedObject 
  *	The object pointed by the connection.
  *@param oState 
  *	The output state valuated by the method.
  *	<br><b>Legal value:</b>
  *	<ul>
  *		<li><code>0</code>: It is synchronized.</li>
  *		<li><code>1</code>: It is not synchronized.</li>
  *		<li><code>2</code>: It is authorized.</li>
  *	</ul>
  *@param iConnector 
  *		The connector name. The default value is "unval" and
  *		it is required if the concerned	object is pointed
  *		through a connector.
  *@return S_OK 
  *	The method succeeds.
  *@return E_FAIL 
  *	The method fails.
  */
  virtual HRESULT CheckConnectedObjectState(const CATIVpmFactoryObject_var& iConnectedObject,
					    long& oState, 
					    const CATUnicodeString& iConnector = "unval") = 0; 
  
  /* iObject = NULL_var : global synchronization */
  /**
  * Synchronizes the connection.
  *@param iObject 
  *		The object to synchronize.
  *		The default is NULL_var, this means that the a global
  *		synchronization is done. If it is valuated,
  *		that particular pointed object will be synchronized.
  *		This object is either a connected object or the object owner
  * 		of the connection.
  *@param iConnector 
  *		The name of the connector, its default value is "unval",
  *		it is required if the concerned 	object is pointed through
  *		a connector.
  *@param iApplyFilter 
  *		Indicates whether a filter is to be applied.
  *		Its default value is 1, that means to apply a filter.
  *@return S_OK 
  *	The method succeeds.
  *@return E_FAIL 
  *	The method fails.
  */
  virtual HRESULT Synchronize(const CATIVpmFactoryObject_var& iObject = NULL_var, 
			      const CATUnicodeString& iConnector = "unval",
				  int iApplyFilter=1) = 0;


  /**
  * Authorizes an object.
  *@param iObject 
  *		The object to authorize. The default value is NULL_var,
  *		meaning a global autorization: all pointed objects and connectors
  *		will be authorized.
  *@param iConnector 
  *		The name of the connector. The default value is "unval",
  *		it is required if the concerned
  *		object is pointed through a connector.
  *@return S_OK 
  *	The method succeeds.
  *@return E_FAIL 
  *	The method fails.
  */
  virtual HRESULT Authorize(const CATIVpmFactoryObject_var& iObject = NULL_var, 
			    const CATUnicodeString& iConnector = "unval") = 0;

  /**
  * Retrieves connected objects states.
  * <br><b>Role</b>: This method is similar to check each connected
  * object state and then store the results in a list.
  *@param oConnectedObjects 
  *	The list of retrieved connected objects.
  *@param oConnectors 
  *		The list of retrieved connectors objects. 
  *		oConnectors[i] is the connector of object oConnectedObjects[i].
  *@param oStates 
  *		The corresponding list of state. oStates[i] is the state
  *		of object oConnectedObjects[i].
  *@param iRole
  *     Optional parmater for V508_role
  *     allowed values:"BB Owner" or "Published Doc"
  *     avaialble only for R17
  *@return S_OK 
  *	The method succeeds.
  *@return E_FAIL 
  *	The method fails.
  */

  #if !defined(CATIAV5R17)
  virtual HRESULT GetConnectedObjectsState(CATLISTV(CATIVpmFactoryObject_var)& oConnectedObjects,
					   CATListOfCATUnicodeString& oConnectors, 
					   CATListOfInt& oStates) = 0;
  #endif

  #if defined(CATIAV5R17)
  virtual HRESULT GetConnectedObjectsState(CATLISTV(CATIVpmFactoryObject_var)& oConnectedObjects,
					   CATListOfCATUnicodeString& oConnectors, 
					   CATListOfInt& oStates,const CATUnicodeString& iRole="") = 0;
  #endif


};

CATDeclareHandler(ENOVIHistoricalConnexion, ENOVIConnexion);
#endif
