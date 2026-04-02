#ifndef CATISamEditionFrame_H
#define CATISamEditionFrame_H
// COPYRIGHT DASSAULT SYSTEMES 2000  
//==================================================================================
// CATISamEditionFrame.h
// Define the CATISamEditionFrame interface
//==================================================================================
/**
  * @CAA2Level L1
  * @CAA2Usage U5
  */
#include "CATAnalysisInterface.h"
#include "CATBaseUnknown.h"

class CATCommand;
class CATNotification;

#ifndef LOCAL_DEFINITION_FOR_IID
extern ExportedByCATAnalysisInterface IID IID_CATISamEditionFrame ;
#else
extern "C" const IID IID_CATISamEditionFrame ;
#endif
/**
 * Basic Component Edition.
 * <b>Role:</b>Basic components provide dialog entities to deal with their edition, thanks
 * to interfaces CATISamEditWithCmd or CATISamEditWithFrame.
 * This edition dialog entity can be of two kinds :
 * <ul>
 * <li><b>CATDlgFrame.</b>
 * <li><b> CATStateCommand if it needs to get the selection management to access 
 *   to other objects in the session.</b>
 * </ul>
 * CATDlgFrame corresponding to the first case must implement this interface.
 * Interface providing services to integrate the implementing CATDlgFrame
 * to the Edition Command of the Analysis Entity.
 * <p>
 * @see CATISamEditWithFrame,CATISamEditionCmd
 */ 


//------------------------------------------------------------------

class ExportedByCATAnalysisInterface CATISamEditionFrame: public CATBaseUnknown
{
  CATDeclareInterface;

  public:

	  // ======================
	  //  Edition Management
	  // ======================
/**
 * Return the notification that will be sent, each time the implementing frame
 * modify the value of the edited Basic Component.
 * @param oFromCmd CATCommand that will send the notification.
 * @param oNotif CATNotification dedicated to warn the Edition Command. <p>
 * It is recommanded to have a notification specific each implementation type.
 * It just need to derive from 
 * @see CATNotification .
 */	
	virtual void GetModificationNotification(CATCommand * &oFromCmd,CATNotification * &oNotif) = 0;

/**
 * Inform the implementing CATDlgFrame that it has to be updated according
 * to the edited Basic component.
 * WARNING ! This method must not send a Modification Notification.
 */
	virtual void UpdateFrame() = 0;

};

//------------------------------------------------------------------

CATDeclareHandler( CATISamEditionFrame, CATBaseUnknown );

#endif
