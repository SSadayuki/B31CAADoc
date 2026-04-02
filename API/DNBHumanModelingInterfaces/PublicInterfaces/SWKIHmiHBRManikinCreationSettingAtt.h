// COPYRIGHT DASSAULT SYSTEMES 2003
#ifndef SWKIHmiHBRManikinCreationSettingAtt_H
#define SWKIHmiHBRManikinCreationSettingAtt_H

/**
 * @CAA2Level L0
 * @CAA2Usage U0
 */

// *****************************************************************************
// Framework DNBHumanModelingInterfaces
// Copyright Safework Inc.
// *****************************************************************************
//  Abstract:
//  ---------
//    SWKIHmiHBRDisplaySettingAtt interface.
// *****************************************************************************
//  Usage:
//  ------
//
// *****************************************************************************
//  Inheritance:
//  ------------
//
//    CATBaseUnknown
//
// *****************************************************************************
//  Main Methods:
//  -------------
//
//    Initialize
//    GetPopulation
//    SetPopulation
//    GetModel
//    SetModel
//    GetReferential
//    SetReferential
//    GetReferentialToCompassLocation
//    SetReferentialToCompassLocation
//    UpdateEnvState
//    GetSettingRep
// *****************************************************************************
//  History
//  -------
//
//  Author: Rachid AZIZI
//  Date  : 04/03/01
//  Goal  : Creation
// *****************************************************************************
//
// --- System
#include "CATBaseUnknown.h"
#include "CATBooleanDef.h"
#include "CATListOfInt.h"
//
// --- System
class CATSettingInfo;
class CATSettingRepository;
class CATUnicodeString;

#ifdef _WINDOWS_SOURCE
#ifdef __SWKHumanModelingItf
#define ExportedBySWKHumanModelingItf __declspec(dllexport)
#else
#define ExportedBySWKHumanModelingItf __declspec(dllimport)
#endif
#else
#define ExportedBySWKHumanModelingItf
#endif

#ifndef LOCAL_DEFINITION_FOR_IID
extern ExportedBySWKHumanModelingItf IID IID_SWKIHmiHBRManikinCreationSettingAtt;
#else
extern "C" const IID IID_SWKIHmiHBRManikinCreationSettingAtt ;
#endif

class ExportedBySWKHumanModelingItf SWKIHmiHBRManikinCreationSettingAtt: public CATBaseUnknown
{
	CATDeclareInterface;

 public:

	/**
	  * Initialize all the attributes of the HPA Postural Score settings.
	  **/
	virtual HRESULT Initialize() = 0;

	virtual HRESULT GetPopulation(int & poIndex) = 0;
	virtual HRESULT SetPopulation(const int piIndex) = 0;
	
	virtual HRESULT GetModel(int & poIndex) = 0;
	virtual HRESULT SetModel(const int piIndex) = 0;
	
	virtual HRESULT GetReferential(int & poIndex) = 0;
	virtual HRESULT SetReferential(const int piIndex) = 0;
	
	virtual HRESULT GetReferentialToCompassLocation(boolean & ReferentialAtCompassLocation) = 0;
	virtual HRESULT SetReferentialToCompassLocation(boolean & ReferentialAtCompassLocation) = 0;

	/**
	  * Update the display of the manikins depending of the settings.
	  **/
	virtual HRESULT UpdateEnvState() = 0;

	/**
	  * Get the setting repository associated with the attributes of the HPA Postural Score settings.
	  **/
	virtual CATSettingRepository * GetSettingRep() const = 0;
};
#endif
