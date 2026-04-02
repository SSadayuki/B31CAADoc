#ifndef CATITPSDrawable_H
#define CATITPSDrawable_H

// COPYRIGHT DASSAULT SYSTEMES 1999

/**
 * @CAA2Level L1
 * @CAA2Usage U3
 */

#include "IUnknown.h"

class CATMathPlane;
class CATIDftAnnotation;
class CATIDftView;
class CATITPSView;

extern "C" const IID IID_CATITPSDrawable;

/**
 * Interface designed to manage the representation of the TPS in the 3D
 * relatively to the drafting View where its annotation is defined.
 * Manage also the link between a TPS and it's Drafting Annotation.
 */
class CATITPSDrawable : public IUnknown
{
  public:

    /**
     * @nodoc
     * Sets annotation offset (Z) from drafting view.
     *   @param iZ
     *     The offset of the TPS.
     */
    virtual HRESULT SetZ (const double iZ) = 0;

    /**
     * Retrieves annotation offset (Z) from drafting view.
     *   @param oZ
     *     The offset of the TPS.
     *   @return
     *      S_OK if succeded
     *      E_FAIL if Z is not valuated.
     */
    virtual HRESULT GetZ (double * oZ) const = 0;

    /**
     * @nodoc
     * Sets drafting annotation for the specification.
     *   @param ipiAnnotation
     *     The Drafting Annotation of the TPS.
     *   @return
     *      S_OK if succeded
     *      E_FAIL if ipiAnnotation is not setted.
     */
    virtual HRESULT SetAnnotation (const CATIDftAnnotation * ipiAnnotation) = 0;

    /**
     * Retrieves Drafting Annotation for the Specification.
     *   @param opiAnnotation
     *     The Drafting Annotation of the TPS.
     *   @return
     *      S_OK if succeded
     *      E_FAIL if opiAnnotation is not valuated.
     */
    virtual HRESULT GetAnnotation (CATIDftAnnotation ** opiAnnotation) const = 0;

    /**
     * @nodoc
     * Retrieves the TPS view that contains this CATITPSDrawable item.
     */
    virtual HRESULT GetView (CATITPSView ** oTPSView) const = 0;

    /**
     * @nodoc
     * Retrieves the drafting view that contains the drafting annotations of 
     * this.
     */
    virtual HRESULT GetDraftingView (CATIDftView ** oDftView) const = 0;

    /**
     * Retrieves Annotation Plane on which this CATITPSDrawable item
     * lies on (The Plane of the annotation).
     *   @param oPlane
     *     The offset of the TPS.
     *   @return
     *      S_OK if succeded (oPlane must be deleted after use)
     *      E_FAIL if oPlane is not valuated.
     */
    virtual HRESULT GetAnnotationPlane (CATMathPlane ** oPlane) const = 0;

};
#endif
