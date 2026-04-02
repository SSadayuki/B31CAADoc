#ifndef __TIE_CATIAFunctionalSystemSettingAtt
#define __TIE_CATIAFunctionalSystemSettingAtt

#include <string.h>
#include "CATBaseUnknown.h"
#include "CATMetaClass.h"
#include "CATMacForTie.h"
#include "CATExitJournal.h"
#include "CATIAFunctionalSystemSettingAtt.h"
#include "JS0DSPA.h"


#ifdef _WINDOWS_SOURCE
#define Exported __declspec(dllexport)
#define Imported __declspec(dllimport)
#else
#define Exported 
#define Imported 
#endif


/* To link an implementation with the interface CATIAFunctionalSystemSettingAtt */
#define declare_TIE_CATIAFunctionalSystemSettingAtt(classe) \
 \
 \
class TIECATIAFunctionalSystemSettingAtt##classe : public CATIAFunctionalSystemSettingAtt \
{ \
   private: \
      CATDeclareCommonTIEMembers \
   public: \
      CATDeclareTIEMethods(CATIAFunctionalSystemSettingAtt, classe) \
      CATDeclareIUnknownMethodsForCATBaseUnknownTIE \
      CATDeclareIDispatchMethodsForCATBaseUnknownTIE \
      CATDeclareCATBaseUnknownMethodsForTIE \
      virtual HRESULT __stdcall get_DocumentContentAtCreation(CATLONG & oDocumentContentAtCreation); \
      virtual HRESULT __stdcall put_DocumentContentAtCreation(CATLONG iDocumentContentAtCreation); \
      virtual HRESULT __stdcall GetDocumentContentAtCreationInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified); \
      virtual HRESULT __stdcall SetDocumentContentAtCreationLock(CAT_VARIANT_BOOL iLocked); \
      virtual HRESULT __stdcall get_SplitFunctionalObjectName(CATLONG & oSplitFunctionalObjectName); \
      virtual HRESULT __stdcall put_SplitFunctionalObjectName(CATLONG iSplitFunctionalObjectName); \
      virtual HRESULT __stdcall GetSplitFunctionalObjectNameInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified); \
      virtual HRESULT __stdcall SetSplitFunctionalObjectNameLock(CAT_VARIANT_BOOL iLocked); \
      virtual HRESULT __stdcall get_StringUsedAsCarriageReturn(CATBSTR & oStringUsedAsCarriageReturn); \
      virtual HRESULT __stdcall put_StringUsedAsCarriageReturn(const CATBSTR & iStringUsedAsCarriageReturn); \
      virtual HRESULT __stdcall GetStringUsedAsCarriageReturnInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified); \
      virtual HRESULT __stdcall SetStringUsedAsCarriageReturnLock(CAT_VARIANT_BOOL iLocked); \
      virtual HRESULT __stdcall get_FunctionalActionPresentation(CATLONG & oFunctionalActionPresentation); \
      virtual HRESULT __stdcall put_FunctionalActionPresentation(CATLONG iFunctionalActionPresentation); \
      virtual HRESULT __stdcall GetFunctionalActionPresentationInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified); \
      virtual HRESULT __stdcall SetFunctionalActionPresentationLock(CAT_VARIANT_BOOL iLocked); \
      virtual HRESULT __stdcall get_ShowParameters(CATLONG & oShowParameters); \
      virtual HRESULT __stdcall put_ShowParameters(CATLONG iShowParameters); \
      virtual HRESULT __stdcall GetShowParametersInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified); \
      virtual HRESULT __stdcall SetShowParametersLock(CAT_VARIANT_BOOL iLocked); \
      virtual HRESULT __stdcall get_ShowRelations(CATLONG & oShowRelations); \
      virtual HRESULT __stdcall put_ShowRelations(CATLONG iShowRelations); \
      virtual HRESULT __stdcall GetShowRelationsInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified); \
      virtual HRESULT __stdcall SetShowRelationsLock(CAT_VARIANT_BOOL iLocked); \
      virtual HRESULT __stdcall get_TypeOfIconOnFunctionalElement(CATLONG & oTypeOfIconOnFunctionalElement); \
      virtual HRESULT __stdcall put_TypeOfIconOnFunctionalElement(CATLONG iTypeOfIconOnFunctionalElement); \
      virtual HRESULT __stdcall GetTypeOfIconOnFunctionalElementInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified); \
      virtual HRESULT __stdcall SetTypeOfIconOnFunctionalElementLock(CAT_VARIANT_BOOL iLocked); \
      virtual HRESULT __stdcall get_ShowSynchroStatusOfLocalParamCache(CATLONG & oShowSynchroStatusOfLocalParamCache); \
      virtual HRESULT __stdcall put_ShowSynchroStatusOfLocalParamCache(CATLONG iShowSynchroStatusOfLocalParamCache); \
      virtual HRESULT __stdcall GetShowSynchroStatusOfLocalParamCacheInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified); \
      virtual HRESULT __stdcall SetShowSynchroStatusOfLocalParamCacheLock(CAT_VARIANT_BOOL iLocked); \
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



#define ENVTIEdeclare_CATIAFunctionalSystemSettingAtt(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
virtual HRESULT __stdcall get_DocumentContentAtCreation(CATLONG & oDocumentContentAtCreation); \
virtual HRESULT __stdcall put_DocumentContentAtCreation(CATLONG iDocumentContentAtCreation); \
virtual HRESULT __stdcall GetDocumentContentAtCreationInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified); \
virtual HRESULT __stdcall SetDocumentContentAtCreationLock(CAT_VARIANT_BOOL iLocked); \
virtual HRESULT __stdcall get_SplitFunctionalObjectName(CATLONG & oSplitFunctionalObjectName); \
virtual HRESULT __stdcall put_SplitFunctionalObjectName(CATLONG iSplitFunctionalObjectName); \
virtual HRESULT __stdcall GetSplitFunctionalObjectNameInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified); \
virtual HRESULT __stdcall SetSplitFunctionalObjectNameLock(CAT_VARIANT_BOOL iLocked); \
virtual HRESULT __stdcall get_StringUsedAsCarriageReturn(CATBSTR & oStringUsedAsCarriageReturn); \
virtual HRESULT __stdcall put_StringUsedAsCarriageReturn(const CATBSTR & iStringUsedAsCarriageReturn); \
virtual HRESULT __stdcall GetStringUsedAsCarriageReturnInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified); \
virtual HRESULT __stdcall SetStringUsedAsCarriageReturnLock(CAT_VARIANT_BOOL iLocked); \
virtual HRESULT __stdcall get_FunctionalActionPresentation(CATLONG & oFunctionalActionPresentation); \
virtual HRESULT __stdcall put_FunctionalActionPresentation(CATLONG iFunctionalActionPresentation); \
virtual HRESULT __stdcall GetFunctionalActionPresentationInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified); \
virtual HRESULT __stdcall SetFunctionalActionPresentationLock(CAT_VARIANT_BOOL iLocked); \
virtual HRESULT __stdcall get_ShowParameters(CATLONG & oShowParameters); \
virtual HRESULT __stdcall put_ShowParameters(CATLONG iShowParameters); \
virtual HRESULT __stdcall GetShowParametersInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified); \
virtual HRESULT __stdcall SetShowParametersLock(CAT_VARIANT_BOOL iLocked); \
virtual HRESULT __stdcall get_ShowRelations(CATLONG & oShowRelations); \
virtual HRESULT __stdcall put_ShowRelations(CATLONG iShowRelations); \
virtual HRESULT __stdcall GetShowRelationsInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified); \
virtual HRESULT __stdcall SetShowRelationsLock(CAT_VARIANT_BOOL iLocked); \
virtual HRESULT __stdcall get_TypeOfIconOnFunctionalElement(CATLONG & oTypeOfIconOnFunctionalElement); \
virtual HRESULT __stdcall put_TypeOfIconOnFunctionalElement(CATLONG iTypeOfIconOnFunctionalElement); \
virtual HRESULT __stdcall GetTypeOfIconOnFunctionalElementInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified); \
virtual HRESULT __stdcall SetTypeOfIconOnFunctionalElementLock(CAT_VARIANT_BOOL iLocked); \
virtual HRESULT __stdcall get_ShowSynchroStatusOfLocalParamCache(CATLONG & oShowSynchroStatusOfLocalParamCache); \
virtual HRESULT __stdcall put_ShowSynchroStatusOfLocalParamCache(CATLONG iShowSynchroStatusOfLocalParamCache); \
virtual HRESULT __stdcall GetShowSynchroStatusOfLocalParamCacheInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified); \
virtual HRESULT __stdcall SetShowSynchroStatusOfLocalParamCacheLock(CAT_VARIANT_BOOL iLocked); \
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


#define ENVTIEdefine_CATIAFunctionalSystemSettingAtt(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
HRESULT __stdcall  ENVTIEName::get_DocumentContentAtCreation(CATLONG & oDocumentContentAtCreation) \
{ \
return (ENVTIECALL(CATIAFunctionalSystemSettingAtt,ENVTIETypeLetter,ENVTIELetter)get_DocumentContentAtCreation(oDocumentContentAtCreation)); \
} \
HRESULT __stdcall  ENVTIEName::put_DocumentContentAtCreation(CATLONG iDocumentContentAtCreation) \
{ \
return (ENVTIECALL(CATIAFunctionalSystemSettingAtt,ENVTIETypeLetter,ENVTIELetter)put_DocumentContentAtCreation(iDocumentContentAtCreation)); \
} \
HRESULT __stdcall  ENVTIEName::GetDocumentContentAtCreationInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified) \
{ \
return (ENVTIECALL(CATIAFunctionalSystemSettingAtt,ENVTIETypeLetter,ENVTIELetter)GetDocumentContentAtCreationInfo(ioAdminLevel,ioLocked,oModified)); \
} \
HRESULT __stdcall  ENVTIEName::SetDocumentContentAtCreationLock(CAT_VARIANT_BOOL iLocked) \
{ \
return (ENVTIECALL(CATIAFunctionalSystemSettingAtt,ENVTIETypeLetter,ENVTIELetter)SetDocumentContentAtCreationLock(iLocked)); \
} \
HRESULT __stdcall  ENVTIEName::get_SplitFunctionalObjectName(CATLONG & oSplitFunctionalObjectName) \
{ \
return (ENVTIECALL(CATIAFunctionalSystemSettingAtt,ENVTIETypeLetter,ENVTIELetter)get_SplitFunctionalObjectName(oSplitFunctionalObjectName)); \
} \
HRESULT __stdcall  ENVTIEName::put_SplitFunctionalObjectName(CATLONG iSplitFunctionalObjectName) \
{ \
return (ENVTIECALL(CATIAFunctionalSystemSettingAtt,ENVTIETypeLetter,ENVTIELetter)put_SplitFunctionalObjectName(iSplitFunctionalObjectName)); \
} \
HRESULT __stdcall  ENVTIEName::GetSplitFunctionalObjectNameInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified) \
{ \
return (ENVTIECALL(CATIAFunctionalSystemSettingAtt,ENVTIETypeLetter,ENVTIELetter)GetSplitFunctionalObjectNameInfo(ioAdminLevel,ioLocked,oModified)); \
} \
HRESULT __stdcall  ENVTIEName::SetSplitFunctionalObjectNameLock(CAT_VARIANT_BOOL iLocked) \
{ \
return (ENVTIECALL(CATIAFunctionalSystemSettingAtt,ENVTIETypeLetter,ENVTIELetter)SetSplitFunctionalObjectNameLock(iLocked)); \
} \
HRESULT __stdcall  ENVTIEName::get_StringUsedAsCarriageReturn(CATBSTR & oStringUsedAsCarriageReturn) \
{ \
return (ENVTIECALL(CATIAFunctionalSystemSettingAtt,ENVTIETypeLetter,ENVTIELetter)get_StringUsedAsCarriageReturn(oStringUsedAsCarriageReturn)); \
} \
HRESULT __stdcall  ENVTIEName::put_StringUsedAsCarriageReturn(const CATBSTR & iStringUsedAsCarriageReturn) \
{ \
return (ENVTIECALL(CATIAFunctionalSystemSettingAtt,ENVTIETypeLetter,ENVTIELetter)put_StringUsedAsCarriageReturn(iStringUsedAsCarriageReturn)); \
} \
HRESULT __stdcall  ENVTIEName::GetStringUsedAsCarriageReturnInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified) \
{ \
return (ENVTIECALL(CATIAFunctionalSystemSettingAtt,ENVTIETypeLetter,ENVTIELetter)GetStringUsedAsCarriageReturnInfo(ioAdminLevel,ioLocked,oModified)); \
} \
HRESULT __stdcall  ENVTIEName::SetStringUsedAsCarriageReturnLock(CAT_VARIANT_BOOL iLocked) \
{ \
return (ENVTIECALL(CATIAFunctionalSystemSettingAtt,ENVTIETypeLetter,ENVTIELetter)SetStringUsedAsCarriageReturnLock(iLocked)); \
} \
HRESULT __stdcall  ENVTIEName::get_FunctionalActionPresentation(CATLONG & oFunctionalActionPresentation) \
{ \
return (ENVTIECALL(CATIAFunctionalSystemSettingAtt,ENVTIETypeLetter,ENVTIELetter)get_FunctionalActionPresentation(oFunctionalActionPresentation)); \
} \
HRESULT __stdcall  ENVTIEName::put_FunctionalActionPresentation(CATLONG iFunctionalActionPresentation) \
{ \
return (ENVTIECALL(CATIAFunctionalSystemSettingAtt,ENVTIETypeLetter,ENVTIELetter)put_FunctionalActionPresentation(iFunctionalActionPresentation)); \
} \
HRESULT __stdcall  ENVTIEName::GetFunctionalActionPresentationInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified) \
{ \
return (ENVTIECALL(CATIAFunctionalSystemSettingAtt,ENVTIETypeLetter,ENVTIELetter)GetFunctionalActionPresentationInfo(ioAdminLevel,ioLocked,oModified)); \
} \
HRESULT __stdcall  ENVTIEName::SetFunctionalActionPresentationLock(CAT_VARIANT_BOOL iLocked) \
{ \
return (ENVTIECALL(CATIAFunctionalSystemSettingAtt,ENVTIETypeLetter,ENVTIELetter)SetFunctionalActionPresentationLock(iLocked)); \
} \
HRESULT __stdcall  ENVTIEName::get_ShowParameters(CATLONG & oShowParameters) \
{ \
return (ENVTIECALL(CATIAFunctionalSystemSettingAtt,ENVTIETypeLetter,ENVTIELetter)get_ShowParameters(oShowParameters)); \
} \
HRESULT __stdcall  ENVTIEName::put_ShowParameters(CATLONG iShowParameters) \
{ \
return (ENVTIECALL(CATIAFunctionalSystemSettingAtt,ENVTIETypeLetter,ENVTIELetter)put_ShowParameters(iShowParameters)); \
} \
HRESULT __stdcall  ENVTIEName::GetShowParametersInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified) \
{ \
return (ENVTIECALL(CATIAFunctionalSystemSettingAtt,ENVTIETypeLetter,ENVTIELetter)GetShowParametersInfo(ioAdminLevel,ioLocked,oModified)); \
} \
HRESULT __stdcall  ENVTIEName::SetShowParametersLock(CAT_VARIANT_BOOL iLocked) \
{ \
return (ENVTIECALL(CATIAFunctionalSystemSettingAtt,ENVTIETypeLetter,ENVTIELetter)SetShowParametersLock(iLocked)); \
} \
HRESULT __stdcall  ENVTIEName::get_ShowRelations(CATLONG & oShowRelations) \
{ \
return (ENVTIECALL(CATIAFunctionalSystemSettingAtt,ENVTIETypeLetter,ENVTIELetter)get_ShowRelations(oShowRelations)); \
} \
HRESULT __stdcall  ENVTIEName::put_ShowRelations(CATLONG iShowRelations) \
{ \
return (ENVTIECALL(CATIAFunctionalSystemSettingAtt,ENVTIETypeLetter,ENVTIELetter)put_ShowRelations(iShowRelations)); \
} \
HRESULT __stdcall  ENVTIEName::GetShowRelationsInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified) \
{ \
return (ENVTIECALL(CATIAFunctionalSystemSettingAtt,ENVTIETypeLetter,ENVTIELetter)GetShowRelationsInfo(ioAdminLevel,ioLocked,oModified)); \
} \
HRESULT __stdcall  ENVTIEName::SetShowRelationsLock(CAT_VARIANT_BOOL iLocked) \
{ \
return (ENVTIECALL(CATIAFunctionalSystemSettingAtt,ENVTIETypeLetter,ENVTIELetter)SetShowRelationsLock(iLocked)); \
} \
HRESULT __stdcall  ENVTIEName::get_TypeOfIconOnFunctionalElement(CATLONG & oTypeOfIconOnFunctionalElement) \
{ \
return (ENVTIECALL(CATIAFunctionalSystemSettingAtt,ENVTIETypeLetter,ENVTIELetter)get_TypeOfIconOnFunctionalElement(oTypeOfIconOnFunctionalElement)); \
} \
HRESULT __stdcall  ENVTIEName::put_TypeOfIconOnFunctionalElement(CATLONG iTypeOfIconOnFunctionalElement) \
{ \
return (ENVTIECALL(CATIAFunctionalSystemSettingAtt,ENVTIETypeLetter,ENVTIELetter)put_TypeOfIconOnFunctionalElement(iTypeOfIconOnFunctionalElement)); \
} \
HRESULT __stdcall  ENVTIEName::GetTypeOfIconOnFunctionalElementInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified) \
{ \
return (ENVTIECALL(CATIAFunctionalSystemSettingAtt,ENVTIETypeLetter,ENVTIELetter)GetTypeOfIconOnFunctionalElementInfo(ioAdminLevel,ioLocked,oModified)); \
} \
HRESULT __stdcall  ENVTIEName::SetTypeOfIconOnFunctionalElementLock(CAT_VARIANT_BOOL iLocked) \
{ \
return (ENVTIECALL(CATIAFunctionalSystemSettingAtt,ENVTIETypeLetter,ENVTIELetter)SetTypeOfIconOnFunctionalElementLock(iLocked)); \
} \
HRESULT __stdcall  ENVTIEName::get_ShowSynchroStatusOfLocalParamCache(CATLONG & oShowSynchroStatusOfLocalParamCache) \
{ \
return (ENVTIECALL(CATIAFunctionalSystemSettingAtt,ENVTIETypeLetter,ENVTIELetter)get_ShowSynchroStatusOfLocalParamCache(oShowSynchroStatusOfLocalParamCache)); \
} \
HRESULT __stdcall  ENVTIEName::put_ShowSynchroStatusOfLocalParamCache(CATLONG iShowSynchroStatusOfLocalParamCache) \
{ \
return (ENVTIECALL(CATIAFunctionalSystemSettingAtt,ENVTIETypeLetter,ENVTIELetter)put_ShowSynchroStatusOfLocalParamCache(iShowSynchroStatusOfLocalParamCache)); \
} \
HRESULT __stdcall  ENVTIEName::GetShowSynchroStatusOfLocalParamCacheInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified) \
{ \
return (ENVTIECALL(CATIAFunctionalSystemSettingAtt,ENVTIETypeLetter,ENVTIELetter)GetShowSynchroStatusOfLocalParamCacheInfo(ioAdminLevel,ioLocked,oModified)); \
} \
HRESULT __stdcall  ENVTIEName::SetShowSynchroStatusOfLocalParamCacheLock(CAT_VARIANT_BOOL iLocked) \
{ \
return (ENVTIECALL(CATIAFunctionalSystemSettingAtt,ENVTIETypeLetter,ENVTIELetter)SetShowSynchroStatusOfLocalParamCacheLock(iLocked)); \
} \
HRESULT __stdcall  ENVTIEName::Commit() \
{ \
return (ENVTIECALL(CATIAFunctionalSystemSettingAtt,ENVTIETypeLetter,ENVTIELetter)Commit()); \
} \
HRESULT __stdcall  ENVTIEName::Rollback() \
{ \
return (ENVTIECALL(CATIAFunctionalSystemSettingAtt,ENVTIETypeLetter,ENVTIELetter)Rollback()); \
} \
HRESULT __stdcall  ENVTIEName::ResetToAdminValues() \
{ \
return (ENVTIECALL(CATIAFunctionalSystemSettingAtt,ENVTIETypeLetter,ENVTIELetter)ResetToAdminValues()); \
} \
HRESULT __stdcall  ENVTIEName::ResetToAdminValuesByName(const CATSafeArrayVariant & iAttList) \
{ \
return (ENVTIECALL(CATIAFunctionalSystemSettingAtt,ENVTIETypeLetter,ENVTIELetter)ResetToAdminValuesByName(iAttList)); \
} \
HRESULT __stdcall  ENVTIEName::SaveRepository() \
{ \
return (ENVTIECALL(CATIAFunctionalSystemSettingAtt,ENVTIETypeLetter,ENVTIELetter)SaveRepository()); \
} \
HRESULT  __stdcall  ENVTIEName::get_Application(CATIAApplication *& oApplication) \
{ \
return (ENVTIECALL(CATIAFunctionalSystemSettingAtt,ENVTIETypeLetter,ENVTIELetter)get_Application(oApplication)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Parent(CATBaseDispatch *& oParent) \
{ \
return (ENVTIECALL(CATIAFunctionalSystemSettingAtt,ENVTIETypeLetter,ENVTIELetter)get_Parent(oParent)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Name(CATBSTR & oNameBSTR) \
{ \
return (ENVTIECALL(CATIAFunctionalSystemSettingAtt,ENVTIETypeLetter,ENVTIELetter)get_Name(oNameBSTR)); \
} \
HRESULT  __stdcall  ENVTIEName::put_Name(const CATBSTR & iNameBSTR) \
{ \
return (ENVTIECALL(CATIAFunctionalSystemSettingAtt,ENVTIETypeLetter,ENVTIELetter)put_Name(iNameBSTR)); \
} \
HRESULT  __stdcall  ENVTIEName::GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj) \
{ \
return (ENVTIECALL(CATIAFunctionalSystemSettingAtt,ENVTIETypeLetter,ENVTIELetter)GetItem(IDName,RealObj)); \
} \


/* Name of the TIE class */
#define class_TIE_CATIAFunctionalSystemSettingAtt(classe)    TIECATIAFunctionalSystemSettingAtt##classe


/* Common methods inside a TIE */
#define common_TIE_CATIAFunctionalSystemSettingAtt(classe) \
 \
 \
/* Static initialization */ \
CATDefineCommonTIEMembers(CATIAFunctionalSystemSettingAtt, classe) \
 \
 \
CATImplementTIEMethods(CATIAFunctionalSystemSettingAtt, classe) \
CATImplementIUnknownMethodsForCATBaseUnknownTIE(CATIAFunctionalSystemSettingAtt, classe, 2) \
CATImplementIDispatchMethodsForCATBaseUnknownTIE(CATIAFunctionalSystemSettingAtt, classe) \
CATImplementCATBaseUnknownMethodsForTIE(CATIAFunctionalSystemSettingAtt, classe) \
 \
HRESULT __stdcall  TIECATIAFunctionalSystemSettingAtt##classe::get_DocumentContentAtCreation(CATLONG & oDocumentContentAtCreation) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,1,&_Trac2,&oDocumentContentAtCreation); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_DocumentContentAtCreation(oDocumentContentAtCreation); \
   ExitAfterCall(this,1,_Trac2,&_ret_arg,&oDocumentContentAtCreation); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAFunctionalSystemSettingAtt##classe::put_DocumentContentAtCreation(CATLONG iDocumentContentAtCreation) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,2,&_Trac2,&iDocumentContentAtCreation); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_DocumentContentAtCreation(iDocumentContentAtCreation); \
   ExitAfterCall(this,2,_Trac2,&_ret_arg,&iDocumentContentAtCreation); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAFunctionalSystemSettingAtt##classe::GetDocumentContentAtCreationInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,3,&_Trac2,&ioAdminLevel,&ioLocked,&oModified); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetDocumentContentAtCreationInfo(ioAdminLevel,ioLocked,oModified); \
   ExitAfterCall(this,3,_Trac2,&_ret_arg,&ioAdminLevel,&ioLocked,&oModified); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAFunctionalSystemSettingAtt##classe::SetDocumentContentAtCreationLock(CAT_VARIANT_BOOL iLocked) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,4,&_Trac2,&iLocked); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetDocumentContentAtCreationLock(iLocked); \
   ExitAfterCall(this,4,_Trac2,&_ret_arg,&iLocked); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAFunctionalSystemSettingAtt##classe::get_SplitFunctionalObjectName(CATLONG & oSplitFunctionalObjectName) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,5,&_Trac2,&oSplitFunctionalObjectName); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_SplitFunctionalObjectName(oSplitFunctionalObjectName); \
   ExitAfterCall(this,5,_Trac2,&_ret_arg,&oSplitFunctionalObjectName); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAFunctionalSystemSettingAtt##classe::put_SplitFunctionalObjectName(CATLONG iSplitFunctionalObjectName) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,6,&_Trac2,&iSplitFunctionalObjectName); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_SplitFunctionalObjectName(iSplitFunctionalObjectName); \
   ExitAfterCall(this,6,_Trac2,&_ret_arg,&iSplitFunctionalObjectName); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAFunctionalSystemSettingAtt##classe::GetSplitFunctionalObjectNameInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,7,&_Trac2,&ioAdminLevel,&ioLocked,&oModified); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetSplitFunctionalObjectNameInfo(ioAdminLevel,ioLocked,oModified); \
   ExitAfterCall(this,7,_Trac2,&_ret_arg,&ioAdminLevel,&ioLocked,&oModified); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAFunctionalSystemSettingAtt##classe::SetSplitFunctionalObjectNameLock(CAT_VARIANT_BOOL iLocked) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,8,&_Trac2,&iLocked); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetSplitFunctionalObjectNameLock(iLocked); \
   ExitAfterCall(this,8,_Trac2,&_ret_arg,&iLocked); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAFunctionalSystemSettingAtt##classe::get_StringUsedAsCarriageReturn(CATBSTR & oStringUsedAsCarriageReturn) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,9,&_Trac2,&oStringUsedAsCarriageReturn); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_StringUsedAsCarriageReturn(oStringUsedAsCarriageReturn); \
   ExitAfterCall(this,9,_Trac2,&_ret_arg,&oStringUsedAsCarriageReturn); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAFunctionalSystemSettingAtt##classe::put_StringUsedAsCarriageReturn(const CATBSTR & iStringUsedAsCarriageReturn) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,10,&_Trac2,&iStringUsedAsCarriageReturn); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_StringUsedAsCarriageReturn(iStringUsedAsCarriageReturn); \
   ExitAfterCall(this,10,_Trac2,&_ret_arg,&iStringUsedAsCarriageReturn); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAFunctionalSystemSettingAtt##classe::GetStringUsedAsCarriageReturnInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,11,&_Trac2,&ioAdminLevel,&ioLocked,&oModified); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetStringUsedAsCarriageReturnInfo(ioAdminLevel,ioLocked,oModified); \
   ExitAfterCall(this,11,_Trac2,&_ret_arg,&ioAdminLevel,&ioLocked,&oModified); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAFunctionalSystemSettingAtt##classe::SetStringUsedAsCarriageReturnLock(CAT_VARIANT_BOOL iLocked) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,12,&_Trac2,&iLocked); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetStringUsedAsCarriageReturnLock(iLocked); \
   ExitAfterCall(this,12,_Trac2,&_ret_arg,&iLocked); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAFunctionalSystemSettingAtt##classe::get_FunctionalActionPresentation(CATLONG & oFunctionalActionPresentation) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,13,&_Trac2,&oFunctionalActionPresentation); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_FunctionalActionPresentation(oFunctionalActionPresentation); \
   ExitAfterCall(this,13,_Trac2,&_ret_arg,&oFunctionalActionPresentation); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAFunctionalSystemSettingAtt##classe::put_FunctionalActionPresentation(CATLONG iFunctionalActionPresentation) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,14,&_Trac2,&iFunctionalActionPresentation); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_FunctionalActionPresentation(iFunctionalActionPresentation); \
   ExitAfterCall(this,14,_Trac2,&_ret_arg,&iFunctionalActionPresentation); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAFunctionalSystemSettingAtt##classe::GetFunctionalActionPresentationInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,15,&_Trac2,&ioAdminLevel,&ioLocked,&oModified); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetFunctionalActionPresentationInfo(ioAdminLevel,ioLocked,oModified); \
   ExitAfterCall(this,15,_Trac2,&_ret_arg,&ioAdminLevel,&ioLocked,&oModified); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAFunctionalSystemSettingAtt##classe::SetFunctionalActionPresentationLock(CAT_VARIANT_BOOL iLocked) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,16,&_Trac2,&iLocked); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetFunctionalActionPresentationLock(iLocked); \
   ExitAfterCall(this,16,_Trac2,&_ret_arg,&iLocked); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAFunctionalSystemSettingAtt##classe::get_ShowParameters(CATLONG & oShowParameters) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,17,&_Trac2,&oShowParameters); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_ShowParameters(oShowParameters); \
   ExitAfterCall(this,17,_Trac2,&_ret_arg,&oShowParameters); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAFunctionalSystemSettingAtt##classe::put_ShowParameters(CATLONG iShowParameters) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,18,&_Trac2,&iShowParameters); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_ShowParameters(iShowParameters); \
   ExitAfterCall(this,18,_Trac2,&_ret_arg,&iShowParameters); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAFunctionalSystemSettingAtt##classe::GetShowParametersInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,19,&_Trac2,&ioAdminLevel,&ioLocked,&oModified); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetShowParametersInfo(ioAdminLevel,ioLocked,oModified); \
   ExitAfterCall(this,19,_Trac2,&_ret_arg,&ioAdminLevel,&ioLocked,&oModified); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAFunctionalSystemSettingAtt##classe::SetShowParametersLock(CAT_VARIANT_BOOL iLocked) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,20,&_Trac2,&iLocked); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetShowParametersLock(iLocked); \
   ExitAfterCall(this,20,_Trac2,&_ret_arg,&iLocked); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAFunctionalSystemSettingAtt##classe::get_ShowRelations(CATLONG & oShowRelations) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,21,&_Trac2,&oShowRelations); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_ShowRelations(oShowRelations); \
   ExitAfterCall(this,21,_Trac2,&_ret_arg,&oShowRelations); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAFunctionalSystemSettingAtt##classe::put_ShowRelations(CATLONG iShowRelations) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,22,&_Trac2,&iShowRelations); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_ShowRelations(iShowRelations); \
   ExitAfterCall(this,22,_Trac2,&_ret_arg,&iShowRelations); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAFunctionalSystemSettingAtt##classe::GetShowRelationsInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,23,&_Trac2,&ioAdminLevel,&ioLocked,&oModified); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetShowRelationsInfo(ioAdminLevel,ioLocked,oModified); \
   ExitAfterCall(this,23,_Trac2,&_ret_arg,&ioAdminLevel,&ioLocked,&oModified); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAFunctionalSystemSettingAtt##classe::SetShowRelationsLock(CAT_VARIANT_BOOL iLocked) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,24,&_Trac2,&iLocked); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetShowRelationsLock(iLocked); \
   ExitAfterCall(this,24,_Trac2,&_ret_arg,&iLocked); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAFunctionalSystemSettingAtt##classe::get_TypeOfIconOnFunctionalElement(CATLONG & oTypeOfIconOnFunctionalElement) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,25,&_Trac2,&oTypeOfIconOnFunctionalElement); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_TypeOfIconOnFunctionalElement(oTypeOfIconOnFunctionalElement); \
   ExitAfterCall(this,25,_Trac2,&_ret_arg,&oTypeOfIconOnFunctionalElement); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAFunctionalSystemSettingAtt##classe::put_TypeOfIconOnFunctionalElement(CATLONG iTypeOfIconOnFunctionalElement) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,26,&_Trac2,&iTypeOfIconOnFunctionalElement); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_TypeOfIconOnFunctionalElement(iTypeOfIconOnFunctionalElement); \
   ExitAfterCall(this,26,_Trac2,&_ret_arg,&iTypeOfIconOnFunctionalElement); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAFunctionalSystemSettingAtt##classe::GetTypeOfIconOnFunctionalElementInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,27,&_Trac2,&ioAdminLevel,&ioLocked,&oModified); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetTypeOfIconOnFunctionalElementInfo(ioAdminLevel,ioLocked,oModified); \
   ExitAfterCall(this,27,_Trac2,&_ret_arg,&ioAdminLevel,&ioLocked,&oModified); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAFunctionalSystemSettingAtt##classe::SetTypeOfIconOnFunctionalElementLock(CAT_VARIANT_BOOL iLocked) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,28,&_Trac2,&iLocked); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetTypeOfIconOnFunctionalElementLock(iLocked); \
   ExitAfterCall(this,28,_Trac2,&_ret_arg,&iLocked); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAFunctionalSystemSettingAtt##classe::get_ShowSynchroStatusOfLocalParamCache(CATLONG & oShowSynchroStatusOfLocalParamCache) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,29,&_Trac2,&oShowSynchroStatusOfLocalParamCache); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_ShowSynchroStatusOfLocalParamCache(oShowSynchroStatusOfLocalParamCache); \
   ExitAfterCall(this,29,_Trac2,&_ret_arg,&oShowSynchroStatusOfLocalParamCache); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAFunctionalSystemSettingAtt##classe::put_ShowSynchroStatusOfLocalParamCache(CATLONG iShowSynchroStatusOfLocalParamCache) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,30,&_Trac2,&iShowSynchroStatusOfLocalParamCache); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_ShowSynchroStatusOfLocalParamCache(iShowSynchroStatusOfLocalParamCache); \
   ExitAfterCall(this,30,_Trac2,&_ret_arg,&iShowSynchroStatusOfLocalParamCache); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAFunctionalSystemSettingAtt##classe::GetShowSynchroStatusOfLocalParamCacheInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,31,&_Trac2,&ioAdminLevel,&ioLocked,&oModified); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetShowSynchroStatusOfLocalParamCacheInfo(ioAdminLevel,ioLocked,oModified); \
   ExitAfterCall(this,31,_Trac2,&_ret_arg,&ioAdminLevel,&ioLocked,&oModified); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAFunctionalSystemSettingAtt##classe::SetShowSynchroStatusOfLocalParamCacheLock(CAT_VARIANT_BOOL iLocked) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,32,&_Trac2,&iLocked); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetShowSynchroStatusOfLocalParamCacheLock(iLocked); \
   ExitAfterCall(this,32,_Trac2,&_ret_arg,&iLocked); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAFunctionalSystemSettingAtt##classe::Commit() \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,33,&_Trac2); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->Commit(); \
   ExitAfterCall(this,33,_Trac2,&_ret_arg); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAFunctionalSystemSettingAtt##classe::Rollback() \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,34,&_Trac2); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->Rollback(); \
   ExitAfterCall(this,34,_Trac2,&_ret_arg); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAFunctionalSystemSettingAtt##classe::ResetToAdminValues() \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,35,&_Trac2); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->ResetToAdminValues(); \
   ExitAfterCall(this,35,_Trac2,&_ret_arg); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAFunctionalSystemSettingAtt##classe::ResetToAdminValuesByName(const CATSafeArrayVariant & iAttList) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,36,&_Trac2,&iAttList); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->ResetToAdminValuesByName(iAttList); \
   ExitAfterCall(this,36,_Trac2,&_ret_arg,&iAttList); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAFunctionalSystemSettingAtt##classe::SaveRepository() \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,37,&_Trac2); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SaveRepository(); \
   ExitAfterCall(this,37,_Trac2,&_ret_arg); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAFunctionalSystemSettingAtt##classe::get_Application(CATIAApplication *& oApplication) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,38,&_Trac2,&oApplication); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Application(oApplication); \
   ExitAfterCall(this,38,_Trac2,&_ret_arg,&oApplication); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAFunctionalSystemSettingAtt##classe::get_Parent(CATBaseDispatch *& oParent) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,39,&_Trac2,&oParent); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Parent(oParent); \
   ExitAfterCall(this,39,_Trac2,&_ret_arg,&oParent); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAFunctionalSystemSettingAtt##classe::get_Name(CATBSTR & oNameBSTR) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,40,&_Trac2,&oNameBSTR); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Name(oNameBSTR); \
   ExitAfterCall(this,40,_Trac2,&_ret_arg,&oNameBSTR); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAFunctionalSystemSettingAtt##classe::put_Name(const CATBSTR & iNameBSTR) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,41,&_Trac2,&iNameBSTR); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_Name(iNameBSTR); \
   ExitAfterCall(this,41,_Trac2,&_ret_arg,&iNameBSTR); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAFunctionalSystemSettingAtt##classe::GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,42,&_Trac2,&IDName,&RealObj); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetItem(IDName,RealObj); \
   ExitAfterCall(this,42,_Trac2,&_ret_arg,&IDName,&RealObj); \
   return(_ret_arg); \
} \



/* Macro used to link an implementation with an interface */
#define TIE_CATIAFunctionalSystemSettingAtt(classe) \
 \
 \
declare_TIE_CATIAFunctionalSystemSettingAtt(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIAFunctionalSystemSettingAtt##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIAFunctionalSystemSettingAtt,"CATIAFunctionalSystemSettingAtt",CATIAFunctionalSystemSettingAtt::MetaObject(),classe::MetaObject(),TIE); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIAFunctionalSystemSettingAtt(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIECreation(CATIAFunctionalSystemSettingAtt, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIAFunctionalSystemSettingAtt##classe(classe::MetaObject(),CATIAFunctionalSystemSettingAtt::MetaObject(),(void *)CreateTIECATIAFunctionalSystemSettingAtt##classe)



/* Macro used to link an implementation with an interface */
/* This TIE is chained on the implementation object */
#define TIEchain_CATIAFunctionalSystemSettingAtt(classe) \
 \
 \
declare_TIE_CATIAFunctionalSystemSettingAtt(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIAFunctionalSystemSettingAtt##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIAFunctionalSystemSettingAtt,"CATIAFunctionalSystemSettingAtt",CATIAFunctionalSystemSettingAtt::MetaObject(),classe::MetaObject(),TIEchain); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIAFunctionalSystemSettingAtt(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIEchainCreation(CATIAFunctionalSystemSettingAtt, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIAFunctionalSystemSettingAtt##classe(classe::MetaObject(),CATIAFunctionalSystemSettingAtt::MetaObject(),(void *)CreateTIECATIAFunctionalSystemSettingAtt##classe)


/* Macro to switch between BOA and TIE at build time */ 
#ifdef CATSYS_BOA_IS_TIE
#define BOA_CATIAFunctionalSystemSettingAtt(classe) TIE_CATIAFunctionalSystemSettingAtt(classe)
#else
#define BOA_CATIAFunctionalSystemSettingAtt(classe) CATImplementBOA(CATIAFunctionalSystemSettingAtt, classe)
#endif

#endif
