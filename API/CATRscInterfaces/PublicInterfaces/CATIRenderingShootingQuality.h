#ifndef CATIRenderingShootingQuality_h
#define CATIRenderingShootingQuality_h

// COPYRIGHT DASSAULT SYSTEMES 2002

/**
 * @CAA2Level L0
 * @CAA2Usage U3
 */

#include "CATRscItfCPP.h"
#include "CATBaseUnknown.h"
#include "CATBoolean.h"



#ifndef LOCAL_DEFINITION_FOR_IID
extern ExportedByCATRscItfCPP IID IID_CATIRenderingShootingQuality;
#else
extern "C" const IID IID_CATIRenderingShootingQuality;
#endif

/** 
  * Interface to manage quality parameters for shooting objects.
  * @see CATIRenderingShooting, CATIRenderingShootingFactory
  */


class ExportedByCATRscItfCPP CATIRenderingShootingQuality : public CATBaseUnknown
{
  CATDeclareInterface;

  public:

/**
 *  Returns the maximum numbers of rebounds (for reflection, for refraction and for total) to 
 *  take into account for image computation.
 * @param oReflectionNumber
 *   The maximum number of reflections levels (ranges from 0 to 9 rebounds)
 * <br>
 * @param oRefractionNumber
 *   The maximum number of refractions levels (ranges from 0 to 9 rebounds)
 * <br>
 * @param oTotalNumber
 *   The maximum number of rebounds levels (ranges from 0 to 18 rebounds)
 */
    virtual void GetReboundsNumber(int &oReflectionNumber, int &oRefractionNumber, int &oTotalNumber) const = 0;

/**
 *  Sets the maximum numbers of rebounds (for reflection, for refraction and for total) to 
 *  take into account for image computation.
 * @param iReflectionNumber
 *   The maximum number of reflections levels (ranges from 0 to 9 rebounds)
 * <br>
 * @param iRefractionNumber
 *   The maximum number of refractions levels (ranges from 0 to 9 rebounds)
 * <br>
 * @param iTotalNumber
 *   The maximum number of rebounds levels (ranges from 0 to 18 rebounds)
 */
    virtual HRESULT SetReboundsNumber(const int iReflectionNumber, const int iRefractionNumber, const int iTotalNumber) = 0;

/**
 * Returns the textures and shadows status of a shooting object.
 * This status defines if textures are taken into account for image computation
 * and if shadows are computed or not.
 * @param oTextureStatus
 *   The textures status
 * <ul> <b>Legal values</b>
 *   <li> TRUE   Textures are taking into account </li>
 *   <li> FALSE  Textures are ignored </li>
 * </ul>
 * @param oShadowsStatus
 *   The shadows status
 * <ul> <b>Legal values</b>
 *   <li> TRUE   Shadows are calculated </li>
 *   <li> FALSE  Shadows are not calculated </li>
 * </ul>
 */
    virtual void GetRenderingStatus(CATBoolean &oTextureStatus, CATBoolean &oShadowsStatus) const = 0;

/**
 * Sets the textures and shadows status of a shooting object.
 * This status defines if textures are taken into account for image computation
 * and if shadows are computed or not.
 * @param iTextureStatus
 *   The textures status
 * <ul> <b>Legal values</b>
 *   <li> TRUE   Textures are taking into account </li>
 *   <li> FALSE  Textures are ignored </li>
 * </ul>
 * @param iShadowsStatus
 *   The shadows status
 * <ul> <b>Legal values</b>
 *   <li> TRUE   Shadows are calculated </li>
 *   <li> FALSE  Shadows are not calculated </li>
 * </ul>
 */
    virtual HRESULT SetRenderingStatus(const CATBoolean iTextureStatus, const CATBoolean iShadowsStatus) = 0;

/**
 * Returns the minimum sample number, the maximum sample number and the contrast threshold for image computation.
 * This value ranges from <code>0/code> to <code>5/code>.
 * Minimum samples value sets the minimum number of rays 
 * casted for 1,4 or 16 pixels.
 * @param oMinSampling
 *   The minimum sample number
 *   This value sets the minimum number of rays casted for 1,4 or 16 pixels.
 *   This value ranges from <code>0/code> to <code>5/code>.
 * <ul> <b>Legal values</b>
 *   <li> 0 : 1 ray casted for a 4x4 pixel square </li>
 *   <li> 1 : 1 ray casted for a 2x2 pixel square </li>
 *   <li> 2 : 1 ray casted per pixel </li>
 *   <li> 3 : 4 rays casted per pixel </li>
 *   <li> 4 : 16 rays casted per pixel </li>
 *   <li> 5 : 64 rays casted per pixel </li>
 * @param oMaxSample
 *   The maximum sample number
 *   This value sets the maximum number of rays casted for 1,4 or 16 pixels.
 *   This value ranges from <code>0/code> to <code>5/code>.
 * <ul> <b>Legal values</b>
 *   <li> 0 : 1 ray casted for a 4x4 pixel square </li>
 *   <li> 1 : 1 ray casted for a 2x2 pixel square </li>
 *   <li> 2 : 1 ray casted per pixel </li>
 *   <li> 3 : 4 rays casted per pixel </li>
 *   <li> 4 : 16 rays casted per pixel </li>
 *   <li> 5 : 64 rays casted per pixel </li>
 * @param oContrastThreshold
 *   The contrast threshold value
 *   Contrast value sets the contrast threshold for adaptative 
 *   oversampling, that is, the maximum contrast threshold between 
 *   pixels, below which no oversampling will be done. 
 *   If the contrast of any RGB component between the currently 
 *   calculated pixel and heighboring pixels weighted by their sum
 *   is greater than this threshold, the pixel is oversampled.
 *   This value ranges from <code>0</code> to <code>100</code>%.
 */
    virtual void GetRenderingSampling(int &oMinSampling, int &oMaxSampling, int &oContrastThreshold) const = 0;

/**
 * Sets the minimum sample number, the maximum sample number and the contrast threshold for image computation.
 * This value ranges from <code>0/code> to <code>5/code>.
 * Minimum samples value sets the minimum number of rays 
 * casted for 1,4 or 16 pixels.
 * @param iMinSampling
 *   The minimum sample number
 *   This value sets the minimum number of rays casted for 1,4 or 16 pixels.
 *   This value ranges from <code>0/code> to <code>5/code>.
 * <ul> <b>Legal values</b>
 *   <li> 0 : 1 ray casted for a 4x4 pixel square </li>
 *   <li> 1 : 1 ray casted for a 2x2 pixel square </li>
 *   <li> 2 : 1 ray casted per pixel </li>
 *   <li> 3 : 4 rays casted per pixel </li>
 *   <li> 4 : 16 rays casted per pixel </li>
 *   <li> 5 : 64 rays casted per pixel </li>
 * @param iMaxSampling
 *   The maximum sample number
 *   This value sets the maximum number of rays casted for 1,4 or 16 pixels.
 *   This value ranges from <code>0/code> to <code>5/code>.
 * <ul> <b>Legal values</b>
 *   <li> 0 : 1 ray casted for a 4x4 pixel square </li>
 *   <li> 1 : 1 ray casted for a 2x2 pixel square </li>
 *   <li> 2 : 1 ray casted per pixel </li>
 *   <li> 3 : 4 rays casted per pixel </li>
 *   <li> 4 : 16 rays casted per pixel </li>
 *   <li> 5 : 64 rays casted per pixel </li>
 * @param iContrastThreshold
 *   The contrast threshold value
 *   Contrast value sets the contrast threshold for adaptative 
 *   oversampling, that is, the maximum contrast threshold between 
 *   pixels, below which no oversampling will be done. 
 *   If the contrast of any RGB component between the currently 
 *   calculated pixel and heighboring pixels weighted by their sum
 *   is greater than this threshold, the pixel is oversampled.
 *   This value ranges from <code>0</code> to <code>100</code>%.
 */
    virtual HRESULT SetRenderingSampling(const int iMinSampling, const int iMaxSampling, const int iContrastThreshold) = 0;
};

CATDeclareHandler(CATIRenderingShootingQuality, CATBaseUnknown);

#endif
