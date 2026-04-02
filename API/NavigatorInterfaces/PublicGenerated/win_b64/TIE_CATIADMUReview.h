#ifndef __TIE_CATIADMUReview
#define __TIE_CATIADMUReview

#include <string.h>
#include "CATBaseUnknown.h"
#include "CATMetaClass.h"
#include "CATMacForTie.h"
#include "CATExitJournal.h"
#include "CATIADMUReview.h"
#include "JS0DSPA.h"


#ifdef _WINDOWS_SOURCE
#define Exported __declspec(dllexport)
#define Imported __declspec(dllimport)
#else
#define Exported 
#define Imported 
#endif


/* To link an implementation with the interface CATIADMUReview */
#define declare_TIE_CATIADMUReview(classe) \
 \
 \
class TIECATIADMUReview##classe : public CATIADMUReview \
{ \
   private: \
      CATDeclareCommonTIEMembers \
   public: \
      CATDeclareTIEMethods(CATIADMUReview, classe) \
      CATDeclareIUnknownMethodsForCATBaseUnknownTIE \
      CATDeclareIDispatchMethodsForCATBaseUnknownTIE \
      CATDeclareCATBaseUnknownMethodsForTIE \
      virtual HRESULT __stdcall get_Activation(CATLONG & oMode); \
      virtual HRESULT __stdcall put_Activation(CATLONG iMode); \
      virtual HRESULT __stdcall get_DMUReviews(CATIADMUReviews *& oDMUReviews); \
      virtual HRESULT  __stdcall get_Application(CATIAApplication *& oApplication); \
      virtual HRESULT  __stdcall get_Parent(CATBaseDispatch *& oParent); \
      virtual HRESULT  __stdcall get_Name(CATBSTR & oNameBSTR); \
      virtual HRESULT  __stdcall put_Name(const CATBSTR & iNameBSTR); \
      virtual HRESULT  __stdcall GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj); \
};



#define ENVTIEdeclare_CATIADMUReview(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
virtual HRESULT __stdcall get_Activation(CATLONG & oMode); \
virtual HRESULT __stdcall put_Activation(CATLONG iMode); \
virtual HRESULT __stdcall get_DMUReviews(CATIADMUReviews *& oDMUReviews); \
virtual HRESULT  __stdcall get_Application(CATIAApplication *& oApplication); \
virtual HRESULT  __stdcall get_Parent(CATBaseDispatch *& oParent); \
virtual HRESULT  __stdcall get_Name(CATBSTR & oNameBSTR); \
virtual HRESULT  __stdcall put_Name(const CATBSTR & iNameBSTR); \
virtual HRESULT  __stdcall GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj); \


#define ENVTIEdefine_CATIADMUReview(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
HRESULT __stdcall  ENVTIEName::get_Activation(CATLONG & oMode) \
{ \
return (ENVTIECALL(CATIADMUReview,ENVTIETypeLetter,ENVTIELetter)get_Activation(oMode)); \
} \
HRESULT __stdcall  ENVTIEName::put_Activation(CATLONG iMode) \
{ \
return (ENVTIECALL(CATIADMUReview,ENVTIETypeLetter,ENVTIELetter)put_Activation(iMode)); \
} \
HRESULT __stdcall  ENVTIEName::get_DMUReviews(CATIADMUReviews *& oDMUReviews) \
{ \
return (ENVTIECALL(CATIADMUReview,ENVTIETypeLetter,ENVTIELetter)get_DMUReviews(oDMUReviews)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Application(CATIAApplication *& oApplication) \
{ \
return (ENVTIECALL(CATIADMUReview,ENVTIETypeLetter,ENVTIELetter)get_Application(oApplication)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Parent(CATBaseDispatch *& oParent) \
{ \
return (ENVTIECALL(CATIADMUReview,ENVTIETypeLetter,ENVTIELetter)get_Parent(oParent)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Name(CATBSTR & oNameBSTR) \
{ \
return (ENVTIECALL(CATIADMUReview,ENVTIETypeLetter,ENVTIELetter)get_Name(oNameBSTR)); \
} \
HRESULT  __stdcall  ENVTIEName::put_Name(const CATBSTR & iNameBSTR) \
{ \
return (ENVTIECALL(CATIADMUReview,ENVTIETypeLetter,ENVTIELetter)put_Name(iNameBSTR)); \
} \
HRESULT  __stdcall  ENVTIEName::GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj) \
{ \
return (ENVTIECALL(CATIADMUReview,ENVTIETypeLetter,ENVTIELetter)GetItem(IDName,RealObj)); \
} \


/* Name of the TIE class */
#define class_TIE_CATIADMUReview(classe)    TIECATIADMUReview##classe


/* Common methods inside a TIE */
#define common_TIE_CATIADMUReview(classe) \
 \
 \
/* Static initialization */ \
CATDefineCommonTIEMembers(CATIADMUReview, classe) \
 \
 \
CATImplementTIEMethods(CATIADMUReview, classe) \
CATImplementIUnknownMethodsForCATBaseUnknownTIE(CATIADMUReview, classe, 2) \
CATImplementIDispatchMethodsForCATBaseUnknownTIE(CATIADMUReview, classe) \
CATImplementCATBaseUnknownMethodsForTIE(CATIADMUReview, classe) \
 \
HRESULT __stdcall  TIECATIADMUReview##classe::get_Activation(CATLONG & oMode) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,1,&_Trac2,&oMode); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Activation(oMode); \
   ExitAfterCall(this,1,_Trac2,&_ret_arg,&oMode); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIADMUReview##classe::put_Activation(CATLONG iMode) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,2,&_Trac2,&iMode); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_Activation(iMode); \
   ExitAfterCall(this,2,_Trac2,&_ret_arg,&iMode); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIADMUReview##classe::get_DMUReviews(CATIADMUReviews *& oDMUReviews) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,3,&_Trac2,&oDMUReviews); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_DMUReviews(oDMUReviews); \
   ExitAfterCall(this,3,_Trac2,&_ret_arg,&oDMUReviews); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIADMUReview##classe::get_Application(CATIAApplication *& oApplication) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,4,&_Trac2,&oApplication); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Application(oApplication); \
   ExitAfterCall(this,4,_Trac2,&_ret_arg,&oApplication); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIADMUReview##classe::get_Parent(CATBaseDispatch *& oParent) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,5,&_Trac2,&oParent); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Parent(oParent); \
   ExitAfterCall(this,5,_Trac2,&_ret_arg,&oParent); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIADMUReview##classe::get_Name(CATBSTR & oNameBSTR) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,6,&_Trac2,&oNameBSTR); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Name(oNameBSTR); \
   ExitAfterCall(this,6,_Trac2,&_ret_arg,&oNameBSTR); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIADMUReview##classe::put_Name(const CATBSTR & iNameBSTR) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,7,&_Trac2,&iNameBSTR); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_Name(iNameBSTR); \
   ExitAfterCall(this,7,_Trac2,&_ret_arg,&iNameBSTR); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIADMUReview##classe::GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,8,&_Trac2,&IDName,&RealObj); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetItem(IDName,RealObj); \
   ExitAfterCall(this,8,_Trac2,&_ret_arg,&IDName,&RealObj); \
   return(_ret_arg); \
} \



/* Macro used to link an implementation with an interface */
#define TIE_CATIADMUReview(classe) \
 \
 \
declare_TIE_CATIADMUReview(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIADMUReview##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIADMUReview,"CATIADMUReview",CATIADMUReview::MetaObject(),classe::MetaObject(),TIE); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIADMUReview(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIECreation(CATIADMUReview, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIADMUReview##classe(classe::MetaObject(),CATIADMUReview::MetaObject(),(void *)CreateTIECATIADMUReview##classe)



/* Macro used to link an implementation with an interface */
/* This TIE is chained on the implementation object */
#define TIEchain_CATIADMUReview(classe) \
 \
 \
declare_TIE_CATIADMUReview(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIADMUReview##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIADMUReview,"CATIADMUReview",CATIADMUReview::MetaObject(),classe::MetaObject(),TIEchain); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIADMUReview(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIEchainCreation(CATIADMUReview, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIADMUReview##classe(classe::MetaObject(),CATIADMUReview::MetaObject(),(void *)CreateTIECATIADMUReview##classe)


/* Macro to switch between BOA and TIE at build time */ 
#ifdef CATSYS_BOA_IS_TIE
#define BOA_CATIADMUReview(classe) TIE_CATIADMUReview(classe)
#else
#define BOA_CATIADMUReview(classe) CATImplementBOA(CATIADMUReview, classe)
#endif

#endif
