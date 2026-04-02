#ifndef __TIE_CATIAStrCutback
#define __TIE_CATIAStrCutback

#include <string.h>
#include "CATBaseUnknown.h"
#include "CATMetaClass.h"
#include "CATMacForTie.h"
#include "CATExitJournal.h"
#include "CATIAStrCutback.h"
#include "JS0DSPA.h"


#ifdef _WINDOWS_SOURCE
#define Exported __declspec(dllexport)
#define Imported __declspec(dllimport)
#else
#define Exported 
#define Imported 
#endif


/* To link an implementation with the interface CATIAStrCutback */
#define declare_TIE_CATIAStrCutback(classe) \
 \
 \
class TIECATIAStrCutback##classe : public CATIAStrCutback \
{ \
   private: \
      CATDeclareCommonTIEMembers \
   public: \
      CATDeclareTIEMethods(CATIAStrCutback, classe) \
      CATDeclareIUnknownMethodsForCATBaseUnknownTIE \
      CATDeclareIDispatchMethodsForCATBaseUnknownTIE \
      CATDeclareCATBaseUnknownMethodsForTIE \
      virtual HRESULT __stdcall get_Type(CatStrCutbackType & oCutback); \
      virtual HRESULT __stdcall get_Offset(CATIAParameter *& oOffset); \
      virtual HRESULT __stdcall AddAffectedComponent(CATIAProduct * iComponent); \
      virtual HRESULT __stdcall RemoveAffectedComponent(CATIAProduct * iComponent); \
      virtual HRESULT __stdcall ListAffectedComponents(CATSafeArrayVariant & oListOfComponents); \
      virtual HRESULT __stdcall AffectedComponentsCount(CATLONG & oComponentCount); \
      virtual HRESULT  __stdcall get_Application(CATIAApplication *& oApplication); \
      virtual HRESULT  __stdcall get_Parent(CATBaseDispatch *& oParent); \
      virtual HRESULT  __stdcall get_Name(CATBSTR & oNameBSTR); \
      virtual HRESULT  __stdcall put_Name(const CATBSTR & iNameBSTR); \
      virtual HRESULT  __stdcall GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj); \
};



#define ENVTIEdeclare_CATIAStrCutback(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
virtual HRESULT __stdcall get_Type(CatStrCutbackType & oCutback); \
virtual HRESULT __stdcall get_Offset(CATIAParameter *& oOffset); \
virtual HRESULT __stdcall AddAffectedComponent(CATIAProduct * iComponent); \
virtual HRESULT __stdcall RemoveAffectedComponent(CATIAProduct * iComponent); \
virtual HRESULT __stdcall ListAffectedComponents(CATSafeArrayVariant & oListOfComponents); \
virtual HRESULT __stdcall AffectedComponentsCount(CATLONG & oComponentCount); \
virtual HRESULT  __stdcall get_Application(CATIAApplication *& oApplication); \
virtual HRESULT  __stdcall get_Parent(CATBaseDispatch *& oParent); \
virtual HRESULT  __stdcall get_Name(CATBSTR & oNameBSTR); \
virtual HRESULT  __stdcall put_Name(const CATBSTR & iNameBSTR); \
virtual HRESULT  __stdcall GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj); \


#define ENVTIEdefine_CATIAStrCutback(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
HRESULT __stdcall  ENVTIEName::get_Type(CatStrCutbackType & oCutback) \
{ \
return (ENVTIECALL(CATIAStrCutback,ENVTIETypeLetter,ENVTIELetter)get_Type(oCutback)); \
} \
HRESULT __stdcall  ENVTIEName::get_Offset(CATIAParameter *& oOffset) \
{ \
return (ENVTIECALL(CATIAStrCutback,ENVTIETypeLetter,ENVTIELetter)get_Offset(oOffset)); \
} \
HRESULT __stdcall  ENVTIEName::AddAffectedComponent(CATIAProduct * iComponent) \
{ \
return (ENVTIECALL(CATIAStrCutback,ENVTIETypeLetter,ENVTIELetter)AddAffectedComponent(iComponent)); \
} \
HRESULT __stdcall  ENVTIEName::RemoveAffectedComponent(CATIAProduct * iComponent) \
{ \
return (ENVTIECALL(CATIAStrCutback,ENVTIETypeLetter,ENVTIELetter)RemoveAffectedComponent(iComponent)); \
} \
HRESULT __stdcall  ENVTIEName::ListAffectedComponents(CATSafeArrayVariant & oListOfComponents) \
{ \
return (ENVTIECALL(CATIAStrCutback,ENVTIETypeLetter,ENVTIELetter)ListAffectedComponents(oListOfComponents)); \
} \
HRESULT __stdcall  ENVTIEName::AffectedComponentsCount(CATLONG & oComponentCount) \
{ \
return (ENVTIECALL(CATIAStrCutback,ENVTIETypeLetter,ENVTIELetter)AffectedComponentsCount(oComponentCount)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Application(CATIAApplication *& oApplication) \
{ \
return (ENVTIECALL(CATIAStrCutback,ENVTIETypeLetter,ENVTIELetter)get_Application(oApplication)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Parent(CATBaseDispatch *& oParent) \
{ \
return (ENVTIECALL(CATIAStrCutback,ENVTIETypeLetter,ENVTIELetter)get_Parent(oParent)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Name(CATBSTR & oNameBSTR) \
{ \
return (ENVTIECALL(CATIAStrCutback,ENVTIETypeLetter,ENVTIELetter)get_Name(oNameBSTR)); \
} \
HRESULT  __stdcall  ENVTIEName::put_Name(const CATBSTR & iNameBSTR) \
{ \
return (ENVTIECALL(CATIAStrCutback,ENVTIETypeLetter,ENVTIELetter)put_Name(iNameBSTR)); \
} \
HRESULT  __stdcall  ENVTIEName::GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj) \
{ \
return (ENVTIECALL(CATIAStrCutback,ENVTIETypeLetter,ENVTIELetter)GetItem(IDName,RealObj)); \
} \


/* Name of the TIE class */
#define class_TIE_CATIAStrCutback(classe)    TIECATIAStrCutback##classe


/* Common methods inside a TIE */
#define common_TIE_CATIAStrCutback(classe) \
 \
 \
/* Static initialization */ \
CATDefineCommonTIEMembers(CATIAStrCutback, classe) \
 \
 \
CATImplementTIEMethods(CATIAStrCutback, classe) \
CATImplementIUnknownMethodsForCATBaseUnknownTIE(CATIAStrCutback, classe, 2) \
CATImplementIDispatchMethodsForCATBaseUnknownTIE(CATIAStrCutback, classe) \
CATImplementCATBaseUnknownMethodsForTIE(CATIAStrCutback, classe) \
 \
HRESULT __stdcall  TIECATIAStrCutback##classe::get_Type(CatStrCutbackType & oCutback) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,1,&_Trac2,&oCutback); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Type(oCutback); \
   ExitAfterCall(this,1,_Trac2,&_ret_arg,&oCutback); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAStrCutback##classe::get_Offset(CATIAParameter *& oOffset) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,2,&_Trac2,&oOffset); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Offset(oOffset); \
   ExitAfterCall(this,2,_Trac2,&_ret_arg,&oOffset); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAStrCutback##classe::AddAffectedComponent(CATIAProduct * iComponent) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,3,&_Trac2,&iComponent); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->AddAffectedComponent(iComponent); \
   ExitAfterCall(this,3,_Trac2,&_ret_arg,&iComponent); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAStrCutback##classe::RemoveAffectedComponent(CATIAProduct * iComponent) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,4,&_Trac2,&iComponent); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->RemoveAffectedComponent(iComponent); \
   ExitAfterCall(this,4,_Trac2,&_ret_arg,&iComponent); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAStrCutback##classe::ListAffectedComponents(CATSafeArrayVariant & oListOfComponents) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,5,&_Trac2,&oListOfComponents); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->ListAffectedComponents(oListOfComponents); \
   ExitAfterCall(this,5,_Trac2,&_ret_arg,&oListOfComponents); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAStrCutback##classe::AffectedComponentsCount(CATLONG & oComponentCount) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,6,&_Trac2,&oComponentCount); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->AffectedComponentsCount(oComponentCount); \
   ExitAfterCall(this,6,_Trac2,&_ret_arg,&oComponentCount); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAStrCutback##classe::get_Application(CATIAApplication *& oApplication) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,7,&_Trac2,&oApplication); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Application(oApplication); \
   ExitAfterCall(this,7,_Trac2,&_ret_arg,&oApplication); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAStrCutback##classe::get_Parent(CATBaseDispatch *& oParent) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,8,&_Trac2,&oParent); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Parent(oParent); \
   ExitAfterCall(this,8,_Trac2,&_ret_arg,&oParent); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAStrCutback##classe::get_Name(CATBSTR & oNameBSTR) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,9,&_Trac2,&oNameBSTR); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Name(oNameBSTR); \
   ExitAfterCall(this,9,_Trac2,&_ret_arg,&oNameBSTR); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAStrCutback##classe::put_Name(const CATBSTR & iNameBSTR) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,10,&_Trac2,&iNameBSTR); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_Name(iNameBSTR); \
   ExitAfterCall(this,10,_Trac2,&_ret_arg,&iNameBSTR); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAStrCutback##classe::GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,11,&_Trac2,&IDName,&RealObj); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetItem(IDName,RealObj); \
   ExitAfterCall(this,11,_Trac2,&_ret_arg,&IDName,&RealObj); \
   return(_ret_arg); \
} \



/* Macro used to link an implementation with an interface */
#define TIE_CATIAStrCutback(classe) \
 \
 \
declare_TIE_CATIAStrCutback(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIAStrCutback##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIAStrCutback,"CATIAStrCutback",CATIAStrCutback::MetaObject(),classe::MetaObject(),TIE); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIAStrCutback(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIECreation(CATIAStrCutback, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIAStrCutback##classe(classe::MetaObject(),CATIAStrCutback::MetaObject(),(void *)CreateTIECATIAStrCutback##classe)



/* Macro used to link an implementation with an interface */
/* This TIE is chained on the implementation object */
#define TIEchain_CATIAStrCutback(classe) \
 \
 \
declare_TIE_CATIAStrCutback(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIAStrCutback##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIAStrCutback,"CATIAStrCutback",CATIAStrCutback::MetaObject(),classe::MetaObject(),TIEchain); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIAStrCutback(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIEchainCreation(CATIAStrCutback, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIAStrCutback##classe(classe::MetaObject(),CATIAStrCutback::MetaObject(),(void *)CreateTIECATIAStrCutback##classe)


/* Macro to switch between BOA and TIE at build time */ 
#ifdef CATSYS_BOA_IS_TIE
#define BOA_CATIAStrCutback(classe) TIE_CATIAStrCutback(classe)
#else
#define BOA_CATIAStrCutback(classe) CATImplementBOA(CATIAStrCutback, classe)
#endif

#endif
