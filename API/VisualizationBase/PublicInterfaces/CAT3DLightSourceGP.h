#ifndef CAT3DLightSourceGP_H
#define CAT3DLightSourceGP_H

// COPYRIGHT DASSAULT SYSTEMES 1999

/**
 * @CAA2Level L1
 * @CAA2Usage U1
 */

#include "CATGraphicPrimitive.h"
#include "CATMathDirectionf.h"
#include "CATMathPointf.h"
#include "CATVizMacForMetaClass.h"

class CATStreamer;

/**
* Type of light source.
* @param LS_INFINITE
*   Infinitely distant like the sun,
* @param LS_SPOT
*   Spotlight with a cutoff angle between 0 and 90 degrees,
*   or equal to 180 degrees (lightbulb equivalent)
* 
* @see CAT3DLightSourceGP
*/
enum CATLightSourceType { LS_INFINITE, LS_SPOT };

/** @nodoc */
typedef CATLightSourceType LightSourceType ;

/**
* Mode of light source.
* @param  Local
*  Attached to the viewpoint
* @param  Global
*  Attached to the model
* @see CAT3DLightSourceGP
*/
enum CATLightSourceMode { Local, Global };

/** @nodoc */
typedef CATLightSourceMode LightSourceMode ;

#include "CATViz.h"
/**
 * Class to create light source graphic primitives.
 * <b>Role</b>: A light source graphic primitive indicates the position
 * and orientation of lights in the viewer. A light source can be of
 * two different types : <br>
 *    <tt>LS_INFINITE</tt> infinitely distant like the sun,
 *    <tt>LS_SPOT</tt> spotlight with a cutoff angle between 0 and 90 degrees,
 *                     or equal to 180 degrees (lightbulb equivalent)
 * A light source can be of two differents modes : <br>
 *    <tt>Local</tt> attached to the viewpoint
 *    <tt>Global</tt> attached to the model
 * By default, one light source is created and activated. A viewer can handle
 * a maximum of eight light source graphic primitives.
 * To add a light source, prefer adding a CAT3DLightSourceRep.
 */
class ExportedByCATViz CAT3DLightSourceGP : public CATGraphicPrimitive
{
  CATDeclareClass;
  CATVizDeclareClass;

public:

  /** Constructs an empty light source graphic primitive of type LS_INFINITE. */
  CAT3DLightSourceGP();

  /**
   * Constructs a light source graphic primitive.
   * @param iType
   * The type of the light source.
   * @param iMode
   * The mode of the light source.
   * @param iOrigin
   * The location of the light source.
   * @param iDirection
   * The direction of the light source.
   * @param iSpotAngle
   * The cutoff angle of a spotlight.
   * @param iSpotExponent
   * value used for specular component calculations 
   * @param iConstantAttenuation
   * The constant factor of the attenuation equation.
   * @param iLinearAttenuation
   * The linear factor of the attenuation equation.
   * @param iQuadraticAttenuation
   * The quadraric factor of the attenuation equation.
   */
  CAT3DLightSourceGP (CATLightSourceType        iType,
		      CATLightSourceMode        iMode,
		      const CATMathPointf     & iOrigin,
		      const CATMathDirectionf & iDirection,
		      const float               iSpotAngle             = 180.f,
		      const float               iSpotExponent          = 0.f,
		      const float               iConstantAttenuation   = 1.f,
		      const float               iLinearAttenuation     = 0.f,
		      const float               iQuadraticAttenuation  = 0.f);

  /** @nodoc */
  CAT3DLightSourceGP(const LightSourceType      iType,
                     const LightSourceMode      iMode,
                     const CATMathPointf      & iOrigin,
                     const CATMathDirectionf  & iDirection,
                     const CATMathDirectionf  & iUp,
                     const CATMathDirectionf  & iRight,
                     const float              * iAmbient,
                     const float              * iDiffuse,
                     const float              * iSpecular,
                     const float                iSpotAngle,
                     const float                iSpotExponent,
                     const float                iSpotInnerAngle,
                     const float                iConstantAttenuation,
                     const float                iLinearAttenuation,
                     const float                iQuadraticAttenuation,
                     const float                iAxialFalloffStart,
                     const float                iAxialFalloffEnd,
                     const float                iAreaType,
                     const float                iAreaStatus,
                     const float              * iAreaGeometry);

  /**
   * Retrieves the color components of the light source.
   * All float values are in [0,1].
   * @param oAmbient
   * Red, green, blue and alpha values of ambient component.
   * @param oDiffuse
   * Red, green, blue and alpha values of diffuse component.
   * @param oSpecular
   * Red, green, blue and alpha values of specular component.
   */
  inline void GetColor (const float       * oAmbient[4],
		        const float       * oDiffuse[4],
		        const float       * oSpecular[4]);

  /**
   * Sets the color components of the light source.
   * All float values are in [0,1].
   * @param iAmbient
   * Red, green, blue and alpha values of ambient component.
   * @param iDiffuse
   * Red, green, blue and alpha values of diffuse component.
   * @param iSpecular
   * Red, green, blue and alpha values of specular component.
   */
  inline void SetColor (const float         iAmbient[4],
		        const float         iDiffuse[4],
		        const float         iSpecular[4]);

  /**
   * Retrieves the parameters of a light source.
   * @param iType
   * The type of the light source.
   * @param oMode
   * The mode of the light source.
   * @param oOrigin
   * The point where the light source is located. This parameter has
   * no meaning for LS_INFINITE light sources.
   * @param oDirection
   * The direction of the light source.
   * @param oSpotAngle
   * The half-angle aperture of the cone of the spotlight.
   * @param oSpotExponent
   * The exponent value used for specular component calculations.
   * @param oConstantAttenuation
   * The constant factor of the attenuation function.
   * @param oLinearAttenuation
   * The light factor of the attenuation function.
   * @param oQuadraticAttenuation
   * The quadratic factor of the attenuation function.
   */
  inline void Get    (CATLightSourceType   & iType,
    CATLightSourceMode   & oMode,
    CATMathPointf     & oOrigin,
    CATMathDirectionf & oDirection,
    float             * oSpotAngle,
    float             * oSpotExponent,
    float             * oConstantAttenuation,
    float             * oLinearAttenuation,
    float             * oQuadraticAttenuation);

  /** @nodoc */
  void Get(CATLightSourceType & oType,
           CATLightSourceMode & oMode,
           CATMathPointf      & oOrigin,
           CATMathDirectionf  & oDirection,
           CATMathDirectionf  & oUp,
           CATMathDirectionf  & oRight,
           float              * oAmbient,
           float              * oDiffuse,
           float              * oSpecular,
           float              * oSpotAngle,
           float              * oSpotExponent,
           float              * oSpotInnerAngle,
           float              * oConstantAttenuation,
           float              * oLinearAttenuation,
           float              * oQuadraticAttenuation,
           float              * oAxialFalloffStart,
           float              * oAxialFalloffEnd,
           float              * oAreaType,
           float              * oAreaStatus,
           float              * oAreaGeometry);
  
  /** @nodoc */
  virtual void Draw (CATRender & render);
  
  /** @nodoc
  *  Streams the graphic primitive of a light source.
  * <br><b>Role:</b>This method streams a <tt>CAT3DLightSourceGP</tt> .
  *  @param   oStr
  *    The streamer used to stream the <tt>CAT3DLightSourceGP</tt>.
  *  @param   iSavetype
  *    <br><b>legal values</b>
  *    <ul>
  *         <li>0 the name of the GP will not be saved</li>
  *         <li>1 the name of the GP will be saved</li>
  *    </ul>
  */
  virtual void Stream(CATStreamer& oStr,int iSavetype=0);
  
  /** @nodoc
  *  Unstreams the graphic primitive of a light source.
  * <br><b>Role:</b>This method unstreams a <tt>CAT3DLightSourceGP</tt> .
  *  @param   iStr
  *    The streamer used to unstream the <tt>CAT3DLightSourceGP</tt>.
  */
  virtual void UnStream(CATStreamer& iStr);

  /** @nodoc */
  void SetApplicativeMode(unsigned int iMode);
  /** @nodoc */
  inline unsigned int GetApplicativeMode() const;

private:
  // data
  CATLightSourceType _type;
  CATLightSourceMode _mode;
  CATMathPointf      _origin;
  CATMathDirectionf  _direction;
  CATMathDirectionf  _up;
  CATMathDirectionf  _right;
  float              _spotInnerAngle;
  float              _spotAngle;
  float              _spotExponent;
  float              _axialFalloffStart;
  float              _axialFalloffEnd;
  float              _constantAttenuation;
  float              _linearAttenuation;
  float              _quadraticAttenuation;
  float              _areaType;
  float              _areaStatus;
  float              _areaGeometry[2];
  float              _ambient[4];
  float              _diffuse[4];
  float              _specular[4];
  unsigned int       _applicativeMode;

  virtual ~CAT3DLightSourceGP();
};

// inline method definition
inline void CAT3DLightSourceGP::SetColor(const float iAmbient[4],
					 const float iDiffuse[4],
					 const float iSpecular[4])
{
  for ( int i = 0; i<4; i++ )
  {
    _ambient[i]  = iAmbient[i];
    _diffuse[i]  = iDiffuse[i];
    _specular[i] = iSpecular[i];
  }
}

inline void CAT3DLightSourceGP::GetColor(const float ** oAmbient,
					 const float ** oDiffuse,
					 const float ** oSpecular)
{
  if (oAmbient)  *oAmbient  = _ambient;
  if (oDiffuse)  *oDiffuse  = _diffuse;
  if (oSpecular) *oSpecular = _specular;
}

inline void CAT3DLightSourceGP::Get(CATLightSourceType   & oType,
				    CATLightSourceMode   & oMode,
				    CATMathPointf     & oOrigin,
				    CATMathDirectionf & oDirection,
				    float             * oSpotAngle,
				    float             * oSpotExponent,
				    float             * oConstantAttenuation,
				    float             * oLinearAttenuation,
				    float             * oQuadraticAttenuation)
{
  oType        = _type;
  oMode        = _mode;
  oOrigin      = _origin;
  oDirection   = _direction;
  if (oSpotAngle)            *oSpotAngle            = _spotAngle;
  if (oSpotExponent)         *oSpotExponent         = _spotExponent;
  if (oConstantAttenuation)  *oConstantAttenuation  = _constantAttenuation;
  if (oLinearAttenuation)    *oLinearAttenuation    = _linearAttenuation;
  if (oQuadraticAttenuation) *oQuadraticAttenuation = _quadraticAttenuation;
}
                                   

inline unsigned int CAT3DLightSourceGP::GetApplicativeMode() const
{
  return _applicativeMode;
}

#endif // CAT3DLightSourceGP
