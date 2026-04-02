#ifndef CATIRdgSticker_h
#define CATIRdgSticker_h

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


#ifndef LOCAL_DEFINITION_FOR_IID
extern ExportedByCATRdgItfCPP IID IID_CATIRdgSticker;
#else
extern "C" const IID IID_CATIRdgSticker;
#endif

/** 
 * Interface for stickers.
 * <b>Role</b>:
 * This is the base interface for stickers.
 * It is used to access the data needed for rendering.
 */

class ExportedByCATRdgItfCPP CATIRdgSticker : public CATIRdgBase
{
/** @nodoc */
  CATDeclareInterface;

  public:

/**
 * Returns the sticker priority.
 * @param oPriority
 *   The priority (the higher the number, the higher 
 *   the priority.
 * @return
 *   An HRESULT value.
 *   <br><b> Legal values</b>:
 *   <li><tt>S_OK</tt> the operation succeeded </li>
 *   <li><tt>E_FAIL</tt> otherwise </li>.
 */
    virtual HRESULT GetPriority(unsigned int &oPriority) = 0;

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
 * @param oUseColor
 *   The transparency color status.
 *   <ul> transparency color status.
 *   <li> TRUE  consider transparent color </li>
 *   <li> FALSE ignore transparent color </li>
 *   </ul>
 * @param oColor
 *   The RGB transparency color. Each color component ranges
 *   from <code>0.</code> to <code>1.</code>. 
 *   When oUseColor is TRUE, all pixels having the same color
 *   as oColor are considered transparent.
 * @return
 *   An HRESULT value.
 *   <br><b> Legal values</b>:
 *   <li><tt>S_OK</tt> the operation succeeded </li>
 *   <li><tt>E_FAIL</tt> otherwise </li>.
 */
    virtual HRESULT GetTransparency(double &oCoef, CATBoolean &oUseColor, double oColor[3]) = 0;

/**
 * Returns the reflectivity parameters.
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
    enum CATTextureType { None=1, Image=2, LightMap=3 };

/**
 * Returns the texture type.
 * @param oType
 *   The texture type.
 *   <ul> texture type.
 *   <li> None </li>
 *   <li> Image </li>
 *   <li> Light Map </li>
 *   </ul>
 * @return
 *   An HRESULT value.
 *   <br><b> Legal values</b>:
 *   <li><tt>S_OK</tt> the operation succeeded </li>
 *   <li><tt>E_FAIL</tt> otherwise </li>.
 */
    virtual HRESULT GetTextureType(CATIRdgSticker::CATTextureType &oType) = 0;

/** @nodoc */
    enum CATMappingType { Planar=0, Spherical=1, Cylindrical=2};

/**
 * Returns the mapping type.
 * @param oMapping
 *   The mapping type.
 *   <ul> mapping type.
 *   <li> Planar </li>
 *   <li> Spherical </li>
 *   <li> Cylindrical </li>
 *   </ul>
 * @return
 *   An HRESULT value.
 *   <br><b> Legal values</b>:
 *   <li><tt>S_OK</tt> the operation succeeded </li>
 *   <li><tt>E_FAIL</tt> otherwise </li>.
 */
    virtual HRESULT GetMappingType(CATIRdgSticker::CATMappingType &oMapping) = 0;

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
 * @param oSize
 *   The texture size (in pixels).
 * @param oUseNormal
 *   The normal check status.
 *   <ul> normal check status.
 *   <li> TRUE  normals are checked against sticker normal </li>
 *   <li> FALSE normals are not checked against sticker normal </li>
 *   </ul>
 * @param oReverseNormal
 *   The normal inversion status.
 *   <ul> inversion status.
 *   <li> TRUE  sticker normal is inverted </li>
 *   <li> FALSE sticker normal is not inverted </li>
 *   </ul>
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
                                 double           &oAngle, 
                                 int               oSize[2],
                                 CATBoolean       &oUseNormal,
                                 CATBoolean       &oReverseNormal) = 0;

/**
 * Returns the light map parameters.
 * @param oTexture
 *   The path of the texture file.
 * @param oSize
 *   The texture size (in pixels).
 * @param oUseNormal
 *   The normal check status.
 *   <ul> normal check status.
 *   <li> TRUE  normals are checked against sticker normal </li>
 *   <li> FALSE normals are not checked against sticker normal </li>
 *   </ul>
 * @param oReverseNormal
 *   The normal inversion status.
 *   <ul> inversion status.
 *   <li> TRUE  sticker normal is inverted </li>
 *   <li> FALSE sticker normal is not inverted </li>
 *   </ul>
 * @param oAmbientOcclusion
 *   The ambient occlusion status.
 *   <ul> ambient occlusion status.
 *   <li> TRUE  ambient occlusion is computed </li>
 *   <li> FALSE ambient occlusion is not computed </li>
 *   </ul>
 * @param oSamples
 *   The number of rays to trace for ambient occlusion.
 * @param oRadius
 *   The maximum distance for ambient occlusion rays.
 * @param oShadows
 *   The shadows status.
 *   <ul> shadows status.
 *   <li> TRUE  shadows are computed </li>
 *   <li> FALSE shadows are not computed </li>
 *   </ul>
 * @return
 *   An HRESULT value.
 *   <br><b> Legal values</b>:
 *   <li><tt>S_OK</tt> the operation succeeded </li>
 *   <li><tt>E_FAIL</tt> otherwise </li>.
 */
    virtual HRESULT GetLightMap(CATString        &oTexture, 
                                int               oSize[2],
                                CATBoolean       &oUseNormal,
                                CATBoolean       &oReverseNormal,
                                CATBoolean       &oAmbientOcclusion,
                                int              &oSamples,
                                double           &oRadius, 
                                CATBoolean       &oShadows) = 0;
};

/** @nodoc */
CATDeclareHandler(CATIRdgSticker,CATIRdgBase);

#endif
