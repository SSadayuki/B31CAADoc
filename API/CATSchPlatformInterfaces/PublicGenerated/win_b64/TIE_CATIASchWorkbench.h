#ifndef __TIE_CATIASchWorkbench
#define __TIE_CATIASchWorkbench

#include <string.h>
#include "CATBaseUnknown.h"
#include "CATMetaClass.h"
#include "CATMacForTie.h"
#include "CATExitJournal.h"
#include "CATIASchWorkbench.h"
#include "JS0DSPA.h"


#ifdef _WINDOWS_SOURCE
#define Exported __declspec(dllexport)
#define Imported __declspec(dllimport)
#else
#define Exported 
#define Imported 
#endif


/* To link an implementation with the interface CATIASchWorkbench */
#define declare_TIE_CATIASchWorkbench(classe) \
 \
 \
class TIECATIASchWorkbench##classe : public CATIASchWorkbench \
{ \
   private: \
      CATDeclareCommonTIEMembers \
   public: \
      CATDeclareTIEMethods(CATIASchWorkbench, classe) \
      CATDeclareIUnknownMethodsForCATBaseUnknownTIE \
      CATDeclareIDispatchMethodsForCATBaseUnknownTIE \
      CATDeclareCATBaseUnknownMethodsForTIE \
      virtual HRESULT __stdcall FindInterface(const CATBSTR & iInterfaceName, CATBaseDispatch * iObject, CATBaseDispatch *& oInterfaceFound); \
      virtual HRESULT  __stdcall get_Application(CATIAApplication *& oApplication); \
      virtual HRESULT  __stdcall get_Parent(CATBaseDispatch *& oParent); \
      virtual HRESULT  __stdcall get_Name(CATBSTR & oNameBSTR); \
      virtual HRESULT  __stdcall put_Name(const CATBSTR & iNameBSTR); \
      virtual HRESULT  __stdcall GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj); \
};



#define ENVTIEdeclare_CATIASchWorkbench(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
virtual HRESULT __stdcall FindInterface(const CATBSTR & iInterfaceName, CATBaseDispatch * iObject, CATBaseDispatch *& oInterfaceFound); \
virtual HRESULT  __stdcall get_Application(CATIAApplication *& oApplication); \
virtual HRESULT  __stdcall get_Parent(CATBaseDispatch *& oParent); \
virtual HRESULT  __stdcall get_Name(CATBSTR & oNameBSTR); \
virtual HRESULT  __stdcall put_Name(const CATBSTR & iNameBSTR); \
virtual HRESULT  __stdcall GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj); \


#define ENVTIEdefine_CATIASchWorkbench(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
HRESULT __stdcall  ENVTIEName::FindInterface(const CATBSTR & iInterfaceName, CATBaseDispatch * iObject, CATBaseDispatch *& oInterfaceFound) \
{ \
return (ENVTIECALL(CATIASchWorkbench,ENVTIETypeLetter,ENVTIELetter)FindInterface(iInterfaceName,iObject,oInterfaceFound)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Application(CATIAApplication *& oApplication) \
{ \
return (ENVTIECALL(CATIASchWorkbench,ENVTIETypeLetter,ENVTIELetter)get_Application(oApplication)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Parent(CATBaseDispatch *& oParent) \
{ \
return (ENVTIECALL(CATIASchWorkbench,ENVTIETypeLetter,ENVTIELetter)get_Parent(oParent)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Name(CATBSTR & oNameBSTR) \
{ \
return (ENVTIECALL(CATIASchWorkbench,ENVTIETypeLetter,ENVTIELetter)get_Name(oNameBSTR)); \
} \
HRESULT  __stdcall  ENVTIEName::put_Name(const CATBSTR & iNameBSTR) \
{ \
return (ENVTIECALL(CATIASchWorkbench,ENVTIETypeLetter,ENVTIELetter)put_Name(iNameBSTR)); \
} \
HRESULT  __stdcall  ENVTIEName::GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj) \
{ \
return (ENVTIECALL(CATIASchWorkbench,ENVTIETypeLetter,ENVTIELetter)GetItem(IDName,RealObj)); \
} \


/* Name of the TIE class */
#define class_TIE_CATIASchWorkbench(classe)    TIECATIASchWorkbench##classe


/* Common methods inside a TIE */
#define common_TIE_CATIASchWorkbench(classe) \
 \
 \
/* Static initialization */ \
CATDefineCommonTIEMembers(CATIASchWorkbench, classe) \
 \
 \
CATImplementTIEMethods(CATIASchWorkbench, classe) \
CATImplementIUnknownMethodsForCATBaseUnknownTIE(CATIASchWorkbench, classe, 2) \
CATImplementIDispatchMethodsForCATBaseUnknownTIE(CATIASchWorkbench, classe) \
CATImplementCATBaseUnknownMethodsForTIE(CATIASchWorkbench, classe) \
 \
HRESULT __stdcall  TIECATIASchWorkbench##classe::FindInterface(const CATBSTR & iInterfaceName, CATBaseDispatch * iObject, CATBaseDispatch *& oInterfaceFound) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,1,&_Trac2,&iInterfaceName,&iObject,&oInterfaceFound); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->FindInterface(iInterfaceName,iObject,oInterfaceFound); \
   ExitAfterCall(this,1,_Trac2,&_ret_arg,&iInterfaceName,&iObject,&oInterfaceFound); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIASchWorkbench##classe::get_Application(CATIAApplication *& oApplication) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,2,&_Trac2,&oApplication); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Application(oApplication); \
   ExitAfterCall(this,2,_Trac2,&_ret_arg,&oApplication); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIASchWorkbench##classe::get_Parent(CATBaseDispatch *& oParent) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,3,&_Trac2,&oParent); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Parent(oParent); \
   ExitAfterCall(this,3,_Trac2,&_ret_arg,&oParent); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIASchWorkbench##classe::get_Name(CATBSTR & oNameBSTR) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,4,&_Trac2,&oNameBSTR); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Name(oNameBSTR); \
   ExitAfterCall(this,4,_Trac2,&_ret_arg,&oNameBSTR); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIASchWorkbench##classe::put_Name(const CATBSTR & iNameBSTR) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,5,&_Trac2,&iNameBSTR); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_Name(iNameBSTR); \
   ExitAfterCall(this,5,_Trac2,&_ret_arg,&iNameBSTR); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIASchWorkbench##classe::GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,6,&_Trac2,&IDName,&RealObj); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetItem(IDName,RealObj); \
   ExitAfterCall(this,6,_Trac2,&_ret_arg,&IDName,&RealObj); \
   return(_ret_arg); \
} \



/* Macro used to link an implementation with an interface */
#define TIE_CATIASchWorkbench(classe) \
 \
 \
declare_TIE_CATIASchWorkbench(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIASchWorkbench##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIASchWorkbench,"CATIASchWorkbench",CATIASchWorkbench::MetaObject(),classe::MetaObject(),TIE); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIASchWorkbench(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIECreation(CATIASchWorkbench, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIASchWorkbench##classe(classe::MetaObject(),CATIASchWorkbench::MetaObject(),(void *)CreateTIECATIASchWorkbench##classe)



/* Macro used to link an implementation with an interface */
/* This TIE is chained on the implementation object */
#define TIEchain_CATIASchWorkbench(classe) \
 \
 \
declare_TIE_CATIASchWorkbench(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIASchWorkbench##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIASchWorkbench,"CATIASchWorkbench",CATIASchWorkbench::MetaObject(),classe::MetaObject(),TIEchain); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIASchWorkbench(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIEchainCreation(CATIASchWorkbench, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIASchWorkbench##classe(classe::MetaObject(),CATIASchWorkbench::MetaObject(),(void *)CreateTIECATIASchWorkbench##classe)


/* Macro to switch between BOA and TIE at build time */ 
#ifdef CATSYS_BOA_IS_TIE
#define BOA_CATIASchWorkbench(classe) TIE_CATIASchWorkbench(classe)
#else
#define BOA_CATIASchWorkbench(classe) CATImplementBOA(CATIASchWorkbench, classe)
#endif

#endif
