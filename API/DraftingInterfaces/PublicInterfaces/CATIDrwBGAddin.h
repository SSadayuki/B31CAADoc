#ifndef CATIDrwBGAddin_h 
#define CATIDrwBGAddin_h 
// COPYRIGHT DASSAULT SYSTEMES 2006
/**
 * @CAA2Level L1
 * @CAA2Usage U5
 */
#include "CATIWorkbenchAddin.h"
#include "DraftingItfCPP.h"

#ifndef LOCAL_DEFINITION_FOR_IID
extern ExportedByDraftingItfCPP IID IID_CATIDrwBGAddin;
#else
extern "C" const IID IID_CATIDrwBGAddin;
#endif

/**
 * Interface of Drafting workbench.
 * by implementing this interface you create an addin of one workbench of the drawing document.
 * The toolbars and the item menu will be only available when the workbench is the current one.
 * CATIDrwAddin is the addin of the "Drafting" Background view workbench which appears in the "Mechanical Design" Solution.
 * @see CATIWorkbenchAddin
 */

class ExportedByDraftingItfCPP CATIDrwBGAddin : public CATIWorkbenchAddin 
{ 
  CATDeclareInterface; 
  
public: 

}; 

CATDeclareHandler(CATIDrwBGAddin, CATBaseUnknown);

#endif
