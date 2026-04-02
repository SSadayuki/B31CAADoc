#ifndef CATITPSRoughness_H
#define CATITPSRoughness_H

// COPYRIGHT DASSAULT SYSTEMES 1999

/**
 * @CAA2Level L1
 * @CAA2Usage U3
 */

#include "IUnknown.h"
#include "CATTPSRoughnessObtention.h"
#include "CATTPSRoughnessApplyTo.h"

extern "C" const IID IID_CATITPSRoughness;

/**
 * Interface to manage Roughness TPS.
 * TPS for Technological Product Specifications.
 *   @see CATTPSRoughnessObtention
 *   @see CATTPSRoughnessApplyTo
 */
class CATITPSRoughness : public IUnknown
{
  public:

    /**
     * Sets roughness obtention mode.
     */
    virtual HRESULT SetObtention
                               (const CATTPSRoughnessObtention iObtention) = 0;

    /**
     * Retrieves roughness obtention mode.
     */
    virtual HRESULT GetObtention
                              (CATTPSRoughnessObtention* oObtention) const = 0;

    /**
     * Sets roughness applicability.
     */
    virtual HRESULT SetApplicability
                             (const CATTPSRoughnessApplyTo iApplicability) = 0;

    /**
     * Retrieves roughness applicability.
     */
    virtual HRESULT GetApplicability 
                           (CATTPSRoughnessApplyTo * oApplicability) const = 0;

    /**
     * Sets roughness field.
     * <pre>
     * <r>                                     Field 4
     * <r>                     Field 1     ------------------
     * <r>                                /         (Field 9)
     * <r>                     Field 2   /
     * <r>                              / (Field 8)  Field 5
     * <r>                         \   /
     * <r>               Field 3    \ /    Field 7   Field 6
     * <r>
     * <r> Pour le champs 7 les lettres autorisees sont :
     * <r> M, C, R, P, X, = ,L (symbole perpendicularite de la DSES)
     * </pre>
     *   @param iIndex
     *     Field index, from 1 to 9 from V5R13 (Fields 8 and 9 added).
     *                  from 1 to 7 before V5R13
     */
    virtual HRESULT SetField (const int iIndex, const wchar_t * iField) = 0;

    /**
     * Retrieves roughness field.
     *   @param iIndex
     *     Field index, from 1 to 9 from V5R13 (Fields 8 and 9 added).
     *                  from 1 to 7 before V5R13
     */
    virtual HRESULT GetField (const int iIndex, wchar_t ** oField) const = 0;

};
#endif

