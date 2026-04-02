#ifndef CATMSHSelectionTrapAgent_h
#define CATMSHSelectionTrapAgent_h

// COPYRIGHT DASSAULT SYSTEMES 2003

/**
 * @CAA2Level L0 
 * @CAA2Usage U1 
 */

#include "MSHUITools.h"
#include "CATMSHTrapMode.h"
#include "CATStateCommand.h"

class CATMSHDlgTrapType;
class CATIMSHTrapSelector;
class CATMSHSelectionTrap;
class CATIndicationAgent;  
class CATDialogAgent;
class CATViewer;
class CATDlgCheckButton;
class CATDlgDialog;
class CATDlgFrame;
class CATSO;

/**
 * @nodoc 
 */
typedef CATBoolean (CATCommand::*CATMSHTrapFilterMethod)(CATSO * Selection);


/**
 * Selection trap agent.
 * <b>Role</b>: This dialog agent enable to selects objects using a trap.
 * It should be used along with another object that will build the selection from the trap contour.
 * see @href CATIMSHTrapSelector.
 */
class ExportedByMSHUITools CATMSHSelectionTrapAgent : public CATStateCommand
{
  CmdDeclareResource ( CATMSHSelectionTrapAgent, CATStateCommand );

public:

  /**
   * Constructs a selection trap agent. 
   * @param iId
   *   The agent identifier. It is used to retrieve the undo/redo titles in 
   *   the command message file.
   * @param iSelector
   *   Object that will build the selection from the trap contour.
   * @param iData
   *   An object that can be useful for the selection (see @href CATIMSHTrapSelector).
   */
	CATMSHSelectionTrapAgent ( const CATString& iId , CATIMSHTrapSelector * iSelector , void * iData = NULL );

  /**
   * Destructor.
   */
	virtual ~CATMSHSelectionTrapAgent ();

  /**
   * Resets the valuation if the trap agent.
   */
  void InitializeAcquisition ();

  /**
   * Returns the list of selected objects.
   * <br><b>Lifecycle rules deviation</b>: This method doesn't AddRef the 
   * returned list.
   */
  CATSO * GetListOfValues ();

  /**
   * Creates and returns a dialog agent that will be valuated when the user
   * is starting a trap selection i.e. when the user select one of the two icons of the trap selection window.
   * <p>This should be used if the selection trap agent have to be in parallel with other selection agents.
   * @return CATBaseUnknown#Release  
   */
  CATDialogAgent * CreateTriggerAgent ();

  /**
   * @nodoc 
   * Création des boutons dans un frame, à utiliser pour
   * les intégrer dans une autre boite de dialogue.
   */
  void CreateButtons ( CATDlgFrame * Frame );

  /**
   * @nodoc 
   * Pour rajouter un filtre.
   */
  void SetFilter ( CATCommand * FilterCommand, CATMSHTrapFilterMethod FilterMethod );

  /**
   * @nodoc 
   * On adhère à l'Undo global.
   */
  virtual void BeforeUndo ();

  /**
   * @nodoc 
   * On adhère au Redo global.
   */
  virtual void BeforeRedo ();
 
private:

  /**
   * Structure dédiée à l'undo global.
   */
  struct TrapUndoRedo
  {
    CATSO ** _Stack;     
    int      _StackSize; 
  };

  /**
   * Construction du graphe de la commande.
   */
  virtual void BuildGraph ();

  /**
   * Appelé à la fin de vie de l'agent.
   */
  virtual CATStatusChangeRC Cancel ( CATCommand * Command , CATNotification * Notif );

  /**
   * Activation de l'agent.
   */
  virtual CATStatusChangeRC Activate ( CATCommand * Command , CATNotification * Notif );

  /**
   * Désactivation de l'agent.
   */
  virtual CATStatusChangeRC Desactivate ( CATCommand * Command , CATNotification * Notif );

	boolean FirstIndicate ( void * Data );
	boolean OtherIndicate ( void * Data );
	boolean Move ( void * Data );
	boolean End ( void * Data );
	boolean TypeChanged ( void * Data );
	boolean Close ( void * Data );
	boolean Undo ( void * Data );
	boolean Redo ( void * Data );
	boolean CheckTrap ( void * Data );

  /**
   * Update de la table.
   */
  void Update();

  CATCommand *             _FilterCommand;
  CATMSHTrapFilterMethod   _FilterMethod;

  TrapUndoRedo *           _TrapUndoRedo;
	CATSO *                  _TrappedObjects;
  CATMSHDlgTrapType *      _TrapTypeWindow;
  CATDlgCheckButton *      _ButtonInter;
  CATDlgCheckButton *      _ButtonInclu;
      
	CATDialogAgent *       _End;
	CATDialogAgent *       _Cancel;
	CATDialogAgent *       _ModeAgent;
	CATDialogAgent *       _TriggerAgent;
  CATMSHTrapMode         _Mode;
	CATIndicationAgent *   _Indic;
	CATMSHSelectionTrap *  _Trap;
  CATIMSHTrapSelector *  _Selector;
  void *                 _Data;
  int                    _CanClose;
  int                    _Buttons;
  int                    _StackAlloc;
  int                    _CurrentIndex;
  int                    _State;
};

#endif 
