#ifndef CATIMfgUserEditorActivity_H
#define CATIMfgUserEditorActivity_H

//=============================================================================
// COPYRIGHT DASSAULT SYSTEMES  2002
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
extern ExportedByMfgItfEnv IID IID_CATIMfgUserEditorActivity;
#else
extern "C" const IID IID_CATIMfgUserEditorActivity;
#endif

/**   
 * Interface dedicated to Activity Object.
 * <b>Role</b>: This interface offers services to retrieve user tabpage frame of the Activity object editor .<br>
 *
 */

class ExportedByMfgItfEnv CATIMfgUserEditorActivity : public CATBaseUnknown
{
  CATDeclareInterface ;  

  public:
 
 /**
 * Writes the user tabpage frame. 
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

CATDeclareHandler(CATIMfgUserEditorActivity, CATBaseUnknown);

#endif
