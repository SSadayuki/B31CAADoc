#ifndef CATIRdgMaterial_h
#define CATIRdgMaterial_h

// COPYRIGHT DASSAULT SYSTEMES 2003

/**
 * @CAA2Level L0
 * @CAA2Usage U3
 */

#include "CATRdgItfCPP.h"
#include "CATIRdgBase.h"
#include "CATBooleanDef.h"
#include "CATUnicodeString.h"


class CATString;
class CATIRmaShader;


#ifndef LOCAL_DEFINITION_FOR_IID
extern ExportedByCATRdgItfCPP IID IID_CATIRdgMaterial;
#else
extern "C" const IID IID_CATIRdgMaterial;
#endif

/** 
 * Interface for materials.
 * <b>Role</b>:
 * This is the base interface for materials.
 * It is used to access the data needed for rendering.
 */

class ExportedByCATRdgItfCPP CATIRdgMaterial : public CATIRdgBase
{
/** @nodoc */
  CATDeclareInterface;

  public:

/** @nodoc */
    enum CATInheritanceType { Propagate=1, Ignore=2, Force=3, Color=4 };

/**
 * Returns the material inheritance type.
 * @param oType
 *   The inheritance type.
 *   <ul> inheritance type.
 *   <li> Propagate (Material propagates to children)</li>
 *   <li> Ignore (Material does note propagate to children)</li>
 *   <li> Force (Material overrides higher material)</li>
 *   <li> Color (Graphics attribute inheritance)</li>
 *   </ul>
 * @return
 *   An HRESULT value.
 *   <br><b> Legal values</b>:
 *   <li><tt>S_OK</tt> the operation succeeded </li>
 *   <li><tt>E_FAIL</tt> otherwise </li>.
 */
    virtual HRESULT GetInheritanceType(CATIRdgMaterial::CATInheritanceType &oType) = 0;

/**
 * Returns the ambient parameters.
 * @param oCoef
 *   The coefficient.
 * @param oColor
 *   The RGB color. Each color component ranges
 *   from <code>0.</code> to <code>1.</code>. 
 * @return
 *   An HRESULT value.
 *   <br><b> Legal values</b>:
 *   <li><tt>S_OK</tt> the operation succeeded </li>
 *   <li><tt>E_FAIL</tt> otherwise </li>.
 */
    virtual HRESULT GetAmbient(double &oCoef, double oColor[3]) = 0;

/**
 * Returns the diffuse parameters.
 * @param oCoef
 *   The coefficient.
 * @param oColor
 *   The RGB color. Each color component ranges
 *   from <code>0.</code> to <code>1.</code>. 
 * @return
 *   An HRESULT value.
 *   <br><b> Legal values</b>:
 *   <li><tt>S_OK</tt> the operation succeeded </li>
 *   <li><tt>E_FAIL</tt> otherwise </li>.
 */
    virtual HRESULT GetDiffuse(double &oCoef, double oColor[3]) = 0;

/**
 * Returns the specular parameters.
 * @param oCoef
 *   The coefficient.
 * @param oColor
 *   The RGB color. Each color component ranges
 *   from <code>0.</code> to <code>1.</code>. 
 * @param oExponent
 *   The specular exponent.
 * @return
 *   An HRESULT value.
 *   <br><b> Legal values</b>:
 *   <li><tt>S_OK</tt> the operation succeeded </li>
 *   <li><tt>E_FAIL</tt> otherwise </li>.
 */
    virtual HRESULT GetSpecular(double &oCoef, double oColor[3], double &oExponent) = 0;

/**
 * Returns the transparency parameters.
 * @param oCoef
 *   The coefficient.
 * @param oColor
 *   The RGB color. Each color component ranges
 *   from <code>0.</code> to <code>1.</code>. 
 * @param oRefraction
 *   The refraction index.
 * @return
 *   An HRESULT value.
 *   <br><b> Legal values</b>:
 *   <li><tt>S_OK</tt> the operation succeeded </li>
 *   <li><tt>E_FAIL</tt> otherwise </li>.
 */
    virtual HRESULT GetTransparency(double &oCoef, double oColor[3], double &oRefraction) = 0;

/**
 * Returns the reflectivity parameter.
 * @param oCoef
 *   The coefficient.
 * @return
 *   An HRESULT value.
 *   <br><b> Legal values</b>:
 *   <li><tt>S_OK</tt> the operation succeeded </li>
 *   <li><tt>E_FAIL</tt> otherwise </li>.
 */
    virtual HRESULT GetReflectivity(double &oCoef) = 0;

/**
 * Returns the reflectivity environment map.
 * @param oTexture
 *   The path of the texture file.
 * @return
 *   An HRESULT value.
 *   <br><b> Legal values</b>:
 *   <li><tt>S_OK</tt> the operation succeeded </li>
 *   <li><tt>E_FAIL</tt> otherwise </li>.
 */
    virtual HRESULT GetEnvironmentMap(CATString &oTexture) = 0;

/**
 * Returns the bump parameter.
 * @param oCoef
 *   The coefficient.
 * @return
 *   An HRESULT value.
 *   <br><b> Legal values</b>:
 *   <li><tt>S_OK</tt> the operation succeeded </li>
 *   <li><tt>E_FAIL</tt> otherwise </li>.
 */
    virtual HRESULT GetBump(double &oCoef) = 0;

/**
 * Returns the size parameter.
 * @param oSize
 *   The material size.
 * @return
 *   An HRESULT value.
 *   <br><b> Legal values</b>:
 *   <li><tt>S_OK</tt> the operation succeeded </li>
 *   <li><tt>E_FAIL</tt> otherwise </li>.
 */
    virtual HRESULT GetSize(double &oSize) = 0;

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
    enum CATTextureType { None=1, Image=2, Procedural=3 };

/**
 * Returns the texture type.
 * @param oType
 *   The texture type.
 *   <ul> texture type.
 *   <li> None </li>
 *   <li> Image </li>
 *   <li> Procedural </li>
 *   </ul>
 * @return
 *   An HRESULT value.
 *   <br><b> Legal values</b>:
 *   <li><tt>S_OK</tt> the operation succeeded </li>
 *   <li><tt>E_FAIL</tt> otherwise </li>.
 */
    virtual HRESULT GetTextureType(CATIRdgMaterial::CATTextureType &oType) = 0;

/** @nodoc */
    enum CATMappingType { Planar=0, Spherical=1, Cylindrical=2, Box=3, Auto=4, Adaptive=5 , UV=6};

/**
 * Returns the mapping type.
 * @param oMapping
 *   The mapping type.
 *   <ul> mapping type.
 *   <li> Planar </li>
 *   <li> Spherical </li>
 *   <li> Cylindrical </li>
 *   <li> Box </li>
 *   <li> Auto </li>
 *   <li> Adaptive </li>
 *   </ul>
 * @return
 *   An HRESULT value.
 *   <br><b> Legal values</b>:
 *   <li><tt>S_OK</tt> the operation succeeded </li>
 *   <li><tt>E_FAIL</tt> otherwise </li>.
 */
    virtual HRESULT GetMappingType(CATIRdgMaterial::CATMappingType &oMapping) = 0;

/**
 * Returns the 2D texture parameters.
 * @param oTexture
 *   The path of the texture file.
 * @param oOffset
 *   The texture offsets on U and V axis.
 * @param oScale
 *   The texture scales on U and V axis.
 * @param oFlip
 *   The texture flip status on U and V axis.
 *   <ul> flip status.
 *   <li> TRUE  texture is flipped </li>
 *   <li> FALSE texture is not flipped </li>
 *   </ul>
 * @param oRepeat
 *   The texture repeat status on U and V axis.
 *   <ul> repeat status.
 *   <li> TRUE  texture is repeated </li>
 *   <li> FALSE texture is not repeated </li>
 *   </ul>
 * @param oAngle
 *   The texture rotation angle (in degrees).
 * @param oAdaptativeCoef
 *   The coef for adaptive mapping.
 * @param oAdaptiveTransfoSize
 *   The size of transfo array.
 * @param oAdaptiveTransfoArray
 *   The matrices need by adaptive mapping. 
 *   The coefficients are given COLUMN by COLUMN.
 * @return
 *   An HRESULT value.
 *   <br><b> Legal values</b>:
 *   <li><tt>S_OK</tt> the operation succeeded </li>
 *   <li><tt>E_FAIL</tt> otherwise </li>.
 */
    virtual HRESULT Get2DTexture(CATString        &oTexture, 
                                 double            oOffset[2], 
                                 double            oScale[2], 
                                 CATBoolean        oFlip[2],  
                                 CATBoolean        oRepeat[2], 
                                 double           &oAngle, 
                                 double           &oAdaptativeCoef,
                                 double           &oAdaptiveTransfoSize,
                                 double           *oAdaptiveTransfoArray[12]) = 0;

/** @nodoc */
    enum CATProceduralType { Marble=0, Vein=1, AlternateVein=2, Rock=3, Chessboard=4 };

/**
 * Returns the 3D texture parameters.
 * @param oType
 *   The procedural type.
 *   <ul> procedural type.
 *   <li> Marble </li>
 *   <li> Vein </li>
 *   <li> AlternateVein </li>
 *   <li> Rock </li>
 *   <li> Chessboard </li>
 *   </ul>
 * @param oColors
 *   The texture colors.
 *   The array of RGB colors. Each color component
 *   ranges from <code>0.</code> to <code>1.</code>. 
 * @param oColorsCoef
 *   The array of color coefficients.
 * @param oColorsSize
 *   The size of color arrays.
 * @param oAmplitude
 *   The amplitude.
 * @param oComplexity
 *   The octave count.
 * @param oFilterWidth
 *   The filter width.
 * @param oLacunarity
 *   The sub-complexity (noise).
 * @param oFilamentSize
 *   The size of filaments.
 * @param oAlternate
 *   The alternate veins status.
 * @param oTurbulence
 *   The turbulence status.
 * @param oGain
 *   The gain (noise).
 * @param oBlend
 *   The chessboard blend.
 * @param oJoint
 *   The joint size along U,V.
 * @param oTile
 *   The tile size along U,V.
 * @return
 *   An HRESULT value.
 *   <br><b> Legal values</b>:
 *   <li><tt>S_OK</tt> the operation succeeded </li>
 *   <li><tt>E_FAIL</tt> otherwise </li>.
 */
    virtual HRESULT Get3DTexture(CATIRdgMaterial::CATProceduralType &oType,
                                 double      oColors[15],
                                 double      oColorsCoef[5],
                                 int        &oColorsSize,
                                 double     &oAmplitude,
                                 int        &oComplexity,
                                 double     &oFilterWidth,
                                 double     &oLacunarity,
                                 double     &oFilamentSize,
                                 CATBoolean &oAlternate,
                                 CATBoolean &oTurbulence,
                                 double     &oGain,
                                 double     &oBlend,
                                 double      oJoint[2],
                                 double      oTile[2]) = 0;

/**
 * Returns the shader attached if any.
 * @param oShader
 *   The shader.
 * @return
 *   An HRESULT value.
 *   <br><b> Legal values</b>:
 *   <li><tt>S_OK</tt> the operation succeeded </li>
 *   <li><tt>E_FAIL</tt> otherwise </li>.
 */
    virtual HRESULT GetShader(CATIRmaShader **oShader) = 0;
};

/** @nodoc */
CATDeclareHandler(CATIRdgMaterial,CATIRdgBase);

#endif
