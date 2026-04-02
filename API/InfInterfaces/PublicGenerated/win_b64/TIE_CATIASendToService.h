#ifndef __TIE_CATIASendToService
#define __TIE_CATIASendToService

#include <string.h>
#include "CATBaseUnknown.h"
#include "CATMetaClass.h"
#include "CATMacForTie.h"
#include "CATExitJournal.h"
#include "CATIASendToService.h"
#include "JS0DSPA.h"


#ifdef _WINDOWS_SOURCE
#define Exported __declspec(dllexport)
#define Imported __declspec(dllimport)
#else
#define Exported 
#define Imported 
#endif


/* To link an implementation with the interface CATIASendToService */
#define declare_TIE_CATIASendToService(classe) \
 \
 \
class TIECATIASendToService##classe : public CATIASendToService \
{ \
   private: \
      CATDeclareCommonTIEMembers \
   public: \
      CATDeclareTIEMethods(CATIASendToService, classe) \
      CATDeclareIUnknownMethodsForCATBaseUnknownTIE \
      CATDeclareIDispatchMethodsForCATBaseUnknownTIE \
      CATDeclareCATBaseUnknownMethodsForTIE \
      virtual HRESULT __stdcall SetInitialFile(const CATBSTR & iPath); \
      virtual HRESULT __stdcall GetListOfDependantFile(CATSafeArrayVariant & oDependant); \
      virtual HRESULT __stdcall GetListOfToBeCopiedFiles(CATSafeArrayVariant & oWillBeCopied); \
      virtual HRESULT __stdcall AddFile(const CATBSTR & iPath); \
      virtual HRESULT __stdcall RemoveFile(const CATBSTR & iFile); \
      virtual HRESULT __stdcall KeepDirectory(CAT_VARIANT_BOOL iKeep); \
      virtual HRESULT __stdcall SetDirectoryFile(const CATBSTR & iDirectory); \
      virtual HRESULT __stdcall SetDirectoryOneFile(const CATBSTR & iFile, const CATBSTR & iDirectory); \
      virtual HRESULT __stdcall SetRenameFile(const CATBSTR & iOldname, const CATBSTR & iNewName); \
      virtual HRESULT __stdcall Run(); \
      virtual HRESULT __stdcall GetLastSendToMethodError(CATBSTR & oErrorParam, CATLONG & oErrorCode); \
      virtual HRESULT  __stdcall get_Application(CATIAApplication *& oApplication); \
      virtual HRESULT  __stdcall get_Parent(CATBaseDispatch *& oParent); \
      virtual HRESULT  __stdcall get_Name(CATBSTR & oNameBSTR); \
      virtual HRESULT  __stdcall put_Name(const CATBSTR & iNameBSTR); \
      virtual HRESULT  __stdcall GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj); \
};



#define ENVTIEdeclare_CATIASendToService(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
virtual HRESULT __stdcall SetInitialFile(const CATBSTR & iPath); \
virtual HRESULT __stdcall GetListOfDependantFile(CATSafeArrayVariant & oDependant); \
virtual HRESULT __stdcall GetListOfToBeCopiedFiles(CATSafeArrayVariant & oWillBeCopied); \
virtual HRESULT __stdcall AddFile(const CATBSTR & iPath); \
virtual HRESULT __stdcall RemoveFile(const CATBSTR & iFile); \
virtual HRESULT __stdcall KeepDirectory(CAT_VARIANT_BOOL iKeep); \
virtual HRESULT __stdcall SetDirectoryFile(const CATBSTR & iDirectory); \
virtual HRESULT __stdcall SetDirectoryOneFile(const CATBSTR & iFile, const CATBSTR & iDirectory); \
virtual HRESULT __stdcall SetRenameFile(const CATBSTR & iOldname, const CATBSTR & iNewName); \
virtual HRESULT __stdcall Run(); \
virtual HRESULT __stdcall GetLastSendToMethodError(CATBSTR & oErrorParam, CATLONG & oErrorCode); \
virtual HRESULT  __stdcall get_Application(CATIAApplication *& oApplication); \
virtual HRESULT  __stdcall get_Parent(CATBaseDispatch *& oParent); \
virtual HRESULT  __stdcall get_Name(CATBSTR & oNameBSTR); \
virtual HRESULT  __stdcall put_Name(const CATBSTR & iNameBSTR); \
virtual HRESULT  __stdcall GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj); \


#define ENVTIEdefine_CATIASendToService(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
HRESULT __stdcall  ENVTIEName::SetInitialFile(const CATBSTR & iPath) \
{ \
return (ENVTIECALL(CATIASendToService,ENVTIETypeLetter,ENVTIELetter)SetInitialFile(iPath)); \
} \
HRESULT __stdcall  ENVTIEName::GetListOfDependantFile(CATSafeArrayVariant & oDependant) \
{ \
return (ENVTIECALL(CATIASendToService,ENVTIETypeLetter,ENVTIELetter)GetListOfDependantFile(oDependant)); \
} \
HRESULT __stdcall  ENVTIEName::GetListOfToBeCopiedFiles(CATSafeArrayVariant & oWillBeCopied) \
{ \
return (ENVTIECALL(CATIASendToService,ENVTIETypeLetter,ENVTIELetter)GetListOfToBeCopiedFiles(oWillBeCopied)); \
} \
HRESULT __stdcall  ENVTIEName::AddFile(const CATBSTR & iPath) \
{ \
return (ENVTIECALL(CATIASendToService,ENVTIETypeLetter,ENVTIELetter)AddFile(iPath)); \
} \
HRESULT __stdcall  ENVTIEName::RemoveFile(const CATBSTR & iFile) \
{ \
return (ENVTIECALL(CATIASendToService,ENVTIETypeLetter,ENVTIELetter)RemoveFile(iFile)); \
} \
HRESULT __stdcall  ENVTIEName::KeepDirectory(CAT_VARIANT_BOOL iKeep) \
{ \
return (ENVTIECALL(CATIASendToService,ENVTIETypeLetter,ENVTIELetter)KeepDirectory(iKeep)); \
} \
HRESULT __stdcall  ENVTIEName::SetDirectoryFile(const CATBSTR & iDirectory) \
{ \
return (ENVTIECALL(CATIASendToService,ENVTIETypeLetter,ENVTIELetter)SetDirectoryFile(iDirectory)); \
} \
HRESULT __stdcall  ENVTIEName::SetDirectoryOneFile(const CATBSTR & iFile, const CATBSTR & iDirectory) \
{ \
return (ENVTIECALL(CATIASendToService,ENVTIETypeLetter,ENVTIELetter)SetDirectoryOneFile(iFile,iDirectory)); \
} \
HRESULT __stdcall  ENVTIEName::SetRenameFile(const CATBSTR & iOldname, const CATBSTR & iNewName) \
{ \
return (ENVTIECALL(CATIASendToService,ENVTIETypeLetter,ENVTIELetter)SetRenameFile(iOldname,iNewName)); \
} \
HRESULT __stdcall  ENVTIEName::Run() \
{ \
return (ENVTIECALL(CATIASendToService,ENVTIETypeLetter,ENVTIELetter)Run()); \
} \
HRESULT __stdcall  ENVTIEName::GetLastSendToMethodError(CATBSTR & oErrorParam, CATLONG & oErrorCode) \
{ \
return (ENVTIECALL(CATIASendToService,ENVTIETypeLetter,ENVTIELetter)GetLastSendToMethodError(oErrorParam,oErrorCode)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Application(CATIAApplication *& oApplication) \
{ \
return (ENVTIECALL(CATIASendToService,ENVTIETypeLetter,ENVTIELetter)get_Application(oApplication)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Parent(CATBaseDispatch *& oParent) \
{ \
return (ENVTIECALL(CATIASendToService,ENVTIETypeLetter,ENVTIELetter)get_Parent(oParent)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Name(CATBSTR & oNameBSTR) \
{ \
return (ENVTIECALL(CATIASendToService,ENVTIETypeLetter,ENVTIELetter)get_Name(oNameBSTR)); \
} \
HRESULT  __stdcall  ENVTIEName::put_Name(const CATBSTR & iNameBSTR) \
{ \
return (ENVTIECALL(CATIASendToService,ENVTIETypeLetter,ENVTIELetter)put_Name(iNameBSTR)); \
} \
HRESULT  __stdcall  ENVTIEName::GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj) \
{ \
return (ENVTIECALL(CATIASendToService,ENVTIETypeLetter,ENVTIELetter)GetItem(IDName,RealObj)); \
} \


/* Name of the TIE class */
#define class_TIE_CATIASendToService(classe)    TIECATIASendToService##classe


/* Common methods inside a TIE */
#define common_TIE_CATIASendToService(classe) \
 \
 \
/* Static initialization */ \
CATDefineCommonTIEMembers(CATIASendToService, classe) \
 \
 \
CATImplementTIEMethods(CATIASendToService, classe) \
CATImplementIUnknownMethodsForCATBaseUnknownTIE(CATIASendToService, classe, 2) \
CATImplementIDispatchMethodsForCATBaseUnknownTIE(CATIASendToService, classe) \
CATImplementCATBaseUnknownMethodsForTIE(CATIASendToService, classe) \
 \
HRESULT __stdcall  TIECATIASendToService##classe::SetInitialFile(const CATBSTR & iPath) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,1,&_Trac2,&iPath); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetInitialFile(iPath); \
   ExitAfterCall(this,1,_Trac2,&_ret_arg,&iPath); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIASendToService##classe::GetListOfDependantFile(CATSafeArrayVariant & oDependant) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,2,&_Trac2,&oDependant); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetListOfDependantFile(oDependant); \
   ExitAfterCall(this,2,_Trac2,&_ret_arg,&oDependant); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIASendToService##classe::GetListOfToBeCopiedFiles(CATSafeArrayVariant & oWillBeCopied) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,3,&_Trac2,&oWillBeCopied); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetListOfToBeCopiedFiles(oWillBeCopied); \
   ExitAfterCall(this,3,_Trac2,&_ret_arg,&oWillBeCopied); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIASendToService##classe::AddFile(const CATBSTR & iPath) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,4,&_Trac2,&iPath); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->AddFile(iPath); \
   ExitAfterCall(this,4,_Trac2,&_ret_arg,&iPath); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIASendToService##classe::RemoveFile(const CATBSTR & iFile) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,5,&_Trac2,&iFile); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->RemoveFile(iFile); \
   ExitAfterCall(this,5,_Trac2,&_ret_arg,&iFile); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIASendToService##classe::KeepDirectory(CAT_VARIANT_BOOL iKeep) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,6,&_Trac2,&iKeep); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->KeepDirectory(iKeep); \
   ExitAfterCall(this,6,_Trac2,&_ret_arg,&iKeep); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIASendToService##classe::SetDirectoryFile(const CATBSTR & iDirectory) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,7,&_Trac2,&iDirectory); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetDirectoryFile(iDirectory); \
   ExitAfterCall(this,7,_Trac2,&_ret_arg,&iDirectory); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIASendToService##classe::SetDirectoryOneFile(const CATBSTR & iFile, const CATBSTR & iDirectory) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,8,&_Trac2,&iFile,&iDirectory); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetDirectoryOneFile(iFile,iDirectory); \
   ExitAfterCall(this,8,_Trac2,&_ret_arg,&iFile,&iDirectory); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIASendToService##classe::SetRenameFile(const CATBSTR & iOldname, const CATBSTR & iNewName) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,9,&_Trac2,&iOldname,&iNewName); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetRenameFile(iOldname,iNewName); \
   ExitAfterCall(this,9,_Trac2,&_ret_arg,&iOldname,&iNewName); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIASendToService##classe::Run() \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,10,&_Trac2); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->Run(); \
   ExitAfterCall(this,10,_Trac2,&_ret_arg); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIASendToService##classe::GetLastSendToMethodError(CATBSTR & oErrorParam, CATLONG & oErrorCode) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,11,&_Trac2,&oErrorParam,&oErrorCode); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetLastSendToMethodError(oErrorParam,oErrorCode); \
   ExitAfterCall(this,11,_Trac2,&_ret_arg,&oErrorParam,&oErrorCode); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIASendToService##classe::get_Application(CATIAApplication *& oApplication) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,12,&_Trac2,&oApplication); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Application(oApplication); \
   ExitAfterCall(this,12,_Trac2,&_ret_arg,&oApplication); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIASendToService##classe::get_Parent(CATBaseDispatch *& oParent) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,13,&_Trac2,&oParent); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Parent(oParent); \
   ExitAfterCall(this,13,_Trac2,&_ret_arg,&oParent); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIASendToService##classe::get_Name(CATBSTR & oNameBSTR) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,14,&_Trac2,&oNameBSTR); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Name(oNameBSTR); \
   ExitAfterCall(this,14,_Trac2,&_ret_arg,&oNameBSTR); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIASendToService##classe::put_Name(const CATBSTR & iNameBSTR) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,15,&_Trac2,&iNameBSTR); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_Name(iNameBSTR); \
   ExitAfterCall(this,15,_Trac2,&_ret_arg,&iNameBSTR); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIASendToService##classe::GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,16,&_Trac2,&IDName,&RealObj); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetItem(IDName,RealObj); \
   ExitAfterCall(this,16,_Trac2,&_ret_arg,&IDName,&RealObj); \
   return(_ret_arg); \
} \



/* Macro used to link an implementation with an interface */
#define TIE_CATIASendToService(classe) \
 \
 \
declare_TIE_CATIASendToService(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIASendToService##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIASendToService,"CATIASendToService",CATIASendToService::MetaObject(),classe::MetaObject(),TIE); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIASendToService(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIECreation(CATIASendToService, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIASendToService##classe(classe::MetaObject(),CATIASendToService::MetaObject(),(void *)CreateTIECATIASendToService##classe)



/* Macro used to link an implementation with an interface */
/* This TIE is chained on the implementation object */
#define TIEchain_CATIASendToService(classe) \
 \
 \
declare_TIE_CATIASendToService(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIASendToService##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIASendToService,"CATIASendToService",CATIASendToService::MetaObject(),classe::MetaObject(),TIEchain); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIASendToService(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIEchainCreation(CATIASendToService, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIASendToService##classe(classe::MetaObject(),CATIASendToService::MetaObject(),(void *)CreateTIECATIASendToService##classe)


/* Macro to switch between BOA and TIE at build time */ 
#ifdef CATSYS_BOA_IS_TIE
#define BOA_CATIASendToService(classe) TIE_CATIASendToService(classe)
#else
#define BOA_CATIASendToService(classe) CATImplementBOA(CATIASendToService, classe)
#endif

#endif
