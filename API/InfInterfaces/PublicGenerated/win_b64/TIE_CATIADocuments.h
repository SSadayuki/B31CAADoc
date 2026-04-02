#ifndef __TIE_CATIADocuments
#define __TIE_CATIADocuments

#include <string.h>
#include "CATBaseUnknown.h"
#include "CATMetaClass.h"
#include "CATMacForTie.h"
#include "CATExitJournal.h"
#include "CATIADocuments.h"
#include "JS0DSPA.h"


#ifdef _WINDOWS_SOURCE
#define Exported __declspec(dllexport)
#define Imported __declspec(dllimport)
#else
#define Exported 
#define Imported 
#endif


/* To link an implementation with the interface CATIADocuments */
#define declare_TIE_CATIADocuments(classe) \
 \
 \
class TIECATIADocuments##classe : public CATIADocuments \
{ \
   private: \
      CATDeclareCommonTIEMembers \
   public: \
      CATDeclareTIEMethods(CATIADocuments, classe) \
      CATDeclareIUnknownMethodsForCATBaseUnknownTIE \
      CATDeclareIDispatchMethodsForCATBaseUnknownTIE \
      CATDeclareCATBaseUnknownMethodsForTIE \
      virtual HRESULT __stdcall Add(const CATBSTR & docType, CATIADocument *& newDoc); \
      virtual HRESULT __stdcall Item(const CATVariant & iIndex, CATIADocument *& oDocument); \
      virtual HRESULT __stdcall Open(const CATBSTR & iFileName, CATIADocument *& oDoc); \
      virtual HRESULT __stdcall Read(const CATBSTR & iFileName, CATIADocument *& oDoc); \
      virtual HRESULT __stdcall NewFrom(const CATBSTR & iFileName, CATIADocument *& oDoc); \
      virtual HRESULT  __stdcall get_Application(CATIAApplication *& oApplication); \
      virtual HRESULT  __stdcall get_Parent(CATBaseDispatch *& oParent); \
      virtual HRESULT  __stdcall GetItem(const CATBSTR & iIDName, CATBaseDispatch *& oObject); \
      virtual HRESULT  __stdcall get_Name(CATBSTR & oName); \
      virtual HRESULT  __stdcall get_Count(CATLONG & oNbItems); \
      virtual HRESULT  __stdcall get__NewEnum(IUnknown *& oEnumIter); \
};



#define ENVTIEdeclare_CATIADocuments(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
virtual HRESULT __stdcall Add(const CATBSTR & docType, CATIADocument *& newDoc); \
virtual HRESULT __stdcall Item(const CATVariant & iIndex, CATIADocument *& oDocument); \
virtual HRESULT __stdcall Open(const CATBSTR & iFileName, CATIADocument *& oDoc); \
virtual HRESULT __stdcall Read(const CATBSTR & iFileName, CATIADocument *& oDoc); \
virtual HRESULT __stdcall NewFrom(const CATBSTR & iFileName, CATIADocument *& oDoc); \
virtual HRESULT  __stdcall get_Application(CATIAApplication *& oApplication); \
virtual HRESULT  __stdcall get_Parent(CATBaseDispatch *& oParent); \
virtual HRESULT  __stdcall GetItem(const CATBSTR & iIDName, CATBaseDispatch *& oObject); \
virtual HRESULT  __stdcall get_Name(CATBSTR & oName); \
virtual HRESULT  __stdcall get_Count(CATLONG & oNbItems); \
virtual HRESULT  __stdcall get__NewEnum(IUnknown *& oEnumIter); \


#define ENVTIEdefine_CATIADocuments(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
HRESULT __stdcall  ENVTIEName::Add(const CATBSTR & docType, CATIADocument *& newDoc) \
{ \
return (ENVTIECALL(CATIADocuments,ENVTIETypeLetter,ENVTIELetter)Add(docType,newDoc)); \
} \
HRESULT __stdcall  ENVTIEName::Item(const CATVariant & iIndex, CATIADocument *& oDocument) \
{ \
return (ENVTIECALL(CATIADocuments,ENVTIETypeLetter,ENVTIELetter)Item(iIndex,oDocument)); \
} \
HRESULT __stdcall  ENVTIEName::Open(const CATBSTR & iFileName, CATIADocument *& oDoc) \
{ \
return (ENVTIECALL(CATIADocuments,ENVTIETypeLetter,ENVTIELetter)Open(iFileName,oDoc)); \
} \
HRESULT __stdcall  ENVTIEName::Read(const CATBSTR & iFileName, CATIADocument *& oDoc) \
{ \
return (ENVTIECALL(CATIADocuments,ENVTIETypeLetter,ENVTIELetter)Read(iFileName,oDoc)); \
} \
HRESULT __stdcall  ENVTIEName::NewFrom(const CATBSTR & iFileName, CATIADocument *& oDoc) \
{ \
return (ENVTIECALL(CATIADocuments,ENVTIETypeLetter,ENVTIELetter)NewFrom(iFileName,oDoc)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Application(CATIAApplication *& oApplication) \
{ \
return (ENVTIECALL(CATIADocuments,ENVTIETypeLetter,ENVTIELetter)get_Application(oApplication)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Parent(CATBaseDispatch *& oParent) \
{ \
return (ENVTIECALL(CATIADocuments,ENVTIETypeLetter,ENVTIELetter)get_Parent(oParent)); \
} \
HRESULT  __stdcall  ENVTIEName::GetItem(const CATBSTR & iIDName, CATBaseDispatch *& oObject) \
{ \
return (ENVTIECALL(CATIADocuments,ENVTIETypeLetter,ENVTIELetter)GetItem(iIDName,oObject)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Name(CATBSTR & oName) \
{ \
return (ENVTIECALL(CATIADocuments,ENVTIETypeLetter,ENVTIELetter)get_Name(oName)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Count(CATLONG & oNbItems) \
{ \
return (ENVTIECALL(CATIADocuments,ENVTIETypeLetter,ENVTIELetter)get_Count(oNbItems)); \
} \
HRESULT  __stdcall  ENVTIEName::get__NewEnum(IUnknown *& oEnumIter) \
{ \
return (ENVTIECALL(CATIADocuments,ENVTIETypeLetter,ENVTIELetter)get__NewEnum(oEnumIter)); \
} \


/* Name of the TIE class */
#define class_TIE_CATIADocuments(classe)    TIECATIADocuments##classe


/* Common methods inside a TIE */
#define common_TIE_CATIADocuments(classe) \
 \
 \
/* Static initialization */ \
CATDefineCommonTIEMembers(CATIADocuments, classe) \
 \
 \
CATImplementTIEMethods(CATIADocuments, classe) \
CATImplementIUnknownMethodsForCATBaseUnknownTIE(CATIADocuments, classe, 2) \
CATImplementIDispatchMethodsForCATBaseUnknownTIE(CATIADocuments, classe) \
CATImplementCATBaseUnknownMethodsForTIE(CATIADocuments, classe) \
 \
HRESULT __stdcall  TIECATIADocuments##classe::Add(const CATBSTR & docType, CATIADocument *& newDoc) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,1,&_Trac2,&docType,&newDoc); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->Add(docType,newDoc); \
   ExitAfterCall(this,1,_Trac2,&_ret_arg,&docType,&newDoc); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIADocuments##classe::Item(const CATVariant & iIndex, CATIADocument *& oDocument) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,2,&_Trac2,&iIndex,&oDocument); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->Item(iIndex,oDocument); \
   ExitAfterCall(this,2,_Trac2,&_ret_arg,&iIndex,&oDocument); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIADocuments##classe::Open(const CATBSTR & iFileName, CATIADocument *& oDoc) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,3,&_Trac2,&iFileName,&oDoc); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->Open(iFileName,oDoc); \
   ExitAfterCall(this,3,_Trac2,&_ret_arg,&iFileName,&oDoc); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIADocuments##classe::Read(const CATBSTR & iFileName, CATIADocument *& oDoc) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,4,&_Trac2,&iFileName,&oDoc); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->Read(iFileName,oDoc); \
   ExitAfterCall(this,4,_Trac2,&_ret_arg,&iFileName,&oDoc); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIADocuments##classe::NewFrom(const CATBSTR & iFileName, CATIADocument *& oDoc) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,5,&_Trac2,&iFileName,&oDoc); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->NewFrom(iFileName,oDoc); \
   ExitAfterCall(this,5,_Trac2,&_ret_arg,&iFileName,&oDoc); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIADocuments##classe::get_Application(CATIAApplication *& oApplication) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,6,&_Trac2,&oApplication); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Application(oApplication); \
   ExitAfterCall(this,6,_Trac2,&_ret_arg,&oApplication); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIADocuments##classe::get_Parent(CATBaseDispatch *& oParent) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,7,&_Trac2,&oParent); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Parent(oParent); \
   ExitAfterCall(this,7,_Trac2,&_ret_arg,&oParent); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIADocuments##classe::GetItem(const CATBSTR & iIDName, CATBaseDispatch *& oObject) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,8,&_Trac2,&iIDName,&oObject); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetItem(iIDName,oObject); \
   ExitAfterCall(this,8,_Trac2,&_ret_arg,&iIDName,&oObject); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIADocuments##classe::get_Name(CATBSTR & oName) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,9,&_Trac2,&oName); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Name(oName); \
   ExitAfterCall(this,9,_Trac2,&_ret_arg,&oName); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIADocuments##classe::get_Count(CATLONG & oNbItems) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,10,&_Trac2,&oNbItems); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Count(oNbItems); \
   ExitAfterCall(this,10,_Trac2,&_ret_arg,&oNbItems); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIADocuments##classe::get__NewEnum(IUnknown *& oEnumIter) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,11,&_Trac2,&oEnumIter); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get__NewEnum(oEnumIter); \
   ExitAfterCall(this,11,_Trac2,&_ret_arg,&oEnumIter); \
   return(_ret_arg); \
} \



/* Macro used to link an implementation with an interface */
#define TIE_CATIADocuments(classe) \
 \
 \
declare_TIE_CATIADocuments(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIADocuments##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIADocuments,"CATIADocuments",CATIADocuments::MetaObject(),classe::MetaObject(),TIE); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIADocuments(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIECreation(CATIADocuments, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIADocuments##classe(classe::MetaObject(),CATIADocuments::MetaObject(),(void *)CreateTIECATIADocuments##classe)



/* Macro used to link an implementation with an interface */
/* This TIE is chained on the implementation object */
#define TIEchain_CATIADocuments(classe) \
 \
 \
declare_TIE_CATIADocuments(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIADocuments##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIADocuments,"CATIADocuments",CATIADocuments::MetaObject(),classe::MetaObject(),TIEchain); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIADocuments(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIEchainCreation(CATIADocuments, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIADocuments##classe(classe::MetaObject(),CATIADocuments::MetaObject(),(void *)CreateTIECATIADocuments##classe)


/* Macro to switch between BOA and TIE at build time */ 
#ifdef CATSYS_BOA_IS_TIE
#define BOA_CATIADocuments(classe) TIE_CATIADocuments(classe)
#else
#define BOA_CATIADocuments(classe) CATImplementBOA(CATIADocuments, classe)
#endif

#endif
