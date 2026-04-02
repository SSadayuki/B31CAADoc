#ifndef CATIDftDocumentServices_h
#define CATIDftDocumentServices_h
// COPYRIGHT DASSAULT SYSTEMES 1999

/**
 * @CAA2Level L1
 * @CAA2Usage U3
 */

#include "IUnknown.h"
#include "CATDraftingInterfaces.h"
#include "DraftingItfCPP.h"
#ifndef LOCAL_DEFINITION_FOR_IID
extern ExportedByDraftingItfCPP IID IID_CATIDftDocumentServices ;
#else
extern "C" const IID IID_CATIDftDocumentServices ;
#endif
/**
 * Interface implemented by the drawing document used to get the drawing feature.
 * <b>Role</b>: This interface give an access to the drawing. It avoids navigating
 * in the document container structure.
 */

class ExportedByDraftingItfCPP CATIDftDocumentServices: public IUnknown
{

  public:

 /**
  * Gets the drawing feature in a drawing document.
  * @param iid
  *   The interface on the drawing.
  *   @see CATIDrawing
  * @param oDrw
  *   The drawing
  */ 
  virtual HRESULT GetDrawing( const IID iid,void ** oDrw) =0;

};

#endif
