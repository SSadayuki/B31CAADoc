// COPYRIGHT Dassault Systemes 2006
//===================================================================
//
// CATIMfgToolAssemblyCompensationManagement.h
// Define the CATIMfgToolAssemblyCompensationManagement interface
//
//===================================================================
//
// Usage notes:
//  
//
//===================================================================
//
//  March 2006  Creation:V5R16SP4								  KRL
//===================================================================
#ifndef CATIMfgToolAssemblyCompensationManagement_H
#define CATIMfgToolAssemblyCompensationManagement_H

/**
 * @CAA2Level L1
 * @CAA2Usage U3
 */

#include "MfgItfEnv.h"
#include "CATBaseUnknown.h"

#ifndef LOCAL_DEFINITION_FOR_IID
extern ExportedByMfgItfEnv IID IID_CATIMfgToolAssemblyCompensationManagement;
#else
extern "C" const IID IID_CATIMfgToolAssemblyCompensationManagement ;
#endif

/**
 * Interface implemented for management of Tool Assembly with tool cutter compensation 
 * in ISO Code based simulation.
 */

class ExportedByMfgItfEnv CATIMfgToolAssemblyCompensationManagement: public CATBaseUnknown
{
  CATDeclareInterface;

  public:

	/**
    *   Retrieves the nominal tool radius of the tool assembly.
    *    @param iCorrectorNumber
    *	  The corrector number value
    *    @param oRadius
    *	  The radius nominal value 
    **/
	virtual HRESULT GetNominalRadius (int iCorrectorNumber,double & oRadius) = 0;

	/**
    *   Retrieves the nominal length of the tool assembly.
    *    @param iCorrectorNumber
    *	  The corrector number value
    *    @param oLength
    *	  The length nominal value 
    **/
	virtual HRESULT GetNominalLength (int iCorrectorNumber,double &oLength) = 0;

	/**
    * Retrieves the tool radius of the tool assembly taking in to account
	*	any tool radius correction set by the user.
    *    @param iCorrectorNumber
    *	  The corrector number value
    *    @param oRadius
    *	  The radius value corrected by the user
	*    @return
    * 	  The return code
    *   <br><b>Legal values</b>:
    *   <ul>
    *   <li>S_OK : The value of radius has been modified by the user.</li>
    *   <li><>S_OK : Radius has not been modified by the user.</li>
    *   </ul>
    **/
	virtual HRESULT GetRadiusForSimulation (int iCorrectorNumber,double& oRadius) = 0;

    /**
	* Retrieves the length of the tool assembly taking in to account
	*	 any tool length correction set by the user.
    *    @param iCorrectorNumber
    *	  The corrector number value
    *    @param oLength
    *	  The length value corrected by the user
	*    @return
    * 	  The return code
    *   <br><b>Legal values</b>:
    *   <ul>
    *   <li>S_OK : The value of length has been modified by the user.</li>
	*   <li><>S_OK : Length has not been modified by the user.</li>
    *   </ul>
    **/
	virtual HRESULT GetLengthForSimulation (int iCorrectorNumber,double& oLength) = 0;
};

CATDeclareHandler(CATIMfgToolAssemblyCompensationManagement, CATBaseUnknown);

#endif

