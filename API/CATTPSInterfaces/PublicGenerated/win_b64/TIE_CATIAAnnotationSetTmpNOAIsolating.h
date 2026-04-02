#ifndef __TIE_CATIAAnnotationSetTmpNOAIsolating
#define __TIE_CATIAAnnotationSetTmpNOAIsolating

#include <string.h>
#include "CATBaseUnknown.h"
#include "CATMetaClass.h"
#include "CATMacForTie.h"
#include "CATIAAnnotationSetTmpNOAIsolating.h"
#include "JS0DSPA.h"


#ifdef _WINDOWS_SOURCE
#define Exported __declspec(dllexport)
#define Imported __declspec(dllimport)
#else
#define Exported 
#define Imported 
#endif


/* To link an implementation with the interface CATIAAnnotationSetTmpNOAIsolating */
#define declare_TIE_CATIAAnnotationSetTmpNOAIsolating(classe) \
 \
 \
class TIECATIAAnnotationSetTmpNOAIsolating##classe : public CATIAAnnotationSetTmpNOAIsolating \
{ \
   private: \
      CATDeclareCommonTIEMembers \
   public: \
      CATDeclareTIEMethods(CATIAAnnotationSetTmpNOAIsolating, classe) \
      CATDeclareIUnknownMethodsForCATBaseUnknownTIE \
      CATDeclareIDispatchMethodsForCATBaseUnknownTIE \
      CATDeclareCATBaseUnknownMethodsForTIE \
      virtual HRESULT __stdcall IsolateLinksOfNOA(); \
      virtual HRESULT  __stdcall get_Application(CATIAApplication *& oApplication); \
      virtual HRESULT  __stdcall get_Parent(CATBaseDispatch *& oParent); \
      virtual HRESULT  __stdcall get_Name(CATBSTR & oNameBSTR); \
      virtual HRESULT  __stdcall put_Name(const CATBSTR & iNameBSTR); \
      virtual HRESULT  __stdcall GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj); \
};



#define ENVTIEdeclare_CATIAAnnotationSetTmpNOAIsolating(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
virtual HRESULT __stdcall IsolateLinksOfNOA(); \
virtual HRESULT  __stdcall get_Application(CATIAApplication *& oApplication); \
virtual HRESULT  __stdcall get_Parent(CATBaseDispatch *& oParent); \
virtual HRESULT  __stdcall get_Name(CATBSTR & oNameBSTR); \
virtual HRESULT  __stdcall put_Name(const CATBSTR & iNameBSTR); \
virtual HRESULT  __stdcall GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj); \


#define ENVTIEdefine_CATIAAnnotationSetTmpNOAIsolating(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
HRESULT __stdcall  ENVTIEName::IsolateLinksOfNOA() \
{ \
return (ENVTIECALL(CATIAAnnotationSetTmpNOAIsolating,ENVTIETypeLetter,ENVTIELetter)IsolateLinksOfNOA()); \
} \
HRESULT  __stdcall  ENVTIEName::get_Application(CATIAApplication *& oApplication) \
{ \
return (ENVTIECALL(CATIAAnnotationSetTmpNOAIsolating,ENVTIETypeLetter,ENVTIELetter)get_Application(oApplication)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Parent(CATBaseDispatch *& oParent) \
{ \
return (ENVTIECALL(CATIAAnnotationSetTmpNOAIsolating,ENVTIETypeLetter,ENVTIELetter)get_Parent(oParent)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Name(CATBSTR & oNameBSTR) \
{ \
return (ENVTIECALL(CATIAAnnotationSetTmpNOAIsolating,ENVTIETypeLetter,ENVTIELetter)get_Name(oNameBSTR)); \
} \
HRESULT  __stdcall  ENVTIEName::put_Name(const CATBSTR & iNameBSTR) \
{ \
return (ENVTIECALL(CATIAAnnotationSetTmpNOAIsolating,ENVTIETypeLetter,ENVTIELetter)put_Name(iNameBSTR)); \
} \
HRESULT  __stdcall  ENVTIEName::GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj) \
{ \
return (ENVTIECALL(CATIAAnnotationSetTmpNOAIsolating,ENVTIETypeLetter,ENVTIELetter)GetItem(IDName,RealObj)); \
} \


/* Name of the TIE class */
#define class_TIE_CATIAAnnotationSetTmpNOAIsolating(classe)    TIECATIAAnnotationSetTmpNOAIsolating##classe


/* Common methods inside a TIE */
#define common_TIE_CATIAAnnotationSetTmpNOAIsolating(classe) \
 \
 \
/* Static initialization */ \
CATDefineCommonTIEMembers(CATIAAnnotationSetTmpNOAIsolating, classe) \
 \
 \
CATImplementTIEMethods(CATIAAnnotationSetTmpNOAIsolating, classe) \
CATImplementIUnknownMethodsForCATBaseUnknownTIE(CATIAAnnotationSetTmpNOAIsolating, classe, 2) \
CATImplementIDispatchMethodsForCATBaseUnknownTIE(CATIAAnnotationSetTmpNOAIsolating, classe) \
CATImplementCATBaseUnknownMethodsForTIE(CATIAAnnotationSetTmpNOAIsolating, classe) \
 \
HRESULT __stdcall  TIECATIAAnnotationSetTmpNOAIsolating##classe::IsolateLinksOfNOA() \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->IsolateLinksOfNOA()); \
} \
HRESULT  __stdcall  TIECATIAAnnotationSetTmpNOAIsolating##classe::get_Application(CATIAApplication *& oApplication) \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Application(oApplication)); \
} \
HRESULT  __stdcall  TIECATIAAnnotationSetTmpNOAIsolating##classe::get_Parent(CATBaseDispatch *& oParent) \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Parent(oParent)); \
} \
HRESULT  __stdcall  TIECATIAAnnotationSetTmpNOAIsolating##classe::get_Name(CATBSTR & oNameBSTR) \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Name(oNameBSTR)); \
} \
HRESULT  __stdcall  TIECATIAAnnotationSetTmpNOAIsolating##classe::put_Name(const CATBSTR & iNameBSTR) \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_Name(iNameBSTR)); \
} \
HRESULT  __stdcall  TIECATIAAnnotationSetTmpNOAIsolating##classe::GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj) \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetItem(IDName,RealObj)); \
} \



/* Macro used to link an implementation with an interface */
#define TIE_CATIAAnnotationSetTmpNOAIsolating(classe) \
 \
 \
declare_TIE_CATIAAnnotationSetTmpNOAIsolating(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIAAnnotationSetTmpNOAIsolating##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIAAnnotationSetTmpNOAIsolating,"CATIAAnnotationSetTmpNOAIsolating",CATIAAnnotationSetTmpNOAIsolating::MetaObject(),classe::MetaObject(),TIE); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIAAnnotationSetTmpNOAIsolating(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIECreation(CATIAAnnotationSetTmpNOAIsolating, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIAAnnotationSetTmpNOAIsolating##classe(classe::MetaObject(),CATIAAnnotationSetTmpNOAIsolating::MetaObject(),(void *)CreateTIECATIAAnnotationSetTmpNOAIsolating##classe)



/* Macro used to link an implementation with an interface */
/* This TIE is chained on the implementation object */
#define TIEchain_CATIAAnnotationSetTmpNOAIsolating(classe) \
 \
 \
declare_TIE_CATIAAnnotationSetTmpNOAIsolating(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIAAnnotationSetTmpNOAIsolating##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIAAnnotationSetTmpNOAIsolating,"CATIAAnnotationSetTmpNOAIsolating",CATIAAnnotationSetTmpNOAIsolating::MetaObject(),classe::MetaObject(),TIEchain); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIAAnnotationSetTmpNOAIsolating(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIEchainCreation(CATIAAnnotationSetTmpNOAIsolating, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIAAnnotationSetTmpNOAIsolating##classe(classe::MetaObject(),CATIAAnnotationSetTmpNOAIsolating::MetaObject(),(void *)CreateTIECATIAAnnotationSetTmpNOAIsolating##classe)


/* Macro to switch between BOA and TIE at build time */ 
#ifdef CATSYS_BOA_IS_TIE
#define BOA_CATIAAnnotationSetTmpNOAIsolating(classe) TIE_CATIAAnnotationSetTmpNOAIsolating(classe)
#else
#define BOA_CATIAAnnotationSetTmpNOAIsolating(classe) CATImplementBOA(CATIAAnnotationSetTmpNOAIsolating, classe)
#endif

#endif
