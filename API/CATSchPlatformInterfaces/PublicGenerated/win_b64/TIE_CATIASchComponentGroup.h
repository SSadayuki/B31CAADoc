#ifndef __TIE_CATIASchComponentGroup
#define __TIE_CATIASchComponentGroup

#include <string.h>
#include "CATBaseUnknown.h"
#include "CATMetaClass.h"
#include "CATMacForTie.h"
#include "CATExitJournal.h"
#include "CATIASchComponentGroup.h"
#include "JS0DSPA.h"


#ifdef _WINDOWS_SOURCE
#define Exported __declspec(dllexport)
#define Imported __declspec(dllimport)
#else
#define Exported 
#define Imported 
#endif


/* To link an implementation with the interface CATIASchComponentGroup */
#define declare_TIE_CATIASchComponentGroup(classe) \
 \
 \
class TIECATIASchComponentGroup##classe : public CATIASchComponentGroup \
{ \
   private: \
      CATDeclareCommonTIEMembers \
   public: \
      CATDeclareTIEMethods(CATIASchComponentGroup, classe) \
      CATDeclareIUnknownMethodsForCATBaseUnknownTIE \
      CATDeclareIDispatchMethodsForCATBaseUnknownTIE \
      CATDeclareCATBaseUnknownMethodsForTIE \
      virtual HRESULT __stdcall AddMember(CATIASchAppConnectable * iCntblToAdd); \
      virtual HRESULT __stdcall RemoveMember(CATIASchAppConnectable * iCntblToRemove); \
      virtual HRESULT __stdcall ListMembers(CATIASchListOfObjects *& oLCntbl); \
      virtual HRESULT  __stdcall get_Application(CATIAApplication *& oApplication); \
      virtual HRESULT  __stdcall get_Parent(CATBaseDispatch *& oParent); \
      virtual HRESULT  __stdcall get_Name(CATBSTR & oNameBSTR); \
      virtual HRESULT  __stdcall put_Name(const CATBSTR & iNameBSTR); \
      virtual HRESULT  __stdcall GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj); \
};



#define ENVTIEdeclare_CATIASchComponentGroup(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
virtual HRESULT __stdcall AddMember(CATIASchAppConnectable * iCntblToAdd); \
virtual HRESULT __stdcall RemoveMember(CATIASchAppConnectable * iCntblToRemove); \
virtual HRESULT __stdcall ListMembers(CATIASchListOfObjects *& oLCntbl); \
virtual HRESULT  __stdcall get_Application(CATIAApplication *& oApplication); \
virtual HRESULT  __stdcall get_Parent(CATBaseDispatch *& oParent); \
virtual HRESULT  __stdcall get_Name(CATBSTR & oNameBSTR); \
virtual HRESULT  __stdcall put_Name(const CATBSTR & iNameBSTR); \
virtual HRESULT  __stdcall GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj); \


#define ENVTIEdefine_CATIASchComponentGroup(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
HRESULT __stdcall  ENVTIEName::AddMember(CATIASchAppConnectable * iCntblToAdd) \
{ \
return (ENVTIECALL(CATIASchComponentGroup,ENVTIETypeLetter,ENVTIELetter)AddMember(iCntblToAdd)); \
} \
HRESULT __stdcall  ENVTIEName::RemoveMember(CATIASchAppConnectable * iCntblToRemove) \
{ \
return (ENVTIECALL(CATIASchComponentGroup,ENVTIETypeLetter,ENVTIELetter)RemoveMember(iCntblToRemove)); \
} \
HRESULT __stdcall  ENVTIEName::ListMembers(CATIASchListOfObjects *& oLCntbl) \
{ \
return (ENVTIECALL(CATIASchComponentGroup,ENVTIETypeLetter,ENVTIELetter)ListMembers(oLCntbl)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Application(CATIAApplication *& oApplication) \
{ \
return (ENVTIECALL(CATIASchComponentGroup,ENVTIETypeLetter,ENVTIELetter)get_Application(oApplication)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Parent(CATBaseDispatch *& oParent) \
{ \
return (ENVTIECALL(CATIASchComponentGroup,ENVTIETypeLetter,ENVTIELetter)get_Parent(oParent)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Name(CATBSTR & oNameBSTR) \
{ \
return (ENVTIECALL(CATIASchComponentGroup,ENVTIETypeLetter,ENVTIELetter)get_Name(oNameBSTR)); \
} \
HRESULT  __stdcall  ENVTIEName::put_Name(const CATBSTR & iNameBSTR) \
{ \
return (ENVTIECALL(CATIASchComponentGroup,ENVTIETypeLetter,ENVTIELetter)put_Name(iNameBSTR)); \
} \
HRESULT  __stdcall  ENVTIEName::GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj) \
{ \
return (ENVTIECALL(CATIASchComponentGroup,ENVTIETypeLetter,ENVTIELetter)GetItem(IDName,RealObj)); \
} \


/* Name of the TIE class */
#define class_TIE_CATIASchComponentGroup(classe)    TIECATIASchComponentGroup##classe


/* Common methods inside a TIE */
#define common_TIE_CATIASchComponentGroup(classe) \
 \
 \
/* Static initialization */ \
CATDefineCommonTIEMembers(CATIASchComponentGroup, classe) \
 \
 \
CATImplementTIEMethods(CATIASchComponentGroup, classe) \
CATImplementIUnknownMethodsForCATBaseUnknownTIE(CATIASchComponentGroup, classe, 2) \
CATImplementIDispatchMethodsForCATBaseUnknownTIE(CATIASchComponentGroup, classe) \
CATImplementCATBaseUnknownMethodsForTIE(CATIASchComponentGroup, classe) \
 \
HRESULT __stdcall  TIECATIASchComponentGroup##classe::AddMember(CATIASchAppConnectable * iCntblToAdd) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,1,&_Trac2,&iCntblToAdd); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->AddMember(iCntblToAdd); \
   ExitAfterCall(this,1,_Trac2,&_ret_arg,&iCntblToAdd); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIASchComponentGroup##classe::RemoveMember(CATIASchAppConnectable * iCntblToRemove) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,2,&_Trac2,&iCntblToRemove); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->RemoveMember(iCntblToRemove); \
   ExitAfterCall(this,2,_Trac2,&_ret_arg,&iCntblToRemove); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIASchComponentGroup##classe::ListMembers(CATIASchListOfObjects *& oLCntbl) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,3,&_Trac2,&oLCntbl); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->ListMembers(oLCntbl); \
   ExitAfterCall(this,3,_Trac2,&_ret_arg,&oLCntbl); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIASchComponentGroup##classe::get_Application(CATIAApplication *& oApplication) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,4,&_Trac2,&oApplication); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Application(oApplication); \
   ExitAfterCall(this,4,_Trac2,&_ret_arg,&oApplication); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIASchComponentGroup##classe::get_Parent(CATBaseDispatch *& oParent) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,5,&_Trac2,&oParent); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Parent(oParent); \
   ExitAfterCall(this,5,_Trac2,&_ret_arg,&oParent); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIASchComponentGroup##classe::get_Name(CATBSTR & oNameBSTR) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,6,&_Trac2,&oNameBSTR); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Name(oNameBSTR); \
   ExitAfterCall(this,6,_Trac2,&_ret_arg,&oNameBSTR); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIASchComponentGroup##classe::put_Name(const CATBSTR & iNameBSTR) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,7,&_Trac2,&iNameBSTR); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_Name(iNameBSTR); \
   ExitAfterCall(this,7,_Trac2,&_ret_arg,&iNameBSTR); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIASchComponentGroup##classe::GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,8,&_Trac2,&IDName,&RealObj); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetItem(IDName,RealObj); \
   ExitAfterCall(this,8,_Trac2,&_ret_arg,&IDName,&RealObj); \
   return(_ret_arg); \
} \



/* Macro used to link an implementation with an interface */
#define TIE_CATIASchComponentGroup(classe) \
 \
 \
declare_TIE_CATIASchComponentGroup(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIASchComponentGroup##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIASchComponentGroup,"CATIASchComponentGroup",CATIASchComponentGroup::MetaObject(),classe::MetaObject(),TIE); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIASchComponentGroup(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIECreation(CATIASchComponentGroup, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIASchComponentGroup##classe(classe::MetaObject(),CATIASchComponentGroup::MetaObject(),(void *)CreateTIECATIASchComponentGroup##classe)



/* Macro used to link an implementation with an interface */
/* This TIE is chained on the implementation object */
#define TIEchain_CATIASchComponentGroup(classe) \
 \
 \
declare_TIE_CATIASchComponentGroup(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIASchComponentGroup##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIASchComponentGroup,"CATIASchComponentGroup",CATIASchComponentGroup::MetaObject(),classe::MetaObject(),TIEchain); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIASchComponentGroup(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIEchainCreation(CATIASchComponentGroup, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIASchComponentGroup##classe(classe::MetaObject(),CATIASchComponentGroup::MetaObject(),(void *)CreateTIECATIASchComponentGroup##classe)


/* Macro to switch between BOA and TIE at build time */ 
#ifdef CATSYS_BOA_IS_TIE
#define BOA_CATIASchComponentGroup(classe) TIE_CATIASchComponentGroup(classe)
#else
#define BOA_CATIASchComponentGroup(classe) CATImplementBOA(CATIASchComponentGroup, classe)
#endif

#endif
