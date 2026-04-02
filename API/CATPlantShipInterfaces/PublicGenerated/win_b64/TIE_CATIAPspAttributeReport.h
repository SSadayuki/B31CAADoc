#ifndef __TIE_CATIAPspAttributeReport
#define __TIE_CATIAPspAttributeReport

#include <string.h>
#include "CATBaseUnknown.h"
#include "CATMetaClass.h"
#include "CATMacForTie.h"
#include "CATExitJournal.h"
#include "CATIAPspAttributeReport.h"
#include "JS0DSPA.h"


#ifdef _WINDOWS_SOURCE
#define Exported __declspec(dllexport)
#define Imported __declspec(dllimport)
#else
#define Exported 
#define Imported 
#endif


/* To link an implementation with the interface CATIAPspAttributeReport */
#define declare_TIE_CATIAPspAttributeReport(classe) \
 \
 \
class TIECATIAPspAttributeReport##classe : public CATIAPspAttributeReport \
{ \
   private: \
      CATDeclareCommonTIEMembers \
   public: \
      CATDeclareTIEMethods(CATIAPspAttributeReport, classe) \
      CATDeclareIUnknownMethodsForCATBaseUnknownTIE \
      CATDeclareIDispatchMethodsForCATBaseUnknownTIE \
      CATDeclareCATBaseUnknownMethodsForTIE \
      virtual HRESULT __stdcall GenerateReport(const CATBSTR & iInputFormatFile, const CATBSTR & iOutputfile, CATLONG & oRet); \
      virtual HRESULT  __stdcall get_Application(CATIAApplication *& oApplication); \
      virtual HRESULT  __stdcall get_Parent(CATBaseDispatch *& oParent); \
      virtual HRESULT  __stdcall get_Name(CATBSTR & oNameBSTR); \
      virtual HRESULT  __stdcall put_Name(const CATBSTR & iNameBSTR); \
      virtual HRESULT  __stdcall GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj); \
};



#define ENVTIEdeclare_CATIAPspAttributeReport(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
virtual HRESULT __stdcall GenerateReport(const CATBSTR & iInputFormatFile, const CATBSTR & iOutputfile, CATLONG & oRet); \
virtual HRESULT  __stdcall get_Application(CATIAApplication *& oApplication); \
virtual HRESULT  __stdcall get_Parent(CATBaseDispatch *& oParent); \
virtual HRESULT  __stdcall get_Name(CATBSTR & oNameBSTR); \
virtual HRESULT  __stdcall put_Name(const CATBSTR & iNameBSTR); \
virtual HRESULT  __stdcall GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj); \


#define ENVTIEdefine_CATIAPspAttributeReport(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
HRESULT __stdcall  ENVTIEName::GenerateReport(const CATBSTR & iInputFormatFile, const CATBSTR & iOutputfile, CATLONG & oRet) \
{ \
return (ENVTIECALL(CATIAPspAttributeReport,ENVTIETypeLetter,ENVTIELetter)GenerateReport(iInputFormatFile,iOutputfile,oRet)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Application(CATIAApplication *& oApplication) \
{ \
return (ENVTIECALL(CATIAPspAttributeReport,ENVTIETypeLetter,ENVTIELetter)get_Application(oApplication)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Parent(CATBaseDispatch *& oParent) \
{ \
return (ENVTIECALL(CATIAPspAttributeReport,ENVTIETypeLetter,ENVTIELetter)get_Parent(oParent)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Name(CATBSTR & oNameBSTR) \
{ \
return (ENVTIECALL(CATIAPspAttributeReport,ENVTIETypeLetter,ENVTIELetter)get_Name(oNameBSTR)); \
} \
HRESULT  __stdcall  ENVTIEName::put_Name(const CATBSTR & iNameBSTR) \
{ \
return (ENVTIECALL(CATIAPspAttributeReport,ENVTIETypeLetter,ENVTIELetter)put_Name(iNameBSTR)); \
} \
HRESULT  __stdcall  ENVTIEName::GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj) \
{ \
return (ENVTIECALL(CATIAPspAttributeReport,ENVTIETypeLetter,ENVTIELetter)GetItem(IDName,RealObj)); \
} \


/* Name of the TIE class */
#define class_TIE_CATIAPspAttributeReport(classe)    TIECATIAPspAttributeReport##classe


/* Common methods inside a TIE */
#define common_TIE_CATIAPspAttributeReport(classe) \
 \
 \
/* Static initialization */ \
CATDefineCommonTIEMembers(CATIAPspAttributeReport, classe) \
 \
 \
CATImplementTIEMethods(CATIAPspAttributeReport, classe) \
CATImplementIUnknownMethodsForCATBaseUnknownTIE(CATIAPspAttributeReport, classe, 2) \
CATImplementIDispatchMethodsForCATBaseUnknownTIE(CATIAPspAttributeReport, classe) \
CATImplementCATBaseUnknownMethodsForTIE(CATIAPspAttributeReport, classe) \
 \
HRESULT __stdcall  TIECATIAPspAttributeReport##classe::GenerateReport(const CATBSTR & iInputFormatFile, const CATBSTR & iOutputfile, CATLONG & oRet) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,1,&_Trac2,&iInputFormatFile,&iOutputfile,&oRet); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GenerateReport(iInputFormatFile,iOutputfile,oRet); \
   ExitAfterCall(this,1,_Trac2,&_ret_arg,&iInputFormatFile,&iOutputfile,&oRet); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAPspAttributeReport##classe::get_Application(CATIAApplication *& oApplication) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,2,&_Trac2,&oApplication); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Application(oApplication); \
   ExitAfterCall(this,2,_Trac2,&_ret_arg,&oApplication); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAPspAttributeReport##classe::get_Parent(CATBaseDispatch *& oParent) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,3,&_Trac2,&oParent); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Parent(oParent); \
   ExitAfterCall(this,3,_Trac2,&_ret_arg,&oParent); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAPspAttributeReport##classe::get_Name(CATBSTR & oNameBSTR) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,4,&_Trac2,&oNameBSTR); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Name(oNameBSTR); \
   ExitAfterCall(this,4,_Trac2,&_ret_arg,&oNameBSTR); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAPspAttributeReport##classe::put_Name(const CATBSTR & iNameBSTR) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,5,&_Trac2,&iNameBSTR); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_Name(iNameBSTR); \
   ExitAfterCall(this,5,_Trac2,&_ret_arg,&iNameBSTR); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAPspAttributeReport##classe::GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,6,&_Trac2,&IDName,&RealObj); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetItem(IDName,RealObj); \
   ExitAfterCall(this,6,_Trac2,&_ret_arg,&IDName,&RealObj); \
   return(_ret_arg); \
} \



/* Macro used to link an implementation with an interface */
#define TIE_CATIAPspAttributeReport(classe) \
 \
 \
declare_TIE_CATIAPspAttributeReport(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIAPspAttributeReport##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIAPspAttributeReport,"CATIAPspAttributeReport",CATIAPspAttributeReport::MetaObject(),classe::MetaObject(),TIE); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIAPspAttributeReport(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIECreation(CATIAPspAttributeReport, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIAPspAttributeReport##classe(classe::MetaObject(),CATIAPspAttributeReport::MetaObject(),(void *)CreateTIECATIAPspAttributeReport##classe)



/* Macro used to link an implementation with an interface */
/* This TIE is chained on the implementation object */
#define TIEchain_CATIAPspAttributeReport(classe) \
 \
 \
declare_TIE_CATIAPspAttributeReport(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIAPspAttributeReport##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIAPspAttributeReport,"CATIAPspAttributeReport",CATIAPspAttributeReport::MetaObject(),classe::MetaObject(),TIEchain); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIAPspAttributeReport(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIEchainCreation(CATIAPspAttributeReport, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIAPspAttributeReport##classe(classe::MetaObject(),CATIAPspAttributeReport::MetaObject(),(void *)CreateTIECATIAPspAttributeReport##classe)


/* Macro to switch between BOA and TIE at build time */ 
#ifdef CATSYS_BOA_IS_TIE
#define BOA_CATIAPspAttributeReport(classe) TIE_CATIAPspAttributeReport(classe)
#else
#define BOA_CATIAPspAttributeReport(classe) CATImplementBOA(CATIAPspAttributeReport, classe)
#endif

#endif
