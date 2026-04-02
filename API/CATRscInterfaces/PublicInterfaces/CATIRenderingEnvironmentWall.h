#ifndef CATIRenderingEnvironmentWall_h
#define CATIRenderingEnvironmentWall_h

// COPYRIGHT DASSAULT SYSTEMES 2002

/**
 * @CAA2Level L0
 * @CAA2Usage U3
 */

#include "CATRscItfCPP.h"
#include "CATBaseUnknown.h"
#include "CATUnicodeString.h"
#include "CATRenderingEnum.h"



#ifndef LOCAL_DEFINITION_FOR_IID
extern ExportedByCATRscItfCPP IID IID_CATIRenderingEnvironmentWall;
#else
extern "C" const IID IID_CATIRenderingEnvironmentWall;
#endif

/** 
  * Interface to manage environment wall objects.
  * Each environment object is composed of several environment walls objects.
  * @see CATIRenderingEnvironment
  */


class ExportedByCATRscItfCPP CATIRenderingEnvironmentWall : public CATBaseUnknown
{
  CATDeclareInterface;

  public:

/**
 * Returns the wall active status.
 * @return
 *   The active status.
 *   <ul> active status.
 *   <li> TRUE  wall is visible </li>
 *   <li> FALSE wall is invisible </li>
 *   </ul>
 */
    virtual CATBoolean GetStatus() = 0;

/**
 * Sets the wall active status.
 * A wall is visible only when it is active.
 * @param iIsActive
 *   The new active status.
 *   <ul> active status.
 *   <li> TRUE  wall is visible </li>
 *   <li> FALSE wall is invisible </li>
 *   </ul>
 */
    virtual HRESULT SetStatus(CATBoolean iIsActive) = 0;

/**
 *  Returns the shadows status of a environment wall object.
 *  A wall may or may not be affected by lights depending on this status.
 * @return
 *    The wall shadow status for rendering calculation.
 *        <br><b>Legal values</b>:
 *          <br>TRUE  wall is affected by active lights and can bear shadows
 *          <br>FALSE wall is not affected by active lights and is always seen
 */
    virtual CATBoolean GetShadowsStatus() const = 0;

/**
 *  Sets the shadows status of a environment wall object.
 *  A wall may or may not be affected by lights depending on this status.
 * @param iStatus
 *   The wall shadow status for rendering calculation.
 *        <br><b>Legal values</b>:
 *          <br>TRUE  wall is affected by active lights and can bear shadows
 *          <br>FALSE wall is not affected by active lights and is always seen
 */
    virtual HRESULT SetShadowsStatus(const CATBoolean iStatus) const = 0;

/**
 * Returns the wall texture image path.
 * If there is no texture, the string is an empty string.
 * @return
 *   The texture file path (complete path with file name and extension).
 */
    virtual CATUnicodeString GetTexture() = 0;

/**
 * Changes the wall texture image.
 * To remove the texture, use an empty string.
 * @param iiTexturePath
 *   The texture file path (complete path with file name and extension).
 */
    virtual HRESULT SetTexture(CATUnicodeString &iTexturePath) = 0;

/**
 * Returns the texture automatic scaling status.
 * If status is automatic scaling, the texture is scaled so that it fits exactly in the wall.
 * @return
 *   The scaling status.
 *    <br><b>Legal values</b>:
 *      <br> TRUE  automatic scaling is on 
 *      <br> FALSE automatic scaling is off
 */
    virtual CATBoolean GetTextureAutoFitStatus() = 0;

/**
 * Sets the texture automatic scaling status.
 * If status is automatic scaling, the texture is scaled so that it fits exactly in the wall.
 * @param iFitStatus
 *   The scaling status.
 *    <br><b>Legal values</b>:
 *      <br> TRUE  automatic scaling is on 
 *      <br> FALSE automatic scaling is off
 */
    virtual HRESULT SetTextureAutoFitStatus(CATBoolean iFitStatus) = 0;

/**
 * Returns the texture orientation status along the U and V axis.
 * @return
 *   oFlipUStatus: The U flip status.
 *    <br><b>Legal values</b>:
 *     <br> TRUE  texture is flipped along the U axis 
 *     <br> FALSE texture is not flipped along the U axis 
 *   oFlipVStatus: The V flip status.
 *    <br><b>Legal values</b>:
 *     <br> TRUE  texture is flipped along the V axis 
 *     <br> FALSE texture is not flipped along the V axis 
 */
    virtual void GetTextureFlipStatus(CATBoolean &oFlipUStatus, CATBoolean &oFlipVStatus) = 0;

/**
 * Sets the texture orientation status along the U and V axis.
 * @param iFlipUStatus
 *   <br><b>Legal values</b>:
 *     <br> TRUE  texture is flipped along the U axis
 *     <br> FALSE texture is not flipped along the U axis 
 * @param iFlipVStatus
 *   <br><b>Legal values</b>:
 *     <br> TRUE  texture is flipped along the V axis
 *     <br> FALSE texture is not flipped along the V axis 
 */
    virtual HRESULT SetTextureFlipStatus(CATBoolean iFlipUStatus, CATBoolean iFlipVStatus) = 0;

/**
 * Returns the texture scales along the U and V axis.
 * N.B. Scale value should be greater than 0.
 * @return
 *   oScaleU: The U scale value.
 *   oScaleV: The V scale value.
 */
    virtual void GetTextureScale(double &oScaleU, double &oScaleV) = 0;

/**
 * Sets the texture scales along the U and V axis.
 * Note that this parameters are useless if automatic scaling is enabled.
 * @param iScaleU
 *   The scale value along U axis
 * @param iScaleV
 *   The scale value along V axis
 */
    virtual HRESULT SetTextureScale(double iScaleU, double iScaleV) = 0;

/**
 * Returns the texture offsets along the U and V axis.
 * @return
 *   oScaleU: The U offset value.
 *   oScaleV: The V offset value.
 */
    virtual void GetTexturePosition(double &oOffsetU, double &oOffsetV) = 0;

/**
 * Sets the texture offsets along the U and V axis.
 * Note that this parameters are useless if automatic scaling is enabled.
 * @param iOffsetU
 *   The offset value along U axis
 * @param iOffsetV
 *   The offset value along V axis
 */
    virtual HRESULT SetTexturePosition(double iOffsetU, double iOffsetV) = 0;

/**
 * Returns the texture rotation angle.
 * @return
 *   The orientaion value (in degrees).
 */
    virtual double GetTextureOrientation() = 0;

/**
 * Sets the texture rotation angle.
 * @param iRotation
 *   The orientation value 
 */
    virtual HRESULT SetTextureOrientation(double iRotation) = 0;

};

CATDeclareHandler(CATIRenderingEnvironmentWall, CATBaseUnknown);

#endif
