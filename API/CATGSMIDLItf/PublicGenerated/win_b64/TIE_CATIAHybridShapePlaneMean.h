#ifndef __TIE_CATIAHybridShapePlaneMean
#define __TIE_CATIAHybridShapePlaneMean

#include <string.h>
#include "CATBaseUnknown.h"
#include "CATMetaClass.h"
#include "CATMacForTie.h"
#include "CATExitJournal.h"
#include "CATIAHybridShapePlaneMean.h"
#include "JS0DSPA.h"


#ifdef _WINDOWS_SOURCE
#define Exported __declspec(dllexport)
#define Imported __declspec(dllimport)
#else
#define Exported 
#define Imported 
#endif


/* To link an implementation with the interface CATIAHybridShapePlaneMean */
#define declare_TIE_CATIAHybridShapePlaneMean(classe) \
 \
 \
class TIECATIAHybridShapePlaneMean##classe : public CATIAHybridShapePlaneMean \
{ \
   private: \
      CATDeclareCommonTIEMembers \
   public: \
      CATDeclareTIEMethods(CATIAHybridShapePlaneMean, classe) \
      CATDeclareIUnknownMethodsForCATBaseUnknownTIE \
      CATDeclareIDispatchMethodsForCATBaseUnknownTIE \
      CATDeclareCATBaseUnknownMethodsForTIE \
      virtual HRESULT __stdcall AddPoint(CATIAReference * iPassingPoint); \
      virtual HRESULT __stdcall GetPoint(CATLONG iRank, CATIAReference *& oPassingPoint); \
      virtual HRESULT __stdcall RemoveElement(CATLONG iRank); \
      virtual HRESULT __stdcall GetSize(CATLONG & oSize); \
      virtual HRESULT __stdcall GetPos(CATIAReference * iPoint, CATLONG & oPos); \
      virtual HRESULT __stdcall RemoveAll(); \
      virtual HRESULT __stdcall ReplacePointAtPosition(CATIAReference * iPoint, CATLONG iPos); \
      virtual HRESULT __stdcall GetOrigin(CATSafeArrayVariant & oOrigin); \
      virtual HRESULT __stdcall GetFirstAxis(CATSafeArrayVariant & oFirstAxis); \
      virtual HRESULT __stdcall GetSecondAxis(CATSafeArrayVariant & oSecondAxis); \
      virtual HRESULT __stdcall PutOrigin(const CATSafeArrayVariant & iOrigin); \
      virtual HRESULT __stdcall PutFirstAxis(const CATSafeArrayVariant & iFirstAxis); \
      virtual HRESULT __stdcall PutSecondAxis(const CATSafeArrayVariant & iSecondAxis); \
      virtual HRESULT __stdcall GetPosition(double & oX, double & oY, double & oZ); \
      virtual HRESULT __stdcall SetPosition(double iX, double iY, double iZ); \
      virtual HRESULT __stdcall RemovePosition(); \
      virtual HRESULT __stdcall IsARefPlane(CATLONG & oRef); \
      virtual HRESULT __stdcall Compute(); \
      virtual HRESULT __stdcall AppendHybridShape(CATIAHybridShape * iHybridShape); \
      virtual HRESULT __stdcall get_Thickness(CATIAHybridShape *& oThickness); \
      virtual HRESULT  __stdcall get_Application(CATIAApplication *& oApplication); \
      virtual HRESULT  __stdcall get_Parent(CATBaseDispatch *& oParent); \
      virtual HRESULT  __stdcall get_Name(CATBSTR & oNameBSTR); \
      virtual HRESULT  __stdcall put_Name(const CATBSTR & iNameBSTR); \
      virtual HRESULT  __stdcall GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj); \
};



#define ENVTIEdeclare_CATIAHybridShapePlaneMean(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
virtual HRESULT __stdcall AddPoint(CATIAReference * iPassingPoint); \
virtual HRESULT __stdcall GetPoint(CATLONG iRank, CATIAReference *& oPassingPoint); \
virtual HRESULT __stdcall RemoveElement(CATLONG iRank); \
virtual HRESULT __stdcall GetSize(CATLONG & oSize); \
virtual HRESULT __stdcall GetPos(CATIAReference * iPoint, CATLONG & oPos); \
virtual HRESULT __stdcall RemoveAll(); \
virtual HRESULT __stdcall ReplacePointAtPosition(CATIAReference * iPoint, CATLONG iPos); \
virtual HRESULT __stdcall GetOrigin(CATSafeArrayVariant & oOrigin); \
virtual HRESULT __stdcall GetFirstAxis(CATSafeArrayVariant & oFirstAxis); \
virtual HRESULT __stdcall GetSecondAxis(CATSafeArrayVariant & oSecondAxis); \
virtual HRESULT __stdcall PutOrigin(const CATSafeArrayVariant & iOrigin); \
virtual HRESULT __stdcall PutFirstAxis(const CATSafeArrayVariant & iFirstAxis); \
virtual HRESULT __stdcall PutSecondAxis(const CATSafeArrayVariant & iSecondAxis); \
virtual HRESULT __stdcall GetPosition(double & oX, double & oY, double & oZ); \
virtual HRESULT __stdcall SetPosition(double iX, double iY, double iZ); \
virtual HRESULT __stdcall RemovePosition(); \
virtual HRESULT __stdcall IsARefPlane(CATLONG & oRef); \
virtual HRESULT __stdcall Compute(); \
virtual HRESULT __stdcall AppendHybridShape(CATIAHybridShape * iHybridShape); \
virtual HRESULT __stdcall get_Thickness(CATIAHybridShape *& oThickness); \
virtual HRESULT  __stdcall get_Application(CATIAApplication *& oApplication); \
virtual HRESULT  __stdcall get_Parent(CATBaseDispatch *& oParent); \
virtual HRESULT  __stdcall get_Name(CATBSTR & oNameBSTR); \
virtual HRESULT  __stdcall put_Name(const CATBSTR & iNameBSTR); \
virtual HRESULT  __stdcall GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj); \


#define ENVTIEdefine_CATIAHybridShapePlaneMean(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
HRESULT __stdcall  ENVTIEName::AddPoint(CATIAReference * iPassingPoint) \
{ \
return (ENVTIECALL(CATIAHybridShapePlaneMean,ENVTIETypeLetter,ENVTIELetter)AddPoint(iPassingPoint)); \
} \
HRESULT __stdcall  ENVTIEName::GetPoint(CATLONG iRank, CATIAReference *& oPassingPoint) \
{ \
return (ENVTIECALL(CATIAHybridShapePlaneMean,ENVTIETypeLetter,ENVTIELetter)GetPoint(iRank,oPassingPoint)); \
} \
HRESULT __stdcall  ENVTIEName::RemoveElement(CATLONG iRank) \
{ \
return (ENVTIECALL(CATIAHybridShapePlaneMean,ENVTIETypeLetter,ENVTIELetter)RemoveElement(iRank)); \
} \
HRESULT __stdcall  ENVTIEName::GetSize(CATLONG & oSize) \
{ \
return (ENVTIECALL(CATIAHybridShapePlaneMean,ENVTIETypeLetter,ENVTIELetter)GetSize(oSize)); \
} \
HRESULT __stdcall  ENVTIEName::GetPos(CATIAReference * iPoint, CATLONG & oPos) \
{ \
return (ENVTIECALL(CATIAHybridShapePlaneMean,ENVTIETypeLetter,ENVTIELetter)GetPos(iPoint,oPos)); \
} \
HRESULT __stdcall  ENVTIEName::RemoveAll() \
{ \
return (ENVTIECALL(CATIAHybridShapePlaneMean,ENVTIETypeLetter,ENVTIELetter)RemoveAll()); \
} \
HRESULT __stdcall  ENVTIEName::ReplacePointAtPosition(CATIAReference * iPoint, CATLONG iPos) \
{ \
return (ENVTIECALL(CATIAHybridShapePlaneMean,ENVTIETypeLetter,ENVTIELetter)ReplacePointAtPosition(iPoint,iPos)); \
} \
HRESULT __stdcall  ENVTIEName::GetOrigin(CATSafeArrayVariant & oOrigin) \
{ \
return (ENVTIECALL(CATIAHybridShapePlaneMean,ENVTIETypeLetter,ENVTIELetter)GetOrigin(oOrigin)); \
} \
HRESULT __stdcall  ENVTIEName::GetFirstAxis(CATSafeArrayVariant & oFirstAxis) \
{ \
return (ENVTIECALL(CATIAHybridShapePlaneMean,ENVTIETypeLetter,ENVTIELetter)GetFirstAxis(oFirstAxis)); \
} \
HRESULT __stdcall  ENVTIEName::GetSecondAxis(CATSafeArrayVariant & oSecondAxis) \
{ \
return (ENVTIECALL(CATIAHybridShapePlaneMean,ENVTIETypeLetter,ENVTIELetter)GetSecondAxis(oSecondAxis)); \
} \
HRESULT __stdcall  ENVTIEName::PutOrigin(const CATSafeArrayVariant & iOrigin) \
{ \
return (ENVTIECALL(CATIAHybridShapePlaneMean,ENVTIETypeLetter,ENVTIELetter)PutOrigin(iOrigin)); \
} \
HRESULT __stdcall  ENVTIEName::PutFirstAxis(const CATSafeArrayVariant & iFirstAxis) \
{ \
return (ENVTIECALL(CATIAHybridShapePlaneMean,ENVTIETypeLetter,ENVTIELetter)PutFirstAxis(iFirstAxis)); \
} \
HRESULT __stdcall  ENVTIEName::PutSecondAxis(const CATSafeArrayVariant & iSecondAxis) \
{ \
return (ENVTIECALL(CATIAHybridShapePlaneMean,ENVTIETypeLetter,ENVTIELetter)PutSecondAxis(iSecondAxis)); \
} \
HRESULT __stdcall  ENVTIEName::GetPosition(double & oX, double & oY, double & oZ) \
{ \
return (ENVTIECALL(CATIAHybridShapePlaneMean,ENVTIETypeLetter,ENVTIELetter)GetPosition(oX,oY,oZ)); \
} \
HRESULT __stdcall  ENVTIEName::SetPosition(double iX, double iY, double iZ) \
{ \
return (ENVTIECALL(CATIAHybridShapePlaneMean,ENVTIETypeLetter,ENVTIELetter)SetPosition(iX,iY,iZ)); \
} \
HRESULT __stdcall  ENVTIEName::RemovePosition() \
{ \
return (ENVTIECALL(CATIAHybridShapePlaneMean,ENVTIETypeLetter,ENVTIELetter)RemovePosition()); \
} \
HRESULT __stdcall  ENVTIEName::IsARefPlane(CATLONG & oRef) \
{ \
return (ENVTIECALL(CATIAHybridShapePlaneMean,ENVTIETypeLetter,ENVTIELetter)IsARefPlane(oRef)); \
} \
HRESULT __stdcall  ENVTIEName::Compute() \
{ \
return (ENVTIECALL(CATIAHybridShapePlaneMean,ENVTIETypeLetter,ENVTIELetter)Compute()); \
} \
HRESULT __stdcall  ENVTIEName::AppendHybridShape(CATIAHybridShape * iHybridShape) \
{ \
return (ENVTIECALL(CATIAHybridShapePlaneMean,ENVTIETypeLetter,ENVTIELetter)AppendHybridShape(iHybridShape)); \
} \
HRESULT __stdcall  ENVTIEName::get_Thickness(CATIAHybridShape *& oThickness) \
{ \
return (ENVTIECALL(CATIAHybridShapePlaneMean,ENVTIETypeLetter,ENVTIELetter)get_Thickness(oThickness)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Application(CATIAApplication *& oApplication) \
{ \
return (ENVTIECALL(CATIAHybridShapePlaneMean,ENVTIETypeLetter,ENVTIELetter)get_Application(oApplication)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Parent(CATBaseDispatch *& oParent) \
{ \
return (ENVTIECALL(CATIAHybridShapePlaneMean,ENVTIETypeLetter,ENVTIELetter)get_Parent(oParent)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Name(CATBSTR & oNameBSTR) \
{ \
return (ENVTIECALL(CATIAHybridShapePlaneMean,ENVTIETypeLetter,ENVTIELetter)get_Name(oNameBSTR)); \
} \
HRESULT  __stdcall  ENVTIEName::put_Name(const CATBSTR & iNameBSTR) \
{ \
return (ENVTIECALL(CATIAHybridShapePlaneMean,ENVTIETypeLetter,ENVTIELetter)put_Name(iNameBSTR)); \
} \
HRESULT  __stdcall  ENVTIEName::GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj) \
{ \
return (ENVTIECALL(CATIAHybridShapePlaneMean,ENVTIETypeLetter,ENVTIELetter)GetItem(IDName,RealObj)); \
} \


/* Name of the TIE class */
#define class_TIE_CATIAHybridShapePlaneMean(classe)    TIECATIAHybridShapePlaneMean##classe


/* Common methods inside a TIE */
#define common_TIE_CATIAHybridShapePlaneMean(classe) \
 \
 \
/* Static initialization */ \
CATDefineCommonTIEMembers(CATIAHybridShapePlaneMean, classe) \
 \
 \
CATImplementTIEMethods(CATIAHybridShapePlaneMean, classe) \
CATImplementIUnknownMethodsForCATBaseUnknownTIE(CATIAHybridShapePlaneMean, classe, 2) \
CATImplementIDispatchMethodsForCATBaseUnknownTIE(CATIAHybridShapePlaneMean, classe) \
CATImplementCATBaseUnknownMethodsForTIE(CATIAHybridShapePlaneMean, classe) \
 \
HRESULT __stdcall  TIECATIAHybridShapePlaneMean##classe::AddPoint(CATIAReference * iPassingPoint) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,1,&_Trac2,&iPassingPoint); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->AddPoint(iPassingPoint); \
   ExitAfterCall(this,1,_Trac2,&_ret_arg,&iPassingPoint); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapePlaneMean##classe::GetPoint(CATLONG iRank, CATIAReference *& oPassingPoint) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,2,&_Trac2,&iRank,&oPassingPoint); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetPoint(iRank,oPassingPoint); \
   ExitAfterCall(this,2,_Trac2,&_ret_arg,&iRank,&oPassingPoint); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapePlaneMean##classe::RemoveElement(CATLONG iRank) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,3,&_Trac2,&iRank); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->RemoveElement(iRank); \
   ExitAfterCall(this,3,_Trac2,&_ret_arg,&iRank); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapePlaneMean##classe::GetSize(CATLONG & oSize) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,4,&_Trac2,&oSize); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetSize(oSize); \
   ExitAfterCall(this,4,_Trac2,&_ret_arg,&oSize); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapePlaneMean##classe::GetPos(CATIAReference * iPoint, CATLONG & oPos) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,5,&_Trac2,&iPoint,&oPos); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetPos(iPoint,oPos); \
   ExitAfterCall(this,5,_Trac2,&_ret_arg,&iPoint,&oPos); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapePlaneMean##classe::RemoveAll() \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,6,&_Trac2); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->RemoveAll(); \
   ExitAfterCall(this,6,_Trac2,&_ret_arg); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapePlaneMean##classe::ReplacePointAtPosition(CATIAReference * iPoint, CATLONG iPos) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,7,&_Trac2,&iPoint,&iPos); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->ReplacePointAtPosition(iPoint,iPos); \
   ExitAfterCall(this,7,_Trac2,&_ret_arg,&iPoint,&iPos); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapePlaneMean##classe::GetOrigin(CATSafeArrayVariant & oOrigin) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,8,&_Trac2,&oOrigin); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetOrigin(oOrigin); \
   ExitAfterCall(this,8,_Trac2,&_ret_arg,&oOrigin); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapePlaneMean##classe::GetFirstAxis(CATSafeArrayVariant & oFirstAxis) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,9,&_Trac2,&oFirstAxis); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetFirstAxis(oFirstAxis); \
   ExitAfterCall(this,9,_Trac2,&_ret_arg,&oFirstAxis); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapePlaneMean##classe::GetSecondAxis(CATSafeArrayVariant & oSecondAxis) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,10,&_Trac2,&oSecondAxis); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetSecondAxis(oSecondAxis); \
   ExitAfterCall(this,10,_Trac2,&_ret_arg,&oSecondAxis); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapePlaneMean##classe::PutOrigin(const CATSafeArrayVariant & iOrigin) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,11,&_Trac2,&iOrigin); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->PutOrigin(iOrigin); \
   ExitAfterCall(this,11,_Trac2,&_ret_arg,&iOrigin); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapePlaneMean##classe::PutFirstAxis(const CATSafeArrayVariant & iFirstAxis) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,12,&_Trac2,&iFirstAxis); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->PutFirstAxis(iFirstAxis); \
   ExitAfterCall(this,12,_Trac2,&_ret_arg,&iFirstAxis); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapePlaneMean##classe::PutSecondAxis(const CATSafeArrayVariant & iSecondAxis) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,13,&_Trac2,&iSecondAxis); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->PutSecondAxis(iSecondAxis); \
   ExitAfterCall(this,13,_Trac2,&_ret_arg,&iSecondAxis); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapePlaneMean##classe::GetPosition(double & oX, double & oY, double & oZ) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,14,&_Trac2,&oX,&oY,&oZ); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetPosition(oX,oY,oZ); \
   ExitAfterCall(this,14,_Trac2,&_ret_arg,&oX,&oY,&oZ); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapePlaneMean##classe::SetPosition(double iX, double iY, double iZ) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,15,&_Trac2,&iX,&iY,&iZ); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetPosition(iX,iY,iZ); \
   ExitAfterCall(this,15,_Trac2,&_ret_arg,&iX,&iY,&iZ); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapePlaneMean##classe::RemovePosition() \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,16,&_Trac2); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->RemovePosition(); \
   ExitAfterCall(this,16,_Trac2,&_ret_arg); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapePlaneMean##classe::IsARefPlane(CATLONG & oRef) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,17,&_Trac2,&oRef); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->IsARefPlane(oRef); \
   ExitAfterCall(this,17,_Trac2,&_ret_arg,&oRef); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapePlaneMean##classe::Compute() \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,18,&_Trac2); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->Compute(); \
   ExitAfterCall(this,18,_Trac2,&_ret_arg); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapePlaneMean##classe::AppendHybridShape(CATIAHybridShape * iHybridShape) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,19,&_Trac2,&iHybridShape); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->AppendHybridShape(iHybridShape); \
   ExitAfterCall(this,19,_Trac2,&_ret_arg,&iHybridShape); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapePlaneMean##classe::get_Thickness(CATIAHybridShape *& oThickness) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,20,&_Trac2,&oThickness); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Thickness(oThickness); \
   ExitAfterCall(this,20,_Trac2,&_ret_arg,&oThickness); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAHybridShapePlaneMean##classe::get_Application(CATIAApplication *& oApplication) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,21,&_Trac2,&oApplication); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Application(oApplication); \
   ExitAfterCall(this,21,_Trac2,&_ret_arg,&oApplication); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAHybridShapePlaneMean##classe::get_Parent(CATBaseDispatch *& oParent) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,22,&_Trac2,&oParent); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Parent(oParent); \
   ExitAfterCall(this,22,_Trac2,&_ret_arg,&oParent); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAHybridShapePlaneMean##classe::get_Name(CATBSTR & oNameBSTR) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,23,&_Trac2,&oNameBSTR); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Name(oNameBSTR); \
   ExitAfterCall(this,23,_Trac2,&_ret_arg,&oNameBSTR); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAHybridShapePlaneMean##classe::put_Name(const CATBSTR & iNameBSTR) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,24,&_Trac2,&iNameBSTR); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_Name(iNameBSTR); \
   ExitAfterCall(this,24,_Trac2,&_ret_arg,&iNameBSTR); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAHybridShapePlaneMean##classe::GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,25,&_Trac2,&IDName,&RealObj); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetItem(IDName,RealObj); \
   ExitAfterCall(this,25,_Trac2,&_ret_arg,&IDName,&RealObj); \
   return(_ret_arg); \
} \



/* Macro used to link an implementation with an interface */
#define TIE_CATIAHybridShapePlaneMean(classe) \
 \
 \
declare_TIE_CATIAHybridShapePlaneMean(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIAHybridShapePlaneMean##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIAHybridShapePlaneMean,"CATIAHybridShapePlaneMean",CATIAHybridShapePlaneMean::MetaObject(),classe::MetaObject(),TIE); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIAHybridShapePlaneMean(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIECreation(CATIAHybridShapePlaneMean, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIAHybridShapePlaneMean##classe(classe::MetaObject(),CATIAHybridShapePlaneMean::MetaObject(),(void *)CreateTIECATIAHybridShapePlaneMean##classe)



/* Macro used to link an implementation with an interface */
/* This TIE is chained on the implementation object */
#define TIEchain_CATIAHybridShapePlaneMean(classe) \
 \
 \
declare_TIE_CATIAHybridShapePlaneMean(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIAHybridShapePlaneMean##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIAHybridShapePlaneMean,"CATIAHybridShapePlaneMean",CATIAHybridShapePlaneMean::MetaObject(),classe::MetaObject(),TIEchain); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIAHybridShapePlaneMean(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIEchainCreation(CATIAHybridShapePlaneMean, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIAHybridShapePlaneMean##classe(classe::MetaObject(),CATIAHybridShapePlaneMean::MetaObject(),(void *)CreateTIECATIAHybridShapePlaneMean##classe)


/* Macro to switch between BOA and TIE at build time */ 
#ifdef CATSYS_BOA_IS_TIE
#define BOA_CATIAHybridShapePlaneMean(classe) TIE_CATIAHybridShapePlaneMean(classe)
#else
#define BOA_CATIAHybridShapePlaneMean(classe) CATImplementBOA(CATIAHybridShapePlaneMean, classe)
#endif

#endif
