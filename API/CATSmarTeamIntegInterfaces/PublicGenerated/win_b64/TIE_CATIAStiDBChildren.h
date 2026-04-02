#ifndef __TIE_CATIAStiDBChildren
#define __TIE_CATIAStiDBChildren

#include <string.h>
#include "CATBaseUnknown.h"
#include "CATMetaClass.h"
#include "CATMacForTie.h"
#include "CATExitJournal.h"
#include "CATIAStiDBChildren.h"
#include "JS0DSPA.h"


#ifdef _WINDOWS_SOURCE
#define Exported __declspec(dllexport)
#define Imported __declspec(dllimport)
#else
#define Exported 
#define Imported 
#endif


/* To link an implementation with the interface CATIAStiDBChildren */
#define declare_TIE_CATIAStiDBChildren(classe) \
 \
 \
class TIECATIAStiDBChildren##classe : public CATIAStiDBChildren \
{ \
   private: \
      CATDeclareCommonTIEMembers \
   public: \
      CATDeclareTIEMethods(CATIAStiDBChildren, classe) \
      CATDeclareIUnknownMethodsForCATBaseUnknownTIE \
      CATDeclareIDispatchMethodsForCATBaseUnknownTIE \
      CATDeclareCATBaseUnknownMethodsForTIE \
      virtual HRESULT __stdcall get_Count(CATLONG & oNbChildren); \
      virtual HRESULT __stdcall Item(const CATVariant & iIndex, CATIAStiDBItem *& oStiDBItem); \
      virtual HRESULT __stdcall LinkType(const CATVariant & iIndex, CATBSTR & oLinkType); \
      virtual HRESULT  __stdcall get_Application(CATIAApplication *& oApplication); \
      virtual HRESULT  __stdcall get_Parent(CATBaseDispatch *& oParent); \
      virtual HRESULT  __stdcall get_Name(CATBSTR & oNameBSTR); \
      virtual HRESULT  __stdcall put_Name(const CATBSTR & iNameBSTR); \
      virtual HRESULT  __stdcall GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj); \
};



#define ENVTIEdeclare_CATIAStiDBChildren(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
virtual HRESULT __stdcall get_Count(CATLONG & oNbChildren); \
virtual HRESULT __stdcall Item(const CATVariant & iIndex, CATIAStiDBItem *& oStiDBItem); \
virtual HRESULT __stdcall LinkType(const CATVariant & iIndex, CATBSTR & oLinkType); \
virtual HRESULT  __stdcall get_Application(CATIAApplication *& oApplication); \
virtual HRESULT  __stdcall get_Parent(CATBaseDispatch *& oParent); \
virtual HRESULT  __stdcall get_Name(CATBSTR & oNameBSTR); \
virtual HRESULT  __stdcall put_Name(const CATBSTR & iNameBSTR); \
virtual HRESULT  __stdcall GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj); \


#define ENVTIEdefine_CATIAStiDBChildren(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
HRESULT __stdcall  ENVTIEName::get_Count(CATLONG & oNbChildren) \
{ \
return (ENVTIECALL(CATIAStiDBChildren,ENVTIETypeLetter,ENVTIELetter)get_Count(oNbChildren)); \
} \
HRESULT __stdcall  ENVTIEName::Item(const CATVariant & iIndex, CATIAStiDBItem *& oStiDBItem) \
{ \
return (ENVTIECALL(CATIAStiDBChildren,ENVTIETypeLetter,ENVTIELetter)Item(iIndex,oStiDBItem)); \
} \
HRESULT __stdcall  ENVTIEName::LinkType(const CATVariant & iIndex, CATBSTR & oLinkType) \
{ \
return (ENVTIECALL(CATIAStiDBChildren,ENVTIETypeLetter,ENVTIELetter)LinkType(iIndex,oLinkType)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Application(CATIAApplication *& oApplication) \
{ \
return (ENVTIECALL(CATIAStiDBChildren,ENVTIETypeLetter,ENVTIELetter)get_Application(oApplication)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Parent(CATBaseDispatch *& oParent) \
{ \
return (ENVTIECALL(CATIAStiDBChildren,ENVTIETypeLetter,ENVTIELetter)get_Parent(oParent)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Name(CATBSTR & oNameBSTR) \
{ \
return (ENVTIECALL(CATIAStiDBChildren,ENVTIETypeLetter,ENVTIELetter)get_Name(oNameBSTR)); \
} \
HRESULT  __stdcall  ENVTIEName::put_Name(const CATBSTR & iNameBSTR) \
{ \
return (ENVTIECALL(CATIAStiDBChildren,ENVTIETypeLetter,ENVTIELetter)put_Name(iNameBSTR)); \
} \
HRESULT  __stdcall  ENVTIEName::GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj) \
{ \
return (ENVTIECALL(CATIAStiDBChildren,ENVTIETypeLetter,ENVTIELetter)GetItem(IDName,RealObj)); \
} \


/* Name of the TIE class */
#define class_TIE_CATIAStiDBChildren(classe)    TIECATIAStiDBChildren##classe


/* Common methods inside a TIE */
#define common_TIE_CATIAStiDBChildren(classe) \
 \
 \
/* Static initialization */ \
CATDefineCommonTIEMembers(CATIAStiDBChildren, classe) \
 \
 \
CATImplementTIEMethods(CATIAStiDBChildren, classe) \
CATImplementIUnknownMethodsForCATBaseUnknownTIE(CATIAStiDBChildren, classe, 2) \
CATImplementIDispatchMethodsForCATBaseUnknownTIE(CATIAStiDBChildren, classe) \
CATImplementCATBaseUnknownMethodsForTIE(CATIAStiDBChildren, classe) \
 \
HRESULT __stdcall  TIECATIAStiDBChildren##classe::get_Count(CATLONG & oNbChildren) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,1,&_Trac2,&oNbChildren); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Count(oNbChildren); \
   ExitAfterCall(this,1,_Trac2,&_ret_arg,&oNbChildren); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAStiDBChildren##classe::Item(const CATVariant & iIndex, CATIAStiDBItem *& oStiDBItem) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,2,&_Trac2,&iIndex,&oStiDBItem); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->Item(iIndex,oStiDBItem); \
   ExitAfterCall(this,2,_Trac2,&_ret_arg,&iIndex,&oStiDBItem); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAStiDBChildren##classe::LinkType(const CATVariant & iIndex, CATBSTR & oLinkType) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,3,&_Trac2,&iIndex,&oLinkType); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->LinkType(iIndex,oLinkType); \
   ExitAfterCall(this,3,_Trac2,&_ret_arg,&iIndex,&oLinkType); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAStiDBChildren##classe::get_Application(CATIAApplication *& oApplication) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,4,&_Trac2,&oApplication); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Application(oApplication); \
   ExitAfterCall(this,4,_Trac2,&_ret_arg,&oApplication); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAStiDBChildren##classe::get_Parent(CATBaseDispatch *& oParent) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,5,&_Trac2,&oParent); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Parent(oParent); \
   ExitAfterCall(this,5,_Trac2,&_ret_arg,&oParent); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAStiDBChildren##classe::get_Name(CATBSTR & oNameBSTR) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,6,&_Trac2,&oNameBSTR); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Name(oNameBSTR); \
   ExitAfterCall(this,6,_Trac2,&_ret_arg,&oNameBSTR); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAStiDBChildren##classe::put_Name(const CATBSTR & iNameBSTR) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,7,&_Trac2,&iNameBSTR); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_Name(iNameBSTR); \
   ExitAfterCall(this,7,_Trac2,&_ret_arg,&iNameBSTR); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAStiDBChildren##classe::GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,8,&_Trac2,&IDName,&RealObj); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetItem(IDName,RealObj); \
   ExitAfterCall(this,8,_Trac2,&_ret_arg,&IDName,&RealObj); \
   return(_ret_arg); \
} \



/* Macro used to link an implementation with an interface */
#define TIE_CATIAStiDBChildren(classe) \
 \
 \
declare_TIE_CATIAStiDBChildren(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIAStiDBChildren##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIAStiDBChildren,"CATIAStiDBChildren",CATIAStiDBChildren::MetaObject(),classe::MetaObject(),TIE); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIAStiDBChildren(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIECreation(CATIAStiDBChildren, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIAStiDBChildren##classe(classe::MetaObject(),CATIAStiDBChildren::MetaObject(),(void *)CreateTIECATIAStiDBChildren##classe)



/* Macro used to link an implementation with an interface */
/* This TIE is chained on the implementation object */
#define TIEchain_CATIAStiDBChildren(classe) \
 \
 \
declare_TIE_CATIAStiDBChildren(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIAStiDBChildren##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIAStiDBChildren,"CATIAStiDBChildren",CATIAStiDBChildren::MetaObject(),classe::MetaObject(),TIEchain); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIAStiDBChildren(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIEchainCreation(CATIAStiDBChildren, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIAStiDBChildren##classe(classe::MetaObject(),CATIAStiDBChildren::MetaObject(),(void *)CreateTIECATIAStiDBChildren##classe)


/* Macro to switch between BOA and TIE at build time */ 
#ifdef CATSYS_BOA_IS_TIE
#define BOA_CATIAStiDBChildren(classe) TIE_CATIAStiDBChildren(classe)
#else
#define BOA_CATIAStiDBChildren(classe) CATImplementBOA(CATIAStiDBChildren, classe)
#endif

#endif
