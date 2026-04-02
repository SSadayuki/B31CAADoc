#ifndef __TIE_CATIAHybridShapeCylinder
#define __TIE_CATIAHybridShapeCylinder

#include <string.h>
#include "CATBaseUnknown.h"
#include "CATMetaClass.h"
#include "CATMacForTie.h"
#include "CATExitJournal.h"
#include "CATIAHybridShapeCylinder.h"
#include "JS0DSPA.h"


#ifdef _WINDOWS_SOURCE
#define Exported __declspec(dllexport)
#define Imported __declspec(dllimport)
#else
#define Exported 
#define Imported 
#endif


/* To link an implementation with the interface CATIAHybridShapeCylinder */
#define declare_TIE_CATIAHybridShapeCylinder(classe) \
 \
 \
class TIECATIAHybridShapeCylinder##classe : public CATIAHybridShapeCylinder \
{ \
   private: \
      CATDeclareCommonTIEMembers \
   public: \
      CATDeclareTIEMethods(CATIAHybridShapeCylinder, classe) \
      CATDeclareIUnknownMethodsForCATBaseUnknownTIE \
      CATDeclareIDispatchMethodsForCATBaseUnknownTIE \
      CATDeclareCATBaseUnknownMethodsForTIE \
      virtual HRESULT __stdcall get_Center(CATIAReference *& oCenter); \
      virtual HRESULT __stdcall put_Center(CATIAReference * iCenter); \
      virtual HRESULT __stdcall get_Direction(CATIAHybridShapeDirection *& oDir); \
      virtual HRESULT __stdcall put_Direction(CATIAHybridShapeDirection * iDir); \
      virtual HRESULT __stdcall get_Radius(CATIALength *& oRadius); \
      virtual HRESULT __stdcall put_Radius(CATIALength * iRadius); \
      virtual HRESULT __stdcall get_Length1(CATIALength *& oLength1); \
      virtual HRESULT __stdcall put_Length1(CATIALength * iLength1); \
      virtual HRESULT __stdcall get_Length2(CATIALength *& oLength2); \
      virtual HRESULT __stdcall put_Length2(CATIALength * iLength2); \
      virtual HRESULT __stdcall put_Orientation(CAT_VARIANT_BOOL iOrientation); \
      virtual HRESULT __stdcall get_Orientation(CAT_VARIANT_BOOL & oOrientation); \
      virtual HRESULT __stdcall InvertOrientation(); \
      virtual HRESULT __stdcall get_SymmetricalExtension(CAT_VARIANT_BOOL & oSym); \
      virtual HRESULT __stdcall put_SymmetricalExtension(CAT_VARIANT_BOOL iSym); \
      virtual HRESULT __stdcall Compute(); \
      virtual HRESULT __stdcall AppendHybridShape(CATIAHybridShape * iHybridShape); \
      virtual HRESULT __stdcall get_Thickness(CATIAHybridShape *& oThickness); \
      virtual HRESULT  __stdcall get_Application(CATIAApplication *& oApplication); \
      virtual HRESULT  __stdcall get_Parent(CATBaseDispatch *& oParent); \
      virtual HRESULT  __stdcall get_Name(CATBSTR & oNameBSTR); \
      virtual HRESULT  __stdcall put_Name(const CATBSTR & iNameBSTR); \
      virtual HRESULT  __stdcall GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj); \
};



#define ENVTIEdeclare_CATIAHybridShapeCylinder(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
virtual HRESULT __stdcall get_Center(CATIAReference *& oCenter); \
virtual HRESULT __stdcall put_Center(CATIAReference * iCenter); \
virtual HRESULT __stdcall get_Direction(CATIAHybridShapeDirection *& oDir); \
virtual HRESULT __stdcall put_Direction(CATIAHybridShapeDirection * iDir); \
virtual HRESULT __stdcall get_Radius(CATIALength *& oRadius); \
virtual HRESULT __stdcall put_Radius(CATIALength * iRadius); \
virtual HRESULT __stdcall get_Length1(CATIALength *& oLength1); \
virtual HRESULT __stdcall put_Length1(CATIALength * iLength1); \
virtual HRESULT __stdcall get_Length2(CATIALength *& oLength2); \
virtual HRESULT __stdcall put_Length2(CATIALength * iLength2); \
virtual HRESULT __stdcall put_Orientation(CAT_VARIANT_BOOL iOrientation); \
virtual HRESULT __stdcall get_Orientation(CAT_VARIANT_BOOL & oOrientation); \
virtual HRESULT __stdcall InvertOrientation(); \
virtual HRESULT __stdcall get_SymmetricalExtension(CAT_VARIANT_BOOL & oSym); \
virtual HRESULT __stdcall put_SymmetricalExtension(CAT_VARIANT_BOOL iSym); \
virtual HRESULT __stdcall Compute(); \
virtual HRESULT __stdcall AppendHybridShape(CATIAHybridShape * iHybridShape); \
virtual HRESULT __stdcall get_Thickness(CATIAHybridShape *& oThickness); \
virtual HRESULT  __stdcall get_Application(CATIAApplication *& oApplication); \
virtual HRESULT  __stdcall get_Parent(CATBaseDispatch *& oParent); \
virtual HRESULT  __stdcall get_Name(CATBSTR & oNameBSTR); \
virtual HRESULT  __stdcall put_Name(const CATBSTR & iNameBSTR); \
virtual HRESULT  __stdcall GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj); \


#define ENVTIEdefine_CATIAHybridShapeCylinder(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
HRESULT __stdcall  ENVTIEName::get_Center(CATIAReference *& oCenter) \
{ \
return (ENVTIECALL(CATIAHybridShapeCylinder,ENVTIETypeLetter,ENVTIELetter)get_Center(oCenter)); \
} \
HRESULT __stdcall  ENVTIEName::put_Center(CATIAReference * iCenter) \
{ \
return (ENVTIECALL(CATIAHybridShapeCylinder,ENVTIETypeLetter,ENVTIELetter)put_Center(iCenter)); \
} \
HRESULT __stdcall  ENVTIEName::get_Direction(CATIAHybridShapeDirection *& oDir) \
{ \
return (ENVTIECALL(CATIAHybridShapeCylinder,ENVTIETypeLetter,ENVTIELetter)get_Direction(oDir)); \
} \
HRESULT __stdcall  ENVTIEName::put_Direction(CATIAHybridShapeDirection * iDir) \
{ \
return (ENVTIECALL(CATIAHybridShapeCylinder,ENVTIETypeLetter,ENVTIELetter)put_Direction(iDir)); \
} \
HRESULT __stdcall  ENVTIEName::get_Radius(CATIALength *& oRadius) \
{ \
return (ENVTIECALL(CATIAHybridShapeCylinder,ENVTIETypeLetter,ENVTIELetter)get_Radius(oRadius)); \
} \
HRESULT __stdcall  ENVTIEName::put_Radius(CATIALength * iRadius) \
{ \
return (ENVTIECALL(CATIAHybridShapeCylinder,ENVTIETypeLetter,ENVTIELetter)put_Radius(iRadius)); \
} \
HRESULT __stdcall  ENVTIEName::get_Length1(CATIALength *& oLength1) \
{ \
return (ENVTIECALL(CATIAHybridShapeCylinder,ENVTIETypeLetter,ENVTIELetter)get_Length1(oLength1)); \
} \
HRESULT __stdcall  ENVTIEName::put_Length1(CATIALength * iLength1) \
{ \
return (ENVTIECALL(CATIAHybridShapeCylinder,ENVTIETypeLetter,ENVTIELetter)put_Length1(iLength1)); \
} \
HRESULT __stdcall  ENVTIEName::get_Length2(CATIALength *& oLength2) \
{ \
return (ENVTIECALL(CATIAHybridShapeCylinder,ENVTIETypeLetter,ENVTIELetter)get_Length2(oLength2)); \
} \
HRESULT __stdcall  ENVTIEName::put_Length2(CATIALength * iLength2) \
{ \
return (ENVTIECALL(CATIAHybridShapeCylinder,ENVTIETypeLetter,ENVTIELetter)put_Length2(iLength2)); \
} \
HRESULT __stdcall  ENVTIEName::put_Orientation(CAT_VARIANT_BOOL iOrientation) \
{ \
return (ENVTIECALL(CATIAHybridShapeCylinder,ENVTIETypeLetter,ENVTIELetter)put_Orientation(iOrientation)); \
} \
HRESULT __stdcall  ENVTIEName::get_Orientation(CAT_VARIANT_BOOL & oOrientation) \
{ \
return (ENVTIECALL(CATIAHybridShapeCylinder,ENVTIETypeLetter,ENVTIELetter)get_Orientation(oOrientation)); \
} \
HRESULT __stdcall  ENVTIEName::InvertOrientation() \
{ \
return (ENVTIECALL(CATIAHybridShapeCylinder,ENVTIETypeLetter,ENVTIELetter)InvertOrientation()); \
} \
HRESULT __stdcall  ENVTIEName::get_SymmetricalExtension(CAT_VARIANT_BOOL & oSym) \
{ \
return (ENVTIECALL(CATIAHybridShapeCylinder,ENVTIETypeLetter,ENVTIELetter)get_SymmetricalExtension(oSym)); \
} \
HRESULT __stdcall  ENVTIEName::put_SymmetricalExtension(CAT_VARIANT_BOOL iSym) \
{ \
return (ENVTIECALL(CATIAHybridShapeCylinder,ENVTIETypeLetter,ENVTIELetter)put_SymmetricalExtension(iSym)); \
} \
HRESULT __stdcall  ENVTIEName::Compute() \
{ \
return (ENVTIECALL(CATIAHybridShapeCylinder,ENVTIETypeLetter,ENVTIELetter)Compute()); \
} \
HRESULT __stdcall  ENVTIEName::AppendHybridShape(CATIAHybridShape * iHybridShape) \
{ \
return (ENVTIECALL(CATIAHybridShapeCylinder,ENVTIETypeLetter,ENVTIELetter)AppendHybridShape(iHybridShape)); \
} \
HRESULT __stdcall  ENVTIEName::get_Thickness(CATIAHybridShape *& oThickness) \
{ \
return (ENVTIECALL(CATIAHybridShapeCylinder,ENVTIETypeLetter,ENVTIELetter)get_Thickness(oThickness)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Application(CATIAApplication *& oApplication) \
{ \
return (ENVTIECALL(CATIAHybridShapeCylinder,ENVTIETypeLetter,ENVTIELetter)get_Application(oApplication)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Parent(CATBaseDispatch *& oParent) \
{ \
return (ENVTIECALL(CATIAHybridShapeCylinder,ENVTIETypeLetter,ENVTIELetter)get_Parent(oParent)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Name(CATBSTR & oNameBSTR) \
{ \
return (ENVTIECALL(CATIAHybridShapeCylinder,ENVTIETypeLetter,ENVTIELetter)get_Name(oNameBSTR)); \
} \
HRESULT  __stdcall  ENVTIEName::put_Name(const CATBSTR & iNameBSTR) \
{ \
return (ENVTIECALL(CATIAHybridShapeCylinder,ENVTIETypeLetter,ENVTIELetter)put_Name(iNameBSTR)); \
} \
HRESULT  __stdcall  ENVTIEName::GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj) \
{ \
return (ENVTIECALL(CATIAHybridShapeCylinder,ENVTIETypeLetter,ENVTIELetter)GetItem(IDName,RealObj)); \
} \


/* Name of the TIE class */
#define class_TIE_CATIAHybridShapeCylinder(classe)    TIECATIAHybridShapeCylinder##classe


/* Common methods inside a TIE */
#define common_TIE_CATIAHybridShapeCylinder(classe) \
 \
 \
/* Static initialization */ \
CATDefineCommonTIEMembers(CATIAHybridShapeCylinder, classe) \
 \
 \
CATImplementTIEMethods(CATIAHybridShapeCylinder, classe) \
CATImplementIUnknownMethodsForCATBaseUnknownTIE(CATIAHybridShapeCylinder, classe, 2) \
CATImplementIDispatchMethodsForCATBaseUnknownTIE(CATIAHybridShapeCylinder, classe) \
CATImplementCATBaseUnknownMethodsForTIE(CATIAHybridShapeCylinder, classe) \
 \
HRESULT __stdcall  TIECATIAHybridShapeCylinder##classe::get_Center(CATIAReference *& oCenter) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,1,&_Trac2,&oCenter); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Center(oCenter); \
   ExitAfterCall(this,1,_Trac2,&_ret_arg,&oCenter); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeCylinder##classe::put_Center(CATIAReference * iCenter) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,2,&_Trac2,&iCenter); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_Center(iCenter); \
   ExitAfterCall(this,2,_Trac2,&_ret_arg,&iCenter); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeCylinder##classe::get_Direction(CATIAHybridShapeDirection *& oDir) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,3,&_Trac2,&oDir); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Direction(oDir); \
   ExitAfterCall(this,3,_Trac2,&_ret_arg,&oDir); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeCylinder##classe::put_Direction(CATIAHybridShapeDirection * iDir) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,4,&_Trac2,&iDir); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_Direction(iDir); \
   ExitAfterCall(this,4,_Trac2,&_ret_arg,&iDir); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeCylinder##classe::get_Radius(CATIALength *& oRadius) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,5,&_Trac2,&oRadius); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Radius(oRadius); \
   ExitAfterCall(this,5,_Trac2,&_ret_arg,&oRadius); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeCylinder##classe::put_Radius(CATIALength * iRadius) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,6,&_Trac2,&iRadius); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_Radius(iRadius); \
   ExitAfterCall(this,6,_Trac2,&_ret_arg,&iRadius); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeCylinder##classe::get_Length1(CATIALength *& oLength1) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,7,&_Trac2,&oLength1); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Length1(oLength1); \
   ExitAfterCall(this,7,_Trac2,&_ret_arg,&oLength1); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeCylinder##classe::put_Length1(CATIALength * iLength1) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,8,&_Trac2,&iLength1); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_Length1(iLength1); \
   ExitAfterCall(this,8,_Trac2,&_ret_arg,&iLength1); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeCylinder##classe::get_Length2(CATIALength *& oLength2) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,9,&_Trac2,&oLength2); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Length2(oLength2); \
   ExitAfterCall(this,9,_Trac2,&_ret_arg,&oLength2); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeCylinder##classe::put_Length2(CATIALength * iLength2) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,10,&_Trac2,&iLength2); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_Length2(iLength2); \
   ExitAfterCall(this,10,_Trac2,&_ret_arg,&iLength2); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeCylinder##classe::put_Orientation(CAT_VARIANT_BOOL iOrientation) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,11,&_Trac2,&iOrientation); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_Orientation(iOrientation); \
   ExitAfterCall(this,11,_Trac2,&_ret_arg,&iOrientation); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeCylinder##classe::get_Orientation(CAT_VARIANT_BOOL & oOrientation) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,12,&_Trac2,&oOrientation); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Orientation(oOrientation); \
   ExitAfterCall(this,12,_Trac2,&_ret_arg,&oOrientation); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeCylinder##classe::InvertOrientation() \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,13,&_Trac2); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->InvertOrientation(); \
   ExitAfterCall(this,13,_Trac2,&_ret_arg); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeCylinder##classe::get_SymmetricalExtension(CAT_VARIANT_BOOL & oSym) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,14,&_Trac2,&oSym); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_SymmetricalExtension(oSym); \
   ExitAfterCall(this,14,_Trac2,&_ret_arg,&oSym); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeCylinder##classe::put_SymmetricalExtension(CAT_VARIANT_BOOL iSym) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,15,&_Trac2,&iSym); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_SymmetricalExtension(iSym); \
   ExitAfterCall(this,15,_Trac2,&_ret_arg,&iSym); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeCylinder##classe::Compute() \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,16,&_Trac2); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->Compute(); \
   ExitAfterCall(this,16,_Trac2,&_ret_arg); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeCylinder##classe::AppendHybridShape(CATIAHybridShape * iHybridShape) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,17,&_Trac2,&iHybridShape); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->AppendHybridShape(iHybridShape); \
   ExitAfterCall(this,17,_Trac2,&_ret_arg,&iHybridShape); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeCylinder##classe::get_Thickness(CATIAHybridShape *& oThickness) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,18,&_Trac2,&oThickness); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Thickness(oThickness); \
   ExitAfterCall(this,18,_Trac2,&_ret_arg,&oThickness); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAHybridShapeCylinder##classe::get_Application(CATIAApplication *& oApplication) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,19,&_Trac2,&oApplication); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Application(oApplication); \
   ExitAfterCall(this,19,_Trac2,&_ret_arg,&oApplication); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAHybridShapeCylinder##classe::get_Parent(CATBaseDispatch *& oParent) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,20,&_Trac2,&oParent); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Parent(oParent); \
   ExitAfterCall(this,20,_Trac2,&_ret_arg,&oParent); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAHybridShapeCylinder##classe::get_Name(CATBSTR & oNameBSTR) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,21,&_Trac2,&oNameBSTR); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Name(oNameBSTR); \
   ExitAfterCall(this,21,_Trac2,&_ret_arg,&oNameBSTR); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAHybridShapeCylinder##classe::put_Name(const CATBSTR & iNameBSTR) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,22,&_Trac2,&iNameBSTR); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_Name(iNameBSTR); \
   ExitAfterCall(this,22,_Trac2,&_ret_arg,&iNameBSTR); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAHybridShapeCylinder##classe::GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,23,&_Trac2,&IDName,&RealObj); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetItem(IDName,RealObj); \
   ExitAfterCall(this,23,_Trac2,&_ret_arg,&IDName,&RealObj); \
   return(_ret_arg); \
} \



/* Macro used to link an implementation with an interface */
#define TIE_CATIAHybridShapeCylinder(classe) \
 \
 \
declare_TIE_CATIAHybridShapeCylinder(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIAHybridShapeCylinder##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIAHybridShapeCylinder,"CATIAHybridShapeCylinder",CATIAHybridShapeCylinder::MetaObject(),classe::MetaObject(),TIE); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIAHybridShapeCylinder(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIECreation(CATIAHybridShapeCylinder, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIAHybridShapeCylinder##classe(classe::MetaObject(),CATIAHybridShapeCylinder::MetaObject(),(void *)CreateTIECATIAHybridShapeCylinder##classe)



/* Macro used to link an implementation with an interface */
/* This TIE is chained on the implementation object */
#define TIEchain_CATIAHybridShapeCylinder(classe) \
 \
 \
declare_TIE_CATIAHybridShapeCylinder(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIAHybridShapeCylinder##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIAHybridShapeCylinder,"CATIAHybridShapeCylinder",CATIAHybridShapeCylinder::MetaObject(),classe::MetaObject(),TIEchain); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIAHybridShapeCylinder(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIEchainCreation(CATIAHybridShapeCylinder, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIAHybridShapeCylinder##classe(classe::MetaObject(),CATIAHybridShapeCylinder::MetaObject(),(void *)CreateTIECATIAHybridShapeCylinder##classe)


/* Macro to switch between BOA and TIE at build time */ 
#ifdef CATSYS_BOA_IS_TIE
#define BOA_CATIAHybridShapeCylinder(classe) TIE_CATIAHybridShapeCylinder(classe)
#else
#define BOA_CATIAHybridShapeCylinder(classe) CATImplementBOA(CATIAHybridShapeCylinder, classe)
#endif

#endif
