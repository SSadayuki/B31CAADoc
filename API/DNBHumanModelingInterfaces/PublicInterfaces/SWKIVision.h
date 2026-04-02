// COPYRIGHT DASSAULT SYSTEMES 2003

#ifndef _SWKIVision_h
#define _SWKIVision_h

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
//       SWKIVision interface.
//       This interface offers non-IDL vision services.
// *****************************************************************************
//  Usage:
//  ------
//
// *****************************************************************************
//  Inheritance:
//  ------------
//
//  SWKIManikinPart
//
// *****************************************************************************
//  Main Methods:
//  -------------
//
//    SetInternalVision
//    GetManikin
//    LookAt
//    GetCurrentLineOfSight
//    GetLinesOfSight
//    GetLeftLineOfSight
//    GetRightLineOfSight
//    GetCentralLineOfSight
//    Reset
//    GetEyePosition
//    GetBlindSpotHorizontalAngle
//    GetBlindSpotVerticalAngle
//    GetBlindSpotRadiusHorizontalAngle
//    GetBlindSpotRadiusVerticalAngle
//    GetFocalPoint
//    GetFocalDistance
//    SetFocalDistance
//    GetActiveSide
//    SetType
//    GetType
//    SetTitleVisibilityWnd
//    GetTitleVisibilityWnd
//    GetDefaultTitleVisibilityWnd
//    SetPeriphericContourVisibilityWnd
//    GetPeriphericContourVisibilityWnd
//    GetDefaultPeriphericContourVisibilityWnd
//    SetCentralSpotVisibilityWnd
//    GetCentralSpotVisibilityWnd
//    GetDefaultCentralSpotVisibilityWnd
//    SetBlindSpotVisibilityWnd
//    GetBlindSpotVisibilityWnd
//    GetDefaultBlindSpotVisibilityWnd
//    SetViewModeWnd
//    GetViewModeWnd
//    GetDefaultViewModeWnd
//    SetScaleWnd
//    GetScaleWnd
//    GetDefaultScaleWnd
//    SetPonctumProximum
//    GetPonctumProximum
//    SetPonctumRemotum
//    GetPonctumRemotum
//    SetConvergenceMode
//    GetConvergenceMode
//    GetBinocularAngle
//    GetAmbinocularAngle
//    GetMonocularAngle
//    GetVerticalTopAngle
//    GetVerticalBottomAngle
//    GetMaxBinocularAngle
//    GetMaxAmbinocularAngle
//    GetMaxVerticalTopAngle
//    GetMaxVerticalBottomAngle
//    GetMinBinocularAngle
//    GetMinAmbinocularAngle
//    GetMinVerticalTopAngle
//    GetMinVerticalBottomAngle
//    GetCentralConeAngle
//    SetBinocularAngle
//    SetAmbinocularAngle
//    SetMonocularAngle
//    SetVerticalTopAngle
//    SetVerticalBottomAngle
//    SetCentralConeAngle
//    AddVisualLimitsVariable
//    LinkToVisualLimitsVariable
//    RemoveVisualLimitsVariable
//    GetVisualLimitsVariable
//    GetNumberOfVisualLimitsVariables
//    KeepLockStateForPasteFrom
//    PasteFromVision
//    IsActive
//    Activate
//    Deactivate
// *****************************************************************************
//  History
//  -------
//
//  Author: Jean-Guy AUGUSTIN
//  Date  : 00/03/29
//  Goal  : Creation
//
//  Author: Jean-Guy AUGUSTIN
//  Date  : 00/09/29
//  Goal  : Revision
// *****************************************************************************
//
// --- DNBHumanModelingInterfaces
#include "SWKIManikinPart.h"
//
// --- System
#include "CATBooleanDef.h"
//
// --- DNBHumanModelingInterfaces
class SWKIManikin;
class SWKILineOfSight;
//
// --- DNBHumanModeling
class SWVision;
class SWVisualLimitsVariable;
//
// --- Mathematics
class CATMathPoint;

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
extern ExportedBySWKHumanModelingItf IID IID_SWKIVision;
#else
extern "C" const IID IID_SWKIVision;
#endif

/**
  * This interface provides non-IDL vision services.
  * It is the main class for the manikin's vision.
  * A pointer to this interface can be obtained by invoking
  * method <code>GetVision()</code> of interface <code>SWKIManikin</code>.
  **/

class ExportedBySWKHumanModelingItf SWKIVision : public SWKIManikinPart
{
	CATDeclareInterface;

 public:

	/**
	  * Enumeration of the eyes positions.<br>
	  *
	  * <strong>LeftEye</strong>: The left eye<br>
	  * <strong>MidEye</strong>: The eye corresponding to the central line of sight<br>
	  * <strong>RightEye</strong>: The right eye
	  **/
	enum SWKEye
	{
	  LeftEye  = 0,
	  MidEye   = 1,
	  RightEye = 2
	};

	/**
	  * Initialize the internal vision.<br>
	  * <strong>This method is to be used by the system only</strong>.
	  **/
	virtual HRESULT SetInternalVision(SWKIManikin * piManikin, SWVision * piInternalVision) = 0;

	/**
	  * @return The manikin owning this vision.
	  **/
	virtual SWKIManikin * GetManikin() = 0;

	/**
	  * Make the eyes look at the specified point.<br>
	  * This method changes the position of the focal point.
	  *
	  * @param piNewFocalPoint The new point to look at, in gobal (world)
	  * coordinates, which are expressed in millimeters.
	  *
	  * @return <code>S_OK</code> if the focal point could be set,
	  * <code>S_FALSE</code> otherwise.<br>
	  * <br>
	  * The reason the focal point cannot be set can be one of the
	  * following:<br>
	  * <ul>
	  *  <li>The point is too near (i.e. would result in a focal distance
	  *  that is lower than the ponctum proximum);
	  *
	  *  <li>The point is too far (i.e. would result in a focal distance
	  *  that is higher than the ponctum remotum);
	  *
	  *  <li>The eyes cannot converge, because looking at this point would
	  *  go above the mobility of the individual lines of sight;
	  *
	  *  <li>One or more coordinate values are invalid
	  *  (i.e. are <code>NaN</code> or infinite).
	  * </ul>
	  **/
	virtual HRESULT LookAt(const CATMathPoint & piNewFocalPoint) = 0;

	/**
	  * Make the eyes point to the given location.
	  *
	  * @param piFocalDistance The focal distance
	  * (measured from the currently active line of sight), expressed in centimeters.<br>
	  * <strong>N.B.</strong>: The application can set the focal distance to<br>
	  * infinite, by specifying the value <code>SWIEEE::Infinite()</code>
	  * for this parameter.
	  *
	  * @param piVerticalAngle The vertical angle (in radians) between
	  * the focal point and the the active line of sight<br>
	  * (positive angle deviates up, negative angle deviates down).
	  *
	  * @param piHorizontalAngle The horizontal angle (in radians) between the focal
	  * point and the active line of sight<br>
	  * (positive angle deviates left, negative angle deviates right).
	  *
	  * @return <code>S_OK</code> if the focal point could be set,
	  * <code>S_FALSE</code> otherwise.<br>
	  * <br>
	  * The reason the focal point cannot be set can be one of the
	  * following:<br>
	  * <ul>
	  *  <li>The paramter piFocalDistance is too low
	  *  (i.e. would result in a focal distance that is lower than the ponctum proximum);
	  *
	  *  <li>The paramter piFocalDistance is too high
	  *  (i.e. would result in a focal distance that is higher than the ponctum remotum);
	  *
	  *  <li>The eyes cannot converge, because one or both angles
	  *  go above the mobility of the individual lines of sight;
	  *
	  *  <li>One or both angle values are invalid (i.e. are <code>NaN</code> or infinite).
	  * </ul>
	  **/
	virtual HRESULT LookAt(double piFocalDistance, double piVerticalAngle = 0.0,
						double piHorizontalAngle = 0.0) = 0;

	/**
	  * @return The line of sight associated with the current vision type.
	  **/
	virtual SWKILineOfSight * GetCurrentLineOfSight() const = 0;

	/**
	  * Get the three lines of sight in the output parameters.
	  **/
	virtual HRESULT GetLinesOfSight(SWKILineOfSight *& poLeft, 
		SWKILineOfSight *& poCentral, SWKILineOfSight *& poRight) const = 0;

	/**
	  * @return The left line of sight.
	  **/
	virtual SWKILineOfSight * GetLeftLineOfSight() const = 0;

	/**
	  * @return The left line of sight.
	  **/
	virtual SWKILineOfSight * GetRightLineOfSight() const = 0;

	/**
	  * @return The left line of sight.
	  **/
	virtual SWKILineOfSight * GetCentralLineOfSight() const = 0;

	/**
	  * Reset the vision to its default parameters.
	  **/
	virtual HRESULT Reset() = 0;

	/**
	  * @param piEye The eye for which the position is to be retrieved.
  	  * @return The global (world) position of a specific eye.
	  **/
	virtual CATMathPoint GetEyePosition(SWKEye piEye) const = 0;

	/**
	  * @return The horizontal deviation of the blind spot, <br>
	  * where the angle is expressed in degrees.
	  **/
	virtual double GetBlindSpotHorizontalAngle() const = 0;

	/**
	  * @return The vertical deviation of the blind spot, <br>
	  * where the angle is expressed in degrees.
	  **/
	virtual double GetBlindSpotVerticalAngle() const = 0;

	/**
	  * @return The horizontal angle (degrees) of the blind spot radius
	  * (positive angle deviates left, negative angle deviates right).
	  **/
	virtual double GetBlindSpotRadiusHorizontalAngle() const = 0;

	/**
	  * @return The vertical angle (degrees) of the blind spot radius
	  * (positive angle deviates left, negative angle deviates right).
	  **/
	virtual double GetBlindSpotRadiusVerticalAngle() const = 0;

	/**
	  * @return The global (world) position of the focal point, <br>
	  * where the coordinates are expressed in millimeters.
	  **/
	virtual CATMathPoint GetFocalPoint() const = 0;

	/**
	  * @return The focal distance, in centimeters.<br>
	  * The focal distance is the euclidian distance measured between the active eye and
	  * the focal point.
	  **/
	virtual double GetFocalDistance() const = 0;

	/**
	  * Set the focal distance.
	  *
	  * @param piFocalDistance The new focal distance, in centimeters.<br>
	  * The focal distance is the euclidian distance measured between the active eye and
	  * the focal point.
	  *
	  * @return <code>S_OK</code> if the focal distance could be set,
	  * <code>S_FALSE</code> otherwise.<br>
	  * <br>
	  * The reason focal distance cannot be set can be one of the
	  * following:<br>
	  * <ul>
	  *  <li>The focal distance is too low (i.e. is lower than the ponctum proximum);
	  *  <li>The focal distance is too high (i.e. is higher than the ponctum remotum).
	  * </ul>
	  **/
	virtual HRESULT SetFocalDistance(double piFocalDistance) = 0;

	/**
	  * Enumeration of the different vision types.<br>
	  *
	  * <strong>VisionTypeLeft</strong>: Vision along the left line of sight<br>
	  * <strong>VisionTypeCentral</strong>: Vision along the central line of sight<br>
	  * <strong>VisionTypeRight</strong>: Vision along the right line of sight
	  **/
	enum SWKVisionSide
	{
		VisionSideLeft = LeftEye,
		VisionSideCentral = MidEye,
		VisionSideRight = RightEye
	};

	enum SWKVisionType
	{
		Binocular = 0,
		Ambinocular = 1,
		MonocularRight = 2,
		MonocularLeft = 3,
		Stereo = 4
	};

	/**
	  * @return The current vision side.
	  **/
	virtual SWKIVision::SWKVisionSide GetActiveSide() const = 0;

	/**
	  * Set the current vision type
	  * @param piVisionType The new vision type.
	  * @return <code>S_OK</code> on success,
	  **/
	virtual HRESULT SetType(SWKVisionType piVisionType, boolean piNotify = TRUE) = 0;

	/**
	  * @return the current vision type
	  **/
	virtual SWKIVision::SWKVisionType GetType() const = 0;

	/**
	  * determines if the title of the window will appear or not 
	  **/
	virtual HRESULT SetTitleVisibilityWnd(boolean piTitleVisibilityWnd) = 0;

	/**
	  * @return the boolean which determines if the title of the window will appear or not.
	  **/
	virtual boolean GetTitleVisibilityWnd() const = 0;

	/**
	  * @return the boolean of the default status of the title window visibility.
	  **/
	virtual boolean GetDefaultTitleVisibilityWnd() const = 0;

	/**
	  * determines if the peripheric contour of the window will appear or not
	  **/
	virtual HRESULT SetPeriphericContourVisibilityWnd(boolean piPeriphericContourVisibilityWnd) = 0;

	/**
	  * @return the boolean which determines if the peripheric contour of the window will appear or not
	  **/
	virtual boolean GetPeriphericContourVisibilityWnd() const = 0;

	/**
	  * @return the default status of the peripheric contour of the window.
	  **/
	virtual boolean GetDefaultPeriphericContourVisibilityWnd() const = 0;

	/**
	  * determines if the central spot of the window will appear or not
	  **/
	virtual HRESULT SetCentralSpotVisibilityWnd(boolean piCentralSpotVisibilityWnd) = 0;

	/**
	  * @return the boolean which determines if the central spot of the window will appear or not
	  **/
	virtual boolean GetCentralSpotVisibilityWnd() const = 0;

	/**
	  * @return the default status of the central spot of the window.
	  **/
	virtual boolean GetDefaultCentralSpotVisibilityWnd() const = 0;

	/**
	  * determines if the blind spot of the window will appear or not 
	  **/
	virtual HRESULT SetBlindSpotVisibilityWnd(boolean piBlindSpotVisibilityWnd) = 0;

	/**
	  * @return the boolean which determines if the blind spot of the window will appear or not
	  **/
	virtual boolean GetBlindSpotVisibilityWnd() const = 0;

	/**
	  * @return the default status of the blind spot of the window.
	  **/
	virtual boolean GetDefaultBlindSpotVisibilityWnd() const = 0;

	/**
	  * Sets the view mode of the window
	  **/
	virtual HRESULT SetViewModeWnd(int piViewModeWnd) = 0;

	/**
	  * @return the view mode of the window.
	  **/
	virtual int GetViewModeWnd() const = 0;

	/**
	  * @return the default view mode of the window.
	  **/
	virtual int GetDefaultViewModeWnd() const = 0;

	/**
	  * Sets the scale of the window.
	  **/
	virtual int SetScaleWnd(double piScaleWnd) = 0;

	/**
	  * @return the scale of the window.
	  **/
	virtual double GetScaleWnd() const = 0;

	/**
	  * @return the default scale of the window.
	  **/
	virtual double GetDefaultScaleWnd() const = 0;

	/**
	  * Set the ponctum proximum.
	  *
	  * @param piPonctumProximum The new ponctum proximum (in centimeters).<br>
	  * This value expresses the minimum value that the focal distance can take.
	  * @return <code>S_OK</code> on success, <code>S_FALSE</code> on error
	  **/
	virtual HRESULT SetPonctumProximum(double piPonctumProximum) = 0;

	/**
	  * @return The current ponctum proximum (in centimeters).
	  **/
	virtual double GetPonctumProximum() const = 0;

	/**
	  * Set the ponctum remotum.
	  *
	  * @param piPonctumRemotum The new ponctum remotum (in centimeters).<br>
	  * This value expresses the maximum value that the focal distance can take.<br>
	  * The application can set the ponctum remotum to infinite, by assigning<br>
	  * the value <code>SWIEEE::Infinite()</code> to this parameter.
	  *	@return <code>S_OK</code> on success, <code>S_FALSE</code> on error
	  **/
	virtual HRESULT SetPonctumRemotum(double piPonctumRemotum) = 0;

	/**
	  * @return The current ponctum remotum, in centimeters.
	  **/
	virtual double GetPonctumRemotum() const = 0;

	/**
	  * Set the convergence mode.
	  *
	  * @param piConvergenceMode The new convergence mode.  If the convergence<br>
	  * mode is set to <code><font color="blue"><strong>TRUE</strong></font></code>,
	  * then the motion of one line of sight will<br>
	  * cause the motion of the other two, so that all three lines of sight<br>
	  * converge toward the focal point.  Also, the limits of one line of sight<br>
	  * will depend in part on the position of the focal point, as well as<br>
	  * the limits of the two other lines of sight.<br>
	  * <br>
	  * If the convergence mode is set to
	  * <code><font color="blue"><strong>FALSE</strong></font></code>,
	  * then the lines of sight are able<br>
	  * to move independently one from the other, and each line of sight may well<br>
	  * point in a different direction.
	  **/
	virtual void SetConvergenceMode(boolean piConvergenceMode) = 0;

	/**
	  * @return The current convergence mode.
	  **/
	virtual boolean GetConvergenceMode() const = 0;

	/**
	  * @return The current binocular angle (in degrees).
	  **/
	virtual double GetBinocularAngle() const = 0;

	/**
	  * @return The current ambinocular angle (in degrees).
	  **/
	virtual double GetAmbinocularAngle() const = 0;

	/**
	  * @return The current monocular angle (in degrees).
	  **/
	virtual double GetMonocularAngle() const = 0;

	/**
	  * Return the current vertical top angle in degrees.
	  **/
	virtual double GetVerticalTopAngle() const = 0;

	/**
	  * @return The current vertical bottom angle (in degrees).
	  **/
	virtual double GetVerticalBottomAngle() const = 0;

	/**
	  * @return The current maximum binocular angle (in degrees).
	  **/
	virtual double GetMaxBinocularAngle() const = 0;

	/**
	  * @return The current maximum ambinocular angle (in degrees).
	  **/
	virtual double GetMaxAmbinocularAngle() const = 0;

	/**
	  * @return The current maximum vertical top angle (in degrees).
	  **/
	virtual double GetMaxVerticalTopAngle() const = 0;

	/**
	  * @return The current maximum vertical bottom angle (in degrees).
	  **/
	virtual double GetMaxVerticalBottomAngle() const = 0;

	/**
	  * @return The current minimum binocular angle (in degrees).
	  **/
	virtual double GetMinBinocularAngle() const = 0;

	/**
	  * @return The current minimum ambinocular angle (in degrees).
	  **/
	virtual double GetMinAmbinocularAngle() const = 0;

	/**
	  * @return The current minimum vertical top angle (in degrees).
	  **/
	virtual double GetMinVerticalTopAngle() const = 0;

	/**
	  * @return The current minimum vertical bottom angle (in degrees).
	  **/
	virtual double GetMinVerticalBottomAngle() const = 0;

	/**
	  * @return The current central cone angle (in degrees).
	  **/
	virtual double GetCentralConeAngle() const = 0;

	/**
	  * Set the current binocular angle.
	  *
	  * @param piAngle The new binocular angle (in degrees).
	  **/
	virtual HRESULT SetBinocularAngle(double piAngle) = 0;

	/**
	  * Set the current ambinocular angle.
	  *
	  * @param piAngle The new ambinocular angle (in degrees).
	  **/
	virtual HRESULT SetAmbinocularAngle(double piAngle) = 0;

	/**
	  * Set the current monocular angle.
	  *
	  * @param piAngle The new monocular angle (in degrees).
	  **/
	virtual HRESULT SetMonocularAngle(double piAngle) = 0;

	/**
	  * Set the current vertical top angle.
	  *
	  * @param piAngle The new vertical top angle (in degrees).
	  **/
	virtual HRESULT SetVerticalTopAngle(double piAngle) = 0;

	/**
	  * Set the current vertical bottom angle.
	  *
	  * @param piAngle The new vertical bottom angle (in degrees).
	  **/
	virtual HRESULT SetVerticalBottomAngle(double piAngle) = 0;

	/**
	  * Set the current central cone angle.
	  *
	  * @param piAngle The new central cone angle (in degrees).
	  **/
	virtual HRESULT SetCentralConeAngle(double piAngle) = 0;

	/**
	  * Add a new visual limits variable.<br>
	  * This variable allows the application to customize the minimum and<br>
	  * maximum visual angles, which include: binocular, ambinocular,
	  * vertical top and vertical bottom.<br>
	  * <br>
	  * In other words, a visual limits variable restrains the field of view<br>
	  * of the manikin, the maximum field of view being the one that corresponds<br>
	  * to the biomechanical limits of the eyes.
	  *
	  * @param piVisualLimitsVariable The new limits variable to add.
	  **/
	virtual HRESULT AddVisualLimitsVariable(const SWVisualLimitsVariable * piVisualLimitsVariable) = 0;

	/**
	  * Link to the visual limits variable at the specified index.
	  *
	  * @param piIndex The index of the visual limits variable to link with.<br>
	  * First variable is at index 0.
	  **/
	virtual HRESULT LinkToVisualLimitsVariable(unsigned piIndex) = 0;

	/**
	  * Remove the visual limits variable with the given user name.
	  * @param piName The name of the visual limits variable to remove.
	  **/
	virtual HRESULT RemoveVisualLimitsVariable(const CATUnicodeString & piName) = 0;

	/**
	  * Remove the visual limits variable at the specified index.
	  *
	  * @param piIndex The index of the limits variable to remove.<br>
	  * First variable is at index 0.
	  **/
	virtual HRESULT RemoveVisualLimitsVariable(unsigned piIndex) = 0;

	/**
	  * Return a visual limits variable, based on its name.
	  *
	  * @param piName The (user-defined) name of the variable to retieve.
	  *
	  * @return The desired variable, or <code>NULL</code>, if no such
	  * variable exists.
	  **/
	virtual SWVisualLimitsVariable * GetVisualLimitsVariable(const CATUnicodeString & piName) const = 0;

	/**
	  * Return a visual limits variable, based on its index.
	  *
	  * @param piIndex The index of the variable to retieve, starting at index 0.
	  *
	  * @return The desired variable, or <code>NULL</code>, if the index
	  * goes out of bounds.
	  **/
	virtual SWVisualLimitsVariable * GetVisualLimitsVariable(unsigned piIndex) const = 0;

	/**
	  * @return The number of visual limits variables.<br>
	  * When the vision is initialized, the system creates one<br>
	  * visual limits variable, which gives the biomechanical<br>
	  * limits of the human eyes.  This variable cannot be deleted.<br>
	  * Therefore, a call to this method will always return a number<br>
	  * greater or equal to 1.
	  **/
	virtual unsigned GetNumberOfVisualLimitsVariables() const = 0;

	/**
	  * @param piKeep The PasteFrom function will never changes the state of the
	  * lock if the piKeep value is TRUE.
	  **/
	virtual void KeepLockStateForPasteFrom(boolean piKeep) = 0;

	/**
	  * Paste all the properties of piVision on this vision.
	  **/
	virtual HRESULT PasteFromVision(SWKIVision * piVision) = 0;

	/**
	  * Indicates whether the vision window is active or not.<br>
	  * Being active means that the vision edition window
	  * is enabled and visible (i.e. the user has activated the vision node).
	  **/
	virtual boolean IsActive() const = 0;

	/**
	  * Indicates that the vision edition window has become active
	  * (i&#x2e;ei&#x2e; has been opened).
	  **/
	virtual void Activate() = 0;

	/**
	  * Indicates that the vision edition window has become inactive
	  * (i&#x2e;ei&#x2e; has been closed).
	  **/
	virtual void Deactivate() = 0;
};

CATDeclareHandler(SWKIVision, SWKIManikinPart);

#endif
