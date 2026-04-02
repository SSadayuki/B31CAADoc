#ifndef __TIE_CATIAAnalysisPostManager
#define __TIE_CATIAAnalysisPostManager

#include <string.h>
#include "CATBaseUnknown.h"
#include "CATMetaClass.h"
#include "CATMacForTie.h"
#include "CATExitJournal.h"
#include "CATIAAnalysisPostManager.h"
#include "JS0DSPA.h"


#ifdef _WINDOWS_SOURCE
#define Exported __declspec(dllexport)
#define Imported __declspec(dllimport)
#else
#define Exported 
#define Imported 
#endif


/* To link an implementation with the interface CATIAAnalysisPostManager */
#define declare_TIE_CATIAAnalysisPostManager(classe) \
 \
 \
class TIECATIAAnalysisPostManager##classe : public CATIAAnalysisPostManager \
{ \
   private: \
      CATDeclareCommonTIEMembers \
   public: \
      CATDeclareTIEMethods(CATIAAnalysisPostManager, classe) \
      CATDeclareIUnknownMethodsForCATBaseUnknownTIE \
      CATDeclareIDispatchMethodsForCATBaseUnknownTIE \
      CATDeclareCATBaseUnknownMethodsForTIE \
      virtual HRESULT __stdcall AddExistingCaseForReport(CATIAAnalysisCase * iCase); \
      virtual HRESULT __stdcall ExtractHTMLReport(CATIAFolder * iFolder, const CATBSTR & iTitle); \
      virtual HRESULT __stdcall BuildReport(CATIAFolder * iFolder, const CATBSTR & iTitle, const CATVariant & iAddCreatedImages); \
      virtual HRESULT  __stdcall get_Application(CATIAApplication *& oApplication); \
      virtual HRESULT  __stdcall get_Parent(CATBaseDispatch *& oParent); \
      virtual HRESULT  __stdcall get_Name(CATBSTR & oNameBSTR); \
      virtual HRESULT  __stdcall put_Name(const CATBSTR & iNameBSTR); \
      virtual HRESULT  __stdcall GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj); \
};



#define ENVTIEdeclare_CATIAAnalysisPostManager(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
virtual HRESULT __stdcall AddExistingCaseForReport(CATIAAnalysisCase * iCase); \
virtual HRESULT __stdcall ExtractHTMLReport(CATIAFolder * iFolder, const CATBSTR & iTitle); \
virtual HRESULT __stdcall BuildReport(CATIAFolder * iFolder, const CATBSTR & iTitle, const CATVariant & iAddCreatedImages); \
virtual HRESULT  __stdcall get_Application(CATIAApplication *& oApplication); \
virtual HRESULT  __stdcall get_Parent(CATBaseDispatch *& oParent); \
virtual HRESULT  __stdcall get_Name(CATBSTR & oNameBSTR); \
virtual HRESULT  __stdcall put_Name(const CATBSTR & iNameBSTR); \
virtual HRESULT  __stdcall GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj); \


#define ENVTIEdefine_CATIAAnalysisPostManager(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
HRESULT __stdcall  ENVTIEName::AddExistingCaseForReport(CATIAAnalysisCase * iCase) \
{ \
return (ENVTIECALL(CATIAAnalysisPostManager,ENVTIETypeLetter,ENVTIELetter)AddExistingCaseForReport(iCase)); \
} \
HRESULT __stdcall  ENVTIEName::ExtractHTMLReport(CATIAFolder * iFolder, const CATBSTR & iTitle) \
{ \
return (ENVTIECALL(CATIAAnalysisPostManager,ENVTIETypeLetter,ENVTIELetter)ExtractHTMLReport(iFolder,iTitle)); \
} \
HRESULT __stdcall  ENVTIEName::BuildReport(CATIAFolder * iFolder, const CATBSTR & iTitle, const CATVariant & iAddCreatedImages) \
{ \
return (ENVTIECALL(CATIAAnalysisPostManager,ENVTIETypeLetter,ENVTIELetter)BuildReport(iFolder,iTitle,iAddCreatedImages)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Application(CATIAApplication *& oApplication) \
{ \
return (ENVTIECALL(CATIAAnalysisPostManager,ENVTIETypeLetter,ENVTIELetter)get_Application(oApplication)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Parent(CATBaseDispatch *& oParent) \
{ \
return (ENVTIECALL(CATIAAnalysisPostManager,ENVTIETypeLetter,ENVTIELetter)get_Parent(oParent)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Name(CATBSTR & oNameBSTR) \
{ \
return (ENVTIECALL(CATIAAnalysisPostManager,ENVTIETypeLetter,ENVTIELetter)get_Name(oNameBSTR)); \
} \
HRESULT  __stdcall  ENVTIEName::put_Name(const CATBSTR & iNameBSTR) \
{ \
return (ENVTIECALL(CATIAAnalysisPostManager,ENVTIETypeLetter,ENVTIELetter)put_Name(iNameBSTR)); \
} \
HRESULT  __stdcall  ENVTIEName::GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj) \
{ \
return (ENVTIECALL(CATIAAnalysisPostManager,ENVTIETypeLetter,ENVTIELetter)GetItem(IDName,RealObj)); \
} \


/* Name of the TIE class */
#define class_TIE_CATIAAnalysisPostManager(classe)    TIECATIAAnalysisPostManager##classe


/* Common methods inside a TIE */
#define common_TIE_CATIAAnalysisPostManager(classe) \
 \
 \
/* Static initialization */ \
CATDefineCommonTIEMembers(CATIAAnalysisPostManager, classe) \
 \
 \
CATImplementTIEMethods(CATIAAnalysisPostManager, classe) \
CATImplementIUnknownMethodsForCATBaseUnknownTIE(CATIAAnalysisPostManager, classe, 2) \
CATImplementIDispatchMethodsForCATBaseUnknownTIE(CATIAAnalysisPostManager, classe) \
CATImplementCATBaseUnknownMethodsForTIE(CATIAAnalysisPostManager, classe) \
 \
HRESULT __stdcall  TIECATIAAnalysisPostManager##classe::AddExistingCaseForReport(CATIAAnalysisCase * iCase) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,1,&_Trac2,&iCase); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->AddExistingCaseForReport(iCase); \
   ExitAfterCall(this,1,_Trac2,&_ret_arg,&iCase); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAAnalysisPostManager##classe::ExtractHTMLReport(CATIAFolder * iFolder, const CATBSTR & iTitle) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,2,&_Trac2,&iFolder,&iTitle); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->ExtractHTMLReport(iFolder,iTitle); \
   ExitAfterCall(this,2,_Trac2,&_ret_arg,&iFolder,&iTitle); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAAnalysisPostManager##classe::BuildReport(CATIAFolder * iFolder, const CATBSTR & iTitle, const CATVariant & iAddCreatedImages) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,3,&_Trac2,&iFolder,&iTitle,&iAddCreatedImages); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->BuildReport(iFolder,iTitle,iAddCreatedImages); \
   ExitAfterCall(this,3,_Trac2,&_ret_arg,&iFolder,&iTitle,&iAddCreatedImages); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAAnalysisPostManager##classe::get_Application(CATIAApplication *& oApplication) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,4,&_Trac2,&oApplication); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Application(oApplication); \
   ExitAfterCall(this,4,_Trac2,&_ret_arg,&oApplication); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAAnalysisPostManager##classe::get_Parent(CATBaseDispatch *& oParent) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,5,&_Trac2,&oParent); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Parent(oParent); \
   ExitAfterCall(this,5,_Trac2,&_ret_arg,&oParent); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAAnalysisPostManager##classe::get_Name(CATBSTR & oNameBSTR) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,6,&_Trac2,&oNameBSTR); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Name(oNameBSTR); \
   ExitAfterCall(this,6,_Trac2,&_ret_arg,&oNameBSTR); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAAnalysisPostManager##classe::put_Name(const CATBSTR & iNameBSTR) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,7,&_Trac2,&iNameBSTR); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_Name(iNameBSTR); \
   ExitAfterCall(this,7,_Trac2,&_ret_arg,&iNameBSTR); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAAnalysisPostManager##classe::GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,8,&_Trac2,&IDName,&RealObj); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetItem(IDName,RealObj); \
   ExitAfterCall(this,8,_Trac2,&_ret_arg,&IDName,&RealObj); \
   return(_ret_arg); \
} \



/* Macro used to link an implementation with an interface */
#define TIE_CATIAAnalysisPostManager(classe) \
 \
 \
declare_TIE_CATIAAnalysisPostManager(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIAAnalysisPostManager##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIAAnalysisPostManager,"CATIAAnalysisPostManager",CATIAAnalysisPostManager::MetaObject(),classe::MetaObject(),TIE); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIAAnalysisPostManager(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIECreation(CATIAAnalysisPostManager, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIAAnalysisPostManager##classe(classe::MetaObject(),CATIAAnalysisPostManager::MetaObject(),(void *)CreateTIECATIAAnalysisPostManager##classe)



/* Macro used to link an implementation with an interface */
/* This TIE is chained on the implementation object */
#define TIEchain_CATIAAnalysisPostManager(classe) \
 \
 \
declare_TIE_CATIAAnalysisPostManager(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIAAnalysisPostManager##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIAAnalysisPostManager,"CATIAAnalysisPostManager",CATIAAnalysisPostManager::MetaObject(),classe::MetaObject(),TIEchain); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIAAnalysisPostManager(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIEchainCreation(CATIAAnalysisPostManager, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIAAnalysisPostManager##classe(classe::MetaObject(),CATIAAnalysisPostManager::MetaObject(),(void *)CreateTIECATIAAnalysisPostManager##classe)


/* Macro to switch between BOA and TIE at build time */ 
#ifdef CATSYS_BOA_IS_TIE
#define BOA_CATIAAnalysisPostManager(classe) TIE_CATIAAnalysisPostManager(classe)
#else
#define BOA_CATIAAnalysisPostManager(classe) CATImplementBOA(CATIAAnalysisPostManager, classe)
#endif

#endif
