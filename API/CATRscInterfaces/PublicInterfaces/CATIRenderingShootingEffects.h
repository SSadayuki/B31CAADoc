#ifndef CATIRenderingShootingEffects_h
#define CATIRenderingShootingEffects_h

// COPYRIGHT DASSAULT SYSTEMES 2002

/**
 * @CAA2Level L0
 * @CAA2Usage U3
 */

#include "CATRscItfCPP.h"
#include "CATBaseUnknown.h"
#include "CATBoolean.h"


#ifndef LOCAL_DEFINITION_FOR_IID
extern ExportedByCATRscItfCPP IID IID_CATIRenderingShootingEffects;
#else
extern "C" const IID IID_CATIRenderingShootingEffects;
#endif

/** 
  * Interface to manage effects parameters for shooting objects.
  * @see CATIRenderingShooting, CATIRenderingShootingFactory
  */


class ExportedByCATRscItfCPP CATIRenderingShootingEffects : public CATBaseUnknown
{
  CATDeclareInterface;

  public:

/**
 * Returns the glow and depth of field status of a shooting object.
 * This status defines if glow effects and depth of field effects
 * are added to image computation.
 * @param oGlowStatus
 *   The glow effect status
 * <ul> <b>Legal values</b>
 *   <li> TRUE   Glow effect is computed </li>
 *   <li> FALSE  Glow effect is ignored </li>
 * </ul>
 * @param oDepthOfFieldStatus
 *   The depth of field effect status
 * <ul> <b>Legal values</b>
 *   <li> TRUE   Depth Of Field effcet is computed </li>
 *   <li> FALSE  Depth Of Field effect is not computed </li>
 * </ul>
 */
    virtual void GetEffectsStatus(CATBoolean &oGlowStatus, CATBoolean &oDepthOfFieldStatus) const = 0;

/**
 * Sets the glow and depth of field status of a shooting object.
 * This status defines if glow effects and depth of field effects
 * are added to image computation.
 * @param iGlowStatus
 *   The glow effect status
 * <ul> <b>Legal values</b>
 *   <li> TRUE   Glow effect is computed </li>
 *   <li> FALSE  Glow effect is ignored </li>
 * </ul>
 * @param iDepthOfFieldStatus
 *   The depth of field effect status
 * <ul> <b>Legal values</b>
 *   <li> TRUE   Depth Of Field effect is computed </li>
 *   <li> FALSE  Depth Of Field effect is not computed </li>
 * </ul>
 */
    virtual HRESULT SetEffectsStatus(const CATBoolean iGlowStatus, const CATBoolean iDepthOfFieldStatus) = 0;

/**
 *  Returns the radius of confusion for depth of field effect.
 * @param oRadius
 *   The radius of confusion value (ranges from 1 to 10 millimeters)
 */
    virtual void GetDepthOfFieldRadius(double &oRadius) const = 0;

/**
 *  Sets the radius of confusion for depth of field effect.
 * @param iRadius
 *   The radius of confusion value (ranges from 1 to 10 millimeters)
 */
    virtual HRESULT SetDepthOfFieldRadius(const double iRadius) = 0;

/**
 *  Returns the glow parameters for glow effects.
 * @param oThreshold
 *   The color threshold value (ranges from 0.5 to 1.5).
 *   This threshold determines how many pixels from the image will be processed
 *   for the glow effect.
 *   A pixel with a color component (red, green, or blue) above that threshold will be glowed.
 * @param oIntensity
 *   The glow intensity value (ranges from 0.1 to 10.0).
 *   This value affects the brightness of the glow.
 * @param oSize
 *   The glow size value (ranges from 0.1 to 1.0).
 */
    virtual void GetGlowParameters(double &oThreshold, double &oIntensity, double &oSize) const = 0;

/**
 *  Sets the glow parameters for glow effects.
 * @param iThreshold
 *   The color threshold value (ranges from 0.5 to 1.5).
 *   This threshold determines how many pixels from the image will be processed
 *   for the glow effect.
 *   A pixel with a color component (red, green, or blue) above that threshold will be glowed.
 *   Note that a high number of pixels to process may increase dramatically the processing time.
 * @param iIntensity
 *   The glow intensity value (ranges from 0.1 to 10.)
 *   This value affects the brightness of the glow.
 *   Note that this parameter has no effect on the processing time.
 * @param iSize
 *   The glow size value (ranges from 0.1 to 1.0).
 *   Note that large sizes may increase dramatically the processing time.
 */
    virtual HRESULT SetGlowParameters(const double iThreshold, const double iIntensity, const double iSize) = 0;

/**
 *  Returns the flare parameters for glow effects.
 * @param oIntensity
 *   The flare intensity value (ranges from 0.0 to 1.0).
 *   A value of 0 disables the flare.
 * @param oDiffusion
 *   The flare diffusion value (ranges from 0.3 to 1.0).
 *   This value defines the width of the flare.
 */
    virtual void GetFlareParameters(double &oIntensity, double &oDiffusion) const = 0;

/**
 *  Sets the flare parameters for glow effects.
 * @param iIntensity
 *   The flare intensity value (ranges from 0.0 to 1.0).
 *   A value of 0 disables the flare.
 *   Note that this parameter has no effect on the processing time.
 * @param iDiffusion
 *   The flare diffusion value (ranges from 0.3 to 1.0).
 *   This value defines the width of the flare.
 *   Note that this parameter has no effect on the processing time.
 */
    virtual HRESULT SetFlareParameters(const double iIntensity, const double iDiffusion) = 0;

/**
 *  Returns the radial lines parameters for glow effects.
 * @param oSize
 *   The maximum length of the radial lines (ranges from 0.0 to 1.0).
 *   A value of 0 disables the radial lines.
 * @param oEffect
 *   Defines the shape of the radial lines (ranges from 0.0 to 1.0).
 *   A value of 0 results in a random distribution of radial lines, and a 
 *   value of 1 in cross-shaped radial lines.
 */
    virtual void GetRadialLinesParameters(double &oSize, double &oEffect) const = 0;

/**
 *  Sets the flare parameters for glow effects.
 * @param iSize
 *   The maximum length of the radial lines (ranges from 0.0 to 1.0).
 *   A value of 0 disables the radial lines.
 *   Note that this parameter has no effect on the processing time.
 * @param iEffect
 *   Defines the shape of the radial lines (ranges from 0.0 to 1.0).
 *   A value of 0 results in a random distribution of radial lines, and a 
 *   value of 1 in cross-shaped radial lines.
 *   Note that this parameter has no effect on the processing time.
 */
    virtual HRESULT SetRadialLinesParameters(const double iSize, const double iEffect) = 0;

};

CATDeclareHandler(CATIRenderingShootingEffects, CATBaseUnknown);

#endif
