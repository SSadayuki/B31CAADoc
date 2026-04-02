#ifndef __TIE_CATIARpmReport
#define __TIE_CATIARpmReport

#include <string.h>
#include "CATBaseUnknown.h"
#include "CATMetaClass.h"
#include "CATMacForTie.h"
#include "CATExitJournal.h"
#include "CATIARpmReport.h"
#include "JS0DSPA.h"


#ifdef _WINDOWS_SOURCE
#define Exported __declspec(dllexport)
#define Imported __declspec(dllimport)
#else
#define Exported 
#define Imported 
#endif


/* To link an implementation with the interface CATIARpmReport */
#define declare_TIE_CATIARpmReport(classe) \
 \
 \
class TIECATIARpmReport##classe : public CATIARpmReport \
{ \
   private: \
      CATDeclareCommonTIEMembers \
   public: \
      CATDeclareTIEMethods(CATIARpmReport, classe) \
      CATDeclareIUnknownMethodsForCATBaseUnknownTIE \
      CATDeclareIDispatchMethodsForCATBaseUnknownTIE \
      CATDeclareCATBaseUnknownMethodsForTIE \
      virtual HRESULT __stdcall GenerateReport(const CATBSTR & iXMLFileName, const CATBSTR & iReportFileName, const CATBSTR & iReportType, const CATBSTR & iOutDTDFileName); \
      virtual HRESULT  __stdcall get_Application(CATIAApplication *& oApplication); \
      virtual HRESULT  __stdcall get_Parent(CATBaseDispatch *& oParent); \
      virtual HRESULT  __stdcall get_Name(CATBSTR & oNameBSTR); \
      virtual HRESULT  __stdcall put_Name(const CATBSTR & iNameBSTR); \
      virtual HRESULT  __stdcall GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj); \
};



#define ENVTIEdeclare_CATIARpmReport(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
virtual HRESULT __stdcall GenerateReport(const CATBSTR & iXMLFileName, const CATBSTR & iReportFileName, const CATBSTR & iReportType, const CATBSTR & iOutDTDFileName); \
virtual HRESULT  __stdcall get_Application(CATIAApplication *& oApplication); \
virtual HRESULT  __stdcall get_Parent(CATBaseDispatch *& oParent); \
virtual HRESULT  __stdcall get_Name(CATBSTR & oNameBSTR); \
virtual HRESULT  __stdcall put_Name(const CATBSTR & iNameBSTR); \
virtual HRESULT  __stdcall GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj); \


#define ENVTIEdefine_CATIARpmReport(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
HRESULT __stdcall  ENVTIEName::GenerateReport(const CATBSTR & iXMLFileName, const CATBSTR & iReportFileName, const CATBSTR & iReportType, const CATBSTR & iOutDTDFileName) \
{ \
return (ENVTIECALL(CATIARpmReport,ENVTIETypeLetter,ENVTIELetter)GenerateReport(iXMLFileName,iReportFileName,iReportType,iOutDTDFileName)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Application(CATIAApplication *& oApplication) \
{ \
return (ENVTIECALL(CATIARpmReport,ENVTIETypeLetter,ENVTIELetter)get_Application(oApplication)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Parent(CATBaseDispatch *& oParent) \
{ \
return (ENVTIECALL(CATIARpmReport,ENVTIETypeLetter,ENVTIELetter)get_Parent(oParent)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Name(CATBSTR & oNameBSTR) \
{ \
return (ENVTIECALL(CATIARpmReport,ENVTIETypeLetter,ENVTIELetter)get_Name(oNameBSTR)); \
} \
HRESULT  __stdcall  ENVTIEName::put_Name(const CATBSTR & iNameBSTR) \
{ \
return (ENVTIECALL(CATIARpmReport,ENVTIETypeLetter,ENVTIELetter)put_Name(iNameBSTR)); \
} \
HRESULT  __stdcall  ENVTIEName::GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj) \
{ \
return (ENVTIECALL(CATIARpmReport,ENVTIETypeLetter,ENVTIELetter)GetItem(IDName,RealObj)); \
} \


/* Name of the TIE class */
#define class_TIE_CATIARpmReport(classe)    TIECATIARpmReport##classe


/* Common methods inside a TIE */
#define common_TIE_CATIARpmReport(classe) \
 \
 \
/* Static initialization */ \
CATDefineCommonTIEMembers(CATIARpmReport, classe) \
 \
 \
CATImplementTIEMethods(CATIARpmReport, classe) \
CATImplementIUnknownMethodsForCATBaseUnknownTIE(CATIARpmReport, classe, 2) \
CATImplementIDispatchMethodsForCATBaseUnknownTIE(CATIARpmReport, classe) \
CATImplementCATBaseUnknownMethodsForTIE(CATIARpmReport, classe) \
 \
HRESULT __stdcall  TIECATIARpmReport##classe::GenerateReport(const CATBSTR & iXMLFileName, const CATBSTR & iReportFileName, const CATBSTR & iReportType, const CATBSTR & iOutDTDFileName) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,1,&_Trac2,&iXMLFileName,&iReportFileName,&iReportType,&iOutDTDFileName); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GenerateReport(iXMLFileName,iReportFileName,iReportType,iOutDTDFileName); \
   ExitAfterCall(this,1,_Trac2,&_ret_arg,&iXMLFileName,&iReportFileName,&iReportType,&iOutDTDFileName); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIARpmReport##classe::get_Application(CATIAApplication *& oApplication) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,2,&_Trac2,&oApplication); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Application(oApplication); \
   ExitAfterCall(this,2,_Trac2,&_ret_arg,&oApplication); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIARpmReport##classe::get_Parent(CATBaseDispatch *& oParent) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,3,&_Trac2,&oParent); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Parent(oParent); \
   ExitAfterCall(this,3,_Trac2,&_ret_arg,&oParent); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIARpmReport##classe::get_Name(CATBSTR & oNameBSTR) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,4,&_Trac2,&oNameBSTR); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Name(oNameBSTR); \
   ExitAfterCall(this,4,_Trac2,&_ret_arg,&oNameBSTR); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIARpmReport##classe::put_Name(const CATBSTR & iNameBSTR) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,5,&_Trac2,&iNameBSTR); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_Name(iNameBSTR); \
   ExitAfterCall(this,5,_Trac2,&_ret_arg,&iNameBSTR); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIARpmReport##classe::GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,6,&_Trac2,&IDName,&RealObj); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetItem(IDName,RealObj); \
   ExitAfterCall(this,6,_Trac2,&_ret_arg,&IDName,&RealObj); \
   return(_ret_arg); \
} \



/* Macro used to link an implementation with an interface */
#define TIE_CATIARpmReport(classe) \
 \
 \
declare_TIE_CATIARpmReport(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIARpmReport##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIARpmReport,"CATIARpmReport",CATIARpmReport::MetaObject(),classe::MetaObject(),TIE); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIARpmReport(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIECreation(CATIARpmReport, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIARpmReport##classe(classe::MetaObject(),CATIARpmReport::MetaObject(),(void *)CreateTIECATIARpmReport##classe)



/* Macro used to link an implementation with an interface */
/* This TIE is chained on the implementation object */
#define TIEchain_CATIARpmReport(classe) \
 \
 \
declare_TIE_CATIARpmReport(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIARpmReport##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIARpmReport,"CATIARpmReport",CATIARpmReport::MetaObject(),classe::MetaObject(),TIEchain); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIARpmReport(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIEchainCreation(CATIARpmReport, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIARpmReport##classe(classe::MetaObject(),CATIARpmReport::MetaObject(),(void *)CreateTIECATIARpmReport##classe)


/* Macro to switch between BOA and TIE at build time */ 
#ifdef CATSYS_BOA_IS_TIE
#define BOA_CATIARpmReport(classe) TIE_CATIARpmReport(classe)
#else
#define BOA_CATIARpmReport(classe) CATImplementBOA(CATIARpmReport, classe)
#endif

#endif
