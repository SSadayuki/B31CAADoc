#ifndef CATIDrwDimDimensionLineLinear_H
#define CATIDrwDimDimensionLineLinear_H
// COPYRIGHT DASSAULT SYSTEMES 1999

/**
 * @CAA2Level L1
 * @CAA2Usage U3
 */

#include "CATIDrwDimDimensionLine.h"

#include "CATIDrwDimDimensionLineForshortened.h"

#include "DraftingItfCPP.h"
#ifndef LOCAL_DEFINITION_FOR_IID
extern ExportedByDraftingItfCPP IID IID_CATIDrwDimDimensionLineLinear ;
#else
extern "C" const IID IID_CATIDrwDimDimensionLineLinear ;
#endif

/**
 * Manages the linear dimension line.
 */

class ExportedByDraftingItfCPP CATIDrwDimDimensionLineLinear : public CATIDrwDimDimensionLine
{
  CATDeclareInterface;
  public:
    /**
     * Gets forshortened characteristics on a dimension line.
     *   @return
     *    The forshortened characteristics or NULL_var if not a forshortened dimension line. 
     */
    virtual CATIDrwDimDimensionLineForshortened_var GetForshortenInfo () = 0;
   
    /**
     * Returns whether or not a dimension line is forshortened.
     *   @return
     *    1 if the dimension line is forshortened, 0 if not. 
     */
    virtual int IsForshorten () = 0;

    /**
     * Sets the forshorten mode On or Off.
     *   @param mode
     *    Mode On or Off.
     *    <br>Mode legal values are:
     *    <dl>
     *    <dt><tt>0</tt> <dd>the dimension line is not forshortened.</dd>
     *    <dt><tt>1</tt> <dd>the dimension line is forshortened.</dd>
     *    </dl>
     */
    virtual void SetForshorten (int mode) = 0;
};
CATDeclareHandler(CATIDrwDimDimensionLineLinear, CATIDrwDimDimensionLine);
#endif
