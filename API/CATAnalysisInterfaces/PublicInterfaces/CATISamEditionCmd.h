#ifndef CATISamEditionCmd_H
#define CATISamEditionCmd_H
// COPYRIGHT DASSAULT SYSTEMES 2000  
//==================================================================================
// CATISamEditionCmd.h
// Define the CATISamEditionCmd interface
//==================================================================================
/**
  * @CAA2Level L1
  * @CAA2Usage U5
  */
#include "CATAnalysisInterface.h"
#include "CATBaseUnknown.h"

class CATISpecObject_var;
class CATDlgFrame;
class CATDialog;
class CATSamQuerySelectFocusNotification;
class CATCommand;
class CATNotification;

#ifndef LOCAL_DEFINITION_FOR_IID
extern ExportedByCATAnalysisInterface IID IID_CATISamEditionCmd ;
#else
extern "C" const IID IID_CATISamEditionCmd ;
#endif
/**
 * Basic Component Edition.
 * <b>Role:</b> Basic components provide dialog entities to deal with their edition, <br>
 * thanks to interfaces CATISamEditWithCmd or CATISamEditWithFrame.<br>
 * This edition dialog entity can be of two kinds :
 * <ul>
 * <li><b>CATDlgFrame</b> 
 * <li><b>CATStateCommand</b> if it needs to get the selection management to access 
 * </ul>
 * CATStateCommand corresponding to the second case must implement this interface.
 * Interface providing services to integrate the implementing CATStateCommand
 * to the Edition Command of the Analysis Entity.
 * <p>
 * @see CATISamEditWithCmd,CATISamEditionFrame
 */ 


//------------------------------------------------------------------

class ExportedByCATAnalysisInterface CATISamEditionCmd: public CATBaseUnknown
{
  CATDeclareInterface;

  public:

/**
 * Associates the editor to  Basic Component.
 * @param iFeature 
 * Basic component edited by the implemented CATStateCommand.
 */	
	  virtual void SetFeature(const CATISpecObject_var &iFeature) = 0;
/**
 * Retrieve the Basic Component associated the editor.
 * @param oFeature 
 * Basic component edited by the implemented CATStateCommand.
 */	

	  virtual void GetFeature(CATISpecObject_var &oFeature) = 0;


	  // ==================
	  //  Frame Management
	  // ==================
	  
/**
 * Returns the Frame associated to the implementing CATStateCommand.
 * This Frame will be integrated to the Edition Command of the Analysis Entity.
 * @param iParent
 * Active CATDialog in which the Frame will appear.
 */	
	  virtual CATDlgFrame * GetModificationFrame(CATDialog *iParent = NULL) = 0;

/**
 * Informs the implementing CATStateCommand that its associated Frame doesn't exist anymore.
 */	
	  virtual void UnreferenceFrame() = 0;

/**
 * Informs the implementing CATStateCommand that its associated Frame has to be updated according
 * to the edited Basic component.
 * WARNING ! This method must not send a Modification Notification.
 */	
	  virtual void UpdateFrame() = 0;


	  
	  // ======================
	  //  Edition Management
	  // ======================
/**
 * Returns the notification that will be sent, each time the implementing command
 * modify the value of the edited Basic Component.
 * @param oFromCmd
 * CATCommand that will send the notification.
 * @param oNotif
 * CATNotification dedicated to warn the Edition Command of the Analysis Entity.
 */	
	  virtual void GetModificationNotification(CATCommand      * &oFromCmd, 
  									           CATNotification * &oNotif) = 0;

	  
	  // ======================
	  //  Selection Management
	  // ======================
/**
 * Returns the notification that will be sent, each time the implementing command
 * wants to get the management of the selection in the document.
 * @param oFromCmd
 * CATCommand that will send the notification.
 * @param oNotif
 * CATNotification dedicated to warn the Edition Command of the Analysis Entity,
 * that it must delegate the selection management to the implementing command.
 */	
	  virtual void GetQuerySelectFocusNotif(CATCommand  *& oFromCmd,
										    CATSamQuerySelectFocusNotification *& oNotif) = 0;

/**
 * Warns the implementing command that its Selection Agents are plugged on Selection Event. 
 * That is to say, the implementing command deals with the selection management.
 */	
	  virtual void AnalyseSelection() = 0;

/**
 * Warns the implementing command that its Selection Agents aren't plugged on Selection Event 
 * anymore. That is to say, the implementing command doesn't deal with the selection management
 * anymore.
 */	
	  virtual void IgnoreSelection() = 0;

/**
 * Warns if the selection have been checked.
 * Return 1 if the implementing command deals with the selection management.
 * Return 0 else.
 */	
	  virtual int  IsAnalysingSelection() = 0;

};

//------------------------------------------------------------------

CATDeclareHandler( CATISamEditionCmd, CATBaseUnknown );

#endif
