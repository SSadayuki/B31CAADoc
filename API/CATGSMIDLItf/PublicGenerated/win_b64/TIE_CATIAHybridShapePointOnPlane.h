#ifndef __TIE_CATIAHybridShapePointOnPlane
#define __TIE_CATIAHybridShapePointOnPlane

#include <string.h>
#include "CATBaseUnknown.h"
#include "CATMetaClass.h"
#include "CATMacForTie.h"
#include "CATExitJournal.h"
#include "CATIAHybridShapePointOnPlane.h"
#include "JS0DSPA.h"


#ifdef _WINDOWS_SOURCE
#define Exported __declspec(dllexport)
#define Imported __declspec(dllimport)
#else
#define Exported 
#define Imported 
#endif


/* To link an implementation with the interface CATIAHybridShapePointOnPlane */
#define declare_TIE_CATIAHybridShapePointOnPlane(classe) \
 \
 \
class TIECATIAHybridShapePointOnPlane##classe : public CATIAHybridShapePointOnPlane \
{ \
   private: \
      CATDeclareCommonTIEMembers \
   public: \
      CATDeclareTIEMethods(CATIAHybridShapePointOnPlane, classe) \
      CATDeclareIUnknownMethodsForCATBaseUnknownTIE \
      CATDeclareIDispatchMethodsForCATBaseUnknownTIE \
      CATDeclareCATBaseUnknownMethodsForTIE \
      virtual HRESULT __stdcall get_Plane(CATIAReference *& oPlane); \
      virtual HRESULT __stdcall put_Plane(CATIAReference * iPlane); \
      virtual HRESULT __stdcall get_Point(CATIAReference *& oRefPoint); \
      virtual HRESULT __stdcall put_Point(CATIAReference * iRefPoint); \
      virtual HRESULT __stdcall get_XOffset(CATIALength *& oX); \
      virtual HRESULT __stdcall get_YOffset(CATIALength *& oY); \
      virtual HRESULT __stdcall get_FirstDirection(CATIAHybridShapeDirection *& oDir); \
      virtual HRESULT __stdcall put_FirstDirection(CATIAHybridShapeDirection * iDir); \
      virtual HRESULT __stdcall get_ProjectionSurface(CATIAReference *& oProjSur); \
      virtual HRESULT __stdcall put_ProjectionSurface(CATIAReference * iProjSur); \
      virtual HRESULT __stdcall GetSecondDirection(double & oDirX, double & oDirY, double & oDirZ); \
      virtual HRESULT __stdcall SetSecondDirection(double iDirX, double iDirY, double iDirZ); \
      virtual HRESULT __stdcall GetCoordinates(CATSafeArrayVariant & oCoordinates); \
      virtual HRESULT __stdcall SetCoordinates(const CATSafeArrayVariant & oCoordinates); \
      virtual HRESULT __stdcall Compute(); \
      virtual HRESULT __stdcall AppendHybridShape(CATIAHybridShape * iHybridShape); \
      virtual HRESULT __stdcall get_Thickness(CATIAHybridShape *& oThickness); \
      virtual HRESULT  __stdcall get_Application(CATIAApplication *& oApplication); \
      virtual HRESULT  __stdcall get_Parent(CATBaseDispatch *& oParent); \
      virtual HRESULT  __stdcall get_Name(CATBSTR & oNameBSTR); \
      virtual HRESULT  __stdcall put_Name(const CATBSTR & iNameBSTR); \
      virtual HRESULT  __stdcall GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj); \
};



#define ENVTIEdeclare_CATIAHybridShapePointOnPlane(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
virtual HRESULT __stdcall get_Plane(CATIAReference *& oPlane); \
virtual HRESULT __stdcall put_Plane(CATIAReference * iPlane); \
virtual HRESULT __stdcall get_Point(CATIAReference *& oRefPoint); \
virtual HRESULT __stdcall put_Point(CATIAReference * iRefPoint); \
virtual HRESULT __stdcall get_XOffset(CATIALength *& oX); \
virtual HRESULT __stdcall get_YOffset(CATIALength *& oY); \
virtual HRESULT __stdcall get_FirstDirection(CATIAHybridShapeDirection *& oDir); \
virtual HRESULT __stdcall put_FirstDirection(CATIAHybridShapeDirection * iDir); \
virtual HRESULT __stdcall get_ProjectionSurface(CATIAReference *& oProjSur); \
virtual HRESULT __stdcall put_ProjectionSurface(CATIAReference * iProjSur); \
virtual HRESULT __stdcall GetSecondDirection(double & oDirX, double & oDirY, double & oDirZ); \
virtual HRESULT __stdcall SetSecondDirection(double iDirX, double iDirY, double iDirZ); \
virtual HRESULT __stdcall GetCoordinates(CATSafeArrayVariant & oCoordinates); \
virtual HRESULT __stdcall SetCoordinates(const CATSafeArrayVariant & oCoordinates); \
virtual HRESULT __stdcall Compute(); \
virtual HRESULT __stdcall AppendHybridShape(CATIAHybridShape * iHybridShape); \
virtual HRESULT __stdcall get_Thickness(CATIAHybridShape *& oThickness); \
virtual HRESULT  __stdcall get_Application(CATIAApplication *& oApplication); \
virtual HRESULT  __stdcall get_Parent(CATBaseDispatch *& oParent); \
virtual HRESULT  __stdcall get_Name(CATBSTR & oNameBSTR); \
virtual HRESULT  __stdcall put_Name(const CATBSTR & iNameBSTR); \
virtual HRESULT  __stdcall GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj); \


#define ENVTIEdefine_CATIAHybridShapePointOnPlane(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
HRESULT __stdcall  ENVTIEName::get_Plane(CATIAReference *& oPlane) \
{ \
return (ENVTIECALL(CATIAHybridShapePointOnPlane,ENVTIETypeLetter,ENVTIELetter)get_Plane(oPlane)); \
} \
HRESULT __stdcall  ENVTIEName::put_Plane(CATIAReference * iPlane) \
{ \
return (ENVTIECALL(CATIAHybridShapePointOnPlane,ENVTIETypeLetter,ENVTIELetter)put_Plane(iPlane)); \
} \
HRESULT __stdcall  ENVTIEName::get_Point(CATIAReference *& oRefPoint) \
{ \
return (ENVTIECALL(CATIAHybridShapePointOnPlane,ENVTIETypeLetter,ENVTIELetter)get_Point(oRefPoint)); \
} \
HRESULT __stdcall  ENVTIEName::put_Point(CATIAReference * iRefPoint) \
{ \
return (ENVTIECALL(CATIAHybridShapePointOnPlane,ENVTIETypeLetter,ENVTIELetter)put_Point(iRefPoint)); \
} \
HRESULT __stdcall  ENVTIEName::get_XOffset(CATIALength *& oX) \
{ \
return (ENVTIECALL(CATIAHybridShapePointOnPlane,ENVTIETypeLetter,ENVTIELetter)get_XOffset(oX)); \
} \
HRESULT __stdcall  ENVTIEName::get_YOffset(CATIALength *& oY) \
{ \
return (ENVTIECALL(CATIAHybridShapePointOnPlane,ENVTIETypeLetter,ENVTIELetter)get_YOffset(oY)); \
} \
HRESULT __stdcall  ENVTIEName::get_FirstDirection(CATIAHybridShapeDirection *& oDir) \
{ \
return (ENVTIECALL(CATIAHybridShapePointOnPlane,ENVTIETypeLetter,ENVTIELetter)get_FirstDirection(oDir)); \
} \
HRESULT __stdcall  ENVTIEName::put_FirstDirection(CATIAHybridShapeDirection * iDir) \
{ \
return (ENVTIECALL(CATIAHybridShapePointOnPlane,ENVTIETypeLetter,ENVTIELetter)put_FirstDirection(iDir)); \
} \
HRESULT __stdcall  ENVTIEName::get_ProjectionSurface(CATIAReference *& oProjSur) \
{ \
return (ENVTIECALL(CATIAHybridShapePointOnPlane,ENVTIETypeLetter,ENVTIELetter)get_ProjectionSurface(oProjSur)); \
} \
HRESULT __stdcall  ENVTIEName::put_ProjectionSurface(CATIAReference * iProjSur) \
{ \
return (ENVTIECALL(CATIAHybridShapePointOnPlane,ENVTIETypeLetter,ENVTIELetter)put_ProjectionSurface(iProjSur)); \
} \
HRESULT __stdcall  ENVTIEName::GetSecondDirection(double & oDirX, double & oDirY, double & oDirZ) \
{ \
return (ENVTIECALL(CATIAHybridShapePointOnPlane,ENVTIETypeLetter,ENVTIELetter)GetSecondDirection(oDirX,oDirY,oDirZ)); \
} \
HRESULT __stdcall  ENVTIEName::SetSecondDirection(double iDirX, double iDirY, double iDirZ) \
{ \
return (ENVTIECALL(CATIAHybridShapePointOnPlane,ENVTIETypeLetter,ENVTIELetter)SetSecondDirection(iDirX,iDirY,iDirZ)); \
} \
HRESULT __stdcall  ENVTIEName::GetCoordinates(CATSafeArrayVariant & oCoordinates) \
{ \
return (ENVTIECALL(CATIAHybridShapePointOnPlane,ENVTIETypeLetter,ENVTIELetter)GetCoordinates(oCoordinates)); \
} \
HRESULT __stdcall  ENVTIEName::SetCoordinates(const CATSafeArrayVariant & oCoordinates) \
{ \
return (ENVTIECALL(CATIAHybridShapePointOnPlane,ENVTIETypeLetter,ENVTIELetter)SetCoordinates(oCoordinates)); \
} \
HRESULT __stdcall  ENVTIEName::Compute() \
{ \
return (ENVTIECALL(CATIAHybridShapePointOnPlane,ENVTIETypeLetter,ENVTIELetter)Compute()); \
} \
HRESULT __stdcall  ENVTIEName::AppendHybridShape(CATIAHybridShape * iHybridShape) \
{ \
return (ENVTIECALL(CATIAHybridShapePointOnPlane,ENVTIETypeLetter,ENVTIELetter)AppendHybridShape(iHybridShape)); \
} \
HRESULT __stdcall  ENVTIEName::get_Thickness(CATIAHybridShape *& oThickness) \
{ \
return (ENVTIECALL(CATIAHybridShapePointOnPlane,ENVTIETypeLetter,ENVTIELetter)get_Thickness(oThickness)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Application(CATIAApplication *& oApplication) \
{ \
return (ENVTIECALL(CATIAHybridShapePointOnPlane,ENVTIETypeLetter,ENVTIELetter)get_Application(oApplication)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Parent(CATBaseDispatch *& oParent) \
{ \
return (ENVTIECALL(CATIAHybridShapePointOnPlane,ENVTIETypeLetter,ENVTIELetter)get_Parent(oParent)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Name(CATBSTR & oNameBSTR) \
{ \
return (ENVTIECALL(CATIAHybridShapePointOnPlane,ENVTIETypeLetter,ENVTIELetter)get_Name(oNameBSTR)); \
} \
HRESULT  __stdcall  ENVTIEName::put_Name(const CATBSTR & iNameBSTR) \
{ \
return (ENVTIECALL(CATIAHybridShapePointOnPlane,ENVTIETypeLetter,ENVTIELetter)put_Name(iNameBSTR)); \
} \
HRESULT  __stdcall  ENVTIEName::GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj) \
{ \
return (ENVTIECALL(CATIAHybridShapePointOnPlane,ENVTIETypeLetter,ENVTIELetter)GetItem(IDName,RealObj)); \
} \


/* Name of the TIE class */
#define class_TIE_CATIAHybridShapePointOnPlane(classe)    TIECATIAHybridShapePointOnPlane##classe


/* Common methods inside a TIE */
#define common_TIE_CATIAHybridShapePointOnPlane(classe) \
 \
 \
/* Static initialization */ \
CATDefineCommonTIEMembers(CATIAHybridShapePointOnPlane, classe) \
 \
 \
CATImplementTIEMethods(CATIAHybridShapePointOnPlane, classe) \
CATImplementIUnknownMethodsForCATBaseUnknownTIE(CATIAHybridShapePointOnPlane, classe, 2) \
CATImplementIDispatchMethodsForCATBaseUnknownTIE(CATIAHybridShapePointOnPlane, classe) \
CATImplementCATBaseUnknownMethodsForTIE(CATIAHybridShapePointOnPlane, classe) \
 \
HRESULT __stdcall  TIECATIAHybridShapePointOnPlane##classe::get_Plane(CATIAReference *& oPlane) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,1,&_Trac2,&oPlane); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Plane(oPlane); \
   ExitAfterCall(this,1,_Trac2,&_ret_arg,&oPlane); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapePointOnPlane##classe::put_Plane(CATIAReference * iPlane) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,2,&_Trac2,&iPlane); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_Plane(iPlane); \
   ExitAfterCall(this,2,_Trac2,&_ret_arg,&iPlane); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapePointOnPlane##classe::get_Point(CATIAReference *& oRefPoint) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,3,&_Trac2,&oRefPoint); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Point(oRefPoint); \
   ExitAfterCall(this,3,_Trac2,&_ret_arg,&oRefPoint); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapePointOnPlane##classe::put_Point(CATIAReference * iRefPoint) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,4,&_Trac2,&iRefPoint); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_Point(iRefPoint); \
   ExitAfterCall(this,4,_Trac2,&_ret_arg,&iRefPoint); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapePointOnPlane##classe::get_XOffset(CATIALength *& oX) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,5,&_Trac2,&oX); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_XOffset(oX); \
   ExitAfterCall(this,5,_Trac2,&_ret_arg,&oX); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapePointOnPlane##classe::get_YOffset(CATIALength *& oY) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,6,&_Trac2,&oY); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_YOffset(oY); \
   ExitAfterCall(this,6,_Trac2,&_ret_arg,&oY); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapePointOnPlane##classe::get_FirstDirection(CATIAHybridShapeDirection *& oDir) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,7,&_Trac2,&oDir); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_FirstDirection(oDir); \
   ExitAfterCall(this,7,_Trac2,&_ret_arg,&oDir); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapePointOnPlane##classe::put_FirstDirection(CATIAHybridShapeDirection * iDir) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,8,&_Trac2,&iDir); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_FirstDirection(iDir); \
   ExitAfterCall(this,8,_Trac2,&_ret_arg,&iDir); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapePointOnPlane##classe::get_ProjectionSurface(CATIAReference *& oProjSur) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,9,&_Trac2,&oProjSur); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_ProjectionSurface(oProjSur); \
   ExitAfterCall(this,9,_Trac2,&_ret_arg,&oProjSur); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapePointOnPlane##classe::put_ProjectionSurface(CATIAReference * iProjSur) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,10,&_Trac2,&iProjSur); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_ProjectionSurface(iProjSur); \
   ExitAfterCall(this,10,_Trac2,&_ret_arg,&iProjSur); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapePointOnPlane##classe::GetSecondDirection(double & oDirX, double & oDirY, double & oDirZ) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,11,&_Trac2,&oDirX,&oDirY,&oDirZ); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetSecondDirection(oDirX,oDirY,oDirZ); \
   ExitAfterCall(this,11,_Trac2,&_ret_arg,&oDirX,&oDirY,&oDirZ); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapePointOnPlane##classe::SetSecondDirection(double iDirX, double iDirY, double iDirZ) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,12,&_Trac2,&iDirX,&iDirY,&iDirZ); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetSecondDirection(iDirX,iDirY,iDirZ); \
   ExitAfterCall(this,12,_Trac2,&_ret_arg,&iDirX,&iDirY,&iDirZ); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapePointOnPlane##classe::GetCoordinates(CATSafeArrayVariant & oCoordinates) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,13,&_Trac2,&oCoordinates); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetCoordinates(oCoordinates); \
   ExitAfterCall(this,13,_Trac2,&_ret_arg,&oCoordinates); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapePointOnPlane##classe::SetCoordinates(const CATSafeArrayVariant & oCoordinates) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,14,&_Trac2,&oCoordinates); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetCoordinates(oCoordinates); \
   ExitAfterCall(this,14,_Trac2,&_ret_arg,&oCoordinates); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapePointOnPlane##classe::Compute() \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,15,&_Trac2); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->Compute(); \
   ExitAfterCall(this,15,_Trac2,&_ret_arg); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapePointOnPlane##classe::AppendHybridShape(CATIAHybridShape * iHybridShape) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,16,&_Trac2,&iHybridShape); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->AppendHybridShape(iHybridShape); \
   ExitAfterCall(this,16,_Trac2,&_ret_arg,&iHybridShape); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapePointOnPlane##classe::get_Thickness(CATIAHybridShape *& oThickness) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,17,&_Trac2,&oThickness); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Thickness(oThickness); \
   ExitAfterCall(this,17,_Trac2,&_ret_arg,&oThickness); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAHybridShapePointOnPlane##classe::get_Application(CATIAApplication *& oApplication) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,18,&_Trac2,&oApplication); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Application(oApplication); \
   ExitAfterCall(this,18,_Trac2,&_ret_arg,&oApplication); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAHybridShapePointOnPlane##classe::get_Parent(CATBaseDispatch *& oParent) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,19,&_Trac2,&oParent); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Parent(oParent); \
   ExitAfterCall(this,19,_Trac2,&_ret_arg,&oParent); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAHybridShapePointOnPlane##classe::get_Name(CATBSTR & oNameBSTR) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,20,&_Trac2,&oNameBSTR); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Name(oNameBSTR); \
   ExitAfterCall(this,20,_Trac2,&_ret_arg,&oNameBSTR); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAHybridShapePointOnPlane##classe::put_Name(const CATBSTR & iNameBSTR) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,21,&_Trac2,&iNameBSTR); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_Name(iNameBSTR); \
   ExitAfterCall(this,21,_Trac2,&_ret_arg,&iNameBSTR); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAHybridShapePointOnPlane##classe::GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,22,&_Trac2,&IDName,&RealObj); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetItem(IDName,RealObj); \
   ExitAfterCall(this,22,_Trac2,&_ret_arg,&IDName,&RealObj); \
   return(_ret_arg); \
} \



/* Macro used to link an implementation with an interface */
#define TIE_CATIAHybridShapePointOnPlane(classe) \
 \
 \
declare_TIE_CATIAHybridShapePointOnPlane(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIAHybridShapePointOnPlane##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIAHybridShapePointOnPlane,"CATIAHybridShapePointOnPlane",CATIAHybridShapePointOnPlane::MetaObject(),classe::MetaObject(),TIE); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIAHybridShapePointOnPlane(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIECreation(CATIAHybridShapePointOnPlane, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIAHybridShapePointOnPlane##classe(classe::MetaObject(),CATIAHybridShapePointOnPlane::MetaObject(),(void *)CreateTIECATIAHybridShapePointOnPlane##classe)



/* Macro used to link an implementation with an interface */
/* This TIE is chained on the implementation object */
#define TIEchain_CATIAHybridShapePointOnPlane(classe) \
 \
 \
declare_TIE_CATIAHybridShapePointOnPlane(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIAHybridShapePointOnPlane##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIAHybridShapePointOnPlane,"CATIAHybridShapePointOnPlane",CATIAHybridShapePointOnPlane::MetaObject(),classe::MetaObject(),TIEchain); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIAHybridShapePointOnPlane(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIEchainCreation(CATIAHybridShapePointOnPlane, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIAHybridShapePointOnPlane##classe(classe::MetaObject(),CATIAHybridShapePointOnPlane::MetaObject(),(void *)CreateTIECATIAHybridShapePointOnPlane##classe)


/* Macro to switch between BOA and TIE at build time */ 
#ifdef CATSYS_BOA_IS_TIE
#define BOA_CATIAHybridShapePointOnPlane(classe) TIE_CATIAHybridShapePointOnPlane(classe)
#else
#define BOA_CATIAHybridShapePointOnPlane(classe) CATImplementBOA(CATIAHybridShapePointOnPlane, classe)
#endif

#endif
