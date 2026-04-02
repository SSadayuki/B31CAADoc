#ifndef __TIE_CATIAMultiCADSettingAtt
#define __TIE_CATIAMultiCADSettingAtt

#include <string.h>
#include "CATBaseUnknown.h"
#include "CATMetaClass.h"
#include "CATMacForTie.h"
#include "CATExitJournal.h"
#include "CATIAMultiCADSettingAtt.h"
#include "JS0DSPA.h"


#ifdef _WINDOWS_SOURCE
#define Exported __declspec(dllexport)
#define Imported __declspec(dllimport)
#else
#define Exported 
#define Imported 
#endif


/* To link an implementation with the interface CATIAMultiCADSettingAtt */
#define declare_TIE_CATIAMultiCADSettingAtt(classe) \
 \
 \
class TIECATIAMultiCADSettingAtt##classe : public CATIAMultiCADSettingAtt \
{ \
   private: \
      CATDeclareCommonTIEMembers \
   public: \
      CATDeclareTIEMethods(CATIAMultiCADSettingAtt, classe) \
      CATDeclareIUnknownMethodsForCATBaseUnknownTIE \
      CATDeclareIDispatchMethodsForCATBaseUnknownTIE \
      CATDeclareCATBaseUnknownMethodsForTIE \
      virtual HRESULT __stdcall get_VisuFormatUnit(float & oUnit); \
      virtual HRESULT __stdcall put_VisuFormatUnit(float iUnit); \
      virtual HRESULT __stdcall GetVisuFormatUnitInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified); \
      virtual HRESULT __stdcall SetVisuFormatUnitLock(CAT_VARIANT_BOOL iLocked); \
      virtual HRESULT __stdcall get_ConversionTechnology(CATLONG & oConvTechno); \
      virtual HRESULT __stdcall put_ConversionTechnology(CATLONG iConvTechno); \
      virtual HRESULT __stdcall GetConversionTechnologyInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified); \
      virtual HRESULT __stdcall SetConversionTechnologyLock(CAT_VARIANT_BOOL iLocked); \
      virtual HRESULT __stdcall get_LinkMode(CATLONG & oLinkMode); \
      virtual HRESULT __stdcall put_LinkMode(CATLONG iLinkMode); \
      virtual HRESULT __stdcall GetLinkModeInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified); \
      virtual HRESULT __stdcall SetLinkModeLock(CAT_VARIANT_BOOL iLocked); \
      virtual HRESULT __stdcall get_OutputPath(CATBSTR & oOutputPath); \
      virtual HRESULT __stdcall put_OutputPath(const CATBSTR & iOutputPath); \
      virtual HRESULT __stdcall GetOutputPathInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified); \
      virtual HRESULT __stdcall SetOutputPathLock(CAT_VARIANT_BOOL iLocked); \
      virtual HRESULT __stdcall get_SaveCoorsysInCgr(CAT_VARIANT_BOOL & oSaveCoorsysInCgr); \
      virtual HRESULT __stdcall put_SaveCoorsysInCgr(CAT_VARIANT_BOOL iSaveCoorsysInCgr); \
      virtual HRESULT __stdcall GetSaveCoorsysInCgrInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified); \
      virtual HRESULT __stdcall SetSaveCoorsysInCgrLock(CAT_VARIANT_BOOL iLocked); \
      virtual HRESULT __stdcall get_PartsParameterMode(CATLONG & oPartsParameterMode); \
      virtual HRESULT __stdcall put_PartsParameterMode(CATLONG iPartsParameterMode); \
      virtual HRESULT __stdcall GetPartsParameterModeInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified); \
      virtual HRESULT __stdcall SetPartsParameterModeLock(CAT_VARIANT_BOOL iLocked); \
      virtual HRESULT __stdcall get_ProEQuiltsRead(CAT_VARIANT_BOOL & oProEQuiltsRead); \
      virtual HRESULT __stdcall put_ProEQuiltsRead(CAT_VARIANT_BOOL iProEQuiltsRead); \
      virtual HRESULT __stdcall GetProEQuiltsReadInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified); \
      virtual HRESULT __stdcall SetProEQuiltsReadLock(CAT_VARIANT_BOOL iLocked); \
      virtual HRESULT __stdcall get_ProESimpRepMode(CAT_VARIANT_BOOL & oProESimpRepMode); \
      virtual HRESULT __stdcall put_ProESimpRepMode(CAT_VARIANT_BOOL iProESimpRepMode); \
      virtual HRESULT __stdcall GetProESimpRepModeInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified); \
      virtual HRESULT __stdcall SetProESimpRepModeLock(CAT_VARIANT_BOOL iLocked); \
      virtual HRESULT __stdcall get_ProESimpRepName(CATBSTR & oProESimpRepName); \
      virtual HRESULT __stdcall put_ProESimpRepName(const CATBSTR & iProESimpRepName); \
      virtual HRESULT __stdcall GetProESimpRepNameInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified); \
      virtual HRESULT __stdcall SetProESimpRepNameLock(CAT_VARIANT_BOOL iLocked); \
      virtual HRESULT __stdcall get_ProEInstanceMode(CAT_VARIANT_BOOL & oProEInstanceMode); \
      virtual HRESULT __stdcall put_ProEInstanceMode(CAT_VARIANT_BOOL iProEInstanceMode); \
      virtual HRESULT __stdcall GetProEInstanceModeInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified); \
      virtual HRESULT __stdcall SetProEInstanceModeLock(CAT_VARIANT_BOOL iLocked); \
      virtual HRESULT __stdcall get_ProEInstanceName(CATBSTR & oProEInstanceName); \
      virtual HRESULT __stdcall put_ProEInstanceName(const CATBSTR & iProEInstanceName); \
      virtual HRESULT __stdcall GetProEInstanceNameInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified); \
      virtual HRESULT __stdcall SetProEInstanceNameLock(CAT_VARIANT_BOOL iLocked); \
      virtual HRESULT __stdcall get_UGLayerNumbers(CATBSTR & oUGLayerNumbers); \
      virtual HRESULT __stdcall put_UGLayerNumbers(const CATBSTR & iUGLayerNumbers); \
      virtual HRESULT __stdcall GetUGLayerNumbersInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified); \
      virtual HRESULT __stdcall SetUGLayerNumbersLock(CAT_VARIANT_BOOL iLocked); \
      virtual HRESULT __stdcall get_UGActiveLayersOnly(CAT_VARIANT_BOOL & oUGActiveLayersOnly); \
      virtual HRESULT __stdcall put_UGActiveLayersOnly(CAT_VARIANT_BOOL iUGActiveLayersOnly); \
      virtual HRESULT __stdcall GetUGActiveLayersOnlyInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified); \
      virtual HRESULT __stdcall SetUGActiveLayersOnlyLock(CAT_VARIANT_BOOL iLocked); \
      virtual HRESULT __stdcall get_UGOpenSurfaces(CAT_VARIANT_BOOL & oUGOpenSurfaces); \
      virtual HRESULT __stdcall put_UGOpenSurfaces(CAT_VARIANT_BOOL iUGOpenSurfaces); \
      virtual HRESULT __stdcall GetUGOpenSurfacesInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified); \
      virtual HRESULT __stdcall SetUGOpenSurfacesLock(CAT_VARIANT_BOOL iLocked); \
      virtual HRESULT __stdcall get_UGDrawingName(CATBSTR & oUGDrawingName); \
      virtual HRESULT __stdcall put_UGDrawingName(const CATBSTR & iUGDrawingName); \
      virtual HRESULT __stdcall GetUGDrawingNameInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified); \
      virtual HRESULT __stdcall SetUGDrawingNameLock(CAT_VARIANT_BOOL iLocked); \
      virtual HRESULT __stdcall get_UgReferenceSet(CATBSTR & oUgReferenceSet); \
      virtual HRESULT __stdcall put_UgReferenceSet(const CATBSTR & iUgReferenceSet); \
      virtual HRESULT __stdcall GetUgReferenceSetInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified); \
      virtual HRESULT __stdcall SetUgReferenceSetLock(CAT_VARIANT_BOOL iLocked); \
      virtual HRESULT __stdcall get_Annotation3DMode(CAT_VARIANT_BOOL & oAnnotation3DMode); \
      virtual HRESULT __stdcall put_Annotation3DMode(CAT_VARIANT_BOOL iAnnotation3DMode); \
      virtual HRESULT __stdcall GetAnnotation3DModeInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified); \
      virtual HRESULT __stdcall SetAnnotation3DModeLock(CAT_VARIANT_BOOL iLocked); \
      virtual HRESULT __stdcall get_TranslatorMode(CATLONG & oTranslatorMode); \
      virtual HRESULT __stdcall put_TranslatorMode(CATLONG iTranslatorMode); \
      virtual HRESULT __stdcall GetTranslatorModeInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified); \
      virtual HRESULT __stdcall SetTranslatorModeLock(CAT_VARIANT_BOOL iLocked); \
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



#define ENVTIEdeclare_CATIAMultiCADSettingAtt(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
virtual HRESULT __stdcall get_VisuFormatUnit(float & oUnit); \
virtual HRESULT __stdcall put_VisuFormatUnit(float iUnit); \
virtual HRESULT __stdcall GetVisuFormatUnitInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified); \
virtual HRESULT __stdcall SetVisuFormatUnitLock(CAT_VARIANT_BOOL iLocked); \
virtual HRESULT __stdcall get_ConversionTechnology(CATLONG & oConvTechno); \
virtual HRESULT __stdcall put_ConversionTechnology(CATLONG iConvTechno); \
virtual HRESULT __stdcall GetConversionTechnologyInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified); \
virtual HRESULT __stdcall SetConversionTechnologyLock(CAT_VARIANT_BOOL iLocked); \
virtual HRESULT __stdcall get_LinkMode(CATLONG & oLinkMode); \
virtual HRESULT __stdcall put_LinkMode(CATLONG iLinkMode); \
virtual HRESULT __stdcall GetLinkModeInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified); \
virtual HRESULT __stdcall SetLinkModeLock(CAT_VARIANT_BOOL iLocked); \
virtual HRESULT __stdcall get_OutputPath(CATBSTR & oOutputPath); \
virtual HRESULT __stdcall put_OutputPath(const CATBSTR & iOutputPath); \
virtual HRESULT __stdcall GetOutputPathInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified); \
virtual HRESULT __stdcall SetOutputPathLock(CAT_VARIANT_BOOL iLocked); \
virtual HRESULT __stdcall get_SaveCoorsysInCgr(CAT_VARIANT_BOOL & oSaveCoorsysInCgr); \
virtual HRESULT __stdcall put_SaveCoorsysInCgr(CAT_VARIANT_BOOL iSaveCoorsysInCgr); \
virtual HRESULT __stdcall GetSaveCoorsysInCgrInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified); \
virtual HRESULT __stdcall SetSaveCoorsysInCgrLock(CAT_VARIANT_BOOL iLocked); \
virtual HRESULT __stdcall get_PartsParameterMode(CATLONG & oPartsParameterMode); \
virtual HRESULT __stdcall put_PartsParameterMode(CATLONG iPartsParameterMode); \
virtual HRESULT __stdcall GetPartsParameterModeInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified); \
virtual HRESULT __stdcall SetPartsParameterModeLock(CAT_VARIANT_BOOL iLocked); \
virtual HRESULT __stdcall get_ProEQuiltsRead(CAT_VARIANT_BOOL & oProEQuiltsRead); \
virtual HRESULT __stdcall put_ProEQuiltsRead(CAT_VARIANT_BOOL iProEQuiltsRead); \
virtual HRESULT __stdcall GetProEQuiltsReadInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified); \
virtual HRESULT __stdcall SetProEQuiltsReadLock(CAT_VARIANT_BOOL iLocked); \
virtual HRESULT __stdcall get_ProESimpRepMode(CAT_VARIANT_BOOL & oProESimpRepMode); \
virtual HRESULT __stdcall put_ProESimpRepMode(CAT_VARIANT_BOOL iProESimpRepMode); \
virtual HRESULT __stdcall GetProESimpRepModeInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified); \
virtual HRESULT __stdcall SetProESimpRepModeLock(CAT_VARIANT_BOOL iLocked); \
virtual HRESULT __stdcall get_ProESimpRepName(CATBSTR & oProESimpRepName); \
virtual HRESULT __stdcall put_ProESimpRepName(const CATBSTR & iProESimpRepName); \
virtual HRESULT __stdcall GetProESimpRepNameInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified); \
virtual HRESULT __stdcall SetProESimpRepNameLock(CAT_VARIANT_BOOL iLocked); \
virtual HRESULT __stdcall get_ProEInstanceMode(CAT_VARIANT_BOOL & oProEInstanceMode); \
virtual HRESULT __stdcall put_ProEInstanceMode(CAT_VARIANT_BOOL iProEInstanceMode); \
virtual HRESULT __stdcall GetProEInstanceModeInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified); \
virtual HRESULT __stdcall SetProEInstanceModeLock(CAT_VARIANT_BOOL iLocked); \
virtual HRESULT __stdcall get_ProEInstanceName(CATBSTR & oProEInstanceName); \
virtual HRESULT __stdcall put_ProEInstanceName(const CATBSTR & iProEInstanceName); \
virtual HRESULT __stdcall GetProEInstanceNameInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified); \
virtual HRESULT __stdcall SetProEInstanceNameLock(CAT_VARIANT_BOOL iLocked); \
virtual HRESULT __stdcall get_UGLayerNumbers(CATBSTR & oUGLayerNumbers); \
virtual HRESULT __stdcall put_UGLayerNumbers(const CATBSTR & iUGLayerNumbers); \
virtual HRESULT __stdcall GetUGLayerNumbersInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified); \
virtual HRESULT __stdcall SetUGLayerNumbersLock(CAT_VARIANT_BOOL iLocked); \
virtual HRESULT __stdcall get_UGActiveLayersOnly(CAT_VARIANT_BOOL & oUGActiveLayersOnly); \
virtual HRESULT __stdcall put_UGActiveLayersOnly(CAT_VARIANT_BOOL iUGActiveLayersOnly); \
virtual HRESULT __stdcall GetUGActiveLayersOnlyInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified); \
virtual HRESULT __stdcall SetUGActiveLayersOnlyLock(CAT_VARIANT_BOOL iLocked); \
virtual HRESULT __stdcall get_UGOpenSurfaces(CAT_VARIANT_BOOL & oUGOpenSurfaces); \
virtual HRESULT __stdcall put_UGOpenSurfaces(CAT_VARIANT_BOOL iUGOpenSurfaces); \
virtual HRESULT __stdcall GetUGOpenSurfacesInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified); \
virtual HRESULT __stdcall SetUGOpenSurfacesLock(CAT_VARIANT_BOOL iLocked); \
virtual HRESULT __stdcall get_UGDrawingName(CATBSTR & oUGDrawingName); \
virtual HRESULT __stdcall put_UGDrawingName(const CATBSTR & iUGDrawingName); \
virtual HRESULT __stdcall GetUGDrawingNameInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified); \
virtual HRESULT __stdcall SetUGDrawingNameLock(CAT_VARIANT_BOOL iLocked); \
virtual HRESULT __stdcall get_UgReferenceSet(CATBSTR & oUgReferenceSet); \
virtual HRESULT __stdcall put_UgReferenceSet(const CATBSTR & iUgReferenceSet); \
virtual HRESULT __stdcall GetUgReferenceSetInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified); \
virtual HRESULT __stdcall SetUgReferenceSetLock(CAT_VARIANT_BOOL iLocked); \
virtual HRESULT __stdcall get_Annotation3DMode(CAT_VARIANT_BOOL & oAnnotation3DMode); \
virtual HRESULT __stdcall put_Annotation3DMode(CAT_VARIANT_BOOL iAnnotation3DMode); \
virtual HRESULT __stdcall GetAnnotation3DModeInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified); \
virtual HRESULT __stdcall SetAnnotation3DModeLock(CAT_VARIANT_BOOL iLocked); \
virtual HRESULT __stdcall get_TranslatorMode(CATLONG & oTranslatorMode); \
virtual HRESULT __stdcall put_TranslatorMode(CATLONG iTranslatorMode); \
virtual HRESULT __stdcall GetTranslatorModeInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified); \
virtual HRESULT __stdcall SetTranslatorModeLock(CAT_VARIANT_BOOL iLocked); \
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


#define ENVTIEdefine_CATIAMultiCADSettingAtt(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
HRESULT __stdcall  ENVTIEName::get_VisuFormatUnit(float & oUnit) \
{ \
return (ENVTIECALL(CATIAMultiCADSettingAtt,ENVTIETypeLetter,ENVTIELetter)get_VisuFormatUnit(oUnit)); \
} \
HRESULT __stdcall  ENVTIEName::put_VisuFormatUnit(float iUnit) \
{ \
return (ENVTIECALL(CATIAMultiCADSettingAtt,ENVTIETypeLetter,ENVTIELetter)put_VisuFormatUnit(iUnit)); \
} \
HRESULT __stdcall  ENVTIEName::GetVisuFormatUnitInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified) \
{ \
return (ENVTIECALL(CATIAMultiCADSettingAtt,ENVTIETypeLetter,ENVTIELetter)GetVisuFormatUnitInfo(ioAdminLevel,ioLocked,oModified)); \
} \
HRESULT __stdcall  ENVTIEName::SetVisuFormatUnitLock(CAT_VARIANT_BOOL iLocked) \
{ \
return (ENVTIECALL(CATIAMultiCADSettingAtt,ENVTIETypeLetter,ENVTIELetter)SetVisuFormatUnitLock(iLocked)); \
} \
HRESULT __stdcall  ENVTIEName::get_ConversionTechnology(CATLONG & oConvTechno) \
{ \
return (ENVTIECALL(CATIAMultiCADSettingAtt,ENVTIETypeLetter,ENVTIELetter)get_ConversionTechnology(oConvTechno)); \
} \
HRESULT __stdcall  ENVTIEName::put_ConversionTechnology(CATLONG iConvTechno) \
{ \
return (ENVTIECALL(CATIAMultiCADSettingAtt,ENVTIETypeLetter,ENVTIELetter)put_ConversionTechnology(iConvTechno)); \
} \
HRESULT __stdcall  ENVTIEName::GetConversionTechnologyInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified) \
{ \
return (ENVTIECALL(CATIAMultiCADSettingAtt,ENVTIETypeLetter,ENVTIELetter)GetConversionTechnologyInfo(ioAdminLevel,ioLocked,oModified)); \
} \
HRESULT __stdcall  ENVTIEName::SetConversionTechnologyLock(CAT_VARIANT_BOOL iLocked) \
{ \
return (ENVTIECALL(CATIAMultiCADSettingAtt,ENVTIETypeLetter,ENVTIELetter)SetConversionTechnologyLock(iLocked)); \
} \
HRESULT __stdcall  ENVTIEName::get_LinkMode(CATLONG & oLinkMode) \
{ \
return (ENVTIECALL(CATIAMultiCADSettingAtt,ENVTIETypeLetter,ENVTIELetter)get_LinkMode(oLinkMode)); \
} \
HRESULT __stdcall  ENVTIEName::put_LinkMode(CATLONG iLinkMode) \
{ \
return (ENVTIECALL(CATIAMultiCADSettingAtt,ENVTIETypeLetter,ENVTIELetter)put_LinkMode(iLinkMode)); \
} \
HRESULT __stdcall  ENVTIEName::GetLinkModeInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified) \
{ \
return (ENVTIECALL(CATIAMultiCADSettingAtt,ENVTIETypeLetter,ENVTIELetter)GetLinkModeInfo(ioAdminLevel,ioLocked,oModified)); \
} \
HRESULT __stdcall  ENVTIEName::SetLinkModeLock(CAT_VARIANT_BOOL iLocked) \
{ \
return (ENVTIECALL(CATIAMultiCADSettingAtt,ENVTIETypeLetter,ENVTIELetter)SetLinkModeLock(iLocked)); \
} \
HRESULT __stdcall  ENVTIEName::get_OutputPath(CATBSTR & oOutputPath) \
{ \
return (ENVTIECALL(CATIAMultiCADSettingAtt,ENVTIETypeLetter,ENVTIELetter)get_OutputPath(oOutputPath)); \
} \
HRESULT __stdcall  ENVTIEName::put_OutputPath(const CATBSTR & iOutputPath) \
{ \
return (ENVTIECALL(CATIAMultiCADSettingAtt,ENVTIETypeLetter,ENVTIELetter)put_OutputPath(iOutputPath)); \
} \
HRESULT __stdcall  ENVTIEName::GetOutputPathInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified) \
{ \
return (ENVTIECALL(CATIAMultiCADSettingAtt,ENVTIETypeLetter,ENVTIELetter)GetOutputPathInfo(ioAdminLevel,ioLocked,oModified)); \
} \
HRESULT __stdcall  ENVTIEName::SetOutputPathLock(CAT_VARIANT_BOOL iLocked) \
{ \
return (ENVTIECALL(CATIAMultiCADSettingAtt,ENVTIETypeLetter,ENVTIELetter)SetOutputPathLock(iLocked)); \
} \
HRESULT __stdcall  ENVTIEName::get_SaveCoorsysInCgr(CAT_VARIANT_BOOL & oSaveCoorsysInCgr) \
{ \
return (ENVTIECALL(CATIAMultiCADSettingAtt,ENVTIETypeLetter,ENVTIELetter)get_SaveCoorsysInCgr(oSaveCoorsysInCgr)); \
} \
HRESULT __stdcall  ENVTIEName::put_SaveCoorsysInCgr(CAT_VARIANT_BOOL iSaveCoorsysInCgr) \
{ \
return (ENVTIECALL(CATIAMultiCADSettingAtt,ENVTIETypeLetter,ENVTIELetter)put_SaveCoorsysInCgr(iSaveCoorsysInCgr)); \
} \
HRESULT __stdcall  ENVTIEName::GetSaveCoorsysInCgrInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified) \
{ \
return (ENVTIECALL(CATIAMultiCADSettingAtt,ENVTIETypeLetter,ENVTIELetter)GetSaveCoorsysInCgrInfo(ioAdminLevel,ioLocked,oModified)); \
} \
HRESULT __stdcall  ENVTIEName::SetSaveCoorsysInCgrLock(CAT_VARIANT_BOOL iLocked) \
{ \
return (ENVTIECALL(CATIAMultiCADSettingAtt,ENVTIETypeLetter,ENVTIELetter)SetSaveCoorsysInCgrLock(iLocked)); \
} \
HRESULT __stdcall  ENVTIEName::get_PartsParameterMode(CATLONG & oPartsParameterMode) \
{ \
return (ENVTIECALL(CATIAMultiCADSettingAtt,ENVTIETypeLetter,ENVTIELetter)get_PartsParameterMode(oPartsParameterMode)); \
} \
HRESULT __stdcall  ENVTIEName::put_PartsParameterMode(CATLONG iPartsParameterMode) \
{ \
return (ENVTIECALL(CATIAMultiCADSettingAtt,ENVTIETypeLetter,ENVTIELetter)put_PartsParameterMode(iPartsParameterMode)); \
} \
HRESULT __stdcall  ENVTIEName::GetPartsParameterModeInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified) \
{ \
return (ENVTIECALL(CATIAMultiCADSettingAtt,ENVTIETypeLetter,ENVTIELetter)GetPartsParameterModeInfo(ioAdminLevel,ioLocked,oModified)); \
} \
HRESULT __stdcall  ENVTIEName::SetPartsParameterModeLock(CAT_VARIANT_BOOL iLocked) \
{ \
return (ENVTIECALL(CATIAMultiCADSettingAtt,ENVTIETypeLetter,ENVTIELetter)SetPartsParameterModeLock(iLocked)); \
} \
HRESULT __stdcall  ENVTIEName::get_ProEQuiltsRead(CAT_VARIANT_BOOL & oProEQuiltsRead) \
{ \
return (ENVTIECALL(CATIAMultiCADSettingAtt,ENVTIETypeLetter,ENVTIELetter)get_ProEQuiltsRead(oProEQuiltsRead)); \
} \
HRESULT __stdcall  ENVTIEName::put_ProEQuiltsRead(CAT_VARIANT_BOOL iProEQuiltsRead) \
{ \
return (ENVTIECALL(CATIAMultiCADSettingAtt,ENVTIETypeLetter,ENVTIELetter)put_ProEQuiltsRead(iProEQuiltsRead)); \
} \
HRESULT __stdcall  ENVTIEName::GetProEQuiltsReadInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified) \
{ \
return (ENVTIECALL(CATIAMultiCADSettingAtt,ENVTIETypeLetter,ENVTIELetter)GetProEQuiltsReadInfo(ioAdminLevel,ioLocked,oModified)); \
} \
HRESULT __stdcall  ENVTIEName::SetProEQuiltsReadLock(CAT_VARIANT_BOOL iLocked) \
{ \
return (ENVTIECALL(CATIAMultiCADSettingAtt,ENVTIETypeLetter,ENVTIELetter)SetProEQuiltsReadLock(iLocked)); \
} \
HRESULT __stdcall  ENVTIEName::get_ProESimpRepMode(CAT_VARIANT_BOOL & oProESimpRepMode) \
{ \
return (ENVTIECALL(CATIAMultiCADSettingAtt,ENVTIETypeLetter,ENVTIELetter)get_ProESimpRepMode(oProESimpRepMode)); \
} \
HRESULT __stdcall  ENVTIEName::put_ProESimpRepMode(CAT_VARIANT_BOOL iProESimpRepMode) \
{ \
return (ENVTIECALL(CATIAMultiCADSettingAtt,ENVTIETypeLetter,ENVTIELetter)put_ProESimpRepMode(iProESimpRepMode)); \
} \
HRESULT __stdcall  ENVTIEName::GetProESimpRepModeInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified) \
{ \
return (ENVTIECALL(CATIAMultiCADSettingAtt,ENVTIETypeLetter,ENVTIELetter)GetProESimpRepModeInfo(ioAdminLevel,ioLocked,oModified)); \
} \
HRESULT __stdcall  ENVTIEName::SetProESimpRepModeLock(CAT_VARIANT_BOOL iLocked) \
{ \
return (ENVTIECALL(CATIAMultiCADSettingAtt,ENVTIETypeLetter,ENVTIELetter)SetProESimpRepModeLock(iLocked)); \
} \
HRESULT __stdcall  ENVTIEName::get_ProESimpRepName(CATBSTR & oProESimpRepName) \
{ \
return (ENVTIECALL(CATIAMultiCADSettingAtt,ENVTIETypeLetter,ENVTIELetter)get_ProESimpRepName(oProESimpRepName)); \
} \
HRESULT __stdcall  ENVTIEName::put_ProESimpRepName(const CATBSTR & iProESimpRepName) \
{ \
return (ENVTIECALL(CATIAMultiCADSettingAtt,ENVTIETypeLetter,ENVTIELetter)put_ProESimpRepName(iProESimpRepName)); \
} \
HRESULT __stdcall  ENVTIEName::GetProESimpRepNameInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified) \
{ \
return (ENVTIECALL(CATIAMultiCADSettingAtt,ENVTIETypeLetter,ENVTIELetter)GetProESimpRepNameInfo(ioAdminLevel,ioLocked,oModified)); \
} \
HRESULT __stdcall  ENVTIEName::SetProESimpRepNameLock(CAT_VARIANT_BOOL iLocked) \
{ \
return (ENVTIECALL(CATIAMultiCADSettingAtt,ENVTIETypeLetter,ENVTIELetter)SetProESimpRepNameLock(iLocked)); \
} \
HRESULT __stdcall  ENVTIEName::get_ProEInstanceMode(CAT_VARIANT_BOOL & oProEInstanceMode) \
{ \
return (ENVTIECALL(CATIAMultiCADSettingAtt,ENVTIETypeLetter,ENVTIELetter)get_ProEInstanceMode(oProEInstanceMode)); \
} \
HRESULT __stdcall  ENVTIEName::put_ProEInstanceMode(CAT_VARIANT_BOOL iProEInstanceMode) \
{ \
return (ENVTIECALL(CATIAMultiCADSettingAtt,ENVTIETypeLetter,ENVTIELetter)put_ProEInstanceMode(iProEInstanceMode)); \
} \
HRESULT __stdcall  ENVTIEName::GetProEInstanceModeInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified) \
{ \
return (ENVTIECALL(CATIAMultiCADSettingAtt,ENVTIETypeLetter,ENVTIELetter)GetProEInstanceModeInfo(ioAdminLevel,ioLocked,oModified)); \
} \
HRESULT __stdcall  ENVTIEName::SetProEInstanceModeLock(CAT_VARIANT_BOOL iLocked) \
{ \
return (ENVTIECALL(CATIAMultiCADSettingAtt,ENVTIETypeLetter,ENVTIELetter)SetProEInstanceModeLock(iLocked)); \
} \
HRESULT __stdcall  ENVTIEName::get_ProEInstanceName(CATBSTR & oProEInstanceName) \
{ \
return (ENVTIECALL(CATIAMultiCADSettingAtt,ENVTIETypeLetter,ENVTIELetter)get_ProEInstanceName(oProEInstanceName)); \
} \
HRESULT __stdcall  ENVTIEName::put_ProEInstanceName(const CATBSTR & iProEInstanceName) \
{ \
return (ENVTIECALL(CATIAMultiCADSettingAtt,ENVTIETypeLetter,ENVTIELetter)put_ProEInstanceName(iProEInstanceName)); \
} \
HRESULT __stdcall  ENVTIEName::GetProEInstanceNameInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified) \
{ \
return (ENVTIECALL(CATIAMultiCADSettingAtt,ENVTIETypeLetter,ENVTIELetter)GetProEInstanceNameInfo(ioAdminLevel,ioLocked,oModified)); \
} \
HRESULT __stdcall  ENVTIEName::SetProEInstanceNameLock(CAT_VARIANT_BOOL iLocked) \
{ \
return (ENVTIECALL(CATIAMultiCADSettingAtt,ENVTIETypeLetter,ENVTIELetter)SetProEInstanceNameLock(iLocked)); \
} \
HRESULT __stdcall  ENVTIEName::get_UGLayerNumbers(CATBSTR & oUGLayerNumbers) \
{ \
return (ENVTIECALL(CATIAMultiCADSettingAtt,ENVTIETypeLetter,ENVTIELetter)get_UGLayerNumbers(oUGLayerNumbers)); \
} \
HRESULT __stdcall  ENVTIEName::put_UGLayerNumbers(const CATBSTR & iUGLayerNumbers) \
{ \
return (ENVTIECALL(CATIAMultiCADSettingAtt,ENVTIETypeLetter,ENVTIELetter)put_UGLayerNumbers(iUGLayerNumbers)); \
} \
HRESULT __stdcall  ENVTIEName::GetUGLayerNumbersInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified) \
{ \
return (ENVTIECALL(CATIAMultiCADSettingAtt,ENVTIETypeLetter,ENVTIELetter)GetUGLayerNumbersInfo(ioAdminLevel,ioLocked,oModified)); \
} \
HRESULT __stdcall  ENVTIEName::SetUGLayerNumbersLock(CAT_VARIANT_BOOL iLocked) \
{ \
return (ENVTIECALL(CATIAMultiCADSettingAtt,ENVTIETypeLetter,ENVTIELetter)SetUGLayerNumbersLock(iLocked)); \
} \
HRESULT __stdcall  ENVTIEName::get_UGActiveLayersOnly(CAT_VARIANT_BOOL & oUGActiveLayersOnly) \
{ \
return (ENVTIECALL(CATIAMultiCADSettingAtt,ENVTIETypeLetter,ENVTIELetter)get_UGActiveLayersOnly(oUGActiveLayersOnly)); \
} \
HRESULT __stdcall  ENVTIEName::put_UGActiveLayersOnly(CAT_VARIANT_BOOL iUGActiveLayersOnly) \
{ \
return (ENVTIECALL(CATIAMultiCADSettingAtt,ENVTIETypeLetter,ENVTIELetter)put_UGActiveLayersOnly(iUGActiveLayersOnly)); \
} \
HRESULT __stdcall  ENVTIEName::GetUGActiveLayersOnlyInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified) \
{ \
return (ENVTIECALL(CATIAMultiCADSettingAtt,ENVTIETypeLetter,ENVTIELetter)GetUGActiveLayersOnlyInfo(ioAdminLevel,ioLocked,oModified)); \
} \
HRESULT __stdcall  ENVTIEName::SetUGActiveLayersOnlyLock(CAT_VARIANT_BOOL iLocked) \
{ \
return (ENVTIECALL(CATIAMultiCADSettingAtt,ENVTIETypeLetter,ENVTIELetter)SetUGActiveLayersOnlyLock(iLocked)); \
} \
HRESULT __stdcall  ENVTIEName::get_UGOpenSurfaces(CAT_VARIANT_BOOL & oUGOpenSurfaces) \
{ \
return (ENVTIECALL(CATIAMultiCADSettingAtt,ENVTIETypeLetter,ENVTIELetter)get_UGOpenSurfaces(oUGOpenSurfaces)); \
} \
HRESULT __stdcall  ENVTIEName::put_UGOpenSurfaces(CAT_VARIANT_BOOL iUGOpenSurfaces) \
{ \
return (ENVTIECALL(CATIAMultiCADSettingAtt,ENVTIETypeLetter,ENVTIELetter)put_UGOpenSurfaces(iUGOpenSurfaces)); \
} \
HRESULT __stdcall  ENVTIEName::GetUGOpenSurfacesInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified) \
{ \
return (ENVTIECALL(CATIAMultiCADSettingAtt,ENVTIETypeLetter,ENVTIELetter)GetUGOpenSurfacesInfo(ioAdminLevel,ioLocked,oModified)); \
} \
HRESULT __stdcall  ENVTIEName::SetUGOpenSurfacesLock(CAT_VARIANT_BOOL iLocked) \
{ \
return (ENVTIECALL(CATIAMultiCADSettingAtt,ENVTIETypeLetter,ENVTIELetter)SetUGOpenSurfacesLock(iLocked)); \
} \
HRESULT __stdcall  ENVTIEName::get_UGDrawingName(CATBSTR & oUGDrawingName) \
{ \
return (ENVTIECALL(CATIAMultiCADSettingAtt,ENVTIETypeLetter,ENVTIELetter)get_UGDrawingName(oUGDrawingName)); \
} \
HRESULT __stdcall  ENVTIEName::put_UGDrawingName(const CATBSTR & iUGDrawingName) \
{ \
return (ENVTIECALL(CATIAMultiCADSettingAtt,ENVTIETypeLetter,ENVTIELetter)put_UGDrawingName(iUGDrawingName)); \
} \
HRESULT __stdcall  ENVTIEName::GetUGDrawingNameInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified) \
{ \
return (ENVTIECALL(CATIAMultiCADSettingAtt,ENVTIETypeLetter,ENVTIELetter)GetUGDrawingNameInfo(ioAdminLevel,ioLocked,oModified)); \
} \
HRESULT __stdcall  ENVTIEName::SetUGDrawingNameLock(CAT_VARIANT_BOOL iLocked) \
{ \
return (ENVTIECALL(CATIAMultiCADSettingAtt,ENVTIETypeLetter,ENVTIELetter)SetUGDrawingNameLock(iLocked)); \
} \
HRESULT __stdcall  ENVTIEName::get_UgReferenceSet(CATBSTR & oUgReferenceSet) \
{ \
return (ENVTIECALL(CATIAMultiCADSettingAtt,ENVTIETypeLetter,ENVTIELetter)get_UgReferenceSet(oUgReferenceSet)); \
} \
HRESULT __stdcall  ENVTIEName::put_UgReferenceSet(const CATBSTR & iUgReferenceSet) \
{ \
return (ENVTIECALL(CATIAMultiCADSettingAtt,ENVTIETypeLetter,ENVTIELetter)put_UgReferenceSet(iUgReferenceSet)); \
} \
HRESULT __stdcall  ENVTIEName::GetUgReferenceSetInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified) \
{ \
return (ENVTIECALL(CATIAMultiCADSettingAtt,ENVTIETypeLetter,ENVTIELetter)GetUgReferenceSetInfo(ioAdminLevel,ioLocked,oModified)); \
} \
HRESULT __stdcall  ENVTIEName::SetUgReferenceSetLock(CAT_VARIANT_BOOL iLocked) \
{ \
return (ENVTIECALL(CATIAMultiCADSettingAtt,ENVTIETypeLetter,ENVTIELetter)SetUgReferenceSetLock(iLocked)); \
} \
HRESULT __stdcall  ENVTIEName::get_Annotation3DMode(CAT_VARIANT_BOOL & oAnnotation3DMode) \
{ \
return (ENVTIECALL(CATIAMultiCADSettingAtt,ENVTIETypeLetter,ENVTIELetter)get_Annotation3DMode(oAnnotation3DMode)); \
} \
HRESULT __stdcall  ENVTIEName::put_Annotation3DMode(CAT_VARIANT_BOOL iAnnotation3DMode) \
{ \
return (ENVTIECALL(CATIAMultiCADSettingAtt,ENVTIETypeLetter,ENVTIELetter)put_Annotation3DMode(iAnnotation3DMode)); \
} \
HRESULT __stdcall  ENVTIEName::GetAnnotation3DModeInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified) \
{ \
return (ENVTIECALL(CATIAMultiCADSettingAtt,ENVTIETypeLetter,ENVTIELetter)GetAnnotation3DModeInfo(ioAdminLevel,ioLocked,oModified)); \
} \
HRESULT __stdcall  ENVTIEName::SetAnnotation3DModeLock(CAT_VARIANT_BOOL iLocked) \
{ \
return (ENVTIECALL(CATIAMultiCADSettingAtt,ENVTIETypeLetter,ENVTIELetter)SetAnnotation3DModeLock(iLocked)); \
} \
HRESULT __stdcall  ENVTIEName::get_TranslatorMode(CATLONG & oTranslatorMode) \
{ \
return (ENVTIECALL(CATIAMultiCADSettingAtt,ENVTIETypeLetter,ENVTIELetter)get_TranslatorMode(oTranslatorMode)); \
} \
HRESULT __stdcall  ENVTIEName::put_TranslatorMode(CATLONG iTranslatorMode) \
{ \
return (ENVTIECALL(CATIAMultiCADSettingAtt,ENVTIETypeLetter,ENVTIELetter)put_TranslatorMode(iTranslatorMode)); \
} \
HRESULT __stdcall  ENVTIEName::GetTranslatorModeInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified) \
{ \
return (ENVTIECALL(CATIAMultiCADSettingAtt,ENVTIETypeLetter,ENVTIELetter)GetTranslatorModeInfo(ioAdminLevel,ioLocked,oModified)); \
} \
HRESULT __stdcall  ENVTIEName::SetTranslatorModeLock(CAT_VARIANT_BOOL iLocked) \
{ \
return (ENVTIECALL(CATIAMultiCADSettingAtt,ENVTIETypeLetter,ENVTIELetter)SetTranslatorModeLock(iLocked)); \
} \
HRESULT __stdcall  ENVTIEName::Commit() \
{ \
return (ENVTIECALL(CATIAMultiCADSettingAtt,ENVTIETypeLetter,ENVTIELetter)Commit()); \
} \
HRESULT __stdcall  ENVTIEName::Rollback() \
{ \
return (ENVTIECALL(CATIAMultiCADSettingAtt,ENVTIETypeLetter,ENVTIELetter)Rollback()); \
} \
HRESULT __stdcall  ENVTIEName::ResetToAdminValues() \
{ \
return (ENVTIECALL(CATIAMultiCADSettingAtt,ENVTIETypeLetter,ENVTIELetter)ResetToAdminValues()); \
} \
HRESULT __stdcall  ENVTIEName::ResetToAdminValuesByName(const CATSafeArrayVariant & iAttList) \
{ \
return (ENVTIECALL(CATIAMultiCADSettingAtt,ENVTIETypeLetter,ENVTIELetter)ResetToAdminValuesByName(iAttList)); \
} \
HRESULT __stdcall  ENVTIEName::SaveRepository() \
{ \
return (ENVTIECALL(CATIAMultiCADSettingAtt,ENVTIETypeLetter,ENVTIELetter)SaveRepository()); \
} \
HRESULT  __stdcall  ENVTIEName::get_Application(CATIAApplication *& oApplication) \
{ \
return (ENVTIECALL(CATIAMultiCADSettingAtt,ENVTIETypeLetter,ENVTIELetter)get_Application(oApplication)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Parent(CATBaseDispatch *& oParent) \
{ \
return (ENVTIECALL(CATIAMultiCADSettingAtt,ENVTIETypeLetter,ENVTIELetter)get_Parent(oParent)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Name(CATBSTR & oNameBSTR) \
{ \
return (ENVTIECALL(CATIAMultiCADSettingAtt,ENVTIETypeLetter,ENVTIELetter)get_Name(oNameBSTR)); \
} \
HRESULT  __stdcall  ENVTIEName::put_Name(const CATBSTR & iNameBSTR) \
{ \
return (ENVTIECALL(CATIAMultiCADSettingAtt,ENVTIETypeLetter,ENVTIELetter)put_Name(iNameBSTR)); \
} \
HRESULT  __stdcall  ENVTIEName::GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj) \
{ \
return (ENVTIECALL(CATIAMultiCADSettingAtt,ENVTIETypeLetter,ENVTIELetter)GetItem(IDName,RealObj)); \
} \


/* Name of the TIE class */
#define class_TIE_CATIAMultiCADSettingAtt(classe)    TIECATIAMultiCADSettingAtt##classe


/* Common methods inside a TIE */
#define common_TIE_CATIAMultiCADSettingAtt(classe) \
 \
 \
/* Static initialization */ \
CATDefineCommonTIEMembers(CATIAMultiCADSettingAtt, classe) \
 \
 \
CATImplementTIEMethods(CATIAMultiCADSettingAtt, classe) \
CATImplementIUnknownMethodsForCATBaseUnknownTIE(CATIAMultiCADSettingAtt, classe, 2) \
CATImplementIDispatchMethodsForCATBaseUnknownTIE(CATIAMultiCADSettingAtt, classe) \
CATImplementCATBaseUnknownMethodsForTIE(CATIAMultiCADSettingAtt, classe) \
 \
HRESULT __stdcall  TIECATIAMultiCADSettingAtt##classe::get_VisuFormatUnit(float & oUnit) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,1,&_Trac2,&oUnit); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_VisuFormatUnit(oUnit); \
   ExitAfterCall(this,1,_Trac2,&_ret_arg,&oUnit); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAMultiCADSettingAtt##classe::put_VisuFormatUnit(float iUnit) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,2,&_Trac2,&iUnit); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_VisuFormatUnit(iUnit); \
   ExitAfterCall(this,2,_Trac2,&_ret_arg,&iUnit); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAMultiCADSettingAtt##classe::GetVisuFormatUnitInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,3,&_Trac2,&ioAdminLevel,&ioLocked,&oModified); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetVisuFormatUnitInfo(ioAdminLevel,ioLocked,oModified); \
   ExitAfterCall(this,3,_Trac2,&_ret_arg,&ioAdminLevel,&ioLocked,&oModified); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAMultiCADSettingAtt##classe::SetVisuFormatUnitLock(CAT_VARIANT_BOOL iLocked) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,4,&_Trac2,&iLocked); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetVisuFormatUnitLock(iLocked); \
   ExitAfterCall(this,4,_Trac2,&_ret_arg,&iLocked); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAMultiCADSettingAtt##classe::get_ConversionTechnology(CATLONG & oConvTechno) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,5,&_Trac2,&oConvTechno); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_ConversionTechnology(oConvTechno); \
   ExitAfterCall(this,5,_Trac2,&_ret_arg,&oConvTechno); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAMultiCADSettingAtt##classe::put_ConversionTechnology(CATLONG iConvTechno) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,6,&_Trac2,&iConvTechno); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_ConversionTechnology(iConvTechno); \
   ExitAfterCall(this,6,_Trac2,&_ret_arg,&iConvTechno); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAMultiCADSettingAtt##classe::GetConversionTechnologyInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,7,&_Trac2,&ioAdminLevel,&ioLocked,&oModified); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetConversionTechnologyInfo(ioAdminLevel,ioLocked,oModified); \
   ExitAfterCall(this,7,_Trac2,&_ret_arg,&ioAdminLevel,&ioLocked,&oModified); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAMultiCADSettingAtt##classe::SetConversionTechnologyLock(CAT_VARIANT_BOOL iLocked) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,8,&_Trac2,&iLocked); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetConversionTechnologyLock(iLocked); \
   ExitAfterCall(this,8,_Trac2,&_ret_arg,&iLocked); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAMultiCADSettingAtt##classe::get_LinkMode(CATLONG & oLinkMode) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,9,&_Trac2,&oLinkMode); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_LinkMode(oLinkMode); \
   ExitAfterCall(this,9,_Trac2,&_ret_arg,&oLinkMode); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAMultiCADSettingAtt##classe::put_LinkMode(CATLONG iLinkMode) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,10,&_Trac2,&iLinkMode); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_LinkMode(iLinkMode); \
   ExitAfterCall(this,10,_Trac2,&_ret_arg,&iLinkMode); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAMultiCADSettingAtt##classe::GetLinkModeInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,11,&_Trac2,&ioAdminLevel,&ioLocked,&oModified); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetLinkModeInfo(ioAdminLevel,ioLocked,oModified); \
   ExitAfterCall(this,11,_Trac2,&_ret_arg,&ioAdminLevel,&ioLocked,&oModified); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAMultiCADSettingAtt##classe::SetLinkModeLock(CAT_VARIANT_BOOL iLocked) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,12,&_Trac2,&iLocked); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetLinkModeLock(iLocked); \
   ExitAfterCall(this,12,_Trac2,&_ret_arg,&iLocked); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAMultiCADSettingAtt##classe::get_OutputPath(CATBSTR & oOutputPath) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,13,&_Trac2,&oOutputPath); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_OutputPath(oOutputPath); \
   ExitAfterCall(this,13,_Trac2,&_ret_arg,&oOutputPath); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAMultiCADSettingAtt##classe::put_OutputPath(const CATBSTR & iOutputPath) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,14,&_Trac2,&iOutputPath); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_OutputPath(iOutputPath); \
   ExitAfterCall(this,14,_Trac2,&_ret_arg,&iOutputPath); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAMultiCADSettingAtt##classe::GetOutputPathInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,15,&_Trac2,&ioAdminLevel,&ioLocked,&oModified); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetOutputPathInfo(ioAdminLevel,ioLocked,oModified); \
   ExitAfterCall(this,15,_Trac2,&_ret_arg,&ioAdminLevel,&ioLocked,&oModified); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAMultiCADSettingAtt##classe::SetOutputPathLock(CAT_VARIANT_BOOL iLocked) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,16,&_Trac2,&iLocked); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetOutputPathLock(iLocked); \
   ExitAfterCall(this,16,_Trac2,&_ret_arg,&iLocked); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAMultiCADSettingAtt##classe::get_SaveCoorsysInCgr(CAT_VARIANT_BOOL & oSaveCoorsysInCgr) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,17,&_Trac2,&oSaveCoorsysInCgr); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_SaveCoorsysInCgr(oSaveCoorsysInCgr); \
   ExitAfterCall(this,17,_Trac2,&_ret_arg,&oSaveCoorsysInCgr); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAMultiCADSettingAtt##classe::put_SaveCoorsysInCgr(CAT_VARIANT_BOOL iSaveCoorsysInCgr) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,18,&_Trac2,&iSaveCoorsysInCgr); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_SaveCoorsysInCgr(iSaveCoorsysInCgr); \
   ExitAfterCall(this,18,_Trac2,&_ret_arg,&iSaveCoorsysInCgr); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAMultiCADSettingAtt##classe::GetSaveCoorsysInCgrInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,19,&_Trac2,&ioAdminLevel,&ioLocked,&oModified); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetSaveCoorsysInCgrInfo(ioAdminLevel,ioLocked,oModified); \
   ExitAfterCall(this,19,_Trac2,&_ret_arg,&ioAdminLevel,&ioLocked,&oModified); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAMultiCADSettingAtt##classe::SetSaveCoorsysInCgrLock(CAT_VARIANT_BOOL iLocked) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,20,&_Trac2,&iLocked); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetSaveCoorsysInCgrLock(iLocked); \
   ExitAfterCall(this,20,_Trac2,&_ret_arg,&iLocked); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAMultiCADSettingAtt##classe::get_PartsParameterMode(CATLONG & oPartsParameterMode) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,21,&_Trac2,&oPartsParameterMode); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_PartsParameterMode(oPartsParameterMode); \
   ExitAfterCall(this,21,_Trac2,&_ret_arg,&oPartsParameterMode); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAMultiCADSettingAtt##classe::put_PartsParameterMode(CATLONG iPartsParameterMode) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,22,&_Trac2,&iPartsParameterMode); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_PartsParameterMode(iPartsParameterMode); \
   ExitAfterCall(this,22,_Trac2,&_ret_arg,&iPartsParameterMode); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAMultiCADSettingAtt##classe::GetPartsParameterModeInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,23,&_Trac2,&ioAdminLevel,&ioLocked,&oModified); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetPartsParameterModeInfo(ioAdminLevel,ioLocked,oModified); \
   ExitAfterCall(this,23,_Trac2,&_ret_arg,&ioAdminLevel,&ioLocked,&oModified); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAMultiCADSettingAtt##classe::SetPartsParameterModeLock(CAT_VARIANT_BOOL iLocked) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,24,&_Trac2,&iLocked); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetPartsParameterModeLock(iLocked); \
   ExitAfterCall(this,24,_Trac2,&_ret_arg,&iLocked); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAMultiCADSettingAtt##classe::get_ProEQuiltsRead(CAT_VARIANT_BOOL & oProEQuiltsRead) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,25,&_Trac2,&oProEQuiltsRead); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_ProEQuiltsRead(oProEQuiltsRead); \
   ExitAfterCall(this,25,_Trac2,&_ret_arg,&oProEQuiltsRead); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAMultiCADSettingAtt##classe::put_ProEQuiltsRead(CAT_VARIANT_BOOL iProEQuiltsRead) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,26,&_Trac2,&iProEQuiltsRead); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_ProEQuiltsRead(iProEQuiltsRead); \
   ExitAfterCall(this,26,_Trac2,&_ret_arg,&iProEQuiltsRead); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAMultiCADSettingAtt##classe::GetProEQuiltsReadInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,27,&_Trac2,&ioAdminLevel,&ioLocked,&oModified); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetProEQuiltsReadInfo(ioAdminLevel,ioLocked,oModified); \
   ExitAfterCall(this,27,_Trac2,&_ret_arg,&ioAdminLevel,&ioLocked,&oModified); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAMultiCADSettingAtt##classe::SetProEQuiltsReadLock(CAT_VARIANT_BOOL iLocked) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,28,&_Trac2,&iLocked); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetProEQuiltsReadLock(iLocked); \
   ExitAfterCall(this,28,_Trac2,&_ret_arg,&iLocked); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAMultiCADSettingAtt##classe::get_ProESimpRepMode(CAT_VARIANT_BOOL & oProESimpRepMode) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,29,&_Trac2,&oProESimpRepMode); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_ProESimpRepMode(oProESimpRepMode); \
   ExitAfterCall(this,29,_Trac2,&_ret_arg,&oProESimpRepMode); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAMultiCADSettingAtt##classe::put_ProESimpRepMode(CAT_VARIANT_BOOL iProESimpRepMode) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,30,&_Trac2,&iProESimpRepMode); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_ProESimpRepMode(iProESimpRepMode); \
   ExitAfterCall(this,30,_Trac2,&_ret_arg,&iProESimpRepMode); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAMultiCADSettingAtt##classe::GetProESimpRepModeInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,31,&_Trac2,&ioAdminLevel,&ioLocked,&oModified); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetProESimpRepModeInfo(ioAdminLevel,ioLocked,oModified); \
   ExitAfterCall(this,31,_Trac2,&_ret_arg,&ioAdminLevel,&ioLocked,&oModified); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAMultiCADSettingAtt##classe::SetProESimpRepModeLock(CAT_VARIANT_BOOL iLocked) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,32,&_Trac2,&iLocked); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetProESimpRepModeLock(iLocked); \
   ExitAfterCall(this,32,_Trac2,&_ret_arg,&iLocked); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAMultiCADSettingAtt##classe::get_ProESimpRepName(CATBSTR & oProESimpRepName) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,33,&_Trac2,&oProESimpRepName); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_ProESimpRepName(oProESimpRepName); \
   ExitAfterCall(this,33,_Trac2,&_ret_arg,&oProESimpRepName); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAMultiCADSettingAtt##classe::put_ProESimpRepName(const CATBSTR & iProESimpRepName) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,34,&_Trac2,&iProESimpRepName); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_ProESimpRepName(iProESimpRepName); \
   ExitAfterCall(this,34,_Trac2,&_ret_arg,&iProESimpRepName); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAMultiCADSettingAtt##classe::GetProESimpRepNameInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,35,&_Trac2,&ioAdminLevel,&ioLocked,&oModified); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetProESimpRepNameInfo(ioAdminLevel,ioLocked,oModified); \
   ExitAfterCall(this,35,_Trac2,&_ret_arg,&ioAdminLevel,&ioLocked,&oModified); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAMultiCADSettingAtt##classe::SetProESimpRepNameLock(CAT_VARIANT_BOOL iLocked) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,36,&_Trac2,&iLocked); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetProESimpRepNameLock(iLocked); \
   ExitAfterCall(this,36,_Trac2,&_ret_arg,&iLocked); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAMultiCADSettingAtt##classe::get_ProEInstanceMode(CAT_VARIANT_BOOL & oProEInstanceMode) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,37,&_Trac2,&oProEInstanceMode); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_ProEInstanceMode(oProEInstanceMode); \
   ExitAfterCall(this,37,_Trac2,&_ret_arg,&oProEInstanceMode); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAMultiCADSettingAtt##classe::put_ProEInstanceMode(CAT_VARIANT_BOOL iProEInstanceMode) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,38,&_Trac2,&iProEInstanceMode); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_ProEInstanceMode(iProEInstanceMode); \
   ExitAfterCall(this,38,_Trac2,&_ret_arg,&iProEInstanceMode); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAMultiCADSettingAtt##classe::GetProEInstanceModeInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,39,&_Trac2,&ioAdminLevel,&ioLocked,&oModified); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetProEInstanceModeInfo(ioAdminLevel,ioLocked,oModified); \
   ExitAfterCall(this,39,_Trac2,&_ret_arg,&ioAdminLevel,&ioLocked,&oModified); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAMultiCADSettingAtt##classe::SetProEInstanceModeLock(CAT_VARIANT_BOOL iLocked) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,40,&_Trac2,&iLocked); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetProEInstanceModeLock(iLocked); \
   ExitAfterCall(this,40,_Trac2,&_ret_arg,&iLocked); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAMultiCADSettingAtt##classe::get_ProEInstanceName(CATBSTR & oProEInstanceName) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,41,&_Trac2,&oProEInstanceName); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_ProEInstanceName(oProEInstanceName); \
   ExitAfterCall(this,41,_Trac2,&_ret_arg,&oProEInstanceName); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAMultiCADSettingAtt##classe::put_ProEInstanceName(const CATBSTR & iProEInstanceName) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,42,&_Trac2,&iProEInstanceName); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_ProEInstanceName(iProEInstanceName); \
   ExitAfterCall(this,42,_Trac2,&_ret_arg,&iProEInstanceName); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAMultiCADSettingAtt##classe::GetProEInstanceNameInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,43,&_Trac2,&ioAdminLevel,&ioLocked,&oModified); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetProEInstanceNameInfo(ioAdminLevel,ioLocked,oModified); \
   ExitAfterCall(this,43,_Trac2,&_ret_arg,&ioAdminLevel,&ioLocked,&oModified); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAMultiCADSettingAtt##classe::SetProEInstanceNameLock(CAT_VARIANT_BOOL iLocked) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,44,&_Trac2,&iLocked); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetProEInstanceNameLock(iLocked); \
   ExitAfterCall(this,44,_Trac2,&_ret_arg,&iLocked); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAMultiCADSettingAtt##classe::get_UGLayerNumbers(CATBSTR & oUGLayerNumbers) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,45,&_Trac2,&oUGLayerNumbers); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_UGLayerNumbers(oUGLayerNumbers); \
   ExitAfterCall(this,45,_Trac2,&_ret_arg,&oUGLayerNumbers); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAMultiCADSettingAtt##classe::put_UGLayerNumbers(const CATBSTR & iUGLayerNumbers) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,46,&_Trac2,&iUGLayerNumbers); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_UGLayerNumbers(iUGLayerNumbers); \
   ExitAfterCall(this,46,_Trac2,&_ret_arg,&iUGLayerNumbers); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAMultiCADSettingAtt##classe::GetUGLayerNumbersInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,47,&_Trac2,&ioAdminLevel,&ioLocked,&oModified); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetUGLayerNumbersInfo(ioAdminLevel,ioLocked,oModified); \
   ExitAfterCall(this,47,_Trac2,&_ret_arg,&ioAdminLevel,&ioLocked,&oModified); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAMultiCADSettingAtt##classe::SetUGLayerNumbersLock(CAT_VARIANT_BOOL iLocked) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,48,&_Trac2,&iLocked); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetUGLayerNumbersLock(iLocked); \
   ExitAfterCall(this,48,_Trac2,&_ret_arg,&iLocked); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAMultiCADSettingAtt##classe::get_UGActiveLayersOnly(CAT_VARIANT_BOOL & oUGActiveLayersOnly) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,49,&_Trac2,&oUGActiveLayersOnly); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_UGActiveLayersOnly(oUGActiveLayersOnly); \
   ExitAfterCall(this,49,_Trac2,&_ret_arg,&oUGActiveLayersOnly); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAMultiCADSettingAtt##classe::put_UGActiveLayersOnly(CAT_VARIANT_BOOL iUGActiveLayersOnly) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,50,&_Trac2,&iUGActiveLayersOnly); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_UGActiveLayersOnly(iUGActiveLayersOnly); \
   ExitAfterCall(this,50,_Trac2,&_ret_arg,&iUGActiveLayersOnly); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAMultiCADSettingAtt##classe::GetUGActiveLayersOnlyInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,51,&_Trac2,&ioAdminLevel,&ioLocked,&oModified); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetUGActiveLayersOnlyInfo(ioAdminLevel,ioLocked,oModified); \
   ExitAfterCall(this,51,_Trac2,&_ret_arg,&ioAdminLevel,&ioLocked,&oModified); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAMultiCADSettingAtt##classe::SetUGActiveLayersOnlyLock(CAT_VARIANT_BOOL iLocked) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,52,&_Trac2,&iLocked); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetUGActiveLayersOnlyLock(iLocked); \
   ExitAfterCall(this,52,_Trac2,&_ret_arg,&iLocked); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAMultiCADSettingAtt##classe::get_UGOpenSurfaces(CAT_VARIANT_BOOL & oUGOpenSurfaces) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,53,&_Trac2,&oUGOpenSurfaces); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_UGOpenSurfaces(oUGOpenSurfaces); \
   ExitAfterCall(this,53,_Trac2,&_ret_arg,&oUGOpenSurfaces); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAMultiCADSettingAtt##classe::put_UGOpenSurfaces(CAT_VARIANT_BOOL iUGOpenSurfaces) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,54,&_Trac2,&iUGOpenSurfaces); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_UGOpenSurfaces(iUGOpenSurfaces); \
   ExitAfterCall(this,54,_Trac2,&_ret_arg,&iUGOpenSurfaces); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAMultiCADSettingAtt##classe::GetUGOpenSurfacesInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,55,&_Trac2,&ioAdminLevel,&ioLocked,&oModified); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetUGOpenSurfacesInfo(ioAdminLevel,ioLocked,oModified); \
   ExitAfterCall(this,55,_Trac2,&_ret_arg,&ioAdminLevel,&ioLocked,&oModified); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAMultiCADSettingAtt##classe::SetUGOpenSurfacesLock(CAT_VARIANT_BOOL iLocked) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,56,&_Trac2,&iLocked); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetUGOpenSurfacesLock(iLocked); \
   ExitAfterCall(this,56,_Trac2,&_ret_arg,&iLocked); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAMultiCADSettingAtt##classe::get_UGDrawingName(CATBSTR & oUGDrawingName) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,57,&_Trac2,&oUGDrawingName); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_UGDrawingName(oUGDrawingName); \
   ExitAfterCall(this,57,_Trac2,&_ret_arg,&oUGDrawingName); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAMultiCADSettingAtt##classe::put_UGDrawingName(const CATBSTR & iUGDrawingName) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,58,&_Trac2,&iUGDrawingName); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_UGDrawingName(iUGDrawingName); \
   ExitAfterCall(this,58,_Trac2,&_ret_arg,&iUGDrawingName); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAMultiCADSettingAtt##classe::GetUGDrawingNameInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,59,&_Trac2,&ioAdminLevel,&ioLocked,&oModified); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetUGDrawingNameInfo(ioAdminLevel,ioLocked,oModified); \
   ExitAfterCall(this,59,_Trac2,&_ret_arg,&ioAdminLevel,&ioLocked,&oModified); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAMultiCADSettingAtt##classe::SetUGDrawingNameLock(CAT_VARIANT_BOOL iLocked) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,60,&_Trac2,&iLocked); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetUGDrawingNameLock(iLocked); \
   ExitAfterCall(this,60,_Trac2,&_ret_arg,&iLocked); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAMultiCADSettingAtt##classe::get_UgReferenceSet(CATBSTR & oUgReferenceSet) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,61,&_Trac2,&oUgReferenceSet); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_UgReferenceSet(oUgReferenceSet); \
   ExitAfterCall(this,61,_Trac2,&_ret_arg,&oUgReferenceSet); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAMultiCADSettingAtt##classe::put_UgReferenceSet(const CATBSTR & iUgReferenceSet) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,62,&_Trac2,&iUgReferenceSet); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_UgReferenceSet(iUgReferenceSet); \
   ExitAfterCall(this,62,_Trac2,&_ret_arg,&iUgReferenceSet); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAMultiCADSettingAtt##classe::GetUgReferenceSetInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,63,&_Trac2,&ioAdminLevel,&ioLocked,&oModified); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetUgReferenceSetInfo(ioAdminLevel,ioLocked,oModified); \
   ExitAfterCall(this,63,_Trac2,&_ret_arg,&ioAdminLevel,&ioLocked,&oModified); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAMultiCADSettingAtt##classe::SetUgReferenceSetLock(CAT_VARIANT_BOOL iLocked) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,64,&_Trac2,&iLocked); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetUgReferenceSetLock(iLocked); \
   ExitAfterCall(this,64,_Trac2,&_ret_arg,&iLocked); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAMultiCADSettingAtt##classe::get_Annotation3DMode(CAT_VARIANT_BOOL & oAnnotation3DMode) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,65,&_Trac2,&oAnnotation3DMode); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Annotation3DMode(oAnnotation3DMode); \
   ExitAfterCall(this,65,_Trac2,&_ret_arg,&oAnnotation3DMode); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAMultiCADSettingAtt##classe::put_Annotation3DMode(CAT_VARIANT_BOOL iAnnotation3DMode) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,66,&_Trac2,&iAnnotation3DMode); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_Annotation3DMode(iAnnotation3DMode); \
   ExitAfterCall(this,66,_Trac2,&_ret_arg,&iAnnotation3DMode); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAMultiCADSettingAtt##classe::GetAnnotation3DModeInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,67,&_Trac2,&ioAdminLevel,&ioLocked,&oModified); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetAnnotation3DModeInfo(ioAdminLevel,ioLocked,oModified); \
   ExitAfterCall(this,67,_Trac2,&_ret_arg,&ioAdminLevel,&ioLocked,&oModified); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAMultiCADSettingAtt##classe::SetAnnotation3DModeLock(CAT_VARIANT_BOOL iLocked) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,68,&_Trac2,&iLocked); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetAnnotation3DModeLock(iLocked); \
   ExitAfterCall(this,68,_Trac2,&_ret_arg,&iLocked); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAMultiCADSettingAtt##classe::get_TranslatorMode(CATLONG & oTranslatorMode) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,69,&_Trac2,&oTranslatorMode); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_TranslatorMode(oTranslatorMode); \
   ExitAfterCall(this,69,_Trac2,&_ret_arg,&oTranslatorMode); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAMultiCADSettingAtt##classe::put_TranslatorMode(CATLONG iTranslatorMode) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,70,&_Trac2,&iTranslatorMode); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_TranslatorMode(iTranslatorMode); \
   ExitAfterCall(this,70,_Trac2,&_ret_arg,&iTranslatorMode); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAMultiCADSettingAtt##classe::GetTranslatorModeInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,71,&_Trac2,&ioAdminLevel,&ioLocked,&oModified); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetTranslatorModeInfo(ioAdminLevel,ioLocked,oModified); \
   ExitAfterCall(this,71,_Trac2,&_ret_arg,&ioAdminLevel,&ioLocked,&oModified); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAMultiCADSettingAtt##classe::SetTranslatorModeLock(CAT_VARIANT_BOOL iLocked) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,72,&_Trac2,&iLocked); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetTranslatorModeLock(iLocked); \
   ExitAfterCall(this,72,_Trac2,&_ret_arg,&iLocked); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAMultiCADSettingAtt##classe::Commit() \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,73,&_Trac2); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->Commit(); \
   ExitAfterCall(this,73,_Trac2,&_ret_arg); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAMultiCADSettingAtt##classe::Rollback() \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,74,&_Trac2); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->Rollback(); \
   ExitAfterCall(this,74,_Trac2,&_ret_arg); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAMultiCADSettingAtt##classe::ResetToAdminValues() \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,75,&_Trac2); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->ResetToAdminValues(); \
   ExitAfterCall(this,75,_Trac2,&_ret_arg); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAMultiCADSettingAtt##classe::ResetToAdminValuesByName(const CATSafeArrayVariant & iAttList) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,76,&_Trac2,&iAttList); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->ResetToAdminValuesByName(iAttList); \
   ExitAfterCall(this,76,_Trac2,&_ret_arg,&iAttList); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAMultiCADSettingAtt##classe::SaveRepository() \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,77,&_Trac2); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SaveRepository(); \
   ExitAfterCall(this,77,_Trac2,&_ret_arg); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAMultiCADSettingAtt##classe::get_Application(CATIAApplication *& oApplication) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,78,&_Trac2,&oApplication); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Application(oApplication); \
   ExitAfterCall(this,78,_Trac2,&_ret_arg,&oApplication); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAMultiCADSettingAtt##classe::get_Parent(CATBaseDispatch *& oParent) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,79,&_Trac2,&oParent); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Parent(oParent); \
   ExitAfterCall(this,79,_Trac2,&_ret_arg,&oParent); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAMultiCADSettingAtt##classe::get_Name(CATBSTR & oNameBSTR) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,80,&_Trac2,&oNameBSTR); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Name(oNameBSTR); \
   ExitAfterCall(this,80,_Trac2,&_ret_arg,&oNameBSTR); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAMultiCADSettingAtt##classe::put_Name(const CATBSTR & iNameBSTR) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,81,&_Trac2,&iNameBSTR); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_Name(iNameBSTR); \
   ExitAfterCall(this,81,_Trac2,&_ret_arg,&iNameBSTR); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAMultiCADSettingAtt##classe::GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,82,&_Trac2,&IDName,&RealObj); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetItem(IDName,RealObj); \
   ExitAfterCall(this,82,_Trac2,&_ret_arg,&IDName,&RealObj); \
   return(_ret_arg); \
} \



/* Macro used to link an implementation with an interface */
#define TIE_CATIAMultiCADSettingAtt(classe) \
 \
 \
declare_TIE_CATIAMultiCADSettingAtt(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIAMultiCADSettingAtt##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIAMultiCADSettingAtt,"CATIAMultiCADSettingAtt",CATIAMultiCADSettingAtt::MetaObject(),classe::MetaObject(),TIE); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIAMultiCADSettingAtt(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIECreation(CATIAMultiCADSettingAtt, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIAMultiCADSettingAtt##classe(classe::MetaObject(),CATIAMultiCADSettingAtt::MetaObject(),(void *)CreateTIECATIAMultiCADSettingAtt##classe)



/* Macro used to link an implementation with an interface */
/* This TIE is chained on the implementation object */
#define TIEchain_CATIAMultiCADSettingAtt(classe) \
 \
 \
declare_TIE_CATIAMultiCADSettingAtt(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIAMultiCADSettingAtt##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIAMultiCADSettingAtt,"CATIAMultiCADSettingAtt",CATIAMultiCADSettingAtt::MetaObject(),classe::MetaObject(),TIEchain); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIAMultiCADSettingAtt(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIEchainCreation(CATIAMultiCADSettingAtt, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIAMultiCADSettingAtt##classe(classe::MetaObject(),CATIAMultiCADSettingAtt::MetaObject(),(void *)CreateTIECATIAMultiCADSettingAtt##classe)


/* Macro to switch between BOA and TIE at build time */ 
#ifdef CATSYS_BOA_IS_TIE
#define BOA_CATIAMultiCADSettingAtt(classe) TIE_CATIAMultiCADSettingAtt(classe)
#else
#define BOA_CATIAMultiCADSettingAtt(classe) CATImplementBOA(CATIAMultiCADSettingAtt, classe)
#endif

#endif
