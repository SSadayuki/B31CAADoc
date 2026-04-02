#ifndef __TIE_CATIASchAppEnvironment
#define __TIE_CATIASchAppEnvironment

#include <string.h>
#include "CATBaseUnknown.h"
#include "CATMetaClass.h"
#include "CATMacForTie.h"
#include "CATExitJournal.h"
#include "CATIASchAppEnvironment.h"
#include "JS0DSPA.h"


#ifdef _WINDOWS_SOURCE
#define Exported __declspec(dllexport)
#define Imported __declspec(dllimport)
#else
#define Exported 
#define Imported 
#endif


/* To link an implementation with the interface CATIASchAppEnvironment */
#define declare_TIE_CATIASchAppEnvironment(classe) \
 \
 \
class TIECATIASchAppEnvironment##classe : public CATIASchAppEnvironment \
{ \
   private: \
      CATDeclareCommonTIEMembers \
   public: \
      CATDeclareTIEMethods(CATIASchAppEnvironment, classe) \
      CATDeclareIUnknownMethodsForCATBaseUnknownTIE \
      CATDeclareIDispatchMethodsForCATBaseUnknownTIE \
      CATDeclareCATBaseUnknownMethodsForTIE \
      virtual HRESULT __stdcall AppInitWhenApplicationStarts(); \
      virtual HRESULT __stdcall AppCleanUpWhenApplicationEnds(); \
      virtual HRESULT __stdcall AppLoadFeatFiles(); \
      virtual HRESULT  __stdcall get_Application(CATIAApplication *& oApplication); \
      virtual HRESULT  __stdcall get_Parent(CATBaseDispatch *& oParent); \
      virtual HRESULT  __stdcall get_Name(CATBSTR & oNameBSTR); \
      virtual HRESULT  __stdcall put_Name(const CATBSTR & iNameBSTR); \
      virtual HRESULT  __stdcall GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj); \
};



#define ENVTIEdeclare_CATIASchAppEnvironment(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
virtual HRESULT __stdcall AppInitWhenApplicationStarts(); \
virtual HRESULT __stdcall AppCleanUpWhenApplicationEnds(); \
virtual HRESULT __stdcall AppLoadFeatFiles(); \
virtual HRESULT  __stdcall get_Application(CATIAApplication *& oApplication); \
virtual HRESULT  __stdcall get_Parent(CATBaseDispatch *& oParent); \
virtual HRESULT  __stdcall get_Name(CATBSTR & oNameBSTR); \
virtual HRESULT  __stdcall put_Name(const CATBSTR & iNameBSTR); \
virtual HRESULT  __stdcall GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj); \


#define ENVTIEdefine_CATIASchAppEnvironment(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
HRESULT __stdcall  ENVTIEName::AppInitWhenApplicationStarts() \
{ \
return (ENVTIECALL(CATIASchAppEnvironment,ENVTIETypeLetter,ENVTIELetter)AppInitWhenApplicationStarts()); \
} \
HRESULT __stdcall  ENVTIEName::AppCleanUpWhenApplicationEnds() \
{ \
return (ENVTIECALL(CATIASchAppEnvironment,ENVTIETypeLetter,ENVTIELetter)AppCleanUpWhenApplicationEnds()); \
} \
HRESULT __stdcall  ENVTIEName::AppLoadFeatFiles() \
{ \
return (ENVTIECALL(CATIASchAppEnvironment,ENVTIETypeLetter,ENVTIELetter)AppLoadFeatFiles()); \
} \
HRESULT  __stdcall  ENVTIEName::get_Application(CATIAApplication *& oApplication) \
{ \
return (ENVTIECALL(CATIASchAppEnvironment,ENVTIETypeLetter,ENVTIELetter)get_Application(oApplication)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Parent(CATBaseDispatch *& oParent) \
{ \
return (ENVTIECALL(CATIASchAppEnvironment,ENVTIETypeLetter,ENVTIELetter)get_Parent(oParent)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Name(CATBSTR & oNameBSTR) \
{ \
return (ENVTIECALL(CATIASchAppEnvironment,ENVTIETypeLetter,ENVTIELetter)get_Name(oNameBSTR)); \
} \
HRESULT  __stdcall  ENVTIEName::put_Name(const CATBSTR & iNameBSTR) \
{ \
return (ENVTIECALL(CATIASchAppEnvironment,ENVTIETypeLetter,ENVTIELetter)put_Name(iNameBSTR)); \
} \
HRESULT  __stdcall  ENVTIEName::GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj) \
{ \
return (ENVTIECALL(CATIASchAppEnvironment,ENVTIETypeLetter,ENVTIELetter)GetItem(IDName,RealObj)); \
} \


/* Name of the TIE class */
#define class_TIE_CATIASchAppEnvironment(classe)    TIECATIASchAppEnvironment##classe


/* Common methods inside a TIE */
#define common_TIE_CATIASchAppEnvironment(classe) \
 \
 \
/* Static initialization */ \
CATDefineCommonTIEMembers(CATIASchAppEnvironment, classe) \
 \
 \
CATImplementTIEMethods(CATIASchAppEnvironment, classe) \
CATImplementIUnknownMethodsForCATBaseUnknownTIE(CATIASchAppEnvironment, classe, 2) \
CATImplementIDispatchMethodsForCATBaseUnknownTIE(CATIASchAppEnvironment, classe) \
CATImplementCATBaseUnknownMethodsForTIE(CATIASchAppEnvironment, classe) \
 \
HRESULT __stdcall  TIECATIASchAppEnvironment##classe::AppInitWhenApplicationStarts() \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,1,&_Trac2); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->AppInitWhenApplicationStarts(); \
   ExitAfterCall(this,1,_Trac2,&_ret_arg); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIASchAppEnvironment##classe::AppCleanUpWhenApplicationEnds() \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,2,&_Trac2); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->AppCleanUpWhenApplicationEnds(); \
   ExitAfterCall(this,2,_Trac2,&_ret_arg); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIASchAppEnvironment##classe::AppLoadFeatFiles() \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,3,&_Trac2); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->AppLoadFeatFiles(); \
   ExitAfterCall(this,3,_Trac2,&_ret_arg); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIASchAppEnvironment##classe::get_Application(CATIAApplication *& oApplication) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,4,&_Trac2,&oApplication); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Application(oApplication); \
   ExitAfterCall(this,4,_Trac2,&_ret_arg,&oApplication); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIASchAppEnvironment##classe::get_Parent(CATBaseDispatch *& oParent) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,5,&_Trac2,&oParent); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Parent(oParent); \
   ExitAfterCall(this,5,_Trac2,&_ret_arg,&oParent); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIASchAppEnvironment##classe::get_Name(CATBSTR & oNameBSTR) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,6,&_Trac2,&oNameBSTR); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Name(oNameBSTR); \
   ExitAfterCall(this,6,_Trac2,&_ret_arg,&oNameBSTR); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIASchAppEnvironment##classe::put_Name(const CATBSTR & iNameBSTR) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,7,&_Trac2,&iNameBSTR); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_Name(iNameBSTR); \
   ExitAfterCall(this,7,_Trac2,&_ret_arg,&iNameBSTR); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIASchAppEnvironment##classe::GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,8,&_Trac2,&IDName,&RealObj); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetItem(IDName,RealObj); \
   ExitAfterCall(this,8,_Trac2,&_ret_arg,&IDName,&RealObj); \
   return(_ret_arg); \
} \



/* Macro used to link an implementation with an interface */
#define TIE_CATIASchAppEnvironment(classe) \
 \
 \
declare_TIE_CATIASchAppEnvironment(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIASchAppEnvironment##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIASchAppEnvironment,"CATIASchAppEnvironment",CATIASchAppEnvironment::MetaObject(),classe::MetaObject(),TIE); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIASchAppEnvironment(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIECreation(CATIASchAppEnvironment, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIASchAppEnvironment##classe(classe::MetaObject(),CATIASchAppEnvironment::MetaObject(),(void *)CreateTIECATIASchAppEnvironment##classe)



/* Macro used to link an implementation with an interface */
/* This TIE is chained on the implementation object */
#define TIEchain_CATIASchAppEnvironment(classe) \
 \
 \
declare_TIE_CATIASchAppEnvironment(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIASchAppEnvironment##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIASchAppEnvironment,"CATIASchAppEnvironment",CATIASchAppEnvironment::MetaObject(),classe::MetaObject(),TIEchain); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIASchAppEnvironment(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIEchainCreation(CATIASchAppEnvironment, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIASchAppEnvironment##classe(classe::MetaObject(),CATIASchAppEnvironment::MetaObject(),(void *)CreateTIECATIASchAppEnvironment##classe)


/* Macro to switch between BOA and TIE at build time */ 
#ifdef CATSYS_BOA_IS_TIE
#define BOA_CATIASchAppEnvironment(classe) TIE_CATIASchAppEnvironment(classe)
#else
#define BOA_CATIASchAppEnvironment(classe) CATImplementBOA(CATIASchAppEnvironment, classe)
#endif

#endif
