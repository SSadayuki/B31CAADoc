#ifndef __TIE_CATIAPocket
#define __TIE_CATIAPocket

#include <string.h>
#include "CATBaseUnknown.h"
#include "CATMetaClass.h"
#include "CATMacForTie.h"
#include "CATExitJournal.h"
#include "CATIAPocket.h"
#include "JS0DSPA.h"


#ifdef _WINDOWS_SOURCE
#define Exported __declspec(dllexport)
#define Imported __declspec(dllimport)
#else
#define Exported 
#define Imported 
#endif


/* To link an implementation with the interface CATIAPocket */
#define declare_TIE_CATIAPocket(classe) \
 \
 \
class TIECATIAPocket##classe : public CATIAPocket \
{ \
   private: \
      CATDeclareCommonTIEMembers \
   public: \
      CATDeclareTIEMethods(CATIAPocket, classe) \
      CATDeclareIUnknownMethodsForCATBaseUnknownTIE \
      CATDeclareIDispatchMethodsForCATBaseUnknownTIE \
      CATDeclareCATBaseUnknownMethodsForTIE \
      virtual HRESULT __stdcall get_DirectionType(CatPrismExtrusionDirection & oDirType); \
      virtual HRESULT __stdcall put_DirectionType(CatPrismExtrusionDirection iDirType); \
      virtual HRESULT __stdcall get_DirectionOrientation(CatPrismOrientation & oOrientation); \
      virtual HRESULT __stdcall put_DirectionOrientation(CatPrismOrientation iOrientation); \
      virtual HRESULT __stdcall get_IsSymmetric(CAT_VARIANT_BOOL & oIsSymmetric); \
      virtual HRESULT __stdcall put_IsSymmetric(CAT_VARIANT_BOOL iIsSymmetric); \
      virtual HRESULT __stdcall get_IsThin(CAT_VARIANT_BOOL & oIsThin); \
      virtual HRESULT __stdcall put_IsThin(CAT_VARIANT_BOOL iIsThin); \
      virtual HRESULT __stdcall get_NeutralFiber(CAT_VARIANT_BOOL & oIsNeutralFiber); \
      virtual HRESULT __stdcall put_NeutralFiber(CAT_VARIANT_BOOL iIsNeutralFiber); \
      virtual HRESULT __stdcall get_MergeEnd(CAT_VARIANT_BOOL & oIsMergeEnd); \
      virtual HRESULT __stdcall put_MergeEnd(CAT_VARIANT_BOOL iIsMergeEnd); \
      virtual HRESULT __stdcall get_FirstLimit(CATIALimit *& oFirstLimit); \
      virtual HRESULT __stdcall get_SecondLimit(CATIALimit *& oSecondLimit); \
      virtual HRESULT __stdcall GetDirection(CATSafeArrayVariant & ioDirection); \
      virtual HRESULT __stdcall SetDirection(CATIAReference * iLine); \
      virtual HRESULT __stdcall ReverseInnerSide(); \
      virtual HRESULT __stdcall get_Sketch(CATIASketch *& oSketch); \
      virtual HRESULT __stdcall SetProfileElement(CATIAReference * iProfileElement); \
      virtual HRESULT  __stdcall get_Application(CATIAApplication *& oApplication); \
      virtual HRESULT  __stdcall get_Parent(CATBaseDispatch *& oParent); \
      virtual HRESULT  __stdcall get_Name(CATBSTR & oNameBSTR); \
      virtual HRESULT  __stdcall put_Name(const CATBSTR & iNameBSTR); \
      virtual HRESULT  __stdcall GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj); \
};



#define ENVTIEdeclare_CATIAPocket(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
virtual HRESULT __stdcall get_DirectionType(CatPrismExtrusionDirection & oDirType); \
virtual HRESULT __stdcall put_DirectionType(CatPrismExtrusionDirection iDirType); \
virtual HRESULT __stdcall get_DirectionOrientation(CatPrismOrientation & oOrientation); \
virtual HRESULT __stdcall put_DirectionOrientation(CatPrismOrientation iOrientation); \
virtual HRESULT __stdcall get_IsSymmetric(CAT_VARIANT_BOOL & oIsSymmetric); \
virtual HRESULT __stdcall put_IsSymmetric(CAT_VARIANT_BOOL iIsSymmetric); \
virtual HRESULT __stdcall get_IsThin(CAT_VARIANT_BOOL & oIsThin); \
virtual HRESULT __stdcall put_IsThin(CAT_VARIANT_BOOL iIsThin); \
virtual HRESULT __stdcall get_NeutralFiber(CAT_VARIANT_BOOL & oIsNeutralFiber); \
virtual HRESULT __stdcall put_NeutralFiber(CAT_VARIANT_BOOL iIsNeutralFiber); \
virtual HRESULT __stdcall get_MergeEnd(CAT_VARIANT_BOOL & oIsMergeEnd); \
virtual HRESULT __stdcall put_MergeEnd(CAT_VARIANT_BOOL iIsMergeEnd); \
virtual HRESULT __stdcall get_FirstLimit(CATIALimit *& oFirstLimit); \
virtual HRESULT __stdcall get_SecondLimit(CATIALimit *& oSecondLimit); \
virtual HRESULT __stdcall GetDirection(CATSafeArrayVariant & ioDirection); \
virtual HRESULT __stdcall SetDirection(CATIAReference * iLine); \
virtual HRESULT __stdcall ReverseInnerSide(); \
virtual HRESULT __stdcall get_Sketch(CATIASketch *& oSketch); \
virtual HRESULT __stdcall SetProfileElement(CATIAReference * iProfileElement); \
virtual HRESULT  __stdcall get_Application(CATIAApplication *& oApplication); \
virtual HRESULT  __stdcall get_Parent(CATBaseDispatch *& oParent); \
virtual HRESULT  __stdcall get_Name(CATBSTR & oNameBSTR); \
virtual HRESULT  __stdcall put_Name(const CATBSTR & iNameBSTR); \
virtual HRESULT  __stdcall GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj); \


#define ENVTIEdefine_CATIAPocket(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
HRESULT __stdcall  ENVTIEName::get_DirectionType(CatPrismExtrusionDirection & oDirType) \
{ \
return (ENVTIECALL(CATIAPocket,ENVTIETypeLetter,ENVTIELetter)get_DirectionType(oDirType)); \
} \
HRESULT __stdcall  ENVTIEName::put_DirectionType(CatPrismExtrusionDirection iDirType) \
{ \
return (ENVTIECALL(CATIAPocket,ENVTIETypeLetter,ENVTIELetter)put_DirectionType(iDirType)); \
} \
HRESULT __stdcall  ENVTIEName::get_DirectionOrientation(CatPrismOrientation & oOrientation) \
{ \
return (ENVTIECALL(CATIAPocket,ENVTIETypeLetter,ENVTIELetter)get_DirectionOrientation(oOrientation)); \
} \
HRESULT __stdcall  ENVTIEName::put_DirectionOrientation(CatPrismOrientation iOrientation) \
{ \
return (ENVTIECALL(CATIAPocket,ENVTIETypeLetter,ENVTIELetter)put_DirectionOrientation(iOrientation)); \
} \
HRESULT __stdcall  ENVTIEName::get_IsSymmetric(CAT_VARIANT_BOOL & oIsSymmetric) \
{ \
return (ENVTIECALL(CATIAPocket,ENVTIETypeLetter,ENVTIELetter)get_IsSymmetric(oIsSymmetric)); \
} \
HRESULT __stdcall  ENVTIEName::put_IsSymmetric(CAT_VARIANT_BOOL iIsSymmetric) \
{ \
return (ENVTIECALL(CATIAPocket,ENVTIETypeLetter,ENVTIELetter)put_IsSymmetric(iIsSymmetric)); \
} \
HRESULT __stdcall  ENVTIEName::get_IsThin(CAT_VARIANT_BOOL & oIsThin) \
{ \
return (ENVTIECALL(CATIAPocket,ENVTIETypeLetter,ENVTIELetter)get_IsThin(oIsThin)); \
} \
HRESULT __stdcall  ENVTIEName::put_IsThin(CAT_VARIANT_BOOL iIsThin) \
{ \
return (ENVTIECALL(CATIAPocket,ENVTIETypeLetter,ENVTIELetter)put_IsThin(iIsThin)); \
} \
HRESULT __stdcall  ENVTIEName::get_NeutralFiber(CAT_VARIANT_BOOL & oIsNeutralFiber) \
{ \
return (ENVTIECALL(CATIAPocket,ENVTIETypeLetter,ENVTIELetter)get_NeutralFiber(oIsNeutralFiber)); \
} \
HRESULT __stdcall  ENVTIEName::put_NeutralFiber(CAT_VARIANT_BOOL iIsNeutralFiber) \
{ \
return (ENVTIECALL(CATIAPocket,ENVTIETypeLetter,ENVTIELetter)put_NeutralFiber(iIsNeutralFiber)); \
} \
HRESULT __stdcall  ENVTIEName::get_MergeEnd(CAT_VARIANT_BOOL & oIsMergeEnd) \
{ \
return (ENVTIECALL(CATIAPocket,ENVTIETypeLetter,ENVTIELetter)get_MergeEnd(oIsMergeEnd)); \
} \
HRESULT __stdcall  ENVTIEName::put_MergeEnd(CAT_VARIANT_BOOL iIsMergeEnd) \
{ \
return (ENVTIECALL(CATIAPocket,ENVTIETypeLetter,ENVTIELetter)put_MergeEnd(iIsMergeEnd)); \
} \
HRESULT __stdcall  ENVTIEName::get_FirstLimit(CATIALimit *& oFirstLimit) \
{ \
return (ENVTIECALL(CATIAPocket,ENVTIETypeLetter,ENVTIELetter)get_FirstLimit(oFirstLimit)); \
} \
HRESULT __stdcall  ENVTIEName::get_SecondLimit(CATIALimit *& oSecondLimit) \
{ \
return (ENVTIECALL(CATIAPocket,ENVTIETypeLetter,ENVTIELetter)get_SecondLimit(oSecondLimit)); \
} \
HRESULT __stdcall  ENVTIEName::GetDirection(CATSafeArrayVariant & ioDirection) \
{ \
return (ENVTIECALL(CATIAPocket,ENVTIETypeLetter,ENVTIELetter)GetDirection(ioDirection)); \
} \
HRESULT __stdcall  ENVTIEName::SetDirection(CATIAReference * iLine) \
{ \
return (ENVTIECALL(CATIAPocket,ENVTIETypeLetter,ENVTIELetter)SetDirection(iLine)); \
} \
HRESULT __stdcall  ENVTIEName::ReverseInnerSide() \
{ \
return (ENVTIECALL(CATIAPocket,ENVTIETypeLetter,ENVTIELetter)ReverseInnerSide()); \
} \
HRESULT __stdcall  ENVTIEName::get_Sketch(CATIASketch *& oSketch) \
{ \
return (ENVTIECALL(CATIAPocket,ENVTIETypeLetter,ENVTIELetter)get_Sketch(oSketch)); \
} \
HRESULT __stdcall  ENVTIEName::SetProfileElement(CATIAReference * iProfileElement) \
{ \
return (ENVTIECALL(CATIAPocket,ENVTIETypeLetter,ENVTIELetter)SetProfileElement(iProfileElement)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Application(CATIAApplication *& oApplication) \
{ \
return (ENVTIECALL(CATIAPocket,ENVTIETypeLetter,ENVTIELetter)get_Application(oApplication)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Parent(CATBaseDispatch *& oParent) \
{ \
return (ENVTIECALL(CATIAPocket,ENVTIETypeLetter,ENVTIELetter)get_Parent(oParent)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Name(CATBSTR & oNameBSTR) \
{ \
return (ENVTIECALL(CATIAPocket,ENVTIETypeLetter,ENVTIELetter)get_Name(oNameBSTR)); \
} \
HRESULT  __stdcall  ENVTIEName::put_Name(const CATBSTR & iNameBSTR) \
{ \
return (ENVTIECALL(CATIAPocket,ENVTIETypeLetter,ENVTIELetter)put_Name(iNameBSTR)); \
} \
HRESULT  __stdcall  ENVTIEName::GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj) \
{ \
return (ENVTIECALL(CATIAPocket,ENVTIETypeLetter,ENVTIELetter)GetItem(IDName,RealObj)); \
} \


/* Name of the TIE class */
#define class_TIE_CATIAPocket(classe)    TIECATIAPocket##classe


/* Common methods inside a TIE */
#define common_TIE_CATIAPocket(classe) \
 \
 \
/* Static initialization */ \
CATDefineCommonTIEMembers(CATIAPocket, classe) \
 \
 \
CATImplementTIEMethods(CATIAPocket, classe) \
CATImplementIUnknownMethodsForCATBaseUnknownTIE(CATIAPocket, classe, 2) \
CATImplementIDispatchMethodsForCATBaseUnknownTIE(CATIAPocket, classe) \
CATImplementCATBaseUnknownMethodsForTIE(CATIAPocket, classe) \
 \
HRESULT __stdcall  TIECATIAPocket##classe::get_DirectionType(CatPrismExtrusionDirection & oDirType) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,1,&_Trac2,&oDirType); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_DirectionType(oDirType); \
   ExitAfterCall(this,1,_Trac2,&_ret_arg,&oDirType); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAPocket##classe::put_DirectionType(CatPrismExtrusionDirection iDirType) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,2,&_Trac2,&iDirType); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_DirectionType(iDirType); \
   ExitAfterCall(this,2,_Trac2,&_ret_arg,&iDirType); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAPocket##classe::get_DirectionOrientation(CatPrismOrientation & oOrientation) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,3,&_Trac2,&oOrientation); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_DirectionOrientation(oOrientation); \
   ExitAfterCall(this,3,_Trac2,&_ret_arg,&oOrientation); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAPocket##classe::put_DirectionOrientation(CatPrismOrientation iOrientation) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,4,&_Trac2,&iOrientation); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_DirectionOrientation(iOrientation); \
   ExitAfterCall(this,4,_Trac2,&_ret_arg,&iOrientation); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAPocket##classe::get_IsSymmetric(CAT_VARIANT_BOOL & oIsSymmetric) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,5,&_Trac2,&oIsSymmetric); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_IsSymmetric(oIsSymmetric); \
   ExitAfterCall(this,5,_Trac2,&_ret_arg,&oIsSymmetric); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAPocket##classe::put_IsSymmetric(CAT_VARIANT_BOOL iIsSymmetric) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,6,&_Trac2,&iIsSymmetric); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_IsSymmetric(iIsSymmetric); \
   ExitAfterCall(this,6,_Trac2,&_ret_arg,&iIsSymmetric); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAPocket##classe::get_IsThin(CAT_VARIANT_BOOL & oIsThin) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,7,&_Trac2,&oIsThin); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_IsThin(oIsThin); \
   ExitAfterCall(this,7,_Trac2,&_ret_arg,&oIsThin); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAPocket##classe::put_IsThin(CAT_VARIANT_BOOL iIsThin) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,8,&_Trac2,&iIsThin); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_IsThin(iIsThin); \
   ExitAfterCall(this,8,_Trac2,&_ret_arg,&iIsThin); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAPocket##classe::get_NeutralFiber(CAT_VARIANT_BOOL & oIsNeutralFiber) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,9,&_Trac2,&oIsNeutralFiber); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_NeutralFiber(oIsNeutralFiber); \
   ExitAfterCall(this,9,_Trac2,&_ret_arg,&oIsNeutralFiber); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAPocket##classe::put_NeutralFiber(CAT_VARIANT_BOOL iIsNeutralFiber) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,10,&_Trac2,&iIsNeutralFiber); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_NeutralFiber(iIsNeutralFiber); \
   ExitAfterCall(this,10,_Trac2,&_ret_arg,&iIsNeutralFiber); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAPocket##classe::get_MergeEnd(CAT_VARIANT_BOOL & oIsMergeEnd) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,11,&_Trac2,&oIsMergeEnd); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_MergeEnd(oIsMergeEnd); \
   ExitAfterCall(this,11,_Trac2,&_ret_arg,&oIsMergeEnd); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAPocket##classe::put_MergeEnd(CAT_VARIANT_BOOL iIsMergeEnd) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,12,&_Trac2,&iIsMergeEnd); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_MergeEnd(iIsMergeEnd); \
   ExitAfterCall(this,12,_Trac2,&_ret_arg,&iIsMergeEnd); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAPocket##classe::get_FirstLimit(CATIALimit *& oFirstLimit) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,13,&_Trac2,&oFirstLimit); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_FirstLimit(oFirstLimit); \
   ExitAfterCall(this,13,_Trac2,&_ret_arg,&oFirstLimit); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAPocket##classe::get_SecondLimit(CATIALimit *& oSecondLimit) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,14,&_Trac2,&oSecondLimit); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_SecondLimit(oSecondLimit); \
   ExitAfterCall(this,14,_Trac2,&_ret_arg,&oSecondLimit); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAPocket##classe::GetDirection(CATSafeArrayVariant & ioDirection) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,15,&_Trac2,&ioDirection); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetDirection(ioDirection); \
   ExitAfterCall(this,15,_Trac2,&_ret_arg,&ioDirection); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAPocket##classe::SetDirection(CATIAReference * iLine) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,16,&_Trac2,&iLine); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetDirection(iLine); \
   ExitAfterCall(this,16,_Trac2,&_ret_arg,&iLine); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAPocket##classe::ReverseInnerSide() \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,17,&_Trac2); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->ReverseInnerSide(); \
   ExitAfterCall(this,17,_Trac2,&_ret_arg); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAPocket##classe::get_Sketch(CATIASketch *& oSketch) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,18,&_Trac2,&oSketch); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Sketch(oSketch); \
   ExitAfterCall(this,18,_Trac2,&_ret_arg,&oSketch); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAPocket##classe::SetProfileElement(CATIAReference * iProfileElement) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,19,&_Trac2,&iProfileElement); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetProfileElement(iProfileElement); \
   ExitAfterCall(this,19,_Trac2,&_ret_arg,&iProfileElement); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAPocket##classe::get_Application(CATIAApplication *& oApplication) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,20,&_Trac2,&oApplication); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Application(oApplication); \
   ExitAfterCall(this,20,_Trac2,&_ret_arg,&oApplication); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAPocket##classe::get_Parent(CATBaseDispatch *& oParent) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,21,&_Trac2,&oParent); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Parent(oParent); \
   ExitAfterCall(this,21,_Trac2,&_ret_arg,&oParent); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAPocket##classe::get_Name(CATBSTR & oNameBSTR) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,22,&_Trac2,&oNameBSTR); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Name(oNameBSTR); \
   ExitAfterCall(this,22,_Trac2,&_ret_arg,&oNameBSTR); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAPocket##classe::put_Name(const CATBSTR & iNameBSTR) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,23,&_Trac2,&iNameBSTR); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_Name(iNameBSTR); \
   ExitAfterCall(this,23,_Trac2,&_ret_arg,&iNameBSTR); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAPocket##classe::GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,24,&_Trac2,&IDName,&RealObj); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetItem(IDName,RealObj); \
   ExitAfterCall(this,24,_Trac2,&_ret_arg,&IDName,&RealObj); \
   return(_ret_arg); \
} \



/* Macro used to link an implementation with an interface */
#define TIE_CATIAPocket(classe) \
 \
 \
declare_TIE_CATIAPocket(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIAPocket##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIAPocket,"CATIAPocket",CATIAPocket::MetaObject(),classe::MetaObject(),TIE); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIAPocket(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIECreation(CATIAPocket, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIAPocket##classe(classe::MetaObject(),CATIAPocket::MetaObject(),(void *)CreateTIECATIAPocket##classe)



/* Macro used to link an implementation with an interface */
/* This TIE is chained on the implementation object */
#define TIEchain_CATIAPocket(classe) \
 \
 \
declare_TIE_CATIAPocket(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIAPocket##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIAPocket,"CATIAPocket",CATIAPocket::MetaObject(),classe::MetaObject(),TIEchain); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIAPocket(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIEchainCreation(CATIAPocket, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIAPocket##classe(classe::MetaObject(),CATIAPocket::MetaObject(),(void *)CreateTIECATIAPocket##classe)


/* Macro to switch between BOA and TIE at build time */ 
#ifdef CATSYS_BOA_IS_TIE
#define BOA_CATIAPocket(classe) TIE_CATIAPocket(classe)
#else
#define BOA_CATIAPocket(classe) CATImplementBOA(CATIAPocket, classe)
#endif

#endif
