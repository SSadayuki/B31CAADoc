#ifndef CATIRdgOptions_h
#define CATIRdgOptions_h

// COPYRIGHT DASSAULT SYSTEMES 2003

/**
 * @CAA2Level L0
 * @CAA2Usage U3
 */

#include "CATRdgItfCPP.h"
#include "CATIRdgBase.h"
#include "CATBooleanDef.h"


class CATUnicodeString;


#ifndef LOCAL_DEFINITION_FOR_IID
extern ExportedByCATRdgItfCPP IID IID_CATIRdgOptions;
#else
extern "C" const IID IID_CATIRdgOptions;
#endif

/** 
 * Interface for rendering options.
 * <b>Role</b>:
 * This is the interface that every option implements.
 * It is used to access the data needed for rendering.
 */

class ExportedByCATRdgItfCPP CATIRdgOptions : public CATIRdgBase
{
/** @nodoc */
  CATDeclareInterface;

  public:

/**
 * Returns the raytracing status.
 * @param oStatus
 *   The raytracing status.
 *   <ul> raytracing status.
 *   <li> TRUE  raytracing on </li>
 *   <li> FALSE raytracing off </li>
 *   </ul>
 * @return
 *   An HRESULT value.
 *   <br><b> Legal values</b>:
 *   <li><tt>S_OK</tt> the operation succeeded </li>
 *   <li><tt>E_FAIL</tt> otherwise </li>.
 */
    virtual HRESULT GetRaytracingStatus(CATBoolean &oStatus) = 0;

/**
 * Returns the shadow status.
 * @param oStatus
 *   The shadow status.
 *   <ul> shadow status.
 *   <li> TRUE  shadows on </li>
 *   <li> FALSE shadows off </li>
 *   </ul>
 * @return
 *   An HRESULT value.
 *   <br><b> Legal values</b>:
 *   <li><tt>S_OK</tt> the operation succeeded </li>
 *   <li><tt>E_FAIL</tt> otherwise </li>.
 */
    virtual HRESULT GetShadowsStatus(CATBoolean &oStatus) = 0;

/**
 * Returns the texture status.
 * @param oStatus
 *   The texture status.
 *   <ul> texture status.
 *   <li> TRUE  textures on </li>
 *   <li> FALSE textures off </li>
 *   </ul>
 * @return
 *   An HRESULT value.
 *   <br><b> Legal values</b>:
 *   <li><tt>S_OK</tt> the operation succeeded </li>
 *   <li><tt>E_FAIL</tt> otherwise </li>.
 */
    virtual HRESULT GetTexturesStatus(CATBoolean &oStatus) = 0;

/**
 * Returns the lightmap status.
 * @param oStatus
 *   The lightmap status.
 *   <ul> lightmap status.
 *   <li> TRUE  lightmap on </li>
 *   <li> FALSE lightmap off </li>
 *   </ul>
 * @return
 *   An HRESULT value.
 *   <br><b> Legal values</b>:
 *   <li><tt>S_OK</tt> the operation succeeded </li>
 *   <li><tt>E_FAIL</tt> otherwise </li>.
 */
    virtual HRESULT GetLightMapStatus(CATBoolean &oStatus) = 0;

/**
 * Returns the raytracing depths,
 * @param oReflections
 *   The reflection depth.
 * @param oRefractions
 *   The refraction depth.
 * @param oRebounds
 *   The trace depth.
 * @return
 *   An HRESULT value.
 *   <br><b> Legal values</b>:
 *   <li><tt>S_OK</tt> the operation succeeded </li>
 *   <li><tt>E_FAIL</tt> otherwise </li>.
 */
    virtual HRESULT GetTraceDepth(int &oReflections, int &oRefractions, int &oRebounds) = 0;

/**
 * Returns the sample limits for image computation.
 * The numbers are specified in powers of two.
 * 0 means one sample per pixel, 1 means four, -1 means
 * one sample for every four pixels.
 * @param oMin
 *   Minimum samples.
 * @param oMax
 *   Maximum samples.
 * @param oColor
 *   The RGBA contrast color. 
 *   It controls how much two neighboring samples must
 *   differ in order to force further oversampling in
 *   the area. Each color component ranges
 *   from <code>0.</code> to <code>1.</code>. 
 * @return
 *   An HRESULT value.
 *   <br><b> Legal values</b>:
 *   <li><tt>S_OK</tt> the operation succeeded </li>
 *   <li><tt>E_FAIL</tt> otherwise </li>.
 */
    virtual HRESULT GetSamples(int &oMin, int &oMax, double oColor[4]) = 0;

/**
 * Returns the caustic status.
 * @param oStatus
 *   The caustic status.
 *   <ul> caustic status.
 *   <li> TRUE  caustics on </li>
 *   <li> FALSE caustics off </li>
 *   </ul>
 * @return
 *   An HRESULT value.
 *   <br><b> Legal values</b>:
 *   <li><tt>S_OK</tt> the operation succeeded </li>
 *   <li><tt>E_FAIL</tt> otherwise </li>.
 */
    virtual HRESULT GetCausticStatus(CATBoolean &oStatus) = 0;

/**
 * Returns the caustic parameters.
 * @param oAccuracy
 *   The number of photons considered.
 * @param oRadius
 *   The maximum distance.
 * @return
 *   An HRESULT value.
 *   <br><b> Legal values</b>:
 *   <li><tt>S_OK</tt> the operation succeeded </li>
 *   <li><tt>E_FAIL</tt> otherwise </li>.
 */
    virtual HRESULT GetCausticParameters(int &oAccuracy, double &oRadius) = 0;

/**
 * Returns the global illumination status.
 * @param oStatus
 *   The global illumination status.
 *   <ul> global illumination status.
 *   <li> TRUE  global illumination on </li>
 *   <li> FALSE global illumination off </li>
 *   </ul>
 * @return
 *   An HRESULT value.
 *   <br><b> Legal values</b>:
 *   <li><tt>S_OK</tt> the operation succeeded </li>
 *   <li><tt>E_FAIL</tt> otherwise </li>.
 */
    virtual HRESULT GetGlobalIlluminationStatus(CATBoolean &oStatus) = 0;

/**
 * Returns the global illumination parameters.
 * @param oAccuracy
 *   The number of photons considered.
 * @param oRadius
 *   The maximum distance.
 * @return
 *   An HRESULT value.
 *   <br><b> Legal values</b>:
 *   <li><tt>S_OK</tt> the operation succeeded </li>
 *   <li><tt>E_FAIL</tt> otherwise </li>.
 */
    virtual HRESULT GetGlobalIlluminationParameters(int &oAccuracy, double &oRadius) = 0;

/**
 * Returns the photon depths,
 * @param oReflections
 *   The reflection depth.
 * @param oRefractions
 *   The refraction depth.
 * @param oRebounds
 *   The trace depth.
 * @return
 *   An HRESULT value.
 *   <br><b> Legal values</b>:
 *   <li><tt>S_OK</tt> the operation succeeded </li>
 *   <li><tt>E_FAIL</tt> otherwise </li>.
 */
    virtual HRESULT GetPhotonsDepth(int &oReflections, int &oRefractions, int &oRebounds) = 0;

/**
 * Returns the final gathering status.
 * @param oStatus
 *   The final gathering status.
 *   <ul> final gathering status.
 *   <li> TRUE  final gathering on </li>
 *   <li> FALSE final gathering off </li>
 *   </ul>
 * @return
 *   An HRESULT value.
 *   <br><b> Legal values</b>:
 *   <li><tt>S_OK</tt> the operation succeeded </li>
 *   <li><tt>E_FAIL</tt> otherwise </li>.
 */
    virtual HRESULT GetFinalGatherStatus(CATBoolean &oStatus) = 0;

/**
 * Returns the global illumination parameters.
 * @param oAccuracy
 *   The number of rays shot.
 * @param oMaxRadius
 *   The maximum radius.
 * @param oMinRadius
 *   The minimum radius.
 * @return
 *   An HRESULT value.
 *   <br><b> Legal values</b>:
 *   <li><tt>S_OK</tt> the operation succeeded </li>
 *   <li><tt>E_FAIL</tt> otherwise </li>.
 */
    virtual HRESULT GetFinalGatherParameters(int &oAccuracy, double &oMaxRadius, double &oMinRadius) = 0;

/**
 * Returns the amount of ambient used when
 * computing material illumination.
 * @param oFactor
 *   The amount of material ambient used.
 * @return
 *   An HRESULT value.
 *   <br><b> Legal values</b>:
 *   <li><tt>S_OK</tt> the operation succeeded </li>
 *   <li><tt>E_FAIL</tt> otherwise </li>.
 */
    virtual HRESULT GetAmbientFactor(double &oFactor) = 0;

/**
 * Returns the depth of field status.
 * @param oStatus
 *   The status.
 *   <ul> depth of field status.
 *   <li> TRUE  effect is enabled </li>
 *   <li> FALSE effect is disabled </li>
 *   </ul>
 * @return
 *   An HRESULT value.
 *   <br><b> Legal values</b>:
 *   <li><tt>S_OK</tt> the operation succeeded </li>
 *   <li><tt>E_FAIL</tt> otherwise </li>.
 */
    virtual HRESULT GetDepthOfFieldStatus(CATBoolean &oStatus) = 0;

/**
 * Returns the depth of field parameter.
 * @param oLensRadius
 *   The radius of the lens.
 * @return
 *   An HRESULT value.
 *   <br><b> Legal values</b>:
 *   <li><tt>S_OK</tt> the operation succeeded </li>
 *   <li><tt>E_FAIL</tt> otherwise </li>.
 */
    virtual HRESULT GetDepthOfField(double &oLensRadius) = 0;

/**
 * Returns the glow effect status.
 * @param oStatus
 *   The glow status.
 *   <ul> glow status.
 *   <li> TRUE  glow on </li>
 *   <li> FALSE glow off </li>
 *   </ul>
 * @return
 *   An HRESULT value.
 *   <br><b> Legal values</b>:
 *   <li><tt>S_OK</tt> the operation succeeded </li>
 *   <li><tt>E_FAIL</tt> otherwise </li>.
 */
    virtual HRESULT GetGlowStatus(CATBoolean &oStatus) = 0;

/**
 * Returns the glow parameters.
 * @param oThreshold
 *   The threshold for glow.
 * @param oSize
 *   The filter size percentage.
 * @param oIntensity
 *   The intensity factor.
 * @param oFlareFactor
 *   The flare proportion ranges from <code>0</code> (no flare)
 *   to <code>1</code> (max flare).
 * @param oFlareDiffusion
 *   The flare diffusion ranges from <code>0.3</code>
 *   to <code>1</code>.
 * @param oLineSize
 *   The lines size ranges from <code>0</code> (none)
 *   to <code>1</code> (max length).
 * @param oStarEffect
 *   The effect ranges from <code>0</code> (random star) 
 *   to <code>1</code> (cross).
 * @return
 *   An HRESULT value.
 *   <br><b> Legal values</b>:
 *   <li><tt>S_OK</tt> the operation succeeded </li>
 *   <li><tt>E_FAIL</tt> otherwise </li>.
 */
    virtual HRESULT GetGlowParameters(double &oThreshold, 
                                      double &oSize, 
                                      double &oIntensity, 
                                      double &oFlareFactor, 
                                      double &oFlareDiffusion,
                                      double &oLineSize,
                                      double &oStarEffect) = 0;

/**
 * Returns the cartoon status.
 * @param oStatus
 *   The cartoon status.
 *   <ul> cartoon status.
 *   <li> TRUE  cartoon on </li>
 *   <li> FALSE cartoon off </li>
 *   </ul>
 * @return
 *   An HRESULT value.
 *   <br><b> Legal values</b>:
 *   <li><tt>S_OK</tt> the operation succeeded </li>
 *   <li><tt>E_FAIL</tt> otherwise </li>.
 */
    virtual HRESULT GetCartoonStatus(CATBoolean &oStatus) = 0;

/**
 * Returns the cartoon parameters.
 * @param oShading
 *   The shading status.
 *   <ul> shading status.
 *   <li> TRUE  shading on </li>
 *   <li> FALSE shading off </li>
 *   </ul>
 * @param oStroke
 *   The stroke status.
 *   <ul> shading status.
 *   <li> TRUE  variable stroke on </li>
 *   <li> FALSE variable stroke off </li>
 *   </ul>
 * @param oThickness
 *   The contour thickness.
 * @param oZDelta
 *   The depth difference to cause contour.
 * @param oNDelta
 *   The normal difference to cause contour (in degrees).
 * @return
 *   An HRESULT value.
 *   <br><b> Legal values</b>:
 *   <li><tt>S_OK</tt> the operation succeeded </li>
 *   <li><tt>E_FAIL</tt> otherwise </li>.
 */
    virtual HRESULT GetCartoonParameters(CATBoolean &oShading, 
                                         CATBoolean &oStroke,
                                         double     &oThickness,
                                         double     &oZDelta,
                                         double     &oNDelta) = 0;
                                         
/**
 * Returns the background color.
 * @param oColor
 *   The RGB color. Each color component ranges
 *   from <code>0.</code> to <code>1.</code>. 
 * @param oGradient
 *   TRUE if the baground is a gradient.
 * @param oTexture
 *   The path of the texture file.
 * @param iScale
 *   The scale of the texture image.
 * @param oStretch
 *   The display mode.
 *   <ul> display mode.
 *   <li> TRUE the image is stretched to fit exactly inside the window </li>
 *   <li> FALSE the image is not stretched (best fit) </li>
 *   </ul>
 * @return
 *   An HRESULT value.
 *   <br><b> Legal values</b>:
 *   <li><tt>S_OK</tt> the operation succeeded </li>
 *   <li><tt>E_FAIL</tt> otherwise </li>.
 */
    virtual HRESULT GetBackground(double oColor[3], 
                                  CATBoolean &oGradient, 
                                  CATString &oTexture, 
                                  double oScale[2],
                                  CATBoolean &oStretch) = 0;
};

/** @nodoc */
CATDeclareHandler(CATIRdgOptions,CATIRdgBase);

#endif
