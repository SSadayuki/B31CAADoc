#ifndef CATAfrUndoRedoServices_H
#define CATAfrUndoRedoServices_H
#include "ApplicationFrame.h"

// COPYRIGHT DASSAULT SYSTEMES 2004-2009

/**
 * @CAA2Level L1
 * @CAA2Usage U1
 */

#include "IUnknown.h" // HRESULT definition under UNIX
#include "CATBoolean.h"

class CATFrmEditor;
class CATUnicodeString;

//---------------------------------------------------------------------------
/**
 * Flushes the Undo and Redo stacks.
 * <br><b>Role</b>: This method flushes the Undo and Redo stacks.
 * <br>The Undo/Redo mechanism is freezed until a new transaction is created.
 * <br>Modifications done while the Undo/Redo mechanism is freezed will not be undoable.
 * @return
 * Returns always S_OK.
 */
ExportedByApplicationFrame
HRESULT CATAfrEmptyUndoRedoStacks ();

//---------------------------------------------------------------------------
/**
 * Creates a new transaction
 * <br><b>Role</b>: This method creates a new transaction in the UI Undo/Redo mechanism.
 * @param iEditor
 *  The editor where the transaction will be created.
 * @param iId
 *  Any string, used for debugging purpose.
 * @param iForce
 *  If FALSE no transaction will be created if the current one is empty.
 * @param oTransactionIndex
 *  The index of the new transaction (from 1 to ...)
 * @return 
 *   <dl>
 *   <dt> <tt>S_OK</tt>    <dd> The Undo/Redo mechanism has been freezed
 *   <dt> <tt>E_FAIL</tt>  <dd> The iEditor parameter is NULL
 *   </dl>   
 */
ExportedByApplicationFrame
HRESULT CATAfrNewTransaction (CATFrmEditor * iEditor, const CATUnicodeString & iId, CATBoolean iForce, int & oTransactionIndex);

//---------------------------------------------------------------------------
/**
 * Freezes the Undo/Redo mechanism.
 * <br><b>Role</b>: This method flushes the Undo and Redo stacks and locks transactions.
 * <br>The Undo/Redo mechanism is freezed until @href CATAfrUnlockUndoRedoTransactions is called.
 * <br>Modifications done while the Undo/Redo mechanism is freezed will not be undoable.
 * @param iWarning
 *  If TRUE, displays a warning message to the user.
 * @return 
 *   <dl>
 *   <dt> <tt>S_OK</tt>    <dd> The Undo/Redo mechanism has been freezed
 *   <dt> <tt>S_FALSE</tt> <dd> The Undo/Redo mechanism cannot be freezed during Undo or Redo actions
 *   </dl>   
 */
ExportedByApplicationFrame
HRESULT CATAfrLockUndoRedoTransactions (CATBoolean iWarning=FALSE);

//---------------------------------------------------------------------------
/**
 * Unfreezes the Undo/Redo mechanism.
 * <br><b>Role</b>: This method cancels the action of @href CATAfrLockUndoRedoTransactions.
 * New modifications done will be undoable as usual once a new transaction is created.
 * @return
 * Returns always S_OK.
 */
ExportedByApplicationFrame
HRESULT CATAfrUnlockUndoRedoTransactions ();

//---------------------------------------------------------------------------
/**
 * Checks whether the Undo/Redo mechanism is freezed.
 * <br><b>Role</b>: This method checks whether the Undo/Redo mechanisl has been locked.
 * @param oLocked
 *  If TRUE, the Undo/Redo mechanism is freezed.
 * @return
 * Returns always S_OK.
 */
ExportedByApplicationFrame
HRESULT CATAfrIsUndoRedoLocked (CATBoolean & oLocked);

#endif
