// COPYRIGHT Dassault Systemes 2003
//===================================================================
#ifndef CATIMfgToolsForDOF_H
#define CATIMfgToolsForDOF_H

/**
 * @CAA2Level L0
 * @CAA2Usage U3
 */

#include "CATMfgSimulationItfCPP.h"
#include "CATBaseUnknown.h"
#include "CATListOfDouble.h"

#ifndef LOCAL_DEFINITION_FOR_IID
extern ExportedByCATMfgSimulationItfCPP IID IID_CATIMfgToolsForDOF;
#else
extern "C" const IID IID_CATIMfgToolsForDOF ;
#endif

//------------------------------------------------------------------

/**
 * Interface implemented on the Manufacturing Program.
 * The rule of this interface is to associate a tool to each DOF target stored in the DOF table for simulation of
 *  an ISO file.
 * The tool is identified through the couple (ToolNumber, ToolCorrector) (characteristics of the couple
 *  can be retrieved with CATIMfgProgramSimulationTools interface)
 * 
 */
class ExportedByCATMfgSimulationItfCPP CATIMfgToolsForDOF: public CATBaseUnknown
{
  CATDeclareInterface;

  public:

	/**
     * Initialization of working session (to call at the beginning of the use of this interface).<br>
     */
	  virtual HRESULT InitSession () = 0;

    /**
     * Closing of working session (to call at the end of the use of this interface).<br>
     */
	  virtual HRESULT CloseSession () = 0;

     /**
     * Associates a tool to a set of DOF targets.<br>
	 *   @param iStartDOF
	 *      The number of the start DOF in the DOF Table
	 *   @param iEndDOF
	 *      The number of the end DOF in the DOF table
	 *   @param iToolNumber
	 *      The tool number value
	 *   @param iToolCorrectorNumber
	 *      The tool corrector value 
     */
	  virtual HRESULT AssociateToolToDOFTargets(int iStartDOF,
												int iEndDOF,
												int iToolNumber,
												int iCorrectorNumber) = 0;

	    /**
     * Associates a tool to a set of DOF targets.<br>
	 *   @param iStartDOF
	 *      The number of the start DOF in the DOF Table
	 *   @param iEndDOF
	 *      The number of the end DOF in the DOF table
	 *   @param iToolNumber
	 *      The tool number value List
	 *   @param iToolCorrectorNumber
	 *      The tool corrector value List
     */
	  virtual HRESULT AssociateToolsToDOFTargets(int iStartDOF,
												int iEndDOF,
												CATListOfInt * &iToolNumber,
												CATListOfInt * &iCorrectorNumber) = 0;


    /**
     * Retrieves the tool associated to a DOF target.<br>
	 *   @param iDOFTarget
	 *      The DOF target number
	 *   @param oToolNumber
	 *      The Tool number value
	 *   @param oCorrectorNumber
	 *      The Tool corrector number value
     */
	  virtual HRESULT RetrievesToolForADOFTarget (int    iDOFTarget,
									              int&   oToolNumber,
									              int&   oCorrectorNumber) = 0;
	   /**
     * Retrieves the tool associated to a DOF target.<br>
	 *   @param iDOFTarget
	 *      The DOF target number
	 *   @param oToolNumber
	 *      The Tool number value List
	 *   @param oCorrectorNumber
	 *      The Tool corrector number value List
     */
	  virtual HRESULT RetrievesToolsForADOFTarget (int    iDOFTarget,
									              CATListOfInt *&   oToolNumber,
									              CATListOfInt *&   oCorrectorNumber) = 0;
};

CATDeclareHandler( CATIMfgToolsForDOF, CATBaseUnknown) ;
//------------------------------------------------------------------

#endif
