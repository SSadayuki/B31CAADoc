#ifndef __TIE_CATIAMfgMachinableAreaMngt
#define __TIE_CATIAMfgMachinableAreaMngt

#include <string.h>
#include "CATBaseUnknown.h"
#include "CATMetaClass.h"
#include "CATMacForTie.h"
#include "CATExitJournal.h"
#include "CATIAMfgMachinableAreaMngt.h"
#include "JS0DSPA.h"


#ifdef _WINDOWS_SOURCE
#define Exported __declspec(dllexport)
#define Imported __declspec(dllimport)
#else
#define Exported 
#define Imported 
#endif


/* To link an implementation with the interface CATIAMfgMachinableAreaMngt */
#define declare_TIE_CATIAMfgMachinableAreaMngt(classe) \
 \
 \
class TIECATIAMfgMachinableAreaMngt##classe : public CATIAMfgMachinableAreaMngt \
{ \
   private: \
      CATDeclareCommonTIEMembers \
   public: \
      CATDeclareTIEMethods(CATIAMfgMachinableAreaMngt, classe) \
      CATDeclareIUnknownMethodsForCATBaseUnknownTIE \
      CATDeclareIDispatchMethodsForCATBaseUnknownTIE \
      CATDeclareCATBaseUnknownMethodsForTIE \
      virtual HRESULT __stdcall GetAllDatas(CATSafeArrayVariant *& oDatas); \
      virtual HRESULT  __stdcall get_Application(CATIAApplication *& oApplication); \
      virtual HRESULT  __stdcall get_Parent(CATBaseDispatch *& oParent); \
      virtual HRESULT  __stdcall get_Name(CATBSTR & oNameBSTR); \
      virtual HRESULT  __stdcall put_Name(const CATBSTR & iNameBSTR); \
      virtual HRESULT  __stdcall GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj); \
};



#define ENVTIEdeclare_CATIAMfgMachinableAreaMngt(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
virtual HRESULT __stdcall GetAllDatas(CATSafeArrayVariant *& oDatas); \
virtual HRESULT  __stdcall get_Application(CATIAApplication *& oApplication); \
virtual HRESULT  __stdcall get_Parent(CATBaseDispatch *& oParent); \
virtual HRESULT  __stdcall get_Name(CATBSTR & oNameBSTR); \
virtual HRESULT  __stdcall put_Name(const CATBSTR & iNameBSTR); \
virtual HRESULT  __stdcall GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj); \


#define ENVTIEdefine_CATIAMfgMachinableAreaMngt(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
HRESULT __stdcall  ENVTIEName::GetAllDatas(CATSafeArrayVariant *& oDatas) \
{ \
return (ENVTIECALL(CATIAMfgMachinableAreaMngt,ENVTIETypeLetter,ENVTIELetter)GetAllDatas(oDatas)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Application(CATIAApplication *& oApplication) \
{ \
return (ENVTIECALL(CATIAMfgMachinableAreaMngt,ENVTIETypeLetter,ENVTIELetter)get_Application(oApplication)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Parent(CATBaseDispatch *& oParent) \
{ \
return (ENVTIECALL(CATIAMfgMachinableAreaMngt,ENVTIETypeLetter,ENVTIELetter)get_Parent(oParent)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Name(CATBSTR & oNameBSTR) \
{ \
return (ENVTIECALL(CATIAMfgMachinableAreaMngt,ENVTIETypeLetter,ENVTIELetter)get_Name(oNameBSTR)); \
} \
HRESULT  __stdcall  ENVTIEName::put_Name(const CATBSTR & iNameBSTR) \
{ \
return (ENVTIECALL(CATIAMfgMachinableAreaMngt,ENVTIETypeLetter,ENVTIELetter)put_Name(iNameBSTR)); \
} \
HRESULT  __stdcall  ENVTIEName::GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj) \
{ \
return (ENVTIECALL(CATIAMfgMachinableAreaMngt,ENVTIETypeLetter,ENVTIELetter)GetItem(IDName,RealObj)); \
} \


/* Name of the TIE class */
#define class_TIE_CATIAMfgMachinableAreaMngt(classe)    TIECATIAMfgMachinableAreaMngt##classe


/* Common methods inside a TIE */
#define common_TIE_CATIAMfgMachinableAreaMngt(classe) \
 \
 \
/* Static initialization */ \
CATDefineCommonTIEMembers(CATIAMfgMachinableAreaMngt, classe) \
 \
 \
CATImplementTIEMethods(CATIAMfgMachinableAreaMngt, classe) \
CATImplementIUnknownMethodsForCATBaseUnknownTIE(CATIAMfgMachinableAreaMngt, classe, 2) \
CATImplementIDispatchMethodsForCATBaseUnknownTIE(CATIAMfgMachinableAreaMngt, classe) \
CATImplementCATBaseUnknownMethodsForTIE(CATIAMfgMachinableAreaMngt, classe) \
 \
HRESULT __stdcall  TIECATIAMfgMachinableAreaMngt##classe::GetAllDatas(CATSafeArrayVariant *& oDatas) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,1,&_Trac2,&oDatas); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetAllDatas(oDatas); \
   ExitAfterCall(this,1,_Trac2,&_ret_arg,&oDatas); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAMfgMachinableAreaMngt##classe::get_Application(CATIAApplication *& oApplication) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,2,&_Trac2,&oApplication); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Application(oApplication); \
   ExitAfterCall(this,2,_Trac2,&_ret_arg,&oApplication); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAMfgMachinableAreaMngt##classe::get_Parent(CATBaseDispatch *& oParent) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,3,&_Trac2,&oParent); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Parent(oParent); \
   ExitAfterCall(this,3,_Trac2,&_ret_arg,&oParent); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAMfgMachinableAreaMngt##classe::get_Name(CATBSTR & oNameBSTR) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,4,&_Trac2,&oNameBSTR); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Name(oNameBSTR); \
   ExitAfterCall(this,4,_Trac2,&_ret_arg,&oNameBSTR); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAMfgMachinableAreaMngt##classe::put_Name(const CATBSTR & iNameBSTR) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,5,&_Trac2,&iNameBSTR); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_Name(iNameBSTR); \
   ExitAfterCall(this,5,_Trac2,&_ret_arg,&iNameBSTR); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAMfgMachinableAreaMngt##classe::GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,6,&_Trac2,&IDName,&RealObj); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetItem(IDName,RealObj); \
   ExitAfterCall(this,6,_Trac2,&_ret_arg,&IDName,&RealObj); \
   return(_ret_arg); \
} \



/* Macro used to link an implementation with an interface */
#define TIE_CATIAMfgMachinableAreaMngt(classe) \
 \
 \
declare_TIE_CATIAMfgMachinableAreaMngt(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIAMfgMachinableAreaMngt##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIAMfgMachinableAreaMngt,"CATIAMfgMachinableAreaMngt",CATIAMfgMachinableAreaMngt::MetaObject(),classe::MetaObject(),TIE); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIAMfgMachinableAreaMngt(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIECreation(CATIAMfgMachinableAreaMngt, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIAMfgMachinableAreaMngt##classe(classe::MetaObject(),CATIAMfgMachinableAreaMngt::MetaObject(),(void *)CreateTIECATIAMfgMachinableAreaMngt##classe)



/* Macro used to link an implementation with an interface */
/* This TIE is chained on the implementation object */
#define TIEchain_CATIAMfgMachinableAreaMngt(classe) \
 \
 \
declare_TIE_CATIAMfgMachinableAreaMngt(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIAMfgMachinableAreaMngt##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIAMfgMachinableAreaMngt,"CATIAMfgMachinableAreaMngt",CATIAMfgMachinableAreaMngt::MetaObject(),classe::MetaObject(),TIEchain); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIAMfgMachinableAreaMngt(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIEchainCreation(CATIAMfgMachinableAreaMngt, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIAMfgMachinableAreaMngt##classe(classe::MetaObject(),CATIAMfgMachinableAreaMngt::MetaObject(),(void *)CreateTIECATIAMfgMachinableAreaMngt##classe)


/* Macro to switch between BOA and TIE at build time */ 
#ifdef CATSYS_BOA_IS_TIE
#define BOA_CATIAMfgMachinableAreaMngt(classe) TIE_CATIAMfgMachinableAreaMngt(classe)
#else
#define BOA_CATIAMfgMachinableAreaMngt(classe) CATImplementBOA(CATIAMfgMachinableAreaMngt, classe)
#endif

#endif
