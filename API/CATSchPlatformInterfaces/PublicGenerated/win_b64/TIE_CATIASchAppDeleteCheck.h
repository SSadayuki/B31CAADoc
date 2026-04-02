#ifndef __TIE_CATIASchAppDeleteCheck
#define __TIE_CATIASchAppDeleteCheck

#include <string.h>
#include "CATBaseUnknown.h"
#include "CATMetaClass.h"
#include "CATMacForTie.h"
#include "CATExitJournal.h"
#include "CATIASchAppDeleteCheck.h"
#include "JS0DSPA.h"


#ifdef _WINDOWS_SOURCE
#define Exported __declspec(dllexport)
#define Imported __declspec(dllimport)
#else
#define Exported 
#define Imported 
#endif


/* To link an implementation with the interface CATIASchAppDeleteCheck */
#define declare_TIE_CATIASchAppDeleteCheck(classe) \
 \
 \
class TIECATIASchAppDeleteCheck##classe : public CATIASchAppDeleteCheck \
{ \
   private: \
      CATDeclareCommonTIEMembers \
   public: \
      CATDeclareTIEMethods(CATIASchAppDeleteCheck, classe) \
      CATDeclareIUnknownMethodsForCATBaseUnknownTIE \
      CATDeclareIDispatchMethodsForCATBaseUnknownTIE \
      CATDeclareCATBaseUnknownMethodsForTIE \
      virtual HRESULT __stdcall AppOkToDeleteWithoutWarning(CAT_VARIANT_BOOL & oOk); \
      virtual HRESULT __stdcall AppGetDeleteWarning(CATBSTR & oCaption, CATBSTR & oMessage); \
      virtual HRESULT  __stdcall get_Application(CATIAApplication *& oApplication); \
      virtual HRESULT  __stdcall get_Parent(CATBaseDispatch *& oParent); \
      virtual HRESULT  __stdcall get_Name(CATBSTR & oNameBSTR); \
      virtual HRESULT  __stdcall put_Name(const CATBSTR & iNameBSTR); \
      virtual HRESULT  __stdcall GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj); \
};



#define ENVTIEdeclare_CATIASchAppDeleteCheck(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
virtual HRESULT __stdcall AppOkToDeleteWithoutWarning(CAT_VARIANT_BOOL & oOk); \
virtual HRESULT __stdcall AppGetDeleteWarning(CATBSTR & oCaption, CATBSTR & oMessage); \
virtual HRESULT  __stdcall get_Application(CATIAApplication *& oApplication); \
virtual HRESULT  __stdcall get_Parent(CATBaseDispatch *& oParent); \
virtual HRESULT  __stdcall get_Name(CATBSTR & oNameBSTR); \
virtual HRESULT  __stdcall put_Name(const CATBSTR & iNameBSTR); \
virtual HRESULT  __stdcall GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj); \


#define ENVTIEdefine_CATIASchAppDeleteCheck(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
HRESULT __stdcall  ENVTIEName::AppOkToDeleteWithoutWarning(CAT_VARIANT_BOOL & oOk) \
{ \
return (ENVTIECALL(CATIASchAppDeleteCheck,ENVTIETypeLetter,ENVTIELetter)AppOkToDeleteWithoutWarning(oOk)); \
} \
HRESULT __stdcall  ENVTIEName::AppGetDeleteWarning(CATBSTR & oCaption, CATBSTR & oMessage) \
{ \
return (ENVTIECALL(CATIASchAppDeleteCheck,ENVTIETypeLetter,ENVTIELetter)AppGetDeleteWarning(oCaption,oMessage)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Application(CATIAApplication *& oApplication) \
{ \
return (ENVTIECALL(CATIASchAppDeleteCheck,ENVTIETypeLetter,ENVTIELetter)get_Application(oApplication)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Parent(CATBaseDispatch *& oParent) \
{ \
return (ENVTIECALL(CATIASchAppDeleteCheck,ENVTIETypeLetter,ENVTIELetter)get_Parent(oParent)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Name(CATBSTR & oNameBSTR) \
{ \
return (ENVTIECALL(CATIASchAppDeleteCheck,ENVTIETypeLetter,ENVTIELetter)get_Name(oNameBSTR)); \
} \
HRESULT  __stdcall  ENVTIEName::put_Name(const CATBSTR & iNameBSTR) \
{ \
return (ENVTIECALL(CATIASchAppDeleteCheck,ENVTIETypeLetter,ENVTIELetter)put_Name(iNameBSTR)); \
} \
HRESULT  __stdcall  ENVTIEName::GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj) \
{ \
return (ENVTIECALL(CATIASchAppDeleteCheck,ENVTIETypeLetter,ENVTIELetter)GetItem(IDName,RealObj)); \
} \


/* Name of the TIE class */
#define class_TIE_CATIASchAppDeleteCheck(classe)    TIECATIASchAppDeleteCheck##classe


/* Common methods inside a TIE */
#define common_TIE_CATIASchAppDeleteCheck(classe) \
 \
 \
/* Static initialization */ \
CATDefineCommonTIEMembers(CATIASchAppDeleteCheck, classe) \
 \
 \
CATImplementTIEMethods(CATIASchAppDeleteCheck, classe) \
CATImplementIUnknownMethodsForCATBaseUnknownTIE(CATIASchAppDeleteCheck, classe, 2) \
CATImplementIDispatchMethodsForCATBaseUnknownTIE(CATIASchAppDeleteCheck, classe) \
CATImplementCATBaseUnknownMethodsForTIE(CATIASchAppDeleteCheck, classe) \
 \
HRESULT __stdcall  TIECATIASchAppDeleteCheck##classe::AppOkToDeleteWithoutWarning(CAT_VARIANT_BOOL & oOk) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,1,&_Trac2,&oOk); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->AppOkToDeleteWithoutWarning(oOk); \
   ExitAfterCall(this,1,_Trac2,&_ret_arg,&oOk); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIASchAppDeleteCheck##classe::AppGetDeleteWarning(CATBSTR & oCaption, CATBSTR & oMessage) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,2,&_Trac2,&oCaption,&oMessage); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->AppGetDeleteWarning(oCaption,oMessage); \
   ExitAfterCall(this,2,_Trac2,&_ret_arg,&oCaption,&oMessage); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIASchAppDeleteCheck##classe::get_Application(CATIAApplication *& oApplication) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,3,&_Trac2,&oApplication); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Application(oApplication); \
   ExitAfterCall(this,3,_Trac2,&_ret_arg,&oApplication); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIASchAppDeleteCheck##classe::get_Parent(CATBaseDispatch *& oParent) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,4,&_Trac2,&oParent); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Parent(oParent); \
   ExitAfterCall(this,4,_Trac2,&_ret_arg,&oParent); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIASchAppDeleteCheck##classe::get_Name(CATBSTR & oNameBSTR) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,5,&_Trac2,&oNameBSTR); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Name(oNameBSTR); \
   ExitAfterCall(this,5,_Trac2,&_ret_arg,&oNameBSTR); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIASchAppDeleteCheck##classe::put_Name(const CATBSTR & iNameBSTR) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,6,&_Trac2,&iNameBSTR); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_Name(iNameBSTR); \
   ExitAfterCall(this,6,_Trac2,&_ret_arg,&iNameBSTR); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIASchAppDeleteCheck##classe::GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,7,&_Trac2,&IDName,&RealObj); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetItem(IDName,RealObj); \
   ExitAfterCall(this,7,_Trac2,&_ret_arg,&IDName,&RealObj); \
   return(_ret_arg); \
} \



/* Macro used to link an implementation with an interface */
#define TIE_CATIASchAppDeleteCheck(classe) \
 \
 \
declare_TIE_CATIASchAppDeleteCheck(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIASchAppDeleteCheck##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIASchAppDeleteCheck,"CATIASchAppDeleteCheck",CATIASchAppDeleteCheck::MetaObject(),classe::MetaObject(),TIE); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIASchAppDeleteCheck(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIECreation(CATIASchAppDeleteCheck, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIASchAppDeleteCheck##classe(classe::MetaObject(),CATIASchAppDeleteCheck::MetaObject(),(void *)CreateTIECATIASchAppDeleteCheck##classe)



/* Macro used to link an implementation with an interface */
/* This TIE is chained on the implementation object */
#define TIEchain_CATIASchAppDeleteCheck(classe) \
 \
 \
declare_TIE_CATIASchAppDeleteCheck(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIASchAppDeleteCheck##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIASchAppDeleteCheck,"CATIASchAppDeleteCheck",CATIASchAppDeleteCheck::MetaObject(),classe::MetaObject(),TIEchain); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIASchAppDeleteCheck(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIEchainCreation(CATIASchAppDeleteCheck, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIASchAppDeleteCheck##classe(classe::MetaObject(),CATIASchAppDeleteCheck::MetaObject(),(void *)CreateTIECATIASchAppDeleteCheck##classe)


/* Macro to switch between BOA and TIE at build time */ 
#ifdef CATSYS_BOA_IS_TIE
#define BOA_CATIASchAppDeleteCheck(classe) TIE_CATIASchAppDeleteCheck(classe)
#else
#define BOA_CATIASchAppDeleteCheck(classe) CATImplementBOA(CATIASchAppDeleteCheck, classe)
#endif

#endif
