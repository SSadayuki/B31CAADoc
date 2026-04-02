#ifndef __TIE_CATIASchAppCntrName
#define __TIE_CATIASchAppCntrName

#include <string.h>
#include "CATBaseUnknown.h"
#include "CATMetaClass.h"
#include "CATMacForTie.h"
#include "CATExitJournal.h"
#include "CATIASchAppCntrName.h"
#include "JS0DSPA.h"


#ifdef _WINDOWS_SOURCE
#define Exported __declspec(dllexport)
#define Imported __declspec(dllimport)
#else
#define Exported 
#define Imported 
#endif


/* To link an implementation with the interface CATIASchAppCntrName */
#define declare_TIE_CATIASchAppCntrName(classe) \
 \
 \
class TIECATIASchAppCntrName##classe : public CATIASchAppCntrName \
{ \
   private: \
      CATDeclareCommonTIEMembers \
   public: \
      CATDeclareTIEMethods(CATIASchAppCntrName, classe) \
      CATDeclareIUnknownMethodsForCATBaseUnknownTIE \
      CATDeclareIDispatchMethodsForCATBaseUnknownTIE \
      CATDeclareCATBaseUnknownMethodsForTIE \
      virtual HRESULT __stdcall AppListNames(CATIASchListOfBSTRs *& oLConnectorNamesAllowed); \
      virtual HRESULT __stdcall GetName(CATBSTR & oName); \
      virtual HRESULT __stdcall SetName(const CATBSTR & iName); \
      virtual HRESULT  __stdcall get_Application(CATIAApplication *& oApplication); \
      virtual HRESULT  __stdcall get_Parent(CATBaseDispatch *& oParent); \
      virtual HRESULT  __stdcall get_Name(CATBSTR & oNameBSTR); \
      virtual HRESULT  __stdcall put_Name(const CATBSTR & iNameBSTR); \
      virtual HRESULT  __stdcall GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj); \
};



#define ENVTIEdeclare_CATIASchAppCntrName(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
virtual HRESULT __stdcall AppListNames(CATIASchListOfBSTRs *& oLConnectorNamesAllowed); \
virtual HRESULT __stdcall GetName(CATBSTR & oName); \
virtual HRESULT __stdcall SetName(const CATBSTR & iName); \
virtual HRESULT  __stdcall get_Application(CATIAApplication *& oApplication); \
virtual HRESULT  __stdcall get_Parent(CATBaseDispatch *& oParent); \
virtual HRESULT  __stdcall get_Name(CATBSTR & oNameBSTR); \
virtual HRESULT  __stdcall put_Name(const CATBSTR & iNameBSTR); \
virtual HRESULT  __stdcall GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj); \


#define ENVTIEdefine_CATIASchAppCntrName(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
HRESULT __stdcall  ENVTIEName::AppListNames(CATIASchListOfBSTRs *& oLConnectorNamesAllowed) \
{ \
return (ENVTIECALL(CATIASchAppCntrName,ENVTIETypeLetter,ENVTIELetter)AppListNames(oLConnectorNamesAllowed)); \
} \
HRESULT __stdcall  ENVTIEName::GetName(CATBSTR & oName) \
{ \
return (ENVTIECALL(CATIASchAppCntrName,ENVTIETypeLetter,ENVTIELetter)GetName(oName)); \
} \
HRESULT __stdcall  ENVTIEName::SetName(const CATBSTR & iName) \
{ \
return (ENVTIECALL(CATIASchAppCntrName,ENVTIETypeLetter,ENVTIELetter)SetName(iName)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Application(CATIAApplication *& oApplication) \
{ \
return (ENVTIECALL(CATIASchAppCntrName,ENVTIETypeLetter,ENVTIELetter)get_Application(oApplication)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Parent(CATBaseDispatch *& oParent) \
{ \
return (ENVTIECALL(CATIASchAppCntrName,ENVTIETypeLetter,ENVTIELetter)get_Parent(oParent)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Name(CATBSTR & oNameBSTR) \
{ \
return (ENVTIECALL(CATIASchAppCntrName,ENVTIETypeLetter,ENVTIELetter)get_Name(oNameBSTR)); \
} \
HRESULT  __stdcall  ENVTIEName::put_Name(const CATBSTR & iNameBSTR) \
{ \
return (ENVTIECALL(CATIASchAppCntrName,ENVTIETypeLetter,ENVTIELetter)put_Name(iNameBSTR)); \
} \
HRESULT  __stdcall  ENVTIEName::GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj) \
{ \
return (ENVTIECALL(CATIASchAppCntrName,ENVTIETypeLetter,ENVTIELetter)GetItem(IDName,RealObj)); \
} \


/* Name of the TIE class */
#define class_TIE_CATIASchAppCntrName(classe)    TIECATIASchAppCntrName##classe


/* Common methods inside a TIE */
#define common_TIE_CATIASchAppCntrName(classe) \
 \
 \
/* Static initialization */ \
CATDefineCommonTIEMembers(CATIASchAppCntrName, classe) \
 \
 \
CATImplementTIEMethods(CATIASchAppCntrName, classe) \
CATImplementIUnknownMethodsForCATBaseUnknownTIE(CATIASchAppCntrName, classe, 2) \
CATImplementIDispatchMethodsForCATBaseUnknownTIE(CATIASchAppCntrName, classe) \
CATImplementCATBaseUnknownMethodsForTIE(CATIASchAppCntrName, classe) \
 \
HRESULT __stdcall  TIECATIASchAppCntrName##classe::AppListNames(CATIASchListOfBSTRs *& oLConnectorNamesAllowed) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,1,&_Trac2,&oLConnectorNamesAllowed); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->AppListNames(oLConnectorNamesAllowed); \
   ExitAfterCall(this,1,_Trac2,&_ret_arg,&oLConnectorNamesAllowed); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIASchAppCntrName##classe::GetName(CATBSTR & oName) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,2,&_Trac2,&oName); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetName(oName); \
   ExitAfterCall(this,2,_Trac2,&_ret_arg,&oName); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIASchAppCntrName##classe::SetName(const CATBSTR & iName) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,3,&_Trac2,&iName); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetName(iName); \
   ExitAfterCall(this,3,_Trac2,&_ret_arg,&iName); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIASchAppCntrName##classe::get_Application(CATIAApplication *& oApplication) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,4,&_Trac2,&oApplication); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Application(oApplication); \
   ExitAfterCall(this,4,_Trac2,&_ret_arg,&oApplication); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIASchAppCntrName##classe::get_Parent(CATBaseDispatch *& oParent) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,5,&_Trac2,&oParent); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Parent(oParent); \
   ExitAfterCall(this,5,_Trac2,&_ret_arg,&oParent); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIASchAppCntrName##classe::get_Name(CATBSTR & oNameBSTR) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,6,&_Trac2,&oNameBSTR); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Name(oNameBSTR); \
   ExitAfterCall(this,6,_Trac2,&_ret_arg,&oNameBSTR); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIASchAppCntrName##classe::put_Name(const CATBSTR & iNameBSTR) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,7,&_Trac2,&iNameBSTR); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_Name(iNameBSTR); \
   ExitAfterCall(this,7,_Trac2,&_ret_arg,&iNameBSTR); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIASchAppCntrName##classe::GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,8,&_Trac2,&IDName,&RealObj); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetItem(IDName,RealObj); \
   ExitAfterCall(this,8,_Trac2,&_ret_arg,&IDName,&RealObj); \
   return(_ret_arg); \
} \



/* Macro used to link an implementation with an interface */
#define TIE_CATIASchAppCntrName(classe) \
 \
 \
declare_TIE_CATIASchAppCntrName(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIASchAppCntrName##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIASchAppCntrName,"CATIASchAppCntrName",CATIASchAppCntrName::MetaObject(),classe::MetaObject(),TIE); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIASchAppCntrName(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIECreation(CATIASchAppCntrName, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIASchAppCntrName##classe(classe::MetaObject(),CATIASchAppCntrName::MetaObject(),(void *)CreateTIECATIASchAppCntrName##classe)



/* Macro used to link an implementation with an interface */
/* This TIE is chained on the implementation object */
#define TIEchain_CATIASchAppCntrName(classe) \
 \
 \
declare_TIE_CATIASchAppCntrName(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIASchAppCntrName##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIASchAppCntrName,"CATIASchAppCntrName",CATIASchAppCntrName::MetaObject(),classe::MetaObject(),TIEchain); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIASchAppCntrName(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIEchainCreation(CATIASchAppCntrName, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIASchAppCntrName##classe(classe::MetaObject(),CATIASchAppCntrName::MetaObject(),(void *)CreateTIECATIASchAppCntrName##classe)


/* Macro to switch between BOA and TIE at build time */ 
#ifdef CATSYS_BOA_IS_TIE
#define BOA_CATIASchAppCntrName(classe) TIE_CATIASchAppCntrName(classe)
#else
#define BOA_CATIASchAppCntrName(classe) CATImplementBOA(CATIASchAppCntrName, classe)
#endif

#endif
