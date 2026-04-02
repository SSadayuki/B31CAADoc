// COPYRIGHT Dassault Systemes 2006
//===================================================================
#ifndef CATIMfgProgramSimulationTools2_H
#define CATIMfgProgramSimulationTools2_H

/**
 * @CAA2Level L0
 * @CAA2Usage U3
 */


#include "CATMfgSimulationItfCPP.h"
#include "CATIMfgProgramSimulationTools.h"
#include "CATBaseUnknown.h"

#ifndef LOCAL_DEFINITION_FOR_IID
extern ExportedByCATMfgSimulationItfCPP IID IID_CATIMfgProgramSimulationTools2;
#else
extern "C" const IID IID_CATIMfgProgramSimulationTools2 ;
#endif

//------------------------------------------------------------------

/**
 * Interface implemented on the Manufacturing Program for ISO based simulation.
 * The rule of this interface is to give informations on the tools (Cutter Compensation)
 */
class ExportedByCATMfgSimulationItfCPP CATIMfgProgramSimulationTools2: public CATIMfgProgramSimulationTools
{
  CATDeclareInterface;

  public:

	 /**
     * Retrieves the corrector ID for a tool of the Manufacturing Program.
	 *   @param iToolNumber
	 *      The Tool number value
	 *   @param iCorrectorNumber
	 *      The Tool corrector number value
	 *   @param oCorrectorID
	 *      The Tool corrector ID value
     */
	  virtual HRESULT GetCorrectorIDFromCorrectorNumber(int iToolNumber,
													    int iCorrectorNumber,
													    int& oCorrectorID) = 0;

	 /**
     * Retrieves the corrector ID for a tool of the Manufacturing Program.
	 *   @param iToolNumber
	 *      The Tool number value
	 *   @param iRadiusNumber
	 *      The Tool radius number value
	 *   @param oCorrectorID
	 *      The Tool corrector ID value
     */
	  virtual HRESULT GetCorrectorIDFromRadiusNumber (int iToolNumber,
													  int iRadiusNumber,
													  int& oCorrectorID) = 0;
};

CATDeclareHandler( CATIMfgProgramSimulationTools2, CATBaseUnknown) ;
//------------------------------------------------------------------

#endif
