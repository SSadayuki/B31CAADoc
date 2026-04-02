#ifndef CATITPSLinearDimension_H
#define CATITPSLinearDimension_H

// COPYRIGHT DASSAULT SYSTEMES 1999

/**
 * @CAA2Level L1
 * @CAA2Usage U3
 */

#include "IUnknown.h"
#include "CATTPSLinearDimensionSubType.h"

extern "C" const IID IID_CATITPSLinearDimension;

/**
 * Interface to linear dimension tolerance.
 * <b>Role</b>: Objects that implement this typing interface are linear
 * dimension tolerances. This type belongs to the dimension super type.
 * <p>
 * The linear dimension represents the distance between two opposed elements,
 * computed along a line. It defines the 't' range in which the dimension value
 * will be located.
 * <p>
 * Normative reference: ISO 406, ISO 8015 and ASME Y14.5M section 1.8.
 */

class CATITPSLinearDimension : public IUnknown
{
  public:

    /**
     * Retrieves the subtype of the linear dimension.
     */
    virtual HRESULT GetLinearDimSubType (
                            CATTPSLinearDimensionSubType * oSubType) const = 0;

};
#endif

