#ifndef __TIE_CATIARenderingShooting
#define __TIE_CATIARenderingShooting

#include <string.h>
#include "CATBaseUnknown.h"
#include "CATMetaClass.h"
#include "CATMacForTie.h"
#include "CATExitJournal.h"
#include "CATIARenderingShooting.h"
#include "JS0DSPA.h"


#ifdef _WINDOWS_SOURCE
#define Exported __declspec(dllexport)
#define Imported __declspec(dllimport)
#else
#define Exported 
#define Imported 
#endif


/* To link an implementation with the interface CATIARenderingShooting */
#define declare_TIE_CATIARenderingShooting(classe) \
 \
 \
class TIECATIARenderingShooting##classe : public CATIARenderingShooting \
{ \
   private: \
      CATDeclareCommonTIEMembers \
   public: \
      CATDeclareTIEMethods(CATIARenderingShooting, classe) \
      CATDeclareIUnknownMethodsForCATBaseUnknownTIE \
      CATDeclareIDispatchMethodsForCATBaseUnknownTIE \
      CATDeclareCATBaseUnknownMethodsForTIE \
      virtual HRESULT __stdcall get_ActiveCamera(CATIACamera3D *& oActiveCamera); \
      virtual HRESULT __stdcall put_ActiveCamera(CATIACamera3D * iActiveCamera); \
      virtual HRESULT __stdcall CountActiveLights(short & oActiveLightsNumber); \
      virtual HRESULT __stdcall GetActiveLight(short iIndex, CATIARenderingLight *& oActiveLight); \
      virtual HRESULT __stdcall AddActiveLight(CATIARenderingLight * iActiveLight); \
      virtual HRESULT __stdcall RemoveActiveLight(short iIndex); \
      virtual HRESULT __stdcall get_ActiveEnvironment(CATIARenderingEnvironment *& oActiveEnvironment); \
      virtual HRESULT __stdcall put_ActiveEnvironment(CATIARenderingEnvironment * iActiveEnvironment); \
      virtual HRESULT __stdcall get_ImageWidth(short & oImageWidth); \
      virtual HRESULT __stdcall put_ImageWidth(short iImageWidth); \
      virtual HRESULT __stdcall get_ImageHeight(short & oImageHeight); \
      virtual HRESULT __stdcall put_ImageHeight(short iImageHeight); \
      virtual HRESULT __stdcall get_ImagePredefinedRatio(short & oImagePredefinedRatio); \
      virtual HRESULT __stdcall put_ImagePredefinedRatio(short iImagePredefinedRatio); \
      virtual HRESULT __stdcall get_ImageOutputType(short & oImageOutputType); \
      virtual HRESULT __stdcall put_ImageOutputType(short iImageOutputType); \
      virtual HRESULT __stdcall get_ImageOutputDirectory(CATBSTR & oImageOutputDirectory); \
      virtual HRESULT __stdcall put_ImageOutputDirectory(const CATBSTR & iImageOutputDirectory); \
      virtual HRESULT __stdcall get_ImageOutputName(CATBSTR & oImageOutputName); \
      virtual HRESULT __stdcall put_ImageOutputName(const CATBSTR & iImageOutputName); \
      virtual HRESULT __stdcall get_ImageOutputFormat(short & oImageOutputFormat); \
      virtual HRESULT __stdcall put_ImageOutputFormat(short iImageOutputFormat); \
      virtual HRESULT __stdcall get_RaytracingStatus(short & oRaytracingStatus); \
      virtual HRESULT __stdcall put_RaytracingStatus(short iRaytracingStatus); \
      virtual HRESULT __stdcall get_ReflectionsCount(short & oReflectionsCount); \
      virtual HRESULT __stdcall put_ReflectionsCount(short iReflectionsCount); \
      virtual HRESULT __stdcall get_RefractionsCount(short & oRefractionsCount); \
      virtual HRESULT __stdcall put_RefractionsCount(short iRefractionsCount); \
      virtual HRESULT __stdcall get_ReboundsCount(short & oReboundsCount); \
      virtual HRESULT __stdcall put_ReboundsCount(short iReboundsCount); \
      virtual HRESULT __stdcall get_TexturesStatus(short & oTexturesStatus); \
      virtual HRESULT __stdcall put_TexturesStatus(short iTexturesStatus); \
      virtual HRESULT __stdcall get_ShadowsStatus(short & oShadowsStatus); \
      virtual HRESULT __stdcall put_ShadowsStatus(short iShadowsStatus); \
      virtual HRESULT __stdcall get_AntialiasingMinSample(short & oAntialiasingMinSample); \
      virtual HRESULT __stdcall put_AntialiasingMinSample(short iAntialiasingMinSample); \
      virtual HRESULT __stdcall get_AntialiasingMaxSample(short & oAntialiasingMaxSample); \
      virtual HRESULT __stdcall put_AntialiasingMaxSample(short iAntialiasingMaxSample); \
      virtual HRESULT __stdcall get_AntialiasingContrast(short & oAntialiasingContrast); \
      virtual HRESULT __stdcall put_AntialiasingContrast(short iAntialiasingContrast); \
      virtual HRESULT __stdcall get_CausticStatus(short & oCausticStatus); \
      virtual HRESULT __stdcall put_CausticStatus(short iCausticStatus); \
      virtual HRESULT __stdcall get_CausticAccuracy(short & oCausticAccuracy); \
      virtual HRESULT __stdcall put_CausticAccuracy(short iCausticAccuracy); \
      virtual HRESULT __stdcall get_CausticRadius(double & oCausticRadius); \
      virtual HRESULT __stdcall put_CausticRadius(double iCausticRadius); \
      virtual HRESULT __stdcall get_GlobalIlluminationStatus(short & oGlobalIlluminationStatus); \
      virtual HRESULT __stdcall put_GlobalIlluminationStatus(short iGlobalIlluminationStatus); \
      virtual HRESULT __stdcall get_GlobalIlluminationAccuracy(short & oGlobalIlluminationAccuracy); \
      virtual HRESULT __stdcall put_GlobalIlluminationAccuracy(short iGlobalIlluminationAccuracy); \
      virtual HRESULT __stdcall get_GlobalIlluminationRadius(double & oGlobalIlluminationRadius); \
      virtual HRESULT __stdcall put_GlobalIlluminationRadius(double iGlobalIlluminationRadius); \
      virtual HRESULT __stdcall get_FinalGatheringStatus(short & oFinalGatheringStatus); \
      virtual HRESULT __stdcall put_FinalGatheringStatus(short iFinalGatheringStatus); \
      virtual HRESULT __stdcall get_FinalGatheringAccuracy(short & oFinalGatheringAccuracy); \
      virtual HRESULT __stdcall put_FinalGatheringAccuracy(short iFinalGatheringAccuracy); \
      virtual HRESULT __stdcall get_FinalGatheringMinRadius(double & oFinalGatheringMinRadius); \
      virtual HRESULT __stdcall put_FinalGatheringMinRadius(double iFinalGatheringMinRadius); \
      virtual HRESULT __stdcall get_FinalGatheringMaxRadius(double & oFinalGatheringMaxRadius); \
      virtual HRESULT __stdcall put_FinalGatheringMaxRadius(double iFinalGatheringMaxRadius); \
      virtual HRESULT __stdcall get_AmbientFactor(short & oAmbientFactor); \
      virtual HRESULT __stdcall put_AmbientFactor(short iAmbientFactor); \
      virtual HRESULT __stdcall get_DepthOfFieldStatus(short & oDepthOfFieldStatus); \
      virtual HRESULT __stdcall put_DepthOfFieldStatus(short iDepthOfFieldStatus); \
      virtual HRESULT __stdcall get_DepthOfFieldRadius(double & oDepthOfFieldRadius); \
      virtual HRESULT __stdcall put_DepthOfFieldRadius(double iDepthOfFieldRadius); \
      virtual HRESULT __stdcall get_GlowStatus(short & oGlowStatus); \
      virtual HRESULT __stdcall put_GlowStatus(short iGlowStatus); \
      virtual HRESULT __stdcall get_GlowThreshold(double & oGlowThreshold); \
      virtual HRESULT __stdcall put_GlowThreshold(double iGlowThreshold); \
      virtual HRESULT __stdcall get_GlowSize(double & oGlowSize); \
      virtual HRESULT __stdcall put_GlowSize(double iGlowSize); \
      virtual HRESULT __stdcall get_GlowIntensity(double & oGlowIntensity); \
      virtual HRESULT __stdcall put_GlowIntensity(double iGlowIntensity); \
      virtual HRESULT __stdcall get_GlowFlareFactor(double & oGlowFlareFactor); \
      virtual HRESULT __stdcall put_GlowFlareFactor(double iGlowFlareFactor); \
      virtual HRESULT __stdcall get_GlowFlareDiffusion(double & oGlowFlareDiffusion); \
      virtual HRESULT __stdcall put_GlowFlareDiffusion(double iGlowFlareDiffusion); \
      virtual HRESULT __stdcall get_GlowRadialLineSize(double & oGlowRadialLineSize); \
      virtual HRESULT __stdcall put_GlowRadialLineSize(double iGlowRadialLineSize); \
      virtual HRESULT __stdcall get_GlowStarEffect(double & oGlowStarEffect); \
      virtual HRESULT __stdcall put_GlowStarEffect(double iGlowStarEffect); \
      virtual HRESULT __stdcall get_CartoonStatus(short & oCartoonStatus); \
      virtual HRESULT __stdcall put_CartoonStatus(short iCartoonStatus); \
      virtual HRESULT __stdcall get_CartoonContourThickness(double & oCartoonContourThickness); \
      virtual HRESULT __stdcall put_CartoonContourThickness(double iCartoonContourThickness); \
      virtual HRESULT __stdcall get_CartoonShadingStatus(short & oCartoonShadingStatus); \
      virtual HRESULT __stdcall put_CartoonShadingStatus(short iCartoonShadingStatus); \
      virtual HRESULT __stdcall get_CartoonStrokeStatus(short & oCartoonStrokeStatus); \
      virtual HRESULT __stdcall put_CartoonStrokeStatus(short iCartoonStrokeStatus); \
      virtual HRESULT __stdcall Render(); \
      virtual HRESULT  __stdcall get_Application(CATIAApplication *& oApplication); \
      virtual HRESULT  __stdcall get_Parent(CATBaseDispatch *& oParent); \
      virtual HRESULT  __stdcall get_Name(CATBSTR & oNameBSTR); \
      virtual HRESULT  __stdcall put_Name(const CATBSTR & iNameBSTR); \
      virtual HRESULT  __stdcall GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj); \
};



#define ENVTIEdeclare_CATIARenderingShooting(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
virtual HRESULT __stdcall get_ActiveCamera(CATIACamera3D *& oActiveCamera); \
virtual HRESULT __stdcall put_ActiveCamera(CATIACamera3D * iActiveCamera); \
virtual HRESULT __stdcall CountActiveLights(short & oActiveLightsNumber); \
virtual HRESULT __stdcall GetActiveLight(short iIndex, CATIARenderingLight *& oActiveLight); \
virtual HRESULT __stdcall AddActiveLight(CATIARenderingLight * iActiveLight); \
virtual HRESULT __stdcall RemoveActiveLight(short iIndex); \
virtual HRESULT __stdcall get_ActiveEnvironment(CATIARenderingEnvironment *& oActiveEnvironment); \
virtual HRESULT __stdcall put_ActiveEnvironment(CATIARenderingEnvironment * iActiveEnvironment); \
virtual HRESULT __stdcall get_ImageWidth(short & oImageWidth); \
virtual HRESULT __stdcall put_ImageWidth(short iImageWidth); \
virtual HRESULT __stdcall get_ImageHeight(short & oImageHeight); \
virtual HRESULT __stdcall put_ImageHeight(short iImageHeight); \
virtual HRESULT __stdcall get_ImagePredefinedRatio(short & oImagePredefinedRatio); \
virtual HRESULT __stdcall put_ImagePredefinedRatio(short iImagePredefinedRatio); \
virtual HRESULT __stdcall get_ImageOutputType(short & oImageOutputType); \
virtual HRESULT __stdcall put_ImageOutputType(short iImageOutputType); \
virtual HRESULT __stdcall get_ImageOutputDirectory(CATBSTR & oImageOutputDirectory); \
virtual HRESULT __stdcall put_ImageOutputDirectory(const CATBSTR & iImageOutputDirectory); \
virtual HRESULT __stdcall get_ImageOutputName(CATBSTR & oImageOutputName); \
virtual HRESULT __stdcall put_ImageOutputName(const CATBSTR & iImageOutputName); \
virtual HRESULT __stdcall get_ImageOutputFormat(short & oImageOutputFormat); \
virtual HRESULT __stdcall put_ImageOutputFormat(short iImageOutputFormat); \
virtual HRESULT __stdcall get_RaytracingStatus(short & oRaytracingStatus); \
virtual HRESULT __stdcall put_RaytracingStatus(short iRaytracingStatus); \
virtual HRESULT __stdcall get_ReflectionsCount(short & oReflectionsCount); \
virtual HRESULT __stdcall put_ReflectionsCount(short iReflectionsCount); \
virtual HRESULT __stdcall get_RefractionsCount(short & oRefractionsCount); \
virtual HRESULT __stdcall put_RefractionsCount(short iRefractionsCount); \
virtual HRESULT __stdcall get_ReboundsCount(short & oReboundsCount); \
virtual HRESULT __stdcall put_ReboundsCount(short iReboundsCount); \
virtual HRESULT __stdcall get_TexturesStatus(short & oTexturesStatus); \
virtual HRESULT __stdcall put_TexturesStatus(short iTexturesStatus); \
virtual HRESULT __stdcall get_ShadowsStatus(short & oShadowsStatus); \
virtual HRESULT __stdcall put_ShadowsStatus(short iShadowsStatus); \
virtual HRESULT __stdcall get_AntialiasingMinSample(short & oAntialiasingMinSample); \
virtual HRESULT __stdcall put_AntialiasingMinSample(short iAntialiasingMinSample); \
virtual HRESULT __stdcall get_AntialiasingMaxSample(short & oAntialiasingMaxSample); \
virtual HRESULT __stdcall put_AntialiasingMaxSample(short iAntialiasingMaxSample); \
virtual HRESULT __stdcall get_AntialiasingContrast(short & oAntialiasingContrast); \
virtual HRESULT __stdcall put_AntialiasingContrast(short iAntialiasingContrast); \
virtual HRESULT __stdcall get_CausticStatus(short & oCausticStatus); \
virtual HRESULT __stdcall put_CausticStatus(short iCausticStatus); \
virtual HRESULT __stdcall get_CausticAccuracy(short & oCausticAccuracy); \
virtual HRESULT __stdcall put_CausticAccuracy(short iCausticAccuracy); \
virtual HRESULT __stdcall get_CausticRadius(double & oCausticRadius); \
virtual HRESULT __stdcall put_CausticRadius(double iCausticRadius); \
virtual HRESULT __stdcall get_GlobalIlluminationStatus(short & oGlobalIlluminationStatus); \
virtual HRESULT __stdcall put_GlobalIlluminationStatus(short iGlobalIlluminationStatus); \
virtual HRESULT __stdcall get_GlobalIlluminationAccuracy(short & oGlobalIlluminationAccuracy); \
virtual HRESULT __stdcall put_GlobalIlluminationAccuracy(short iGlobalIlluminationAccuracy); \
virtual HRESULT __stdcall get_GlobalIlluminationRadius(double & oGlobalIlluminationRadius); \
virtual HRESULT __stdcall put_GlobalIlluminationRadius(double iGlobalIlluminationRadius); \
virtual HRESULT __stdcall get_FinalGatheringStatus(short & oFinalGatheringStatus); \
virtual HRESULT __stdcall put_FinalGatheringStatus(short iFinalGatheringStatus); \
virtual HRESULT __stdcall get_FinalGatheringAccuracy(short & oFinalGatheringAccuracy); \
virtual HRESULT __stdcall put_FinalGatheringAccuracy(short iFinalGatheringAccuracy); \
virtual HRESULT __stdcall get_FinalGatheringMinRadius(double & oFinalGatheringMinRadius); \
virtual HRESULT __stdcall put_FinalGatheringMinRadius(double iFinalGatheringMinRadius); \
virtual HRESULT __stdcall get_FinalGatheringMaxRadius(double & oFinalGatheringMaxRadius); \
virtual HRESULT __stdcall put_FinalGatheringMaxRadius(double iFinalGatheringMaxRadius); \
virtual HRESULT __stdcall get_AmbientFactor(short & oAmbientFactor); \
virtual HRESULT __stdcall put_AmbientFactor(short iAmbientFactor); \
virtual HRESULT __stdcall get_DepthOfFieldStatus(short & oDepthOfFieldStatus); \
virtual HRESULT __stdcall put_DepthOfFieldStatus(short iDepthOfFieldStatus); \
virtual HRESULT __stdcall get_DepthOfFieldRadius(double & oDepthOfFieldRadius); \
virtual HRESULT __stdcall put_DepthOfFieldRadius(double iDepthOfFieldRadius); \
virtual HRESULT __stdcall get_GlowStatus(short & oGlowStatus); \
virtual HRESULT __stdcall put_GlowStatus(short iGlowStatus); \
virtual HRESULT __stdcall get_GlowThreshold(double & oGlowThreshold); \
virtual HRESULT __stdcall put_GlowThreshold(double iGlowThreshold); \
virtual HRESULT __stdcall get_GlowSize(double & oGlowSize); \
virtual HRESULT __stdcall put_GlowSize(double iGlowSize); \
virtual HRESULT __stdcall get_GlowIntensity(double & oGlowIntensity); \
virtual HRESULT __stdcall put_GlowIntensity(double iGlowIntensity); \
virtual HRESULT __stdcall get_GlowFlareFactor(double & oGlowFlareFactor); \
virtual HRESULT __stdcall put_GlowFlareFactor(double iGlowFlareFactor); \
virtual HRESULT __stdcall get_GlowFlareDiffusion(double & oGlowFlareDiffusion); \
virtual HRESULT __stdcall put_GlowFlareDiffusion(double iGlowFlareDiffusion); \
virtual HRESULT __stdcall get_GlowRadialLineSize(double & oGlowRadialLineSize); \
virtual HRESULT __stdcall put_GlowRadialLineSize(double iGlowRadialLineSize); \
virtual HRESULT __stdcall get_GlowStarEffect(double & oGlowStarEffect); \
virtual HRESULT __stdcall put_GlowStarEffect(double iGlowStarEffect); \
virtual HRESULT __stdcall get_CartoonStatus(short & oCartoonStatus); \
virtual HRESULT __stdcall put_CartoonStatus(short iCartoonStatus); \
virtual HRESULT __stdcall get_CartoonContourThickness(double & oCartoonContourThickness); \
virtual HRESULT __stdcall put_CartoonContourThickness(double iCartoonContourThickness); \
virtual HRESULT __stdcall get_CartoonShadingStatus(short & oCartoonShadingStatus); \
virtual HRESULT __stdcall put_CartoonShadingStatus(short iCartoonShadingStatus); \
virtual HRESULT __stdcall get_CartoonStrokeStatus(short & oCartoonStrokeStatus); \
virtual HRESULT __stdcall put_CartoonStrokeStatus(short iCartoonStrokeStatus); \
virtual HRESULT __stdcall Render(); \
virtual HRESULT  __stdcall get_Application(CATIAApplication *& oApplication); \
virtual HRESULT  __stdcall get_Parent(CATBaseDispatch *& oParent); \
virtual HRESULT  __stdcall get_Name(CATBSTR & oNameBSTR); \
virtual HRESULT  __stdcall put_Name(const CATBSTR & iNameBSTR); \
virtual HRESULT  __stdcall GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj); \


#define ENVTIEdefine_CATIARenderingShooting(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
HRESULT __stdcall  ENVTIEName::get_ActiveCamera(CATIACamera3D *& oActiveCamera) \
{ \
return (ENVTIECALL(CATIARenderingShooting,ENVTIETypeLetter,ENVTIELetter)get_ActiveCamera(oActiveCamera)); \
} \
HRESULT __stdcall  ENVTIEName::put_ActiveCamera(CATIACamera3D * iActiveCamera) \
{ \
return (ENVTIECALL(CATIARenderingShooting,ENVTIETypeLetter,ENVTIELetter)put_ActiveCamera(iActiveCamera)); \
} \
HRESULT __stdcall  ENVTIEName::CountActiveLights(short & oActiveLightsNumber) \
{ \
return (ENVTIECALL(CATIARenderingShooting,ENVTIETypeLetter,ENVTIELetter)CountActiveLights(oActiveLightsNumber)); \
} \
HRESULT __stdcall  ENVTIEName::GetActiveLight(short iIndex, CATIARenderingLight *& oActiveLight) \
{ \
return (ENVTIECALL(CATIARenderingShooting,ENVTIETypeLetter,ENVTIELetter)GetActiveLight(iIndex,oActiveLight)); \
} \
HRESULT __stdcall  ENVTIEName::AddActiveLight(CATIARenderingLight * iActiveLight) \
{ \
return (ENVTIECALL(CATIARenderingShooting,ENVTIETypeLetter,ENVTIELetter)AddActiveLight(iActiveLight)); \
} \
HRESULT __stdcall  ENVTIEName::RemoveActiveLight(short iIndex) \
{ \
return (ENVTIECALL(CATIARenderingShooting,ENVTIETypeLetter,ENVTIELetter)RemoveActiveLight(iIndex)); \
} \
HRESULT __stdcall  ENVTIEName::get_ActiveEnvironment(CATIARenderingEnvironment *& oActiveEnvironment) \
{ \
return (ENVTIECALL(CATIARenderingShooting,ENVTIETypeLetter,ENVTIELetter)get_ActiveEnvironment(oActiveEnvironment)); \
} \
HRESULT __stdcall  ENVTIEName::put_ActiveEnvironment(CATIARenderingEnvironment * iActiveEnvironment) \
{ \
return (ENVTIECALL(CATIARenderingShooting,ENVTIETypeLetter,ENVTIELetter)put_ActiveEnvironment(iActiveEnvironment)); \
} \
HRESULT __stdcall  ENVTIEName::get_ImageWidth(short & oImageWidth) \
{ \
return (ENVTIECALL(CATIARenderingShooting,ENVTIETypeLetter,ENVTIELetter)get_ImageWidth(oImageWidth)); \
} \
HRESULT __stdcall  ENVTIEName::put_ImageWidth(short iImageWidth) \
{ \
return (ENVTIECALL(CATIARenderingShooting,ENVTIETypeLetter,ENVTIELetter)put_ImageWidth(iImageWidth)); \
} \
HRESULT __stdcall  ENVTIEName::get_ImageHeight(short & oImageHeight) \
{ \
return (ENVTIECALL(CATIARenderingShooting,ENVTIETypeLetter,ENVTIELetter)get_ImageHeight(oImageHeight)); \
} \
HRESULT __stdcall  ENVTIEName::put_ImageHeight(short iImageHeight) \
{ \
return (ENVTIECALL(CATIARenderingShooting,ENVTIETypeLetter,ENVTIELetter)put_ImageHeight(iImageHeight)); \
} \
HRESULT __stdcall  ENVTIEName::get_ImagePredefinedRatio(short & oImagePredefinedRatio) \
{ \
return (ENVTIECALL(CATIARenderingShooting,ENVTIETypeLetter,ENVTIELetter)get_ImagePredefinedRatio(oImagePredefinedRatio)); \
} \
HRESULT __stdcall  ENVTIEName::put_ImagePredefinedRatio(short iImagePredefinedRatio) \
{ \
return (ENVTIECALL(CATIARenderingShooting,ENVTIETypeLetter,ENVTIELetter)put_ImagePredefinedRatio(iImagePredefinedRatio)); \
} \
HRESULT __stdcall  ENVTIEName::get_ImageOutputType(short & oImageOutputType) \
{ \
return (ENVTIECALL(CATIARenderingShooting,ENVTIETypeLetter,ENVTIELetter)get_ImageOutputType(oImageOutputType)); \
} \
HRESULT __stdcall  ENVTIEName::put_ImageOutputType(short iImageOutputType) \
{ \
return (ENVTIECALL(CATIARenderingShooting,ENVTIETypeLetter,ENVTIELetter)put_ImageOutputType(iImageOutputType)); \
} \
HRESULT __stdcall  ENVTIEName::get_ImageOutputDirectory(CATBSTR & oImageOutputDirectory) \
{ \
return (ENVTIECALL(CATIARenderingShooting,ENVTIETypeLetter,ENVTIELetter)get_ImageOutputDirectory(oImageOutputDirectory)); \
} \
HRESULT __stdcall  ENVTIEName::put_ImageOutputDirectory(const CATBSTR & iImageOutputDirectory) \
{ \
return (ENVTIECALL(CATIARenderingShooting,ENVTIETypeLetter,ENVTIELetter)put_ImageOutputDirectory(iImageOutputDirectory)); \
} \
HRESULT __stdcall  ENVTIEName::get_ImageOutputName(CATBSTR & oImageOutputName) \
{ \
return (ENVTIECALL(CATIARenderingShooting,ENVTIETypeLetter,ENVTIELetter)get_ImageOutputName(oImageOutputName)); \
} \
HRESULT __stdcall  ENVTIEName::put_ImageOutputName(const CATBSTR & iImageOutputName) \
{ \
return (ENVTIECALL(CATIARenderingShooting,ENVTIETypeLetter,ENVTIELetter)put_ImageOutputName(iImageOutputName)); \
} \
HRESULT __stdcall  ENVTIEName::get_ImageOutputFormat(short & oImageOutputFormat) \
{ \
return (ENVTIECALL(CATIARenderingShooting,ENVTIETypeLetter,ENVTIELetter)get_ImageOutputFormat(oImageOutputFormat)); \
} \
HRESULT __stdcall  ENVTIEName::put_ImageOutputFormat(short iImageOutputFormat) \
{ \
return (ENVTIECALL(CATIARenderingShooting,ENVTIETypeLetter,ENVTIELetter)put_ImageOutputFormat(iImageOutputFormat)); \
} \
HRESULT __stdcall  ENVTIEName::get_RaytracingStatus(short & oRaytracingStatus) \
{ \
return (ENVTIECALL(CATIARenderingShooting,ENVTIETypeLetter,ENVTIELetter)get_RaytracingStatus(oRaytracingStatus)); \
} \
HRESULT __stdcall  ENVTIEName::put_RaytracingStatus(short iRaytracingStatus) \
{ \
return (ENVTIECALL(CATIARenderingShooting,ENVTIETypeLetter,ENVTIELetter)put_RaytracingStatus(iRaytracingStatus)); \
} \
HRESULT __stdcall  ENVTIEName::get_ReflectionsCount(short & oReflectionsCount) \
{ \
return (ENVTIECALL(CATIARenderingShooting,ENVTIETypeLetter,ENVTIELetter)get_ReflectionsCount(oReflectionsCount)); \
} \
HRESULT __stdcall  ENVTIEName::put_ReflectionsCount(short iReflectionsCount) \
{ \
return (ENVTIECALL(CATIARenderingShooting,ENVTIETypeLetter,ENVTIELetter)put_ReflectionsCount(iReflectionsCount)); \
} \
HRESULT __stdcall  ENVTIEName::get_RefractionsCount(short & oRefractionsCount) \
{ \
return (ENVTIECALL(CATIARenderingShooting,ENVTIETypeLetter,ENVTIELetter)get_RefractionsCount(oRefractionsCount)); \
} \
HRESULT __stdcall  ENVTIEName::put_RefractionsCount(short iRefractionsCount) \
{ \
return (ENVTIECALL(CATIARenderingShooting,ENVTIETypeLetter,ENVTIELetter)put_RefractionsCount(iRefractionsCount)); \
} \
HRESULT __stdcall  ENVTIEName::get_ReboundsCount(short & oReboundsCount) \
{ \
return (ENVTIECALL(CATIARenderingShooting,ENVTIETypeLetter,ENVTIELetter)get_ReboundsCount(oReboundsCount)); \
} \
HRESULT __stdcall  ENVTIEName::put_ReboundsCount(short iReboundsCount) \
{ \
return (ENVTIECALL(CATIARenderingShooting,ENVTIETypeLetter,ENVTIELetter)put_ReboundsCount(iReboundsCount)); \
} \
HRESULT __stdcall  ENVTIEName::get_TexturesStatus(short & oTexturesStatus) \
{ \
return (ENVTIECALL(CATIARenderingShooting,ENVTIETypeLetter,ENVTIELetter)get_TexturesStatus(oTexturesStatus)); \
} \
HRESULT __stdcall  ENVTIEName::put_TexturesStatus(short iTexturesStatus) \
{ \
return (ENVTIECALL(CATIARenderingShooting,ENVTIETypeLetter,ENVTIELetter)put_TexturesStatus(iTexturesStatus)); \
} \
HRESULT __stdcall  ENVTIEName::get_ShadowsStatus(short & oShadowsStatus) \
{ \
return (ENVTIECALL(CATIARenderingShooting,ENVTIETypeLetter,ENVTIELetter)get_ShadowsStatus(oShadowsStatus)); \
} \
HRESULT __stdcall  ENVTIEName::put_ShadowsStatus(short iShadowsStatus) \
{ \
return (ENVTIECALL(CATIARenderingShooting,ENVTIETypeLetter,ENVTIELetter)put_ShadowsStatus(iShadowsStatus)); \
} \
HRESULT __stdcall  ENVTIEName::get_AntialiasingMinSample(short & oAntialiasingMinSample) \
{ \
return (ENVTIECALL(CATIARenderingShooting,ENVTIETypeLetter,ENVTIELetter)get_AntialiasingMinSample(oAntialiasingMinSample)); \
} \
HRESULT __stdcall  ENVTIEName::put_AntialiasingMinSample(short iAntialiasingMinSample) \
{ \
return (ENVTIECALL(CATIARenderingShooting,ENVTIETypeLetter,ENVTIELetter)put_AntialiasingMinSample(iAntialiasingMinSample)); \
} \
HRESULT __stdcall  ENVTIEName::get_AntialiasingMaxSample(short & oAntialiasingMaxSample) \
{ \
return (ENVTIECALL(CATIARenderingShooting,ENVTIETypeLetter,ENVTIELetter)get_AntialiasingMaxSample(oAntialiasingMaxSample)); \
} \
HRESULT __stdcall  ENVTIEName::put_AntialiasingMaxSample(short iAntialiasingMaxSample) \
{ \
return (ENVTIECALL(CATIARenderingShooting,ENVTIETypeLetter,ENVTIELetter)put_AntialiasingMaxSample(iAntialiasingMaxSample)); \
} \
HRESULT __stdcall  ENVTIEName::get_AntialiasingContrast(short & oAntialiasingContrast) \
{ \
return (ENVTIECALL(CATIARenderingShooting,ENVTIETypeLetter,ENVTIELetter)get_AntialiasingContrast(oAntialiasingContrast)); \
} \
HRESULT __stdcall  ENVTIEName::put_AntialiasingContrast(short iAntialiasingContrast) \
{ \
return (ENVTIECALL(CATIARenderingShooting,ENVTIETypeLetter,ENVTIELetter)put_AntialiasingContrast(iAntialiasingContrast)); \
} \
HRESULT __stdcall  ENVTIEName::get_CausticStatus(short & oCausticStatus) \
{ \
return (ENVTIECALL(CATIARenderingShooting,ENVTIETypeLetter,ENVTIELetter)get_CausticStatus(oCausticStatus)); \
} \
HRESULT __stdcall  ENVTIEName::put_CausticStatus(short iCausticStatus) \
{ \
return (ENVTIECALL(CATIARenderingShooting,ENVTIETypeLetter,ENVTIELetter)put_CausticStatus(iCausticStatus)); \
} \
HRESULT __stdcall  ENVTIEName::get_CausticAccuracy(short & oCausticAccuracy) \
{ \
return (ENVTIECALL(CATIARenderingShooting,ENVTIETypeLetter,ENVTIELetter)get_CausticAccuracy(oCausticAccuracy)); \
} \
HRESULT __stdcall  ENVTIEName::put_CausticAccuracy(short iCausticAccuracy) \
{ \
return (ENVTIECALL(CATIARenderingShooting,ENVTIETypeLetter,ENVTIELetter)put_CausticAccuracy(iCausticAccuracy)); \
} \
HRESULT __stdcall  ENVTIEName::get_CausticRadius(double & oCausticRadius) \
{ \
return (ENVTIECALL(CATIARenderingShooting,ENVTIETypeLetter,ENVTIELetter)get_CausticRadius(oCausticRadius)); \
} \
HRESULT __stdcall  ENVTIEName::put_CausticRadius(double iCausticRadius) \
{ \
return (ENVTIECALL(CATIARenderingShooting,ENVTIETypeLetter,ENVTIELetter)put_CausticRadius(iCausticRadius)); \
} \
HRESULT __stdcall  ENVTIEName::get_GlobalIlluminationStatus(short & oGlobalIlluminationStatus) \
{ \
return (ENVTIECALL(CATIARenderingShooting,ENVTIETypeLetter,ENVTIELetter)get_GlobalIlluminationStatus(oGlobalIlluminationStatus)); \
} \
HRESULT __stdcall  ENVTIEName::put_GlobalIlluminationStatus(short iGlobalIlluminationStatus) \
{ \
return (ENVTIECALL(CATIARenderingShooting,ENVTIETypeLetter,ENVTIELetter)put_GlobalIlluminationStatus(iGlobalIlluminationStatus)); \
} \
HRESULT __stdcall  ENVTIEName::get_GlobalIlluminationAccuracy(short & oGlobalIlluminationAccuracy) \
{ \
return (ENVTIECALL(CATIARenderingShooting,ENVTIETypeLetter,ENVTIELetter)get_GlobalIlluminationAccuracy(oGlobalIlluminationAccuracy)); \
} \
HRESULT __stdcall  ENVTIEName::put_GlobalIlluminationAccuracy(short iGlobalIlluminationAccuracy) \
{ \
return (ENVTIECALL(CATIARenderingShooting,ENVTIETypeLetter,ENVTIELetter)put_GlobalIlluminationAccuracy(iGlobalIlluminationAccuracy)); \
} \
HRESULT __stdcall  ENVTIEName::get_GlobalIlluminationRadius(double & oGlobalIlluminationRadius) \
{ \
return (ENVTIECALL(CATIARenderingShooting,ENVTIETypeLetter,ENVTIELetter)get_GlobalIlluminationRadius(oGlobalIlluminationRadius)); \
} \
HRESULT __stdcall  ENVTIEName::put_GlobalIlluminationRadius(double iGlobalIlluminationRadius) \
{ \
return (ENVTIECALL(CATIARenderingShooting,ENVTIETypeLetter,ENVTIELetter)put_GlobalIlluminationRadius(iGlobalIlluminationRadius)); \
} \
HRESULT __stdcall  ENVTIEName::get_FinalGatheringStatus(short & oFinalGatheringStatus) \
{ \
return (ENVTIECALL(CATIARenderingShooting,ENVTIETypeLetter,ENVTIELetter)get_FinalGatheringStatus(oFinalGatheringStatus)); \
} \
HRESULT __stdcall  ENVTIEName::put_FinalGatheringStatus(short iFinalGatheringStatus) \
{ \
return (ENVTIECALL(CATIARenderingShooting,ENVTIETypeLetter,ENVTIELetter)put_FinalGatheringStatus(iFinalGatheringStatus)); \
} \
HRESULT __stdcall  ENVTIEName::get_FinalGatheringAccuracy(short & oFinalGatheringAccuracy) \
{ \
return (ENVTIECALL(CATIARenderingShooting,ENVTIETypeLetter,ENVTIELetter)get_FinalGatheringAccuracy(oFinalGatheringAccuracy)); \
} \
HRESULT __stdcall  ENVTIEName::put_FinalGatheringAccuracy(short iFinalGatheringAccuracy) \
{ \
return (ENVTIECALL(CATIARenderingShooting,ENVTIETypeLetter,ENVTIELetter)put_FinalGatheringAccuracy(iFinalGatheringAccuracy)); \
} \
HRESULT __stdcall  ENVTIEName::get_FinalGatheringMinRadius(double & oFinalGatheringMinRadius) \
{ \
return (ENVTIECALL(CATIARenderingShooting,ENVTIETypeLetter,ENVTIELetter)get_FinalGatheringMinRadius(oFinalGatheringMinRadius)); \
} \
HRESULT __stdcall  ENVTIEName::put_FinalGatheringMinRadius(double iFinalGatheringMinRadius) \
{ \
return (ENVTIECALL(CATIARenderingShooting,ENVTIETypeLetter,ENVTIELetter)put_FinalGatheringMinRadius(iFinalGatheringMinRadius)); \
} \
HRESULT __stdcall  ENVTIEName::get_FinalGatheringMaxRadius(double & oFinalGatheringMaxRadius) \
{ \
return (ENVTIECALL(CATIARenderingShooting,ENVTIETypeLetter,ENVTIELetter)get_FinalGatheringMaxRadius(oFinalGatheringMaxRadius)); \
} \
HRESULT __stdcall  ENVTIEName::put_FinalGatheringMaxRadius(double iFinalGatheringMaxRadius) \
{ \
return (ENVTIECALL(CATIARenderingShooting,ENVTIETypeLetter,ENVTIELetter)put_FinalGatheringMaxRadius(iFinalGatheringMaxRadius)); \
} \
HRESULT __stdcall  ENVTIEName::get_AmbientFactor(short & oAmbientFactor) \
{ \
return (ENVTIECALL(CATIARenderingShooting,ENVTIETypeLetter,ENVTIELetter)get_AmbientFactor(oAmbientFactor)); \
} \
HRESULT __stdcall  ENVTIEName::put_AmbientFactor(short iAmbientFactor) \
{ \
return (ENVTIECALL(CATIARenderingShooting,ENVTIETypeLetter,ENVTIELetter)put_AmbientFactor(iAmbientFactor)); \
} \
HRESULT __stdcall  ENVTIEName::get_DepthOfFieldStatus(short & oDepthOfFieldStatus) \
{ \
return (ENVTIECALL(CATIARenderingShooting,ENVTIETypeLetter,ENVTIELetter)get_DepthOfFieldStatus(oDepthOfFieldStatus)); \
} \
HRESULT __stdcall  ENVTIEName::put_DepthOfFieldStatus(short iDepthOfFieldStatus) \
{ \
return (ENVTIECALL(CATIARenderingShooting,ENVTIETypeLetter,ENVTIELetter)put_DepthOfFieldStatus(iDepthOfFieldStatus)); \
} \
HRESULT __stdcall  ENVTIEName::get_DepthOfFieldRadius(double & oDepthOfFieldRadius) \
{ \
return (ENVTIECALL(CATIARenderingShooting,ENVTIETypeLetter,ENVTIELetter)get_DepthOfFieldRadius(oDepthOfFieldRadius)); \
} \
HRESULT __stdcall  ENVTIEName::put_DepthOfFieldRadius(double iDepthOfFieldRadius) \
{ \
return (ENVTIECALL(CATIARenderingShooting,ENVTIETypeLetter,ENVTIELetter)put_DepthOfFieldRadius(iDepthOfFieldRadius)); \
} \
HRESULT __stdcall  ENVTIEName::get_GlowStatus(short & oGlowStatus) \
{ \
return (ENVTIECALL(CATIARenderingShooting,ENVTIETypeLetter,ENVTIELetter)get_GlowStatus(oGlowStatus)); \
} \
HRESULT __stdcall  ENVTIEName::put_GlowStatus(short iGlowStatus) \
{ \
return (ENVTIECALL(CATIARenderingShooting,ENVTIETypeLetter,ENVTIELetter)put_GlowStatus(iGlowStatus)); \
} \
HRESULT __stdcall  ENVTIEName::get_GlowThreshold(double & oGlowThreshold) \
{ \
return (ENVTIECALL(CATIARenderingShooting,ENVTIETypeLetter,ENVTIELetter)get_GlowThreshold(oGlowThreshold)); \
} \
HRESULT __stdcall  ENVTIEName::put_GlowThreshold(double iGlowThreshold) \
{ \
return (ENVTIECALL(CATIARenderingShooting,ENVTIETypeLetter,ENVTIELetter)put_GlowThreshold(iGlowThreshold)); \
} \
HRESULT __stdcall  ENVTIEName::get_GlowSize(double & oGlowSize) \
{ \
return (ENVTIECALL(CATIARenderingShooting,ENVTIETypeLetter,ENVTIELetter)get_GlowSize(oGlowSize)); \
} \
HRESULT __stdcall  ENVTIEName::put_GlowSize(double iGlowSize) \
{ \
return (ENVTIECALL(CATIARenderingShooting,ENVTIETypeLetter,ENVTIELetter)put_GlowSize(iGlowSize)); \
} \
HRESULT __stdcall  ENVTIEName::get_GlowIntensity(double & oGlowIntensity) \
{ \
return (ENVTIECALL(CATIARenderingShooting,ENVTIETypeLetter,ENVTIELetter)get_GlowIntensity(oGlowIntensity)); \
} \
HRESULT __stdcall  ENVTIEName::put_GlowIntensity(double iGlowIntensity) \
{ \
return (ENVTIECALL(CATIARenderingShooting,ENVTIETypeLetter,ENVTIELetter)put_GlowIntensity(iGlowIntensity)); \
} \
HRESULT __stdcall  ENVTIEName::get_GlowFlareFactor(double & oGlowFlareFactor) \
{ \
return (ENVTIECALL(CATIARenderingShooting,ENVTIETypeLetter,ENVTIELetter)get_GlowFlareFactor(oGlowFlareFactor)); \
} \
HRESULT __stdcall  ENVTIEName::put_GlowFlareFactor(double iGlowFlareFactor) \
{ \
return (ENVTIECALL(CATIARenderingShooting,ENVTIETypeLetter,ENVTIELetter)put_GlowFlareFactor(iGlowFlareFactor)); \
} \
HRESULT __stdcall  ENVTIEName::get_GlowFlareDiffusion(double & oGlowFlareDiffusion) \
{ \
return (ENVTIECALL(CATIARenderingShooting,ENVTIETypeLetter,ENVTIELetter)get_GlowFlareDiffusion(oGlowFlareDiffusion)); \
} \
HRESULT __stdcall  ENVTIEName::put_GlowFlareDiffusion(double iGlowFlareDiffusion) \
{ \
return (ENVTIECALL(CATIARenderingShooting,ENVTIETypeLetter,ENVTIELetter)put_GlowFlareDiffusion(iGlowFlareDiffusion)); \
} \
HRESULT __stdcall  ENVTIEName::get_GlowRadialLineSize(double & oGlowRadialLineSize) \
{ \
return (ENVTIECALL(CATIARenderingShooting,ENVTIETypeLetter,ENVTIELetter)get_GlowRadialLineSize(oGlowRadialLineSize)); \
} \
HRESULT __stdcall  ENVTIEName::put_GlowRadialLineSize(double iGlowRadialLineSize) \
{ \
return (ENVTIECALL(CATIARenderingShooting,ENVTIETypeLetter,ENVTIELetter)put_GlowRadialLineSize(iGlowRadialLineSize)); \
} \
HRESULT __stdcall  ENVTIEName::get_GlowStarEffect(double & oGlowStarEffect) \
{ \
return (ENVTIECALL(CATIARenderingShooting,ENVTIETypeLetter,ENVTIELetter)get_GlowStarEffect(oGlowStarEffect)); \
} \
HRESULT __stdcall  ENVTIEName::put_GlowStarEffect(double iGlowStarEffect) \
{ \
return (ENVTIECALL(CATIARenderingShooting,ENVTIETypeLetter,ENVTIELetter)put_GlowStarEffect(iGlowStarEffect)); \
} \
HRESULT __stdcall  ENVTIEName::get_CartoonStatus(short & oCartoonStatus) \
{ \
return (ENVTIECALL(CATIARenderingShooting,ENVTIETypeLetter,ENVTIELetter)get_CartoonStatus(oCartoonStatus)); \
} \
HRESULT __stdcall  ENVTIEName::put_CartoonStatus(short iCartoonStatus) \
{ \
return (ENVTIECALL(CATIARenderingShooting,ENVTIETypeLetter,ENVTIELetter)put_CartoonStatus(iCartoonStatus)); \
} \
HRESULT __stdcall  ENVTIEName::get_CartoonContourThickness(double & oCartoonContourThickness) \
{ \
return (ENVTIECALL(CATIARenderingShooting,ENVTIETypeLetter,ENVTIELetter)get_CartoonContourThickness(oCartoonContourThickness)); \
} \
HRESULT __stdcall  ENVTIEName::put_CartoonContourThickness(double iCartoonContourThickness) \
{ \
return (ENVTIECALL(CATIARenderingShooting,ENVTIETypeLetter,ENVTIELetter)put_CartoonContourThickness(iCartoonContourThickness)); \
} \
HRESULT __stdcall  ENVTIEName::get_CartoonShadingStatus(short & oCartoonShadingStatus) \
{ \
return (ENVTIECALL(CATIARenderingShooting,ENVTIETypeLetter,ENVTIELetter)get_CartoonShadingStatus(oCartoonShadingStatus)); \
} \
HRESULT __stdcall  ENVTIEName::put_CartoonShadingStatus(short iCartoonShadingStatus) \
{ \
return (ENVTIECALL(CATIARenderingShooting,ENVTIETypeLetter,ENVTIELetter)put_CartoonShadingStatus(iCartoonShadingStatus)); \
} \
HRESULT __stdcall  ENVTIEName::get_CartoonStrokeStatus(short & oCartoonStrokeStatus) \
{ \
return (ENVTIECALL(CATIARenderingShooting,ENVTIETypeLetter,ENVTIELetter)get_CartoonStrokeStatus(oCartoonStrokeStatus)); \
} \
HRESULT __stdcall  ENVTIEName::put_CartoonStrokeStatus(short iCartoonStrokeStatus) \
{ \
return (ENVTIECALL(CATIARenderingShooting,ENVTIETypeLetter,ENVTIELetter)put_CartoonStrokeStatus(iCartoonStrokeStatus)); \
} \
HRESULT __stdcall  ENVTIEName::Render() \
{ \
return (ENVTIECALL(CATIARenderingShooting,ENVTIETypeLetter,ENVTIELetter)Render()); \
} \
HRESULT  __stdcall  ENVTIEName::get_Application(CATIAApplication *& oApplication) \
{ \
return (ENVTIECALL(CATIARenderingShooting,ENVTIETypeLetter,ENVTIELetter)get_Application(oApplication)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Parent(CATBaseDispatch *& oParent) \
{ \
return (ENVTIECALL(CATIARenderingShooting,ENVTIETypeLetter,ENVTIELetter)get_Parent(oParent)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Name(CATBSTR & oNameBSTR) \
{ \
return (ENVTIECALL(CATIARenderingShooting,ENVTIETypeLetter,ENVTIELetter)get_Name(oNameBSTR)); \
} \
HRESULT  __stdcall  ENVTIEName::put_Name(const CATBSTR & iNameBSTR) \
{ \
return (ENVTIECALL(CATIARenderingShooting,ENVTIETypeLetter,ENVTIELetter)put_Name(iNameBSTR)); \
} \
HRESULT  __stdcall  ENVTIEName::GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj) \
{ \
return (ENVTIECALL(CATIARenderingShooting,ENVTIETypeLetter,ENVTIELetter)GetItem(IDName,RealObj)); \
} \


/* Name of the TIE class */
#define class_TIE_CATIARenderingShooting(classe)    TIECATIARenderingShooting##classe


/* Common methods inside a TIE */
#define common_TIE_CATIARenderingShooting(classe) \
 \
 \
/* Static initialization */ \
CATDefineCommonTIEMembers(CATIARenderingShooting, classe) \
 \
 \
CATImplementTIEMethods(CATIARenderingShooting, classe) \
CATImplementIUnknownMethodsForCATBaseUnknownTIE(CATIARenderingShooting, classe, 2) \
CATImplementIDispatchMethodsForCATBaseUnknownTIE(CATIARenderingShooting, classe) \
CATImplementCATBaseUnknownMethodsForTIE(CATIARenderingShooting, classe) \
 \
HRESULT __stdcall  TIECATIARenderingShooting##classe::get_ActiveCamera(CATIACamera3D *& oActiveCamera) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,1,&_Trac2,&oActiveCamera); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_ActiveCamera(oActiveCamera); \
   ExitAfterCall(this,1,_Trac2,&_ret_arg,&oActiveCamera); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIARenderingShooting##classe::put_ActiveCamera(CATIACamera3D * iActiveCamera) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,2,&_Trac2,&iActiveCamera); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_ActiveCamera(iActiveCamera); \
   ExitAfterCall(this,2,_Trac2,&_ret_arg,&iActiveCamera); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIARenderingShooting##classe::CountActiveLights(short & oActiveLightsNumber) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,3,&_Trac2,&oActiveLightsNumber); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->CountActiveLights(oActiveLightsNumber); \
   ExitAfterCall(this,3,_Trac2,&_ret_arg,&oActiveLightsNumber); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIARenderingShooting##classe::GetActiveLight(short iIndex, CATIARenderingLight *& oActiveLight) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,4,&_Trac2,&iIndex,&oActiveLight); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetActiveLight(iIndex,oActiveLight); \
   ExitAfterCall(this,4,_Trac2,&_ret_arg,&iIndex,&oActiveLight); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIARenderingShooting##classe::AddActiveLight(CATIARenderingLight * iActiveLight) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,5,&_Trac2,&iActiveLight); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->AddActiveLight(iActiveLight); \
   ExitAfterCall(this,5,_Trac2,&_ret_arg,&iActiveLight); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIARenderingShooting##classe::RemoveActiveLight(short iIndex) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,6,&_Trac2,&iIndex); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->RemoveActiveLight(iIndex); \
   ExitAfterCall(this,6,_Trac2,&_ret_arg,&iIndex); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIARenderingShooting##classe::get_ActiveEnvironment(CATIARenderingEnvironment *& oActiveEnvironment) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,7,&_Trac2,&oActiveEnvironment); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_ActiveEnvironment(oActiveEnvironment); \
   ExitAfterCall(this,7,_Trac2,&_ret_arg,&oActiveEnvironment); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIARenderingShooting##classe::put_ActiveEnvironment(CATIARenderingEnvironment * iActiveEnvironment) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,8,&_Trac2,&iActiveEnvironment); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_ActiveEnvironment(iActiveEnvironment); \
   ExitAfterCall(this,8,_Trac2,&_ret_arg,&iActiveEnvironment); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIARenderingShooting##classe::get_ImageWidth(short & oImageWidth) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,9,&_Trac2,&oImageWidth); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_ImageWidth(oImageWidth); \
   ExitAfterCall(this,9,_Trac2,&_ret_arg,&oImageWidth); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIARenderingShooting##classe::put_ImageWidth(short iImageWidth) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,10,&_Trac2,&iImageWidth); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_ImageWidth(iImageWidth); \
   ExitAfterCall(this,10,_Trac2,&_ret_arg,&iImageWidth); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIARenderingShooting##classe::get_ImageHeight(short & oImageHeight) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,11,&_Trac2,&oImageHeight); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_ImageHeight(oImageHeight); \
   ExitAfterCall(this,11,_Trac2,&_ret_arg,&oImageHeight); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIARenderingShooting##classe::put_ImageHeight(short iImageHeight) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,12,&_Trac2,&iImageHeight); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_ImageHeight(iImageHeight); \
   ExitAfterCall(this,12,_Trac2,&_ret_arg,&iImageHeight); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIARenderingShooting##classe::get_ImagePredefinedRatio(short & oImagePredefinedRatio) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,13,&_Trac2,&oImagePredefinedRatio); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_ImagePredefinedRatio(oImagePredefinedRatio); \
   ExitAfterCall(this,13,_Trac2,&_ret_arg,&oImagePredefinedRatio); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIARenderingShooting##classe::put_ImagePredefinedRatio(short iImagePredefinedRatio) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,14,&_Trac2,&iImagePredefinedRatio); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_ImagePredefinedRatio(iImagePredefinedRatio); \
   ExitAfterCall(this,14,_Trac2,&_ret_arg,&iImagePredefinedRatio); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIARenderingShooting##classe::get_ImageOutputType(short & oImageOutputType) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,15,&_Trac2,&oImageOutputType); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_ImageOutputType(oImageOutputType); \
   ExitAfterCall(this,15,_Trac2,&_ret_arg,&oImageOutputType); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIARenderingShooting##classe::put_ImageOutputType(short iImageOutputType) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,16,&_Trac2,&iImageOutputType); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_ImageOutputType(iImageOutputType); \
   ExitAfterCall(this,16,_Trac2,&_ret_arg,&iImageOutputType); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIARenderingShooting##classe::get_ImageOutputDirectory(CATBSTR & oImageOutputDirectory) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,17,&_Trac2,&oImageOutputDirectory); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_ImageOutputDirectory(oImageOutputDirectory); \
   ExitAfterCall(this,17,_Trac2,&_ret_arg,&oImageOutputDirectory); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIARenderingShooting##classe::put_ImageOutputDirectory(const CATBSTR & iImageOutputDirectory) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,18,&_Trac2,&iImageOutputDirectory); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_ImageOutputDirectory(iImageOutputDirectory); \
   ExitAfterCall(this,18,_Trac2,&_ret_arg,&iImageOutputDirectory); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIARenderingShooting##classe::get_ImageOutputName(CATBSTR & oImageOutputName) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,19,&_Trac2,&oImageOutputName); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_ImageOutputName(oImageOutputName); \
   ExitAfterCall(this,19,_Trac2,&_ret_arg,&oImageOutputName); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIARenderingShooting##classe::put_ImageOutputName(const CATBSTR & iImageOutputName) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,20,&_Trac2,&iImageOutputName); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_ImageOutputName(iImageOutputName); \
   ExitAfterCall(this,20,_Trac2,&_ret_arg,&iImageOutputName); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIARenderingShooting##classe::get_ImageOutputFormat(short & oImageOutputFormat) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,21,&_Trac2,&oImageOutputFormat); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_ImageOutputFormat(oImageOutputFormat); \
   ExitAfterCall(this,21,_Trac2,&_ret_arg,&oImageOutputFormat); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIARenderingShooting##classe::put_ImageOutputFormat(short iImageOutputFormat) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,22,&_Trac2,&iImageOutputFormat); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_ImageOutputFormat(iImageOutputFormat); \
   ExitAfterCall(this,22,_Trac2,&_ret_arg,&iImageOutputFormat); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIARenderingShooting##classe::get_RaytracingStatus(short & oRaytracingStatus) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,23,&_Trac2,&oRaytracingStatus); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_RaytracingStatus(oRaytracingStatus); \
   ExitAfterCall(this,23,_Trac2,&_ret_arg,&oRaytracingStatus); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIARenderingShooting##classe::put_RaytracingStatus(short iRaytracingStatus) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,24,&_Trac2,&iRaytracingStatus); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_RaytracingStatus(iRaytracingStatus); \
   ExitAfterCall(this,24,_Trac2,&_ret_arg,&iRaytracingStatus); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIARenderingShooting##classe::get_ReflectionsCount(short & oReflectionsCount) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,25,&_Trac2,&oReflectionsCount); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_ReflectionsCount(oReflectionsCount); \
   ExitAfterCall(this,25,_Trac2,&_ret_arg,&oReflectionsCount); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIARenderingShooting##classe::put_ReflectionsCount(short iReflectionsCount) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,26,&_Trac2,&iReflectionsCount); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_ReflectionsCount(iReflectionsCount); \
   ExitAfterCall(this,26,_Trac2,&_ret_arg,&iReflectionsCount); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIARenderingShooting##classe::get_RefractionsCount(short & oRefractionsCount) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,27,&_Trac2,&oRefractionsCount); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_RefractionsCount(oRefractionsCount); \
   ExitAfterCall(this,27,_Trac2,&_ret_arg,&oRefractionsCount); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIARenderingShooting##classe::put_RefractionsCount(short iRefractionsCount) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,28,&_Trac2,&iRefractionsCount); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_RefractionsCount(iRefractionsCount); \
   ExitAfterCall(this,28,_Trac2,&_ret_arg,&iRefractionsCount); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIARenderingShooting##classe::get_ReboundsCount(short & oReboundsCount) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,29,&_Trac2,&oReboundsCount); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_ReboundsCount(oReboundsCount); \
   ExitAfterCall(this,29,_Trac2,&_ret_arg,&oReboundsCount); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIARenderingShooting##classe::put_ReboundsCount(short iReboundsCount) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,30,&_Trac2,&iReboundsCount); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_ReboundsCount(iReboundsCount); \
   ExitAfterCall(this,30,_Trac2,&_ret_arg,&iReboundsCount); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIARenderingShooting##classe::get_TexturesStatus(short & oTexturesStatus) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,31,&_Trac2,&oTexturesStatus); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_TexturesStatus(oTexturesStatus); \
   ExitAfterCall(this,31,_Trac2,&_ret_arg,&oTexturesStatus); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIARenderingShooting##classe::put_TexturesStatus(short iTexturesStatus) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,32,&_Trac2,&iTexturesStatus); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_TexturesStatus(iTexturesStatus); \
   ExitAfterCall(this,32,_Trac2,&_ret_arg,&iTexturesStatus); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIARenderingShooting##classe::get_ShadowsStatus(short & oShadowsStatus) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,33,&_Trac2,&oShadowsStatus); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_ShadowsStatus(oShadowsStatus); \
   ExitAfterCall(this,33,_Trac2,&_ret_arg,&oShadowsStatus); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIARenderingShooting##classe::put_ShadowsStatus(short iShadowsStatus) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,34,&_Trac2,&iShadowsStatus); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_ShadowsStatus(iShadowsStatus); \
   ExitAfterCall(this,34,_Trac2,&_ret_arg,&iShadowsStatus); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIARenderingShooting##classe::get_AntialiasingMinSample(short & oAntialiasingMinSample) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,35,&_Trac2,&oAntialiasingMinSample); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_AntialiasingMinSample(oAntialiasingMinSample); \
   ExitAfterCall(this,35,_Trac2,&_ret_arg,&oAntialiasingMinSample); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIARenderingShooting##classe::put_AntialiasingMinSample(short iAntialiasingMinSample) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,36,&_Trac2,&iAntialiasingMinSample); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_AntialiasingMinSample(iAntialiasingMinSample); \
   ExitAfterCall(this,36,_Trac2,&_ret_arg,&iAntialiasingMinSample); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIARenderingShooting##classe::get_AntialiasingMaxSample(short & oAntialiasingMaxSample) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,37,&_Trac2,&oAntialiasingMaxSample); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_AntialiasingMaxSample(oAntialiasingMaxSample); \
   ExitAfterCall(this,37,_Trac2,&_ret_arg,&oAntialiasingMaxSample); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIARenderingShooting##classe::put_AntialiasingMaxSample(short iAntialiasingMaxSample) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,38,&_Trac2,&iAntialiasingMaxSample); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_AntialiasingMaxSample(iAntialiasingMaxSample); \
   ExitAfterCall(this,38,_Trac2,&_ret_arg,&iAntialiasingMaxSample); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIARenderingShooting##classe::get_AntialiasingContrast(short & oAntialiasingContrast) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,39,&_Trac2,&oAntialiasingContrast); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_AntialiasingContrast(oAntialiasingContrast); \
   ExitAfterCall(this,39,_Trac2,&_ret_arg,&oAntialiasingContrast); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIARenderingShooting##classe::put_AntialiasingContrast(short iAntialiasingContrast) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,40,&_Trac2,&iAntialiasingContrast); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_AntialiasingContrast(iAntialiasingContrast); \
   ExitAfterCall(this,40,_Trac2,&_ret_arg,&iAntialiasingContrast); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIARenderingShooting##classe::get_CausticStatus(short & oCausticStatus) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,41,&_Trac2,&oCausticStatus); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_CausticStatus(oCausticStatus); \
   ExitAfterCall(this,41,_Trac2,&_ret_arg,&oCausticStatus); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIARenderingShooting##classe::put_CausticStatus(short iCausticStatus) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,42,&_Trac2,&iCausticStatus); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_CausticStatus(iCausticStatus); \
   ExitAfterCall(this,42,_Trac2,&_ret_arg,&iCausticStatus); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIARenderingShooting##classe::get_CausticAccuracy(short & oCausticAccuracy) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,43,&_Trac2,&oCausticAccuracy); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_CausticAccuracy(oCausticAccuracy); \
   ExitAfterCall(this,43,_Trac2,&_ret_arg,&oCausticAccuracy); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIARenderingShooting##classe::put_CausticAccuracy(short iCausticAccuracy) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,44,&_Trac2,&iCausticAccuracy); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_CausticAccuracy(iCausticAccuracy); \
   ExitAfterCall(this,44,_Trac2,&_ret_arg,&iCausticAccuracy); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIARenderingShooting##classe::get_CausticRadius(double & oCausticRadius) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,45,&_Trac2,&oCausticRadius); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_CausticRadius(oCausticRadius); \
   ExitAfterCall(this,45,_Trac2,&_ret_arg,&oCausticRadius); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIARenderingShooting##classe::put_CausticRadius(double iCausticRadius) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,46,&_Trac2,&iCausticRadius); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_CausticRadius(iCausticRadius); \
   ExitAfterCall(this,46,_Trac2,&_ret_arg,&iCausticRadius); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIARenderingShooting##classe::get_GlobalIlluminationStatus(short & oGlobalIlluminationStatus) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,47,&_Trac2,&oGlobalIlluminationStatus); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_GlobalIlluminationStatus(oGlobalIlluminationStatus); \
   ExitAfterCall(this,47,_Trac2,&_ret_arg,&oGlobalIlluminationStatus); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIARenderingShooting##classe::put_GlobalIlluminationStatus(short iGlobalIlluminationStatus) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,48,&_Trac2,&iGlobalIlluminationStatus); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_GlobalIlluminationStatus(iGlobalIlluminationStatus); \
   ExitAfterCall(this,48,_Trac2,&_ret_arg,&iGlobalIlluminationStatus); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIARenderingShooting##classe::get_GlobalIlluminationAccuracy(short & oGlobalIlluminationAccuracy) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,49,&_Trac2,&oGlobalIlluminationAccuracy); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_GlobalIlluminationAccuracy(oGlobalIlluminationAccuracy); \
   ExitAfterCall(this,49,_Trac2,&_ret_arg,&oGlobalIlluminationAccuracy); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIARenderingShooting##classe::put_GlobalIlluminationAccuracy(short iGlobalIlluminationAccuracy) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,50,&_Trac2,&iGlobalIlluminationAccuracy); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_GlobalIlluminationAccuracy(iGlobalIlluminationAccuracy); \
   ExitAfterCall(this,50,_Trac2,&_ret_arg,&iGlobalIlluminationAccuracy); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIARenderingShooting##classe::get_GlobalIlluminationRadius(double & oGlobalIlluminationRadius) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,51,&_Trac2,&oGlobalIlluminationRadius); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_GlobalIlluminationRadius(oGlobalIlluminationRadius); \
   ExitAfterCall(this,51,_Trac2,&_ret_arg,&oGlobalIlluminationRadius); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIARenderingShooting##classe::put_GlobalIlluminationRadius(double iGlobalIlluminationRadius) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,52,&_Trac2,&iGlobalIlluminationRadius); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_GlobalIlluminationRadius(iGlobalIlluminationRadius); \
   ExitAfterCall(this,52,_Trac2,&_ret_arg,&iGlobalIlluminationRadius); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIARenderingShooting##classe::get_FinalGatheringStatus(short & oFinalGatheringStatus) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,53,&_Trac2,&oFinalGatheringStatus); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_FinalGatheringStatus(oFinalGatheringStatus); \
   ExitAfterCall(this,53,_Trac2,&_ret_arg,&oFinalGatheringStatus); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIARenderingShooting##classe::put_FinalGatheringStatus(short iFinalGatheringStatus) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,54,&_Trac2,&iFinalGatheringStatus); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_FinalGatheringStatus(iFinalGatheringStatus); \
   ExitAfterCall(this,54,_Trac2,&_ret_arg,&iFinalGatheringStatus); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIARenderingShooting##classe::get_FinalGatheringAccuracy(short & oFinalGatheringAccuracy) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,55,&_Trac2,&oFinalGatheringAccuracy); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_FinalGatheringAccuracy(oFinalGatheringAccuracy); \
   ExitAfterCall(this,55,_Trac2,&_ret_arg,&oFinalGatheringAccuracy); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIARenderingShooting##classe::put_FinalGatheringAccuracy(short iFinalGatheringAccuracy) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,56,&_Trac2,&iFinalGatheringAccuracy); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_FinalGatheringAccuracy(iFinalGatheringAccuracy); \
   ExitAfterCall(this,56,_Trac2,&_ret_arg,&iFinalGatheringAccuracy); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIARenderingShooting##classe::get_FinalGatheringMinRadius(double & oFinalGatheringMinRadius) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,57,&_Trac2,&oFinalGatheringMinRadius); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_FinalGatheringMinRadius(oFinalGatheringMinRadius); \
   ExitAfterCall(this,57,_Trac2,&_ret_arg,&oFinalGatheringMinRadius); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIARenderingShooting##classe::put_FinalGatheringMinRadius(double iFinalGatheringMinRadius) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,58,&_Trac2,&iFinalGatheringMinRadius); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_FinalGatheringMinRadius(iFinalGatheringMinRadius); \
   ExitAfterCall(this,58,_Trac2,&_ret_arg,&iFinalGatheringMinRadius); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIARenderingShooting##classe::get_FinalGatheringMaxRadius(double & oFinalGatheringMaxRadius) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,59,&_Trac2,&oFinalGatheringMaxRadius); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_FinalGatheringMaxRadius(oFinalGatheringMaxRadius); \
   ExitAfterCall(this,59,_Trac2,&_ret_arg,&oFinalGatheringMaxRadius); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIARenderingShooting##classe::put_FinalGatheringMaxRadius(double iFinalGatheringMaxRadius) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,60,&_Trac2,&iFinalGatheringMaxRadius); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_FinalGatheringMaxRadius(iFinalGatheringMaxRadius); \
   ExitAfterCall(this,60,_Trac2,&_ret_arg,&iFinalGatheringMaxRadius); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIARenderingShooting##classe::get_AmbientFactor(short & oAmbientFactor) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,61,&_Trac2,&oAmbientFactor); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_AmbientFactor(oAmbientFactor); \
   ExitAfterCall(this,61,_Trac2,&_ret_arg,&oAmbientFactor); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIARenderingShooting##classe::put_AmbientFactor(short iAmbientFactor) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,62,&_Trac2,&iAmbientFactor); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_AmbientFactor(iAmbientFactor); \
   ExitAfterCall(this,62,_Trac2,&_ret_arg,&iAmbientFactor); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIARenderingShooting##classe::get_DepthOfFieldStatus(short & oDepthOfFieldStatus) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,63,&_Trac2,&oDepthOfFieldStatus); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_DepthOfFieldStatus(oDepthOfFieldStatus); \
   ExitAfterCall(this,63,_Trac2,&_ret_arg,&oDepthOfFieldStatus); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIARenderingShooting##classe::put_DepthOfFieldStatus(short iDepthOfFieldStatus) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,64,&_Trac2,&iDepthOfFieldStatus); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_DepthOfFieldStatus(iDepthOfFieldStatus); \
   ExitAfterCall(this,64,_Trac2,&_ret_arg,&iDepthOfFieldStatus); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIARenderingShooting##classe::get_DepthOfFieldRadius(double & oDepthOfFieldRadius) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,65,&_Trac2,&oDepthOfFieldRadius); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_DepthOfFieldRadius(oDepthOfFieldRadius); \
   ExitAfterCall(this,65,_Trac2,&_ret_arg,&oDepthOfFieldRadius); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIARenderingShooting##classe::put_DepthOfFieldRadius(double iDepthOfFieldRadius) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,66,&_Trac2,&iDepthOfFieldRadius); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_DepthOfFieldRadius(iDepthOfFieldRadius); \
   ExitAfterCall(this,66,_Trac2,&_ret_arg,&iDepthOfFieldRadius); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIARenderingShooting##classe::get_GlowStatus(short & oGlowStatus) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,67,&_Trac2,&oGlowStatus); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_GlowStatus(oGlowStatus); \
   ExitAfterCall(this,67,_Trac2,&_ret_arg,&oGlowStatus); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIARenderingShooting##classe::put_GlowStatus(short iGlowStatus) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,68,&_Trac2,&iGlowStatus); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_GlowStatus(iGlowStatus); \
   ExitAfterCall(this,68,_Trac2,&_ret_arg,&iGlowStatus); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIARenderingShooting##classe::get_GlowThreshold(double & oGlowThreshold) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,69,&_Trac2,&oGlowThreshold); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_GlowThreshold(oGlowThreshold); \
   ExitAfterCall(this,69,_Trac2,&_ret_arg,&oGlowThreshold); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIARenderingShooting##classe::put_GlowThreshold(double iGlowThreshold) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,70,&_Trac2,&iGlowThreshold); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_GlowThreshold(iGlowThreshold); \
   ExitAfterCall(this,70,_Trac2,&_ret_arg,&iGlowThreshold); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIARenderingShooting##classe::get_GlowSize(double & oGlowSize) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,71,&_Trac2,&oGlowSize); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_GlowSize(oGlowSize); \
   ExitAfterCall(this,71,_Trac2,&_ret_arg,&oGlowSize); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIARenderingShooting##classe::put_GlowSize(double iGlowSize) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,72,&_Trac2,&iGlowSize); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_GlowSize(iGlowSize); \
   ExitAfterCall(this,72,_Trac2,&_ret_arg,&iGlowSize); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIARenderingShooting##classe::get_GlowIntensity(double & oGlowIntensity) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,73,&_Trac2,&oGlowIntensity); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_GlowIntensity(oGlowIntensity); \
   ExitAfterCall(this,73,_Trac2,&_ret_arg,&oGlowIntensity); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIARenderingShooting##classe::put_GlowIntensity(double iGlowIntensity) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,74,&_Trac2,&iGlowIntensity); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_GlowIntensity(iGlowIntensity); \
   ExitAfterCall(this,74,_Trac2,&_ret_arg,&iGlowIntensity); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIARenderingShooting##classe::get_GlowFlareFactor(double & oGlowFlareFactor) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,75,&_Trac2,&oGlowFlareFactor); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_GlowFlareFactor(oGlowFlareFactor); \
   ExitAfterCall(this,75,_Trac2,&_ret_arg,&oGlowFlareFactor); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIARenderingShooting##classe::put_GlowFlareFactor(double iGlowFlareFactor) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,76,&_Trac2,&iGlowFlareFactor); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_GlowFlareFactor(iGlowFlareFactor); \
   ExitAfterCall(this,76,_Trac2,&_ret_arg,&iGlowFlareFactor); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIARenderingShooting##classe::get_GlowFlareDiffusion(double & oGlowFlareDiffusion) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,77,&_Trac2,&oGlowFlareDiffusion); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_GlowFlareDiffusion(oGlowFlareDiffusion); \
   ExitAfterCall(this,77,_Trac2,&_ret_arg,&oGlowFlareDiffusion); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIARenderingShooting##classe::put_GlowFlareDiffusion(double iGlowFlareDiffusion) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,78,&_Trac2,&iGlowFlareDiffusion); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_GlowFlareDiffusion(iGlowFlareDiffusion); \
   ExitAfterCall(this,78,_Trac2,&_ret_arg,&iGlowFlareDiffusion); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIARenderingShooting##classe::get_GlowRadialLineSize(double & oGlowRadialLineSize) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,79,&_Trac2,&oGlowRadialLineSize); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_GlowRadialLineSize(oGlowRadialLineSize); \
   ExitAfterCall(this,79,_Trac2,&_ret_arg,&oGlowRadialLineSize); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIARenderingShooting##classe::put_GlowRadialLineSize(double iGlowRadialLineSize) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,80,&_Trac2,&iGlowRadialLineSize); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_GlowRadialLineSize(iGlowRadialLineSize); \
   ExitAfterCall(this,80,_Trac2,&_ret_arg,&iGlowRadialLineSize); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIARenderingShooting##classe::get_GlowStarEffect(double & oGlowStarEffect) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,81,&_Trac2,&oGlowStarEffect); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_GlowStarEffect(oGlowStarEffect); \
   ExitAfterCall(this,81,_Trac2,&_ret_arg,&oGlowStarEffect); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIARenderingShooting##classe::put_GlowStarEffect(double iGlowStarEffect) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,82,&_Trac2,&iGlowStarEffect); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_GlowStarEffect(iGlowStarEffect); \
   ExitAfterCall(this,82,_Trac2,&_ret_arg,&iGlowStarEffect); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIARenderingShooting##classe::get_CartoonStatus(short & oCartoonStatus) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,83,&_Trac2,&oCartoonStatus); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_CartoonStatus(oCartoonStatus); \
   ExitAfterCall(this,83,_Trac2,&_ret_arg,&oCartoonStatus); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIARenderingShooting##classe::put_CartoonStatus(short iCartoonStatus) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,84,&_Trac2,&iCartoonStatus); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_CartoonStatus(iCartoonStatus); \
   ExitAfterCall(this,84,_Trac2,&_ret_arg,&iCartoonStatus); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIARenderingShooting##classe::get_CartoonContourThickness(double & oCartoonContourThickness) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,85,&_Trac2,&oCartoonContourThickness); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_CartoonContourThickness(oCartoonContourThickness); \
   ExitAfterCall(this,85,_Trac2,&_ret_arg,&oCartoonContourThickness); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIARenderingShooting##classe::put_CartoonContourThickness(double iCartoonContourThickness) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,86,&_Trac2,&iCartoonContourThickness); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_CartoonContourThickness(iCartoonContourThickness); \
   ExitAfterCall(this,86,_Trac2,&_ret_arg,&iCartoonContourThickness); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIARenderingShooting##classe::get_CartoonShadingStatus(short & oCartoonShadingStatus) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,87,&_Trac2,&oCartoonShadingStatus); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_CartoonShadingStatus(oCartoonShadingStatus); \
   ExitAfterCall(this,87,_Trac2,&_ret_arg,&oCartoonShadingStatus); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIARenderingShooting##classe::put_CartoonShadingStatus(short iCartoonShadingStatus) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,88,&_Trac2,&iCartoonShadingStatus); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_CartoonShadingStatus(iCartoonShadingStatus); \
   ExitAfterCall(this,88,_Trac2,&_ret_arg,&iCartoonShadingStatus); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIARenderingShooting##classe::get_CartoonStrokeStatus(short & oCartoonStrokeStatus) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,89,&_Trac2,&oCartoonStrokeStatus); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_CartoonStrokeStatus(oCartoonStrokeStatus); \
   ExitAfterCall(this,89,_Trac2,&_ret_arg,&oCartoonStrokeStatus); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIARenderingShooting##classe::put_CartoonStrokeStatus(short iCartoonStrokeStatus) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,90,&_Trac2,&iCartoonStrokeStatus); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_CartoonStrokeStatus(iCartoonStrokeStatus); \
   ExitAfterCall(this,90,_Trac2,&_ret_arg,&iCartoonStrokeStatus); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIARenderingShooting##classe::Render() \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,91,&_Trac2); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->Render(); \
   ExitAfterCall(this,91,_Trac2,&_ret_arg); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIARenderingShooting##classe::get_Application(CATIAApplication *& oApplication) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,92,&_Trac2,&oApplication); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Application(oApplication); \
   ExitAfterCall(this,92,_Trac2,&_ret_arg,&oApplication); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIARenderingShooting##classe::get_Parent(CATBaseDispatch *& oParent) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,93,&_Trac2,&oParent); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Parent(oParent); \
   ExitAfterCall(this,93,_Trac2,&_ret_arg,&oParent); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIARenderingShooting##classe::get_Name(CATBSTR & oNameBSTR) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,94,&_Trac2,&oNameBSTR); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Name(oNameBSTR); \
   ExitAfterCall(this,94,_Trac2,&_ret_arg,&oNameBSTR); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIARenderingShooting##classe::put_Name(const CATBSTR & iNameBSTR) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,95,&_Trac2,&iNameBSTR); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_Name(iNameBSTR); \
   ExitAfterCall(this,95,_Trac2,&_ret_arg,&iNameBSTR); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIARenderingShooting##classe::GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,96,&_Trac2,&IDName,&RealObj); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetItem(IDName,RealObj); \
   ExitAfterCall(this,96,_Trac2,&_ret_arg,&IDName,&RealObj); \
   return(_ret_arg); \
} \



/* Macro used to link an implementation with an interface */
#define TIE_CATIARenderingShooting(classe) \
 \
 \
declare_TIE_CATIARenderingShooting(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIARenderingShooting##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIARenderingShooting,"CATIARenderingShooting",CATIARenderingShooting::MetaObject(),classe::MetaObject(),TIE); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIARenderingShooting(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIECreation(CATIARenderingShooting, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIARenderingShooting##classe(classe::MetaObject(),CATIARenderingShooting::MetaObject(),(void *)CreateTIECATIARenderingShooting##classe)



/* Macro used to link an implementation with an interface */
/* This TIE is chained on the implementation object */
#define TIEchain_CATIARenderingShooting(classe) \
 \
 \
declare_TIE_CATIARenderingShooting(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIARenderingShooting##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIARenderingShooting,"CATIARenderingShooting",CATIARenderingShooting::MetaObject(),classe::MetaObject(),TIEchain); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIARenderingShooting(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIEchainCreation(CATIARenderingShooting, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIARenderingShooting##classe(classe::MetaObject(),CATIARenderingShooting::MetaObject(),(void *)CreateTIECATIARenderingShooting##classe)


/* Macro to switch between BOA and TIE at build time */ 
#ifdef CATSYS_BOA_IS_TIE
#define BOA_CATIARenderingShooting(classe) TIE_CATIARenderingShooting(classe)
#else
#define BOA_CATIARenderingShooting(classe) CATImplementBOA(CATIARenderingShooting, classe)
#endif

#endif
