#ifndef __TIE_CATIAArrSystemLineProduct
#define __TIE_CATIAArrSystemLineProduct

#include <string.h>
#include "CATBaseUnknown.h"
#include "CATMetaClass.h"
#include "CATMacForTie.h"
#include "CATExitJournal.h"
#include "CATIAArrSystemLineProduct.h"
#include "JS0DSPA.h"


#ifdef _WINDOWS_SOURCE
#define Exported __declspec(dllexport)
#define Imported __declspec(dllimport)
#else
#define Exported 
#define Imported 
#endif


/* To link an implementation with the interface CATIAArrSystemLineProduct */
#define declare_TIE_CATIAArrSystemLineProduct(classe) \
 \
 \
class TIECATIAArrSystemLineProduct##classe : public CATIAArrSystemLineProduct \
{ \
   private: \
      CATDeclareCommonTIEMembers \
   public: \
      CATDeclareTIEMethods(CATIAArrSystemLineProduct, classe) \
      CATDeclareIUnknownMethodsForCATBaseUnknownTIE \
      CATDeclareIDispatchMethodsForCATBaseUnknownTIE \
      CATDeclareCATBaseUnknownMethodsForTIE \
      virtual HRESULT __stdcall GetSubProductsCount(const CATBSTR & iIntfId, CATLONG & oSubProductCount); \
      virtual HRESULT __stdcall GetSubItem(CATLONG iIndex, CATIABase *& oOutputObject); \
      virtual HRESULT  __stdcall get_Application(CATIAApplication *& oApplication); \
      virtual HRESULT  __stdcall get_Parent(CATBaseDispatch *& oParent); \
      virtual HRESULT  __stdcall get_Name(CATBSTR & oNameBSTR); \
      virtual HRESULT  __stdcall put_Name(const CATBSTR & iNameBSTR); \
      virtual HRESULT  __stdcall GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj); \
};



#define ENVTIEdeclare_CATIAArrSystemLineProduct(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
virtual HRESULT __stdcall GetSubProductsCount(const CATBSTR & iIntfId, CATLONG & oSubProductCount); \
virtual HRESULT __stdcall GetSubItem(CATLONG iIndex, CATIABase *& oOutputObject); \
virtual HRESULT  __stdcall get_Application(CATIAApplication *& oApplication); \
virtual HRESULT  __stdcall get_Parent(CATBaseDispatch *& oParent); \
virtual HRESULT  __stdcall get_Name(CATBSTR & oNameBSTR); \
virtual HRESULT  __stdcall put_Name(const CATBSTR & iNameBSTR); \
virtual HRESULT  __stdcall GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj); \


#define ENVTIEdefine_CATIAArrSystemLineProduct(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
HRESULT __stdcall  ENVTIEName::GetSubProductsCount(const CATBSTR & iIntfId, CATLONG & oSubProductCount) \
{ \
return (ENVTIECALL(CATIAArrSystemLineProduct,ENVTIETypeLetter,ENVTIELetter)GetSubProductsCount(iIntfId,oSubProductCount)); \
} \
HRESULT __stdcall  ENVTIEName::GetSubItem(CATLONG iIndex, CATIABase *& oOutputObject) \
{ \
return (ENVTIECALL(CATIAArrSystemLineProduct,ENVTIETypeLetter,ENVTIELetter)GetSubItem(iIndex,oOutputObject)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Application(CATIAApplication *& oApplication) \
{ \
return (ENVTIECALL(CATIAArrSystemLineProduct,ENVTIETypeLetter,ENVTIELetter)get_Application(oApplication)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Parent(CATBaseDispatch *& oParent) \
{ \
return (ENVTIECALL(CATIAArrSystemLineProduct,ENVTIETypeLetter,ENVTIELetter)get_Parent(oParent)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Name(CATBSTR & oNameBSTR) \
{ \
return (ENVTIECALL(CATIAArrSystemLineProduct,ENVTIETypeLetter,ENVTIELetter)get_Name(oNameBSTR)); \
} \
HRESULT  __stdcall  ENVTIEName::put_Name(const CATBSTR & iNameBSTR) \
{ \
return (ENVTIECALL(CATIAArrSystemLineProduct,ENVTIETypeLetter,ENVTIELetter)put_Name(iNameBSTR)); \
} \
HRESULT  __stdcall  ENVTIEName::GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj) \
{ \
return (ENVTIECALL(CATIAArrSystemLineProduct,ENVTIETypeLetter,ENVTIELetter)GetItem(IDName,RealObj)); \
} \


/* Name of the TIE class */
#define class_TIE_CATIAArrSystemLineProduct(classe)    TIECATIAArrSystemLineProduct##classe


/* Common methods inside a TIE */
#define common_TIE_CATIAArrSystemLineProduct(classe) \
 \
 \
/* Static initialization */ \
CATDefineCommonTIEMembers(CATIAArrSystemLineProduct, classe) \
 \
 \
CATImplementTIEMethods(CATIAArrSystemLineProduct, classe) \
CATImplementIUnknownMethodsForCATBaseUnknownTIE(CATIAArrSystemLineProduct, classe, 2) \
CATImplementIDispatchMethodsForCATBaseUnknownTIE(CATIAArrSystemLineProduct, classe) \
CATImplementCATBaseUnknownMethodsForTIE(CATIAArrSystemLineProduct, classe) \
 \
HRESULT __stdcall  TIECATIAArrSystemLineProduct##classe::GetSubProductsCount(const CATBSTR & iIntfId, CATLONG & oSubProductCount) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,1,&_Trac2,&iIntfId,&oSubProductCount); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetSubProductsCount(iIntfId,oSubProductCount); \
   ExitAfterCall(this,1,_Trac2,&_ret_arg,&iIntfId,&oSubProductCount); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAArrSystemLineProduct##classe::GetSubItem(CATLONG iIndex, CATIABase *& oOutputObject) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,2,&_Trac2,&iIndex,&oOutputObject); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetSubItem(iIndex,oOutputObject); \
   ExitAfterCall(this,2,_Trac2,&_ret_arg,&iIndex,&oOutputObject); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAArrSystemLineProduct##classe::get_Application(CATIAApplication *& oApplication) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,3,&_Trac2,&oApplication); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Application(oApplication); \
   ExitAfterCall(this,3,_Trac2,&_ret_arg,&oApplication); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAArrSystemLineProduct##classe::get_Parent(CATBaseDispatch *& oParent) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,4,&_Trac2,&oParent); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Parent(oParent); \
   ExitAfterCall(this,4,_Trac2,&_ret_arg,&oParent); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAArrSystemLineProduct##classe::get_Name(CATBSTR & oNameBSTR) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,5,&_Trac2,&oNameBSTR); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Name(oNameBSTR); \
   ExitAfterCall(this,5,_Trac2,&_ret_arg,&oNameBSTR); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAArrSystemLineProduct##classe::put_Name(const CATBSTR & iNameBSTR) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,6,&_Trac2,&iNameBSTR); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_Name(iNameBSTR); \
   ExitAfterCall(this,6,_Trac2,&_ret_arg,&iNameBSTR); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAArrSystemLineProduct##classe::GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,7,&_Trac2,&IDName,&RealObj); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetItem(IDName,RealObj); \
   ExitAfterCall(this,7,_Trac2,&_ret_arg,&IDName,&RealObj); \
   return(_ret_arg); \
} \



/* Macro used to link an implementation with an interface */
#define TIE_CATIAArrSystemLineProduct(classe) \
 \
 \
declare_TIE_CATIAArrSystemLineProduct(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIAArrSystemLineProduct##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIAArrSystemLineProduct,"CATIAArrSystemLineProduct",CATIAArrSystemLineProduct::MetaObject(),classe::MetaObject(),TIE); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIAArrSystemLineProduct(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIECreation(CATIAArrSystemLineProduct, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIAArrSystemLineProduct##classe(classe::MetaObject(),CATIAArrSystemLineProduct::MetaObject(),(void *)CreateTIECATIAArrSystemLineProduct##classe)



/* Macro used to link an implementation with an interface */
/* This TIE is chained on the implementation object */
#define TIEchain_CATIAArrSystemLineProduct(classe) \
 \
 \
declare_TIE_CATIAArrSystemLineProduct(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIAArrSystemLineProduct##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIAArrSystemLineProduct,"CATIAArrSystemLineProduct",CATIAArrSystemLineProduct::MetaObject(),classe::MetaObject(),TIEchain); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIAArrSystemLineProduct(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIEchainCreation(CATIAArrSystemLineProduct, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIAArrSystemLineProduct##classe(classe::MetaObject(),CATIAArrSystemLineProduct::MetaObject(),(void *)CreateTIECATIAArrSystemLineProduct##classe)


/* Macro to switch between BOA and TIE at build time */ 
#ifdef CATSYS_BOA_IS_TIE
#define BOA_CATIAArrSystemLineProduct(classe) TIE_CATIAArrSystemLineProduct(classe)
#else
#define BOA_CATIAArrSystemLineProduct(classe) CATImplementBOA(CATIAArrSystemLineProduct, classe)
#endif

#endif
