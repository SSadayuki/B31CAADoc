/* -*-c++-*- */
// COPYRIGHT DASSAULT SYSTEMES 2005
//=============================================================================
#ifndef CATIMfgToolCutterCompensationManagement_H
#define CATIMfgToolCutterCompensationManagement_H

/**
* @CAA2Level L1
* @CAA2Usage U3
*/

#include "MfgItfEnv.h"
#include "CATBaseUnknown.h"

#ifndef LOCAL_DEFINITION_FOR_IID
extern IID ExportedByMfgItfEnv IID_CATIMfgToolCutterCompensationManagement;
#else
extern "C" const IID IID_CATIMfgToolCutterCompensationManagement;
#endif

/**   
 * Interface implemented on the Manufacturing Program for management of cutter compensation 
 *   in ISO Code based simulation.
 */

class ExportedByMfgItfEnv CATIMfgToolCutterCompensationManagement : public CATBaseUnknown
{
  CATDeclareInterface ;  

  public:

	/**
    *   Retrieves the nominal value of the tool radius that can be corrected. 
    *    @param iCorrectorNumber
    *	  The corrector number value
    *    @param oRadius
    *	  The radius nominal value 
    **/
	virtual HRESULT GetNominalRadius (int iCorrectorNumber,double & oRadius) = 0;

	/**
    *   Retrieves the nominal value of the tool length that can be corrected. 
    *    @param iCorrectorNumber
    *	  The corrector number value
    *    @param oLength
    *	  The length nominal value 
    **/
	virtual HRESULT GetNominalLength (int iCorrectorNumber,double &oLength) = 0;

	/**
    *   Retrieves the value (if it exists) of the tool radius corrected by the user. 
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
    *   Retrieves the value (if it exists) of the tool length corrected by the user. 
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

	/**
    *   Sets the value of the tool length corrected by the user. 
    *    @param iCorrectorNumber
    *	  The corrector number value
    *    @param iLength
    *	  The length value corrected by the user
    **/
	virtual HRESULT SetLengthForSimulation (int iCorrectorNumber,double iLength) = 0;

	/**
    *   Sets the value of the tool radius corrected by the user. 
    *    @param iCorrectorNumber
    *	  The corrector number value
    *    @param iRadius
    *	  The radius value corrected by the user
    **/
	virtual HRESULT SetRadiusForSimulation (int iCorrectorNumber,double iRadius) = 0;

};

CATDeclareHandler(CATIMfgToolCutterCompensationManagement, CATBaseUnknown);

#endif







