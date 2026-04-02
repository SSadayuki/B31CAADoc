//===================================================================
// COPYRIGHT DASSAULT SYSTEMES 2003
//===================================================================
//
// CATIDftViewEditor.h
// Define the CATIDftViewEditor interface
//
/**
* @CAA2Level L0
* @CAA2Usage U2
*/

/**
*   This interface has to be only implemented by CAA external application to specialize interactive view behavior:
*    launch a dedicated modal window when a double click is applied on the view instead of view activation.
*    @see CATIDftViewPanel
*/

#ifndef CATIDftViewEditor_H
#define CATIDftViewEditor_H

#include "DraftingItfCPP.h"
#include "CATBaseUnknown.h"

#ifndef LOCAL_DEFINITION_FOR_IID
extern ExportedByDraftingItfCPP IID IID_CATIDftViewEditor;
#else
extern "C" const IID IID_CATIDftViewEditor ;
#endif

//------------------------------------------------------------------

/**
 * Interface to implement by CAA application to specialize interactive view behavior.
 *
 */
class ExportedByDraftingItfCPP CATIDftViewEditor: public CATBaseUnknown
{
  CATDeclareInterface;

  public:

    /**
    * Returns the context to edit a view by launching an editor .
    * @param <tt>in IID of the context</tt>
    * @return 
    * S_OK : Method correctly executed. 
    * <br>No restriction.
    * <br>E_FAIL : Method execution failed.
    */ 

     virtual HRESULT GetEditorContext(IID & oIID)=0; 
};

//------------------------------------------------------------------
CATDeclareHandler(CATIDftViewEditor, CATBaseUnknown);
#endif
