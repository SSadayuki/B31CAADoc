#ifndef CATITPSServicesContainers_H
#define CATITPSServicesContainers_H

// COPYRIGHT DASSAULT SYSTEMES 2001

/**
 * @CAA2Level L1
 * @CAA2Usage U3
 */

#include "IUnknown.h"
#include "CATBooleanDef.h"
#include "CATTPSSetObtentionMode.h"

class CATUnicodeString;
class CATIProduct;
class CATITPSSet;
class CATFrmEditor;
class CATPathElement;

extern "C" const IID IID_CATITPSServicesContainers;

/**
 * Interfaces dedicated to retreieve or create Tolerancing container 
 * and Tolerancing Set.
 */
class CATITPSServicesContainers: public IUnknown
{
  public:

    /**
     * Retrieves the Reference Product.
     *   @param opiRefProduct [out, CATIProduct#Release]
     *     Return Reference Product.
     *   @param ipEditor
     *     The editor of the command, if not provided it is retrieved
     *     from the current active document.
     */
    virtual HRESULT GetReferenceProductContext(
                                           CATIProduct ** opiRefProduct,
                                           CATFrmEditor * ipEditor = NULL) = 0;

    /**
     * Check that the reference product is included in a path element.
     *   @param ipPath
     *     The context path.
     *   @param iopiRefProduct
     *     The reference product already computed (can be NULL).
     *     If the reference product is NULL or not in path a new one
     *     will be computed.
     *   @param obRetrievedFromPath
     *     If TRUE indicate that the reference product has been retrieved 
     *     from Path.
     *   @param opUIActivePath
     *     The UI Active Path that must be provided to the TTRS agent
     *     when the reference product is retrieved from path.
     */
    virtual HRESULT CheckReferenceProductInPath (
                                         CATPathElement * ipPath,
                                         CATIProduct ** iopiRefProduct,
                                         CATBoolean * obRetrievedFromPath,
                                         CATPathElement ** opUIActivePath) = 0;
    /**
     * Retrieves or creates a TPSSet.
     * <br><b>Precondition 1</b>: This method manage only TPSSet not ResultSet.
     *     To get ResultSet see method @href CATITPSDocument::GetSets
     * <br><b>Precondition 2</b>: Only one TPSSet can be present into a document.
     *   @param iProduct
     *     Defines the search/creation context. It must be a reference product.
     *     The method returns E_FAIL if it is an instance product.
     *   @param iMode
     *     Defines the obtention mode.
     *     CreateIfMissing : search a TPSSet in context, if nothing found create a new one.
     *     NoCreation : search a TPSSet in context, if nothing found output value *opiSet is NULL.
     *   @param opiSet
     *     TPS set retrieved or created.
     *   @param oCreation
     *     TRUE if set has just been created.
     *     FALSE if set has been retrieved.
     */
    virtual HRESULT RetrieveOrCreateCurrentTPSSet (
                                            const CATIProduct* ipiProduct,
                                            const CATTPSSetObtentionMode iMode, 
                                            CATITPSSet ** opiSet,
                                            CATBoolean * oCreation = NULL) = 0;

};

#endif
