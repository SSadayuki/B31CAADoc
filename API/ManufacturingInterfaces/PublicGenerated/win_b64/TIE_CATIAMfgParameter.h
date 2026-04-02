#ifndef __TIE_CATIAMfgParameter
#define __TIE_CATIAMfgParameter

#include <string.h>
#include "CATBaseUnknown.h"
#include "CATMetaClass.h"
#include "CATMacForTie.h"
#include "CATExitJournal.h"
#include "CATIAMfgParameter.h"
#include "JS0DSPA.h"


#ifdef _WINDOWS_SOURCE
#define Exported __declspec(dllexport)
#define Imported __declspec(dllimport)
#else
#define Exported 
#define Imported 
#endif


/* To link an implementation with the interface CATIAMfgParameter */
#define declare_TIE_CATIAMfgParameter(classe) \
 \
 \
class TIECATIAMfgParameter##classe : public CATIAMfgParameter \
{ \
   private: \
      CATDeclareCommonTIEMembers \
   public: \
      CATDeclareTIEMethods(CATIAMfgParameter, classe) \
      CATDeclareIUnknownMethodsForCATBaseUnknownTIE \
      CATDeclareIDispatchMethodsForCATBaseUnknownTIE \
      CATDeclareCATBaseUnknownMethodsForTIE \
      virtual HRESULT __stdcall GetBoolValue(const CATBSTR & iName, CAT_VARIANT_BOOL & oValue); \
      virtual HRESULT __stdcall GetLongValue(const CATBSTR & iName, CATLONG & oValue); \
      virtual HRESULT __stdcall GetDoubleValue(const CATBSTR & iName, double & oValue, CATLONG iUnit); \
      virtual HRESULT __stdcall GetValue(const CATBSTR & iName, CATIAParameter *& oValue); \
      virtual HRESULT __stdcall GetStringValue(const CATBSTR & iName, CATBSTR & oValue); \
      virtual HRESULT  __stdcall get_Application(CATIAApplication *& oApplication); \
      virtual HRESULT  __stdcall get_Parent(CATBaseDispatch *& oParent); \
      virtual HRESULT  __stdcall get_Name(CATBSTR & oNameBSTR); \
      virtual HRESULT  __stdcall put_Name(const CATBSTR & iNameBSTR); \
      virtual HRESULT  __stdcall GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj); \
};



#define ENVTIEdeclare_CATIAMfgParameter(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
virtual HRESULT __stdcall GetBoolValue(const CATBSTR & iName, CAT_VARIANT_BOOL & oValue); \
virtual HRESULT __stdcall GetLongValue(const CATBSTR & iName, CATLONG & oValue); \
virtual HRESULT __stdcall GetDoubleValue(const CATBSTR & iName, double & oValue, CATLONG iUnit); \
virtual HRESULT __stdcall GetValue(const CATBSTR & iName, CATIAParameter *& oValue); \
virtual HRESULT __stdcall GetStringValue(const CATBSTR & iName, CATBSTR & oValue); \
virtual HRESULT  __stdcall get_Application(CATIAApplication *& oApplication); \
virtual HRESULT  __stdcall get_Parent(CATBaseDispatch *& oParent); \
virtual HRESULT  __stdcall get_Name(CATBSTR & oNameBSTR); \
virtual HRESULT  __stdcall put_Name(const CATBSTR & iNameBSTR); \
virtual HRESULT  __stdcall GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj); \


#define ENVTIEdefine_CATIAMfgParameter(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
HRESULT __stdcall  ENVTIEName::GetBoolValue(const CATBSTR & iName, CAT_VARIANT_BOOL & oValue) \
{ \
return (ENVTIECALL(CATIAMfgParameter,ENVTIETypeLetter,ENVTIELetter)GetBoolValue(iName,oValue)); \
} \
HRESULT __stdcall  ENVTIEName::GetLongValue(const CATBSTR & iName, CATLONG & oValue) \
{ \
return (ENVTIECALL(CATIAMfgParameter,ENVTIETypeLetter,ENVTIELetter)GetLongValue(iName,oValue)); \
} \
HRESULT __stdcall  ENVTIEName::GetDoubleValue(const CATBSTR & iName, double & oValue, CATLONG iUnit) \
{ \
return (ENVTIECALL(CATIAMfgParameter,ENVTIETypeLetter,ENVTIELetter)GetDoubleValue(iName,oValue,iUnit)); \
} \
HRESULT __stdcall  ENVTIEName::GetValue(const CATBSTR & iName, CATIAParameter *& oValue) \
{ \
return (ENVTIECALL(CATIAMfgParameter,ENVTIETypeLetter,ENVTIELetter)GetValue(iName,oValue)); \
} \
HRESULT __stdcall  ENVTIEName::GetStringValue(const CATBSTR & iName, CATBSTR & oValue) \
{ \
return (ENVTIECALL(CATIAMfgParameter,ENVTIETypeLetter,ENVTIELetter)GetStringValue(iName,oValue)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Application(CATIAApplication *& oApplication) \
{ \
return (ENVTIECALL(CATIAMfgParameter,ENVTIETypeLetter,ENVTIELetter)get_Application(oApplication)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Parent(CATBaseDispatch *& oParent) \
{ \
return (ENVTIECALL(CATIAMfgParameter,ENVTIETypeLetter,ENVTIELetter)get_Parent(oParent)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Name(CATBSTR & oNameBSTR) \
{ \
return (ENVTIECALL(CATIAMfgParameter,ENVTIETypeLetter,ENVTIELetter)get_Name(oNameBSTR)); \
} \
HRESULT  __stdcall  ENVTIEName::put_Name(const CATBSTR & iNameBSTR) \
{ \
return (ENVTIECALL(CATIAMfgParameter,ENVTIETypeLetter,ENVTIELetter)put_Name(iNameBSTR)); \
} \
HRESULT  __stdcall  ENVTIEName::GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj) \
{ \
return (ENVTIECALL(CATIAMfgParameter,ENVTIETypeLetter,ENVTIELetter)GetItem(IDName,RealObj)); \
} \


/* Name of the TIE class */
#define class_TIE_CATIAMfgParameter(classe)    TIECATIAMfgParameter##classe


/* Common methods inside a TIE */
#define common_TIE_CATIAMfgParameter(classe) \
 \
 \
/* Static initialization */ \
CATDefineCommonTIEMembers(CATIAMfgParameter, classe) \
 \
 \
CATImplementTIEMethods(CATIAMfgParameter, classe) \
CATImplementIUnknownMethodsForCATBaseUnknownTIE(CATIAMfgParameter, classe, 2) \
CATImplementIDispatchMethodsForCATBaseUnknownTIE(CATIAMfgParameter, classe) \
CATImplementCATBaseUnknownMethodsForTIE(CATIAMfgParameter, classe) \
 \
HRESULT __stdcall  TIECATIAMfgParameter##classe::GetBoolValue(const CATBSTR & iName, CAT_VARIANT_BOOL & oValue) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,1,&_Trac2,&iName,&oValue); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetBoolValue(iName,oValue); \
   ExitAfterCall(this,1,_Trac2,&_ret_arg,&iName,&oValue); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAMfgParameter##classe::GetLongValue(const CATBSTR & iName, CATLONG & oValue) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,2,&_Trac2,&iName,&oValue); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetLongValue(iName,oValue); \
   ExitAfterCall(this,2,_Trac2,&_ret_arg,&iName,&oValue); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAMfgParameter##classe::GetDoubleValue(const CATBSTR & iName, double & oValue, CATLONG iUnit) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,3,&_Trac2,&iName,&oValue,&iUnit); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetDoubleValue(iName,oValue,iUnit); \
   ExitAfterCall(this,3,_Trac2,&_ret_arg,&iName,&oValue,&iUnit); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAMfgParameter##classe::GetValue(const CATBSTR & iName, CATIAParameter *& oValue) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,4,&_Trac2,&iName,&oValue); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetValue(iName,oValue); \
   ExitAfterCall(this,4,_Trac2,&_ret_arg,&iName,&oValue); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAMfgParameter##classe::GetStringValue(const CATBSTR & iName, CATBSTR & oValue) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,5,&_Trac2,&iName,&oValue); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetStringValue(iName,oValue); \
   ExitAfterCall(this,5,_Trac2,&_ret_arg,&iName,&oValue); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAMfgParameter##classe::get_Application(CATIAApplication *& oApplication) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,6,&_Trac2,&oApplication); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Application(oApplication); \
   ExitAfterCall(this,6,_Trac2,&_ret_arg,&oApplication); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAMfgParameter##classe::get_Parent(CATBaseDispatch *& oParent) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,7,&_Trac2,&oParent); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Parent(oParent); \
   ExitAfterCall(this,7,_Trac2,&_ret_arg,&oParent); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAMfgParameter##classe::get_Name(CATBSTR & oNameBSTR) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,8,&_Trac2,&oNameBSTR); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Name(oNameBSTR); \
   ExitAfterCall(this,8,_Trac2,&_ret_arg,&oNameBSTR); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAMfgParameter##classe::put_Name(const CATBSTR & iNameBSTR) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,9,&_Trac2,&iNameBSTR); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_Name(iNameBSTR); \
   ExitAfterCall(this,9,_Trac2,&_ret_arg,&iNameBSTR); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAMfgParameter##classe::GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,10,&_Trac2,&IDName,&RealObj); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetItem(IDName,RealObj); \
   ExitAfterCall(this,10,_Trac2,&_ret_arg,&IDName,&RealObj); \
   return(_ret_arg); \
} \



/* Macro used to link an implementation with an interface */
#define TIE_CATIAMfgParameter(classe) \
 \
 \
declare_TIE_CATIAMfgParameter(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIAMfgParameter##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIAMfgParameter,"CATIAMfgParameter",CATIAMfgParameter::MetaObject(),classe::MetaObject(),TIE); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIAMfgParameter(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIECreation(CATIAMfgParameter, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIAMfgParameter##classe(classe::MetaObject(),CATIAMfgParameter::MetaObject(),(void *)CreateTIECATIAMfgParameter##classe)



/* Macro used to link an implementation with an interface */
/* This TIE is chained on the implementation object */
#define TIEchain_CATIAMfgParameter(classe) \
 \
 \
declare_TIE_CATIAMfgParameter(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIAMfgParameter##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIAMfgParameter,"CATIAMfgParameter",CATIAMfgParameter::MetaObject(),classe::MetaObject(),TIEchain); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIAMfgParameter(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIEchainCreation(CATIAMfgParameter, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIAMfgParameter##classe(classe::MetaObject(),CATIAMfgParameter::MetaObject(),(void *)CreateTIECATIAMfgParameter##classe)


/* Macro to switch between BOA and TIE at build time */ 
#ifdef CATSYS_BOA_IS_TIE
#define BOA_CATIAMfgParameter(classe) TIE_CATIAMfgParameter(classe)
#else
#define BOA_CATIAMfgParameter(classe) CATImplementBOA(CATIAMfgParameter, classe)
#endif

#endif
