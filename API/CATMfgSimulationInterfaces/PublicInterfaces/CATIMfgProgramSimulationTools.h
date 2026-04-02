// COPYRIGHT Dassault Systemes 2003
//===================================================================
#ifndef CATIMfgProgramSimulationTools_H
#define CATIMfgProgramSimulationTools_H

/**
 * @CAA2Level L0
 * @CAA2Usage U3
 */


#include "CATMfgSimulationItfCPP.h"
#include "CATBaseUnknown.h"
#include "CATUnicodeString.h"
#include "CATListOfDouble.h"

#ifndef LOCAL_DEFINITION_FOR_IID
extern ExportedByCATMfgSimulationItfCPP IID IID_CATIMfgProgramSimulationTools;
#else
extern "C" const IID IID_CATIMfgProgramSimulationTools ;
#endif

//------------------------------------------------------------------

/**
 * Interface implemented on the Manufacturing Program for ISO based simulation.
 * The rule of this interface is to give informations on the tools (Cutter Compensation) and
 * Workpiece Origins
 */
class ExportedByCATMfgSimulationItfCPP CATIMfgProgramSimulationTools: public CATBaseUnknown
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
     * Retrieves an handler on a tool of the Manufacturing Program.<br>
	 *   @param iToolNumber
	 *      The Tool number value
	 *   @param iCorrectorNumber
	 *      The Tool corrector number
	 *   @param oToolHandler
	 *      The handler on the tool  
     */
	  virtual HRESULT GetToolHandler (int                   iToolNumber,
		                              int                   iCorrectorNumber,
									  CATBaseUnknown_var&   oToolHandler) = 0;

    /**
     * Retrieves corrected length and corrected radius for a tool of the Manufacturing Program.<br>
	 *   @param iToolNumber
	 *      The Tool number value
	 *   @param iCorrectorID
	 *      The Tool corrector ID value
	 *   @param oCorrectedLength
	 *      The value of the corrected length
	 *   @param oCorrectedRadius
	 *      The value of the corrected radius
     */
	  virtual HRESULT GetLengthAndRadiusForCompensation (int     iToolNumber,
		                                                 int     iCorrectorID,
									                     double& oCorrectedLength,
									                     double& oCorrectedRadius) = 0;

    /**
     * Retrieves the total number of Workpiece Origins.<br>
	 *   @param oTotalNumberOfWorkpieceOrigins 
	 *      The total number of workpiece origins
     */	  
	  virtual HRESULT GetNumberOfWorkpieceOrigins (int& oTotalNumberOfWorkpieceOrigins) = 0;

    /**
     * Retrieves data associated to a Workpiece Origin.<br>
	 *   @param iCurrentNumberOfWorkpieceOrigin
	 *      The current number of Workpiece Origin
	 *   @param oISOcode
	 *      The ISO Code (for example, G54)
	 *   @param oIndex
	 *      The index associated to the ISO code
	 *   @param oListOfMachineAxisValues
	 *      The values of Machine Axis 
     */	  
	  virtual HRESULT GetWorkpieceOrigin (int iCurrentNumberOfWorkpieceOrigin,CATUnicodeString& oISOCode,int& oIndex,CATListOfDouble& oListOfMachineAxisValues) = 0;
	
};

CATDeclareHandler( CATIMfgProgramSimulationTools, CATBaseUnknown) ;
//------------------------------------------------------------------

#endif
