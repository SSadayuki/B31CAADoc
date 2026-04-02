#ifndef CATIRdgLight_h
#define CATIRdgLight_h

// COPYRIGHT DASSAULT SYSTEMES 2003

/**
 * @CAA2Level L0
 * @CAA2Usage U3
 */

#include "CATRdgItfCPP.h"
#include "CATIRdgBase.h"
#include "CATBooleanDef.h"


#ifndef LOCAL_DEFINITION_FOR_IID
extern ExportedByCATRdgItfCPP IID IID_CATIRdgLight;
#else
extern "C" const IID IID_CATIRdgLight;
#endif

/** 
 * Interface for lights.
 * <b>Role</b>:
 * This is the interface that every light implements.
 * It is used to access the data needed for rendering.
 */

class ExportedByCATRdgItfCPP CATIRdgLight : public CATIRdgBase
{
/** @nodoc */
  CATDeclareInterface;

  public:

/**
 * Returns the transformation matrix.
 * @param oTransfo
 *   The matrix. The coefficients are given COLUMN by COLUMN.
 * @return
 *   An HRESULT value.
 *   <br><b> Legal values</b>:
 *   <li><tt>S_OK</tt> the operation succeeded </li>
 *   <li><tt>E_FAIL</tt> otherwise </li>.
 */
    virtual HRESULT GetTransfo(double oTransfo[12]) = 0;

/** @nodoc */
    enum CATLightType { Spot=1, Point=2, Directional=3 };

/**
 * Returns the light type.
 * @param oType
 *   The light type.
 *   <ul> light type.
 *   <li> Spot </li>
 *   <li> Point </li>
 *   <li> Directional </li>
 *   </ul>
 * @return
 *   An HRESULT value.
 *   <br><b> Legal values</b>:
 *   <li><tt>S_OK</tt> the operation succeeded </li>
 *   <li><tt>E_FAIL</tt> otherwise </li>.
 */
    virtual HRESULT GetLightType(CATIRdgLight::CATLightType &oType) = 0;

/**
 * Returns the light colors.
 * @param oAmbient
 *   The RGB ambient color. Each color component
 *   ranges from <code>0.</code> to <code>1.</code>. 
 * @param oDiffuse
 *   The RGB diffuse color. Each color component
 *   ranges from <code>0.</code> to <code>1.</code>. 
 * @param oSpecular
 *   The RGB specular color. Each color component
 *   ranges from <code>0.</code> to <code>1.</code>. 
 * @return
 *   An HRESULT value.
 *   <br><b> Legal values</b>:
 *   <li><tt>S_OK</tt> the operation succeeded </li>
 *   <li><tt>E_FAIL</tt> otherwise </li>.
 */
    virtual HRESULT GetColors(double oAmbient[3], double oDiffuse[3], double oSpecular[3]) = 0;

/**
 * Returns the light intensity. 
 * @param oIntensity
 *   The light intensity. 
 * @return
 *   An HRESULT value.
 *   <br><b> Legal values</b>:
 *   <li><tt>S_OK</tt> the operation succeeded </li>
 *   <li><tt>E_FAIL</tt> otherwise </li>.
 */
    virtual HRESULT GetIntensity(double &oIntensity) = 0;

/**
 * Returns the spot light angle. The angle ranges
 * from <code>0.</code> to <code>90.</code>.
 * @param oAngle
 *   The spot light angle (in degrees).
 * @return
 *   An HRESULT value.
 *   <br><b> Legal values</b>:
 *   <li><tt>S_OK</tt> the operation succeeded </li>
 *   <li><tt>E_FAIL</tt> otherwise </li>.
 */
    virtual HRESULT GetSpotAngle(double &oAngle) = 0;

/**
 * Returns the light maximum distance of illumination.
 * The light illuminates from its origin to its end
 * distance. Objects farther than this distance are not
 * affected by the light.
 * @param oDistance
 *   The distance of illumination end.
 * @return
 *   An HRESULT value.
 *   <br><b> Legal values</b>:
 *   <li><tt>S_OK</tt> the operation succeeded </li>
 *   <li><tt>E_FAIL</tt> otherwise </li>.
 */
    virtual HRESULT GetEndDistance(double &oDistance) = 0;

/**
 * Returns the light attenuation values.
 * It represents where the light intensity starts 
 * to attenuate.
 * @param oDistance
 *   The distance of attenuation start.
 *   The light illuminates from its origin to its end
 *   distance. Objects farther than this distance are not
 *   affected by the light.
 * @param oAngle
 *   The attenuation angle (in degrees).
 *   It represents the angle from the light axis where
 *   the illumination starts to attenuate.
 *   When this parameter is equal to the spot angle, there is
 *   no angle attenuation.
 * @return
 *   An HRESULT value.
 *   <br><b> Legal values</b>:
 *   <li><tt>S_OK</tt> the operation succeeded </li>
 *   <li><tt>E_FAIL</tt> otherwise </li>.
 */
    virtual HRESULT GetAttenuation(double &oStart, double &oAngle) = 0;

/**
 * Returns the light falloff exponent.
 * It represents the the way light attenuates.
 * It is an exponent so the falloff is 1/exp(oExponent).
 * Physically correct lights have an exponent of 2.
 * 0 means no attenuation.
 * @param oExponent
 *   The falloff exponent.
 * @return
 *   An HRESULT value.
 *   <br><b> Legal values</b>:
 *   <li><tt>S_OK</tt> the operation succeeded </li>
 *   <li><tt>E_FAIL</tt> otherwise </li>.
 */
    virtual HRESULT GetFalloffExponent(double &oExponent) = 0;

/**
 * Returns the shadow status.
 * @param oStatus
 *   The shadow status.
 *   <ul> shadow status.
 *   <li> TRUE  light casts shadows </li>
 *   <li> FALSE light does not cast shadows </li>
 *   </ul>
 * @return
 *   An HRESULT value.
 *   <br><b> Legal values</b>:
 *   <li><tt>S_OK</tt> the operation succeeded </li>
 *   <li><tt>E_FAIL</tt> otherwise </li>.
 */
    virtual HRESULT GetShadowStatus(CATBoolean &oStatus) = 0;

/** @nodoc */
    enum CATLightArea { None=1, Rectangle=2, Disk=3, Sphere=4, Cylinder=5 };

/**
 * Returns the light area type.
 * @param oType
 *   The light area.
 *   <ul> light area.
 *   <li> None </li>
 *   <li> Rectangle </li>
 *   <li> Disk </li>
 *   <li> Sphere </li>
 *   <li> Cylinder </li>
 *   </ul>
 * @return
 *   An HRESULT value.
 *   <br><b> Legal values</b>:
 *   <li><tt>S_OK</tt> the operation succeeded </li>
 *   <li><tt>E_FAIL</tt> otherwise </li>.
 */
    virtual HRESULT GetAreaType(CATIRdgLight::CATLightArea &oType) = 0;

/**
 * Returns the light area visibility status.
 * @param oStatus
 *   The area visibility status.
 *   <ul> active status.
 *   <li> TRUE  light area is rendered </li>
 *   <li> FALSE light area is not rendered </li>
 *   </ul>
 * @return
 *   An HRESULT value.
 *   <br><b> Legal values</b>:
 *   <li><tt>S_OK</tt> the operation succeeded </li>
 *   <li><tt>E_FAIL</tt> otherwise </li>.
 */
    virtual HRESULT GetShowAreaStatus(CATBoolean &oStatus) = 0;

/**
 * Returns the rectangle area size.
 * @param oLength
 *   The length value (in mm).
 * @param oWidth
 *   The width value (in mm).
 * @return
 *   An HRESULT value.
 *   <br><b> Legal values</b>:
 *   <li><tt>S_OK</tt> the operation succeeded </li>
 *   <li><tt>E_FAIL</tt> otherwise </li>.
 */
    virtual HRESULT GetRectangleArea(double &oLength, double &oWidth) = 0;

/**
 * Returns the disk area size.
 * @param oRadius
 *   The radius value (in mm).
 * @return
 *   An HRESULT value.
 *   <br><b> Legal values</b>:
 *   <li><tt>S_OK</tt> the operation succeeded </li>
 *   <li><tt>E_FAIL</tt> otherwise </li>.
 */
    virtual HRESULT GetDiskArea(double &oRadius) = 0;

/**
 * Returns the sphere area size.
 * @param oRadius
 *   The radius value (in mm).
 * @return
 *   An HRESULT value.
 *   <br><b> Legal values</b>:
 *   <li><tt>S_OK</tt> the operation succeeded </li>
 *   <li><tt>E_FAIL</tt> otherwise </li>.
 */
    virtual HRESULT GetSphereArea(double &oRadius) = 0;

/**
 * Returns the cylinder area size.
 * @param oRadius
 *   The radius value (in mm).
 * @param oHeight
 *   The height value (in mm).
 * @return
 *   An HRESULT value.
 *   <br><b> Legal values</b>:
 *   <li><tt>S_OK</tt> the operation succeeded </li>
 *   <li><tt>E_FAIL</tt> otherwise </li>.
 */
    virtual HRESULT GetCylinderArea(double &oRadius, double &oHeight) = 0;

/**
 * Returns the number of samples taken in each direction 
 * when the area light is sampled.
 * @param oSamplesU
 *   The number of samples taken in the U direction.
 * @param oSamplesV
 *   The number of samples taken in the V direction.
 * @return
 *   An HRESULT value.
 *   <br><b> Legal values</b>:
 *   <li><tt>S_OK</tt> the operation succeeded </li>
 *   <li><tt>E_FAIL</tt> otherwise </li>.
 */
    virtual HRESULT GetAreaSamples(int &oSamplesU, int &oSamplesV) = 0;

/**
 * Returns the indirect illumination status.
 * @param oStatus
 *   The indirect illumination status.
 *   <ul> indirect illumination status.
 *   <li> TRUE  indirect illumination is enabled </li>
 *   <li> FALSE indirect illumination is disabled </li>
 *   </ul>
 * @return
 *   An HRESULT value.
 *   <br><b> Legal values</b>:
 *   <li><tt>S_OK</tt> the operation succeeded </li>
 *   <li><tt>E_FAIL</tt> otherwise </li>.
 */
    virtual HRESULT GetIndirectIlluminationStatus(CATBoolean &oStatus) = 0;

/**
 * Returns the indirect illumination energy.
 * @param oEnergy
 *   The energy.
 * @return
 *   An HRESULT value.
 *   <br><b> Legal values</b>:
 *   <li><tt>S_OK</tt> the operation succeeded </li>
 *   <li><tt>E_FAIL</tt> otherwise </li>.
 */
    virtual HRESULT GetEnergy(double &oEnergy) = 0;

/**
 * Returns the maximum number of photons to 
 * store from this light source.
 * @param oCaustics
 *   The maximum number of stored photons
 *   for caustics.
 * @param oGlobal
 *   The maximum number of stored photons
 *   for global illumination.
 * @return
 *   An HRESULT value.
 *   <br><b> Legal values</b>:
 *   <li><tt>S_OK</tt> the operation succeeded </li>
 *   <li><tt>E_FAIL</tt> otherwise </li>.
 */
    virtual HRESULT GetPhotons(int &oCaustics, int &oGlobal) = 0;
};

/** @nodoc */
CATDeclareHandler(CATIRdgLight,CATIRdgBase);

#endif
