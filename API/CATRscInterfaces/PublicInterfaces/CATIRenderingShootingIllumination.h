#ifndef CATIRenderingShootingIllumination_h
#define CATIRenderingShootingIllumination_h

// COPYRIGHT DASSAULT SYSTEMES 2002

/**
 * @CAA2Level L0
 * @CAA2Usage U3
 */

#include "CATRscItfCPP.h"
#include "CATBaseUnknown.h"
#include "CATBoolean.h"



#ifndef LOCAL_DEFINITION_FOR_IID
extern ExportedByCATRscItfCPP IID IID_CATIRenderingShootingIllumination;
#else
extern "C" const IID IID_CATIRenderingShootingIllumination;
#endif

/** 
  * Interface to manage illumination parameters for shooting objects.
  * @see CATIRenderingShooting, CATIRenderingShootingFactory
  */


class ExportedByCATRscItfCPP CATIRenderingShootingIllumination : public CATBaseUnknown
{
  CATDeclareInterface;

  public:

/**
 * Returns the several status for illumination computation of a shooting object.
 * This status defines if final gathering, global illumination, caustics and
 * ambient light are taking into account for image computation
 * @param oFinalGathering
 *   The final gathering status
 * <ul> <b>Legal values</b>
 *   <li> TRUE   Final Gathering is used for image computation</li>
 *   <li> FALSE  Final Gathering is not used for image computation </li>
 * </ul>
 * @param oGlobalIlluminationStatus
 *   The global illumination status
 * <ul> <b>Legal values</b>
 *   <li> TRUE   Global Illumination is used for image computation</li>
 *   <li> FALSE  Global Illumination is not used for image computation </li>
 * @param oCausticsStatus
 *   The caustics status
 * <ul> <b>Legal values</b>
 *   <li> TRUE   Caustics are computed </li>
 *   <li> FALSE  Caustics are not computed </li>
 * </ul>
 */
    virtual void GetIlluminationStatus(CATBoolean &oFinalGatheringStatus, CATBoolean &oGlobalIlluminationStatus, CATBoolean &oCausticsStatus) const = 0;

/**
 * Sets the several status for illumination computation of a shooting object.
 * This status defines if final gathering, global illumination, caustics and
 * ambient light are taking into account for image computation
 * @param oFinalGathering
 *   The final gathering status
 * <ul> <b>Legal values</b>
 *   <li> TRUE   Final Gathering is used for image computation</li>
 *   <li> FALSE  Final Gathering is not used for image computation </li>
 * </ul>
 * @param oGlobalIlluminationStatus
 *   The global illumination status
 * <ul> <b>Legal values</b>
 *   <li> TRUE   Global Illumination is used for image computation</li>
 *   <li> FALSE  Global Illumination is not used for image computation </li>
 * @param oCausticsStatus
 *   The caustics status
 * <ul> <b>Legal values</b>
 *   <li> TRUE   Caustics are computed </li>
 *   <li> FALSE  Caustics are not computed </li>
 * </ul>
 */
    virtual HRESULT SetIlluminationStatus(const CATBoolean oFinalGatheringStatus, const CATBoolean oGlobalIlluminationStatus, const CATBoolean oCausticsStatus) = 0;

/**
 *  Returns the material ambient parameter status of a shooting object.
 * @param oAmbientStatus
 *   This status defines if ambient coefficient of materials are taken into account
 *   for image computation when final gathering, global illumination or caustics
 *   are activated.
 * <ul> <b>Legal values</b>
 *   <li> TRUE   Use of material ambient parameter is enable </li>
 *   <li> FALSE  Use of material ambient parameter is disable </li>
 * </ul>
 */
    virtual void GetAmbientStatus(CATBoolean &oAmbientStatus) const = 0;

/**
 *  Sets the material ambient parameter status of a shooting object.
 * @param oAmbientStatus
 *   This status defines if ambient coefficient of materials are taken into account
 *   for image computation when final gathering, global illumination or caustics
 *   are activated.
 * <ul> <b>Legal values</b>
 *   <li> TRUE   Use of material ambient parameter is enable </li>
 *   <li> FALSE  Use of material ambient parameter is disable </li>
 * </ul>
 */
    virtual HRESULT SetAmbientStatus(const CATBoolean iAmbientStatus) = 0;

/**
 *  Returns the final gathering parameters of the shooting object.
 * @param oRayNumber
 *    Defines how many rays are fired from each pixel to calculate the indirect illumination.
 *    This value ranges from 1 to 10000
 *    Higher numbers increase the precision but reduce performance.
 *    If the number is too low, soft patterns of light and shadow appear.
 * @param oMinRadius
 *    Specifies that a final gather result must be used for interpolation if it 
 *    is within this distance. 
 *    This parameter tends to have less influence on the rendering quality than
 *    the maximum radius.
 *    If set to 0. the distance used is 10% of maximum radius.
 * @param oMaxRadius
 *    Defines the maximum distance at which another final gather step result
 *    may be used for interpolation (this value should be greater or equal 0.). 
 *    Lower numbers increase the number of final gathering steps, and increase
 *    precision at the cost of lower performance.
 *    If set to 0. the distance is computed from the scene extent.
 */
    virtual void GetFinalGatheringParameters(int &oRayNumber, double &oMinRadius, double &oMaxRadius) const = 0;

/**
 *  Sets the final gathering parameters of the shooting object.
 * @param iRayNumber
 *    Defines how many rays are fired from each pixel to calculate the indirect illumination.
 *    This value ranges from 1 to 10000
 *    Higher numbers increase the precision but reduce performance.
 *    If the number is too low, soft patterns of light and shadow appear.
 * @param iMinRadius
 *    Specifies that a final gather result must be used for interpolation if it 
 *    is within this distance. 
 *    This parameter tends to have less influence on the rendering quality than
 *    the maximum radius.
 *    If set to 0. the distance used is 10% of maximum radius.
 * @param iMaxRadius
 *    Defines the maximum distance at which another final gather step result
 *    may be used for interpolation (this value should be greater or equal 0.). 
 *    Lower numbers increase the number of final gathering steps, and increase
 *    precision at the cost of lower performance.
 *    If set to 0. the distance is computed from the scene extent.
 */
    virtual HRESULT SetFinalGatheringParameters(const int iRayNumber, const double iMinRadius, const double iMaxRadius) = 0;

/**
 *  Returns the global illumination parameters of the shooting object.
 * @param oPhotonNumber
 *    Defines the maximum number of photons used to compute the local
 *    intensity of global illumination (this value ranges from 1 to 10000)
 *    Large numbers like 2000 make global illumination smoother but slower.
 * @param oMaxRadius
 *    Defines how far photons will be searched in the scene to compute the local
 *    intensity of global illumination (this value should be greater or equal 0.)
 *    If set to 0 the distance is computed from the scene extent.
 */
    virtual void GetGlobalIlluminationParameters(int &oPhotonNumber, double &oMaxRadius) const = 0;

/**
 *  Sets the global illumination parameters of the shooting object.
 * @param oPhotonNumber
 *    Defines the maximum number of photons used to compute the local
 *    intensity of global illumination (this value ranges from 1 to 10000)
 *    Large numbers like 2000 make global illumination smoother but slower.
 * @param oMaxRadius
 *    Defines how far photons will be searched in the scene to compute the local
 *    intensity of global illumination (this value should be greater or equal 0.)
 *    If set to 0 the distance is computed from the scene extent.
 */
    virtual HRESULT SetGlobalIlluminationParameters(const int iPhotonNumber, const double iMaxRadius) = 0;

/**
 *  Returns the caustic parameters of the shooting object.
 * @param oPhotonNumber
 *    Defines the maximum number of photons used to compute the local 
 *    intensity of caustic brightness (this value ranges from 1 to 10000).
 *    Large numbers like 200 make caustics less noisy but also more blurry and slower.
 * @param oMaxRadius
 *    Defines how far photons will be searched in the scene to compute the
 *    local intensity of caustic brightness (this value should be greater or equal 0.).
 *    If set to 0 the distance is computed from the scene extent.
 */
    virtual void GetCausticParameters(int &oPhotonNumber, double &oMaxRadius) const = 0;

/**
 *  Sets the caustic parameters of the shooting object.
 * @param iPhotonNumber
 *    Defines the maximum number of photons used to compute the local 
 *    intensity of caustic brightness (this value ranges from 1 to 10000).
 *    Large numbers like 200 make caustics less noisy but also more blurry and slower.
 * @param iMaxRadius
 *    Defines how far photons will be searched in the scene to compute the
 *    local intensity of caustic brightness (this value should be greater or equal 0.).
 *    If set to 0 the distance is computed from the scene extent.
 */
    virtual HRESULT SetCausticParameters(const int iPhotonNumber, const double iMaxRadius) = 0;

};

CATDeclareHandler(CATIRenderingShootingIllumination, CATBaseUnknown);

#endif
