#ifndef __TIE_CATIAClashResult
#define __TIE_CATIAClashResult

#include <string.h>
#include "CATBaseUnknown.h"
#include "CATMetaClass.h"
#include "CATMacForTie.h"
#include "CATExitJournal.h"
#include "CATIAClashResult.h"
#include "JS0DSPA.h"


#ifdef _WINDOWS_SOURCE
#define Exported __declspec(dllexport)
#define Imported __declspec(dllimport)
#else
#define Exported 
#define Imported 
#endif


/* To link an implementation with the interface CATIAClashResult */
#define declare_TIE_CATIAClashResult(classe) \
 \
 \
class TIECATIAClashResult##classe : public CATIAClashResult \
{ \
   private: \
      CATDeclareCommonTIEMembers \
   public: \
      CATDeclareTIEMethods(CATIAClashResult, classe) \
      CATDeclareIUnknownMethodsForCATBaseUnknownTIE \
      CATDeclareIDispatchMethodsForCATBaseUnknownTIE \
      CATDeclareCATBaseUnknownMethodsForTIE \
      virtual HRESULT __stdcall get_Conflicts(CATIAConflicts *& oConflicts); \
      virtual HRESULT __stdcall Export(CatClashExportType iType, const CATBSTR & iPath); \
      virtual HRESULT  __stdcall get_Application(CATIAApplication *& oApplication); \
      virtual HRESULT  __stdcall get_Parent(CATBaseDispatch *& oParent); \
      virtual HRESULT  __stdcall get_Name(CATBSTR & oNameBSTR); \
      virtual HRESULT  __stdcall put_Name(const CATBSTR & iNameBSTR); \
      virtual HRESULT  __stdcall GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj); \
};



#define ENVTIEdeclare_CATIAClashResult(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
virtual HRESULT __stdcall get_Conflicts(CATIAConflicts *& oConflicts); \
virtual HRESULT __stdcall Export(CatClashExportType iType, const CATBSTR & iPath); \
virtual HRESULT  __stdcall get_Application(CATIAApplication *& oApplication); \
virtual HRESULT  __stdcall get_Parent(CATBaseDispatch *& oParent); \
virtual HRESULT  __stdcall get_Name(CATBSTR & oNameBSTR); \
virtual HRESULT  __stdcall put_Name(const CATBSTR & iNameBSTR); \
virtual HRESULT  __stdcall GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj); \


#define ENVTIEdefine_CATIAClashResult(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
HRESULT __stdcall  ENVTIEName::get_Conflicts(CATIAConflicts *& oConflicts) \
{ \
return (ENVTIECALL(CATIAClashResult,ENVTIETypeLetter,ENVTIELetter)get_Conflicts(oConflicts)); \
} \
HRESULT __stdcall  ENVTIEName::Export(CatClashExportType iType, const CATBSTR & iPath) \
{ \
return (ENVTIECALL(CATIAClashResult,ENVTIETypeLetter,ENVTIELetter)Export(iType,iPath)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Application(CATIAApplication *& oApplication) \
{ \
return (ENVTIECALL(CATIAClashResult,ENVTIETypeLetter,ENVTIELetter)get_Application(oApplication)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Parent(CATBaseDispatch *& oParent) \
{ \
return (ENVTIECALL(CATIAClashResult,ENVTIETypeLetter,ENVTIELetter)get_Parent(oParent)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Name(CATBSTR & oNameBSTR) \
{ \
return (ENVTIECALL(CATIAClashResult,ENVTIETypeLetter,ENVTIELetter)get_Name(oNameBSTR)); \
} \
HRESULT  __stdcall  ENVTIEName::put_Name(const CATBSTR & iNameBSTR) \
{ \
return (ENVTIECALL(CATIAClashResult,ENVTIETypeLetter,ENVTIELetter)put_Name(iNameBSTR)); \
} \
HRESULT  __stdcall  ENVTIEName::GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj) \
{ \
return (ENVTIECALL(CATIAClashResult,ENVTIETypeLetter,ENVTIELetter)GetItem(IDName,RealObj)); \
} \


/* Name of the TIE class */
#define class_TIE_CATIAClashResult(classe)    TIECATIAClashResult##classe


/* Common methods inside a TIE */
#define common_TIE_CATIAClashResult(classe) \
 \
 \
/* Static initialization */ \
CATDefineCommonTIEMembers(CATIAClashResult, classe) \
 \
 \
CATImplementTIEMethods(CATIAClashResult, classe) \
CATImplementIUnknownMethodsForCATBaseUnknownTIE(CATIAClashResult, classe, 2) \
CATImplementIDispatchMethodsForCATBaseUnknownTIE(CATIAClashResult, classe) \
CATImplementCATBaseUnknownMethodsForTIE(CATIAClashResult, classe) \
 \
HRESULT __stdcall  TIECATIAClashResult##classe::get_Conflicts(CATIAConflicts *& oConflicts) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,1,&_Trac2,&oConflicts); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Conflicts(oConflicts); \
   ExitAfterCall(this,1,_Trac2,&_ret_arg,&oConflicts); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAClashResult##classe::Export(CatClashExportType iType, const CATBSTR & iPath) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,2,&_Trac2,&iType,&iPath); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->Export(iType,iPath); \
   ExitAfterCall(this,2,_Trac2,&_ret_arg,&iType,&iPath); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAClashResult##classe::get_Application(CATIAApplication *& oApplication) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,3,&_Trac2,&oApplication); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Application(oApplication); \
   ExitAfterCall(this,3,_Trac2,&_ret_arg,&oApplication); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAClashResult##classe::get_Parent(CATBaseDispatch *& oParent) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,4,&_Trac2,&oParent); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Parent(oParent); \
   ExitAfterCall(this,4,_Trac2,&_ret_arg,&oParent); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAClashResult##classe::get_Name(CATBSTR & oNameBSTR) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,5,&_Trac2,&oNameBSTR); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Name(oNameBSTR); \
   ExitAfterCall(this,5,_Trac2,&_ret_arg,&oNameBSTR); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAClashResult##classe::put_Name(const CATBSTR & iNameBSTR) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,6,&_Trac2,&iNameBSTR); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_Name(iNameBSTR); \
   ExitAfterCall(this,6,_Trac2,&_ret_arg,&iNameBSTR); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAClashResult##classe::GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,7,&_Trac2,&IDName,&RealObj); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetItem(IDName,RealObj); \
   ExitAfterCall(this,7,_Trac2,&_ret_arg,&IDName,&RealObj); \
   return(_ret_arg); \
} \



/* Macro used to link an implementation with an interface */
#define TIE_CATIAClashResult(classe) \
 \
 \
declare_TIE_CATIAClashResult(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIAClashResult##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIAClashResult,"CATIAClashResult",CATIAClashResult::MetaObject(),classe::MetaObject(),TIE); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIAClashResult(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIECreation(CATIAClashResult, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIAClashResult##classe(classe::MetaObject(),CATIAClashResult::MetaObject(),(void *)CreateTIECATIAClashResult##classe)



/* Macro used to link an implementation with an interface */
/* This TIE is chained on the implementation object */
#define TIEchain_CATIAClashResult(classe) \
 \
 \
declare_TIE_CATIAClashResult(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIAClashResult##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIAClashResult,"CATIAClashResult",CATIAClashResult::MetaObject(),classe::MetaObject(),TIEchain); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIAClashResult(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIEchainCreation(CATIAClashResult, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIAClashResult##classe(classe::MetaObject(),CATIAClashResult::MetaObject(),(void *)CreateTIECATIAClashResult##classe)


/* Macro to switch between BOA and TIE at build time */ 
#ifdef CATSYS_BOA_IS_TIE
#define BOA_CATIAClashResult(classe) TIE_CATIAClashResult(classe)
#else
#define BOA_CATIAClashResult(classe) CATImplementBOA(CATIAClashResult, classe)
#endif

#endif
