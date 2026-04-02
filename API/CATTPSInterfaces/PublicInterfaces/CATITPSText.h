#ifndef CATITPSText_H
#define CATITPSText_H

// COPYRIGHT DASSAULT SYSTEMES 1999

/**
 * @CAA2Level L1
 * @CAA2Usage U3
 */

#include "IUnknown.h"
#include "CATBoolean.h"

extern "C" const IID IID_CATITPSText;

/**
 * Interface for the TPS Text object.
 */
class CATITPSText: public IUnknown
{
  public:

    /**
     * Sets text.
     */
    virtual HRESULT SetText (const wchar_t * iText) = 0;

    /**
     * Retrieves text.
     */
    virtual HRESULT GetText (wchar_t ** oText) const = 0;

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

};
#endif
