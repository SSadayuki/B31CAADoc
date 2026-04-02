#ifndef CATIDrwDimValueComponent_H
#define CATIDrwDimValueComponent_H
// COPYRIGHT DASSAULT SYSTEMES 1999

/**
 * @CAA2Level L1
 * @CAA2Usage U3
 */

#include "CATBaseUnknown.h"
#include "CATIDrwDimDressUp.h"
#include "CATIDrwDimText.h"
#include "CATIDrwDimTolerance.h"
#include "CATIDrwDimFormat.h"

#include "CATDrwDimEnum.h"

#include "DraftingItfCPP.h"
#ifndef LOCAL_DEFINITION_FOR_IID
extern ExportedByDraftingItfCPP IID IID_CATIDrwDimValueComponent ;
#else
extern "C" const IID IID_CATIDrwDimValueComponent ;
#endif

/**
 * Manages the dimension value component.
 */

class ExportedByDraftingItfCPP CATIDrwDimValueComponent : public CATBaseUnknown
{
  CATDeclareInterface;

   public:

    /**
     * Gets the dressup.
     *   @return
     *    Dressup.
     */
     virtual CATIDrwDimDressUp_var GetDressUp() const = 0;

    /**
     * Gets the text.
     *   @return
     *    Text.
     */
     virtual CATIDrwDimText_var GetText() const = 0;

    /**
     * @nodoc
     * Gets the scored element type.
     *   @return
     *    Scored element type.
     */
     virtual int GetScoredElementType() const = 0;

    /**
     * Gets the tolerance.
     *   @return
     *    Tolerance.
     */
     virtual CATIDrwDimTolerance_var GetTolerance() const = 0;

    /**
     * Gets the format.
     *   @return
     *    Format.
     */
     virtual CATIDrwDimFormat_var GetFormat(CATDftValueAccess ValFmt=DftDimFirstFormat ) const = 0;
   
    /**
     * @nodoc
     * Sets the scored element type.
     *   @param sType
     *    Scored element type.
     */
     virtual void SetScoredElementType(const int sType) = 0;

    /**
     * Sets the tolerance.
     *   @param iTolerance
     *    Tolerance.
     */
     virtual void SetTolerance(const CATIDrwDimTolerance_var iTolerance) = 0;

    /**
     * Removes the tolerance.
     */
     virtual void RemoveTolerance() = 0;
   
};
CATDeclareHandler(CATIDrwDimValueComponent, CATBaseUnknown);
#endif
