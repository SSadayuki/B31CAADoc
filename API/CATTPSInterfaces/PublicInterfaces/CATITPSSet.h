#ifndef CATITPSSet_H
#define CATITPSSet_H

// COPYRIGHT DASSAULT SYSTEMES 1999 - 2018

/**
 * @CAA2Level L1
 * @CAA2Usage U3
 */

#include "IUnknown.h"
#include "CATBoolean.h"
#include "CATUnicodeString.h"
#include "CATTPSSpecificationType.h"

class CATITPSList;
class CATITTRSList;
class CATITPSView;
class CATITPSViewList;
class CATITPSCaptureList;
class CATIProduct;
class CATITPSGeometryList;
class CATIMmiUsePrtPart;
class CATMathTransformation;

extern "C" const IID IID_CATITPSSet;

/**
 * Interface for the TPS Set of objects.
 */
class CATITPSSet : public IUnknown
{
  public:

    /**
    * Checks if Set can be authored. 
    * @return
    *     TRUE is signifying that Set can be modified according to edition grants.
    *     FALSE is sent when Set is a result FTA model used in light forms
    *     review (visualization mode, cgr, 3DXml, catback, step, ...); thus,
    *     Setxxx methods are logicaly failing when triggered for such a set.
    */
    virtual CATBoolean IsAuthoringSet ( ) const = 0;

    /**
     * Sets the components of the set. 
     * Replace the existing list by the new one.
     *   @param ipiList
     *     New list of component of set.
     */
    virtual HRESULT SetTPSs (const CATITPSList* ipiList) = 0;

    /**
     * Retrieves the TPS components of the set.
     *   @param iopiList [ out, IUnknown#Release ]
     *     List of returned component.
     */
    virtual HRESULT GetTPSs (CATITPSList** iopiList) = 0;

    /**
     * Retrieves the geometrical components of the set.
     *   @param iopiList [ out, IUnknown#Release ]
     *     List of returned component.
     */
    virtual HRESULT GetGeometries (CATITPSGeometryList** iopiList) = 0;

    /**
     * Retrieves the TTRSs involved in the set definition.
     *   @param opiTTRSList [ out, IUnknown#Release ]
     *     List of TTRSs used by this Set of specifications.
     */
    virtual HRESULT GetTTRSs (CATITTRSList ** opiTTRSList) = 0;

    /**
     * Retrieves the Parent Standard defined at set creation.
     *   @param opParentStdName [ out, delete ]
     *     Name of the Parent Standard applied for all TPS in the set.
     *     The Parent Standard is the international standard on which 
     *     Standard File is based on. It can only be ISO, ANSI and JIS.
     *     (ANSI stands for ASME).
     */
    virtual HRESULT GetStandard (wchar_t ** opParentStdName) const = 0;

    /**
     * Retrieves File Name of the standard defined at set creation.
     *   @param opFileStdName [ out, delete ]
     *     Name of the Standard File applied for all TPS in the set.
     *     Standard File can be customised, it is based on a Parent Standard.
     *     Its name is different of ISO, ANSI and JIS.
     */
    virtual HRESULT GetStdName (wchar_t ** opFileStdName) const = 0;

    /**
    * Retrieves the specification property applied on the Set.
    *   @param oSetSpecType [ out ]
    *     Specification type qualifying current annotation set.
    *     By default, any new created set is from TPSEngineeringSet type. 
    */
    virtual HRESULT GetSpecificationType ( CATTPSSpecificationType & oSetSpecType ) const = 0;

    /**
    * Assigns the given specification type onto the Set.
    *   @param iSetSpecType [ in ]
    *     New specification type to consider onto the Set.
    */
    virtual HRESULT SetSpecificationType ( const CATTPSSpecificationType iSetSpecType ) = 0;

    /**
     * Retrieves all the TPSViews that belong to the set.
     *   @param iopiList [ out, IUnknown#Release ]
     *     List of returned views.
     */
    virtual HRESULT GetViews (CATITPSViewList** iopiList) const = 0;

    /**
     * Retrieves the active view in the set. The active view is the view
     * where annotation are created in priority. There is only one active view
     * in a set.
     *   @param opiActiveView [ out, IUnknown#Release ]
     *     Can be NULL when all views in the set have been removed. In that 
     *     case E_FAIL is returned.
     */
    virtual HRESULT GetActiveView (CATITPSView** opiActiveView) const = 0;

    /**
     * Defines the active view in the set.
     *   @param ipiActiveView [ in ]
     *     Must be a view that belongs to the set. If not E_FAIL is returned.
     */
    virtual HRESULT SetActiveView (CATITPSView * ipiActiveView) = 0;
    
    /**
     * Retrieves all the Captures that belong to the set.
     *   @param iopiList [ out, IUnknown#Release ]
     *     List of returned Captures.
     */
    virtual HRESULT GetCaptures (CATITPSCaptureList** iopiList) const = 0;
    
    /**
     * Retrieves the reference product of the set.
     *   @param opiProd [ out, IUnknown#Release ]
     *     Reference product to which this set is associated.
     */
    virtual HRESULT GetReferenceProduct (CATIProduct ** opiProd) const = 0;

    /**
    * Copies the entire or a subpart of a part level Annotation Set into a destination 3DPart.
    *   @param ipiDestinationPart  [ in ]
    *     Destination 3DPart where the annotation set will be copied. 
    *     Destination 3DPart has to be different from the origin 3DPart.
    *   @param oMessage           [ out ]
    *     Result of datums merge. If there is no merge done, the returned message is empty.
    *   @param ipCaptureName      [ in ]
    *     Optional argument. String used to filter FTA features.
    *     The system keeps only the FTA features that belong to the captures FTA that contain the string ipCaptureName. 
    *     If the ipCaptureName is null, the system keeps all the FTA features (it performs a global copy).
    *   @param ipTransfo          [ in ]
    *     Optional argument. Transformation matrix to apply to FTA features during copy.
    *     The transformation is also used for retrieving in the destination 3DPart the geometrical elements the FTA
    *     features are rerouted on.
    *   @param ibReUseView        [ in ]
    *     Optional argument. When set to TRUE triggers the re-use existing view behavior
    *   @param ibAsResultWithLink [ in ]
    *     Optional argument. When set to TRUE activates copy of annotations as result with link behavior
    */
    virtual HRESULT GlobalCopySetTo(CATIMmiUsePrtPart *ipiDestinationPart, CATUnicodeString &oMessage, CATUnicodeString *ipCaptureName = NULL, CATMathTransformation *ipTransfo = NULL, CATBoolean ibReUseView = FALSE, CATBoolean ibAsResultWithLink = FALSE) const = 0;

};
#endif
