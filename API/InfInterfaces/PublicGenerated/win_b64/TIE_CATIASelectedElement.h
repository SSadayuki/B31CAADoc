#ifndef __TIE_CATIASelectedElement
#define __TIE_CATIASelectedElement

#include <string.h>
#include "CATBaseUnknown.h"
#include "CATMetaClass.h"
#include "CATMacForTie.h"
#include "CATExitJournal.h"
#include "CATIASelectedElement.h"
#include "JS0DSPA.h"


#ifdef _WINDOWS_SOURCE
#define Exported __declspec(dllexport)
#define Imported __declspec(dllimport)
#else
#define Exported 
#define Imported 
#endif


/* To link an implementation with the interface CATIASelectedElement */
#define declare_TIE_CATIASelectedElement(classe) \
 \
 \
class TIECATIASelectedElement##classe : public CATIASelectedElement \
{ \
   private: \
      CATDeclareCommonTIEMembers \
   public: \
      CATDeclareTIEMethods(CATIASelectedElement, classe) \
      CATDeclareIUnknownMethodsForCATBaseUnknownTIE \
      CATDeclareIDispatchMethodsForCATBaseUnknownTIE \
      CATDeclareCATBaseUnknownMethodsForTIE \
      virtual HRESULT __stdcall get_Type(CATBSTR & oType); \
      virtual HRESULT __stdcall get_Document(CATIADocument *& oDocument); \
      virtual HRESULT __stdcall GetCoordinates(CATSafeArrayVariant & ioPoint); \
      virtual HRESULT __stdcall get_Value(CATBaseDispatch *& oObject); \
      virtual HRESULT __stdcall get_Reference(CATIAReference *& oReference); \
      virtual HRESULT __stdcall get_LeafProduct(CATIABase *& oProduct); \
      virtual HRESULT  __stdcall get_Application(CATIAApplication *& oApplication); \
      virtual HRESULT  __stdcall get_Parent(CATBaseDispatch *& oParent); \
      virtual HRESULT  __stdcall get_Name(CATBSTR & oNameBSTR); \
      virtual HRESULT  __stdcall put_Name(const CATBSTR & iNameBSTR); \
      virtual HRESULT  __stdcall GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj); \
};



#define ENVTIEdeclare_CATIASelectedElement(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
virtual HRESULT __stdcall get_Type(CATBSTR & oType); \
virtual HRESULT __stdcall get_Document(CATIADocument *& oDocument); \
virtual HRESULT __stdcall GetCoordinates(CATSafeArrayVariant & ioPoint); \
virtual HRESULT __stdcall get_Value(CATBaseDispatch *& oObject); \
virtual HRESULT __stdcall get_Reference(CATIAReference *& oReference); \
virtual HRESULT __stdcall get_LeafProduct(CATIABase *& oProduct); \
virtual HRESULT  __stdcall get_Application(CATIAApplication *& oApplication); \
virtual HRESULT  __stdcall get_Parent(CATBaseDispatch *& oParent); \
virtual HRESULT  __stdcall get_Name(CATBSTR & oNameBSTR); \
virtual HRESULT  __stdcall put_Name(const CATBSTR & iNameBSTR); \
virtual HRESULT  __stdcall GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj); \


#define ENVTIEdefine_CATIASelectedElement(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
HRESULT __stdcall  ENVTIEName::get_Type(CATBSTR & oType) \
{ \
return (ENVTIECALL(CATIASelectedElement,ENVTIETypeLetter,ENVTIELetter)get_Type(oType)); \
} \
HRESULT __stdcall  ENVTIEName::get_Document(CATIADocument *& oDocument) \
{ \
return (ENVTIECALL(CATIASelectedElement,ENVTIETypeLetter,ENVTIELetter)get_Document(oDocument)); \
} \
HRESULT __stdcall  ENVTIEName::GetCoordinates(CATSafeArrayVariant & ioPoint) \
{ \
return (ENVTIECALL(CATIASelectedElement,ENVTIETypeLetter,ENVTIELetter)GetCoordinates(ioPoint)); \
} \
HRESULT __stdcall  ENVTIEName::get_Value(CATBaseDispatch *& oObject) \
{ \
return (ENVTIECALL(CATIASelectedElement,ENVTIETypeLetter,ENVTIELetter)get_Value(oObject)); \
} \
HRESULT __stdcall  ENVTIEName::get_Reference(CATIAReference *& oReference) \
{ \
return (ENVTIECALL(CATIASelectedElement,ENVTIETypeLetter,ENVTIELetter)get_Reference(oReference)); \
} \
HRESULT __stdcall  ENVTIEName::get_LeafProduct(CATIABase *& oProduct) \
{ \
return (ENVTIECALL(CATIASelectedElement,ENVTIETypeLetter,ENVTIELetter)get_LeafProduct(oProduct)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Application(CATIAApplication *& oApplication) \
{ \
return (ENVTIECALL(CATIASelectedElement,ENVTIETypeLetter,ENVTIELetter)get_Application(oApplication)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Parent(CATBaseDispatch *& oParent) \
{ \
return (ENVTIECALL(CATIASelectedElement,ENVTIETypeLetter,ENVTIELetter)get_Parent(oParent)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Name(CATBSTR & oNameBSTR) \
{ \
return (ENVTIECALL(CATIASelectedElement,ENVTIETypeLetter,ENVTIELetter)get_Name(oNameBSTR)); \
} \
HRESULT  __stdcall  ENVTIEName::put_Name(const CATBSTR & iNameBSTR) \
{ \
return (ENVTIECALL(CATIASelectedElement,ENVTIETypeLetter,ENVTIELetter)put_Name(iNameBSTR)); \
} \
HRESULT  __stdcall  ENVTIEName::GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj) \
{ \
return (ENVTIECALL(CATIASelectedElement,ENVTIETypeLetter,ENVTIELetter)GetItem(IDName,RealObj)); \
} \


/* Name of the TIE class */
#define class_TIE_CATIASelectedElement(classe)    TIECATIASelectedElement##classe


/* Common methods inside a TIE */
#define common_TIE_CATIASelectedElement(classe) \
 \
 \
/* Static initialization */ \
CATDefineCommonTIEMembers(CATIASelectedElement, classe) \
 \
 \
CATImplementTIEMethods(CATIASelectedElement, classe) \
CATImplementIUnknownMethodsForCATBaseUnknownTIE(CATIASelectedElement, classe, 2) \
CATImplementIDispatchMethodsForCATBaseUnknownTIE(CATIASelectedElement, classe) \
CATImplementCATBaseUnknownMethodsForTIE(CATIASelectedElement, classe) \
 \
HRESULT __stdcall  TIECATIASelectedElement##classe::get_Type(CATBSTR & oType) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,1,&_Trac2,&oType); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Type(oType); \
   ExitAfterCall(this,1,_Trac2,&_ret_arg,&oType); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIASelectedElement##classe::get_Document(CATIADocument *& oDocument) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,2,&_Trac2,&oDocument); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Document(oDocument); \
   ExitAfterCall(this,2,_Trac2,&_ret_arg,&oDocument); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIASelectedElement##classe::GetCoordinates(CATSafeArrayVariant & ioPoint) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,3,&_Trac2,&ioPoint); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetCoordinates(ioPoint); \
   ExitAfterCall(this,3,_Trac2,&_ret_arg,&ioPoint); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIASelectedElement##classe::get_Value(CATBaseDispatch *& oObject) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,4,&_Trac2,&oObject); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Value(oObject); \
   ExitAfterCall(this,4,_Trac2,&_ret_arg,&oObject); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIASelectedElement##classe::get_Reference(CATIAReference *& oReference) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,5,&_Trac2,&oReference); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Reference(oReference); \
   ExitAfterCall(this,5,_Trac2,&_ret_arg,&oReference); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIASelectedElement##classe::get_LeafProduct(CATIABase *& oProduct) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,6,&_Trac2,&oProduct); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_LeafProduct(oProduct); \
   ExitAfterCall(this,6,_Trac2,&_ret_arg,&oProduct); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIASelectedElement##classe::get_Application(CATIAApplication *& oApplication) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,7,&_Trac2,&oApplication); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Application(oApplication); \
   ExitAfterCall(this,7,_Trac2,&_ret_arg,&oApplication); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIASelectedElement##classe::get_Parent(CATBaseDispatch *& oParent) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,8,&_Trac2,&oParent); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Parent(oParent); \
   ExitAfterCall(this,8,_Trac2,&_ret_arg,&oParent); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIASelectedElement##classe::get_Name(CATBSTR & oNameBSTR) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,9,&_Trac2,&oNameBSTR); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Name(oNameBSTR); \
   ExitAfterCall(this,9,_Trac2,&_ret_arg,&oNameBSTR); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIASelectedElement##classe::put_Name(const CATBSTR & iNameBSTR) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,10,&_Trac2,&iNameBSTR); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_Name(iNameBSTR); \
   ExitAfterCall(this,10,_Trac2,&_ret_arg,&iNameBSTR); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIASelectedElement##classe::GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,11,&_Trac2,&IDName,&RealObj); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetItem(IDName,RealObj); \
   ExitAfterCall(this,11,_Trac2,&_ret_arg,&IDName,&RealObj); \
   return(_ret_arg); \
} \



/* Macro used to link an implementation with an interface */
#define TIE_CATIASelectedElement(classe) \
 \
 \
declare_TIE_CATIASelectedElement(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIASelectedElement##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIASelectedElement,"CATIASelectedElement",CATIASelectedElement::MetaObject(),classe::MetaObject(),TIE); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIASelectedElement(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIECreation(CATIASelectedElement, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIASelectedElement##classe(classe::MetaObject(),CATIASelectedElement::MetaObject(),(void *)CreateTIECATIASelectedElement##classe)



/* Macro used to link an implementation with an interface */
/* This TIE is chained on the implementation object */
#define TIEchain_CATIASelectedElement(classe) \
 \
 \
declare_TIE_CATIASelectedElement(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIASelectedElement##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIASelectedElement,"CATIASelectedElement",CATIASelectedElement::MetaObject(),classe::MetaObject(),TIEchain); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIASelectedElement(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIEchainCreation(CATIASelectedElement, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIASelectedElement##classe(classe::MetaObject(),CATIASelectedElement::MetaObject(),(void *)CreateTIECATIASelectedElement##classe)


/* Macro to switch between BOA and TIE at build time */ 
#ifdef CATSYS_BOA_IS_TIE
#define BOA_CATIASelectedElement(classe) TIE_CATIASelectedElement(classe)
#else
#define BOA_CATIASelectedElement(classe) CATImplementBOA(CATIASelectedElement, classe)
#endif

#endif
