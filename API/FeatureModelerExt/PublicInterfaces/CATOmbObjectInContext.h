
#ifndef __CATOmbObjectInContext_h__
#define __CATOmbObjectInContext_h__


// COPYRIGHT DASSAULT SYSTEMES 2010

/**
 * @CAA2Level L1
 * @CAA2Usage U1
 */


// FeatureModelerExt forwards and headers.
#include "FeatureModelerExt.h" // ExportedByFeatureModelerExt

// Other forwards and headers.
#include "CATBaseUnknown.h"


/**
 * Class representing an object in a context.
 * <b>Role</b>: This class represents an object in a context. 
 * A context means an occurrence or a representation occurrence
 * which can be seen as a path of instances and/or a representation instance.
 * An object is a PLM object other that an instance (a connection, a port, a reference or a representation)
 * or an internal object of a representation or of a connection.
 * An object in a context means the usage of this object in the context of this occurrence. <br>
 * <b>Note</b>: Since PLM concepts have no equivalent in V5, this class is just a V5 emulation of V6 class CATOmbObjectInContext, 
 * allowing to ensure that the code working in V5 will also work in V6.
 */
class ExportedByFeatureModelerExt CATOmbObjectInContext : public CATBaseUnknown 
{
  CATDeclareClass;

public:

 /**
  * Creates a CATOmbObjectInContext from an object.
  * @param iObject [in]
  *   The object from which to create the object in context.
  * @param oObjectInContext [out, CATBaseUnknown#Release]
  *   The built CATOmbObjectInContext representing the object in this context.
  * @return
  *   An HRESULT value.
  *   <br><b>Legal values</b>:
  *   <dl>
  *     <dt>S_OK</dt>
  *     <dd>The object in context has been successfully created.</dd>
  *     <dt>E_INVALIDARG</dt>
  *     <dd>The input object is not valid.</dd>
  *     <dt>E_FAIL</dt>
  *     <dd>Another failure has occurred.</dd>
  *  </dl>
  */
  static HRESULT CreateObjectInContext(CATBaseUnknown * iObject, CATOmbObjectInContext *& oObjectInContext);

 /**
  * Gets (if exists) the object defining this CATOmbObjectInContext instance. <br>
  * @param oObject [out, CATBaseUnknown#Release]
  *   A (caller provided) object in which retrieved object will be stored.
  *   <br>If the method fails <tt>oObject</tt> is not modified, it is otherwise overwritten with the retrieved value.
  *  @param  iIID [in]
  *    The interface identifier for which a pointer is requested.
  * @return
  *   An HRESULT value.
  *   <br><b>Legal values</b>:
  *   <dl>
  *     <dt>S_OK</dt>
  *     <dd>The object has been successfully retrieved.</dd>
  *     <dt>E_INVALIDARG</dt>
  *     <dd>The output object is not NULL.</dd>
  *     <dt>E_NOINTERFACE</dt>
  *     <dd>The interface is not supported.</dd>
  *     <dt>E_FAIL</dt>
  *     <dd>Another failure has occurred.</dd>
  *  </dl>
  */
  virtual HRESULT GetObjectOutOfContext(CATBaseUnknown * & oObject, const IID & iIID = IID_CATBaseUnknown) = 0;

 /**
  * Compares this object in context to another object in context.
  * @param ipObjectInContextToCompare [in]
  *   The object in context to compare with. <br>
  * @return
  *   An HRESULT value.
  *   <br><b>Legal values</b>:
  *   <dl>
  *     <dt>S_OK</dt>
  *     <dd>The two objects in context are identical.</dd>
  *     <dt>E_FAIL</dt>
  *     <dd>The two objects in context are different.</dd>
  *  </dl>
  */    
  virtual HRESULT Compare (const CATOmbObjectInContext * ipObjectInContextToCompare) const = 0; 

}; 

CATDeclareHandler(CATOmbObjectInContext, CATBaseUnknown);

#endif
