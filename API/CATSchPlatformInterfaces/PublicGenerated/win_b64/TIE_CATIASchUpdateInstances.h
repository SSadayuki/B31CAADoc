#ifndef __TIE_CATIASchUpdateInstances
#define __TIE_CATIASchUpdateInstances

#include <string.h>
#include "CATBaseUnknown.h"
#include "CATMetaClass.h"
#include "CATMacForTie.h"
#include "CATExitJournal.h"
#include "CATIASchUpdateInstances.h"
#include "JS0DSPA.h"


#ifdef _WINDOWS_SOURCE
#define Exported __declspec(dllexport)
#define Imported __declspec(dllimport)
#else
#define Exported 
#define Imported 
#endif


/* To link an implementation with the interface CATIASchUpdateInstances */
#define declare_TIE_CATIASchUpdateInstances(classe) \
 \
 \
class TIECATIASchUpdateInstances##classe : public CATIASchUpdateInstances \
{ \
   private: \
      CATDeclareCommonTIEMembers \
   public: \
      CATDeclareTIEMethods(CATIASchUpdateInstances, classe) \
      CATDeclareIUnknownMethodsForCATBaseUnknownTIE \
      CATDeclareIDispatchMethodsForCATBaseUnknownTIE \
      CATDeclareCATBaseUnknownMethodsForTIE \
      virtual HRESULT __stdcall UpdateAllInstancesFromReference(CATIASchComponent * iCompLocalRef); \
      virtual HRESULT  __stdcall get_Application(CATIAApplication *& oApplication); \
      virtual HRESULT  __stdcall get_Parent(CATBaseDispatch *& oParent); \
      virtual HRESULT  __stdcall get_Name(CATBSTR & oNameBSTR); \
      virtual HRESULT  __stdcall put_Name(const CATBSTR & iNameBSTR); \
      virtual HRESULT  __stdcall GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj); \
};



#define ENVTIEdeclare_CATIASchUpdateInstances(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
virtual HRESULT __stdcall UpdateAllInstancesFromReference(CATIASchComponent * iCompLocalRef); \
virtual HRESULT  __stdcall get_Application(CATIAApplication *& oApplication); \
virtual HRESULT  __stdcall get_Parent(CATBaseDispatch *& oParent); \
virtual HRESULT  __stdcall get_Name(CATBSTR & oNameBSTR); \
virtual HRESULT  __stdcall put_Name(const CATBSTR & iNameBSTR); \
virtual HRESULT  __stdcall GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj); \


#define ENVTIEdefine_CATIASchUpdateInstances(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
HRESULT __stdcall  ENVTIEName::UpdateAllInstancesFromReference(CATIASchComponent * iCompLocalRef) \
{ \
return (ENVTIECALL(CATIASchUpdateInstances,ENVTIETypeLetter,ENVTIELetter)UpdateAllInstancesFromReference(iCompLocalRef)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Application(CATIAApplication *& oApplication) \
{ \
return (ENVTIECALL(CATIASchUpdateInstances,ENVTIETypeLetter,ENVTIELetter)get_Application(oApplication)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Parent(CATBaseDispatch *& oParent) \
{ \
return (ENVTIECALL(CATIASchUpdateInstances,ENVTIETypeLetter,ENVTIELetter)get_Parent(oParent)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Name(CATBSTR & oNameBSTR) \
{ \
return (ENVTIECALL(CATIASchUpdateInstances,ENVTIETypeLetter,ENVTIELetter)get_Name(oNameBSTR)); \
} \
HRESULT  __stdcall  ENVTIEName::put_Name(const CATBSTR & iNameBSTR) \
{ \
return (ENVTIECALL(CATIASchUpdateInstances,ENVTIETypeLetter,ENVTIELetter)put_Name(iNameBSTR)); \
} \
HRESULT  __stdcall  ENVTIEName::GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj) \
{ \
return (ENVTIECALL(CATIASchUpdateInstances,ENVTIETypeLetter,ENVTIELetter)GetItem(IDName,RealObj)); \
} \


/* Name of the TIE class */
#define class_TIE_CATIASchUpdateInstances(classe)    TIECATIASchUpdateInstances##classe


/* Common methods inside a TIE */
#define common_TIE_CATIASchUpdateInstances(classe) \
 \
 \
/* Static initialization */ \
CATDefineCommonTIEMembers(CATIASchUpdateInstances, classe) \
 \
 \
CATImplementTIEMethods(CATIASchUpdateInstances, classe) \
CATImplementIUnknownMethodsForCATBaseUnknownTIE(CATIASchUpdateInstances, classe, 2) \
CATImplementIDispatchMethodsForCATBaseUnknownTIE(CATIASchUpdateInstances, classe) \
CATImplementCATBaseUnknownMethodsForTIE(CATIASchUpdateInstances, classe) \
 \
HRESULT __stdcall  TIECATIASchUpdateInstances##classe::UpdateAllInstancesFromReference(CATIASchComponent * iCompLocalRef) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,1,&_Trac2,&iCompLocalRef); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->UpdateAllInstancesFromReference(iCompLocalRef); \
   ExitAfterCall(this,1,_Trac2,&_ret_arg,&iCompLocalRef); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIASchUpdateInstances##classe::get_Application(CATIAApplication *& oApplication) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,2,&_Trac2,&oApplication); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Application(oApplication); \
   ExitAfterCall(this,2,_Trac2,&_ret_arg,&oApplication); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIASchUpdateInstances##classe::get_Parent(CATBaseDispatch *& oParent) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,3,&_Trac2,&oParent); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Parent(oParent); \
   ExitAfterCall(this,3,_Trac2,&_ret_arg,&oParent); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIASchUpdateInstances##classe::get_Name(CATBSTR & oNameBSTR) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,4,&_Trac2,&oNameBSTR); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Name(oNameBSTR); \
   ExitAfterCall(this,4,_Trac2,&_ret_arg,&oNameBSTR); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIASchUpdateInstances##classe::put_Name(const CATBSTR & iNameBSTR) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,5,&_Trac2,&iNameBSTR); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_Name(iNameBSTR); \
   ExitAfterCall(this,5,_Trac2,&_ret_arg,&iNameBSTR); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIASchUpdateInstances##classe::GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,6,&_Trac2,&IDName,&RealObj); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetItem(IDName,RealObj); \
   ExitAfterCall(this,6,_Trac2,&_ret_arg,&IDName,&RealObj); \
   return(_ret_arg); \
} \



/* Macro used to link an implementation with an interface */
#define TIE_CATIASchUpdateInstances(classe) \
 \
 \
declare_TIE_CATIASchUpdateInstances(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIASchUpdateInstances##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIASchUpdateInstances,"CATIASchUpdateInstances",CATIASchUpdateInstances::MetaObject(),classe::MetaObject(),TIE); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIASchUpdateInstances(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIECreation(CATIASchUpdateInstances, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIASchUpdateInstances##classe(classe::MetaObject(),CATIASchUpdateInstances::MetaObject(),(void *)CreateTIECATIASchUpdateInstances##classe)



/* Macro used to link an implementation with an interface */
/* This TIE is chained on the implementation object */
#define TIEchain_CATIASchUpdateInstances(classe) \
 \
 \
declare_TIE_CATIASchUpdateInstances(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIASchUpdateInstances##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIASchUpdateInstances,"CATIASchUpdateInstances",CATIASchUpdateInstances::MetaObject(),classe::MetaObject(),TIEchain); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIASchUpdateInstances(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIEchainCreation(CATIASchUpdateInstances, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIASchUpdateInstances##classe(classe::MetaObject(),CATIASchUpdateInstances::MetaObject(),(void *)CreateTIECATIASchUpdateInstances##classe)


/* Macro to switch between BOA and TIE at build time */ 
#ifdef CATSYS_BOA_IS_TIE
#define BOA_CATIASchUpdateInstances(classe) TIE_CATIASchUpdateInstances(classe)
#else
#define BOA_CATIASchUpdateInstances(classe) CATImplementBOA(CATIASchUpdateInstances, classe)
#endif

#endif
