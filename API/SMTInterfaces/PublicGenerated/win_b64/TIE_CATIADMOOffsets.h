#ifndef __TIE_CATIADMOOffsets
#define __TIE_CATIADMOOffsets

#include <string.h>
#include "CATBaseUnknown.h"
#include "CATMetaClass.h"
#include "CATMacForTie.h"
#include "CATExitJournal.h"
#include "CATIADMOOffsets.h"
#include "JS0DSPA.h"


#ifdef _WINDOWS_SOURCE
#define Exported __declspec(dllexport)
#define Imported __declspec(dllimport)
#else
#define Exported 
#define Imported 
#endif


/* To link an implementation with the interface CATIADMOOffsets */
#define declare_TIE_CATIADMOOffsets(classe) \
 \
 \
class TIECATIADMOOffsets##classe : public CATIADMOOffsets \
{ \
   private: \
      CATDeclareCommonTIEMembers \
   public: \
      CATDeclareTIEMethods(CATIADMOOffsets, classe) \
      CATDeclareIUnknownMethodsForCATBaseUnknownTIE \
      CATDeclareIDispatchMethodsForCATBaseUnknownTIE \
      CATDeclareCATBaseUnknownMethodsForTIE \
      virtual HRESULT __stdcall ComputeAnOffset(CATIAGroup * GroupOfSelectedProducts, double iOffset, CATLONG iUseConstraints, const CATSafeArrayVariant & iConstraints, CATIADocument *& OffsetDocument); \
      virtual HRESULT __stdcall ComputeAnOffsetWithAReference(CATIAGroup * iGroupOfSelectedProducts, CATIAProduct * iReferenceProduct, double iOffset, CATLONG iUseConstraints, const CATSafeArrayVariant & iConstraints, CATIADocument *& OffsetDocument); \
      virtual HRESULT __stdcall ComputeAnOffsetFromVectors(CATIAGroup * GroupOfSelectedProducts, const CATSafeArrayVariant & iOffsetVectors, const CATSafeArrayVariant & iOffsetValues, CATIADocument *& OffsetDocument); \
      virtual HRESULT __stdcall ComputeAnOffsetFromVectorsWithAReference(CATIAGroup * iGroupOfSelectedProducts, CATIAProduct * iReferenceProduct, const CATSafeArrayVariant & iOffsetVectors, const CATSafeArrayVariant & iOffsetValues, CATIADocument *& OffsetDocument); \
      virtual HRESULT __stdcall OffsetShapeName(CATBSTR *& Name); \
      virtual HRESULT __stdcall CleanUp(); \
      virtual HRESULT __stdcall Add(CATIAProduct * iProductToOffset, double iOffset1, CATLONG iUseConstraints, const CATSafeArrayVariant & iConstraints, const CATBSTR & iShapeName, CATLONG iActivatedShape, CATLONG iDefaultShape, CATIADMOOffset *& oOffset); \
      virtual HRESULT __stdcall AddOffsetFromVectors(CATIAProduct * iProductToOffset, const CATSafeArrayVariant & iOffsetVectors, const CATSafeArrayVariant & iOffsetValues, const CATBSTR & iShapeName, CATLONG iActivatedShape, CATLONG iDefaultShape, CATIADMOOffset *& oOffset); \
      virtual HRESULT  __stdcall get_Application(CATIAApplication *& oApplication); \
      virtual HRESULT  __stdcall get_Parent(CATBaseDispatch *& oParent); \
      virtual HRESULT  __stdcall GetItem(const CATBSTR & iIDName, CATBaseDispatch *& oObject); \
      virtual HRESULT  __stdcall get_Name(CATBSTR & oName); \
      virtual HRESULT  __stdcall get_Count(CATLONG & oNbItems); \
      virtual HRESULT  __stdcall get__NewEnum(IUnknown *& oEnumIter); \
};



#define ENVTIEdeclare_CATIADMOOffsets(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
virtual HRESULT __stdcall ComputeAnOffset(CATIAGroup * GroupOfSelectedProducts, double iOffset, CATLONG iUseConstraints, const CATSafeArrayVariant & iConstraints, CATIADocument *& OffsetDocument); \
virtual HRESULT __stdcall ComputeAnOffsetWithAReference(CATIAGroup * iGroupOfSelectedProducts, CATIAProduct * iReferenceProduct, double iOffset, CATLONG iUseConstraints, const CATSafeArrayVariant & iConstraints, CATIADocument *& OffsetDocument); \
virtual HRESULT __stdcall ComputeAnOffsetFromVectors(CATIAGroup * GroupOfSelectedProducts, const CATSafeArrayVariant & iOffsetVectors, const CATSafeArrayVariant & iOffsetValues, CATIADocument *& OffsetDocument); \
virtual HRESULT __stdcall ComputeAnOffsetFromVectorsWithAReference(CATIAGroup * iGroupOfSelectedProducts, CATIAProduct * iReferenceProduct, const CATSafeArrayVariant & iOffsetVectors, const CATSafeArrayVariant & iOffsetValues, CATIADocument *& OffsetDocument); \
virtual HRESULT __stdcall OffsetShapeName(CATBSTR *& Name); \
virtual HRESULT __stdcall CleanUp(); \
virtual HRESULT __stdcall Add(CATIAProduct * iProductToOffset, double iOffset1, CATLONG iUseConstraints, const CATSafeArrayVariant & iConstraints, const CATBSTR & iShapeName, CATLONG iActivatedShape, CATLONG iDefaultShape, CATIADMOOffset *& oOffset); \
virtual HRESULT __stdcall AddOffsetFromVectors(CATIAProduct * iProductToOffset, const CATSafeArrayVariant & iOffsetVectors, const CATSafeArrayVariant & iOffsetValues, const CATBSTR & iShapeName, CATLONG iActivatedShape, CATLONG iDefaultShape, CATIADMOOffset *& oOffset); \
virtual HRESULT  __stdcall get_Application(CATIAApplication *& oApplication); \
virtual HRESULT  __stdcall get_Parent(CATBaseDispatch *& oParent); \
virtual HRESULT  __stdcall GetItem(const CATBSTR & iIDName, CATBaseDispatch *& oObject); \
virtual HRESULT  __stdcall get_Name(CATBSTR & oName); \
virtual HRESULT  __stdcall get_Count(CATLONG & oNbItems); \
virtual HRESULT  __stdcall get__NewEnum(IUnknown *& oEnumIter); \


#define ENVTIEdefine_CATIADMOOffsets(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
HRESULT __stdcall  ENVTIEName::ComputeAnOffset(CATIAGroup * GroupOfSelectedProducts, double iOffset, CATLONG iUseConstraints, const CATSafeArrayVariant & iConstraints, CATIADocument *& OffsetDocument) \
{ \
return (ENVTIECALL(CATIADMOOffsets,ENVTIETypeLetter,ENVTIELetter)ComputeAnOffset(GroupOfSelectedProducts,iOffset,iUseConstraints,iConstraints,OffsetDocument)); \
} \
HRESULT __stdcall  ENVTIEName::ComputeAnOffsetWithAReference(CATIAGroup * iGroupOfSelectedProducts, CATIAProduct * iReferenceProduct, double iOffset, CATLONG iUseConstraints, const CATSafeArrayVariant & iConstraints, CATIADocument *& OffsetDocument) \
{ \
return (ENVTIECALL(CATIADMOOffsets,ENVTIETypeLetter,ENVTIELetter)ComputeAnOffsetWithAReference(iGroupOfSelectedProducts,iReferenceProduct,iOffset,iUseConstraints,iConstraints,OffsetDocument)); \
} \
HRESULT __stdcall  ENVTIEName::ComputeAnOffsetFromVectors(CATIAGroup * GroupOfSelectedProducts, const CATSafeArrayVariant & iOffsetVectors, const CATSafeArrayVariant & iOffsetValues, CATIADocument *& OffsetDocument) \
{ \
return (ENVTIECALL(CATIADMOOffsets,ENVTIETypeLetter,ENVTIELetter)ComputeAnOffsetFromVectors(GroupOfSelectedProducts,iOffsetVectors,iOffsetValues,OffsetDocument)); \
} \
HRESULT __stdcall  ENVTIEName::ComputeAnOffsetFromVectorsWithAReference(CATIAGroup * iGroupOfSelectedProducts, CATIAProduct * iReferenceProduct, const CATSafeArrayVariant & iOffsetVectors, const CATSafeArrayVariant & iOffsetValues, CATIADocument *& OffsetDocument) \
{ \
return (ENVTIECALL(CATIADMOOffsets,ENVTIETypeLetter,ENVTIELetter)ComputeAnOffsetFromVectorsWithAReference(iGroupOfSelectedProducts,iReferenceProduct,iOffsetVectors,iOffsetValues,OffsetDocument)); \
} \
HRESULT __stdcall  ENVTIEName::OffsetShapeName(CATBSTR *& Name) \
{ \
return (ENVTIECALL(CATIADMOOffsets,ENVTIETypeLetter,ENVTIELetter)OffsetShapeName(Name)); \
} \
HRESULT __stdcall  ENVTIEName::CleanUp() \
{ \
return (ENVTIECALL(CATIADMOOffsets,ENVTIETypeLetter,ENVTIELetter)CleanUp()); \
} \
HRESULT __stdcall  ENVTIEName::Add(CATIAProduct * iProductToOffset, double iOffset1, CATLONG iUseConstraints, const CATSafeArrayVariant & iConstraints, const CATBSTR & iShapeName, CATLONG iActivatedShape, CATLONG iDefaultShape, CATIADMOOffset *& oOffset) \
{ \
return (ENVTIECALL(CATIADMOOffsets,ENVTIETypeLetter,ENVTIELetter)Add(iProductToOffset,iOffset1,iUseConstraints,iConstraints,iShapeName,iActivatedShape,iDefaultShape,oOffset)); \
} \
HRESULT __stdcall  ENVTIEName::AddOffsetFromVectors(CATIAProduct * iProductToOffset, const CATSafeArrayVariant & iOffsetVectors, const CATSafeArrayVariant & iOffsetValues, const CATBSTR & iShapeName, CATLONG iActivatedShape, CATLONG iDefaultShape, CATIADMOOffset *& oOffset) \
{ \
return (ENVTIECALL(CATIADMOOffsets,ENVTIETypeLetter,ENVTIELetter)AddOffsetFromVectors(iProductToOffset,iOffsetVectors,iOffsetValues,iShapeName,iActivatedShape,iDefaultShape,oOffset)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Application(CATIAApplication *& oApplication) \
{ \
return (ENVTIECALL(CATIADMOOffsets,ENVTIETypeLetter,ENVTIELetter)get_Application(oApplication)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Parent(CATBaseDispatch *& oParent) \
{ \
return (ENVTIECALL(CATIADMOOffsets,ENVTIETypeLetter,ENVTIELetter)get_Parent(oParent)); \
} \
HRESULT  __stdcall  ENVTIEName::GetItem(const CATBSTR & iIDName, CATBaseDispatch *& oObject) \
{ \
return (ENVTIECALL(CATIADMOOffsets,ENVTIETypeLetter,ENVTIELetter)GetItem(iIDName,oObject)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Name(CATBSTR & oName) \
{ \
return (ENVTIECALL(CATIADMOOffsets,ENVTIETypeLetter,ENVTIELetter)get_Name(oName)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Count(CATLONG & oNbItems) \
{ \
return (ENVTIECALL(CATIADMOOffsets,ENVTIETypeLetter,ENVTIELetter)get_Count(oNbItems)); \
} \
HRESULT  __stdcall  ENVTIEName::get__NewEnum(IUnknown *& oEnumIter) \
{ \
return (ENVTIECALL(CATIADMOOffsets,ENVTIETypeLetter,ENVTIELetter)get__NewEnum(oEnumIter)); \
} \


/* Name of the TIE class */
#define class_TIE_CATIADMOOffsets(classe)    TIECATIADMOOffsets##classe


/* Common methods inside a TIE */
#define common_TIE_CATIADMOOffsets(classe) \
 \
 \
/* Static initialization */ \
CATDefineCommonTIEMembers(CATIADMOOffsets, classe) \
 \
 \
CATImplementTIEMethods(CATIADMOOffsets, classe) \
CATImplementIUnknownMethodsForCATBaseUnknownTIE(CATIADMOOffsets, classe, 2) \
CATImplementIDispatchMethodsForCATBaseUnknownTIE(CATIADMOOffsets, classe) \
CATImplementCATBaseUnknownMethodsForTIE(CATIADMOOffsets, classe) \
 \
HRESULT __stdcall  TIECATIADMOOffsets##classe::ComputeAnOffset(CATIAGroup * GroupOfSelectedProducts, double iOffset, CATLONG iUseConstraints, const CATSafeArrayVariant & iConstraints, CATIADocument *& OffsetDocument) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,1,&_Trac2,&GroupOfSelectedProducts,&iOffset,&iUseConstraints,&iConstraints,&OffsetDocument); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->ComputeAnOffset(GroupOfSelectedProducts,iOffset,iUseConstraints,iConstraints,OffsetDocument); \
   ExitAfterCall(this,1,_Trac2,&_ret_arg,&GroupOfSelectedProducts,&iOffset,&iUseConstraints,&iConstraints,&OffsetDocument); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIADMOOffsets##classe::ComputeAnOffsetWithAReference(CATIAGroup * iGroupOfSelectedProducts, CATIAProduct * iReferenceProduct, double iOffset, CATLONG iUseConstraints, const CATSafeArrayVariant & iConstraints, CATIADocument *& OffsetDocument) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,2,&_Trac2,&iGroupOfSelectedProducts,&iReferenceProduct,&iOffset,&iUseConstraints,&iConstraints,&OffsetDocument); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->ComputeAnOffsetWithAReference(iGroupOfSelectedProducts,iReferenceProduct,iOffset,iUseConstraints,iConstraints,OffsetDocument); \
   ExitAfterCall(this,2,_Trac2,&_ret_arg,&iGroupOfSelectedProducts,&iReferenceProduct,&iOffset,&iUseConstraints,&iConstraints,&OffsetDocument); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIADMOOffsets##classe::ComputeAnOffsetFromVectors(CATIAGroup * GroupOfSelectedProducts, const CATSafeArrayVariant & iOffsetVectors, const CATSafeArrayVariant & iOffsetValues, CATIADocument *& OffsetDocument) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,3,&_Trac2,&GroupOfSelectedProducts,&iOffsetVectors,&iOffsetValues,&OffsetDocument); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->ComputeAnOffsetFromVectors(GroupOfSelectedProducts,iOffsetVectors,iOffsetValues,OffsetDocument); \
   ExitAfterCall(this,3,_Trac2,&_ret_arg,&GroupOfSelectedProducts,&iOffsetVectors,&iOffsetValues,&OffsetDocument); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIADMOOffsets##classe::ComputeAnOffsetFromVectorsWithAReference(CATIAGroup * iGroupOfSelectedProducts, CATIAProduct * iReferenceProduct, const CATSafeArrayVariant & iOffsetVectors, const CATSafeArrayVariant & iOffsetValues, CATIADocument *& OffsetDocument) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,4,&_Trac2,&iGroupOfSelectedProducts,&iReferenceProduct,&iOffsetVectors,&iOffsetValues,&OffsetDocument); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->ComputeAnOffsetFromVectorsWithAReference(iGroupOfSelectedProducts,iReferenceProduct,iOffsetVectors,iOffsetValues,OffsetDocument); \
   ExitAfterCall(this,4,_Trac2,&_ret_arg,&iGroupOfSelectedProducts,&iReferenceProduct,&iOffsetVectors,&iOffsetValues,&OffsetDocument); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIADMOOffsets##classe::OffsetShapeName(CATBSTR *& Name) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,5,&_Trac2,&Name); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->OffsetShapeName(Name); \
   ExitAfterCall(this,5,_Trac2,&_ret_arg,&Name); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIADMOOffsets##classe::CleanUp() \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,6,&_Trac2); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->CleanUp(); \
   ExitAfterCall(this,6,_Trac2,&_ret_arg); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIADMOOffsets##classe::Add(CATIAProduct * iProductToOffset, double iOffset1, CATLONG iUseConstraints, const CATSafeArrayVariant & iConstraints, const CATBSTR & iShapeName, CATLONG iActivatedShape, CATLONG iDefaultShape, CATIADMOOffset *& oOffset) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,7,&_Trac2,&iProductToOffset,&iOffset1,&iUseConstraints,&iConstraints,&iShapeName,&iActivatedShape,&iDefaultShape,&oOffset); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->Add(iProductToOffset,iOffset1,iUseConstraints,iConstraints,iShapeName,iActivatedShape,iDefaultShape,oOffset); \
   ExitAfterCall(this,7,_Trac2,&_ret_arg,&iProductToOffset,&iOffset1,&iUseConstraints,&iConstraints,&iShapeName,&iActivatedShape,&iDefaultShape,&oOffset); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIADMOOffsets##classe::AddOffsetFromVectors(CATIAProduct * iProductToOffset, const CATSafeArrayVariant & iOffsetVectors, const CATSafeArrayVariant & iOffsetValues, const CATBSTR & iShapeName, CATLONG iActivatedShape, CATLONG iDefaultShape, CATIADMOOffset *& oOffset) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,8,&_Trac2,&iProductToOffset,&iOffsetVectors,&iOffsetValues,&iShapeName,&iActivatedShape,&iDefaultShape,&oOffset); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->AddOffsetFromVectors(iProductToOffset,iOffsetVectors,iOffsetValues,iShapeName,iActivatedShape,iDefaultShape,oOffset); \
   ExitAfterCall(this,8,_Trac2,&_ret_arg,&iProductToOffset,&iOffsetVectors,&iOffsetValues,&iShapeName,&iActivatedShape,&iDefaultShape,&oOffset); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIADMOOffsets##classe::get_Application(CATIAApplication *& oApplication) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,9,&_Trac2,&oApplication); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Application(oApplication); \
   ExitAfterCall(this,9,_Trac2,&_ret_arg,&oApplication); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIADMOOffsets##classe::get_Parent(CATBaseDispatch *& oParent) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,10,&_Trac2,&oParent); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Parent(oParent); \
   ExitAfterCall(this,10,_Trac2,&_ret_arg,&oParent); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIADMOOffsets##classe::GetItem(const CATBSTR & iIDName, CATBaseDispatch *& oObject) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,11,&_Trac2,&iIDName,&oObject); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetItem(iIDName,oObject); \
   ExitAfterCall(this,11,_Trac2,&_ret_arg,&iIDName,&oObject); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIADMOOffsets##classe::get_Name(CATBSTR & oName) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,12,&_Trac2,&oName); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Name(oName); \
   ExitAfterCall(this,12,_Trac2,&_ret_arg,&oName); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIADMOOffsets##classe::get_Count(CATLONG & oNbItems) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,13,&_Trac2,&oNbItems); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Count(oNbItems); \
   ExitAfterCall(this,13,_Trac2,&_ret_arg,&oNbItems); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIADMOOffsets##classe::get__NewEnum(IUnknown *& oEnumIter) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,14,&_Trac2,&oEnumIter); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get__NewEnum(oEnumIter); \
   ExitAfterCall(this,14,_Trac2,&_ret_arg,&oEnumIter); \
   return(_ret_arg); \
} \



/* Macro used to link an implementation with an interface */
#define TIE_CATIADMOOffsets(classe) \
 \
 \
declare_TIE_CATIADMOOffsets(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIADMOOffsets##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIADMOOffsets,"CATIADMOOffsets",CATIADMOOffsets::MetaObject(),classe::MetaObject(),TIE); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIADMOOffsets(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIECreation(CATIADMOOffsets, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIADMOOffsets##classe(classe::MetaObject(),CATIADMOOffsets::MetaObject(),(void *)CreateTIECATIADMOOffsets##classe)



/* Macro used to link an implementation with an interface */
/* This TIE is chained on the implementation object */
#define TIEchain_CATIADMOOffsets(classe) \
 \
 \
declare_TIE_CATIADMOOffsets(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIADMOOffsets##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIADMOOffsets,"CATIADMOOffsets",CATIADMOOffsets::MetaObject(),classe::MetaObject(),TIEchain); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIADMOOffsets(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIEchainCreation(CATIADMOOffsets, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIADMOOffsets##classe(classe::MetaObject(),CATIADMOOffsets::MetaObject(),(void *)CreateTIECATIADMOOffsets##classe)


/* Macro to switch between BOA and TIE at build time */ 
#ifdef CATSYS_BOA_IS_TIE
#define BOA_CATIADMOOffsets(classe) TIE_CATIADMOOffsets(classe)
#else
#define BOA_CATIADMOOffsets(classe) CATImplementBOA(CATIADMOOffsets, classe)
#endif

#endif
