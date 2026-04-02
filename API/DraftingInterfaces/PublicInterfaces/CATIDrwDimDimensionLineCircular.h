#ifndef CATIDrwDimDimensionLineCircular_H
#define CATIDrwDimDimensionLineCircular_H
// COPYRIGHT DASSAULT SYSTEMES 1999

/**
 * @CAA2Level L1
 * @CAA2Usage U3
 */

#include "CATIDrwDimDimensionLine.h"

#include "DraftingItfCPP.h"
#ifndef LOCAL_DEFINITION_FOR_IID
extern ExportedByDraftingItfCPP IID IID_CATIDrwDimDimensionLineCircular ;
#else
extern "C" const IID IID_CATIDrwDimDimensionLineCircular ;
#endif

/**
 * Manages the circular dimension line.
 */

class ExportedByDraftingItfCPP CATIDrwDimDimensionLineCircular : public CATIDrwDimDimensionLine
{
  CATDeclareInterface;

   public:

};
CATDeclareHandler(CATIDrwDimDimensionLineCircular, CATIDrwDimDimensionLine);
#endif


