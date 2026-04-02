#ifndef CATITPSDatumSystem_H
#define CATITPSDatumSystem_H

// COPYRIGHT DASSAULT SYSTEMES 1999

/**
 * @CAA2Level L1
 * @CAA2Usage U3
 */

#include "IUnknown.h"
#include "CATTPSDatumOrderInFrame.h"
#include "CATTPSDatumCompRule.h"

class CATITPSList;
class CATITPSDatumSimple;
class CATITPSDatumSystem;

extern "C" const IID IID_CATITPSDatumSystem;

/**
 * Interface for Datum Reference Frame TPS (Composite datum entity).
 * TPS for Technological Product Specifications.
 *   @see CATTPSDatumCompRule, CATTPSDatumOrderInFrame
 */
class CATITPSDatumSystem : public IUnknown
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
     * Retrieves composition rule of the datum system.
     *   @param oRule
     *     Rule between primary and secondary.
     */
    virtual HRESULT GetCompositionRule (CATTPSDatumCompRule * oRule) const = 0;

    /**
     * Retrieves the list of datums (simple or system) which are composed 
     * to create the datum system.
     * All objects of the collection adhere to CATITPSDatumSimple or 
     * CATITPSDatumSystem
     */
    virtual HRESULT GetComposedDatums (CATITPSList ** oDatums) const = 0;

    /**
     * Retrieves the list of datums simple which appears in the datum system
     * All objects of the list adhere to CATITPSDatumSimple.
     */
    virtual HRESULT GetDatumsSimple (CATITPSList ** oDatums) const = 0;

    /**
     * Query for a simple datum its position in the reference frame
     * (Primary, Secondary, Tertiary).
     */
    virtual HRESULT GetOrderOfPrecedence (
                                const CATITPSDatumSimple * iDatum,
                                CATTPSDatumOrderInFrame * oOrder) const = 0;

    /**
     * Query for a datum system its position in the reference frame.
     */
    virtual HRESULT GetOrderOfPrecedence (
                                const CATITPSDatumSystem * iDatum,
                                CATTPSDatumOrderInFrame * oOrder) const = 0;

};
#endif

