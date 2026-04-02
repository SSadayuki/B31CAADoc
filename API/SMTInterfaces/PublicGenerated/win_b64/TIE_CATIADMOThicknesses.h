#ifndef __TIE_CATIADMOThicknesses
#define __TIE_CATIADMOThicknesses

#include <string.h>
#include "CATBaseUnknown.h"
#include "CATMetaClass.h"
#include "CATMacForTie.h"
#include "CATExitJournal.h"
#include "CATIADMOThicknesses.h"
#include "JS0DSPA.h"


#ifdef _WINDOWS_SOURCE
#define Exported __declspec(dllexport)
#define Imported __declspec(dllimport)
#else
#define Exported 
#define Imported 
#endif


/* To link an implementation with the interface CATIADMOThicknesses */
#define declare_TIE_CATIADMOThicknesses(classe) \
 \
 \
class TIECATIADMOThicknesses##classe : public CATIADMOThicknesses \
{ \
   private: \
      CATDeclareCommonTIEMembers \
   public: \
      CATDeclareTIEMethods(CATIADMOThicknesses, classe) \
      CATDeclareIUnknownMethodsForCATBaseUnknownTIE \
      CATDeclareIDispatchMethodsForCATBaseUnknownTIE \
      CATDeclareCATBaseUnknownMethodsForTIE \
      virtual HRESULT __stdcall ComputeAThickness(CATIAGroup * GroupOfSelectedProducts, double iThickness1, double iThickness2, CATLONG iUseConstraints, const CATSafeArrayVariant & iConstraints, CATIADocument *& ThicknessDocument); \
      virtual HRESULT __stdcall ComputeAThicknessWithAReference(CATIAGroup * iGroupOfSelectedProducts, CATIAProduct * iReferenceProduct, double iThickness1, double iThickness2, CATLONG iUseConstraints, const CATSafeArrayVariant & iConstraints, CATIADocument *& ThicknessDocument); \
      virtual HRESULT __stdcall ComputeThickness(CATIAGroup * GroupOfSelectedProducts, double iThickness1, double iThickness2, CATLONG iUseConstraints, const CATSafeArrayVariant & iConstraints, CATIADocument *& ThicknessDocument); \
      virtual HRESULT __stdcall ComputeThicknessWithReference(CATIAGroup * iGroupOfSelectedProducts, CATIAProduct * iReferenceProduct, double iThickness1, double iThickness2, CATLONG iUseConstraints, const CATSafeArrayVariant & iConstraints, CATIADocument *& ThicknessDocument); \
      virtual HRESULT __stdcall ThicknessShapeName(CATBSTR *& Name); \
      virtual HRESULT __stdcall Add(CATIAProduct * iProductToThickness, double iThickness1, double iThickness2, CATLONG iUseConstraints, const CATSafeArrayVariant & iConstraints, const CATBSTR & iShapeName, CATLONG iActivatedShape, CATLONG iDefaultShape, CATIADMOThickness *& oThickness); \
      virtual HRESULT  __stdcall get_Application(CATIAApplication *& oApplication); \
      virtual HRESULT  __stdcall get_Parent(CATBaseDispatch *& oParent); \
      virtual HRESULT  __stdcall GetItem(const CATBSTR & iIDName, CATBaseDispatch *& oObject); \
      virtual HRESULT  __stdcall get_Name(CATBSTR & oName); \
      virtual HRESULT  __stdcall get_Count(CATLONG & oNbItems); \
      virtual HRESULT  __stdcall get__NewEnum(IUnknown *& oEnumIter); \
};



#define ENVTIEdeclare_CATIADMOThicknesses(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
virtual HRESULT __stdcall ComputeAThickness(CATIAGroup * GroupOfSelectedProducts, double iThickness1, double iThickness2, CATLONG iUseConstraints, const CATSafeArrayVariant & iConstraints, CATIADocument *& ThicknessDocument); \
virtual HRESULT __stdcall ComputeAThicknessWithAReference(CATIAGroup * iGroupOfSelectedProducts, CATIAProduct * iReferenceProduct, double iThickness1, double iThickness2, CATLONG iUseConstraints, const CATSafeArrayVariant & iConstraints, CATIADocument *& ThicknessDocument); \
virtual HRESULT __stdcall ComputeThickness(CATIAGroup * GroupOfSelectedProducts, double iThickness1, double iThickness2, CATLONG iUseConstraints, const CATSafeArrayVariant & iConstraints, CATIADocument *& ThicknessDocument); \
virtual HRESULT __stdcall ComputeThicknessWithReference(CATIAGroup * iGroupOfSelectedProducts, CATIAProduct * iReferenceProduct, double iThickness1, double iThickness2, CATLONG iUseConstraints, const CATSafeArrayVariant & iConstraints, CATIADocument *& ThicknessDocument); \
virtual HRESULT __stdcall ThicknessShapeName(CATBSTR *& Name); \
virtual HRESULT __stdcall Add(CATIAProduct * iProductToThickness, double iThickness1, double iThickness2, CATLONG iUseConstraints, const CATSafeArrayVariant & iConstraints, const CATBSTR & iShapeName, CATLONG iActivatedShape, CATLONG iDefaultShape, CATIADMOThickness *& oThickness); \
virtual HRESULT  __stdcall get_Application(CATIAApplication *& oApplication); \
virtual HRESULT  __stdcall get_Parent(CATBaseDispatch *& oParent); \
virtual HRESULT  __stdcall GetItem(const CATBSTR & iIDName, CATBaseDispatch *& oObject); \
virtual HRESULT  __stdcall get_Name(CATBSTR & oName); \
virtual HRESULT  __stdcall get_Count(CATLONG & oNbItems); \
virtual HRESULT  __stdcall get__NewEnum(IUnknown *& oEnumIter); \


#define ENVTIEdefine_CATIADMOThicknesses(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
HRESULT __stdcall  ENVTIEName::ComputeAThickness(CATIAGroup * GroupOfSelectedProducts, double iThickness1, double iThickness2, CATLONG iUseConstraints, const CATSafeArrayVariant & iConstraints, CATIADocument *& ThicknessDocument) \
{ \
return (ENVTIECALL(CATIADMOThicknesses,ENVTIETypeLetter,ENVTIELetter)ComputeAThickness(GroupOfSelectedProducts,iThickness1,iThickness2,iUseConstraints,iConstraints,ThicknessDocument)); \
} \
HRESULT __stdcall  ENVTIEName::ComputeAThicknessWithAReference(CATIAGroup * iGroupOfSelectedProducts, CATIAProduct * iReferenceProduct, double iThickness1, double iThickness2, CATLONG iUseConstraints, const CATSafeArrayVariant & iConstraints, CATIADocument *& ThicknessDocument) \
{ \
return (ENVTIECALL(CATIADMOThicknesses,ENVTIETypeLetter,ENVTIELetter)ComputeAThicknessWithAReference(iGroupOfSelectedProducts,iReferenceProduct,iThickness1,iThickness2,iUseConstraints,iConstraints,ThicknessDocument)); \
} \
HRESULT __stdcall  ENVTIEName::ComputeThickness(CATIAGroup * GroupOfSelectedProducts, double iThickness1, double iThickness2, CATLONG iUseConstraints, const CATSafeArrayVariant & iConstraints, CATIADocument *& ThicknessDocument) \
{ \
return (ENVTIECALL(CATIADMOThicknesses,ENVTIETypeLetter,ENVTIELetter)ComputeThickness(GroupOfSelectedProducts,iThickness1,iThickness2,iUseConstraints,iConstraints,ThicknessDocument)); \
} \
HRESULT __stdcall  ENVTIEName::ComputeThicknessWithReference(CATIAGroup * iGroupOfSelectedProducts, CATIAProduct * iReferenceProduct, double iThickness1, double iThickness2, CATLONG iUseConstraints, const CATSafeArrayVariant & iConstraints, CATIADocument *& ThicknessDocument) \
{ \
return (ENVTIECALL(CATIADMOThicknesses,ENVTIETypeLetter,ENVTIELetter)ComputeThicknessWithReference(iGroupOfSelectedProducts,iReferenceProduct,iThickness1,iThickness2,iUseConstraints,iConstraints,ThicknessDocument)); \
} \
HRESULT __stdcall  ENVTIEName::ThicknessShapeName(CATBSTR *& Name) \
{ \
return (ENVTIECALL(CATIADMOThicknesses,ENVTIETypeLetter,ENVTIELetter)ThicknessShapeName(Name)); \
} \
HRESULT __stdcall  ENVTIEName::Add(CATIAProduct * iProductToThickness, double iThickness1, double iThickness2, CATLONG iUseConstraints, const CATSafeArrayVariant & iConstraints, const CATBSTR & iShapeName, CATLONG iActivatedShape, CATLONG iDefaultShape, CATIADMOThickness *& oThickness) \
{ \
return (ENVTIECALL(CATIADMOThicknesses,ENVTIETypeLetter,ENVTIELetter)Add(iProductToThickness,iThickness1,iThickness2,iUseConstraints,iConstraints,iShapeName,iActivatedShape,iDefaultShape,oThickness)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Application(CATIAApplication *& oApplication) \
{ \
return (ENVTIECALL(CATIADMOThicknesses,ENVTIETypeLetter,ENVTIELetter)get_Application(oApplication)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Parent(CATBaseDispatch *& oParent) \
{ \
return (ENVTIECALL(CATIADMOThicknesses,ENVTIETypeLetter,ENVTIELetter)get_Parent(oParent)); \
} \
HRESULT  __stdcall  ENVTIEName::GetItem(const CATBSTR & iIDName, CATBaseDispatch *& oObject) \
{ \
return (ENVTIECALL(CATIADMOThicknesses,ENVTIETypeLetter,ENVTIELetter)GetItem(iIDName,oObject)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Name(CATBSTR & oName) \
{ \
return (ENVTIECALL(CATIADMOThicknesses,ENVTIETypeLetter,ENVTIELetter)get_Name(oName)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Count(CATLONG & oNbItems) \
{ \
return (ENVTIECALL(CATIADMOThicknesses,ENVTIETypeLetter,ENVTIELetter)get_Count(oNbItems)); \
} \
HRESULT  __stdcall  ENVTIEName::get__NewEnum(IUnknown *& oEnumIter) \
{ \
return (ENVTIECALL(CATIADMOThicknesses,ENVTIETypeLetter,ENVTIELetter)get__NewEnum(oEnumIter)); \
} \


/* Name of the TIE class */
#define class_TIE_CATIADMOThicknesses(classe)    TIECATIADMOThicknesses##classe


/* Common methods inside a TIE */
#define common_TIE_CATIADMOThicknesses(classe) \
 \
 \
/* Static initialization */ \
CATDefineCommonTIEMembers(CATIADMOThicknesses, classe) \
 \
 \
CATImplementTIEMethods(CATIADMOThicknesses, classe) \
CATImplementIUnknownMethodsForCATBaseUnknownTIE(CATIADMOThicknesses, classe, 2) \
CATImplementIDispatchMethodsForCATBaseUnknownTIE(CATIADMOThicknesses, classe) \
CATImplementCATBaseUnknownMethodsForTIE(CATIADMOThicknesses, classe) \
 \
HRESULT __stdcall  TIECATIADMOThicknesses##classe::ComputeAThickness(CATIAGroup * GroupOfSelectedProducts, double iThickness1, double iThickness2, CATLONG iUseConstraints, const CATSafeArrayVariant & iConstraints, CATIADocument *& ThicknessDocument) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,1,&_Trac2,&GroupOfSelectedProducts,&iThickness1,&iThickness2,&iUseConstraints,&iConstraints,&ThicknessDocument); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->ComputeAThickness(GroupOfSelectedProducts,iThickness1,iThickness2,iUseConstraints,iConstraints,ThicknessDocument); \
   ExitAfterCall(this,1,_Trac2,&_ret_arg,&GroupOfSelectedProducts,&iThickness1,&iThickness2,&iUseConstraints,&iConstraints,&ThicknessDocument); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIADMOThicknesses##classe::ComputeAThicknessWithAReference(CATIAGroup * iGroupOfSelectedProducts, CATIAProduct * iReferenceProduct, double iThickness1, double iThickness2, CATLONG iUseConstraints, const CATSafeArrayVariant & iConstraints, CATIADocument *& ThicknessDocument) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,2,&_Trac2,&iGroupOfSelectedProducts,&iReferenceProduct,&iThickness1,&iThickness2,&iUseConstraints,&iConstraints,&ThicknessDocument); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->ComputeAThicknessWithAReference(iGroupOfSelectedProducts,iReferenceProduct,iThickness1,iThickness2,iUseConstraints,iConstraints,ThicknessDocument); \
   ExitAfterCall(this,2,_Trac2,&_ret_arg,&iGroupOfSelectedProducts,&iReferenceProduct,&iThickness1,&iThickness2,&iUseConstraints,&iConstraints,&ThicknessDocument); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIADMOThicknesses##classe::ComputeThickness(CATIAGroup * GroupOfSelectedProducts, double iThickness1, double iThickness2, CATLONG iUseConstraints, const CATSafeArrayVariant & iConstraints, CATIADocument *& ThicknessDocument) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,3,&_Trac2,&GroupOfSelectedProducts,&iThickness1,&iThickness2,&iUseConstraints,&iConstraints,&ThicknessDocument); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->ComputeThickness(GroupOfSelectedProducts,iThickness1,iThickness2,iUseConstraints,iConstraints,ThicknessDocument); \
   ExitAfterCall(this,3,_Trac2,&_ret_arg,&GroupOfSelectedProducts,&iThickness1,&iThickness2,&iUseConstraints,&iConstraints,&ThicknessDocument); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIADMOThicknesses##classe::ComputeThicknessWithReference(CATIAGroup * iGroupOfSelectedProducts, CATIAProduct * iReferenceProduct, double iThickness1, double iThickness2, CATLONG iUseConstraints, const CATSafeArrayVariant & iConstraints, CATIADocument *& ThicknessDocument) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,4,&_Trac2,&iGroupOfSelectedProducts,&iReferenceProduct,&iThickness1,&iThickness2,&iUseConstraints,&iConstraints,&ThicknessDocument); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->ComputeThicknessWithReference(iGroupOfSelectedProducts,iReferenceProduct,iThickness1,iThickness2,iUseConstraints,iConstraints,ThicknessDocument); \
   ExitAfterCall(this,4,_Trac2,&_ret_arg,&iGroupOfSelectedProducts,&iReferenceProduct,&iThickness1,&iThickness2,&iUseConstraints,&iConstraints,&ThicknessDocument); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIADMOThicknesses##classe::ThicknessShapeName(CATBSTR *& Name) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,5,&_Trac2,&Name); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->ThicknessShapeName(Name); \
   ExitAfterCall(this,5,_Trac2,&_ret_arg,&Name); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIADMOThicknesses##classe::Add(CATIAProduct * iProductToThickness, double iThickness1, double iThickness2, CATLONG iUseConstraints, const CATSafeArrayVariant & iConstraints, const CATBSTR & iShapeName, CATLONG iActivatedShape, CATLONG iDefaultShape, CATIADMOThickness *& oThickness) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,6,&_Trac2,&iProductToThickness,&iThickness1,&iThickness2,&iUseConstraints,&iConstraints,&iShapeName,&iActivatedShape,&iDefaultShape,&oThickness); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->Add(iProductToThickness,iThickness1,iThickness2,iUseConstraints,iConstraints,iShapeName,iActivatedShape,iDefaultShape,oThickness); \
   ExitAfterCall(this,6,_Trac2,&_ret_arg,&iProductToThickness,&iThickness1,&iThickness2,&iUseConstraints,&iConstraints,&iShapeName,&iActivatedShape,&iDefaultShape,&oThickness); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIADMOThicknesses##classe::get_Application(CATIAApplication *& oApplication) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,7,&_Trac2,&oApplication); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Application(oApplication); \
   ExitAfterCall(this,7,_Trac2,&_ret_arg,&oApplication); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIADMOThicknesses##classe::get_Parent(CATBaseDispatch *& oParent) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,8,&_Trac2,&oParent); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Parent(oParent); \
   ExitAfterCall(this,8,_Trac2,&_ret_arg,&oParent); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIADMOThicknesses##classe::GetItem(const CATBSTR & iIDName, CATBaseDispatch *& oObject) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,9,&_Trac2,&iIDName,&oObject); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetItem(iIDName,oObject); \
   ExitAfterCall(this,9,_Trac2,&_ret_arg,&iIDName,&oObject); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIADMOThicknesses##classe::get_Name(CATBSTR & oName) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,10,&_Trac2,&oName); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Name(oName); \
   ExitAfterCall(this,10,_Trac2,&_ret_arg,&oName); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIADMOThicknesses##classe::get_Count(CATLONG & oNbItems) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,11,&_Trac2,&oNbItems); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Count(oNbItems); \
   ExitAfterCall(this,11,_Trac2,&_ret_arg,&oNbItems); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIADMOThicknesses##classe::get__NewEnum(IUnknown *& oEnumIter) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,12,&_Trac2,&oEnumIter); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get__NewEnum(oEnumIter); \
   ExitAfterCall(this,12,_Trac2,&_ret_arg,&oEnumIter); \
   return(_ret_arg); \
} \



/* Macro used to link an implementation with an interface */
#define TIE_CATIADMOThicknesses(classe) \
 \
 \
declare_TIE_CATIADMOThicknesses(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIADMOThicknesses##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIADMOThicknesses,"CATIADMOThicknesses",CATIADMOThicknesses::MetaObject(),classe::MetaObject(),TIE); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIADMOThicknesses(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIECreation(CATIADMOThicknesses, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIADMOThicknesses##classe(classe::MetaObject(),CATIADMOThicknesses::MetaObject(),(void *)CreateTIECATIADMOThicknesses##classe)



/* Macro used to link an implementation with an interface */
/* This TIE is chained on the implementation object */
#define TIEchain_CATIADMOThicknesses(classe) \
 \
 \
declare_TIE_CATIADMOThicknesses(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIADMOThicknesses##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIADMOThicknesses,"CATIADMOThicknesses",CATIADMOThicknesses::MetaObject(),classe::MetaObject(),TIEchain); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIADMOThicknesses(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIEchainCreation(CATIADMOThicknesses, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIADMOThicknesses##classe(classe::MetaObject(),CATIADMOThicknesses::MetaObject(),(void *)CreateTIECATIADMOThicknesses##classe)


/* Macro to switch between BOA and TIE at build time */ 
#ifdef CATSYS_BOA_IS_TIE
#define BOA_CATIADMOThicknesses(classe) TIE_CATIADMOThicknesses(classe)
#else
#define BOA_CATIADMOThicknesses(classe) CATImplementBOA(CATIADMOThicknesses, classe)
#endif

#endif
