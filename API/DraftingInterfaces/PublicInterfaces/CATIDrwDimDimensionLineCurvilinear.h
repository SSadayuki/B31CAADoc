#ifndef CATIDrwDimDimensionLineCurvilinear_H
#define CATIDrwDimDimensionLineCurvilinear_H
// COPYRIGHT DASSAULT SYSTEMES 1999

/**
 * @CAA2Level L1
 * @CAA2Usage U3
 */

#include "CATIDrwDimDimensionLine.h"


#include "DraftingItfCPP.h"
#ifndef LOCAL_DEFINITION_FOR_IID
extern ExportedByDraftingItfCPP IID IID_CATIDrwDimDimensionLineCurvilinear ;
#else
extern "C" const IID IID_CATIDrwDimDimensionLineCurvilinear ;
#endif

/**
 * Manages the curvilinear dimension line.
 */

class ExportedByDraftingItfCPP CATIDrwDimDimensionLineCurvilinear : public CATIDrwDimDimensionLine
{
  CATDeclareInterface;

   public:

};
CATDeclareHandler(CATIDrwDimDimensionLineCurvilinear, CATIDrwDimDimensionLine);
#endif


