#ifndef CATGraphicMaterial_H
#define CATGraphicMaterial_H

/* -*-c++-*- */

// COPYRIGHT DASSAULT SYSTEMES 1999
//
//==============================================================================
// Inheritance
// -----------
// CATGraphicMaterial
//    CATEventSubscriber
//
//==============================================================================
// Abstract
// --------
//  This Class attached to a rep or a window allows to have
//  a realistic rendering in order of the OpenGL Material.
//
//==============================================================================
// Usage
// -----
//    Material attached to a Rep or a Support
//
//       When you attach a material you increase the reference's number 
//       of this material. The management of the material's destruction 
//       is done by the rep ( or the support). A material is deleted when
//       it number of links is zero.
//
//       When you attach to a rep a material with a CATMappingOperator, the
//       UpdateTextureCoodinates method is called for each GP of the rep
//
//       If you make a derived class from this class, you must put your
//       delete method in protected
//
//    Material Properties are defined by :
//
//       Ambient      = (R_Amb,G_Amb,B_Amb)      * CoefAmbient
//       Diffuse      = (R_Diff,G_Diff,B_Diff)   * CoefDiffuse
//       Specular     = (R_Spec,G_Spec,B_Spec)   * CoefSpecular
//       Transparency Coefficient
//       Shininess 
//       Reflectivity Coefficient 
//
//       Each color's composant is between[0..1];
//       Each coefficient is between[0..1];
//
//       11/97 : The Reflectivity is not used  
//
//    Limitation of the Material Properties 
// 
//       With the flag _MaterialPropertiesActif, you can limited the values 
//       of the material properties used during the rendering 
//       
//       flag 0 : only the Specular color and the shininess are used
//                no transsparency, and ambient=diffus = color of the 
//                CATGraphicAttributSet of the object
//
//       flag 1 : all parameters are used 
//
//    Texture is defined through 4 steps : 
//
//     1-Image
//
//       It's a CATTexturePixelImage. See this class for more details
//
//       If the image is NULL  the material is not textured.
//
//       Two materials could pointe to the same image. In the delete of 
//       an CATGraphicMaterials'instance, the image could be delete
//       if it's the last bind. 
//
//       If your image come from a file, you could use the method
//       CATTexturePixelImageList::GetImage. This static method
//       verify if an Image exist with the same name
//
//       The dimension of the image is 1D or 2D  ( more not supported )
//
//     2- Function beetween pixel image and pixel geometry
//
//       - CATDecalTexture    : Cr = Ct
//       - CATModulateTexture : Cr = Ct * Cf
//       - CATBlendTexture    : Cr = (1-Ct)*Cf + Ct*Cc
//
//         Cr = pixel's color result
//         Cf = pixel's color geometry
//         Ct = pixel's color texture
//         Cc = blend color
//
//     3- Rendering control 
//
//       Texture maps are square or rectangular, but after being mapped 
//       to a polygon or surface and transformed into screen coordinates
//       the individual texels of a texture rarely correspond to individual
//       pixels of the final screen image. Depending on the transformations
//       used and the texture mapping applied, a single pixel on the screen
//       can correspond to anything :
//
//            from a tiny portion  of a texel (magnification), 
//            to a large collection of texels (minification). 
//
//       In either case, it's unclear exactly wich texel values should be
//       used and how they should be averaged or interpolated. Also you
//       can control the rendering by keyword. To know the result of 
//       each keyword see an OpenGL book
//
//     4- texture coordinates step 
//
//       4-1 You must precise who computes the texture coordinates : You or
//       the HardWare.  
//
//         - You : the keyword is CATUserMapping. 
//         
//            The Texture coordinates should be given by the application. 
//            2 means :
//               - you construct GP with texture coordinates          
//               - you use an CATMappingOperator ( see CATMappingOperator.h )
//
//         - HardWare : there are 3 keywords 
//            * CATEnvironmentMapping 
//         
//            * CATObjectLinearPlanarMapping 
//
//              Give a 1D image. Give a planar equation ( p0,p1,p2,p3 )
//              for the composant S. The function is :
//
//              s = p0 * x + p1 * y + p2 * z + p3 * w 
//              
//              s : texture coordinates, (x,y,z,w) vertex 
//
//            * CATEyeLinearPlanarMapping 
//
//              Same as CATObjectLinearPlanarMapping, but the function 
//              computes the textures coordinates in the model's coordinate
//              system.
//
//              s = p0' * x + p1' * y + p2' * z + p3' * w 
//
//              where (p0',p1',p2',p3') = (p0,p1,p2,p3) * M
//
//              M is the matrix view inversed
//
//       4-2 Wrapping Mode in CATUserMapping Case 
//
//         The Mode is to precise for each composant of the texture coordinates.
//
//           - 1D image , you have 1 composant  : CATCompS 
//           - 2D image , you have 2 composants : CATCompS and CATCompT
//         
//         Explication for 1D Image :
//          
//         the image is |ABC| , 
//         we have 2 vertex 
//             V1 with -1.0 as Texture coordinates
//             V2 with  3.0 as Texture coordinates
//
//           - wrapping mode = CATClampingTexture 
//         
//           the result between V1 and V2 is |AAAABCCCCCCC| 
//
//           - wrapping mode = CATRepeatTexture 
//
//           the result between V1 and V2 is |ABCABCABCABC|           
//
//
//==============================================================================
// History
// -------
//     - ??? ??, ????: Created.
//==============================================================================

/**
 * @CAA2Level L1
 * @CAA2Usage U1
 */

// interfaces

// TIEs

// others
#include "CATEventSubscriber.h"
#include "CATMaterialNotification.h"
#include "CATMutex.h"
#include "CATViz.h"
#include "list.h"
#include "CATListPV.h"

#ifdef _WINDOWS_SOURCE
#include "CATString.h"
#endif

/** Color components.
 * @param AmbientColor
 * Affects the overall reflected light.
 * @param DiffuseColor
 * Affects the reflected light from light sources.
 * @param SpecularColor
 * Affects the visible highlights of the objects.
 * @param BlendColor
 * Inactive.
 * @see CATGraphicMaterial
 */
enum CATColorType {
  AmbientColor,
  DiffuseColor,
  SpecularColor,
  BlendColor 
};

/** Multiplication factors.
 * @param AmbientCoef
 * Affects the ambient component of the color.
 * @param DiffuseCoef
 * Affects the diffuse component of the color.
 * @param SpecularCoef
 * Affects the specular component of the color.
 * @param TransparencyCoef
 * Designates the transparency of the underlying object.
 * @param Shininess
 * Affects the size of the specular highlights.
 * @param Reflectivity
 * Designates the reflectivity of the underlying object.
 * @see CATGraphicMaterial
 */
enum CATCoefficientType {
  AmbientCoef,
  DiffuseCoef,
  SpecularCoef,
  TransparencyCoef, 
  Shininess, 
  Reflectivity 
};

/** Texture paint mode.
 * @param CATDecalTexture
 * Mixes the object color with the alpha texture component.
 * @param CATModulateTexture
 * Modulates the object color with the texture color.
 * @param CATBlendTexture
 * Blends the object color and the texture color.
 * @param CATReplaceTexture
 * Replaces the object color by the texture color.
 * @see CATGraphicMaterial
 */
enum CATTextureFunction {
  CATDecalTexture,
  CATModulateTexture,
  CATBlendTexture, 
  CATReplaceTexture
};

/** 
 * Texture tiling mode.
 * @param CATClampingTexture
 * Texture image is clamped.
 * @param CATRepeatTexture
 * Texture image is repeated.
 * @param CATClampToBorderTexture
 * Inactive.
 * @param CATClampToEdgeTexture
 * Inactive.
 * @see CATGraphicMaterial
 */
enum CATTextureWrapping {
  CATClampingTexture,
  CATRepeatTexture, 
  CATClampToBorderTexture,
  CATClampToEdgeTexture
};

/** Texture coordinates generation mode.
 * @param CATUserMapping
 * Texture coordinates are generated by the user.
 * @param CATObjectLinearPlanarMapping
 * Texture coordinates are generated as a distance to a given plane.
 * @param CATEyeLinearPlanarMapping
 * Texture coordinates are generated as a distance to the eye.
 * @param CATEnvironmentMapping
 * Texture coordinates are automatically generated.
 * @see CATGraphicMaterial
 */
enum CATMappingFunction {
  CATUserMapping,
  CATObjectLinearPlanarMapping,
  CATEyeLinearPlanarMapping,
  CATEnvironmentMapping
};

/** Texture filtering modes.
 * @param CATNearest
 * Nearest texel is used.
 * @param CATLinear
 * Average of nearest texels is used.
 * @param CATNearestMipMapNearest
 * Nearest texel of nearest mip-map is used.
 * @param CATNearestMipMapLinear
 * Average of nearest texel in the two nearest mipmaps is used.
 * @param CATLinearMipMapNearest
 * Average of nearest texels in nearest mipmap.
 * @param CATLinearMipMapLinear
 * Average of nearest texels in the two nearest mipmaps is used.
 * @see CATGraphicMaterial
 */
enum CATTextureFilter {
  CATNearest,
  CATLinear,
  CATNearestMipMapNearest,
  CATNearestMipMapLinear,
  CATLinearMipMapNearest,
  CATLinearMipMapLinear
};

/** Texture coordinate.
 * @param CATCompS
 * Coordinate along the horixontal axis.
 * @param CATCompT
 * Coordinate along the vertical axis.
 * @param CATCompR
 * Inactive.
 * @param CATCompQ
 * Inactive.
 * @see CATGraphicMaterial
 */
enum CATComposanteName {
  CATCompS,
  CATCompT,
  CATCompR,
  CATCompQ 
};

/** @nodoc */
enum CATShaderType {
	CATShaderNone,
	CATShaderReflectivity,
	CATShaderPaint,
	CATShaderBump,
	CATShaderCustom,
	CATShaderCgFX, /** CGFX_NVIDIA **/
    CATShaderNvFX /** NVFX_NVIDIA **/
};

/** @nodoc */
enum CATShaderParameterType {
        CATSHADERPARAMETER_UNKNOWN = 0,
        CATSHADERPARAMETER_FLOAT,
        CATSHADERPARAMETER_COLOR,
        CATSHADERPARAMETER_MATRIX,
        CATSHADERPARAMETER_STRING,
        CATSHADERPARAMETER_FLOAT2,
        CATSHADERPARAMETER_FLOAT3
};

class CATTexturePixelImage;
class CATMappingOperator;
class CATStreamer;
class CATIShader;

#ifndef ALLOWUSECATSHADER //uo4++ delete
typedef CATIShader CATShader;
#endif

/** Class to create graphic material used to increase visual realism.
 * Usage of this class requires basic knowledge of OpenGL.
 */
class ExportedByCATViz CATGraphicMaterial : public CATEventSubscriber
{
public:
  // macros
  /** @nodoc */
  CATDeclareClass;

  /** @nodoc */
  friend class CATDestroyedMaterialList;

  /** @nodoc */
  friend class CATMarshallableGraphicMaterial;
  /** @nodoc */
  friend class CATMarshallableGTexturedMaterial;

  /** @nodoc */
  virtual int Destroy();

  /* Static method to delete a graphic material.
   * This method should be called to delete a graphic material.
   * It will do so only if the associated reference counter is NULL. */
  /** @nodoc */
  static int  Destroy(CATGraphicMaterial * iMaterial);

  /** Constructs a default graphic material. */
  CATGraphicMaterial();

  /** Constructs a graphic material.
   * @param iAmbientColor
   * array of 4 float values in the range [0,1]
   * corresponding to the red, green, blue and alpha channels.
   * @param iDiffuseColor
   * array of 4 float values in the range [0,1]
   * corresponding to the red, green, blue and alpha channels.
   * @param iSpecularColor
   * array of 4 float values in the range [0,1]
   * corresponding to the red, green, blue and alpha channels.
   * @param iSpecExponent
   * Exponent value used for specular calculations.
   * @param iAmbientCoef
   * Multiplication factor applied <tt>iAmbientColor</tt>.
   * @param iDiffuseCoef
   * Multiplication factor applied <tt>iDiffuseColor</tt>.
   * @param iSpecularCoef
   * Multiplication factor applied <tt>iSpecularColor</tt>.
   * @param iTransparencyCoef
   * float value in the range [0,1].
   * value 0 is totally opaque, value 1 is totally transparent.
   * @param iReflectivityCoef
   * float value in the range [0,1].
   * value 0 indicate no reflection, value 1 indicates total reflection.
   */
  CATGraphicMaterial(const float * iAmbientColor, 
                     const float * iDiffuseColor,
                     const float * iSpecularColor,
                     const float   iSpecExponent     = .5859,
                     const float   iAmbientCoef      = 1.0,
                     const float   iDiffuseCoef      = 1.0,
                     const float   iSpecularCoef     = 1.0,
                     const float   iTransparencyCoef = 0.0, 
                     const float   iReflectivityCoef = 0.0);

  /** Constructs a graphic material.
   * @param iImage
   * Texture to be applied with the graphic material.
   * @param iFunction
   * Application mode of the texture.
   * @param iMagnification
   * Texture filtering mode for magnification (CATNearest or CATLinear).
   * @param iMinification
   * Texture filtering mode for minification (Any).
   * @param iMappingFunction
   * Mapping function for the texture.
   * @param iSValue
   * Wrapping mode along the horizontal direction of the texture.
   * @param iTValue
   * Wrapping mode along the vertical direction of the texture.
   * @param iBlendColor
   * array of 4 float values in the range [0,1].
   * @param iOperator
   * User mapping operator for texture coordinates calculations.
   */
  CATGraphicMaterial(CATTexturePixelImage     * iTexture,
                     const CATTextureFunction   iFunction        = CATModulateTexture,
                     const CATTextureFilter     iMagnification   = CATLinear,
                     const CATTextureFilter     iMinification    = CATLinearMipMapLinear,
                     const CATMappingFunction   iMappingFunction = CATUserMapping,
                     const CATTextureWrapping   iSValue          = CATClampingTexture,
                     const CATTextureWrapping   iTValue          = CATClampingTexture,
                     const float              * iBlendColor      = NULL,
                     CATMappingOperator       * iOperator        = NULL);

  /** Copy constructor. */
  CATGraphicMaterial(const CATGraphicMaterial & material);

  /** @nodoc */
  virtual void Stream(CATStreamer & oStream,int iSaveType = 0);

  /** @nodoc */
  virtual void UnStream(CATStreamer& iStream);

  /** Increments the reference counter of the graphic material. */
  void AddReference();

  /** Decrements the reference counter of the graphic material. */
  void SubReference();

  /** Returns the reference counter value of the graphic material. */
  int GetReferenceNumber() const;

  /** Sets the color components of the material.
   * @param iParam
   * To indicate ambient, diffuse or specular color component.
   * @param iRed
   * Red channel of given color component.
   * @param iGreen
   * Green channel of given color component.
   * @param iBlue
   * Blue channel of given color component.
   */
  virtual void SetColor(const CATColorType iParam,
                        float              iRed,
                        float              iGreen,
                        float              iBlue);

  /** Sets the color components of the material.
   * @param iParam
   * To indicate ambient, diffuse or specular color component.
   * @param iRed
   * Red channel of given color component.
   * @param iGreen
   * Green channel of given color component.
   * @param iBlue
   * Blue channel of given color component.
   */
  virtual void GetColor(const CATColorType   iParam,
                        float              & oRed,
                        float              & oGreen,
                        float              & oBlue) const;

  /** Returns the multiplication factors of the graphic material.
   * @param iParam
   * indicates which multiplication factor is returned.
   */
  virtual float GetCoefficient(const CATCoefficientType iParam) const;

  /** Sets the multiplication factors of the graphic material.
   * @param iParam
   * indicates which multiplication factor is set.
   * @param iValue
   * Value in the range [0,1].
   */
  virtual void SetCoefficient(const CATCoefficientType iParam,float iValue);

  /** Activates the graphic material.
   * @param iMode
   * <ul>
   * <li>0 : color is retrieved from the graphic attributes of the associated representation. </li>
   * <li>1 : color is retrieved from the graphic material. </li>
   * </ul>
   */
  void SetMaterialPropertiesActivation(const int iMode);

  /** Returns the activation mode of the graphic material. */
  int GetMaterialPropertiesActivation () const;

  /** Returns the texture of the graphic material. */
  virtual CATTexturePixelImage * GetTextureImage() const;

  /** Sets the texture of the graphic material.
   * @param iTexture
   * New texture to be used afterwards.
   */
  virtual void SetTextureImage(CATTexturePixelImage * iTexture);

  /** @nodoc */
  void SetTextureImageComponent(int iValue);

  /** @nodoc */
  int GetTextureImageComponent() const;

  /** @nodoc */
  int GetDimTextureImage() const;

  /** @nodoc */
  void SetTextureFunction(const CATTextureFunction iFct);

  /** @nodoc */
  CATTextureFunction GetTextureFunction() const;

  /** @nodoc */
  void GetTextureFilter( CATTextureFilter & oMagnification ,
                         CATTextureFilter & oMinification) const;

  /** @nodoc */
  void SetTextureFilter( const CATTextureFilter iMagnification ,
                         const  CATTextureFilter iMinification);

  /** @nodoc */
  virtual CATMappingFunction GetMappingFunction() const;

  /** @nodoc */
  virtual void SetMappingFunction(const CATMappingFunction iMappingFunction);

  /** Returns the mapping operator associated to the graphic material. */
  virtual CATMappingOperator * GetMappingOperator() const;

  /** Sets the mapping operator associated to the graphic material.
   * @param iOperator
   * Mapping operator used to calculate texture coordinates.
   */
  virtual void SetMappingOperator(CATMappingOperator *iOperator);

  /** @nodoc */
  void AddComposantInTextEnv(int iAdd);

  /** @nodoc */
  int GetComposantNumber() const;

  /** @nodoc */
  CATTextureWrapping GetTextureWrapping(const CATComposanteName  iName) const;

  /** @nodoc */
  void SetTextureWrapping(const CATComposanteName  iName,
                          const CATTextureWrapping iValue);

  /** @nodoc */
  virtual void GetPlanar(const CATComposanteName   iName,
                         float                   & oX,
                         float                   & oY,
                         float                   & oZ,
                         float                   & oW) const; 

  /** @nodoc */
  virtual void SetPlanar(const CATComposanteName iName,
                         const float             iX,
                         const float             iY,
                         const float             iZ,
                         const float             iW);

  /** Assignement operator. */
  CATGraphicMaterial & operator = (const CATGraphicMaterial &iMaterial);

  /** @nodoc */
 // static void Lock(int i_delay);

  /** @nodoc */
  //static void Lock();

  /** @nodoc */
  //static void Unlock();

  /** @nodoc */
  //static void UnlockSave();




#ifdef _WINDOWS_SOURCE
  /** @nodoc */
  CATIShader *GetShaderTex(const int * support) const;
  /** @nodoc */  
  void setShaderFileName(const CATString &iPathName, const char *iCompilArgs=NULL);
  /** @nodoc */
  CATIShader *GenerateShader(void); /** CGFX_NVIDIA **/
  /** @nodoc */
  void SetShaderTex(CATIShader *tex) { _Shader = (CATIShader*)tex;}; /** CGFX_NVIDIA **/
  /** @nodoc */  
  CATIShader  *IsShader(void); /** CGFX_NVIDIA **/
  /** @nodoc */
  const CATString &GetFileName() const;
  /** @nodoc */
  void setShaderBuffer(const char *iBuffer);
  /** @nodoc */
  void setShaderBuffer(const char *iBuffer, const char *iName, const char *iCompilArgs=NULL);
  /** @nodoc */
  char *getShaderBuffer(void) const;
  /** @nodoc */
  CATIShader *setShaderMode(CATShaderType st); /** CGFX_NVIDIA **/
  /** @nodoc */
  CATShaderType getShaderMode(void);
  /** @nodoc */
  int getParameter(const char *name);
  /** @nodoc */  
  int getNumParameters(void);
  /** @nodoc */
  CATShaderParameterType getParameterType(int param);
  /** @nodoc */
  char* getParameterName (int param) const;
  /** @nodoc */
  int getParameterFloat (int param, float& val);
  /** @nodoc */
  int setParameterFloat (int param, float val);
  /** @nodoc */
  int getParameterFloatMinMaxStep (int param, float& fmin, float& fmax, float& fstep, char **widgetType=NULL, char **widgetName=NULL);
  /** @nodoc */
  int getParameterColor (int param, float& r, float& g, float& b, float& a);
  /** @nodoc */
  int setParameterColor (int param, float r, float g, float b, float a);
  /** @nodoc */
  int getParameterMatrix (int param, float* val);
  /** @nodoc */
  int setParameterMatrix (int param, const float* val);
  /** @nodoc */
  int getParameterString (int param, char*& val);
  /** @nodoc */
  int setParameterString (int param, const char* val, int forceReload=0);
#endif

protected :
  /** @nodoc */
  virtual ~CATGraphicMaterial();

  /** Updates the display after a modification of the graphic material.
   * <ul>
   * CATRedrawNotification : redraw the window.<li>
   * CATUpdateTCNotification : recalculate texture coordinates and redraw the window.<li>
   * </ul>
   */
  virtual void SendMaterialNotification(CATMaterialNotificationType iType);

  /** @nodoc */
  static void Reset(); 
   
  /** @nodoc */
  //static CATMutex                  _mutex;


private :
  int _ReferenceNumber;          // remove and use CATBaseUnknown reference counter.

  float	_AmbientColor[3];
  float	_DiffuseColor[3];
  float	_SpecularColor[3];

  float	_SpecularExponent; 
  float	_AmbientCoef;
  float	_DiffuseCoef;
  float	_SpecularCoef; 
  float _TransparencyCoef;
  float _ReflectivityCoef;

  // How Material Properties are used 
  //      1 -> All
  //      0 -> All - (Ambient + diffus + trans )
  int	_MaterialPropertiesActivate;

  // Texture's parameters
  CATTexturePixelImage  * _TextureImage;
  int                     _TextureImageNumberComposante; // advanced 

  CATTextureFunction      _TextureFunction;
  float                   _BlendColor[3];

  CATTextureFilter        _MagFilter;
  CATTextureFilter        _MinFilter;

  CATMappingFunction      _MappingFunction;
  CATMappingOperator    * _MappingOperator;

  CATTextureWrapping      _TextureWrapS;
  CATTextureWrapping      _TextureWrapT;

  int                     _AddedComposantInTexEnv; // advanced 

  float                   _PlanarS[4];
  float                   _PlanarT[4];
  float                   _PlanarR[4];
  float                   _PlanarQ[4];

  /* @nodoc */
  void InitializeMaterialProperties();

  /* @nodoc */
  void InitializeNoTexture();

  /* @nodoc */
  void AnalysisCB(CATCallbackEvent, void *, CATNotification *, CATSubscriberData, CATCallback);

  CATCallback _CBOperator;
  CATCallback _CBImage;

  CATShaderType _ShaderType;  
#ifdef _WINDOWS_SOURCE
  CATIShader *_Shader; /** CGFX_NVIDIA **/
#endif
};

#endif // CATGraphicMaterial_H
