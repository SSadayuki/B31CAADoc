#ifndef CATIRdgBag_h
#define CATIRdgBag_h

// COPYRIGHT DASSAULT SYSTEMES 2003

/**
 * @CAA2Level L0
 * @CAA2Usage U3
 */

#include "CATRdgItfCPP.h"
#include "CATIRdgObject.h"
#include "sequence_CATBaseUnknown_ptr.h"


#ifndef LOCAL_DEFINITION_FOR_IID
extern ExportedByCATRdgItfCPP IID IID_CATIRdgBag;
#else
extern "C" const IID IID_CATIRdgBag;
#endif

/** 
 * Interface for scene bag objects.
 * <b>Role</b>:
 * This is the interface that every product and CAT3DBagRep implements.
 * It is used to access the data needed for rendering.
 */

class ExportedByCATRdgItfCPP CATIRdgBag : public CATIRdgObject
{
/** @nodoc */
  CATDeclareInterface;

  public:

/**
 * Returns the transformation matrix.
 * @param oTransfo
 *   The matrix. The coefficients are given COLUMN by COLUMN.
 * @return
 *   An HRESULT value.
 *   <br><b> Legal values</b>:
 *   <li><tt>S_OK</tt> the operation succeeded </li>
 *   <li><tt>E_FAIL</tt> otherwise </li>.
 */
    virtual HRESULT GetTransfo(double oTransfo[12]) = 0;

/**
 * Returns the children list.
 * @param oChildren
 *   The children. After use, a Release() must be made 
 *   on each element and the list must be deleted.
 * @return
 *   An HRESULT value.
 *   <br><b> Legal values</b>:
 *   <li><tt>S_OK</tt> the operation succeeded </li>
 *   <li><tt>E_FAIL</tt> otherwise </li>.
 */
    virtual HRESULT GetChildren(CATLISTP(CATBaseUnknown) **oChildren) = 0;
};

/** @nodoc */
CATDeclareHandler(CATIRdgBag,CATIRdgObject);

#endif
