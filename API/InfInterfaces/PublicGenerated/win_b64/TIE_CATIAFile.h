#ifndef __TIE_CATIAFile
#define __TIE_CATIAFile

#include <string.h>
#include "CATBaseUnknown.h"
#include "CATMetaClass.h"
#include "CATMacForTie.h"
#include "CATExitJournal.h"
#include "CATIAFile.h"
#include "JS0DSPA.h"


#ifdef _WINDOWS_SOURCE
#define Exported __declspec(dllexport)
#define Imported __declspec(dllimport)
#else
#define Exported 
#define Imported 
#endif


/* To link an implementation with the interface CATIAFile */
#define declare_TIE_CATIAFile(classe) \
 \
 \
class TIECATIAFile##classe : public CATIAFile \
{ \
   private: \
      CATDeclareCommonTIEMembers \
   public: \
      CATDeclareTIEMethods(CATIAFile, classe) \
      CATDeclareIUnknownMethodsForCATBaseUnknownTIE \
      CATDeclareIDispatchMethodsForCATBaseUnknownTIE \
      CATDeclareCATBaseUnknownMethodsForTIE \
      virtual HRESULT __stdcall get_Size(CATLONG & oSize); \
      virtual HRESULT __stdcall get_Type(CATBSTR & oType); \
      virtual HRESULT __stdcall OpenAsTextStream(const CATBSTR & iMode, CATIATextStream *& oTextStream); \
      virtual HRESULT __stdcall get_Path(CATBSTR & oPath); \
      virtual HRESULT __stdcall get_ParentFolder(CATIAFolder *& oParentFolder); \
      virtual HRESULT __stdcall put_ParentFolder(CATIAFolder * iParentFolder); \
      virtual HRESULT  __stdcall get_Application(CATIAApplication *& oApplication); \
      virtual HRESULT  __stdcall get_Parent(CATBaseDispatch *& oParent); \
      virtual HRESULT  __stdcall get_Name(CATBSTR & oNameBSTR); \
      virtual HRESULT  __stdcall put_Name(const CATBSTR & iNameBSTR); \
      virtual HRESULT  __stdcall GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj); \
};



#define ENVTIEdeclare_CATIAFile(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
virtual HRESULT __stdcall get_Size(CATLONG & oSize); \
virtual HRESULT __stdcall get_Type(CATBSTR & oType); \
virtual HRESULT __stdcall OpenAsTextStream(const CATBSTR & iMode, CATIATextStream *& oTextStream); \
virtual HRESULT __stdcall get_Path(CATBSTR & oPath); \
virtual HRESULT __stdcall get_ParentFolder(CATIAFolder *& oParentFolder); \
virtual HRESULT __stdcall put_ParentFolder(CATIAFolder * iParentFolder); \
virtual HRESULT  __stdcall get_Application(CATIAApplication *& oApplication); \
virtual HRESULT  __stdcall get_Parent(CATBaseDispatch *& oParent); \
virtual HRESULT  __stdcall get_Name(CATBSTR & oNameBSTR); \
virtual HRESULT  __stdcall put_Name(const CATBSTR & iNameBSTR); \
virtual HRESULT  __stdcall GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj); \


#define ENVTIEdefine_CATIAFile(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
HRESULT __stdcall  ENVTIEName::get_Size(CATLONG & oSize) \
{ \
return (ENVTIECALL(CATIAFile,ENVTIETypeLetter,ENVTIELetter)get_Size(oSize)); \
} \
HRESULT __stdcall  ENVTIEName::get_Type(CATBSTR & oType) \
{ \
return (ENVTIECALL(CATIAFile,ENVTIETypeLetter,ENVTIELetter)get_Type(oType)); \
} \
HRESULT __stdcall  ENVTIEName::OpenAsTextStream(const CATBSTR & iMode, CATIATextStream *& oTextStream) \
{ \
return (ENVTIECALL(CATIAFile,ENVTIETypeLetter,ENVTIELetter)OpenAsTextStream(iMode,oTextStream)); \
} \
HRESULT __stdcall  ENVTIEName::get_Path(CATBSTR & oPath) \
{ \
return (ENVTIECALL(CATIAFile,ENVTIETypeLetter,ENVTIELetter)get_Path(oPath)); \
} \
HRESULT __stdcall  ENVTIEName::get_ParentFolder(CATIAFolder *& oParentFolder) \
{ \
return (ENVTIECALL(CATIAFile,ENVTIETypeLetter,ENVTIELetter)get_ParentFolder(oParentFolder)); \
} \
HRESULT __stdcall  ENVTIEName::put_ParentFolder(CATIAFolder * iParentFolder) \
{ \
return (ENVTIECALL(CATIAFile,ENVTIETypeLetter,ENVTIELetter)put_ParentFolder(iParentFolder)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Application(CATIAApplication *& oApplication) \
{ \
return (ENVTIECALL(CATIAFile,ENVTIETypeLetter,ENVTIELetter)get_Application(oApplication)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Parent(CATBaseDispatch *& oParent) \
{ \
return (ENVTIECALL(CATIAFile,ENVTIETypeLetter,ENVTIELetter)get_Parent(oParent)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Name(CATBSTR & oNameBSTR) \
{ \
return (ENVTIECALL(CATIAFile,ENVTIETypeLetter,ENVTIELetter)get_Name(oNameBSTR)); \
} \
HRESULT  __stdcall  ENVTIEName::put_Name(const CATBSTR & iNameBSTR) \
{ \
return (ENVTIECALL(CATIAFile,ENVTIETypeLetter,ENVTIELetter)put_Name(iNameBSTR)); \
} \
HRESULT  __stdcall  ENVTIEName::GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj) \
{ \
return (ENVTIECALL(CATIAFile,ENVTIETypeLetter,ENVTIELetter)GetItem(IDName,RealObj)); \
} \


/* Name of the TIE class */
#define class_TIE_CATIAFile(classe)    TIECATIAFile##classe


/* Common methods inside a TIE */
#define common_TIE_CATIAFile(classe) \
 \
 \
/* Static initialization */ \
CATDefineCommonTIEMembers(CATIAFile, classe) \
 \
 \
CATImplementTIEMethods(CATIAFile, classe) \
CATImplementIUnknownMethodsForCATBaseUnknownTIE(CATIAFile, classe, 2) \
CATImplementIDispatchMethodsForCATBaseUnknownTIE(CATIAFile, classe) \
CATImplementCATBaseUnknownMethodsForTIE(CATIAFile, classe) \
 \
HRESULT __stdcall  TIECATIAFile##classe::get_Size(CATLONG & oSize) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,1,&_Trac2,&oSize); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Size(oSize); \
   ExitAfterCall(this,1,_Trac2,&_ret_arg,&oSize); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAFile##classe::get_Type(CATBSTR & oType) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,2,&_Trac2,&oType); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Type(oType); \
   ExitAfterCall(this,2,_Trac2,&_ret_arg,&oType); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAFile##classe::OpenAsTextStream(const CATBSTR & iMode, CATIATextStream *& oTextStream) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,3,&_Trac2,&iMode,&oTextStream); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->OpenAsTextStream(iMode,oTextStream); \
   ExitAfterCall(this,3,_Trac2,&_ret_arg,&iMode,&oTextStream); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAFile##classe::get_Path(CATBSTR & oPath) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,4,&_Trac2,&oPath); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Path(oPath); \
   ExitAfterCall(this,4,_Trac2,&_ret_arg,&oPath); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAFile##classe::get_ParentFolder(CATIAFolder *& oParentFolder) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,5,&_Trac2,&oParentFolder); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_ParentFolder(oParentFolder); \
   ExitAfterCall(this,5,_Trac2,&_ret_arg,&oParentFolder); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAFile##classe::put_ParentFolder(CATIAFolder * iParentFolder) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,6,&_Trac2,&iParentFolder); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_ParentFolder(iParentFolder); \
   ExitAfterCall(this,6,_Trac2,&_ret_arg,&iParentFolder); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAFile##classe::get_Application(CATIAApplication *& oApplication) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,7,&_Trac2,&oApplication); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Application(oApplication); \
   ExitAfterCall(this,7,_Trac2,&_ret_arg,&oApplication); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAFile##classe::get_Parent(CATBaseDispatch *& oParent) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,8,&_Trac2,&oParent); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Parent(oParent); \
   ExitAfterCall(this,8,_Trac2,&_ret_arg,&oParent); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAFile##classe::get_Name(CATBSTR & oNameBSTR) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,9,&_Trac2,&oNameBSTR); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Name(oNameBSTR); \
   ExitAfterCall(this,9,_Trac2,&_ret_arg,&oNameBSTR); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAFile##classe::put_Name(const CATBSTR & iNameBSTR) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,10,&_Trac2,&iNameBSTR); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_Name(iNameBSTR); \
   ExitAfterCall(this,10,_Trac2,&_ret_arg,&iNameBSTR); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAFile##classe::GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,11,&_Trac2,&IDName,&RealObj); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetItem(IDName,RealObj); \
   ExitAfterCall(this,11,_Trac2,&_ret_arg,&IDName,&RealObj); \
   return(_ret_arg); \
} \



/* Macro used to link an implementation with an interface */
#define TIE_CATIAFile(classe) \
 \
 \
declare_TIE_CATIAFile(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIAFile##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIAFile,"CATIAFile",CATIAFile::MetaObject(),classe::MetaObject(),TIE); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIAFile(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIECreation(CATIAFile, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIAFile##classe(classe::MetaObject(),CATIAFile::MetaObject(),(void *)CreateTIECATIAFile##classe)



/* Macro used to link an implementation with an interface */
/* This TIE is chained on the implementation object */
#define TIEchain_CATIAFile(classe) \
 \
 \
declare_TIE_CATIAFile(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIAFile##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIAFile,"CATIAFile",CATIAFile::MetaObject(),classe::MetaObject(),TIEchain); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIAFile(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIEchainCreation(CATIAFile, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIAFile##classe(classe::MetaObject(),CATIAFile::MetaObject(),(void *)CreateTIECATIAFile##classe)


/* Macro to switch between BOA and TIE at build time */ 
#ifdef CATSYS_BOA_IS_TIE
#define BOA_CATIAFile(classe) TIE_CATIAFile(classe)
#else
#define BOA_CATIAFile(classe) CATImplementBOA(CATIAFile, classe)
#endif

#endif
