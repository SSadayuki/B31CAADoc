#ifndef __TIE_CATIARenderingLight
#define __TIE_CATIARenderingLight

#include <string.h>
#include "CATBaseUnknown.h"
#include "CATMetaClass.h"
#include "CATMacForTie.h"
#include "CATExitJournal.h"
#include "CATIARenderingLight.h"
#include "JS0DSPA.h"


#ifdef _WINDOWS_SOURCE
#define Exported __declspec(dllexport)
#define Imported __declspec(dllimport)
#else
#define Exported 
#define Imported 
#endif


/* To link an implementation with the interface CATIARenderingLight */
#define declare_TIE_CATIARenderingLight(classe) \
 \
 \
class TIECATIARenderingLight##classe : public CATIARenderingLight \
{ \
   private: \
      CATDeclareCommonTIEMembers \
   public: \
      CATDeclareTIEMethods(CATIARenderingLight, classe) \
      CATDeclareIUnknownMethodsForCATBaseUnknownTIE \
      CATDeclareIDispatchMethodsForCATBaseUnknownTIE \
      CATDeclareCATBaseUnknownMethodsForTIE \
      virtual HRESULT __stdcall get_Type(short & oType); \
      virtual HRESULT __stdcall put_Type(short iType); \
      virtual HRESULT __stdcall get_Mode(short & oMode); \
      virtual HRESULT __stdcall put_Mode(short iMode); \
      virtual HRESULT __stdcall GetOrigin(CATSafeArrayVariant & oOrigin); \
      virtual HRESULT __stdcall PutOrigin(const CATSafeArrayVariant & iOrigin); \
      virtual HRESULT __stdcall GetTarget(CATSafeArrayVariant & oTarget); \
      virtual HRESULT __stdcall PutTarget(const CATSafeArrayVariant & iTarget); \
      virtual HRESULT __stdcall GetColor(CATSafeArrayVariant & oColor); \
      virtual HRESULT __stdcall PutColor(const CATSafeArrayVariant & iColor); \
      virtual HRESULT __stdcall get_Intensity(double & oIntensity); \
      virtual HRESULT __stdcall put_Intensity(double iIntensity); \
      virtual HRESULT __stdcall get_Ambient(double & oAmbient); \
      virtual HRESULT __stdcall put_Ambient(double iAmbient); \
      virtual HRESULT __stdcall get_Diffuse(double & oDiffuse); \
      virtual HRESULT __stdcall put_Diffuse(double iDiffuse); \
      virtual HRESULT __stdcall get_Specular(double & oSpecular); \
      virtual HRESULT __stdcall put_Specular(double iSpecular); \
      virtual HRESULT __stdcall get_Angle(double & oAngle); \
      virtual HRESULT __stdcall put_Angle(double iAngle); \
      virtual HRESULT __stdcall get_EndDistance(double & oEndDistance); \
      virtual HRESULT __stdcall put_EndDistance(double iEndDistance); \
      virtual HRESULT __stdcall get_AttenuationStartRatio(double & oAttenuationStartRatio); \
      virtual HRESULT __stdcall put_AttenuationStartRatio(double iAttenuationStartRatio); \
      virtual HRESULT __stdcall get_AttenuationAngleRatio(double & oAttenuationAngleRatio); \
      virtual HRESULT __stdcall put_AttenuationAngleRatio(double iAttenuationAngleRatio); \
      virtual HRESULT __stdcall get_ShadowStatus(short & oShadowStatus); \
      virtual HRESULT __stdcall put_ShadowStatus(short iShadowStatus); \
      virtual HRESULT __stdcall get_HardwareShadowStatus(short & oHardwareShadowStatus); \
      virtual HRESULT __stdcall put_HardwareShadowStatus(short iHardwareShadowStatus); \
      virtual HRESULT __stdcall get_HardwareShadowSmoothing(short & oHardwareShadowSmoothing); \
      virtual HRESULT __stdcall put_HardwareShadowSmoothing(short iHardwareShadowSmoothing); \
      virtual HRESULT __stdcall GetShadowColor(CATSafeArrayVariant & oShadowColor); \
      virtual HRESULT __stdcall PutShadowColor(const CATSafeArrayVariant & iShadowColor); \
      virtual HRESULT __stdcall get_HardwareShadowTransparency(double & oHardwareShadowTransparency); \
      virtual HRESULT __stdcall put_HardwareShadowTransparency(double iHardwareShadowTransparency); \
      virtual HRESULT __stdcall get_ShadowObjectStatus(short & oShadowObjectStatus); \
      virtual HRESULT __stdcall put_ShadowObjectStatus(short iShadowObjectStatus); \
      virtual HRESULT __stdcall get_ShadowMapSize(short & oShadowMapSize); \
      virtual HRESULT __stdcall put_ShadowMapSize(short iShadowMapSize); \
      virtual HRESULT __stdcall get_ShadowFittingMode(short & oShadowFittingMode); \
      virtual HRESULT __stdcall put_ShadowFittingMode(short iShadowFittingMode); \
      virtual HRESULT __stdcall get_ActiveStatus(short & oActiveStatus); \
      virtual HRESULT __stdcall put_ActiveStatus(short iActiveStatus); \
      virtual HRESULT __stdcall get_LightAreaType(short & oLightAreaType); \
      virtual HRESULT __stdcall put_LightAreaType(short iLightAreaType); \
      virtual HRESULT __stdcall get_AreaStatus(short & oAreaStatus); \
      virtual HRESULT __stdcall put_AreaStatus(short iAreaStatus); \
      virtual HRESULT __stdcall get_RectangleLightLength(double & oRectangleLightLength); \
      virtual HRESULT __stdcall put_RectangleLightLength(double iRectangleLightLength); \
      virtual HRESULT __stdcall get_RectangleLightWidth(double & oRectangleLightWidth); \
      virtual HRESULT __stdcall put_RectangleLightWidth(double iRectangleLightWidth); \
      virtual HRESULT __stdcall get_DiskLightRadius(double & oDiskLightRadius); \
      virtual HRESULT __stdcall put_DiskLightRadius(double iDiskLightRadius); \
      virtual HRESULT __stdcall get_SphereLightRadius(double & oSphereLightRadius); \
      virtual HRESULT __stdcall put_SphereLightRadius(double iSphereLightRadius); \
      virtual HRESULT __stdcall get_CylinderLightRadius(double & oCylinderLightRadius); \
      virtual HRESULT __stdcall put_CylinderLightRadius(double iCylinderLightRadius); \
      virtual HRESULT __stdcall get_CylinderLightHeight(double & oCylinderLightHeight); \
      virtual HRESULT __stdcall put_CylinderLightHeight(double iCylinderLightHeight); \
      virtual HRESULT __stdcall get_AreaSamplesU(short & oAreaSamplesU); \
      virtual HRESULT __stdcall put_AreaSamplesU(short iAreaSamplesU); \
      virtual HRESULT __stdcall get_AreaSamplesV(short & oAreaSamplesV); \
      virtual HRESULT __stdcall put_AreaSamplesV(short iAreaSamplesV); \
      virtual HRESULT __stdcall get_IlluminationStatus(short & oIlluminationStatus); \
      virtual HRESULT __stdcall put_IlluminationStatus(short iIlluminationStatus); \
      virtual HRESULT __stdcall get_FalloffExponent(short & oFalloffExponent); \
      virtual HRESULT __stdcall put_FalloffExponent(short iFalloffExponent); \
      virtual HRESULT __stdcall get_EnergyFactor(double & oEnergyFactor); \
      virtual HRESULT __stdcall put_EnergyFactor(double iEnergyFactor); \
      virtual HRESULT __stdcall get_CausticPhotonsNumber(CATLONG & oCausticPhotonsNumber); \
      virtual HRESULT __stdcall put_CausticPhotonsNumber(CATLONG iCausticPhotonsNumber); \
      virtual HRESULT __stdcall get_GlobalPhotonsNumber(CATLONG & oGlobalPhotonsNumber); \
      virtual HRESULT __stdcall put_GlobalPhotonsNumber(CATLONG iGlobalPhotonsNumber); \
      virtual HRESULT  __stdcall get_Application(CATIAApplication *& oApplication); \
      virtual HRESULT  __stdcall get_Parent(CATBaseDispatch *& oParent); \
      virtual HRESULT  __stdcall get_Name(CATBSTR & oNameBSTR); \
      virtual HRESULT  __stdcall put_Name(const CATBSTR & iNameBSTR); \
      virtual HRESULT  __stdcall GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj); \
};



#define ENVTIEdeclare_CATIARenderingLight(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
virtual HRESULT __stdcall get_Type(short & oType); \
virtual HRESULT __stdcall put_Type(short iType); \
virtual HRESULT __stdcall get_Mode(short & oMode); \
virtual HRESULT __stdcall put_Mode(short iMode); \
virtual HRESULT __stdcall GetOrigin(CATSafeArrayVariant & oOrigin); \
virtual HRESULT __stdcall PutOrigin(const CATSafeArrayVariant & iOrigin); \
virtual HRESULT __stdcall GetTarget(CATSafeArrayVariant & oTarget); \
virtual HRESULT __stdcall PutTarget(const CATSafeArrayVariant & iTarget); \
virtual HRESULT __stdcall GetColor(CATSafeArrayVariant & oColor); \
virtual HRESULT __stdcall PutColor(const CATSafeArrayVariant & iColor); \
virtual HRESULT __stdcall get_Intensity(double & oIntensity); \
virtual HRESULT __stdcall put_Intensity(double iIntensity); \
virtual HRESULT __stdcall get_Ambient(double & oAmbient); \
virtual HRESULT __stdcall put_Ambient(double iAmbient); \
virtual HRESULT __stdcall get_Diffuse(double & oDiffuse); \
virtual HRESULT __stdcall put_Diffuse(double iDiffuse); \
virtual HRESULT __stdcall get_Specular(double & oSpecular); \
virtual HRESULT __stdcall put_Specular(double iSpecular); \
virtual HRESULT __stdcall get_Angle(double & oAngle); \
virtual HRESULT __stdcall put_Angle(double iAngle); \
virtual HRESULT __stdcall get_EndDistance(double & oEndDistance); \
virtual HRESULT __stdcall put_EndDistance(double iEndDistance); \
virtual HRESULT __stdcall get_AttenuationStartRatio(double & oAttenuationStartRatio); \
virtual HRESULT __stdcall put_AttenuationStartRatio(double iAttenuationStartRatio); \
virtual HRESULT __stdcall get_AttenuationAngleRatio(double & oAttenuationAngleRatio); \
virtual HRESULT __stdcall put_AttenuationAngleRatio(double iAttenuationAngleRatio); \
virtual HRESULT __stdcall get_ShadowStatus(short & oShadowStatus); \
virtual HRESULT __stdcall put_ShadowStatus(short iShadowStatus); \
virtual HRESULT __stdcall get_HardwareShadowStatus(short & oHardwareShadowStatus); \
virtual HRESULT __stdcall put_HardwareShadowStatus(short iHardwareShadowStatus); \
virtual HRESULT __stdcall get_HardwareShadowSmoothing(short & oHardwareShadowSmoothing); \
virtual HRESULT __stdcall put_HardwareShadowSmoothing(short iHardwareShadowSmoothing); \
virtual HRESULT __stdcall GetShadowColor(CATSafeArrayVariant & oShadowColor); \
virtual HRESULT __stdcall PutShadowColor(const CATSafeArrayVariant & iShadowColor); \
virtual HRESULT __stdcall get_HardwareShadowTransparency(double & oHardwareShadowTransparency); \
virtual HRESULT __stdcall put_HardwareShadowTransparency(double iHardwareShadowTransparency); \
virtual HRESULT __stdcall get_ShadowObjectStatus(short & oShadowObjectStatus); \
virtual HRESULT __stdcall put_ShadowObjectStatus(short iShadowObjectStatus); \
virtual HRESULT __stdcall get_ShadowMapSize(short & oShadowMapSize); \
virtual HRESULT __stdcall put_ShadowMapSize(short iShadowMapSize); \
virtual HRESULT __stdcall get_ShadowFittingMode(short & oShadowFittingMode); \
virtual HRESULT __stdcall put_ShadowFittingMode(short iShadowFittingMode); \
virtual HRESULT __stdcall get_ActiveStatus(short & oActiveStatus); \
virtual HRESULT __stdcall put_ActiveStatus(short iActiveStatus); \
virtual HRESULT __stdcall get_LightAreaType(short & oLightAreaType); \
virtual HRESULT __stdcall put_LightAreaType(short iLightAreaType); \
virtual HRESULT __stdcall get_AreaStatus(short & oAreaStatus); \
virtual HRESULT __stdcall put_AreaStatus(short iAreaStatus); \
virtual HRESULT __stdcall get_RectangleLightLength(double & oRectangleLightLength); \
virtual HRESULT __stdcall put_RectangleLightLength(double iRectangleLightLength); \
virtual HRESULT __stdcall get_RectangleLightWidth(double & oRectangleLightWidth); \
virtual HRESULT __stdcall put_RectangleLightWidth(double iRectangleLightWidth); \
virtual HRESULT __stdcall get_DiskLightRadius(double & oDiskLightRadius); \
virtual HRESULT __stdcall put_DiskLightRadius(double iDiskLightRadius); \
virtual HRESULT __stdcall get_SphereLightRadius(double & oSphereLightRadius); \
virtual HRESULT __stdcall put_SphereLightRadius(double iSphereLightRadius); \
virtual HRESULT __stdcall get_CylinderLightRadius(double & oCylinderLightRadius); \
virtual HRESULT __stdcall put_CylinderLightRadius(double iCylinderLightRadius); \
virtual HRESULT __stdcall get_CylinderLightHeight(double & oCylinderLightHeight); \
virtual HRESULT __stdcall put_CylinderLightHeight(double iCylinderLightHeight); \
virtual HRESULT __stdcall get_AreaSamplesU(short & oAreaSamplesU); \
virtual HRESULT __stdcall put_AreaSamplesU(short iAreaSamplesU); \
virtual HRESULT __stdcall get_AreaSamplesV(short & oAreaSamplesV); \
virtual HRESULT __stdcall put_AreaSamplesV(short iAreaSamplesV); \
virtual HRESULT __stdcall get_IlluminationStatus(short & oIlluminationStatus); \
virtual HRESULT __stdcall put_IlluminationStatus(short iIlluminationStatus); \
virtual HRESULT __stdcall get_FalloffExponent(short & oFalloffExponent); \
virtual HRESULT __stdcall put_FalloffExponent(short iFalloffExponent); \
virtual HRESULT __stdcall get_EnergyFactor(double & oEnergyFactor); \
virtual HRESULT __stdcall put_EnergyFactor(double iEnergyFactor); \
virtual HRESULT __stdcall get_CausticPhotonsNumber(CATLONG & oCausticPhotonsNumber); \
virtual HRESULT __stdcall put_CausticPhotonsNumber(CATLONG iCausticPhotonsNumber); \
virtual HRESULT __stdcall get_GlobalPhotonsNumber(CATLONG & oGlobalPhotonsNumber); \
virtual HRESULT __stdcall put_GlobalPhotonsNumber(CATLONG iGlobalPhotonsNumber); \
virtual HRESULT  __stdcall get_Application(CATIAApplication *& oApplication); \
virtual HRESULT  __stdcall get_Parent(CATBaseDispatch *& oParent); \
virtual HRESULT  __stdcall get_Name(CATBSTR & oNameBSTR); \
virtual HRESULT  __stdcall put_Name(const CATBSTR & iNameBSTR); \
virtual HRESULT  __stdcall GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj); \


#define ENVTIEdefine_CATIARenderingLight(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
HRESULT __stdcall  ENVTIEName::get_Type(short & oType) \
{ \
return (ENVTIECALL(CATIARenderingLight,ENVTIETypeLetter,ENVTIELetter)get_Type(oType)); \
} \
HRESULT __stdcall  ENVTIEName::put_Type(short iType) \
{ \
return (ENVTIECALL(CATIARenderingLight,ENVTIETypeLetter,ENVTIELetter)put_Type(iType)); \
} \
HRESULT __stdcall  ENVTIEName::get_Mode(short & oMode) \
{ \
return (ENVTIECALL(CATIARenderingLight,ENVTIETypeLetter,ENVTIELetter)get_Mode(oMode)); \
} \
HRESULT __stdcall  ENVTIEName::put_Mode(short iMode) \
{ \
return (ENVTIECALL(CATIARenderingLight,ENVTIETypeLetter,ENVTIELetter)put_Mode(iMode)); \
} \
HRESULT __stdcall  ENVTIEName::GetOrigin(CATSafeArrayVariant & oOrigin) \
{ \
return (ENVTIECALL(CATIARenderingLight,ENVTIETypeLetter,ENVTIELetter)GetOrigin(oOrigin)); \
} \
HRESULT __stdcall  ENVTIEName::PutOrigin(const CATSafeArrayVariant & iOrigin) \
{ \
return (ENVTIECALL(CATIARenderingLight,ENVTIETypeLetter,ENVTIELetter)PutOrigin(iOrigin)); \
} \
HRESULT __stdcall  ENVTIEName::GetTarget(CATSafeArrayVariant & oTarget) \
{ \
return (ENVTIECALL(CATIARenderingLight,ENVTIETypeLetter,ENVTIELetter)GetTarget(oTarget)); \
} \
HRESULT __stdcall  ENVTIEName::PutTarget(const CATSafeArrayVariant & iTarget) \
{ \
return (ENVTIECALL(CATIARenderingLight,ENVTIETypeLetter,ENVTIELetter)PutTarget(iTarget)); \
} \
HRESULT __stdcall  ENVTIEName::GetColor(CATSafeArrayVariant & oColor) \
{ \
return (ENVTIECALL(CATIARenderingLight,ENVTIETypeLetter,ENVTIELetter)GetColor(oColor)); \
} \
HRESULT __stdcall  ENVTIEName::PutColor(const CATSafeArrayVariant & iColor) \
{ \
return (ENVTIECALL(CATIARenderingLight,ENVTIETypeLetter,ENVTIELetter)PutColor(iColor)); \
} \
HRESULT __stdcall  ENVTIEName::get_Intensity(double & oIntensity) \
{ \
return (ENVTIECALL(CATIARenderingLight,ENVTIETypeLetter,ENVTIELetter)get_Intensity(oIntensity)); \
} \
HRESULT __stdcall  ENVTIEName::put_Intensity(double iIntensity) \
{ \
return (ENVTIECALL(CATIARenderingLight,ENVTIETypeLetter,ENVTIELetter)put_Intensity(iIntensity)); \
} \
HRESULT __stdcall  ENVTIEName::get_Ambient(double & oAmbient) \
{ \
return (ENVTIECALL(CATIARenderingLight,ENVTIETypeLetter,ENVTIELetter)get_Ambient(oAmbient)); \
} \
HRESULT __stdcall  ENVTIEName::put_Ambient(double iAmbient) \
{ \
return (ENVTIECALL(CATIARenderingLight,ENVTIETypeLetter,ENVTIELetter)put_Ambient(iAmbient)); \
} \
HRESULT __stdcall  ENVTIEName::get_Diffuse(double & oDiffuse) \
{ \
return (ENVTIECALL(CATIARenderingLight,ENVTIETypeLetter,ENVTIELetter)get_Diffuse(oDiffuse)); \
} \
HRESULT __stdcall  ENVTIEName::put_Diffuse(double iDiffuse) \
{ \
return (ENVTIECALL(CATIARenderingLight,ENVTIETypeLetter,ENVTIELetter)put_Diffuse(iDiffuse)); \
} \
HRESULT __stdcall  ENVTIEName::get_Specular(double & oSpecular) \
{ \
return (ENVTIECALL(CATIARenderingLight,ENVTIETypeLetter,ENVTIELetter)get_Specular(oSpecular)); \
} \
HRESULT __stdcall  ENVTIEName::put_Specular(double iSpecular) \
{ \
return (ENVTIECALL(CATIARenderingLight,ENVTIETypeLetter,ENVTIELetter)put_Specular(iSpecular)); \
} \
HRESULT __stdcall  ENVTIEName::get_Angle(double & oAngle) \
{ \
return (ENVTIECALL(CATIARenderingLight,ENVTIETypeLetter,ENVTIELetter)get_Angle(oAngle)); \
} \
HRESULT __stdcall  ENVTIEName::put_Angle(double iAngle) \
{ \
return (ENVTIECALL(CATIARenderingLight,ENVTIETypeLetter,ENVTIELetter)put_Angle(iAngle)); \
} \
HRESULT __stdcall  ENVTIEName::get_EndDistance(double & oEndDistance) \
{ \
return (ENVTIECALL(CATIARenderingLight,ENVTIETypeLetter,ENVTIELetter)get_EndDistance(oEndDistance)); \
} \
HRESULT __stdcall  ENVTIEName::put_EndDistance(double iEndDistance) \
{ \
return (ENVTIECALL(CATIARenderingLight,ENVTIETypeLetter,ENVTIELetter)put_EndDistance(iEndDistance)); \
} \
HRESULT __stdcall  ENVTIEName::get_AttenuationStartRatio(double & oAttenuationStartRatio) \
{ \
return (ENVTIECALL(CATIARenderingLight,ENVTIETypeLetter,ENVTIELetter)get_AttenuationStartRatio(oAttenuationStartRatio)); \
} \
HRESULT __stdcall  ENVTIEName::put_AttenuationStartRatio(double iAttenuationStartRatio) \
{ \
return (ENVTIECALL(CATIARenderingLight,ENVTIETypeLetter,ENVTIELetter)put_AttenuationStartRatio(iAttenuationStartRatio)); \
} \
HRESULT __stdcall  ENVTIEName::get_AttenuationAngleRatio(double & oAttenuationAngleRatio) \
{ \
return (ENVTIECALL(CATIARenderingLight,ENVTIETypeLetter,ENVTIELetter)get_AttenuationAngleRatio(oAttenuationAngleRatio)); \
} \
HRESULT __stdcall  ENVTIEName::put_AttenuationAngleRatio(double iAttenuationAngleRatio) \
{ \
return (ENVTIECALL(CATIARenderingLight,ENVTIETypeLetter,ENVTIELetter)put_AttenuationAngleRatio(iAttenuationAngleRatio)); \
} \
HRESULT __stdcall  ENVTIEName::get_ShadowStatus(short & oShadowStatus) \
{ \
return (ENVTIECALL(CATIARenderingLight,ENVTIETypeLetter,ENVTIELetter)get_ShadowStatus(oShadowStatus)); \
} \
HRESULT __stdcall  ENVTIEName::put_ShadowStatus(short iShadowStatus) \
{ \
return (ENVTIECALL(CATIARenderingLight,ENVTIETypeLetter,ENVTIELetter)put_ShadowStatus(iShadowStatus)); \
} \
HRESULT __stdcall  ENVTIEName::get_HardwareShadowStatus(short & oHardwareShadowStatus) \
{ \
return (ENVTIECALL(CATIARenderingLight,ENVTIETypeLetter,ENVTIELetter)get_HardwareShadowStatus(oHardwareShadowStatus)); \
} \
HRESULT __stdcall  ENVTIEName::put_HardwareShadowStatus(short iHardwareShadowStatus) \
{ \
return (ENVTIECALL(CATIARenderingLight,ENVTIETypeLetter,ENVTIELetter)put_HardwareShadowStatus(iHardwareShadowStatus)); \
} \
HRESULT __stdcall  ENVTIEName::get_HardwareShadowSmoothing(short & oHardwareShadowSmoothing) \
{ \
return (ENVTIECALL(CATIARenderingLight,ENVTIETypeLetter,ENVTIELetter)get_HardwareShadowSmoothing(oHardwareShadowSmoothing)); \
} \
HRESULT __stdcall  ENVTIEName::put_HardwareShadowSmoothing(short iHardwareShadowSmoothing) \
{ \
return (ENVTIECALL(CATIARenderingLight,ENVTIETypeLetter,ENVTIELetter)put_HardwareShadowSmoothing(iHardwareShadowSmoothing)); \
} \
HRESULT __stdcall  ENVTIEName::GetShadowColor(CATSafeArrayVariant & oShadowColor) \
{ \
return (ENVTIECALL(CATIARenderingLight,ENVTIETypeLetter,ENVTIELetter)GetShadowColor(oShadowColor)); \
} \
HRESULT __stdcall  ENVTIEName::PutShadowColor(const CATSafeArrayVariant & iShadowColor) \
{ \
return (ENVTIECALL(CATIARenderingLight,ENVTIETypeLetter,ENVTIELetter)PutShadowColor(iShadowColor)); \
} \
HRESULT __stdcall  ENVTIEName::get_HardwareShadowTransparency(double & oHardwareShadowTransparency) \
{ \
return (ENVTIECALL(CATIARenderingLight,ENVTIETypeLetter,ENVTIELetter)get_HardwareShadowTransparency(oHardwareShadowTransparency)); \
} \
HRESULT __stdcall  ENVTIEName::put_HardwareShadowTransparency(double iHardwareShadowTransparency) \
{ \
return (ENVTIECALL(CATIARenderingLight,ENVTIETypeLetter,ENVTIELetter)put_HardwareShadowTransparency(iHardwareShadowTransparency)); \
} \
HRESULT __stdcall  ENVTIEName::get_ShadowObjectStatus(short & oShadowObjectStatus) \
{ \
return (ENVTIECALL(CATIARenderingLight,ENVTIETypeLetter,ENVTIELetter)get_ShadowObjectStatus(oShadowObjectStatus)); \
} \
HRESULT __stdcall  ENVTIEName::put_ShadowObjectStatus(short iShadowObjectStatus) \
{ \
return (ENVTIECALL(CATIARenderingLight,ENVTIETypeLetter,ENVTIELetter)put_ShadowObjectStatus(iShadowObjectStatus)); \
} \
HRESULT __stdcall  ENVTIEName::get_ShadowMapSize(short & oShadowMapSize) \
{ \
return (ENVTIECALL(CATIARenderingLight,ENVTIETypeLetter,ENVTIELetter)get_ShadowMapSize(oShadowMapSize)); \
} \
HRESULT __stdcall  ENVTIEName::put_ShadowMapSize(short iShadowMapSize) \
{ \
return (ENVTIECALL(CATIARenderingLight,ENVTIETypeLetter,ENVTIELetter)put_ShadowMapSize(iShadowMapSize)); \
} \
HRESULT __stdcall  ENVTIEName::get_ShadowFittingMode(short & oShadowFittingMode) \
{ \
return (ENVTIECALL(CATIARenderingLight,ENVTIETypeLetter,ENVTIELetter)get_ShadowFittingMode(oShadowFittingMode)); \
} \
HRESULT __stdcall  ENVTIEName::put_ShadowFittingMode(short iShadowFittingMode) \
{ \
return (ENVTIECALL(CATIARenderingLight,ENVTIETypeLetter,ENVTIELetter)put_ShadowFittingMode(iShadowFittingMode)); \
} \
HRESULT __stdcall  ENVTIEName::get_ActiveStatus(short & oActiveStatus) \
{ \
return (ENVTIECALL(CATIARenderingLight,ENVTIETypeLetter,ENVTIELetter)get_ActiveStatus(oActiveStatus)); \
} \
HRESULT __stdcall  ENVTIEName::put_ActiveStatus(short iActiveStatus) \
{ \
return (ENVTIECALL(CATIARenderingLight,ENVTIETypeLetter,ENVTIELetter)put_ActiveStatus(iActiveStatus)); \
} \
HRESULT __stdcall  ENVTIEName::get_LightAreaType(short & oLightAreaType) \
{ \
return (ENVTIECALL(CATIARenderingLight,ENVTIETypeLetter,ENVTIELetter)get_LightAreaType(oLightAreaType)); \
} \
HRESULT __stdcall  ENVTIEName::put_LightAreaType(short iLightAreaType) \
{ \
return (ENVTIECALL(CATIARenderingLight,ENVTIETypeLetter,ENVTIELetter)put_LightAreaType(iLightAreaType)); \
} \
HRESULT __stdcall  ENVTIEName::get_AreaStatus(short & oAreaStatus) \
{ \
return (ENVTIECALL(CATIARenderingLight,ENVTIETypeLetter,ENVTIELetter)get_AreaStatus(oAreaStatus)); \
} \
HRESULT __stdcall  ENVTIEName::put_AreaStatus(short iAreaStatus) \
{ \
return (ENVTIECALL(CATIARenderingLight,ENVTIETypeLetter,ENVTIELetter)put_AreaStatus(iAreaStatus)); \
} \
HRESULT __stdcall  ENVTIEName::get_RectangleLightLength(double & oRectangleLightLength) \
{ \
return (ENVTIECALL(CATIARenderingLight,ENVTIETypeLetter,ENVTIELetter)get_RectangleLightLength(oRectangleLightLength)); \
} \
HRESULT __stdcall  ENVTIEName::put_RectangleLightLength(double iRectangleLightLength) \
{ \
return (ENVTIECALL(CATIARenderingLight,ENVTIETypeLetter,ENVTIELetter)put_RectangleLightLength(iRectangleLightLength)); \
} \
HRESULT __stdcall  ENVTIEName::get_RectangleLightWidth(double & oRectangleLightWidth) \
{ \
return (ENVTIECALL(CATIARenderingLight,ENVTIETypeLetter,ENVTIELetter)get_RectangleLightWidth(oRectangleLightWidth)); \
} \
HRESULT __stdcall  ENVTIEName::put_RectangleLightWidth(double iRectangleLightWidth) \
{ \
return (ENVTIECALL(CATIARenderingLight,ENVTIETypeLetter,ENVTIELetter)put_RectangleLightWidth(iRectangleLightWidth)); \
} \
HRESULT __stdcall  ENVTIEName::get_DiskLightRadius(double & oDiskLightRadius) \
{ \
return (ENVTIECALL(CATIARenderingLight,ENVTIETypeLetter,ENVTIELetter)get_DiskLightRadius(oDiskLightRadius)); \
} \
HRESULT __stdcall  ENVTIEName::put_DiskLightRadius(double iDiskLightRadius) \
{ \
return (ENVTIECALL(CATIARenderingLight,ENVTIETypeLetter,ENVTIELetter)put_DiskLightRadius(iDiskLightRadius)); \
} \
HRESULT __stdcall  ENVTIEName::get_SphereLightRadius(double & oSphereLightRadius) \
{ \
return (ENVTIECALL(CATIARenderingLight,ENVTIETypeLetter,ENVTIELetter)get_SphereLightRadius(oSphereLightRadius)); \
} \
HRESULT __stdcall  ENVTIEName::put_SphereLightRadius(double iSphereLightRadius) \
{ \
return (ENVTIECALL(CATIARenderingLight,ENVTIETypeLetter,ENVTIELetter)put_SphereLightRadius(iSphereLightRadius)); \
} \
HRESULT __stdcall  ENVTIEName::get_CylinderLightRadius(double & oCylinderLightRadius) \
{ \
return (ENVTIECALL(CATIARenderingLight,ENVTIETypeLetter,ENVTIELetter)get_CylinderLightRadius(oCylinderLightRadius)); \
} \
HRESULT __stdcall  ENVTIEName::put_CylinderLightRadius(double iCylinderLightRadius) \
{ \
return (ENVTIECALL(CATIARenderingLight,ENVTIETypeLetter,ENVTIELetter)put_CylinderLightRadius(iCylinderLightRadius)); \
} \
HRESULT __stdcall  ENVTIEName::get_CylinderLightHeight(double & oCylinderLightHeight) \
{ \
return (ENVTIECALL(CATIARenderingLight,ENVTIETypeLetter,ENVTIELetter)get_CylinderLightHeight(oCylinderLightHeight)); \
} \
HRESULT __stdcall  ENVTIEName::put_CylinderLightHeight(double iCylinderLightHeight) \
{ \
return (ENVTIECALL(CATIARenderingLight,ENVTIETypeLetter,ENVTIELetter)put_CylinderLightHeight(iCylinderLightHeight)); \
} \
HRESULT __stdcall  ENVTIEName::get_AreaSamplesU(short & oAreaSamplesU) \
{ \
return (ENVTIECALL(CATIARenderingLight,ENVTIETypeLetter,ENVTIELetter)get_AreaSamplesU(oAreaSamplesU)); \
} \
HRESULT __stdcall  ENVTIEName::put_AreaSamplesU(short iAreaSamplesU) \
{ \
return (ENVTIECALL(CATIARenderingLight,ENVTIETypeLetter,ENVTIELetter)put_AreaSamplesU(iAreaSamplesU)); \
} \
HRESULT __stdcall  ENVTIEName::get_AreaSamplesV(short & oAreaSamplesV) \
{ \
return (ENVTIECALL(CATIARenderingLight,ENVTIETypeLetter,ENVTIELetter)get_AreaSamplesV(oAreaSamplesV)); \
} \
HRESULT __stdcall  ENVTIEName::put_AreaSamplesV(short iAreaSamplesV) \
{ \
return (ENVTIECALL(CATIARenderingLight,ENVTIETypeLetter,ENVTIELetter)put_AreaSamplesV(iAreaSamplesV)); \
} \
HRESULT __stdcall  ENVTIEName::get_IlluminationStatus(short & oIlluminationStatus) \
{ \
return (ENVTIECALL(CATIARenderingLight,ENVTIETypeLetter,ENVTIELetter)get_IlluminationStatus(oIlluminationStatus)); \
} \
HRESULT __stdcall  ENVTIEName::put_IlluminationStatus(short iIlluminationStatus) \
{ \
return (ENVTIECALL(CATIARenderingLight,ENVTIETypeLetter,ENVTIELetter)put_IlluminationStatus(iIlluminationStatus)); \
} \
HRESULT __stdcall  ENVTIEName::get_FalloffExponent(short & oFalloffExponent) \
{ \
return (ENVTIECALL(CATIARenderingLight,ENVTIETypeLetter,ENVTIELetter)get_FalloffExponent(oFalloffExponent)); \
} \
HRESULT __stdcall  ENVTIEName::put_FalloffExponent(short iFalloffExponent) \
{ \
return (ENVTIECALL(CATIARenderingLight,ENVTIETypeLetter,ENVTIELetter)put_FalloffExponent(iFalloffExponent)); \
} \
HRESULT __stdcall  ENVTIEName::get_EnergyFactor(double & oEnergyFactor) \
{ \
return (ENVTIECALL(CATIARenderingLight,ENVTIETypeLetter,ENVTIELetter)get_EnergyFactor(oEnergyFactor)); \
} \
HRESULT __stdcall  ENVTIEName::put_EnergyFactor(double iEnergyFactor) \
{ \
return (ENVTIECALL(CATIARenderingLight,ENVTIETypeLetter,ENVTIELetter)put_EnergyFactor(iEnergyFactor)); \
} \
HRESULT __stdcall  ENVTIEName::get_CausticPhotonsNumber(CATLONG & oCausticPhotonsNumber) \
{ \
return (ENVTIECALL(CATIARenderingLight,ENVTIETypeLetter,ENVTIELetter)get_CausticPhotonsNumber(oCausticPhotonsNumber)); \
} \
HRESULT __stdcall  ENVTIEName::put_CausticPhotonsNumber(CATLONG iCausticPhotonsNumber) \
{ \
return (ENVTIECALL(CATIARenderingLight,ENVTIETypeLetter,ENVTIELetter)put_CausticPhotonsNumber(iCausticPhotonsNumber)); \
} \
HRESULT __stdcall  ENVTIEName::get_GlobalPhotonsNumber(CATLONG & oGlobalPhotonsNumber) \
{ \
return (ENVTIECALL(CATIARenderingLight,ENVTIETypeLetter,ENVTIELetter)get_GlobalPhotonsNumber(oGlobalPhotonsNumber)); \
} \
HRESULT __stdcall  ENVTIEName::put_GlobalPhotonsNumber(CATLONG iGlobalPhotonsNumber) \
{ \
return (ENVTIECALL(CATIARenderingLight,ENVTIETypeLetter,ENVTIELetter)put_GlobalPhotonsNumber(iGlobalPhotonsNumber)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Application(CATIAApplication *& oApplication) \
{ \
return (ENVTIECALL(CATIARenderingLight,ENVTIETypeLetter,ENVTIELetter)get_Application(oApplication)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Parent(CATBaseDispatch *& oParent) \
{ \
return (ENVTIECALL(CATIARenderingLight,ENVTIETypeLetter,ENVTIELetter)get_Parent(oParent)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Name(CATBSTR & oNameBSTR) \
{ \
return (ENVTIECALL(CATIARenderingLight,ENVTIETypeLetter,ENVTIELetter)get_Name(oNameBSTR)); \
} \
HRESULT  __stdcall  ENVTIEName::put_Name(const CATBSTR & iNameBSTR) \
{ \
return (ENVTIECALL(CATIARenderingLight,ENVTIETypeLetter,ENVTIELetter)put_Name(iNameBSTR)); \
} \
HRESULT  __stdcall  ENVTIEName::GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj) \
{ \
return (ENVTIECALL(CATIARenderingLight,ENVTIETypeLetter,ENVTIELetter)GetItem(IDName,RealObj)); \
} \


/* Name of the TIE class */
#define class_TIE_CATIARenderingLight(classe)    TIECATIARenderingLight##classe


/* Common methods inside a TIE */
#define common_TIE_CATIARenderingLight(classe) \
 \
 \
/* Static initialization */ \
CATDefineCommonTIEMembers(CATIARenderingLight, classe) \
 \
 \
CATImplementTIEMethods(CATIARenderingLight, classe) \
CATImplementIUnknownMethodsForCATBaseUnknownTIE(CATIARenderingLight, classe, 2) \
CATImplementIDispatchMethodsForCATBaseUnknownTIE(CATIARenderingLight, classe) \
CATImplementCATBaseUnknownMethodsForTIE(CATIARenderingLight, classe) \
 \
HRESULT __stdcall  TIECATIARenderingLight##classe::get_Type(short & oType) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,1,&_Trac2,&oType); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Type(oType); \
   ExitAfterCall(this,1,_Trac2,&_ret_arg,&oType); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIARenderingLight##classe::put_Type(short iType) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,2,&_Trac2,&iType); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_Type(iType); \
   ExitAfterCall(this,2,_Trac2,&_ret_arg,&iType); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIARenderingLight##classe::get_Mode(short & oMode) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,3,&_Trac2,&oMode); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Mode(oMode); \
   ExitAfterCall(this,3,_Trac2,&_ret_arg,&oMode); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIARenderingLight##classe::put_Mode(short iMode) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,4,&_Trac2,&iMode); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_Mode(iMode); \
   ExitAfterCall(this,4,_Trac2,&_ret_arg,&iMode); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIARenderingLight##classe::GetOrigin(CATSafeArrayVariant & oOrigin) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,5,&_Trac2,&oOrigin); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetOrigin(oOrigin); \
   ExitAfterCall(this,5,_Trac2,&_ret_arg,&oOrigin); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIARenderingLight##classe::PutOrigin(const CATSafeArrayVariant & iOrigin) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,6,&_Trac2,&iOrigin); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->PutOrigin(iOrigin); \
   ExitAfterCall(this,6,_Trac2,&_ret_arg,&iOrigin); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIARenderingLight##classe::GetTarget(CATSafeArrayVariant & oTarget) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,7,&_Trac2,&oTarget); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetTarget(oTarget); \
   ExitAfterCall(this,7,_Trac2,&_ret_arg,&oTarget); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIARenderingLight##classe::PutTarget(const CATSafeArrayVariant & iTarget) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,8,&_Trac2,&iTarget); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->PutTarget(iTarget); \
   ExitAfterCall(this,8,_Trac2,&_ret_arg,&iTarget); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIARenderingLight##classe::GetColor(CATSafeArrayVariant & oColor) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,9,&_Trac2,&oColor); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetColor(oColor); \
   ExitAfterCall(this,9,_Trac2,&_ret_arg,&oColor); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIARenderingLight##classe::PutColor(const CATSafeArrayVariant & iColor) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,10,&_Trac2,&iColor); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->PutColor(iColor); \
   ExitAfterCall(this,10,_Trac2,&_ret_arg,&iColor); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIARenderingLight##classe::get_Intensity(double & oIntensity) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,11,&_Trac2,&oIntensity); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Intensity(oIntensity); \
   ExitAfterCall(this,11,_Trac2,&_ret_arg,&oIntensity); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIARenderingLight##classe::put_Intensity(double iIntensity) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,12,&_Trac2,&iIntensity); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_Intensity(iIntensity); \
   ExitAfterCall(this,12,_Trac2,&_ret_arg,&iIntensity); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIARenderingLight##classe::get_Ambient(double & oAmbient) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,13,&_Trac2,&oAmbient); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Ambient(oAmbient); \
   ExitAfterCall(this,13,_Trac2,&_ret_arg,&oAmbient); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIARenderingLight##classe::put_Ambient(double iAmbient) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,14,&_Trac2,&iAmbient); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_Ambient(iAmbient); \
   ExitAfterCall(this,14,_Trac2,&_ret_arg,&iAmbient); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIARenderingLight##classe::get_Diffuse(double & oDiffuse) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,15,&_Trac2,&oDiffuse); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Diffuse(oDiffuse); \
   ExitAfterCall(this,15,_Trac2,&_ret_arg,&oDiffuse); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIARenderingLight##classe::put_Diffuse(double iDiffuse) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,16,&_Trac2,&iDiffuse); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_Diffuse(iDiffuse); \
   ExitAfterCall(this,16,_Trac2,&_ret_arg,&iDiffuse); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIARenderingLight##classe::get_Specular(double & oSpecular) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,17,&_Trac2,&oSpecular); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Specular(oSpecular); \
   ExitAfterCall(this,17,_Trac2,&_ret_arg,&oSpecular); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIARenderingLight##classe::put_Specular(double iSpecular) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,18,&_Trac2,&iSpecular); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_Specular(iSpecular); \
   ExitAfterCall(this,18,_Trac2,&_ret_arg,&iSpecular); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIARenderingLight##classe::get_Angle(double & oAngle) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,19,&_Trac2,&oAngle); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Angle(oAngle); \
   ExitAfterCall(this,19,_Trac2,&_ret_arg,&oAngle); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIARenderingLight##classe::put_Angle(double iAngle) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,20,&_Trac2,&iAngle); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_Angle(iAngle); \
   ExitAfterCall(this,20,_Trac2,&_ret_arg,&iAngle); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIARenderingLight##classe::get_EndDistance(double & oEndDistance) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,21,&_Trac2,&oEndDistance); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_EndDistance(oEndDistance); \
   ExitAfterCall(this,21,_Trac2,&_ret_arg,&oEndDistance); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIARenderingLight##classe::put_EndDistance(double iEndDistance) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,22,&_Trac2,&iEndDistance); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_EndDistance(iEndDistance); \
   ExitAfterCall(this,22,_Trac2,&_ret_arg,&iEndDistance); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIARenderingLight##classe::get_AttenuationStartRatio(double & oAttenuationStartRatio) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,23,&_Trac2,&oAttenuationStartRatio); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_AttenuationStartRatio(oAttenuationStartRatio); \
   ExitAfterCall(this,23,_Trac2,&_ret_arg,&oAttenuationStartRatio); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIARenderingLight##classe::put_AttenuationStartRatio(double iAttenuationStartRatio) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,24,&_Trac2,&iAttenuationStartRatio); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_AttenuationStartRatio(iAttenuationStartRatio); \
   ExitAfterCall(this,24,_Trac2,&_ret_arg,&iAttenuationStartRatio); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIARenderingLight##classe::get_AttenuationAngleRatio(double & oAttenuationAngleRatio) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,25,&_Trac2,&oAttenuationAngleRatio); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_AttenuationAngleRatio(oAttenuationAngleRatio); \
   ExitAfterCall(this,25,_Trac2,&_ret_arg,&oAttenuationAngleRatio); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIARenderingLight##classe::put_AttenuationAngleRatio(double iAttenuationAngleRatio) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,26,&_Trac2,&iAttenuationAngleRatio); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_AttenuationAngleRatio(iAttenuationAngleRatio); \
   ExitAfterCall(this,26,_Trac2,&_ret_arg,&iAttenuationAngleRatio); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIARenderingLight##classe::get_ShadowStatus(short & oShadowStatus) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,27,&_Trac2,&oShadowStatus); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_ShadowStatus(oShadowStatus); \
   ExitAfterCall(this,27,_Trac2,&_ret_arg,&oShadowStatus); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIARenderingLight##classe::put_ShadowStatus(short iShadowStatus) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,28,&_Trac2,&iShadowStatus); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_ShadowStatus(iShadowStatus); \
   ExitAfterCall(this,28,_Trac2,&_ret_arg,&iShadowStatus); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIARenderingLight##classe::get_HardwareShadowStatus(short & oHardwareShadowStatus) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,29,&_Trac2,&oHardwareShadowStatus); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_HardwareShadowStatus(oHardwareShadowStatus); \
   ExitAfterCall(this,29,_Trac2,&_ret_arg,&oHardwareShadowStatus); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIARenderingLight##classe::put_HardwareShadowStatus(short iHardwareShadowStatus) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,30,&_Trac2,&iHardwareShadowStatus); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_HardwareShadowStatus(iHardwareShadowStatus); \
   ExitAfterCall(this,30,_Trac2,&_ret_arg,&iHardwareShadowStatus); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIARenderingLight##classe::get_HardwareShadowSmoothing(short & oHardwareShadowSmoothing) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,31,&_Trac2,&oHardwareShadowSmoothing); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_HardwareShadowSmoothing(oHardwareShadowSmoothing); \
   ExitAfterCall(this,31,_Trac2,&_ret_arg,&oHardwareShadowSmoothing); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIARenderingLight##classe::put_HardwareShadowSmoothing(short iHardwareShadowSmoothing) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,32,&_Trac2,&iHardwareShadowSmoothing); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_HardwareShadowSmoothing(iHardwareShadowSmoothing); \
   ExitAfterCall(this,32,_Trac2,&_ret_arg,&iHardwareShadowSmoothing); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIARenderingLight##classe::GetShadowColor(CATSafeArrayVariant & oShadowColor) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,33,&_Trac2,&oShadowColor); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetShadowColor(oShadowColor); \
   ExitAfterCall(this,33,_Trac2,&_ret_arg,&oShadowColor); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIARenderingLight##classe::PutShadowColor(const CATSafeArrayVariant & iShadowColor) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,34,&_Trac2,&iShadowColor); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->PutShadowColor(iShadowColor); \
   ExitAfterCall(this,34,_Trac2,&_ret_arg,&iShadowColor); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIARenderingLight##classe::get_HardwareShadowTransparency(double & oHardwareShadowTransparency) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,35,&_Trac2,&oHardwareShadowTransparency); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_HardwareShadowTransparency(oHardwareShadowTransparency); \
   ExitAfterCall(this,35,_Trac2,&_ret_arg,&oHardwareShadowTransparency); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIARenderingLight##classe::put_HardwareShadowTransparency(double iHardwareShadowTransparency) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,36,&_Trac2,&iHardwareShadowTransparency); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_HardwareShadowTransparency(iHardwareShadowTransparency); \
   ExitAfterCall(this,36,_Trac2,&_ret_arg,&iHardwareShadowTransparency); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIARenderingLight##classe::get_ShadowObjectStatus(short & oShadowObjectStatus) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,37,&_Trac2,&oShadowObjectStatus); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_ShadowObjectStatus(oShadowObjectStatus); \
   ExitAfterCall(this,37,_Trac2,&_ret_arg,&oShadowObjectStatus); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIARenderingLight##classe::put_ShadowObjectStatus(short iShadowObjectStatus) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,38,&_Trac2,&iShadowObjectStatus); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_ShadowObjectStatus(iShadowObjectStatus); \
   ExitAfterCall(this,38,_Trac2,&_ret_arg,&iShadowObjectStatus); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIARenderingLight##classe::get_ShadowMapSize(short & oShadowMapSize) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,39,&_Trac2,&oShadowMapSize); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_ShadowMapSize(oShadowMapSize); \
   ExitAfterCall(this,39,_Trac2,&_ret_arg,&oShadowMapSize); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIARenderingLight##classe::put_ShadowMapSize(short iShadowMapSize) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,40,&_Trac2,&iShadowMapSize); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_ShadowMapSize(iShadowMapSize); \
   ExitAfterCall(this,40,_Trac2,&_ret_arg,&iShadowMapSize); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIARenderingLight##classe::get_ShadowFittingMode(short & oShadowFittingMode) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,41,&_Trac2,&oShadowFittingMode); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_ShadowFittingMode(oShadowFittingMode); \
   ExitAfterCall(this,41,_Trac2,&_ret_arg,&oShadowFittingMode); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIARenderingLight##classe::put_ShadowFittingMode(short iShadowFittingMode) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,42,&_Trac2,&iShadowFittingMode); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_ShadowFittingMode(iShadowFittingMode); \
   ExitAfterCall(this,42,_Trac2,&_ret_arg,&iShadowFittingMode); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIARenderingLight##classe::get_ActiveStatus(short & oActiveStatus) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,43,&_Trac2,&oActiveStatus); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_ActiveStatus(oActiveStatus); \
   ExitAfterCall(this,43,_Trac2,&_ret_arg,&oActiveStatus); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIARenderingLight##classe::put_ActiveStatus(short iActiveStatus) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,44,&_Trac2,&iActiveStatus); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_ActiveStatus(iActiveStatus); \
   ExitAfterCall(this,44,_Trac2,&_ret_arg,&iActiveStatus); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIARenderingLight##classe::get_LightAreaType(short & oLightAreaType) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,45,&_Trac2,&oLightAreaType); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_LightAreaType(oLightAreaType); \
   ExitAfterCall(this,45,_Trac2,&_ret_arg,&oLightAreaType); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIARenderingLight##classe::put_LightAreaType(short iLightAreaType) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,46,&_Trac2,&iLightAreaType); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_LightAreaType(iLightAreaType); \
   ExitAfterCall(this,46,_Trac2,&_ret_arg,&iLightAreaType); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIARenderingLight##classe::get_AreaStatus(short & oAreaStatus) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,47,&_Trac2,&oAreaStatus); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_AreaStatus(oAreaStatus); \
   ExitAfterCall(this,47,_Trac2,&_ret_arg,&oAreaStatus); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIARenderingLight##classe::put_AreaStatus(short iAreaStatus) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,48,&_Trac2,&iAreaStatus); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_AreaStatus(iAreaStatus); \
   ExitAfterCall(this,48,_Trac2,&_ret_arg,&iAreaStatus); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIARenderingLight##classe::get_RectangleLightLength(double & oRectangleLightLength) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,49,&_Trac2,&oRectangleLightLength); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_RectangleLightLength(oRectangleLightLength); \
   ExitAfterCall(this,49,_Trac2,&_ret_arg,&oRectangleLightLength); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIARenderingLight##classe::put_RectangleLightLength(double iRectangleLightLength) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,50,&_Trac2,&iRectangleLightLength); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_RectangleLightLength(iRectangleLightLength); \
   ExitAfterCall(this,50,_Trac2,&_ret_arg,&iRectangleLightLength); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIARenderingLight##classe::get_RectangleLightWidth(double & oRectangleLightWidth) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,51,&_Trac2,&oRectangleLightWidth); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_RectangleLightWidth(oRectangleLightWidth); \
   ExitAfterCall(this,51,_Trac2,&_ret_arg,&oRectangleLightWidth); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIARenderingLight##classe::put_RectangleLightWidth(double iRectangleLightWidth) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,52,&_Trac2,&iRectangleLightWidth); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_RectangleLightWidth(iRectangleLightWidth); \
   ExitAfterCall(this,52,_Trac2,&_ret_arg,&iRectangleLightWidth); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIARenderingLight##classe::get_DiskLightRadius(double & oDiskLightRadius) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,53,&_Trac2,&oDiskLightRadius); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_DiskLightRadius(oDiskLightRadius); \
   ExitAfterCall(this,53,_Trac2,&_ret_arg,&oDiskLightRadius); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIARenderingLight##classe::put_DiskLightRadius(double iDiskLightRadius) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,54,&_Trac2,&iDiskLightRadius); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_DiskLightRadius(iDiskLightRadius); \
   ExitAfterCall(this,54,_Trac2,&_ret_arg,&iDiskLightRadius); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIARenderingLight##classe::get_SphereLightRadius(double & oSphereLightRadius) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,55,&_Trac2,&oSphereLightRadius); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_SphereLightRadius(oSphereLightRadius); \
   ExitAfterCall(this,55,_Trac2,&_ret_arg,&oSphereLightRadius); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIARenderingLight##classe::put_SphereLightRadius(double iSphereLightRadius) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,56,&_Trac2,&iSphereLightRadius); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_SphereLightRadius(iSphereLightRadius); \
   ExitAfterCall(this,56,_Trac2,&_ret_arg,&iSphereLightRadius); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIARenderingLight##classe::get_CylinderLightRadius(double & oCylinderLightRadius) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,57,&_Trac2,&oCylinderLightRadius); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_CylinderLightRadius(oCylinderLightRadius); \
   ExitAfterCall(this,57,_Trac2,&_ret_arg,&oCylinderLightRadius); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIARenderingLight##classe::put_CylinderLightRadius(double iCylinderLightRadius) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,58,&_Trac2,&iCylinderLightRadius); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_CylinderLightRadius(iCylinderLightRadius); \
   ExitAfterCall(this,58,_Trac2,&_ret_arg,&iCylinderLightRadius); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIARenderingLight##classe::get_CylinderLightHeight(double & oCylinderLightHeight) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,59,&_Trac2,&oCylinderLightHeight); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_CylinderLightHeight(oCylinderLightHeight); \
   ExitAfterCall(this,59,_Trac2,&_ret_arg,&oCylinderLightHeight); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIARenderingLight##classe::put_CylinderLightHeight(double iCylinderLightHeight) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,60,&_Trac2,&iCylinderLightHeight); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_CylinderLightHeight(iCylinderLightHeight); \
   ExitAfterCall(this,60,_Trac2,&_ret_arg,&iCylinderLightHeight); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIARenderingLight##classe::get_AreaSamplesU(short & oAreaSamplesU) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,61,&_Trac2,&oAreaSamplesU); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_AreaSamplesU(oAreaSamplesU); \
   ExitAfterCall(this,61,_Trac2,&_ret_arg,&oAreaSamplesU); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIARenderingLight##classe::put_AreaSamplesU(short iAreaSamplesU) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,62,&_Trac2,&iAreaSamplesU); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_AreaSamplesU(iAreaSamplesU); \
   ExitAfterCall(this,62,_Trac2,&_ret_arg,&iAreaSamplesU); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIARenderingLight##classe::get_AreaSamplesV(short & oAreaSamplesV) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,63,&_Trac2,&oAreaSamplesV); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_AreaSamplesV(oAreaSamplesV); \
   ExitAfterCall(this,63,_Trac2,&_ret_arg,&oAreaSamplesV); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIARenderingLight##classe::put_AreaSamplesV(short iAreaSamplesV) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,64,&_Trac2,&iAreaSamplesV); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_AreaSamplesV(iAreaSamplesV); \
   ExitAfterCall(this,64,_Trac2,&_ret_arg,&iAreaSamplesV); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIARenderingLight##classe::get_IlluminationStatus(short & oIlluminationStatus) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,65,&_Trac2,&oIlluminationStatus); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_IlluminationStatus(oIlluminationStatus); \
   ExitAfterCall(this,65,_Trac2,&_ret_arg,&oIlluminationStatus); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIARenderingLight##classe::put_IlluminationStatus(short iIlluminationStatus) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,66,&_Trac2,&iIlluminationStatus); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_IlluminationStatus(iIlluminationStatus); \
   ExitAfterCall(this,66,_Trac2,&_ret_arg,&iIlluminationStatus); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIARenderingLight##classe::get_FalloffExponent(short & oFalloffExponent) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,67,&_Trac2,&oFalloffExponent); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_FalloffExponent(oFalloffExponent); \
   ExitAfterCall(this,67,_Trac2,&_ret_arg,&oFalloffExponent); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIARenderingLight##classe::put_FalloffExponent(short iFalloffExponent) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,68,&_Trac2,&iFalloffExponent); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_FalloffExponent(iFalloffExponent); \
   ExitAfterCall(this,68,_Trac2,&_ret_arg,&iFalloffExponent); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIARenderingLight##classe::get_EnergyFactor(double & oEnergyFactor) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,69,&_Trac2,&oEnergyFactor); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_EnergyFactor(oEnergyFactor); \
   ExitAfterCall(this,69,_Trac2,&_ret_arg,&oEnergyFactor); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIARenderingLight##classe::put_EnergyFactor(double iEnergyFactor) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,70,&_Trac2,&iEnergyFactor); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_EnergyFactor(iEnergyFactor); \
   ExitAfterCall(this,70,_Trac2,&_ret_arg,&iEnergyFactor); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIARenderingLight##classe::get_CausticPhotonsNumber(CATLONG & oCausticPhotonsNumber) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,71,&_Trac2,&oCausticPhotonsNumber); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_CausticPhotonsNumber(oCausticPhotonsNumber); \
   ExitAfterCall(this,71,_Trac2,&_ret_arg,&oCausticPhotonsNumber); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIARenderingLight##classe::put_CausticPhotonsNumber(CATLONG iCausticPhotonsNumber) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,72,&_Trac2,&iCausticPhotonsNumber); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_CausticPhotonsNumber(iCausticPhotonsNumber); \
   ExitAfterCall(this,72,_Trac2,&_ret_arg,&iCausticPhotonsNumber); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIARenderingLight##classe::get_GlobalPhotonsNumber(CATLONG & oGlobalPhotonsNumber) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,73,&_Trac2,&oGlobalPhotonsNumber); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_GlobalPhotonsNumber(oGlobalPhotonsNumber); \
   ExitAfterCall(this,73,_Trac2,&_ret_arg,&oGlobalPhotonsNumber); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIARenderingLight##classe::put_GlobalPhotonsNumber(CATLONG iGlobalPhotonsNumber) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,74,&_Trac2,&iGlobalPhotonsNumber); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_GlobalPhotonsNumber(iGlobalPhotonsNumber); \
   ExitAfterCall(this,74,_Trac2,&_ret_arg,&iGlobalPhotonsNumber); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIARenderingLight##classe::get_Application(CATIAApplication *& oApplication) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,75,&_Trac2,&oApplication); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Application(oApplication); \
   ExitAfterCall(this,75,_Trac2,&_ret_arg,&oApplication); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIARenderingLight##classe::get_Parent(CATBaseDispatch *& oParent) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,76,&_Trac2,&oParent); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Parent(oParent); \
   ExitAfterCall(this,76,_Trac2,&_ret_arg,&oParent); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIARenderingLight##classe::get_Name(CATBSTR & oNameBSTR) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,77,&_Trac2,&oNameBSTR); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Name(oNameBSTR); \
   ExitAfterCall(this,77,_Trac2,&_ret_arg,&oNameBSTR); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIARenderingLight##classe::put_Name(const CATBSTR & iNameBSTR) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,78,&_Trac2,&iNameBSTR); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_Name(iNameBSTR); \
   ExitAfterCall(this,78,_Trac2,&_ret_arg,&iNameBSTR); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIARenderingLight##classe::GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,79,&_Trac2,&IDName,&RealObj); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetItem(IDName,RealObj); \
   ExitAfterCall(this,79,_Trac2,&_ret_arg,&IDName,&RealObj); \
   return(_ret_arg); \
} \



/* Macro used to link an implementation with an interface */
#define TIE_CATIARenderingLight(classe) \
 \
 \
declare_TIE_CATIARenderingLight(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIARenderingLight##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIARenderingLight,"CATIARenderingLight",CATIARenderingLight::MetaObject(),classe::MetaObject(),TIE); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIARenderingLight(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIECreation(CATIARenderingLight, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIARenderingLight##classe(classe::MetaObject(),CATIARenderingLight::MetaObject(),(void *)CreateTIECATIARenderingLight##classe)



/* Macro used to link an implementation with an interface */
/* This TIE is chained on the implementation object */
#define TIEchain_CATIARenderingLight(classe) \
 \
 \
declare_TIE_CATIARenderingLight(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIARenderingLight##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIARenderingLight,"CATIARenderingLight",CATIARenderingLight::MetaObject(),classe::MetaObject(),TIEchain); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIARenderingLight(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIEchainCreation(CATIARenderingLight, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIARenderingLight##classe(classe::MetaObject(),CATIARenderingLight::MetaObject(),(void *)CreateTIECATIARenderingLight##classe)


/* Macro to switch between BOA and TIE at build time */ 
#ifdef CATSYS_BOA_IS_TIE
#define BOA_CATIARenderingLight(classe) TIE_CATIARenderingLight(classe)
#else
#define BOA_CATIARenderingLight(classe) CATImplementBOA(CATIARenderingLight, classe)
#endif

#endif
