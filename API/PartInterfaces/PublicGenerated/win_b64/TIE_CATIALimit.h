#ifndef __TIE_CATIALimit
#define __TIE_CATIALimit

#include <string.h>
#include "CATBaseUnknown.h"
#include "CATMetaClass.h"
#include "CATMacForTie.h"
#include "CATExitJournal.h"
#include "CATIALimit.h"
#include "JS0DSPA.h"


#ifdef _WINDOWS_SOURCE
#define Exported __declspec(dllexport)
#define Imported __declspec(dllimport)
#else
#define Exported 
#define Imported 
#endif


/* To link an implementation with the interface CATIALimit */
#define declare_TIE_CATIALimit(classe) \
 \
 \
class TIECATIALimit##classe : public CATIALimit \
{ \
   private: \
      CATDeclareCommonTIEMembers \
   public: \
      CATDeclareTIEMethods(CATIALimit, classe) \
      CATDeclareIUnknownMethodsForCATBaseUnknownTIE \
      CATDeclareIDispatchMethodsForCATBaseUnknownTIE \
      CATDeclareCATBaseUnknownMethodsForTIE \
      virtual HRESULT __stdcall get_LimitMode(CatLimitMode & oLimitMode); \
      virtual HRESULT __stdcall put_LimitMode(CatLimitMode iLimitMode); \
      virtual HRESULT __stdcall get_Dimension(CATIALength *& oDimension); \
      virtual HRESULT __stdcall get_LimitingElement(CATIAReference *& oLimitingElement); \
      virtual HRESULT __stdcall put_LimitingElement(CATIAReference * iLimitingElement); \
      virtual HRESULT  __stdcall get_Application(CATIAApplication *& oApplication); \
      virtual HRESULT  __stdcall get_Parent(CATBaseDispatch *& oParent); \
      virtual HRESULT  __stdcall get_Name(CATBSTR & oNameBSTR); \
      virtual HRESULT  __stdcall put_Name(const CATBSTR & iNameBSTR); \
      virtual HRESULT  __stdcall GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj); \
};



#define ENVTIEdeclare_CATIALimit(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
virtual HRESULT __stdcall get_LimitMode(CatLimitMode & oLimitMode); \
virtual HRESULT __stdcall put_LimitMode(CatLimitMode iLimitMode); \
virtual HRESULT __stdcall get_Dimension(CATIALength *& oDimension); \
virtual HRESULT __stdcall get_LimitingElement(CATIAReference *& oLimitingElement); \
virtual HRESULT __stdcall put_LimitingElement(CATIAReference * iLimitingElement); \
virtual HRESULT  __stdcall get_Application(CATIAApplication *& oApplication); \
virtual HRESULT  __stdcall get_Parent(CATBaseDispatch *& oParent); \
virtual HRESULT  __stdcall get_Name(CATBSTR & oNameBSTR); \
virtual HRESULT  __stdcall put_Name(const CATBSTR & iNameBSTR); \
virtual HRESULT  __stdcall GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj); \


#define ENVTIEdefine_CATIALimit(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
HRESULT __stdcall  ENVTIEName::get_LimitMode(CatLimitMode & oLimitMode) \
{ \
return (ENVTIECALL(CATIALimit,ENVTIETypeLetter,ENVTIELetter)get_LimitMode(oLimitMode)); \
} \
HRESULT __stdcall  ENVTIEName::put_LimitMode(CatLimitMode iLimitMode) \
{ \
return (ENVTIECALL(CATIALimit,ENVTIETypeLetter,ENVTIELetter)put_LimitMode(iLimitMode)); \
} \
HRESULT __stdcall  ENVTIEName::get_Dimension(CATIALength *& oDimension) \
{ \
return (ENVTIECALL(CATIALimit,ENVTIETypeLetter,ENVTIELetter)get_Dimension(oDimension)); \
} \
HRESULT __stdcall  ENVTIEName::get_LimitingElement(CATIAReference *& oLimitingElement) \
{ \
return (ENVTIECALL(CATIALimit,ENVTIETypeLetter,ENVTIELetter)get_LimitingElement(oLimitingElement)); \
} \
HRESULT __stdcall  ENVTIEName::put_LimitingElement(CATIAReference * iLimitingElement) \
{ \
return (ENVTIECALL(CATIALimit,ENVTIETypeLetter,ENVTIELetter)put_LimitingElement(iLimitingElement)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Application(CATIAApplication *& oApplication) \
{ \
return (ENVTIECALL(CATIALimit,ENVTIETypeLetter,ENVTIELetter)get_Application(oApplication)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Parent(CATBaseDispatch *& oParent) \
{ \
return (ENVTIECALL(CATIALimit,ENVTIETypeLetter,ENVTIELetter)get_Parent(oParent)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Name(CATBSTR & oNameBSTR) \
{ \
return (ENVTIECALL(CATIALimit,ENVTIETypeLetter,ENVTIELetter)get_Name(oNameBSTR)); \
} \
HRESULT  __stdcall  ENVTIEName::put_Name(const CATBSTR & iNameBSTR) \
{ \
return (ENVTIECALL(CATIALimit,ENVTIETypeLetter,ENVTIELetter)put_Name(iNameBSTR)); \
} \
HRESULT  __stdcall  ENVTIEName::GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj) \
{ \
return (ENVTIECALL(CATIALimit,ENVTIETypeLetter,ENVTIELetter)GetItem(IDName,RealObj)); \
} \


/* Name of the TIE class */
#define class_TIE_CATIALimit(classe)    TIECATIALimit##classe


/* Common methods inside a TIE */
#define common_TIE_CATIALimit(classe) \
 \
 \
/* Static initialization */ \
CATDefineCommonTIEMembers(CATIALimit, classe) \
 \
 \
CATImplementTIEMethods(CATIALimit, classe) \
CATImplementIUnknownMethodsForCATBaseUnknownTIE(CATIALimit, classe, 2) \
CATImplementIDispatchMethodsForCATBaseUnknownTIE(CATIALimit, classe) \
CATImplementCATBaseUnknownMethodsForTIE(CATIALimit, classe) \
 \
HRESULT __stdcall  TIECATIALimit##classe::get_LimitMode(CatLimitMode & oLimitMode) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,1,&_Trac2,&oLimitMode); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_LimitMode(oLimitMode); \
   ExitAfterCall(this,1,_Trac2,&_ret_arg,&oLimitMode); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIALimit##classe::put_LimitMode(CatLimitMode iLimitMode) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,2,&_Trac2,&iLimitMode); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_LimitMode(iLimitMode); \
   ExitAfterCall(this,2,_Trac2,&_ret_arg,&iLimitMode); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIALimit##classe::get_Dimension(CATIALength *& oDimension) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,3,&_Trac2,&oDimension); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Dimension(oDimension); \
   ExitAfterCall(this,3,_Trac2,&_ret_arg,&oDimension); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIALimit##classe::get_LimitingElement(CATIAReference *& oLimitingElement) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,4,&_Trac2,&oLimitingElement); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_LimitingElement(oLimitingElement); \
   ExitAfterCall(this,4,_Trac2,&_ret_arg,&oLimitingElement); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIALimit##classe::put_LimitingElement(CATIAReference * iLimitingElement) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,5,&_Trac2,&iLimitingElement); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_LimitingElement(iLimitingElement); \
   ExitAfterCall(this,5,_Trac2,&_ret_arg,&iLimitingElement); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIALimit##classe::get_Application(CATIAApplication *& oApplication) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,6,&_Trac2,&oApplication); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Application(oApplication); \
   ExitAfterCall(this,6,_Trac2,&_ret_arg,&oApplication); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIALimit##classe::get_Parent(CATBaseDispatch *& oParent) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,7,&_Trac2,&oParent); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Parent(oParent); \
   ExitAfterCall(this,7,_Trac2,&_ret_arg,&oParent); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIALimit##classe::get_Name(CATBSTR & oNameBSTR) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,8,&_Trac2,&oNameBSTR); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Name(oNameBSTR); \
   ExitAfterCall(this,8,_Trac2,&_ret_arg,&oNameBSTR); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIALimit##classe::put_Name(const CATBSTR & iNameBSTR) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,9,&_Trac2,&iNameBSTR); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_Name(iNameBSTR); \
   ExitAfterCall(this,9,_Trac2,&_ret_arg,&iNameBSTR); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIALimit##classe::GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,10,&_Trac2,&IDName,&RealObj); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetItem(IDName,RealObj); \
   ExitAfterCall(this,10,_Trac2,&_ret_arg,&IDName,&RealObj); \
   return(_ret_arg); \
} \



/* Macro used to link an implementation with an interface */
#define TIE_CATIALimit(classe) \
 \
 \
declare_TIE_CATIALimit(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIALimit##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIALimit,"CATIALimit",CATIALimit::MetaObject(),classe::MetaObject(),TIE); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIALimit(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIECreation(CATIALimit, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIALimit##classe(classe::MetaObject(),CATIALimit::MetaObject(),(void *)CreateTIECATIALimit##classe)



/* Macro used to link an implementation with an interface */
/* This TIE is chained on the implementation object */
#define TIEchain_CATIALimit(classe) \
 \
 \
declare_TIE_CATIALimit(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIALimit##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIALimit,"CATIALimit",CATIALimit::MetaObject(),classe::MetaObject(),TIEchain); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIALimit(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIEchainCreation(CATIALimit, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIALimit##classe(classe::MetaObject(),CATIALimit::MetaObject(),(void *)CreateTIECATIALimit##classe)


/* Macro to switch between BOA and TIE at build time */ 
#ifdef CATSYS_BOA_IS_TIE
#define BOA_CATIALimit(classe) TIE_CATIALimit(classe)
#else
#define BOA_CATIALimit(classe) CATImplementBOA(CATIALimit, classe)
#endif

#endif
