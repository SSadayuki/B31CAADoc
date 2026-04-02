#ifndef __TIE_CATIARenderingMaterial
#define __TIE_CATIARenderingMaterial

#include <string.h>
#include "CATBaseUnknown.h"
#include "CATMetaClass.h"
#include "CATMacForTie.h"
#include "CATExitJournal.h"
#include "CATIARenderingMaterial.h"
#include "JS0DSPA.h"


#ifdef _WINDOWS_SOURCE
#define Exported __declspec(dllexport)
#define Imported __declspec(dllimport)
#else
#define Exported 
#define Imported 
#endif


/* To link an implementation with the interface CATIARenderingMaterial */
#define declare_TIE_CATIARenderingMaterial(classe) \
 \
 \
class TIECATIARenderingMaterial##classe : public CATIARenderingMaterial \
{ \
   private: \
      CATDeclareCommonTIEMembers \
   public: \
      CATDeclareTIEMethods(CATIARenderingMaterial, classe) \
      CATDeclareIUnknownMethodsForCATBaseUnknownTIE \
      CATDeclareIDispatchMethodsForCATBaseUnknownTIE \
      CATDeclareCATBaseUnknownMethodsForTIE \
      virtual HRESULT __stdcall get_MappingType(short & oMappingType); \
      virtual HRESULT __stdcall put_MappingType(short iMappingType); \
      virtual HRESULT __stdcall get_PreviewSize(double & oMappingType); \
      virtual HRESULT __stdcall put_PreviewSize(double iMappingType); \
      virtual HRESULT __stdcall get_AdaptiveCoeff(short & oMappingType); \
      virtual HRESULT __stdcall put_AdaptiveCoeff(short iMappingType); \
      virtual HRESULT __stdcall get_AmbientCoefficient(double & oAmbientCoefficient); \
      virtual HRESULT __stdcall put_AmbientCoefficient(double iAmbientCoefficient); \
      virtual HRESULT __stdcall get_DiffuseCoefficient(double & oDiffuseCoefficient); \
      virtual HRESULT __stdcall put_DiffuseCoefficient(double iDiffuseCoefficient); \
      virtual HRESULT __stdcall get_SpecularCoefficient(double & oSpecularCoefficient); \
      virtual HRESULT __stdcall put_SpecularCoefficient(double iSpecularCoefficient); \
      virtual HRESULT __stdcall get_SpecularExponent(double & oSpecularExponent); \
      virtual HRESULT __stdcall put_SpecularExponent(double iSpecularExponent); \
      virtual HRESULT __stdcall get_TransparencyCoefficient(double & oTransparencyCoefficient); \
      virtual HRESULT __stdcall put_TransparencyCoefficient(double iTransparencyCoefficient); \
      virtual HRESULT __stdcall get_RefractionCoefficient(double & oRefractionCoefficient); \
      virtual HRESULT __stdcall put_RefractionCoefficient(double iRefractionCoefficient); \
      virtual HRESULT __stdcall get_ReflectivityCoefficient(double & oReflectivityCoefficient); \
      virtual HRESULT __stdcall put_ReflectivityCoefficient(double iReflectivityCoefficient); \
      virtual HRESULT __stdcall get_EnvironmentImage(CATBSTR & oEnvironmentImage); \
      virtual HRESULT __stdcall put_EnvironmentImage(const CATBSTR & iEnvironmentImage); \
      virtual HRESULT __stdcall get_ReflectionMode(short & oReflectionMode); \
      virtual HRESULT __stdcall put_ReflectionMode(short iReflectionMode); \
      virtual HRESULT __stdcall get_ReflectionHeight(double & oReflectionHeight); \
      virtual HRESULT __stdcall put_ReflectionHeight(double iReflectionHeight); \
      virtual HRESULT __stdcall get_ReflectionLength(double & oReflectionLength); \
      virtual HRESULT __stdcall put_ReflectionLength(double iReflectionLength); \
      virtual HRESULT __stdcall get_TextureType(short & oTextureType); \
      virtual HRESULT __stdcall put_TextureType(short iTextureType); \
      virtual HRESULT __stdcall get_Bump(double & oBump); \
      virtual HRESULT __stdcall put_Bump(double iBump); \
      virtual HRESULT __stdcall get_TextureImage(CATBSTR & oTextureImage); \
      virtual HRESULT __stdcall put_TextureImage(const CATBSTR & iTextureImage); \
      virtual HRESULT __stdcall get_FlipU(CAT_VARIANT_BOOL & oFlipU); \
      virtual HRESULT __stdcall put_FlipU(CAT_VARIANT_BOOL iFlipU); \
      virtual HRESULT __stdcall get_FlipV(CAT_VARIANT_BOOL & oFlipV); \
      virtual HRESULT __stdcall put_FlipV(CAT_VARIANT_BOOL iFlipV); \
      virtual HRESULT __stdcall get_RepeatU(CAT_VARIANT_BOOL & oRepeatU); \
      virtual HRESULT __stdcall put_RepeatU(CAT_VARIANT_BOOL iRepeatU); \
      virtual HRESULT __stdcall get_RepeatV(CAT_VARIANT_BOOL & oRepeatV); \
      virtual HRESULT __stdcall put_RepeatV(CAT_VARIANT_BOOL iRepeatV); \
      virtual HRESULT __stdcall get_ScaleU(double & oScaleU); \
      virtual HRESULT __stdcall put_ScaleU(double iScaleU); \
      virtual HRESULT __stdcall get_ScaleV(double & oScaleV); \
      virtual HRESULT __stdcall put_ScaleV(double iScaleV); \
      virtual HRESULT __stdcall get_PositionU(double & oPositionU); \
      virtual HRESULT __stdcall put_PositionU(double iPositionU); \
      virtual HRESULT __stdcall get_PositionV(double & oPositionV); \
      virtual HRESULT __stdcall put_PositionV(double iPositionV); \
      virtual HRESULT __stdcall get_Orientation(double & oOrientation); \
      virtual HRESULT __stdcall put_Orientation(double iOrientation); \
      virtual HRESULT __stdcall get_ColorNumber(short & oColorNumber); \
      virtual HRESULT __stdcall put_ColorNumber(short iColorNumber); \
      virtual HRESULT __stdcall get_TextureComplexity(short & oTextureComplexity); \
      virtual HRESULT __stdcall put_TextureComplexity(short iTextureComplexity); \
      virtual HRESULT __stdcall get_TextureAmplitude(double & oTextureAmplitude); \
      virtual HRESULT __stdcall put_TextureAmplitude(double iTextureAmplitude); \
      virtual HRESULT __stdcall get_TextureVeinAmplitude(double & oTextureVeinAmplitude); \
      virtual HRESULT __stdcall put_TextureVeinAmplitude(double iTextureVeinAmplitude); \
      virtual HRESULT __stdcall get_TexturePerturbation(double & oTexturePerturbation); \
      virtual HRESULT __stdcall put_TexturePerturbation(double iTexturePerturbation); \
      virtual HRESULT __stdcall get_TextureGain(double & oTextureGain); \
      virtual HRESULT __stdcall put_TextureGain(double iTextureGain); \
      virtual HRESULT __stdcall get_TextureTurbulence(CAT_VARIANT_BOOL & oTextureTurbulence); \
      virtual HRESULT __stdcall put_TextureTurbulence(CAT_VARIANT_BOOL iTextureTurbulence); \
      virtual HRESULT __stdcall get_ChessboardTileWidth(double & oChessboardTileWidth); \
      virtual HRESULT __stdcall put_ChessboardTileWidth(double iChessboardTileWidth); \
      virtual HRESULT __stdcall get_ChessboardTileHeight(double & oChessboardTileHeight); \
      virtual HRESULT __stdcall put_ChessboardTileHeight(double iChessboardTileHeight); \
      virtual HRESULT __stdcall get_ChessboardOffset(double & oChessboardOffset); \
      virtual HRESULT __stdcall put_ChessboardOffset(double iChessboardOffset); \
      virtual HRESULT __stdcall get_ChessboardJointWidth(double & oChessboardJointWidth); \
      virtual HRESULT __stdcall put_ChessboardJointWidth(double iChessboardJointWidth); \
      virtual HRESULT __stdcall get_ChessboardJointHeight(double & oChessboardJointHeight); \
      virtual HRESULT __stdcall put_ChessboardJointHeight(double iChessboardJointHeight); \
      virtual HRESULT __stdcall GetAmbientColor(CATSafeArrayVariant & oAmbientColor); \
      virtual HRESULT __stdcall PutAmbientColor(const CATSafeArrayVariant & iAmbientColor); \
      virtual HRESULT __stdcall GetDiffuseColor(CATSafeArrayVariant & oDiffuseColor); \
      virtual HRESULT __stdcall PutDiffuseColor(const CATSafeArrayVariant & iDiffuseColor); \
      virtual HRESULT __stdcall GetSpecularColor(CATSafeArrayVariant & oSpecularColor); \
      virtual HRESULT __stdcall PutSpecularColor(const CATSafeArrayVariant & iSpecularColor); \
      virtual HRESULT __stdcall GetTransparencyColor(CATSafeArrayVariant & oTransparencyColor); \
      virtual HRESULT __stdcall PutTransparencyColor(const CATSafeArrayVariant & iTransparencyColor); \
      virtual HRESULT __stdcall Get3DTextureColor(short iColorIndex, CATSafeArrayVariant & o3DTextureColor); \
      virtual HRESULT __stdcall Put3DTextureColor(short iColorIndex, const CATSafeArrayVariant & i3DTextureColor); \
      virtual HRESULT __stdcall Get3DTextureColorCoefficient(short iColorIndex, double & o3DTextureColorCoefficient); \
      virtual HRESULT __stdcall Put3DTextureColorCoefficient(short iColorIndex, double i3DTextureColorCoefficient); \
      virtual HRESULT __stdcall Get3DTextureScale(CATSafeArrayVariant & o3DTextureScale); \
      virtual HRESULT __stdcall Put3DTextureScale(const CATSafeArrayVariant & i3DTextureScale); \
      virtual HRESULT __stdcall Get3DTexturePosition(CATSafeArrayVariant & o3DTexturePosition); \
      virtual HRESULT __stdcall Put3DTexturePosition(const CATSafeArrayVariant & i3DTexturePosition); \
      virtual HRESULT __stdcall Get3DTextureOrientation(CATSafeArrayVariant & o3DTextureOrientation); \
      virtual HRESULT __stdcall Put3DTextureOrientation(const CATSafeArrayVariant & i3DTextureOrientation); \
      virtual HRESULT  __stdcall get_Application(CATIAApplication *& oApplication); \
      virtual HRESULT  __stdcall get_Parent(CATBaseDispatch *& oParent); \
      virtual HRESULT  __stdcall get_Name(CATBSTR & oNameBSTR); \
      virtual HRESULT  __stdcall put_Name(const CATBSTR & iNameBSTR); \
      virtual HRESULT  __stdcall GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj); \
};



#define ENVTIEdeclare_CATIARenderingMaterial(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
virtual HRESULT __stdcall get_MappingType(short & oMappingType); \
virtual HRESULT __stdcall put_MappingType(short iMappingType); \
virtual HRESULT __stdcall get_PreviewSize(double & oMappingType); \
virtual HRESULT __stdcall put_PreviewSize(double iMappingType); \
virtual HRESULT __stdcall get_AdaptiveCoeff(short & oMappingType); \
virtual HRESULT __stdcall put_AdaptiveCoeff(short iMappingType); \
virtual HRESULT __stdcall get_AmbientCoefficient(double & oAmbientCoefficient); \
virtual HRESULT __stdcall put_AmbientCoefficient(double iAmbientCoefficient); \
virtual HRESULT __stdcall get_DiffuseCoefficient(double & oDiffuseCoefficient); \
virtual HRESULT __stdcall put_DiffuseCoefficient(double iDiffuseCoefficient); \
virtual HRESULT __stdcall get_SpecularCoefficient(double & oSpecularCoefficient); \
virtual HRESULT __stdcall put_SpecularCoefficient(double iSpecularCoefficient); \
virtual HRESULT __stdcall get_SpecularExponent(double & oSpecularExponent); \
virtual HRESULT __stdcall put_SpecularExponent(double iSpecularExponent); \
virtual HRESULT __stdcall get_TransparencyCoefficient(double & oTransparencyCoefficient); \
virtual HRESULT __stdcall put_TransparencyCoefficient(double iTransparencyCoefficient); \
virtual HRESULT __stdcall get_RefractionCoefficient(double & oRefractionCoefficient); \
virtual HRESULT __stdcall put_RefractionCoefficient(double iRefractionCoefficient); \
virtual HRESULT __stdcall get_ReflectivityCoefficient(double & oReflectivityCoefficient); \
virtual HRESULT __stdcall put_ReflectivityCoefficient(double iReflectivityCoefficient); \
virtual HRESULT __stdcall get_EnvironmentImage(CATBSTR & oEnvironmentImage); \
virtual HRESULT __stdcall put_EnvironmentImage(const CATBSTR & iEnvironmentImage); \
virtual HRESULT __stdcall get_ReflectionMode(short & oReflectionMode); \
virtual HRESULT __stdcall put_ReflectionMode(short iReflectionMode); \
virtual HRESULT __stdcall get_ReflectionHeight(double & oReflectionHeight); \
virtual HRESULT __stdcall put_ReflectionHeight(double iReflectionHeight); \
virtual HRESULT __stdcall get_ReflectionLength(double & oReflectionLength); \
virtual HRESULT __stdcall put_ReflectionLength(double iReflectionLength); \
virtual HRESULT __stdcall get_TextureType(short & oTextureType); \
virtual HRESULT __stdcall put_TextureType(short iTextureType); \
virtual HRESULT __stdcall get_Bump(double & oBump); \
virtual HRESULT __stdcall put_Bump(double iBump); \
virtual HRESULT __stdcall get_TextureImage(CATBSTR & oTextureImage); \
virtual HRESULT __stdcall put_TextureImage(const CATBSTR & iTextureImage); \
virtual HRESULT __stdcall get_FlipU(CAT_VARIANT_BOOL & oFlipU); \
virtual HRESULT __stdcall put_FlipU(CAT_VARIANT_BOOL iFlipU); \
virtual HRESULT __stdcall get_FlipV(CAT_VARIANT_BOOL & oFlipV); \
virtual HRESULT __stdcall put_FlipV(CAT_VARIANT_BOOL iFlipV); \
virtual HRESULT __stdcall get_RepeatU(CAT_VARIANT_BOOL & oRepeatU); \
virtual HRESULT __stdcall put_RepeatU(CAT_VARIANT_BOOL iRepeatU); \
virtual HRESULT __stdcall get_RepeatV(CAT_VARIANT_BOOL & oRepeatV); \
virtual HRESULT __stdcall put_RepeatV(CAT_VARIANT_BOOL iRepeatV); \
virtual HRESULT __stdcall get_ScaleU(double & oScaleU); \
virtual HRESULT __stdcall put_ScaleU(double iScaleU); \
virtual HRESULT __stdcall get_ScaleV(double & oScaleV); \
virtual HRESULT __stdcall put_ScaleV(double iScaleV); \
virtual HRESULT __stdcall get_PositionU(double & oPositionU); \
virtual HRESULT __stdcall put_PositionU(double iPositionU); \
virtual HRESULT __stdcall get_PositionV(double & oPositionV); \
virtual HRESULT __stdcall put_PositionV(double iPositionV); \
virtual HRESULT __stdcall get_Orientation(double & oOrientation); \
virtual HRESULT __stdcall put_Orientation(double iOrientation); \
virtual HRESULT __stdcall get_ColorNumber(short & oColorNumber); \
virtual HRESULT __stdcall put_ColorNumber(short iColorNumber); \
virtual HRESULT __stdcall get_TextureComplexity(short & oTextureComplexity); \
virtual HRESULT __stdcall put_TextureComplexity(short iTextureComplexity); \
virtual HRESULT __stdcall get_TextureAmplitude(double & oTextureAmplitude); \
virtual HRESULT __stdcall put_TextureAmplitude(double iTextureAmplitude); \
virtual HRESULT __stdcall get_TextureVeinAmplitude(double & oTextureVeinAmplitude); \
virtual HRESULT __stdcall put_TextureVeinAmplitude(double iTextureVeinAmplitude); \
virtual HRESULT __stdcall get_TexturePerturbation(double & oTexturePerturbation); \
virtual HRESULT __stdcall put_TexturePerturbation(double iTexturePerturbation); \
virtual HRESULT __stdcall get_TextureGain(double & oTextureGain); \
virtual HRESULT __stdcall put_TextureGain(double iTextureGain); \
virtual HRESULT __stdcall get_TextureTurbulence(CAT_VARIANT_BOOL & oTextureTurbulence); \
virtual HRESULT __stdcall put_TextureTurbulence(CAT_VARIANT_BOOL iTextureTurbulence); \
virtual HRESULT __stdcall get_ChessboardTileWidth(double & oChessboardTileWidth); \
virtual HRESULT __stdcall put_ChessboardTileWidth(double iChessboardTileWidth); \
virtual HRESULT __stdcall get_ChessboardTileHeight(double & oChessboardTileHeight); \
virtual HRESULT __stdcall put_ChessboardTileHeight(double iChessboardTileHeight); \
virtual HRESULT __stdcall get_ChessboardOffset(double & oChessboardOffset); \
virtual HRESULT __stdcall put_ChessboardOffset(double iChessboardOffset); \
virtual HRESULT __stdcall get_ChessboardJointWidth(double & oChessboardJointWidth); \
virtual HRESULT __stdcall put_ChessboardJointWidth(double iChessboardJointWidth); \
virtual HRESULT __stdcall get_ChessboardJointHeight(double & oChessboardJointHeight); \
virtual HRESULT __stdcall put_ChessboardJointHeight(double iChessboardJointHeight); \
virtual HRESULT __stdcall GetAmbientColor(CATSafeArrayVariant & oAmbientColor); \
virtual HRESULT __stdcall PutAmbientColor(const CATSafeArrayVariant & iAmbientColor); \
virtual HRESULT __stdcall GetDiffuseColor(CATSafeArrayVariant & oDiffuseColor); \
virtual HRESULT __stdcall PutDiffuseColor(const CATSafeArrayVariant & iDiffuseColor); \
virtual HRESULT __stdcall GetSpecularColor(CATSafeArrayVariant & oSpecularColor); \
virtual HRESULT __stdcall PutSpecularColor(const CATSafeArrayVariant & iSpecularColor); \
virtual HRESULT __stdcall GetTransparencyColor(CATSafeArrayVariant & oTransparencyColor); \
virtual HRESULT __stdcall PutTransparencyColor(const CATSafeArrayVariant & iTransparencyColor); \
virtual HRESULT __stdcall Get3DTextureColor(short iColorIndex, CATSafeArrayVariant & o3DTextureColor); \
virtual HRESULT __stdcall Put3DTextureColor(short iColorIndex, const CATSafeArrayVariant & i3DTextureColor); \
virtual HRESULT __stdcall Get3DTextureColorCoefficient(short iColorIndex, double & o3DTextureColorCoefficient); \
virtual HRESULT __stdcall Put3DTextureColorCoefficient(short iColorIndex, double i3DTextureColorCoefficient); \
virtual HRESULT __stdcall Get3DTextureScale(CATSafeArrayVariant & o3DTextureScale); \
virtual HRESULT __stdcall Put3DTextureScale(const CATSafeArrayVariant & i3DTextureScale); \
virtual HRESULT __stdcall Get3DTexturePosition(CATSafeArrayVariant & o3DTexturePosition); \
virtual HRESULT __stdcall Put3DTexturePosition(const CATSafeArrayVariant & i3DTexturePosition); \
virtual HRESULT __stdcall Get3DTextureOrientation(CATSafeArrayVariant & o3DTextureOrientation); \
virtual HRESULT __stdcall Put3DTextureOrientation(const CATSafeArrayVariant & i3DTextureOrientation); \
virtual HRESULT  __stdcall get_Application(CATIAApplication *& oApplication); \
virtual HRESULT  __stdcall get_Parent(CATBaseDispatch *& oParent); \
virtual HRESULT  __stdcall get_Name(CATBSTR & oNameBSTR); \
virtual HRESULT  __stdcall put_Name(const CATBSTR & iNameBSTR); \
virtual HRESULT  __stdcall GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj); \


#define ENVTIEdefine_CATIARenderingMaterial(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
HRESULT __stdcall  ENVTIEName::get_MappingType(short & oMappingType) \
{ \
return (ENVTIECALL(CATIARenderingMaterial,ENVTIETypeLetter,ENVTIELetter)get_MappingType(oMappingType)); \
} \
HRESULT __stdcall  ENVTIEName::put_MappingType(short iMappingType) \
{ \
return (ENVTIECALL(CATIARenderingMaterial,ENVTIETypeLetter,ENVTIELetter)put_MappingType(iMappingType)); \
} \
HRESULT __stdcall  ENVTIEName::get_PreviewSize(double & oMappingType) \
{ \
return (ENVTIECALL(CATIARenderingMaterial,ENVTIETypeLetter,ENVTIELetter)get_PreviewSize(oMappingType)); \
} \
HRESULT __stdcall  ENVTIEName::put_PreviewSize(double iMappingType) \
{ \
return (ENVTIECALL(CATIARenderingMaterial,ENVTIETypeLetter,ENVTIELetter)put_PreviewSize(iMappingType)); \
} \
HRESULT __stdcall  ENVTIEName::get_AdaptiveCoeff(short & oMappingType) \
{ \
return (ENVTIECALL(CATIARenderingMaterial,ENVTIETypeLetter,ENVTIELetter)get_AdaptiveCoeff(oMappingType)); \
} \
HRESULT __stdcall  ENVTIEName::put_AdaptiveCoeff(short iMappingType) \
{ \
return (ENVTIECALL(CATIARenderingMaterial,ENVTIETypeLetter,ENVTIELetter)put_AdaptiveCoeff(iMappingType)); \
} \
HRESULT __stdcall  ENVTIEName::get_AmbientCoefficient(double & oAmbientCoefficient) \
{ \
return (ENVTIECALL(CATIARenderingMaterial,ENVTIETypeLetter,ENVTIELetter)get_AmbientCoefficient(oAmbientCoefficient)); \
} \
HRESULT __stdcall  ENVTIEName::put_AmbientCoefficient(double iAmbientCoefficient) \
{ \
return (ENVTIECALL(CATIARenderingMaterial,ENVTIETypeLetter,ENVTIELetter)put_AmbientCoefficient(iAmbientCoefficient)); \
} \
HRESULT __stdcall  ENVTIEName::get_DiffuseCoefficient(double & oDiffuseCoefficient) \
{ \
return (ENVTIECALL(CATIARenderingMaterial,ENVTIETypeLetter,ENVTIELetter)get_DiffuseCoefficient(oDiffuseCoefficient)); \
} \
HRESULT __stdcall  ENVTIEName::put_DiffuseCoefficient(double iDiffuseCoefficient) \
{ \
return (ENVTIECALL(CATIARenderingMaterial,ENVTIETypeLetter,ENVTIELetter)put_DiffuseCoefficient(iDiffuseCoefficient)); \
} \
HRESULT __stdcall  ENVTIEName::get_SpecularCoefficient(double & oSpecularCoefficient) \
{ \
return (ENVTIECALL(CATIARenderingMaterial,ENVTIETypeLetter,ENVTIELetter)get_SpecularCoefficient(oSpecularCoefficient)); \
} \
HRESULT __stdcall  ENVTIEName::put_SpecularCoefficient(double iSpecularCoefficient) \
{ \
return (ENVTIECALL(CATIARenderingMaterial,ENVTIETypeLetter,ENVTIELetter)put_SpecularCoefficient(iSpecularCoefficient)); \
} \
HRESULT __stdcall  ENVTIEName::get_SpecularExponent(double & oSpecularExponent) \
{ \
return (ENVTIECALL(CATIARenderingMaterial,ENVTIETypeLetter,ENVTIELetter)get_SpecularExponent(oSpecularExponent)); \
} \
HRESULT __stdcall  ENVTIEName::put_SpecularExponent(double iSpecularExponent) \
{ \
return (ENVTIECALL(CATIARenderingMaterial,ENVTIETypeLetter,ENVTIELetter)put_SpecularExponent(iSpecularExponent)); \
} \
HRESULT __stdcall  ENVTIEName::get_TransparencyCoefficient(double & oTransparencyCoefficient) \
{ \
return (ENVTIECALL(CATIARenderingMaterial,ENVTIETypeLetter,ENVTIELetter)get_TransparencyCoefficient(oTransparencyCoefficient)); \
} \
HRESULT __stdcall  ENVTIEName::put_TransparencyCoefficient(double iTransparencyCoefficient) \
{ \
return (ENVTIECALL(CATIARenderingMaterial,ENVTIETypeLetter,ENVTIELetter)put_TransparencyCoefficient(iTransparencyCoefficient)); \
} \
HRESULT __stdcall  ENVTIEName::get_RefractionCoefficient(double & oRefractionCoefficient) \
{ \
return (ENVTIECALL(CATIARenderingMaterial,ENVTIETypeLetter,ENVTIELetter)get_RefractionCoefficient(oRefractionCoefficient)); \
} \
HRESULT __stdcall  ENVTIEName::put_RefractionCoefficient(double iRefractionCoefficient) \
{ \
return (ENVTIECALL(CATIARenderingMaterial,ENVTIETypeLetter,ENVTIELetter)put_RefractionCoefficient(iRefractionCoefficient)); \
} \
HRESULT __stdcall  ENVTIEName::get_ReflectivityCoefficient(double & oReflectivityCoefficient) \
{ \
return (ENVTIECALL(CATIARenderingMaterial,ENVTIETypeLetter,ENVTIELetter)get_ReflectivityCoefficient(oReflectivityCoefficient)); \
} \
HRESULT __stdcall  ENVTIEName::put_ReflectivityCoefficient(double iReflectivityCoefficient) \
{ \
return (ENVTIECALL(CATIARenderingMaterial,ENVTIETypeLetter,ENVTIELetter)put_ReflectivityCoefficient(iReflectivityCoefficient)); \
} \
HRESULT __stdcall  ENVTIEName::get_EnvironmentImage(CATBSTR & oEnvironmentImage) \
{ \
return (ENVTIECALL(CATIARenderingMaterial,ENVTIETypeLetter,ENVTIELetter)get_EnvironmentImage(oEnvironmentImage)); \
} \
HRESULT __stdcall  ENVTIEName::put_EnvironmentImage(const CATBSTR & iEnvironmentImage) \
{ \
return (ENVTIECALL(CATIARenderingMaterial,ENVTIETypeLetter,ENVTIELetter)put_EnvironmentImage(iEnvironmentImage)); \
} \
HRESULT __stdcall  ENVTIEName::get_ReflectionMode(short & oReflectionMode) \
{ \
return (ENVTIECALL(CATIARenderingMaterial,ENVTIETypeLetter,ENVTIELetter)get_ReflectionMode(oReflectionMode)); \
} \
HRESULT __stdcall  ENVTIEName::put_ReflectionMode(short iReflectionMode) \
{ \
return (ENVTIECALL(CATIARenderingMaterial,ENVTIETypeLetter,ENVTIELetter)put_ReflectionMode(iReflectionMode)); \
} \
HRESULT __stdcall  ENVTIEName::get_ReflectionHeight(double & oReflectionHeight) \
{ \
return (ENVTIECALL(CATIARenderingMaterial,ENVTIETypeLetter,ENVTIELetter)get_ReflectionHeight(oReflectionHeight)); \
} \
HRESULT __stdcall  ENVTIEName::put_ReflectionHeight(double iReflectionHeight) \
{ \
return (ENVTIECALL(CATIARenderingMaterial,ENVTIETypeLetter,ENVTIELetter)put_ReflectionHeight(iReflectionHeight)); \
} \
HRESULT __stdcall  ENVTIEName::get_ReflectionLength(double & oReflectionLength) \
{ \
return (ENVTIECALL(CATIARenderingMaterial,ENVTIETypeLetter,ENVTIELetter)get_ReflectionLength(oReflectionLength)); \
} \
HRESULT __stdcall  ENVTIEName::put_ReflectionLength(double iReflectionLength) \
{ \
return (ENVTIECALL(CATIARenderingMaterial,ENVTIETypeLetter,ENVTIELetter)put_ReflectionLength(iReflectionLength)); \
} \
HRESULT __stdcall  ENVTIEName::get_TextureType(short & oTextureType) \
{ \
return (ENVTIECALL(CATIARenderingMaterial,ENVTIETypeLetter,ENVTIELetter)get_TextureType(oTextureType)); \
} \
HRESULT __stdcall  ENVTIEName::put_TextureType(short iTextureType) \
{ \
return (ENVTIECALL(CATIARenderingMaterial,ENVTIETypeLetter,ENVTIELetter)put_TextureType(iTextureType)); \
} \
HRESULT __stdcall  ENVTIEName::get_Bump(double & oBump) \
{ \
return (ENVTIECALL(CATIARenderingMaterial,ENVTIETypeLetter,ENVTIELetter)get_Bump(oBump)); \
} \
HRESULT __stdcall  ENVTIEName::put_Bump(double iBump) \
{ \
return (ENVTIECALL(CATIARenderingMaterial,ENVTIETypeLetter,ENVTIELetter)put_Bump(iBump)); \
} \
HRESULT __stdcall  ENVTIEName::get_TextureImage(CATBSTR & oTextureImage) \
{ \
return (ENVTIECALL(CATIARenderingMaterial,ENVTIETypeLetter,ENVTIELetter)get_TextureImage(oTextureImage)); \
} \
HRESULT __stdcall  ENVTIEName::put_TextureImage(const CATBSTR & iTextureImage) \
{ \
return (ENVTIECALL(CATIARenderingMaterial,ENVTIETypeLetter,ENVTIELetter)put_TextureImage(iTextureImage)); \
} \
HRESULT __stdcall  ENVTIEName::get_FlipU(CAT_VARIANT_BOOL & oFlipU) \
{ \
return (ENVTIECALL(CATIARenderingMaterial,ENVTIETypeLetter,ENVTIELetter)get_FlipU(oFlipU)); \
} \
HRESULT __stdcall  ENVTIEName::put_FlipU(CAT_VARIANT_BOOL iFlipU) \
{ \
return (ENVTIECALL(CATIARenderingMaterial,ENVTIETypeLetter,ENVTIELetter)put_FlipU(iFlipU)); \
} \
HRESULT __stdcall  ENVTIEName::get_FlipV(CAT_VARIANT_BOOL & oFlipV) \
{ \
return (ENVTIECALL(CATIARenderingMaterial,ENVTIETypeLetter,ENVTIELetter)get_FlipV(oFlipV)); \
} \
HRESULT __stdcall  ENVTIEName::put_FlipV(CAT_VARIANT_BOOL iFlipV) \
{ \
return (ENVTIECALL(CATIARenderingMaterial,ENVTIETypeLetter,ENVTIELetter)put_FlipV(iFlipV)); \
} \
HRESULT __stdcall  ENVTIEName::get_RepeatU(CAT_VARIANT_BOOL & oRepeatU) \
{ \
return (ENVTIECALL(CATIARenderingMaterial,ENVTIETypeLetter,ENVTIELetter)get_RepeatU(oRepeatU)); \
} \
HRESULT __stdcall  ENVTIEName::put_RepeatU(CAT_VARIANT_BOOL iRepeatU) \
{ \
return (ENVTIECALL(CATIARenderingMaterial,ENVTIETypeLetter,ENVTIELetter)put_RepeatU(iRepeatU)); \
} \
HRESULT __stdcall  ENVTIEName::get_RepeatV(CAT_VARIANT_BOOL & oRepeatV) \
{ \
return (ENVTIECALL(CATIARenderingMaterial,ENVTIETypeLetter,ENVTIELetter)get_RepeatV(oRepeatV)); \
} \
HRESULT __stdcall  ENVTIEName::put_RepeatV(CAT_VARIANT_BOOL iRepeatV) \
{ \
return (ENVTIECALL(CATIARenderingMaterial,ENVTIETypeLetter,ENVTIELetter)put_RepeatV(iRepeatV)); \
} \
HRESULT __stdcall  ENVTIEName::get_ScaleU(double & oScaleU) \
{ \
return (ENVTIECALL(CATIARenderingMaterial,ENVTIETypeLetter,ENVTIELetter)get_ScaleU(oScaleU)); \
} \
HRESULT __stdcall  ENVTIEName::put_ScaleU(double iScaleU) \
{ \
return (ENVTIECALL(CATIARenderingMaterial,ENVTIETypeLetter,ENVTIELetter)put_ScaleU(iScaleU)); \
} \
HRESULT __stdcall  ENVTIEName::get_ScaleV(double & oScaleV) \
{ \
return (ENVTIECALL(CATIARenderingMaterial,ENVTIETypeLetter,ENVTIELetter)get_ScaleV(oScaleV)); \
} \
HRESULT __stdcall  ENVTIEName::put_ScaleV(double iScaleV) \
{ \
return (ENVTIECALL(CATIARenderingMaterial,ENVTIETypeLetter,ENVTIELetter)put_ScaleV(iScaleV)); \
} \
HRESULT __stdcall  ENVTIEName::get_PositionU(double & oPositionU) \
{ \
return (ENVTIECALL(CATIARenderingMaterial,ENVTIETypeLetter,ENVTIELetter)get_PositionU(oPositionU)); \
} \
HRESULT __stdcall  ENVTIEName::put_PositionU(double iPositionU) \
{ \
return (ENVTIECALL(CATIARenderingMaterial,ENVTIETypeLetter,ENVTIELetter)put_PositionU(iPositionU)); \
} \
HRESULT __stdcall  ENVTIEName::get_PositionV(double & oPositionV) \
{ \
return (ENVTIECALL(CATIARenderingMaterial,ENVTIETypeLetter,ENVTIELetter)get_PositionV(oPositionV)); \
} \
HRESULT __stdcall  ENVTIEName::put_PositionV(double iPositionV) \
{ \
return (ENVTIECALL(CATIARenderingMaterial,ENVTIETypeLetter,ENVTIELetter)put_PositionV(iPositionV)); \
} \
HRESULT __stdcall  ENVTIEName::get_Orientation(double & oOrientation) \
{ \
return (ENVTIECALL(CATIARenderingMaterial,ENVTIETypeLetter,ENVTIELetter)get_Orientation(oOrientation)); \
} \
HRESULT __stdcall  ENVTIEName::put_Orientation(double iOrientation) \
{ \
return (ENVTIECALL(CATIARenderingMaterial,ENVTIETypeLetter,ENVTIELetter)put_Orientation(iOrientation)); \
} \
HRESULT __stdcall  ENVTIEName::get_ColorNumber(short & oColorNumber) \
{ \
return (ENVTIECALL(CATIARenderingMaterial,ENVTIETypeLetter,ENVTIELetter)get_ColorNumber(oColorNumber)); \
} \
HRESULT __stdcall  ENVTIEName::put_ColorNumber(short iColorNumber) \
{ \
return (ENVTIECALL(CATIARenderingMaterial,ENVTIETypeLetter,ENVTIELetter)put_ColorNumber(iColorNumber)); \
} \
HRESULT __stdcall  ENVTIEName::get_TextureComplexity(short & oTextureComplexity) \
{ \
return (ENVTIECALL(CATIARenderingMaterial,ENVTIETypeLetter,ENVTIELetter)get_TextureComplexity(oTextureComplexity)); \
} \
HRESULT __stdcall  ENVTIEName::put_TextureComplexity(short iTextureComplexity) \
{ \
return (ENVTIECALL(CATIARenderingMaterial,ENVTIETypeLetter,ENVTIELetter)put_TextureComplexity(iTextureComplexity)); \
} \
HRESULT __stdcall  ENVTIEName::get_TextureAmplitude(double & oTextureAmplitude) \
{ \
return (ENVTIECALL(CATIARenderingMaterial,ENVTIETypeLetter,ENVTIELetter)get_TextureAmplitude(oTextureAmplitude)); \
} \
HRESULT __stdcall  ENVTIEName::put_TextureAmplitude(double iTextureAmplitude) \
{ \
return (ENVTIECALL(CATIARenderingMaterial,ENVTIETypeLetter,ENVTIELetter)put_TextureAmplitude(iTextureAmplitude)); \
} \
HRESULT __stdcall  ENVTIEName::get_TextureVeinAmplitude(double & oTextureVeinAmplitude) \
{ \
return (ENVTIECALL(CATIARenderingMaterial,ENVTIETypeLetter,ENVTIELetter)get_TextureVeinAmplitude(oTextureVeinAmplitude)); \
} \
HRESULT __stdcall  ENVTIEName::put_TextureVeinAmplitude(double iTextureVeinAmplitude) \
{ \
return (ENVTIECALL(CATIARenderingMaterial,ENVTIETypeLetter,ENVTIELetter)put_TextureVeinAmplitude(iTextureVeinAmplitude)); \
} \
HRESULT __stdcall  ENVTIEName::get_TexturePerturbation(double & oTexturePerturbation) \
{ \
return (ENVTIECALL(CATIARenderingMaterial,ENVTIETypeLetter,ENVTIELetter)get_TexturePerturbation(oTexturePerturbation)); \
} \
HRESULT __stdcall  ENVTIEName::put_TexturePerturbation(double iTexturePerturbation) \
{ \
return (ENVTIECALL(CATIARenderingMaterial,ENVTIETypeLetter,ENVTIELetter)put_TexturePerturbation(iTexturePerturbation)); \
} \
HRESULT __stdcall  ENVTIEName::get_TextureGain(double & oTextureGain) \
{ \
return (ENVTIECALL(CATIARenderingMaterial,ENVTIETypeLetter,ENVTIELetter)get_TextureGain(oTextureGain)); \
} \
HRESULT __stdcall  ENVTIEName::put_TextureGain(double iTextureGain) \
{ \
return (ENVTIECALL(CATIARenderingMaterial,ENVTIETypeLetter,ENVTIELetter)put_TextureGain(iTextureGain)); \
} \
HRESULT __stdcall  ENVTIEName::get_TextureTurbulence(CAT_VARIANT_BOOL & oTextureTurbulence) \
{ \
return (ENVTIECALL(CATIARenderingMaterial,ENVTIETypeLetter,ENVTIELetter)get_TextureTurbulence(oTextureTurbulence)); \
} \
HRESULT __stdcall  ENVTIEName::put_TextureTurbulence(CAT_VARIANT_BOOL iTextureTurbulence) \
{ \
return (ENVTIECALL(CATIARenderingMaterial,ENVTIETypeLetter,ENVTIELetter)put_TextureTurbulence(iTextureTurbulence)); \
} \
HRESULT __stdcall  ENVTIEName::get_ChessboardTileWidth(double & oChessboardTileWidth) \
{ \
return (ENVTIECALL(CATIARenderingMaterial,ENVTIETypeLetter,ENVTIELetter)get_ChessboardTileWidth(oChessboardTileWidth)); \
} \
HRESULT __stdcall  ENVTIEName::put_ChessboardTileWidth(double iChessboardTileWidth) \
{ \
return (ENVTIECALL(CATIARenderingMaterial,ENVTIETypeLetter,ENVTIELetter)put_ChessboardTileWidth(iChessboardTileWidth)); \
} \
HRESULT __stdcall  ENVTIEName::get_ChessboardTileHeight(double & oChessboardTileHeight) \
{ \
return (ENVTIECALL(CATIARenderingMaterial,ENVTIETypeLetter,ENVTIELetter)get_ChessboardTileHeight(oChessboardTileHeight)); \
} \
HRESULT __stdcall  ENVTIEName::put_ChessboardTileHeight(double iChessboardTileHeight) \
{ \
return (ENVTIECALL(CATIARenderingMaterial,ENVTIETypeLetter,ENVTIELetter)put_ChessboardTileHeight(iChessboardTileHeight)); \
} \
HRESULT __stdcall  ENVTIEName::get_ChessboardOffset(double & oChessboardOffset) \
{ \
return (ENVTIECALL(CATIARenderingMaterial,ENVTIETypeLetter,ENVTIELetter)get_ChessboardOffset(oChessboardOffset)); \
} \
HRESULT __stdcall  ENVTIEName::put_ChessboardOffset(double iChessboardOffset) \
{ \
return (ENVTIECALL(CATIARenderingMaterial,ENVTIETypeLetter,ENVTIELetter)put_ChessboardOffset(iChessboardOffset)); \
} \
HRESULT __stdcall  ENVTIEName::get_ChessboardJointWidth(double & oChessboardJointWidth) \
{ \
return (ENVTIECALL(CATIARenderingMaterial,ENVTIETypeLetter,ENVTIELetter)get_ChessboardJointWidth(oChessboardJointWidth)); \
} \
HRESULT __stdcall  ENVTIEName::put_ChessboardJointWidth(double iChessboardJointWidth) \
{ \
return (ENVTIECALL(CATIARenderingMaterial,ENVTIETypeLetter,ENVTIELetter)put_ChessboardJointWidth(iChessboardJointWidth)); \
} \
HRESULT __stdcall  ENVTIEName::get_ChessboardJointHeight(double & oChessboardJointHeight) \
{ \
return (ENVTIECALL(CATIARenderingMaterial,ENVTIETypeLetter,ENVTIELetter)get_ChessboardJointHeight(oChessboardJointHeight)); \
} \
HRESULT __stdcall  ENVTIEName::put_ChessboardJointHeight(double iChessboardJointHeight) \
{ \
return (ENVTIECALL(CATIARenderingMaterial,ENVTIETypeLetter,ENVTIELetter)put_ChessboardJointHeight(iChessboardJointHeight)); \
} \
HRESULT __stdcall  ENVTIEName::GetAmbientColor(CATSafeArrayVariant & oAmbientColor) \
{ \
return (ENVTIECALL(CATIARenderingMaterial,ENVTIETypeLetter,ENVTIELetter)GetAmbientColor(oAmbientColor)); \
} \
HRESULT __stdcall  ENVTIEName::PutAmbientColor(const CATSafeArrayVariant & iAmbientColor) \
{ \
return (ENVTIECALL(CATIARenderingMaterial,ENVTIETypeLetter,ENVTIELetter)PutAmbientColor(iAmbientColor)); \
} \
HRESULT __stdcall  ENVTIEName::GetDiffuseColor(CATSafeArrayVariant & oDiffuseColor) \
{ \
return (ENVTIECALL(CATIARenderingMaterial,ENVTIETypeLetter,ENVTIELetter)GetDiffuseColor(oDiffuseColor)); \
} \
HRESULT __stdcall  ENVTIEName::PutDiffuseColor(const CATSafeArrayVariant & iDiffuseColor) \
{ \
return (ENVTIECALL(CATIARenderingMaterial,ENVTIETypeLetter,ENVTIELetter)PutDiffuseColor(iDiffuseColor)); \
} \
HRESULT __stdcall  ENVTIEName::GetSpecularColor(CATSafeArrayVariant & oSpecularColor) \
{ \
return (ENVTIECALL(CATIARenderingMaterial,ENVTIETypeLetter,ENVTIELetter)GetSpecularColor(oSpecularColor)); \
} \
HRESULT __stdcall  ENVTIEName::PutSpecularColor(const CATSafeArrayVariant & iSpecularColor) \
{ \
return (ENVTIECALL(CATIARenderingMaterial,ENVTIETypeLetter,ENVTIELetter)PutSpecularColor(iSpecularColor)); \
} \
HRESULT __stdcall  ENVTIEName::GetTransparencyColor(CATSafeArrayVariant & oTransparencyColor) \
{ \
return (ENVTIECALL(CATIARenderingMaterial,ENVTIETypeLetter,ENVTIELetter)GetTransparencyColor(oTransparencyColor)); \
} \
HRESULT __stdcall  ENVTIEName::PutTransparencyColor(const CATSafeArrayVariant & iTransparencyColor) \
{ \
return (ENVTIECALL(CATIARenderingMaterial,ENVTIETypeLetter,ENVTIELetter)PutTransparencyColor(iTransparencyColor)); \
} \
HRESULT __stdcall  ENVTIEName::Get3DTextureColor(short iColorIndex, CATSafeArrayVariant & o3DTextureColor) \
{ \
return (ENVTIECALL(CATIARenderingMaterial,ENVTIETypeLetter,ENVTIELetter)Get3DTextureColor(iColorIndex,o3DTextureColor)); \
} \
HRESULT __stdcall  ENVTIEName::Put3DTextureColor(short iColorIndex, const CATSafeArrayVariant & i3DTextureColor) \
{ \
return (ENVTIECALL(CATIARenderingMaterial,ENVTIETypeLetter,ENVTIELetter)Put3DTextureColor(iColorIndex,i3DTextureColor)); \
} \
HRESULT __stdcall  ENVTIEName::Get3DTextureColorCoefficient(short iColorIndex, double & o3DTextureColorCoefficient) \
{ \
return (ENVTIECALL(CATIARenderingMaterial,ENVTIETypeLetter,ENVTIELetter)Get3DTextureColorCoefficient(iColorIndex,o3DTextureColorCoefficient)); \
} \
HRESULT __stdcall  ENVTIEName::Put3DTextureColorCoefficient(short iColorIndex, double i3DTextureColorCoefficient) \
{ \
return (ENVTIECALL(CATIARenderingMaterial,ENVTIETypeLetter,ENVTIELetter)Put3DTextureColorCoefficient(iColorIndex,i3DTextureColorCoefficient)); \
} \
HRESULT __stdcall  ENVTIEName::Get3DTextureScale(CATSafeArrayVariant & o3DTextureScale) \
{ \
return (ENVTIECALL(CATIARenderingMaterial,ENVTIETypeLetter,ENVTIELetter)Get3DTextureScale(o3DTextureScale)); \
} \
HRESULT __stdcall  ENVTIEName::Put3DTextureScale(const CATSafeArrayVariant & i3DTextureScale) \
{ \
return (ENVTIECALL(CATIARenderingMaterial,ENVTIETypeLetter,ENVTIELetter)Put3DTextureScale(i3DTextureScale)); \
} \
HRESULT __stdcall  ENVTIEName::Get3DTexturePosition(CATSafeArrayVariant & o3DTexturePosition) \
{ \
return (ENVTIECALL(CATIARenderingMaterial,ENVTIETypeLetter,ENVTIELetter)Get3DTexturePosition(o3DTexturePosition)); \
} \
HRESULT __stdcall  ENVTIEName::Put3DTexturePosition(const CATSafeArrayVariant & i3DTexturePosition) \
{ \
return (ENVTIECALL(CATIARenderingMaterial,ENVTIETypeLetter,ENVTIELetter)Put3DTexturePosition(i3DTexturePosition)); \
} \
HRESULT __stdcall  ENVTIEName::Get3DTextureOrientation(CATSafeArrayVariant & o3DTextureOrientation) \
{ \
return (ENVTIECALL(CATIARenderingMaterial,ENVTIETypeLetter,ENVTIELetter)Get3DTextureOrientation(o3DTextureOrientation)); \
} \
HRESULT __stdcall  ENVTIEName::Put3DTextureOrientation(const CATSafeArrayVariant & i3DTextureOrientation) \
{ \
return (ENVTIECALL(CATIARenderingMaterial,ENVTIETypeLetter,ENVTIELetter)Put3DTextureOrientation(i3DTextureOrientation)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Application(CATIAApplication *& oApplication) \
{ \
return (ENVTIECALL(CATIARenderingMaterial,ENVTIETypeLetter,ENVTIELetter)get_Application(oApplication)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Parent(CATBaseDispatch *& oParent) \
{ \
return (ENVTIECALL(CATIARenderingMaterial,ENVTIETypeLetter,ENVTIELetter)get_Parent(oParent)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Name(CATBSTR & oNameBSTR) \
{ \
return (ENVTIECALL(CATIARenderingMaterial,ENVTIETypeLetter,ENVTIELetter)get_Name(oNameBSTR)); \
} \
HRESULT  __stdcall  ENVTIEName::put_Name(const CATBSTR & iNameBSTR) \
{ \
return (ENVTIECALL(CATIARenderingMaterial,ENVTIETypeLetter,ENVTIELetter)put_Name(iNameBSTR)); \
} \
HRESULT  __stdcall  ENVTIEName::GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj) \
{ \
return (ENVTIECALL(CATIARenderingMaterial,ENVTIETypeLetter,ENVTIELetter)GetItem(IDName,RealObj)); \
} \


/* Name of the TIE class */
#define class_TIE_CATIARenderingMaterial(classe)    TIECATIARenderingMaterial##classe


/* Common methods inside a TIE */
#define common_TIE_CATIARenderingMaterial(classe) \
 \
 \
/* Static initialization */ \
CATDefineCommonTIEMembers(CATIARenderingMaterial, classe) \
 \
 \
CATImplementTIEMethods(CATIARenderingMaterial, classe) \
CATImplementIUnknownMethodsForCATBaseUnknownTIE(CATIARenderingMaterial, classe, 2) \
CATImplementIDispatchMethodsForCATBaseUnknownTIE(CATIARenderingMaterial, classe) \
CATImplementCATBaseUnknownMethodsForTIE(CATIARenderingMaterial, classe) \
 \
HRESULT __stdcall  TIECATIARenderingMaterial##classe::get_MappingType(short & oMappingType) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,1,&_Trac2,&oMappingType); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_MappingType(oMappingType); \
   ExitAfterCall(this,1,_Trac2,&_ret_arg,&oMappingType); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIARenderingMaterial##classe::put_MappingType(short iMappingType) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,2,&_Trac2,&iMappingType); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_MappingType(iMappingType); \
   ExitAfterCall(this,2,_Trac2,&_ret_arg,&iMappingType); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIARenderingMaterial##classe::get_PreviewSize(double & oMappingType) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,3,&_Trac2,&oMappingType); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_PreviewSize(oMappingType); \
   ExitAfterCall(this,3,_Trac2,&_ret_arg,&oMappingType); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIARenderingMaterial##classe::put_PreviewSize(double iMappingType) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,4,&_Trac2,&iMappingType); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_PreviewSize(iMappingType); \
   ExitAfterCall(this,4,_Trac2,&_ret_arg,&iMappingType); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIARenderingMaterial##classe::get_AdaptiveCoeff(short & oMappingType) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,5,&_Trac2,&oMappingType); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_AdaptiveCoeff(oMappingType); \
   ExitAfterCall(this,5,_Trac2,&_ret_arg,&oMappingType); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIARenderingMaterial##classe::put_AdaptiveCoeff(short iMappingType) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,6,&_Trac2,&iMappingType); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_AdaptiveCoeff(iMappingType); \
   ExitAfterCall(this,6,_Trac2,&_ret_arg,&iMappingType); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIARenderingMaterial##classe::get_AmbientCoefficient(double & oAmbientCoefficient) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,7,&_Trac2,&oAmbientCoefficient); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_AmbientCoefficient(oAmbientCoefficient); \
   ExitAfterCall(this,7,_Trac2,&_ret_arg,&oAmbientCoefficient); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIARenderingMaterial##classe::put_AmbientCoefficient(double iAmbientCoefficient) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,8,&_Trac2,&iAmbientCoefficient); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_AmbientCoefficient(iAmbientCoefficient); \
   ExitAfterCall(this,8,_Trac2,&_ret_arg,&iAmbientCoefficient); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIARenderingMaterial##classe::get_DiffuseCoefficient(double & oDiffuseCoefficient) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,9,&_Trac2,&oDiffuseCoefficient); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_DiffuseCoefficient(oDiffuseCoefficient); \
   ExitAfterCall(this,9,_Trac2,&_ret_arg,&oDiffuseCoefficient); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIARenderingMaterial##classe::put_DiffuseCoefficient(double iDiffuseCoefficient) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,10,&_Trac2,&iDiffuseCoefficient); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_DiffuseCoefficient(iDiffuseCoefficient); \
   ExitAfterCall(this,10,_Trac2,&_ret_arg,&iDiffuseCoefficient); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIARenderingMaterial##classe::get_SpecularCoefficient(double & oSpecularCoefficient) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,11,&_Trac2,&oSpecularCoefficient); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_SpecularCoefficient(oSpecularCoefficient); \
   ExitAfterCall(this,11,_Trac2,&_ret_arg,&oSpecularCoefficient); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIARenderingMaterial##classe::put_SpecularCoefficient(double iSpecularCoefficient) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,12,&_Trac2,&iSpecularCoefficient); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_SpecularCoefficient(iSpecularCoefficient); \
   ExitAfterCall(this,12,_Trac2,&_ret_arg,&iSpecularCoefficient); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIARenderingMaterial##classe::get_SpecularExponent(double & oSpecularExponent) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,13,&_Trac2,&oSpecularExponent); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_SpecularExponent(oSpecularExponent); \
   ExitAfterCall(this,13,_Trac2,&_ret_arg,&oSpecularExponent); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIARenderingMaterial##classe::put_SpecularExponent(double iSpecularExponent) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,14,&_Trac2,&iSpecularExponent); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_SpecularExponent(iSpecularExponent); \
   ExitAfterCall(this,14,_Trac2,&_ret_arg,&iSpecularExponent); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIARenderingMaterial##classe::get_TransparencyCoefficient(double & oTransparencyCoefficient) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,15,&_Trac2,&oTransparencyCoefficient); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_TransparencyCoefficient(oTransparencyCoefficient); \
   ExitAfterCall(this,15,_Trac2,&_ret_arg,&oTransparencyCoefficient); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIARenderingMaterial##classe::put_TransparencyCoefficient(double iTransparencyCoefficient) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,16,&_Trac2,&iTransparencyCoefficient); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_TransparencyCoefficient(iTransparencyCoefficient); \
   ExitAfterCall(this,16,_Trac2,&_ret_arg,&iTransparencyCoefficient); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIARenderingMaterial##classe::get_RefractionCoefficient(double & oRefractionCoefficient) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,17,&_Trac2,&oRefractionCoefficient); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_RefractionCoefficient(oRefractionCoefficient); \
   ExitAfterCall(this,17,_Trac2,&_ret_arg,&oRefractionCoefficient); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIARenderingMaterial##classe::put_RefractionCoefficient(double iRefractionCoefficient) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,18,&_Trac2,&iRefractionCoefficient); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_RefractionCoefficient(iRefractionCoefficient); \
   ExitAfterCall(this,18,_Trac2,&_ret_arg,&iRefractionCoefficient); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIARenderingMaterial##classe::get_ReflectivityCoefficient(double & oReflectivityCoefficient) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,19,&_Trac2,&oReflectivityCoefficient); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_ReflectivityCoefficient(oReflectivityCoefficient); \
   ExitAfterCall(this,19,_Trac2,&_ret_arg,&oReflectivityCoefficient); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIARenderingMaterial##classe::put_ReflectivityCoefficient(double iReflectivityCoefficient) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,20,&_Trac2,&iReflectivityCoefficient); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_ReflectivityCoefficient(iReflectivityCoefficient); \
   ExitAfterCall(this,20,_Trac2,&_ret_arg,&iReflectivityCoefficient); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIARenderingMaterial##classe::get_EnvironmentImage(CATBSTR & oEnvironmentImage) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,21,&_Trac2,&oEnvironmentImage); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_EnvironmentImage(oEnvironmentImage); \
   ExitAfterCall(this,21,_Trac2,&_ret_arg,&oEnvironmentImage); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIARenderingMaterial##classe::put_EnvironmentImage(const CATBSTR & iEnvironmentImage) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,22,&_Trac2,&iEnvironmentImage); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_EnvironmentImage(iEnvironmentImage); \
   ExitAfterCall(this,22,_Trac2,&_ret_arg,&iEnvironmentImage); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIARenderingMaterial##classe::get_ReflectionMode(short & oReflectionMode) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,23,&_Trac2,&oReflectionMode); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_ReflectionMode(oReflectionMode); \
   ExitAfterCall(this,23,_Trac2,&_ret_arg,&oReflectionMode); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIARenderingMaterial##classe::put_ReflectionMode(short iReflectionMode) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,24,&_Trac2,&iReflectionMode); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_ReflectionMode(iReflectionMode); \
   ExitAfterCall(this,24,_Trac2,&_ret_arg,&iReflectionMode); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIARenderingMaterial##classe::get_ReflectionHeight(double & oReflectionHeight) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,25,&_Trac2,&oReflectionHeight); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_ReflectionHeight(oReflectionHeight); \
   ExitAfterCall(this,25,_Trac2,&_ret_arg,&oReflectionHeight); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIARenderingMaterial##classe::put_ReflectionHeight(double iReflectionHeight) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,26,&_Trac2,&iReflectionHeight); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_ReflectionHeight(iReflectionHeight); \
   ExitAfterCall(this,26,_Trac2,&_ret_arg,&iReflectionHeight); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIARenderingMaterial##classe::get_ReflectionLength(double & oReflectionLength) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,27,&_Trac2,&oReflectionLength); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_ReflectionLength(oReflectionLength); \
   ExitAfterCall(this,27,_Trac2,&_ret_arg,&oReflectionLength); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIARenderingMaterial##classe::put_ReflectionLength(double iReflectionLength) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,28,&_Trac2,&iReflectionLength); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_ReflectionLength(iReflectionLength); \
   ExitAfterCall(this,28,_Trac2,&_ret_arg,&iReflectionLength); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIARenderingMaterial##classe::get_TextureType(short & oTextureType) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,29,&_Trac2,&oTextureType); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_TextureType(oTextureType); \
   ExitAfterCall(this,29,_Trac2,&_ret_arg,&oTextureType); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIARenderingMaterial##classe::put_TextureType(short iTextureType) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,30,&_Trac2,&iTextureType); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_TextureType(iTextureType); \
   ExitAfterCall(this,30,_Trac2,&_ret_arg,&iTextureType); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIARenderingMaterial##classe::get_Bump(double & oBump) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,31,&_Trac2,&oBump); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Bump(oBump); \
   ExitAfterCall(this,31,_Trac2,&_ret_arg,&oBump); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIARenderingMaterial##classe::put_Bump(double iBump) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,32,&_Trac2,&iBump); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_Bump(iBump); \
   ExitAfterCall(this,32,_Trac2,&_ret_arg,&iBump); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIARenderingMaterial##classe::get_TextureImage(CATBSTR & oTextureImage) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,33,&_Trac2,&oTextureImage); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_TextureImage(oTextureImage); \
   ExitAfterCall(this,33,_Trac2,&_ret_arg,&oTextureImage); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIARenderingMaterial##classe::put_TextureImage(const CATBSTR & iTextureImage) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,34,&_Trac2,&iTextureImage); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_TextureImage(iTextureImage); \
   ExitAfterCall(this,34,_Trac2,&_ret_arg,&iTextureImage); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIARenderingMaterial##classe::get_FlipU(CAT_VARIANT_BOOL & oFlipU) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,35,&_Trac2,&oFlipU); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_FlipU(oFlipU); \
   ExitAfterCall(this,35,_Trac2,&_ret_arg,&oFlipU); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIARenderingMaterial##classe::put_FlipU(CAT_VARIANT_BOOL iFlipU) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,36,&_Trac2,&iFlipU); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_FlipU(iFlipU); \
   ExitAfterCall(this,36,_Trac2,&_ret_arg,&iFlipU); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIARenderingMaterial##classe::get_FlipV(CAT_VARIANT_BOOL & oFlipV) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,37,&_Trac2,&oFlipV); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_FlipV(oFlipV); \
   ExitAfterCall(this,37,_Trac2,&_ret_arg,&oFlipV); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIARenderingMaterial##classe::put_FlipV(CAT_VARIANT_BOOL iFlipV) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,38,&_Trac2,&iFlipV); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_FlipV(iFlipV); \
   ExitAfterCall(this,38,_Trac2,&_ret_arg,&iFlipV); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIARenderingMaterial##classe::get_RepeatU(CAT_VARIANT_BOOL & oRepeatU) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,39,&_Trac2,&oRepeatU); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_RepeatU(oRepeatU); \
   ExitAfterCall(this,39,_Trac2,&_ret_arg,&oRepeatU); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIARenderingMaterial##classe::put_RepeatU(CAT_VARIANT_BOOL iRepeatU) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,40,&_Trac2,&iRepeatU); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_RepeatU(iRepeatU); \
   ExitAfterCall(this,40,_Trac2,&_ret_arg,&iRepeatU); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIARenderingMaterial##classe::get_RepeatV(CAT_VARIANT_BOOL & oRepeatV) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,41,&_Trac2,&oRepeatV); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_RepeatV(oRepeatV); \
   ExitAfterCall(this,41,_Trac2,&_ret_arg,&oRepeatV); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIARenderingMaterial##classe::put_RepeatV(CAT_VARIANT_BOOL iRepeatV) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,42,&_Trac2,&iRepeatV); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_RepeatV(iRepeatV); \
   ExitAfterCall(this,42,_Trac2,&_ret_arg,&iRepeatV); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIARenderingMaterial##classe::get_ScaleU(double & oScaleU) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,43,&_Trac2,&oScaleU); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_ScaleU(oScaleU); \
   ExitAfterCall(this,43,_Trac2,&_ret_arg,&oScaleU); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIARenderingMaterial##classe::put_ScaleU(double iScaleU) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,44,&_Trac2,&iScaleU); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_ScaleU(iScaleU); \
   ExitAfterCall(this,44,_Trac2,&_ret_arg,&iScaleU); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIARenderingMaterial##classe::get_ScaleV(double & oScaleV) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,45,&_Trac2,&oScaleV); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_ScaleV(oScaleV); \
   ExitAfterCall(this,45,_Trac2,&_ret_arg,&oScaleV); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIARenderingMaterial##classe::put_ScaleV(double iScaleV) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,46,&_Trac2,&iScaleV); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_ScaleV(iScaleV); \
   ExitAfterCall(this,46,_Trac2,&_ret_arg,&iScaleV); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIARenderingMaterial##classe::get_PositionU(double & oPositionU) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,47,&_Trac2,&oPositionU); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_PositionU(oPositionU); \
   ExitAfterCall(this,47,_Trac2,&_ret_arg,&oPositionU); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIARenderingMaterial##classe::put_PositionU(double iPositionU) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,48,&_Trac2,&iPositionU); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_PositionU(iPositionU); \
   ExitAfterCall(this,48,_Trac2,&_ret_arg,&iPositionU); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIARenderingMaterial##classe::get_PositionV(double & oPositionV) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,49,&_Trac2,&oPositionV); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_PositionV(oPositionV); \
   ExitAfterCall(this,49,_Trac2,&_ret_arg,&oPositionV); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIARenderingMaterial##classe::put_PositionV(double iPositionV) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,50,&_Trac2,&iPositionV); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_PositionV(iPositionV); \
   ExitAfterCall(this,50,_Trac2,&_ret_arg,&iPositionV); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIARenderingMaterial##classe::get_Orientation(double & oOrientation) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,51,&_Trac2,&oOrientation); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Orientation(oOrientation); \
   ExitAfterCall(this,51,_Trac2,&_ret_arg,&oOrientation); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIARenderingMaterial##classe::put_Orientation(double iOrientation) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,52,&_Trac2,&iOrientation); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_Orientation(iOrientation); \
   ExitAfterCall(this,52,_Trac2,&_ret_arg,&iOrientation); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIARenderingMaterial##classe::get_ColorNumber(short & oColorNumber) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,53,&_Trac2,&oColorNumber); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_ColorNumber(oColorNumber); \
   ExitAfterCall(this,53,_Trac2,&_ret_arg,&oColorNumber); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIARenderingMaterial##classe::put_ColorNumber(short iColorNumber) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,54,&_Trac2,&iColorNumber); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_ColorNumber(iColorNumber); \
   ExitAfterCall(this,54,_Trac2,&_ret_arg,&iColorNumber); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIARenderingMaterial##classe::get_TextureComplexity(short & oTextureComplexity) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,55,&_Trac2,&oTextureComplexity); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_TextureComplexity(oTextureComplexity); \
   ExitAfterCall(this,55,_Trac2,&_ret_arg,&oTextureComplexity); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIARenderingMaterial##classe::put_TextureComplexity(short iTextureComplexity) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,56,&_Trac2,&iTextureComplexity); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_TextureComplexity(iTextureComplexity); \
   ExitAfterCall(this,56,_Trac2,&_ret_arg,&iTextureComplexity); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIARenderingMaterial##classe::get_TextureAmplitude(double & oTextureAmplitude) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,57,&_Trac2,&oTextureAmplitude); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_TextureAmplitude(oTextureAmplitude); \
   ExitAfterCall(this,57,_Trac2,&_ret_arg,&oTextureAmplitude); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIARenderingMaterial##classe::put_TextureAmplitude(double iTextureAmplitude) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,58,&_Trac2,&iTextureAmplitude); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_TextureAmplitude(iTextureAmplitude); \
   ExitAfterCall(this,58,_Trac2,&_ret_arg,&iTextureAmplitude); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIARenderingMaterial##classe::get_TextureVeinAmplitude(double & oTextureVeinAmplitude) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,59,&_Trac2,&oTextureVeinAmplitude); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_TextureVeinAmplitude(oTextureVeinAmplitude); \
   ExitAfterCall(this,59,_Trac2,&_ret_arg,&oTextureVeinAmplitude); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIARenderingMaterial##classe::put_TextureVeinAmplitude(double iTextureVeinAmplitude) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,60,&_Trac2,&iTextureVeinAmplitude); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_TextureVeinAmplitude(iTextureVeinAmplitude); \
   ExitAfterCall(this,60,_Trac2,&_ret_arg,&iTextureVeinAmplitude); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIARenderingMaterial##classe::get_TexturePerturbation(double & oTexturePerturbation) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,61,&_Trac2,&oTexturePerturbation); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_TexturePerturbation(oTexturePerturbation); \
   ExitAfterCall(this,61,_Trac2,&_ret_arg,&oTexturePerturbation); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIARenderingMaterial##classe::put_TexturePerturbation(double iTexturePerturbation) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,62,&_Trac2,&iTexturePerturbation); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_TexturePerturbation(iTexturePerturbation); \
   ExitAfterCall(this,62,_Trac2,&_ret_arg,&iTexturePerturbation); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIARenderingMaterial##classe::get_TextureGain(double & oTextureGain) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,63,&_Trac2,&oTextureGain); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_TextureGain(oTextureGain); \
   ExitAfterCall(this,63,_Trac2,&_ret_arg,&oTextureGain); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIARenderingMaterial##classe::put_TextureGain(double iTextureGain) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,64,&_Trac2,&iTextureGain); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_TextureGain(iTextureGain); \
   ExitAfterCall(this,64,_Trac2,&_ret_arg,&iTextureGain); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIARenderingMaterial##classe::get_TextureTurbulence(CAT_VARIANT_BOOL & oTextureTurbulence) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,65,&_Trac2,&oTextureTurbulence); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_TextureTurbulence(oTextureTurbulence); \
   ExitAfterCall(this,65,_Trac2,&_ret_arg,&oTextureTurbulence); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIARenderingMaterial##classe::put_TextureTurbulence(CAT_VARIANT_BOOL iTextureTurbulence) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,66,&_Trac2,&iTextureTurbulence); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_TextureTurbulence(iTextureTurbulence); \
   ExitAfterCall(this,66,_Trac2,&_ret_arg,&iTextureTurbulence); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIARenderingMaterial##classe::get_ChessboardTileWidth(double & oChessboardTileWidth) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,67,&_Trac2,&oChessboardTileWidth); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_ChessboardTileWidth(oChessboardTileWidth); \
   ExitAfterCall(this,67,_Trac2,&_ret_arg,&oChessboardTileWidth); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIARenderingMaterial##classe::put_ChessboardTileWidth(double iChessboardTileWidth) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,68,&_Trac2,&iChessboardTileWidth); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_ChessboardTileWidth(iChessboardTileWidth); \
   ExitAfterCall(this,68,_Trac2,&_ret_arg,&iChessboardTileWidth); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIARenderingMaterial##classe::get_ChessboardTileHeight(double & oChessboardTileHeight) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,69,&_Trac2,&oChessboardTileHeight); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_ChessboardTileHeight(oChessboardTileHeight); \
   ExitAfterCall(this,69,_Trac2,&_ret_arg,&oChessboardTileHeight); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIARenderingMaterial##classe::put_ChessboardTileHeight(double iChessboardTileHeight) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,70,&_Trac2,&iChessboardTileHeight); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_ChessboardTileHeight(iChessboardTileHeight); \
   ExitAfterCall(this,70,_Trac2,&_ret_arg,&iChessboardTileHeight); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIARenderingMaterial##classe::get_ChessboardOffset(double & oChessboardOffset) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,71,&_Trac2,&oChessboardOffset); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_ChessboardOffset(oChessboardOffset); \
   ExitAfterCall(this,71,_Trac2,&_ret_arg,&oChessboardOffset); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIARenderingMaterial##classe::put_ChessboardOffset(double iChessboardOffset) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,72,&_Trac2,&iChessboardOffset); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_ChessboardOffset(iChessboardOffset); \
   ExitAfterCall(this,72,_Trac2,&_ret_arg,&iChessboardOffset); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIARenderingMaterial##classe::get_ChessboardJointWidth(double & oChessboardJointWidth) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,73,&_Trac2,&oChessboardJointWidth); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_ChessboardJointWidth(oChessboardJointWidth); \
   ExitAfterCall(this,73,_Trac2,&_ret_arg,&oChessboardJointWidth); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIARenderingMaterial##classe::put_ChessboardJointWidth(double iChessboardJointWidth) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,74,&_Trac2,&iChessboardJointWidth); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_ChessboardJointWidth(iChessboardJointWidth); \
   ExitAfterCall(this,74,_Trac2,&_ret_arg,&iChessboardJointWidth); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIARenderingMaterial##classe::get_ChessboardJointHeight(double & oChessboardJointHeight) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,75,&_Trac2,&oChessboardJointHeight); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_ChessboardJointHeight(oChessboardJointHeight); \
   ExitAfterCall(this,75,_Trac2,&_ret_arg,&oChessboardJointHeight); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIARenderingMaterial##classe::put_ChessboardJointHeight(double iChessboardJointHeight) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,76,&_Trac2,&iChessboardJointHeight); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_ChessboardJointHeight(iChessboardJointHeight); \
   ExitAfterCall(this,76,_Trac2,&_ret_arg,&iChessboardJointHeight); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIARenderingMaterial##classe::GetAmbientColor(CATSafeArrayVariant & oAmbientColor) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,77,&_Trac2,&oAmbientColor); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetAmbientColor(oAmbientColor); \
   ExitAfterCall(this,77,_Trac2,&_ret_arg,&oAmbientColor); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIARenderingMaterial##classe::PutAmbientColor(const CATSafeArrayVariant & iAmbientColor) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,78,&_Trac2,&iAmbientColor); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->PutAmbientColor(iAmbientColor); \
   ExitAfterCall(this,78,_Trac2,&_ret_arg,&iAmbientColor); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIARenderingMaterial##classe::GetDiffuseColor(CATSafeArrayVariant & oDiffuseColor) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,79,&_Trac2,&oDiffuseColor); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetDiffuseColor(oDiffuseColor); \
   ExitAfterCall(this,79,_Trac2,&_ret_arg,&oDiffuseColor); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIARenderingMaterial##classe::PutDiffuseColor(const CATSafeArrayVariant & iDiffuseColor) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,80,&_Trac2,&iDiffuseColor); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->PutDiffuseColor(iDiffuseColor); \
   ExitAfterCall(this,80,_Trac2,&_ret_arg,&iDiffuseColor); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIARenderingMaterial##classe::GetSpecularColor(CATSafeArrayVariant & oSpecularColor) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,81,&_Trac2,&oSpecularColor); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetSpecularColor(oSpecularColor); \
   ExitAfterCall(this,81,_Trac2,&_ret_arg,&oSpecularColor); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIARenderingMaterial##classe::PutSpecularColor(const CATSafeArrayVariant & iSpecularColor) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,82,&_Trac2,&iSpecularColor); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->PutSpecularColor(iSpecularColor); \
   ExitAfterCall(this,82,_Trac2,&_ret_arg,&iSpecularColor); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIARenderingMaterial##classe::GetTransparencyColor(CATSafeArrayVariant & oTransparencyColor) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,83,&_Trac2,&oTransparencyColor); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetTransparencyColor(oTransparencyColor); \
   ExitAfterCall(this,83,_Trac2,&_ret_arg,&oTransparencyColor); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIARenderingMaterial##classe::PutTransparencyColor(const CATSafeArrayVariant & iTransparencyColor) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,84,&_Trac2,&iTransparencyColor); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->PutTransparencyColor(iTransparencyColor); \
   ExitAfterCall(this,84,_Trac2,&_ret_arg,&iTransparencyColor); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIARenderingMaterial##classe::Get3DTextureColor(short iColorIndex, CATSafeArrayVariant & o3DTextureColor) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,85,&_Trac2,&iColorIndex,&o3DTextureColor); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->Get3DTextureColor(iColorIndex,o3DTextureColor); \
   ExitAfterCall(this,85,_Trac2,&_ret_arg,&iColorIndex,&o3DTextureColor); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIARenderingMaterial##classe::Put3DTextureColor(short iColorIndex, const CATSafeArrayVariant & i3DTextureColor) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,86,&_Trac2,&iColorIndex,&i3DTextureColor); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->Put3DTextureColor(iColorIndex,i3DTextureColor); \
   ExitAfterCall(this,86,_Trac2,&_ret_arg,&iColorIndex,&i3DTextureColor); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIARenderingMaterial##classe::Get3DTextureColorCoefficient(short iColorIndex, double & o3DTextureColorCoefficient) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,87,&_Trac2,&iColorIndex,&o3DTextureColorCoefficient); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->Get3DTextureColorCoefficient(iColorIndex,o3DTextureColorCoefficient); \
   ExitAfterCall(this,87,_Trac2,&_ret_arg,&iColorIndex,&o3DTextureColorCoefficient); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIARenderingMaterial##classe::Put3DTextureColorCoefficient(short iColorIndex, double i3DTextureColorCoefficient) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,88,&_Trac2,&iColorIndex,&i3DTextureColorCoefficient); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->Put3DTextureColorCoefficient(iColorIndex,i3DTextureColorCoefficient); \
   ExitAfterCall(this,88,_Trac2,&_ret_arg,&iColorIndex,&i3DTextureColorCoefficient); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIARenderingMaterial##classe::Get3DTextureScale(CATSafeArrayVariant & o3DTextureScale) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,89,&_Trac2,&o3DTextureScale); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->Get3DTextureScale(o3DTextureScale); \
   ExitAfterCall(this,89,_Trac2,&_ret_arg,&o3DTextureScale); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIARenderingMaterial##classe::Put3DTextureScale(const CATSafeArrayVariant & i3DTextureScale) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,90,&_Trac2,&i3DTextureScale); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->Put3DTextureScale(i3DTextureScale); \
   ExitAfterCall(this,90,_Trac2,&_ret_arg,&i3DTextureScale); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIARenderingMaterial##classe::Get3DTexturePosition(CATSafeArrayVariant & o3DTexturePosition) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,91,&_Trac2,&o3DTexturePosition); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->Get3DTexturePosition(o3DTexturePosition); \
   ExitAfterCall(this,91,_Trac2,&_ret_arg,&o3DTexturePosition); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIARenderingMaterial##classe::Put3DTexturePosition(const CATSafeArrayVariant & i3DTexturePosition) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,92,&_Trac2,&i3DTexturePosition); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->Put3DTexturePosition(i3DTexturePosition); \
   ExitAfterCall(this,92,_Trac2,&_ret_arg,&i3DTexturePosition); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIARenderingMaterial##classe::Get3DTextureOrientation(CATSafeArrayVariant & o3DTextureOrientation) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,93,&_Trac2,&o3DTextureOrientation); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->Get3DTextureOrientation(o3DTextureOrientation); \
   ExitAfterCall(this,93,_Trac2,&_ret_arg,&o3DTextureOrientation); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIARenderingMaterial##classe::Put3DTextureOrientation(const CATSafeArrayVariant & i3DTextureOrientation) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,94,&_Trac2,&i3DTextureOrientation); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->Put3DTextureOrientation(i3DTextureOrientation); \
   ExitAfterCall(this,94,_Trac2,&_ret_arg,&i3DTextureOrientation); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIARenderingMaterial##classe::get_Application(CATIAApplication *& oApplication) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,95,&_Trac2,&oApplication); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Application(oApplication); \
   ExitAfterCall(this,95,_Trac2,&_ret_arg,&oApplication); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIARenderingMaterial##classe::get_Parent(CATBaseDispatch *& oParent) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,96,&_Trac2,&oParent); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Parent(oParent); \
   ExitAfterCall(this,96,_Trac2,&_ret_arg,&oParent); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIARenderingMaterial##classe::get_Name(CATBSTR & oNameBSTR) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,97,&_Trac2,&oNameBSTR); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Name(oNameBSTR); \
   ExitAfterCall(this,97,_Trac2,&_ret_arg,&oNameBSTR); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIARenderingMaterial##classe::put_Name(const CATBSTR & iNameBSTR) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,98,&_Trac2,&iNameBSTR); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_Name(iNameBSTR); \
   ExitAfterCall(this,98,_Trac2,&_ret_arg,&iNameBSTR); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIARenderingMaterial##classe::GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,99,&_Trac2,&IDName,&RealObj); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetItem(IDName,RealObj); \
   ExitAfterCall(this,99,_Trac2,&_ret_arg,&IDName,&RealObj); \
   return(_ret_arg); \
} \



/* Macro used to link an implementation with an interface */
#define TIE_CATIARenderingMaterial(classe) \
 \
 \
declare_TIE_CATIARenderingMaterial(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIARenderingMaterial##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIARenderingMaterial,"CATIARenderingMaterial",CATIARenderingMaterial::MetaObject(),classe::MetaObject(),TIE); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIARenderingMaterial(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIECreation(CATIARenderingMaterial, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIARenderingMaterial##classe(classe::MetaObject(),CATIARenderingMaterial::MetaObject(),(void *)CreateTIECATIARenderingMaterial##classe)



/* Macro used to link an implementation with an interface */
/* This TIE is chained on the implementation object */
#define TIEchain_CATIARenderingMaterial(classe) \
 \
 \
declare_TIE_CATIARenderingMaterial(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIARenderingMaterial##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIARenderingMaterial,"CATIARenderingMaterial",CATIARenderingMaterial::MetaObject(),classe::MetaObject(),TIEchain); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIARenderingMaterial(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIEchainCreation(CATIARenderingMaterial, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIARenderingMaterial##classe(classe::MetaObject(),CATIARenderingMaterial::MetaObject(),(void *)CreateTIECATIARenderingMaterial##classe)


/* Macro to switch between BOA and TIE at build time */ 
#ifdef CATSYS_BOA_IS_TIE
#define BOA_CATIARenderingMaterial(classe) TIE_CATIARenderingMaterial(classe)
#else
#define BOA_CATIARenderingMaterial(classe) CATImplementBOA(CATIARenderingMaterial, classe)
#endif

#endif
