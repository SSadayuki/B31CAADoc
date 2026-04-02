#ifndef __TIE_CATIAStiDBItem
#define __TIE_CATIAStiDBItem

#include <string.h>
#include "CATBaseUnknown.h"
#include "CATMetaClass.h"
#include "CATMacForTie.h"
#include "CATExitJournal.h"
#include "CATIAStiDBItem.h"
#include "JS0DSPA.h"


#ifdef _WINDOWS_SOURCE
#define Exported __declspec(dllexport)
#define Imported __declspec(dllimport)
#else
#define Exported 
#define Imported 
#endif


/* To link an implementation with the interface CATIAStiDBItem */
#define declare_TIE_CATIAStiDBItem(classe) \
 \
 \
class TIECATIAStiDBItem##classe : public CATIAStiDBItem \
{ \
   private: \
      CATDeclareCommonTIEMembers \
   public: \
      CATDeclareTIEMethods(CATIAStiDBItem, classe) \
      CATDeclareIUnknownMethodsForCATBaseUnknownTIE \
      CATDeclareIDispatchMethodsForCATBaseUnknownTIE \
      CATDeclareCATBaseUnknownMethodsForTIE \
      virtual HRESULT __stdcall GetDocument(CATIADocument *& oDocument); \
      virtual HRESULT __stdcall GetDocumentFullPath(CATBSTR & oFullPath); \
      virtual HRESULT __stdcall GetChildren(CATIAStiDBChildren *& ochildrenList); \
      virtual HRESULT __stdcall IsCFOType(CAT_VARIANT_BOOL & oIsCFOType); \
      virtual HRESULT __stdcall IsRoot(CAT_VARIANT_BOOL & oIsRootCFO); \
      virtual HRESULT  __stdcall get_Application(CATIAApplication *& oApplication); \
      virtual HRESULT  __stdcall get_Parent(CATBaseDispatch *& oParent); \
      virtual HRESULT  __stdcall get_Name(CATBSTR & oNameBSTR); \
      virtual HRESULT  __stdcall put_Name(const CATBSTR & iNameBSTR); \
      virtual HRESULT  __stdcall GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj); \
};



#define ENVTIEdeclare_CATIAStiDBItem(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
virtual HRESULT __stdcall GetDocument(CATIADocument *& oDocument); \
virtual HRESULT __stdcall GetDocumentFullPath(CATBSTR & oFullPath); \
virtual HRESULT __stdcall GetChildren(CATIAStiDBChildren *& ochildrenList); \
virtual HRESULT __stdcall IsCFOType(CAT_VARIANT_BOOL & oIsCFOType); \
virtual HRESULT __stdcall IsRoot(CAT_VARIANT_BOOL & oIsRootCFO); \
virtual HRESULT  __stdcall get_Application(CATIAApplication *& oApplication); \
virtual HRESULT  __stdcall get_Parent(CATBaseDispatch *& oParent); \
virtual HRESULT  __stdcall get_Name(CATBSTR & oNameBSTR); \
virtual HRESULT  __stdcall put_Name(const CATBSTR & iNameBSTR); \
virtual HRESULT  __stdcall GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj); \


#define ENVTIEdefine_CATIAStiDBItem(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
HRESULT __stdcall  ENVTIEName::GetDocument(CATIADocument *& oDocument) \
{ \
return (ENVTIECALL(CATIAStiDBItem,ENVTIETypeLetter,ENVTIELetter)GetDocument(oDocument)); \
} \
HRESULT __stdcall  ENVTIEName::GetDocumentFullPath(CATBSTR & oFullPath) \
{ \
return (ENVTIECALL(CATIAStiDBItem,ENVTIETypeLetter,ENVTIELetter)GetDocumentFullPath(oFullPath)); \
} \
HRESULT __stdcall  ENVTIEName::GetChildren(CATIAStiDBChildren *& ochildrenList) \
{ \
return (ENVTIECALL(CATIAStiDBItem,ENVTIETypeLetter,ENVTIELetter)GetChildren(ochildrenList)); \
} \
HRESULT __stdcall  ENVTIEName::IsCFOType(CAT_VARIANT_BOOL & oIsCFOType) \
{ \
return (ENVTIECALL(CATIAStiDBItem,ENVTIETypeLetter,ENVTIELetter)IsCFOType(oIsCFOType)); \
} \
HRESULT __stdcall  ENVTIEName::IsRoot(CAT_VARIANT_BOOL & oIsRootCFO) \
{ \
return (ENVTIECALL(CATIAStiDBItem,ENVTIETypeLetter,ENVTIELetter)IsRoot(oIsRootCFO)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Application(CATIAApplication *& oApplication) \
{ \
return (ENVTIECALL(CATIAStiDBItem,ENVTIETypeLetter,ENVTIELetter)get_Application(oApplication)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Parent(CATBaseDispatch *& oParent) \
{ \
return (ENVTIECALL(CATIAStiDBItem,ENVTIETypeLetter,ENVTIELetter)get_Parent(oParent)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Name(CATBSTR & oNameBSTR) \
{ \
return (ENVTIECALL(CATIAStiDBItem,ENVTIETypeLetter,ENVTIELetter)get_Name(oNameBSTR)); \
} \
HRESULT  __stdcall  ENVTIEName::put_Name(const CATBSTR & iNameBSTR) \
{ \
return (ENVTIECALL(CATIAStiDBItem,ENVTIETypeLetter,ENVTIELetter)put_Name(iNameBSTR)); \
} \
HRESULT  __stdcall  ENVTIEName::GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj) \
{ \
return (ENVTIECALL(CATIAStiDBItem,ENVTIETypeLetter,ENVTIELetter)GetItem(IDName,RealObj)); \
} \


/* Name of the TIE class */
#define class_TIE_CATIAStiDBItem(classe)    TIECATIAStiDBItem##classe


/* Common methods inside a TIE */
#define common_TIE_CATIAStiDBItem(classe) \
 \
 \
/* Static initialization */ \
CATDefineCommonTIEMembers(CATIAStiDBItem, classe) \
 \
 \
CATImplementTIEMethods(CATIAStiDBItem, classe) \
CATImplementIUnknownMethodsForCATBaseUnknownTIE(CATIAStiDBItem, classe, 2) \
CATImplementIDispatchMethodsForCATBaseUnknownTIE(CATIAStiDBItem, classe) \
CATImplementCATBaseUnknownMethodsForTIE(CATIAStiDBItem, classe) \
 \
HRESULT __stdcall  TIECATIAStiDBItem##classe::GetDocument(CATIADocument *& oDocument) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,1,&_Trac2,&oDocument); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetDocument(oDocument); \
   ExitAfterCall(this,1,_Trac2,&_ret_arg,&oDocument); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAStiDBItem##classe::GetDocumentFullPath(CATBSTR & oFullPath) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,2,&_Trac2,&oFullPath); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetDocumentFullPath(oFullPath); \
   ExitAfterCall(this,2,_Trac2,&_ret_arg,&oFullPath); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAStiDBItem##classe::GetChildren(CATIAStiDBChildren *& ochildrenList) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,3,&_Trac2,&ochildrenList); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetChildren(ochildrenList); \
   ExitAfterCall(this,3,_Trac2,&_ret_arg,&ochildrenList); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAStiDBItem##classe::IsCFOType(CAT_VARIANT_BOOL & oIsCFOType) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,4,&_Trac2,&oIsCFOType); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->IsCFOType(oIsCFOType); \
   ExitAfterCall(this,4,_Trac2,&_ret_arg,&oIsCFOType); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAStiDBItem##classe::IsRoot(CAT_VARIANT_BOOL & oIsRootCFO) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,5,&_Trac2,&oIsRootCFO); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->IsRoot(oIsRootCFO); \
   ExitAfterCall(this,5,_Trac2,&_ret_arg,&oIsRootCFO); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAStiDBItem##classe::get_Application(CATIAApplication *& oApplication) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,6,&_Trac2,&oApplication); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Application(oApplication); \
   ExitAfterCall(this,6,_Trac2,&_ret_arg,&oApplication); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAStiDBItem##classe::get_Parent(CATBaseDispatch *& oParent) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,7,&_Trac2,&oParent); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Parent(oParent); \
   ExitAfterCall(this,7,_Trac2,&_ret_arg,&oParent); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAStiDBItem##classe::get_Name(CATBSTR & oNameBSTR) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,8,&_Trac2,&oNameBSTR); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Name(oNameBSTR); \
   ExitAfterCall(this,8,_Trac2,&_ret_arg,&oNameBSTR); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAStiDBItem##classe::put_Name(const CATBSTR & iNameBSTR) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,9,&_Trac2,&iNameBSTR); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_Name(iNameBSTR); \
   ExitAfterCall(this,9,_Trac2,&_ret_arg,&iNameBSTR); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAStiDBItem##classe::GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,10,&_Trac2,&IDName,&RealObj); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetItem(IDName,RealObj); \
   ExitAfterCall(this,10,_Trac2,&_ret_arg,&IDName,&RealObj); \
   return(_ret_arg); \
} \



/* Macro used to link an implementation with an interface */
#define TIE_CATIAStiDBItem(classe) \
 \
 \
declare_TIE_CATIAStiDBItem(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIAStiDBItem##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIAStiDBItem,"CATIAStiDBItem",CATIAStiDBItem::MetaObject(),classe::MetaObject(),TIE); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIAStiDBItem(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIECreation(CATIAStiDBItem, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIAStiDBItem##classe(classe::MetaObject(),CATIAStiDBItem::MetaObject(),(void *)CreateTIECATIAStiDBItem##classe)



/* Macro used to link an implementation with an interface */
/* This TIE is chained on the implementation object */
#define TIEchain_CATIAStiDBItem(classe) \
 \
 \
declare_TIE_CATIAStiDBItem(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIAStiDBItem##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIAStiDBItem,"CATIAStiDBItem",CATIAStiDBItem::MetaObject(),classe::MetaObject(),TIEchain); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIAStiDBItem(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIEchainCreation(CATIAStiDBItem, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIAStiDBItem##classe(classe::MetaObject(),CATIAStiDBItem::MetaObject(),(void *)CreateTIECATIAStiDBItem##classe)


/* Macro to switch between BOA and TIE at build time */ 
#ifdef CATSYS_BOA_IS_TIE
#define BOA_CATIAStiDBItem(classe) TIE_CATIAStiDBItem(classe)
#else
#define BOA_CATIAStiDBItem(classe) CATImplementBOA(CATIAStiDBItem, classe)
#endif

#endif
