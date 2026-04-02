#ifndef CATIDrwDimExtensionLineCircular_H
#define CATIDrwDimExtensionLineCircular_H
// COPYRIGHT DASSAULT SYSTEMES 1999

/**
 * @CAA2Level L1
 * @CAA2Usage U3
 */

#include "CATBaseUnknown.h"
#include "DraftingItfCPP.h"

#ifndef LOCAL_DEFINITION_FOR_IID
extern ExportedByDraftingItfCPP IID IID_CATIDrwDimExtensionLineCircular ;
#else
extern "C" const IID IID_CATIDrwDimExtensionLineCircular ;
#endif

/**
 * Manages the dimension circular extension line.
 */

class ExportedByDraftingItfCPP CATIDrwDimExtensionLineCircular : public CATBaseUnknown
{
  CATDeclareInterface;

   public:

    /**
     * @nodoc
     * Gets display mode.
     *   @return
     *    Display mode.
     */
     virtual int GetDisplayMode() const = 0;

    /**
     * @nodoc
     * Sets display mode.
     *   @param i
     *    Display mode.
     */
     virtual void SetDisplayMode(const int i) = 0;

};
CATDeclareHandler(CATIDrwDimExtensionLineCircular, CATBaseUnknown);
#endif


