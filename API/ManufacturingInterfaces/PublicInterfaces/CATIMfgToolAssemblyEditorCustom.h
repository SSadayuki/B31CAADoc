#ifndef CATIMfgToolAssemblyEditorCustom_H
#define CATIMfgToolAssemblyEditorCustom_H

//=============================================================================
// COPYRIGHT DASSAULT SYSTEMES 2003
//=============================================================================

/**
 * @CAA2Level L1
 * @CAA2Usage U5
 */

// module
#include "MfgItfEnv.h"

// inheritance
#include "CATBaseUnknown.h"

// Dialog
#include "CATDlgInclude.h"

// OLE iid
#ifndef LOCAL_DEFINITION_FOR_IID
extern ExportedByMfgItfEnv IID IID_CATIMfgToolAssemblyEditorCustom;
#else
extern "C" const IID IID_CATIMfgToolAssemblyEditorCustom;
#endif

/**   
 * Interface dedicated to tool assembly object editor management.
 * <b>Role</b>: This interface offers services to edit the tool assembly object.
 * @see CATIMfgToolAssembly
 * @see CATDlgFrame
 */
class ExportedByMfgItfEnv CATIMfgToolAssemblyEditorCustom : public CATBaseUnknown
{
    CATDeclareInterface;
    
public:
    
    /**
     * Returns the viewer panel editor on the tool assembly object.<br> 
     * Builds a frame with simple presentation : basic parameters and graphic view.<br>
     * @param iFather
     *     The dialog father for presentation 
     * @param iStyle
     *     The frame style option 
     * @see CATDlgFrame
     */
    virtual CATDlgFrame* GetViewerPanelEditor(CATDialog* iFather, 
                                              CATDlgStyle iStyle = CATDlgFraNoFrame) = 0;
    
    /**
     * Returns the more panel editor on the tool assembly object.<br> 
     * Builds a frame with "more" presentation (tab pages) : geometry, technology, compensation parameters.<br>
     * @param iFather
     *     The dialog father for presentation 
     * @param iStyle
     *     The frame style option 
     * @see CATDlgFrame
     */
    virtual CATDlgFrame* GetMorePanelEditor(CATDialog* iFather, 
                                            CATDlgStyle iStyle = CATDlgFraNoFrame) = 0;

    // No constructors or destructors on this pure virtual base class
    // --------------------------------------------------------------
};

CATDeclareHandler(CATIMfgToolAssemblyEditorCustom, CATBaseUnknown);
#endif
