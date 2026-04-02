#ifndef CATIRenderingLight_h
#define CATIRenderingLight_h

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
extern ExportedByCATRscItfCPP IID IID_CATIRenderingLight;
#else
extern "C" const IID IID_CATIRenderingLight;
#endif

/** 
  * Interface to manage light objects.
  * @see CATIRenderingLightFactory
  */


class ExportedByCATRscItfCPP CATIRenderingLight : public CATBaseUnknown
{
  CATDeclareInterface;

  public:

/**
 *  Returns the name of a light object.
 */
    virtual CATUnicodeString GetName() const = 0;

/** 
 *  Set the name of a light object
 */
    virtual HRESULT SetName(const CATUnicodeString &iName) = 0;

/**
 *  Returns the type of a light object.
 * <br><b>Legal values</b>:
 * <br>SpotLight for a spot light.
 * <br>PointLight for a point light.
 * <br>DirectionalLight for a directionnal light.
 * <br>RectangleAreaLight for a rectangle area light.
 * <br>DiskAreaLight for a disk area light.
 * <br>SphereAreaLight for a spherical area light.
 * <br>CylindricAreaLight for a cylindrical area light.
 */
    virtual CATRenderingLightType GetType() const = 0;

/**
 *  Sets the type of a light object.
 * @param iType
 *   The light type 
 * <br><b>Legal values</b>:
 * <br>SpotLight for a spot light.
 * <br>PointLight for a point light.
 * <br>DirectionalLight for a directionnal light.
 * <br>RectangleAreaLight for a rectangle area light.
 * <br>DiskAreaLight for a disk area light.
 * <br>SphereAreaLight for a spherical area light.
 * <br>CylindricAreaLight for a cylindrical area light.
 */
    virtual HRESULT SetType(const CATRenderingLightType iType) const = 0;
/**
 *  Returns the mode of a light object.
 * <br><b>Legal values</b>:
 * <br>1: Light is linked to the viewpoint.
 * <br>2: Light is linked to the model.
 */
    virtual int GetMode() const = 0;

/**
 *  Sets the mode of a light object.
 * @param iMode
 *   The light mode 
 * <br><b>Legal values</b>:
 * <br>1: Light is linked to the viewpoint.
 * <br>2: Light is linked to the model.
 */
    virtual HRESULT SetMode(const int iMode) const = 0;

/**
 *  Returns the status of a light object.
 * @return
 *   An boolean value. 
 * <br><b>Legal values</b>:
 * <br>TRUE if light is active.
 * <br>FALSE if light is desactivated.
 */
    virtual CATBoolean GetStatus() const = 0;

/** 
 *  Set the status of a light object
 * @param iStatus
 *   The light status 
 * <br><b>Legal values</b>:
 * <br>TRUE if light is active.
 * <br>FALSE if light is desactivated.
 */
    virtual HRESULT SetStatus(const CATBoolean iStatus) = 0;

/**
 *  Returns the origin coordinates of a light object.
 * @return
 *   Double values. 
 */
    virtual void GetOrigin(double &oXcoordinate, double &oYcoordinate, double &oZcoordinate) const = 0;

/**
 *  Sets the origin coordinates of a light object.
 * @param iXcoordinate
 *   X coordinate of the origin point 
 * @param iYcoordinate
 *   Y coordinate of the origin point 
 * @param iZcoordinate
 *   Z coordinate of the origin point 
 */
    virtual HRESULT SetOrigin(const double iXcoordinate, const double iYcoordinate, const double iZcoordinate) const = 0;

/**
 *  Returns the target coordinates of a light object.
 * @return
 *   Double values. 
 */
    virtual void GetTarget(double &oXcoordinate, double &oYcoordinate, double &oZcoordinate) const = 0;

/**
 *  Sets the target coordinates of a light object.
 * @param iXcoordinate
 *   X coordinate of the target point 
 * @param iYcoordinate
 *   Y coordinate of the target point 
 * @param iZcoordinate
 *   Z coordinate of the target point 
 * N.B. The target coordinates are useless for point lights or spherical area lights.
 */
    virtual HRESULT SetTarget(const double iXcoordinate, const double iYcoordinate, const double iZcoordinate) const = 0;

/**
 *  Returns the (r,g,b) color components of a light object.
 * @return
 *   Integer values. Each component is a value between 0 and 255. 
 */
    virtual void GetColor(int &oRcomponent, int &oGcomponent, int &oBcomponent) const = 0;

/**
 *  Sets the (r,g,b) color components of a light object.
 * @param iRcomponent
 *   Red component of the color (value between 0 and 255)
 * @param iGcomponent
 *   Green component of the color (value between 0 and 255)
 * @param iBcomponent
 *   Blue component of the color (value between 0 and 255)
 */
    virtual HRESULT SetColor(const int iRcomponent, const int iGcomponent, const int iBcomponent) const = 0;

/**
 *  Returns the intensity parameters of a light object.
 * @return
 *   Double values
 *   oIntensity: The intensity of the light (value between 0 and 4)
 *   oAmbient  : Ambient coefficient of the light (value between 0 and 1)
 *   oDiffuse  : Diffuse coefficient of the light (value between 0 and 1)
 *   oSpecular : Specular coefficient of the light (value between 0 and 1)
 *   
 */
    virtual void GetIntensity(double &oIntensity, double &oAmbient, double &oDiffuse, double &oSpecular) const = 0;

/**
 *  Sets the intensity parameters of a light object.
 * @param iIntensity
 *   The intensity of the light (value between 0 and 4)
 * @param iAmbient
 *   Ambient coefficient of the light (value between 0 and 1)
 * @param iDiffuse
 *   Diffuse coefficient of the light (value between 0 and 1)
 * @param iSpecular
 *   Specular coefficient of the light (value between 0 and 1)
 */
    virtual HRESULT SetIntensity(const double iIntensity, const double iAmbient, const double iDiffuse, const double iSpecular) const = 0;

/**
 *  Returns the angle value (in degrees) of a spot light object.
 * @return
 *   Double value
 *   
 */
    virtual double GetAngle() const = 0;

/**
 *  Sets the angle value (in degrees) of a spot light object.
 * @param iAngle
 *   The angle of the spot light (value between 0 and 180)
 */
    virtual HRESULT SetAngle(const double iAngle) const = 0;

/**
 *  Returns the attenuation parameters of a light object.
 * @return
 *    oType       : The light falloff type
 *           <br><b>Legal values</b>:
 *                 <br>0 for no attenuation (light energy does not fall off with distance)
 *                 <br>1 for a linear falloff
 *                 <br>2 for a exponential falloff (physically correct)
 *    oEndDistance: The light maximum distance of illumination (Objects farther than this distance are not affected by the light)
 *    oStartRatio : It represents the fraction of the end distance where the light intensity starts to attenuate.
 *    oAngleRatio : It represents the fraction of the light angle where the illumination starts to attenuate.
 */
    virtual void GetAttenuation(int &oType, double &oEndDistance, double &oStartRatio, double &oAngleRatio) const = 0;

/**
 *  Sets the attenuation parameters of a light object.
 * @param iType
 *   The light falloff type
 *   <br><b>Legal values</b>:
 *   <br>0 for no attenuation (light energy does not fall off with distance)
 *   <br>1 for a linear falloff
 *   <br>2 for a exponential falloff (physically correct)
 * @param iEndDistance
 *   The light maximum distance of illumination (Objects farther than this distance are not affected by the light)
 * @param iStartRatio
 *   The fraction of the end distance where the light intensity starts to attenuate (value between 0.. and 1.)
 * @param iAngleRatio
 *   The fraction of the light angle where the illumination starts to attenuate (value between 0. and 1.)
 */
    virtual HRESULT SetAttenuation(const int iType, const double iEndDistance, const double iStartRatio, const double iAngleRatio) const = 0;

/**
 *  Returns a size value of an area light object.
 * @param iSizeType
 * <br><b>Legal values</b>:
 * <br>Length for a rectangle area light.
 * <br>Width for rectangle area light.
 * <br>Radius for disk, spherical or cylindrical area lights.
 * <br>Height for a cylindrical area light.
 * @return
 *    oSize: The size value.
 */
    virtual void GetAreaSize(CATRenderingSize iSizeType, double &oSize) const = 0;

/**
 *  Sets a size value of an area light object.
 * @param iSizeType
 * <br><b>Legal values</b>:
 * <br>Length for a rectangle area light.
 * <br>Width for rectangle area light.
 * <br>Radius for disk, spherical or cylindrical area lights.
 * <br>Height for a cylindrical area light.
 * @param iSize
 *   The size value.
 */
    virtual HRESULT SetAreaSize(CATRenderingSize iSizeType, const double iSize) const = 0;

/**
 *  Returns the parameters of an area light object.
 * @return
 *    oUSamples: The number of samples taken in the U direction.
 *    oVSamples: The number of samples taken in the V direction.
 *    oShowArea: The light area visibility status for rendering.
 *        <br><b>Legal values</b>:
 *          <br>TRUE  light area is rendered
 *          <br>FALSE light area is not rendered
 */
    virtual void GetAreaParameters(int &oUSamples, int &oVSamples, CATBoolean &oShowArea) const = 0;

/**
 *  Sets the indirect illumination parameters of a light object.
 * @param iUSamples
 *   The number of samples taken in the U direction (value between 1 and 40).
 * @param iVSamples
 *   The number of samples taken in the V direction (value between 1 and 40).
 * @param iShowArea
 *   The light area visibility status for rendering.
 *        <br><b>Legal values</b>:
 *          <br>TRUE  light area is rendered
 *          <br>FALSE light area is not rendered
 */
    virtual HRESULT SetAreaParameters(const int iUSamples, const int iVSamples, const CATBoolean iShowArea) const = 0;

/**
 *  Returns the shadows status of a light object.
 * @return
 *    oRayTracedStatus: The shadow status for rendering calculation.
 *        <br><b>Legal values</b>:
 *          <br>TRUE  the light casts shadows
 *          <br>FALSE the light does not cast shadows
 *    oRealTimeStatus: The shadow status for real time visualization.
 *        <br><b>Legal values</b>:
 *          <br>TRUE  shadows are displayed
 *          <br>FALSE no shadows are displayed
 */
    virtual void GetShadowsStatus(CATBoolean &oRayTracedStatus, CATBoolean &oRealTimeStatus) const = 0;

/**
 *  Sets the shadows status of a light object.
 * @param iRayTracedStatus
 *   The shadow status for rendering calculation.
 *        <br><b>Legal values</b>:
 *          <br>TRUE  the light casts shadows
 *          <br>FALSE the light does not cast shadows
 * @param iRealTimeStatus
 *   The shadow status for real time visualization.
 *        <br><b>Legal values</b>:
 *          <br>TRUE  shadows are displayed
 *          <br>FALSE no shadows are displayed
 */
    virtual HRESULT SetShadowsStatus(const CATBoolean iRayTracedStatus, const CATBoolean iRealTimeStatus) const = 0;

/**
 *  Returns the realtime shadow parameters of a light object.
 * @return
 *    oSmoothing: Smoothing of the shadow limits (value between 0 and 10)
 *    oRcomponent: red component of the shadow color (value between 0 and 255)
 *    oGcomponent: green component of the shadow color (value between 0 and 255)
 *    oBcomponent: blue component of the shadow color (value between 0 and 255)
 *    oTransparency: Transparency coefficient of the shadow color (value between 0 and 255)
 */
    virtual void GetShadowsParameters(int &oSmoothing, int &oRComponent, int &oGComponent, int &oBComponent, int &oTransparency) const = 0;

/**
 *  Sets the shadows status of a light object.
 * @param iSmoothing
 *   The smoothing of the shadow limits (value between 0 and 10)
 * @param oRComponent
 *   The red component of the shadow color (value between 0 and 255)  
 * @param oGComponent
 *   The green component of the shadow color (value between 0 and 255)  
 * @param oBComponent
 *   The blue component of the shadow color (value between 0 and 255)  
 * @param Transparency
 *   The transparency coefficient of the shadow color (value between 0 and 255)  
 */
    virtual HRESULT SetShadowsParameters(const int iSmoothing, const int oRComponent, const int oGComponent, const int oBComponent, const int oTransparency) const = 0;

/**
 *  Returns the indirect illumination parameters of a light object.
 * @return
 *    oStatus                    : The indirect illumination status for the light
 *                          <br><b>Legal values</b>:
 *                                   <br>TRUE: The indirect illumination is activated
 *                                   <br>FALSE: The indirect illumination status is desactivated
 *    oIntensity                 : The intensity of the indirect illumination
 *    oGlobalIlluminationPhotonNb: The number of photons for global illumination
 *    oCausticPhotonNb           : The number of photons for caustics
 */
    virtual void GetIndirectIllumination(CATBoolean &oStatus, double &oIntensity, int &oGlobalIlluminationPhotonNb, int &oCausticPhotonNb) const = 0;

/**
 *  Sets the indirect illumination parameters of a light object.
 * @param iStatus
 *   The indirect illumination status for the light
 *   <br><b>Legal values</b>:
 *   <br>TRUE if indirect illumination is activated
 *   <br>FALSE if indirect illumination status is desactivated
 * @param iIntensity
 *   The intensity of indirect illumination (value between 0 and 100.)
 * @param oGlobalIlluminationPhotonNb
 *   The number of photons for global illumination (value between 10000. and 1000000.)
 * @param iCausticPhotonNb
 *   The number of photons for caustics (value between 10000. and 1000000.)
 */
    virtual HRESULT SetIndirectIllumination(const CATBoolean iStatus, const double iIntensity, const int iGlobalIlluminationPhotonNb, const int iCausticPhotonNb) const = 0;

};

CATDeclareHandler(CATIRenderingLight, CATBaseUnknown);

#endif
