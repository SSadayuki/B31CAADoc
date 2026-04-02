#ifndef __TIE_CATIADMOWrappings
#define __TIE_CATIADMOWrappings

#include <string.h>
#include "CATBaseUnknown.h"
#include "CATMetaClass.h"
#include "CATMacForTie.h"
#include "CATExitJournal.h"
#include "CATIADMOWrappings.h"
#include "JS0DSPA.h"


#ifdef _WINDOWS_SOURCE
#define Exported __declspec(dllexport)
#define Imported __declspec(dllimport)
#else
#define Exported 
#define Imported 
#endif


/* To link an implementation with the interface CATIADMOWrappings */
#define declare_TIE_CATIADMOWrappings(classe) \
 \
 \
class TIECATIADMOWrappings##classe : public CATIADMOWrappings \
{ \
   private: \
      CATDeclareCommonTIEMembers \
   public: \
      CATDeclareTIEMethods(CATIADMOWrappings, classe) \
      CATDeclareIUnknownMethodsForCATBaseUnknownTIE \
      CATDeclareIDispatchMethodsForCATBaseUnknownTIE \
      CATDeclareCATBaseUnknownMethodsForTIE \
      virtual HRESULT __stdcall ComputeAWrapping(CATIAGroup * GroupOfSelectedProducts, double iAccuracy, double iRation, double iAccuracyForSimplification, CATIADocument *& WrappingDocument); \
      virtual HRESULT __stdcall ComputeAWrappingWithAReference(CATIAGroup * iGroupOfSelectedProducts, CATIAProduct * iReferenceProduct, double iAccuracy, double iRation, double iAccuracyForSimplification, CATIADocument *& WrappingDocument); \
      virtual HRESULT __stdcall WrappingShapeName(CATBSTR *& Name); \
      virtual HRESULT __stdcall Add(CATIAProduct * iProductToWrapping, double iAccuracy, double iRatio, const CATBSTR & iShapeName, CATLONG iActivatedShape, CATLONG iDefaultShape, CATIADMOWrapping *& oWrapping); \
      virtual HRESULT __stdcall CleanUp(); \
      virtual HRESULT __stdcall ComputeWrappingWithConvexHull(CATIAGroup * iGroupOfSelectedProducts, CATIAProduct * iReferenceProduct, double iAccuracy, CAT_VARIANT_BOOL iPerformSimplification, double iAccuracyForSimplification, CATIADocument *& WrappingDocument); \
      virtual HRESULT  __stdcall get_Application(CATIAApplication *& oApplication); \
      virtual HRESULT  __stdcall get_Parent(CATBaseDispatch *& oParent); \
      virtual HRESULT  __stdcall GetItem(const CATBSTR & iIDName, CATBaseDispatch *& oObject); \
      virtual HRESULT  __stdcall get_Name(CATBSTR & oName); \
      virtual HRESULT  __stdcall get_Count(CATLONG & oNbItems); \
      virtual HRESULT  __stdcall get__NewEnum(IUnknown *& oEnumIter); \
};



#define ENVTIEdeclare_CATIADMOWrappings(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
virtual HRESULT __stdcall ComputeAWrapping(CATIAGroup * GroupOfSelectedProducts, double iAccuracy, double iRation, double iAccuracyForSimplification, CATIADocument *& WrappingDocument); \
virtual HRESULT __stdcall ComputeAWrappingWithAReference(CATIAGroup * iGroupOfSelectedProducts, CATIAProduct * iReferenceProduct, double iAccuracy, double iRation, double iAccuracyForSimplification, CATIADocument *& WrappingDocument); \
virtual HRESULT __stdcall WrappingShapeName(CATBSTR *& Name); \
virtual HRESULT __stdcall Add(CATIAProduct * iProductToWrapping, double iAccuracy, double iRatio, const CATBSTR & iShapeName, CATLONG iActivatedShape, CATLONG iDefaultShape, CATIADMOWrapping *& oWrapping); \
virtual HRESULT __stdcall CleanUp(); \
virtual HRESULT __stdcall ComputeWrappingWithConvexHull(CATIAGroup * iGroupOfSelectedProducts, CATIAProduct * iReferenceProduct, double iAccuracy, CAT_VARIANT_BOOL iPerformSimplification, double iAccuracyForSimplification, CATIADocument *& WrappingDocument); \
virtual HRESULT  __stdcall get_Application(CATIAApplication *& oApplication); \
virtual HRESULT  __stdcall get_Parent(CATBaseDispatch *& oParent); \
virtual HRESULT  __stdcall GetItem(const CATBSTR & iIDName, CATBaseDispatch *& oObject); \
virtual HRESULT  __stdcall get_Name(CATBSTR & oName); \
virtual HRESULT  __stdcall get_Count(CATLONG & oNbItems); \
virtual HRESULT  __stdcall get__NewEnum(IUnknown *& oEnumIter); \


#define ENVTIEdefine_CATIADMOWrappings(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
HRESULT __stdcall  ENVTIEName::ComputeAWrapping(CATIAGroup * GroupOfSelectedProducts, double iAccuracy, double iRation, double iAccuracyForSimplification, CATIADocument *& WrappingDocument) \
{ \
return (ENVTIECALL(CATIADMOWrappings,ENVTIETypeLetter,ENVTIELetter)ComputeAWrapping(GroupOfSelectedProducts,iAccuracy,iRation,iAccuracyForSimplification,WrappingDocument)); \
} \
HRESULT __stdcall  ENVTIEName::ComputeAWrappingWithAReference(CATIAGroup * iGroupOfSelectedProducts, CATIAProduct * iReferenceProduct, double iAccuracy, double iRation, double iAccuracyForSimplification, CATIADocument *& WrappingDocument) \
{ \
return (ENVTIECALL(CATIADMOWrappings,ENVTIETypeLetter,ENVTIELetter)ComputeAWrappingWithAReference(iGroupOfSelectedProducts,iReferenceProduct,iAccuracy,iRation,iAccuracyForSimplification,WrappingDocument)); \
} \
HRESULT __stdcall  ENVTIEName::WrappingShapeName(CATBSTR *& Name) \
{ \
return (ENVTIECALL(CATIADMOWrappings,ENVTIETypeLetter,ENVTIELetter)WrappingShapeName(Name)); \
} \
HRESULT __stdcall  ENVTIEName::Add(CATIAProduct * iProductToWrapping, double iAccuracy, double iRatio, const CATBSTR & iShapeName, CATLONG iActivatedShape, CATLONG iDefaultShape, CATIADMOWrapping *& oWrapping) \
{ \
return (ENVTIECALL(CATIADMOWrappings,ENVTIETypeLetter,ENVTIELetter)Add(iProductToWrapping,iAccuracy,iRatio,iShapeName,iActivatedShape,iDefaultShape,oWrapping)); \
} \
HRESULT __stdcall  ENVTIEName::CleanUp() \
{ \
return (ENVTIECALL(CATIADMOWrappings,ENVTIETypeLetter,ENVTIELetter)CleanUp()); \
} \
HRESULT __stdcall  ENVTIEName::ComputeWrappingWithConvexHull(CATIAGroup * iGroupOfSelectedProducts, CATIAProduct * iReferenceProduct, double iAccuracy, CAT_VARIANT_BOOL iPerformSimplification, double iAccuracyForSimplification, CATIADocument *& WrappingDocument) \
{ \
return (ENVTIECALL(CATIADMOWrappings,ENVTIETypeLetter,ENVTIELetter)ComputeWrappingWithConvexHull(iGroupOfSelectedProducts,iReferenceProduct,iAccuracy,iPerformSimplification,iAccuracyForSimplification,WrappingDocument)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Application(CATIAApplication *& oApplication) \
{ \
return (ENVTIECALL(CATIADMOWrappings,ENVTIETypeLetter,ENVTIELetter)get_Application(oApplication)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Parent(CATBaseDispatch *& oParent) \
{ \
return (ENVTIECALL(CATIADMOWrappings,ENVTIETypeLetter,ENVTIELetter)get_Parent(oParent)); \
} \
HRESULT  __stdcall  ENVTIEName::GetItem(const CATBSTR & iIDName, CATBaseDispatch *& oObject) \
{ \
return (ENVTIECALL(CATIADMOWrappings,ENVTIETypeLetter,ENVTIELetter)GetItem(iIDName,oObject)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Name(CATBSTR & oName) \
{ \
return (ENVTIECALL(CATIADMOWrappings,ENVTIETypeLetter,ENVTIELetter)get_Name(oName)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Count(CATLONG & oNbItems) \
{ \
return (ENVTIECALL(CATIADMOWrappings,ENVTIETypeLetter,ENVTIELetter)get_Count(oNbItems)); \
} \
HRESULT  __stdcall  ENVTIEName::get__NewEnum(IUnknown *& oEnumIter) \
{ \
return (ENVTIECALL(CATIADMOWrappings,ENVTIETypeLetter,ENVTIELetter)get__NewEnum(oEnumIter)); \
} \


/* Name of the TIE class */
#define class_TIE_CATIADMOWrappings(classe)    TIECATIADMOWrappings##classe


/* Common methods inside a TIE */
#define common_TIE_CATIADMOWrappings(classe) \
 \
 \
/* Static initialization */ \
CATDefineCommonTIEMembers(CATIADMOWrappings, classe) \
 \
 \
CATImplementTIEMethods(CATIADMOWrappings, classe) \
CATImplementIUnknownMethodsForCATBaseUnknownTIE(CATIADMOWrappings, classe, 2) \
CATImplementIDispatchMethodsForCATBaseUnknownTIE(CATIADMOWrappings, classe) \
CATImplementCATBaseUnknownMethodsForTIE(CATIADMOWrappings, classe) \
 \
HRESULT __stdcall  TIECATIADMOWrappings##classe::ComputeAWrapping(CATIAGroup * GroupOfSelectedProducts, double iAccuracy, double iRation, double iAccuracyForSimplification, CATIADocument *& WrappingDocument) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,1,&_Trac2,&GroupOfSelectedProducts,&iAccuracy,&iRation,&iAccuracyForSimplification,&WrappingDocument); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->ComputeAWrapping(GroupOfSelectedProducts,iAccuracy,iRation,iAccuracyForSimplification,WrappingDocument); \
   ExitAfterCall(this,1,_Trac2,&_ret_arg,&GroupOfSelectedProducts,&iAccuracy,&iRation,&iAccuracyForSimplification,&WrappingDocument); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIADMOWrappings##classe::ComputeAWrappingWithAReference(CATIAGroup * iGroupOfSelectedProducts, CATIAProduct * iReferenceProduct, double iAccuracy, double iRation, double iAccuracyForSimplification, CATIADocument *& WrappingDocument) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,2,&_Trac2,&iGroupOfSelectedProducts,&iReferenceProduct,&iAccuracy,&iRation,&iAccuracyForSimplification,&WrappingDocument); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->ComputeAWrappingWithAReference(iGroupOfSelectedProducts,iReferenceProduct,iAccuracy,iRation,iAccuracyForSimplification,WrappingDocument); \
   ExitAfterCall(this,2,_Trac2,&_ret_arg,&iGroupOfSelectedProducts,&iReferenceProduct,&iAccuracy,&iRation,&iAccuracyForSimplification,&WrappingDocument); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIADMOWrappings##classe::WrappingShapeName(CATBSTR *& Name) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,3,&_Trac2,&Name); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->WrappingShapeName(Name); \
   ExitAfterCall(this,3,_Trac2,&_ret_arg,&Name); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIADMOWrappings##classe::Add(CATIAProduct * iProductToWrapping, double iAccuracy, double iRatio, const CATBSTR & iShapeName, CATLONG iActivatedShape, CATLONG iDefaultShape, CATIADMOWrapping *& oWrapping) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,4,&_Trac2,&iProductToWrapping,&iAccuracy,&iRatio,&iShapeName,&iActivatedShape,&iDefaultShape,&oWrapping); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->Add(iProductToWrapping,iAccuracy,iRatio,iShapeName,iActivatedShape,iDefaultShape,oWrapping); \
   ExitAfterCall(this,4,_Trac2,&_ret_arg,&iProductToWrapping,&iAccuracy,&iRatio,&iShapeName,&iActivatedShape,&iDefaultShape,&oWrapping); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIADMOWrappings##classe::CleanUp() \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,5,&_Trac2); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->CleanUp(); \
   ExitAfterCall(this,5,_Trac2,&_ret_arg); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIADMOWrappings##classe::ComputeWrappingWithConvexHull(CATIAGroup * iGroupOfSelectedProducts, CATIAProduct * iReferenceProduct, double iAccuracy, CAT_VARIANT_BOOL iPerformSimplification, double iAccuracyForSimplification, CATIADocument *& WrappingDocument) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,6,&_Trac2,&iGroupOfSelectedProducts,&iReferenceProduct,&iAccuracy,&iPerformSimplification,&iAccuracyForSimplification,&WrappingDocument); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->ComputeWrappingWithConvexHull(iGroupOfSelectedProducts,iReferenceProduct,iAccuracy,iPerformSimplification,iAccuracyForSimplification,WrappingDocument); \
   ExitAfterCall(this,6,_Trac2,&_ret_arg,&iGroupOfSelectedProducts,&iReferenceProduct,&iAccuracy,&iPerformSimplification,&iAccuracyForSimplification,&WrappingDocument); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIADMOWrappings##classe::get_Application(CATIAApplication *& oApplication) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,7,&_Trac2,&oApplication); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Application(oApplication); \
   ExitAfterCall(this,7,_Trac2,&_ret_arg,&oApplication); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIADMOWrappings##classe::get_Parent(CATBaseDispatch *& oParent) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,8,&_Trac2,&oParent); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Parent(oParent); \
   ExitAfterCall(this,8,_Trac2,&_ret_arg,&oParent); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIADMOWrappings##classe::GetItem(const CATBSTR & iIDName, CATBaseDispatch *& oObject) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,9,&_Trac2,&iIDName,&oObject); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetItem(iIDName,oObject); \
   ExitAfterCall(this,9,_Trac2,&_ret_arg,&iIDName,&oObject); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIADMOWrappings##classe::get_Name(CATBSTR & oName) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,10,&_Trac2,&oName); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Name(oName); \
   ExitAfterCall(this,10,_Trac2,&_ret_arg,&oName); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIADMOWrappings##classe::get_Count(CATLONG & oNbItems) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,11,&_Trac2,&oNbItems); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Count(oNbItems); \
   ExitAfterCall(this,11,_Trac2,&_ret_arg,&oNbItems); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIADMOWrappings##classe::get__NewEnum(IUnknown *& oEnumIter) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,12,&_Trac2,&oEnumIter); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get__NewEnum(oEnumIter); \
   ExitAfterCall(this,12,_Trac2,&_ret_arg,&oEnumIter); \
   return(_ret_arg); \
} \



/* Macro used to link an implementation with an interface */
#define TIE_CATIADMOWrappings(classe) \
 \
 \
declare_TIE_CATIADMOWrappings(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIADMOWrappings##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIADMOWrappings,"CATIADMOWrappings",CATIADMOWrappings::MetaObject(),classe::MetaObject(),TIE); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIADMOWrappings(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIECreation(CATIADMOWrappings, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIADMOWrappings##classe(classe::MetaObject(),CATIADMOWrappings::MetaObject(),(void *)CreateTIECATIADMOWrappings##classe)



/* Macro used to link an implementation with an interface */
/* This TIE is chained on the implementation object */
#define TIEchain_CATIADMOWrappings(classe) \
 \
 \
declare_TIE_CATIADMOWrappings(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIADMOWrappings##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIADMOWrappings,"CATIADMOWrappings",CATIADMOWrappings::MetaObject(),classe::MetaObject(),TIEchain); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIADMOWrappings(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIEchainCreation(CATIADMOWrappings, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIADMOWrappings##classe(classe::MetaObject(),CATIADMOWrappings::MetaObject(),(void *)CreateTIECATIADMOWrappings##classe)


/* Macro to switch between BOA and TIE at build time */ 
#ifdef CATSYS_BOA_IS_TIE
#define BOA_CATIADMOWrappings(classe) TIE_CATIADMOWrappings(classe)
#else
#define BOA_CATIADMOWrappings(classe) CATImplementBOA(CATIADMOWrappings, classe)
#endif

#endif
