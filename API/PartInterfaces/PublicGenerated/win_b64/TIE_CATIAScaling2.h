#ifndef __TIE_CATIAScaling2
#define __TIE_CATIAScaling2

#include <string.h>
#include "CATBaseUnknown.h"
#include "CATMetaClass.h"
#include "CATMacForTie.h"
#include "CATExitJournal.h"
#include "CATIAScaling2.h"
#include "JS0DSPA.h"


#ifdef _WINDOWS_SOURCE
#define Exported __declspec(dllexport)
#define Imported __declspec(dllimport)
#else
#define Exported 
#define Imported 
#endif


/* To link an implementation with the interface CATIAScaling2 */
#define declare_TIE_CATIAScaling2(classe) \
 \
 \
class TIECATIAScaling2##classe : public CATIAScaling2 \
{ \
   private: \
      CATDeclareCommonTIEMembers \
   public: \
      CATDeclareTIEMethods(CATIAScaling2, classe) \
      CATDeclareIUnknownMethodsForCATBaseUnknownTIE \
      CATDeclareIDispatchMethodsForCATBaseUnknownTIE \
      CATDeclareCATBaseUnknownMethodsForTIE \
      virtual HRESULT __stdcall get_ElemToScale(CATIAReference *& oX); \
      virtual HRESULT __stdcall put_ElemToScale(CATIAReference * iX); \
      virtual HRESULT __stdcall get_Center(CATIAReference *& oX); \
      virtual HRESULT __stdcall put_Center(CATIAReference * iX); \
      virtual HRESULT __stdcall get_Ratio(CATIARealParam *& oX); \
      virtual HRESULT __stdcall get_RatioValue(double & oX); \
      virtual HRESULT __stdcall put_RatioValue(double iX); \
      virtual HRESULT  __stdcall get_Application(CATIAApplication *& oApplication); \
      virtual HRESULT  __stdcall get_Parent(CATBaseDispatch *& oParent); \
      virtual HRESULT  __stdcall get_Name(CATBSTR & oNameBSTR); \
      virtual HRESULT  __stdcall put_Name(const CATBSTR & iNameBSTR); \
      virtual HRESULT  __stdcall GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj); \
};



#define ENVTIEdeclare_CATIAScaling2(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
virtual HRESULT __stdcall get_ElemToScale(CATIAReference *& oX); \
virtual HRESULT __stdcall put_ElemToScale(CATIAReference * iX); \
virtual HRESULT __stdcall get_Center(CATIAReference *& oX); \
virtual HRESULT __stdcall put_Center(CATIAReference * iX); \
virtual HRESULT __stdcall get_Ratio(CATIARealParam *& oX); \
virtual HRESULT __stdcall get_RatioValue(double & oX); \
virtual HRESULT __stdcall put_RatioValue(double iX); \
virtual HRESULT  __stdcall get_Application(CATIAApplication *& oApplication); \
virtual HRESULT  __stdcall get_Parent(CATBaseDispatch *& oParent); \
virtual HRESULT  __stdcall get_Name(CATBSTR & oNameBSTR); \
virtual HRESULT  __stdcall put_Name(const CATBSTR & iNameBSTR); \
virtual HRESULT  __stdcall GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj); \


#define ENVTIEdefine_CATIAScaling2(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
HRESULT __stdcall  ENVTIEName::get_ElemToScale(CATIAReference *& oX) \
{ \
return (ENVTIECALL(CATIAScaling2,ENVTIETypeLetter,ENVTIELetter)get_ElemToScale(oX)); \
} \
HRESULT __stdcall  ENVTIEName::put_ElemToScale(CATIAReference * iX) \
{ \
return (ENVTIECALL(CATIAScaling2,ENVTIETypeLetter,ENVTIELetter)put_ElemToScale(iX)); \
} \
HRESULT __stdcall  ENVTIEName::get_Center(CATIAReference *& oX) \
{ \
return (ENVTIECALL(CATIAScaling2,ENVTIETypeLetter,ENVTIELetter)get_Center(oX)); \
} \
HRESULT __stdcall  ENVTIEName::put_Center(CATIAReference * iX) \
{ \
return (ENVTIECALL(CATIAScaling2,ENVTIETypeLetter,ENVTIELetter)put_Center(iX)); \
} \
HRESULT __stdcall  ENVTIEName::get_Ratio(CATIARealParam *& oX) \
{ \
return (ENVTIECALL(CATIAScaling2,ENVTIETypeLetter,ENVTIELetter)get_Ratio(oX)); \
} \
HRESULT __stdcall  ENVTIEName::get_RatioValue(double & oX) \
{ \
return (ENVTIECALL(CATIAScaling2,ENVTIETypeLetter,ENVTIELetter)get_RatioValue(oX)); \
} \
HRESULT __stdcall  ENVTIEName::put_RatioValue(double iX) \
{ \
return (ENVTIECALL(CATIAScaling2,ENVTIETypeLetter,ENVTIELetter)put_RatioValue(iX)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Application(CATIAApplication *& oApplication) \
{ \
return (ENVTIECALL(CATIAScaling2,ENVTIETypeLetter,ENVTIELetter)get_Application(oApplication)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Parent(CATBaseDispatch *& oParent) \
{ \
return (ENVTIECALL(CATIAScaling2,ENVTIETypeLetter,ENVTIELetter)get_Parent(oParent)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Name(CATBSTR & oNameBSTR) \
{ \
return (ENVTIECALL(CATIAScaling2,ENVTIETypeLetter,ENVTIELetter)get_Name(oNameBSTR)); \
} \
HRESULT  __stdcall  ENVTIEName::put_Name(const CATBSTR & iNameBSTR) \
{ \
return (ENVTIECALL(CATIAScaling2,ENVTIETypeLetter,ENVTIELetter)put_Name(iNameBSTR)); \
} \
HRESULT  __stdcall  ENVTIEName::GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj) \
{ \
return (ENVTIECALL(CATIAScaling2,ENVTIETypeLetter,ENVTIELetter)GetItem(IDName,RealObj)); \
} \


/* Name of the TIE class */
#define class_TIE_CATIAScaling2(classe)    TIECATIAScaling2##classe


/* Common methods inside a TIE */
#define common_TIE_CATIAScaling2(classe) \
 \
 \
/* Static initialization */ \
CATDefineCommonTIEMembers(CATIAScaling2, classe) \
 \
 \
CATImplementTIEMethods(CATIAScaling2, classe) \
CATImplementIUnknownMethodsForCATBaseUnknownTIE(CATIAScaling2, classe, 2) \
CATImplementIDispatchMethodsForCATBaseUnknownTIE(CATIAScaling2, classe) \
CATImplementCATBaseUnknownMethodsForTIE(CATIAScaling2, classe) \
 \
HRESULT __stdcall  TIECATIAScaling2##classe::get_ElemToScale(CATIAReference *& oX) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,1,&_Trac2,&oX); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_ElemToScale(oX); \
   ExitAfterCall(this,1,_Trac2,&_ret_arg,&oX); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAScaling2##classe::put_ElemToScale(CATIAReference * iX) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,2,&_Trac2,&iX); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_ElemToScale(iX); \
   ExitAfterCall(this,2,_Trac2,&_ret_arg,&iX); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAScaling2##classe::get_Center(CATIAReference *& oX) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,3,&_Trac2,&oX); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Center(oX); \
   ExitAfterCall(this,3,_Trac2,&_ret_arg,&oX); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAScaling2##classe::put_Center(CATIAReference * iX) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,4,&_Trac2,&iX); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_Center(iX); \
   ExitAfterCall(this,4,_Trac2,&_ret_arg,&iX); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAScaling2##classe::get_Ratio(CATIARealParam *& oX) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,5,&_Trac2,&oX); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Ratio(oX); \
   ExitAfterCall(this,5,_Trac2,&_ret_arg,&oX); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAScaling2##classe::get_RatioValue(double & oX) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,6,&_Trac2,&oX); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_RatioValue(oX); \
   ExitAfterCall(this,6,_Trac2,&_ret_arg,&oX); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAScaling2##classe::put_RatioValue(double iX) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,7,&_Trac2,&iX); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_RatioValue(iX); \
   ExitAfterCall(this,7,_Trac2,&_ret_arg,&iX); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAScaling2##classe::get_Application(CATIAApplication *& oApplication) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,8,&_Trac2,&oApplication); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Application(oApplication); \
   ExitAfterCall(this,8,_Trac2,&_ret_arg,&oApplication); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAScaling2##classe::get_Parent(CATBaseDispatch *& oParent) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,9,&_Trac2,&oParent); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Parent(oParent); \
   ExitAfterCall(this,9,_Trac2,&_ret_arg,&oParent); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAScaling2##classe::get_Name(CATBSTR & oNameBSTR) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,10,&_Trac2,&oNameBSTR); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Name(oNameBSTR); \
   ExitAfterCall(this,10,_Trac2,&_ret_arg,&oNameBSTR); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAScaling2##classe::put_Name(const CATBSTR & iNameBSTR) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,11,&_Trac2,&iNameBSTR); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_Name(iNameBSTR); \
   ExitAfterCall(this,11,_Trac2,&_ret_arg,&iNameBSTR); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAScaling2##classe::GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,12,&_Trac2,&IDName,&RealObj); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetItem(IDName,RealObj); \
   ExitAfterCall(this,12,_Trac2,&_ret_arg,&IDName,&RealObj); \
   return(_ret_arg); \
} \



/* Macro used to link an implementation with an interface */
#define TIE_CATIAScaling2(classe) \
 \
 \
declare_TIE_CATIAScaling2(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIAScaling2##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIAScaling2,"CATIAScaling2",CATIAScaling2::MetaObject(),classe::MetaObject(),TIE); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIAScaling2(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIECreation(CATIAScaling2, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIAScaling2##classe(classe::MetaObject(),CATIAScaling2::MetaObject(),(void *)CreateTIECATIAScaling2##classe)



/* Macro used to link an implementation with an interface */
/* This TIE is chained on the implementation object */
#define TIEchain_CATIAScaling2(classe) \
 \
 \
declare_TIE_CATIAScaling2(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIAScaling2##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIAScaling2,"CATIAScaling2",CATIAScaling2::MetaObject(),classe::MetaObject(),TIEchain); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIAScaling2(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIEchainCreation(CATIAScaling2, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIAScaling2##classe(classe::MetaObject(),CATIAScaling2::MetaObject(),(void *)CreateTIECATIAScaling2##classe)


/* Macro to switch between BOA and TIE at build time */ 
#ifdef CATSYS_BOA_IS_TIE
#define BOA_CATIAScaling2(classe) TIE_CATIAScaling2(classe)
#else
#define BOA_CATIAScaling2(classe) CATImplementBOA(CATIAScaling2, classe)
#endif

#endif
