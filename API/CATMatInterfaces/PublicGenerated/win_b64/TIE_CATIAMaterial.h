#ifndef __TIE_CATIAMaterial
#define __TIE_CATIAMaterial

#include <string.h>
#include "CATBaseUnknown.h"
#include "CATMetaClass.h"
#include "CATMacForTie.h"
#include "CATExitJournal.h"
#include "CATIAMaterial.h"
#include "JS0DSPA.h"


#ifdef _WINDOWS_SOURCE
#define Exported __declspec(dllexport)
#define Imported __declspec(dllimport)
#else
#define Exported 
#define Imported 
#endif


/* To link an implementation with the interface CATIAMaterial */
#define declare_TIE_CATIAMaterial(classe) \
 \
 \
class TIECATIAMaterial##classe : public CATIAMaterial \
{ \
   private: \
      CATDeclareCommonTIEMembers \
   public: \
      CATDeclareTIEMethods(CATIAMaterial, classe) \
      CATDeclareIUnknownMethodsForCATBaseUnknownTIE \
      CATDeclareIDispatchMethodsForCATBaseUnknownTIE \
      CATDeclareCATBaseUnknownMethodsForTIE \
      virtual HRESULT __stdcall get_RenderingMaterial(CATIARenderingMaterial *& oRenderingMaterial); \
      virtual HRESULT __stdcall ExistRenderingData(short & bAnswer); \
      virtual HRESULT __stdcall CreateRenderingData(CATIARenderingMaterial *& oRenderingMaterial); \
      virtual HRESULT __stdcall CopyRenderingDataFrom(CATIARenderingMaterial * iRenderingMaterial); \
      virtual HRESULT __stdcall GetIcon(const CATBSTR & iPath); \
      virtual HRESULT __stdcall PutIcon(const CATBSTR & iPath); \
      virtual HRESULT __stdcall get_AnalysisMaterial(CATIAAnalysisMaterial *& oAnalysisMaterial); \
      virtual HRESULT __stdcall ExistAnalysisData(short & bAnswer); \
      virtual HRESULT __stdcall CreateAnalysisData(const CATBSTR & iLabel, CATIAAnalysisMaterial *& oAnalysisMaterial); \
      virtual HRESULT  __stdcall get_Application(CATIAApplication *& oApplication); \
      virtual HRESULT  __stdcall get_Parent(CATBaseDispatch *& oParent); \
      virtual HRESULT  __stdcall get_Name(CATBSTR & oNameBSTR); \
      virtual HRESULT  __stdcall put_Name(const CATBSTR & iNameBSTR); \
      virtual HRESULT  __stdcall GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj); \
};



#define ENVTIEdeclare_CATIAMaterial(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
virtual HRESULT __stdcall get_RenderingMaterial(CATIARenderingMaterial *& oRenderingMaterial); \
virtual HRESULT __stdcall ExistRenderingData(short & bAnswer); \
virtual HRESULT __stdcall CreateRenderingData(CATIARenderingMaterial *& oRenderingMaterial); \
virtual HRESULT __stdcall CopyRenderingDataFrom(CATIARenderingMaterial * iRenderingMaterial); \
virtual HRESULT __stdcall GetIcon(const CATBSTR & iPath); \
virtual HRESULT __stdcall PutIcon(const CATBSTR & iPath); \
virtual HRESULT __stdcall get_AnalysisMaterial(CATIAAnalysisMaterial *& oAnalysisMaterial); \
virtual HRESULT __stdcall ExistAnalysisData(short & bAnswer); \
virtual HRESULT __stdcall CreateAnalysisData(const CATBSTR & iLabel, CATIAAnalysisMaterial *& oAnalysisMaterial); \
virtual HRESULT  __stdcall get_Application(CATIAApplication *& oApplication); \
virtual HRESULT  __stdcall get_Parent(CATBaseDispatch *& oParent); \
virtual HRESULT  __stdcall get_Name(CATBSTR & oNameBSTR); \
virtual HRESULT  __stdcall put_Name(const CATBSTR & iNameBSTR); \
virtual HRESULT  __stdcall GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj); \


#define ENVTIEdefine_CATIAMaterial(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
HRESULT __stdcall  ENVTIEName::get_RenderingMaterial(CATIARenderingMaterial *& oRenderingMaterial) \
{ \
return (ENVTIECALL(CATIAMaterial,ENVTIETypeLetter,ENVTIELetter)get_RenderingMaterial(oRenderingMaterial)); \
} \
HRESULT __stdcall  ENVTIEName::ExistRenderingData(short & bAnswer) \
{ \
return (ENVTIECALL(CATIAMaterial,ENVTIETypeLetter,ENVTIELetter)ExistRenderingData(bAnswer)); \
} \
HRESULT __stdcall  ENVTIEName::CreateRenderingData(CATIARenderingMaterial *& oRenderingMaterial) \
{ \
return (ENVTIECALL(CATIAMaterial,ENVTIETypeLetter,ENVTIELetter)CreateRenderingData(oRenderingMaterial)); \
} \
HRESULT __stdcall  ENVTIEName::CopyRenderingDataFrom(CATIARenderingMaterial * iRenderingMaterial) \
{ \
return (ENVTIECALL(CATIAMaterial,ENVTIETypeLetter,ENVTIELetter)CopyRenderingDataFrom(iRenderingMaterial)); \
} \
HRESULT __stdcall  ENVTIEName::GetIcon(const CATBSTR & iPath) \
{ \
return (ENVTIECALL(CATIAMaterial,ENVTIETypeLetter,ENVTIELetter)GetIcon(iPath)); \
} \
HRESULT __stdcall  ENVTIEName::PutIcon(const CATBSTR & iPath) \
{ \
return (ENVTIECALL(CATIAMaterial,ENVTIETypeLetter,ENVTIELetter)PutIcon(iPath)); \
} \
HRESULT __stdcall  ENVTIEName::get_AnalysisMaterial(CATIAAnalysisMaterial *& oAnalysisMaterial) \
{ \
return (ENVTIECALL(CATIAMaterial,ENVTIETypeLetter,ENVTIELetter)get_AnalysisMaterial(oAnalysisMaterial)); \
} \
HRESULT __stdcall  ENVTIEName::ExistAnalysisData(short & bAnswer) \
{ \
return (ENVTIECALL(CATIAMaterial,ENVTIETypeLetter,ENVTIELetter)ExistAnalysisData(bAnswer)); \
} \
HRESULT __stdcall  ENVTIEName::CreateAnalysisData(const CATBSTR & iLabel, CATIAAnalysisMaterial *& oAnalysisMaterial) \
{ \
return (ENVTIECALL(CATIAMaterial,ENVTIETypeLetter,ENVTIELetter)CreateAnalysisData(iLabel,oAnalysisMaterial)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Application(CATIAApplication *& oApplication) \
{ \
return (ENVTIECALL(CATIAMaterial,ENVTIETypeLetter,ENVTIELetter)get_Application(oApplication)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Parent(CATBaseDispatch *& oParent) \
{ \
return (ENVTIECALL(CATIAMaterial,ENVTIETypeLetter,ENVTIELetter)get_Parent(oParent)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Name(CATBSTR & oNameBSTR) \
{ \
return (ENVTIECALL(CATIAMaterial,ENVTIETypeLetter,ENVTIELetter)get_Name(oNameBSTR)); \
} \
HRESULT  __stdcall  ENVTIEName::put_Name(const CATBSTR & iNameBSTR) \
{ \
return (ENVTIECALL(CATIAMaterial,ENVTIETypeLetter,ENVTIELetter)put_Name(iNameBSTR)); \
} \
HRESULT  __stdcall  ENVTIEName::GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj) \
{ \
return (ENVTIECALL(CATIAMaterial,ENVTIETypeLetter,ENVTIELetter)GetItem(IDName,RealObj)); \
} \


/* Name of the TIE class */
#define class_TIE_CATIAMaterial(classe)    TIECATIAMaterial##classe


/* Common methods inside a TIE */
#define common_TIE_CATIAMaterial(classe) \
 \
 \
/* Static initialization */ \
CATDefineCommonTIEMembers(CATIAMaterial, classe) \
 \
 \
CATImplementTIEMethods(CATIAMaterial, classe) \
CATImplementIUnknownMethodsForCATBaseUnknownTIE(CATIAMaterial, classe, 2) \
CATImplementIDispatchMethodsForCATBaseUnknownTIE(CATIAMaterial, classe) \
CATImplementCATBaseUnknownMethodsForTIE(CATIAMaterial, classe) \
 \
HRESULT __stdcall  TIECATIAMaterial##classe::get_RenderingMaterial(CATIARenderingMaterial *& oRenderingMaterial) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,1,&_Trac2,&oRenderingMaterial); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_RenderingMaterial(oRenderingMaterial); \
   ExitAfterCall(this,1,_Trac2,&_ret_arg,&oRenderingMaterial); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAMaterial##classe::ExistRenderingData(short & bAnswer) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,2,&_Trac2,&bAnswer); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->ExistRenderingData(bAnswer); \
   ExitAfterCall(this,2,_Trac2,&_ret_arg,&bAnswer); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAMaterial##classe::CreateRenderingData(CATIARenderingMaterial *& oRenderingMaterial) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,3,&_Trac2,&oRenderingMaterial); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->CreateRenderingData(oRenderingMaterial); \
   ExitAfterCall(this,3,_Trac2,&_ret_arg,&oRenderingMaterial); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAMaterial##classe::CopyRenderingDataFrom(CATIARenderingMaterial * iRenderingMaterial) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,4,&_Trac2,&iRenderingMaterial); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->CopyRenderingDataFrom(iRenderingMaterial); \
   ExitAfterCall(this,4,_Trac2,&_ret_arg,&iRenderingMaterial); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAMaterial##classe::GetIcon(const CATBSTR & iPath) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,5,&_Trac2,&iPath); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetIcon(iPath); \
   ExitAfterCall(this,5,_Trac2,&_ret_arg,&iPath); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAMaterial##classe::PutIcon(const CATBSTR & iPath) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,6,&_Trac2,&iPath); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->PutIcon(iPath); \
   ExitAfterCall(this,6,_Trac2,&_ret_arg,&iPath); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAMaterial##classe::get_AnalysisMaterial(CATIAAnalysisMaterial *& oAnalysisMaterial) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,7,&_Trac2,&oAnalysisMaterial); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_AnalysisMaterial(oAnalysisMaterial); \
   ExitAfterCall(this,7,_Trac2,&_ret_arg,&oAnalysisMaterial); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAMaterial##classe::ExistAnalysisData(short & bAnswer) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,8,&_Trac2,&bAnswer); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->ExistAnalysisData(bAnswer); \
   ExitAfterCall(this,8,_Trac2,&_ret_arg,&bAnswer); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAMaterial##classe::CreateAnalysisData(const CATBSTR & iLabel, CATIAAnalysisMaterial *& oAnalysisMaterial) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,9,&_Trac2,&iLabel,&oAnalysisMaterial); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->CreateAnalysisData(iLabel,oAnalysisMaterial); \
   ExitAfterCall(this,9,_Trac2,&_ret_arg,&iLabel,&oAnalysisMaterial); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAMaterial##classe::get_Application(CATIAApplication *& oApplication) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,10,&_Trac2,&oApplication); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Application(oApplication); \
   ExitAfterCall(this,10,_Trac2,&_ret_arg,&oApplication); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAMaterial##classe::get_Parent(CATBaseDispatch *& oParent) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,11,&_Trac2,&oParent); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Parent(oParent); \
   ExitAfterCall(this,11,_Trac2,&_ret_arg,&oParent); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAMaterial##classe::get_Name(CATBSTR & oNameBSTR) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,12,&_Trac2,&oNameBSTR); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Name(oNameBSTR); \
   ExitAfterCall(this,12,_Trac2,&_ret_arg,&oNameBSTR); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAMaterial##classe::put_Name(const CATBSTR & iNameBSTR) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,13,&_Trac2,&iNameBSTR); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_Name(iNameBSTR); \
   ExitAfterCall(this,13,_Trac2,&_ret_arg,&iNameBSTR); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAMaterial##classe::GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,14,&_Trac2,&IDName,&RealObj); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetItem(IDName,RealObj); \
   ExitAfterCall(this,14,_Trac2,&_ret_arg,&IDName,&RealObj); \
   return(_ret_arg); \
} \



/* Macro used to link an implementation with an interface */
#define TIE_CATIAMaterial(classe) \
 \
 \
declare_TIE_CATIAMaterial(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIAMaterial##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIAMaterial,"CATIAMaterial",CATIAMaterial::MetaObject(),classe::MetaObject(),TIE); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIAMaterial(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIECreation(CATIAMaterial, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIAMaterial##classe(classe::MetaObject(),CATIAMaterial::MetaObject(),(void *)CreateTIECATIAMaterial##classe)



/* Macro used to link an implementation with an interface */
/* This TIE is chained on the implementation object */
#define TIEchain_CATIAMaterial(classe) \
 \
 \
declare_TIE_CATIAMaterial(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIAMaterial##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIAMaterial,"CATIAMaterial",CATIAMaterial::MetaObject(),classe::MetaObject(),TIEchain); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIAMaterial(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIEchainCreation(CATIAMaterial, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIAMaterial##classe(classe::MetaObject(),CATIAMaterial::MetaObject(),(void *)CreateTIECATIAMaterial##classe)


/* Macro to switch between BOA and TIE at build time */ 
#ifdef CATSYS_BOA_IS_TIE
#define BOA_CATIAMaterial(classe) TIE_CATIAMaterial(classe)
#else
#define BOA_CATIAMaterial(classe) CATImplementBOA(CATIAMaterial, classe)
#endif

#endif
