#ifndef __TIE_CATIAFileSystem
#define __TIE_CATIAFileSystem

#include <string.h>
#include "CATBaseUnknown.h"
#include "CATMetaClass.h"
#include "CATMacForTie.h"
#include "CATExitJournal.h"
#include "CATIAFileSystem.h"
#include "JS0DSPA.h"


#ifdef _WINDOWS_SOURCE
#define Exported __declspec(dllexport)
#define Imported __declspec(dllimport)
#else
#define Exported 
#define Imported 
#endif


/* To link an implementation with the interface CATIAFileSystem */
#define declare_TIE_CATIAFileSystem(classe) \
 \
 \
class TIECATIAFileSystem##classe : public CATIAFileSystem \
{ \
   private: \
      CATDeclareCommonTIEMembers \
   public: \
      CATDeclareTIEMethods(CATIAFileSystem, classe) \
      CATDeclareIUnknownMethodsForCATBaseUnknownTIE \
      CATDeclareIDispatchMethodsForCATBaseUnknownTIE \
      CATDeclareCATBaseUnknownMethodsForTIE \
      virtual HRESULT __stdcall GetFolder(const CATBSTR & iPath, CATIAFolder *& oFolder); \
      virtual HRESULT __stdcall CopyFolder(const CATBSTR & iSourcePath, const CATBSTR & iDestinationPath); \
      virtual HRESULT __stdcall CreateFolder(const CATBSTR & iPath, CATIAFolder *& oFolder); \
      virtual HRESULT __stdcall DeleteFolder(const CATBSTR & iPath); \
      virtual HRESULT __stdcall FolderExists(const CATBSTR & iPath, CAT_VARIANT_BOOL & oExists); \
      virtual HRESULT __stdcall GetFile(const CATBSTR & iPath, CATIAFile *& oFile); \
      virtual HRESULT __stdcall CopyFile(const CATBSTR & iPathSource, const CATBSTR & iPathDestination, CAT_VARIANT_BOOL iOverwrite); \
      virtual HRESULT __stdcall CreateFile(const CATBSTR & iPath, CAT_VARIANT_BOOL iOverwrite, CATIAFile *& oFile); \
      virtual HRESULT __stdcall DeleteFile(const CATBSTR & iPath); \
      virtual HRESULT __stdcall FileExists(const CATBSTR & iPath, CAT_VARIANT_BOOL & oExists); \
      virtual HRESULT __stdcall get_TemporaryDirectory(CATIAFolder *& oTmpDirectory); \
      virtual HRESULT __stdcall get_PathSeparator(CATBSTR & oPathSeparator); \
      virtual HRESULT __stdcall get_FileSeparator(CATBSTR & oFileSeparator); \
      virtual HRESULT __stdcall ConcatenatePaths(const CATBSTR & iPathChunk1, const CATBSTR & iPathChunk2, CATBSTR & oPath); \
      virtual HRESULT  __stdcall get_Application(CATIAApplication *& oApplication); \
      virtual HRESULT  __stdcall get_Parent(CATBaseDispatch *& oParent); \
      virtual HRESULT  __stdcall get_Name(CATBSTR & oNameBSTR); \
      virtual HRESULT  __stdcall put_Name(const CATBSTR & iNameBSTR); \
      virtual HRESULT  __stdcall GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj); \
};



#define ENVTIEdeclare_CATIAFileSystem(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
virtual HRESULT __stdcall GetFolder(const CATBSTR & iPath, CATIAFolder *& oFolder); \
virtual HRESULT __stdcall CopyFolder(const CATBSTR & iSourcePath, const CATBSTR & iDestinationPath); \
virtual HRESULT __stdcall CreateFolder(const CATBSTR & iPath, CATIAFolder *& oFolder); \
virtual HRESULT __stdcall DeleteFolder(const CATBSTR & iPath); \
virtual HRESULT __stdcall FolderExists(const CATBSTR & iPath, CAT_VARIANT_BOOL & oExists); \
virtual HRESULT __stdcall GetFile(const CATBSTR & iPath, CATIAFile *& oFile); \
virtual HRESULT __stdcall CopyFile(const CATBSTR & iPathSource, const CATBSTR & iPathDestination, CAT_VARIANT_BOOL iOverwrite); \
virtual HRESULT __stdcall CreateFile(const CATBSTR & iPath, CAT_VARIANT_BOOL iOverwrite, CATIAFile *& oFile); \
virtual HRESULT __stdcall DeleteFile(const CATBSTR & iPath); \
virtual HRESULT __stdcall FileExists(const CATBSTR & iPath, CAT_VARIANT_BOOL & oExists); \
virtual HRESULT __stdcall get_TemporaryDirectory(CATIAFolder *& oTmpDirectory); \
virtual HRESULT __stdcall get_PathSeparator(CATBSTR & oPathSeparator); \
virtual HRESULT __stdcall get_FileSeparator(CATBSTR & oFileSeparator); \
virtual HRESULT __stdcall ConcatenatePaths(const CATBSTR & iPathChunk1, const CATBSTR & iPathChunk2, CATBSTR & oPath); \
virtual HRESULT  __stdcall get_Application(CATIAApplication *& oApplication); \
virtual HRESULT  __stdcall get_Parent(CATBaseDispatch *& oParent); \
virtual HRESULT  __stdcall get_Name(CATBSTR & oNameBSTR); \
virtual HRESULT  __stdcall put_Name(const CATBSTR & iNameBSTR); \
virtual HRESULT  __stdcall GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj); \


#define ENVTIEdefine_CATIAFileSystem(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
HRESULT __stdcall  ENVTIEName::GetFolder(const CATBSTR & iPath, CATIAFolder *& oFolder) \
{ \
return (ENVTIECALL(CATIAFileSystem,ENVTIETypeLetter,ENVTIELetter)GetFolder(iPath,oFolder)); \
} \
HRESULT __stdcall  ENVTIEName::CopyFolder(const CATBSTR & iSourcePath, const CATBSTR & iDestinationPath) \
{ \
return (ENVTIECALL(CATIAFileSystem,ENVTIETypeLetter,ENVTIELetter)CopyFolder(iSourcePath,iDestinationPath)); \
} \
HRESULT __stdcall  ENVTIEName::CreateFolder(const CATBSTR & iPath, CATIAFolder *& oFolder) \
{ \
return (ENVTIECALL(CATIAFileSystem,ENVTIETypeLetter,ENVTIELetter)CreateFolder(iPath,oFolder)); \
} \
HRESULT __stdcall  ENVTIEName::DeleteFolder(const CATBSTR & iPath) \
{ \
return (ENVTIECALL(CATIAFileSystem,ENVTIETypeLetter,ENVTIELetter)DeleteFolder(iPath)); \
} \
HRESULT __stdcall  ENVTIEName::FolderExists(const CATBSTR & iPath, CAT_VARIANT_BOOL & oExists) \
{ \
return (ENVTIECALL(CATIAFileSystem,ENVTIETypeLetter,ENVTIELetter)FolderExists(iPath,oExists)); \
} \
HRESULT __stdcall  ENVTIEName::GetFile(const CATBSTR & iPath, CATIAFile *& oFile) \
{ \
return (ENVTIECALL(CATIAFileSystem,ENVTIETypeLetter,ENVTIELetter)GetFile(iPath,oFile)); \
} \
HRESULT __stdcall  ENVTIEName::CopyFile(const CATBSTR & iPathSource, const CATBSTR & iPathDestination, CAT_VARIANT_BOOL iOverwrite) \
{ \
return (ENVTIECALL(CATIAFileSystem,ENVTIETypeLetter,ENVTIELetter)CopyFile(iPathSource,iPathDestination,iOverwrite)); \
} \
HRESULT __stdcall  ENVTIEName::CreateFile(const CATBSTR & iPath, CAT_VARIANT_BOOL iOverwrite, CATIAFile *& oFile) \
{ \
return (ENVTIECALL(CATIAFileSystem,ENVTIETypeLetter,ENVTIELetter)CreateFile(iPath,iOverwrite,oFile)); \
} \
HRESULT __stdcall  ENVTIEName::DeleteFile(const CATBSTR & iPath) \
{ \
return (ENVTIECALL(CATIAFileSystem,ENVTIETypeLetter,ENVTIELetter)DeleteFile(iPath)); \
} \
HRESULT __stdcall  ENVTIEName::FileExists(const CATBSTR & iPath, CAT_VARIANT_BOOL & oExists) \
{ \
return (ENVTIECALL(CATIAFileSystem,ENVTIETypeLetter,ENVTIELetter)FileExists(iPath,oExists)); \
} \
HRESULT __stdcall  ENVTIEName::get_TemporaryDirectory(CATIAFolder *& oTmpDirectory) \
{ \
return (ENVTIECALL(CATIAFileSystem,ENVTIETypeLetter,ENVTIELetter)get_TemporaryDirectory(oTmpDirectory)); \
} \
HRESULT __stdcall  ENVTIEName::get_PathSeparator(CATBSTR & oPathSeparator) \
{ \
return (ENVTIECALL(CATIAFileSystem,ENVTIETypeLetter,ENVTIELetter)get_PathSeparator(oPathSeparator)); \
} \
HRESULT __stdcall  ENVTIEName::get_FileSeparator(CATBSTR & oFileSeparator) \
{ \
return (ENVTIECALL(CATIAFileSystem,ENVTIETypeLetter,ENVTIELetter)get_FileSeparator(oFileSeparator)); \
} \
HRESULT __stdcall  ENVTIEName::ConcatenatePaths(const CATBSTR & iPathChunk1, const CATBSTR & iPathChunk2, CATBSTR & oPath) \
{ \
return (ENVTIECALL(CATIAFileSystem,ENVTIETypeLetter,ENVTIELetter)ConcatenatePaths(iPathChunk1,iPathChunk2,oPath)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Application(CATIAApplication *& oApplication) \
{ \
return (ENVTIECALL(CATIAFileSystem,ENVTIETypeLetter,ENVTIELetter)get_Application(oApplication)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Parent(CATBaseDispatch *& oParent) \
{ \
return (ENVTIECALL(CATIAFileSystem,ENVTIETypeLetter,ENVTIELetter)get_Parent(oParent)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Name(CATBSTR & oNameBSTR) \
{ \
return (ENVTIECALL(CATIAFileSystem,ENVTIETypeLetter,ENVTIELetter)get_Name(oNameBSTR)); \
} \
HRESULT  __stdcall  ENVTIEName::put_Name(const CATBSTR & iNameBSTR) \
{ \
return (ENVTIECALL(CATIAFileSystem,ENVTIETypeLetter,ENVTIELetter)put_Name(iNameBSTR)); \
} \
HRESULT  __stdcall  ENVTIEName::GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj) \
{ \
return (ENVTIECALL(CATIAFileSystem,ENVTIETypeLetter,ENVTIELetter)GetItem(IDName,RealObj)); \
} \


/* Name of the TIE class */
#define class_TIE_CATIAFileSystem(classe)    TIECATIAFileSystem##classe


/* Common methods inside a TIE */
#define common_TIE_CATIAFileSystem(classe) \
 \
 \
/* Static initialization */ \
CATDefineCommonTIEMembers(CATIAFileSystem, classe) \
 \
 \
CATImplementTIEMethods(CATIAFileSystem, classe) \
CATImplementIUnknownMethodsForCATBaseUnknownTIE(CATIAFileSystem, classe, 2) \
CATImplementIDispatchMethodsForCATBaseUnknownTIE(CATIAFileSystem, classe) \
CATImplementCATBaseUnknownMethodsForTIE(CATIAFileSystem, classe) \
 \
HRESULT __stdcall  TIECATIAFileSystem##classe::GetFolder(const CATBSTR & iPath, CATIAFolder *& oFolder) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,1,&_Trac2,&iPath,&oFolder); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetFolder(iPath,oFolder); \
   ExitAfterCall(this,1,_Trac2,&_ret_arg,&iPath,&oFolder); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAFileSystem##classe::CopyFolder(const CATBSTR & iSourcePath, const CATBSTR & iDestinationPath) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,2,&_Trac2,&iSourcePath,&iDestinationPath); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->CopyFolder(iSourcePath,iDestinationPath); \
   ExitAfterCall(this,2,_Trac2,&_ret_arg,&iSourcePath,&iDestinationPath); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAFileSystem##classe::CreateFolder(const CATBSTR & iPath, CATIAFolder *& oFolder) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,3,&_Trac2,&iPath,&oFolder); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->CreateFolder(iPath,oFolder); \
   ExitAfterCall(this,3,_Trac2,&_ret_arg,&iPath,&oFolder); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAFileSystem##classe::DeleteFolder(const CATBSTR & iPath) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,4,&_Trac2,&iPath); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->DeleteFolder(iPath); \
   ExitAfterCall(this,4,_Trac2,&_ret_arg,&iPath); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAFileSystem##classe::FolderExists(const CATBSTR & iPath, CAT_VARIANT_BOOL & oExists) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,5,&_Trac2,&iPath,&oExists); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->FolderExists(iPath,oExists); \
   ExitAfterCall(this,5,_Trac2,&_ret_arg,&iPath,&oExists); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAFileSystem##classe::GetFile(const CATBSTR & iPath, CATIAFile *& oFile) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,6,&_Trac2,&iPath,&oFile); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetFile(iPath,oFile); \
   ExitAfterCall(this,6,_Trac2,&_ret_arg,&iPath,&oFile); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAFileSystem##classe::CopyFile(const CATBSTR & iPathSource, const CATBSTR & iPathDestination, CAT_VARIANT_BOOL iOverwrite) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,7,&_Trac2,&iPathSource,&iPathDestination,&iOverwrite); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->CopyFile(iPathSource,iPathDestination,iOverwrite); \
   ExitAfterCall(this,7,_Trac2,&_ret_arg,&iPathSource,&iPathDestination,&iOverwrite); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAFileSystem##classe::CreateFile(const CATBSTR & iPath, CAT_VARIANT_BOOL iOverwrite, CATIAFile *& oFile) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,8,&_Trac2,&iPath,&iOverwrite,&oFile); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->CreateFile(iPath,iOverwrite,oFile); \
   ExitAfterCall(this,8,_Trac2,&_ret_arg,&iPath,&iOverwrite,&oFile); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAFileSystem##classe::DeleteFile(const CATBSTR & iPath) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,9,&_Trac2,&iPath); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->DeleteFile(iPath); \
   ExitAfterCall(this,9,_Trac2,&_ret_arg,&iPath); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAFileSystem##classe::FileExists(const CATBSTR & iPath, CAT_VARIANT_BOOL & oExists) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,10,&_Trac2,&iPath,&oExists); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->FileExists(iPath,oExists); \
   ExitAfterCall(this,10,_Trac2,&_ret_arg,&iPath,&oExists); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAFileSystem##classe::get_TemporaryDirectory(CATIAFolder *& oTmpDirectory) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,11,&_Trac2,&oTmpDirectory); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_TemporaryDirectory(oTmpDirectory); \
   ExitAfterCall(this,11,_Trac2,&_ret_arg,&oTmpDirectory); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAFileSystem##classe::get_PathSeparator(CATBSTR & oPathSeparator) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,12,&_Trac2,&oPathSeparator); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_PathSeparator(oPathSeparator); \
   ExitAfterCall(this,12,_Trac2,&_ret_arg,&oPathSeparator); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAFileSystem##classe::get_FileSeparator(CATBSTR & oFileSeparator) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,13,&_Trac2,&oFileSeparator); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_FileSeparator(oFileSeparator); \
   ExitAfterCall(this,13,_Trac2,&_ret_arg,&oFileSeparator); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAFileSystem##classe::ConcatenatePaths(const CATBSTR & iPathChunk1, const CATBSTR & iPathChunk2, CATBSTR & oPath) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,14,&_Trac2,&iPathChunk1,&iPathChunk2,&oPath); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->ConcatenatePaths(iPathChunk1,iPathChunk2,oPath); \
   ExitAfterCall(this,14,_Trac2,&_ret_arg,&iPathChunk1,&iPathChunk2,&oPath); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAFileSystem##classe::get_Application(CATIAApplication *& oApplication) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,15,&_Trac2,&oApplication); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Application(oApplication); \
   ExitAfterCall(this,15,_Trac2,&_ret_arg,&oApplication); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAFileSystem##classe::get_Parent(CATBaseDispatch *& oParent) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,16,&_Trac2,&oParent); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Parent(oParent); \
   ExitAfterCall(this,16,_Trac2,&_ret_arg,&oParent); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAFileSystem##classe::get_Name(CATBSTR & oNameBSTR) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,17,&_Trac2,&oNameBSTR); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Name(oNameBSTR); \
   ExitAfterCall(this,17,_Trac2,&_ret_arg,&oNameBSTR); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAFileSystem##classe::put_Name(const CATBSTR & iNameBSTR) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,18,&_Trac2,&iNameBSTR); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_Name(iNameBSTR); \
   ExitAfterCall(this,18,_Trac2,&_ret_arg,&iNameBSTR); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAFileSystem##classe::GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,19,&_Trac2,&IDName,&RealObj); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetItem(IDName,RealObj); \
   ExitAfterCall(this,19,_Trac2,&_ret_arg,&IDName,&RealObj); \
   return(_ret_arg); \
} \



/* Macro used to link an implementation with an interface */
#define TIE_CATIAFileSystem(classe) \
 \
 \
declare_TIE_CATIAFileSystem(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIAFileSystem##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIAFileSystem,"CATIAFileSystem",CATIAFileSystem::MetaObject(),classe::MetaObject(),TIE); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIAFileSystem(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIECreation(CATIAFileSystem, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIAFileSystem##classe(classe::MetaObject(),CATIAFileSystem::MetaObject(),(void *)CreateTIECATIAFileSystem##classe)



/* Macro used to link an implementation with an interface */
/* This TIE is chained on the implementation object */
#define TIEchain_CATIAFileSystem(classe) \
 \
 \
declare_TIE_CATIAFileSystem(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIAFileSystem##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIAFileSystem,"CATIAFileSystem",CATIAFileSystem::MetaObject(),classe::MetaObject(),TIEchain); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIAFileSystem(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIEchainCreation(CATIAFileSystem, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIAFileSystem##classe(classe::MetaObject(),CATIAFileSystem::MetaObject(),(void *)CreateTIECATIAFileSystem##classe)


/* Macro to switch between BOA and TIE at build time */ 
#ifdef CATSYS_BOA_IS_TIE
#define BOA_CATIAFileSystem(classe) TIE_CATIAFileSystem(classe)
#else
#define BOA_CATIAFileSystem(classe) CATImplementBOA(CATIAFileSystem, classe)
#endif

#endif
