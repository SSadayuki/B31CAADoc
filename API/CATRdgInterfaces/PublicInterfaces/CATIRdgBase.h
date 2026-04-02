#ifndef CATIRdgBase_h
#define CATIRdgBase_h

// COPYRIGHT DASSAULT SYSTEMES 2003

/**
 * @CAA2Level L0
 * @CAA2Usage U3
 */

#include "CATRdgItfCPP.h"
#include "CATBaseUnknown.h"
#include "CATBooleanDef.h"


class CATString;
class CATNotification;


#ifndef LOCAL_DEFINITION_FOR_IID
extern ExportedByCATRdgItfCPP IID IID_CATIRdgBase;
#else
extern "C" const IID IID_CATIRdgBase;
#endif

/** 
 * Interface for all rendering objects.
 * <b>Role</b>:
 * This is the base interface for all rendering objects.
 * It is used to identify and mark objects.
 */

class ExportedByCATRdgItfCPP CATIRdgBase : public CATBaseUnknown
{
/** @nodoc */
  CATDeclareInterface;

  public:

/**
 * Returns the object unique id.
 * @param oUID
 *   The object id. This id is unique and may be used as
 *   an identifier.
 * @return
 *   An HRESULT value.
 *   <br><b> Legal values</b>:
 *   <li><tt>S_OK</tt> the operation succeeded </li>
 *   <li><tt>E_FAIL</tt> otherwise </li>.
 */
    virtual HRESULT GetUID(CATString &oUID) = 0;

/**
 * Updates the object state according to the event.
 * @param iNotification
 *   The event received.
 * @return
 *   An HRESULT value.
 *   <br><b> Legal values</b>:
 *   <li><tt>S_OK</tt> the operation succeeded </li>
 *   <li><tt>E_FAIL</tt> otherwise </li>.
 */
    virtual HRESULT UpdateState(CATNotification *iNotification) = 0;

/**
 * Changes the dirty status.
 * @param iDirty
 *   The dirty status.
 *   <ul> dirty status.
 *   <li> TRUE  object is dirty </li>
 *   <li> FALSE object is not dirty </li>
 *   </ul>
 * @return
 *   An HRESULT value.
 *   <br><b> Legal values</b>:
 *   <li><tt>S_OK</tt> the operation succeeded </li>
 *   <li><tt>E_FAIL</tt> otherwise </li>.
 */
    virtual HRESULT SetDirty(CATBoolean &iDirty) = 0;

/**
 * Returns the object dirty status.
 * @param oDirty
 *   The dirty status.
 *   <ul> dirty status.
 *   <li> TRUE  object is dirty </li>
 *   <li> FALSE object is not dirty </li>
 *   </ul>
 * @return
 *   An HRESULT value.
 *   <br><b> Legal values</b>:
 *   <li><tt>S_OK</tt> the operation succeeded </li>
 *   <li><tt>E_FAIL</tt> otherwise </li>.
 */
    virtual HRESULT IsDirty(CATBoolean &oDirty) = 0;

/**
 * Associates temporary data to the object.
 * @param iData
 *   The integer temporary data.
 * @return
 *   An HRESULT value.
 *   <br><b> Legal values</b>:
 *   <li><tt>S_OK</tt> the operation succeeded </li>
 *   <li><tt>E_FAIL</tt> otherwise </li>.
 */
    virtual HRESULT SetData(int iData) = 0;

/**
 * Returns temporary data associated to the object.
 * @param oData
 *   The integer temporary data.
 * @return
 *   An HRESULT value.
 *   <br><b> Legal values</b>:
 *   <li><tt>S_OK</tt> the operation succeeded </li>
 *   <li><tt>E_FAIL</tt> otherwise </li>.
 */
    virtual HRESULT GetData(int &oData) = 0;

/**
 * Associates temporary data to the object.
 * @param iData
 *   The opaque temporary data.
 * @return
 *   An HRESULT value.
 *   <br><b> Legal values</b>:
 *   <li><tt>S_OK</tt> the operation succeeded </li>
 *   <li><tt>E_FAIL</tt> otherwise </li>.
 */
    virtual HRESULT SetData(CATBaseUnknown *iData) = 0;

/**
 * Returns temporary data associated to the object.
 * @param oData
 *   The opaque temporary data. After use, a Release() must be made.
 * @return
 *   An HRESULT value.
 *   <br><b> Legal values</b>:
 *   <li><tt>S_OK</tt> the operation succeeded </li>
 *   <li><tt>E_FAIL</tt> otherwise </li>.
 */
    virtual HRESULT GetData(CATBaseUnknown **oData) = 0;

/**
 * Reset and release all temporary data (integer and opaque).
 * @return
 *   An HRESULT value.
 *   <br><b> Legal values</b>:
 *   <li><tt>S_OK</tt> the operation succeeded </li>
 *   <li><tt>E_FAIL</tt> otherwise </li>.
 */
    virtual HRESULT ReleaseData() = 0;
};

/** @nodoc */
CATDeclareHandler(CATIRdgBase,CATBaseUnknown);

#endif
