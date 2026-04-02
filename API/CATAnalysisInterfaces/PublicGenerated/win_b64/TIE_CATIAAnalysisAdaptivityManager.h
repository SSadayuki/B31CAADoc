#ifndef __TIE_CATIAAnalysisAdaptivityManager
#define __TIE_CATIAAnalysisAdaptivityManager

#include <string.h>
#include "CATBaseUnknown.h"
#include "CATMetaClass.h"
#include "CATMacForTie.h"
#include "CATExitJournal.h"
#include "CATIAAnalysisAdaptivityManager.h"
#include "JS0DSPA.h"


#ifdef _WINDOWS_SOURCE
#define Exported __declspec(dllexport)
#define Imported __declspec(dllimport)
#else
#define Exported 
#define Imported 
#endif


/* To link an implementation with the interface CATIAAnalysisAdaptivityManager */
#define declare_TIE_CATIAAnalysisAdaptivityManager(classe) \
 \
 \
class TIECATIAAnalysisAdaptivityManager##classe : public CATIAAnalysisAdaptivityManager \
{ \
   private: \
      CATDeclareCommonTIEMembers \
   public: \
      CATDeclareTIEMethods(CATIAAnalysisAdaptivityManager, classe) \
      CATDeclareIUnknownMethodsForCATBaseUnknownTIE \
      CATDeclareIDispatchMethodsForCATBaseUnknownTIE \
      CATDeclareCATBaseUnknownMethodsForTIE \
      virtual HRESULT __stdcall Run(); \
      virtual HRESULT __stdcall get_Type(CATBSTR & oType); \
      virtual HRESULT __stdcall get_AnalysisEntities(CATIAAnalysisEntities *& oAnalysisEntities); \
      virtual HRESULT __stdcall get_AnalysisOutputEntities(CATIAAnalysisOutputEntities *& oAnalysisEntities); \
      virtual HRESULT __stdcall get_AnalysisSets(CATIAAnalysisSets *& oAnalysisSets); \
      virtual HRESULT __stdcall get_AnalysisImages(CATIAAnalysisImages *& oAnalysisImages); \
      virtual HRESULT __stdcall get_BasicComponents(CATIABasicComponents *& oBasicComponents); \
      virtual HRESULT __stdcall Update(); \
      virtual HRESULT  __stdcall get_Application(CATIAApplication *& oApplication); \
      virtual HRESULT  __stdcall get_Parent(CATBaseDispatch *& oParent); \
      virtual HRESULT  __stdcall get_Name(CATBSTR & oNameBSTR); \
      virtual HRESULT  __stdcall put_Name(const CATBSTR & iNameBSTR); \
      virtual HRESULT  __stdcall GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj); \
};



#define ENVTIEdeclare_CATIAAnalysisAdaptivityManager(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
virtual HRESULT __stdcall Run(); \
virtual HRESULT __stdcall get_Type(CATBSTR & oType); \
virtual HRESULT __stdcall get_AnalysisEntities(CATIAAnalysisEntities *& oAnalysisEntities); \
virtual HRESULT __stdcall get_AnalysisOutputEntities(CATIAAnalysisOutputEntities *& oAnalysisEntities); \
virtual HRESULT __stdcall get_AnalysisSets(CATIAAnalysisSets *& oAnalysisSets); \
virtual HRESULT __stdcall get_AnalysisImages(CATIAAnalysisImages *& oAnalysisImages); \
virtual HRESULT __stdcall get_BasicComponents(CATIABasicComponents *& oBasicComponents); \
virtual HRESULT __stdcall Update(); \
virtual HRESULT  __stdcall get_Application(CATIAApplication *& oApplication); \
virtual HRESULT  __stdcall get_Parent(CATBaseDispatch *& oParent); \
virtual HRESULT  __stdcall get_Name(CATBSTR & oNameBSTR); \
virtual HRESULT  __stdcall put_Name(const CATBSTR & iNameBSTR); \
virtual HRESULT  __stdcall GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj); \


#define ENVTIEdefine_CATIAAnalysisAdaptivityManager(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
HRESULT __stdcall  ENVTIEName::Run() \
{ \
return (ENVTIECALL(CATIAAnalysisAdaptivityManager,ENVTIETypeLetter,ENVTIELetter)Run()); \
} \
HRESULT __stdcall  ENVTIEName::get_Type(CATBSTR & oType) \
{ \
return (ENVTIECALL(CATIAAnalysisAdaptivityManager,ENVTIETypeLetter,ENVTIELetter)get_Type(oType)); \
} \
HRESULT __stdcall  ENVTIEName::get_AnalysisEntities(CATIAAnalysisEntities *& oAnalysisEntities) \
{ \
return (ENVTIECALL(CATIAAnalysisAdaptivityManager,ENVTIETypeLetter,ENVTIELetter)get_AnalysisEntities(oAnalysisEntities)); \
} \
HRESULT __stdcall  ENVTIEName::get_AnalysisOutputEntities(CATIAAnalysisOutputEntities *& oAnalysisEntities) \
{ \
return (ENVTIECALL(CATIAAnalysisAdaptivityManager,ENVTIETypeLetter,ENVTIELetter)get_AnalysisOutputEntities(oAnalysisEntities)); \
} \
HRESULT __stdcall  ENVTIEName::get_AnalysisSets(CATIAAnalysisSets *& oAnalysisSets) \
{ \
return (ENVTIECALL(CATIAAnalysisAdaptivityManager,ENVTIETypeLetter,ENVTIELetter)get_AnalysisSets(oAnalysisSets)); \
} \
HRESULT __stdcall  ENVTIEName::get_AnalysisImages(CATIAAnalysisImages *& oAnalysisImages) \
{ \
return (ENVTIECALL(CATIAAnalysisAdaptivityManager,ENVTIETypeLetter,ENVTIELetter)get_AnalysisImages(oAnalysisImages)); \
} \
HRESULT __stdcall  ENVTIEName::get_BasicComponents(CATIABasicComponents *& oBasicComponents) \
{ \
return (ENVTIECALL(CATIAAnalysisAdaptivityManager,ENVTIETypeLetter,ENVTIELetter)get_BasicComponents(oBasicComponents)); \
} \
HRESULT __stdcall  ENVTIEName::Update() \
{ \
return (ENVTIECALL(CATIAAnalysisAdaptivityManager,ENVTIETypeLetter,ENVTIELetter)Update()); \
} \
HRESULT  __stdcall  ENVTIEName::get_Application(CATIAApplication *& oApplication) \
{ \
return (ENVTIECALL(CATIAAnalysisAdaptivityManager,ENVTIETypeLetter,ENVTIELetter)get_Application(oApplication)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Parent(CATBaseDispatch *& oParent) \
{ \
return (ENVTIECALL(CATIAAnalysisAdaptivityManager,ENVTIETypeLetter,ENVTIELetter)get_Parent(oParent)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Name(CATBSTR & oNameBSTR) \
{ \
return (ENVTIECALL(CATIAAnalysisAdaptivityManager,ENVTIETypeLetter,ENVTIELetter)get_Name(oNameBSTR)); \
} \
HRESULT  __stdcall  ENVTIEName::put_Name(const CATBSTR & iNameBSTR) \
{ \
return (ENVTIECALL(CATIAAnalysisAdaptivityManager,ENVTIETypeLetter,ENVTIELetter)put_Name(iNameBSTR)); \
} \
HRESULT  __stdcall  ENVTIEName::GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj) \
{ \
return (ENVTIECALL(CATIAAnalysisAdaptivityManager,ENVTIETypeLetter,ENVTIELetter)GetItem(IDName,RealObj)); \
} \


/* Name of the TIE class */
#define class_TIE_CATIAAnalysisAdaptivityManager(classe)    TIECATIAAnalysisAdaptivityManager##classe


/* Common methods inside a TIE */
#define common_TIE_CATIAAnalysisAdaptivityManager(classe) \
 \
 \
/* Static initialization */ \
CATDefineCommonTIEMembers(CATIAAnalysisAdaptivityManager, classe) \
 \
 \
CATImplementTIEMethods(CATIAAnalysisAdaptivityManager, classe) \
CATImplementIUnknownMethodsForCATBaseUnknownTIE(CATIAAnalysisAdaptivityManager, classe, 2) \
CATImplementIDispatchMethodsForCATBaseUnknownTIE(CATIAAnalysisAdaptivityManager, classe) \
CATImplementCATBaseUnknownMethodsForTIE(CATIAAnalysisAdaptivityManager, classe) \
 \
HRESULT __stdcall  TIECATIAAnalysisAdaptivityManager##classe::Run() \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,1,&_Trac2); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->Run(); \
   ExitAfterCall(this,1,_Trac2,&_ret_arg); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAAnalysisAdaptivityManager##classe::get_Type(CATBSTR & oType) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,2,&_Trac2,&oType); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Type(oType); \
   ExitAfterCall(this,2,_Trac2,&_ret_arg,&oType); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAAnalysisAdaptivityManager##classe::get_AnalysisEntities(CATIAAnalysisEntities *& oAnalysisEntities) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,3,&_Trac2,&oAnalysisEntities); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_AnalysisEntities(oAnalysisEntities); \
   ExitAfterCall(this,3,_Trac2,&_ret_arg,&oAnalysisEntities); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAAnalysisAdaptivityManager##classe::get_AnalysisOutputEntities(CATIAAnalysisOutputEntities *& oAnalysisEntities) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,4,&_Trac2,&oAnalysisEntities); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_AnalysisOutputEntities(oAnalysisEntities); \
   ExitAfterCall(this,4,_Trac2,&_ret_arg,&oAnalysisEntities); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAAnalysisAdaptivityManager##classe::get_AnalysisSets(CATIAAnalysisSets *& oAnalysisSets) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,5,&_Trac2,&oAnalysisSets); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_AnalysisSets(oAnalysisSets); \
   ExitAfterCall(this,5,_Trac2,&_ret_arg,&oAnalysisSets); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAAnalysisAdaptivityManager##classe::get_AnalysisImages(CATIAAnalysisImages *& oAnalysisImages) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,6,&_Trac2,&oAnalysisImages); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_AnalysisImages(oAnalysisImages); \
   ExitAfterCall(this,6,_Trac2,&_ret_arg,&oAnalysisImages); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAAnalysisAdaptivityManager##classe::get_BasicComponents(CATIABasicComponents *& oBasicComponents) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,7,&_Trac2,&oBasicComponents); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_BasicComponents(oBasicComponents); \
   ExitAfterCall(this,7,_Trac2,&_ret_arg,&oBasicComponents); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAAnalysisAdaptivityManager##classe::Update() \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,8,&_Trac2); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->Update(); \
   ExitAfterCall(this,8,_Trac2,&_ret_arg); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAAnalysisAdaptivityManager##classe::get_Application(CATIAApplication *& oApplication) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,9,&_Trac2,&oApplication); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Application(oApplication); \
   ExitAfterCall(this,9,_Trac2,&_ret_arg,&oApplication); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAAnalysisAdaptivityManager##classe::get_Parent(CATBaseDispatch *& oParent) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,10,&_Trac2,&oParent); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Parent(oParent); \
   ExitAfterCall(this,10,_Trac2,&_ret_arg,&oParent); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAAnalysisAdaptivityManager##classe::get_Name(CATBSTR & oNameBSTR) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,11,&_Trac2,&oNameBSTR); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Name(oNameBSTR); \
   ExitAfterCall(this,11,_Trac2,&_ret_arg,&oNameBSTR); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAAnalysisAdaptivityManager##classe::put_Name(const CATBSTR & iNameBSTR) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,12,&_Trac2,&iNameBSTR); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_Name(iNameBSTR); \
   ExitAfterCall(this,12,_Trac2,&_ret_arg,&iNameBSTR); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAAnalysisAdaptivityManager##classe::GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,13,&_Trac2,&IDName,&RealObj); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetItem(IDName,RealObj); \
   ExitAfterCall(this,13,_Trac2,&_ret_arg,&IDName,&RealObj); \
   return(_ret_arg); \
} \



/* Macro used to link an implementation with an interface */
#define TIE_CATIAAnalysisAdaptivityManager(classe) \
 \
 \
declare_TIE_CATIAAnalysisAdaptivityManager(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIAAnalysisAdaptivityManager##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIAAnalysisAdaptivityManager,"CATIAAnalysisAdaptivityManager",CATIAAnalysisAdaptivityManager::MetaObject(),classe::MetaObject(),TIE); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIAAnalysisAdaptivityManager(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIECreation(CATIAAnalysisAdaptivityManager, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIAAnalysisAdaptivityManager##classe(classe::MetaObject(),CATIAAnalysisAdaptivityManager::MetaObject(),(void *)CreateTIECATIAAnalysisAdaptivityManager##classe)



/* Macro used to link an implementation with an interface */
/* This TIE is chained on the implementation object */
#define TIEchain_CATIAAnalysisAdaptivityManager(classe) \
 \
 \
declare_TIE_CATIAAnalysisAdaptivityManager(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIAAnalysisAdaptivityManager##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIAAnalysisAdaptivityManager,"CATIAAnalysisAdaptivityManager",CATIAAnalysisAdaptivityManager::MetaObject(),classe::MetaObject(),TIEchain); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIAAnalysisAdaptivityManager(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIEchainCreation(CATIAAnalysisAdaptivityManager, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIAAnalysisAdaptivityManager##classe(classe::MetaObject(),CATIAAnalysisAdaptivityManager::MetaObject(),(void *)CreateTIECATIAAnalysisAdaptivityManager##classe)


/* Macro to switch between BOA and TIE at build time */ 
#ifdef CATSYS_BOA_IS_TIE
#define BOA_CATIAAnalysisAdaptivityManager(classe) TIE_CATIAAnalysisAdaptivityManager(classe)
#else
#define BOA_CATIAAnalysisAdaptivityManager(classe) CATImplementBOA(CATIAAnalysisAdaptivityManager, classe)
#endif

#endif
