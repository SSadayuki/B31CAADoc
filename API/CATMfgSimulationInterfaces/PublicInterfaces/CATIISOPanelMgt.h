// COPYRIGHT Dassault Systemes 2003

#ifndef CATIISOPanelMgt_H
#define CATIISOPanelMgt_H

/**
 * @CAA2Level L0
 * @CAA2Usage U5
*/

#include "CATMfgSimulationItfCPP.h"
#include "CATBaseUnknown.h"

#ifndef LOCAL_DEFINITION_FOR_IID
extern ExportedByCATMfgSimulationItfCPP IID IID_CATIISOPanelMgt;
#else
extern "C" const IID IID_CATIISOPanelMgt ;
#endif

//------------------------------------------------------------------

/**
 * Interface implemented on the Manufacturing Setup to manage ISO Panel Display/Update.<br> 
 * It contains methods to create and update the panel.
 */
class ExportedByCATMfgSimulationItfCPP CATIISOPanelMgt: public CATBaseUnknown
{
  CATDeclareInterface;

  public:
	  
	  /**
	   *   Creates and show the panel.<br>
	   *   @param iMfgProgram
	   *      Manufacturing Program for the MO
	   *   @param iMfgOperation
	   *      Manufacturing operation for which the simulation is happening.
	   **/
    
	  virtual HRESULT  CreatePanelforSimul(const CATBaseUnknown_var &iMfgProgram, 
										   const CATBaseUnknown_var &iMfgOperation) = 0; 

	  /**
	   *   Updates the panel with the current line which is simulating.<br>
	   *   @param iRank
	   *      Current Rank which is being simulated
	   *   @param iMfgProgram
	   *      Manufacturing Program for the MO
	   *   @param iMfgOperation
	   *      Manufacturing operation for which the simulation is happening.
	   **/    

	  virtual HRESULT  UpdatePanel(int iRank, 
								   const CATBaseUnknown_var &iMfgProgram, 
								   const CATBaseUnknown_var &iMfgOperation) = 0; 

	  /**
	   * Closing of the ISO Panel
	   * To be called at the END of 
	   *    ---> Simulation (Full) command
	   *	---> Partial simulation command	   
	   */
	  virtual HRESULT  ClosePanel() = 0;

  // No constructors or destructors on this pure virtual base class
  // --------------------------------------------------------------
};

//------------------------------------------------------------------

CATDeclareHandler(CATIISOPanelMgt, CATBaseUnknown) ;

#endif
