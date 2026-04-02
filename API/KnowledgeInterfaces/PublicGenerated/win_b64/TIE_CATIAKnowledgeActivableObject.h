#ifndef __TIE_CATIAKnowledgeActivableObject
#define __TIE_CATIAKnowledgeActivableObject

#include <string.h>
#include "CATBaseUnknown.h"
#include "CATMetaClass.h"
#include "CATMacForTie.h"
#include "CATExitJournal.h"
#include "CATIAKnowledgeActivableObject.h"
#include "JS0DSPA.h"


#ifdef _WINDOWS_SOURCE
#define Exported __declspec(dllexport)
#define Imported __declspec(dllimport)
#else
#define Exported 
#define Imported 
#endif


/* To link an implementation with the interface CATIAKnowledgeActivableObject */
#define declare_TIE_CATIAKnowledgeActivableObject(classe) \
 \
 \
class TIECATIAKnowledgeActivableObject##classe : public CATIAKnowledgeActivableObject \
{ \
   private: \
      CATDeclareCommonTIEMembers \
   public: \
      CATDeclareTIEMethods(CATIAKnowledgeActivableObject, classe) \
      CATDeclareIUnknownMethodsForCATBaseUnknownTIE \
      CATDeclareIDispatchMethodsForCATBaseUnknownTIE \
      CATDeclareCATBaseUnknownMethodsForTIE \
      virtual HRESULT __stdcall get_Activated(CAT_VARIANT_BOOL & oActivated); \
      virtual HRESULT __stdcall Activate(); \
      virtual HRESULT __stdcall Deactivate(); \
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



#define ENVTIEdeclare_CATIAKnowledgeActivableObject(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
virtual HRESULT __stdcall get_Activated(CAT_VARIANT_BOOL & oActivated); \
virtual HRESULT __stdcall Activate(); \
virtual HRESULT __stdcall Deactivate(); \
virtual HRESULT __stdcall get_Hidden(CAT_VARIANT_BOOL & oHidden); \
virtual HRESULT __stdcall put_Hidden(CAT_VARIANT_BOOL iHidden); \
virtual HRESULT __stdcall get_IsConst(CAT_VARIANT_BOOL & oIsConst); \
virtual HRESULT __stdcall put_IsConst(CAT_VARIANT_BOOL iIsConst); \
virtual HRESULT  __stdcall get_Application(CATIAApplication *& oApplication); \
virtual HRESULT  __stdcall get_Parent(CATBaseDispatch *& oParent); \
virtual HRESULT  __stdcall get_Name(CATBSTR & oNameBSTR); \
virtual HRESULT  __stdcall put_Name(const CATBSTR & iNameBSTR); \
virtual HRESULT  __stdcall GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj); \


#define ENVTIEdefine_CATIAKnowledgeActivableObject(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
HRESULT __stdcall  ENVTIEName::get_Activated(CAT_VARIANT_BOOL & oActivated) \
{ \
return (ENVTIECALL(CATIAKnowledgeActivableObject,ENVTIETypeLetter,ENVTIELetter)get_Activated(oActivated)); \
} \
HRESULT __stdcall  ENVTIEName::Activate() \
{ \
return (ENVTIECALL(CATIAKnowledgeActivableObject,ENVTIETypeLetter,ENVTIELetter)Activate()); \
} \
HRESULT __stdcall  ENVTIEName::Deactivate() \
{ \
return (ENVTIECALL(CATIAKnowledgeActivableObject,ENVTIETypeLetter,ENVTIELetter)Deactivate()); \
} \
HRESULT __stdcall  ENVTIEName::get_Hidden(CAT_VARIANT_BOOL & oHidden) \
{ \
return (ENVTIECALL(CATIAKnowledgeActivableObject,ENVTIETypeLetter,ENVTIELetter)get_Hidden(oHidden)); \
} \
HRESULT __stdcall  ENVTIEName::put_Hidden(CAT_VARIANT_BOOL iHidden) \
{ \
return (ENVTIECALL(CATIAKnowledgeActivableObject,ENVTIETypeLetter,ENVTIELetter)put_Hidden(iHidden)); \
} \
HRESULT __stdcall  ENVTIEName::get_IsConst(CAT_VARIANT_BOOL & oIsConst) \
{ \
return (ENVTIECALL(CATIAKnowledgeActivableObject,ENVTIETypeLetter,ENVTIELetter)get_IsConst(oIsConst)); \
} \
HRESULT __stdcall  ENVTIEName::put_IsConst(CAT_VARIANT_BOOL iIsConst) \
{ \
return (ENVTIECALL(CATIAKnowledgeActivableObject,ENVTIETypeLetter,ENVTIELetter)put_IsConst(iIsConst)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Application(CATIAApplication *& oApplication) \
{ \
return (ENVTIECALL(CATIAKnowledgeActivableObject,ENVTIETypeLetter,ENVTIELetter)get_Application(oApplication)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Parent(CATBaseDispatch *& oParent) \
{ \
return (ENVTIECALL(CATIAKnowledgeActivableObject,ENVTIETypeLetter,ENVTIELetter)get_Parent(oParent)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Name(CATBSTR & oNameBSTR) \
{ \
return (ENVTIECALL(CATIAKnowledgeActivableObject,ENVTIETypeLetter,ENVTIELetter)get_Name(oNameBSTR)); \
} \
HRESULT  __stdcall  ENVTIEName::put_Name(const CATBSTR & iNameBSTR) \
{ \
return (ENVTIECALL(CATIAKnowledgeActivableObject,ENVTIETypeLetter,ENVTIELetter)put_Name(iNameBSTR)); \
} \
HRESULT  __stdcall  ENVTIEName::GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj) \
{ \
return (ENVTIECALL(CATIAKnowledgeActivableObject,ENVTIETypeLetter,ENVTIELetter)GetItem(IDName,RealObj)); \
} \


/* Name of the TIE class */
#define class_TIE_CATIAKnowledgeActivableObject(classe)    TIECATIAKnowledgeActivableObject##classe


/* Common methods inside a TIE */
#define common_TIE_CATIAKnowledgeActivableObject(classe) \
 \
 \
/* Static initialization */ \
CATDefineCommonTIEMembers(CATIAKnowledgeActivableObject, classe) \
 \
 \
CATImplementTIEMethods(CATIAKnowledgeActivableObject, classe) \
CATImplementIUnknownMethodsForCATBaseUnknownTIE(CATIAKnowledgeActivableObject, classe, 2) \
CATImplementIDispatchMethodsForCATBaseUnknownTIE(CATIAKnowledgeActivableObject, classe) \
CATImplementCATBaseUnknownMethodsForTIE(CATIAKnowledgeActivableObject, classe) \
 \
HRESULT __stdcall  TIECATIAKnowledgeActivableObject##classe::get_Activated(CAT_VARIANT_BOOL & oActivated) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,1,&_Trac2,&oActivated); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Activated(oActivated); \
   ExitAfterCall(this,1,_Trac2,&_ret_arg,&oActivated); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAKnowledgeActivableObject##classe::Activate() \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,2,&_Trac2); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->Activate(); \
   ExitAfterCall(this,2,_Trac2,&_ret_arg); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAKnowledgeActivableObject##classe::Deactivate() \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,3,&_Trac2); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->Deactivate(); \
   ExitAfterCall(this,3,_Trac2,&_ret_arg); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAKnowledgeActivableObject##classe::get_Hidden(CAT_VARIANT_BOOL & oHidden) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,4,&_Trac2,&oHidden); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Hidden(oHidden); \
   ExitAfterCall(this,4,_Trac2,&_ret_arg,&oHidden); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAKnowledgeActivableObject##classe::put_Hidden(CAT_VARIANT_BOOL iHidden) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,5,&_Trac2,&iHidden); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_Hidden(iHidden); \
   ExitAfterCall(this,5,_Trac2,&_ret_arg,&iHidden); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAKnowledgeActivableObject##classe::get_IsConst(CAT_VARIANT_BOOL & oIsConst) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,6,&_Trac2,&oIsConst); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_IsConst(oIsConst); \
   ExitAfterCall(this,6,_Trac2,&_ret_arg,&oIsConst); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAKnowledgeActivableObject##classe::put_IsConst(CAT_VARIANT_BOOL iIsConst) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,7,&_Trac2,&iIsConst); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_IsConst(iIsConst); \
   ExitAfterCall(this,7,_Trac2,&_ret_arg,&iIsConst); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAKnowledgeActivableObject##classe::get_Application(CATIAApplication *& oApplication) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,8,&_Trac2,&oApplication); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Application(oApplication); \
   ExitAfterCall(this,8,_Trac2,&_ret_arg,&oApplication); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAKnowledgeActivableObject##classe::get_Parent(CATBaseDispatch *& oParent) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,9,&_Trac2,&oParent); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Parent(oParent); \
   ExitAfterCall(this,9,_Trac2,&_ret_arg,&oParent); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAKnowledgeActivableObject##classe::get_Name(CATBSTR & oNameBSTR) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,10,&_Trac2,&oNameBSTR); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Name(oNameBSTR); \
   ExitAfterCall(this,10,_Trac2,&_ret_arg,&oNameBSTR); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAKnowledgeActivableObject##classe::put_Name(const CATBSTR & iNameBSTR) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,11,&_Trac2,&iNameBSTR); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_Name(iNameBSTR); \
   ExitAfterCall(this,11,_Trac2,&_ret_arg,&iNameBSTR); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAKnowledgeActivableObject##classe::GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,12,&_Trac2,&IDName,&RealObj); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetItem(IDName,RealObj); \
   ExitAfterCall(this,12,_Trac2,&_ret_arg,&IDName,&RealObj); \
   return(_ret_arg); \
} \



/* Macro used to link an implementation with an interface */
#define TIE_CATIAKnowledgeActivableObject(classe) \
 \
 \
declare_TIE_CATIAKnowledgeActivableObject(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIAKnowledgeActivableObject##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIAKnowledgeActivableObject,"CATIAKnowledgeActivableObject",CATIAKnowledgeActivableObject::MetaObject(),classe::MetaObject(),TIE); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIAKnowledgeActivableObject(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIECreation(CATIAKnowledgeActivableObject, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIAKnowledgeActivableObject##classe(classe::MetaObject(),CATIAKnowledgeActivableObject::MetaObject(),(void *)CreateTIECATIAKnowledgeActivableObject##classe)



/* Macro used to link an implementation with an interface */
/* This TIE is chained on the implementation object */
#define TIEchain_CATIAKnowledgeActivableObject(classe) \
 \
 \
declare_TIE_CATIAKnowledgeActivableObject(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIAKnowledgeActivableObject##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIAKnowledgeActivableObject,"CATIAKnowledgeActivableObject",CATIAKnowledgeActivableObject::MetaObject(),classe::MetaObject(),TIEchain); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIAKnowledgeActivableObject(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIEchainCreation(CATIAKnowledgeActivableObject, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIAKnowledgeActivableObject##classe(classe::MetaObject(),CATIAKnowledgeActivableObject::MetaObject(),(void *)CreateTIECATIAKnowledgeActivableObject##classe)


/* Macro to switch between BOA and TIE at build time */ 
#ifdef CATSYS_BOA_IS_TIE
#define BOA_CATIAKnowledgeActivableObject(classe) TIE_CATIAKnowledgeActivableObject(classe)
#else
#define BOA_CATIAKnowledgeActivableObject(classe) CATImplementBOA(CATIAKnowledgeActivableObject, classe)
#endif

#endif
