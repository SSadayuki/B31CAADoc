#ifndef __TIE_CATIAProducts
#define __TIE_CATIAProducts

#include <string.h>
#include "CATBaseUnknown.h"
#include "CATMetaClass.h"
#include "CATMacForTie.h"
#include "CATExitJournal.h"
#include "CATIAProducts.h"
#include "JS0DSPA.h"


#ifdef _WINDOWS_SOURCE
#define Exported __declspec(dllexport)
#define Imported __declspec(dllimport)
#else
#define Exported 
#define Imported 
#endif


/* To link an implementation with the interface CATIAProducts */
#define declare_TIE_CATIAProducts(classe) \
 \
 \
class TIECATIAProducts##classe : public CATIAProducts \
{ \
   private: \
      CATDeclareCommonTIEMembers \
   public: \
      CATDeclareTIEMethods(CATIAProducts, classe) \
      CATDeclareIUnknownMethodsForCATBaseUnknownTIE \
      CATDeclareIDispatchMethodsForCATBaseUnknownTIE \
      CATDeclareCATBaseUnknownMethodsForTIE \
      virtual HRESULT __stdcall AddComponent(CATIAProduct * iReferenceProduct, CATIAProduct *& oNewProduct); \
      virtual HRESULT __stdcall AddNewProduct(const CATBSTR & iPartNumber, CATIAProduct *& oNewProduct); \
      virtual HRESULT __stdcall AddExternalComponent(CATIADocument * iProductDocument, CATIAProduct *& oNewProduct); \
      virtual HRESULT __stdcall AddNewComponent(const CATBSTR & iDocumenType, const CATBSTR & iPartNumber, CATIAProduct *& oNewProduct); \
      virtual HRESULT __stdcall Remove(const CATVariant & iIndex); \
      virtual HRESULT __stdcall Item(const CATVariant & iIndex, CATIAProduct *& oProduct); \
      virtual HRESULT __stdcall AddComponentsFromFiles(const CATSafeArrayVariant & iFilesList, const CATBSTR & iMethod); \
      virtual HRESULT __stdcall ReplaceComponent(CATIAProduct * iOldComponent, const CATBSTR & iFilePath, CAT_VARIANT_BOOL iMultiInstances, CATIAProduct *& oNewComponent); \
      virtual HRESULT __stdcall ReplaceProduct(CATIAProduct * iOldComponent, CATIAProduct * iNewReference, CAT_VARIANT_BOOL iMultiInstances, CATIAProduct *& oNewComponent); \
      virtual HRESULT  __stdcall get_Application(CATIAApplication *& oApplication); \
      virtual HRESULT  __stdcall get_Parent(CATBaseDispatch *& oParent); \
      virtual HRESULT  __stdcall GetItem(const CATBSTR & iIDName, CATBaseDispatch *& oObject); \
      virtual HRESULT  __stdcall get_Name(CATBSTR & oName); \
      virtual HRESULT  __stdcall get_Count(CATLONG & oNbItems); \
      virtual HRESULT  __stdcall get__NewEnum(IUnknown *& oEnumIter); \
};



#define ENVTIEdeclare_CATIAProducts(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
virtual HRESULT __stdcall AddComponent(CATIAProduct * iReferenceProduct, CATIAProduct *& oNewProduct); \
virtual HRESULT __stdcall AddNewProduct(const CATBSTR & iPartNumber, CATIAProduct *& oNewProduct); \
virtual HRESULT __stdcall AddExternalComponent(CATIADocument * iProductDocument, CATIAProduct *& oNewProduct); \
virtual HRESULT __stdcall AddNewComponent(const CATBSTR & iDocumenType, const CATBSTR & iPartNumber, CATIAProduct *& oNewProduct); \
virtual HRESULT __stdcall Remove(const CATVariant & iIndex); \
virtual HRESULT __stdcall Item(const CATVariant & iIndex, CATIAProduct *& oProduct); \
virtual HRESULT __stdcall AddComponentsFromFiles(const CATSafeArrayVariant & iFilesList, const CATBSTR & iMethod); \
virtual HRESULT __stdcall ReplaceComponent(CATIAProduct * iOldComponent, const CATBSTR & iFilePath, CAT_VARIANT_BOOL iMultiInstances, CATIAProduct *& oNewComponent); \
virtual HRESULT __stdcall ReplaceProduct(CATIAProduct * iOldComponent, CATIAProduct * iNewReference, CAT_VARIANT_BOOL iMultiInstances, CATIAProduct *& oNewComponent); \
virtual HRESULT  __stdcall get_Application(CATIAApplication *& oApplication); \
virtual HRESULT  __stdcall get_Parent(CATBaseDispatch *& oParent); \
virtual HRESULT  __stdcall GetItem(const CATBSTR & iIDName, CATBaseDispatch *& oObject); \
virtual HRESULT  __stdcall get_Name(CATBSTR & oName); \
virtual HRESULT  __stdcall get_Count(CATLONG & oNbItems); \
virtual HRESULT  __stdcall get__NewEnum(IUnknown *& oEnumIter); \


#define ENVTIEdefine_CATIAProducts(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
HRESULT __stdcall  ENVTIEName::AddComponent(CATIAProduct * iReferenceProduct, CATIAProduct *& oNewProduct) \
{ \
return (ENVTIECALL(CATIAProducts,ENVTIETypeLetter,ENVTIELetter)AddComponent(iReferenceProduct,oNewProduct)); \
} \
HRESULT __stdcall  ENVTIEName::AddNewProduct(const CATBSTR & iPartNumber, CATIAProduct *& oNewProduct) \
{ \
return (ENVTIECALL(CATIAProducts,ENVTIETypeLetter,ENVTIELetter)AddNewProduct(iPartNumber,oNewProduct)); \
} \
HRESULT __stdcall  ENVTIEName::AddExternalComponent(CATIADocument * iProductDocument, CATIAProduct *& oNewProduct) \
{ \
return (ENVTIECALL(CATIAProducts,ENVTIETypeLetter,ENVTIELetter)AddExternalComponent(iProductDocument,oNewProduct)); \
} \
HRESULT __stdcall  ENVTIEName::AddNewComponent(const CATBSTR & iDocumenType, const CATBSTR & iPartNumber, CATIAProduct *& oNewProduct) \
{ \
return (ENVTIECALL(CATIAProducts,ENVTIETypeLetter,ENVTIELetter)AddNewComponent(iDocumenType,iPartNumber,oNewProduct)); \
} \
HRESULT __stdcall  ENVTIEName::Remove(const CATVariant & iIndex) \
{ \
return (ENVTIECALL(CATIAProducts,ENVTIETypeLetter,ENVTIELetter)Remove(iIndex)); \
} \
HRESULT __stdcall  ENVTIEName::Item(const CATVariant & iIndex, CATIAProduct *& oProduct) \
{ \
return (ENVTIECALL(CATIAProducts,ENVTIETypeLetter,ENVTIELetter)Item(iIndex,oProduct)); \
} \
HRESULT __stdcall  ENVTIEName::AddComponentsFromFiles(const CATSafeArrayVariant & iFilesList, const CATBSTR & iMethod) \
{ \
return (ENVTIECALL(CATIAProducts,ENVTIETypeLetter,ENVTIELetter)AddComponentsFromFiles(iFilesList,iMethod)); \
} \
HRESULT __stdcall  ENVTIEName::ReplaceComponent(CATIAProduct * iOldComponent, const CATBSTR & iFilePath, CAT_VARIANT_BOOL iMultiInstances, CATIAProduct *& oNewComponent) \
{ \
return (ENVTIECALL(CATIAProducts,ENVTIETypeLetter,ENVTIELetter)ReplaceComponent(iOldComponent,iFilePath,iMultiInstances,oNewComponent)); \
} \
HRESULT __stdcall  ENVTIEName::ReplaceProduct(CATIAProduct * iOldComponent, CATIAProduct * iNewReference, CAT_VARIANT_BOOL iMultiInstances, CATIAProduct *& oNewComponent) \
{ \
return (ENVTIECALL(CATIAProducts,ENVTIETypeLetter,ENVTIELetter)ReplaceProduct(iOldComponent,iNewReference,iMultiInstances,oNewComponent)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Application(CATIAApplication *& oApplication) \
{ \
return (ENVTIECALL(CATIAProducts,ENVTIETypeLetter,ENVTIELetter)get_Application(oApplication)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Parent(CATBaseDispatch *& oParent) \
{ \
return (ENVTIECALL(CATIAProducts,ENVTIETypeLetter,ENVTIELetter)get_Parent(oParent)); \
} \
HRESULT  __stdcall  ENVTIEName::GetItem(const CATBSTR & iIDName, CATBaseDispatch *& oObject) \
{ \
return (ENVTIECALL(CATIAProducts,ENVTIETypeLetter,ENVTIELetter)GetItem(iIDName,oObject)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Name(CATBSTR & oName) \
{ \
return (ENVTIECALL(CATIAProducts,ENVTIETypeLetter,ENVTIELetter)get_Name(oName)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Count(CATLONG & oNbItems) \
{ \
return (ENVTIECALL(CATIAProducts,ENVTIETypeLetter,ENVTIELetter)get_Count(oNbItems)); \
} \
HRESULT  __stdcall  ENVTIEName::get__NewEnum(IUnknown *& oEnumIter) \
{ \
return (ENVTIECALL(CATIAProducts,ENVTIETypeLetter,ENVTIELetter)get__NewEnum(oEnumIter)); \
} \


/* Name of the TIE class */
#define class_TIE_CATIAProducts(classe)    TIECATIAProducts##classe


/* Common methods inside a TIE */
#define common_TIE_CATIAProducts(classe) \
 \
 \
/* Static initialization */ \
CATDefineCommonTIEMembers(CATIAProducts, classe) \
 \
 \
CATImplementTIEMethods(CATIAProducts, classe) \
CATImplementIUnknownMethodsForCATBaseUnknownTIE(CATIAProducts, classe, 2) \
CATImplementIDispatchMethodsForCATBaseUnknownTIE(CATIAProducts, classe) \
CATImplementCATBaseUnknownMethodsForTIE(CATIAProducts, classe) \
 \
HRESULT __stdcall  TIECATIAProducts##classe::AddComponent(CATIAProduct * iReferenceProduct, CATIAProduct *& oNewProduct) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,1,&_Trac2,&iReferenceProduct,&oNewProduct); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->AddComponent(iReferenceProduct,oNewProduct); \
   ExitAfterCall(this,1,_Trac2,&_ret_arg,&iReferenceProduct,&oNewProduct); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAProducts##classe::AddNewProduct(const CATBSTR & iPartNumber, CATIAProduct *& oNewProduct) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,2,&_Trac2,&iPartNumber,&oNewProduct); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->AddNewProduct(iPartNumber,oNewProduct); \
   ExitAfterCall(this,2,_Trac2,&_ret_arg,&iPartNumber,&oNewProduct); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAProducts##classe::AddExternalComponent(CATIADocument * iProductDocument, CATIAProduct *& oNewProduct) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,3,&_Trac2,&iProductDocument,&oNewProduct); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->AddExternalComponent(iProductDocument,oNewProduct); \
   ExitAfterCall(this,3,_Trac2,&_ret_arg,&iProductDocument,&oNewProduct); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAProducts##classe::AddNewComponent(const CATBSTR & iDocumenType, const CATBSTR & iPartNumber, CATIAProduct *& oNewProduct) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,4,&_Trac2,&iDocumenType,&iPartNumber,&oNewProduct); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->AddNewComponent(iDocumenType,iPartNumber,oNewProduct); \
   ExitAfterCall(this,4,_Trac2,&_ret_arg,&iDocumenType,&iPartNumber,&oNewProduct); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAProducts##classe::Remove(const CATVariant & iIndex) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,5,&_Trac2,&iIndex); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->Remove(iIndex); \
   ExitAfterCall(this,5,_Trac2,&_ret_arg,&iIndex); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAProducts##classe::Item(const CATVariant & iIndex, CATIAProduct *& oProduct) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,6,&_Trac2,&iIndex,&oProduct); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->Item(iIndex,oProduct); \
   ExitAfterCall(this,6,_Trac2,&_ret_arg,&iIndex,&oProduct); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAProducts##classe::AddComponentsFromFiles(const CATSafeArrayVariant & iFilesList, const CATBSTR & iMethod) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,7,&_Trac2,&iFilesList,&iMethod); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->AddComponentsFromFiles(iFilesList,iMethod); \
   ExitAfterCall(this,7,_Trac2,&_ret_arg,&iFilesList,&iMethod); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAProducts##classe::ReplaceComponent(CATIAProduct * iOldComponent, const CATBSTR & iFilePath, CAT_VARIANT_BOOL iMultiInstances, CATIAProduct *& oNewComponent) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,8,&_Trac2,&iOldComponent,&iFilePath,&iMultiInstances,&oNewComponent); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->ReplaceComponent(iOldComponent,iFilePath,iMultiInstances,oNewComponent); \
   ExitAfterCall(this,8,_Trac2,&_ret_arg,&iOldComponent,&iFilePath,&iMultiInstances,&oNewComponent); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAProducts##classe::ReplaceProduct(CATIAProduct * iOldComponent, CATIAProduct * iNewReference, CAT_VARIANT_BOOL iMultiInstances, CATIAProduct *& oNewComponent) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,9,&_Trac2,&iOldComponent,&iNewReference,&iMultiInstances,&oNewComponent); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->ReplaceProduct(iOldComponent,iNewReference,iMultiInstances,oNewComponent); \
   ExitAfterCall(this,9,_Trac2,&_ret_arg,&iOldComponent,&iNewReference,&iMultiInstances,&oNewComponent); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAProducts##classe::get_Application(CATIAApplication *& oApplication) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,10,&_Trac2,&oApplication); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Application(oApplication); \
   ExitAfterCall(this,10,_Trac2,&_ret_arg,&oApplication); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAProducts##classe::get_Parent(CATBaseDispatch *& oParent) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,11,&_Trac2,&oParent); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Parent(oParent); \
   ExitAfterCall(this,11,_Trac2,&_ret_arg,&oParent); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAProducts##classe::GetItem(const CATBSTR & iIDName, CATBaseDispatch *& oObject) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,12,&_Trac2,&iIDName,&oObject); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetItem(iIDName,oObject); \
   ExitAfterCall(this,12,_Trac2,&_ret_arg,&iIDName,&oObject); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAProducts##classe::get_Name(CATBSTR & oName) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,13,&_Trac2,&oName); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Name(oName); \
   ExitAfterCall(this,13,_Trac2,&_ret_arg,&oName); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAProducts##classe::get_Count(CATLONG & oNbItems) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,14,&_Trac2,&oNbItems); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Count(oNbItems); \
   ExitAfterCall(this,14,_Trac2,&_ret_arg,&oNbItems); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAProducts##classe::get__NewEnum(IUnknown *& oEnumIter) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,15,&_Trac2,&oEnumIter); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get__NewEnum(oEnumIter); \
   ExitAfterCall(this,15,_Trac2,&_ret_arg,&oEnumIter); \
   return(_ret_arg); \
} \



/* Macro used to link an implementation with an interface */
#define TIE_CATIAProducts(classe) \
 \
 \
declare_TIE_CATIAProducts(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIAProducts##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIAProducts,"CATIAProducts",CATIAProducts::MetaObject(),classe::MetaObject(),TIE); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIAProducts(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIECreation(CATIAProducts, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIAProducts##classe(classe::MetaObject(),CATIAProducts::MetaObject(),(void *)CreateTIECATIAProducts##classe)



/* Macro used to link an implementation with an interface */
/* This TIE is chained on the implementation object */
#define TIEchain_CATIAProducts(classe) \
 \
 \
declare_TIE_CATIAProducts(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIAProducts##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIAProducts,"CATIAProducts",CATIAProducts::MetaObject(),classe::MetaObject(),TIEchain); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIAProducts(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIEchainCreation(CATIAProducts, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIAProducts##classe(classe::MetaObject(),CATIAProducts::MetaObject(),(void *)CreateTIECATIAProducts##classe)


/* Macro to switch between BOA and TIE at build time */ 
#ifdef CATSYS_BOA_IS_TIE
#define BOA_CATIAProducts(classe) TIE_CATIAProducts(classe)
#else
#define BOA_CATIAProducts(classe) CATImplementBOA(CATIAProducts, classe)
#endif

#endif
