#ifndef __TIE_CATIAFunctAssociation
#define __TIE_CATIAFunctAssociation

#include <string.h>
#include "CATBaseUnknown.h"
#include "CATMetaClass.h"
#include "CATMacForTie.h"
#include "CATExitJournal.h"
#include "CATIAFunctAssociation.h"
#include "JS0DSPA.h"


#ifdef _WINDOWS_SOURCE
#define Exported __declspec(dllexport)
#define Imported __declspec(dllimport)
#else
#define Exported 
#define Imported 
#endif


/* To link an implementation with the interface CATIAFunctAssociation */
#define declare_TIE_CATIAFunctAssociation(classe) \
 \
 \
class TIECATIAFunctAssociation##classe : public CATIAFunctAssociation \
{ \
   private: \
      CATDeclareCommonTIEMembers \
   public: \
      CATDeclareTIEMethods(CATIAFunctAssociation, classe) \
      CATDeclareIUnknownMethodsForCATBaseUnknownTIE \
      CATDeclareIDispatchMethodsForCATBaseUnknownTIE \
      CATDeclareCATBaseUnknownMethodsForTIE \
      virtual HRESULT __stdcall LinkTo(CATIABase * iLinked, const CATBSTR & iKind); \
      virtual HRESULT __stdcall DetachFrom(CATIABase * iLinked); \
      virtual HRESULT __stdcall RetrieveLinked(const CATVariant & iIndex, CATIABase *& oLinked); \
      virtual HRESULT __stdcall RetrieveKindOfLinked(const CATVariant & iIndex, CATBSTR & oKind); \
      virtual HRESULT __stdcall get_LinkedCount(CATLONG & oCount); \
      virtual HRESULT  __stdcall get_Application(CATIAApplication *& oApplication); \
      virtual HRESULT  __stdcall get_Parent(CATBaseDispatch *& oParent); \
      virtual HRESULT  __stdcall get_Name(CATBSTR & oNameBSTR); \
      virtual HRESULT  __stdcall put_Name(const CATBSTR & iNameBSTR); \
      virtual HRESULT  __stdcall GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj); \
};



#define ENVTIEdeclare_CATIAFunctAssociation(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
virtual HRESULT __stdcall LinkTo(CATIABase * iLinked, const CATBSTR & iKind); \
virtual HRESULT __stdcall DetachFrom(CATIABase * iLinked); \
virtual HRESULT __stdcall RetrieveLinked(const CATVariant & iIndex, CATIABase *& oLinked); \
virtual HRESULT __stdcall RetrieveKindOfLinked(const CATVariant & iIndex, CATBSTR & oKind); \
virtual HRESULT __stdcall get_LinkedCount(CATLONG & oCount); \
virtual HRESULT  __stdcall get_Application(CATIAApplication *& oApplication); \
virtual HRESULT  __stdcall get_Parent(CATBaseDispatch *& oParent); \
virtual HRESULT  __stdcall get_Name(CATBSTR & oNameBSTR); \
virtual HRESULT  __stdcall put_Name(const CATBSTR & iNameBSTR); \
virtual HRESULT  __stdcall GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj); \


#define ENVTIEdefine_CATIAFunctAssociation(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
HRESULT __stdcall  ENVTIEName::LinkTo(CATIABase * iLinked, const CATBSTR & iKind) \
{ \
return (ENVTIECALL(CATIAFunctAssociation,ENVTIETypeLetter,ENVTIELetter)LinkTo(iLinked,iKind)); \
} \
HRESULT __stdcall  ENVTIEName::DetachFrom(CATIABase * iLinked) \
{ \
return (ENVTIECALL(CATIAFunctAssociation,ENVTIETypeLetter,ENVTIELetter)DetachFrom(iLinked)); \
} \
HRESULT __stdcall  ENVTIEName::RetrieveLinked(const CATVariant & iIndex, CATIABase *& oLinked) \
{ \
return (ENVTIECALL(CATIAFunctAssociation,ENVTIETypeLetter,ENVTIELetter)RetrieveLinked(iIndex,oLinked)); \
} \
HRESULT __stdcall  ENVTIEName::RetrieveKindOfLinked(const CATVariant & iIndex, CATBSTR & oKind) \
{ \
return (ENVTIECALL(CATIAFunctAssociation,ENVTIETypeLetter,ENVTIELetter)RetrieveKindOfLinked(iIndex,oKind)); \
} \
HRESULT __stdcall  ENVTIEName::get_LinkedCount(CATLONG & oCount) \
{ \
return (ENVTIECALL(CATIAFunctAssociation,ENVTIETypeLetter,ENVTIELetter)get_LinkedCount(oCount)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Application(CATIAApplication *& oApplication) \
{ \
return (ENVTIECALL(CATIAFunctAssociation,ENVTIETypeLetter,ENVTIELetter)get_Application(oApplication)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Parent(CATBaseDispatch *& oParent) \
{ \
return (ENVTIECALL(CATIAFunctAssociation,ENVTIETypeLetter,ENVTIELetter)get_Parent(oParent)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Name(CATBSTR & oNameBSTR) \
{ \
return (ENVTIECALL(CATIAFunctAssociation,ENVTIETypeLetter,ENVTIELetter)get_Name(oNameBSTR)); \
} \
HRESULT  __stdcall  ENVTIEName::put_Name(const CATBSTR & iNameBSTR) \
{ \
return (ENVTIECALL(CATIAFunctAssociation,ENVTIETypeLetter,ENVTIELetter)put_Name(iNameBSTR)); \
} \
HRESULT  __stdcall  ENVTIEName::GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj) \
{ \
return (ENVTIECALL(CATIAFunctAssociation,ENVTIETypeLetter,ENVTIELetter)GetItem(IDName,RealObj)); \
} \


/* Name of the TIE class */
#define class_TIE_CATIAFunctAssociation(classe)    TIECATIAFunctAssociation##classe


/* Common methods inside a TIE */
#define common_TIE_CATIAFunctAssociation(classe) \
 \
 \
/* Static initialization */ \
CATDefineCommonTIEMembers(CATIAFunctAssociation, classe) \
 \
 \
CATImplementTIEMethods(CATIAFunctAssociation, classe) \
CATImplementIUnknownMethodsForCATBaseUnknownTIE(CATIAFunctAssociation, classe, 2) \
CATImplementIDispatchMethodsForCATBaseUnknownTIE(CATIAFunctAssociation, classe) \
CATImplementCATBaseUnknownMethodsForTIE(CATIAFunctAssociation, classe) \
 \
HRESULT __stdcall  TIECATIAFunctAssociation##classe::LinkTo(CATIABase * iLinked, const CATBSTR & iKind) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,1,&_Trac2,&iLinked,&iKind); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->LinkTo(iLinked,iKind); \
   ExitAfterCall(this,1,_Trac2,&_ret_arg,&iLinked,&iKind); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAFunctAssociation##classe::DetachFrom(CATIABase * iLinked) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,2,&_Trac2,&iLinked); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->DetachFrom(iLinked); \
   ExitAfterCall(this,2,_Trac2,&_ret_arg,&iLinked); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAFunctAssociation##classe::RetrieveLinked(const CATVariant & iIndex, CATIABase *& oLinked) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,3,&_Trac2,&iIndex,&oLinked); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->RetrieveLinked(iIndex,oLinked); \
   ExitAfterCall(this,3,_Trac2,&_ret_arg,&iIndex,&oLinked); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAFunctAssociation##classe::RetrieveKindOfLinked(const CATVariant & iIndex, CATBSTR & oKind) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,4,&_Trac2,&iIndex,&oKind); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->RetrieveKindOfLinked(iIndex,oKind); \
   ExitAfterCall(this,4,_Trac2,&_ret_arg,&iIndex,&oKind); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAFunctAssociation##classe::get_LinkedCount(CATLONG & oCount) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,5,&_Trac2,&oCount); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_LinkedCount(oCount); \
   ExitAfterCall(this,5,_Trac2,&_ret_arg,&oCount); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAFunctAssociation##classe::get_Application(CATIAApplication *& oApplication) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,6,&_Trac2,&oApplication); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Application(oApplication); \
   ExitAfterCall(this,6,_Trac2,&_ret_arg,&oApplication); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAFunctAssociation##classe::get_Parent(CATBaseDispatch *& oParent) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,7,&_Trac2,&oParent); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Parent(oParent); \
   ExitAfterCall(this,7,_Trac2,&_ret_arg,&oParent); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAFunctAssociation##classe::get_Name(CATBSTR & oNameBSTR) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,8,&_Trac2,&oNameBSTR); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Name(oNameBSTR); \
   ExitAfterCall(this,8,_Trac2,&_ret_arg,&oNameBSTR); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAFunctAssociation##classe::put_Name(const CATBSTR & iNameBSTR) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,9,&_Trac2,&iNameBSTR); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_Name(iNameBSTR); \
   ExitAfterCall(this,9,_Trac2,&_ret_arg,&iNameBSTR); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAFunctAssociation##classe::GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,10,&_Trac2,&IDName,&RealObj); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetItem(IDName,RealObj); \
   ExitAfterCall(this,10,_Trac2,&_ret_arg,&IDName,&RealObj); \
   return(_ret_arg); \
} \



/* Macro used to link an implementation with an interface */
#define TIE_CATIAFunctAssociation(classe) \
 \
 \
declare_TIE_CATIAFunctAssociation(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIAFunctAssociation##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIAFunctAssociation,"CATIAFunctAssociation",CATIAFunctAssociation::MetaObject(),classe::MetaObject(),TIE); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIAFunctAssociation(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIECreation(CATIAFunctAssociation, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIAFunctAssociation##classe(classe::MetaObject(),CATIAFunctAssociation::MetaObject(),(void *)CreateTIECATIAFunctAssociation##classe)



/* Macro used to link an implementation with an interface */
/* This TIE is chained on the implementation object */
#define TIEchain_CATIAFunctAssociation(classe) \
 \
 \
declare_TIE_CATIAFunctAssociation(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIAFunctAssociation##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIAFunctAssociation,"CATIAFunctAssociation",CATIAFunctAssociation::MetaObject(),classe::MetaObject(),TIEchain); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIAFunctAssociation(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIEchainCreation(CATIAFunctAssociation, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIAFunctAssociation##classe(classe::MetaObject(),CATIAFunctAssociation::MetaObject(),(void *)CreateTIECATIAFunctAssociation##classe)


/* Macro to switch between BOA and TIE at build time */ 
#ifdef CATSYS_BOA_IS_TIE
#define BOA_CATIAFunctAssociation(classe) TIE_CATIAFunctAssociation(classe)
#else
#define BOA_CATIAFunctAssociation(classe) CATImplementBOA(CATIAFunctAssociation, classe)
#endif

#endif
