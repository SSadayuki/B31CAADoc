#ifndef CATITPSDimensionLimits_H
#define CATITPSDimensionLimits_H

// COPYRIGHT DASSAULT SYSTEMES 1999

/**
 * @CAA2Level L1
 * @CAA2Usage U3
 */

#include "IUnknown.h"
#include "CATTPSSingleLimit.h"
#include "CATTPSDimLimType.h"
#include "CATBooleanDef.h"

class CATUnicodeString;

extern "C" const IID IID_CATITPSDimensionLimits;

/**
 * Interface for accessing limits of tolerances dimension TPS.
 *   @see CATTPSSingleLimit
 */
class  CATITPSDimensionLimits : public IUnknown
{
  public:

    /**
     * Valuate dimension limit type.
     *  @param iType
     *     @see CATTPSDimLimType
     */
    virtual HRESULT SetDimensionLimitType (CATTPSDimLimType iType) = 0;

    /**
     * Retrieves dimension limit type.
     *  @param oType
     *     @see CATTPSDimLimType
     */
    virtual HRESULT GetDimensionLimitType (CATTPSDimLimType * oType) = 0;

    /**
     * Sets limits (in millimeters).
     * <tt>iBottom</tt> must be less than <tt>iUp</tt>.
     * Reset single limit modifier.
     */
    virtual HRESULT SetLimits (const double iBottom, const double iUp) = 0;

    /**
     * Retrieves limits (in millimeters).
     * Returned HR must be test because if single limit modifier is set,
     * limits are invalids. 
     */
    virtual HRESULT GetLimits (double* oBottom, double* oUp) const = 0;

    /**
     * Sets single limit modifier.
     */
    virtual HRESULT SetModifier (const CATTPSSingleLimit iModifier) = 0;

    /**
     * Retrieves single limit modifier.
     */
    virtual HRESULT GetModifier (CATTPSSingleLimit * oModifier) const = 0;

    /**
     * Valuate tabulated limit as string.
     */
    virtual HRESULT SetTabulatedLimit (
                                 wchar_t * ipTabulatedValueAsString) = 0;

    /**
     * Retrieves tabulated limit as string.
     */
    virtual HRESULT GetTabulatedLimit (
                                 wchar_t** opTabulatedValueAsString) const = 0;

    /**
     * Retrieves nominal value (in millimeters).
     */
    virtual HRESULT GetNominalValue (double* oValue) const = 0;

    /**
     * Valuate Symetric value.
     *  @param ibSymetric
     *     TRUE if it is symetric
     */
    virtual HRESULT SetSymetricValue (CATBoolean ibSymetric) = 0;

    /**
     * Retrieves Symetric value.
     *  @param obSymetric
     *     TRUE if it is symetric
     */
    virtual HRESULT GetSymetricValue (CATBoolean * obSymetric) const = 0;

    /**
     * Sets single limit value (in millimeters).
     */
    virtual HRESULT SetSingleLimit (const double iValue) = 0;

    /**
     * Retrieves single limit value (in millimeters).
     */
    virtual HRESULT GetSingleLimit (double * oValue) const = 0;

    /**
     * Retrieves the general tolerance name.
     *   @param oTolName
     *     The name of the general tolerance
     *   @return
     *     S_OK : the general tolerance is retrieved. 
     *     E_FAIL : There is no general tolerance on the dimension.
     */
    virtual HRESULT GetGeneralTolName (CATUnicodeString * oTolName) const = 0;


};
#endif
