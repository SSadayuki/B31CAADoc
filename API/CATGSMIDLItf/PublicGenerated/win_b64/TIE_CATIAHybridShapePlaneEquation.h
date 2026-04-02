#ifndef __TIE_CATIAHybridShapePlaneEquation
#define __TIE_CATIAHybridShapePlaneEquation

#include <string.h>
#include "CATBaseUnknown.h"
#include "CATMetaClass.h"
#include "CATMacForTie.h"
#include "CATExitJournal.h"
#include "CATIAHybridShapePlaneEquation.h"
#include "JS0DSPA.h"


#ifdef _WINDOWS_SOURCE
#define Exported __declspec(dllexport)
#define Imported __declspec(dllimport)
#else
#define Exported 
#define Imported 
#endif


/* To link an implementation with the interface CATIAHybridShapePlaneEquation */
#define declare_TIE_CATIAHybridShapePlaneEquation(classe) \
 \
 \
class TIECATIAHybridShapePlaneEquation##classe : public CATIAHybridShapePlaneEquation \
{ \
   private: \
      CATDeclareCommonTIEMembers \
   public: \
      CATDeclareTIEMethods(CATIAHybridShapePlaneEquation, classe) \
      CATDeclareIUnknownMethodsForCATBaseUnknownTIE \
      CATDeclareIDispatchMethodsForCATBaseUnknownTIE \
      CATDeclareCATBaseUnknownMethodsForTIE \
      virtual HRESULT __stdcall get_A(CATIARealParam *& oA); \
      virtual HRESULT __stdcall get_B(CATIARealParam *& oB); \
      virtual HRESULT __stdcall get_C(CATIARealParam *& oC); \
      virtual HRESULT __stdcall get_D(CATIALength *& oD); \
      virtual HRESULT __stdcall GetReferencePoint(CATIAReference *& oReferencePoint); \
      virtual HRESULT __stdcall SetReferencePoint(CATIAReference * iReferencePoint); \
      virtual HRESULT __stdcall get_RefAxisSystem(CATIAReference *& oRefAxis); \
      virtual HRESULT __stdcall put_RefAxisSystem(CATIAReference * iRefAxis); \
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



#define ENVTIEdeclare_CATIAHybridShapePlaneEquation(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
virtual HRESULT __stdcall get_A(CATIARealParam *& oA); \
virtual HRESULT __stdcall get_B(CATIARealParam *& oB); \
virtual HRESULT __stdcall get_C(CATIARealParam *& oC); \
virtual HRESULT __stdcall get_D(CATIALength *& oD); \
virtual HRESULT __stdcall GetReferencePoint(CATIAReference *& oReferencePoint); \
virtual HRESULT __stdcall SetReferencePoint(CATIAReference * iReferencePoint); \
virtual HRESULT __stdcall get_RefAxisSystem(CATIAReference *& oRefAxis); \
virtual HRESULT __stdcall put_RefAxisSystem(CATIAReference * iRefAxis); \
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


#define ENVTIEdefine_CATIAHybridShapePlaneEquation(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
HRESULT __stdcall  ENVTIEName::get_A(CATIARealParam *& oA) \
{ \
return (ENVTIECALL(CATIAHybridShapePlaneEquation,ENVTIETypeLetter,ENVTIELetter)get_A(oA)); \
} \
HRESULT __stdcall  ENVTIEName::get_B(CATIARealParam *& oB) \
{ \
return (ENVTIECALL(CATIAHybridShapePlaneEquation,ENVTIETypeLetter,ENVTIELetter)get_B(oB)); \
} \
HRESULT __stdcall  ENVTIEName::get_C(CATIARealParam *& oC) \
{ \
return (ENVTIECALL(CATIAHybridShapePlaneEquation,ENVTIETypeLetter,ENVTIELetter)get_C(oC)); \
} \
HRESULT __stdcall  ENVTIEName::get_D(CATIALength *& oD) \
{ \
return (ENVTIECALL(CATIAHybridShapePlaneEquation,ENVTIETypeLetter,ENVTIELetter)get_D(oD)); \
} \
HRESULT __stdcall  ENVTIEName::GetReferencePoint(CATIAReference *& oReferencePoint) \
{ \
return (ENVTIECALL(CATIAHybridShapePlaneEquation,ENVTIETypeLetter,ENVTIELetter)GetReferencePoint(oReferencePoint)); \
} \
HRESULT __stdcall  ENVTIEName::SetReferencePoint(CATIAReference * iReferencePoint) \
{ \
return (ENVTIECALL(CATIAHybridShapePlaneEquation,ENVTIETypeLetter,ENVTIELetter)SetReferencePoint(iReferencePoint)); \
} \
HRESULT __stdcall  ENVTIEName::get_RefAxisSystem(CATIAReference *& oRefAxis) \
{ \
return (ENVTIECALL(CATIAHybridShapePlaneEquation,ENVTIETypeLetter,ENVTIELetter)get_RefAxisSystem(oRefAxis)); \
} \
HRESULT __stdcall  ENVTIEName::put_RefAxisSystem(CATIAReference * iRefAxis) \
{ \
return (ENVTIECALL(CATIAHybridShapePlaneEquation,ENVTIETypeLetter,ENVTIELetter)put_RefAxisSystem(iRefAxis)); \
} \
HRESULT __stdcall  ENVTIEName::GetOrigin(CATSafeArrayVariant & oOrigin) \
{ \
return (ENVTIECALL(CATIAHybridShapePlaneEquation,ENVTIETypeLetter,ENVTIELetter)GetOrigin(oOrigin)); \
} \
HRESULT __stdcall  ENVTIEName::GetFirstAxis(CATSafeArrayVariant & oFirstAxis) \
{ \
return (ENVTIECALL(CATIAHybridShapePlaneEquation,ENVTIETypeLetter,ENVTIELetter)GetFirstAxis(oFirstAxis)); \
} \
HRESULT __stdcall  ENVTIEName::GetSecondAxis(CATSafeArrayVariant & oSecondAxis) \
{ \
return (ENVTIECALL(CATIAHybridShapePlaneEquation,ENVTIETypeLetter,ENVTIELetter)GetSecondAxis(oSecondAxis)); \
} \
HRESULT __stdcall  ENVTIEName::PutOrigin(const CATSafeArrayVariant & iOrigin) \
{ \
return (ENVTIECALL(CATIAHybridShapePlaneEquation,ENVTIETypeLetter,ENVTIELetter)PutOrigin(iOrigin)); \
} \
HRESULT __stdcall  ENVTIEName::PutFirstAxis(const CATSafeArrayVariant & iFirstAxis) \
{ \
return (ENVTIECALL(CATIAHybridShapePlaneEquation,ENVTIETypeLetter,ENVTIELetter)PutFirstAxis(iFirstAxis)); \
} \
HRESULT __stdcall  ENVTIEName::PutSecondAxis(const CATSafeArrayVariant & iSecondAxis) \
{ \
return (ENVTIECALL(CATIAHybridShapePlaneEquation,ENVTIETypeLetter,ENVTIELetter)PutSecondAxis(iSecondAxis)); \
} \
HRESULT __stdcall  ENVTIEName::GetPosition(double & oX, double & oY, double & oZ) \
{ \
return (ENVTIECALL(CATIAHybridShapePlaneEquation,ENVTIETypeLetter,ENVTIELetter)GetPosition(oX,oY,oZ)); \
} \
HRESULT __stdcall  ENVTIEName::SetPosition(double iX, double iY, double iZ) \
{ \
return (ENVTIECALL(CATIAHybridShapePlaneEquation,ENVTIETypeLetter,ENVTIELetter)SetPosition(iX,iY,iZ)); \
} \
HRESULT __stdcall  ENVTIEName::RemovePosition() \
{ \
return (ENVTIECALL(CATIAHybridShapePlaneEquation,ENVTIETypeLetter,ENVTIELetter)RemovePosition()); \
} \
HRESULT __stdcall  ENVTIEName::IsARefPlane(CATLONG & oRef) \
{ \
return (ENVTIECALL(CATIAHybridShapePlaneEquation,ENVTIETypeLetter,ENVTIELetter)IsARefPlane(oRef)); \
} \
HRESULT __stdcall  ENVTIEName::Compute() \
{ \
return (ENVTIECALL(CATIAHybridShapePlaneEquation,ENVTIETypeLetter,ENVTIELetter)Compute()); \
} \
HRESULT __stdcall  ENVTIEName::AppendHybridShape(CATIAHybridShape * iHybridShape) \
{ \
return (ENVTIECALL(CATIAHybridShapePlaneEquation,ENVTIETypeLetter,ENVTIELetter)AppendHybridShape(iHybridShape)); \
} \
HRESULT __stdcall  ENVTIEName::get_Thickness(CATIAHybridShape *& oThickness) \
{ \
return (ENVTIECALL(CATIAHybridShapePlaneEquation,ENVTIETypeLetter,ENVTIELetter)get_Thickness(oThickness)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Application(CATIAApplication *& oApplication) \
{ \
return (ENVTIECALL(CATIAHybridShapePlaneEquation,ENVTIETypeLetter,ENVTIELetter)get_Application(oApplication)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Parent(CATBaseDispatch *& oParent) \
{ \
return (ENVTIECALL(CATIAHybridShapePlaneEquation,ENVTIETypeLetter,ENVTIELetter)get_Parent(oParent)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Name(CATBSTR & oNameBSTR) \
{ \
return (ENVTIECALL(CATIAHybridShapePlaneEquation,ENVTIETypeLetter,ENVTIELetter)get_Name(oNameBSTR)); \
} \
HRESULT  __stdcall  ENVTIEName::put_Name(const CATBSTR & iNameBSTR) \
{ \
return (ENVTIECALL(CATIAHybridShapePlaneEquation,ENVTIETypeLetter,ENVTIELetter)put_Name(iNameBSTR)); \
} \
HRESULT  __stdcall  ENVTIEName::GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj) \
{ \
return (ENVTIECALL(CATIAHybridShapePlaneEquation,ENVTIETypeLetter,ENVTIELetter)GetItem(IDName,RealObj)); \
} \


/* Name of the TIE class */
#define class_TIE_CATIAHybridShapePlaneEquation(classe)    TIECATIAHybridShapePlaneEquation##classe


/* Common methods inside a TIE */
#define common_TIE_CATIAHybridShapePlaneEquation(classe) \
 \
 \
/* Static initialization */ \
CATDefineCommonTIEMembers(CATIAHybridShapePlaneEquation, classe) \
 \
 \
CATImplementTIEMethods(CATIAHybridShapePlaneEquation, classe) \
CATImplementIUnknownMethodsForCATBaseUnknownTIE(CATIAHybridShapePlaneEquation, classe, 2) \
CATImplementIDispatchMethodsForCATBaseUnknownTIE(CATIAHybridShapePlaneEquation, classe) \
CATImplementCATBaseUnknownMethodsForTIE(CATIAHybridShapePlaneEquation, classe) \
 \
HRESULT __stdcall  TIECATIAHybridShapePlaneEquation##classe::get_A(CATIARealParam *& oA) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,1,&_Trac2,&oA); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_A(oA); \
   ExitAfterCall(this,1,_Trac2,&_ret_arg,&oA); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapePlaneEquation##classe::get_B(CATIARealParam *& oB) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,2,&_Trac2,&oB); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_B(oB); \
   ExitAfterCall(this,2,_Trac2,&_ret_arg,&oB); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapePlaneEquation##classe::get_C(CATIARealParam *& oC) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,3,&_Trac2,&oC); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_C(oC); \
   ExitAfterCall(this,3,_Trac2,&_ret_arg,&oC); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapePlaneEquation##classe::get_D(CATIALength *& oD) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,4,&_Trac2,&oD); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_D(oD); \
   ExitAfterCall(this,4,_Trac2,&_ret_arg,&oD); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapePlaneEquation##classe::GetReferencePoint(CATIAReference *& oReferencePoint) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,5,&_Trac2,&oReferencePoint); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetReferencePoint(oReferencePoint); \
   ExitAfterCall(this,5,_Trac2,&_ret_arg,&oReferencePoint); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapePlaneEquation##classe::SetReferencePoint(CATIAReference * iReferencePoint) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,6,&_Trac2,&iReferencePoint); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetReferencePoint(iReferencePoint); \
   ExitAfterCall(this,6,_Trac2,&_ret_arg,&iReferencePoint); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapePlaneEquation##classe::get_RefAxisSystem(CATIAReference *& oRefAxis) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,7,&_Trac2,&oRefAxis); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_RefAxisSystem(oRefAxis); \
   ExitAfterCall(this,7,_Trac2,&_ret_arg,&oRefAxis); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapePlaneEquation##classe::put_RefAxisSystem(CATIAReference * iRefAxis) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,8,&_Trac2,&iRefAxis); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_RefAxisSystem(iRefAxis); \
   ExitAfterCall(this,8,_Trac2,&_ret_arg,&iRefAxis); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapePlaneEquation##classe::GetOrigin(CATSafeArrayVariant & oOrigin) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,9,&_Trac2,&oOrigin); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetOrigin(oOrigin); \
   ExitAfterCall(this,9,_Trac2,&_ret_arg,&oOrigin); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapePlaneEquation##classe::GetFirstAxis(CATSafeArrayVariant & oFirstAxis) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,10,&_Trac2,&oFirstAxis); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetFirstAxis(oFirstAxis); \
   ExitAfterCall(this,10,_Trac2,&_ret_arg,&oFirstAxis); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapePlaneEquation##classe::GetSecondAxis(CATSafeArrayVariant & oSecondAxis) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,11,&_Trac2,&oSecondAxis); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetSecondAxis(oSecondAxis); \
   ExitAfterCall(this,11,_Trac2,&_ret_arg,&oSecondAxis); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapePlaneEquation##classe::PutOrigin(const CATSafeArrayVariant & iOrigin) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,12,&_Trac2,&iOrigin); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->PutOrigin(iOrigin); \
   ExitAfterCall(this,12,_Trac2,&_ret_arg,&iOrigin); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapePlaneEquation##classe::PutFirstAxis(const CATSafeArrayVariant & iFirstAxis) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,13,&_Trac2,&iFirstAxis); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->PutFirstAxis(iFirstAxis); \
   ExitAfterCall(this,13,_Trac2,&_ret_arg,&iFirstAxis); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapePlaneEquation##classe::PutSecondAxis(const CATSafeArrayVariant & iSecondAxis) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,14,&_Trac2,&iSecondAxis); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->PutSecondAxis(iSecondAxis); \
   ExitAfterCall(this,14,_Trac2,&_ret_arg,&iSecondAxis); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapePlaneEquation##classe::GetPosition(double & oX, double & oY, double & oZ) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,15,&_Trac2,&oX,&oY,&oZ); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetPosition(oX,oY,oZ); \
   ExitAfterCall(this,15,_Trac2,&_ret_arg,&oX,&oY,&oZ); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapePlaneEquation##classe::SetPosition(double iX, double iY, double iZ) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,16,&_Trac2,&iX,&iY,&iZ); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetPosition(iX,iY,iZ); \
   ExitAfterCall(this,16,_Trac2,&_ret_arg,&iX,&iY,&iZ); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapePlaneEquation##classe::RemovePosition() \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,17,&_Trac2); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->RemovePosition(); \
   ExitAfterCall(this,17,_Trac2,&_ret_arg); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapePlaneEquation##classe::IsARefPlane(CATLONG & oRef) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,18,&_Trac2,&oRef); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->IsARefPlane(oRef); \
   ExitAfterCall(this,18,_Trac2,&_ret_arg,&oRef); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapePlaneEquation##classe::Compute() \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,19,&_Trac2); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->Compute(); \
   ExitAfterCall(this,19,_Trac2,&_ret_arg); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapePlaneEquation##classe::AppendHybridShape(CATIAHybridShape * iHybridShape) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,20,&_Trac2,&iHybridShape); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->AppendHybridShape(iHybridShape); \
   ExitAfterCall(this,20,_Trac2,&_ret_arg,&iHybridShape); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapePlaneEquation##classe::get_Thickness(CATIAHybridShape *& oThickness) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,21,&_Trac2,&oThickness); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Thickness(oThickness); \
   ExitAfterCall(this,21,_Trac2,&_ret_arg,&oThickness); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAHybridShapePlaneEquation##classe::get_Application(CATIAApplication *& oApplication) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,22,&_Trac2,&oApplication); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Application(oApplication); \
   ExitAfterCall(this,22,_Trac2,&_ret_arg,&oApplication); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAHybridShapePlaneEquation##classe::get_Parent(CATBaseDispatch *& oParent) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,23,&_Trac2,&oParent); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Parent(oParent); \
   ExitAfterCall(this,23,_Trac2,&_ret_arg,&oParent); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAHybridShapePlaneEquation##classe::get_Name(CATBSTR & oNameBSTR) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,24,&_Trac2,&oNameBSTR); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Name(oNameBSTR); \
   ExitAfterCall(this,24,_Trac2,&_ret_arg,&oNameBSTR); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAHybridShapePlaneEquation##classe::put_Name(const CATBSTR & iNameBSTR) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,25,&_Trac2,&iNameBSTR); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_Name(iNameBSTR); \
   ExitAfterCall(this,25,_Trac2,&_ret_arg,&iNameBSTR); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAHybridShapePlaneEquation##classe::GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,26,&_Trac2,&IDName,&RealObj); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetItem(IDName,RealObj); \
   ExitAfterCall(this,26,_Trac2,&_ret_arg,&IDName,&RealObj); \
   return(_ret_arg); \
} \



/* Macro used to link an implementation with an interface */
#define TIE_CATIAHybridShapePlaneEquation(classe) \
 \
 \
declare_TIE_CATIAHybridShapePlaneEquation(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIAHybridShapePlaneEquation##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIAHybridShapePlaneEquation,"CATIAHybridShapePlaneEquation",CATIAHybridShapePlaneEquation::MetaObject(),classe::MetaObject(),TIE); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIAHybridShapePlaneEquation(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIECreation(CATIAHybridShapePlaneEquation, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIAHybridShapePlaneEquation##classe(classe::MetaObject(),CATIAHybridShapePlaneEquation::MetaObject(),(void *)CreateTIECATIAHybridShapePlaneEquation##classe)



/* Macro used to link an implementation with an interface */
/* This TIE is chained on the implementation object */
#define TIEchain_CATIAHybridShapePlaneEquation(classe) \
 \
 \
declare_TIE_CATIAHybridShapePlaneEquation(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIAHybridShapePlaneEquation##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIAHybridShapePlaneEquation,"CATIAHybridShapePlaneEquation",CATIAHybridShapePlaneEquation::MetaObject(),classe::MetaObject(),TIEchain); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIAHybridShapePlaneEquation(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIEchainCreation(CATIAHybridShapePlaneEquation, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIAHybridShapePlaneEquation##classe(classe::MetaObject(),CATIAHybridShapePlaneEquation::MetaObject(),(void *)CreateTIECATIAHybridShapePlaneEquation##classe)


/* Macro to switch between BOA and TIE at build time */ 
#ifdef CATSYS_BOA_IS_TIE
#define BOA_CATIAHybridShapePlaneEquation(classe) TIE_CATIAHybridShapePlaneEquation(classe)
#else
#define BOA_CATIAHybridShapePlaneEquation(classe) CATImplementBOA(CATIAHybridShapePlaneEquation, classe)
#endif

#endif
