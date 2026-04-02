#ifndef __TIE_CATIAAssemblyPocket
#define __TIE_CATIAAssemblyPocket

#include <string.h>
#include "CATBaseUnknown.h"
#include "CATMetaClass.h"
#include "CATMacForTie.h"
#include "CATExitJournal.h"
#include "CATIAAssemblyPocket.h"
#include "JS0DSPA.h"


#ifdef _WINDOWS_SOURCE
#define Exported __declspec(dllexport)
#define Imported __declspec(dllimport)
#else
#define Exported 
#define Imported 
#endif


/* To link an implementation with the interface CATIAAssemblyPocket */
#define declare_TIE_CATIAAssemblyPocket(classe) \
 \
 \
class TIECATIAAssemblyPocket##classe : public CATIAAssemblyPocket \
{ \
   private: \
      CATDeclareCommonTIEMembers \
   public: \
      CATDeclareTIEMethods(CATIAAssemblyPocket, classe) \
      CATDeclareIUnknownMethodsForCATBaseUnknownTIE \
      CATDeclareIDispatchMethodsForCATBaseUnknownTIE \
      CATDeclareCATBaseUnknownMethodsForTIE \
      virtual HRESULT __stdcall get_DirectionType(CatPrismExtrusionDirection & oDirType); \
      virtual HRESULT __stdcall put_DirectionType(CatPrismExtrusionDirection iDirType); \
      virtual HRESULT __stdcall get_DirectionOrientation(CatPrismOrientation & oOrientation); \
      virtual HRESULT __stdcall put_DirectionOrientation(CatPrismOrientation iOrientation); \
      virtual HRESULT __stdcall get_IsSymmetric(CAT_VARIANT_BOOL & oIsSymmetric); \
      virtual HRESULT __stdcall put_IsSymmetric(CAT_VARIANT_BOOL iIsSymmetric); \
      virtual HRESULT __stdcall get_FirstLimit(CATIALimit *& oFirstLimit); \
      virtual HRESULT __stdcall get_SecondLimit(CATIALimit *& oSecondLimit); \
      virtual HRESULT __stdcall get_Sketch(CATIASketch *& oSketch); \
      virtual HRESULT __stdcall get_SketchComponent(CATIAProduct *& oSketchComp); \
      virtual HRESULT __stdcall GetDirection(CATSafeArrayVariant & ioDirection); \
      virtual HRESULT __stdcall SetDirection(CATIAReference * iLine, CATIAProduct * iLineComp); \
      virtual HRESULT __stdcall ReverseInnerSide(); \
      virtual HRESULT __stdcall AddAffectedComponent(CATIAProduct * iComponent); \
      virtual HRESULT __stdcall RemoveAffectedComponent(CATIAProduct * iComponent); \
      virtual HRESULT __stdcall ListAffectedComponents(CATSafeArrayVariant & oListOfComponents); \
      virtual HRESULT __stdcall AffectedComponentsCount(CATLONG & oComponentCount); \
      virtual HRESULT  __stdcall get_Application(CATIAApplication *& oApplication); \
      virtual HRESULT  __stdcall get_Parent(CATBaseDispatch *& oParent); \
      virtual HRESULT  __stdcall get_Name(CATBSTR & oNameBSTR); \
      virtual HRESULT  __stdcall put_Name(const CATBSTR & iNameBSTR); \
      virtual HRESULT  __stdcall GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj); \
};



#define ENVTIEdeclare_CATIAAssemblyPocket(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
virtual HRESULT __stdcall get_DirectionType(CatPrismExtrusionDirection & oDirType); \
virtual HRESULT __stdcall put_DirectionType(CatPrismExtrusionDirection iDirType); \
virtual HRESULT __stdcall get_DirectionOrientation(CatPrismOrientation & oOrientation); \
virtual HRESULT __stdcall put_DirectionOrientation(CatPrismOrientation iOrientation); \
virtual HRESULT __stdcall get_IsSymmetric(CAT_VARIANT_BOOL & oIsSymmetric); \
virtual HRESULT __stdcall put_IsSymmetric(CAT_VARIANT_BOOL iIsSymmetric); \
virtual HRESULT __stdcall get_FirstLimit(CATIALimit *& oFirstLimit); \
virtual HRESULT __stdcall get_SecondLimit(CATIALimit *& oSecondLimit); \
virtual HRESULT __stdcall get_Sketch(CATIASketch *& oSketch); \
virtual HRESULT __stdcall get_SketchComponent(CATIAProduct *& oSketchComp); \
virtual HRESULT __stdcall GetDirection(CATSafeArrayVariant & ioDirection); \
virtual HRESULT __stdcall SetDirection(CATIAReference * iLine, CATIAProduct * iLineComp); \
virtual HRESULT __stdcall ReverseInnerSide(); \
virtual HRESULT __stdcall AddAffectedComponent(CATIAProduct * iComponent); \
virtual HRESULT __stdcall RemoveAffectedComponent(CATIAProduct * iComponent); \
virtual HRESULT __stdcall ListAffectedComponents(CATSafeArrayVariant & oListOfComponents); \
virtual HRESULT __stdcall AffectedComponentsCount(CATLONG & oComponentCount); \
virtual HRESULT  __stdcall get_Application(CATIAApplication *& oApplication); \
virtual HRESULT  __stdcall get_Parent(CATBaseDispatch *& oParent); \
virtual HRESULT  __stdcall get_Name(CATBSTR & oNameBSTR); \
virtual HRESULT  __stdcall put_Name(const CATBSTR & iNameBSTR); \
virtual HRESULT  __stdcall GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj); \


#define ENVTIEdefine_CATIAAssemblyPocket(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
HRESULT __stdcall  ENVTIEName::get_DirectionType(CatPrismExtrusionDirection & oDirType) \
{ \
return (ENVTIECALL(CATIAAssemblyPocket,ENVTIETypeLetter,ENVTIELetter)get_DirectionType(oDirType)); \
} \
HRESULT __stdcall  ENVTIEName::put_DirectionType(CatPrismExtrusionDirection iDirType) \
{ \
return (ENVTIECALL(CATIAAssemblyPocket,ENVTIETypeLetter,ENVTIELetter)put_DirectionType(iDirType)); \
} \
HRESULT __stdcall  ENVTIEName::get_DirectionOrientation(CatPrismOrientation & oOrientation) \
{ \
return (ENVTIECALL(CATIAAssemblyPocket,ENVTIETypeLetter,ENVTIELetter)get_DirectionOrientation(oOrientation)); \
} \
HRESULT __stdcall  ENVTIEName::put_DirectionOrientation(CatPrismOrientation iOrientation) \
{ \
return (ENVTIECALL(CATIAAssemblyPocket,ENVTIETypeLetter,ENVTIELetter)put_DirectionOrientation(iOrientation)); \
} \
HRESULT __stdcall  ENVTIEName::get_IsSymmetric(CAT_VARIANT_BOOL & oIsSymmetric) \
{ \
return (ENVTIECALL(CATIAAssemblyPocket,ENVTIETypeLetter,ENVTIELetter)get_IsSymmetric(oIsSymmetric)); \
} \
HRESULT __stdcall  ENVTIEName::put_IsSymmetric(CAT_VARIANT_BOOL iIsSymmetric) \
{ \
return (ENVTIECALL(CATIAAssemblyPocket,ENVTIETypeLetter,ENVTIELetter)put_IsSymmetric(iIsSymmetric)); \
} \
HRESULT __stdcall  ENVTIEName::get_FirstLimit(CATIALimit *& oFirstLimit) \
{ \
return (ENVTIECALL(CATIAAssemblyPocket,ENVTIETypeLetter,ENVTIELetter)get_FirstLimit(oFirstLimit)); \
} \
HRESULT __stdcall  ENVTIEName::get_SecondLimit(CATIALimit *& oSecondLimit) \
{ \
return (ENVTIECALL(CATIAAssemblyPocket,ENVTIETypeLetter,ENVTIELetter)get_SecondLimit(oSecondLimit)); \
} \
HRESULT __stdcall  ENVTIEName::get_Sketch(CATIASketch *& oSketch) \
{ \
return (ENVTIECALL(CATIAAssemblyPocket,ENVTIETypeLetter,ENVTIELetter)get_Sketch(oSketch)); \
} \
HRESULT __stdcall  ENVTIEName::get_SketchComponent(CATIAProduct *& oSketchComp) \
{ \
return (ENVTIECALL(CATIAAssemblyPocket,ENVTIETypeLetter,ENVTIELetter)get_SketchComponent(oSketchComp)); \
} \
HRESULT __stdcall  ENVTIEName::GetDirection(CATSafeArrayVariant & ioDirection) \
{ \
return (ENVTIECALL(CATIAAssemblyPocket,ENVTIETypeLetter,ENVTIELetter)GetDirection(ioDirection)); \
} \
HRESULT __stdcall  ENVTIEName::SetDirection(CATIAReference * iLine, CATIAProduct * iLineComp) \
{ \
return (ENVTIECALL(CATIAAssemblyPocket,ENVTIETypeLetter,ENVTIELetter)SetDirection(iLine,iLineComp)); \
} \
HRESULT __stdcall  ENVTIEName::ReverseInnerSide() \
{ \
return (ENVTIECALL(CATIAAssemblyPocket,ENVTIETypeLetter,ENVTIELetter)ReverseInnerSide()); \
} \
HRESULT __stdcall  ENVTIEName::AddAffectedComponent(CATIAProduct * iComponent) \
{ \
return (ENVTIECALL(CATIAAssemblyPocket,ENVTIETypeLetter,ENVTIELetter)AddAffectedComponent(iComponent)); \
} \
HRESULT __stdcall  ENVTIEName::RemoveAffectedComponent(CATIAProduct * iComponent) \
{ \
return (ENVTIECALL(CATIAAssemblyPocket,ENVTIETypeLetter,ENVTIELetter)RemoveAffectedComponent(iComponent)); \
} \
HRESULT __stdcall  ENVTIEName::ListAffectedComponents(CATSafeArrayVariant & oListOfComponents) \
{ \
return (ENVTIECALL(CATIAAssemblyPocket,ENVTIETypeLetter,ENVTIELetter)ListAffectedComponents(oListOfComponents)); \
} \
HRESULT __stdcall  ENVTIEName::AffectedComponentsCount(CATLONG & oComponentCount) \
{ \
return (ENVTIECALL(CATIAAssemblyPocket,ENVTIETypeLetter,ENVTIELetter)AffectedComponentsCount(oComponentCount)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Application(CATIAApplication *& oApplication) \
{ \
return (ENVTIECALL(CATIAAssemblyPocket,ENVTIETypeLetter,ENVTIELetter)get_Application(oApplication)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Parent(CATBaseDispatch *& oParent) \
{ \
return (ENVTIECALL(CATIAAssemblyPocket,ENVTIETypeLetter,ENVTIELetter)get_Parent(oParent)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Name(CATBSTR & oNameBSTR) \
{ \
return (ENVTIECALL(CATIAAssemblyPocket,ENVTIETypeLetter,ENVTIELetter)get_Name(oNameBSTR)); \
} \
HRESULT  __stdcall  ENVTIEName::put_Name(const CATBSTR & iNameBSTR) \
{ \
return (ENVTIECALL(CATIAAssemblyPocket,ENVTIETypeLetter,ENVTIELetter)put_Name(iNameBSTR)); \
} \
HRESULT  __stdcall  ENVTIEName::GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj) \
{ \
return (ENVTIECALL(CATIAAssemblyPocket,ENVTIETypeLetter,ENVTIELetter)GetItem(IDName,RealObj)); \
} \


/* Name of the TIE class */
#define class_TIE_CATIAAssemblyPocket(classe)    TIECATIAAssemblyPocket##classe


/* Common methods inside a TIE */
#define common_TIE_CATIAAssemblyPocket(classe) \
 \
 \
/* Static initialization */ \
CATDefineCommonTIEMembers(CATIAAssemblyPocket, classe) \
 \
 \
CATImplementTIEMethods(CATIAAssemblyPocket, classe) \
CATImplementIUnknownMethodsForCATBaseUnknownTIE(CATIAAssemblyPocket, classe, 2) \
CATImplementIDispatchMethodsForCATBaseUnknownTIE(CATIAAssemblyPocket, classe) \
CATImplementCATBaseUnknownMethodsForTIE(CATIAAssemblyPocket, classe) \
 \
HRESULT __stdcall  TIECATIAAssemblyPocket##classe::get_DirectionType(CatPrismExtrusionDirection & oDirType) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,1,&_Trac2,&oDirType); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_DirectionType(oDirType); \
   ExitAfterCall(this,1,_Trac2,&_ret_arg,&oDirType); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAAssemblyPocket##classe::put_DirectionType(CatPrismExtrusionDirection iDirType) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,2,&_Trac2,&iDirType); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_DirectionType(iDirType); \
   ExitAfterCall(this,2,_Trac2,&_ret_arg,&iDirType); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAAssemblyPocket##classe::get_DirectionOrientation(CatPrismOrientation & oOrientation) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,3,&_Trac2,&oOrientation); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_DirectionOrientation(oOrientation); \
   ExitAfterCall(this,3,_Trac2,&_ret_arg,&oOrientation); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAAssemblyPocket##classe::put_DirectionOrientation(CatPrismOrientation iOrientation) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,4,&_Trac2,&iOrientation); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_DirectionOrientation(iOrientation); \
   ExitAfterCall(this,4,_Trac2,&_ret_arg,&iOrientation); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAAssemblyPocket##classe::get_IsSymmetric(CAT_VARIANT_BOOL & oIsSymmetric) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,5,&_Trac2,&oIsSymmetric); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_IsSymmetric(oIsSymmetric); \
   ExitAfterCall(this,5,_Trac2,&_ret_arg,&oIsSymmetric); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAAssemblyPocket##classe::put_IsSymmetric(CAT_VARIANT_BOOL iIsSymmetric) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,6,&_Trac2,&iIsSymmetric); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_IsSymmetric(iIsSymmetric); \
   ExitAfterCall(this,6,_Trac2,&_ret_arg,&iIsSymmetric); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAAssemblyPocket##classe::get_FirstLimit(CATIALimit *& oFirstLimit) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,7,&_Trac2,&oFirstLimit); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_FirstLimit(oFirstLimit); \
   ExitAfterCall(this,7,_Trac2,&_ret_arg,&oFirstLimit); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAAssemblyPocket##classe::get_SecondLimit(CATIALimit *& oSecondLimit) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,8,&_Trac2,&oSecondLimit); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_SecondLimit(oSecondLimit); \
   ExitAfterCall(this,8,_Trac2,&_ret_arg,&oSecondLimit); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAAssemblyPocket##classe::get_Sketch(CATIASketch *& oSketch) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,9,&_Trac2,&oSketch); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Sketch(oSketch); \
   ExitAfterCall(this,9,_Trac2,&_ret_arg,&oSketch); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAAssemblyPocket##classe::get_SketchComponent(CATIAProduct *& oSketchComp) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,10,&_Trac2,&oSketchComp); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_SketchComponent(oSketchComp); \
   ExitAfterCall(this,10,_Trac2,&_ret_arg,&oSketchComp); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAAssemblyPocket##classe::GetDirection(CATSafeArrayVariant & ioDirection) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,11,&_Trac2,&ioDirection); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetDirection(ioDirection); \
   ExitAfterCall(this,11,_Trac2,&_ret_arg,&ioDirection); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAAssemblyPocket##classe::SetDirection(CATIAReference * iLine, CATIAProduct * iLineComp) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,12,&_Trac2,&iLine,&iLineComp); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetDirection(iLine,iLineComp); \
   ExitAfterCall(this,12,_Trac2,&_ret_arg,&iLine,&iLineComp); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAAssemblyPocket##classe::ReverseInnerSide() \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,13,&_Trac2); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->ReverseInnerSide(); \
   ExitAfterCall(this,13,_Trac2,&_ret_arg); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAAssemblyPocket##classe::AddAffectedComponent(CATIAProduct * iComponent) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,14,&_Trac2,&iComponent); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->AddAffectedComponent(iComponent); \
   ExitAfterCall(this,14,_Trac2,&_ret_arg,&iComponent); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAAssemblyPocket##classe::RemoveAffectedComponent(CATIAProduct * iComponent) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,15,&_Trac2,&iComponent); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->RemoveAffectedComponent(iComponent); \
   ExitAfterCall(this,15,_Trac2,&_ret_arg,&iComponent); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAAssemblyPocket##classe::ListAffectedComponents(CATSafeArrayVariant & oListOfComponents) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,16,&_Trac2,&oListOfComponents); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->ListAffectedComponents(oListOfComponents); \
   ExitAfterCall(this,16,_Trac2,&_ret_arg,&oListOfComponents); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAAssemblyPocket##classe::AffectedComponentsCount(CATLONG & oComponentCount) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,17,&_Trac2,&oComponentCount); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->AffectedComponentsCount(oComponentCount); \
   ExitAfterCall(this,17,_Trac2,&_ret_arg,&oComponentCount); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAAssemblyPocket##classe::get_Application(CATIAApplication *& oApplication) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,18,&_Trac2,&oApplication); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Application(oApplication); \
   ExitAfterCall(this,18,_Trac2,&_ret_arg,&oApplication); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAAssemblyPocket##classe::get_Parent(CATBaseDispatch *& oParent) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,19,&_Trac2,&oParent); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Parent(oParent); \
   ExitAfterCall(this,19,_Trac2,&_ret_arg,&oParent); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAAssemblyPocket##classe::get_Name(CATBSTR & oNameBSTR) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,20,&_Trac2,&oNameBSTR); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Name(oNameBSTR); \
   ExitAfterCall(this,20,_Trac2,&_ret_arg,&oNameBSTR); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAAssemblyPocket##classe::put_Name(const CATBSTR & iNameBSTR) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,21,&_Trac2,&iNameBSTR); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_Name(iNameBSTR); \
   ExitAfterCall(this,21,_Trac2,&_ret_arg,&iNameBSTR); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAAssemblyPocket##classe::GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,22,&_Trac2,&IDName,&RealObj); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetItem(IDName,RealObj); \
   ExitAfterCall(this,22,_Trac2,&_ret_arg,&IDName,&RealObj); \
   return(_ret_arg); \
} \



/* Macro used to link an implementation with an interface */
#define TIE_CATIAAssemblyPocket(classe) \
 \
 \
declare_TIE_CATIAAssemblyPocket(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIAAssemblyPocket##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIAAssemblyPocket,"CATIAAssemblyPocket",CATIAAssemblyPocket::MetaObject(),classe::MetaObject(),TIE); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIAAssemblyPocket(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIECreation(CATIAAssemblyPocket, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIAAssemblyPocket##classe(classe::MetaObject(),CATIAAssemblyPocket::MetaObject(),(void *)CreateTIECATIAAssemblyPocket##classe)



/* Macro used to link an implementation with an interface */
/* This TIE is chained on the implementation object */
#define TIEchain_CATIAAssemblyPocket(classe) \
 \
 \
declare_TIE_CATIAAssemblyPocket(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIAAssemblyPocket##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIAAssemblyPocket,"CATIAAssemblyPocket",CATIAAssemblyPocket::MetaObject(),classe::MetaObject(),TIEchain); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIAAssemblyPocket(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIEchainCreation(CATIAAssemblyPocket, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIAAssemblyPocket##classe(classe::MetaObject(),CATIAAssemblyPocket::MetaObject(),(void *)CreateTIECATIAAssemblyPocket##classe)


/* Macro to switch between BOA and TIE at build time */ 
#ifdef CATSYS_BOA_IS_TIE
#define BOA_CATIAAssemblyPocket(classe) TIE_CATIAAssemblyPocket(classe)
#else
#define BOA_CATIAAssemblyPocket(classe) CATImplementBOA(CATIAAssemblyPocket, classe)
#endif

#endif
