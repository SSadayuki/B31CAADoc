#ifndef __TIE_CATIAListParameter
#define __TIE_CATIAListParameter

#include <string.h>
#include "CATBaseUnknown.h"
#include "CATMetaClass.h"
#include "CATMacForTie.h"
#include "CATExitJournal.h"
#include "CATIAListParameter.h"
#include "JS0DSPA.h"


#ifdef _WINDOWS_SOURCE
#define Exported __declspec(dllexport)
#define Imported __declspec(dllimport)
#else
#define Exported 
#define Imported 
#endif


/* To link an implementation with the interface CATIAListParameter */
#define declare_TIE_CATIAListParameter(classe) \
 \
 \
class TIECATIAListParameter##classe : public CATIAListParameter \
{ \
   private: \
      CATDeclareCommonTIEMembers \
   public: \
      CATDeclareTIEMethods(CATIAListParameter, classe) \
      CATDeclareIUnknownMethodsForCATBaseUnknownTIE \
      CATDeclareIDispatchMethodsForCATBaseUnknownTIE \
      CATDeclareCATBaseUnknownMethodsForTIE \
      virtual HRESULT __stdcall get_ValueList(CATIAList *& oValue); \
      virtual HRESULT __stdcall ValuateFromString(const CATBSTR & iValue); \
      virtual HRESULT __stdcall ValueAsString(CATBSTR & oValue); \
      virtual HRESULT __stdcall get_OptionalRelation(CATIARelation *& oRelation); \
      virtual HRESULT __stdcall get_ReadOnly(CAT_VARIANT_BOOL & oReadOnly); \
      virtual HRESULT __stdcall Rename(const CATBSTR & iName); \
      virtual HRESULT __stdcall get_Comment(CATBSTR & oComment); \
      virtual HRESULT __stdcall put_Comment(const CATBSTR & iComment); \
      virtual HRESULT __stdcall get_Hidden(CAT_VARIANT_BOOL & oHidden); \
      virtual HRESULT __stdcall put_Hidden(CAT_VARIANT_BOOL iHidden); \
      virtual HRESULT __stdcall get_UserAccessMode(CATLONG & oUserAccessMode); \
      virtual HRESULT __stdcall get_Context(CATIABase *& oContext); \
      virtual HRESULT __stdcall get_Renamed(CAT_VARIANT_BOOL & oRenamed); \
      virtual HRESULT __stdcall get_IsTrueParameter(CAT_VARIANT_BOOL & oIsTrueParameter); \
      virtual HRESULT  __stdcall get_Application(CATIAApplication *& oApplication); \
      virtual HRESULT  __stdcall get_Parent(CATBaseDispatch *& oParent); \
      virtual HRESULT  __stdcall get_Name(CATBSTR & oNameBSTR); \
      virtual HRESULT  __stdcall put_Name(const CATBSTR & iNameBSTR); \
      virtual HRESULT  __stdcall GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj); \
};



#define ENVTIEdeclare_CATIAListParameter(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
virtual HRESULT __stdcall get_ValueList(CATIAList *& oValue); \
virtual HRESULT __stdcall ValuateFromString(const CATBSTR & iValue); \
virtual HRESULT __stdcall ValueAsString(CATBSTR & oValue); \
virtual HRESULT __stdcall get_OptionalRelation(CATIARelation *& oRelation); \
virtual HRESULT __stdcall get_ReadOnly(CAT_VARIANT_BOOL & oReadOnly); \
virtual HRESULT __stdcall Rename(const CATBSTR & iName); \
virtual HRESULT __stdcall get_Comment(CATBSTR & oComment); \
virtual HRESULT __stdcall put_Comment(const CATBSTR & iComment); \
virtual HRESULT __stdcall get_Hidden(CAT_VARIANT_BOOL & oHidden); \
virtual HRESULT __stdcall put_Hidden(CAT_VARIANT_BOOL iHidden); \
virtual HRESULT __stdcall get_UserAccessMode(CATLONG & oUserAccessMode); \
virtual HRESULT __stdcall get_Context(CATIABase *& oContext); \
virtual HRESULT __stdcall get_Renamed(CAT_VARIANT_BOOL & oRenamed); \
virtual HRESULT __stdcall get_IsTrueParameter(CAT_VARIANT_BOOL & oIsTrueParameter); \
virtual HRESULT  __stdcall get_Application(CATIAApplication *& oApplication); \
virtual HRESULT  __stdcall get_Parent(CATBaseDispatch *& oParent); \
virtual HRESULT  __stdcall get_Name(CATBSTR & oNameBSTR); \
virtual HRESULT  __stdcall put_Name(const CATBSTR & iNameBSTR); \
virtual HRESULT  __stdcall GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj); \


#define ENVTIEdefine_CATIAListParameter(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
HRESULT __stdcall  ENVTIEName::get_ValueList(CATIAList *& oValue) \
{ \
return (ENVTIECALL(CATIAListParameter,ENVTIETypeLetter,ENVTIELetter)get_ValueList(oValue)); \
} \
HRESULT __stdcall  ENVTIEName::ValuateFromString(const CATBSTR & iValue) \
{ \
return (ENVTIECALL(CATIAListParameter,ENVTIETypeLetter,ENVTIELetter)ValuateFromString(iValue)); \
} \
HRESULT __stdcall  ENVTIEName::ValueAsString(CATBSTR & oValue) \
{ \
return (ENVTIECALL(CATIAListParameter,ENVTIETypeLetter,ENVTIELetter)ValueAsString(oValue)); \
} \
HRESULT __stdcall  ENVTIEName::get_OptionalRelation(CATIARelation *& oRelation) \
{ \
return (ENVTIECALL(CATIAListParameter,ENVTIETypeLetter,ENVTIELetter)get_OptionalRelation(oRelation)); \
} \
HRESULT __stdcall  ENVTIEName::get_ReadOnly(CAT_VARIANT_BOOL & oReadOnly) \
{ \
return (ENVTIECALL(CATIAListParameter,ENVTIETypeLetter,ENVTIELetter)get_ReadOnly(oReadOnly)); \
} \
HRESULT __stdcall  ENVTIEName::Rename(const CATBSTR & iName) \
{ \
return (ENVTIECALL(CATIAListParameter,ENVTIETypeLetter,ENVTIELetter)Rename(iName)); \
} \
HRESULT __stdcall  ENVTIEName::get_Comment(CATBSTR & oComment) \
{ \
return (ENVTIECALL(CATIAListParameter,ENVTIETypeLetter,ENVTIELetter)get_Comment(oComment)); \
} \
HRESULT __stdcall  ENVTIEName::put_Comment(const CATBSTR & iComment) \
{ \
return (ENVTIECALL(CATIAListParameter,ENVTIETypeLetter,ENVTIELetter)put_Comment(iComment)); \
} \
HRESULT __stdcall  ENVTIEName::get_Hidden(CAT_VARIANT_BOOL & oHidden) \
{ \
return (ENVTIECALL(CATIAListParameter,ENVTIETypeLetter,ENVTIELetter)get_Hidden(oHidden)); \
} \
HRESULT __stdcall  ENVTIEName::put_Hidden(CAT_VARIANT_BOOL iHidden) \
{ \
return (ENVTIECALL(CATIAListParameter,ENVTIETypeLetter,ENVTIELetter)put_Hidden(iHidden)); \
} \
HRESULT __stdcall  ENVTIEName::get_UserAccessMode(CATLONG & oUserAccessMode) \
{ \
return (ENVTIECALL(CATIAListParameter,ENVTIETypeLetter,ENVTIELetter)get_UserAccessMode(oUserAccessMode)); \
} \
HRESULT __stdcall  ENVTIEName::get_Context(CATIABase *& oContext) \
{ \
return (ENVTIECALL(CATIAListParameter,ENVTIETypeLetter,ENVTIELetter)get_Context(oContext)); \
} \
HRESULT __stdcall  ENVTIEName::get_Renamed(CAT_VARIANT_BOOL & oRenamed) \
{ \
return (ENVTIECALL(CATIAListParameter,ENVTIETypeLetter,ENVTIELetter)get_Renamed(oRenamed)); \
} \
HRESULT __stdcall  ENVTIEName::get_IsTrueParameter(CAT_VARIANT_BOOL & oIsTrueParameter) \
{ \
return (ENVTIECALL(CATIAListParameter,ENVTIETypeLetter,ENVTIELetter)get_IsTrueParameter(oIsTrueParameter)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Application(CATIAApplication *& oApplication) \
{ \
return (ENVTIECALL(CATIAListParameter,ENVTIETypeLetter,ENVTIELetter)get_Application(oApplication)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Parent(CATBaseDispatch *& oParent) \
{ \
return (ENVTIECALL(CATIAListParameter,ENVTIETypeLetter,ENVTIELetter)get_Parent(oParent)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Name(CATBSTR & oNameBSTR) \
{ \
return (ENVTIECALL(CATIAListParameter,ENVTIETypeLetter,ENVTIELetter)get_Name(oNameBSTR)); \
} \
HRESULT  __stdcall  ENVTIEName::put_Name(const CATBSTR & iNameBSTR) \
{ \
return (ENVTIECALL(CATIAListParameter,ENVTIETypeLetter,ENVTIELetter)put_Name(iNameBSTR)); \
} \
HRESULT  __stdcall  ENVTIEName::GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj) \
{ \
return (ENVTIECALL(CATIAListParameter,ENVTIETypeLetter,ENVTIELetter)GetItem(IDName,RealObj)); \
} \


/* Name of the TIE class */
#define class_TIE_CATIAListParameter(classe)    TIECATIAListParameter##classe


/* Common methods inside a TIE */
#define common_TIE_CATIAListParameter(classe) \
 \
 \
/* Static initialization */ \
CATDefineCommonTIEMembers(CATIAListParameter, classe) \
 \
 \
CATImplementTIEMethods(CATIAListParameter, classe) \
CATImplementIUnknownMethodsForCATBaseUnknownTIE(CATIAListParameter, classe, 2) \
CATImplementIDispatchMethodsForCATBaseUnknownTIE(CATIAListParameter, classe) \
CATImplementCATBaseUnknownMethodsForTIE(CATIAListParameter, classe) \
 \
HRESULT __stdcall  TIECATIAListParameter##classe::get_ValueList(CATIAList *& oValue) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,1,&_Trac2,&oValue); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_ValueList(oValue); \
   ExitAfterCall(this,1,_Trac2,&_ret_arg,&oValue); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAListParameter##classe::ValuateFromString(const CATBSTR & iValue) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,2,&_Trac2,&iValue); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->ValuateFromString(iValue); \
   ExitAfterCall(this,2,_Trac2,&_ret_arg,&iValue); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAListParameter##classe::ValueAsString(CATBSTR & oValue) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,3,&_Trac2,&oValue); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->ValueAsString(oValue); \
   ExitAfterCall(this,3,_Trac2,&_ret_arg,&oValue); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAListParameter##classe::get_OptionalRelation(CATIARelation *& oRelation) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,4,&_Trac2,&oRelation); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_OptionalRelation(oRelation); \
   ExitAfterCall(this,4,_Trac2,&_ret_arg,&oRelation); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAListParameter##classe::get_ReadOnly(CAT_VARIANT_BOOL & oReadOnly) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,5,&_Trac2,&oReadOnly); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_ReadOnly(oReadOnly); \
   ExitAfterCall(this,5,_Trac2,&_ret_arg,&oReadOnly); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAListParameter##classe::Rename(const CATBSTR & iName) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,6,&_Trac2,&iName); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->Rename(iName); \
   ExitAfterCall(this,6,_Trac2,&_ret_arg,&iName); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAListParameter##classe::get_Comment(CATBSTR & oComment) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,7,&_Trac2,&oComment); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Comment(oComment); \
   ExitAfterCall(this,7,_Trac2,&_ret_arg,&oComment); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAListParameter##classe::put_Comment(const CATBSTR & iComment) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,8,&_Trac2,&iComment); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_Comment(iComment); \
   ExitAfterCall(this,8,_Trac2,&_ret_arg,&iComment); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAListParameter##classe::get_Hidden(CAT_VARIANT_BOOL & oHidden) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,9,&_Trac2,&oHidden); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Hidden(oHidden); \
   ExitAfterCall(this,9,_Trac2,&_ret_arg,&oHidden); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAListParameter##classe::put_Hidden(CAT_VARIANT_BOOL iHidden) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,10,&_Trac2,&iHidden); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_Hidden(iHidden); \
   ExitAfterCall(this,10,_Trac2,&_ret_arg,&iHidden); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAListParameter##classe::get_UserAccessMode(CATLONG & oUserAccessMode) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,11,&_Trac2,&oUserAccessMode); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_UserAccessMode(oUserAccessMode); \
   ExitAfterCall(this,11,_Trac2,&_ret_arg,&oUserAccessMode); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAListParameter##classe::get_Context(CATIABase *& oContext) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,12,&_Trac2,&oContext); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Context(oContext); \
   ExitAfterCall(this,12,_Trac2,&_ret_arg,&oContext); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAListParameter##classe::get_Renamed(CAT_VARIANT_BOOL & oRenamed) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,13,&_Trac2,&oRenamed); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Renamed(oRenamed); \
   ExitAfterCall(this,13,_Trac2,&_ret_arg,&oRenamed); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAListParameter##classe::get_IsTrueParameter(CAT_VARIANT_BOOL & oIsTrueParameter) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,14,&_Trac2,&oIsTrueParameter); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_IsTrueParameter(oIsTrueParameter); \
   ExitAfterCall(this,14,_Trac2,&_ret_arg,&oIsTrueParameter); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAListParameter##classe::get_Application(CATIAApplication *& oApplication) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,15,&_Trac2,&oApplication); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Application(oApplication); \
   ExitAfterCall(this,15,_Trac2,&_ret_arg,&oApplication); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAListParameter##classe::get_Parent(CATBaseDispatch *& oParent) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,16,&_Trac2,&oParent); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Parent(oParent); \
   ExitAfterCall(this,16,_Trac2,&_ret_arg,&oParent); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAListParameter##classe::get_Name(CATBSTR & oNameBSTR) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,17,&_Trac2,&oNameBSTR); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Name(oNameBSTR); \
   ExitAfterCall(this,17,_Trac2,&_ret_arg,&oNameBSTR); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAListParameter##classe::put_Name(const CATBSTR & iNameBSTR) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,18,&_Trac2,&iNameBSTR); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_Name(iNameBSTR); \
   ExitAfterCall(this,18,_Trac2,&_ret_arg,&iNameBSTR); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAListParameter##classe::GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,19,&_Trac2,&IDName,&RealObj); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetItem(IDName,RealObj); \
   ExitAfterCall(this,19,_Trac2,&_ret_arg,&IDName,&RealObj); \
   return(_ret_arg); \
} \



/* Macro used to link an implementation with an interface */
#define TIE_CATIAListParameter(classe) \
 \
 \
declare_TIE_CATIAListParameter(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIAListParameter##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIAListParameter,"CATIAListParameter",CATIAListParameter::MetaObject(),classe::MetaObject(),TIE); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIAListParameter(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIECreation(CATIAListParameter, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIAListParameter##classe(classe::MetaObject(),CATIAListParameter::MetaObject(),(void *)CreateTIECATIAListParameter##classe)



/* Macro used to link an implementation with an interface */
/* This TIE is chained on the implementation object */
#define TIEchain_CATIAListParameter(classe) \
 \
 \
declare_TIE_CATIAListParameter(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIAListParameter##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIAListParameter,"CATIAListParameter",CATIAListParameter::MetaObject(),classe::MetaObject(),TIEchain); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIAListParameter(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIEchainCreation(CATIAListParameter, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIAListParameter##classe(classe::MetaObject(),CATIAListParameter::MetaObject(),(void *)CreateTIECATIAListParameter##classe)


/* Macro to switch between BOA and TIE at build time */ 
#ifdef CATSYS_BOA_IS_TIE
#define BOA_CATIAListParameter(classe) TIE_CATIAListParameter(classe)
#else
#define BOA_CATIAListParameter(classe) CATImplementBOA(CATIAListParameter, classe)
#endif

#endif
