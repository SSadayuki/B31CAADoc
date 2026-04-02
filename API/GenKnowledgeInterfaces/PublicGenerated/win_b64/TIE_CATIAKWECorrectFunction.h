#ifndef __TIE_CATIAKWECorrectFunction
#define __TIE_CATIAKWECorrectFunction

#include <string.h>
#include "CATBaseUnknown.h"
#include "CATMetaClass.h"
#include "CATMacForTie.h"
#include "CATExitJournal.h"
#include "CATIAKWECorrectFunction.h"
#include "JS0DSPA.h"


#ifdef _WINDOWS_SOURCE
#define Exported __declspec(dllexport)
#define Imported __declspec(dllimport)
#else
#define Exported 
#define Imported 
#endif


/* To link an implementation with the interface CATIAKWECorrectFunction */
#define declare_TIE_CATIAKWECorrectFunction(classe) \
 \
 \
class TIECATIAKWECorrectFunction##classe : public CATIAKWECorrectFunction \
{ \
   private: \
      CATDeclareCommonTIEMembers \
   public: \
      CATDeclareTIEMethods(CATIAKWECorrectFunction, classe) \
      CATDeclareIUnknownMethodsForCATBaseUnknownTIE \
      CATDeclareIDispatchMethodsForCATBaseUnknownTIE \
      CATDeclareCATBaseUnknownMethodsForTIE \
      virtual HRESULT __stdcall ListFailedElements(CATSafeArrayVariant & oListElementsOfTupleFailed); \
      virtual HRESULT __stdcall GetNumberOfListFailedElements(CATLONG & oArraySize); \
      virtual HRESULT __stdcall Check(CATBaseDispatch *& oAssociatedCheck); \
      virtual HRESULT  __stdcall get_Application(CATIAApplication *& oApplication); \
      virtual HRESULT  __stdcall get_Parent(CATBaseDispatch *& oParent); \
      virtual HRESULT  __stdcall get_Name(CATBSTR & oNameBSTR); \
      virtual HRESULT  __stdcall put_Name(const CATBSTR & iNameBSTR); \
      virtual HRESULT  __stdcall GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj); \
};



#define ENVTIEdeclare_CATIAKWECorrectFunction(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
virtual HRESULT __stdcall ListFailedElements(CATSafeArrayVariant & oListElementsOfTupleFailed); \
virtual HRESULT __stdcall GetNumberOfListFailedElements(CATLONG & oArraySize); \
virtual HRESULT __stdcall Check(CATBaseDispatch *& oAssociatedCheck); \
virtual HRESULT  __stdcall get_Application(CATIAApplication *& oApplication); \
virtual HRESULT  __stdcall get_Parent(CATBaseDispatch *& oParent); \
virtual HRESULT  __stdcall get_Name(CATBSTR & oNameBSTR); \
virtual HRESULT  __stdcall put_Name(const CATBSTR & iNameBSTR); \
virtual HRESULT  __stdcall GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj); \


#define ENVTIEdefine_CATIAKWECorrectFunction(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
HRESULT __stdcall  ENVTIEName::ListFailedElements(CATSafeArrayVariant & oListElementsOfTupleFailed) \
{ \
return (ENVTIECALL(CATIAKWECorrectFunction,ENVTIETypeLetter,ENVTIELetter)ListFailedElements(oListElementsOfTupleFailed)); \
} \
HRESULT __stdcall  ENVTIEName::GetNumberOfListFailedElements(CATLONG & oArraySize) \
{ \
return (ENVTIECALL(CATIAKWECorrectFunction,ENVTIETypeLetter,ENVTIELetter)GetNumberOfListFailedElements(oArraySize)); \
} \
HRESULT __stdcall  ENVTIEName::Check(CATBaseDispatch *& oAssociatedCheck) \
{ \
return (ENVTIECALL(CATIAKWECorrectFunction,ENVTIETypeLetter,ENVTIELetter)Check(oAssociatedCheck)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Application(CATIAApplication *& oApplication) \
{ \
return (ENVTIECALL(CATIAKWECorrectFunction,ENVTIETypeLetter,ENVTIELetter)get_Application(oApplication)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Parent(CATBaseDispatch *& oParent) \
{ \
return (ENVTIECALL(CATIAKWECorrectFunction,ENVTIETypeLetter,ENVTIELetter)get_Parent(oParent)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Name(CATBSTR & oNameBSTR) \
{ \
return (ENVTIECALL(CATIAKWECorrectFunction,ENVTIETypeLetter,ENVTIELetter)get_Name(oNameBSTR)); \
} \
HRESULT  __stdcall  ENVTIEName::put_Name(const CATBSTR & iNameBSTR) \
{ \
return (ENVTIECALL(CATIAKWECorrectFunction,ENVTIETypeLetter,ENVTIELetter)put_Name(iNameBSTR)); \
} \
HRESULT  __stdcall  ENVTIEName::GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj) \
{ \
return (ENVTIECALL(CATIAKWECorrectFunction,ENVTIETypeLetter,ENVTIELetter)GetItem(IDName,RealObj)); \
} \


/* Name of the TIE class */
#define class_TIE_CATIAKWECorrectFunction(classe)    TIECATIAKWECorrectFunction##classe


/* Common methods inside a TIE */
#define common_TIE_CATIAKWECorrectFunction(classe) \
 \
 \
/* Static initialization */ \
CATDefineCommonTIEMembers(CATIAKWECorrectFunction, classe) \
 \
 \
CATImplementTIEMethods(CATIAKWECorrectFunction, classe) \
CATImplementIUnknownMethodsForCATBaseUnknownTIE(CATIAKWECorrectFunction, classe, 2) \
CATImplementIDispatchMethodsForCATBaseUnknownTIE(CATIAKWECorrectFunction, classe) \
CATImplementCATBaseUnknownMethodsForTIE(CATIAKWECorrectFunction, classe) \
 \
HRESULT __stdcall  TIECATIAKWECorrectFunction##classe::ListFailedElements(CATSafeArrayVariant & oListElementsOfTupleFailed) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,1,&_Trac2,&oListElementsOfTupleFailed); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->ListFailedElements(oListElementsOfTupleFailed); \
   ExitAfterCall(this,1,_Trac2,&_ret_arg,&oListElementsOfTupleFailed); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAKWECorrectFunction##classe::GetNumberOfListFailedElements(CATLONG & oArraySize) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,2,&_Trac2,&oArraySize); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetNumberOfListFailedElements(oArraySize); \
   ExitAfterCall(this,2,_Trac2,&_ret_arg,&oArraySize); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAKWECorrectFunction##classe::Check(CATBaseDispatch *& oAssociatedCheck) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,3,&_Trac2,&oAssociatedCheck); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->Check(oAssociatedCheck); \
   ExitAfterCall(this,3,_Trac2,&_ret_arg,&oAssociatedCheck); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAKWECorrectFunction##classe::get_Application(CATIAApplication *& oApplication) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,4,&_Trac2,&oApplication); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Application(oApplication); \
   ExitAfterCall(this,4,_Trac2,&_ret_arg,&oApplication); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAKWECorrectFunction##classe::get_Parent(CATBaseDispatch *& oParent) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,5,&_Trac2,&oParent); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Parent(oParent); \
   ExitAfterCall(this,5,_Trac2,&_ret_arg,&oParent); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAKWECorrectFunction##classe::get_Name(CATBSTR & oNameBSTR) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,6,&_Trac2,&oNameBSTR); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Name(oNameBSTR); \
   ExitAfterCall(this,6,_Trac2,&_ret_arg,&oNameBSTR); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAKWECorrectFunction##classe::put_Name(const CATBSTR & iNameBSTR) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,7,&_Trac2,&iNameBSTR); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_Name(iNameBSTR); \
   ExitAfterCall(this,7,_Trac2,&_ret_arg,&iNameBSTR); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAKWECorrectFunction##classe::GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,8,&_Trac2,&IDName,&RealObj); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetItem(IDName,RealObj); \
   ExitAfterCall(this,8,_Trac2,&_ret_arg,&IDName,&RealObj); \
   return(_ret_arg); \
} \



/* Macro used to link an implementation with an interface */
#define TIE_CATIAKWECorrectFunction(classe) \
 \
 \
declare_TIE_CATIAKWECorrectFunction(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIAKWECorrectFunction##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIAKWECorrectFunction,"CATIAKWECorrectFunction",CATIAKWECorrectFunction::MetaObject(),classe::MetaObject(),TIE); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIAKWECorrectFunction(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIECreation(CATIAKWECorrectFunction, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIAKWECorrectFunction##classe(classe::MetaObject(),CATIAKWECorrectFunction::MetaObject(),(void *)CreateTIECATIAKWECorrectFunction##classe)



/* Macro used to link an implementation with an interface */
/* This TIE is chained on the implementation object */
#define TIEchain_CATIAKWECorrectFunction(classe) \
 \
 \
declare_TIE_CATIAKWECorrectFunction(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIAKWECorrectFunction##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIAKWECorrectFunction,"CATIAKWECorrectFunction",CATIAKWECorrectFunction::MetaObject(),classe::MetaObject(),TIEchain); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIAKWECorrectFunction(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIEchainCreation(CATIAKWECorrectFunction, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIAKWECorrectFunction##classe(classe::MetaObject(),CATIAKWECorrectFunction::MetaObject(),(void *)CreateTIECATIAKWECorrectFunction##classe)


/* Macro to switch between BOA and TIE at build time */ 
#ifdef CATSYS_BOA_IS_TIE
#define BOA_CATIAKWECorrectFunction(classe) TIE_CATIAKWECorrectFunction(classe)
#else
#define BOA_CATIAKWECorrectFunction(classe) CATImplementBOA(CATIAKWECorrectFunction, classe)
#endif

#endif
