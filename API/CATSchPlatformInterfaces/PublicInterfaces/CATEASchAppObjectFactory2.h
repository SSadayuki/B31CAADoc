#ifndef CATEASchAppObjectFactory2_H
#define CATEASchAppObjectFactory2_H

//	COPYRIGHT DASSAULT SYSTEMES 2001

/**
 * @CAA2Level L1
 * @CAA2Usage U2
 */

// System
#include "CATBaseUnknown.h"
#include "CATBooleanDef.h"
#include "CATSchItfCPP.h"

class CATISchAppRoute;
class CATDocument;
class CATUnicodeString;

/**
 * Super class to derive implementation for interface CATISchAppObjectFactory2.
 * <b>Role</b>: Adaptor
 */

class ExportedByCATSchItfCPP CATEASchAppObjectFactory2 : public CATBaseUnknown
{
  public: 
      
  CATDeclareClass;

  /**
   * Constructs an empty CATEASchAppObjectFactory2.
   */
  CATEASchAppObjectFactory2();
  virtual ~CATEASchAppObjectFactory2();  

  //---------------------------------------------------------------------------
  //  CATISchAppObjectFactory
  //---------------------------------------------------------------------------    
  /**
  * @deprecated V5R15 
  * Do not override or use this method.
  * Create an Application Component reference.
  * @param iAppCompClassType
  *   Class type of the Application Component reference.
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
    IUnknown **oAppComp);

  /**
  * @deprecated V5R15 
  * Do not override or use this method.
  * Create an Application Route object.
  * @param iAppRouteClassType
  *   Class type of the Application Route object.
  * @param oAppRoute
  *   The new Application Route object created (CATISchAppRoute
  *   interface pointer).
  * @param iLogLineID
  *   The logical line ID that will contain the new route.
  *   This is an optional input.
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
    IUnknown **oAppRoute, const char *iLogLineID=NULL);

  /**
  * @deprecated V5R15 
  * Do not override or use this method.
  * Create an Application Route object with a specific reference.
  * @param iAppRouteRef
  *   Route reference to creaet the output route from
  * @param oAppRoute
  *   The new Application Route object created (CATISchAppRoute
  *   interface pointer).
  * @param iLogLineID
  *   The logical line ID that will contain the new route.
  *   This is an optional input.
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
    IUnknown **oAppRoute, const char *iLogLineID=NULL);

  /**
  * @deprecated V5R15 
  * Do not override or use this method.
  * Create an Application Group object.
  * @param iAppGroupClassType
  *   Class type of the Application Group object.
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
    IUnknown **oAppGroup);

  /**
  * @deprecated V5R15 
  * Do not override or use this method.
  * Create an Application Zone object.
  * @param iAppZoneClassType
  *   Class type of the Application Zone object.
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
    IUnknown **oAppZone);

  /**
  * @deprecated V5R15 
  * Do not override or use this method.
  * Create an Application Connection object.
  * @param iAppCntnClassType
  *   Class type of the Application Connection object.
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
    IUnknown **oAppConnection);

  //===========================================================================
  //
  //  CATISchAppObjectFactory2
  //
  //===========================================================================
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
    IUnknown *iAppInfo, IUnknown **oAppRoute); 

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
    const CATDocument *iDoc, IUnknown **oAppComp);

  /**
  * @deprecated V5R15 
  * Use @href CATEASchAppObjectFactory2#AppCreateRoute2 instead.
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
     IUnknown **oAppRoute);

  /**
  * @deprecated V5R15 
  * Use @href CATEASchAppObjectFactory2#AppCreateRouteFromRef2 instead.
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
    const CATDocument *iDoc, const char *iLogLineID, IUnknown **oAppRoute);

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
    const CATDocument *iDoc, IUnknown **oAppGroup);

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
    const CATDocument *iDoc, IUnknown **oAppZone);

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
    const CATDocument *iDoc, IUnknown **oAppConnection);

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
     IUnknown **oAppRoute);

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
    const CATDocument *iDoc, const CATUnicodeString *iLogLineID, IUnknown **oAppRoute);

  private:
  // do not implement
  CATEASchAppObjectFactory2 (CATEASchAppObjectFactory2 &);
  CATEASchAppObjectFactory2& operator=(CATEASchAppObjectFactory2&);
};

#endif
