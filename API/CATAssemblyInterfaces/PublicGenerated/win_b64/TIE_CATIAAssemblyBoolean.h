#ifndef __TIE_CATIAAssemblyBoolean
#define __TIE_CATIAAssemblyBoolean

#include <string.h>
#include "CATBaseUnknown.h"
#include "CATMetaClass.h"
#include "CATMacForTie.h"
#include "CATExitJournal.h"
#include "CATIAAssemblyBoolean.h"
#include "JS0DSPA.h"


#ifdef _WINDOWS_SOURCE
#define Exported __declspec(dllexport)
#define Imported __declspec(dllimport)
#else
#define Exported 
#define Imported 
#endif


/* To link an implementation with the interface CATIAAssemblyBoolean */
#define declare_TIE_CATIAAssemblyBoolean(classe) \
 \
 \
class TIECATIAAssemblyBoolean##classe : public CATIAAssemblyBoolean \
{ \
   private: \
      CATDeclareCommonTIEMembers \
   public: \
      CATDeclareTIEMethods(CATIAAssemblyBoolean, classe) \
      CATDeclareIUnknownMethodsForCATBaseUnknownTIE \
      CATDeclareIDispatchMethodsForCATBaseUnknownTIE \
      CATDeclareCATBaseUnknownMethodsForTIE \
      virtual HRESULT __stdcall get_Body(CATIABody *& oBody); \
      virtual HRESULT __stdcall get_BodyComponent(CATIAProduct *& oBodyComp); \
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



#define ENVTIEdeclare_CATIAAssemblyBoolean(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
virtual HRESULT __stdcall get_Body(CATIABody *& oBody); \
virtual HRESULT __stdcall get_BodyComponent(CATIAProduct *& oBodyComp); \
virtual HRESULT __stdcall AddAffectedComponent(CATIAProduct * iComponent); \
virtual HRESULT __stdcall RemoveAffectedComponent(CATIAProduct * iComponent); \
virtual HRESULT __stdcall ListAffectedComponents(CATSafeArrayVariant & oListOfComponents); \
virtual HRESULT __stdcall AffectedComponentsCount(CATLONG & oComponentCount); \
virtual HRESULT  __stdcall get_Application(CATIAApplication *& oApplication); \
virtual HRESULT  __stdcall get_Parent(CATBaseDispatch *& oParent); \
virtual HRESULT  __stdcall get_Name(CATBSTR & oNameBSTR); \
virtual HRESULT  __stdcall put_Name(const CATBSTR & iNameBSTR); \
virtual HRESULT  __stdcall GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj); \


#define ENVTIEdefine_CATIAAssemblyBoolean(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
HRESULT __stdcall  ENVTIEName::get_Body(CATIABody *& oBody) \
{ \
return (ENVTIECALL(CATIAAssemblyBoolean,ENVTIETypeLetter,ENVTIELetter)get_Body(oBody)); \
} \
HRESULT __stdcall  ENVTIEName::get_BodyComponent(CATIAProduct *& oBodyComp) \
{ \
return (ENVTIECALL(CATIAAssemblyBoolean,ENVTIETypeLetter,ENVTIELetter)get_BodyComponent(oBodyComp)); \
} \
HRESULT __stdcall  ENVTIEName::AddAffectedComponent(CATIAProduct * iComponent) \
{ \
return (ENVTIECALL(CATIAAssemblyBoolean,ENVTIETypeLetter,ENVTIELetter)AddAffectedComponent(iComponent)); \
} \
HRESULT __stdcall  ENVTIEName::RemoveAffectedComponent(CATIAProduct * iComponent) \
{ \
return (ENVTIECALL(CATIAAssemblyBoolean,ENVTIETypeLetter,ENVTIELetter)RemoveAffectedComponent(iComponent)); \
} \
HRESULT __stdcall  ENVTIEName::ListAffectedComponents(CATSafeArrayVariant & oListOfComponents) \
{ \
return (ENVTIECALL(CATIAAssemblyBoolean,ENVTIETypeLetter,ENVTIELetter)ListAffectedComponents(oListOfComponents)); \
} \
HRESULT __stdcall  ENVTIEName::AffectedComponentsCount(CATLONG & oComponentCount) \
{ \
return (ENVTIECALL(CATIAAssemblyBoolean,ENVTIETypeLetter,ENVTIELetter)AffectedComponentsCount(oComponentCount)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Application(CATIAApplication *& oApplication) \
{ \
return (ENVTIECALL(CATIAAssemblyBoolean,ENVTIETypeLetter,ENVTIELetter)get_Application(oApplication)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Parent(CATBaseDispatch *& oParent) \
{ \
return (ENVTIECALL(CATIAAssemblyBoolean,ENVTIETypeLetter,ENVTIELetter)get_Parent(oParent)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Name(CATBSTR & oNameBSTR) \
{ \
return (ENVTIECALL(CATIAAssemblyBoolean,ENVTIETypeLetter,ENVTIELetter)get_Name(oNameBSTR)); \
} \
HRESULT  __stdcall  ENVTIEName::put_Name(const CATBSTR & iNameBSTR) \
{ \
return (ENVTIECALL(CATIAAssemblyBoolean,ENVTIETypeLetter,ENVTIELetter)put_Name(iNameBSTR)); \
} \
HRESULT  __stdcall  ENVTIEName::GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj) \
{ \
return (ENVTIECALL(CATIAAssemblyBoolean,ENVTIETypeLetter,ENVTIELetter)GetItem(IDName,RealObj)); \
} \


/* Name of the TIE class */
#define class_TIE_CATIAAssemblyBoolean(classe)    TIECATIAAssemblyBoolean##classe


/* Common methods inside a TIE */
#define common_TIE_CATIAAssemblyBoolean(classe) \
 \
 \
/* Static initialization */ \
CATDefineCommonTIEMembers(CATIAAssemblyBoolean, classe) \
 \
 \
CATImplementTIEMethods(CATIAAssemblyBoolean, classe) \
CATImplementIUnknownMethodsForCATBaseUnknownTIE(CATIAAssemblyBoolean, classe, 2) \
CATImplementIDispatchMethodsForCATBaseUnknownTIE(CATIAAssemblyBoolean, classe) \
CATImplementCATBaseUnknownMethodsForTIE(CATIAAssemblyBoolean, classe) \
 \
HRESULT __stdcall  TIECATIAAssemblyBoolean##classe::get_Body(CATIABody *& oBody) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,1,&_Trac2,&oBody); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Body(oBody); \
   ExitAfterCall(this,1,_Trac2,&_ret_arg,&oBody); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAAssemblyBoolean##classe::get_BodyComponent(CATIAProduct *& oBodyComp) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,2,&_Trac2,&oBodyComp); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_BodyComponent(oBodyComp); \
   ExitAfterCall(this,2,_Trac2,&_ret_arg,&oBodyComp); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAAssemblyBoolean##classe::AddAffectedComponent(CATIAProduct * iComponent) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,3,&_Trac2,&iComponent); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->AddAffectedComponent(iComponent); \
   ExitAfterCall(this,3,_Trac2,&_ret_arg,&iComponent); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAAssemblyBoolean##classe::RemoveAffectedComponent(CATIAProduct * iComponent) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,4,&_Trac2,&iComponent); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->RemoveAffectedComponent(iComponent); \
   ExitAfterCall(this,4,_Trac2,&_ret_arg,&iComponent); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAAssemblyBoolean##classe::ListAffectedComponents(CATSafeArrayVariant & oListOfComponents) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,5,&_Trac2,&oListOfComponents); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->ListAffectedComponents(oListOfComponents); \
   ExitAfterCall(this,5,_Trac2,&_ret_arg,&oListOfComponents); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAAssemblyBoolean##classe::AffectedComponentsCount(CATLONG & oComponentCount) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,6,&_Trac2,&oComponentCount); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->AffectedComponentsCount(oComponentCount); \
   ExitAfterCall(this,6,_Trac2,&_ret_arg,&oComponentCount); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAAssemblyBoolean##classe::get_Application(CATIAApplication *& oApplication) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,7,&_Trac2,&oApplication); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Application(oApplication); \
   ExitAfterCall(this,7,_Trac2,&_ret_arg,&oApplication); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAAssemblyBoolean##classe::get_Parent(CATBaseDispatch *& oParent) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,8,&_Trac2,&oParent); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Parent(oParent); \
   ExitAfterCall(this,8,_Trac2,&_ret_arg,&oParent); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAAssemblyBoolean##classe::get_Name(CATBSTR & oNameBSTR) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,9,&_Trac2,&oNameBSTR); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Name(oNameBSTR); \
   ExitAfterCall(this,9,_Trac2,&_ret_arg,&oNameBSTR); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAAssemblyBoolean##classe::put_Name(const CATBSTR & iNameBSTR) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,10,&_Trac2,&iNameBSTR); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_Name(iNameBSTR); \
   ExitAfterCall(this,10,_Trac2,&_ret_arg,&iNameBSTR); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAAssemblyBoolean##classe::GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,11,&_Trac2,&IDName,&RealObj); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetItem(IDName,RealObj); \
   ExitAfterCall(this,11,_Trac2,&_ret_arg,&IDName,&RealObj); \
   return(_ret_arg); \
} \



/* Macro used to link an implementation with an interface */
#define TIE_CATIAAssemblyBoolean(classe) \
 \
 \
declare_TIE_CATIAAssemblyBoolean(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIAAssemblyBoolean##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIAAssemblyBoolean,"CATIAAssemblyBoolean",CATIAAssemblyBoolean::MetaObject(),classe::MetaObject(),TIE); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIAAssemblyBoolean(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIECreation(CATIAAssemblyBoolean, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIAAssemblyBoolean##classe(classe::MetaObject(),CATIAAssemblyBoolean::MetaObject(),(void *)CreateTIECATIAAssemblyBoolean##classe)



/* Macro used to link an implementation with an interface */
/* This TIE is chained on the implementation object */
#define TIEchain_CATIAAssemblyBoolean(classe) \
 \
 \
declare_TIE_CATIAAssemblyBoolean(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIAAssemblyBoolean##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIAAssemblyBoolean,"CATIAAssemblyBoolean",CATIAAssemblyBoolean::MetaObject(),classe::MetaObject(),TIEchain); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIAAssemblyBoolean(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIEchainCreation(CATIAAssemblyBoolean, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIAAssemblyBoolean##classe(classe::MetaObject(),CATIAAssemblyBoolean::MetaObject(),(void *)CreateTIECATIAAssemblyBoolean##classe)


/* Macro to switch between BOA and TIE at build time */ 
#ifdef CATSYS_BOA_IS_TIE
#define BOA_CATIAAssemblyBoolean(classe) TIE_CATIAAssemblyBoolean(classe)
#else
#define BOA_CATIAAssemblyBoolean(classe) CATImplementBOA(CATIAAssemblyBoolean, classe)
#endif

#endif
