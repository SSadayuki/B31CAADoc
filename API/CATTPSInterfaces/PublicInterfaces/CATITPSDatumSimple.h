#ifndef CATITPSDatumSimple_H
#define CATITPSDatumSimple_H

// COPYRIGHT DASSAULT SYSTEMES 1999 - 2018

/**
 * @CAA2Level L1
 * @CAA2Usage U3
 */

#include "IUnknown.h"

class CATITPSDatumTarget;
class CATITPSList;
class CATITTRS;
class CATITTRS_var;
class CATListValCATBaseUnknown_var;

extern "C" const IID IID_CATITPSDatumSimple;

/**
 * Interface for Simple Datum TPS (datum entity).
 * TPS for Technological Product Specifications.
 */
class CATITPSDatumSimple : public IUnknown
{
  public:

    /**
     * Sets Label.
     */
    virtual HRESULT SetLabel (const wchar_t * iLabel) = 0;

    /**
     * Retrieves Label.
     */
    virtual HRESULT GetLabel (wchar_t ** oLabel) const = 0;

    /**
     * Sets Targets that compose this Datum Simple.
     * All objects of the list must adhere to CATITPSDatumTarget.
     */
    virtual HRESULT SetTargets (const CATITPSList * iTargets) = 0;

    /**
     * Retrieves a CATITPSList to read the list of datum target.
     * All objects of the list adhere to CATITPSDatumTarget.
     *   @param oTargets [out, CATITPSList#Release]
     *     The Target list.
     */
    virtual HRESULT GetTargets (CATITPSList ** oTargets) const = 0;

    /**
     * Specfify a Direction Plane for the Datum.
     */
    virtual HRESULT SetDatumDirectionPlane (CATITTRS * ipiTTRS) = 0;

    /**
     * Retrieves the Direction Plane for the Datum.
     * Only if one was specified.
     *   @param opiTTRS [out, CATITTRS#Release]
     *     The Datum Direction Plane TTRS.
     */
    virtual HRESULT GetDatumDirectionPlane (CATITTRS ** opiTTRS) const = 0;

    /**
     * Sets the contacting feature value on the feature.
     *  @param ibContactingFeature
     *   Contacting feature Value to be set.
     *  returns S_OK when the contacting feature value has been correctly set, 
     *  returns E_FAIL otherwise.
     */
    virtual HRESULT SetContactingFeature (const CATBoolean &ibContactingFeature) = 0;

    /**
     * Retrieves the contacting feature value on the feature.
     *  @param obContactingFeature
     *   Contacting feature Value to be retrieved.
     *  returns S_OK when the contacting feature value has been correctly retrieved, 
     *  returns E_FAIL otherwise.
     */
    virtual HRESULT GetContactingFeature (CATBoolean &obContactingFeature) const = 0;

    /**
     * Sets the contacting feature TTRS.
     *  @param ispTTRS
     *   Contacting Feature TTRS to be set.
     *  returns S_OK when the contacting feature TTRS has been correctly set, 
     *  returns E_FAIL otherwise.
     */
    virtual HRESULT SetContactingFeatureTTRS (const CATITTRS_var &ispTTRS) = 0;

    /**
     * Retrieves the contacting feature TTRS on the feature.
     *  @param ospTTRS
     *   Contacting feature TTRS to be retrieved.
     *  returns S_OK when the contacting feature TTRS has been correctly retrieved, 
     *  returns E_FAIL otherwise.
     */
    virtual HRESULT GetContactingFeatureTTRS (CATITTRS_var &ospTTRS) const = 0;

    /**
     * Sets the Theoretically Exact Size value.
     *  @param ibTheoreticallyExactSizeFeature
     *   Theoretically Exact Size value to be set.
     *  returns S_OK when the Theoretically Exact Size value has been correctly set, 
     *  returns E_FAIL otherwise.
     */
    virtual HRESULT SetTheoreticallyExactSizeFeature (const CATBoolean &ibTheoreticallyExactSizeFeature) = 0;

    /**
     * Retrieves the Theoretically Exact Size value on the feature.
     *  @param obTheoreticallyExactSizeFeature
     *   Theoretically Exact Size Value to be retrieved.
     *  returns S_OK when the Theoretically Exact Size value has been correctly retrieved, 
     *  returns E_FAIL otherwise.
     */
    virtual HRESULT GetTheoreticallyExactSizeFeature (CATBoolean &obTheoreticallyExactSizeFeature) const = 0;

    /**
     * Sets the Theoretically Exact Size Torus value.
     *  @param ibTheoreticallyExactSizeFeature
     *   Theoretically Exact Size Torus value to be set.
     *  returns S_OK when the Theoretically Exact Size Torus value has been correctly set, 
     *  returns E_FAIL otherwise.
     */
    virtual HRESULT SetTheoreticallyExactSizeTorusFeature (const CATBoolean &ibTheoreticallyExactSizeFeature) = 0;

    /**
     * Retrieves the Theoretically Exact Size Torus value on the feature.
     *  @param obTheoreticallyExactSizeFeature
     *   Theoretically Exact Size Torus Value to be retrieved.
     *  returns S_OK when the Theoretically Exact Size Torus value has been correctly retrieved, 
     *  returns E_FAIL otherwise.
     */
    virtual HRESULT GetTheoreticallyExactSizeTorusFeature (CATBoolean &obTheoreticallyExactSizeFeature) const = 0;
};
#endif
