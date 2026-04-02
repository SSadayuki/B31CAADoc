// COPYRIGHT DASSAULT SYSTEMES 2003
#ifndef SWKIHmiHAAErgoAnalysisSettingAtt_H
#define SWKIHmiHAAErgoAnalysisSettingAtt_H

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
//    SWKIHmiHAAErgoAnalysisSettingAtt interface.
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
//    GetShoulderElevation
//    SetShoulderElevation
//    GetInfoShoulderElevation
//    GetArmAbduction
//    SetArmAbduction
//    GetInfoArmAbduction
//    GetArmRotation
//    SetArmRotation
//    GetInfoArmRotation
//    GetWristDeviation
//    SetWristDeviation
//    GetInfoWristDeviation
//    GetWristTwist
//    SetWristTwist
//    GetInfoWristTwist
//    GetNeckTwist
//    SetNeckTwist
//    GetInfoNeckTwist
//    GetNeckSideBend
//    SetNeckSideBend
//    GetInfoNeckSideBend
//    GetTrunkTwist
//    SetTrunkTwist
//    GetInfoTrunkTwist
//    GetTrunkSideBend
//    SetTrunkSideBend
//    GetInfoTrunkSideBend
//    UpdateEnvState
//    GetSettingRep
// *****************************************************************************
//  History
//  -------
//
//  Author: Rachid Azizi
//  Date  : 04/02/24
//  Goal  : Creation
//
// *****************************************************************************
//
// --- System
#include "CATBaseUnknown.h"
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
extern ExportedBySWKHumanModelingItf IID IID_SWKIHmiHAAErgoAnalysisSettingAtt;
#else
extern "C" const IID IID_SWKIHmiHAAErgoAnalysisSettingAtt;
#endif

class ExportedBySWKHumanModelingItf SWKIHmiHAAErgoAnalysisSettingAtt : public CATBaseUnknown
{
  CATDeclareInterface;

  public:

	/**
	  * Initialize all the attributes of the SWKHmiHAAErgoAnalysisSettings settings.
	  **/
	virtual HRESULT Initialize() = 0;

	/**
	  * This function gets the shoulder elevation value.
	  *
	  * @param poShoulderElevation The shoulder elevation value.
	  **/
	virtual HRESULT GetShoulderElevation(double & poShoulderElevation) = 0;

	/**
	  * This function sets the shoulder elevation value.
	  *
	  * @param piShoulderElevation The new shoulder elevation value.
	  **/
	virtual HRESULT SetShoulderElevation(const double piShoulderElevation) = 0;

	/**
	  * Get the CATSettingInfo of the shoulder elevation value.
	  **/
	virtual HRESULT GetShoulderElevationInfo(CATSettingInfo * poInfo) = 0;

	/**
	  * Set the Lock of the shoulder elevation.
	  **/
	virtual HRESULT SetShoulderElevationLock (unsigned char iLocked) = 0;

	/**
	  * This function gets the arm abduction value.
	  *
	  * @param poArmAbduction The arm abduction value.
	  **/
	virtual HRESULT GetArmAbduction(double & poArmAbduction) = 0;

	/**
	  * This function sets the arm abduction value.
	  *
	  * @param piArmAbduction The new arm abduction value.
	  **/
	virtual HRESULT SetArmAbduction(const double piArmAbduction) = 0;

	/**
	  * Get the CATSettingInfo of the arm abduction value.
	  **/
	virtual HRESULT GetArmAbductionInfo(CATSettingInfo * poInfo) = 0;

	/**
	  * Set the Lock of the Arm Abduction.
	  **/
	virtual HRESULT SetArmAbductionLock (unsigned char iLocked) = 0;

	/**
	  * This function gets the arm rotation value.
	  *
	  * @param poArmRotation The arm rotation value.
	  **/
	virtual HRESULT GetArmRotation(double & poArmRotation) = 0;

	/**
	  * This function sets the arm rotation value.
	  *
	  * @param piArmRotation The new arm rotatiion value.
	  **/
	virtual HRESULT SetArmRotation(const double piArmRotation) = 0;

	/**
	  * Get the CATSettingInfo of the arm rotation value.
	  **/
	virtual HRESULT GetArmRotationInfo(CATSettingInfo * poInfo) = 0;

	/**
	  * Set the Lock of the Arm Rotation.
	  **/
	virtual HRESULT SetArmRotationLock (unsigned char iLocked) = 0;

	/**
	  * This function gets the wrist deviation value.
	  *
	  * @param poWristDeviation The wrist deviation value.
	  **/
	virtual HRESULT GetWristDeviation(double & poWristDeviation) = 0;

	/**
	  * This function sets the wrist deviation value.
	  *
	  * @param piWristDeviation The new wrist deviatiion value.
	  **/
	virtual HRESULT SetWristDeviation(const double piWristDeviation) = 0;

	/**
	  * Get the CATSettingInfo of the wrist deviation value.
	  **/
	virtual HRESULT GetWristDeviationInfo(CATSettingInfo * poInfo) = 0;

	/**
	  * Set the Lock of the Wrist Deviation.
	  **/
	virtual HRESULT SetWristDeviationLock (unsigned char iLocked) = 0;

	/**
	  * This function gets the wrist twist value.
	  *
	  * @param poWristTwist The wrist twist value.
	  **/
	virtual HRESULT GetWristTwist(double & poWristTwist) = 0;

	/**
	  * This function sets the wrist twist value.
	  *
	  * @param piWristTwist The new wrist twist value.
	  **/
	virtual HRESULT SetWristTwist(const double piWristTwist) = 0;

	/**
	  * Get the CATSettingInfo of the wrist twist value.
	  **/
	virtual HRESULT GetWristTwistInfo(CATSettingInfo * poInfo) = 0;

	/**
	  * Set the Lock of the Wrist Twist.
	  **/
	virtual HRESULT SetWristTwistLock (unsigned char iLocked) = 0;

	/**
	  * This function gets the neck twist value.
	  *
	  * @param poNeckTwist The neck twist value.
	  **/
	virtual HRESULT GetNeckTwist(double & poNeckTwist) = 0;

	/**
	  * This function sets the neck twist value.
	  *
	  * @param piNeckTwist The new neck twist value.
	  **/
	virtual HRESULT SetNeckTwist(const double piNeckTwist) = 0;

	/**
	  * Get the CATSettingInfo of the neck twist value.
	  **/
	virtual HRESULT GetNeckTwistInfo(CATSettingInfo * poInfo) = 0;

	/**
	  * Set the Lock of the Neck Twist.
	  **/
	virtual HRESULT SetNeckTwistLock (unsigned char iLocked) = 0;

	/**
	  * This function gets the neck side bend value.
	  *
	  * @param poNeckSideBend The neck side bend value.
	  **/
	virtual HRESULT GetNeckSideBend(double & poNeckSideBend) = 0;

	/**
	  * This function sets the neck side bend value.
	  *
	  * @param piNeckSideBend The new neck side bend value.
	  **/
	virtual HRESULT SetNeckSideBend(const double piNeckSideBend) = 0;

	/**
	  * Get the CATSettingInfo of the neck side bend value.
	  **/
	virtual HRESULT GetNeckSideBendInfo(CATSettingInfo * poInfo) = 0;

	/**
	  * Set the Lock of the Neck Side Bend.
	  **/
	virtual HRESULT SetNeckSideBendLock (unsigned char iLocked) = 0;

	/**
	  * This function gets the trunk twist value.
	  *
	  * @param poTrunkTwist The trunk twist value.
	  **/
	virtual HRESULT GetTrunkTwist(double & poTrunkTwist) = 0;

	/**
	  * This function sets the trunk twist value.
	  *
	  * @param piTrunkTwist The new trunk twist value.
	  **/
	virtual HRESULT SetTrunkTwist(const double piTrunkTwist) = 0;
	
	/**
	  * Get the CATSettingInfo of the trunk twist value.
	  **/
	virtual HRESULT GetTrunkTwistInfo(CATSettingInfo * poInfo) = 0;

	/**
	  * Set the Lock of the Trunk Twist.
	  **/
	virtual HRESULT SetTrunkTwistLock (unsigned char iLocked) = 0;

	/**
	  * This function gets the trunk side bend value.
	  *
	  * @param poTrunkSideBend The trunk side bend value.
	  **/
	virtual HRESULT GetTrunkSideBend(double & poTrunkSideBend) = 0;

	/**
	  * This function sets the trunk side bend value.
	  *
	  * @param piTrunkSideBend The new trunk side bend value.
	  **/
	virtual HRESULT SetTrunkSideBend(const double piTrunkSideBend) = 0;

	/**
	  * Get the CATSettingInfo of the trunk side bend value.
	  **/
	virtual HRESULT GetTrunkSideBendInfo(CATSettingInfo * poInfo) = 0;

	/**
	  * Set the Lock of the Trunk Side Bend.
	  **/
	virtual HRESULT SetTrunkSideBendLock (unsigned char iLocked) = 0;

	/**
	  * Update the display of the manikins depending of the settings.
	  **/
	virtual HRESULT UpdateEnvState() = 0;

	/**
	  * Get the setting repository associated with the attributes of the HBR general settings.
	  **/
	virtual CATSettingRepository * GetSettingRep() const = 0;
};
#endif
