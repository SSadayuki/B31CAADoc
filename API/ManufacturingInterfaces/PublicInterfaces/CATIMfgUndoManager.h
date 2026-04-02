// -*-c++-*-
// COPYRIGHT DASSAULT SYSTEMES  2006
//==============================================================================
//  mm-dd-yyyy                                                              User
//  02-03-2006    Cre                                                        ssn
//==============================================================================

#ifndef CATIMfgUndoManager_H
#define CATIMfgUndoManager_H

/**
 * @CAA2Level L1
 * @CAA2Usage U3
 */

#include "CATBaseUnknown.h"
#include "MfgItfEnv.h"

#ifndef LOCAL_DEFINITION_FOR_IID
extern ExportedByMfgItfEnv IID IID_CATIMfgUndoManager;
#else
extern "C" const IID IID_CATIMfgUndoManager;
#endif

class CATCommandGlobalUndo;

/**   
 * Interface dedicated to undo management of manufacturing operation.
 * <b>Role</b>: This interface offers service to get the undo object. <br>
 */

class ExportedByMfgItfEnv CATIMfgUndoManager : public CATBaseUnknown
{
  CATDeclareInterface;

  public:

    /**
     *   Gets the associated global undo object.
     *   Call this method in the GetGlobalUndo() method of your CATStateCommand.
     *   @param oUndoObject
     *      Associated global undo object.
     *   @return
     *      HRESULT value.
     *   <br><b>Legal values</b>:
     *   <ul>
     *   <li>S_OK if the operation succeeds </li>
     *   <li>E_FAIL otherwise </li>.
     *   </ul>
     */

    virtual HRESULT GetGlobalUndo( CATCommandGlobalUndo *& oUndoObject ) = 0;
};

CATDeclareHandler( CATIMfgUndoManager, CATBaseUnknown );

#endif
