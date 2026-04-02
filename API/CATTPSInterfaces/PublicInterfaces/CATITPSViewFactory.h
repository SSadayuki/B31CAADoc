#ifndef CATITPSViewFactory_H
#define CATITPSViewFactory_H

// COPYRIGHT DASSAULT SYSTEMES 2000

/**
 * @CAA2Level L1
 * @CAA2Usage U3
 */

#include "IUnknown.h"
#include "CATDftViewType.h"
#include "CATTPSExtractionViewType.h"

class CATITPSView;
class CATITPSExtractionView;
class CATMathPlane;
class CATMathTransformation;
class CATITTRSList;

enum CATTPSViewAssociativity
{
	CATTPSViewAssocAsSetting,
	CATTPSViewForceAssociative,
	CATTPSViewForceNonAssociative
};

extern "C" const IID IID_CATITPSViewFactory;

/**
 * Interface for the TPS Factory of View. This factory is implemented on the
 * Set object. All the created TPSViews belongs to the Set from which this 
 * interface is retrieved.
 */
class CATITPSViewFactory : public IUnknown
{
  public:

    /**
     * Create a new TPS View in the set. The associated drafting view is
     * simultaneously created.
     *   @param oView
     *      The new created TPSView.
     *   @param iViewPlane
     *      The reference plane in 3D for the created view.
     *   @param iViewType
     *      Type of view to be created. Allowed types are FrontView, SectionView
     *      and SectionCutView. If any other type is provided the view will not
     *      be created.
     *   @param ipiTTRSList
     *      calculated by method if NULL. Internal use only.
     *      The TTRS referencing the selected plane (for update purposes).
     *   @param ipViewTransf
     *      The transformation between the TTRS Local axis (X,Y) and the view plane
     *   @param iAssocAtCreation
     *      This parameter allows the creation of a view with or without associativity
     *      to the geometry. It overruns the dedicated setting in tools/options.
     *   @param piTPSMotherView
     *      The mother view to create a projected view (left, right, top, bottom, rear)
     *   @param iZFromMotherView
     *      The distance between mother view origin and created projected view origin
     */
    virtual HRESULT CreateView (CATITPSView       ** oTPSView,
                                const CATMathPlane * iViewPlane,
                                const CATDftViewType iViewType,
                                const CATITTRSList * ipiTTRSList = NULL,
                                const CATMathTransformation * ipViewTransf = NULL,
                                const CATTPSViewAssociativity iAssocAtCreation =
                                                CATTPSViewAssocAsSetting,
                                const CATITPSView * ipiTPSMotherView = NULL,
                                double iZFromMotherView = 0.0) = 0;


    /**
     * @nodoc
     * Create a new extraction View in the set. The associated drafting view will
     * be created only at the extraction..
     *   @param opiTPSExtractionView
     *      The new created TPSExtractionView.
     */
    virtual HRESULT CreateExtractionView (
                              CATITPSExtractionView ** opiTPSExtractionView ,
                              const CATTPSExtractionViewType iViewType) = 0;

};
#endif
