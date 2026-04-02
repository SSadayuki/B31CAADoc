// COPYRIGHT Dassault Systemes 2003
//===================================================================
#ifndef CATIMfgMIKCE2_H
#define CATIMfgMIKCE2_H

/**
 * @CAA2Level L0
 * @CAA2Usage U5
 */

#include "CATMfgSimulationItfCPP.h"
#include "CATBaseUnknown.h"
#include "CATUnicodeString.h"

#ifndef LOCAL_DEFINITION_FOR_IID
extern ExportedByCATMfgSimulationItfCPP IID IID_CATIMfgMIKCE2;
#else
extern "C" const IID IID_CATIMfgMIKCE2 ;
#endif

//------------------------------------------------------------------

/**
 * Interface to implement on the Manufacturing Program for ISO file simulation.
 * The rule of this component is to fill in the DOF table necessary for
 * simulation.
 */
class ExportedByCATMfgSimulationItfCPP CATIMfgMIKCE2: public CATBaseUnknown
{
  CATDeclareInterface;

  public:

    /**
     * Initialisation of session.<br>
	 *   @param iMode
	 *      The mode of computation
	 *      <br><b>Legal values</b>:
	 *      <ul>
	 *      <li> 1 : Computation for the current Manufacturing Program   </li>
	 *      <li> 2 : Computation for a Manufacturing Operation </li>
     *      </ul>
	 *   @param iMO
	 *      The Manufacturing Operation (if iMode=1)
	 *   @param iFileName
	 *      The path and the name of the current library
     */
	  virtual HRESULT MIKInit(int                       iMode,
		                      const CATBaseUnknown_var& iMO, 
		                      const CATUnicodeString&   iFileName) = 0;


	 /**
     * Computation of DOF table.<br>
	 *   @param iTimeIncr
	 *      The time increment
	 */
	  virtual HRESULT MIKCreateDOFTable(double iTimeIncr) = 0;


	  /**
     * Closing of session
	 */
	  virtual HRESULT MIKExit() = 0 ;

	  /**
     * Releasing of assigned License
	 */
	  virtual HRESULT MIKCELicenseRelease() = 0 ;

};

CATDeclareHandler( CATIMfgMIKCE2, CATBaseUnknown) ;
//------------------------------------------------------------------

#endif
