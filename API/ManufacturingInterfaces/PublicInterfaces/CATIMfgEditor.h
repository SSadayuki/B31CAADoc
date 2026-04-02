#ifndef CATIMfgEditor_H
#define CATIMfgEditor_H

//=============================================================================
// COPYRIGHT DASSAULT SYSTEMES  2001
//=============================================================================

/**
* @CAA2Level L1
* @CAA2Usage U3
*/

// module
#include "MfgItfEnv.h"
#include "CATBaseUnknown.h"
#include "CATDialog.h"
#include "CAT2DViewer.h"

#ifndef LOCAL_DEFINITION_FOR_IID
extern ExportedByMfgItfEnv IID IID_CATIMfgEditor;
#else
extern "C" const IID IID_CATIMfgEditor;
#endif

/**   
 * Interface dedicated to Manufacturing objects.
 * <b>Role</b>: This interface offers services to retrieve Manufacturing objects editor.<br>
 *
 */

class ExportedByMfgItfEnv CATIMfgEditor : public CATBaseUnknown
{
  CATDeclareInterface ;  

  public:

/**
 * Writes 2D editor for a Manufacturing Object. 
 * @param iFather
 *  The father window
 * @param o2DViewer
 *  The 2D viewer editor
 */
    virtual HRESULT GetEditor(CATDialog *iFather, CAT2DViewer *& o2DViewer) = 0;
};

CATDeclareHandler(CATIMfgEditor, CATBaseUnknown);

#endif
