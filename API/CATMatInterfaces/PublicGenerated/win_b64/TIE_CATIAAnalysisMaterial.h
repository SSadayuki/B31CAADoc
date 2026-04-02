#ifndef __TIE_CATIAAnalysisMaterial
#define __TIE_CATIAAnalysisMaterial

#include <string.h>
#include "CATBaseUnknown.h"
#include "CATMetaClass.h"
#include "CATMacForTie.h"
#include "CATExitJournal.h"
#include "CATIAAnalysisMaterial.h"
#include "JS0DSPA.h"


#ifdef _WINDOWS_SOURCE
#define Exported __declspec(dllexport)
#define Imported __declspec(dllimport)
#else
#define Exported 
#define Imported 
#endif


/* To link an implementation with the interface CATIAAnalysisMaterial */
#define declare_TIE_CATIAAnalysisMaterial(classe) \
 \
 \
class TIECATIAAnalysisMaterial##classe : public CATIAAnalysisMaterial \
{ \
   private: \
      CATDeclareCommonTIEMembers \
   public: \
      CATDeclareTIEMethods(CATIAAnalysisMaterial, classe) \
      CATDeclareIUnknownMethodsForCATBaseUnknownTIE \
      CATDeclareIDispatchMethodsForCATBaseUnknownTIE \
      CATDeclareCATBaseUnknownMethodsForTIE \
      virtual HRESULT __stdcall GetValue(const CATBSTR & iLabel, CATVariant & oValue); \
      virtual HRESULT __stdcall PutValue(const CATBSTR & iLabel, const CATVariant & iValue); \
      virtual HRESULT __stdcall GetType(CATBSTR & oType); \
      virtual HRESULT  __stdcall get_Application(CATIAApplication *& oApplication); \
      virtual HRESULT  __stdcall get_Parent(CATBaseDispatch *& oParent); \
      virtual HRESULT  __stdcall get_Name(CATBSTR & oNameBSTR); \
      virtual HRESULT  __stdcall put_Name(const CATBSTR & iNameBSTR); \
      virtual HRESULT  __stdcall GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj); \
};



#define ENVTIEdeclare_CATIAAnalysisMaterial(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
virtual HRESULT __stdcall GetValue(const CATBSTR & iLabel, CATVariant & oValue); \
virtual HRESULT __stdcall PutValue(const CATBSTR & iLabel, const CATVariant & iValue); \
virtual HRESULT __stdcall GetType(CATBSTR & oType); \
virtual HRESULT  __stdcall get_Application(CATIAApplication *& oApplication); \
virtual HRESULT  __stdcall get_Parent(CATBaseDispatch *& oParent); \
virtual HRESULT  __stdcall get_Name(CATBSTR & oNameBSTR); \
virtual HRESULT  __stdcall put_Name(const CATBSTR & iNameBSTR); \
virtual HRESULT  __stdcall GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj); \


#define ENVTIEdefine_CATIAAnalysisMaterial(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
HRESULT __stdcall  ENVTIEName::GetValue(const CATBSTR & iLabel, CATVariant & oValue) \
{ \
return (ENVTIECALL(CATIAAnalysisMaterial,ENVTIETypeLetter,ENVTIELetter)GetValue(iLabel,oValue)); \
} \
HRESULT __stdcall  ENVTIEName::PutValue(const CATBSTR & iLabel, const CATVariant & iValue) \
{ \
return (ENVTIECALL(CATIAAnalysisMaterial,ENVTIETypeLetter,ENVTIELetter)PutValue(iLabel,iValue)); \
} \
HRESULT __stdcall  ENVTIEName::GetType(CATBSTR & oType) \
{ \
return (ENVTIECALL(CATIAAnalysisMaterial,ENVTIETypeLetter,ENVTIELetter)GetType(oType)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Application(CATIAApplication *& oApplication) \
{ \
return (ENVTIECALL(CATIAAnalysisMaterial,ENVTIETypeLetter,ENVTIELetter)get_Application(oApplication)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Parent(CATBaseDispatch *& oParent) \
{ \
return (ENVTIECALL(CATIAAnalysisMaterial,ENVTIETypeLetter,ENVTIELetter)get_Parent(oParent)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Name(CATBSTR & oNameBSTR) \
{ \
return (ENVTIECALL(CATIAAnalysisMaterial,ENVTIETypeLetter,ENVTIELetter)get_Name(oNameBSTR)); \
} \
HRESULT  __stdcall  ENVTIEName::put_Name(const CATBSTR & iNameBSTR) \
{ \
return (ENVTIECALL(CATIAAnalysisMaterial,ENVTIETypeLetter,ENVTIELetter)put_Name(iNameBSTR)); \
} \
HRESULT  __stdcall  ENVTIEName::GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj) \
{ \
return (ENVTIECALL(CATIAAnalysisMaterial,ENVTIETypeLetter,ENVTIELetter)GetItem(IDName,RealObj)); \
} \


/* Name of the TIE class */
#define class_TIE_CATIAAnalysisMaterial(classe)    TIECATIAAnalysisMaterial##classe


/* Common methods inside a TIE */
#define common_TIE_CATIAAnalysisMaterial(classe) \
 \
 \
/* Static initialization */ \
CATDefineCommonTIEMembers(CATIAAnalysisMaterial, classe) \
 \
 \
CATImplementTIEMethods(CATIAAnalysisMaterial, classe) \
CATImplementIUnknownMethodsForCATBaseUnknownTIE(CATIAAnalysisMaterial, classe, 2) \
CATImplementIDispatchMethodsForCATBaseUnknownTIE(CATIAAnalysisMaterial, classe) \
CATImplementCATBaseUnknownMethodsForTIE(CATIAAnalysisMaterial, classe) \
 \
HRESULT __stdcall  TIECATIAAnalysisMaterial##classe::GetValue(const CATBSTR & iLabel, CATVariant & oValue) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,1,&_Trac2,&iLabel,&oValue); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetValue(iLabel,oValue); \
   ExitAfterCall(this,1,_Trac2,&_ret_arg,&iLabel,&oValue); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAAnalysisMaterial##classe::PutValue(const CATBSTR & iLabel, const CATVariant & iValue) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,2,&_Trac2,&iLabel,&iValue); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->PutValue(iLabel,iValue); \
   ExitAfterCall(this,2,_Trac2,&_ret_arg,&iLabel,&iValue); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAAnalysisMaterial##classe::GetType(CATBSTR & oType) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,3,&_Trac2,&oType); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetType(oType); \
   ExitAfterCall(this,3,_Trac2,&_ret_arg,&oType); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAAnalysisMaterial##classe::get_Application(CATIAApplication *& oApplication) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,4,&_Trac2,&oApplication); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Application(oApplication); \
   ExitAfterCall(this,4,_Trac2,&_ret_arg,&oApplication); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAAnalysisMaterial##classe::get_Parent(CATBaseDispatch *& oParent) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,5,&_Trac2,&oParent); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Parent(oParent); \
   ExitAfterCall(this,5,_Trac2,&_ret_arg,&oParent); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAAnalysisMaterial##classe::get_Name(CATBSTR & oNameBSTR) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,6,&_Trac2,&oNameBSTR); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Name(oNameBSTR); \
   ExitAfterCall(this,6,_Trac2,&_ret_arg,&oNameBSTR); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAAnalysisMaterial##classe::put_Name(const CATBSTR & iNameBSTR) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,7,&_Trac2,&iNameBSTR); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_Name(iNameBSTR); \
   ExitAfterCall(this,7,_Trac2,&_ret_arg,&iNameBSTR); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAAnalysisMaterial##classe::GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,8,&_Trac2,&IDName,&RealObj); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetItem(IDName,RealObj); \
   ExitAfterCall(this,8,_Trac2,&_ret_arg,&IDName,&RealObj); \
   return(_ret_arg); \
} \



/* Macro used to link an implementation with an interface */
#define TIE_CATIAAnalysisMaterial(classe) \
 \
 \
declare_TIE_CATIAAnalysisMaterial(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIAAnalysisMaterial##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIAAnalysisMaterial,"CATIAAnalysisMaterial",CATIAAnalysisMaterial::MetaObject(),classe::MetaObject(),TIE); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIAAnalysisMaterial(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIECreation(CATIAAnalysisMaterial, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIAAnalysisMaterial##classe(classe::MetaObject(),CATIAAnalysisMaterial::MetaObject(),(void *)CreateTIECATIAAnalysisMaterial##classe)



/* Macro used to link an implementation with an interface */
/* This TIE is chained on the implementation object */
#define TIEchain_CATIAAnalysisMaterial(classe) \
 \
 \
declare_TIE_CATIAAnalysisMaterial(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIAAnalysisMaterial##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIAAnalysisMaterial,"CATIAAnalysisMaterial",CATIAAnalysisMaterial::MetaObject(),classe::MetaObject(),TIEchain); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIAAnalysisMaterial(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIEchainCreation(CATIAAnalysisMaterial, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIAAnalysisMaterial##classe(classe::MetaObject(),CATIAAnalysisMaterial::MetaObject(),(void *)CreateTIECATIAAnalysisMaterial##classe)


/* Macro to switch between BOA and TIE at build time */ 
#ifdef CATSYS_BOA_IS_TIE
#define BOA_CATIAAnalysisMaterial(classe) TIE_CATIAAnalysisMaterial(classe)
#else
#define BOA_CATIAAnalysisMaterial(classe) CATImplementBOA(CATIAAnalysisMaterial, classe)
#endif

#endif
