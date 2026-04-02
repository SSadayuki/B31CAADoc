#ifndef CAT3DLightSourceRep_H
#define CAT3DLightSourceRep_H

// COPYRIGHT DASSAULT SYSTEMES 1999

/**
 * @CAA2Level L1
 * @CAA2Usage U1
 */

#include "CAT3DRep.h"
#include "CAT3DLightSourceGP.h"
#include "CATViz.h"

#include "CATIAV5Level.h"

class CATTexturePixelImage;

#include "CAT4x4Matrix.h"

/**
 * Class to create light source representations.
 * <b>Role</b>: A light source representation indicates the position
 * and orientation of lights in the viewer. A light source representation
 * can be of two different types :
 * <ol>
 * <li><tt>LS_INFINITE</tt> infinitely distant like the sun, </li>
 * <li><tt>LS_SPOT</tt> spotlight with a cutoff angle between 0 and 90 degrees,
 *                     or equal to 180 degrees (lightbulb equivalent) </li>
 * </ol>
 * A light source representation can be of two differents modes :
 * <ol>
 * <li><tt>Local</tt> attached to the viewpoint </li>
 * <li><tt>Global</tt> attached to the model </li>
 * </ol>
 * By default, one light source is created and activated. A viewer can handle
 * a maximum of eight light source representations.
 */
class ExportedByCATViz CAT3DLightSourceRep : public CAT3DRep
{
  friend class CATDmuStream3DLightSourceRep;
  // macros
  CATDeclareClass;

public:
  virtual ~CAT3DLightSourceRep();
#ifdef CATIAV5R26
  /** Constructs an empty light source graphic representation. */
  static CAT3DLightSourceRep* CreateRep();

  /**
   * Constructs the representation of a light source.
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
   * <br><b>Legal Values</b>: in the range [0,90] or 180.
   * <br><b>Default Value</b>: 180. This constructs an equivalent to a lightbulb.
   */
  static CAT3DLightSourceRep* CreateRep(const CATLightSourceType       iType,
		      const CATLightSourceMode       iMode,
		      const CATMathPointf       & iOrigin,
		      const CATMathDirectionf   & iDirection,
		      const float                 iSpotAngle = 180.f);

  /**
   * Copy constructor.
   * @param iLightSourceRep
   * The light source representation to be duplicated
   */
  static CAT3DLightSourceRep* CreateRep(const CAT3DLightSourceRep & iLightSourceRep);
#endif

  /** Constructs an empty light source graphic representation. */
  CAT3DLightSourceRep();

  /**
   * Constructs the representation of a light source.
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
   * <br><b>Legal Values</b>: in the range [0,90] or 180.
   * <br><b>Default Value</b>: 180. This constructs an equivalent to a lightbulb.
   */
  CAT3DLightSourceRep(const CATLightSourceType       iType,
		      const CATLightSourceMode       iMode,
		      const CATMathPointf       & iOrigin,
		      const CATMathDirectionf   & iDirection,
		      const float                 iSpotAngle = 180.f);

  /**
   * Copy constructor.
   * @param iLightSourceRep
   * The light source representation to be duplicated
   */
  CAT3DLightSourceRep(const CAT3DLightSourceRep & iLightSourceRep);
  /**
   * Assignement operator.
   * @param iLightSourceRep
   * The light source representation to be copied
   */
  CAT3DLightSourceRep & operator = (const CAT3DLightSourceRep & iLightSourceRep);

  /**
   * Retrieves the type of the light source.
   * @param oType
   * The type of the light source representation.
   */
  void GetType(CATLightSourceType       & oType);

  /**
   * Sets the type of the light source representation.
   * @param iType
   * The type of the light source representation.
   */
  void SetType(const CATLightSourceType   iType);

  /**
   * Retrieves the mode of the light source.
   * @param oMode
   * The mode of the light source representation.
   */
  void GetMode(CATLightSourceMode       & oMode);

  /**
   * Sets the mode of the light source representation.
   * @param iMode
   * The mode of the light source representation.
   */
  void SetMode(const CATLightSourceMode iMode);


  /**
   * Retrieves the color components of the light source representation.
   * All float values are in [0,1].
   * @param oAmbient
   * Red, green, blue and alpha values of ambient component.
   * @param oDiffuse
   * Red, green, blue and alpha values of diffuse component.
   * @param oSpecular
   * Red, green, blue and alpha values of specular component.
   */
  void GetColorParameters(const float ** oAmbient,
                          const float ** oDiffuse,
                          const float ** oSpecular) const;
  /**
   * Sets the color components of the light source representation.
   * All float values are in [0,1].
   * @param iAmbient
   * Red, green, blue and alpha values of ambient component (array of four floats).
   * @param iDiffuse
   * Red, green, blue and alpha values of diffuse component (array of four floats).
   * @param iSpecular
   * Red, green, blue and alpha values of specular component (array of four floats).
   */
  void SetColorParameters(const float  * iAmbient,
                          const float  * iDiffuse,
                          const float  * iSpecular);

  /**
   * Retrieves the location and direction of a light source representation.
   * @param oOrigin
   * The point where the light source is located. This parameter has
   * no meaning for <tt>LS_INFINITE>/tt> light source representations.
   * @param oDirection
   * The direction of the light source.
   */
  void GetLocationParameters(CATMathPointf     & oOrigin,
                             CATMathDirectionf & oDirection) const;

  /**
   * Sets the location and direction of a light source representation.
   * This method has no meaning for <tt>LS_INFINITE</tt> light source representations.
   * @param iOrigin
   * The point where the light source is located. This parameter has
   * no meaning for <tt>LS_INFINITE</tt> light source representations.
   * @param iDirection
   * The direction of the light source.
   */
  void SetLocationParameters(const CATMathPointf     & iOrigin,
                             const CATMathDirectionf & iDirection);

  /**
   * Retrieves the specific parameters of a spotlight source representation.
   * This method has no meaning for <tt>LS_INFINITE</tt> light source representations.
   * @param oSpotAngle
   * The half-angle aperture of the cone of the spotlight.
   * @param oSpotExponent
   * The exponent value used for specular component calculations.
   */
  void GetSpotLightParameters(float & oSpotAngle, float & oSpotExponent) const;

  /**
   * Sets the specific parameters of a spotlight source representation.
   * @param iSpotAngle
   * The half-angle aperture of the cone of the spotlight.
   * @param iSpotExponent
   * The exponent value used for specular component calculations.
   */
  void SetSpotLightParameters(const float iSpotAngle, const float iSpotExponent);

  /**
   * Retrieves the attenuation parameters of the light source representation.
   * @param oConstant
   * The constant factor of the attenuation function.
   * @param oLinear
   * The light factor of the attenuation function.
   * @param oQuadratic
   * The quadratic factor of the attenuation function.
   */
  void GetAttenuationParameters(float & oConstant,
                                float & oLinear,
                                float & oQuadratic) const;
  /**
   * Sets the attenuation parameters of the light source representation.
   * @param iConstant
   * The constant parameter of the attenuation function
   * @param iLinear
   * The light parameter of the attenuation function
   * @param iQuadratic
   * The quadratic parameter of the attenuation function
   */
  void SetAttenuationParameters(const float iConstant,
                                const float iLinear,
                                const float iQuadratic);

  /** @nodoc */
  void DrawShading(CATRender & iRender, int iInside);

  /** @nodoc */
  inline int IsActive() {return _active;};

  /** @nodoc */
  inline void SetActive(int active) {_active = active;};
  
  /** @nodoc*/
  CATTexturePixelImage *GetShadowTextureToModify();
  /** @nodoc*/
  void SetShadowTexture(CATTexturePixelImage *i_pShadowDepthTexture);

  /** @nodoc*/
  void SetProjectionMatrix(CAT4x4Matrix &);
  /** @nodoc*/
  CAT4x4Matrix GetProjectionMatrix();

  /** @nodoc*/
  void SetModelviewMatrix(CAT4x4Matrix &);
  /** @nodoc*/
  CAT4x4Matrix GetModelviewMatrix();

  /** @nodoc */
  void SetRefreshShadowMapFlag(int i_flag);
  /** @nodoc */
  int GetRefreshShadowMapFlag();

  /** @nodoc NOT_USED_ANYMORE*/
  void SetNothingInLightFlag(int i_flag){};
  /** @nodoc NOT_USED_ANYMORE*/
  int GetNothingInLightFlag(){return 0;};

  /** @nodoc*/
  void SetNear(float i_near);
  /** @nodoc */
  float GetNear();
  
  /** @nodoc*/
  void SetAutomaticNearPlanFlag(short i_automaticNearPlanFlag);
  /** @nodoc */
  short GetAutomaticNearPlanFlag();
  
  /** @nodoc */
  void SetApplicativeMode(unsigned int iMode);

  /** @nodoc */
  CAT3DLightSourceRep(const LightSourceType      type,
                      const LightSourceMode      mode,
                      const CATMathPointf      & origin,
                      const CATMathDirectionf  & direction,
                      const CATMathDirectionf  & up,
                      const CATMathDirectionf  & right,
                      const float              * ambient,
                      const float              * diffuse,
                      const float              * specular,
                      const float                spotAngle,
                      const float                spotExponent,
                      const float                spotInnerAngle,
                      const float                constantAttenuation,
                      const float                linearAttenuation,
                      const float                quadraticAttenuation,
                      const float                axialFalloffStart,
                      const float                axialFalloffEnd,
                      const float                areaType,
                      const float                areaStatus,
                      const float              * areaGeometry);


  /** @nodoc */
  void GetSpotLightInnerParameters(float & oSpotInnerAngle) const;

  /** @nodoc */
  void SetSpotLightInnerParameters(const float iSpotInnerAngle);

  /** @nodoc */
  void GetAreaParameters(float & oAreaType, float & oAreaStatus, float ** oAreaGeometry) const;

  /** @nodoc */
  void SetAreaParameters(const float iAreaType, float  iAreaStatus, float * iAreaGeometry);

  /** @nodoc */
  void GetUpAndRightParameters(CATMathDirectionf & oUp,
                               CATMathDirectionf & oRight) const;

  /** @nodoc */
  void SetUpAndRightParameters(const CATMathDirectionf & iUp,
                               const CATMathDirectionf & iRight);

  /** @nodoc */
  void GetFalloffParameters(float & oAxialFalloffStart,
                            float & oAxialFalloffEnd) const;

  /** @nodoc */
  void SetFalloffParameters(const float iAxialFalloffStart,
                            const float  iAxialFalloffEnd);

private :

  /** @nodoc */
  void BuildGP();

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
  int                _active;

  CAT3DLightSourceGP * _gp;                   // light source graphic primitive

  CATTexturePixelImage *_pShadowDepthTexture;
  CAT4x4Matrix  _projectionMatrix;
  CAT4x4Matrix  _modelviewMatrix;
  int           _needShadowDepthMapUpdate; /** @win64 fbq : 64-bit structure padding **/
  int           _nothingInLight;
  float         _nearPlan;  
  short         _automaticNearPlanFlag;

  unsigned int  _applicativeMode;
};

#endif // CAT3DLightSourceRep_H
