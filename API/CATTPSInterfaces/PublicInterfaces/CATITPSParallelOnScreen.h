#ifndef CATITPSParallelOnScreen_H
#define CATITPSParallelOnScreen_H

// COPYRIGHT Dassault Systemes 2005

/**
 * @CAA2Level L1
 * @CAA2Usage U3
 */

#include "IUnknown.h"
#include "CATBooleanDef.h"

extern "C" const IID IID_CATITPSParallelOnScreen ;

/**
 * Interface dedicated to change display propeties on 3D annotations
 *  => Parallel on screen
 *  => If the 3D annotation is parallel, the capability to be zoomable
 */
class CATITPSParallelOnScreen: public IUnknown
{
  public:

    /**
     * Set the text parallel (or not) on screen.
     *   @param ibParallel
     *          TRUE  if the text must become parallel on screen.
     *          FALSE if the text must become not parallel on screen.
     */
    virtual HRESULT SetParallelOnScreen (CATBoolean ibParallel) = 0;

    /**
     * Is the text parallel on screen.
     *   @param obParallel
     *          TRUE  if the text is parallel on screen.
     *          FALSE if the text is not parallel on screen.
     */
    virtual HRESULT GetParallelOnScreen (CATBoolean * obParallel) const = 0;

    /**
     * Set the text parallel (or not) zoomable.
     * If the text is zoomable, it can't save in CGR and WRML.
     *   @param ibZoomable
     *          TRUE  if the text must become zoomable default value.
     *          FALSE if the text must become not zoomable.
     */
    virtual HRESULT SetZoomable (CATBoolean ibZoomable = TRUE ) = 0;

    /**
     * Is the text zoomable.
     *   @param obZoomable
     *          TRUE  if the text is zoomable.
     *          FALSE if the text is not zoomable.
     */
    virtual HRESULT GetZoomable (CATBoolean * obZoomable) const = 0;

};
#endif
