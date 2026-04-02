#ifndef __TIE_CATIAArrBOMReport
#define __TIE_CATIAArrBOMReport

#include <string.h>
#include "CATBaseUnknown.h"
#include "CATMetaClass.h"
#include "CATMacForTie.h"
#include "CATExitJournal.h"
#include "CATIAArrBOMReport.h"
#include "JS0DSPA.h"


#ifdef _WINDOWS_SOURCE
#define Exported __declspec(dllexport)
#define Imported __declspec(dllimport)
#else
#define Exported 
#define Imported 
#endif


/* To link an implementation with the interface CATIAArrBOMReport */
#define declare_TIE_CATIAArrBOMReport(classe) \
 \
 \
class TIECATIAArrBOMReport##classe : public CATIAArrBOMReport \
{ \
   private: \
      CATDeclareCommonTIEMembers \
   public: \
      CATDeclareTIEMethods(CATIAArrBOMReport, classe) \
      CATDeclareIUnknownMethodsForCATBaseUnknownTIE \
      CATDeclareIDispatchMethodsForCATBaseUnknownTIE \
      CATDeclareCATBaseUnknownMethodsForTIE \
      virtual HRESULT __stdcall GenerateBOMReport(CATIADocument * iDocumentToExtractData, const CATBSTR & iOutputFileName); \
      virtual HRESULT  __stdcall get_Application(CATIAApplication *& oApplication); \
      virtual HRESULT  __stdcall get_Parent(CATBaseDispatch *& oParent); \
      virtual HRESULT  __stdcall get_Name(CATBSTR & oNameBSTR); \
      virtual HRESULT  __stdcall put_Name(const CATBSTR & iNameBSTR); \
      virtual HRESULT  __stdcall GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj); \
};



#define ENVTIEdeclare_CATIAArrBOMReport(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
virtual HRESULT __stdcall GenerateBOMReport(CATIADocument * iDocumentToExtractData, const CATBSTR & iOutputFileName); \
virtual HRESULT  __stdcall get_Application(CATIAApplication *& oApplication); \
virtual HRESULT  __stdcall get_Parent(CATBaseDispatch *& oParent); \
virtual HRESULT  __stdcall get_Name(CATBSTR & oNameBSTR); \
virtual HRESULT  __stdcall put_Name(const CATBSTR & iNameBSTR); \
virtual HRESULT  __stdcall GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj); \


#define ENVTIEdefine_CATIAArrBOMReport(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
HRESULT __stdcall  ENVTIEName::GenerateBOMReport(CATIADocument * iDocumentToExtractData, const CATBSTR & iOutputFileName) \
{ \
return (ENVTIECALL(CATIAArrBOMReport,ENVTIETypeLetter,ENVTIELetter)GenerateBOMReport(iDocumentToExtractData,iOutputFileName)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Application(CATIAApplication *& oApplication) \
{ \
return (ENVTIECALL(CATIAArrBOMReport,ENVTIETypeLetter,ENVTIELetter)get_Application(oApplication)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Parent(CATBaseDispatch *& oParent) \
{ \
return (ENVTIECALL(CATIAArrBOMReport,ENVTIETypeLetter,ENVTIELetter)get_Parent(oParent)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Name(CATBSTR & oNameBSTR) \
{ \
return (ENVTIECALL(CATIAArrBOMReport,ENVTIETypeLetter,ENVTIELetter)get_Name(oNameBSTR)); \
} \
HRESULT  __stdcall  ENVTIEName::put_Name(const CATBSTR & iNameBSTR) \
{ \
return (ENVTIECALL(CATIAArrBOMReport,ENVTIETypeLetter,ENVTIELetter)put_Name(iNameBSTR)); \
} \
HRESULT  __stdcall  ENVTIEName::GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj) \
{ \
return (ENVTIECALL(CATIAArrBOMReport,ENVTIETypeLetter,ENVTIELetter)GetItem(IDName,RealObj)); \
} \


/* Name of the TIE class */
#define class_TIE_CATIAArrBOMReport(classe)    TIECATIAArrBOMReport##classe


/* Common methods inside a TIE */
#define common_TIE_CATIAArrBOMReport(classe) \
 \
 \
/* Static initialization */ \
CATDefineCommonTIEMembers(CATIAArrBOMReport, classe) \
 \
 \
CATImplementTIEMethods(CATIAArrBOMReport, classe) \
CATImplementIUnknownMethodsForCATBaseUnknownTIE(CATIAArrBOMReport, classe, 2) \
CATImplementIDispatchMethodsForCATBaseUnknownTIE(CATIAArrBOMReport, classe) \
CATImplementCATBaseUnknownMethodsForTIE(CATIAArrBOMReport, classe) \
 \
HRESULT __stdcall  TIECATIAArrBOMReport##classe::GenerateBOMReport(CATIADocument * iDocumentToExtractData, const CATBSTR & iOutputFileName) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,1,&_Trac2,&iDocumentToExtractData,&iOutputFileName); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GenerateBOMReport(iDocumentToExtractData,iOutputFileName); \
   ExitAfterCall(this,1,_Trac2,&_ret_arg,&iDocumentToExtractData,&iOutputFileName); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAArrBOMReport##classe::get_Application(CATIAApplication *& oApplication) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,2,&_Trac2,&oApplication); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Application(oApplication); \
   ExitAfterCall(this,2,_Trac2,&_ret_arg,&oApplication); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAArrBOMReport##classe::get_Parent(CATBaseDispatch *& oParent) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,3,&_Trac2,&oParent); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Parent(oParent); \
   ExitAfterCall(this,3,_Trac2,&_ret_arg,&oParent); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAArrBOMReport##classe::get_Name(CATBSTR & oNameBSTR) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,4,&_Trac2,&oNameBSTR); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Name(oNameBSTR); \
   ExitAfterCall(this,4,_Trac2,&_ret_arg,&oNameBSTR); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAArrBOMReport##classe::put_Name(const CATBSTR & iNameBSTR) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,5,&_Trac2,&iNameBSTR); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_Name(iNameBSTR); \
   ExitAfterCall(this,5,_Trac2,&_ret_arg,&iNameBSTR); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAArrBOMReport##classe::GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,6,&_Trac2,&IDName,&RealObj); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetItem(IDName,RealObj); \
   ExitAfterCall(this,6,_Trac2,&_ret_arg,&IDName,&RealObj); \
   return(_ret_arg); \
} \



/* Macro used to link an implementation with an interface */
#define TIE_CATIAArrBOMReport(classe) \
 \
 \
declare_TIE_CATIAArrBOMReport(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIAArrBOMReport##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIAArrBOMReport,"CATIAArrBOMReport",CATIAArrBOMReport::MetaObject(),classe::MetaObject(),TIE); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIAArrBOMReport(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIECreation(CATIAArrBOMReport, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIAArrBOMReport##classe(classe::MetaObject(),CATIAArrBOMReport::MetaObject(),(void *)CreateTIECATIAArrBOMReport##classe)



/* Macro used to link an implementation with an interface */
/* This TIE is chained on the implementation object */
#define TIEchain_CATIAArrBOMReport(classe) \
 \
 \
declare_TIE_CATIAArrBOMReport(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIAArrBOMReport##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIAArrBOMReport,"CATIAArrBOMReport",CATIAArrBOMReport::MetaObject(),classe::MetaObject(),TIEchain); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIAArrBOMReport(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIEchainCreation(CATIAArrBOMReport, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIAArrBOMReport##classe(classe::MetaObject(),CATIAArrBOMReport::MetaObject(),(void *)CreateTIECATIAArrBOMReport##classe)


/* Macro to switch between BOA and TIE at build time */ 
#ifdef CATSYS_BOA_IS_TIE
#define BOA_CATIAArrBOMReport(classe) TIE_CATIAArrBOMReport(classe)
#else
#define BOA_CATIAArrBOMReport(classe) CATImplementBOA(CATIAArrBOMReport, classe)
#endif

#endif
