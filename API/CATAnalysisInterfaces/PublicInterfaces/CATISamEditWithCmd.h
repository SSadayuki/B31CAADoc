#ifndef CATISamEditWithCmd_H
#define CATISamEditWithCmd_H
// COPYRIGHT DASSAULT SYSTEMES 2000  
//==================================================================================
// CATISamEditWithCmd.h
// Define the CATISamEditWithCmd interface
//==================================================================================
/**
  * @CAA2Level L1
  * @CAA2Usage U5
  */
#include "CATAnalysisInterface.h"
#include "CATCommand.h"
#include "CATBaseUnknown.h"

class CATStateCommand;

#ifndef LOCAL_DEFINITION_FOR_IID
extern ExportedByCATAnalysisInterface IID IID_CATISamEditWithCmd ;
#else
extern "C" const IID IID_CATISamEditWithCmd ;
#endif
/**
 * Customizes Analysis Entity Edition.
 * <b>Role:</b> This interface is used by the default command CATSamCreateEntityCmd exported by CATAnalysisModelerUI.
 * <br>This comand allows to provide standard User interface for analysis entity creation, modification and edition.
 * This comands assumes that each basic component provides its editing capabilities (dialog object).<br>
 * The edition dialog of a basic component can be of two kinds :
 * <ul>
 * <li><b>a simple frame.</b>
 * <li><b> it may needed to get the selection management to access to other objects in 
 *	 the session.
 * </ul>
 * This interface corresponds to the second case. It is designed to return<br>
 * an edition command associated to the Basic Component. It must be implemented on it's late type.
 * <p>
 * @see CATISamEditWithFrame,CATISamEditionCmd
 */ 


//------------------------------------------------------------------

class ExportedByCATAnalysisInterface CATISamEditWithCmd: public CATBaseUnknown
{
  CATDeclareInterface;

  public:
/**
 * Returns the edition command associated to the Basic Component.
 * <b>Warning!</b> The returned command must implement CATISamEditionCmd.
 * @param iStatus
 * Define the kind of the return CATStateCommand.
 * @return
 * <br><b>Legal values</b>: associated CATStateCommand.
 */	
	  virtual CATStateCommand * GetCommand(CATCommandMode iStatus = CATCommandModeUndefined) = 0;
  
};

//------------------------------------------------------------------

CATDeclareHandler( CATISamEditWithCmd, CATBaseUnknown );

#endif
