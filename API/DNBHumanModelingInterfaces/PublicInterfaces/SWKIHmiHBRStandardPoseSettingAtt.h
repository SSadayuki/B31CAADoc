// COPYRIGHT DASSAULT SYSTEMES 2003
#ifndef SWKIHmiHBRStandardPoseSettingAtt_H
#define SWKIHmiHBRStandardPoseSettingAtt_H

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
//    GetSit_ParamTranslationX
//    SetSit_ParamTranslationX
//    GetSit_ParamTranslationZ
//    SetSit_ParamTranslationZ
//    GetSitDlg_ButtonKeepVision
//    SetSitDlg_ButtonKeepVision
//    GetSitDlg_ButtonKeepHands
//    SetSitDlg_ButtonKeepHands
//    GetSitDlg_Hand
//    SetSitDlg_Hand
//    GetElbow_EditorStep
//    SetElbow_EditorStep
//    GetElbow_LeftArmButton
//    SetElbow_LeftArmButton
//    GetElbow_RightArmButton
//    SetElbow_RightArmButton
//    GetHandGrasp_EditorStep
//    SetHandGrasp_EditorStep
//    GetHandGrasp_Spherical
//    SetHandGrasp_Spherical
//    GetHandGrasp_Cylindrical
//    SetHandGrasp_Cylindrical
//    GetHandGrasp_Pinch
//    SetHandGrasp_Pinch
//    GetHandGrasp_Posture
//    SetHandGrasp_Posture
//    GetHandGrasp_RightHand
//    SetHandGrasp_RightHand
//    GetHandGrasp_LeftHand
//    SetHandGrasp_LeftHand
//    GetHandGrasp_BothHands
//    SetHandGrasp_BothHands
//    GetLean_EditorStep
//    SetLean_EditorStep
//    GetSquat_EditorStep
//    SetSquat_EditorStep
//    GetStoop_EditorStep
//    SetStoop_EditorStep
//    GetStoop_HipRadioButton
//    SetStoop_HipRadioButton
//    GetStoop_VerRadioButton
//    SetStoop_VerRadioButton
//    GetTwist_EditorStep
//    SetTwist_EditorStep
// *****************************************************************************
//  History
//  -------
//  Author: Rachid Azizi
//  Date  : 04/04/02
//  Goal  : Creation
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
extern ExportedBySWKHumanModelingItf IID IID_SWKIHmiHBRStandardPoseSettingAtt;
#else
extern "C" const IID IID_SWKIHmiHBRStandardPoseSettingAtt ;
#endif

class ExportedBySWKHumanModelingItf SWKIHmiHBRStandardPoseSettingAtt: public CATBaseUnknown
{
  CATDeclareInterface;

  public:
    /**
      * Initialize all the attributes of the StandardPose settings.
      **/
    virtual HRESULT Initialize() = 0;

    virtual HRESULT GetSit_ParamTranslationX(double &poSit_ParamTranslationX)=0;
    virtual HRESULT SetSit_ParamTranslationX(const double piSit_ParamTranslationX)=0;

    virtual HRESULT GetSit_ParamTranslationZ(double &poSit_ParamTranslationZ)=0;
    virtual HRESULT SetSit_ParamTranslationZ(const double piSit_ParamTranslationZ)=0;

    virtual HRESULT GetSitDlg_ButtonKeepVision(int &poSitDlg_ButtonKeepVision)=0;
    virtual HRESULT SetSitDlg_ButtonKeepVision(const int piSitDlg_ButtonKeepVision)=0;

    virtual HRESULT GetSitDlg_ButtonKeepHands(int &poSitDlg_ButtonKeepHands)=0;
    virtual HRESULT SetSitDlg_ButtonKeepHands(const int piSitDlg_ButtonKeepHands)=0;

    virtual HRESULT GetSitDlg_Hand(int &poSitDlg_Hand)=0;
    virtual HRESULT SetSitDlg_Hand(const int piSitDlg_Hand)=0;

    virtual HRESULT GetElbow_EditorStep(double &poElbow_EditorStep)=0;
    virtual HRESULT SetElbow_EditorStep(const double piElbow_EditorStep)=0;

    virtual HRESULT GetElbow_LeftArmButton(int &poElbow_LeftArmButton)=0;
    virtual HRESULT SetElbow_LeftArmButton(const int piElbow_LeftArmButton)=0;

    virtual HRESULT GetElbow_RightArmButton(int &poElbow_RightArmButton)=0;
    virtual HRESULT SetElbow_RightArmButton(const int piElbow_RightArmButton)=0;

    virtual HRESULT GetHandGrasp_EditorStep(double &poHandGrasp_EditorStep)=0;
    virtual HRESULT SetHandGrasp_EditorStep(const double piHandGrasp_EditorStep)=0;

    virtual HRESULT GetHandGrasp_Spherical(int &poHandGrasp_Spherical)=0;
    virtual HRESULT SetHandGrasp_Spherical(const int piHandGrasp_Spherical)=0;

    virtual HRESULT GetHandGrasp_Cylindrical(int &poHandGrasp_Cylindrical)=0;
    virtual HRESULT SetHandGrasp_Cylindrical(const int piHandGrasp_Cylindrical)=0;

    virtual HRESULT GetHandGrasp_Pinch(int &poHandGrasp_Pinch)=0;
    virtual HRESULT SetHandGrasp_Pinch(const int piHandGrasp_Pinch)=0;

    /**
      * Get the hand posture sorted in the CATSettings for the hand grasp.
      *
      * @param piType The type of hand grasp : 1 for Cylindrical, 2 for Spherical and 3 for Pinch.
      * @param piHandSide The hand whose posture is to be retrieved : 1 for left hand or 2 for right hand.
      * @param poHandGrasp_Posture The posture stored into the settings.
      **/
    virtual HRESULT GetHandGrasp_Posture(int piType, int piHandSide, CATUnicodeString &poHandGrasp_Posture)=0;
    
    /**
      * Store a hand posture for a specific type of grasp in the CATSettings.
      *
      * @param piType The type of hand grasp : 1 for Cylindrical, 2 for Spherical and 3 for Pinch.
      * @param piHandSide The hand whose posture is being saveed : 1 for left hand or 2 for right hand.
      * @param piHandGrasp_Posture The hand posture to save.
      **/
    virtual HRESULT SetHandGrasp_Posture(int piType, int piHandSide, const CATUnicodeString piHandGrasp_Posture)=0;

    virtual HRESULT GetHandGrasp_RightHand(int &poHandGrasp_RightHand)=0;
    virtual HRESULT SetHandGrasp_RightHand(const int piHandGrasp_RightHand)=0;

    virtual HRESULT GetHandGrasp_LeftHand(int &poHandGrasp_LeftHand)=0;
    virtual HRESULT SetHandGrasp_LeftHand(const int piHandGrasp_LeftHand)=0;

    virtual HRESULT GetHandGrasp_BothHands(int &poHandGrasp_BothHands)=0;
    virtual HRESULT SetHandGrasp_BothHands(const int piHandGrasp_BothHands)=0;

    virtual HRESULT GetLean_EditorStep(double &poLean_EditorStep)=0;
    virtual HRESULT SetLean_EditorStep(const double piLean_EditorStep)=0;

    virtual HRESULT GetSquat_EditorStep(double &poSquat_EditorStep)=0;
    virtual HRESULT SetSquat_EditorStep(const double piSquat_EditorStep)=0;

    virtual HRESULT GetStoop_EditorStep(double &poStoop_EditorStep)=0;
    virtual HRESULT SetStoop_EditorStep(const double piStoop_EditorStep)=0;

    virtual HRESULT GetStoop_HipRadioButton(int &poStoop_HipRadioButton)=0;
    virtual HRESULT SetStoop_HipRadioButton(const int piStoop_HipRadioButton)=0;

    virtual HRESULT GetStoop_VerRadioButton(int &poStoop_VerRadioButton)=0;
    virtual HRESULT SetStoop_VerRadioButton(const int piStoop_VerRadioButton)=0;

    virtual HRESULT GetTwist_EditorStep(double &poTwist_EditorStep)=0;
    virtual HRESULT SetTwist_EditorStep(const double piTwist_EditorStep)=0;

    /**
      * Update depending of the settings.
      **/
    virtual HRESULT UpdateEnvState()=0;

    virtual HRESULT SaveRepository(const char *tmp=0)=0;

    /**
      * Get the setting repository associated with the attributes of the HBR Standard Pose settings.
      **/
    virtual CATSettingRepository * GetSettingRep() const=0;
};
#endif
