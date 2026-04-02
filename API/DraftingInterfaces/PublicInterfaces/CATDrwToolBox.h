// COPYRIGHT DASSAULT SYSTEMES 2004
/**
* @CAA2Level L0
* @CAA2Usage U1
*/

#ifndef CATDrwToolBox_H
#define CATDrwToolBox_H

#include "CATErrorDefs.h"
class CATDocument;
class CATIContainer;
class CATIDrawing;

#include "DraftingItfCPP.h"

class ExportedByDraftingItfCPP CATDrwToolBox
{
  public:
    /**
     *  @nodoc
     */
    static HRESULT PrepareDrawingForSave(CATDocument *iDoc);
    /**
     *  @nodoc
     */
    static HRESULT PrepareDrawingForSave(CATIDrawing *iDrawing);
 
  private:
    /**
     *  @nodoc
     */
    static HRESULT SolveInSession(CATIContainer* iCont);
};
#endif



