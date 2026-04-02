#ifndef __TIE_CATIAFunctMultiRepMgr
#define __TIE_CATIAFunctMultiRepMgr

#include <string.h>
#include "CATBaseUnknown.h"
#include "CATMetaClass.h"
#include "CATMacForTie.h"
#include "CATExitJournal.h"
#include "CATIAFunctMultiRepMgr.h"
#include "JS0DSPA.h"


#ifdef _WINDOWS_SOURCE
#define Exported __declspec(dllexport)
#define Imported __declspec(dllimport)
#else
#define Exported 
#define Imported 
#endif


/* To link an implementation with the interface CATIAFunctMultiRepMgr */
#define declare_TIE_CATIAFunctMultiRepMgr(classe) \
 \
 \
class TIECATIAFunctMultiRepMgr##classe : public CATIAFunctMultiRepMgr \
{ \
   private: \
      CATDeclareCommonTIEMembers \
   public: \
      CATDeclareTIEMethods(CATIAFunctMultiRepMgr, classe) \
      CATDeclareIUnknownMethodsForCATBaseUnknownTIE \
      CATDeclareIDispatchMethodsForCATBaseUnknownTIE \
      CATDeclareCATBaseUnknownMethodsForTIE \
      virtual HRESULT __stdcall get_CurrentAssoc(CATLONG & oCurrentAssoc); \
      virtual HRESULT __stdcall put_CurrentAssoc(CATLONG iCurrentAssoc); \
      virtual HRESULT __stdcall get_Associations(CATIAFunctAssociations *& oAssociations); \
      virtual HRESULT __stdcall Init(); \
      virtual HRESULT __stdcall Free(); \
      virtual HRESULT __stdcall get_FunctionalElement(CATIAFunctionalElement *& oElem); \
      virtual HRESULT  __stdcall get_Application(CATIAApplication *& oApplication); \
      virtual HRESULT  __stdcall get_Parent(CATBaseDispatch *& oParent); \
      virtual HRESULT  __stdcall get_Name(CATBSTR & oNameBSTR); \
      virtual HRESULT  __stdcall put_Name(const CATBSTR & iNameBSTR); \
      virtual HRESULT  __stdcall GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj); \
};



#define ENVTIEdeclare_CATIAFunctMultiRepMgr(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
virtual HRESULT __stdcall get_CurrentAssoc(CATLONG & oCurrentAssoc); \
virtual HRESULT __stdcall put_CurrentAssoc(CATLONG iCurrentAssoc); \
virtual HRESULT __stdcall get_Associations(CATIAFunctAssociations *& oAssociations); \
virtual HRESULT __stdcall Init(); \
virtual HRESULT __stdcall Free(); \
virtual HRESULT __stdcall get_FunctionalElement(CATIAFunctionalElement *& oElem); \
virtual HRESULT  __stdcall get_Application(CATIAApplication *& oApplication); \
virtual HRESULT  __stdcall get_Parent(CATBaseDispatch *& oParent); \
virtual HRESULT  __stdcall get_Name(CATBSTR & oNameBSTR); \
virtual HRESULT  __stdcall put_Name(const CATBSTR & iNameBSTR); \
virtual HRESULT  __stdcall GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj); \


#define ENVTIEdefine_CATIAFunctMultiRepMgr(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
HRESULT __stdcall  ENVTIEName::get_CurrentAssoc(CATLONG & oCurrentAssoc) \
{ \
return (ENVTIECALL(CATIAFunctMultiRepMgr,ENVTIETypeLetter,ENVTIELetter)get_CurrentAssoc(oCurrentAssoc)); \
} \
HRESULT __stdcall  ENVTIEName::put_CurrentAssoc(CATLONG iCurrentAssoc) \
{ \
return (ENVTIECALL(CATIAFunctMultiRepMgr,ENVTIETypeLetter,ENVTIELetter)put_CurrentAssoc(iCurrentAssoc)); \
} \
HRESULT __stdcall  ENVTIEName::get_Associations(CATIAFunctAssociations *& oAssociations) \
{ \
return (ENVTIECALL(CATIAFunctMultiRepMgr,ENVTIETypeLetter,ENVTIELetter)get_Associations(oAssociations)); \
} \
HRESULT __stdcall  ENVTIEName::Init() \
{ \
return (ENVTIECALL(CATIAFunctMultiRepMgr,ENVTIETypeLetter,ENVTIELetter)Init()); \
} \
HRESULT __stdcall  ENVTIEName::Free() \
{ \
return (ENVTIECALL(CATIAFunctMultiRepMgr,ENVTIETypeLetter,ENVTIELetter)Free()); \
} \
HRESULT __stdcall  ENVTIEName::get_FunctionalElement(CATIAFunctionalElement *& oElem) \
{ \
return (ENVTIECALL(CATIAFunctMultiRepMgr,ENVTIETypeLetter,ENVTIELetter)get_FunctionalElement(oElem)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Application(CATIAApplication *& oApplication) \
{ \
return (ENVTIECALL(CATIAFunctMultiRepMgr,ENVTIETypeLetter,ENVTIELetter)get_Application(oApplication)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Parent(CATBaseDispatch *& oParent) \
{ \
return (ENVTIECALL(CATIAFunctMultiRepMgr,ENVTIETypeLetter,ENVTIELetter)get_Parent(oParent)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Name(CATBSTR & oNameBSTR) \
{ \
return (ENVTIECALL(CATIAFunctMultiRepMgr,ENVTIETypeLetter,ENVTIELetter)get_Name(oNameBSTR)); \
} \
HRESULT  __stdcall  ENVTIEName::put_Name(const CATBSTR & iNameBSTR) \
{ \
return (ENVTIECALL(CATIAFunctMultiRepMgr,ENVTIETypeLetter,ENVTIELetter)put_Name(iNameBSTR)); \
} \
HRESULT  __stdcall  ENVTIEName::GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj) \
{ \
return (ENVTIECALL(CATIAFunctMultiRepMgr,ENVTIETypeLetter,ENVTIELetter)GetItem(IDName,RealObj)); \
} \


/* Name of the TIE class */
#define class_TIE_CATIAFunctMultiRepMgr(classe)    TIECATIAFunctMultiRepMgr##classe


/* Common methods inside a TIE */
#define common_TIE_CATIAFunctMultiRepMgr(classe) \
 \
 \
/* Static initialization */ \
CATDefineCommonTIEMembers(CATIAFunctMultiRepMgr, classe) \
 \
 \
CATImplementTIEMethods(CATIAFunctMultiRepMgr, classe) \
CATImplementIUnknownMethodsForCATBaseUnknownTIE(CATIAFunctMultiRepMgr, classe, 2) \
CATImplementIDispatchMethodsForCATBaseUnknownTIE(CATIAFunctMultiRepMgr, classe) \
CATImplementCATBaseUnknownMethodsForTIE(CATIAFunctMultiRepMgr, classe) \
 \
HRESULT __stdcall  TIECATIAFunctMultiRepMgr##classe::get_CurrentAssoc(CATLONG & oCurrentAssoc) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,1,&_Trac2,&oCurrentAssoc); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_CurrentAssoc(oCurrentAssoc); \
   ExitAfterCall(this,1,_Trac2,&_ret_arg,&oCurrentAssoc); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAFunctMultiRepMgr##classe::put_CurrentAssoc(CATLONG iCurrentAssoc) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,2,&_Trac2,&iCurrentAssoc); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_CurrentAssoc(iCurrentAssoc); \
   ExitAfterCall(this,2,_Trac2,&_ret_arg,&iCurrentAssoc); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAFunctMultiRepMgr##classe::get_Associations(CATIAFunctAssociations *& oAssociations) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,3,&_Trac2,&oAssociations); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Associations(oAssociations); \
   ExitAfterCall(this,3,_Trac2,&_ret_arg,&oAssociations); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAFunctMultiRepMgr##classe::Init() \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,4,&_Trac2); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->Init(); \
   ExitAfterCall(this,4,_Trac2,&_ret_arg); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAFunctMultiRepMgr##classe::Free() \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,5,&_Trac2); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->Free(); \
   ExitAfterCall(this,5,_Trac2,&_ret_arg); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAFunctMultiRepMgr##classe::get_FunctionalElement(CATIAFunctionalElement *& oElem) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,6,&_Trac2,&oElem); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_FunctionalElement(oElem); \
   ExitAfterCall(this,6,_Trac2,&_ret_arg,&oElem); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAFunctMultiRepMgr##classe::get_Application(CATIAApplication *& oApplication) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,7,&_Trac2,&oApplication); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Application(oApplication); \
   ExitAfterCall(this,7,_Trac2,&_ret_arg,&oApplication); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAFunctMultiRepMgr##classe::get_Parent(CATBaseDispatch *& oParent) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,8,&_Trac2,&oParent); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Parent(oParent); \
   ExitAfterCall(this,8,_Trac2,&_ret_arg,&oParent); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAFunctMultiRepMgr##classe::get_Name(CATBSTR & oNameBSTR) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,9,&_Trac2,&oNameBSTR); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Name(oNameBSTR); \
   ExitAfterCall(this,9,_Trac2,&_ret_arg,&oNameBSTR); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAFunctMultiRepMgr##classe::put_Name(const CATBSTR & iNameBSTR) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,10,&_Trac2,&iNameBSTR); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_Name(iNameBSTR); \
   ExitAfterCall(this,10,_Trac2,&_ret_arg,&iNameBSTR); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAFunctMultiRepMgr##classe::GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,11,&_Trac2,&IDName,&RealObj); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetItem(IDName,RealObj); \
   ExitAfterCall(this,11,_Trac2,&_ret_arg,&IDName,&RealObj); \
   return(_ret_arg); \
} \



/* Macro used to link an implementation with an interface */
#define TIE_CATIAFunctMultiRepMgr(classe) \
 \
 \
declare_TIE_CATIAFunctMultiRepMgr(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIAFunctMultiRepMgr##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIAFunctMultiRepMgr,"CATIAFunctMultiRepMgr",CATIAFunctMultiRepMgr::MetaObject(),classe::MetaObject(),TIE); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIAFunctMultiRepMgr(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIECreation(CATIAFunctMultiRepMgr, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIAFunctMultiRepMgr##classe(classe::MetaObject(),CATIAFunctMultiRepMgr::MetaObject(),(void *)CreateTIECATIAFunctMultiRepMgr##classe)



/* Macro used to link an implementation with an interface */
/* This TIE is chained on the implementation object */
#define TIEchain_CATIAFunctMultiRepMgr(classe) \
 \
 \
declare_TIE_CATIAFunctMultiRepMgr(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIAFunctMultiRepMgr##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIAFunctMultiRepMgr,"CATIAFunctMultiRepMgr",CATIAFunctMultiRepMgr::MetaObject(),classe::MetaObject(),TIEchain); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIAFunctMultiRepMgr(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIEchainCreation(CATIAFunctMultiRepMgr, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIAFunctMultiRepMgr##classe(classe::MetaObject(),CATIAFunctMultiRepMgr::MetaObject(),(void *)CreateTIECATIAFunctMultiRepMgr##classe)


/* Macro to switch between BOA and TIE at build time */ 
#ifdef CATSYS_BOA_IS_TIE
#define BOA_CATIAFunctMultiRepMgr(classe) TIE_CATIAFunctMultiRepMgr(classe)
#else
#define BOA_CATIAFunctMultiRepMgr(classe) CATImplementBOA(CATIAFunctMultiRepMgr, classe)
#endif

#endif
