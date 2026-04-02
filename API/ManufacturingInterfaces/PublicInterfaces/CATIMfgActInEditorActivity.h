// COPYRIGHT Dassault Systemes 2006
//===================================================================
//
// CATIMfgActInEditorActivity.h
// Define the CATIMfgActInEditorActivity interface
//
//===================================================================
#ifndef CATIMfgActInEditorActivity_H
#define CATIMfgActInEditorActivity_H

/**
* @CAA2Level L1
* @CAA2Usage U5
*/

#include "MfgItfEnv.h"
#include "CATBaseUnknown.h"

#ifndef LOCAL_DEFINITION_FOR_IID
extern ExportedByMfgItfEnv IID IID_CATIMfgActInEditorActivity;
#else
extern "C" const IID IID_CATIMfgActInEditorActivity ;
#endif


/**
* Interface that allows to act in the Manufacturing Operation editor to add some special behaviour.
*
* <br><b>Role</b>: Component that implement CATIMfgActInEditorActivity should be a Manufacturing Operation.
* <p>
*/
class ExportedByMfgItfEnv CATIMfgActInEditorActivity: public CATBaseUnknown
{
  CATDeclareInterface;

  public:

    /**
     * Implement this method to add some special behaviour when Cancel button of
     * Manfacturing operation editor is pressed.
     * Note this method is also called when the operation editor ends because it is
     * cancelled by an exclusive command.
     */
    virtual HRESULT OnCancelButton () = 0;


};

CATDeclareHandler(CATIMfgActInEditorActivity, CATBaseUnknown);

#endif
