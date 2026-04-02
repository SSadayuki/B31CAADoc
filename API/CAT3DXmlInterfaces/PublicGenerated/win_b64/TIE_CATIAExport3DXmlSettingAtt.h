#ifndef __TIE_CATIAExport3DXmlSettingAtt
#define __TIE_CATIAExport3DXmlSettingAtt

#include <string.h>
#include "CATBaseUnknown.h"
#include "CATMetaClass.h"
#include "CATMacForTie.h"
#include "CATExitJournal.h"
#include "CATIAExport3DXmlSettingAtt.h"
#include "JS0DSPA.h"


#ifdef _WINDOWS_SOURCE
#define Exported __declspec(dllexport)
#define Imported __declspec(dllimport)
#else
#define Exported 
#define Imported 
#endif


/* To link an implementation with the interface CATIAExport3DXmlSettingAtt */
#define declare_TIE_CATIAExport3DXmlSettingAtt(classe) \
 \
 \
class TIECATIAExport3DXmlSettingAtt##classe : public CATIAExport3DXmlSettingAtt \
{ \
   private: \
      CATDeclareCommonTIEMembers \
   public: \
      CATDeclareTIEMethods(CATIAExport3DXmlSettingAtt, classe) \
      CATDeclareIUnknownMethodsForCATBaseUnknownTIE \
      CATDeclareIDispatchMethodsForCATBaseUnknownTIE \
      CATDeclareCATBaseUnknownMethodsForTIE \
      virtual HRESULT __stdcall get_GeometryRepresentationFormat(Cat3DXmlGeomRepresentationType & oGeometryRepresentationFormat); \
      virtual HRESULT __stdcall put_GeometryRepresentationFormat(Cat3DXmlGeomRepresentationType iGeometryRepresentationFormat); \
      virtual HRESULT __stdcall GetGeometryRepresentationFormatInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified); \
      virtual HRESULT __stdcall SetGeometryRepresentationFormatLock(CAT_VARIANT_BOOL iLocked); \
      virtual HRESULT __stdcall get_SurfaceAccuracy(float & oSurfaceAccuracy); \
      virtual HRESULT __stdcall put_SurfaceAccuracy(float iSurfaceAccuracy); \
      virtual HRESULT __stdcall GetSurfaceAccuracyInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified); \
      virtual HRESULT __stdcall SetSurfaceAccuracyLock(CAT_VARIANT_BOOL iLocked); \
      virtual HRESULT __stdcall get_AnnotatedView(CAT_VARIANT_BOOL & oIsActive); \
      virtual HRESULT __stdcall put_AnnotatedView(CAT_VARIANT_BOOL iIsActive); \
      virtual HRESULT __stdcall GetAnnotatedViewInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified); \
      virtual HRESULT __stdcall SetAnnotatedViewLock(CAT_VARIANT_BOOL iLocked); \
      virtual HRESULT __stdcall get_AlternateView(CAT_VARIANT_BOOL & oIsActive); \
      virtual HRESULT __stdcall put_AlternateView(CAT_VARIANT_BOOL iIsActive); \
      virtual HRESULT __stdcall GetAlternateViewInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified); \
      virtual HRESULT __stdcall SetAlternateViewLock(CAT_VARIANT_BOOL iLocked); \
      virtual HRESULT __stdcall get_Presentation(CAT_VARIANT_BOOL & oIsActive); \
      virtual HRESULT __stdcall put_Presentation(CAT_VARIANT_BOOL iIsActive); \
      virtual HRESULT __stdcall GetPresentationInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified); \
      virtual HRESULT __stdcall SetPresentationLock(CAT_VARIANT_BOOL iLocked); \
      virtual HRESULT __stdcall get_Section(CAT_VARIANT_BOOL & oIsActive); \
      virtual HRESULT __stdcall put_Section(CAT_VARIANT_BOOL iIsActive); \
      virtual HRESULT __stdcall GetSectionInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified); \
      virtual HRESULT __stdcall SetSectionLock(CAT_VARIANT_BOOL iLocked); \
      virtual HRESULT __stdcall get_Measure(CAT_VARIANT_BOOL & oIsActive); \
      virtual HRESULT __stdcall put_Measure(CAT_VARIANT_BOOL iIsActive); \
      virtual HRESULT __stdcall GetMeasureInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified); \
      virtual HRESULT __stdcall SetMeasureLock(CAT_VARIANT_BOOL iLocked); \
      virtual HRESULT __stdcall get_Animation(CAT_VARIANT_BOOL & oIsActive); \
      virtual HRESULT __stdcall put_Animation(CAT_VARIANT_BOOL iIsActive); \
      virtual HRESULT __stdcall GetAnimationInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified); \
      virtual HRESULT __stdcall SetAnimationLock(CAT_VARIANT_BOOL iLocked); \
      virtual HRESULT __stdcall get_Annotation3D(CAT_VARIANT_BOOL & oIsActive); \
      virtual HRESULT __stdcall put_Annotation3D(CAT_VARIANT_BOOL iIsActive); \
      virtual HRESULT __stdcall GetAnnotation3DInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified); \
      virtual HRESULT __stdcall SetAnnotation3DLock(CAT_VARIANT_BOOL iLocked); \
      virtual HRESULT __stdcall get_PPRSaveConfig(Cat3DXmlPPRSaveConfig & oProcessDocumentExport); \
      virtual HRESULT __stdcall put_PPRSaveConfig(Cat3DXmlPPRSaveConfig iProcessDocumentExport); \
      virtual HRESULT __stdcall GetPPRSaveConfigInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified); \
      virtual HRESULT __stdcall SetPPRSaveConfigLock(CAT_VARIANT_BOOL iLocked); \
      virtual HRESULT __stdcall get_DesignReview(CAT_VARIANT_BOOL & oIsActive); \
      virtual HRESULT __stdcall put_DesignReview(CAT_VARIANT_BOOL iIsActive); \
      virtual HRESULT __stdcall GetDesignReviewInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified); \
      virtual HRESULT __stdcall SetDesignReviewLock(CAT_VARIANT_BOOL iLocked); \
      virtual HRESULT __stdcall get_WorkInstructions(CAT_VARIANT_BOOL & oIsActive); \
      virtual HRESULT __stdcall put_WorkInstructions(CAT_VARIANT_BOOL iIsActive); \
      virtual HRESULT __stdcall GetWorkInstructionsInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified); \
      virtual HRESULT __stdcall SetWorkInstructionsLock(CAT_VARIANT_BOOL iLocked); \
      virtual HRESULT __stdcall Commit(); \
      virtual HRESULT __stdcall Rollback(); \
      virtual HRESULT __stdcall ResetToAdminValues(); \
      virtual HRESULT __stdcall ResetToAdminValuesByName(const CATSafeArrayVariant & iAttList); \
      virtual HRESULT __stdcall SaveRepository(); \
      virtual HRESULT  __stdcall get_Application(CATIAApplication *& oApplication); \
      virtual HRESULT  __stdcall get_Parent(CATBaseDispatch *& oParent); \
      virtual HRESULT  __stdcall get_Name(CATBSTR & oNameBSTR); \
      virtual HRESULT  __stdcall put_Name(const CATBSTR & iNameBSTR); \
      virtual HRESULT  __stdcall GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj); \
};



#define ENVTIEdeclare_CATIAExport3DXmlSettingAtt(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
virtual HRESULT __stdcall get_GeometryRepresentationFormat(Cat3DXmlGeomRepresentationType & oGeometryRepresentationFormat); \
virtual HRESULT __stdcall put_GeometryRepresentationFormat(Cat3DXmlGeomRepresentationType iGeometryRepresentationFormat); \
virtual HRESULT __stdcall GetGeometryRepresentationFormatInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified); \
virtual HRESULT __stdcall SetGeometryRepresentationFormatLock(CAT_VARIANT_BOOL iLocked); \
virtual HRESULT __stdcall get_SurfaceAccuracy(float & oSurfaceAccuracy); \
virtual HRESULT __stdcall put_SurfaceAccuracy(float iSurfaceAccuracy); \
virtual HRESULT __stdcall GetSurfaceAccuracyInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified); \
virtual HRESULT __stdcall SetSurfaceAccuracyLock(CAT_VARIANT_BOOL iLocked); \
virtual HRESULT __stdcall get_AnnotatedView(CAT_VARIANT_BOOL & oIsActive); \
virtual HRESULT __stdcall put_AnnotatedView(CAT_VARIANT_BOOL iIsActive); \
virtual HRESULT __stdcall GetAnnotatedViewInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified); \
virtual HRESULT __stdcall SetAnnotatedViewLock(CAT_VARIANT_BOOL iLocked); \
virtual HRESULT __stdcall get_AlternateView(CAT_VARIANT_BOOL & oIsActive); \
virtual HRESULT __stdcall put_AlternateView(CAT_VARIANT_BOOL iIsActive); \
virtual HRESULT __stdcall GetAlternateViewInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified); \
virtual HRESULT __stdcall SetAlternateViewLock(CAT_VARIANT_BOOL iLocked); \
virtual HRESULT __stdcall get_Presentation(CAT_VARIANT_BOOL & oIsActive); \
virtual HRESULT __stdcall put_Presentation(CAT_VARIANT_BOOL iIsActive); \
virtual HRESULT __stdcall GetPresentationInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified); \
virtual HRESULT __stdcall SetPresentationLock(CAT_VARIANT_BOOL iLocked); \
virtual HRESULT __stdcall get_Section(CAT_VARIANT_BOOL & oIsActive); \
virtual HRESULT __stdcall put_Section(CAT_VARIANT_BOOL iIsActive); \
virtual HRESULT __stdcall GetSectionInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified); \
virtual HRESULT __stdcall SetSectionLock(CAT_VARIANT_BOOL iLocked); \
virtual HRESULT __stdcall get_Measure(CAT_VARIANT_BOOL & oIsActive); \
virtual HRESULT __stdcall put_Measure(CAT_VARIANT_BOOL iIsActive); \
virtual HRESULT __stdcall GetMeasureInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified); \
virtual HRESULT __stdcall SetMeasureLock(CAT_VARIANT_BOOL iLocked); \
virtual HRESULT __stdcall get_Animation(CAT_VARIANT_BOOL & oIsActive); \
virtual HRESULT __stdcall put_Animation(CAT_VARIANT_BOOL iIsActive); \
virtual HRESULT __stdcall GetAnimationInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified); \
virtual HRESULT __stdcall SetAnimationLock(CAT_VARIANT_BOOL iLocked); \
virtual HRESULT __stdcall get_Annotation3D(CAT_VARIANT_BOOL & oIsActive); \
virtual HRESULT __stdcall put_Annotation3D(CAT_VARIANT_BOOL iIsActive); \
virtual HRESULT __stdcall GetAnnotation3DInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified); \
virtual HRESULT __stdcall SetAnnotation3DLock(CAT_VARIANT_BOOL iLocked); \
virtual HRESULT __stdcall get_PPRSaveConfig(Cat3DXmlPPRSaveConfig & oProcessDocumentExport); \
virtual HRESULT __stdcall put_PPRSaveConfig(Cat3DXmlPPRSaveConfig iProcessDocumentExport); \
virtual HRESULT __stdcall GetPPRSaveConfigInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified); \
virtual HRESULT __stdcall SetPPRSaveConfigLock(CAT_VARIANT_BOOL iLocked); \
virtual HRESULT __stdcall get_DesignReview(CAT_VARIANT_BOOL & oIsActive); \
virtual HRESULT __stdcall put_DesignReview(CAT_VARIANT_BOOL iIsActive); \
virtual HRESULT __stdcall GetDesignReviewInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified); \
virtual HRESULT __stdcall SetDesignReviewLock(CAT_VARIANT_BOOL iLocked); \
virtual HRESULT __stdcall get_WorkInstructions(CAT_VARIANT_BOOL & oIsActive); \
virtual HRESULT __stdcall put_WorkInstructions(CAT_VARIANT_BOOL iIsActive); \
virtual HRESULT __stdcall GetWorkInstructionsInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified); \
virtual HRESULT __stdcall SetWorkInstructionsLock(CAT_VARIANT_BOOL iLocked); \
virtual HRESULT __stdcall Commit(); \
virtual HRESULT __stdcall Rollback(); \
virtual HRESULT __stdcall ResetToAdminValues(); \
virtual HRESULT __stdcall ResetToAdminValuesByName(const CATSafeArrayVariant & iAttList); \
virtual HRESULT __stdcall SaveRepository(); \
virtual HRESULT  __stdcall get_Application(CATIAApplication *& oApplication); \
virtual HRESULT  __stdcall get_Parent(CATBaseDispatch *& oParent); \
virtual HRESULT  __stdcall get_Name(CATBSTR & oNameBSTR); \
virtual HRESULT  __stdcall put_Name(const CATBSTR & iNameBSTR); \
virtual HRESULT  __stdcall GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj); \


#define ENVTIEdefine_CATIAExport3DXmlSettingAtt(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
HRESULT __stdcall  ENVTIEName::get_GeometryRepresentationFormat(Cat3DXmlGeomRepresentationType & oGeometryRepresentationFormat) \
{ \
return (ENVTIECALL(CATIAExport3DXmlSettingAtt,ENVTIETypeLetter,ENVTIELetter)get_GeometryRepresentationFormat(oGeometryRepresentationFormat)); \
} \
HRESULT __stdcall  ENVTIEName::put_GeometryRepresentationFormat(Cat3DXmlGeomRepresentationType iGeometryRepresentationFormat) \
{ \
return (ENVTIECALL(CATIAExport3DXmlSettingAtt,ENVTIETypeLetter,ENVTIELetter)put_GeometryRepresentationFormat(iGeometryRepresentationFormat)); \
} \
HRESULT __stdcall  ENVTIEName::GetGeometryRepresentationFormatInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified) \
{ \
return (ENVTIECALL(CATIAExport3DXmlSettingAtt,ENVTIETypeLetter,ENVTIELetter)GetGeometryRepresentationFormatInfo(ioAdminLevel,ioLocked,oModified)); \
} \
HRESULT __stdcall  ENVTIEName::SetGeometryRepresentationFormatLock(CAT_VARIANT_BOOL iLocked) \
{ \
return (ENVTIECALL(CATIAExport3DXmlSettingAtt,ENVTIETypeLetter,ENVTIELetter)SetGeometryRepresentationFormatLock(iLocked)); \
} \
HRESULT __stdcall  ENVTIEName::get_SurfaceAccuracy(float & oSurfaceAccuracy) \
{ \
return (ENVTIECALL(CATIAExport3DXmlSettingAtt,ENVTIETypeLetter,ENVTIELetter)get_SurfaceAccuracy(oSurfaceAccuracy)); \
} \
HRESULT __stdcall  ENVTIEName::put_SurfaceAccuracy(float iSurfaceAccuracy) \
{ \
return (ENVTIECALL(CATIAExport3DXmlSettingAtt,ENVTIETypeLetter,ENVTIELetter)put_SurfaceAccuracy(iSurfaceAccuracy)); \
} \
HRESULT __stdcall  ENVTIEName::GetSurfaceAccuracyInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified) \
{ \
return (ENVTIECALL(CATIAExport3DXmlSettingAtt,ENVTIETypeLetter,ENVTIELetter)GetSurfaceAccuracyInfo(ioAdminLevel,ioLocked,oModified)); \
} \
HRESULT __stdcall  ENVTIEName::SetSurfaceAccuracyLock(CAT_VARIANT_BOOL iLocked) \
{ \
return (ENVTIECALL(CATIAExport3DXmlSettingAtt,ENVTIETypeLetter,ENVTIELetter)SetSurfaceAccuracyLock(iLocked)); \
} \
HRESULT __stdcall  ENVTIEName::get_AnnotatedView(CAT_VARIANT_BOOL & oIsActive) \
{ \
return (ENVTIECALL(CATIAExport3DXmlSettingAtt,ENVTIETypeLetter,ENVTIELetter)get_AnnotatedView(oIsActive)); \
} \
HRESULT __stdcall  ENVTIEName::put_AnnotatedView(CAT_VARIANT_BOOL iIsActive) \
{ \
return (ENVTIECALL(CATIAExport3DXmlSettingAtt,ENVTIETypeLetter,ENVTIELetter)put_AnnotatedView(iIsActive)); \
} \
HRESULT __stdcall  ENVTIEName::GetAnnotatedViewInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified) \
{ \
return (ENVTIECALL(CATIAExport3DXmlSettingAtt,ENVTIETypeLetter,ENVTIELetter)GetAnnotatedViewInfo(ioAdminLevel,ioLocked,oModified)); \
} \
HRESULT __stdcall  ENVTIEName::SetAnnotatedViewLock(CAT_VARIANT_BOOL iLocked) \
{ \
return (ENVTIECALL(CATIAExport3DXmlSettingAtt,ENVTIETypeLetter,ENVTIELetter)SetAnnotatedViewLock(iLocked)); \
} \
HRESULT __stdcall  ENVTIEName::get_AlternateView(CAT_VARIANT_BOOL & oIsActive) \
{ \
return (ENVTIECALL(CATIAExport3DXmlSettingAtt,ENVTIETypeLetter,ENVTIELetter)get_AlternateView(oIsActive)); \
} \
HRESULT __stdcall  ENVTIEName::put_AlternateView(CAT_VARIANT_BOOL iIsActive) \
{ \
return (ENVTIECALL(CATIAExport3DXmlSettingAtt,ENVTIETypeLetter,ENVTIELetter)put_AlternateView(iIsActive)); \
} \
HRESULT __stdcall  ENVTIEName::GetAlternateViewInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified) \
{ \
return (ENVTIECALL(CATIAExport3DXmlSettingAtt,ENVTIETypeLetter,ENVTIELetter)GetAlternateViewInfo(ioAdminLevel,ioLocked,oModified)); \
} \
HRESULT __stdcall  ENVTIEName::SetAlternateViewLock(CAT_VARIANT_BOOL iLocked) \
{ \
return (ENVTIECALL(CATIAExport3DXmlSettingAtt,ENVTIETypeLetter,ENVTIELetter)SetAlternateViewLock(iLocked)); \
} \
HRESULT __stdcall  ENVTIEName::get_Presentation(CAT_VARIANT_BOOL & oIsActive) \
{ \
return (ENVTIECALL(CATIAExport3DXmlSettingAtt,ENVTIETypeLetter,ENVTIELetter)get_Presentation(oIsActive)); \
} \
HRESULT __stdcall  ENVTIEName::put_Presentation(CAT_VARIANT_BOOL iIsActive) \
{ \
return (ENVTIECALL(CATIAExport3DXmlSettingAtt,ENVTIETypeLetter,ENVTIELetter)put_Presentation(iIsActive)); \
} \
HRESULT __stdcall  ENVTIEName::GetPresentationInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified) \
{ \
return (ENVTIECALL(CATIAExport3DXmlSettingAtt,ENVTIETypeLetter,ENVTIELetter)GetPresentationInfo(ioAdminLevel,ioLocked,oModified)); \
} \
HRESULT __stdcall  ENVTIEName::SetPresentationLock(CAT_VARIANT_BOOL iLocked) \
{ \
return (ENVTIECALL(CATIAExport3DXmlSettingAtt,ENVTIETypeLetter,ENVTIELetter)SetPresentationLock(iLocked)); \
} \
HRESULT __stdcall  ENVTIEName::get_Section(CAT_VARIANT_BOOL & oIsActive) \
{ \
return (ENVTIECALL(CATIAExport3DXmlSettingAtt,ENVTIETypeLetter,ENVTIELetter)get_Section(oIsActive)); \
} \
HRESULT __stdcall  ENVTIEName::put_Section(CAT_VARIANT_BOOL iIsActive) \
{ \
return (ENVTIECALL(CATIAExport3DXmlSettingAtt,ENVTIETypeLetter,ENVTIELetter)put_Section(iIsActive)); \
} \
HRESULT __stdcall  ENVTIEName::GetSectionInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified) \
{ \
return (ENVTIECALL(CATIAExport3DXmlSettingAtt,ENVTIETypeLetter,ENVTIELetter)GetSectionInfo(ioAdminLevel,ioLocked,oModified)); \
} \
HRESULT __stdcall  ENVTIEName::SetSectionLock(CAT_VARIANT_BOOL iLocked) \
{ \
return (ENVTIECALL(CATIAExport3DXmlSettingAtt,ENVTIETypeLetter,ENVTIELetter)SetSectionLock(iLocked)); \
} \
HRESULT __stdcall  ENVTIEName::get_Measure(CAT_VARIANT_BOOL & oIsActive) \
{ \
return (ENVTIECALL(CATIAExport3DXmlSettingAtt,ENVTIETypeLetter,ENVTIELetter)get_Measure(oIsActive)); \
} \
HRESULT __stdcall  ENVTIEName::put_Measure(CAT_VARIANT_BOOL iIsActive) \
{ \
return (ENVTIECALL(CATIAExport3DXmlSettingAtt,ENVTIETypeLetter,ENVTIELetter)put_Measure(iIsActive)); \
} \
HRESULT __stdcall  ENVTIEName::GetMeasureInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified) \
{ \
return (ENVTIECALL(CATIAExport3DXmlSettingAtt,ENVTIETypeLetter,ENVTIELetter)GetMeasureInfo(ioAdminLevel,ioLocked,oModified)); \
} \
HRESULT __stdcall  ENVTIEName::SetMeasureLock(CAT_VARIANT_BOOL iLocked) \
{ \
return (ENVTIECALL(CATIAExport3DXmlSettingAtt,ENVTIETypeLetter,ENVTIELetter)SetMeasureLock(iLocked)); \
} \
HRESULT __stdcall  ENVTIEName::get_Animation(CAT_VARIANT_BOOL & oIsActive) \
{ \
return (ENVTIECALL(CATIAExport3DXmlSettingAtt,ENVTIETypeLetter,ENVTIELetter)get_Animation(oIsActive)); \
} \
HRESULT __stdcall  ENVTIEName::put_Animation(CAT_VARIANT_BOOL iIsActive) \
{ \
return (ENVTIECALL(CATIAExport3DXmlSettingAtt,ENVTIETypeLetter,ENVTIELetter)put_Animation(iIsActive)); \
} \
HRESULT __stdcall  ENVTIEName::GetAnimationInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified) \
{ \
return (ENVTIECALL(CATIAExport3DXmlSettingAtt,ENVTIETypeLetter,ENVTIELetter)GetAnimationInfo(ioAdminLevel,ioLocked,oModified)); \
} \
HRESULT __stdcall  ENVTIEName::SetAnimationLock(CAT_VARIANT_BOOL iLocked) \
{ \
return (ENVTIECALL(CATIAExport3DXmlSettingAtt,ENVTIETypeLetter,ENVTIELetter)SetAnimationLock(iLocked)); \
} \
HRESULT __stdcall  ENVTIEName::get_Annotation3D(CAT_VARIANT_BOOL & oIsActive) \
{ \
return (ENVTIECALL(CATIAExport3DXmlSettingAtt,ENVTIETypeLetter,ENVTIELetter)get_Annotation3D(oIsActive)); \
} \
HRESULT __stdcall  ENVTIEName::put_Annotation3D(CAT_VARIANT_BOOL iIsActive) \
{ \
return (ENVTIECALL(CATIAExport3DXmlSettingAtt,ENVTIETypeLetter,ENVTIELetter)put_Annotation3D(iIsActive)); \
} \
HRESULT __stdcall  ENVTIEName::GetAnnotation3DInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified) \
{ \
return (ENVTIECALL(CATIAExport3DXmlSettingAtt,ENVTIETypeLetter,ENVTIELetter)GetAnnotation3DInfo(ioAdminLevel,ioLocked,oModified)); \
} \
HRESULT __stdcall  ENVTIEName::SetAnnotation3DLock(CAT_VARIANT_BOOL iLocked) \
{ \
return (ENVTIECALL(CATIAExport3DXmlSettingAtt,ENVTIETypeLetter,ENVTIELetter)SetAnnotation3DLock(iLocked)); \
} \
HRESULT __stdcall  ENVTIEName::get_PPRSaveConfig(Cat3DXmlPPRSaveConfig & oProcessDocumentExport) \
{ \
return (ENVTIECALL(CATIAExport3DXmlSettingAtt,ENVTIETypeLetter,ENVTIELetter)get_PPRSaveConfig(oProcessDocumentExport)); \
} \
HRESULT __stdcall  ENVTIEName::put_PPRSaveConfig(Cat3DXmlPPRSaveConfig iProcessDocumentExport) \
{ \
return (ENVTIECALL(CATIAExport3DXmlSettingAtt,ENVTIETypeLetter,ENVTIELetter)put_PPRSaveConfig(iProcessDocumentExport)); \
} \
HRESULT __stdcall  ENVTIEName::GetPPRSaveConfigInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified) \
{ \
return (ENVTIECALL(CATIAExport3DXmlSettingAtt,ENVTIETypeLetter,ENVTIELetter)GetPPRSaveConfigInfo(ioAdminLevel,ioLocked,oModified)); \
} \
HRESULT __stdcall  ENVTIEName::SetPPRSaveConfigLock(CAT_VARIANT_BOOL iLocked) \
{ \
return (ENVTIECALL(CATIAExport3DXmlSettingAtt,ENVTIETypeLetter,ENVTIELetter)SetPPRSaveConfigLock(iLocked)); \
} \
HRESULT __stdcall  ENVTIEName::get_DesignReview(CAT_VARIANT_BOOL & oIsActive) \
{ \
return (ENVTIECALL(CATIAExport3DXmlSettingAtt,ENVTIETypeLetter,ENVTIELetter)get_DesignReview(oIsActive)); \
} \
HRESULT __stdcall  ENVTIEName::put_DesignReview(CAT_VARIANT_BOOL iIsActive) \
{ \
return (ENVTIECALL(CATIAExport3DXmlSettingAtt,ENVTIETypeLetter,ENVTIELetter)put_DesignReview(iIsActive)); \
} \
HRESULT __stdcall  ENVTIEName::GetDesignReviewInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified) \
{ \
return (ENVTIECALL(CATIAExport3DXmlSettingAtt,ENVTIETypeLetter,ENVTIELetter)GetDesignReviewInfo(ioAdminLevel,ioLocked,oModified)); \
} \
HRESULT __stdcall  ENVTIEName::SetDesignReviewLock(CAT_VARIANT_BOOL iLocked) \
{ \
return (ENVTIECALL(CATIAExport3DXmlSettingAtt,ENVTIETypeLetter,ENVTIELetter)SetDesignReviewLock(iLocked)); \
} \
HRESULT __stdcall  ENVTIEName::get_WorkInstructions(CAT_VARIANT_BOOL & oIsActive) \
{ \
return (ENVTIECALL(CATIAExport3DXmlSettingAtt,ENVTIETypeLetter,ENVTIELetter)get_WorkInstructions(oIsActive)); \
} \
HRESULT __stdcall  ENVTIEName::put_WorkInstructions(CAT_VARIANT_BOOL iIsActive) \
{ \
return (ENVTIECALL(CATIAExport3DXmlSettingAtt,ENVTIETypeLetter,ENVTIELetter)put_WorkInstructions(iIsActive)); \
} \
HRESULT __stdcall  ENVTIEName::GetWorkInstructionsInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified) \
{ \
return (ENVTIECALL(CATIAExport3DXmlSettingAtt,ENVTIETypeLetter,ENVTIELetter)GetWorkInstructionsInfo(ioAdminLevel,ioLocked,oModified)); \
} \
HRESULT __stdcall  ENVTIEName::SetWorkInstructionsLock(CAT_VARIANT_BOOL iLocked) \
{ \
return (ENVTIECALL(CATIAExport3DXmlSettingAtt,ENVTIETypeLetter,ENVTIELetter)SetWorkInstructionsLock(iLocked)); \
} \
HRESULT __stdcall  ENVTIEName::Commit() \
{ \
return (ENVTIECALL(CATIAExport3DXmlSettingAtt,ENVTIETypeLetter,ENVTIELetter)Commit()); \
} \
HRESULT __stdcall  ENVTIEName::Rollback() \
{ \
return (ENVTIECALL(CATIAExport3DXmlSettingAtt,ENVTIETypeLetter,ENVTIELetter)Rollback()); \
} \
HRESULT __stdcall  ENVTIEName::ResetToAdminValues() \
{ \
return (ENVTIECALL(CATIAExport3DXmlSettingAtt,ENVTIETypeLetter,ENVTIELetter)ResetToAdminValues()); \
} \
HRESULT __stdcall  ENVTIEName::ResetToAdminValuesByName(const CATSafeArrayVariant & iAttList) \
{ \
return (ENVTIECALL(CATIAExport3DXmlSettingAtt,ENVTIETypeLetter,ENVTIELetter)ResetToAdminValuesByName(iAttList)); \
} \
HRESULT __stdcall  ENVTIEName::SaveRepository() \
{ \
return (ENVTIECALL(CATIAExport3DXmlSettingAtt,ENVTIETypeLetter,ENVTIELetter)SaveRepository()); \
} \
HRESULT  __stdcall  ENVTIEName::get_Application(CATIAApplication *& oApplication) \
{ \
return (ENVTIECALL(CATIAExport3DXmlSettingAtt,ENVTIETypeLetter,ENVTIELetter)get_Application(oApplication)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Parent(CATBaseDispatch *& oParent) \
{ \
return (ENVTIECALL(CATIAExport3DXmlSettingAtt,ENVTIETypeLetter,ENVTIELetter)get_Parent(oParent)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Name(CATBSTR & oNameBSTR) \
{ \
return (ENVTIECALL(CATIAExport3DXmlSettingAtt,ENVTIETypeLetter,ENVTIELetter)get_Name(oNameBSTR)); \
} \
HRESULT  __stdcall  ENVTIEName::put_Name(const CATBSTR & iNameBSTR) \
{ \
return (ENVTIECALL(CATIAExport3DXmlSettingAtt,ENVTIETypeLetter,ENVTIELetter)put_Name(iNameBSTR)); \
} \
HRESULT  __stdcall  ENVTIEName::GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj) \
{ \
return (ENVTIECALL(CATIAExport3DXmlSettingAtt,ENVTIETypeLetter,ENVTIELetter)GetItem(IDName,RealObj)); \
} \


/* Name of the TIE class */
#define class_TIE_CATIAExport3DXmlSettingAtt(classe)    TIECATIAExport3DXmlSettingAtt##classe


/* Common methods inside a TIE */
#define common_TIE_CATIAExport3DXmlSettingAtt(classe) \
 \
 \
/* Static initialization */ \
CATDefineCommonTIEMembers(CATIAExport3DXmlSettingAtt, classe) \
 \
 \
CATImplementTIEMethods(CATIAExport3DXmlSettingAtt, classe) \
CATImplementIUnknownMethodsForCATBaseUnknownTIE(CATIAExport3DXmlSettingAtt, classe, 2) \
CATImplementIDispatchMethodsForCATBaseUnknownTIE(CATIAExport3DXmlSettingAtt, classe) \
CATImplementCATBaseUnknownMethodsForTIE(CATIAExport3DXmlSettingAtt, classe) \
 \
HRESULT __stdcall  TIECATIAExport3DXmlSettingAtt##classe::get_GeometryRepresentationFormat(Cat3DXmlGeomRepresentationType & oGeometryRepresentationFormat) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,1,&_Trac2,&oGeometryRepresentationFormat); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_GeometryRepresentationFormat(oGeometryRepresentationFormat); \
   ExitAfterCall(this,1,_Trac2,&_ret_arg,&oGeometryRepresentationFormat); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAExport3DXmlSettingAtt##classe::put_GeometryRepresentationFormat(Cat3DXmlGeomRepresentationType iGeometryRepresentationFormat) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,2,&_Trac2,&iGeometryRepresentationFormat); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_GeometryRepresentationFormat(iGeometryRepresentationFormat); \
   ExitAfterCall(this,2,_Trac2,&_ret_arg,&iGeometryRepresentationFormat); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAExport3DXmlSettingAtt##classe::GetGeometryRepresentationFormatInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,3,&_Trac2,&ioAdminLevel,&ioLocked,&oModified); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetGeometryRepresentationFormatInfo(ioAdminLevel,ioLocked,oModified); \
   ExitAfterCall(this,3,_Trac2,&_ret_arg,&ioAdminLevel,&ioLocked,&oModified); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAExport3DXmlSettingAtt##classe::SetGeometryRepresentationFormatLock(CAT_VARIANT_BOOL iLocked) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,4,&_Trac2,&iLocked); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetGeometryRepresentationFormatLock(iLocked); \
   ExitAfterCall(this,4,_Trac2,&_ret_arg,&iLocked); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAExport3DXmlSettingAtt##classe::get_SurfaceAccuracy(float & oSurfaceAccuracy) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,5,&_Trac2,&oSurfaceAccuracy); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_SurfaceAccuracy(oSurfaceAccuracy); \
   ExitAfterCall(this,5,_Trac2,&_ret_arg,&oSurfaceAccuracy); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAExport3DXmlSettingAtt##classe::put_SurfaceAccuracy(float iSurfaceAccuracy) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,6,&_Trac2,&iSurfaceAccuracy); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_SurfaceAccuracy(iSurfaceAccuracy); \
   ExitAfterCall(this,6,_Trac2,&_ret_arg,&iSurfaceAccuracy); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAExport3DXmlSettingAtt##classe::GetSurfaceAccuracyInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,7,&_Trac2,&ioAdminLevel,&ioLocked,&oModified); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetSurfaceAccuracyInfo(ioAdminLevel,ioLocked,oModified); \
   ExitAfterCall(this,7,_Trac2,&_ret_arg,&ioAdminLevel,&ioLocked,&oModified); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAExport3DXmlSettingAtt##classe::SetSurfaceAccuracyLock(CAT_VARIANT_BOOL iLocked) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,8,&_Trac2,&iLocked); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetSurfaceAccuracyLock(iLocked); \
   ExitAfterCall(this,8,_Trac2,&_ret_arg,&iLocked); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAExport3DXmlSettingAtt##classe::get_AnnotatedView(CAT_VARIANT_BOOL & oIsActive) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,9,&_Trac2,&oIsActive); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_AnnotatedView(oIsActive); \
   ExitAfterCall(this,9,_Trac2,&_ret_arg,&oIsActive); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAExport3DXmlSettingAtt##classe::put_AnnotatedView(CAT_VARIANT_BOOL iIsActive) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,10,&_Trac2,&iIsActive); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_AnnotatedView(iIsActive); \
   ExitAfterCall(this,10,_Trac2,&_ret_arg,&iIsActive); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAExport3DXmlSettingAtt##classe::GetAnnotatedViewInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,11,&_Trac2,&ioAdminLevel,&ioLocked,&oModified); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetAnnotatedViewInfo(ioAdminLevel,ioLocked,oModified); \
   ExitAfterCall(this,11,_Trac2,&_ret_arg,&ioAdminLevel,&ioLocked,&oModified); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAExport3DXmlSettingAtt##classe::SetAnnotatedViewLock(CAT_VARIANT_BOOL iLocked) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,12,&_Trac2,&iLocked); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetAnnotatedViewLock(iLocked); \
   ExitAfterCall(this,12,_Trac2,&_ret_arg,&iLocked); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAExport3DXmlSettingAtt##classe::get_AlternateView(CAT_VARIANT_BOOL & oIsActive) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,13,&_Trac2,&oIsActive); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_AlternateView(oIsActive); \
   ExitAfterCall(this,13,_Trac2,&_ret_arg,&oIsActive); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAExport3DXmlSettingAtt##classe::put_AlternateView(CAT_VARIANT_BOOL iIsActive) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,14,&_Trac2,&iIsActive); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_AlternateView(iIsActive); \
   ExitAfterCall(this,14,_Trac2,&_ret_arg,&iIsActive); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAExport3DXmlSettingAtt##classe::GetAlternateViewInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,15,&_Trac2,&ioAdminLevel,&ioLocked,&oModified); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetAlternateViewInfo(ioAdminLevel,ioLocked,oModified); \
   ExitAfterCall(this,15,_Trac2,&_ret_arg,&ioAdminLevel,&ioLocked,&oModified); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAExport3DXmlSettingAtt##classe::SetAlternateViewLock(CAT_VARIANT_BOOL iLocked) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,16,&_Trac2,&iLocked); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetAlternateViewLock(iLocked); \
   ExitAfterCall(this,16,_Trac2,&_ret_arg,&iLocked); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAExport3DXmlSettingAtt##classe::get_Presentation(CAT_VARIANT_BOOL & oIsActive) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,17,&_Trac2,&oIsActive); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Presentation(oIsActive); \
   ExitAfterCall(this,17,_Trac2,&_ret_arg,&oIsActive); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAExport3DXmlSettingAtt##classe::put_Presentation(CAT_VARIANT_BOOL iIsActive) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,18,&_Trac2,&iIsActive); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_Presentation(iIsActive); \
   ExitAfterCall(this,18,_Trac2,&_ret_arg,&iIsActive); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAExport3DXmlSettingAtt##classe::GetPresentationInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,19,&_Trac2,&ioAdminLevel,&ioLocked,&oModified); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetPresentationInfo(ioAdminLevel,ioLocked,oModified); \
   ExitAfterCall(this,19,_Trac2,&_ret_arg,&ioAdminLevel,&ioLocked,&oModified); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAExport3DXmlSettingAtt##classe::SetPresentationLock(CAT_VARIANT_BOOL iLocked) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,20,&_Trac2,&iLocked); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetPresentationLock(iLocked); \
   ExitAfterCall(this,20,_Trac2,&_ret_arg,&iLocked); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAExport3DXmlSettingAtt##classe::get_Section(CAT_VARIANT_BOOL & oIsActive) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,21,&_Trac2,&oIsActive); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Section(oIsActive); \
   ExitAfterCall(this,21,_Trac2,&_ret_arg,&oIsActive); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAExport3DXmlSettingAtt##classe::put_Section(CAT_VARIANT_BOOL iIsActive) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,22,&_Trac2,&iIsActive); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_Section(iIsActive); \
   ExitAfterCall(this,22,_Trac2,&_ret_arg,&iIsActive); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAExport3DXmlSettingAtt##classe::GetSectionInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,23,&_Trac2,&ioAdminLevel,&ioLocked,&oModified); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetSectionInfo(ioAdminLevel,ioLocked,oModified); \
   ExitAfterCall(this,23,_Trac2,&_ret_arg,&ioAdminLevel,&ioLocked,&oModified); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAExport3DXmlSettingAtt##classe::SetSectionLock(CAT_VARIANT_BOOL iLocked) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,24,&_Trac2,&iLocked); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetSectionLock(iLocked); \
   ExitAfterCall(this,24,_Trac2,&_ret_arg,&iLocked); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAExport3DXmlSettingAtt##classe::get_Measure(CAT_VARIANT_BOOL & oIsActive) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,25,&_Trac2,&oIsActive); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Measure(oIsActive); \
   ExitAfterCall(this,25,_Trac2,&_ret_arg,&oIsActive); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAExport3DXmlSettingAtt##classe::put_Measure(CAT_VARIANT_BOOL iIsActive) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,26,&_Trac2,&iIsActive); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_Measure(iIsActive); \
   ExitAfterCall(this,26,_Trac2,&_ret_arg,&iIsActive); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAExport3DXmlSettingAtt##classe::GetMeasureInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,27,&_Trac2,&ioAdminLevel,&ioLocked,&oModified); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetMeasureInfo(ioAdminLevel,ioLocked,oModified); \
   ExitAfterCall(this,27,_Trac2,&_ret_arg,&ioAdminLevel,&ioLocked,&oModified); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAExport3DXmlSettingAtt##classe::SetMeasureLock(CAT_VARIANT_BOOL iLocked) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,28,&_Trac2,&iLocked); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetMeasureLock(iLocked); \
   ExitAfterCall(this,28,_Trac2,&_ret_arg,&iLocked); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAExport3DXmlSettingAtt##classe::get_Animation(CAT_VARIANT_BOOL & oIsActive) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,29,&_Trac2,&oIsActive); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Animation(oIsActive); \
   ExitAfterCall(this,29,_Trac2,&_ret_arg,&oIsActive); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAExport3DXmlSettingAtt##classe::put_Animation(CAT_VARIANT_BOOL iIsActive) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,30,&_Trac2,&iIsActive); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_Animation(iIsActive); \
   ExitAfterCall(this,30,_Trac2,&_ret_arg,&iIsActive); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAExport3DXmlSettingAtt##classe::GetAnimationInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,31,&_Trac2,&ioAdminLevel,&ioLocked,&oModified); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetAnimationInfo(ioAdminLevel,ioLocked,oModified); \
   ExitAfterCall(this,31,_Trac2,&_ret_arg,&ioAdminLevel,&ioLocked,&oModified); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAExport3DXmlSettingAtt##classe::SetAnimationLock(CAT_VARIANT_BOOL iLocked) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,32,&_Trac2,&iLocked); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetAnimationLock(iLocked); \
   ExitAfterCall(this,32,_Trac2,&_ret_arg,&iLocked); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAExport3DXmlSettingAtt##classe::get_Annotation3D(CAT_VARIANT_BOOL & oIsActive) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,33,&_Trac2,&oIsActive); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Annotation3D(oIsActive); \
   ExitAfterCall(this,33,_Trac2,&_ret_arg,&oIsActive); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAExport3DXmlSettingAtt##classe::put_Annotation3D(CAT_VARIANT_BOOL iIsActive) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,34,&_Trac2,&iIsActive); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_Annotation3D(iIsActive); \
   ExitAfterCall(this,34,_Trac2,&_ret_arg,&iIsActive); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAExport3DXmlSettingAtt##classe::GetAnnotation3DInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,35,&_Trac2,&ioAdminLevel,&ioLocked,&oModified); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetAnnotation3DInfo(ioAdminLevel,ioLocked,oModified); \
   ExitAfterCall(this,35,_Trac2,&_ret_arg,&ioAdminLevel,&ioLocked,&oModified); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAExport3DXmlSettingAtt##classe::SetAnnotation3DLock(CAT_VARIANT_BOOL iLocked) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,36,&_Trac2,&iLocked); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetAnnotation3DLock(iLocked); \
   ExitAfterCall(this,36,_Trac2,&_ret_arg,&iLocked); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAExport3DXmlSettingAtt##classe::get_PPRSaveConfig(Cat3DXmlPPRSaveConfig & oProcessDocumentExport) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,37,&_Trac2,&oProcessDocumentExport); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_PPRSaveConfig(oProcessDocumentExport); \
   ExitAfterCall(this,37,_Trac2,&_ret_arg,&oProcessDocumentExport); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAExport3DXmlSettingAtt##classe::put_PPRSaveConfig(Cat3DXmlPPRSaveConfig iProcessDocumentExport) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,38,&_Trac2,&iProcessDocumentExport); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_PPRSaveConfig(iProcessDocumentExport); \
   ExitAfterCall(this,38,_Trac2,&_ret_arg,&iProcessDocumentExport); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAExport3DXmlSettingAtt##classe::GetPPRSaveConfigInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,39,&_Trac2,&ioAdminLevel,&ioLocked,&oModified); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetPPRSaveConfigInfo(ioAdminLevel,ioLocked,oModified); \
   ExitAfterCall(this,39,_Trac2,&_ret_arg,&ioAdminLevel,&ioLocked,&oModified); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAExport3DXmlSettingAtt##classe::SetPPRSaveConfigLock(CAT_VARIANT_BOOL iLocked) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,40,&_Trac2,&iLocked); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetPPRSaveConfigLock(iLocked); \
   ExitAfterCall(this,40,_Trac2,&_ret_arg,&iLocked); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAExport3DXmlSettingAtt##classe::get_DesignReview(CAT_VARIANT_BOOL & oIsActive) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,41,&_Trac2,&oIsActive); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_DesignReview(oIsActive); \
   ExitAfterCall(this,41,_Trac2,&_ret_arg,&oIsActive); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAExport3DXmlSettingAtt##classe::put_DesignReview(CAT_VARIANT_BOOL iIsActive) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,42,&_Trac2,&iIsActive); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_DesignReview(iIsActive); \
   ExitAfterCall(this,42,_Trac2,&_ret_arg,&iIsActive); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAExport3DXmlSettingAtt##classe::GetDesignReviewInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,43,&_Trac2,&ioAdminLevel,&ioLocked,&oModified); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetDesignReviewInfo(ioAdminLevel,ioLocked,oModified); \
   ExitAfterCall(this,43,_Trac2,&_ret_arg,&ioAdminLevel,&ioLocked,&oModified); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAExport3DXmlSettingAtt##classe::SetDesignReviewLock(CAT_VARIANT_BOOL iLocked) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,44,&_Trac2,&iLocked); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetDesignReviewLock(iLocked); \
   ExitAfterCall(this,44,_Trac2,&_ret_arg,&iLocked); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAExport3DXmlSettingAtt##classe::get_WorkInstructions(CAT_VARIANT_BOOL & oIsActive) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,45,&_Trac2,&oIsActive); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_WorkInstructions(oIsActive); \
   ExitAfterCall(this,45,_Trac2,&_ret_arg,&oIsActive); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAExport3DXmlSettingAtt##classe::put_WorkInstructions(CAT_VARIANT_BOOL iIsActive) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,46,&_Trac2,&iIsActive); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_WorkInstructions(iIsActive); \
   ExitAfterCall(this,46,_Trac2,&_ret_arg,&iIsActive); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAExport3DXmlSettingAtt##classe::GetWorkInstructionsInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,47,&_Trac2,&ioAdminLevel,&ioLocked,&oModified); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetWorkInstructionsInfo(ioAdminLevel,ioLocked,oModified); \
   ExitAfterCall(this,47,_Trac2,&_ret_arg,&ioAdminLevel,&ioLocked,&oModified); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAExport3DXmlSettingAtt##classe::SetWorkInstructionsLock(CAT_VARIANT_BOOL iLocked) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,48,&_Trac2,&iLocked); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetWorkInstructionsLock(iLocked); \
   ExitAfterCall(this,48,_Trac2,&_ret_arg,&iLocked); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAExport3DXmlSettingAtt##classe::Commit() \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,49,&_Trac2); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->Commit(); \
   ExitAfterCall(this,49,_Trac2,&_ret_arg); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAExport3DXmlSettingAtt##classe::Rollback() \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,50,&_Trac2); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->Rollback(); \
   ExitAfterCall(this,50,_Trac2,&_ret_arg); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAExport3DXmlSettingAtt##classe::ResetToAdminValues() \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,51,&_Trac2); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->ResetToAdminValues(); \
   ExitAfterCall(this,51,_Trac2,&_ret_arg); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAExport3DXmlSettingAtt##classe::ResetToAdminValuesByName(const CATSafeArrayVariant & iAttList) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,52,&_Trac2,&iAttList); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->ResetToAdminValuesByName(iAttList); \
   ExitAfterCall(this,52,_Trac2,&_ret_arg,&iAttList); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAExport3DXmlSettingAtt##classe::SaveRepository() \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,53,&_Trac2); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SaveRepository(); \
   ExitAfterCall(this,53,_Trac2,&_ret_arg); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAExport3DXmlSettingAtt##classe::get_Application(CATIAApplication *& oApplication) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,54,&_Trac2,&oApplication); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Application(oApplication); \
   ExitAfterCall(this,54,_Trac2,&_ret_arg,&oApplication); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAExport3DXmlSettingAtt##classe::get_Parent(CATBaseDispatch *& oParent) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,55,&_Trac2,&oParent); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Parent(oParent); \
   ExitAfterCall(this,55,_Trac2,&_ret_arg,&oParent); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAExport3DXmlSettingAtt##classe::get_Name(CATBSTR & oNameBSTR) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,56,&_Trac2,&oNameBSTR); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Name(oNameBSTR); \
   ExitAfterCall(this,56,_Trac2,&_ret_arg,&oNameBSTR); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAExport3DXmlSettingAtt##classe::put_Name(const CATBSTR & iNameBSTR) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,57,&_Trac2,&iNameBSTR); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_Name(iNameBSTR); \
   ExitAfterCall(this,57,_Trac2,&_ret_arg,&iNameBSTR); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAExport3DXmlSettingAtt##classe::GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,58,&_Trac2,&IDName,&RealObj); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetItem(IDName,RealObj); \
   ExitAfterCall(this,58,_Trac2,&_ret_arg,&IDName,&RealObj); \
   return(_ret_arg); \
} \



/* Macro used to link an implementation with an interface */
#define TIE_CATIAExport3DXmlSettingAtt(classe) \
 \
 \
declare_TIE_CATIAExport3DXmlSettingAtt(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIAExport3DXmlSettingAtt##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIAExport3DXmlSettingAtt,"CATIAExport3DXmlSettingAtt",CATIAExport3DXmlSettingAtt::MetaObject(),classe::MetaObject(),TIE); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIAExport3DXmlSettingAtt(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIECreation(CATIAExport3DXmlSettingAtt, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIAExport3DXmlSettingAtt##classe(classe::MetaObject(),CATIAExport3DXmlSettingAtt::MetaObject(),(void *)CreateTIECATIAExport3DXmlSettingAtt##classe)



/* Macro used to link an implementation with an interface */
/* This TIE is chained on the implementation object */
#define TIEchain_CATIAExport3DXmlSettingAtt(classe) \
 \
 \
declare_TIE_CATIAExport3DXmlSettingAtt(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIAExport3DXmlSettingAtt##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIAExport3DXmlSettingAtt,"CATIAExport3DXmlSettingAtt",CATIAExport3DXmlSettingAtt::MetaObject(),classe::MetaObject(),TIEchain); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIAExport3DXmlSettingAtt(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIEchainCreation(CATIAExport3DXmlSettingAtt, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIAExport3DXmlSettingAtt##classe(classe::MetaObject(),CATIAExport3DXmlSettingAtt::MetaObject(),(void *)CreateTIECATIAExport3DXmlSettingAtt##classe)


/* Macro to switch between BOA and TIE at build time */ 
#ifdef CATSYS_BOA_IS_TIE
#define BOA_CATIAExport3DXmlSettingAtt(classe) TIE_CATIAExport3DXmlSettingAtt(classe)
#else
#define BOA_CATIAExport3DXmlSettingAtt(classe) CATImplementBOA(CATIAExport3DXmlSettingAtt, classe)
#endif

#endif
