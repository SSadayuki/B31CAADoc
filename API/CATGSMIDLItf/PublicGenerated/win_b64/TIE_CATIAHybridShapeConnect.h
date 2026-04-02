#ifndef __TIE_CATIAHybridShapeConnect
#define __TIE_CATIAHybridShapeConnect

#include <string.h>
#include "CATBaseUnknown.h"
#include "CATMetaClass.h"
#include "CATMacForTie.h"
#include "CATExitJournal.h"
#include "CATIAHybridShapeConnect.h"
#include "JS0DSPA.h"


#ifdef _WINDOWS_SOURCE
#define Exported __declspec(dllexport)
#define Imported __declspec(dllimport)
#else
#define Exported 
#define Imported 
#endif


/* To link an implementation with the interface CATIAHybridShapeConnect */
#define declare_TIE_CATIAHybridShapeConnect(classe) \
 \
 \
class TIECATIAHybridShapeConnect##classe : public CATIAHybridShapeConnect \
{ \
   private: \
      CATDeclareCommonTIEMembers \
   public: \
      CATDeclareTIEMethods(CATIAHybridShapeConnect, classe) \
      CATDeclareIUnknownMethodsForCATBaseUnknownTIE \
      CATDeclareIDispatchMethodsForCATBaseUnknownTIE \
      CATDeclareCATBaseUnknownMethodsForTIE \
      virtual HRESULT __stdcall get_FirstTension(CATIARealParam *& oFirstTension); \
      virtual HRESULT __stdcall get_SecondTension(CATIARealParam *& oSecondTension); \
      virtual HRESULT __stdcall get_BaseCurve(CATIAReference *& oT); \
      virtual HRESULT __stdcall put_BaseCurve(CATIAReference * iT); \
      virtual HRESULT __stdcall get_ConnectType(CATLONG & oConnectType); \
      virtual HRESULT __stdcall put_ConnectType(CATLONG iConnectType); \
      virtual HRESULT __stdcall get_FirstContinuity(CATLONG & oFirstContinuity); \
      virtual HRESULT __stdcall put_FirstContinuity(CATLONG iFirstContinuity); \
      virtual HRESULT __stdcall get_FirstCurve(CATIAReference *& oFirstCurve); \
      virtual HRESULT __stdcall put_FirstCurve(CATIAReference * iFirstCurve); \
      virtual HRESULT __stdcall get_FirstOrientation(CATLONG & oFirstOrientation); \
      virtual HRESULT __stdcall put_FirstOrientation(CATLONG iFirstOrientation); \
      virtual HRESULT __stdcall get_FirstPoint(CATIAReference *& oFirstPoint); \
      virtual HRESULT __stdcall put_FirstPoint(CATIAReference * iFirstPoint); \
      virtual HRESULT __stdcall get_SecondContinuity(CATLONG & oSecondContinuity); \
      virtual HRESULT __stdcall put_SecondContinuity(CATLONG iSecondContinuity); \
      virtual HRESULT __stdcall get_SecondCurve(CATIAReference *& oSecondCurve); \
      virtual HRESULT __stdcall put_SecondCurve(CATIAReference * iSecondCurve); \
      virtual HRESULT __stdcall get_SecondOrientation(CATLONG & oSecondOrientation); \
      virtual HRESULT __stdcall put_SecondOrientation(CATLONG iSecondOrientation); \
      virtual HRESULT __stdcall get_SecondPoint(CATIAReference *& oSecondPoint); \
      virtual HRESULT __stdcall put_SecondPoint(CATIAReference * iSecondPoint); \
      virtual HRESULT __stdcall get_Trim(CAT_VARIANT_BOOL & oTrim); \
      virtual HRESULT __stdcall put_Trim(CAT_VARIANT_BOOL iTrim); \
      virtual HRESULT __stdcall Compute(); \
      virtual HRESULT __stdcall AppendHybridShape(CATIAHybridShape * iHybridShape); \
      virtual HRESULT __stdcall get_Thickness(CATIAHybridShape *& oThickness); \
      virtual HRESULT  __stdcall get_Application(CATIAApplication *& oApplication); \
      virtual HRESULT  __stdcall get_Parent(CATBaseDispatch *& oParent); \
      virtual HRESULT  __stdcall get_Name(CATBSTR & oNameBSTR); \
      virtual HRESULT  __stdcall put_Name(const CATBSTR & iNameBSTR); \
      virtual HRESULT  __stdcall GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj); \
};



#define ENVTIEdeclare_CATIAHybridShapeConnect(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
virtual HRESULT __stdcall get_FirstTension(CATIARealParam *& oFirstTension); \
virtual HRESULT __stdcall get_SecondTension(CATIARealParam *& oSecondTension); \
virtual HRESULT __stdcall get_BaseCurve(CATIAReference *& oT); \
virtual HRESULT __stdcall put_BaseCurve(CATIAReference * iT); \
virtual HRESULT __stdcall get_ConnectType(CATLONG & oConnectType); \
virtual HRESULT __stdcall put_ConnectType(CATLONG iConnectType); \
virtual HRESULT __stdcall get_FirstContinuity(CATLONG & oFirstContinuity); \
virtual HRESULT __stdcall put_FirstContinuity(CATLONG iFirstContinuity); \
virtual HRESULT __stdcall get_FirstCurve(CATIAReference *& oFirstCurve); \
virtual HRESULT __stdcall put_FirstCurve(CATIAReference * iFirstCurve); \
virtual HRESULT __stdcall get_FirstOrientation(CATLONG & oFirstOrientation); \
virtual HRESULT __stdcall put_FirstOrientation(CATLONG iFirstOrientation); \
virtual HRESULT __stdcall get_FirstPoint(CATIAReference *& oFirstPoint); \
virtual HRESULT __stdcall put_FirstPoint(CATIAReference * iFirstPoint); \
virtual HRESULT __stdcall get_SecondContinuity(CATLONG & oSecondContinuity); \
virtual HRESULT __stdcall put_SecondContinuity(CATLONG iSecondContinuity); \
virtual HRESULT __stdcall get_SecondCurve(CATIAReference *& oSecondCurve); \
virtual HRESULT __stdcall put_SecondCurve(CATIAReference * iSecondCurve); \
virtual HRESULT __stdcall get_SecondOrientation(CATLONG & oSecondOrientation); \
virtual HRESULT __stdcall put_SecondOrientation(CATLONG iSecondOrientation); \
virtual HRESULT __stdcall get_SecondPoint(CATIAReference *& oSecondPoint); \
virtual HRESULT __stdcall put_SecondPoint(CATIAReference * iSecondPoint); \
virtual HRESULT __stdcall get_Trim(CAT_VARIANT_BOOL & oTrim); \
virtual HRESULT __stdcall put_Trim(CAT_VARIANT_BOOL iTrim); \
virtual HRESULT __stdcall Compute(); \
virtual HRESULT __stdcall AppendHybridShape(CATIAHybridShape * iHybridShape); \
virtual HRESULT __stdcall get_Thickness(CATIAHybridShape *& oThickness); \
virtual HRESULT  __stdcall get_Application(CATIAApplication *& oApplication); \
virtual HRESULT  __stdcall get_Parent(CATBaseDispatch *& oParent); \
virtual HRESULT  __stdcall get_Name(CATBSTR & oNameBSTR); \
virtual HRESULT  __stdcall put_Name(const CATBSTR & iNameBSTR); \
virtual HRESULT  __stdcall GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj); \


#define ENVTIEdefine_CATIAHybridShapeConnect(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
HRESULT __stdcall  ENVTIEName::get_FirstTension(CATIARealParam *& oFirstTension) \
{ \
return (ENVTIECALL(CATIAHybridShapeConnect,ENVTIETypeLetter,ENVTIELetter)get_FirstTension(oFirstTension)); \
} \
HRESULT __stdcall  ENVTIEName::get_SecondTension(CATIARealParam *& oSecondTension) \
{ \
return (ENVTIECALL(CATIAHybridShapeConnect,ENVTIETypeLetter,ENVTIELetter)get_SecondTension(oSecondTension)); \
} \
HRESULT __stdcall  ENVTIEName::get_BaseCurve(CATIAReference *& oT) \
{ \
return (ENVTIECALL(CATIAHybridShapeConnect,ENVTIETypeLetter,ENVTIELetter)get_BaseCurve(oT)); \
} \
HRESULT __stdcall  ENVTIEName::put_BaseCurve(CATIAReference * iT) \
{ \
return (ENVTIECALL(CATIAHybridShapeConnect,ENVTIETypeLetter,ENVTIELetter)put_BaseCurve(iT)); \
} \
HRESULT __stdcall  ENVTIEName::get_ConnectType(CATLONG & oConnectType) \
{ \
return (ENVTIECALL(CATIAHybridShapeConnect,ENVTIETypeLetter,ENVTIELetter)get_ConnectType(oConnectType)); \
} \
HRESULT __stdcall  ENVTIEName::put_ConnectType(CATLONG iConnectType) \
{ \
return (ENVTIECALL(CATIAHybridShapeConnect,ENVTIETypeLetter,ENVTIELetter)put_ConnectType(iConnectType)); \
} \
HRESULT __stdcall  ENVTIEName::get_FirstContinuity(CATLONG & oFirstContinuity) \
{ \
return (ENVTIECALL(CATIAHybridShapeConnect,ENVTIETypeLetter,ENVTIELetter)get_FirstContinuity(oFirstContinuity)); \
} \
HRESULT __stdcall  ENVTIEName::put_FirstContinuity(CATLONG iFirstContinuity) \
{ \
return (ENVTIECALL(CATIAHybridShapeConnect,ENVTIETypeLetter,ENVTIELetter)put_FirstContinuity(iFirstContinuity)); \
} \
HRESULT __stdcall  ENVTIEName::get_FirstCurve(CATIAReference *& oFirstCurve) \
{ \
return (ENVTIECALL(CATIAHybridShapeConnect,ENVTIETypeLetter,ENVTIELetter)get_FirstCurve(oFirstCurve)); \
} \
HRESULT __stdcall  ENVTIEName::put_FirstCurve(CATIAReference * iFirstCurve) \
{ \
return (ENVTIECALL(CATIAHybridShapeConnect,ENVTIETypeLetter,ENVTIELetter)put_FirstCurve(iFirstCurve)); \
} \
HRESULT __stdcall  ENVTIEName::get_FirstOrientation(CATLONG & oFirstOrientation) \
{ \
return (ENVTIECALL(CATIAHybridShapeConnect,ENVTIETypeLetter,ENVTIELetter)get_FirstOrientation(oFirstOrientation)); \
} \
HRESULT __stdcall  ENVTIEName::put_FirstOrientation(CATLONG iFirstOrientation) \
{ \
return (ENVTIECALL(CATIAHybridShapeConnect,ENVTIETypeLetter,ENVTIELetter)put_FirstOrientation(iFirstOrientation)); \
} \
HRESULT __stdcall  ENVTIEName::get_FirstPoint(CATIAReference *& oFirstPoint) \
{ \
return (ENVTIECALL(CATIAHybridShapeConnect,ENVTIETypeLetter,ENVTIELetter)get_FirstPoint(oFirstPoint)); \
} \
HRESULT __stdcall  ENVTIEName::put_FirstPoint(CATIAReference * iFirstPoint) \
{ \
return (ENVTIECALL(CATIAHybridShapeConnect,ENVTIETypeLetter,ENVTIELetter)put_FirstPoint(iFirstPoint)); \
} \
HRESULT __stdcall  ENVTIEName::get_SecondContinuity(CATLONG & oSecondContinuity) \
{ \
return (ENVTIECALL(CATIAHybridShapeConnect,ENVTIETypeLetter,ENVTIELetter)get_SecondContinuity(oSecondContinuity)); \
} \
HRESULT __stdcall  ENVTIEName::put_SecondContinuity(CATLONG iSecondContinuity) \
{ \
return (ENVTIECALL(CATIAHybridShapeConnect,ENVTIETypeLetter,ENVTIELetter)put_SecondContinuity(iSecondContinuity)); \
} \
HRESULT __stdcall  ENVTIEName::get_SecondCurve(CATIAReference *& oSecondCurve) \
{ \
return (ENVTIECALL(CATIAHybridShapeConnect,ENVTIETypeLetter,ENVTIELetter)get_SecondCurve(oSecondCurve)); \
} \
HRESULT __stdcall  ENVTIEName::put_SecondCurve(CATIAReference * iSecondCurve) \
{ \
return (ENVTIECALL(CATIAHybridShapeConnect,ENVTIETypeLetter,ENVTIELetter)put_SecondCurve(iSecondCurve)); \
} \
HRESULT __stdcall  ENVTIEName::get_SecondOrientation(CATLONG & oSecondOrientation) \
{ \
return (ENVTIECALL(CATIAHybridShapeConnect,ENVTIETypeLetter,ENVTIELetter)get_SecondOrientation(oSecondOrientation)); \
} \
HRESULT __stdcall  ENVTIEName::put_SecondOrientation(CATLONG iSecondOrientation) \
{ \
return (ENVTIECALL(CATIAHybridShapeConnect,ENVTIETypeLetter,ENVTIELetter)put_SecondOrientation(iSecondOrientation)); \
} \
HRESULT __stdcall  ENVTIEName::get_SecondPoint(CATIAReference *& oSecondPoint) \
{ \
return (ENVTIECALL(CATIAHybridShapeConnect,ENVTIETypeLetter,ENVTIELetter)get_SecondPoint(oSecondPoint)); \
} \
HRESULT __stdcall  ENVTIEName::put_SecondPoint(CATIAReference * iSecondPoint) \
{ \
return (ENVTIECALL(CATIAHybridShapeConnect,ENVTIETypeLetter,ENVTIELetter)put_SecondPoint(iSecondPoint)); \
} \
HRESULT __stdcall  ENVTIEName::get_Trim(CAT_VARIANT_BOOL & oTrim) \
{ \
return (ENVTIECALL(CATIAHybridShapeConnect,ENVTIETypeLetter,ENVTIELetter)get_Trim(oTrim)); \
} \
HRESULT __stdcall  ENVTIEName::put_Trim(CAT_VARIANT_BOOL iTrim) \
{ \
return (ENVTIECALL(CATIAHybridShapeConnect,ENVTIETypeLetter,ENVTIELetter)put_Trim(iTrim)); \
} \
HRESULT __stdcall  ENVTIEName::Compute() \
{ \
return (ENVTIECALL(CATIAHybridShapeConnect,ENVTIETypeLetter,ENVTIELetter)Compute()); \
} \
HRESULT __stdcall  ENVTIEName::AppendHybridShape(CATIAHybridShape * iHybridShape) \
{ \
return (ENVTIECALL(CATIAHybridShapeConnect,ENVTIETypeLetter,ENVTIELetter)AppendHybridShape(iHybridShape)); \
} \
HRESULT __stdcall  ENVTIEName::get_Thickness(CATIAHybridShape *& oThickness) \
{ \
return (ENVTIECALL(CATIAHybridShapeConnect,ENVTIETypeLetter,ENVTIELetter)get_Thickness(oThickness)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Application(CATIAApplication *& oApplication) \
{ \
return (ENVTIECALL(CATIAHybridShapeConnect,ENVTIETypeLetter,ENVTIELetter)get_Application(oApplication)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Parent(CATBaseDispatch *& oParent) \
{ \
return (ENVTIECALL(CATIAHybridShapeConnect,ENVTIETypeLetter,ENVTIELetter)get_Parent(oParent)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Name(CATBSTR & oNameBSTR) \
{ \
return (ENVTIECALL(CATIAHybridShapeConnect,ENVTIETypeLetter,ENVTIELetter)get_Name(oNameBSTR)); \
} \
HRESULT  __stdcall  ENVTIEName::put_Name(const CATBSTR & iNameBSTR) \
{ \
return (ENVTIECALL(CATIAHybridShapeConnect,ENVTIETypeLetter,ENVTIELetter)put_Name(iNameBSTR)); \
} \
HRESULT  __stdcall  ENVTIEName::GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj) \
{ \
return (ENVTIECALL(CATIAHybridShapeConnect,ENVTIETypeLetter,ENVTIELetter)GetItem(IDName,RealObj)); \
} \


/* Name of the TIE class */
#define class_TIE_CATIAHybridShapeConnect(classe)    TIECATIAHybridShapeConnect##classe


/* Common methods inside a TIE */
#define common_TIE_CATIAHybridShapeConnect(classe) \
 \
 \
/* Static initialization */ \
CATDefineCommonTIEMembers(CATIAHybridShapeConnect, classe) \
 \
 \
CATImplementTIEMethods(CATIAHybridShapeConnect, classe) \
CATImplementIUnknownMethodsForCATBaseUnknownTIE(CATIAHybridShapeConnect, classe, 2) \
CATImplementIDispatchMethodsForCATBaseUnknownTIE(CATIAHybridShapeConnect, classe) \
CATImplementCATBaseUnknownMethodsForTIE(CATIAHybridShapeConnect, classe) \
 \
HRESULT __stdcall  TIECATIAHybridShapeConnect##classe::get_FirstTension(CATIARealParam *& oFirstTension) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,1,&_Trac2,&oFirstTension); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_FirstTension(oFirstTension); \
   ExitAfterCall(this,1,_Trac2,&_ret_arg,&oFirstTension); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeConnect##classe::get_SecondTension(CATIARealParam *& oSecondTension) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,2,&_Trac2,&oSecondTension); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_SecondTension(oSecondTension); \
   ExitAfterCall(this,2,_Trac2,&_ret_arg,&oSecondTension); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeConnect##classe::get_BaseCurve(CATIAReference *& oT) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,3,&_Trac2,&oT); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_BaseCurve(oT); \
   ExitAfterCall(this,3,_Trac2,&_ret_arg,&oT); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeConnect##classe::put_BaseCurve(CATIAReference * iT) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,4,&_Trac2,&iT); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_BaseCurve(iT); \
   ExitAfterCall(this,4,_Trac2,&_ret_arg,&iT); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeConnect##classe::get_ConnectType(CATLONG & oConnectType) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,5,&_Trac2,&oConnectType); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_ConnectType(oConnectType); \
   ExitAfterCall(this,5,_Trac2,&_ret_arg,&oConnectType); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeConnect##classe::put_ConnectType(CATLONG iConnectType) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,6,&_Trac2,&iConnectType); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_ConnectType(iConnectType); \
   ExitAfterCall(this,6,_Trac2,&_ret_arg,&iConnectType); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeConnect##classe::get_FirstContinuity(CATLONG & oFirstContinuity) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,7,&_Trac2,&oFirstContinuity); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_FirstContinuity(oFirstContinuity); \
   ExitAfterCall(this,7,_Trac2,&_ret_arg,&oFirstContinuity); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeConnect##classe::put_FirstContinuity(CATLONG iFirstContinuity) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,8,&_Trac2,&iFirstContinuity); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_FirstContinuity(iFirstContinuity); \
   ExitAfterCall(this,8,_Trac2,&_ret_arg,&iFirstContinuity); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeConnect##classe::get_FirstCurve(CATIAReference *& oFirstCurve) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,9,&_Trac2,&oFirstCurve); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_FirstCurve(oFirstCurve); \
   ExitAfterCall(this,9,_Trac2,&_ret_arg,&oFirstCurve); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeConnect##classe::put_FirstCurve(CATIAReference * iFirstCurve) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,10,&_Trac2,&iFirstCurve); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_FirstCurve(iFirstCurve); \
   ExitAfterCall(this,10,_Trac2,&_ret_arg,&iFirstCurve); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeConnect##classe::get_FirstOrientation(CATLONG & oFirstOrientation) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,11,&_Trac2,&oFirstOrientation); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_FirstOrientation(oFirstOrientation); \
   ExitAfterCall(this,11,_Trac2,&_ret_arg,&oFirstOrientation); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeConnect##classe::put_FirstOrientation(CATLONG iFirstOrientation) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,12,&_Trac2,&iFirstOrientation); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_FirstOrientation(iFirstOrientation); \
   ExitAfterCall(this,12,_Trac2,&_ret_arg,&iFirstOrientation); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeConnect##classe::get_FirstPoint(CATIAReference *& oFirstPoint) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,13,&_Trac2,&oFirstPoint); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_FirstPoint(oFirstPoint); \
   ExitAfterCall(this,13,_Trac2,&_ret_arg,&oFirstPoint); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeConnect##classe::put_FirstPoint(CATIAReference * iFirstPoint) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,14,&_Trac2,&iFirstPoint); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_FirstPoint(iFirstPoint); \
   ExitAfterCall(this,14,_Trac2,&_ret_arg,&iFirstPoint); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeConnect##classe::get_SecondContinuity(CATLONG & oSecondContinuity) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,15,&_Trac2,&oSecondContinuity); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_SecondContinuity(oSecondContinuity); \
   ExitAfterCall(this,15,_Trac2,&_ret_arg,&oSecondContinuity); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeConnect##classe::put_SecondContinuity(CATLONG iSecondContinuity) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,16,&_Trac2,&iSecondContinuity); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_SecondContinuity(iSecondContinuity); \
   ExitAfterCall(this,16,_Trac2,&_ret_arg,&iSecondContinuity); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeConnect##classe::get_SecondCurve(CATIAReference *& oSecondCurve) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,17,&_Trac2,&oSecondCurve); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_SecondCurve(oSecondCurve); \
   ExitAfterCall(this,17,_Trac2,&_ret_arg,&oSecondCurve); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeConnect##classe::put_SecondCurve(CATIAReference * iSecondCurve) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,18,&_Trac2,&iSecondCurve); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_SecondCurve(iSecondCurve); \
   ExitAfterCall(this,18,_Trac2,&_ret_arg,&iSecondCurve); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeConnect##classe::get_SecondOrientation(CATLONG & oSecondOrientation) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,19,&_Trac2,&oSecondOrientation); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_SecondOrientation(oSecondOrientation); \
   ExitAfterCall(this,19,_Trac2,&_ret_arg,&oSecondOrientation); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeConnect##classe::put_SecondOrientation(CATLONG iSecondOrientation) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,20,&_Trac2,&iSecondOrientation); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_SecondOrientation(iSecondOrientation); \
   ExitAfterCall(this,20,_Trac2,&_ret_arg,&iSecondOrientation); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeConnect##classe::get_SecondPoint(CATIAReference *& oSecondPoint) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,21,&_Trac2,&oSecondPoint); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_SecondPoint(oSecondPoint); \
   ExitAfterCall(this,21,_Trac2,&_ret_arg,&oSecondPoint); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeConnect##classe::put_SecondPoint(CATIAReference * iSecondPoint) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,22,&_Trac2,&iSecondPoint); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_SecondPoint(iSecondPoint); \
   ExitAfterCall(this,22,_Trac2,&_ret_arg,&iSecondPoint); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeConnect##classe::get_Trim(CAT_VARIANT_BOOL & oTrim) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,23,&_Trac2,&oTrim); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Trim(oTrim); \
   ExitAfterCall(this,23,_Trac2,&_ret_arg,&oTrim); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeConnect##classe::put_Trim(CAT_VARIANT_BOOL iTrim) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,24,&_Trac2,&iTrim); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_Trim(iTrim); \
   ExitAfterCall(this,24,_Trac2,&_ret_arg,&iTrim); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeConnect##classe::Compute() \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,25,&_Trac2); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->Compute(); \
   ExitAfterCall(this,25,_Trac2,&_ret_arg); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeConnect##classe::AppendHybridShape(CATIAHybridShape * iHybridShape) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,26,&_Trac2,&iHybridShape); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->AppendHybridShape(iHybridShape); \
   ExitAfterCall(this,26,_Trac2,&_ret_arg,&iHybridShape); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeConnect##classe::get_Thickness(CATIAHybridShape *& oThickness) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,27,&_Trac2,&oThickness); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Thickness(oThickness); \
   ExitAfterCall(this,27,_Trac2,&_ret_arg,&oThickness); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAHybridShapeConnect##classe::get_Application(CATIAApplication *& oApplication) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,28,&_Trac2,&oApplication); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Application(oApplication); \
   ExitAfterCall(this,28,_Trac2,&_ret_arg,&oApplication); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAHybridShapeConnect##classe::get_Parent(CATBaseDispatch *& oParent) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,29,&_Trac2,&oParent); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Parent(oParent); \
   ExitAfterCall(this,29,_Trac2,&_ret_arg,&oParent); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAHybridShapeConnect##classe::get_Name(CATBSTR & oNameBSTR) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,30,&_Trac2,&oNameBSTR); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Name(oNameBSTR); \
   ExitAfterCall(this,30,_Trac2,&_ret_arg,&oNameBSTR); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAHybridShapeConnect##classe::put_Name(const CATBSTR & iNameBSTR) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,31,&_Trac2,&iNameBSTR); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_Name(iNameBSTR); \
   ExitAfterCall(this,31,_Trac2,&_ret_arg,&iNameBSTR); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAHybridShapeConnect##classe::GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,32,&_Trac2,&IDName,&RealObj); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetItem(IDName,RealObj); \
   ExitAfterCall(this,32,_Trac2,&_ret_arg,&IDName,&RealObj); \
   return(_ret_arg); \
} \



/* Macro used to link an implementation with an interface */
#define TIE_CATIAHybridShapeConnect(classe) \
 \
 \
declare_TIE_CATIAHybridShapeConnect(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIAHybridShapeConnect##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIAHybridShapeConnect,"CATIAHybridShapeConnect",CATIAHybridShapeConnect::MetaObject(),classe::MetaObject(),TIE); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIAHybridShapeConnect(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIECreation(CATIAHybridShapeConnect, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIAHybridShapeConnect##classe(classe::MetaObject(),CATIAHybridShapeConnect::MetaObject(),(void *)CreateTIECATIAHybridShapeConnect##classe)



/* Macro used to link an implementation with an interface */
/* This TIE is chained on the implementation object */
#define TIEchain_CATIAHybridShapeConnect(classe) \
 \
 \
declare_TIE_CATIAHybridShapeConnect(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIAHybridShapeConnect##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIAHybridShapeConnect,"CATIAHybridShapeConnect",CATIAHybridShapeConnect::MetaObject(),classe::MetaObject(),TIEchain); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIAHybridShapeConnect(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIEchainCreation(CATIAHybridShapeConnect, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIAHybridShapeConnect##classe(classe::MetaObject(),CATIAHybridShapeConnect::MetaObject(),(void *)CreateTIECATIAHybridShapeConnect##classe)


/* Macro to switch between BOA and TIE at build time */ 
#ifdef CATSYS_BOA_IS_TIE
#define BOA_CATIAHybridShapeConnect(classe) TIE_CATIAHybridShapeConnect(classe)
#else
#define BOA_CATIAHybridShapeConnect(classe) CATImplementBOA(CATIAHybridShapeConnect, classe)
#endif

#endif
