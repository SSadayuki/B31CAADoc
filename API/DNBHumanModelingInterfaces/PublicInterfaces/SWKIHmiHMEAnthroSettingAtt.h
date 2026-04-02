// COPYRIGHT DASSAULT SYSTEMES 2003
#ifndef SWKIHmiHMEAnthroSettingAtt_H
#define SWKIHmiHMEAnthroSettingAtt_H

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
// *****************************************************************************
//  History
//  -------
//
//  Author: Rachid AZIZI
//  Date  : 04/02/27
//  Goal  : Creation
// *****************************************************************************
//
// --- System
#include "CATBaseUnknown.h"
#include "CATListOfCATUnicodeString.h"
#include "CATListOfInt.h"
#include "CATBooleanDef.h"
//
// --- System
class CATSettingInfo;
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
extern ExportedBySWKHumanModelingItf IID IID_SWKIHmiHMEAnthroSettingAtt;
#else
extern "C" const IID IID_SWKIHmiHMEAnthroSettingAtt ;
#endif

class ExportedBySWKHumanModelingItf SWKIHmiHMEAnthroSettingAtt: public CATBaseUnknown
{
  CATDeclareInterface;

  public:

	/**
	  *
	  **/
	virtual HRESULT Initialize() = 0;

	virtual HRESULT GetPopulations(CATListOfCATUnicodeString & poPopulationList) = 0;
	virtual HRESULT SavePopulations() = 0;
	virtual HRESULT GetPopulationsInfo(CATSettingInfo * poInfo) = 0;
	virtual HRESULT SetPopulationsLock (unsigned char iLocked) = 0;

	virtual void ResetPopulations() = 0;
	virtual void RollbackPopulations() = 0;
	virtual void RemovePopulationsAtPositions(const CATListOfInt & piPositions) = 0;
	virtual void AddPopulation(const CATUnicodeString & piName, CATBaseUnknown * piPop) = 0;
	virtual boolean IsUserPopulation(const CATUnicodeString & piName) = 0;

	virtual HRESULT GetAnthroCopyPasteBehavior(int & poBehavior) = 0;
	virtual HRESULT SetAnthroCopyPasteBehavior(const int piBehavior) = 0;
	virtual HRESULT GetAnthroCopyPasteBehaviorInfo(CATSettingInfo * poInfo) = 0;
	virtual HRESULT SetAnthroCopyPasteBehaviorLock (unsigned char iLocked) = 0;

};

#endif
