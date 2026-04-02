#ifndef CATISchAppObjectFactory2_H
#define CATISchAppObjectFactory2_H

//	COPYRIGHT DASSAULT SYSTEMES 2001

/**
 * @CAA2Level L1
 * @CAA2Usage U4 CATEASchAppObjectFactory2
 */

// System
#include "IUnknown.h"
#include "CATBooleanDef.h"

class CATDocument;
class CATISchAppRoute;
class CATUnicodeString;

extern "C" const IID IID_CATISchAppObjectFactory2 ;

/**
 * Interface to create application objects.
 * Application must derived implementation of this interface 
 * from CATEASchAppObjectFactory2.
 * <b>Role</b>: This is the factory for application objects that are to
 * associated with Schematic basic set of objects.
 * <p><b>BOA information</b>: this interface CANNOT be implemented
 * using the BOA (Basic Object Adapter).
 * To know more about the BOA, refer to the CAA Encyclopedia home page.
 * Click Middleware at the bottom left, then click the Object Modeler tab page.
 * Several articles deal with the BOA.</p>
 */
class CATISchAppObjectFactory2 : public IUnknown
{
  public:
  /**
  * Create an Application Route object with application information.
  * @param iAppRouteClassType
  *   Class type of the Application Route object.
  * @param iAppInfo
  *   Application data pointer
  * @param oAppRoute
  *   The new Application Route object created (CATISchAppRoute
  *   interface pointer).
  */
  virtual HRESULT AppCreateRouteWithInfo(const char *iAppRouteClassType,
    IUnknown *iAppInfo, IUnknown **oAppRoute) = 0; 

  /**
  * Create an Application Component reference.
  * @param iAppCompClassType
  *   Class type of the Application Component reference.
  * @param iDoc
  *   Pointer to a document to create the object in. If NULL, the
  *   document associated with the current Editor will be used.
  * @param oAppComp
  *   The new Application Component object created (CATISchAppComponent
  *   interface pointer).
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
  virtual HRESULT AppCreateCompRef (const char *iAppCompClassType,
    const CATDocument *iDoc, IUnknown **oAppComp) = 0; 

  /**
  * @deprecated V5R15 
  * Use @href CATISchAppObjectFactory2#AppCreateRoute2 instead.
  * Create an Application Route object.
  * @param iAppRouteClassType
  *   Class type of the Application Route object.
  * @param iDoc
  *   Pointer to a document to create the object in. If NULL, the
  *   document associated with the current Editor will be used.
  * @param iLogLineID
  *   The logical line ID that will contain the new route.
  *   This is an optional input. If could be NULL.
  * @param oAppRoute
  *   The new Application Route object created (CATISchAppRoute
  *   interface pointer).
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
  virtual HRESULT AppCreateRoute (const char *iAppRouteClassType,
     const CATDocument *iDoc, const char *iLogLineID, 
     IUnknown **oAppRoute) = 0; 

  /**
  * @deprecated V5R15 
  * Use @href CATISchAppObjectFactory2#AppCreateRouteFromRef2 instead.
  * Create an Application Route object with a specific reference.
  * @param iAppRouteRef
  *   Route reference to creaet the output route from
  * @param iDoc
  *   Pointer to a document to create the object in. If NULL, the
  *   document associated with the current Editor will be used.
  * @param iLogLineID
  *   The logical line ID that will contain the new route.
  *   This is an optional input. If could be NULL.
  * @param oAppRoute
  *   The new Application Route object created (CATISchAppRoute
  *   interface pointer).
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
  virtual HRESULT AppCreateRouteFromRef (CATISchAppRoute *iRouteReference,
    const CATDocument *iDoc, const char *iLogLineID, IUnknown **oAppRoute) = 0; 

  /**
  * Create an Application Group object.
  * @param iAppGroupClassType
  *   Class type of the Application Group object.
  * @param iDoc
  *   Pointer to a document to create the object in. If NULL, the
  *   document associated with the current Editor will be used.
  * @param oAppGroup
  *   The new Application Group object created (CATISchAppGroup
  *   interface pointer).
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
  virtual HRESULT AppCreateGroup (const char *iAppGroupClassType,
    const CATDocument *iDoc, IUnknown **oAppGroup) = 0; 

  /**
  * Create an Application Zone object.
  * @param iAppZoneClassType
  *   Class type of the Application Zone object.
  * @param iDoc
  *   Pointer to a document to create the object in. If NULL, the
  *   document associated with the current Editor will be used.
  * @param oAppZone
  *   The new Application Zone object created (CATISchAppZone
  *   interface pointer).
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
  virtual HRESULT AppCreateZone (const char *iAppZoneClassType,
    const CATDocument *iDoc, IUnknown **oAppZone) = 0; 

  /**
  * Create an Application Connection object.
  * @param iAppCntnClassType
  *   Class type of the Application Connection object.
  * @param iDoc
  *   Pointer to a document to create the object in. If NULL, the
  *   document associated with the current Editor will be used.
  * @param oAppConnection
  *   The new Application Connection object created (CATISchAppConnection
  *   interface pointer).
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
  virtual HRESULT AppCreateConnection (const char *iAppCntnClassType,
    const CATDocument *iDoc, IUnknown **oAppConnection) = 0; 


  /**
  * Create an Application Route object.
  * @param iAppRouteClassType
  *   Class type of the Application Route object.
  * @param iDoc
  *   Pointer to a document to create the object in. If NULL, the
  *   document associated with the current Editor will be used.
  * @param iLogLineID
  *   The logical line ID that will contain the new route.
  *   This is an optional input. If could be NULL.
  * @param oAppRoute
  *   The new Application Route object created (CATISchAppRoute
  *   interface pointer).
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
  virtual HRESULT AppCreateRoute2 (const char *iAppRouteClassType,
     const CATDocument *iDoc, const CATUnicodeString *iLogLineID, 
     IUnknown **oAppRoute) = 0; 

  /**
  * Create an Application Route object with a specific reference.
  * @param iAppRouteRef
  *   Route reference to creaet the output route from
  * @param iDoc
  *   Pointer to a document to create the object in. If NULL, the
  *   document associated with the current Editor will be used.
  * @param iLogLineID
  *   The logical line ID that will contain the new route.
  *   This is an optional input. If could be NULL.
  * @param oAppRoute
  *   The new Application Route object created (CATISchAppRoute
  *   interface pointer).
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
  virtual HRESULT AppCreateRouteFromRef2 (CATISchAppRoute *iRouteReference,
    const CATDocument *iDoc, const CATUnicodeString *iLogLineID, IUnknown **oAppRoute) = 0; 

};
#endif
