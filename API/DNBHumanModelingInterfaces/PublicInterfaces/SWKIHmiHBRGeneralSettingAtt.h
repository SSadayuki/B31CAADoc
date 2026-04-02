// COPYRIGHT DASSAULT SYSTEMES 2003
#ifndef SWKIHmiHBRGeneralSettingAtt_H
#define SWKIHmiHBRGeneralSettingAtt_H

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
//    GetConstraintResolutionMode
//    SetConstraintResolutionMode
//    GetConstraintResolutionModeInfo
//    SetConstraintResolutionModeLock
//    GetIKModeInterDeleteState
//    SetIKModeInterDeleteState
//    GetIKModeInterDeleteStateInfo
//    SetIKModeInterDeleteStateLock
//    GetIntersegment
//    SetIntersegment
//    GetIntersegmentInfo
//    SetIntersegmentLock
//    GetCustomReportIdEnableState
//    SetCustomReportIdEnableState
//    GetCustomReportIdEnableStateInfo
//    SetCustomReportIdEnableStateLock
//    GetReportPath
//    SetReportPath
//    GetReportPathInfo
//    SetReportPathLock
//    GetHandGraspLockSelectedSegment
//    SetHandGraspLockSelectedSegment
//    GetHandGraspLockSelectedSegmentInfo
//    SetHandGraspLockSelectedSegmentLock
//    GetHandGraspPostureManuallySet
//    SetHandGraspPostureManuallySet
//    GetHandGraspPostureManuallySetInfo
//    SetHandGraspPostureManuallySetLock
//    GetHandGraspPostureOffset
//    SetHandGraspPostureOffset
//    GetHandGraspPostureOffsetInfo
//    SetHandGraspPostureOffsetLock
//    GetSaveManikinAttributesOnInstance
//    SetSaveManikinAttributesOnInstance
//    GetSaveManikinAttributesOnInstanceInfo
//    SetSaveManikinAttributesOnInstanceLock
//    UpdateEnvState
//    GetSettingRep
// *****************************************************************************
//  History
//  -------
//
//  Author: Rachid Azizi
//  Date  : 04/02/27
//  Goal  : Creation
//
// *****************************************************************************
//
// --- System
#include "CATBaseUnknown.h"
#include "CATListOfCATUnicodeString.h"
#include "CATListOfDouble.h"
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
extern ExportedBySWKHumanModelingItf IID IID_SWKIHmiHBRGeneralSettingAtt;
#else
extern "C" const IID IID_SWKIHmiHBRGeneralSettingAtt;
#endif

class ExportedBySWKHumanModelingItf SWKIHmiHBRGeneralSettingAtt: public CATBaseUnknown
{
  CATDeclareInterface;

  public:

    /**
      * Initialize all the attributes of the HBRGeneral settings.
      **/
    virtual HRESULT Initialize() = 0;

    /**
      * This function gets the constraint resolution mode
      *
      * @param piMode 0 for the automatic mode and 1 for the manual mode.
      **/
    virtual HRESULT GetConstraintResolutionMode(int & poMode) = 0;

    /**
      * This function sets the constraint resolution mode
      *
      * @param piMode 0 for the automatic mode and 1 for the manual mode.
      **/
    virtual HRESULT SetConstraintResolutionMode(const int piMode) = 0;

    /**
      * Get the CATSettingInfo of the Constraint resolution mode.
      **/
    virtual HRESULT GetConstraintResolutionModeInfo(CATSettingInfo * poInfo) = 0;

    /**
      * Set the Lock of the Constraint Resolution Mode.
      **/
    virtual HRESULT SetConstraintResolutionModeLock(unsigned char piLocked) = 0;

    /**
      * This function gets the 'Delete interactive' state
      *
      * @param poAvailable 0 for disable and 1 for enable.
      **/
    virtual HRESULT GetIKModeInterDeleteState(int & poAvailable) = 0;

    /**
      * This function sets the 'Delete interactive' state.
      *
      * @param piAvailable 0 for disable and 1 for enable.
      **/
    virtual HRESULT SetIKModeInterDeleteState(const int piAvailable) = 0;

    /**
      * Get the CATSettingInfo of the print availability.
      **/
    virtual HRESULT GetIKModeInterDeleteStateInfo(CATSettingInfo * poInfo) = 0;

    /**
      * Set the Lock of the IK Mode Inter-Delete State.
      **/
    virtual HRESULT SetIKModeInterDeleteStateLock(unsigned char piLocked) = 0;

    /**
      * This function gets the 'Inter-Segment mode' state.
      *
      * @param piAvailable 1 for Default and 0 for Inter-Segment.
      **/
    virtual HRESULT GetIntersegment(int & poMode) = 0;

    /**
      * This function sets the 'Inter-Segment mode' state.
      *
      * @param piAvailable 1 for Default and 0 for Inter-Segment.
      **/
    virtual HRESULT SetIntersegment(const int piMode) = 0;

    /**
      * Get the CATSettingInfo on the Inter-segment angle mode.
      **/
    virtual HRESULT GetIntersegmentInfo(CATSettingInfo * poInfo) = 0;

    /**
      * Set the Lock of the IK Mode Inter-Delete State.
      **/
    virtual HRESULT SetIntersegmentLock(unsigned char piLocked) = 0;

    /**
      * This function gets the 'Custom Report ID Enable' state.
      *
      * @param poAvailable 0 for disable and 1 for enable.
      **/
    virtual HRESULT GetCustomReportIdEnableState(int & poAvailable) = 0;

    /**
      * This function sets the 'Custom Report ID Enable' state.
      *
      * @param piAvailable 0 for disable and 1 for enable.
      **/
    virtual HRESULT SetCustomReportIdEnableState(const int piAvailable) = 0;

    /**
      * Get the CATSettingInfo of the 'Custom Report ID Enable' option.
      **/
    virtual HRESULT GetCustomReportIdEnableStateInfo(CATSettingInfo * poInfo) = 0;

    /**
      * Set the Lock of the Custom Report ID Enable State.
      **/
    virtual HRESULT SetCustomReportIdEnableStateLock(unsigned char piLocked) = 0;

    /**
      * This function gets the 'Report Path' of the Reports option.
      **/
    virtual HRESULT GetReportPath(CATUnicodeString & poPath) = 0;

    /**
      * This function sets the 'Report Path' of the Reports option.
      *
      * @param piPath is the path to be set.
      **/
    virtual HRESULT SetReportPath(const CATUnicodeString piPath) = 0;

    /**
      * Get the CATSettingInfo on the ReportPath.
      **/
    virtual HRESULT GetReportPathInfo(CATSettingInfo * poInfo) = 0;

    /**
      * Set the Lock of the 'Report Path' in the Reports option.
      **/
    virtual HRESULT SetReportPathLock(unsigned char piLocked) = 0;

    /**
      * This function gets the 'Hand Grasp Lock Selected Segment' state.
      *
      * @param piAvailable 1 for Enabled and 0 Disabled.
      **/
    virtual HRESULT GetHandGraspLockSelectedSegment(int & poMode) = 0;

    /**
      * This function sets the 'Hand Grasp Lock Selected Segment' state.
      *
      * @param piAvailable 1 for Enabled and 0 Disabled.
      **/
    virtual HRESULT SetHandGraspLockSelectedSegment(const int piMode) = 0;

    /**
      * Get the CATSettingInfo on the Hand Grasp Lock Selected Segment.
      **/
    virtual HRESULT GetHandGraspLockSelectedSegmentInfo(CATSettingInfo * poInfo) = 0;

    /**
      * Set the Lock of the 'Hand Grasp Lock Selected Segment' option.
      **/
    virtual HRESULT SetHandGraspLockSelectedSegmentLock(unsigned char piLocked) = 0;

    /**
      * This function gets the 'Use grasping posture Manually set' state.
      *
      * @param piAvailable 1 for Enabled and 0 Disabled.
      **/
    virtual HRESULT GetHandGraspPostureManuallySet(int & poMode) = 0;

    /**
      * This function sets the 'Use grasping posture Manually set' state.
      *
      * @param piAvailable 1 for Enabled and 0 Disabled.
      **/
    virtual HRESULT SetHandGraspPostureManuallySet(const int piMode) = 0;

    /**
      * Get the CATSettingInfo on the Use grasping posture Manually set.
      **/
    virtual HRESULT GetHandGraspPostureManuallySetInfo(CATSettingInfo * poInfo) = 0;

    /**
      * Set the Lock of the 'Use grasping posture Manually set' option.
      **/
    virtual HRESULT SetHandGraspPostureManuallySetLock(unsigned char piLocked) = 0;

	/**
      * This function gets the names of the pinch offsets.
      *
      * @param poNames The list of names.
      **/
    virtual HRESULT GetPinchOffsetNames(CATListOfCATUnicodeString & poNames) = 0;

    /**
      * This function sets the names of the pinch offsets.
      *
      * @param piNames The list of names.
      **/
    virtual HRESULT SetPinchOffsetNames(const CATListOfCATUnicodeString & piNames) = 0;

    /**
      * Get the CATSettingInfo
      **/
    virtual HRESULT GetPinchOffsetNamesInfo(CATSettingInfo * poInfo) = 0;

    /**
      * Set the Lock
      **/
    virtual HRESULT SetPinchOffsetNamesLock(unsigned char piLocked) = 0;

	/**
      * This function gets the names of the cylindrical offsets.
      *
      * @param poNames The list of names.
      **/
    virtual HRESULT GetCylindricalOffsetNames(CATListOfCATUnicodeString & poNames) = 0;

    /**
      * This function sets the names of the cylindrical offsets.
      *
      * @param piNames The list of names.
      **/
    virtual HRESULT SetCylindricalOffsetNames(const CATListOfCATUnicodeString & piNames) = 0;

    /**
      * Get the CATSettingInfo
      **/
    virtual HRESULT GetCylindricalOffsetNamesInfo(CATSettingInfo * poInfo) = 0;

    /**
      * Set the Lock
      **/
    virtual HRESULT SetCylindricalOffsetNamesLock(unsigned char piLocked) = 0;

	/**
      * This function gets the names of the spherical offsets.
      *
      * @param poNames The list of names.
      **/
    virtual HRESULT GetSphericalOffsetNames(CATListOfCATUnicodeString & poNames) = 0;

    /**
      * This function sets the names of the spherical offsets.
      *
      * @param piNames The list of names.
      **/
    virtual HRESULT SetSphericalOffsetNames(const CATListOfCATUnicodeString & piNames) = 0;

    /**
      * Get the CATSettingInfo
      **/
    virtual HRESULT GetSphericalOffsetNamesInfo(CATSettingInfo * poInfo) = 0;

    /**
      * Set the Lock
      **/
    virtual HRESULT SetSphericalOffsetNamesLock(unsigned char piLocked) = 0;

	/**
      * This function gets the values of the pinch offsets.
      *
      * @param poValues The list of values.
      **/
    virtual HRESULT GetPinchOffsetValues(CATListOfDouble & poValues) = 0;

    /**
      * This function sets the values of the pinch offsets.
      *
      * @param piValues The list of values.
      **/
    virtual HRESULT SetPinchOffsetValues(const CATListOfDouble & piValues) = 0;

    /**
      * Get the CATSettingInfo
      **/
    virtual HRESULT GetPinchOffsetValuesInfo(CATSettingInfo * poInfo) = 0;

    /**
      * Set the Lock
      **/
    virtual HRESULT SetPinchOffsetValuesLock(unsigned char piLocked) = 0;

	/**
      * This function gets the values of the cylindrical offsets.
      *
      * @param poValues The list of values.
      **/
    virtual HRESULT GetCylindricalOffsetValues(CATListOfDouble & poValues) = 0;

    /**
      * This function sets the values of the cylindrical offsets.
      *
      * @param piValues The list of values.
      **/
    virtual HRESULT SetCylindricalOffsetValues(const CATListOfDouble & piValues) = 0;

    /**
      * Get the CATSettingInfo
      **/
    virtual HRESULT GetCylindricalOffsetValuesInfo(CATSettingInfo * poInfo) = 0;

    /**
      * Set the Lock
      **/
    virtual HRESULT SetCylindricalOffsetValuesLock(unsigned char piLocked) = 0;

	/**
      * This function gets the values of the spherical offsets.
      *
      * @param poValues The list of values.
      **/
    virtual HRESULT GetSphericalOffsetValues(CATListOfDouble & poValues) = 0;

    /**
      * This function sets the values of the spherical offsets.
      *
      * @param piValues The list of values.
      **/
    virtual HRESULT SetSphericalOffsetValues(const CATListOfDouble & piValues) = 0;

    /**
      * Get the CATSettingInfo
      **/
    virtual HRESULT GetSphericalOffsetValuesInfo(CATSettingInfo * poInfo) = 0;

    /**
      * Set the Lock
      **/
    virtual HRESULT SetSphericalOffsetValuesLock(unsigned char piLocked) = 0;

	/**
      * This function gets the selected pinch offset.
      *
      * @param poSelectedOffset The selected offset.
      **/
    virtual HRESULT GetSelectedPinchOffset(int & poSelectedOffset) = 0;

    /**
      * This function sets the selected pinch offset.
      *
      * @param piSelectedOffset The selected offset.
      **/
    virtual HRESULT SetSelectedPinchOffset(int piSelectedOffset) = 0;

    /**
      * Get the CATSettingInfo
      **/
    virtual HRESULT GetSelectedPinchOffsetInfo(CATSettingInfo * poInfo) = 0;

    /**
      * Set the Lock
      **/
    virtual HRESULT SetSelectedPinchOffsetLock(unsigned char piLocked) = 0;

	/**
      * This function gets the selected cylindrical offset.
      *
      * @param poSelectedOffset The selected offset.
      **/
    virtual HRESULT GetSelectedCylindricalOffset(int & poSelectedOffset) = 0;

    /**
      * This function sets the selected cylindrical offset.
      *
      * @param piSelectedOffset The selected offset.
      **/
    virtual HRESULT SetSelectedCylindricalOffset(int piSelectedOffset) = 0;

    /**
      * Get the CATSettingInfo
      **/
    virtual HRESULT GetSelectedCylindricalOffsetInfo(CATSettingInfo * poInfo) = 0;

    /**
      * Set the Lock
      **/
    virtual HRESULT SetSelectedCylindricalOffsetLock(unsigned char piLocked) = 0;

	/**
      * This function gets the selected spherical offset.
      *
      * @param poSelectedOffset The selected offset.
      **/
    virtual HRESULT GetSelectedSphericalOffset(int & poSelectedOffset) = 0;

    /**
      * This function sets the selected spherical offset.
      *
      * @param piSelectedOffset The selected offset.
      **/
    virtual HRESULT SetSelectedSphericalOffset(int piSelectedOffset) = 0;

    /**
      * Get the CATSettingInfo
      **/
    virtual HRESULT GetSelectedSphericalOffsetInfo(CATSettingInfo * poInfo) = 0;

    /**
      * Set the Lock
      **/
    virtual HRESULT SetSelectedSphericalOffsetLock(unsigned char piLocked) = 0;

    /**
      * This function gets the 'Grasping Posture Offset' state.
      *
      * @param piAvailable 1 for Enabled and 0 Disabled.
      **/
    virtual HRESULT GetHandGraspPostureOffset(int & poMode) = 0;

    /**
      * This function sets the 'Grasping Posture Offset' state.
      *
      * @param piAvailable 1 for Enabled and 0 Disabled.
      **/
    virtual HRESULT SetHandGraspPostureOffset(const int piMode) = 0;

    /**
      * Get the CATSettingInfo on the Grasping Posture Offset.
      **/
    virtual HRESULT GetHandGraspPostureOffsetInfo(CATSettingInfo * poInfo) = 0;

    /**
      * Set the Lock of the 'Grasping Posture Offset' option.
      **/
    virtual HRESULT SetHandGraspPostureOffsetLock(unsigned char piLocked) = 0;

    /**
      * This function gets the 'SaveManikinAttributesOnInstance' state.
      *
      * @param piAvailable 1 for Enabled and 0 Disabled.
      **/
    virtual HRESULT GetSaveManikinAttributesOnInstance(int & poMode) = 0;

    /**
      * This function sets the 'SaveManikinAttributesOnInstance' state.
      *
      * @param piAvailable 1 for Enabled and 0 Disabled.
      **/
    virtual HRESULT SetSaveManikinAttributesOnInstance(const int piMode) = 0;

    /**
      * Get the CATSettingInfo on the SaveManikinAttributesOnInstance.
      **/
    virtual HRESULT GetSaveManikinAttributesOnInstanceInfo(CATSettingInfo * poInfo) = 0;

    /**
      * Set the Lock of the 'SaveManikinAttributesOnInstance' option.
      **/
    virtual HRESULT SetSaveManikinAttributesOnInstanceLock(unsigned char piLocked) = 0;

    /**
      * Update the display of the manikins depending of the settings.
      **/
    virtual HRESULT UpdateEnvState()=0;

// raz to be removed
    /**
      * Get the setting repository associated with the attributes of the HBR general settings.
      **/
    virtual CATSettingRepository * GetSettingRep() const = 0;
};

//------------------------------------------------------------------

#endif
