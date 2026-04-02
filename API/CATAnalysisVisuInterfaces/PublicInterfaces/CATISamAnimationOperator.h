#ifndef CATISamAnimationOperator_H
#define CATISamAnimationOperator_H
//=============================================================================
// COPYRIGHT DASSAULT SYSTEMES 2005
//=============================================================================
//
// CATISamAnimationOperator : interface tolaunch animation of images.
//
//=============================================================================
// April 2005 Creation                                         O.Franks
//=============================================================================

/**
  * @CAA2Level L0
  * @CAA2Usage U3
  */

#include "CATBaseUnknown.h"

// SamVisuIterfaces 
#include "CATSamAnimationLoopMode.h"
#include "CATISamImage.h"

// system
class CATNotification;
class CATDialog;
class CATDlgDialog;
class CATCommand;

#include "CATSamVisuUUID.h"

extern "C" const IID IID_CATISamAnimationOperator ;
//------------------------------------------------------------------

/**
 * Animation of Analysis Images.
 * <b>Role: </b> Ability to launch animation of analysis images. <br>
 * Create this interface using CATSamImagesOperatorFactory, supplying <br>
 * a list of images you wish to animate. Store this interface pointer as <br>
 * a member variable in your command. <br> 
 * <p>
 * The primary method Run() will launch the "Animate" command with the <br>
 * images you supplied. By default the animation dialog box will appear <br>
 * and animation will begin automatically.
 * <p>
 * <b>In your command, follow these steps: </b> 
 * <ul> <li> Create and store this interface using CATSamImagesOperatorFactory</li>
 *      <li> Call Run() to start the animation.</li>
 *      <li> Add callbacks to catch when the user closes the dialog.</li>
 *      <li> Call End() to stop the command.</li></ul>
 * <p>
 * @see CATSamImagesOperatorFactory
 */
class ExportedByCATSamVisuUUID CATISamAnimationOperator: public CATBaseUnknown
{
  CATDeclareInterface;

  public:

  /**
    * Launch animation of Images. <br>
    * This will launch the image animation command and dialog. <br>
    * @param iAutomaticStart.
    * Whether or not to "play" immediately
    * @param iLoopMode
    * The loop mode
    * @param iCycleMode
    * The cycle mode. 0 = Linear, 1 = Sinusoidal
    */
  virtual HRESULT Run ( const CATBoolean              iAutomaticStart = TRUE, 
                        const CATSamAnimationLoopMode iLoopMode = CATSamAnimationLoopMode_LoopBack,
                        const int                     iCycleMode = 1) = 0;

  /**
    * End the animation command and dialog.
    */
  virtual HRESULT End() = 0;

  /**
    * Set the calibration angle. <br>
    * The calibration angle is an offset for the first frame of animation.
    * @param iImage
    * For which image you wish to set the angle. 
    * @param iOffsetRadians
    * The calibration angle in radians. For no calibration use zero. <br>
    * Keep in mind that Sinusoidal animation starts at -PI.
    */
  virtual HRESULT SetCalibrationAngle( CATISamImage_var iImage, const float iOffsetRadians) = 0;

  /**
    * Get the calibration angle. <br>
    * The calibration angle is an offset for the first frame of animation.
    * @param iImage
    * For which image you wish to set the angle. 
    * @param oOffsetRadians
    * The calibration angle in radians. Sinusoidal Animation cycle starts at -PI. 
    * @see CATSamImagesOperatorFactory
    */
  virtual HRESULT GetCalibrationAngle( CATISamImage_var iImage, float& oOffsetRadians) = 0;

  /**
    * Calculate a calibration angle. <br>
    * The calibration angle is an offset for the first frame of animation. <br>
    * This method finds the node of maximum displacement and its phase.
    * @param iImage
    * For which image you wish to set the angle. 
    * @param oOffsetRadians
    * The calibration angle in radians. Sinusoidal animation cycle starts at -PI, therefor <br>
    * an offset of zero degrees indicates that the found phase angle was -PI.
    * @see CATSamImagesOperatorFactory
    */
  virtual HRESULT CalculateCalibrationAngleAtMaxDisplacement( CATISamImage_var iImage, float& oOffsetRadians) = 0;

  /**
    * Get the publisher of the animation dialog close notification.
    * @param oPublisher
    * Use this in your AddAnalyseNotificationCB callback along with <br>
    * GetDiaCLOSENotification to catch when the user closes the <br>
    * animation dialog. <br>
    * Must only be called after Run().
    */
  virtual HRESULT GetEventPublisher ( CATCommand *& oPublisher) = 0;

  /**
    * Get animation dialog close notification.
    * This method can only be called after Run().
    * @param oNotif
    * Use this in your AddAnalyseNotificationCB callback along with <br>
    * GetEventPublisher to catch when the user closes the <br>
    * animation dialog.
    */
  virtual HRESULT GetDiaCLOSENotification ( CATNotification *& oNotif) = 0;

  /**
    * Get animation dialog close notification.
    * This method can only be called after Run().
    * @param oNotif
    * Use this in your AddAnalyseNotificationCB callback along with <br>
    * GetEventPublisher to catch when the user closes the <br>
    * animation dialog.
    */
  virtual HRESULT GetWindCloseNotification ( CATNotification *& oNotif) = 0;

  /**
    * Get the animation dialog.
    * This method can only be called after Run().
    * @param oAnimationWindow
    * Use this to hide or show the animation window.
    * Must only be called after Run().
    */
  virtual HRESULT GetActiveWindow ( CATDialog *& oAnimationWindow) = 0;

  /**
    * Set the loop mode.
    * @param iLoopMode
    * The loop mode.
    * Must only be called after Run().
    * @see CATSamAnimationLoopMode
    */
  virtual HRESULT SetLoopMode ( const CATSamAnimationLoopMode iLoopMode) = 0;

  /**
    * Set the cycle mode.
    * @param iCycleMode
    * Possible values: 0 = Linear, 1 = Sinusoidal
    * Must only be called after Run().
    */
  virtual HRESULT SetCycleMode ( const int iCycleMode) = 0; // 0 = Linear, 1 = Sinus

  /**
    * Set the speed.
    * @param iSpeed
    * The speed of animation, from 1 to 10.
    * Must only be called after Run().
    */
  virtual HRESULT SetSpeed ( const int iSpeed ) = 0;

  // No constructors or destructors on this pure virtual base class
  // --------------------------------------------------------------
};
CATDeclareHandler(CATISamAnimationOperator, CATBaseUnknown);
//------------------------------------------------------------------

#endif
