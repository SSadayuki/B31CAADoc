#ifndef CATITPSFactoryTTRS_H
#define CATITPSFactoryTTRS_H

// COPYRIGHT DASSAULT SYSTEMES 2002

/**
 * @CAA2Level L1
 * @CAA2Usage U3
 */

#include "IUnknown.h"
#include "CATITTRS.h"
#include "CATListOfCATString.h"

class CATSO;
class CATIProduct;

extern "C" const IID IID_CATITPSFactoryTTRS ;

/**
 * This interface enables the creation of a TTRS from a selection.
 */
class CATITPSFactoryTTRS: public IUnknown
{
  CATDeclareInterface;

  public:

    /**
     * Retrieves the list of the interfaces to be used in a selection agent
     * to filter geometry on which it is possible to create a TTRS.
     *   @param ioSelectionTypeList 
     *     List of interfaces for filtering geometry. 
     */
    virtual HRESULT ObtainOrderedTypeList (
                              CATListOfCATString & ioSelectionTypeList) = 0;

    /**
     * Creates a TTRS from a geometrical selection.
     *   @param ipSO
     *     Input CATSO groups several pointers CATPathElement*.
     *     These are the pathes of the geometry on which RGE and TTRS
     *     will be created.
     *   @param opiTTRS
     *     Output TTRS created by the method.
     *   @param iCreateMode
     *     Defines the type of TTRS that will be created, node or support.
     *   @param ipiRefProduct
     *     Input reference product under which the TTRS is to be created.
     *     If NULL the TTRS will be created under a reference product that
     *     is retrieved from current editor. UI Active product in product
     *     context or PPRProduct in process context.
     *   @param iDisplayErrorIfFailed
     *     Defines if an Error message panel is displayed in case an error
     *     occurs
     */
    virtual HRESULT GetTTRS (CATSO * ipSO, 
                             CATITTRS ** opiTTRS,
                             CATMmrTTRSType iCreateMode = CATMmrNodeTTRS,
                             CATIProduct * ipiRefProduct = NULL,
                             CATBoolean iDisplayErrorIfFailed = TRUE) = 0;

};
#endif
