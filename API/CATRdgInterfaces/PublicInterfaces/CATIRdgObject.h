#ifndef CATIRdgObject_h
#define CATIRdgObject_h

// COPYRIGHT DASSAULT SYSTEMES 2003

/**
 * @CAA2Level L0
 * @CAA2Usage U3
 */

#include "CATRdgItfCPP.h"
#include "CATIRdgBase.h"
#include "CATBooleanDef.h"
#include "sequence_CATBaseUnknown_ptr.h"


class CATIRdgMaterial;


#ifndef LOCAL_DEFINITION_FOR_IID
extern ExportedByCATRdgItfCPP IID IID_CATIRdgObject;
#else
extern "C" const IID IID_CATIRdgObject;
#endif

/** 
 * Interface for scene objects.
 * <b>Role</b>:
 * This is the base interface for CATIRdgBag and CATIRdgGeometry.
 * It is used to gather common data in each node of the scene tree.
 */

class ExportedByCATRdgItfCPP CATIRdgObject : public CATIRdgBase
{
/** @nodoc */
  CATDeclareInterface;

  public:

/**
 * Returns the show status.
 * @param oStatus
 *   The show status.
 *   <ul> show status.
 *   <li> TRUE  object is visible </li>
 *   <li> FALSE object is not visible </li>
 *   </ul>
 * @return
 *   An HRESULT value.
 *   <br><b> Legal values</b>:
 *   <li><tt>S_OK</tt> the operation succeeded </li>
 *   <li><tt>E_FAIL</tt> otherwise </li>.
 */
    virtual HRESULT GetShowStatus(CATBoolean &oStatus) = 0;

/**
 * Returns the material attached to the object.
 * @param oMaterial
 *   The material attached. After use, a Release() must be made.
 * @return
 *   An HRESULT value.
 *   <br><b> Legal values</b>:
 *   <li><tt>S_OK</tt> the operation succeeded </li>
 *   <li><tt>E_FAIL</tt> otherwise </li>.
 */
    virtual HRESULT GetMaterial(CATIRdgMaterial **oMaterial) = 0;

/**
 * Returns the stickers list.
 * @param oStickers
 *   The list of stickers that are applied on this object. 
 *   After use, a Release() must be made on each element 
 *   and the list must be deleted.
 * @param oContexts
 *   The list of stickers created on this object. A sticker 
 *   may be created on an object and applied on a sub-object.
 *   After use, a Release() must be made on each element 
 *   and the list must be deleted.
 * @return
 *   An HRESULT value.
 *   <br><b> Legal values</b>:
 *   <li><tt>S_OK</tt> the operation succeeded </li>
 *   <li><tt>E_FAIL</tt> otherwise </li>.
 */
    virtual HRESULT GetStickers(CATLISTP(CATBaseUnknown) **oStickers, CATLISTP(CATBaseUnknown) **oContexts) = 0;
};

/** @nodoc */
CATDeclareHandler(CATIRdgObject,CATIRdgBase);

#endif
