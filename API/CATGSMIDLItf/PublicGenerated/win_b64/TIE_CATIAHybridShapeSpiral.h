#ifndef __TIE_CATIAHybridShapeSpiral
#define __TIE_CATIAHybridShapeSpiral

#include <string.h>
#include "CATBaseUnknown.h"
#include "CATMetaClass.h"
#include "CATMacForTie.h"
#include "CATExitJournal.h"
#include "CATIAHybridShapeSpiral.h"
#include "JS0DSPA.h"


#ifdef _WINDOWS_SOURCE
#define Exported __declspec(dllexport)
#define Imported __declspec(dllimport)
#else
#define Exported 
#define Imported 
#endif


/* To link an implementation with the interface CATIAHybridShapeSpiral */
#define declare_TIE_CATIAHybridShapeSpiral(classe) \
 \
 \
class TIECATIAHybridShapeSpiral##classe : public CATIAHybridShapeSpiral \
{ \
   private: \
      CATDeclareCommonTIEMembers \
   public: \
      CATDeclareTIEMethods(CATIAHybridShapeSpiral, classe) \
      CATDeclareIUnknownMethodsForCATBaseUnknownTIE \
      CATDeclareIDispatchMethodsForCATBaseUnknownTIE \
      CATDeclareCATBaseUnknownMethodsForTIE \
      virtual HRESULT __stdcall get_Type(CATLONG & oType); \
      virtual HRESULT __stdcall put_Type(CATLONG iType); \
      virtual HRESULT __stdcall get_Support(CATIAReference *& oSupportPlane); \
      virtual HRESULT __stdcall put_Support(CATIAReference * iSupportPlane); \
      virtual HRESULT __stdcall get_CenterPoint(CATIAReference *& oCenterPt); \
      virtual HRESULT __stdcall put_CenterPoint(CATIAReference * iCenterPt); \
      virtual HRESULT __stdcall get_Axis(CATIAHybridShapeDirection *& oAxis); \
      virtual HRESULT __stdcall put_Axis(CATIAHybridShapeDirection * iAxis); \
      virtual HRESULT __stdcall get_InvertAxis(CAT_VARIANT_BOOL & oInvert); \
      virtual HRESULT __stdcall put_InvertAxis(CAT_VARIANT_BOOL iInvert); \
      virtual HRESULT __stdcall get_StartingRadius(CATIALength *& oStRadius); \
      virtual HRESULT __stdcall put_StartingRadius(CATIALength * iStRadius); \
      virtual HRESULT __stdcall get_ClockwiseRevolution(CAT_VARIANT_BOOL & oClockwiseRevolution); \
      virtual HRESULT __stdcall put_ClockwiseRevolution(CAT_VARIANT_BOOL iClockwiseRevolution); \
      virtual HRESULT __stdcall get_EndingAngle(CATIAAngle *& oEndAngle); \
      virtual HRESULT __stdcall put_EndingAngle(CATIAAngle * iEndAngle); \
      virtual HRESULT __stdcall get_EndingRadius(CATIALength *& oEndRadius); \
      virtual HRESULT __stdcall put_EndingRadius(CATIALength * iEndRadius); \
      virtual HRESULT __stdcall get_RevolNumber(CATIARealParam *& oNbRevol); \
      virtual HRESULT __stdcall put_RevolNumber(CATIARealParam * iNbRevol); \
      virtual HRESULT __stdcall get_Pitch(CATIALength *& oInvert); \
      virtual HRESULT __stdcall put_Pitch(CATIALength * iInvert); \
      virtual HRESULT __stdcall SetAngleRadiusParam(double iEndAngle, double iRevolNumber, double iEndRadius); \
      virtual HRESULT __stdcall SetAnglePitchParam(double iEndAngle, double iRevolNumber, double iPitch); \
      virtual HRESULT __stdcall SetRadiusPitchParam(double iEndRadius, double iPitch); \
      virtual HRESULT __stdcall Compute(); \
      virtual HRESULT __stdcall AppendHybridShape(CATIAHybridShape * iHybridShape); \
      virtual HRESULT __stdcall get_Thickness(CATIAHybridShape *& oThickness); \
      virtual HRESULT  __stdcall get_Application(CATIAApplication *& oApplication); \
      virtual HRESULT  __stdcall get_Parent(CATBaseDispatch *& oParent); \
      virtual HRESULT  __stdcall get_Name(CATBSTR & oNameBSTR); \
      virtual HRESULT  __stdcall put_Name(const CATBSTR & iNameBSTR); \
      virtual HRESULT  __stdcall GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj); \
};



#define ENVTIEdeclare_CATIAHybridShapeSpiral(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
virtual HRESULT __stdcall get_Type(CATLONG & oType); \
virtual HRESULT __stdcall put_Type(CATLONG iType); \
virtual HRESULT __stdcall get_Support(CATIAReference *& oSupportPlane); \
virtual HRESULT __stdcall put_Support(CATIAReference * iSupportPlane); \
virtual HRESULT __stdcall get_CenterPoint(CATIAReference *& oCenterPt); \
virtual HRESULT __stdcall put_CenterPoint(CATIAReference * iCenterPt); \
virtual HRESULT __stdcall get_Axis(CATIAHybridShapeDirection *& oAxis); \
virtual HRESULT __stdcall put_Axis(CATIAHybridShapeDirection * iAxis); \
virtual HRESULT __stdcall get_InvertAxis(CAT_VARIANT_BOOL & oInvert); \
virtual HRESULT __stdcall put_InvertAxis(CAT_VARIANT_BOOL iInvert); \
virtual HRESULT __stdcall get_StartingRadius(CATIALength *& oStRadius); \
virtual HRESULT __stdcall put_StartingRadius(CATIALength * iStRadius); \
virtual HRESULT __stdcall get_ClockwiseRevolution(CAT_VARIANT_BOOL & oClockwiseRevolution); \
virtual HRESULT __stdcall put_ClockwiseRevolution(CAT_VARIANT_BOOL iClockwiseRevolution); \
virtual HRESULT __stdcall get_EndingAngle(CATIAAngle *& oEndAngle); \
virtual HRESULT __stdcall put_EndingAngle(CATIAAngle * iEndAngle); \
virtual HRESULT __stdcall get_EndingRadius(CATIALength *& oEndRadius); \
virtual HRESULT __stdcall put_EndingRadius(CATIALength * iEndRadius); \
virtual HRESULT __stdcall get_RevolNumber(CATIARealParam *& oNbRevol); \
virtual HRESULT __stdcall put_RevolNumber(CATIARealParam * iNbRevol); \
virtual HRESULT __stdcall get_Pitch(CATIALength *& oInvert); \
virtual HRESULT __stdcall put_Pitch(CATIALength * iInvert); \
virtual HRESULT __stdcall SetAngleRadiusParam(double iEndAngle, double iRevolNumber, double iEndRadius); \
virtual HRESULT __stdcall SetAnglePitchParam(double iEndAngle, double iRevolNumber, double iPitch); \
virtual HRESULT __stdcall SetRadiusPitchParam(double iEndRadius, double iPitch); \
virtual HRESULT __stdcall Compute(); \
virtual HRESULT __stdcall AppendHybridShape(CATIAHybridShape * iHybridShape); \
virtual HRESULT __stdcall get_Thickness(CATIAHybridShape *& oThickness); \
virtual HRESULT  __stdcall get_Application(CATIAApplication *& oApplication); \
virtual HRESULT  __stdcall get_Parent(CATBaseDispatch *& oParent); \
virtual HRESULT  __stdcall get_Name(CATBSTR & oNameBSTR); \
virtual HRESULT  __stdcall put_Name(const CATBSTR & iNameBSTR); \
virtual HRESULT  __stdcall GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj); \


#define ENVTIEdefine_CATIAHybridShapeSpiral(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
HRESULT __stdcall  ENVTIEName::get_Type(CATLONG & oType) \
{ \
return (ENVTIECALL(CATIAHybridShapeSpiral,ENVTIETypeLetter,ENVTIELetter)get_Type(oType)); \
} \
HRESULT __stdcall  ENVTIEName::put_Type(CATLONG iType) \
{ \
return (ENVTIECALL(CATIAHybridShapeSpiral,ENVTIETypeLetter,ENVTIELetter)put_Type(iType)); \
} \
HRESULT __stdcall  ENVTIEName::get_Support(CATIAReference *& oSupportPlane) \
{ \
return (ENVTIECALL(CATIAHybridShapeSpiral,ENVTIETypeLetter,ENVTIELetter)get_Support(oSupportPlane)); \
} \
HRESULT __stdcall  ENVTIEName::put_Support(CATIAReference * iSupportPlane) \
{ \
return (ENVTIECALL(CATIAHybridShapeSpiral,ENVTIETypeLetter,ENVTIELetter)put_Support(iSupportPlane)); \
} \
HRESULT __stdcall  ENVTIEName::get_CenterPoint(CATIAReference *& oCenterPt) \
{ \
return (ENVTIECALL(CATIAHybridShapeSpiral,ENVTIETypeLetter,ENVTIELetter)get_CenterPoint(oCenterPt)); \
} \
HRESULT __stdcall  ENVTIEName::put_CenterPoint(CATIAReference * iCenterPt) \
{ \
return (ENVTIECALL(CATIAHybridShapeSpiral,ENVTIETypeLetter,ENVTIELetter)put_CenterPoint(iCenterPt)); \
} \
HRESULT __stdcall  ENVTIEName::get_Axis(CATIAHybridShapeDirection *& oAxis) \
{ \
return (ENVTIECALL(CATIAHybridShapeSpiral,ENVTIETypeLetter,ENVTIELetter)get_Axis(oAxis)); \
} \
HRESULT __stdcall  ENVTIEName::put_Axis(CATIAHybridShapeDirection * iAxis) \
{ \
return (ENVTIECALL(CATIAHybridShapeSpiral,ENVTIETypeLetter,ENVTIELetter)put_Axis(iAxis)); \
} \
HRESULT __stdcall  ENVTIEName::get_InvertAxis(CAT_VARIANT_BOOL & oInvert) \
{ \
return (ENVTIECALL(CATIAHybridShapeSpiral,ENVTIETypeLetter,ENVTIELetter)get_InvertAxis(oInvert)); \
} \
HRESULT __stdcall  ENVTIEName::put_InvertAxis(CAT_VARIANT_BOOL iInvert) \
{ \
return (ENVTIECALL(CATIAHybridShapeSpiral,ENVTIETypeLetter,ENVTIELetter)put_InvertAxis(iInvert)); \
} \
HRESULT __stdcall  ENVTIEName::get_StartingRadius(CATIALength *& oStRadius) \
{ \
return (ENVTIECALL(CATIAHybridShapeSpiral,ENVTIETypeLetter,ENVTIELetter)get_StartingRadius(oStRadius)); \
} \
HRESULT __stdcall  ENVTIEName::put_StartingRadius(CATIALength * iStRadius) \
{ \
return (ENVTIECALL(CATIAHybridShapeSpiral,ENVTIETypeLetter,ENVTIELetter)put_StartingRadius(iStRadius)); \
} \
HRESULT __stdcall  ENVTIEName::get_ClockwiseRevolution(CAT_VARIANT_BOOL & oClockwiseRevolution) \
{ \
return (ENVTIECALL(CATIAHybridShapeSpiral,ENVTIETypeLetter,ENVTIELetter)get_ClockwiseRevolution(oClockwiseRevolution)); \
} \
HRESULT __stdcall  ENVTIEName::put_ClockwiseRevolution(CAT_VARIANT_BOOL iClockwiseRevolution) \
{ \
return (ENVTIECALL(CATIAHybridShapeSpiral,ENVTIETypeLetter,ENVTIELetter)put_ClockwiseRevolution(iClockwiseRevolution)); \
} \
HRESULT __stdcall  ENVTIEName::get_EndingAngle(CATIAAngle *& oEndAngle) \
{ \
return (ENVTIECALL(CATIAHybridShapeSpiral,ENVTIETypeLetter,ENVTIELetter)get_EndingAngle(oEndAngle)); \
} \
HRESULT __stdcall  ENVTIEName::put_EndingAngle(CATIAAngle * iEndAngle) \
{ \
return (ENVTIECALL(CATIAHybridShapeSpiral,ENVTIETypeLetter,ENVTIELetter)put_EndingAngle(iEndAngle)); \
} \
HRESULT __stdcall  ENVTIEName::get_EndingRadius(CATIALength *& oEndRadius) \
{ \
return (ENVTIECALL(CATIAHybridShapeSpiral,ENVTIETypeLetter,ENVTIELetter)get_EndingRadius(oEndRadius)); \
} \
HRESULT __stdcall  ENVTIEName::put_EndingRadius(CATIALength * iEndRadius) \
{ \
return (ENVTIECALL(CATIAHybridShapeSpiral,ENVTIETypeLetter,ENVTIELetter)put_EndingRadius(iEndRadius)); \
} \
HRESULT __stdcall  ENVTIEName::get_RevolNumber(CATIARealParam *& oNbRevol) \
{ \
return (ENVTIECALL(CATIAHybridShapeSpiral,ENVTIETypeLetter,ENVTIELetter)get_RevolNumber(oNbRevol)); \
} \
HRESULT __stdcall  ENVTIEName::put_RevolNumber(CATIARealParam * iNbRevol) \
{ \
return (ENVTIECALL(CATIAHybridShapeSpiral,ENVTIETypeLetter,ENVTIELetter)put_RevolNumber(iNbRevol)); \
} \
HRESULT __stdcall  ENVTIEName::get_Pitch(CATIALength *& oInvert) \
{ \
return (ENVTIECALL(CATIAHybridShapeSpiral,ENVTIETypeLetter,ENVTIELetter)get_Pitch(oInvert)); \
} \
HRESULT __stdcall  ENVTIEName::put_Pitch(CATIALength * iInvert) \
{ \
return (ENVTIECALL(CATIAHybridShapeSpiral,ENVTIETypeLetter,ENVTIELetter)put_Pitch(iInvert)); \
} \
HRESULT __stdcall  ENVTIEName::SetAngleRadiusParam(double iEndAngle, double iRevolNumber, double iEndRadius) \
{ \
return (ENVTIECALL(CATIAHybridShapeSpiral,ENVTIETypeLetter,ENVTIELetter)SetAngleRadiusParam(iEndAngle,iRevolNumber,iEndRadius)); \
} \
HRESULT __stdcall  ENVTIEName::SetAnglePitchParam(double iEndAngle, double iRevolNumber, double iPitch) \
{ \
return (ENVTIECALL(CATIAHybridShapeSpiral,ENVTIETypeLetter,ENVTIELetter)SetAnglePitchParam(iEndAngle,iRevolNumber,iPitch)); \
} \
HRESULT __stdcall  ENVTIEName::SetRadiusPitchParam(double iEndRadius, double iPitch) \
{ \
return (ENVTIECALL(CATIAHybridShapeSpiral,ENVTIETypeLetter,ENVTIELetter)SetRadiusPitchParam(iEndRadius,iPitch)); \
} \
HRESULT __stdcall  ENVTIEName::Compute() \
{ \
return (ENVTIECALL(CATIAHybridShapeSpiral,ENVTIETypeLetter,ENVTIELetter)Compute()); \
} \
HRESULT __stdcall  ENVTIEName::AppendHybridShape(CATIAHybridShape * iHybridShape) \
{ \
return (ENVTIECALL(CATIAHybridShapeSpiral,ENVTIETypeLetter,ENVTIELetter)AppendHybridShape(iHybridShape)); \
} \
HRESULT __stdcall  ENVTIEName::get_Thickness(CATIAHybridShape *& oThickness) \
{ \
return (ENVTIECALL(CATIAHybridShapeSpiral,ENVTIETypeLetter,ENVTIELetter)get_Thickness(oThickness)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Application(CATIAApplication *& oApplication) \
{ \
return (ENVTIECALL(CATIAHybridShapeSpiral,ENVTIETypeLetter,ENVTIELetter)get_Application(oApplication)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Parent(CATBaseDispatch *& oParent) \
{ \
return (ENVTIECALL(CATIAHybridShapeSpiral,ENVTIETypeLetter,ENVTIELetter)get_Parent(oParent)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Name(CATBSTR & oNameBSTR) \
{ \
return (ENVTIECALL(CATIAHybridShapeSpiral,ENVTIETypeLetter,ENVTIELetter)get_Name(oNameBSTR)); \
} \
HRESULT  __stdcall  ENVTIEName::put_Name(const CATBSTR & iNameBSTR) \
{ \
return (ENVTIECALL(CATIAHybridShapeSpiral,ENVTIETypeLetter,ENVTIELetter)put_Name(iNameBSTR)); \
} \
HRESULT  __stdcall  ENVTIEName::GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj) \
{ \
return (ENVTIECALL(CATIAHybridShapeSpiral,ENVTIETypeLetter,ENVTIELetter)GetItem(IDName,RealObj)); \
} \


/* Name of the TIE class */
#define class_TIE_CATIAHybridShapeSpiral(classe)    TIECATIAHybridShapeSpiral##classe


/* Common methods inside a TIE */
#define common_TIE_CATIAHybridShapeSpiral(classe) \
 \
 \
/* Static initialization */ \
CATDefineCommonTIEMembers(CATIAHybridShapeSpiral, classe) \
 \
 \
CATImplementTIEMethods(CATIAHybridShapeSpiral, classe) \
CATImplementIUnknownMethodsForCATBaseUnknownTIE(CATIAHybridShapeSpiral, classe, 2) \
CATImplementIDispatchMethodsForCATBaseUnknownTIE(CATIAHybridShapeSpiral, classe) \
CATImplementCATBaseUnknownMethodsForTIE(CATIAHybridShapeSpiral, classe) \
 \
HRESULT __stdcall  TIECATIAHybridShapeSpiral##classe::get_Type(CATLONG & oType) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,1,&_Trac2,&oType); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Type(oType); \
   ExitAfterCall(this,1,_Trac2,&_ret_arg,&oType); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeSpiral##classe::put_Type(CATLONG iType) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,2,&_Trac2,&iType); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_Type(iType); \
   ExitAfterCall(this,2,_Trac2,&_ret_arg,&iType); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeSpiral##classe::get_Support(CATIAReference *& oSupportPlane) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,3,&_Trac2,&oSupportPlane); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Support(oSupportPlane); \
   ExitAfterCall(this,3,_Trac2,&_ret_arg,&oSupportPlane); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeSpiral##classe::put_Support(CATIAReference * iSupportPlane) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,4,&_Trac2,&iSupportPlane); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_Support(iSupportPlane); \
   ExitAfterCall(this,4,_Trac2,&_ret_arg,&iSupportPlane); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeSpiral##classe::get_CenterPoint(CATIAReference *& oCenterPt) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,5,&_Trac2,&oCenterPt); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_CenterPoint(oCenterPt); \
   ExitAfterCall(this,5,_Trac2,&_ret_arg,&oCenterPt); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeSpiral##classe::put_CenterPoint(CATIAReference * iCenterPt) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,6,&_Trac2,&iCenterPt); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_CenterPoint(iCenterPt); \
   ExitAfterCall(this,6,_Trac2,&_ret_arg,&iCenterPt); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeSpiral##classe::get_Axis(CATIAHybridShapeDirection *& oAxis) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,7,&_Trac2,&oAxis); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Axis(oAxis); \
   ExitAfterCall(this,7,_Trac2,&_ret_arg,&oAxis); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeSpiral##classe::put_Axis(CATIAHybridShapeDirection * iAxis) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,8,&_Trac2,&iAxis); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_Axis(iAxis); \
   ExitAfterCall(this,8,_Trac2,&_ret_arg,&iAxis); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeSpiral##classe::get_InvertAxis(CAT_VARIANT_BOOL & oInvert) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,9,&_Trac2,&oInvert); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_InvertAxis(oInvert); \
   ExitAfterCall(this,9,_Trac2,&_ret_arg,&oInvert); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeSpiral##classe::put_InvertAxis(CAT_VARIANT_BOOL iInvert) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,10,&_Trac2,&iInvert); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_InvertAxis(iInvert); \
   ExitAfterCall(this,10,_Trac2,&_ret_arg,&iInvert); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeSpiral##classe::get_StartingRadius(CATIALength *& oStRadius) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,11,&_Trac2,&oStRadius); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_StartingRadius(oStRadius); \
   ExitAfterCall(this,11,_Trac2,&_ret_arg,&oStRadius); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeSpiral##classe::put_StartingRadius(CATIALength * iStRadius) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,12,&_Trac2,&iStRadius); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_StartingRadius(iStRadius); \
   ExitAfterCall(this,12,_Trac2,&_ret_arg,&iStRadius); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeSpiral##classe::get_ClockwiseRevolution(CAT_VARIANT_BOOL & oClockwiseRevolution) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,13,&_Trac2,&oClockwiseRevolution); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_ClockwiseRevolution(oClockwiseRevolution); \
   ExitAfterCall(this,13,_Trac2,&_ret_arg,&oClockwiseRevolution); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeSpiral##classe::put_ClockwiseRevolution(CAT_VARIANT_BOOL iClockwiseRevolution) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,14,&_Trac2,&iClockwiseRevolution); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_ClockwiseRevolution(iClockwiseRevolution); \
   ExitAfterCall(this,14,_Trac2,&_ret_arg,&iClockwiseRevolution); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeSpiral##classe::get_EndingAngle(CATIAAngle *& oEndAngle) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,15,&_Trac2,&oEndAngle); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_EndingAngle(oEndAngle); \
   ExitAfterCall(this,15,_Trac2,&_ret_arg,&oEndAngle); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeSpiral##classe::put_EndingAngle(CATIAAngle * iEndAngle) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,16,&_Trac2,&iEndAngle); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_EndingAngle(iEndAngle); \
   ExitAfterCall(this,16,_Trac2,&_ret_arg,&iEndAngle); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeSpiral##classe::get_EndingRadius(CATIALength *& oEndRadius) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,17,&_Trac2,&oEndRadius); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_EndingRadius(oEndRadius); \
   ExitAfterCall(this,17,_Trac2,&_ret_arg,&oEndRadius); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeSpiral##classe::put_EndingRadius(CATIALength * iEndRadius) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,18,&_Trac2,&iEndRadius); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_EndingRadius(iEndRadius); \
   ExitAfterCall(this,18,_Trac2,&_ret_arg,&iEndRadius); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeSpiral##classe::get_RevolNumber(CATIARealParam *& oNbRevol) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,19,&_Trac2,&oNbRevol); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_RevolNumber(oNbRevol); \
   ExitAfterCall(this,19,_Trac2,&_ret_arg,&oNbRevol); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeSpiral##classe::put_RevolNumber(CATIARealParam * iNbRevol) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,20,&_Trac2,&iNbRevol); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_RevolNumber(iNbRevol); \
   ExitAfterCall(this,20,_Trac2,&_ret_arg,&iNbRevol); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeSpiral##classe::get_Pitch(CATIALength *& oInvert) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,21,&_Trac2,&oInvert); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Pitch(oInvert); \
   ExitAfterCall(this,21,_Trac2,&_ret_arg,&oInvert); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeSpiral##classe::put_Pitch(CATIALength * iInvert) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,22,&_Trac2,&iInvert); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_Pitch(iInvert); \
   ExitAfterCall(this,22,_Trac2,&_ret_arg,&iInvert); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeSpiral##classe::SetAngleRadiusParam(double iEndAngle, double iRevolNumber, double iEndRadius) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,23,&_Trac2,&iEndAngle,&iRevolNumber,&iEndRadius); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetAngleRadiusParam(iEndAngle,iRevolNumber,iEndRadius); \
   ExitAfterCall(this,23,_Trac2,&_ret_arg,&iEndAngle,&iRevolNumber,&iEndRadius); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeSpiral##classe::SetAnglePitchParam(double iEndAngle, double iRevolNumber, double iPitch) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,24,&_Trac2,&iEndAngle,&iRevolNumber,&iPitch); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetAnglePitchParam(iEndAngle,iRevolNumber,iPitch); \
   ExitAfterCall(this,24,_Trac2,&_ret_arg,&iEndAngle,&iRevolNumber,&iPitch); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeSpiral##classe::SetRadiusPitchParam(double iEndRadius, double iPitch) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,25,&_Trac2,&iEndRadius,&iPitch); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetRadiusPitchParam(iEndRadius,iPitch); \
   ExitAfterCall(this,25,_Trac2,&_ret_arg,&iEndRadius,&iPitch); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeSpiral##classe::Compute() \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,26,&_Trac2); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->Compute(); \
   ExitAfterCall(this,26,_Trac2,&_ret_arg); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeSpiral##classe::AppendHybridShape(CATIAHybridShape * iHybridShape) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,27,&_Trac2,&iHybridShape); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->AppendHybridShape(iHybridShape); \
   ExitAfterCall(this,27,_Trac2,&_ret_arg,&iHybridShape); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeSpiral##classe::get_Thickness(CATIAHybridShape *& oThickness) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,28,&_Trac2,&oThickness); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Thickness(oThickness); \
   ExitAfterCall(this,28,_Trac2,&_ret_arg,&oThickness); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAHybridShapeSpiral##classe::get_Application(CATIAApplication *& oApplication) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,29,&_Trac2,&oApplication); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Application(oApplication); \
   ExitAfterCall(this,29,_Trac2,&_ret_arg,&oApplication); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAHybridShapeSpiral##classe::get_Parent(CATBaseDispatch *& oParent) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,30,&_Trac2,&oParent); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Parent(oParent); \
   ExitAfterCall(this,30,_Trac2,&_ret_arg,&oParent); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAHybridShapeSpiral##classe::get_Name(CATBSTR & oNameBSTR) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,31,&_Trac2,&oNameBSTR); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Name(oNameBSTR); \
   ExitAfterCall(this,31,_Trac2,&_ret_arg,&oNameBSTR); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAHybridShapeSpiral##classe::put_Name(const CATBSTR & iNameBSTR) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,32,&_Trac2,&iNameBSTR); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_Name(iNameBSTR); \
   ExitAfterCall(this,32,_Trac2,&_ret_arg,&iNameBSTR); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAHybridShapeSpiral##classe::GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,33,&_Trac2,&IDName,&RealObj); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetItem(IDName,RealObj); \
   ExitAfterCall(this,33,_Trac2,&_ret_arg,&IDName,&RealObj); \
   return(_ret_arg); \
} \



/* Macro used to link an implementation with an interface */
#define TIE_CATIAHybridShapeSpiral(classe) \
 \
 \
declare_TIE_CATIAHybridShapeSpiral(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIAHybridShapeSpiral##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIAHybridShapeSpiral,"CATIAHybridShapeSpiral",CATIAHybridShapeSpiral::MetaObject(),classe::MetaObject(),TIE); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIAHybridShapeSpiral(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIECreation(CATIAHybridShapeSpiral, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIAHybridShapeSpiral##classe(classe::MetaObject(),CATIAHybridShapeSpiral::MetaObject(),(void *)CreateTIECATIAHybridShapeSpiral##classe)



/* Macro used to link an implementation with an interface */
/* This TIE is chained on the implementation object */
#define TIEchain_CATIAHybridShapeSpiral(classe) \
 \
 \
declare_TIE_CATIAHybridShapeSpiral(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIAHybridShapeSpiral##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIAHybridShapeSpiral,"CATIAHybridShapeSpiral",CATIAHybridShapeSpiral::MetaObject(),classe::MetaObject(),TIEchain); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIAHybridShapeSpiral(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIEchainCreation(CATIAHybridShapeSpiral, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIAHybridShapeSpiral##classe(classe::MetaObject(),CATIAHybridShapeSpiral::MetaObject(),(void *)CreateTIECATIAHybridShapeSpiral##classe)


/* Macro to switch between BOA and TIE at build time */ 
#ifdef CATSYS_BOA_IS_TIE
#define BOA_CATIAHybridShapeSpiral(classe) TIE_CATIAHybridShapeSpiral(classe)
#else
#define BOA_CATIAHybridShapeSpiral(classe) CATImplementBOA(CATIAHybridShapeSpiral, classe)
#endif

#endif
