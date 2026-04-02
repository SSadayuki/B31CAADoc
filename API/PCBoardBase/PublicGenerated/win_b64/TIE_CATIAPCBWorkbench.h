#ifndef __TIE_CATIAPCBWorkbench
#define __TIE_CATIAPCBWorkbench

#include <string.h>
#include "CATBaseUnknown.h"
#include "CATMetaClass.h"
#include "CATMacForTie.h"
#include "CATExitJournal.h"
#include "CATIAPCBWorkbench.h"
#include "JS0DSPA.h"


#ifdef _WINDOWS_SOURCE
#define Exported __declspec(dllexport)
#define Imported __declspec(dllimport)
#else
#define Exported 
#define Imported 
#endif


/* To link an implementation with the interface CATIAPCBWorkbench */
#define declare_TIE_CATIAPCBWorkbench(classe) \
 \
 \
class TIECATIAPCBWorkbench##classe : public CATIAPCBWorkbench \
{ \
   private: \
      CATDeclareCommonTIEMembers \
   public: \
      CATDeclareTIEMethods(CATIAPCBWorkbench, classe) \
      CATDeclareIUnknownMethodsForCATBaseUnknownTIE \
      CATDeclareIDispatchMethodsForCATBaseUnknownTIE \
      CATDeclareCATBaseUnknownMethodsForTIE \
      virtual HRESULT __stdcall CreateBoard(CATBaseDispatch * iRoot, CATBaseDispatch *& oBoard); \
      virtual HRESULT __stdcall CreateComponent(CATBaseDispatch * iRoot, const CATBSTR & iElecPackageNumber, const CATBSTR & iElecPartNumber, const CATBSTR & iElecType, CATBaseDispatch *& oComponent); \
      virtual HRESULT __stdcall GetRootProduct(CATIADocument * doc, CATBaseDispatch *& oRoot); \
      virtual HRESULT __stdcall CreatePanel(CATBaseDispatch * iRoot, CATBaseDispatch *& oPanel); \
      virtual HRESULT  __stdcall get_Application(CATIAApplication *& oApplication); \
      virtual HRESULT  __stdcall get_Parent(CATBaseDispatch *& oParent); \
      virtual HRESULT  __stdcall get_Name(CATBSTR & oNameBSTR); \
      virtual HRESULT  __stdcall put_Name(const CATBSTR & iNameBSTR); \
      virtual HRESULT  __stdcall GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj); \
};



#define ENVTIEdeclare_CATIAPCBWorkbench(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
virtual HRESULT __stdcall CreateBoard(CATBaseDispatch * iRoot, CATBaseDispatch *& oBoard); \
virtual HRESULT __stdcall CreateComponent(CATBaseDispatch * iRoot, const CATBSTR & iElecPackageNumber, const CATBSTR & iElecPartNumber, const CATBSTR & iElecType, CATBaseDispatch *& oComponent); \
virtual HRESULT __stdcall GetRootProduct(CATIADocument * doc, CATBaseDispatch *& oRoot); \
virtual HRESULT __stdcall CreatePanel(CATBaseDispatch * iRoot, CATBaseDispatch *& oPanel); \
virtual HRESULT  __stdcall get_Application(CATIAApplication *& oApplication); \
virtual HRESULT  __stdcall get_Parent(CATBaseDispatch *& oParent); \
virtual HRESULT  __stdcall get_Name(CATBSTR & oNameBSTR); \
virtual HRESULT  __stdcall put_Name(const CATBSTR & iNameBSTR); \
virtual HRESULT  __stdcall GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj); \


#define ENVTIEdefine_CATIAPCBWorkbench(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
HRESULT __stdcall  ENVTIEName::CreateBoard(CATBaseDispatch * iRoot, CATBaseDispatch *& oBoard) \
{ \
return (ENVTIECALL(CATIAPCBWorkbench,ENVTIETypeLetter,ENVTIELetter)CreateBoard(iRoot,oBoard)); \
} \
HRESULT __stdcall  ENVTIEName::CreateComponent(CATBaseDispatch * iRoot, const CATBSTR & iElecPackageNumber, const CATBSTR & iElecPartNumber, const CATBSTR & iElecType, CATBaseDispatch *& oComponent) \
{ \
return (ENVTIECALL(CATIAPCBWorkbench,ENVTIETypeLetter,ENVTIELetter)CreateComponent(iRoot,iElecPackageNumber,iElecPartNumber,iElecType,oComponent)); \
} \
HRESULT __stdcall  ENVTIEName::GetRootProduct(CATIADocument * doc, CATBaseDispatch *& oRoot) \
{ \
return (ENVTIECALL(CATIAPCBWorkbench,ENVTIETypeLetter,ENVTIELetter)GetRootProduct(doc,oRoot)); \
} \
HRESULT __stdcall  ENVTIEName::CreatePanel(CATBaseDispatch * iRoot, CATBaseDispatch *& oPanel) \
{ \
return (ENVTIECALL(CATIAPCBWorkbench,ENVTIETypeLetter,ENVTIELetter)CreatePanel(iRoot,oPanel)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Application(CATIAApplication *& oApplication) \
{ \
return (ENVTIECALL(CATIAPCBWorkbench,ENVTIETypeLetter,ENVTIELetter)get_Application(oApplication)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Parent(CATBaseDispatch *& oParent) \
{ \
return (ENVTIECALL(CATIAPCBWorkbench,ENVTIETypeLetter,ENVTIELetter)get_Parent(oParent)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Name(CATBSTR & oNameBSTR) \
{ \
return (ENVTIECALL(CATIAPCBWorkbench,ENVTIETypeLetter,ENVTIELetter)get_Name(oNameBSTR)); \
} \
HRESULT  __stdcall  ENVTIEName::put_Name(const CATBSTR & iNameBSTR) \
{ \
return (ENVTIECALL(CATIAPCBWorkbench,ENVTIETypeLetter,ENVTIELetter)put_Name(iNameBSTR)); \
} \
HRESULT  __stdcall  ENVTIEName::GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj) \
{ \
return (ENVTIECALL(CATIAPCBWorkbench,ENVTIETypeLetter,ENVTIELetter)GetItem(IDName,RealObj)); \
} \


/* Name of the TIE class */
#define class_TIE_CATIAPCBWorkbench(classe)    TIECATIAPCBWorkbench##classe


/* Common methods inside a TIE */
#define common_TIE_CATIAPCBWorkbench(classe) \
 \
 \
/* Static initialization */ \
CATDefineCommonTIEMembers(CATIAPCBWorkbench, classe) \
 \
 \
CATImplementTIEMethods(CATIAPCBWorkbench, classe) \
CATImplementIUnknownMethodsForCATBaseUnknownTIE(CATIAPCBWorkbench, classe, 2) \
CATImplementIDispatchMethodsForCATBaseUnknownTIE(CATIAPCBWorkbench, classe) \
CATImplementCATBaseUnknownMethodsForTIE(CATIAPCBWorkbench, classe) \
 \
HRESULT __stdcall  TIECATIAPCBWorkbench##classe::CreateBoard(CATBaseDispatch * iRoot, CATBaseDispatch *& oBoard) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,1,&_Trac2,&iRoot,&oBoard); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->CreateBoard(iRoot,oBoard); \
   ExitAfterCall(this,1,_Trac2,&_ret_arg,&iRoot,&oBoard); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAPCBWorkbench##classe::CreateComponent(CATBaseDispatch * iRoot, const CATBSTR & iElecPackageNumber, const CATBSTR & iElecPartNumber, const CATBSTR & iElecType, CATBaseDispatch *& oComponent) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,2,&_Trac2,&iRoot,&iElecPackageNumber,&iElecPartNumber,&iElecType,&oComponent); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->CreateComponent(iRoot,iElecPackageNumber,iElecPartNumber,iElecType,oComponent); \
   ExitAfterCall(this,2,_Trac2,&_ret_arg,&iRoot,&iElecPackageNumber,&iElecPartNumber,&iElecType,&oComponent); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAPCBWorkbench##classe::GetRootProduct(CATIADocument * doc, CATBaseDispatch *& oRoot) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,3,&_Trac2,&doc,&oRoot); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetRootProduct(doc,oRoot); \
   ExitAfterCall(this,3,_Trac2,&_ret_arg,&doc,&oRoot); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAPCBWorkbench##classe::CreatePanel(CATBaseDispatch * iRoot, CATBaseDispatch *& oPanel) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,4,&_Trac2,&iRoot,&oPanel); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->CreatePanel(iRoot,oPanel); \
   ExitAfterCall(this,4,_Trac2,&_ret_arg,&iRoot,&oPanel); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAPCBWorkbench##classe::get_Application(CATIAApplication *& oApplication) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,5,&_Trac2,&oApplication); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Application(oApplication); \
   ExitAfterCall(this,5,_Trac2,&_ret_arg,&oApplication); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAPCBWorkbench##classe::get_Parent(CATBaseDispatch *& oParent) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,6,&_Trac2,&oParent); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Parent(oParent); \
   ExitAfterCall(this,6,_Trac2,&_ret_arg,&oParent); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAPCBWorkbench##classe::get_Name(CATBSTR & oNameBSTR) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,7,&_Trac2,&oNameBSTR); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Name(oNameBSTR); \
   ExitAfterCall(this,7,_Trac2,&_ret_arg,&oNameBSTR); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAPCBWorkbench##classe::put_Name(const CATBSTR & iNameBSTR) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,8,&_Trac2,&iNameBSTR); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_Name(iNameBSTR); \
   ExitAfterCall(this,8,_Trac2,&_ret_arg,&iNameBSTR); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAPCBWorkbench##classe::GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,9,&_Trac2,&IDName,&RealObj); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetItem(IDName,RealObj); \
   ExitAfterCall(this,9,_Trac2,&_ret_arg,&IDName,&RealObj); \
   return(_ret_arg); \
} \



/* Macro used to link an implementation with an interface */
#define TIE_CATIAPCBWorkbench(classe) \
 \
 \
declare_TIE_CATIAPCBWorkbench(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIAPCBWorkbench##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIAPCBWorkbench,"CATIAPCBWorkbench",CATIAPCBWorkbench::MetaObject(),classe::MetaObject(),TIE); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIAPCBWorkbench(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIECreation(CATIAPCBWorkbench, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIAPCBWorkbench##classe(classe::MetaObject(),CATIAPCBWorkbench::MetaObject(),(void *)CreateTIECATIAPCBWorkbench##classe)



/* Macro used to link an implementation with an interface */
/* This TIE is chained on the implementation object */
#define TIEchain_CATIAPCBWorkbench(classe) \
 \
 \
declare_TIE_CATIAPCBWorkbench(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIAPCBWorkbench##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIAPCBWorkbench,"CATIAPCBWorkbench",CATIAPCBWorkbench::MetaObject(),classe::MetaObject(),TIEchain); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIAPCBWorkbench(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIEchainCreation(CATIAPCBWorkbench, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIAPCBWorkbench##classe(classe::MetaObject(),CATIAPCBWorkbench::MetaObject(),(void *)CreateTIECATIAPCBWorkbench##classe)


/* Macro to switch between BOA and TIE at build time */ 
#ifdef CATSYS_BOA_IS_TIE
#define BOA_CATIAPCBWorkbench(classe) TIE_CATIAPCBWorkbench(classe)
#else
#define BOA_CATIAPCBWorkbench(classe) CATImplementBOA(CATIAPCBWorkbench, classe)
#endif

#endif
