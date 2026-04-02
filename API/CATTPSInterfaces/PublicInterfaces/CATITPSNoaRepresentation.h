#ifndef CATITPSNoaRepresentation_H
#define CATITPSNoaRepresentation_H

// COPYRIGHT DASSAULT SYSTEMES 2001

/**
 * @CAA2Level L1
 * @CAA2Usage U3
 */

#include "IUnknown.h"
#include "CATTPSNoaRepType.h"
#include "CATBooleanDef.h"

class CATI2DDitto;

extern "C" const IID IID_CATITPSNoaRepresentation;

/**
 * Interface to manage the graphical representation of TPS Noa object.
 */
class CATITPSNoaRepresentation: public IUnknown
{
  public:
    /**
     * @nodoc
     * Sets Representation Type of Noa.
     *  @param iNoaRep
     *   Noa graphical representation type (Text or Ditto).
     */
    virtual HRESULT SetNoaRep (CATTPSNoaRepType iNoaRep) = 0;

    /**
     * Retrieves Representation of Noa.
     *  @param oNoaRep
     *   Noa graphical representation type (Text or Ditto).
     */
    virtual HRESULT GetNoaRep (CATTPSNoaRepType *oNoaRep) const = 0;

    /**
     * @nodoc
     * Sets the Ditto used for Noa representation.
     */
    virtual HRESULT SetDitto (const CATI2DDitto *ipiDitto) = 0;

    /**
     * Retrieves the Ditto used for Noa representation.
     *  @param opiDitto
     *   The Ditto use for Noa representation.
     */

    virtual HRESULT GetDitto (CATI2DDitto **opiDitto) const = 0;

    /**
     * @nodoc 
     * Specifies if the Noa has a special representation:
     * Assoc Orient and Pos on geometry, puts ditto origin at the 
     * middle of Noa rep
     *  @param ipiAssoc
     *   <br><b>Legal values</b>: <tt>TRUE</tt> if Noa has a special
     *   representation, or <tt>FALSE</tt> otherwise.
     */
    virtual HRESULT SetNoaDittoAssoc (const CATBoolean ibAssoc) = 0;

    /**
     * Tells if the Noa has a special representation:
     * Assoc Orient and Pos on geometry, puts ditto origin at the 
     * middle of Noa rep
     *  @param opiAssoc
     *   <br><b>Legal values</b>: <tt>TRUE</tt> if Noa has a special
     *   representation, or <tt>FALSE</tt> otherwise.
     */
    virtual HRESULT GetNoaDittoAssoc (CATBoolean * obAssoc) const = 0;

};
#endif
