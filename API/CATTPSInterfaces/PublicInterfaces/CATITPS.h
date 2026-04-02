#ifndef CATITPS_H
#define CATITPS_H

// COPYRIGHT DASSAULT SYSTEMES 1999

/**
 * @CAA2Level L1
 * @CAA2Usage U3
 */

#include "IUnknown.h"

class CATITTRSList;
class CATITPSSet;

extern "C" const IID IID_CATITPS;

/**
 * Interface for the Technological Product Specification (TPS) objects.
 * Leaf entity in the Design Pattern Composite.
 * TPS modeler enables definition of specification related to surfaces.
 * The link with the topologic/geometric element is defined thanks to TTRS.
 * @see CATITTRS
 */
class CATITPS : public IUnknown
{
  public:

    /**
     * Sets the TTRS list associated to the Specification.
     */
    virtual HRESULT SetTTRS (const CATITTRSList * iTTRS) = 0;

    /**
     * Retrieves a CATITTRSList to read a list of features
     * upon which is applied the current specification.
     *
     * Note that this list may have a null count; in such a case,
     * we have to consider this specification as a TPS applied to
     * the whole part.
     *
     * Result of this call will mostly be a singleton, but it can
     * also happen situations where the list size is higher than 1;
     * this way, we have defined a specification related to
     * several surfaces (regarless the order in which the surfaces
     * are stored)
     */
    virtual HRESULT GetTTRS (CATITTRSList ** oTTRS) const = 0;

    /**
     * Retrieves tolerancing set the TPS belongs too.
     */
    virtual HRESULT GetSet (CATITPSSet ** oSet) const = 0;

};
#endif
