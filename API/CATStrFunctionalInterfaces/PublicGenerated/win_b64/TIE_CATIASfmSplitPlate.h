#ifndef __TIE_CATIASfmSplitPlate
#define __TIE_CATIASfmSplitPlate

#include <string.h>
#include "CATBaseUnknown.h"
#include "CATMetaClass.h"
#include "CATMacForTie.h"
#include "CATExitJournal.h"
#include "CATIASfmSplitPlate.h"
#include "JS0DSPA.h"


#ifdef _WINDOWS_SOURCE
#define Exported __declspec(dllexport)
#define Imported __declspec(dllimport)
#else
#define Exported 
#define Imported 
#endif


/* To link an implementation with the interface CATIASfmSplitPlate */
#define declare_TIE_CATIASfmSplitPlate(classe) \
 \
 \
class TIECATIASfmSplitPlate##classe : public CATIASfmSplitPlate \
{ \
   private: \
      CATDeclareCommonTIEMembers \
   public: \
      CATDeclareTIEMethods(CATIASfmSplitPlate, classe) \
      CATDeclareIUnknownMethodsForCATBaseUnknownTIE \
      CATDeclareIDispatchMethodsForCATBaseUnknownTIE \
      CATDeclareCATBaseUnknownMethodsForTIE \
      virtual HRESULT __stdcall GetWelds(CATIAReference * iOperatingEle, CATIASfmWelds *& oWelds); \
      virtual HRESULT  __stdcall get_Application(CATIAApplication *& oApplication); \
      virtual HRESULT  __stdcall get_Parent(CATBaseDispatch *& oParent); \
      virtual HRESULT  __stdcall get_Name(CATBSTR & oNameBSTR); \
      virtual HRESULT  __stdcall put_Name(const CATBSTR & iNameBSTR); \
      virtual HRESULT  __stdcall GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj); \
};



#define ENVTIEdeclare_CATIASfmSplitPlate(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
virtual HRESULT __stdcall GetWelds(CATIAReference * iOperatingEle, CATIASfmWelds *& oWelds); \
virtual HRESULT  __stdcall get_Application(CATIAApplication *& oApplication); \
virtual HRESULT  __stdcall get_Parent(CATBaseDispatch *& oParent); \
virtual HRESULT  __stdcall get_Name(CATBSTR & oNameBSTR); \
virtual HRESULT  __stdcall put_Name(const CATBSTR & iNameBSTR); \
virtual HRESULT  __stdcall GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj); \


#define ENVTIEdefine_CATIASfmSplitPlate(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
HRESULT __stdcall  ENVTIEName::GetWelds(CATIAReference * iOperatingEle, CATIASfmWelds *& oWelds) \
{ \
return (ENVTIECALL(CATIASfmSplitPlate,ENVTIETypeLetter,ENVTIELetter)GetWelds(iOperatingEle,oWelds)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Application(CATIAApplication *& oApplication) \
{ \
return (ENVTIECALL(CATIASfmSplitPlate,ENVTIETypeLetter,ENVTIELetter)get_Application(oApplication)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Parent(CATBaseDispatch *& oParent) \
{ \
return (ENVTIECALL(CATIASfmSplitPlate,ENVTIETypeLetter,ENVTIELetter)get_Parent(oParent)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Name(CATBSTR & oNameBSTR) \
{ \
return (ENVTIECALL(CATIASfmSplitPlate,ENVTIETypeLetter,ENVTIELetter)get_Name(oNameBSTR)); \
} \
HRESULT  __stdcall  ENVTIEName::put_Name(const CATBSTR & iNameBSTR) \
{ \
return (ENVTIECALL(CATIASfmSplitPlate,ENVTIETypeLetter,ENVTIELetter)put_Name(iNameBSTR)); \
} \
HRESULT  __stdcall  ENVTIEName::GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj) \
{ \
return (ENVTIECALL(CATIASfmSplitPlate,ENVTIETypeLetter,ENVTIELetter)GetItem(IDName,RealObj)); \
} \


/* Name of the TIE class */
#define class_TIE_CATIASfmSplitPlate(classe)    TIECATIASfmSplitPlate##classe


/* Common methods inside a TIE */
#define common_TIE_CATIASfmSplitPlate(classe) \
 \
 \
/* Static initialization */ \
CATDefineCommonTIEMembers(CATIASfmSplitPlate, classe) \
 \
 \
CATImplementTIEMethods(CATIASfmSplitPlate, classe) \
CATImplementIUnknownMethodsForCATBaseUnknownTIE(CATIASfmSplitPlate, classe, 2) \
CATImplementIDispatchMethodsForCATBaseUnknownTIE(CATIASfmSplitPlate, classe) \
CATImplementCATBaseUnknownMethodsForTIE(CATIASfmSplitPlate, classe) \
 \
HRESULT __stdcall  TIECATIASfmSplitPlate##classe::GetWelds(CATIAReference * iOperatingEle, CATIASfmWelds *& oWelds) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,1,&_Trac2,&iOperatingEle,&oWelds); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetWelds(iOperatingEle,oWelds); \
   ExitAfterCall(this,1,_Trac2,&_ret_arg,&iOperatingEle,&oWelds); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIASfmSplitPlate##classe::get_Application(CATIAApplication *& oApplication) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,2,&_Trac2,&oApplication); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Application(oApplication); \
   ExitAfterCall(this,2,_Trac2,&_ret_arg,&oApplication); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIASfmSplitPlate##classe::get_Parent(CATBaseDispatch *& oParent) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,3,&_Trac2,&oParent); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Parent(oParent); \
   ExitAfterCall(this,3,_Trac2,&_ret_arg,&oParent); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIASfmSplitPlate##classe::get_Name(CATBSTR & oNameBSTR) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,4,&_Trac2,&oNameBSTR); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Name(oNameBSTR); \
   ExitAfterCall(this,4,_Trac2,&_ret_arg,&oNameBSTR); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIASfmSplitPlate##classe::put_Name(const CATBSTR & iNameBSTR) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,5,&_Trac2,&iNameBSTR); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_Name(iNameBSTR); \
   ExitAfterCall(this,5,_Trac2,&_ret_arg,&iNameBSTR); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIASfmSplitPlate##classe::GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,6,&_Trac2,&IDName,&RealObj); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetItem(IDName,RealObj); \
   ExitAfterCall(this,6,_Trac2,&_ret_arg,&IDName,&RealObj); \
   return(_ret_arg); \
} \



/* Macro used to link an implementation with an interface */
#define TIE_CATIASfmSplitPlate(classe) \
 \
 \
declare_TIE_CATIASfmSplitPlate(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIASfmSplitPlate##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIASfmSplitPlate,"CATIASfmSplitPlate",CATIASfmSplitPlate::MetaObject(),classe::MetaObject(),TIE); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIASfmSplitPlate(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIECreation(CATIASfmSplitPlate, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIASfmSplitPlate##classe(classe::MetaObject(),CATIASfmSplitPlate::MetaObject(),(void *)CreateTIECATIASfmSplitPlate##classe)



/* Macro used to link an implementation with an interface */
/* This TIE is chained on the implementation object */
#define TIEchain_CATIASfmSplitPlate(classe) \
 \
 \
declare_TIE_CATIASfmSplitPlate(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIASfmSplitPlate##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIASfmSplitPlate,"CATIASfmSplitPlate",CATIASfmSplitPlate::MetaObject(),classe::MetaObject(),TIEchain); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIASfmSplitPlate(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIEchainCreation(CATIASfmSplitPlate, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIASfmSplitPlate##classe(classe::MetaObject(),CATIASfmSplitPlate::MetaObject(),(void *)CreateTIECATIASfmSplitPlate##classe)


/* Macro to switch between BOA and TIE at build time */ 
#ifdef CATSYS_BOA_IS_TIE
#define BOA_CATIASfmSplitPlate(classe) TIE_CATIASfmSplitPlate(classe)
#else
#define BOA_CATIASfmSplitPlate(classe) CATImplementBOA(CATIASfmSplitPlate, classe)
#endif

#endif
