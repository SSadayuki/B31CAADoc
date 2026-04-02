#ifndef __TIE_CATIAHybridShapeCircleCtrRad
#define __TIE_CATIAHybridShapeCircleCtrRad

#include <string.h>
#include "CATBaseUnknown.h"
#include "CATMetaClass.h"
#include "CATMacForTie.h"
#include "CATExitJournal.h"
#include "CATIAHybridShapeCircleCtrRad.h"
#include "JS0DSPA.h"


#ifdef _WINDOWS_SOURCE
#define Exported __declspec(dllexport)
#define Imported __declspec(dllimport)
#else
#define Exported 
#define Imported 
#endif


/* To link an implementation with the interface CATIAHybridShapeCircleCtrRad */
#define declare_TIE_CATIAHybridShapeCircleCtrRad(classe) \
 \
 \
class TIECATIAHybridShapeCircleCtrRad##classe : public CATIAHybridShapeCircleCtrRad \
{ \
   private: \
      CATDeclareCommonTIEMembers \
   public: \
      CATDeclareTIEMethods(CATIAHybridShapeCircleCtrRad, classe) \
      CATDeclareIUnknownMethodsForCATBaseUnknownTIE \
      CATDeclareIDispatchMethodsForCATBaseUnknownTIE \
      CATDeclareCATBaseUnknownMethodsForTIE \
      virtual HRESULT __stdcall get_Center(CATIAReference *& oPt); \
      virtual HRESULT __stdcall put_Center(CATIAReference * iPt); \
      virtual HRESULT __stdcall get_Support(CATIAReference *& oSupport); \
      virtual HRESULT __stdcall put_Support(CATIAReference * iSupport); \
      virtual HRESULT __stdcall get_DiameterMode(CAT_VARIANT_BOOL & oDiameterMode); \
      virtual HRESULT __stdcall put_DiameterMode(CAT_VARIANT_BOOL iDiameterMode); \
      virtual HRESULT __stdcall get_Radius(CATIALength *& Radius); \
      virtual HRESULT __stdcall get_Diameter(CATIALength *& oDiameter); \
      virtual HRESULT __stdcall get_FirstDirection(CATIAHybridShapeDirection *& Elem); \
      virtual HRESULT __stdcall put_FirstDirection(CATIAHybridShapeDirection * Elem); \
      virtual HRESULT __stdcall IsGeodesic(CAT_VARIANT_BOOL & oGeod); \
      virtual HRESULT __stdcall SetGeometryOnSupport(); \
      virtual HRESULT __stdcall UnsetGeometryOnSupport(); \
      virtual HRESULT __stdcall GetSecondDirection(double & oDirX, double & oDirY, double & oDirZ); \
      virtual HRESULT __stdcall SetSecondDirection(double iDirX, double iDirY, double iDirZ); \
      virtual HRESULT __stdcall GetFreeRadius(double & oRadius); \
      virtual HRESULT __stdcall GetFreeCenter(CATSafeArrayVariant & ioCenter); \
      virtual HRESULT __stdcall SetLimitation(CATLONG iLimitation); \
      virtual HRESULT __stdcall get_StartAngle(CATIAAngle *& oStartAngle); \
      virtual HRESULT __stdcall get_EndAngle(CATIAAngle *& oEndAngle); \
      virtual HRESULT __stdcall get_AxisComputation(CAT_VARIANT_BOOL & oAxisComputation); \
      virtual HRESULT __stdcall put_AxisComputation(CAT_VARIANT_BOOL iAxisComputation); \
      virtual HRESULT __stdcall get_AxisDirection(CATIAHybridShapeDirection *& oDir); \
      virtual HRESULT __stdcall put_AxisDirection(CATIAHybridShapeDirection * iDir); \
      virtual HRESULT __stdcall GetAxis(CATLONG iPosition, CATIAReference *& oAxis); \
      virtual HRESULT __stdcall GetCenter(double & oCenterX, double & oCenterY, double & oCenterZ); \
      virtual HRESULT __stdcall GetLimitation(CATLONG & oLimit); \
      virtual HRESULT __stdcall Compute(); \
      virtual HRESULT __stdcall AppendHybridShape(CATIAHybridShape * iHybridShape); \
      virtual HRESULT __stdcall get_Thickness(CATIAHybridShape *& oThickness); \
      virtual HRESULT  __stdcall get_Application(CATIAApplication *& oApplication); \
      virtual HRESULT  __stdcall get_Parent(CATBaseDispatch *& oParent); \
      virtual HRESULT  __stdcall get_Name(CATBSTR & oNameBSTR); \
      virtual HRESULT  __stdcall put_Name(const CATBSTR & iNameBSTR); \
      virtual HRESULT  __stdcall GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj); \
};



#define ENVTIEdeclare_CATIAHybridShapeCircleCtrRad(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
virtual HRESULT __stdcall get_Center(CATIAReference *& oPt); \
virtual HRESULT __stdcall put_Center(CATIAReference * iPt); \
virtual HRESULT __stdcall get_Support(CATIAReference *& oSupport); \
virtual HRESULT __stdcall put_Support(CATIAReference * iSupport); \
virtual HRESULT __stdcall get_DiameterMode(CAT_VARIANT_BOOL & oDiameterMode); \
virtual HRESULT __stdcall put_DiameterMode(CAT_VARIANT_BOOL iDiameterMode); \
virtual HRESULT __stdcall get_Radius(CATIALength *& Radius); \
virtual HRESULT __stdcall get_Diameter(CATIALength *& oDiameter); \
virtual HRESULT __stdcall get_FirstDirection(CATIAHybridShapeDirection *& Elem); \
virtual HRESULT __stdcall put_FirstDirection(CATIAHybridShapeDirection * Elem); \
virtual HRESULT __stdcall IsGeodesic(CAT_VARIANT_BOOL & oGeod); \
virtual HRESULT __stdcall SetGeometryOnSupport(); \
virtual HRESULT __stdcall UnsetGeometryOnSupport(); \
virtual HRESULT __stdcall GetSecondDirection(double & oDirX, double & oDirY, double & oDirZ); \
virtual HRESULT __stdcall SetSecondDirection(double iDirX, double iDirY, double iDirZ); \
virtual HRESULT __stdcall GetFreeRadius(double & oRadius); \
virtual HRESULT __stdcall GetFreeCenter(CATSafeArrayVariant & ioCenter); \
virtual HRESULT __stdcall SetLimitation(CATLONG iLimitation); \
virtual HRESULT __stdcall get_StartAngle(CATIAAngle *& oStartAngle); \
virtual HRESULT __stdcall get_EndAngle(CATIAAngle *& oEndAngle); \
virtual HRESULT __stdcall get_AxisComputation(CAT_VARIANT_BOOL & oAxisComputation); \
virtual HRESULT __stdcall put_AxisComputation(CAT_VARIANT_BOOL iAxisComputation); \
virtual HRESULT __stdcall get_AxisDirection(CATIAHybridShapeDirection *& oDir); \
virtual HRESULT __stdcall put_AxisDirection(CATIAHybridShapeDirection * iDir); \
virtual HRESULT __stdcall GetAxis(CATLONG iPosition, CATIAReference *& oAxis); \
virtual HRESULT __stdcall GetCenter(double & oCenterX, double & oCenterY, double & oCenterZ); \
virtual HRESULT __stdcall GetLimitation(CATLONG & oLimit); \
virtual HRESULT __stdcall Compute(); \
virtual HRESULT __stdcall AppendHybridShape(CATIAHybridShape * iHybridShape); \
virtual HRESULT __stdcall get_Thickness(CATIAHybridShape *& oThickness); \
virtual HRESULT  __stdcall get_Application(CATIAApplication *& oApplication); \
virtual HRESULT  __stdcall get_Parent(CATBaseDispatch *& oParent); \
virtual HRESULT  __stdcall get_Name(CATBSTR & oNameBSTR); \
virtual HRESULT  __stdcall put_Name(const CATBSTR & iNameBSTR); \
virtual HRESULT  __stdcall GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj); \


#define ENVTIEdefine_CATIAHybridShapeCircleCtrRad(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
HRESULT __stdcall  ENVTIEName::get_Center(CATIAReference *& oPt) \
{ \
return (ENVTIECALL(CATIAHybridShapeCircleCtrRad,ENVTIETypeLetter,ENVTIELetter)get_Center(oPt)); \
} \
HRESULT __stdcall  ENVTIEName::put_Center(CATIAReference * iPt) \
{ \
return (ENVTIECALL(CATIAHybridShapeCircleCtrRad,ENVTIETypeLetter,ENVTIELetter)put_Center(iPt)); \
} \
HRESULT __stdcall  ENVTIEName::get_Support(CATIAReference *& oSupport) \
{ \
return (ENVTIECALL(CATIAHybridShapeCircleCtrRad,ENVTIETypeLetter,ENVTIELetter)get_Support(oSupport)); \
} \
HRESULT __stdcall  ENVTIEName::put_Support(CATIAReference * iSupport) \
{ \
return (ENVTIECALL(CATIAHybridShapeCircleCtrRad,ENVTIETypeLetter,ENVTIELetter)put_Support(iSupport)); \
} \
HRESULT __stdcall  ENVTIEName::get_DiameterMode(CAT_VARIANT_BOOL & oDiameterMode) \
{ \
return (ENVTIECALL(CATIAHybridShapeCircleCtrRad,ENVTIETypeLetter,ENVTIELetter)get_DiameterMode(oDiameterMode)); \
} \
HRESULT __stdcall  ENVTIEName::put_DiameterMode(CAT_VARIANT_BOOL iDiameterMode) \
{ \
return (ENVTIECALL(CATIAHybridShapeCircleCtrRad,ENVTIETypeLetter,ENVTIELetter)put_DiameterMode(iDiameterMode)); \
} \
HRESULT __stdcall  ENVTIEName::get_Radius(CATIALength *& Radius) \
{ \
return (ENVTIECALL(CATIAHybridShapeCircleCtrRad,ENVTIETypeLetter,ENVTIELetter)get_Radius(Radius)); \
} \
HRESULT __stdcall  ENVTIEName::get_Diameter(CATIALength *& oDiameter) \
{ \
return (ENVTIECALL(CATIAHybridShapeCircleCtrRad,ENVTIETypeLetter,ENVTIELetter)get_Diameter(oDiameter)); \
} \
HRESULT __stdcall  ENVTIEName::get_FirstDirection(CATIAHybridShapeDirection *& Elem) \
{ \
return (ENVTIECALL(CATIAHybridShapeCircleCtrRad,ENVTIETypeLetter,ENVTIELetter)get_FirstDirection(Elem)); \
} \
HRESULT __stdcall  ENVTIEName::put_FirstDirection(CATIAHybridShapeDirection * Elem) \
{ \
return (ENVTIECALL(CATIAHybridShapeCircleCtrRad,ENVTIETypeLetter,ENVTIELetter)put_FirstDirection(Elem)); \
} \
HRESULT __stdcall  ENVTIEName::IsGeodesic(CAT_VARIANT_BOOL & oGeod) \
{ \
return (ENVTIECALL(CATIAHybridShapeCircleCtrRad,ENVTIETypeLetter,ENVTIELetter)IsGeodesic(oGeod)); \
} \
HRESULT __stdcall  ENVTIEName::SetGeometryOnSupport() \
{ \
return (ENVTIECALL(CATIAHybridShapeCircleCtrRad,ENVTIETypeLetter,ENVTIELetter)SetGeometryOnSupport()); \
} \
HRESULT __stdcall  ENVTIEName::UnsetGeometryOnSupport() \
{ \
return (ENVTIECALL(CATIAHybridShapeCircleCtrRad,ENVTIETypeLetter,ENVTIELetter)UnsetGeometryOnSupport()); \
} \
HRESULT __stdcall  ENVTIEName::GetSecondDirection(double & oDirX, double & oDirY, double & oDirZ) \
{ \
return (ENVTIECALL(CATIAHybridShapeCircleCtrRad,ENVTIETypeLetter,ENVTIELetter)GetSecondDirection(oDirX,oDirY,oDirZ)); \
} \
HRESULT __stdcall  ENVTIEName::SetSecondDirection(double iDirX, double iDirY, double iDirZ) \
{ \
return (ENVTIECALL(CATIAHybridShapeCircleCtrRad,ENVTIETypeLetter,ENVTIELetter)SetSecondDirection(iDirX,iDirY,iDirZ)); \
} \
HRESULT __stdcall  ENVTIEName::GetFreeRadius(double & oRadius) \
{ \
return (ENVTIECALL(CATIAHybridShapeCircleCtrRad,ENVTIETypeLetter,ENVTIELetter)GetFreeRadius(oRadius)); \
} \
HRESULT __stdcall  ENVTIEName::GetFreeCenter(CATSafeArrayVariant & ioCenter) \
{ \
return (ENVTIECALL(CATIAHybridShapeCircleCtrRad,ENVTIETypeLetter,ENVTIELetter)GetFreeCenter(ioCenter)); \
} \
HRESULT __stdcall  ENVTIEName::SetLimitation(CATLONG iLimitation) \
{ \
return (ENVTIECALL(CATIAHybridShapeCircleCtrRad,ENVTIETypeLetter,ENVTIELetter)SetLimitation(iLimitation)); \
} \
HRESULT __stdcall  ENVTIEName::get_StartAngle(CATIAAngle *& oStartAngle) \
{ \
return (ENVTIECALL(CATIAHybridShapeCircleCtrRad,ENVTIETypeLetter,ENVTIELetter)get_StartAngle(oStartAngle)); \
} \
HRESULT __stdcall  ENVTIEName::get_EndAngle(CATIAAngle *& oEndAngle) \
{ \
return (ENVTIECALL(CATIAHybridShapeCircleCtrRad,ENVTIETypeLetter,ENVTIELetter)get_EndAngle(oEndAngle)); \
} \
HRESULT __stdcall  ENVTIEName::get_AxisComputation(CAT_VARIANT_BOOL & oAxisComputation) \
{ \
return (ENVTIECALL(CATIAHybridShapeCircleCtrRad,ENVTIETypeLetter,ENVTIELetter)get_AxisComputation(oAxisComputation)); \
} \
HRESULT __stdcall  ENVTIEName::put_AxisComputation(CAT_VARIANT_BOOL iAxisComputation) \
{ \
return (ENVTIECALL(CATIAHybridShapeCircleCtrRad,ENVTIETypeLetter,ENVTIELetter)put_AxisComputation(iAxisComputation)); \
} \
HRESULT __stdcall  ENVTIEName::get_AxisDirection(CATIAHybridShapeDirection *& oDir) \
{ \
return (ENVTIECALL(CATIAHybridShapeCircleCtrRad,ENVTIETypeLetter,ENVTIELetter)get_AxisDirection(oDir)); \
} \
HRESULT __stdcall  ENVTIEName::put_AxisDirection(CATIAHybridShapeDirection * iDir) \
{ \
return (ENVTIECALL(CATIAHybridShapeCircleCtrRad,ENVTIETypeLetter,ENVTIELetter)put_AxisDirection(iDir)); \
} \
HRESULT __stdcall  ENVTIEName::GetAxis(CATLONG iPosition, CATIAReference *& oAxis) \
{ \
return (ENVTIECALL(CATIAHybridShapeCircleCtrRad,ENVTIETypeLetter,ENVTIELetter)GetAxis(iPosition,oAxis)); \
} \
HRESULT __stdcall  ENVTIEName::GetCenter(double & oCenterX, double & oCenterY, double & oCenterZ) \
{ \
return (ENVTIECALL(CATIAHybridShapeCircleCtrRad,ENVTIETypeLetter,ENVTIELetter)GetCenter(oCenterX,oCenterY,oCenterZ)); \
} \
HRESULT __stdcall  ENVTIEName::GetLimitation(CATLONG & oLimit) \
{ \
return (ENVTIECALL(CATIAHybridShapeCircleCtrRad,ENVTIETypeLetter,ENVTIELetter)GetLimitation(oLimit)); \
} \
HRESULT __stdcall  ENVTIEName::Compute() \
{ \
return (ENVTIECALL(CATIAHybridShapeCircleCtrRad,ENVTIETypeLetter,ENVTIELetter)Compute()); \
} \
HRESULT __stdcall  ENVTIEName::AppendHybridShape(CATIAHybridShape * iHybridShape) \
{ \
return (ENVTIECALL(CATIAHybridShapeCircleCtrRad,ENVTIETypeLetter,ENVTIELetter)AppendHybridShape(iHybridShape)); \
} \
HRESULT __stdcall  ENVTIEName::get_Thickness(CATIAHybridShape *& oThickness) \
{ \
return (ENVTIECALL(CATIAHybridShapeCircleCtrRad,ENVTIETypeLetter,ENVTIELetter)get_Thickness(oThickness)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Application(CATIAApplication *& oApplication) \
{ \
return (ENVTIECALL(CATIAHybridShapeCircleCtrRad,ENVTIETypeLetter,ENVTIELetter)get_Application(oApplication)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Parent(CATBaseDispatch *& oParent) \
{ \
return (ENVTIECALL(CATIAHybridShapeCircleCtrRad,ENVTIETypeLetter,ENVTIELetter)get_Parent(oParent)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Name(CATBSTR & oNameBSTR) \
{ \
return (ENVTIECALL(CATIAHybridShapeCircleCtrRad,ENVTIETypeLetter,ENVTIELetter)get_Name(oNameBSTR)); \
} \
HRESULT  __stdcall  ENVTIEName::put_Name(const CATBSTR & iNameBSTR) \
{ \
return (ENVTIECALL(CATIAHybridShapeCircleCtrRad,ENVTIETypeLetter,ENVTIELetter)put_Name(iNameBSTR)); \
} \
HRESULT  __stdcall  ENVTIEName::GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj) \
{ \
return (ENVTIECALL(CATIAHybridShapeCircleCtrRad,ENVTIETypeLetter,ENVTIELetter)GetItem(IDName,RealObj)); \
} \


/* Name of the TIE class */
#define class_TIE_CATIAHybridShapeCircleCtrRad(classe)    TIECATIAHybridShapeCircleCtrRad##classe


/* Common methods inside a TIE */
#define common_TIE_CATIAHybridShapeCircleCtrRad(classe) \
 \
 \
/* Static initialization */ \
CATDefineCommonTIEMembers(CATIAHybridShapeCircleCtrRad, classe) \
 \
 \
CATImplementTIEMethods(CATIAHybridShapeCircleCtrRad, classe) \
CATImplementIUnknownMethodsForCATBaseUnknownTIE(CATIAHybridShapeCircleCtrRad, classe, 2) \
CATImplementIDispatchMethodsForCATBaseUnknownTIE(CATIAHybridShapeCircleCtrRad, classe) \
CATImplementCATBaseUnknownMethodsForTIE(CATIAHybridShapeCircleCtrRad, classe) \
 \
HRESULT __stdcall  TIECATIAHybridShapeCircleCtrRad##classe::get_Center(CATIAReference *& oPt) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,1,&_Trac2,&oPt); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Center(oPt); \
   ExitAfterCall(this,1,_Trac2,&_ret_arg,&oPt); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeCircleCtrRad##classe::put_Center(CATIAReference * iPt) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,2,&_Trac2,&iPt); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_Center(iPt); \
   ExitAfterCall(this,2,_Trac2,&_ret_arg,&iPt); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeCircleCtrRad##classe::get_Support(CATIAReference *& oSupport) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,3,&_Trac2,&oSupport); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Support(oSupport); \
   ExitAfterCall(this,3,_Trac2,&_ret_arg,&oSupport); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeCircleCtrRad##classe::put_Support(CATIAReference * iSupport) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,4,&_Trac2,&iSupport); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_Support(iSupport); \
   ExitAfterCall(this,4,_Trac2,&_ret_arg,&iSupport); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeCircleCtrRad##classe::get_DiameterMode(CAT_VARIANT_BOOL & oDiameterMode) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,5,&_Trac2,&oDiameterMode); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_DiameterMode(oDiameterMode); \
   ExitAfterCall(this,5,_Trac2,&_ret_arg,&oDiameterMode); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeCircleCtrRad##classe::put_DiameterMode(CAT_VARIANT_BOOL iDiameterMode) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,6,&_Trac2,&iDiameterMode); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_DiameterMode(iDiameterMode); \
   ExitAfterCall(this,6,_Trac2,&_ret_arg,&iDiameterMode); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeCircleCtrRad##classe::get_Radius(CATIALength *& Radius) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,7,&_Trac2,&Radius); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Radius(Radius); \
   ExitAfterCall(this,7,_Trac2,&_ret_arg,&Radius); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeCircleCtrRad##classe::get_Diameter(CATIALength *& oDiameter) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,8,&_Trac2,&oDiameter); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Diameter(oDiameter); \
   ExitAfterCall(this,8,_Trac2,&_ret_arg,&oDiameter); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeCircleCtrRad##classe::get_FirstDirection(CATIAHybridShapeDirection *& Elem) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,9,&_Trac2,&Elem); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_FirstDirection(Elem); \
   ExitAfterCall(this,9,_Trac2,&_ret_arg,&Elem); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeCircleCtrRad##classe::put_FirstDirection(CATIAHybridShapeDirection * Elem) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,10,&_Trac2,&Elem); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_FirstDirection(Elem); \
   ExitAfterCall(this,10,_Trac2,&_ret_arg,&Elem); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeCircleCtrRad##classe::IsGeodesic(CAT_VARIANT_BOOL & oGeod) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,11,&_Trac2,&oGeod); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->IsGeodesic(oGeod); \
   ExitAfterCall(this,11,_Trac2,&_ret_arg,&oGeod); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeCircleCtrRad##classe::SetGeometryOnSupport() \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,12,&_Trac2); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetGeometryOnSupport(); \
   ExitAfterCall(this,12,_Trac2,&_ret_arg); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeCircleCtrRad##classe::UnsetGeometryOnSupport() \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,13,&_Trac2); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->UnsetGeometryOnSupport(); \
   ExitAfterCall(this,13,_Trac2,&_ret_arg); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeCircleCtrRad##classe::GetSecondDirection(double & oDirX, double & oDirY, double & oDirZ) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,14,&_Trac2,&oDirX,&oDirY,&oDirZ); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetSecondDirection(oDirX,oDirY,oDirZ); \
   ExitAfterCall(this,14,_Trac2,&_ret_arg,&oDirX,&oDirY,&oDirZ); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeCircleCtrRad##classe::SetSecondDirection(double iDirX, double iDirY, double iDirZ) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,15,&_Trac2,&iDirX,&iDirY,&iDirZ); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetSecondDirection(iDirX,iDirY,iDirZ); \
   ExitAfterCall(this,15,_Trac2,&_ret_arg,&iDirX,&iDirY,&iDirZ); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeCircleCtrRad##classe::GetFreeRadius(double & oRadius) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,16,&_Trac2,&oRadius); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetFreeRadius(oRadius); \
   ExitAfterCall(this,16,_Trac2,&_ret_arg,&oRadius); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeCircleCtrRad##classe::GetFreeCenter(CATSafeArrayVariant & ioCenter) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,17,&_Trac2,&ioCenter); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetFreeCenter(ioCenter); \
   ExitAfterCall(this,17,_Trac2,&_ret_arg,&ioCenter); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeCircleCtrRad##classe::SetLimitation(CATLONG iLimitation) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,18,&_Trac2,&iLimitation); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetLimitation(iLimitation); \
   ExitAfterCall(this,18,_Trac2,&_ret_arg,&iLimitation); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeCircleCtrRad##classe::get_StartAngle(CATIAAngle *& oStartAngle) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,19,&_Trac2,&oStartAngle); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_StartAngle(oStartAngle); \
   ExitAfterCall(this,19,_Trac2,&_ret_arg,&oStartAngle); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeCircleCtrRad##classe::get_EndAngle(CATIAAngle *& oEndAngle) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,20,&_Trac2,&oEndAngle); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_EndAngle(oEndAngle); \
   ExitAfterCall(this,20,_Trac2,&_ret_arg,&oEndAngle); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeCircleCtrRad##classe::get_AxisComputation(CAT_VARIANT_BOOL & oAxisComputation) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,21,&_Trac2,&oAxisComputation); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_AxisComputation(oAxisComputation); \
   ExitAfterCall(this,21,_Trac2,&_ret_arg,&oAxisComputation); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeCircleCtrRad##classe::put_AxisComputation(CAT_VARIANT_BOOL iAxisComputation) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,22,&_Trac2,&iAxisComputation); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_AxisComputation(iAxisComputation); \
   ExitAfterCall(this,22,_Trac2,&_ret_arg,&iAxisComputation); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeCircleCtrRad##classe::get_AxisDirection(CATIAHybridShapeDirection *& oDir) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,23,&_Trac2,&oDir); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_AxisDirection(oDir); \
   ExitAfterCall(this,23,_Trac2,&_ret_arg,&oDir); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeCircleCtrRad##classe::put_AxisDirection(CATIAHybridShapeDirection * iDir) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,24,&_Trac2,&iDir); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_AxisDirection(iDir); \
   ExitAfterCall(this,24,_Trac2,&_ret_arg,&iDir); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeCircleCtrRad##classe::GetAxis(CATLONG iPosition, CATIAReference *& oAxis) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,25,&_Trac2,&iPosition,&oAxis); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetAxis(iPosition,oAxis); \
   ExitAfterCall(this,25,_Trac2,&_ret_arg,&iPosition,&oAxis); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeCircleCtrRad##classe::GetCenter(double & oCenterX, double & oCenterY, double & oCenterZ) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,26,&_Trac2,&oCenterX,&oCenterY,&oCenterZ); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetCenter(oCenterX,oCenterY,oCenterZ); \
   ExitAfterCall(this,26,_Trac2,&_ret_arg,&oCenterX,&oCenterY,&oCenterZ); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeCircleCtrRad##classe::GetLimitation(CATLONG & oLimit) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,27,&_Trac2,&oLimit); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetLimitation(oLimit); \
   ExitAfterCall(this,27,_Trac2,&_ret_arg,&oLimit); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeCircleCtrRad##classe::Compute() \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,28,&_Trac2); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->Compute(); \
   ExitAfterCall(this,28,_Trac2,&_ret_arg); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeCircleCtrRad##classe::AppendHybridShape(CATIAHybridShape * iHybridShape) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,29,&_Trac2,&iHybridShape); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->AppendHybridShape(iHybridShape); \
   ExitAfterCall(this,29,_Trac2,&_ret_arg,&iHybridShape); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeCircleCtrRad##classe::get_Thickness(CATIAHybridShape *& oThickness) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,30,&_Trac2,&oThickness); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Thickness(oThickness); \
   ExitAfterCall(this,30,_Trac2,&_ret_arg,&oThickness); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAHybridShapeCircleCtrRad##classe::get_Application(CATIAApplication *& oApplication) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,31,&_Trac2,&oApplication); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Application(oApplication); \
   ExitAfterCall(this,31,_Trac2,&_ret_arg,&oApplication); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAHybridShapeCircleCtrRad##classe::get_Parent(CATBaseDispatch *& oParent) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,32,&_Trac2,&oParent); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Parent(oParent); \
   ExitAfterCall(this,32,_Trac2,&_ret_arg,&oParent); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAHybridShapeCircleCtrRad##classe::get_Name(CATBSTR & oNameBSTR) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,33,&_Trac2,&oNameBSTR); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Name(oNameBSTR); \
   ExitAfterCall(this,33,_Trac2,&_ret_arg,&oNameBSTR); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAHybridShapeCircleCtrRad##classe::put_Name(const CATBSTR & iNameBSTR) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,34,&_Trac2,&iNameBSTR); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_Name(iNameBSTR); \
   ExitAfterCall(this,34,_Trac2,&_ret_arg,&iNameBSTR); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAHybridShapeCircleCtrRad##classe::GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,35,&_Trac2,&IDName,&RealObj); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetItem(IDName,RealObj); \
   ExitAfterCall(this,35,_Trac2,&_ret_arg,&IDName,&RealObj); \
   return(_ret_arg); \
} \



/* Macro used to link an implementation with an interface */
#define TIE_CATIAHybridShapeCircleCtrRad(classe) \
 \
 \
declare_TIE_CATIAHybridShapeCircleCtrRad(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIAHybridShapeCircleCtrRad##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIAHybridShapeCircleCtrRad,"CATIAHybridShapeCircleCtrRad",CATIAHybridShapeCircleCtrRad::MetaObject(),classe::MetaObject(),TIE); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIAHybridShapeCircleCtrRad(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIECreation(CATIAHybridShapeCircleCtrRad, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIAHybridShapeCircleCtrRad##classe(classe::MetaObject(),CATIAHybridShapeCircleCtrRad::MetaObject(),(void *)CreateTIECATIAHybridShapeCircleCtrRad##classe)



/* Macro used to link an implementation with an interface */
/* This TIE is chained on the implementation object */
#define TIEchain_CATIAHybridShapeCircleCtrRad(classe) \
 \
 \
declare_TIE_CATIAHybridShapeCircleCtrRad(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIAHybridShapeCircleCtrRad##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIAHybridShapeCircleCtrRad,"CATIAHybridShapeCircleCtrRad",CATIAHybridShapeCircleCtrRad::MetaObject(),classe::MetaObject(),TIEchain); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIAHybridShapeCircleCtrRad(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIEchainCreation(CATIAHybridShapeCircleCtrRad, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIAHybridShapeCircleCtrRad##classe(classe::MetaObject(),CATIAHybridShapeCircleCtrRad::MetaObject(),(void *)CreateTIECATIAHybridShapeCircleCtrRad##classe)


/* Macro to switch between BOA and TIE at build time */ 
#ifdef CATSYS_BOA_IS_TIE
#define BOA_CATIAHybridShapeCircleCtrRad(classe) TIE_CATIAHybridShapeCircleCtrRad(classe)
#else
#define BOA_CATIAHybridShapeCircleCtrRad(classe) CATImplementBOA(CATIAHybridShapeCircleCtrRad, classe)
#endif

#endif
