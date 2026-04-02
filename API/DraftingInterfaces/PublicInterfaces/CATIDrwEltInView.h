#ifndef CATIDrwEltInView_H
#define CATIDrwEltInView_H
// COPYRIGHT DASSAULT SYSTEMES 1999

/**
* @CAA2Level L1
* @CAA2Usage U3
*/

#include "CATBaseUnknown.h"

class CATIView_var;

#include "DraftingItfCPP.h"
#ifndef LOCAL_DEFINITION_FOR_IID
extern ExportedByDraftingItfCPP IID IID_CATIDrwEltInView ;
#else
extern "C" const IID IID_CATIDrwEltInView ;
#endif
/**
 * Interface used to get the view containing an element.
 * <b>Role</b>: By using this interface on a geometry or an annotation,
 * it is possible to get the containing view.
 */
class ExportedByDraftingItfCPP CATIDrwEltInView : public CATBaseUnknown
{
  CATDeclareInterface;
  
public:
 /**
  * Gets the view containing the element.
  */
  virtual CATIView_var GetParentView () = 0;


};
CATDeclareHandler(CATIDrwEltInView, CATBaseUnknown);
#endif
