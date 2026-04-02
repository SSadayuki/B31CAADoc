#ifndef CATITPSSetVisu_H
#define CATITPSSetVisu_H

// COPYRIGHT Dassault Systemes 2000

/**
 * @CAA2Level L1
 * @CAA2Usage U3
 */

#include "IUnknown.h"
#include "CATBooleanDef.h"

extern "C" const IID IID_CATITPSSetVisu ;

/**
 * Interface dedicated to manage visualization mode ( Show / Hide )
 * of CATTPSSet in both Editor and Browser.
 */
class CATITPSSetVisu : public IUnknown
{
  public:

    /**
     * Gets the visualisation mode.
     */
    virtual HRESULT GetVisualisation (CATBoolean * oVisu) = 0;

    /**
     * Sets the visualisation mode.
     */
    virtual HRESULT SetVisualisation (const CATBoolean iVisu) = 0;

    /**
     * @nodoc
     * Gets the context.
     */
    virtual HRESULT GetBrowserContext (int * oContext) = 0;

    /**
     * @nodoc
     * Sets the context.
     */
    virtual HRESULT SetBrowserContext (const int iContext) = 0;

};
#endif
