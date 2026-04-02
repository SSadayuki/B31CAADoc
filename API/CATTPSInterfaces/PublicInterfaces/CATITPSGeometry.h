#ifndef CATITPSGeometry_H
#define CATITPSGeometry_H

// COPYRIGHT DASSAULT SYSTEMES 2002

/**
 * @CAA2Level L1
 * @CAA2Usage U3
 */

#include "IUnknown.h"
#include "CATTPSStatus.h"
#include "CATTPSCGType.h"

class CATITTRSList;
class CATITPSSet;

extern "C" const IID IID_CATITPSGeometry;

/**
 * Interface dedicated to CG features.
 * @see CATITTRSList
 * @see CATITPSSet
 * @see CATTPSStatus
 */
class CATITPSGeometry : public IUnknown
{
  public:

    /**
     * Retrieves a CATITTRSList to read a list of features
     * upon which is applied the current object.
     *
     * Result of this call will mostly be a singleton, but it can
     * also happen situations where the list size is higher than 1;
     * this way, we have defined a specification related to
     * several surfaces (regarless the order in which the surfaces
     * are stored)
     */
    virtual HRESULT GetTTRS (CATITTRSList ** opiTTRS) const = 0;

    /**
     * Retrieves a CATITTRSList to read a list of features
     * upon which is applied the current object.
     *
     * As GetTTRS, this call will be the represented TTRS as far as a
     * represented link was defined
     */
    virtual HRESULT GetRepresentedTTRS (
                             CATITTRSList ** opiRepresentedTTRSList) const = 0;

    /**
     * Gets Semantic status.
     *   @param oStatus
     *     The CG status.
     */
    virtual HRESULT GetStatus (CATTPSStatus * oStatus) = 0;

    /**
     * Gets constructed geometry type used on creation.
     *   @param oType
     *     The CG creation type.
     */
    virtual HRESULT GetGeomType (CATTPSCGType * oType) = 0;

    /**
     * Retrieves tolerancing set the geometry belongs too.
     */
    virtual HRESULT GetSet (CATITPSSet ** oSet) const = 0;

    /**
    * Sets the Represented TTRS list associated to the object.
    * @param ipiRepresentedTTRSList
    *    List of Represented TTRS
    * If the new surfaces set are not compliant with the type of the CG, it will be KO after reroute.
    * Restriction for CGs Thread: the SetRepresentedTTRS method is not sufficient to reroute them.
    */
    virtual HRESULT SetRepresentedTTRS(const CATITTRSList * ipiRepresentedTTRSList) = 0;
};
#endif
