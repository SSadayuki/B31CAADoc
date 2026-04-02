#ifndef __TIE_CATIASchAppReplace
#define __TIE_CATIASchAppReplace

#include <string.h>
#include "CATBaseUnknown.h"
#include "CATMetaClass.h"
#include "CATMacForTie.h"
#include "CATExitJournal.h"
#include "CATIASchAppReplace.h"
#include "JS0DSPA.h"


#ifdef _WINDOWS_SOURCE
#define Exported __declspec(dllexport)
#define Imported __declspec(dllimport)
#else
#define Exported 
#define Imported 
#endif


/* To link an implementation with the interface CATIASchAppReplace */
#define declare_TIE_CATIASchAppReplace(classe) \
 \
 \
class TIECATIASchAppReplace##classe : public CATIASchAppReplace \
{ \
   private: \
      CATDeclareCommonTIEMembers \
   public: \
      CATDeclareTIEMethods(CATIASchAppReplace, classe) \
      CATDeclareIUnknownMethodsForCATBaseUnknownTIE \
      CATDeclareIDispatchMethodsForCATBaseUnknownTIE \
      CATDeclareCATBaseUnknownMethodsForTIE \
      virtual HRESULT __stdcall AppOKToReplace(CATIABase * iSchObjectToBeReplacedByThis, CAT_VARIANT_BOOL & oBYes); \
      virtual HRESULT __stdcall AppPostReplaceProcess(CATIABase * iSchObjectToBeReplacedByThis); \
      virtual HRESULT  __stdcall get_Application(CATIAApplication *& oApplication); \
      virtual HRESULT  __stdcall get_Parent(CATBaseDispatch *& oParent); \
      virtual HRESULT  __stdcall get_Name(CATBSTR & oNameBSTR); \
      virtual HRESULT  __stdcall put_Name(const CATBSTR & iNameBSTR); \
      virtual HRESULT  __stdcall GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj); \
};



#define ENVTIEdeclare_CATIASchAppReplace(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
virtual HRESULT __stdcall AppOKToReplace(CATIABase * iSchObjectToBeReplacedByThis, CAT_VARIANT_BOOL & oBYes); \
virtual HRESULT __stdcall AppPostReplaceProcess(CATIABase * iSchObjectToBeReplacedByThis); \
virtual HRESULT  __stdcall get_Application(CATIAApplication *& oApplication); \
virtual HRESULT  __stdcall get_Parent(CATBaseDispatch *& oParent); \
virtual HRESULT  __stdcall get_Name(CATBSTR & oNameBSTR); \
virtual HRESULT  __stdcall put_Name(const CATBSTR & iNameBSTR); \
virtual HRESULT  __stdcall GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj); \


#define ENVTIEdefine_CATIASchAppReplace(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
HRESULT __stdcall  ENVTIEName::AppOKToReplace(CATIABase * iSchObjectToBeReplacedByThis, CAT_VARIANT_BOOL & oBYes) \
{ \
return (ENVTIECALL(CATIASchAppReplace,ENVTIETypeLetter,ENVTIELetter)AppOKToReplace(iSchObjectToBeReplacedByThis,oBYes)); \
} \
HRESULT __stdcall  ENVTIEName::AppPostReplaceProcess(CATIABase * iSchObjectToBeReplacedByThis) \
{ \
return (ENVTIECALL(CATIASchAppReplace,ENVTIETypeLetter,ENVTIELetter)AppPostReplaceProcess(iSchObjectToBeReplacedByThis)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Application(CATIAApplication *& oApplication) \
{ \
return (ENVTIECALL(CATIASchAppReplace,ENVTIETypeLetter,ENVTIELetter)get_Application(oApplication)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Parent(CATBaseDispatch *& oParent) \
{ \
return (ENVTIECALL(CATIASchAppReplace,ENVTIETypeLetter,ENVTIELetter)get_Parent(oParent)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Name(CATBSTR & oNameBSTR) \
{ \
return (ENVTIECALL(CATIASchAppReplace,ENVTIETypeLetter,ENVTIELetter)get_Name(oNameBSTR)); \
} \
HRESULT  __stdcall  ENVTIEName::put_Name(const CATBSTR & iNameBSTR) \
{ \
return (ENVTIECALL(CATIASchAppReplace,ENVTIETypeLetter,ENVTIELetter)put_Name(iNameBSTR)); \
} \
HRESULT  __stdcall  ENVTIEName::GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj) \
{ \
return (ENVTIECALL(CATIASchAppReplace,ENVTIETypeLetter,ENVTIELetter)GetItem(IDName,RealObj)); \
} \


/* Name of the TIE class */
#define class_TIE_CATIASchAppReplace(classe)    TIECATIASchAppReplace##classe


/* Common methods inside a TIE */
#define common_TIE_CATIASchAppReplace(classe) \
 \
 \
/* Static initialization */ \
CATDefineCommonTIEMembers(CATIASchAppReplace, classe) \
 \
 \
CATImplementTIEMethods(CATIASchAppReplace, classe) \
CATImplementIUnknownMethodsForCATBaseUnknownTIE(CATIASchAppReplace, classe, 2) \
CATImplementIDispatchMethodsForCATBaseUnknownTIE(CATIASchAppReplace, classe) \
CATImplementCATBaseUnknownMethodsForTIE(CATIASchAppReplace, classe) \
 \
HRESULT __stdcall  TIECATIASchAppReplace##classe::AppOKToReplace(CATIABase * iSchObjectToBeReplacedByThis, CAT_VARIANT_BOOL & oBYes) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,1,&_Trac2,&iSchObjectToBeReplacedByThis,&oBYes); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->AppOKToReplace(iSchObjectToBeReplacedByThis,oBYes); \
   ExitAfterCall(this,1,_Trac2,&_ret_arg,&iSchObjectToBeReplacedByThis,&oBYes); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIASchAppReplace##classe::AppPostReplaceProcess(CATIABase * iSchObjectToBeReplacedByThis) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,2,&_Trac2,&iSchObjectToBeReplacedByThis); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->AppPostReplaceProcess(iSchObjectToBeReplacedByThis); \
   ExitAfterCall(this,2,_Trac2,&_ret_arg,&iSchObjectToBeReplacedByThis); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIASchAppReplace##classe::get_Application(CATIAApplication *& oApplication) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,3,&_Trac2,&oApplication); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Application(oApplication); \
   ExitAfterCall(this,3,_Trac2,&_ret_arg,&oApplication); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIASchAppReplace##classe::get_Parent(CATBaseDispatch *& oParent) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,4,&_Trac2,&oParent); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Parent(oParent); \
   ExitAfterCall(this,4,_Trac2,&_ret_arg,&oParent); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIASchAppReplace##classe::get_Name(CATBSTR & oNameBSTR) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,5,&_Trac2,&oNameBSTR); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Name(oNameBSTR); \
   ExitAfterCall(this,5,_Trac2,&_ret_arg,&oNameBSTR); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIASchAppReplace##classe::put_Name(const CATBSTR & iNameBSTR) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,6,&_Trac2,&iNameBSTR); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_Name(iNameBSTR); \
   ExitAfterCall(this,6,_Trac2,&_ret_arg,&iNameBSTR); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIASchAppReplace##classe::GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,7,&_Trac2,&IDName,&RealObj); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetItem(IDName,RealObj); \
   ExitAfterCall(this,7,_Trac2,&_ret_arg,&IDName,&RealObj); \
   return(_ret_arg); \
} \



/* Macro used to link an implementation with an interface */
#define TIE_CATIASchAppReplace(classe) \
 \
 \
declare_TIE_CATIASchAppReplace(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIASchAppReplace##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIASchAppReplace,"CATIASchAppReplace",CATIASchAppReplace::MetaObject(),classe::MetaObject(),TIE); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIASchAppReplace(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIECreation(CATIASchAppReplace, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIASchAppReplace##classe(classe::MetaObject(),CATIASchAppReplace::MetaObject(),(void *)CreateTIECATIASchAppReplace##classe)



/* Macro used to link an implementation with an interface */
/* This TIE is chained on the implementation object */
#define TIEchain_CATIASchAppReplace(classe) \
 \
 \
declare_TIE_CATIASchAppReplace(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIASchAppReplace##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIASchAppReplace,"CATIASchAppReplace",CATIASchAppReplace::MetaObject(),classe::MetaObject(),TIEchain); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIASchAppReplace(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIEchainCreation(CATIASchAppReplace, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIASchAppReplace##classe(classe::MetaObject(),CATIASchAppReplace::MetaObject(),(void *)CreateTIECATIASchAppReplace##classe)


/* Macro to switch between BOA and TIE at build time */ 
#ifdef CATSYS_BOA_IS_TIE
#define BOA_CATIASchAppReplace(classe) TIE_CATIASchAppReplace(classe)
#else
#define BOA_CATIASchAppReplace(classe) CATImplementBOA(CATIASchAppReplace, classe)
#endif

#endif
