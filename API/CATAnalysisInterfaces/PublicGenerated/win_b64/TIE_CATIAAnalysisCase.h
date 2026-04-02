#ifndef __TIE_CATIAAnalysisCase
#define __TIE_CATIAAnalysisCase

#include <string.h>
#include "CATBaseUnknown.h"
#include "CATMetaClass.h"
#include "CATMacForTie.h"
#include "CATExitJournal.h"
#include "CATIAAnalysisCase.h"
#include "JS0DSPA.h"


#ifdef _WINDOWS_SOURCE
#define Exported __declspec(dllexport)
#define Imported __declspec(dllimport)
#else
#define Exported 
#define Imported 
#endif


/* To link an implementation with the interface CATIAAnalysisCase */
#define declare_TIE_CATIAAnalysisCase(classe) \
 \
 \
class TIECATIAAnalysisCase##classe : public CATIAAnalysisCase \
{ \
   private: \
      CATDeclareCommonTIEMembers \
   public: \
      CATDeclareTIEMethods(CATIAAnalysisCase, classe) \
      CATDeclareIUnknownMethodsForCATBaseUnknownTIE \
      CATDeclareIDispatchMethodsForCATBaseUnknownTIE \
      CATDeclareCATBaseUnknownMethodsForTIE \
      virtual HRESULT __stdcall get_AnalysisSets(CATIAAnalysisSets *& oAnalysisSets); \
      virtual HRESULT __stdcall AddSolution(const CATBSTR & iSolutionType, CATIAAnalysisSet *& oSolution); \
      virtual HRESULT __stdcall Compute(); \
      virtual HRESULT __stdcall ComputeMeshOnly(); \
      virtual HRESULT  __stdcall get_Application(CATIAApplication *& oApplication); \
      virtual HRESULT  __stdcall get_Parent(CATBaseDispatch *& oParent); \
      virtual HRESULT  __stdcall get_Name(CATBSTR & oNameBSTR); \
      virtual HRESULT  __stdcall put_Name(const CATBSTR & iNameBSTR); \
      virtual HRESULT  __stdcall GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj); \
};



#define ENVTIEdeclare_CATIAAnalysisCase(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
virtual HRESULT __stdcall get_AnalysisSets(CATIAAnalysisSets *& oAnalysisSets); \
virtual HRESULT __stdcall AddSolution(const CATBSTR & iSolutionType, CATIAAnalysisSet *& oSolution); \
virtual HRESULT __stdcall Compute(); \
virtual HRESULT __stdcall ComputeMeshOnly(); \
virtual HRESULT  __stdcall get_Application(CATIAApplication *& oApplication); \
virtual HRESULT  __stdcall get_Parent(CATBaseDispatch *& oParent); \
virtual HRESULT  __stdcall get_Name(CATBSTR & oNameBSTR); \
virtual HRESULT  __stdcall put_Name(const CATBSTR & iNameBSTR); \
virtual HRESULT  __stdcall GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj); \


#define ENVTIEdefine_CATIAAnalysisCase(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
HRESULT __stdcall  ENVTIEName::get_AnalysisSets(CATIAAnalysisSets *& oAnalysisSets) \
{ \
return (ENVTIECALL(CATIAAnalysisCase,ENVTIETypeLetter,ENVTIELetter)get_AnalysisSets(oAnalysisSets)); \
} \
HRESULT __stdcall  ENVTIEName::AddSolution(const CATBSTR & iSolutionType, CATIAAnalysisSet *& oSolution) \
{ \
return (ENVTIECALL(CATIAAnalysisCase,ENVTIETypeLetter,ENVTIELetter)AddSolution(iSolutionType,oSolution)); \
} \
HRESULT __stdcall  ENVTIEName::Compute() \
{ \
return (ENVTIECALL(CATIAAnalysisCase,ENVTIETypeLetter,ENVTIELetter)Compute()); \
} \
HRESULT __stdcall  ENVTIEName::ComputeMeshOnly() \
{ \
return (ENVTIECALL(CATIAAnalysisCase,ENVTIETypeLetter,ENVTIELetter)ComputeMeshOnly()); \
} \
HRESULT  __stdcall  ENVTIEName::get_Application(CATIAApplication *& oApplication) \
{ \
return (ENVTIECALL(CATIAAnalysisCase,ENVTIETypeLetter,ENVTIELetter)get_Application(oApplication)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Parent(CATBaseDispatch *& oParent) \
{ \
return (ENVTIECALL(CATIAAnalysisCase,ENVTIETypeLetter,ENVTIELetter)get_Parent(oParent)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Name(CATBSTR & oNameBSTR) \
{ \
return (ENVTIECALL(CATIAAnalysisCase,ENVTIETypeLetter,ENVTIELetter)get_Name(oNameBSTR)); \
} \
HRESULT  __stdcall  ENVTIEName::put_Name(const CATBSTR & iNameBSTR) \
{ \
return (ENVTIECALL(CATIAAnalysisCase,ENVTIETypeLetter,ENVTIELetter)put_Name(iNameBSTR)); \
} \
HRESULT  __stdcall  ENVTIEName::GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj) \
{ \
return (ENVTIECALL(CATIAAnalysisCase,ENVTIETypeLetter,ENVTIELetter)GetItem(IDName,RealObj)); \
} \


/* Name of the TIE class */
#define class_TIE_CATIAAnalysisCase(classe)    TIECATIAAnalysisCase##classe


/* Common methods inside a TIE */
#define common_TIE_CATIAAnalysisCase(classe) \
 \
 \
/* Static initialization */ \
CATDefineCommonTIEMembers(CATIAAnalysisCase, classe) \
 \
 \
CATImplementTIEMethods(CATIAAnalysisCase, classe) \
CATImplementIUnknownMethodsForCATBaseUnknownTIE(CATIAAnalysisCase, classe, 2) \
CATImplementIDispatchMethodsForCATBaseUnknownTIE(CATIAAnalysisCase, classe) \
CATImplementCATBaseUnknownMethodsForTIE(CATIAAnalysisCase, classe) \
 \
HRESULT __stdcall  TIECATIAAnalysisCase##classe::get_AnalysisSets(CATIAAnalysisSets *& oAnalysisSets) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,1,&_Trac2,&oAnalysisSets); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_AnalysisSets(oAnalysisSets); \
   ExitAfterCall(this,1,_Trac2,&_ret_arg,&oAnalysisSets); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAAnalysisCase##classe::AddSolution(const CATBSTR & iSolutionType, CATIAAnalysisSet *& oSolution) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,2,&_Trac2,&iSolutionType,&oSolution); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->AddSolution(iSolutionType,oSolution); \
   ExitAfterCall(this,2,_Trac2,&_ret_arg,&iSolutionType,&oSolution); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAAnalysisCase##classe::Compute() \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,3,&_Trac2); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->Compute(); \
   ExitAfterCall(this,3,_Trac2,&_ret_arg); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAAnalysisCase##classe::ComputeMeshOnly() \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,4,&_Trac2); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->ComputeMeshOnly(); \
   ExitAfterCall(this,4,_Trac2,&_ret_arg); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAAnalysisCase##classe::get_Application(CATIAApplication *& oApplication) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,5,&_Trac2,&oApplication); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Application(oApplication); \
   ExitAfterCall(this,5,_Trac2,&_ret_arg,&oApplication); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAAnalysisCase##classe::get_Parent(CATBaseDispatch *& oParent) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,6,&_Trac2,&oParent); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Parent(oParent); \
   ExitAfterCall(this,6,_Trac2,&_ret_arg,&oParent); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAAnalysisCase##classe::get_Name(CATBSTR & oNameBSTR) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,7,&_Trac2,&oNameBSTR); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Name(oNameBSTR); \
   ExitAfterCall(this,7,_Trac2,&_ret_arg,&oNameBSTR); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAAnalysisCase##classe::put_Name(const CATBSTR & iNameBSTR) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,8,&_Trac2,&iNameBSTR); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_Name(iNameBSTR); \
   ExitAfterCall(this,8,_Trac2,&_ret_arg,&iNameBSTR); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAAnalysisCase##classe::GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,9,&_Trac2,&IDName,&RealObj); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetItem(IDName,RealObj); \
   ExitAfterCall(this,9,_Trac2,&_ret_arg,&IDName,&RealObj); \
   return(_ret_arg); \
} \



/* Macro used to link an implementation with an interface */
#define TIE_CATIAAnalysisCase(classe) \
 \
 \
declare_TIE_CATIAAnalysisCase(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIAAnalysisCase##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIAAnalysisCase,"CATIAAnalysisCase",CATIAAnalysisCase::MetaObject(),classe::MetaObject(),TIE); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIAAnalysisCase(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIECreation(CATIAAnalysisCase, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIAAnalysisCase##classe(classe::MetaObject(),CATIAAnalysisCase::MetaObject(),(void *)CreateTIECATIAAnalysisCase##classe)



/* Macro used to link an implementation with an interface */
/* This TIE is chained on the implementation object */
#define TIEchain_CATIAAnalysisCase(classe) \
 \
 \
declare_TIE_CATIAAnalysisCase(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIAAnalysisCase##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIAAnalysisCase,"CATIAAnalysisCase",CATIAAnalysisCase::MetaObject(),classe::MetaObject(),TIEchain); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIAAnalysisCase(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIEchainCreation(CATIAAnalysisCase, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIAAnalysisCase##classe(classe::MetaObject(),CATIAAnalysisCase::MetaObject(),(void *)CreateTIECATIAAnalysisCase##classe)


/* Macro to switch between BOA and TIE at build time */ 
#ifdef CATSYS_BOA_IS_TIE
#define BOA_CATIAAnalysisCase(classe) TIE_CATIAAnalysisCase(classe)
#else
#define BOA_CATIAAnalysisCase(classe) CATImplementBOA(CATIAAnalysisCase, classe)
#endif

#endif
