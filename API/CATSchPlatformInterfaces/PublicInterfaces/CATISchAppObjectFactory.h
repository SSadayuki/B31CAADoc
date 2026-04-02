#ifndef CATISchAppObjectFactory_H
#define CATISchAppObjectFactory_H

//	COPYRIGHT DASSAULT SYSTEMES 2000

/**
 * @CAA2Level L1
 * @CAA2Usage U5
 */

// System
#include "IUnknown.h"
#include "CATBooleanDef.h"

class CATISchAppRoute;

extern "C" const IID IID_CATISchAppObjectFactory ;

/**
 * @deprecated V5R15 
 * Use @href CATISchAppObjectFactory2 instead.
 * Interface to create application objects.
 * <b>Role</b>: This is the factory for application objects that are to
 * associated with Schematic basic set of objects.
 */
class CATISchAppObjectFactory : public IUnknown
{
  public:
  
  /**
  * @deprecated V5R15 
  * Use @href CATISchAppObjectFactory2#AppCreateCompRef instead.
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
    IUnknown **oAppComp) = 0;

  /**
  * @deprecated V5R15 
  * Use @href CATISchAppObjectFactory2#AppCreateRoute2 instead.
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
    IUnknown **oAppRoute, const char *iLogLineID=NULL) = 0;

  /**
  * @deprecated V5R15 
  * Use @href CATISchAppObjectFactory2#AppCreateRouteFromRef2 instead.
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
    IUnknown **oAppRoute, const char *iLogLineID=NULL) = 0;

  /**
  * @deprecated V5R15 
  * Use @href CATISchAppObjectFactory2#AppCreateGroup instead.
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
    IUnknown **oAppGroup) = 0;

  /**
  * @deprecated V5R15 
  * Use @href CATISchAppObjectFactory2#AppCreateZone instead.
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
    IUnknown **oAppZone) = 0;

  /**
  * @deprecated V5R15 
  * Use @href CATISchAppObjectFactory2#AppCreateConnection instead.
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
    IUnknown **oAppConnection) = 0;
};
#endif
