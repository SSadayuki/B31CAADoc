#ifndef CATIMfgMacroEditorActivity_H
#define CATIMfgMacroEditorActivity_H

//=============================================================================
// COPYRIGHT DASSAULT SYSTEMES  2001
//=============================================================================

/**
* @CAA2Level L1
* @CAA2Usage U5
*/

// module
#include "MfgItfEnv.h"
#include "CATBaseUnknown.h"
#include "CATDlgFrame.h"
#include "CATDialog.h"

#ifndef LOCAL_DEFINITION_FOR_IID
extern ExportedByMfgItfEnv IID IID_CATIMfgMacroEditorActivity;
#else
extern "C" const IID IID_CATIMfgMacroEditorActivity;
#endif

/**   
 * Interface dedicated to Activity Object.
 * <b>Role</b>: This interface offers services to retrieve macro tabpage frame of the Activity object editor .<br>
 *
 */

class ExportedByMfgItfEnv CATIMfgMacroEditorActivity : public CATBaseUnknown
{
  CATDeclareInterface ;  

  public:

 /**
 * Writes the macro tabpage frame. 
 * @param iFather
 *  The father window
 *  @param oFrame
 *  The tabpage frame
 *  @param iStyle
 *  The tabPage style
 */

    virtual HRESULT GetMainPanelEditor(CATDialog *iFather,
                                       CATDlgFrame*& oFrame,
                                       CATDlgStyle iStyle=NULL) = 0;

};

CATDeclareHandler(CATIMfgMacroEditorActivity, CATBaseUnknown);

#endif
