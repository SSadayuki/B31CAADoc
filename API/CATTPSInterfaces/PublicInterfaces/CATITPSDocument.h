#ifndef CATITPSDocument_H
#define CATITPSDocument_H

// COPYRIGHT DASSAULT SYSTEMES 1999

/**
 * @CAA2Level L1
 * @CAA2Usage U3
 */

#include "IUnknown.h"
#include "CATTPSSetScanMode.h"
#include "CATBoolean.h"

class CATITPSList;
class CATITPSSet;
class CATIContainer;

extern "C" const IID IID_CATITPSDocument;

/**
 * Interface implemented by documents that can contains tolerancing 
 * informations. It allows to access tolerancing sets included in document.
 */
class CATITPSDocument : public IUnknown
{
  public:

    /**
     * Retrieves tolerancing sets included in the document.
     *   @param iopiSets
     *     Tolerancing sets included in the document are added
     *     to the list. If the list does not exist it will be created.
     *     All objects of the list adhere to CATITPSSet.
     *   @param iMode
     *     Defines the search mode used.
     *     If CATTPSSSMLocal only the sets directly included are retrieved.
     *     If CATTPSSSMRecursive a recursive search is performed. The 
     *     document retrieve included documents and ask them to add
     *     their sets to the list.
     */
    virtual HRESULT GetSets (CATITPSList ** iopiSets,
                                           const CATTPSSetScanMode iMode = CATTPSSSMRecursive,
                                           const CATBoolean            ibLightMdlLoad = FALSE) const = 0;

    /**
     * Retrieves the container in which the tolerancing feature are
     * gathered for a specific document.
     * The retrieved pointer can be NULL if the document contains no
     * tolerancing container (and then no TPS features).
     * In that case method returns E_FAIL.
     */
    virtual HRESULT GetTolerancingContainer (
                                        CATIContainer ** opiTPSCont) const = 0;

    /**
     * Retrieves all tolerancing bags included in the document.
     * All objects of the list adhere to CATITPSBag.
     */
    virtual HRESULT GetBags (CATITPSList ** iopiBags) const = 0;
};
#endif
