#ifndef __TIE_CATIAPathESSRessourcesSettingAtt
#define __TIE_CATIAPathESSRessourcesSettingAtt

#include <string.h>
#include "CATBaseUnknown.h"
#include "CATMetaClass.h"
#include "CATMacForTie.h"
#include "CATExitJournal.h"
#include "CATIAPathESSRessourcesSettingAtt.h"
#include "JS0DSPA.h"


#ifdef _WINDOWS_SOURCE
#define Exported __declspec(dllexport)
#define Imported __declspec(dllimport)
#else
#define Exported 
#define Imported 
#endif


/* To link an implementation with the interface CATIAPathESSRessourcesSettingAtt */
#define declare_TIE_CATIAPathESSRessourcesSettingAtt(classe) \
 \
 \
class TIECATIAPathESSRessourcesSettingAtt##classe : public CATIAPathESSRessourcesSettingAtt \
{ \
   private: \
      CATDeclareCommonTIEMembers \
   public: \
      CATDeclareTIEMethods(CATIAPathESSRessourcesSettingAtt, classe) \
      CATDeclareIUnknownMethodsForCATBaseUnknownTIE \
      CATDeclareIDispatchMethodsForCATBaseUnknownTIE \
      CATDeclareCATBaseUnknownMethodsForTIE \
      virtual HRESULT __stdcall get_SectionsCatalogPath(CATBSTR & oSectionsCatalogPath); \
      virtual HRESULT __stdcall put_SectionsCatalogPath(const CATBSTR & iSectionsCatalogPath); \
      virtual HRESULT __stdcall GetSectionsCatalogPathInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified); \
      virtual HRESULT __stdcall SetSectionsCatalogPathLock(CAT_VARIANT_BOOL iLocked); \
      virtual HRESULT __stdcall get_ResolvedSectionsPath(CATBSTR & oResolvedSectionsPath); \
      virtual HRESULT __stdcall put_ResolvedSectionsPath(const CATBSTR & iResolvedSectionsPath); \
      virtual HRESULT __stdcall GetResolvedSectionsPathInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified); \
      virtual HRESULT __stdcall SetResolvedSectionsPathLock(CAT_VARIANT_BOOL iLocked); \
      virtual HRESULT __stdcall get_ThicknessListPath(CATBSTR & oThicknessListPath); \
      virtual HRESULT __stdcall put_ThicknessListPath(const CATBSTR & iThicknessListPath); \
      virtual HRESULT __stdcall GetThicknessListPathInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified); \
      virtual HRESULT __stdcall SetThicknessListPathLock(CAT_VARIANT_BOOL iLocked); \
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



#define ENVTIEdeclare_CATIAPathESSRessourcesSettingAtt(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
virtual HRESULT __stdcall get_SectionsCatalogPath(CATBSTR & oSectionsCatalogPath); \
virtual HRESULT __stdcall put_SectionsCatalogPath(const CATBSTR & iSectionsCatalogPath); \
virtual HRESULT __stdcall GetSectionsCatalogPathInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified); \
virtual HRESULT __stdcall SetSectionsCatalogPathLock(CAT_VARIANT_BOOL iLocked); \
virtual HRESULT __stdcall get_ResolvedSectionsPath(CATBSTR & oResolvedSectionsPath); \
virtual HRESULT __stdcall put_ResolvedSectionsPath(const CATBSTR & iResolvedSectionsPath); \
virtual HRESULT __stdcall GetResolvedSectionsPathInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified); \
virtual HRESULT __stdcall SetResolvedSectionsPathLock(CAT_VARIANT_BOOL iLocked); \
virtual HRESULT __stdcall get_ThicknessListPath(CATBSTR & oThicknessListPath); \
virtual HRESULT __stdcall put_ThicknessListPath(const CATBSTR & iThicknessListPath); \
virtual HRESULT __stdcall GetThicknessListPathInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified); \
virtual HRESULT __stdcall SetThicknessListPathLock(CAT_VARIANT_BOOL iLocked); \
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


#define ENVTIEdefine_CATIAPathESSRessourcesSettingAtt(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
HRESULT __stdcall  ENVTIEName::get_SectionsCatalogPath(CATBSTR & oSectionsCatalogPath) \
{ \
return (ENVTIECALL(CATIAPathESSRessourcesSettingAtt,ENVTIETypeLetter,ENVTIELetter)get_SectionsCatalogPath(oSectionsCatalogPath)); \
} \
HRESULT __stdcall  ENVTIEName::put_SectionsCatalogPath(const CATBSTR & iSectionsCatalogPath) \
{ \
return (ENVTIECALL(CATIAPathESSRessourcesSettingAtt,ENVTIETypeLetter,ENVTIELetter)put_SectionsCatalogPath(iSectionsCatalogPath)); \
} \
HRESULT __stdcall  ENVTIEName::GetSectionsCatalogPathInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified) \
{ \
return (ENVTIECALL(CATIAPathESSRessourcesSettingAtt,ENVTIETypeLetter,ENVTIELetter)GetSectionsCatalogPathInfo(ioAdminLevel,ioLocked,oModified)); \
} \
HRESULT __stdcall  ENVTIEName::SetSectionsCatalogPathLock(CAT_VARIANT_BOOL iLocked) \
{ \
return (ENVTIECALL(CATIAPathESSRessourcesSettingAtt,ENVTIETypeLetter,ENVTIELetter)SetSectionsCatalogPathLock(iLocked)); \
} \
HRESULT __stdcall  ENVTIEName::get_ResolvedSectionsPath(CATBSTR & oResolvedSectionsPath) \
{ \
return (ENVTIECALL(CATIAPathESSRessourcesSettingAtt,ENVTIETypeLetter,ENVTIELetter)get_ResolvedSectionsPath(oResolvedSectionsPath)); \
} \
HRESULT __stdcall  ENVTIEName::put_ResolvedSectionsPath(const CATBSTR & iResolvedSectionsPath) \
{ \
return (ENVTIECALL(CATIAPathESSRessourcesSettingAtt,ENVTIETypeLetter,ENVTIELetter)put_ResolvedSectionsPath(iResolvedSectionsPath)); \
} \
HRESULT __stdcall  ENVTIEName::GetResolvedSectionsPathInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified) \
{ \
return (ENVTIECALL(CATIAPathESSRessourcesSettingAtt,ENVTIETypeLetter,ENVTIELetter)GetResolvedSectionsPathInfo(ioAdminLevel,ioLocked,oModified)); \
} \
HRESULT __stdcall  ENVTIEName::SetResolvedSectionsPathLock(CAT_VARIANT_BOOL iLocked) \
{ \
return (ENVTIECALL(CATIAPathESSRessourcesSettingAtt,ENVTIETypeLetter,ENVTIELetter)SetResolvedSectionsPathLock(iLocked)); \
} \
HRESULT __stdcall  ENVTIEName::get_ThicknessListPath(CATBSTR & oThicknessListPath) \
{ \
return (ENVTIECALL(CATIAPathESSRessourcesSettingAtt,ENVTIETypeLetter,ENVTIELetter)get_ThicknessListPath(oThicknessListPath)); \
} \
HRESULT __stdcall  ENVTIEName::put_ThicknessListPath(const CATBSTR & iThicknessListPath) \
{ \
return (ENVTIECALL(CATIAPathESSRessourcesSettingAtt,ENVTIETypeLetter,ENVTIELetter)put_ThicknessListPath(iThicknessListPath)); \
} \
HRESULT __stdcall  ENVTIEName::GetThicknessListPathInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified) \
{ \
return (ENVTIECALL(CATIAPathESSRessourcesSettingAtt,ENVTIETypeLetter,ENVTIELetter)GetThicknessListPathInfo(ioAdminLevel,ioLocked,oModified)); \
} \
HRESULT __stdcall  ENVTIEName::SetThicknessListPathLock(CAT_VARIANT_BOOL iLocked) \
{ \
return (ENVTIECALL(CATIAPathESSRessourcesSettingAtt,ENVTIETypeLetter,ENVTIELetter)SetThicknessListPathLock(iLocked)); \
} \
HRESULT __stdcall  ENVTIEName::Commit() \
{ \
return (ENVTIECALL(CATIAPathESSRessourcesSettingAtt,ENVTIETypeLetter,ENVTIELetter)Commit()); \
} \
HRESULT __stdcall  ENVTIEName::Rollback() \
{ \
return (ENVTIECALL(CATIAPathESSRessourcesSettingAtt,ENVTIETypeLetter,ENVTIELetter)Rollback()); \
} \
HRESULT __stdcall  ENVTIEName::ResetToAdminValues() \
{ \
return (ENVTIECALL(CATIAPathESSRessourcesSettingAtt,ENVTIETypeLetter,ENVTIELetter)ResetToAdminValues()); \
} \
HRESULT __stdcall  ENVTIEName::ResetToAdminValuesByName(const CATSafeArrayVariant & iAttList) \
{ \
return (ENVTIECALL(CATIAPathESSRessourcesSettingAtt,ENVTIETypeLetter,ENVTIELetter)ResetToAdminValuesByName(iAttList)); \
} \
HRESULT __stdcall  ENVTIEName::SaveRepository() \
{ \
return (ENVTIECALL(CATIAPathESSRessourcesSettingAtt,ENVTIETypeLetter,ENVTIELetter)SaveRepository()); \
} \
HRESULT  __stdcall  ENVTIEName::get_Application(CATIAApplication *& oApplication) \
{ \
return (ENVTIECALL(CATIAPathESSRessourcesSettingAtt,ENVTIETypeLetter,ENVTIELetter)get_Application(oApplication)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Parent(CATBaseDispatch *& oParent) \
{ \
return (ENVTIECALL(CATIAPathESSRessourcesSettingAtt,ENVTIETypeLetter,ENVTIELetter)get_Parent(oParent)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Name(CATBSTR & oNameBSTR) \
{ \
return (ENVTIECALL(CATIAPathESSRessourcesSettingAtt,ENVTIETypeLetter,ENVTIELetter)get_Name(oNameBSTR)); \
} \
HRESULT  __stdcall  ENVTIEName::put_Name(const CATBSTR & iNameBSTR) \
{ \
return (ENVTIECALL(CATIAPathESSRessourcesSettingAtt,ENVTIETypeLetter,ENVTIELetter)put_Name(iNameBSTR)); \
} \
HRESULT  __stdcall  ENVTIEName::GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj) \
{ \
return (ENVTIECALL(CATIAPathESSRessourcesSettingAtt,ENVTIETypeLetter,ENVTIELetter)GetItem(IDName,RealObj)); \
} \


/* Name of the TIE class */
#define class_TIE_CATIAPathESSRessourcesSettingAtt(classe)    TIECATIAPathESSRessourcesSettingAtt##classe


/* Common methods inside a TIE */
#define common_TIE_CATIAPathESSRessourcesSettingAtt(classe) \
 \
 \
/* Static initialization */ \
CATDefineCommonTIEMembers(CATIAPathESSRessourcesSettingAtt, classe) \
 \
 \
CATImplementTIEMethods(CATIAPathESSRessourcesSettingAtt, classe) \
CATImplementIUnknownMethodsForCATBaseUnknownTIE(CATIAPathESSRessourcesSettingAtt, classe, 2) \
CATImplementIDispatchMethodsForCATBaseUnknownTIE(CATIAPathESSRessourcesSettingAtt, classe) \
CATImplementCATBaseUnknownMethodsForTIE(CATIAPathESSRessourcesSettingAtt, classe) \
 \
HRESULT __stdcall  TIECATIAPathESSRessourcesSettingAtt##classe::get_SectionsCatalogPath(CATBSTR & oSectionsCatalogPath) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,1,&_Trac2,&oSectionsCatalogPath); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_SectionsCatalogPath(oSectionsCatalogPath); \
   ExitAfterCall(this,1,_Trac2,&_ret_arg,&oSectionsCatalogPath); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAPathESSRessourcesSettingAtt##classe::put_SectionsCatalogPath(const CATBSTR & iSectionsCatalogPath) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,2,&_Trac2,&iSectionsCatalogPath); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_SectionsCatalogPath(iSectionsCatalogPath); \
   ExitAfterCall(this,2,_Trac2,&_ret_arg,&iSectionsCatalogPath); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAPathESSRessourcesSettingAtt##classe::GetSectionsCatalogPathInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,3,&_Trac2,&ioAdminLevel,&ioLocked,&oModified); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetSectionsCatalogPathInfo(ioAdminLevel,ioLocked,oModified); \
   ExitAfterCall(this,3,_Trac2,&_ret_arg,&ioAdminLevel,&ioLocked,&oModified); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAPathESSRessourcesSettingAtt##classe::SetSectionsCatalogPathLock(CAT_VARIANT_BOOL iLocked) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,4,&_Trac2,&iLocked); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetSectionsCatalogPathLock(iLocked); \
   ExitAfterCall(this,4,_Trac2,&_ret_arg,&iLocked); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAPathESSRessourcesSettingAtt##classe::get_ResolvedSectionsPath(CATBSTR & oResolvedSectionsPath) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,5,&_Trac2,&oResolvedSectionsPath); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_ResolvedSectionsPath(oResolvedSectionsPath); \
   ExitAfterCall(this,5,_Trac2,&_ret_arg,&oResolvedSectionsPath); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAPathESSRessourcesSettingAtt##classe::put_ResolvedSectionsPath(const CATBSTR & iResolvedSectionsPath) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,6,&_Trac2,&iResolvedSectionsPath); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_ResolvedSectionsPath(iResolvedSectionsPath); \
   ExitAfterCall(this,6,_Trac2,&_ret_arg,&iResolvedSectionsPath); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAPathESSRessourcesSettingAtt##classe::GetResolvedSectionsPathInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,7,&_Trac2,&ioAdminLevel,&ioLocked,&oModified); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetResolvedSectionsPathInfo(ioAdminLevel,ioLocked,oModified); \
   ExitAfterCall(this,7,_Trac2,&_ret_arg,&ioAdminLevel,&ioLocked,&oModified); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAPathESSRessourcesSettingAtt##classe::SetResolvedSectionsPathLock(CAT_VARIANT_BOOL iLocked) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,8,&_Trac2,&iLocked); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetResolvedSectionsPathLock(iLocked); \
   ExitAfterCall(this,8,_Trac2,&_ret_arg,&iLocked); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAPathESSRessourcesSettingAtt##classe::get_ThicknessListPath(CATBSTR & oThicknessListPath) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,9,&_Trac2,&oThicknessListPath); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_ThicknessListPath(oThicknessListPath); \
   ExitAfterCall(this,9,_Trac2,&_ret_arg,&oThicknessListPath); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAPathESSRessourcesSettingAtt##classe::put_ThicknessListPath(const CATBSTR & iThicknessListPath) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,10,&_Trac2,&iThicknessListPath); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_ThicknessListPath(iThicknessListPath); \
   ExitAfterCall(this,10,_Trac2,&_ret_arg,&iThicknessListPath); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAPathESSRessourcesSettingAtt##classe::GetThicknessListPathInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,11,&_Trac2,&ioAdminLevel,&ioLocked,&oModified); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetThicknessListPathInfo(ioAdminLevel,ioLocked,oModified); \
   ExitAfterCall(this,11,_Trac2,&_ret_arg,&ioAdminLevel,&ioLocked,&oModified); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAPathESSRessourcesSettingAtt##classe::SetThicknessListPathLock(CAT_VARIANT_BOOL iLocked) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,12,&_Trac2,&iLocked); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetThicknessListPathLock(iLocked); \
   ExitAfterCall(this,12,_Trac2,&_ret_arg,&iLocked); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAPathESSRessourcesSettingAtt##classe::Commit() \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,13,&_Trac2); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->Commit(); \
   ExitAfterCall(this,13,_Trac2,&_ret_arg); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAPathESSRessourcesSettingAtt##classe::Rollback() \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,14,&_Trac2); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->Rollback(); \
   ExitAfterCall(this,14,_Trac2,&_ret_arg); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAPathESSRessourcesSettingAtt##classe::ResetToAdminValues() \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,15,&_Trac2); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->ResetToAdminValues(); \
   ExitAfterCall(this,15,_Trac2,&_ret_arg); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAPathESSRessourcesSettingAtt##classe::ResetToAdminValuesByName(const CATSafeArrayVariant & iAttList) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,16,&_Trac2,&iAttList); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->ResetToAdminValuesByName(iAttList); \
   ExitAfterCall(this,16,_Trac2,&_ret_arg,&iAttList); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAPathESSRessourcesSettingAtt##classe::SaveRepository() \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,17,&_Trac2); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SaveRepository(); \
   ExitAfterCall(this,17,_Trac2,&_ret_arg); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAPathESSRessourcesSettingAtt##classe::get_Application(CATIAApplication *& oApplication) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,18,&_Trac2,&oApplication); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Application(oApplication); \
   ExitAfterCall(this,18,_Trac2,&_ret_arg,&oApplication); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAPathESSRessourcesSettingAtt##classe::get_Parent(CATBaseDispatch *& oParent) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,19,&_Trac2,&oParent); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Parent(oParent); \
   ExitAfterCall(this,19,_Trac2,&_ret_arg,&oParent); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAPathESSRessourcesSettingAtt##classe::get_Name(CATBSTR & oNameBSTR) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,20,&_Trac2,&oNameBSTR); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Name(oNameBSTR); \
   ExitAfterCall(this,20,_Trac2,&_ret_arg,&oNameBSTR); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAPathESSRessourcesSettingAtt##classe::put_Name(const CATBSTR & iNameBSTR) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,21,&_Trac2,&iNameBSTR); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_Name(iNameBSTR); \
   ExitAfterCall(this,21,_Trac2,&_ret_arg,&iNameBSTR); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAPathESSRessourcesSettingAtt##classe::GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,22,&_Trac2,&IDName,&RealObj); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetItem(IDName,RealObj); \
   ExitAfterCall(this,22,_Trac2,&_ret_arg,&IDName,&RealObj); \
   return(_ret_arg); \
} \



/* Macro used to link an implementation with an interface */
#define TIE_CATIAPathESSRessourcesSettingAtt(classe) \
 \
 \
declare_TIE_CATIAPathESSRessourcesSettingAtt(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIAPathESSRessourcesSettingAtt##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIAPathESSRessourcesSettingAtt,"CATIAPathESSRessourcesSettingAtt",CATIAPathESSRessourcesSettingAtt::MetaObject(),classe::MetaObject(),TIE); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIAPathESSRessourcesSettingAtt(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIECreation(CATIAPathESSRessourcesSettingAtt, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIAPathESSRessourcesSettingAtt##classe(classe::MetaObject(),CATIAPathESSRessourcesSettingAtt::MetaObject(),(void *)CreateTIECATIAPathESSRessourcesSettingAtt##classe)



/* Macro used to link an implementation with an interface */
/* This TIE is chained on the implementation object */
#define TIEchain_CATIAPathESSRessourcesSettingAtt(classe) \
 \
 \
declare_TIE_CATIAPathESSRessourcesSettingAtt(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIAPathESSRessourcesSettingAtt##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIAPathESSRessourcesSettingAtt,"CATIAPathESSRessourcesSettingAtt",CATIAPathESSRessourcesSettingAtt::MetaObject(),classe::MetaObject(),TIEchain); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIAPathESSRessourcesSettingAtt(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIEchainCreation(CATIAPathESSRessourcesSettingAtt, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIAPathESSRessourcesSettingAtt##classe(classe::MetaObject(),CATIAPathESSRessourcesSettingAtt::MetaObject(),(void *)CreateTIECATIAPathESSRessourcesSettingAtt##classe)


/* Macro to switch between BOA and TIE at build time */ 
#ifdef CATSYS_BOA_IS_TIE
#define BOA_CATIAPathESSRessourcesSettingAtt(classe) TIE_CATIAPathESSRessourcesSettingAtt(classe)
#else
#define BOA_CATIAPathESSRessourcesSettingAtt(classe) CATImplementBOA(CATIAPathESSRessourcesSettingAtt, classe)
#endif

#endif
