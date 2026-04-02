#ifndef CATITPSCompositeTolerance_H
#define CATITPSCompositeTolerance_H

// COPYRIGHT DASSAULT SYSTEMES 1999

/**
 * @CAA2Level L1
 * @CAA2Usage U3
 */

#include "IUnknown.h"

extern "C" const IID IID_CATITPSCompositeTolerance;

/**
 * Interface for accessing composite tolerance on a TPS.
 * (ASME norm only)
 */
class CATITPSCompositeTolerance : public IUnknown
{
  public:

    /**
     * Sets value (in millimeters).
     *  @param iValue
     *    Must be positive or equal to -1 which means not valuated.
     */
    virtual HRESULT SetCompositeValue (const double iValue) = 0;

    /**
     * Retrieves value (in millimeters).
     *  @param oValue
     *    Positive or equal to -1 which means not valuated.
     */
    virtual HRESULT GetCompositeValue (double* oValue) const = 0;

    /**
     * Sets datum count.
     */
    virtual HRESULT SetBoxCount (const unsigned int iBoxCount) = 0;

    /**
     * Retrieves datum count.
     */
    virtual HRESULT GetBoxCount (unsigned int* oBoxCount) const = 0;

    /**
     * Sets value (in millimeters) of the 3rd segment composite tolerance.
     *  @param iValue
     *    Must be positive or equal to -1 which means not valuated.
     */
    virtual HRESULT Set3SegmentCompositeValue (const double iValue) = 0;

    /**
     * Retrieves value (in millimeters) of the 3rd segment composite tolerance.
     *  @param oValue
     *    Positive or equal to -1 which means not valuated.
     */
    virtual HRESULT Get3SegmentCompositeValue (double* oValue) const = 0;

    /**
     * Sets datum count of the 3rd segment composite tolerance.
     */
    virtual HRESULT Set3SegmentBoxCount (const unsigned int inBoxCount) = 0;

    /**
     * Retrieves datum count of the 3rd segment composite tolerance.
     */
    virtual HRESULT Get3SegmentBoxCount (unsigned int* onBoxCount) const = 0;

};
#endif

