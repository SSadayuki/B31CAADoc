//=============================================================================
// COPYRIGHT DASSAULT SYSTEMES 2001
//=============================================================================
/**
* @CAA2Level L1
* @CAA2Usage U3
*/
#ifndef ENOVIConnexion_H_
#define ENOVIConnexion_H_

#include "CATIAV5Level.h"
#include "CATBaseUnknown.h"
#include "GUIDVPMInterfaces.h"
#include "CATListOfCATIVpmFactoryObject.h"
#include "CATListOfCATUnicodeString.h"
#include "CATTypUtilit.h"
#ifndef LOCAL_DEFINITION_FOR_IID
extern ExportedByGUIDVPMInterfaces IID IID_ENOVIConnexion;
#else
extern "C" const IID IID_ENOVIConnexion;
#endif

/**
* Base class for connection objects.
* <br><b>Role</b>: 
* A connection has an owner. When the owner is
* destructed so is the connection. A connection points 
* objects directly or through connectors objects.
*/
class ExportedByGUIDVPMInterfaces ENOVIConnexion : public CATBaseUnknown 
{
  CATDeclareInterface;
  
  public:

  /**
  * Allows a connection to point to a particular
  * connectable object or one of its connectors.
  *@param iConnectableObject 
  *	The pointed connectable object.
  *@param iConnector 
  *	The name of the connector, if the object is to be pointed through
  *	one of its connectors. This of course means that 
  *	iConnectableObject must have a connector named iConnector.
  *	The default value is "unval".
  *@param iApplyFilter 
  *	A flag to indicate whether a filter is to be applied.
  *	<ul>
  *		<li><code>1</code>: apply a filter, default value.</li>
  *	</ul>
  *@param iRole
  *     Optional parmater for V508_role
  *     allowed values:"BB Owner" or "Published Doc"
  *     avaialble only for R17
  *@return S_OK 
  *	The method succeeds.
  *@return E_FAIL
  *	The method fails.
  */
  virtual HRESULT Connect(const CATIVpmFactoryObject_var& iConnectableObject,
			  const CATUnicodeString& iConnector = "unval",
			  int iApplyFilter=1,const CATUnicodeString& iRole="") = 0;


  /**
  * Allows a connection to point to a particular
  * connectable object or one of its connectors.
  * Additionally, allows timestamp of this connection
  * to be specified.
  *@param iConnectableObject 
  *	The pointed connectable object.
  *@param iTimestamp
  *   The timestamp which will be set for this connecion.
  *@param iConnector 
  *	The name of the connector, if the object is to be pointed through
  *	one of its connectors. This of course means that 
  *	iConnectableObject must have a connector named iConnector.
  *	The default value is "unval".
  *@param iApplyFilter 
  *	A flag to indicate whether a filter is to be applied.
  *	<ul>
  *		<li><code>1</code>: apply a filter, default value.</li>
  *	</ul>
  *@param iRole
  *     Optional parmater for V508_role
  *     allowed values:"BB Owner" or "Published Doc"
  *     avaialble only for R17
  *@return S_OK 
  *	The method succeeds.
  *@return E_FAIL
  *	The method fails.
  */
  virtual HRESULT Connect(const CATIVpmFactoryObject_var& iConnectableObject,
                          const SEQUENCE_octet& iTimestamp,
                          const CATUnicodeString& iConnector = "unval", int iApplyFilter=1,
                          const CATUnicodeString& iRole="")=0;
  
  /**
  * Drops a connected object. This method detach an
  * object pointed by this connection.
  *@param iConnectedObject 
  *		The object to be dropped.
  *@param iConnector
  *	The name of the connector, necessary if
  *	the object is pointed through a connector.
  *@return S_OK 
  *	The method succeeds.
  *@return E_FAIL
  *	The method fails.
  */
  virtual HRESULT Drop(const CATIVpmFactoryObject_var& iConnectedObject, 
		       const CATUnicodeString& iConnector = "unval") = 0;
 /**
 * Retrieves pointed objects.
 *@param oConnectedObjects 
 *		The list of objects pointed by this connection.
 *@param oConnectors 
 *		The list of connectors pointed by this connection.
 *@param iApplyFilter 
 *	A flag to indicate whether a filter is to be applied.
 *	<ul>
 *		<li><code>1</code>: apply a filter, default value.</li>
 *	</ul>
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
  virtual HRESULT GetConnectedObjects(CATLISTV(CATIVpmFactoryObject_var)& oConnectedObjects,
				      CATListOfCATUnicodeString& oConnectors,
					  int iApplyFilter=1) = 0;
 #endif

#if defined(CATIAV5R17)
 virtual HRESULT GetConnectedObjects(CATLISTV(CATIVpmFactoryObject_var)& oConnectedObjects,
				      CATListOfCATUnicodeString& oConnectors,
					  int iApplyFilter=1,const CATUnicodeString& iRole="") = 0;
#endif



  /**
  * Retrieves connection's owner.
  *@param oObject 
  *	The retrieved owner object.
  *@return S_OK 
  *	The method succeeds.
  *@return E_FAIL
  *	The method fails.
  */
  virtual HRESULT GetConnexionOwner(CATIVpmFactoryObject_var& oObject) = 0;

};
CATDeclareHandler(ENOVIConnexion, CATBaseUnknown);

#endif
