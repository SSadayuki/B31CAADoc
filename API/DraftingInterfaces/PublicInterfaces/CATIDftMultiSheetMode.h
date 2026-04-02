// COPYRIGHT DASSAULT SYSTEMES 2000
#ifndef CATIDftMultiSheetMode_H
#define CATIDftMultiSheetMode_H

/**
 * @CAA2Level L1
 * @CAA2Usage U3
 */

#include "IUnknown.h"
#include "CATBooleanDef.h"
#include "CATMacForIUnknown.h"


#include "DraftingItfCPP.h"
#ifndef LOCAL_DEFINITION_FOR_IID
extern ExportedByDraftingItfCPP IID IID_CATIDftMultiSheetMode ;
#else
extern  "C" const  IID IID_CATIDftMultiSheetMode ;
#endif


/**
  * Interface used to manage multisheet command.
  * <b>Role</b>: This interface is required for commands
  * allowing to be multisheet. So the commands will not be
  * killed when the user change the current sheet.
  * After the use of Set method, the previous mode must be
  * restored 
  */


class ExportedByDraftingItfCPP  CATIDftMultiSheetMode: public IUnknown
{
public:

     /**
     * Set the mode to multi-sheet.
     */  
     virtual HRESULT SetMultiSheetMode(const boolean iMode) = 0;
  
     /**
     * Get the mode multi-sheet.
     * TRUE if multi-sheet mode is activated.
     * @return
     *   The mode.
     */  
     virtual HRESULT GetMultiSheetMode(boolean * oMode) = 0;

};

//------------------------------------------------------------------



#endif

