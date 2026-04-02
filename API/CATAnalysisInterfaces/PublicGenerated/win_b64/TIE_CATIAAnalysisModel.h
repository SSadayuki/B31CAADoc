#ifndef __TIE_CATIAAnalysisModel
#define __TIE_CATIAAnalysisModel

#include <string.h>
#include "CATBaseUnknown.h"
#include "CATMetaClass.h"
#include "CATMacForTie.h"
#include "CATExitJournal.h"
#include "CATIAAnalysisModel.h"
#include "JS0DSPA.h"


#ifdef _WINDOWS_SOURCE
#define Exported __declspec(dllexport)
#define Imported __declspec(dllimport)
#else
#define Exported 
#define Imported 
#endif


/* To link an implementation with the interface CATIAAnalysisModel */
#define declare_TIE_CATIAAnalysisModel(classe) \
 \
 \
class TIECATIAAnalysisModel##classe : public CATIAAnalysisModel \
{ \
   private: \
      CATDeclareCommonTIEMembers \
   public: \
      CATDeclareTIEMethods(CATIAAnalysisModel, classe) \
      CATDeclareIUnknownMethodsForCATBaseUnknownTIE \
      CATDeclareIDispatchMethodsForCATBaseUnknownTIE \
      CATDeclareCATBaseUnknownMethodsForTIE \
      virtual HRESULT __stdcall get_AnalysisCases(CATIAAnalysisCases *& oAnalysisCases); \
      virtual HRESULT __stdcall get_AnalysisSets(CATIAAnalysisSets *& oAnalysisSets); \
      virtual HRESULT __stdcall get_PostManager(CATIAAnalysisPostManager *& oPostManager); \
      virtual HRESULT __stdcall RunTransition(const CATBSTR & iTransitionName); \
      virtual HRESULT __stdcall get_AdaptivityManager(CATIAAnalysisAdaptivityManager *& oAdaptivityManager); \
      virtual HRESULT __stdcall get_MeshManager(CATIAAnalysisMeshManager *& oMeshManager); \
      virtual HRESULT  __stdcall get_Application(CATIAApplication *& oApplication); \
      virtual HRESULT  __stdcall get_Parent(CATBaseDispatch *& oParent); \
      virtual HRESULT  __stdcall get_Name(CATBSTR & oNameBSTR); \
      virtual HRESULT  __stdcall put_Name(const CATBSTR & iNameBSTR); \
      virtual HRESULT  __stdcall GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj); \
};



#define ENVTIEdeclare_CATIAAnalysisModel(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
virtual HRESULT __stdcall get_AnalysisCases(CATIAAnalysisCases *& oAnalysisCases); \
virtual HRESULT __stdcall get_AnalysisSets(CATIAAnalysisSets *& oAnalysisSets); \
virtual HRESULT __stdcall get_PostManager(CATIAAnalysisPostManager *& oPostManager); \
virtual HRESULT __stdcall RunTransition(const CATBSTR & iTransitionName); \
virtual HRESULT __stdcall get_AdaptivityManager(CATIAAnalysisAdaptivityManager *& oAdaptivityManager); \
virtual HRESULT __stdcall get_MeshManager(CATIAAnalysisMeshManager *& oMeshManager); \
virtual HRESULT  __stdcall get_Application(CATIAApplication *& oApplication); \
virtual HRESULT  __stdcall get_Parent(CATBaseDispatch *& oParent); \
virtual HRESULT  __stdcall get_Name(CATBSTR & oNameBSTR); \
virtual HRESULT  __stdcall put_Name(const CATBSTR & iNameBSTR); \
virtual HRESULT  __stdcall GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj); \


#define ENVTIEdefine_CATIAAnalysisModel(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
HRESULT __stdcall  ENVTIEName::get_AnalysisCases(CATIAAnalysisCases *& oAnalysisCases) \
{ \
return (ENVTIECALL(CATIAAnalysisModel,ENVTIETypeLetter,ENVTIELetter)get_AnalysisCases(oAnalysisCases)); \
} \
HRESULT __stdcall  ENVTIEName::get_AnalysisSets(CATIAAnalysisSets *& oAnalysisSets) \
{ \
return (ENVTIECALL(CATIAAnalysisModel,ENVTIETypeLetter,ENVTIELetter)get_AnalysisSets(oAnalysisSets)); \
} \
HRESULT __stdcall  ENVTIEName::get_PostManager(CATIAAnalysisPostManager *& oPostManager) \
{ \
return (ENVTIECALL(CATIAAnalysisModel,ENVTIETypeLetter,ENVTIELetter)get_PostManager(oPostManager)); \
} \
HRESULT __stdcall  ENVTIEName::RunTransition(const CATBSTR & iTransitionName) \
{ \
return (ENVTIECALL(CATIAAnalysisModel,ENVTIETypeLetter,ENVTIELetter)RunTransition(iTransitionName)); \
} \
HRESULT __stdcall  ENVTIEName::get_AdaptivityManager(CATIAAnalysisAdaptivityManager *& oAdaptivityManager) \
{ \
return (ENVTIECALL(CATIAAnalysisModel,ENVTIETypeLetter,ENVTIELetter)get_AdaptivityManager(oAdaptivityManager)); \
} \
HRESULT __stdcall  ENVTIEName::get_MeshManager(CATIAAnalysisMeshManager *& oMeshManager) \
{ \
return (ENVTIECALL(CATIAAnalysisModel,ENVTIETypeLetter,ENVTIELetter)get_MeshManager(oMeshManager)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Application(CATIAApplication *& oApplication) \
{ \
return (ENVTIECALL(CATIAAnalysisModel,ENVTIETypeLetter,ENVTIELetter)get_Application(oApplication)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Parent(CATBaseDispatch *& oParent) \
{ \
return (ENVTIECALL(CATIAAnalysisModel,ENVTIETypeLetter,ENVTIELetter)get_Parent(oParent)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Name(CATBSTR & oNameBSTR) \
{ \
return (ENVTIECALL(CATIAAnalysisModel,ENVTIETypeLetter,ENVTIELetter)get_Name(oNameBSTR)); \
} \
HRESULT  __stdcall  ENVTIEName::put_Name(const CATBSTR & iNameBSTR) \
{ \
return (ENVTIECALL(CATIAAnalysisModel,ENVTIETypeLetter,ENVTIELetter)put_Name(iNameBSTR)); \
} \
HRESULT  __stdcall  ENVTIEName::GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj) \
{ \
return (ENVTIECALL(CATIAAnalysisModel,ENVTIETypeLetter,ENVTIELetter)GetItem(IDName,RealObj)); \
} \


/* Name of the TIE class */
#define class_TIE_CATIAAnalysisModel(classe)    TIECATIAAnalysisModel##classe


/* Common methods inside a TIE */
#define common_TIE_CATIAAnalysisModel(classe) \
 \
 \
/* Static initialization */ \
CATDefineCommonTIEMembers(CATIAAnalysisModel, classe) \
 \
 \
CATImplementTIEMethods(CATIAAnalysisModel, classe) \
CATImplementIUnknownMethodsForCATBaseUnknownTIE(CATIAAnalysisModel, classe, 2) \
CATImplementIDispatchMethodsForCATBaseUnknownTIE(CATIAAnalysisModel, classe) \
CATImplementCATBaseUnknownMethodsForTIE(CATIAAnalysisModel, classe) \
 \
HRESULT __stdcall  TIECATIAAnalysisModel##classe::get_AnalysisCases(CATIAAnalysisCases *& oAnalysisCases) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,1,&_Trac2,&oAnalysisCases); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_AnalysisCases(oAnalysisCases); \
   ExitAfterCall(this,1,_Trac2,&_ret_arg,&oAnalysisCases); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAAnalysisModel##classe::get_AnalysisSets(CATIAAnalysisSets *& oAnalysisSets) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,2,&_Trac2,&oAnalysisSets); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_AnalysisSets(oAnalysisSets); \
   ExitAfterCall(this,2,_Trac2,&_ret_arg,&oAnalysisSets); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAAnalysisModel##classe::get_PostManager(CATIAAnalysisPostManager *& oPostManager) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,3,&_Trac2,&oPostManager); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_PostManager(oPostManager); \
   ExitAfterCall(this,3,_Trac2,&_ret_arg,&oPostManager); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAAnalysisModel##classe::RunTransition(const CATBSTR & iTransitionName) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,4,&_Trac2,&iTransitionName); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->RunTransition(iTransitionName); \
   ExitAfterCall(this,4,_Trac2,&_ret_arg,&iTransitionName); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAAnalysisModel##classe::get_AdaptivityManager(CATIAAnalysisAdaptivityManager *& oAdaptivityManager) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,5,&_Trac2,&oAdaptivityManager); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_AdaptivityManager(oAdaptivityManager); \
   ExitAfterCall(this,5,_Trac2,&_ret_arg,&oAdaptivityManager); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAAnalysisModel##classe::get_MeshManager(CATIAAnalysisMeshManager *& oMeshManager) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,6,&_Trac2,&oMeshManager); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_MeshManager(oMeshManager); \
   ExitAfterCall(this,6,_Trac2,&_ret_arg,&oMeshManager); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAAnalysisModel##classe::get_Application(CATIAApplication *& oApplication) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,7,&_Trac2,&oApplication); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Application(oApplication); \
   ExitAfterCall(this,7,_Trac2,&_ret_arg,&oApplication); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAAnalysisModel##classe::get_Parent(CATBaseDispatch *& oParent) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,8,&_Trac2,&oParent); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Parent(oParent); \
   ExitAfterCall(this,8,_Trac2,&_ret_arg,&oParent); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAAnalysisModel##classe::get_Name(CATBSTR & oNameBSTR) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,9,&_Trac2,&oNameBSTR); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Name(oNameBSTR); \
   ExitAfterCall(this,9,_Trac2,&_ret_arg,&oNameBSTR); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAAnalysisModel##classe::put_Name(const CATBSTR & iNameBSTR) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,10,&_Trac2,&iNameBSTR); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_Name(iNameBSTR); \
   ExitAfterCall(this,10,_Trac2,&_ret_arg,&iNameBSTR); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAAnalysisModel##classe::GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,11,&_Trac2,&IDName,&RealObj); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetItem(IDName,RealObj); \
   ExitAfterCall(this,11,_Trac2,&_ret_arg,&IDName,&RealObj); \
   return(_ret_arg); \
} \



/* Macro used to link an implementation with an interface */
#define TIE_CATIAAnalysisModel(classe) \
 \
 \
declare_TIE_CATIAAnalysisModel(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIAAnalysisModel##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIAAnalysisModel,"CATIAAnalysisModel",CATIAAnalysisModel::MetaObject(),classe::MetaObject(),TIE); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIAAnalysisModel(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIECreation(CATIAAnalysisModel, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIAAnalysisModel##classe(classe::MetaObject(),CATIAAnalysisModel::MetaObject(),(void *)CreateTIECATIAAnalysisModel##classe)



/* Macro used to link an implementation with an interface */
/* This TIE is chained on the implementation object */
#define TIEchain_CATIAAnalysisModel(classe) \
 \
 \
declare_TIE_CATIAAnalysisModel(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIAAnalysisModel##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIAAnalysisModel,"CATIAAnalysisModel",CATIAAnalysisModel::MetaObject(),classe::MetaObject(),TIEchain); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIAAnalysisModel(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIEchainCreation(CATIAAnalysisModel, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIAAnalysisModel##classe(classe::MetaObject(),CATIAAnalysisModel::MetaObject(),(void *)CreateTIECATIAAnalysisModel##classe)


/* Macro to switch between BOA and TIE at build time */ 
#ifdef CATSYS_BOA_IS_TIE
#define BOA_CATIAAnalysisModel(classe) TIE_CATIAAnalysisModel(classe)
#else
#define BOA_CATIAAnalysisModel(classe) CATImplementBOA(CATIAAnalysisModel, classe)
#endif

#endif
