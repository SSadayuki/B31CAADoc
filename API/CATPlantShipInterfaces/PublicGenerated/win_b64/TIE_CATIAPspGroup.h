#ifndef __TIE_CATIAPspGroup
#define __TIE_CATIAPspGroup

#include <string.h>
#include "CATBaseUnknown.h"
#include "CATMetaClass.h"
#include "CATMacForTie.h"
#include "CATExitJournal.h"
#include "CATIAPspGroup.h"
#include "JS0DSPA.h"


#ifdef _WINDOWS_SOURCE
#define Exported __declspec(dllexport)
#define Imported __declspec(dllimport)
#else
#define Exported 
#define Imported 
#endif


/* To link an implementation with the interface CATIAPspGroup */
#define declare_TIE_CATIAPspGroup(classe) \
 \
 \
class TIECATIAPspGroup##classe : public CATIAPspGroup \
{ \
   private: \
      CATDeclareCommonTIEMembers \
   public: \
      CATDeclareTIEMethods(CATIAPspGroup, classe) \
      CATDeclareIUnknownMethodsForCATBaseUnknownTIE \
      CATDeclareIDispatchMethodsForCATBaseUnknownTIE \
      CATDeclareCATBaseUnknownMethodsForTIE \
      virtual HRESULT __stdcall get_Members(CATIAPspListOfObjects *& oLMembers); \
      virtual HRESULT __stdcall AddMember(CATIAPspGroupable * iGroupable); \
      virtual HRESULT __stdcall RemoveMember(CATIAPspGroupable * iGroupable); \
      virtual HRESULT  __stdcall get_Application(CATIAApplication *& oApplication); \
      virtual HRESULT  __stdcall get_Parent(CATBaseDispatch *& oParent); \
      virtual HRESULT  __stdcall get_Name(CATBSTR & oNameBSTR); \
      virtual HRESULT  __stdcall put_Name(const CATBSTR & iNameBSTR); \
      virtual HRESULT  __stdcall GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj); \
};



#define ENVTIEdeclare_CATIAPspGroup(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
virtual HRESULT __stdcall get_Members(CATIAPspListOfObjects *& oLMembers); \
virtual HRESULT __stdcall AddMember(CATIAPspGroupable * iGroupable); \
virtual HRESULT __stdcall RemoveMember(CATIAPspGroupable * iGroupable); \
virtual HRESULT  __stdcall get_Application(CATIAApplication *& oApplication); \
virtual HRESULT  __stdcall get_Parent(CATBaseDispatch *& oParent); \
virtual HRESULT  __stdcall get_Name(CATBSTR & oNameBSTR); \
virtual HRESULT  __stdcall put_Name(const CATBSTR & iNameBSTR); \
virtual HRESULT  __stdcall GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj); \


#define ENVTIEdefine_CATIAPspGroup(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
HRESULT __stdcall  ENVTIEName::get_Members(CATIAPspListOfObjects *& oLMembers) \
{ \
return (ENVTIECALL(CATIAPspGroup,ENVTIETypeLetter,ENVTIELetter)get_Members(oLMembers)); \
} \
HRESULT __stdcall  ENVTIEName::AddMember(CATIAPspGroupable * iGroupable) \
{ \
return (ENVTIECALL(CATIAPspGroup,ENVTIETypeLetter,ENVTIELetter)AddMember(iGroupable)); \
} \
HRESULT __stdcall  ENVTIEName::RemoveMember(CATIAPspGroupable * iGroupable) \
{ \
return (ENVTIECALL(CATIAPspGroup,ENVTIETypeLetter,ENVTIELetter)RemoveMember(iGroupable)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Application(CATIAApplication *& oApplication) \
{ \
return (ENVTIECALL(CATIAPspGroup,ENVTIETypeLetter,ENVTIELetter)get_Application(oApplication)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Parent(CATBaseDispatch *& oParent) \
{ \
return (ENVTIECALL(CATIAPspGroup,ENVTIETypeLetter,ENVTIELetter)get_Parent(oParent)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Name(CATBSTR & oNameBSTR) \
{ \
return (ENVTIECALL(CATIAPspGroup,ENVTIETypeLetter,ENVTIELetter)get_Name(oNameBSTR)); \
} \
HRESULT  __stdcall  ENVTIEName::put_Name(const CATBSTR & iNameBSTR) \
{ \
return (ENVTIECALL(CATIAPspGroup,ENVTIETypeLetter,ENVTIELetter)put_Name(iNameBSTR)); \
} \
HRESULT  __stdcall  ENVTIEName::GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj) \
{ \
return (ENVTIECALL(CATIAPspGroup,ENVTIETypeLetter,ENVTIELetter)GetItem(IDName,RealObj)); \
} \


/* Name of the TIE class */
#define class_TIE_CATIAPspGroup(classe)    TIECATIAPspGroup##classe


/* Common methods inside a TIE */
#define common_TIE_CATIAPspGroup(classe) \
 \
 \
/* Static initialization */ \
CATDefineCommonTIEMembers(CATIAPspGroup, classe) \
 \
 \
CATImplementTIEMethods(CATIAPspGroup, classe) \
CATImplementIUnknownMethodsForCATBaseUnknownTIE(CATIAPspGroup, classe, 2) \
CATImplementIDispatchMethodsForCATBaseUnknownTIE(CATIAPspGroup, classe) \
CATImplementCATBaseUnknownMethodsForTIE(CATIAPspGroup, classe) \
 \
HRESULT __stdcall  TIECATIAPspGroup##classe::get_Members(CATIAPspListOfObjects *& oLMembers) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,1,&_Trac2,&oLMembers); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Members(oLMembers); \
   ExitAfterCall(this,1,_Trac2,&_ret_arg,&oLMembers); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAPspGroup##classe::AddMember(CATIAPspGroupable * iGroupable) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,2,&_Trac2,&iGroupable); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->AddMember(iGroupable); \
   ExitAfterCall(this,2,_Trac2,&_ret_arg,&iGroupable); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAPspGroup##classe::RemoveMember(CATIAPspGroupable * iGroupable) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,3,&_Trac2,&iGroupable); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->RemoveMember(iGroupable); \
   ExitAfterCall(this,3,_Trac2,&_ret_arg,&iGroupable); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAPspGroup##classe::get_Application(CATIAApplication *& oApplication) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,4,&_Trac2,&oApplication); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Application(oApplication); \
   ExitAfterCall(this,4,_Trac2,&_ret_arg,&oApplication); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAPspGroup##classe::get_Parent(CATBaseDispatch *& oParent) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,5,&_Trac2,&oParent); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Parent(oParent); \
   ExitAfterCall(this,5,_Trac2,&_ret_arg,&oParent); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAPspGroup##classe::get_Name(CATBSTR & oNameBSTR) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,6,&_Trac2,&oNameBSTR); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Name(oNameBSTR); \
   ExitAfterCall(this,6,_Trac2,&_ret_arg,&oNameBSTR); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAPspGroup##classe::put_Name(const CATBSTR & iNameBSTR) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,7,&_Trac2,&iNameBSTR); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_Name(iNameBSTR); \
   ExitAfterCall(this,7,_Trac2,&_ret_arg,&iNameBSTR); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAPspGroup##classe::GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,8,&_Trac2,&IDName,&RealObj); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetItem(IDName,RealObj); \
   ExitAfterCall(this,8,_Trac2,&_ret_arg,&IDName,&RealObj); \
   return(_ret_arg); \
} \



/* Macro used to link an implementation with an interface */
#define TIE_CATIAPspGroup(classe) \
 \
 \
declare_TIE_CATIAPspGroup(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIAPspGroup##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIAPspGroup,"CATIAPspGroup",CATIAPspGroup::MetaObject(),classe::MetaObject(),TIE); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIAPspGroup(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIECreation(CATIAPspGroup, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIAPspGroup##classe(classe::MetaObject(),CATIAPspGroup::MetaObject(),(void *)CreateTIECATIAPspGroup##classe)



/* Macro used to link an implementation with an interface */
/* This TIE is chained on the implementation object */
#define TIEchain_CATIAPspGroup(classe) \
 \
 \
declare_TIE_CATIAPspGroup(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIAPspGroup##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIAPspGroup,"CATIAPspGroup",CATIAPspGroup::MetaObject(),classe::MetaObject(),TIEchain); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIAPspGroup(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIEchainCreation(CATIAPspGroup, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIAPspGroup##classe(classe::MetaObject(),CATIAPspGroup::MetaObject(),(void *)CreateTIECATIAPspGroup##classe)


/* Macro to switch between BOA and TIE at build time */ 
#ifdef CATSYS_BOA_IS_TIE
#define BOA_CATIAPspGroup(classe) TIE_CATIAPspGroup(classe)
#else
#define BOA_CATIAPspGroup(classe) CATImplementBOA(CATIAPspGroup, classe)
#endif

#endif
