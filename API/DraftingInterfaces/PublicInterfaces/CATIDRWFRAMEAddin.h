#ifndef CATIDRWFRAMEAddin_h 
#define CATIDRWFRAMEAddin_h 
// COPYRIGHT DASSAULT SYSTEMES 2000
/**
 * @CAA2Level L1
 * @CAA2Usage U5
 */
#include "CATIWorkbenchAddin.h" 
#include "DraftingItfCPP.h"

#ifndef LOCAL_DEFINITION_FOR_IID
extern ExportedByDraftingItfCPP IID IID_CATIDRWFRAMEAddin; 
#else
extern "C" const IID IID_CATIDRWFRAMEAddin;
#endif
/**
 * Interface to add toolbars in the Drafting workbench.
 * by implementing this interface you create an Addin of the working view workshop of the drawing document.
 * Its means that the toolbars and the item in the menu will be always there.
 * @see CATIWorkbenchAddin
 */
class ExportedByDraftingItfCPP CATIDRWFRAMEAddin : public CATIWorkbenchAddin 
{ 
  CATDeclareInterface; 
  
public: 

}; 

CATDeclareHandler(CATIDRWFRAMEAddin, CATBaseUnknown);

#endif 
