#ifndef __TIE_CATIAAnalysisExport
#define __TIE_CATIAAnalysisExport

#include <string.h>
#include "CATBaseUnknown.h"
#include "CATMetaClass.h"
#include "CATMacForTie.h"
#include "CATExitJournal.h"
#include "CATIAAnalysisExport.h"
#include "JS0DSPA.h"


#ifdef _WINDOWS_SOURCE
#define Exported __declspec(dllexport)
#define Imported __declspec(dllimport)
#else
#define Exported 
#define Imported 
#endif


/* To link an implementation with the interface CATIAAnalysisExport */
#define declare_TIE_CATIAAnalysisExport(classe) \
 \
 \
class TIECATIAAnalysisExport##classe : public CATIAAnalysisExport \
{ \
   private: \
      CATDeclareCommonTIEMembers \
   public: \
      CATDeclareTIEMethods(CATIAAnalysisExport, classe) \
      CATDeclareIUnknownMethodsForCATBaseUnknownTIE \
      CATDeclareIDispatchMethodsForCATBaseUnknownTIE \
      CATDeclareCATBaseUnknownMethodsForTIE \
      virtual HRESULT __stdcall Export(const CATBSTR & iFullPath, const CATBSTR & iType, const CATSafeArrayVariant & iOccurrences, CATIAAnalysisManager * iManager); \
      virtual HRESULT  __stdcall get_Application(CATIAApplication *& oApplication); \
      virtual HRESULT  __stdcall get_Parent(CATBaseDispatch *& oParent); \
      virtual HRESULT  __stdcall get_Name(CATBSTR & oNameBSTR); \
      virtual HRESULT  __stdcall put_Name(const CATBSTR & iNameBSTR); \
      virtual HRESULT  __stdcall GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj); \
};



#define ENVTIEdeclare_CATIAAnalysisExport(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
virtual HRESULT __stdcall Export(const CATBSTR & iFullPath, const CATBSTR & iType, const CATSafeArrayVariant & iOccurrences, CATIAAnalysisManager * iManager); \
virtual HRESULT  __stdcall get_Application(CATIAApplication *& oApplication); \
virtual HRESULT  __stdcall get_Parent(CATBaseDispatch *& oParent); \
virtual HRESULT  __stdcall get_Name(CATBSTR & oNameBSTR); \
virtual HRESULT  __stdcall put_Name(const CATBSTR & iNameBSTR); \
virtual HRESULT  __stdcall GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj); \


#define ENVTIEdefine_CATIAAnalysisExport(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
HRESULT __stdcall  ENVTIEName::Export(const CATBSTR & iFullPath, const CATBSTR & iType, const CATSafeArrayVariant & iOccurrences, CATIAAnalysisManager * iManager) \
{ \
return (ENVTIECALL(CATIAAnalysisExport,ENVTIETypeLetter,ENVTIELetter)Export(iFullPath,iType,iOccurrences,iManager)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Application(CATIAApplication *& oApplication) \
{ \
return (ENVTIECALL(CATIAAnalysisExport,ENVTIETypeLetter,ENVTIELetter)get_Application(oApplication)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Parent(CATBaseDispatch *& oParent) \
{ \
return (ENVTIECALL(CATIAAnalysisExport,ENVTIETypeLetter,ENVTIELetter)get_Parent(oParent)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Name(CATBSTR & oNameBSTR) \
{ \
return (ENVTIECALL(CATIAAnalysisExport,ENVTIETypeLetter,ENVTIELetter)get_Name(oNameBSTR)); \
} \
HRESULT  __stdcall  ENVTIEName::put_Name(const CATBSTR & iNameBSTR) \
{ \
return (ENVTIECALL(CATIAAnalysisExport,ENVTIETypeLetter,ENVTIELetter)put_Name(iNameBSTR)); \
} \
HRESULT  __stdcall  ENVTIEName::GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj) \
{ \
return (ENVTIECALL(CATIAAnalysisExport,ENVTIETypeLetter,ENVTIELetter)GetItem(IDName,RealObj)); \
} \


/* Name of the TIE class */
#define class_TIE_CATIAAnalysisExport(classe)    TIECATIAAnalysisExport##classe


/* Common methods inside a TIE */
#define common_TIE_CATIAAnalysisExport(classe) \
 \
 \
/* Static initialization */ \
CATDefineCommonTIEMembers(CATIAAnalysisExport, classe) \
 \
 \
CATImplementTIEMethods(CATIAAnalysisExport, classe) \
CATImplementIUnknownMethodsForCATBaseUnknownTIE(CATIAAnalysisExport, classe, 2) \
CATImplementIDispatchMethodsForCATBaseUnknownTIE(CATIAAnalysisExport, classe) \
CATImplementCATBaseUnknownMethodsForTIE(CATIAAnalysisExport, classe) \
 \
HRESULT __stdcall  TIECATIAAnalysisExport##classe::Export(const CATBSTR & iFullPath, const CATBSTR & iType, const CATSafeArrayVariant & iOccurrences, CATIAAnalysisManager * iManager) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,1,&_Trac2,&iFullPath,&iType,&iOccurrences,&iManager); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->Export(iFullPath,iType,iOccurrences,iManager); \
   ExitAfterCall(this,1,_Trac2,&_ret_arg,&iFullPath,&iType,&iOccurrences,&iManager); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAAnalysisExport##classe::get_Application(CATIAApplication *& oApplication) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,2,&_Trac2,&oApplication); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Application(oApplication); \
   ExitAfterCall(this,2,_Trac2,&_ret_arg,&oApplication); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAAnalysisExport##classe::get_Parent(CATBaseDispatch *& oParent) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,3,&_Trac2,&oParent); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Parent(oParent); \
   ExitAfterCall(this,3,_Trac2,&_ret_arg,&oParent); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAAnalysisExport##classe::get_Name(CATBSTR & oNameBSTR) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,4,&_Trac2,&oNameBSTR); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Name(oNameBSTR); \
   ExitAfterCall(this,4,_Trac2,&_ret_arg,&oNameBSTR); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAAnalysisExport##classe::put_Name(const CATBSTR & iNameBSTR) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,5,&_Trac2,&iNameBSTR); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_Name(iNameBSTR); \
   ExitAfterCall(this,5,_Trac2,&_ret_arg,&iNameBSTR); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAAnalysisExport##classe::GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,6,&_Trac2,&IDName,&RealObj); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetItem(IDName,RealObj); \
   ExitAfterCall(this,6,_Trac2,&_ret_arg,&IDName,&RealObj); \
   return(_ret_arg); \
} \



/* Macro used to link an implementation with an interface */
#define TIE_CATIAAnalysisExport(classe) \
 \
 \
declare_TIE_CATIAAnalysisExport(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIAAnalysisExport##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIAAnalysisExport,"CATIAAnalysisExport",CATIAAnalysisExport::MetaObject(),classe::MetaObject(),TIE); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIAAnalysisExport(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIECreation(CATIAAnalysisExport, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIAAnalysisExport##classe(classe::MetaObject(),CATIAAnalysisExport::MetaObject(),(void *)CreateTIECATIAAnalysisExport##classe)



/* Macro used to link an implementation with an interface */
/* This TIE is chained on the implementation object */
#define TIEchain_CATIAAnalysisExport(classe) \
 \
 \
declare_TIE_CATIAAnalysisExport(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIAAnalysisExport##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIAAnalysisExport,"CATIAAnalysisExport",CATIAAnalysisExport::MetaObject(),classe::MetaObject(),TIEchain); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIAAnalysisExport(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIEchainCreation(CATIAAnalysisExport, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIAAnalysisExport##classe(classe::MetaObject(),CATIAAnalysisExport::MetaObject(),(void *)CreateTIECATIAAnalysisExport##classe)


/* Macro to switch between BOA and TIE at build time */ 
#ifdef CATSYS_BOA_IS_TIE
#define BOA_CATIAAnalysisExport(classe) TIE_CATIAAnalysisExport(classe)
#else
#define BOA_CATIAAnalysisExport(classe) CATImplementBOA(CATIAAnalysisExport, classe)
#endif

#endif
