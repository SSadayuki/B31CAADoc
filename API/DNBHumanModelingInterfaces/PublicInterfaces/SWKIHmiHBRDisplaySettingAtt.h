// COPYRIGHT DASSAULT SYSTEMES 2003
#ifndef SWKIHmiHBRDisplaySettingAtt_H
#define SWKIHmiHBRDisplaySettingAtt_H

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
//    GetConstraintResolvedColor
//    SetConstraintResolvedColor
//    GetInfoConstraintResolvedColor
//    GetConstraintFailedColor
//    SetConstraintFailedColor
//    GetInfoConstraintFailedColor
//    GetConstraintUnresolvedColor
//    SetConstraintUnresolvedColor
//    GetInfoConstraintUnresolvedColor
//    GetConstraintNormalArrowColor
//    SetConstraintNormalArrowColor
//    GetInfoConstraintNormalArrowColor
//    GetConstraintNormalArrowAvailability
//    SetConstraintNormalArrowAvailability
//    GetInfoConstraintNormalArrowAvailability
//    GetConstraintDeactivatedColor
//    SetConstraintDeactivatedColor
//    GetInfoConstraintDeactivatedColor
//    GetConstraintTemporaryColor
//    SetConstraintTemporaryColor
//    GetInfoConstraintTemporaryColor
//    GetVisionPeripheralConeColor
//    SetVisionPeripheralConeColor
//    GetInfoVisionPeripheralConeColor
//    GetVisionCentralConeColor
//    SetVisionCentralConeColor
//    GetInfoVisionCentralConeColor
//    GetVisionBlindSpotColor
//    SetVisionBlindSpotColor
//    GetInfoVisionBlindSpotColor
//    GetVisionPeripheralContourRotation
//    SetVisionPeripheralContourRotation
//    GetPrintColor
//    SetPrintColor
//    GetInfoPrintColor
//    GetPrintTransparency
//    SetPrintTransparency
//    GetInfoPrintTransparency
//    GetIKPrintAvailability
//    SetIKPrintAvailability
//    GetInfoIKPrintAvailability
//    GetReachPrintAvailability
//    SetReachPrintAvailability
//    GetInfoReachPrintAvailability
//    GetLoadDeactivatedColor
//    SetLoadDeactivatedColor
//    GetInfoLoadDeactivatedColor
//    GetLoadActivatedColor
//    SetLoadActivatedColor
//    GetInfoLoadActivatedColor
//    GetLoadDisplayMode
//    SetLoadDisplayMode
//    GetInfoLoadDisplayMode
//    GetSegmentOffsetDeactivatedColor
//    SetSegmentOffsetDeactivatedColor
//    GetInfoSegmentOffsetDeactivatedColor
//    GetSegmentOffsetActivatedColor
//    SetSegmentOffsetActivatedColor
//    GetInfoSegmentOffsetActivatedColor
//    GetSelectedHandGraspColor
//    SetSelectedHandGraspColor
//    GetSelectedHandGraspColorInfo
//    GetConstraintLineType
//    SetConstraintLineType
//    GetConstraintLineThickness
//    SetConstraintLineThickness
//    UpdateEnvState
//    GetSettingRep
// *****************************************************************************
//  History
//  -------
//
//  Author: Rachid Azizi
//  Date  : 04/02/25
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
extern ExportedBySWKHumanModelingItf IID IID_SWKIHmiHBRDisplaySettingAtt;
#else
extern "C" const IID IID_SWKIHmiHBRDisplaySettingAtt;
#endif

class ExportedBySWKHumanModelingItf SWKIHmiHBRDisplaySettingAtt: public CATBaseUnknown
{
  CATDeclareInterface;

  public:

    enum SWKEConstraintCategory
    {
        SWKEResolved = 0,
        SWKEFailed = 1,
        SWKEUnresolved = 2,
        SWKEDeactivated = 3,
        SWKETemporary = 4,
    };

    /**
      * Initialize all the attributes of the HBRDisplay settings.
      **/
    virtual HRESULT Initialize() = 0;

    /**
      * This function gets the color used for the resolved constraints.
      *
      * @param poColor The color returned.
      **/
    virtual HRESULT GetConstraintResolvedColor(unsigned & poColor) = 0;

    /**
      * This function gets the color used for the resolved constraints.
      *
      * @param poRed The red component of the color.
      *
      * @param poGreen The green component of the color.
      *
      * @param poBlue The blue component of the color.
      **/
    virtual HRESULT GetConstraintResolvedColor(unsigned & poRed, 
                                               unsigned & poGreen, 
                                               unsigned & poBlue) = 0;

    /**
      * This function sets the color used for the resolved constraints.
      *
      * @param piColor The new color.
      **/
    virtual HRESULT SetConstraintResolvedColor(const unsigned piColor) = 0;

    /**
      * Get the CATSettingInfo of the Constraint Resolved Color.
      **/
    virtual HRESULT GetConstraintResolvedColorInfo(CATSettingInfo * poInfo) = 0;

    /**
      * Set the Lock of the Constraint Resolved Color.
      **/
    virtual HRESULT SetConstraintResolvedColorLock(unsigned char iLocked) = 0;

    /**
      * This function gets the color used for the failed constraints.
      *
      * @param poColor The color returned.
      **/
    virtual HRESULT GetConstraintFailedColor(unsigned & poColor) = 0;

    /**
      * This function gets the color used for the failed constraints.
      *
      * @param poRed The red component of the color.
      *
      * @param poGreen The green component of the color.
      *
      * @param poBlue The blue component of the color.
      **/
    virtual HRESULT GetConstraintFailedColor(unsigned & poRed, 
                                             unsigned & poGreen, 
                                             unsigned & poBlue) = 0;

    /**
      * This function sets the color used for the failed constraints.
      *
      * @param piColor The new color.
      **/
    virtual HRESULT SetConstraintFailedColor(const unsigned piColor) = 0;

    /**
      * Get the CATSettingInfo of the Constraint Failed Color.
      **/
    virtual HRESULT GetConstraintFailedColorInfo(CATSettingInfo * poInfo) = 0;

    /**
      * Set the Lock of the Constraint Failed Color.
      **/
    virtual HRESULT SetConstraintFailedColorLock(unsigned char iLocked) = 0;

    /**
      * This function gets the color used for the unresolved constraints.
      *
      * @param poColor The color returned.
      **/
    virtual HRESULT GetConstraintUnresolvedColor(unsigned & poColor) = 0;

    /**
      * This function gets the color used for the unresolved constraints.
      *
      * @param poRed The red component of the color.
      *
      * @param poGreen The green component of the color.
      *
      * @param poBlue The blue component of the color.
      **/
    virtual HRESULT GetConstraintUnresolvedColor(unsigned & poRed, 
                                                 unsigned & poGreen, 
                                                 unsigned & poBlue) = 0;

    /**
      * This function sets the color used for the unresolved constraints.
      *
      * @param piColor The new color.
      **/
    virtual HRESULT SetConstraintUnresolvedColor(const unsigned piColor) = 0;

    /**
      * Get the CATSettingInfo of the Constraint Unresolved Color.
      **/
    virtual HRESULT GetConstraintUnresolvedColorInfo(CATSettingInfo * poInfo) = 0;

    /**
      * Set the Lock of the Constraint Unresolved Color.
      **/
    virtual HRESULT SetConstraintUnresolvedColorLock(unsigned char iLocked) = 0;

    /**
      * This function gets the color used for the normal vector of
      * the object(plane) of a constraint.
      *
      * @param poColor The color returned.
      **/
    virtual HRESULT GetConstraintNormalArrowColor(unsigned & poColor) = 0;

    /**
      * This function gets the color used for the normal vector of
      * the object(plane) of a constraint.
      *
      * @param poRed The red component of the color.
      *
      * @param poGreen The green component of the color.
      *
      * @param poBlue The blue component of the color.
      **/
    virtual HRESULT GetConstraintNormalArrowColor(unsigned & poRed, 
                                                  unsigned & poGreen, 
                                                  unsigned & poBlue) = 0;

    /**
      * This function sets the color used for the normal vector of
      * the object(plane) of a constraint.
      *
      * @param piColor The new color.
      **/
    virtual HRESULT SetConstraintNormalArrowColor(const unsigned piColor) = 0;

    /**
      * Get the CATSettingInfo of the Constraint Normal Arrow Color.
      **/
    virtual HRESULT GetConstraintNormalArrowColorInfo(CATSettingInfo * poInfo) = 0;

    /**
      * Set the Lock of the Constraint Normal Arrow Color.
      **/
    virtual HRESULT SetConstraintNormalArrowColorLock(unsigned char iLocked) = 0;

    /**
      * This function gets the normal arrow availability
      *
      * @param poAvailable 0 for disable and 1 for enable.
      **/
    virtual HRESULT GetConstraintNormalArrowAvailability(int & poAvailable) = 0;

    /**
      * This function sets the normal arrow availability
      *
      * @param piAvailable 0 for disable and 1 for enable.
      **/
    virtual HRESULT SetConstraintNormalArrowAvailability(const int piAvailable) = 0;

    /**
      * Get the CATSettingInfo of the Constraint Normal Arrow Availability.
      **/
    virtual HRESULT GetConstraintNormalArrowAvailabilityInfo(CATSettingInfo * poInfo) = 0;
    /**
      * Set the Lock of the Constraint Normal Arrow Availability.
      **/
    virtual HRESULT SetConstraintNormalArrowAvailabilityLock(unsigned char iLocked) = 0;

    /**
      * This function gets the color used for the deactivated constraints.
      *
      * @param poColor The color returned.
      **/
    virtual HRESULT GetConstraintDeactivatedColor(unsigned & poColor) = 0;

    /**
      * This function gets the color used for the deactivated constraints.
      *
      * @param poRed The red component of the color.
      *
      * @param poGreen The green component of the color.
      *
      * @param poBlue The blue component of the color.
      **/
    virtual HRESULT GetConstraintDeactivatedColor(unsigned & poRed, 
                                                  unsigned & poGreen, 
                                                  unsigned & poBlue) = 0;

    /**
      * This function sets the color used for the deactivated constraints.
      *
      * @param piColor The new color.
      **/
    virtual HRESULT SetConstraintDeactivatedColor(const unsigned piColor) = 0;

    /**
      * Get the CATSettingInfo of the Constraint Deactivated Color.
      **/
    virtual HRESULT GetConstraintDeactivatedColorInfo(CATSettingInfo * poInfo) = 0;

    /**
      * Set the Lock of the Constraint Deactivated Color.
      **/
    virtual HRESULT SetConstraintDeactivatedColorLock(unsigned char iLocked) = 0;

    /**
      * This function gets the color used for the temporary constraints.
      *
      * @param poColor The color returned.
      **/
    virtual HRESULT GetConstraintTemporaryColor(unsigned & poColor) = 0;

    /**
      * This function gets the color used for the temporary constraints.
      *
      * @param poRed The red component of the color.
      *
      * @param poGreen The green component of the color.
      *
      * @param poBlue The blue component of the color.
      **/
    virtual HRESULT GetConstraintTemporaryColor(unsigned & poRed, 
                                                unsigned & poGreen, 
                                                unsigned & poBlue) = 0;

    /**
      * This function sets the color used for the temporary constraints.
      *
      * @param piColor The new color.
      **/
    virtual HRESULT SetConstraintTemporaryColor(const unsigned piColor) = 0;

    /**
      * Get the CATSettingInfo of the Constraint Temporary Color.
      **/
    virtual HRESULT GetConstraintTemporaryColorInfo(CATSettingInfo * poInfo) = 0;

    /**
      * Set the Lock of the Constraint Temporary Color.
      **/
    virtual HRESULT SetConstraintTemporaryColorLock(unsigned char iLocked) = 0;

    /**
      * This function gets the color used for the peripheral cone.
      *
      * @param poColor The color returned.
      **/
    virtual HRESULT GetVisionPeripheralConeColor(unsigned & poColor) = 0;

    /**
      * This function gets the color used for the peripheral cone.
      *
      * @param poRed The red component of the color.
      *
      * @param poGreen The green component of the color.
      *
      * @param poBlue The blue component of the color.
      **/
    virtual HRESULT GetVisionPeripheralConeColor(unsigned & poRed, 
                                                 unsigned & poGreen, 
                                                 unsigned & poBlue) = 0;

    /**
      * This function sets the color used for the peripheral cone of
      * the vision.
      *
      * @param piColor The new color.
      **/
    virtual HRESULT SetVisionPeripheralConeColor(const unsigned piColor) = 0;

    /**
      * Get the CATSettingInfo of the Vision Peripheral Cone Color.
      **/
    virtual HRESULT GetVisionPeripheralConeColorInfo(CATSettingInfo * poInfo) = 0;

    /**
      * Set the Lock of the Vision Peripheral Cone Color.
      **/
    virtual HRESULT SetVisionPeripheralConeColorLock(unsigned char iLocked) = 0;

    /**
      * This function gets the color used for the central cone.
      *
      * @param poColor The color returned.
      **/
    virtual HRESULT GetVisionCentralConeColor(unsigned & poColor) = 0;

    /**
      * This function gets the color used for the central cone.
      *
      * @param poRed The red component of the color.
      *
      * @param poGreen The green component of the color.
      *
      * @param poBlue The blue component of the color.
      **/
    virtual HRESULT GetVisionCentralConeColor(unsigned & poRed, 
                                              unsigned & poGreen, 
                                              unsigned & poBlue) = 0;

    /**
      * This function sets the color used for the central cone of
      * the vision.
      *
      * @param piColor The new color.
      **/
    virtual HRESULT SetVisionCentralConeColor(const unsigned piColor) = 0;

    /**
      * Get the CATSettingInfo of the Vision Central Cone Color.
      **/
    virtual HRESULT GetVisionCentralConeColorInfo(CATSettingInfo * poInfo) = 0;

    /**
      * Set the Lock of the Vision Central Cone Color.
      **/
    virtual HRESULT SetVisionCentralConeColorLock(unsigned char iLocked) = 0;

    /**
      * This function gets the color used for the blind spot.
      *
      * @param poColor The color returned.
      **/
    virtual HRESULT GetVisionBlindSpotColor(unsigned & poColor) = 0;

    /**
      * This function gets the color used for the blind spot.
      *
      * @param poRed The red component of the color.
      *
      * @param poGreen The green component of the color.
      *
      * @param poBlue The blue component of the color.
      **/
    virtual HRESULT GetVisionBlindSpotColor(unsigned & poRed, 
                                            unsigned & poGreen, 
                                            unsigned & poBlue) = 0;

    /**
      * This function sets the color used for the blind spot of
      * the vision.
      *
      * @param piColor The new color.
      **/
    virtual HRESULT SetVisionBlindSpotColor(const unsigned piColor) = 0;
    
    /**
      * Get the CATSettingInfo of the Vision Blind Spot Color.
      **/
    virtual HRESULT GetVisionBlindSpotColorInfo(CATSettingInfo * poInfo) = 0;

    /**
      * Set the Lock of the Vision Blind Spot Color.
      **/
    virtual HRESULT SetVisionBlindSpotColorLock(unsigned char iLocked) = 0;

    /**
      * This function gets the rotation flag used for the 2D peripheral cone.
      *
      * @param poRotated The rotation flag returned.
      **/
    virtual HRESULT GetVisionPeripheralContourRotation(unsigned & poRotation) = 0;

    /**
      * Set the rotation flag of the Vision Peripheral cone.
      **/
    virtual HRESULT SetVisionPeripheralContourRotation(unsigned piRotation) = 0;

    /**
      * Get the CATSettingInfo of the Vision Peripheral Contour Rotation
      **/
    virtual HRESULT GetVisionPeripheralContourRotationInfo(CATSettingInfo * poInfo) = 0;

    /**
      * Set the Lock of the Vision Peripheral Contour Rotation
      **/
    virtual HRESULT SetVisionPeripheralContourRotationLock(unsigned char iLocked) = 0;


    /**
      * This function gets the color used for the print.
      *
      * @param poColor The color returned.
      **/
    virtual HRESULT GetPrintColor(unsigned & poColor) = 0;

    /**
      * This function gets the color used for the print.
      *
      * @param poRed The red component of the color.
      *
      * @param poGreen The green component of the color.
      *
      * @param poBlue The blue component of the color.
      **/
    virtual HRESULT GetPrintColor(unsigned & poRed, 
                                  unsigned & poGreen, 
                                  unsigned & poBlue) = 0;

    /**
      * This function sets the color used for the print.
      *
      * @param piColor The new color.
      **/
    virtual HRESULT SetPrintColor(const unsigned piColor) = 0;

    /**
      * Get the CATSettingInfo of the Print Color.
      **/
    virtual HRESULT GetPrintColorInfo(CATSettingInfo * poInfo)=0;

    /**
      * Set the Lock of the Print Color.
      **/
    virtual HRESULT SetPrintColorLock(unsigned char iLocked)=0;

    /**
      * This function gets the transparency used for the print.
      *
      * @param poTransparency The transparency returned.
      **/
    virtual HRESULT GetPrintTransparency(unsigned & poTransparency) = 0;

    /**
      * This function sets the transparency used for the print.
      *
      * @param piTransparency The new transparency.
      **/
    virtual HRESULT SetPrintTransparency(const unsigned piTransparency) = 0;

    /**
      * Get the CATSettingInfo of the Print Transparency.
      **/
    virtual HRESULT GetPrintTransparencyInfo(CATSettingInfo * poInfo) = 0;

    /**
      * Set the Lock of the Print Transparency.
      **/
    virtual HRESULT SetPrintTransparencyLock(unsigned char iLocked) = 0;

    /**
      * This function gets the IK print availability
      *
      * @param poAvailable 0 for disable and 1 for enable.
      **/
    virtual HRESULT GetIKPrintAvailability(int & poAvailable) = 0;

    /**
      * This function sets the IK print availability
      *
      * @param piMode 0 for the automatic mode and 1 for the manual mode.
      **/
    virtual HRESULT SetIKPrintAvailability(const int piAvailable) = 0;

    /**
      * Get the CATSettingInfo of the IK Print Availability.
      **/
    virtual HRESULT GetIKPrintAvailabilityInfo(CATSettingInfo * poInfo) = 0;

    /**
      * Set the Lock of the IK Print Availability.
      **/
    virtual HRESULT SetIKPrintAvailabilityLock(unsigned char iLocked) = 0;

    /**
      * This function gets the Reach print availability
      *
      * @param poAvailable 0 for disable and 1 for enable.
      **/
    virtual HRESULT GetReachPrintAvailability(int & poAvailable) = 0;

    /**
      * This function sets the Reach print availability
      *
      * @param piMode 0 for the automatic mode and 1 for the manual mode.
      **/
    virtual HRESULT SetReachPrintAvailability(const int piAvailable) = 0;

    /**
      * Get the CATSettingInfo of the Reach Print Availability.
      **/
    virtual HRESULT GetReachPrintAvailabilityInfo(CATSettingInfo * poInfo) = 0;

    /**
      * Set the Lock of the Reach Print Availability.
      **/
    virtual HRESULT SetReachPrintAvailabilityLock(unsigned char iLocked) = 0;

    /**
      * This function gets the color used for the deactivated Loads.
      *
      * @param poColor The color returned.
      **/
    virtual HRESULT GetLoadDeactivatedColor(unsigned & poColor) = 0;

    /**
      * This function gets the color used for the deactivated Loads.
      *
      * @param poRed The red component of the color.
      *
      * @param poGreen The green component of the color.
      *
      * @param poBlue The blue component of the color.
      **/
    virtual HRESULT GetLoadDeactivatedColor(unsigned & poRed, 
                                            unsigned & poGreen, 
                                            unsigned & poBlue) = 0;

    /**
      * This function sets the color used for the deactivated Loads.
      *
      * @param piColor The new color.
      **/
    virtual HRESULT SetLoadDeactivatedColor(const unsigned piColor) = 0;

    /**
      * Get the CATSettingInfo of the Load Deactivated Color.
      **/
    virtual HRESULT GetLoadDeactivatedColorInfo(CATSettingInfo * poInfo) = 0;

    /**
      * Set the Lock of the Load Deactivated Color.
      **/
    virtual HRESULT SetLoadDeactivatedColorLock(unsigned char iLocked) = 0;

    /**
      * This function gets the color used for the Activated Loads.
      *
      * @param poColor The color returned.
      **/
    virtual HRESULT GetLoadActivatedColor(unsigned & poColor) = 0;

    /**
      * This function gets the color used for the Activated Loads.
      *
      * @param poRed The red component of the color.
      *
      * @param poGreen The green component of the color.
      *
      * @param poBlue The blue component of the color.
      **/
    virtual HRESULT GetLoadActivatedColor(unsigned & poRed, 
                                          unsigned & poGreen, 
                                          unsigned & poBlue) = 0;

    /**
      * This function sets the color used for the Activated Loads.
      *
      * @param piColor The new color.
      **/
    virtual HRESULT SetLoadActivatedColor(const unsigned piColor) = 0;

    /**
      * Get the CATSettingInfo of the Load Activated Color.
      **/
    virtual HRESULT GetLoadActivatedColorInfo(CATSettingInfo * poInfo) = 0;

    /**
      * Set the Lock of the Load Activated Color.
      **/
    virtual HRESULT SetLoadActivatedColorLock(unsigned char iLocked) = 0;

    /**
      * This function gets the biomechanics force display mode
      *
      * @param poMode 0 for the force arrow mode and 1 for the direction line.
      **/
    virtual HRESULT GetLoadDisplayMode(int & poMode) = 0;

    /**
      * This function sets the load display mode
      *
      * @param piMode 0 for the load arrow mode and 1 for the direction line.
      **/
    virtual HRESULT SetLoadDisplayMode(const int piMode) = 0;

    /**
      * Get the CATSettingInfo of the Load Display Mode.
      **/
    virtual HRESULT GetLoadDisplayModeInfo(CATSettingInfo * poInfo) = 0;

    /**
      * Set the Lock of the Load Display Mode.
      **/
    virtual HRESULT SetLoadDisplayModeLock(unsigned char iLocked) = 0;

    /**
      * This function gets the color used for the deactivated SegmentOffsets.
      *
      * @param poColor The color returned.
      **/
    virtual HRESULT GetSegmentOffsetDeactivatedColor(unsigned & poColor) = 0;

    /**
      * This function gets the color used for the deactivated SegmentOffsets.
      *
      * @param poRed The red component of the color.
      *
      * @param poGreen The green component of the color.
      *
      * @param poBlue The blue component of the color.
      **/
    virtual HRESULT GetSegmentOffsetDeactivatedColor(unsigned & poRed, 
                                                     unsigned & poGreen, 
                                                     unsigned & poBlue) = 0;

    /**
      * This function sets the color used for the deactivated SegmentOffsets.
      *
      * @param piColor The new color.
      **/
    virtual HRESULT SetSegmentOffsetDeactivatedColor(const unsigned piColor) = 0;
    
    /**
      * Get the CATSettingInfo of the SegmentOffset deactivated color.
      **/
    virtual HRESULT GetSegmentOffsetDeactivatedColorInfo(CATSettingInfo * poInfo) = 0;

    /**
      * Set the Lock of the SegmentOffset Deactivated Color.
      **/
    virtual HRESULT SetSegmentOffsetDeactivatedColorLock(unsigned char iLocked) = 0;

    /**
      * This function gets the color used for the Activated SegmentOffsets.
      *
      * @param poColor The color returned.
      **/
    virtual HRESULT GetSegmentOffsetActivatedColor(unsigned & poColor) = 0;

    /**
      * This function gets the color used for the Activated SegmentOffsets.
      *
      * @param poRed The red component of the color.
      *
      * @param poGreen The green component of the color.
      *
      * @param poBlue The blue component of the color.
      **/
    virtual HRESULT GetSegmentOffsetActivatedColor(unsigned & poRed, 
                                                   unsigned & poGreen, 
                                                   unsigned & poBlue) = 0;

    /**
      * This function sets the color used for the Activated SegmentOffsets.
      *
      * @param piColor The new color.
      **/
    virtual HRESULT SetSegmentOffsetActivatedColor(const unsigned piColor) = 0;
    
    /**
      * Get the CATSettingInfo of the SegmentOffset Activated color.
      **/
    virtual HRESULT GetSegmentOffsetActivatedColorInfo(CATSettingInfo * poInfo) = 0;

    /**
      * Set the Lock of the SegmentOffset Activated Color.
      **/
    virtual HRESULT SetSegmentOffsetActivatedColorLock(unsigned char iLocked) = 0;

    /**
      * This function gets the color used for the SelectedHandGrasp.
      *
      * @param poColor The color returned.
      **/
    virtual HRESULT GetSelectedHandGraspColor(unsigned & poColor) = 0;

    /**
      * This function gets the color used for the SelectedHandGrasp.
      *
      * @param poRed The red component of the color.
      *
      * @param poGreen The green component of the color.
      *
      * @param poBlue The blue component of the color.
      **/
    virtual HRESULT GetSelectedHandGraspColor(unsigned & poRed, 
                                                   unsigned & poGreen, 
                                                   unsigned & poBlue) = 0;

    /**
      * This function sets the color used for the SelectedHandGrasp.
      *
      * @param piColor The new color.
      **/
    virtual HRESULT SetSelectedHandGraspColor(const unsigned piColor) = 0;
    
    /**
      * Get the CATSettingInfo of the SelectedHandGrasp color.
      **/
    virtual HRESULT GetSelectedHandGraspColorInfo(CATSettingInfo * poInfo) = 0;

    /**
      * Set the Lock of the SelectedHandGrasp Color.
      **/
    virtual HRESULT SetSelectedHandGraspColorLock(unsigned char iLocked) = 0;

    /**
      * Get the Constraint Line Type(Dash).
      **/
    virtual HRESULT GetConstraintLineType(SWKEConstraintCategory piCategory, unsigned & poType) = 0;

    /**
      * Set the Constraint Line Type(Dash).
      **/
    virtual HRESULT SetConstraintLineType(SWKEConstraintCategory piCategory, const unsigned piType) = 0;

    /**
      * Get the Constraint Line Thickness.
      **/
    virtual HRESULT GetConstraintLineThickness(SWKEConstraintCategory piCategory, unsigned & poThickness) = 0;

    /**
      * Set the Constraint Line Thickness.
      **/
    virtual HRESULT SetConstraintLineThickness(SWKEConstraintCategory piCategory, const unsigned piThickness) = 0;

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
