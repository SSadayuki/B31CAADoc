#ifndef __TIE_CATIAFolder
#define __TIE_CATIAFolder

#include <string.h>
#include "CATBaseUnknown.h"
#include "CATMetaClass.h"
#include "CATMacForTie.h"
#include "CATExitJournal.h"
#include "CATIAFolder.h"
#include "JS0DSPA.h"


#ifdef _WINDOWS_SOURCE
#define Exported __declspec(dllexport)
#define Imported __declspec(dllimport)
#else
#define Exported 
#define Imported 
#endif


/* To link an implementation with the interface CATIAFolder */
#define declare_TIE_CATIAFolder(classe) \
 \
 \
class TIECATIAFolder##classe : public CATIAFolder \
{ \
   private: \
      CATDeclareCommonTIEMembers \
   public: \
      CATDeclareTIEMethods(CATIAFolder, classe) \
      CATDeclareIUnknownMethodsForCATBaseUnknownTIE \
      CATDeclareIDispatchMethodsForCATBaseUnknownTIE \
      CATDeclareCATBaseUnknownMethodsForTIE \
      virtual HRESULT __stdcall get_Files(CATIAFiles *& oFiles); \
      virtual HRESULT __stdcall get_SubFolders(CATIAFolders *& oSubFolders); \
      virtual HRESULT __stdcall get_Path(CATBSTR & oPath); \
      virtual HRESULT __stdcall get_ParentFolder(CATIAFolder *& oParentFolder); \
      virtual HRESULT __stdcall put_ParentFolder(CATIAFolder * iParentFolder); \
      virtual HRESULT  __stdcall get_Application(CATIAApplication *& oApplication); \
      virtual HRESULT  __stdcall get_Parent(CATBaseDispatch *& oParent); \
      virtual HRESULT  __stdcall get_Name(CATBSTR & oNameBSTR); \
      virtual HRESULT  __stdcall put_Name(const CATBSTR & iNameBSTR); \
      virtual HRESULT  __stdcall GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj); \
};



#define ENVTIEdeclare_CATIAFolder(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
virtual HRESULT __stdcall get_Files(CATIAFiles *& oFiles); \
virtual HRESULT __stdcall get_SubFolders(CATIAFolders *& oSubFolders); \
virtual HRESULT __stdcall get_Path(CATBSTR & oPath); \
virtual HRESULT __stdcall get_ParentFolder(CATIAFolder *& oParentFolder); \
virtual HRESULT __stdcall put_ParentFolder(CATIAFolder * iParentFolder); \
virtual HRESULT  __stdcall get_Application(CATIAApplication *& oApplication); \
virtual HRESULT  __stdcall get_Parent(CATBaseDispatch *& oParent); \
virtual HRESULT  __stdcall get_Name(CATBSTR & oNameBSTR); \
virtual HRESULT  __stdcall put_Name(const CATBSTR & iNameBSTR); \
virtual HRESULT  __stdcall GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj); \


#define ENVTIEdefine_CATIAFolder(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
HRESULT __stdcall  ENVTIEName::get_Files(CATIAFiles *& oFiles) \
{ \
return (ENVTIECALL(CATIAFolder,ENVTIETypeLetter,ENVTIELetter)get_Files(oFiles)); \
} \
HRESULT __stdcall  ENVTIEName::get_SubFolders(CATIAFolders *& oSubFolders) \
{ \
return (ENVTIECALL(CATIAFolder,ENVTIETypeLetter,ENVTIELetter)get_SubFolders(oSubFolders)); \
} \
HRESULT __stdcall  ENVTIEName::get_Path(CATBSTR & oPath) \
{ \
return (ENVTIECALL(CATIAFolder,ENVTIETypeLetter,ENVTIELetter)get_Path(oPath)); \
} \
HRESULT __stdcall  ENVTIEName::get_ParentFolder(CATIAFolder *& oParentFolder) \
{ \
return (ENVTIECALL(CATIAFolder,ENVTIETypeLetter,ENVTIELetter)get_ParentFolder(oParentFolder)); \
} \
HRESULT __stdcall  ENVTIEName::put_ParentFolder(CATIAFolder * iParentFolder) \
{ \
return (ENVTIECALL(CATIAFolder,ENVTIETypeLetter,ENVTIELetter)put_ParentFolder(iParentFolder)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Application(CATIAApplication *& oApplication) \
{ \
return (ENVTIECALL(CATIAFolder,ENVTIETypeLetter,ENVTIELetter)get_Application(oApplication)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Parent(CATBaseDispatch *& oParent) \
{ \
return (ENVTIECALL(CATIAFolder,ENVTIETypeLetter,ENVTIELetter)get_Parent(oParent)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Name(CATBSTR & oNameBSTR) \
{ \
return (ENVTIECALL(CATIAFolder,ENVTIETypeLetter,ENVTIELetter)get_Name(oNameBSTR)); \
} \
HRESULT  __stdcall  ENVTIEName::put_Name(const CATBSTR & iNameBSTR) \
{ \
return (ENVTIECALL(CATIAFolder,ENVTIETypeLetter,ENVTIELetter)put_Name(iNameBSTR)); \
} \
HRESULT  __stdcall  ENVTIEName::GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj) \
{ \
return (ENVTIECALL(CATIAFolder,ENVTIETypeLetter,ENVTIELetter)GetItem(IDName,RealObj)); \
} \


/* Name of the TIE class */
#define class_TIE_CATIAFolder(classe)    TIECATIAFolder##classe


/* Common methods inside a TIE */
#define common_TIE_CATIAFolder(classe) \
 \
 \
/* Static initialization */ \
CATDefineCommonTIEMembers(CATIAFolder, classe) \
 \
 \
CATImplementTIEMethods(CATIAFolder, classe) \
CATImplementIUnknownMethodsForCATBaseUnknownTIE(CATIAFolder, classe, 2) \
CATImplementIDispatchMethodsForCATBaseUnknownTIE(CATIAFolder, classe) \
CATImplementCATBaseUnknownMethodsForTIE(CATIAFolder, classe) \
 \
HRESULT __stdcall  TIECATIAFolder##classe::get_Files(CATIAFiles *& oFiles) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,1,&_Trac2,&oFiles); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Files(oFiles); \
   ExitAfterCall(this,1,_Trac2,&_ret_arg,&oFiles); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAFolder##classe::get_SubFolders(CATIAFolders *& oSubFolders) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,2,&_Trac2,&oSubFolders); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_SubFolders(oSubFolders); \
   ExitAfterCall(this,2,_Trac2,&_ret_arg,&oSubFolders); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAFolder##classe::get_Path(CATBSTR & oPath) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,3,&_Trac2,&oPath); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Path(oPath); \
   ExitAfterCall(this,3,_Trac2,&_ret_arg,&oPath); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAFolder##classe::get_ParentFolder(CATIAFolder *& oParentFolder) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,4,&_Trac2,&oParentFolder); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_ParentFolder(oParentFolder); \
   ExitAfterCall(this,4,_Trac2,&_ret_arg,&oParentFolder); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAFolder##classe::put_ParentFolder(CATIAFolder * iParentFolder) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,5,&_Trac2,&iParentFolder); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_ParentFolder(iParentFolder); \
   ExitAfterCall(this,5,_Trac2,&_ret_arg,&iParentFolder); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAFolder##classe::get_Application(CATIAApplication *& oApplication) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,6,&_Trac2,&oApplication); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Application(oApplication); \
   ExitAfterCall(this,6,_Trac2,&_ret_arg,&oApplication); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAFolder##classe::get_Parent(CATBaseDispatch *& oParent) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,7,&_Trac2,&oParent); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Parent(oParent); \
   ExitAfterCall(this,7,_Trac2,&_ret_arg,&oParent); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAFolder##classe::get_Name(CATBSTR & oNameBSTR) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,8,&_Trac2,&oNameBSTR); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Name(oNameBSTR); \
   ExitAfterCall(this,8,_Trac2,&_ret_arg,&oNameBSTR); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAFolder##classe::put_Name(const CATBSTR & iNameBSTR) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,9,&_Trac2,&iNameBSTR); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_Name(iNameBSTR); \
   ExitAfterCall(this,9,_Trac2,&_ret_arg,&iNameBSTR); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAFolder##classe::GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,10,&_Trac2,&IDName,&RealObj); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetItem(IDName,RealObj); \
   ExitAfterCall(this,10,_Trac2,&_ret_arg,&IDName,&RealObj); \
   return(_ret_arg); \
} \



/* Macro used to link an implementation with an interface */
#define TIE_CATIAFolder(classe) \
 \
 \
declare_TIE_CATIAFolder(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIAFolder##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIAFolder,"CATIAFolder",CATIAFolder::MetaObject(),classe::MetaObject(),TIE); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIAFolder(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIECreation(CATIAFolder, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIAFolder##classe(classe::MetaObject(),CATIAFolder::MetaObject(),(void *)CreateTIECATIAFolder##classe)



/* Macro used to link an implementation with an interface */
/* This TIE is chained on the implementation object */
#define TIEchain_CATIAFolder(classe) \
 \
 \
declare_TIE_CATIAFolder(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIAFolder##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIAFolder,"CATIAFolder",CATIAFolder::MetaObject(),classe::MetaObject(),TIEchain); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIAFolder(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIEchainCreation(CATIAFolder, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIAFolder##classe(classe::MetaObject(),CATIAFolder::MetaObject(),(void *)CreateTIECATIAFolder##classe)


/* Macro to switch between BOA and TIE at build time */ 
#ifdef CATSYS_BOA_IS_TIE
#define BOA_CATIAFolder(classe) TIE_CATIAFolder(classe)
#else
#define BOA_CATIAFolder(classe) CATImplementBOA(CATIAFolder, classe)
#endif

#endif
