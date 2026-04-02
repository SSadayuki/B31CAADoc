#ifndef __TIE_CATIASilhouettes
#define __TIE_CATIASilhouettes

#include <string.h>
#include "CATBaseUnknown.h"
#include "CATMetaClass.h"
#include "CATMacForTie.h"
#include "CATExitJournal.h"
#include "CATIASilhouettes.h"
#include "JS0DSPA.h"


#ifdef _WINDOWS_SOURCE
#define Exported __declspec(dllexport)
#define Imported __declspec(dllimport)
#else
#define Exported 
#define Imported 
#endif


/* To link an implementation with the interface CATIASilhouettes */
#define declare_TIE_CATIASilhouettes(classe) \
 \
 \
class TIECATIASilhouettes##classe : public CATIASilhouettes \
{ \
   private: \
      CATDeclareCommonTIEMembers \
   public: \
      CATDeclareTIEMethods(CATIASilhouettes, classe) \
      CATDeclareIUnknownMethodsForCATBaseUnknownTIE \
      CATDeclareIDispatchMethodsForCATBaseUnknownTIE \
      CATDeclareCATBaseUnknownMethodsForTIE \
      virtual HRESULT __stdcall ComputeASilhouette(CATIAGroup * GroupOfSelectedProducts, const CATSafeArrayVariant & iViewPoints, double iAccuracy, double iAccuracyForSimplification, CATIADocument *& SilhouetteDocument); \
      virtual HRESULT __stdcall ComputeASilhouetteWithAReference(CATIAGroup * iGroupOfSelectedProducts, CATIAProduct * iReferenceProduct, const CATSafeArrayVariant & iViewPoints, double iAccuracy, double iAccuracyForSimplification, CATIADocument *& SilhouetteDocument); \
      virtual HRESULT __stdcall SilhouetteShapeName(CATBSTR *& Name); \
      virtual HRESULT __stdcall Add(CATIAProduct * iProductToSilhouette, double iAccuracy, const CATSafeArrayVariant & iAzimuts, const CATBSTR & iShapeName, CATLONG iActivatedShape, CATLONG iDefaultShape, CATIASilhouette *& oSilhouette); \
      virtual HRESULT __stdcall CleanUp(); \
      virtual HRESULT  __stdcall get_Application(CATIAApplication *& oApplication); \
      virtual HRESULT  __stdcall get_Parent(CATBaseDispatch *& oParent); \
      virtual HRESULT  __stdcall GetItem(const CATBSTR & iIDName, CATBaseDispatch *& oObject); \
      virtual HRESULT  __stdcall get_Name(CATBSTR & oName); \
      virtual HRESULT  __stdcall get_Count(CATLONG & oNbItems); \
      virtual HRESULT  __stdcall get__NewEnum(IUnknown *& oEnumIter); \
};



#define ENVTIEdeclare_CATIASilhouettes(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
virtual HRESULT __stdcall ComputeASilhouette(CATIAGroup * GroupOfSelectedProducts, const CATSafeArrayVariant & iViewPoints, double iAccuracy, double iAccuracyForSimplification, CATIADocument *& SilhouetteDocument); \
virtual HRESULT __stdcall ComputeASilhouetteWithAReference(CATIAGroup * iGroupOfSelectedProducts, CATIAProduct * iReferenceProduct, const CATSafeArrayVariant & iViewPoints, double iAccuracy, double iAccuracyForSimplification, CATIADocument *& SilhouetteDocument); \
virtual HRESULT __stdcall SilhouetteShapeName(CATBSTR *& Name); \
virtual HRESULT __stdcall Add(CATIAProduct * iProductToSilhouette, double iAccuracy, const CATSafeArrayVariant & iAzimuts, const CATBSTR & iShapeName, CATLONG iActivatedShape, CATLONG iDefaultShape, CATIASilhouette *& oSilhouette); \
virtual HRESULT __stdcall CleanUp(); \
virtual HRESULT  __stdcall get_Application(CATIAApplication *& oApplication); \
virtual HRESULT  __stdcall get_Parent(CATBaseDispatch *& oParent); \
virtual HRESULT  __stdcall GetItem(const CATBSTR & iIDName, CATBaseDispatch *& oObject); \
virtual HRESULT  __stdcall get_Name(CATBSTR & oName); \
virtual HRESULT  __stdcall get_Count(CATLONG & oNbItems); \
virtual HRESULT  __stdcall get__NewEnum(IUnknown *& oEnumIter); \


#define ENVTIEdefine_CATIASilhouettes(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
HRESULT __stdcall  ENVTIEName::ComputeASilhouette(CATIAGroup * GroupOfSelectedProducts, const CATSafeArrayVariant & iViewPoints, double iAccuracy, double iAccuracyForSimplification, CATIADocument *& SilhouetteDocument) \
{ \
return (ENVTIECALL(CATIASilhouettes,ENVTIETypeLetter,ENVTIELetter)ComputeASilhouette(GroupOfSelectedProducts,iViewPoints,iAccuracy,iAccuracyForSimplification,SilhouetteDocument)); \
} \
HRESULT __stdcall  ENVTIEName::ComputeASilhouetteWithAReference(CATIAGroup * iGroupOfSelectedProducts, CATIAProduct * iReferenceProduct, const CATSafeArrayVariant & iViewPoints, double iAccuracy, double iAccuracyForSimplification, CATIADocument *& SilhouetteDocument) \
{ \
return (ENVTIECALL(CATIASilhouettes,ENVTIETypeLetter,ENVTIELetter)ComputeASilhouetteWithAReference(iGroupOfSelectedProducts,iReferenceProduct,iViewPoints,iAccuracy,iAccuracyForSimplification,SilhouetteDocument)); \
} \
HRESULT __stdcall  ENVTIEName::SilhouetteShapeName(CATBSTR *& Name) \
{ \
return (ENVTIECALL(CATIASilhouettes,ENVTIETypeLetter,ENVTIELetter)SilhouetteShapeName(Name)); \
} \
HRESULT __stdcall  ENVTIEName::Add(CATIAProduct * iProductToSilhouette, double iAccuracy, const CATSafeArrayVariant & iAzimuts, const CATBSTR & iShapeName, CATLONG iActivatedShape, CATLONG iDefaultShape, CATIASilhouette *& oSilhouette) \
{ \
return (ENVTIECALL(CATIASilhouettes,ENVTIETypeLetter,ENVTIELetter)Add(iProductToSilhouette,iAccuracy,iAzimuts,iShapeName,iActivatedShape,iDefaultShape,oSilhouette)); \
} \
HRESULT __stdcall  ENVTIEName::CleanUp() \
{ \
return (ENVTIECALL(CATIASilhouettes,ENVTIETypeLetter,ENVTIELetter)CleanUp()); \
} \
HRESULT  __stdcall  ENVTIEName::get_Application(CATIAApplication *& oApplication) \
{ \
return (ENVTIECALL(CATIASilhouettes,ENVTIETypeLetter,ENVTIELetter)get_Application(oApplication)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Parent(CATBaseDispatch *& oParent) \
{ \
return (ENVTIECALL(CATIASilhouettes,ENVTIETypeLetter,ENVTIELetter)get_Parent(oParent)); \
} \
HRESULT  __stdcall  ENVTIEName::GetItem(const CATBSTR & iIDName, CATBaseDispatch *& oObject) \
{ \
return (ENVTIECALL(CATIASilhouettes,ENVTIETypeLetter,ENVTIELetter)GetItem(iIDName,oObject)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Name(CATBSTR & oName) \
{ \
return (ENVTIECALL(CATIASilhouettes,ENVTIETypeLetter,ENVTIELetter)get_Name(oName)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Count(CATLONG & oNbItems) \
{ \
return (ENVTIECALL(CATIASilhouettes,ENVTIETypeLetter,ENVTIELetter)get_Count(oNbItems)); \
} \
HRESULT  __stdcall  ENVTIEName::get__NewEnum(IUnknown *& oEnumIter) \
{ \
return (ENVTIECALL(CATIASilhouettes,ENVTIETypeLetter,ENVTIELetter)get__NewEnum(oEnumIter)); \
} \


/* Name of the TIE class */
#define class_TIE_CATIASilhouettes(classe)    TIECATIASilhouettes##classe


/* Common methods inside a TIE */
#define common_TIE_CATIASilhouettes(classe) \
 \
 \
/* Static initialization */ \
CATDefineCommonTIEMembers(CATIASilhouettes, classe) \
 \
 \
CATImplementTIEMethods(CATIASilhouettes, classe) \
CATImplementIUnknownMethodsForCATBaseUnknownTIE(CATIASilhouettes, classe, 2) \
CATImplementIDispatchMethodsForCATBaseUnknownTIE(CATIASilhouettes, classe) \
CATImplementCATBaseUnknownMethodsForTIE(CATIASilhouettes, classe) \
 \
HRESULT __stdcall  TIECATIASilhouettes##classe::ComputeASilhouette(CATIAGroup * GroupOfSelectedProducts, const CATSafeArrayVariant & iViewPoints, double iAccuracy, double iAccuracyForSimplification, CATIADocument *& SilhouetteDocument) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,1,&_Trac2,&GroupOfSelectedProducts,&iViewPoints,&iAccuracy,&iAccuracyForSimplification,&SilhouetteDocument); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->ComputeASilhouette(GroupOfSelectedProducts,iViewPoints,iAccuracy,iAccuracyForSimplification,SilhouetteDocument); \
   ExitAfterCall(this,1,_Trac2,&_ret_arg,&GroupOfSelectedProducts,&iViewPoints,&iAccuracy,&iAccuracyForSimplification,&SilhouetteDocument); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIASilhouettes##classe::ComputeASilhouetteWithAReference(CATIAGroup * iGroupOfSelectedProducts, CATIAProduct * iReferenceProduct, const CATSafeArrayVariant & iViewPoints, double iAccuracy, double iAccuracyForSimplification, CATIADocument *& SilhouetteDocument) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,2,&_Trac2,&iGroupOfSelectedProducts,&iReferenceProduct,&iViewPoints,&iAccuracy,&iAccuracyForSimplification,&SilhouetteDocument); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->ComputeASilhouetteWithAReference(iGroupOfSelectedProducts,iReferenceProduct,iViewPoints,iAccuracy,iAccuracyForSimplification,SilhouetteDocument); \
   ExitAfterCall(this,2,_Trac2,&_ret_arg,&iGroupOfSelectedProducts,&iReferenceProduct,&iViewPoints,&iAccuracy,&iAccuracyForSimplification,&SilhouetteDocument); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIASilhouettes##classe::SilhouetteShapeName(CATBSTR *& Name) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,3,&_Trac2,&Name); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SilhouetteShapeName(Name); \
   ExitAfterCall(this,3,_Trac2,&_ret_arg,&Name); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIASilhouettes##classe::Add(CATIAProduct * iProductToSilhouette, double iAccuracy, const CATSafeArrayVariant & iAzimuts, const CATBSTR & iShapeName, CATLONG iActivatedShape, CATLONG iDefaultShape, CATIASilhouette *& oSilhouette) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,4,&_Trac2,&iProductToSilhouette,&iAccuracy,&iAzimuts,&iShapeName,&iActivatedShape,&iDefaultShape,&oSilhouette); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->Add(iProductToSilhouette,iAccuracy,iAzimuts,iShapeName,iActivatedShape,iDefaultShape,oSilhouette); \
   ExitAfterCall(this,4,_Trac2,&_ret_arg,&iProductToSilhouette,&iAccuracy,&iAzimuts,&iShapeName,&iActivatedShape,&iDefaultShape,&oSilhouette); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIASilhouettes##classe::CleanUp() \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,5,&_Trac2); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->CleanUp(); \
   ExitAfterCall(this,5,_Trac2,&_ret_arg); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIASilhouettes##classe::get_Application(CATIAApplication *& oApplication) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,6,&_Trac2,&oApplication); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Application(oApplication); \
   ExitAfterCall(this,6,_Trac2,&_ret_arg,&oApplication); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIASilhouettes##classe::get_Parent(CATBaseDispatch *& oParent) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,7,&_Trac2,&oParent); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Parent(oParent); \
   ExitAfterCall(this,7,_Trac2,&_ret_arg,&oParent); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIASilhouettes##classe::GetItem(const CATBSTR & iIDName, CATBaseDispatch *& oObject) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,8,&_Trac2,&iIDName,&oObject); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetItem(iIDName,oObject); \
   ExitAfterCall(this,8,_Trac2,&_ret_arg,&iIDName,&oObject); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIASilhouettes##classe::get_Name(CATBSTR & oName) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,9,&_Trac2,&oName); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Name(oName); \
   ExitAfterCall(this,9,_Trac2,&_ret_arg,&oName); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIASilhouettes##classe::get_Count(CATLONG & oNbItems) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,10,&_Trac2,&oNbItems); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Count(oNbItems); \
   ExitAfterCall(this,10,_Trac2,&_ret_arg,&oNbItems); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIASilhouettes##classe::get__NewEnum(IUnknown *& oEnumIter) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,11,&_Trac2,&oEnumIter); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get__NewEnum(oEnumIter); \
   ExitAfterCall(this,11,_Trac2,&_ret_arg,&oEnumIter); \
   return(_ret_arg); \
} \



/* Macro used to link an implementation with an interface */
#define TIE_CATIASilhouettes(classe) \
 \
 \
declare_TIE_CATIASilhouettes(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIASilhouettes##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIASilhouettes,"CATIASilhouettes",CATIASilhouettes::MetaObject(),classe::MetaObject(),TIE); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIASilhouettes(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIECreation(CATIASilhouettes, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIASilhouettes##classe(classe::MetaObject(),CATIASilhouettes::MetaObject(),(void *)CreateTIECATIASilhouettes##classe)



/* Macro used to link an implementation with an interface */
/* This TIE is chained on the implementation object */
#define TIEchain_CATIASilhouettes(classe) \
 \
 \
declare_TIE_CATIASilhouettes(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIASilhouettes##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIASilhouettes,"CATIASilhouettes",CATIASilhouettes::MetaObject(),classe::MetaObject(),TIEchain); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIASilhouettes(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIEchainCreation(CATIASilhouettes, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIASilhouettes##classe(classe::MetaObject(),CATIASilhouettes::MetaObject(),(void *)CreateTIECATIASilhouettes##classe)


/* Macro to switch between BOA and TIE at build time */ 
#ifdef CATSYS_BOA_IS_TIE
#define BOA_CATIASilhouettes(classe) TIE_CATIASilhouettes(classe)
#else
#define BOA_CATIASilhouettes(classe) CATImplementBOA(CATIASilhouettes, classe)
#endif

#endif
