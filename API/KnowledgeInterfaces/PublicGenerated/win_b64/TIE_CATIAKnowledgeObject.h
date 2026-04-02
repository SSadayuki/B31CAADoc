#ifndef __TIE_CATIAKnowledgeObject
#define __TIE_CATIAKnowledgeObject

#include <string.h>
#include "CATBaseUnknown.h"
#include "CATMetaClass.h"
#include "CATMacForTie.h"
#include "CATExitJournal.h"
#include "CATIAKnowledgeObject.h"
#include "JS0DSPA.h"


#ifdef _WINDOWS_SOURCE
#define Exported __declspec(dllexport)
#define Imported __declspec(dllimport)
#else
#define Exported 
#define Imported 
#endif


/* To link an implementation with the interface CATIAKnowledgeObject */
#define declare_TIE_CATIAKnowledgeObject(classe) \
 \
 \
class TIECATIAKnowledgeObject##classe : public CATIAKnowledgeObject \
{ \
   private: \
      CATDeclareCommonTIEMembers \
   public: \
      CATDeclareTIEMethods(CATIAKnowledgeObject, classe) \
      CATDeclareIUnknownMethodsForCATBaseUnknownTIE \
      CATDeclareIDispatchMethodsForCATBaseUnknownTIE \
      CATDeclareCATBaseUnknownMethodsForTIE \
      virtual HRESULT __stdcall get_Hidden(CAT_VARIANT_BOOL & oHidden); \
      virtual HRESULT __stdcall put_Hidden(CAT_VARIANT_BOOL iHidden); \
      virtual HRESULT __stdcall get_IsConst(CAT_VARIANT_BOOL & oIsConst); \
      virtual HRESULT __stdcall put_IsConst(CAT_VARIANT_BOOL iIsConst); \
      virtual HRESULT  __stdcall get_Application(CATIAApplication *& oApplication); \
      virtual HRESULT  __stdcall get_Parent(CATBaseDispatch *& oParent); \
      virtual HRESULT  __stdcall get_Name(CATBSTR & oNameBSTR); \
      virtual HRESULT  __stdcall put_Name(const CATBSTR & iNameBSTR); \
      virtual HRESULT  __stdcall GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj); \
};



#define ENVTIEdeclare_CATIAKnowledgeObject(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
virtual HRESULT __stdcall get_Hidden(CAT_VARIANT_BOOL & oHidden); \
virtual HRESULT __stdcall put_Hidden(CAT_VARIANT_BOOL iHidden); \
virtual HRESULT __stdcall get_IsConst(CAT_VARIANT_BOOL & oIsConst); \
virtual HRESULT __stdcall put_IsConst(CAT_VARIANT_BOOL iIsConst); \
virtual HRESULT  __stdcall get_Application(CATIAApplication *& oApplication); \
virtual HRESULT  __stdcall get_Parent(CATBaseDispatch *& oParent); \
virtual HRESULT  __stdcall get_Name(CATBSTR & oNameBSTR); \
virtual HRESULT  __stdcall put_Name(const CATBSTR & iNameBSTR); \
virtual HRESULT  __stdcall GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj); \


#define ENVTIEdefine_CATIAKnowledgeObject(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
HRESULT __stdcall  ENVTIEName::get_Hidden(CAT_VARIANT_BOOL & oHidden) \
{ \
return (ENVTIECALL(CATIAKnowledgeObject,ENVTIETypeLetter,ENVTIELetter)get_Hidden(oHidden)); \
} \
HRESULT __stdcall  ENVTIEName::put_Hidden(CAT_VARIANT_BOOL iHidden) \
{ \
return (ENVTIECALL(CATIAKnowledgeObject,ENVTIETypeLetter,ENVTIELetter)put_Hidden(iHidden)); \
} \
HRESULT __stdcall  ENVTIEName::get_IsConst(CAT_VARIANT_BOOL & oIsConst) \
{ \
return (ENVTIECALL(CATIAKnowledgeObject,ENVTIETypeLetter,ENVTIELetter)get_IsConst(oIsConst)); \
} \
HRESULT __stdcall  ENVTIEName::put_IsConst(CAT_VARIANT_BOOL iIsConst) \
{ \
return (ENVTIECALL(CATIAKnowledgeObject,ENVTIETypeLetter,ENVTIELetter)put_IsConst(iIsConst)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Application(CATIAApplication *& oApplication) \
{ \
return (ENVTIECALL(CATIAKnowledgeObject,ENVTIETypeLetter,ENVTIELetter)get_Application(oApplication)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Parent(CATBaseDispatch *& oParent) \
{ \
return (ENVTIECALL(CATIAKnowledgeObject,ENVTIETypeLetter,ENVTIELetter)get_Parent(oParent)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Name(CATBSTR & oNameBSTR) \
{ \
return (ENVTIECALL(CATIAKnowledgeObject,ENVTIETypeLetter,ENVTIELetter)get_Name(oNameBSTR)); \
} \
HRESULT  __stdcall  ENVTIEName::put_Name(const CATBSTR & iNameBSTR) \
{ \
return (ENVTIECALL(CATIAKnowledgeObject,ENVTIETypeLetter,ENVTIELetter)put_Name(iNameBSTR)); \
} \
HRESULT  __stdcall  ENVTIEName::GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj) \
{ \
return (ENVTIECALL(CATIAKnowledgeObject,ENVTIETypeLetter,ENVTIELetter)GetItem(IDName,RealObj)); \
} \


/* Name of the TIE class */
#define class_TIE_CATIAKnowledgeObject(classe)    TIECATIAKnowledgeObject##classe


/* Common methods inside a TIE */
#define common_TIE_CATIAKnowledgeObject(classe) \
 \
 \
/* Static initialization */ \
CATDefineCommonTIEMembers(CATIAKnowledgeObject, classe) \
 \
 \
CATImplementTIEMethods(CATIAKnowledgeObject, classe) \
CATImplementIUnknownMethodsForCATBaseUnknownTIE(CATIAKnowledgeObject, classe, 2) \
CATImplementIDispatchMethodsForCATBaseUnknownTIE(CATIAKnowledgeObject, classe) \
CATImplementCATBaseUnknownMethodsForTIE(CATIAKnowledgeObject, classe) \
 \
HRESULT __stdcall  TIECATIAKnowledgeObject##classe::get_Hidden(CAT_VARIANT_BOOL & oHidden) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,1,&_Trac2,&oHidden); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Hidden(oHidden); \
   ExitAfterCall(this,1,_Trac2,&_ret_arg,&oHidden); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAKnowledgeObject##classe::put_Hidden(CAT_VARIANT_BOOL iHidden) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,2,&_Trac2,&iHidden); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_Hidden(iHidden); \
   ExitAfterCall(this,2,_Trac2,&_ret_arg,&iHidden); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAKnowledgeObject##classe::get_IsConst(CAT_VARIANT_BOOL & oIsConst) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,3,&_Trac2,&oIsConst); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_IsConst(oIsConst); \
   ExitAfterCall(this,3,_Trac2,&_ret_arg,&oIsConst); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAKnowledgeObject##classe::put_IsConst(CAT_VARIANT_BOOL iIsConst) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,4,&_Trac2,&iIsConst); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_IsConst(iIsConst); \
   ExitAfterCall(this,4,_Trac2,&_ret_arg,&iIsConst); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAKnowledgeObject##classe::get_Application(CATIAApplication *& oApplication) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,5,&_Trac2,&oApplication); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Application(oApplication); \
   ExitAfterCall(this,5,_Trac2,&_ret_arg,&oApplication); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAKnowledgeObject##classe::get_Parent(CATBaseDispatch *& oParent) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,6,&_Trac2,&oParent); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Parent(oParent); \
   ExitAfterCall(this,6,_Trac2,&_ret_arg,&oParent); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAKnowledgeObject##classe::get_Name(CATBSTR & oNameBSTR) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,7,&_Trac2,&oNameBSTR); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Name(oNameBSTR); \
   ExitAfterCall(this,7,_Trac2,&_ret_arg,&oNameBSTR); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAKnowledgeObject##classe::put_Name(const CATBSTR & iNameBSTR) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,8,&_Trac2,&iNameBSTR); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_Name(iNameBSTR); \
   ExitAfterCall(this,8,_Trac2,&_ret_arg,&iNameBSTR); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAKnowledgeObject##classe::GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,9,&_Trac2,&IDName,&RealObj); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetItem(IDName,RealObj); \
   ExitAfterCall(this,9,_Trac2,&_ret_arg,&IDName,&RealObj); \
   return(_ret_arg); \
} \



/* Macro used to link an implementation with an interface */
#define TIE_CATIAKnowledgeObject(classe) \
 \
 \
declare_TIE_CATIAKnowledgeObject(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIAKnowledgeObject##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIAKnowledgeObject,"CATIAKnowledgeObject",CATIAKnowledgeObject::MetaObject(),classe::MetaObject(),TIE); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIAKnowledgeObject(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIECreation(CATIAKnowledgeObject, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIAKnowledgeObject##classe(classe::MetaObject(),CATIAKnowledgeObject::MetaObject(),(void *)CreateTIECATIAKnowledgeObject##classe)



/* Macro used to link an implementation with an interface */
/* This TIE is chained on the implementation object */
#define TIEchain_CATIAKnowledgeObject(classe) \
 \
 \
declare_TIE_CATIAKnowledgeObject(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIAKnowledgeObject##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIAKnowledgeObject,"CATIAKnowledgeObject",CATIAKnowledgeObject::MetaObject(),classe::MetaObject(),TIEchain); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIAKnowledgeObject(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIEchainCreation(CATIAKnowledgeObject, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIAKnowledgeObject##classe(classe::MetaObject(),CATIAKnowledgeObject::MetaObject(),(void *)CreateTIECATIAKnowledgeObject##classe)


/* Macro to switch between BOA and TIE at build time */ 
#ifdef CATSYS_BOA_IS_TIE
#define BOA_CATIAKnowledgeObject(classe) TIE_CATIAKnowledgeObject(classe)
#else
#define BOA_CATIAKnowledgeObject(classe) CATImplementBOA(CATIAKnowledgeObject, classe)
#endif

#endif
