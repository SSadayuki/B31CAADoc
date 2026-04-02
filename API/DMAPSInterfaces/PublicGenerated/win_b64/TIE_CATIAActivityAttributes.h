#ifndef __TIE_CATIAActivityAttributes
#define __TIE_CATIAActivityAttributes

#include <string.h>
#include "CATBaseUnknown.h"
#include "CATMetaClass.h"
#include "CATMacForTie.h"
#include "CATExitJournal.h"
#include "CATIAActivityAttributes.h"
#include "JS0DSPA.h"


#ifdef _WINDOWS_SOURCE
#define Exported __declspec(dllexport)
#define Imported __declspec(dllimport)
#else
#define Exported 
#define Imported 
#endif


/* To link an implementation with the interface CATIAActivityAttributes */
#define declare_TIE_CATIAActivityAttributes(classe) \
 \
 \
class TIECATIAActivityAttributes##classe : public CATIAActivityAttributes \
{ \
   private: \
      CATDeclareCommonTIEMembers \
   public: \
      CATDeclareTIEMethods(CATIAActivityAttributes, classe) \
      CATDeclareIUnknownMethodsForCATBaseUnknownTIE \
      CATDeclareIDispatchMethodsForCATBaseUnknownTIE \
      CATDeclareCATBaseUnknownMethodsForTIE \
      virtual HRESULT __stdcall get_AttrCount(CATLONG & oNbAttr); \
      virtual HRESULT __stdcall GetAttrValue(const CATVariant & iIndex, CATVariant & oAttVal); \
      virtual HRESULT __stdcall SetAttrValue(const CATVariant & iIndex, const CATVariant & iAttrVal); \
      virtual HRESULT  __stdcall get_Application(CATIAApplication *& oApplication); \
      virtual HRESULT  __stdcall get_Parent(CATBaseDispatch *& oParent); \
      virtual HRESULT  __stdcall get_Name(CATBSTR & oNameBSTR); \
      virtual HRESULT  __stdcall put_Name(const CATBSTR & iNameBSTR); \
      virtual HRESULT  __stdcall GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj); \
};



#define ENVTIEdeclare_CATIAActivityAttributes(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
virtual HRESULT __stdcall get_AttrCount(CATLONG & oNbAttr); \
virtual HRESULT __stdcall GetAttrValue(const CATVariant & iIndex, CATVariant & oAttVal); \
virtual HRESULT __stdcall SetAttrValue(const CATVariant & iIndex, const CATVariant & iAttrVal); \
virtual HRESULT  __stdcall get_Application(CATIAApplication *& oApplication); \
virtual HRESULT  __stdcall get_Parent(CATBaseDispatch *& oParent); \
virtual HRESULT  __stdcall get_Name(CATBSTR & oNameBSTR); \
virtual HRESULT  __stdcall put_Name(const CATBSTR & iNameBSTR); \
virtual HRESULT  __stdcall GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj); \


#define ENVTIEdefine_CATIAActivityAttributes(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
HRESULT __stdcall  ENVTIEName::get_AttrCount(CATLONG & oNbAttr) \
{ \
return (ENVTIECALL(CATIAActivityAttributes,ENVTIETypeLetter,ENVTIELetter)get_AttrCount(oNbAttr)); \
} \
HRESULT __stdcall  ENVTIEName::GetAttrValue(const CATVariant & iIndex, CATVariant & oAttVal) \
{ \
return (ENVTIECALL(CATIAActivityAttributes,ENVTIETypeLetter,ENVTIELetter)GetAttrValue(iIndex,oAttVal)); \
} \
HRESULT __stdcall  ENVTIEName::SetAttrValue(const CATVariant & iIndex, const CATVariant & iAttrVal) \
{ \
return (ENVTIECALL(CATIAActivityAttributes,ENVTIETypeLetter,ENVTIELetter)SetAttrValue(iIndex,iAttrVal)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Application(CATIAApplication *& oApplication) \
{ \
return (ENVTIECALL(CATIAActivityAttributes,ENVTIETypeLetter,ENVTIELetter)get_Application(oApplication)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Parent(CATBaseDispatch *& oParent) \
{ \
return (ENVTIECALL(CATIAActivityAttributes,ENVTIETypeLetter,ENVTIELetter)get_Parent(oParent)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Name(CATBSTR & oNameBSTR) \
{ \
return (ENVTIECALL(CATIAActivityAttributes,ENVTIETypeLetter,ENVTIELetter)get_Name(oNameBSTR)); \
} \
HRESULT  __stdcall  ENVTIEName::put_Name(const CATBSTR & iNameBSTR) \
{ \
return (ENVTIECALL(CATIAActivityAttributes,ENVTIETypeLetter,ENVTIELetter)put_Name(iNameBSTR)); \
} \
HRESULT  __stdcall  ENVTIEName::GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj) \
{ \
return (ENVTIECALL(CATIAActivityAttributes,ENVTIETypeLetter,ENVTIELetter)GetItem(IDName,RealObj)); \
} \


/* Name of the TIE class */
#define class_TIE_CATIAActivityAttributes(classe)    TIECATIAActivityAttributes##classe


/* Common methods inside a TIE */
#define common_TIE_CATIAActivityAttributes(classe) \
 \
 \
/* Static initialization */ \
CATDefineCommonTIEMembers(CATIAActivityAttributes, classe) \
 \
 \
CATImplementTIEMethods(CATIAActivityAttributes, classe) \
CATImplementIUnknownMethodsForCATBaseUnknownTIE(CATIAActivityAttributes, classe, 2) \
CATImplementIDispatchMethodsForCATBaseUnknownTIE(CATIAActivityAttributes, classe) \
CATImplementCATBaseUnknownMethodsForTIE(CATIAActivityAttributes, classe) \
 \
HRESULT __stdcall  TIECATIAActivityAttributes##classe::get_AttrCount(CATLONG & oNbAttr) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,1,&_Trac2,&oNbAttr); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_AttrCount(oNbAttr); \
   ExitAfterCall(this,1,_Trac2,&_ret_arg,&oNbAttr); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAActivityAttributes##classe::GetAttrValue(const CATVariant & iIndex, CATVariant & oAttVal) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,2,&_Trac2,&iIndex,&oAttVal); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetAttrValue(iIndex,oAttVal); \
   ExitAfterCall(this,2,_Trac2,&_ret_arg,&iIndex,&oAttVal); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAActivityAttributes##classe::SetAttrValue(const CATVariant & iIndex, const CATVariant & iAttrVal) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,3,&_Trac2,&iIndex,&iAttrVal); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetAttrValue(iIndex,iAttrVal); \
   ExitAfterCall(this,3,_Trac2,&_ret_arg,&iIndex,&iAttrVal); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAActivityAttributes##classe::get_Application(CATIAApplication *& oApplication) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,4,&_Trac2,&oApplication); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Application(oApplication); \
   ExitAfterCall(this,4,_Trac2,&_ret_arg,&oApplication); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAActivityAttributes##classe::get_Parent(CATBaseDispatch *& oParent) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,5,&_Trac2,&oParent); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Parent(oParent); \
   ExitAfterCall(this,5,_Trac2,&_ret_arg,&oParent); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAActivityAttributes##classe::get_Name(CATBSTR & oNameBSTR) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,6,&_Trac2,&oNameBSTR); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Name(oNameBSTR); \
   ExitAfterCall(this,6,_Trac2,&_ret_arg,&oNameBSTR); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAActivityAttributes##classe::put_Name(const CATBSTR & iNameBSTR) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,7,&_Trac2,&iNameBSTR); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_Name(iNameBSTR); \
   ExitAfterCall(this,7,_Trac2,&_ret_arg,&iNameBSTR); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAActivityAttributes##classe::GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,8,&_Trac2,&IDName,&RealObj); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetItem(IDName,RealObj); \
   ExitAfterCall(this,8,_Trac2,&_ret_arg,&IDName,&RealObj); \
   return(_ret_arg); \
} \



/* Macro used to link an implementation with an interface */
#define TIE_CATIAActivityAttributes(classe) \
 \
 \
declare_TIE_CATIAActivityAttributes(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIAActivityAttributes##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIAActivityAttributes,"CATIAActivityAttributes",CATIAActivityAttributes::MetaObject(),classe::MetaObject(),TIE); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIAActivityAttributes(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIECreation(CATIAActivityAttributes, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIAActivityAttributes##classe(classe::MetaObject(),CATIAActivityAttributes::MetaObject(),(void *)CreateTIECATIAActivityAttributes##classe)



/* Macro used to link an implementation with an interface */
/* This TIE is chained on the implementation object */
#define TIEchain_CATIAActivityAttributes(classe) \
 \
 \
declare_TIE_CATIAActivityAttributes(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIAActivityAttributes##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIAActivityAttributes,"CATIAActivityAttributes",CATIAActivityAttributes::MetaObject(),classe::MetaObject(),TIEchain); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIAActivityAttributes(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIEchainCreation(CATIAActivityAttributes, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIAActivityAttributes##classe(classe::MetaObject(),CATIAActivityAttributes::MetaObject(),(void *)CreateTIECATIAActivityAttributes##classe)


/* Macro to switch between BOA and TIE at build time */ 
#ifdef CATSYS_BOA_IS_TIE
#define BOA_CATIAActivityAttributes(classe) TIE_CATIAActivityAttributes(classe)
#else
#define BOA_CATIAActivityAttributes(classe) CATImplementBOA(CATIAActivityAttributes, classe)
#endif

#endif
