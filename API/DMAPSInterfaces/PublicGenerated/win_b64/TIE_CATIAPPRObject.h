#ifndef __TIE_CATIAPPRObject
#define __TIE_CATIAPPRObject

#include <string.h>
#include "CATBaseUnknown.h"
#include "CATMetaClass.h"
#include "CATMacForTie.h"
#include "CATExitJournal.h"
#include "CATIAPPRObject.h"
#include "JS0DSPA.h"


#ifdef _WINDOWS_SOURCE
#define Exported __declspec(dllexport)
#define Imported __declspec(dllimport)
#else
#define Exported 
#define Imported 
#endif


/* To link an implementation with the interface CATIAPPRObject */
#define declare_TIE_CATIAPPRObject(classe) \
 \
 \
class TIECATIAPPRObject##classe : public CATIAPPRObject \
{ \
   private: \
      CATDeclareCommonTIEMembers \
   public: \
      CATDeclareTIEMethods(CATIAPPRObject, classe) \
      CATDeclareIUnknownMethodsForCATBaseUnknownTIE \
      CATDeclareIDispatchMethodsForCATBaseUnknownTIE \
      CATDeclareCATBaseUnknownMethodsForTIE \
      virtual HRESULT __stdcall GetSortedChildren(CATIAPPRObjects *& oListSortedChildren); \
      virtual HRESULT __stdcall GetObject(const CATBSTR & iInterfaceName, CATIABase *& oObject); \
      virtual HRESULT  __stdcall get_Application(CATIAApplication *& oApplication); \
      virtual HRESULT  __stdcall get_Parent(CATBaseDispatch *& oParent); \
      virtual HRESULT  __stdcall get_Name(CATBSTR & oNameBSTR); \
      virtual HRESULT  __stdcall put_Name(const CATBSTR & iNameBSTR); \
      virtual HRESULT  __stdcall GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj); \
};



#define ENVTIEdeclare_CATIAPPRObject(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
virtual HRESULT __stdcall GetSortedChildren(CATIAPPRObjects *& oListSortedChildren); \
virtual HRESULT __stdcall GetObject(const CATBSTR & iInterfaceName, CATIABase *& oObject); \
virtual HRESULT  __stdcall get_Application(CATIAApplication *& oApplication); \
virtual HRESULT  __stdcall get_Parent(CATBaseDispatch *& oParent); \
virtual HRESULT  __stdcall get_Name(CATBSTR & oNameBSTR); \
virtual HRESULT  __stdcall put_Name(const CATBSTR & iNameBSTR); \
virtual HRESULT  __stdcall GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj); \


#define ENVTIEdefine_CATIAPPRObject(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
HRESULT __stdcall  ENVTIEName::GetSortedChildren(CATIAPPRObjects *& oListSortedChildren) \
{ \
return (ENVTIECALL(CATIAPPRObject,ENVTIETypeLetter,ENVTIELetter)GetSortedChildren(oListSortedChildren)); \
} \
HRESULT __stdcall  ENVTIEName::GetObject(const CATBSTR & iInterfaceName, CATIABase *& oObject) \
{ \
return (ENVTIECALL(CATIAPPRObject,ENVTIETypeLetter,ENVTIELetter)GetObject(iInterfaceName,oObject)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Application(CATIAApplication *& oApplication) \
{ \
return (ENVTIECALL(CATIAPPRObject,ENVTIETypeLetter,ENVTIELetter)get_Application(oApplication)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Parent(CATBaseDispatch *& oParent) \
{ \
return (ENVTIECALL(CATIAPPRObject,ENVTIETypeLetter,ENVTIELetter)get_Parent(oParent)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Name(CATBSTR & oNameBSTR) \
{ \
return (ENVTIECALL(CATIAPPRObject,ENVTIETypeLetter,ENVTIELetter)get_Name(oNameBSTR)); \
} \
HRESULT  __stdcall  ENVTIEName::put_Name(const CATBSTR & iNameBSTR) \
{ \
return (ENVTIECALL(CATIAPPRObject,ENVTIETypeLetter,ENVTIELetter)put_Name(iNameBSTR)); \
} \
HRESULT  __stdcall  ENVTIEName::GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj) \
{ \
return (ENVTIECALL(CATIAPPRObject,ENVTIETypeLetter,ENVTIELetter)GetItem(IDName,RealObj)); \
} \


/* Name of the TIE class */
#define class_TIE_CATIAPPRObject(classe)    TIECATIAPPRObject##classe


/* Common methods inside a TIE */
#define common_TIE_CATIAPPRObject(classe) \
 \
 \
/* Static initialization */ \
CATDefineCommonTIEMembers(CATIAPPRObject, classe) \
 \
 \
CATImplementTIEMethods(CATIAPPRObject, classe) \
CATImplementIUnknownMethodsForCATBaseUnknownTIE(CATIAPPRObject, classe, 2) \
CATImplementIDispatchMethodsForCATBaseUnknownTIE(CATIAPPRObject, classe) \
CATImplementCATBaseUnknownMethodsForTIE(CATIAPPRObject, classe) \
 \
HRESULT __stdcall  TIECATIAPPRObject##classe::GetSortedChildren(CATIAPPRObjects *& oListSortedChildren) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,1,&_Trac2,&oListSortedChildren); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetSortedChildren(oListSortedChildren); \
   ExitAfterCall(this,1,_Trac2,&_ret_arg,&oListSortedChildren); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAPPRObject##classe::GetObject(const CATBSTR & iInterfaceName, CATIABase *& oObject) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,2,&_Trac2,&iInterfaceName,&oObject); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetObject(iInterfaceName,oObject); \
   ExitAfterCall(this,2,_Trac2,&_ret_arg,&iInterfaceName,&oObject); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAPPRObject##classe::get_Application(CATIAApplication *& oApplication) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,3,&_Trac2,&oApplication); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Application(oApplication); \
   ExitAfterCall(this,3,_Trac2,&_ret_arg,&oApplication); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAPPRObject##classe::get_Parent(CATBaseDispatch *& oParent) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,4,&_Trac2,&oParent); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Parent(oParent); \
   ExitAfterCall(this,4,_Trac2,&_ret_arg,&oParent); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAPPRObject##classe::get_Name(CATBSTR & oNameBSTR) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,5,&_Trac2,&oNameBSTR); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Name(oNameBSTR); \
   ExitAfterCall(this,5,_Trac2,&_ret_arg,&oNameBSTR); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAPPRObject##classe::put_Name(const CATBSTR & iNameBSTR) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,6,&_Trac2,&iNameBSTR); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_Name(iNameBSTR); \
   ExitAfterCall(this,6,_Trac2,&_ret_arg,&iNameBSTR); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAPPRObject##classe::GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,7,&_Trac2,&IDName,&RealObj); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetItem(IDName,RealObj); \
   ExitAfterCall(this,7,_Trac2,&_ret_arg,&IDName,&RealObj); \
   return(_ret_arg); \
} \



/* Macro used to link an implementation with an interface */
#define TIE_CATIAPPRObject(classe) \
 \
 \
declare_TIE_CATIAPPRObject(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIAPPRObject##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIAPPRObject,"CATIAPPRObject",CATIAPPRObject::MetaObject(),classe::MetaObject(),TIE); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIAPPRObject(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIECreation(CATIAPPRObject, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIAPPRObject##classe(classe::MetaObject(),CATIAPPRObject::MetaObject(),(void *)CreateTIECATIAPPRObject##classe)



/* Macro used to link an implementation with an interface */
/* This TIE is chained on the implementation object */
#define TIEchain_CATIAPPRObject(classe) \
 \
 \
declare_TIE_CATIAPPRObject(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIAPPRObject##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIAPPRObject,"CATIAPPRObject",CATIAPPRObject::MetaObject(),classe::MetaObject(),TIEchain); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIAPPRObject(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIEchainCreation(CATIAPPRObject, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIAPPRObject##classe(classe::MetaObject(),CATIAPPRObject::MetaObject(),(void *)CreateTIECATIAPPRObject##classe)


/* Macro to switch between BOA and TIE at build time */ 
#ifdef CATSYS_BOA_IS_TIE
#define BOA_CATIAPPRObject(classe) TIE_CATIAPPRObject(classe)
#else
#define BOA_CATIAPPRObject(classe) CATImplementBOA(CATIAPPRObject, classe)
#endif

#endif
