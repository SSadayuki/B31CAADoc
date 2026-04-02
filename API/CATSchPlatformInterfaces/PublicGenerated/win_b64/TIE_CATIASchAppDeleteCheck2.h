#ifndef __TIE_CATIASchAppDeleteCheck2
#define __TIE_CATIASchAppDeleteCheck2

#include <string.h>
#include "CATBaseUnknown.h"
#include "CATMetaClass.h"
#include "CATMacForTie.h"
#include "CATExitJournal.h"
#include "CATIASchAppDeleteCheck2.h"
#include "JS0DSPA.h"


#ifdef _WINDOWS_SOURCE
#define Exported __declspec(dllexport)
#define Imported __declspec(dllimport)
#else
#define Exported 
#define Imported 
#endif


/* To link an implementation with the interface CATIASchAppDeleteCheck2 */
#define declare_TIE_CATIASchAppDeleteCheck2(classe) \
 \
 \
class TIECATIASchAppDeleteCheck2##classe : public CATIASchAppDeleteCheck2 \
{ \
   private: \
      CATDeclareCommonTIEMembers \
   public: \
      CATDeclareTIEMethods(CATIASchAppDeleteCheck2, classe) \
      CATDeclareIUnknownMethodsForCATBaseUnknownTIE \
      CATDeclareIDispatchMethodsForCATBaseUnknownTIE \
      CATDeclareCATBaseUnknownMethodsForTIE \
      virtual HRESULT __stdcall AppOkToDelete(CAT_VARIANT_BOOL & oOk); \
      virtual HRESULT  __stdcall get_Application(CATIAApplication *& oApplication); \
      virtual HRESULT  __stdcall get_Parent(CATBaseDispatch *& oParent); \
      virtual HRESULT  __stdcall get_Name(CATBSTR & oNameBSTR); \
      virtual HRESULT  __stdcall put_Name(const CATBSTR & iNameBSTR); \
      virtual HRESULT  __stdcall GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj); \
};



#define ENVTIEdeclare_CATIASchAppDeleteCheck2(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
virtual HRESULT __stdcall AppOkToDelete(CAT_VARIANT_BOOL & oOk); \
virtual HRESULT  __stdcall get_Application(CATIAApplication *& oApplication); \
virtual HRESULT  __stdcall get_Parent(CATBaseDispatch *& oParent); \
virtual HRESULT  __stdcall get_Name(CATBSTR & oNameBSTR); \
virtual HRESULT  __stdcall put_Name(const CATBSTR & iNameBSTR); \
virtual HRESULT  __stdcall GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj); \


#define ENVTIEdefine_CATIASchAppDeleteCheck2(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
HRESULT __stdcall  ENVTIEName::AppOkToDelete(CAT_VARIANT_BOOL & oOk) \
{ \
return (ENVTIECALL(CATIASchAppDeleteCheck2,ENVTIETypeLetter,ENVTIELetter)AppOkToDelete(oOk)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Application(CATIAApplication *& oApplication) \
{ \
return (ENVTIECALL(CATIASchAppDeleteCheck2,ENVTIETypeLetter,ENVTIELetter)get_Application(oApplication)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Parent(CATBaseDispatch *& oParent) \
{ \
return (ENVTIECALL(CATIASchAppDeleteCheck2,ENVTIETypeLetter,ENVTIELetter)get_Parent(oParent)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Name(CATBSTR & oNameBSTR) \
{ \
return (ENVTIECALL(CATIASchAppDeleteCheck2,ENVTIETypeLetter,ENVTIELetter)get_Name(oNameBSTR)); \
} \
HRESULT  __stdcall  ENVTIEName::put_Name(const CATBSTR & iNameBSTR) \
{ \
return (ENVTIECALL(CATIASchAppDeleteCheck2,ENVTIETypeLetter,ENVTIELetter)put_Name(iNameBSTR)); \
} \
HRESULT  __stdcall  ENVTIEName::GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj) \
{ \
return (ENVTIECALL(CATIASchAppDeleteCheck2,ENVTIETypeLetter,ENVTIELetter)GetItem(IDName,RealObj)); \
} \


/* Name of the TIE class */
#define class_TIE_CATIASchAppDeleteCheck2(classe)    TIECATIASchAppDeleteCheck2##classe


/* Common methods inside a TIE */
#define common_TIE_CATIASchAppDeleteCheck2(classe) \
 \
 \
/* Static initialization */ \
CATDefineCommonTIEMembers(CATIASchAppDeleteCheck2, classe) \
 \
 \
CATImplementTIEMethods(CATIASchAppDeleteCheck2, classe) \
CATImplementIUnknownMethodsForCATBaseUnknownTIE(CATIASchAppDeleteCheck2, classe, 2) \
CATImplementIDispatchMethodsForCATBaseUnknownTIE(CATIASchAppDeleteCheck2, classe) \
CATImplementCATBaseUnknownMethodsForTIE(CATIASchAppDeleteCheck2, classe) \
 \
HRESULT __stdcall  TIECATIASchAppDeleteCheck2##classe::AppOkToDelete(CAT_VARIANT_BOOL & oOk) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,1,&_Trac2,&oOk); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->AppOkToDelete(oOk); \
   ExitAfterCall(this,1,_Trac2,&_ret_arg,&oOk); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIASchAppDeleteCheck2##classe::get_Application(CATIAApplication *& oApplication) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,2,&_Trac2,&oApplication); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Application(oApplication); \
   ExitAfterCall(this,2,_Trac2,&_ret_arg,&oApplication); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIASchAppDeleteCheck2##classe::get_Parent(CATBaseDispatch *& oParent) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,3,&_Trac2,&oParent); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Parent(oParent); \
   ExitAfterCall(this,3,_Trac2,&_ret_arg,&oParent); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIASchAppDeleteCheck2##classe::get_Name(CATBSTR & oNameBSTR) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,4,&_Trac2,&oNameBSTR); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Name(oNameBSTR); \
   ExitAfterCall(this,4,_Trac2,&_ret_arg,&oNameBSTR); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIASchAppDeleteCheck2##classe::put_Name(const CATBSTR & iNameBSTR) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,5,&_Trac2,&iNameBSTR); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_Name(iNameBSTR); \
   ExitAfterCall(this,5,_Trac2,&_ret_arg,&iNameBSTR); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIASchAppDeleteCheck2##classe::GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,6,&_Trac2,&IDName,&RealObj); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetItem(IDName,RealObj); \
   ExitAfterCall(this,6,_Trac2,&_ret_arg,&IDName,&RealObj); \
   return(_ret_arg); \
} \



/* Macro used to link an implementation with an interface */
#define TIE_CATIASchAppDeleteCheck2(classe) \
 \
 \
declare_TIE_CATIASchAppDeleteCheck2(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIASchAppDeleteCheck2##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIASchAppDeleteCheck2,"CATIASchAppDeleteCheck2",CATIASchAppDeleteCheck2::MetaObject(),classe::MetaObject(),TIE); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIASchAppDeleteCheck2(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIECreation(CATIASchAppDeleteCheck2, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIASchAppDeleteCheck2##classe(classe::MetaObject(),CATIASchAppDeleteCheck2::MetaObject(),(void *)CreateTIECATIASchAppDeleteCheck2##classe)



/* Macro used to link an implementation with an interface */
/* This TIE is chained on the implementation object */
#define TIEchain_CATIASchAppDeleteCheck2(classe) \
 \
 \
declare_TIE_CATIASchAppDeleteCheck2(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIASchAppDeleteCheck2##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIASchAppDeleteCheck2,"CATIASchAppDeleteCheck2",CATIASchAppDeleteCheck2::MetaObject(),classe::MetaObject(),TIEchain); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIASchAppDeleteCheck2(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIEchainCreation(CATIASchAppDeleteCheck2, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIASchAppDeleteCheck2##classe(classe::MetaObject(),CATIASchAppDeleteCheck2::MetaObject(),(void *)CreateTIECATIASchAppDeleteCheck2##classe)


/* Macro to switch between BOA and TIE at build time */ 
#ifdef CATSYS_BOA_IS_TIE
#define BOA_CATIASchAppDeleteCheck2(classe) TIE_CATIASchAppDeleteCheck2(classe)
#else
#define BOA_CATIASchAppDeleteCheck2(classe) CATImplementBOA(CATIASchAppDeleteCheck2, classe)
#endif

#endif
