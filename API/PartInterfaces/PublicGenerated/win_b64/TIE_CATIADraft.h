#ifndef __TIE_CATIADraft
#define __TIE_CATIADraft

#include <string.h>
#include "CATBaseUnknown.h"
#include "CATMetaClass.h"
#include "CATMacForTie.h"
#include "CATExitJournal.h"
#include "CATIADraft.h"
#include "JS0DSPA.h"


#ifdef _WINDOWS_SOURCE
#define Exported __declspec(dllexport)
#define Imported __declspec(dllimport)
#else
#define Exported 
#define Imported 
#endif


/* To link an implementation with the interface CATIADraft */
#define declare_TIE_CATIADraft(classe) \
 \
 \
class TIECATIADraft##classe : public CATIADraft \
{ \
   private: \
      CATDeclareCommonTIEMembers \
   public: \
      CATDeclareTIEMethods(CATIADraft, classe) \
      CATDeclareIUnknownMethodsForCATBaseUnknownTIE \
      CATDeclareIDispatchMethodsForCATBaseUnknownTIE \
      CATDeclareCATBaseUnknownMethodsForTIE \
      virtual HRESULT __stdcall get_Mode(CatDraftMode & oMode); \
      virtual HRESULT __stdcall put_Mode(CatDraftMode iMode); \
      virtual HRESULT __stdcall get_PartingElement(CATIAReference *& oPartingElement); \
      virtual HRESULT __stdcall put_PartingElement(CATIAReference * iPartingElement); \
      virtual HRESULT __stdcall get_DraftDomains(CATIADraftDomains *& oDraftDomains); \
      virtual HRESULT  __stdcall get_Application(CATIAApplication *& oApplication); \
      virtual HRESULT  __stdcall get_Parent(CATBaseDispatch *& oParent); \
      virtual HRESULT  __stdcall get_Name(CATBSTR & oNameBSTR); \
      virtual HRESULT  __stdcall put_Name(const CATBSTR & iNameBSTR); \
      virtual HRESULT  __stdcall GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj); \
};



#define ENVTIEdeclare_CATIADraft(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
virtual HRESULT __stdcall get_Mode(CatDraftMode & oMode); \
virtual HRESULT __stdcall put_Mode(CatDraftMode iMode); \
virtual HRESULT __stdcall get_PartingElement(CATIAReference *& oPartingElement); \
virtual HRESULT __stdcall put_PartingElement(CATIAReference * iPartingElement); \
virtual HRESULT __stdcall get_DraftDomains(CATIADraftDomains *& oDraftDomains); \
virtual HRESULT  __stdcall get_Application(CATIAApplication *& oApplication); \
virtual HRESULT  __stdcall get_Parent(CATBaseDispatch *& oParent); \
virtual HRESULT  __stdcall get_Name(CATBSTR & oNameBSTR); \
virtual HRESULT  __stdcall put_Name(const CATBSTR & iNameBSTR); \
virtual HRESULT  __stdcall GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj); \


#define ENVTIEdefine_CATIADraft(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
HRESULT __stdcall  ENVTIEName::get_Mode(CatDraftMode & oMode) \
{ \
return (ENVTIECALL(CATIADraft,ENVTIETypeLetter,ENVTIELetter)get_Mode(oMode)); \
} \
HRESULT __stdcall  ENVTIEName::put_Mode(CatDraftMode iMode) \
{ \
return (ENVTIECALL(CATIADraft,ENVTIETypeLetter,ENVTIELetter)put_Mode(iMode)); \
} \
HRESULT __stdcall  ENVTIEName::get_PartingElement(CATIAReference *& oPartingElement) \
{ \
return (ENVTIECALL(CATIADraft,ENVTIETypeLetter,ENVTIELetter)get_PartingElement(oPartingElement)); \
} \
HRESULT __stdcall  ENVTIEName::put_PartingElement(CATIAReference * iPartingElement) \
{ \
return (ENVTIECALL(CATIADraft,ENVTIETypeLetter,ENVTIELetter)put_PartingElement(iPartingElement)); \
} \
HRESULT __stdcall  ENVTIEName::get_DraftDomains(CATIADraftDomains *& oDraftDomains) \
{ \
return (ENVTIECALL(CATIADraft,ENVTIETypeLetter,ENVTIELetter)get_DraftDomains(oDraftDomains)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Application(CATIAApplication *& oApplication) \
{ \
return (ENVTIECALL(CATIADraft,ENVTIETypeLetter,ENVTIELetter)get_Application(oApplication)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Parent(CATBaseDispatch *& oParent) \
{ \
return (ENVTIECALL(CATIADraft,ENVTIETypeLetter,ENVTIELetter)get_Parent(oParent)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Name(CATBSTR & oNameBSTR) \
{ \
return (ENVTIECALL(CATIADraft,ENVTIETypeLetter,ENVTIELetter)get_Name(oNameBSTR)); \
} \
HRESULT  __stdcall  ENVTIEName::put_Name(const CATBSTR & iNameBSTR) \
{ \
return (ENVTIECALL(CATIADraft,ENVTIETypeLetter,ENVTIELetter)put_Name(iNameBSTR)); \
} \
HRESULT  __stdcall  ENVTIEName::GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj) \
{ \
return (ENVTIECALL(CATIADraft,ENVTIETypeLetter,ENVTIELetter)GetItem(IDName,RealObj)); \
} \


/* Name of the TIE class */
#define class_TIE_CATIADraft(classe)    TIECATIADraft##classe


/* Common methods inside a TIE */
#define common_TIE_CATIADraft(classe) \
 \
 \
/* Static initialization */ \
CATDefineCommonTIEMembers(CATIADraft, classe) \
 \
 \
CATImplementTIEMethods(CATIADraft, classe) \
CATImplementIUnknownMethodsForCATBaseUnknownTIE(CATIADraft, classe, 2) \
CATImplementIDispatchMethodsForCATBaseUnknownTIE(CATIADraft, classe) \
CATImplementCATBaseUnknownMethodsForTIE(CATIADraft, classe) \
 \
HRESULT __stdcall  TIECATIADraft##classe::get_Mode(CatDraftMode & oMode) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,1,&_Trac2,&oMode); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Mode(oMode); \
   ExitAfterCall(this,1,_Trac2,&_ret_arg,&oMode); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIADraft##classe::put_Mode(CatDraftMode iMode) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,2,&_Trac2,&iMode); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_Mode(iMode); \
   ExitAfterCall(this,2,_Trac2,&_ret_arg,&iMode); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIADraft##classe::get_PartingElement(CATIAReference *& oPartingElement) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,3,&_Trac2,&oPartingElement); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_PartingElement(oPartingElement); \
   ExitAfterCall(this,3,_Trac2,&_ret_arg,&oPartingElement); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIADraft##classe::put_PartingElement(CATIAReference * iPartingElement) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,4,&_Trac2,&iPartingElement); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_PartingElement(iPartingElement); \
   ExitAfterCall(this,4,_Trac2,&_ret_arg,&iPartingElement); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIADraft##classe::get_DraftDomains(CATIADraftDomains *& oDraftDomains) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,5,&_Trac2,&oDraftDomains); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_DraftDomains(oDraftDomains); \
   ExitAfterCall(this,5,_Trac2,&_ret_arg,&oDraftDomains); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIADraft##classe::get_Application(CATIAApplication *& oApplication) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,6,&_Trac2,&oApplication); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Application(oApplication); \
   ExitAfterCall(this,6,_Trac2,&_ret_arg,&oApplication); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIADraft##classe::get_Parent(CATBaseDispatch *& oParent) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,7,&_Trac2,&oParent); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Parent(oParent); \
   ExitAfterCall(this,7,_Trac2,&_ret_arg,&oParent); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIADraft##classe::get_Name(CATBSTR & oNameBSTR) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,8,&_Trac2,&oNameBSTR); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Name(oNameBSTR); \
   ExitAfterCall(this,8,_Trac2,&_ret_arg,&oNameBSTR); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIADraft##classe::put_Name(const CATBSTR & iNameBSTR) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,9,&_Trac2,&iNameBSTR); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_Name(iNameBSTR); \
   ExitAfterCall(this,9,_Trac2,&_ret_arg,&iNameBSTR); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIADraft##classe::GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,10,&_Trac2,&IDName,&RealObj); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetItem(IDName,RealObj); \
   ExitAfterCall(this,10,_Trac2,&_ret_arg,&IDName,&RealObj); \
   return(_ret_arg); \
} \



/* Macro used to link an implementation with an interface */
#define TIE_CATIADraft(classe) \
 \
 \
declare_TIE_CATIADraft(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIADraft##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIADraft,"CATIADraft",CATIADraft::MetaObject(),classe::MetaObject(),TIE); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIADraft(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIECreation(CATIADraft, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIADraft##classe(classe::MetaObject(),CATIADraft::MetaObject(),(void *)CreateTIECATIADraft##classe)



/* Macro used to link an implementation with an interface */
/* This TIE is chained on the implementation object */
#define TIEchain_CATIADraft(classe) \
 \
 \
declare_TIE_CATIADraft(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIADraft##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIADraft,"CATIADraft",CATIADraft::MetaObject(),classe::MetaObject(),TIEchain); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIADraft(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIEchainCreation(CATIADraft, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIADraft##classe(classe::MetaObject(),CATIADraft::MetaObject(),(void *)CreateTIECATIADraft##classe)


/* Macro to switch between BOA and TIE at build time */ 
#ifdef CATSYS_BOA_IS_TIE
#define BOA_CATIADraft(classe) TIE_CATIADraft(classe)
#else
#define BOA_CATIADraft(classe) CATImplementBOA(CATIADraft, classe)
#endif

#endif
