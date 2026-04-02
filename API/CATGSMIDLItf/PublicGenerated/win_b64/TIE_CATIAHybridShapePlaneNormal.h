#ifndef __TIE_CATIAHybridShapePlaneNormal
#define __TIE_CATIAHybridShapePlaneNormal

#include <string.h>
#include "CATBaseUnknown.h"
#include "CATMetaClass.h"
#include "CATMacForTie.h"
#include "CATExitJournal.h"
#include "CATIAHybridShapePlaneNormal.h"
#include "JS0DSPA.h"


#ifdef _WINDOWS_SOURCE
#define Exported __declspec(dllexport)
#define Imported __declspec(dllimport)
#else
#define Exported 
#define Imported 
#endif


/* To link an implementation with the interface CATIAHybridShapePlaneNormal */
#define declare_TIE_CATIAHybridShapePlaneNormal(classe) \
 \
 \
class TIECATIAHybridShapePlaneNormal##classe : public CATIAHybridShapePlaneNormal \
{ \
   private: \
      CATDeclareCommonTIEMembers \
   public: \
      CATDeclareTIEMethods(CATIAHybridShapePlaneNormal, classe) \
      CATDeclareIUnknownMethodsForCATBaseUnknownTIE \
      CATDeclareIDispatchMethodsForCATBaseUnknownTIE \
      CATDeclareCATBaseUnknownMethodsForTIE \
      virtual HRESULT __stdcall get_Curve(CATIAReference *& oCurve); \
      virtual HRESULT __stdcall put_Curve(CATIAReference * iCurve); \
      virtual HRESULT __stdcall get_Point(CATIAReference *& oPoint); \
      virtual HRESULT __stdcall put_Point(CATIAReference * iPoint); \
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



#define ENVTIEdeclare_CATIAHybridShapePlaneNormal(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
virtual HRESULT __stdcall get_Curve(CATIAReference *& oCurve); \
virtual HRESULT __stdcall put_Curve(CATIAReference * iCurve); \
virtual HRESULT __stdcall get_Point(CATIAReference *& oPoint); \
virtual HRESULT __stdcall put_Point(CATIAReference * iPoint); \
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


#define ENVTIEdefine_CATIAHybridShapePlaneNormal(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
HRESULT __stdcall  ENVTIEName::get_Curve(CATIAReference *& oCurve) \
{ \
return (ENVTIECALL(CATIAHybridShapePlaneNormal,ENVTIETypeLetter,ENVTIELetter)get_Curve(oCurve)); \
} \
HRESULT __stdcall  ENVTIEName::put_Curve(CATIAReference * iCurve) \
{ \
return (ENVTIECALL(CATIAHybridShapePlaneNormal,ENVTIETypeLetter,ENVTIELetter)put_Curve(iCurve)); \
} \
HRESULT __stdcall  ENVTIEName::get_Point(CATIAReference *& oPoint) \
{ \
return (ENVTIECALL(CATIAHybridShapePlaneNormal,ENVTIETypeLetter,ENVTIELetter)get_Point(oPoint)); \
} \
HRESULT __stdcall  ENVTIEName::put_Point(CATIAReference * iPoint) \
{ \
return (ENVTIECALL(CATIAHybridShapePlaneNormal,ENVTIETypeLetter,ENVTIELetter)put_Point(iPoint)); \
} \
HRESULT __stdcall  ENVTIEName::GetOrigin(CATSafeArrayVariant & oOrigin) \
{ \
return (ENVTIECALL(CATIAHybridShapePlaneNormal,ENVTIETypeLetter,ENVTIELetter)GetOrigin(oOrigin)); \
} \
HRESULT __stdcall  ENVTIEName::GetFirstAxis(CATSafeArrayVariant & oFirstAxis) \
{ \
return (ENVTIECALL(CATIAHybridShapePlaneNormal,ENVTIETypeLetter,ENVTIELetter)GetFirstAxis(oFirstAxis)); \
} \
HRESULT __stdcall  ENVTIEName::GetSecondAxis(CATSafeArrayVariant & oSecondAxis) \
{ \
return (ENVTIECALL(CATIAHybridShapePlaneNormal,ENVTIETypeLetter,ENVTIELetter)GetSecondAxis(oSecondAxis)); \
} \
HRESULT __stdcall  ENVTIEName::PutOrigin(const CATSafeArrayVariant & iOrigin) \
{ \
return (ENVTIECALL(CATIAHybridShapePlaneNormal,ENVTIETypeLetter,ENVTIELetter)PutOrigin(iOrigin)); \
} \
HRESULT __stdcall  ENVTIEName::PutFirstAxis(const CATSafeArrayVariant & iFirstAxis) \
{ \
return (ENVTIECALL(CATIAHybridShapePlaneNormal,ENVTIETypeLetter,ENVTIELetter)PutFirstAxis(iFirstAxis)); \
} \
HRESULT __stdcall  ENVTIEName::PutSecondAxis(const CATSafeArrayVariant & iSecondAxis) \
{ \
return (ENVTIECALL(CATIAHybridShapePlaneNormal,ENVTIETypeLetter,ENVTIELetter)PutSecondAxis(iSecondAxis)); \
} \
HRESULT __stdcall  ENVTIEName::GetPosition(double & oX, double & oY, double & oZ) \
{ \
return (ENVTIECALL(CATIAHybridShapePlaneNormal,ENVTIETypeLetter,ENVTIELetter)GetPosition(oX,oY,oZ)); \
} \
HRESULT __stdcall  ENVTIEName::SetPosition(double iX, double iY, double iZ) \
{ \
return (ENVTIECALL(CATIAHybridShapePlaneNormal,ENVTIETypeLetter,ENVTIELetter)SetPosition(iX,iY,iZ)); \
} \
HRESULT __stdcall  ENVTIEName::RemovePosition() \
{ \
return (ENVTIECALL(CATIAHybridShapePlaneNormal,ENVTIETypeLetter,ENVTIELetter)RemovePosition()); \
} \
HRESULT __stdcall  ENVTIEName::IsARefPlane(CATLONG & oRef) \
{ \
return (ENVTIECALL(CATIAHybridShapePlaneNormal,ENVTIETypeLetter,ENVTIELetter)IsARefPlane(oRef)); \
} \
HRESULT __stdcall  ENVTIEName::Compute() \
{ \
return (ENVTIECALL(CATIAHybridShapePlaneNormal,ENVTIETypeLetter,ENVTIELetter)Compute()); \
} \
HRESULT __stdcall  ENVTIEName::AppendHybridShape(CATIAHybridShape * iHybridShape) \
{ \
return (ENVTIECALL(CATIAHybridShapePlaneNormal,ENVTIETypeLetter,ENVTIELetter)AppendHybridShape(iHybridShape)); \
} \
HRESULT __stdcall  ENVTIEName::get_Thickness(CATIAHybridShape *& oThickness) \
{ \
return (ENVTIECALL(CATIAHybridShapePlaneNormal,ENVTIETypeLetter,ENVTIELetter)get_Thickness(oThickness)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Application(CATIAApplication *& oApplication) \
{ \
return (ENVTIECALL(CATIAHybridShapePlaneNormal,ENVTIETypeLetter,ENVTIELetter)get_Application(oApplication)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Parent(CATBaseDispatch *& oParent) \
{ \
return (ENVTIECALL(CATIAHybridShapePlaneNormal,ENVTIETypeLetter,ENVTIELetter)get_Parent(oParent)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Name(CATBSTR & oNameBSTR) \
{ \
return (ENVTIECALL(CATIAHybridShapePlaneNormal,ENVTIETypeLetter,ENVTIELetter)get_Name(oNameBSTR)); \
} \
HRESULT  __stdcall  ENVTIEName::put_Name(const CATBSTR & iNameBSTR) \
{ \
return (ENVTIECALL(CATIAHybridShapePlaneNormal,ENVTIETypeLetter,ENVTIELetter)put_Name(iNameBSTR)); \
} \
HRESULT  __stdcall  ENVTIEName::GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj) \
{ \
return (ENVTIECALL(CATIAHybridShapePlaneNormal,ENVTIETypeLetter,ENVTIELetter)GetItem(IDName,RealObj)); \
} \


/* Name of the TIE class */
#define class_TIE_CATIAHybridShapePlaneNormal(classe)    TIECATIAHybridShapePlaneNormal##classe


/* Common methods inside a TIE */
#define common_TIE_CATIAHybridShapePlaneNormal(classe) \
 \
 \
/* Static initialization */ \
CATDefineCommonTIEMembers(CATIAHybridShapePlaneNormal, classe) \
 \
 \
CATImplementTIEMethods(CATIAHybridShapePlaneNormal, classe) \
CATImplementIUnknownMethodsForCATBaseUnknownTIE(CATIAHybridShapePlaneNormal, classe, 2) \
CATImplementIDispatchMethodsForCATBaseUnknownTIE(CATIAHybridShapePlaneNormal, classe) \
CATImplementCATBaseUnknownMethodsForTIE(CATIAHybridShapePlaneNormal, classe) \
 \
HRESULT __stdcall  TIECATIAHybridShapePlaneNormal##classe::get_Curve(CATIAReference *& oCurve) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,1,&_Trac2,&oCurve); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Curve(oCurve); \
   ExitAfterCall(this,1,_Trac2,&_ret_arg,&oCurve); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapePlaneNormal##classe::put_Curve(CATIAReference * iCurve) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,2,&_Trac2,&iCurve); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_Curve(iCurve); \
   ExitAfterCall(this,2,_Trac2,&_ret_arg,&iCurve); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapePlaneNormal##classe::get_Point(CATIAReference *& oPoint) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,3,&_Trac2,&oPoint); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Point(oPoint); \
   ExitAfterCall(this,3,_Trac2,&_ret_arg,&oPoint); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapePlaneNormal##classe::put_Point(CATIAReference * iPoint) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,4,&_Trac2,&iPoint); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_Point(iPoint); \
   ExitAfterCall(this,4,_Trac2,&_ret_arg,&iPoint); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapePlaneNormal##classe::GetOrigin(CATSafeArrayVariant & oOrigin) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,5,&_Trac2,&oOrigin); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetOrigin(oOrigin); \
   ExitAfterCall(this,5,_Trac2,&_ret_arg,&oOrigin); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapePlaneNormal##classe::GetFirstAxis(CATSafeArrayVariant & oFirstAxis) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,6,&_Trac2,&oFirstAxis); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetFirstAxis(oFirstAxis); \
   ExitAfterCall(this,6,_Trac2,&_ret_arg,&oFirstAxis); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapePlaneNormal##classe::GetSecondAxis(CATSafeArrayVariant & oSecondAxis) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,7,&_Trac2,&oSecondAxis); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetSecondAxis(oSecondAxis); \
   ExitAfterCall(this,7,_Trac2,&_ret_arg,&oSecondAxis); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapePlaneNormal##classe::PutOrigin(const CATSafeArrayVariant & iOrigin) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,8,&_Trac2,&iOrigin); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->PutOrigin(iOrigin); \
   ExitAfterCall(this,8,_Trac2,&_ret_arg,&iOrigin); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapePlaneNormal##classe::PutFirstAxis(const CATSafeArrayVariant & iFirstAxis) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,9,&_Trac2,&iFirstAxis); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->PutFirstAxis(iFirstAxis); \
   ExitAfterCall(this,9,_Trac2,&_ret_arg,&iFirstAxis); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapePlaneNormal##classe::PutSecondAxis(const CATSafeArrayVariant & iSecondAxis) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,10,&_Trac2,&iSecondAxis); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->PutSecondAxis(iSecondAxis); \
   ExitAfterCall(this,10,_Trac2,&_ret_arg,&iSecondAxis); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapePlaneNormal##classe::GetPosition(double & oX, double & oY, double & oZ) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,11,&_Trac2,&oX,&oY,&oZ); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetPosition(oX,oY,oZ); \
   ExitAfterCall(this,11,_Trac2,&_ret_arg,&oX,&oY,&oZ); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapePlaneNormal##classe::SetPosition(double iX, double iY, double iZ) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,12,&_Trac2,&iX,&iY,&iZ); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetPosition(iX,iY,iZ); \
   ExitAfterCall(this,12,_Trac2,&_ret_arg,&iX,&iY,&iZ); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapePlaneNormal##classe::RemovePosition() \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,13,&_Trac2); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->RemovePosition(); \
   ExitAfterCall(this,13,_Trac2,&_ret_arg); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapePlaneNormal##classe::IsARefPlane(CATLONG & oRef) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,14,&_Trac2,&oRef); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->IsARefPlane(oRef); \
   ExitAfterCall(this,14,_Trac2,&_ret_arg,&oRef); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapePlaneNormal##classe::Compute() \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,15,&_Trac2); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->Compute(); \
   ExitAfterCall(this,15,_Trac2,&_ret_arg); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapePlaneNormal##classe::AppendHybridShape(CATIAHybridShape * iHybridShape) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,16,&_Trac2,&iHybridShape); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->AppendHybridShape(iHybridShape); \
   ExitAfterCall(this,16,_Trac2,&_ret_arg,&iHybridShape); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapePlaneNormal##classe::get_Thickness(CATIAHybridShape *& oThickness) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,17,&_Trac2,&oThickness); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Thickness(oThickness); \
   ExitAfterCall(this,17,_Trac2,&_ret_arg,&oThickness); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAHybridShapePlaneNormal##classe::get_Application(CATIAApplication *& oApplication) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,18,&_Trac2,&oApplication); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Application(oApplication); \
   ExitAfterCall(this,18,_Trac2,&_ret_arg,&oApplication); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAHybridShapePlaneNormal##classe::get_Parent(CATBaseDispatch *& oParent) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,19,&_Trac2,&oParent); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Parent(oParent); \
   ExitAfterCall(this,19,_Trac2,&_ret_arg,&oParent); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAHybridShapePlaneNormal##classe::get_Name(CATBSTR & oNameBSTR) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,20,&_Trac2,&oNameBSTR); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Name(oNameBSTR); \
   ExitAfterCall(this,20,_Trac2,&_ret_arg,&oNameBSTR); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAHybridShapePlaneNormal##classe::put_Name(const CATBSTR & iNameBSTR) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,21,&_Trac2,&iNameBSTR); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_Name(iNameBSTR); \
   ExitAfterCall(this,21,_Trac2,&_ret_arg,&iNameBSTR); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAHybridShapePlaneNormal##classe::GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,22,&_Trac2,&IDName,&RealObj); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetItem(IDName,RealObj); \
   ExitAfterCall(this,22,_Trac2,&_ret_arg,&IDName,&RealObj); \
   return(_ret_arg); \
} \



/* Macro used to link an implementation with an interface */
#define TIE_CATIAHybridShapePlaneNormal(classe) \
 \
 \
declare_TIE_CATIAHybridShapePlaneNormal(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIAHybridShapePlaneNormal##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIAHybridShapePlaneNormal,"CATIAHybridShapePlaneNormal",CATIAHybridShapePlaneNormal::MetaObject(),classe::MetaObject(),TIE); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIAHybridShapePlaneNormal(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIECreation(CATIAHybridShapePlaneNormal, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIAHybridShapePlaneNormal##classe(classe::MetaObject(),CATIAHybridShapePlaneNormal::MetaObject(),(void *)CreateTIECATIAHybridShapePlaneNormal##classe)



/* Macro used to link an implementation with an interface */
/* This TIE is chained on the implementation object */
#define TIEchain_CATIAHybridShapePlaneNormal(classe) \
 \
 \
declare_TIE_CATIAHybridShapePlaneNormal(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIAHybridShapePlaneNormal##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIAHybridShapePlaneNormal,"CATIAHybridShapePlaneNormal",CATIAHybridShapePlaneNormal::MetaObject(),classe::MetaObject(),TIEchain); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIAHybridShapePlaneNormal(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIEchainCreation(CATIAHybridShapePlaneNormal, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIAHybridShapePlaneNormal##classe(classe::MetaObject(),CATIAHybridShapePlaneNormal::MetaObject(),(void *)CreateTIECATIAHybridShapePlaneNormal##classe)


/* Macro to switch between BOA and TIE at build time */ 
#ifdef CATSYS_BOA_IS_TIE
#define BOA_CATIAHybridShapePlaneNormal(classe) TIE_CATIAHybridShapePlaneNormal(classe)
#else
#define BOA_CATIAHybridShapePlaneNormal(classe) CATImplementBOA(CATIAHybridShapePlaneNormal, classe)
#endif

#endif
