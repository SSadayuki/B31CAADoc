#ifndef __TIE_CATIACircle2D
#define __TIE_CATIACircle2D

#include <string.h>
#include "CATBaseUnknown.h"
#include "CATMetaClass.h"
#include "CATMacForTie.h"
#include "CATExitJournal.h"
#include "CATIACircle2D.h"
#include "JS0DSPA.h"


#ifdef _WINDOWS_SOURCE
#define Exported __declspec(dllexport)
#define Imported __declspec(dllimport)
#else
#define Exported 
#define Imported 
#endif


/* To link an implementation with the interface CATIACircle2D */
#define declare_TIE_CATIACircle2D(classe) \
 \
 \
class TIECATIACircle2D##classe : public CATIACircle2D \
{ \
   private: \
      CATDeclareCommonTIEMembers \
   public: \
      CATDeclareTIEMethods(CATIACircle2D, classe) \
      CATDeclareIUnknownMethodsForCATBaseUnknownTIE \
      CATDeclareIDispatchMethodsForCATBaseUnknownTIE \
      CATDeclareCATBaseUnknownMethodsForTIE \
      virtual HRESULT __stdcall get_CenterPoint(CATIAPoint2D *& oCenterPoint); \
      virtual HRESULT __stdcall put_CenterPoint(CATIAPoint2D * iCenterPoint); \
      virtual HRESULT __stdcall get_Radius(double & oRadius); \
      virtual HRESULT __stdcall SetData(double iCenterX, double iCenterY, double iRadius); \
      virtual HRESULT __stdcall GetCenter(CATSafeArrayVariant & oData); \
      virtual HRESULT __stdcall get_StartPoint(CATIAPoint2D *& oStartPoint); \
      virtual HRESULT __stdcall put_StartPoint(CATIAPoint2D * iStartPoint); \
      virtual HRESULT __stdcall get_EndPoint(CATIAPoint2D *& oEndPoint); \
      virtual HRESULT __stdcall put_EndPoint(CATIAPoint2D * iEndPoint); \
      virtual HRESULT __stdcall get_Continuity(short & oLevel); \
      virtual HRESULT __stdcall get_Period(double & oPeriod); \
      virtual HRESULT __stdcall GetPointAtParam(double iParam, CATSafeArrayVariant & oPoint); \
      virtual HRESULT __stdcall GetTangent(double iParam, CATSafeArrayVariant & oTangency); \
      virtual HRESULT __stdcall GetCurvature(double iParam, CATSafeArrayVariant & oCurvature); \
      virtual HRESULT __stdcall GetDerivatives(double iParam, CATSafeArrayVariant & oDerivative); \
      virtual HRESULT __stdcall GetParamAtLength(double iFromParam, double iLength, double & oParam); \
      virtual HRESULT __stdcall GetLengthAtParam(double iFromParam, double iToParam, double & oLength); \
      virtual HRESULT __stdcall IsPeriodic(CAT_VARIANT_BOOL & oPeriodic); \
      virtual HRESULT __stdcall GetParamExtents(CATSafeArrayVariant & oParams); \
      virtual HRESULT __stdcall GetRangeBox(CATSafeArrayVariant & oBoundPoint); \
      virtual HRESULT __stdcall GetEndPoints(CATSafeArrayVariant & oEndPoints); \
      virtual HRESULT __stdcall get_ReportName(CATLONG & oReportName); \
      virtual HRESULT __stdcall put_ReportName(CATLONG iReportName); \
      virtual HRESULT __stdcall get_Construction(CAT_VARIANT_BOOL & oConstruction); \
      virtual HRESULT __stdcall put_Construction(CAT_VARIANT_BOOL iConstruction); \
      virtual HRESULT __stdcall get_GeometricType(CatGeometricType & oType); \
      virtual HRESULT  __stdcall get_Application(CATIAApplication *& oApplication); \
      virtual HRESULT  __stdcall get_Parent(CATBaseDispatch *& oParent); \
      virtual HRESULT  __stdcall get_Name(CATBSTR & oNameBSTR); \
      virtual HRESULT  __stdcall put_Name(const CATBSTR & iNameBSTR); \
      virtual HRESULT  __stdcall GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj); \
};



#define ENVTIEdeclare_CATIACircle2D(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
virtual HRESULT __stdcall get_CenterPoint(CATIAPoint2D *& oCenterPoint); \
virtual HRESULT __stdcall put_CenterPoint(CATIAPoint2D * iCenterPoint); \
virtual HRESULT __stdcall get_Radius(double & oRadius); \
virtual HRESULT __stdcall SetData(double iCenterX, double iCenterY, double iRadius); \
virtual HRESULT __stdcall GetCenter(CATSafeArrayVariant & oData); \
virtual HRESULT __stdcall get_StartPoint(CATIAPoint2D *& oStartPoint); \
virtual HRESULT __stdcall put_StartPoint(CATIAPoint2D * iStartPoint); \
virtual HRESULT __stdcall get_EndPoint(CATIAPoint2D *& oEndPoint); \
virtual HRESULT __stdcall put_EndPoint(CATIAPoint2D * iEndPoint); \
virtual HRESULT __stdcall get_Continuity(short & oLevel); \
virtual HRESULT __stdcall get_Period(double & oPeriod); \
virtual HRESULT __stdcall GetPointAtParam(double iParam, CATSafeArrayVariant & oPoint); \
virtual HRESULT __stdcall GetTangent(double iParam, CATSafeArrayVariant & oTangency); \
virtual HRESULT __stdcall GetCurvature(double iParam, CATSafeArrayVariant & oCurvature); \
virtual HRESULT __stdcall GetDerivatives(double iParam, CATSafeArrayVariant & oDerivative); \
virtual HRESULT __stdcall GetParamAtLength(double iFromParam, double iLength, double & oParam); \
virtual HRESULT __stdcall GetLengthAtParam(double iFromParam, double iToParam, double & oLength); \
virtual HRESULT __stdcall IsPeriodic(CAT_VARIANT_BOOL & oPeriodic); \
virtual HRESULT __stdcall GetParamExtents(CATSafeArrayVariant & oParams); \
virtual HRESULT __stdcall GetRangeBox(CATSafeArrayVariant & oBoundPoint); \
virtual HRESULT __stdcall GetEndPoints(CATSafeArrayVariant & oEndPoints); \
virtual HRESULT __stdcall get_ReportName(CATLONG & oReportName); \
virtual HRESULT __stdcall put_ReportName(CATLONG iReportName); \
virtual HRESULT __stdcall get_Construction(CAT_VARIANT_BOOL & oConstruction); \
virtual HRESULT __stdcall put_Construction(CAT_VARIANT_BOOL iConstruction); \
virtual HRESULT __stdcall get_GeometricType(CatGeometricType & oType); \
virtual HRESULT  __stdcall get_Application(CATIAApplication *& oApplication); \
virtual HRESULT  __stdcall get_Parent(CATBaseDispatch *& oParent); \
virtual HRESULT  __stdcall get_Name(CATBSTR & oNameBSTR); \
virtual HRESULT  __stdcall put_Name(const CATBSTR & iNameBSTR); \
virtual HRESULT  __stdcall GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj); \


#define ENVTIEdefine_CATIACircle2D(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
HRESULT __stdcall  ENVTIEName::get_CenterPoint(CATIAPoint2D *& oCenterPoint) \
{ \
return (ENVTIECALL(CATIACircle2D,ENVTIETypeLetter,ENVTIELetter)get_CenterPoint(oCenterPoint)); \
} \
HRESULT __stdcall  ENVTIEName::put_CenterPoint(CATIAPoint2D * iCenterPoint) \
{ \
return (ENVTIECALL(CATIACircle2D,ENVTIETypeLetter,ENVTIELetter)put_CenterPoint(iCenterPoint)); \
} \
HRESULT __stdcall  ENVTIEName::get_Radius(double & oRadius) \
{ \
return (ENVTIECALL(CATIACircle2D,ENVTIETypeLetter,ENVTIELetter)get_Radius(oRadius)); \
} \
HRESULT __stdcall  ENVTIEName::SetData(double iCenterX, double iCenterY, double iRadius) \
{ \
return (ENVTIECALL(CATIACircle2D,ENVTIETypeLetter,ENVTIELetter)SetData(iCenterX,iCenterY,iRadius)); \
} \
HRESULT __stdcall  ENVTIEName::GetCenter(CATSafeArrayVariant & oData) \
{ \
return (ENVTIECALL(CATIACircle2D,ENVTIETypeLetter,ENVTIELetter)GetCenter(oData)); \
} \
HRESULT __stdcall  ENVTIEName::get_StartPoint(CATIAPoint2D *& oStartPoint) \
{ \
return (ENVTIECALL(CATIACircle2D,ENVTIETypeLetter,ENVTIELetter)get_StartPoint(oStartPoint)); \
} \
HRESULT __stdcall  ENVTIEName::put_StartPoint(CATIAPoint2D * iStartPoint) \
{ \
return (ENVTIECALL(CATIACircle2D,ENVTIETypeLetter,ENVTIELetter)put_StartPoint(iStartPoint)); \
} \
HRESULT __stdcall  ENVTIEName::get_EndPoint(CATIAPoint2D *& oEndPoint) \
{ \
return (ENVTIECALL(CATIACircle2D,ENVTIETypeLetter,ENVTIELetter)get_EndPoint(oEndPoint)); \
} \
HRESULT __stdcall  ENVTIEName::put_EndPoint(CATIAPoint2D * iEndPoint) \
{ \
return (ENVTIECALL(CATIACircle2D,ENVTIETypeLetter,ENVTIELetter)put_EndPoint(iEndPoint)); \
} \
HRESULT __stdcall  ENVTIEName::get_Continuity(short & oLevel) \
{ \
return (ENVTIECALL(CATIACircle2D,ENVTIETypeLetter,ENVTIELetter)get_Continuity(oLevel)); \
} \
HRESULT __stdcall  ENVTIEName::get_Period(double & oPeriod) \
{ \
return (ENVTIECALL(CATIACircle2D,ENVTIETypeLetter,ENVTIELetter)get_Period(oPeriod)); \
} \
HRESULT __stdcall  ENVTIEName::GetPointAtParam(double iParam, CATSafeArrayVariant & oPoint) \
{ \
return (ENVTIECALL(CATIACircle2D,ENVTIETypeLetter,ENVTIELetter)GetPointAtParam(iParam,oPoint)); \
} \
HRESULT __stdcall  ENVTIEName::GetTangent(double iParam, CATSafeArrayVariant & oTangency) \
{ \
return (ENVTIECALL(CATIACircle2D,ENVTIETypeLetter,ENVTIELetter)GetTangent(iParam,oTangency)); \
} \
HRESULT __stdcall  ENVTIEName::GetCurvature(double iParam, CATSafeArrayVariant & oCurvature) \
{ \
return (ENVTIECALL(CATIACircle2D,ENVTIETypeLetter,ENVTIELetter)GetCurvature(iParam,oCurvature)); \
} \
HRESULT __stdcall  ENVTIEName::GetDerivatives(double iParam, CATSafeArrayVariant & oDerivative) \
{ \
return (ENVTIECALL(CATIACircle2D,ENVTIETypeLetter,ENVTIELetter)GetDerivatives(iParam,oDerivative)); \
} \
HRESULT __stdcall  ENVTIEName::GetParamAtLength(double iFromParam, double iLength, double & oParam) \
{ \
return (ENVTIECALL(CATIACircle2D,ENVTIETypeLetter,ENVTIELetter)GetParamAtLength(iFromParam,iLength,oParam)); \
} \
HRESULT __stdcall  ENVTIEName::GetLengthAtParam(double iFromParam, double iToParam, double & oLength) \
{ \
return (ENVTIECALL(CATIACircle2D,ENVTIETypeLetter,ENVTIELetter)GetLengthAtParam(iFromParam,iToParam,oLength)); \
} \
HRESULT __stdcall  ENVTIEName::IsPeriodic(CAT_VARIANT_BOOL & oPeriodic) \
{ \
return (ENVTIECALL(CATIACircle2D,ENVTIETypeLetter,ENVTIELetter)IsPeriodic(oPeriodic)); \
} \
HRESULT __stdcall  ENVTIEName::GetParamExtents(CATSafeArrayVariant & oParams) \
{ \
return (ENVTIECALL(CATIACircle2D,ENVTIETypeLetter,ENVTIELetter)GetParamExtents(oParams)); \
} \
HRESULT __stdcall  ENVTIEName::GetRangeBox(CATSafeArrayVariant & oBoundPoint) \
{ \
return (ENVTIECALL(CATIACircle2D,ENVTIETypeLetter,ENVTIELetter)GetRangeBox(oBoundPoint)); \
} \
HRESULT __stdcall  ENVTIEName::GetEndPoints(CATSafeArrayVariant & oEndPoints) \
{ \
return (ENVTIECALL(CATIACircle2D,ENVTIETypeLetter,ENVTIELetter)GetEndPoints(oEndPoints)); \
} \
HRESULT __stdcall  ENVTIEName::get_ReportName(CATLONG & oReportName) \
{ \
return (ENVTIECALL(CATIACircle2D,ENVTIETypeLetter,ENVTIELetter)get_ReportName(oReportName)); \
} \
HRESULT __stdcall  ENVTIEName::put_ReportName(CATLONG iReportName) \
{ \
return (ENVTIECALL(CATIACircle2D,ENVTIETypeLetter,ENVTIELetter)put_ReportName(iReportName)); \
} \
HRESULT __stdcall  ENVTIEName::get_Construction(CAT_VARIANT_BOOL & oConstruction) \
{ \
return (ENVTIECALL(CATIACircle2D,ENVTIETypeLetter,ENVTIELetter)get_Construction(oConstruction)); \
} \
HRESULT __stdcall  ENVTIEName::put_Construction(CAT_VARIANT_BOOL iConstruction) \
{ \
return (ENVTIECALL(CATIACircle2D,ENVTIETypeLetter,ENVTIELetter)put_Construction(iConstruction)); \
} \
HRESULT __stdcall  ENVTIEName::get_GeometricType(CatGeometricType & oType) \
{ \
return (ENVTIECALL(CATIACircle2D,ENVTIETypeLetter,ENVTIELetter)get_GeometricType(oType)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Application(CATIAApplication *& oApplication) \
{ \
return (ENVTIECALL(CATIACircle2D,ENVTIETypeLetter,ENVTIELetter)get_Application(oApplication)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Parent(CATBaseDispatch *& oParent) \
{ \
return (ENVTIECALL(CATIACircle2D,ENVTIETypeLetter,ENVTIELetter)get_Parent(oParent)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Name(CATBSTR & oNameBSTR) \
{ \
return (ENVTIECALL(CATIACircle2D,ENVTIETypeLetter,ENVTIELetter)get_Name(oNameBSTR)); \
} \
HRESULT  __stdcall  ENVTIEName::put_Name(const CATBSTR & iNameBSTR) \
{ \
return (ENVTIECALL(CATIACircle2D,ENVTIETypeLetter,ENVTIELetter)put_Name(iNameBSTR)); \
} \
HRESULT  __stdcall  ENVTIEName::GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj) \
{ \
return (ENVTIECALL(CATIACircle2D,ENVTIETypeLetter,ENVTIELetter)GetItem(IDName,RealObj)); \
} \


/* Name of the TIE class */
#define class_TIE_CATIACircle2D(classe)    TIECATIACircle2D##classe


/* Common methods inside a TIE */
#define common_TIE_CATIACircle2D(classe) \
 \
 \
/* Static initialization */ \
CATDefineCommonTIEMembers(CATIACircle2D, classe) \
 \
 \
CATImplementTIEMethods(CATIACircle2D, classe) \
CATImplementIUnknownMethodsForCATBaseUnknownTIE(CATIACircle2D, classe, 2) \
CATImplementIDispatchMethodsForCATBaseUnknownTIE(CATIACircle2D, classe) \
CATImplementCATBaseUnknownMethodsForTIE(CATIACircle2D, classe) \
 \
HRESULT __stdcall  TIECATIACircle2D##classe::get_CenterPoint(CATIAPoint2D *& oCenterPoint) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,1,&_Trac2,&oCenterPoint); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_CenterPoint(oCenterPoint); \
   ExitAfterCall(this,1,_Trac2,&_ret_arg,&oCenterPoint); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIACircle2D##classe::put_CenterPoint(CATIAPoint2D * iCenterPoint) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,2,&_Trac2,&iCenterPoint); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_CenterPoint(iCenterPoint); \
   ExitAfterCall(this,2,_Trac2,&_ret_arg,&iCenterPoint); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIACircle2D##classe::get_Radius(double & oRadius) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,3,&_Trac2,&oRadius); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Radius(oRadius); \
   ExitAfterCall(this,3,_Trac2,&_ret_arg,&oRadius); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIACircle2D##classe::SetData(double iCenterX, double iCenterY, double iRadius) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,4,&_Trac2,&iCenterX,&iCenterY,&iRadius); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetData(iCenterX,iCenterY,iRadius); \
   ExitAfterCall(this,4,_Trac2,&_ret_arg,&iCenterX,&iCenterY,&iRadius); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIACircle2D##classe::GetCenter(CATSafeArrayVariant & oData) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,5,&_Trac2,&oData); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetCenter(oData); \
   ExitAfterCall(this,5,_Trac2,&_ret_arg,&oData); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIACircle2D##classe::get_StartPoint(CATIAPoint2D *& oStartPoint) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,6,&_Trac2,&oStartPoint); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_StartPoint(oStartPoint); \
   ExitAfterCall(this,6,_Trac2,&_ret_arg,&oStartPoint); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIACircle2D##classe::put_StartPoint(CATIAPoint2D * iStartPoint) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,7,&_Trac2,&iStartPoint); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_StartPoint(iStartPoint); \
   ExitAfterCall(this,7,_Trac2,&_ret_arg,&iStartPoint); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIACircle2D##classe::get_EndPoint(CATIAPoint2D *& oEndPoint) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,8,&_Trac2,&oEndPoint); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_EndPoint(oEndPoint); \
   ExitAfterCall(this,8,_Trac2,&_ret_arg,&oEndPoint); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIACircle2D##classe::put_EndPoint(CATIAPoint2D * iEndPoint) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,9,&_Trac2,&iEndPoint); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_EndPoint(iEndPoint); \
   ExitAfterCall(this,9,_Trac2,&_ret_arg,&iEndPoint); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIACircle2D##classe::get_Continuity(short & oLevel) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,10,&_Trac2,&oLevel); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Continuity(oLevel); \
   ExitAfterCall(this,10,_Trac2,&_ret_arg,&oLevel); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIACircle2D##classe::get_Period(double & oPeriod) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,11,&_Trac2,&oPeriod); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Period(oPeriod); \
   ExitAfterCall(this,11,_Trac2,&_ret_arg,&oPeriod); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIACircle2D##classe::GetPointAtParam(double iParam, CATSafeArrayVariant & oPoint) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,12,&_Trac2,&iParam,&oPoint); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetPointAtParam(iParam,oPoint); \
   ExitAfterCall(this,12,_Trac2,&_ret_arg,&iParam,&oPoint); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIACircle2D##classe::GetTangent(double iParam, CATSafeArrayVariant & oTangency) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,13,&_Trac2,&iParam,&oTangency); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetTangent(iParam,oTangency); \
   ExitAfterCall(this,13,_Trac2,&_ret_arg,&iParam,&oTangency); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIACircle2D##classe::GetCurvature(double iParam, CATSafeArrayVariant & oCurvature) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,14,&_Trac2,&iParam,&oCurvature); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetCurvature(iParam,oCurvature); \
   ExitAfterCall(this,14,_Trac2,&_ret_arg,&iParam,&oCurvature); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIACircle2D##classe::GetDerivatives(double iParam, CATSafeArrayVariant & oDerivative) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,15,&_Trac2,&iParam,&oDerivative); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetDerivatives(iParam,oDerivative); \
   ExitAfterCall(this,15,_Trac2,&_ret_arg,&iParam,&oDerivative); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIACircle2D##classe::GetParamAtLength(double iFromParam, double iLength, double & oParam) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,16,&_Trac2,&iFromParam,&iLength,&oParam); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetParamAtLength(iFromParam,iLength,oParam); \
   ExitAfterCall(this,16,_Trac2,&_ret_arg,&iFromParam,&iLength,&oParam); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIACircle2D##classe::GetLengthAtParam(double iFromParam, double iToParam, double & oLength) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,17,&_Trac2,&iFromParam,&iToParam,&oLength); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetLengthAtParam(iFromParam,iToParam,oLength); \
   ExitAfterCall(this,17,_Trac2,&_ret_arg,&iFromParam,&iToParam,&oLength); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIACircle2D##classe::IsPeriodic(CAT_VARIANT_BOOL & oPeriodic) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,18,&_Trac2,&oPeriodic); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->IsPeriodic(oPeriodic); \
   ExitAfterCall(this,18,_Trac2,&_ret_arg,&oPeriodic); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIACircle2D##classe::GetParamExtents(CATSafeArrayVariant & oParams) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,19,&_Trac2,&oParams); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetParamExtents(oParams); \
   ExitAfterCall(this,19,_Trac2,&_ret_arg,&oParams); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIACircle2D##classe::GetRangeBox(CATSafeArrayVariant & oBoundPoint) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,20,&_Trac2,&oBoundPoint); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetRangeBox(oBoundPoint); \
   ExitAfterCall(this,20,_Trac2,&_ret_arg,&oBoundPoint); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIACircle2D##classe::GetEndPoints(CATSafeArrayVariant & oEndPoints) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,21,&_Trac2,&oEndPoints); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetEndPoints(oEndPoints); \
   ExitAfterCall(this,21,_Trac2,&_ret_arg,&oEndPoints); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIACircle2D##classe::get_ReportName(CATLONG & oReportName) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,22,&_Trac2,&oReportName); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_ReportName(oReportName); \
   ExitAfterCall(this,22,_Trac2,&_ret_arg,&oReportName); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIACircle2D##classe::put_ReportName(CATLONG iReportName) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,23,&_Trac2,&iReportName); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_ReportName(iReportName); \
   ExitAfterCall(this,23,_Trac2,&_ret_arg,&iReportName); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIACircle2D##classe::get_Construction(CAT_VARIANT_BOOL & oConstruction) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,24,&_Trac2,&oConstruction); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Construction(oConstruction); \
   ExitAfterCall(this,24,_Trac2,&_ret_arg,&oConstruction); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIACircle2D##classe::put_Construction(CAT_VARIANT_BOOL iConstruction) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,25,&_Trac2,&iConstruction); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_Construction(iConstruction); \
   ExitAfterCall(this,25,_Trac2,&_ret_arg,&iConstruction); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIACircle2D##classe::get_GeometricType(CatGeometricType & oType) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,26,&_Trac2,&oType); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_GeometricType(oType); \
   ExitAfterCall(this,26,_Trac2,&_ret_arg,&oType); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIACircle2D##classe::get_Application(CATIAApplication *& oApplication) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,27,&_Trac2,&oApplication); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Application(oApplication); \
   ExitAfterCall(this,27,_Trac2,&_ret_arg,&oApplication); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIACircle2D##classe::get_Parent(CATBaseDispatch *& oParent) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,28,&_Trac2,&oParent); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Parent(oParent); \
   ExitAfterCall(this,28,_Trac2,&_ret_arg,&oParent); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIACircle2D##classe::get_Name(CATBSTR & oNameBSTR) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,29,&_Trac2,&oNameBSTR); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Name(oNameBSTR); \
   ExitAfterCall(this,29,_Trac2,&_ret_arg,&oNameBSTR); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIACircle2D##classe::put_Name(const CATBSTR & iNameBSTR) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,30,&_Trac2,&iNameBSTR); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_Name(iNameBSTR); \
   ExitAfterCall(this,30,_Trac2,&_ret_arg,&iNameBSTR); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIACircle2D##classe::GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,31,&_Trac2,&IDName,&RealObj); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetItem(IDName,RealObj); \
   ExitAfterCall(this,31,_Trac2,&_ret_arg,&IDName,&RealObj); \
   return(_ret_arg); \
} \



/* Macro used to link an implementation with an interface */
#define TIE_CATIACircle2D(classe) \
 \
 \
declare_TIE_CATIACircle2D(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIACircle2D##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIACircle2D,"CATIACircle2D",CATIACircle2D::MetaObject(),classe::MetaObject(),TIE); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIACircle2D(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIECreation(CATIACircle2D, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIACircle2D##classe(classe::MetaObject(),CATIACircle2D::MetaObject(),(void *)CreateTIECATIACircle2D##classe)



/* Macro used to link an implementation with an interface */
/* This TIE is chained on the implementation object */
#define TIEchain_CATIACircle2D(classe) \
 \
 \
declare_TIE_CATIACircle2D(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIACircle2D##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIACircle2D,"CATIACircle2D",CATIACircle2D::MetaObject(),classe::MetaObject(),TIEchain); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIACircle2D(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIEchainCreation(CATIACircle2D, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIACircle2D##classe(classe::MetaObject(),CATIACircle2D::MetaObject(),(void *)CreateTIECATIACircle2D##classe)


/* Macro to switch between BOA and TIE at build time */ 
#ifdef CATSYS_BOA_IS_TIE
#define BOA_CATIACircle2D(classe) TIE_CATIACircle2D(classe)
#else
#define BOA_CATIACircle2D(classe) CATImplementBOA(CATIACircle2D, classe)
#endif

#endif
