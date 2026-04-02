#ifndef __TIE_CATIAHybridShapeConic
#define __TIE_CATIAHybridShapeConic

#include <string.h>
#include "CATBaseUnknown.h"
#include "CATMetaClass.h"
#include "CATMacForTie.h"
#include "CATExitJournal.h"
#include "CATIAHybridShapeConic.h"
#include "JS0DSPA.h"


#ifdef _WINDOWS_SOURCE
#define Exported __declspec(dllexport)
#define Imported __declspec(dllimport)
#else
#define Exported 
#define Imported 
#endif


/* To link an implementation with the interface CATIAHybridShapeConic */
#define declare_TIE_CATIAHybridShapeConic(classe) \
 \
 \
class TIECATIAHybridShapeConic##classe : public CATIAHybridShapeConic \
{ \
   private: \
      CATDeclareCommonTIEMembers \
   public: \
      CATDeclareTIEMethods(CATIAHybridShapeConic, classe) \
      CATDeclareIUnknownMethodsForCATBaseUnknownTIE \
      CATDeclareIDispatchMethodsForCATBaseUnknownTIE \
      CATDeclareCATBaseUnknownMethodsForTIE \
      virtual HRESULT __stdcall SetStartAndEndTangentsPlusPassingPoint(CATIAHybridShapeDirection * iStartTgt, CATIAHybridShapeDirection * iEndTgt, CATIAReference * iPassingPt); \
      virtual HRESULT __stdcall SetStartAndEndTangentsPlusConicParameter(CATIAHybridShapeDirection * iStartTgt, CATIAHybridShapeDirection * iEndTgt, double iConicParam); \
      virtual HRESULT __stdcall SetTangentIntersectPointPlusPassingPoint(CATIAReference * iTgtInt, CATIAReference * iPassingPt); \
      virtual HRESULT __stdcall SetTangentIntersectPointPlusConicParm(CATIAReference * iTgtInt, double iConicParam); \
      virtual HRESULT __stdcall SetThreeIntermediatePassingPoints(CATIAReference * iPassPt1, CATIAReference * iPassPt2, CATIAReference * iPassPt3); \
      virtual HRESULT __stdcall SetTwoIntermediatePassingPointsPlusOneTangent(CATIAReference * iPassPt1, CATIAReference * iPassPt2, CATIAHybridShapeDirection * iTgtDir, CATLONG iIndexPoint); \
      virtual HRESULT __stdcall GetIntermediatePoint(CATLONG iIndexPoint, CATIAReference *& oEndPoint); \
      virtual HRESULT __stdcall SetIntermediatePoint(CATLONG iIndexPoint, CATIAReference * iEndPoint); \
      virtual HRESULT __stdcall GetIntermedTangent(CATLONG iIndexPoint, CATIAHybridShapeDirection *& oTgtDir); \
      virtual HRESULT __stdcall SetIntermediateTangent(CATLONG iIndexPoint, CATIAHybridShapeDirection * iTgtDir); \
      virtual HRESULT __stdcall SwitchIntermediateTangentDirection(CATLONG iIndexPoint); \
      virtual HRESULT __stdcall SetIntermediateTangentDirectionFlag(CATLONG iIndexPoint, CATLONG iOrientation); \
      virtual HRESULT __stdcall GetIntermediateTangentDirectionFlag(CATLONG iIndexPoint, CATLONG & oOrientation); \
      virtual HRESULT __stdcall SwitchStartTangentDirection(); \
      virtual HRESULT __stdcall SetStartTangentDirectionFlag(CATLONG iOrientation); \
      virtual HRESULT __stdcall GetStartTangentDirectionFlag(CATLONG & oOrientation); \
      virtual HRESULT __stdcall SwitchEndTangentDirection(); \
      virtual HRESULT __stdcall SetEndTangentDirectionFlag(CATLONG iOrientation); \
      virtual HRESULT __stdcall GetEndTangentDirectionFlag(CATLONG & oOrientation); \
      virtual HRESULT __stdcall get_SupportPlane(CATIAReference *& oSupportPlane); \
      virtual HRESULT __stdcall put_SupportPlane(CATIAReference * iSupport); \
      virtual HRESULT __stdcall get_TangentIntPoint(CATIAReference *& oTgtPtInt); \
      virtual HRESULT __stdcall put_TangentIntPoint(CATIAReference * iTgtPtInt); \
      virtual HRESULT __stdcall get_StartPoint(CATIAReference *& oStartPoint); \
      virtual HRESULT __stdcall put_StartPoint(CATIAReference * iStartPoint); \
      virtual HRESULT __stdcall get_EndPoint(CATIAReference *& oEndPoint); \
      virtual HRESULT __stdcall put_EndPoint(CATIAReference * iEndPoint); \
      virtual HRESULT __stdcall get_StartTangent(CATIAHybridShapeDirection *& oStartTangent); \
      virtual HRESULT __stdcall put_StartTangent(CATIAHybridShapeDirection * iStartTangent); \
      virtual HRESULT __stdcall get_EndTangent(CATIAHybridShapeDirection *& oEndTangent); \
      virtual HRESULT __stdcall put_EndTangent(CATIAHybridShapeDirection * iEndTangent); \
      virtual HRESULT __stdcall get_ConicParameter(double & oConicParameter); \
      virtual HRESULT __stdcall put_ConicParameter(double iConicParameter); \
      virtual HRESULT __stdcall get_ConicUserTol(CATIALength *& oConicUserTol); \
      virtual HRESULT __stdcall Compute(); \
      virtual HRESULT __stdcall AppendHybridShape(CATIAHybridShape * iHybridShape); \
      virtual HRESULT __stdcall get_Thickness(CATIAHybridShape *& oThickness); \
      virtual HRESULT  __stdcall get_Application(CATIAApplication *& oApplication); \
      virtual HRESULT  __stdcall get_Parent(CATBaseDispatch *& oParent); \
      virtual HRESULT  __stdcall get_Name(CATBSTR & oNameBSTR); \
      virtual HRESULT  __stdcall put_Name(const CATBSTR & iNameBSTR); \
      virtual HRESULT  __stdcall GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj); \
};



#define ENVTIEdeclare_CATIAHybridShapeConic(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
virtual HRESULT __stdcall SetStartAndEndTangentsPlusPassingPoint(CATIAHybridShapeDirection * iStartTgt, CATIAHybridShapeDirection * iEndTgt, CATIAReference * iPassingPt); \
virtual HRESULT __stdcall SetStartAndEndTangentsPlusConicParameter(CATIAHybridShapeDirection * iStartTgt, CATIAHybridShapeDirection * iEndTgt, double iConicParam); \
virtual HRESULT __stdcall SetTangentIntersectPointPlusPassingPoint(CATIAReference * iTgtInt, CATIAReference * iPassingPt); \
virtual HRESULT __stdcall SetTangentIntersectPointPlusConicParm(CATIAReference * iTgtInt, double iConicParam); \
virtual HRESULT __stdcall SetThreeIntermediatePassingPoints(CATIAReference * iPassPt1, CATIAReference * iPassPt2, CATIAReference * iPassPt3); \
virtual HRESULT __stdcall SetTwoIntermediatePassingPointsPlusOneTangent(CATIAReference * iPassPt1, CATIAReference * iPassPt2, CATIAHybridShapeDirection * iTgtDir, CATLONG iIndexPoint); \
virtual HRESULT __stdcall GetIntermediatePoint(CATLONG iIndexPoint, CATIAReference *& oEndPoint); \
virtual HRESULT __stdcall SetIntermediatePoint(CATLONG iIndexPoint, CATIAReference * iEndPoint); \
virtual HRESULT __stdcall GetIntermedTangent(CATLONG iIndexPoint, CATIAHybridShapeDirection *& oTgtDir); \
virtual HRESULT __stdcall SetIntermediateTangent(CATLONG iIndexPoint, CATIAHybridShapeDirection * iTgtDir); \
virtual HRESULT __stdcall SwitchIntermediateTangentDirection(CATLONG iIndexPoint); \
virtual HRESULT __stdcall SetIntermediateTangentDirectionFlag(CATLONG iIndexPoint, CATLONG iOrientation); \
virtual HRESULT __stdcall GetIntermediateTangentDirectionFlag(CATLONG iIndexPoint, CATLONG & oOrientation); \
virtual HRESULT __stdcall SwitchStartTangentDirection(); \
virtual HRESULT __stdcall SetStartTangentDirectionFlag(CATLONG iOrientation); \
virtual HRESULT __stdcall GetStartTangentDirectionFlag(CATLONG & oOrientation); \
virtual HRESULT __stdcall SwitchEndTangentDirection(); \
virtual HRESULT __stdcall SetEndTangentDirectionFlag(CATLONG iOrientation); \
virtual HRESULT __stdcall GetEndTangentDirectionFlag(CATLONG & oOrientation); \
virtual HRESULT __stdcall get_SupportPlane(CATIAReference *& oSupportPlane); \
virtual HRESULT __stdcall put_SupportPlane(CATIAReference * iSupport); \
virtual HRESULT __stdcall get_TangentIntPoint(CATIAReference *& oTgtPtInt); \
virtual HRESULT __stdcall put_TangentIntPoint(CATIAReference * iTgtPtInt); \
virtual HRESULT __stdcall get_StartPoint(CATIAReference *& oStartPoint); \
virtual HRESULT __stdcall put_StartPoint(CATIAReference * iStartPoint); \
virtual HRESULT __stdcall get_EndPoint(CATIAReference *& oEndPoint); \
virtual HRESULT __stdcall put_EndPoint(CATIAReference * iEndPoint); \
virtual HRESULT __stdcall get_StartTangent(CATIAHybridShapeDirection *& oStartTangent); \
virtual HRESULT __stdcall put_StartTangent(CATIAHybridShapeDirection * iStartTangent); \
virtual HRESULT __stdcall get_EndTangent(CATIAHybridShapeDirection *& oEndTangent); \
virtual HRESULT __stdcall put_EndTangent(CATIAHybridShapeDirection * iEndTangent); \
virtual HRESULT __stdcall get_ConicParameter(double & oConicParameter); \
virtual HRESULT __stdcall put_ConicParameter(double iConicParameter); \
virtual HRESULT __stdcall get_ConicUserTol(CATIALength *& oConicUserTol); \
virtual HRESULT __stdcall Compute(); \
virtual HRESULT __stdcall AppendHybridShape(CATIAHybridShape * iHybridShape); \
virtual HRESULT __stdcall get_Thickness(CATIAHybridShape *& oThickness); \
virtual HRESULT  __stdcall get_Application(CATIAApplication *& oApplication); \
virtual HRESULT  __stdcall get_Parent(CATBaseDispatch *& oParent); \
virtual HRESULT  __stdcall get_Name(CATBSTR & oNameBSTR); \
virtual HRESULT  __stdcall put_Name(const CATBSTR & iNameBSTR); \
virtual HRESULT  __stdcall GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj); \


#define ENVTIEdefine_CATIAHybridShapeConic(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
HRESULT __stdcall  ENVTIEName::SetStartAndEndTangentsPlusPassingPoint(CATIAHybridShapeDirection * iStartTgt, CATIAHybridShapeDirection * iEndTgt, CATIAReference * iPassingPt) \
{ \
return (ENVTIECALL(CATIAHybridShapeConic,ENVTIETypeLetter,ENVTIELetter)SetStartAndEndTangentsPlusPassingPoint(iStartTgt,iEndTgt,iPassingPt)); \
} \
HRESULT __stdcall  ENVTIEName::SetStartAndEndTangentsPlusConicParameter(CATIAHybridShapeDirection * iStartTgt, CATIAHybridShapeDirection * iEndTgt, double iConicParam) \
{ \
return (ENVTIECALL(CATIAHybridShapeConic,ENVTIETypeLetter,ENVTIELetter)SetStartAndEndTangentsPlusConicParameter(iStartTgt,iEndTgt,iConicParam)); \
} \
HRESULT __stdcall  ENVTIEName::SetTangentIntersectPointPlusPassingPoint(CATIAReference * iTgtInt, CATIAReference * iPassingPt) \
{ \
return (ENVTIECALL(CATIAHybridShapeConic,ENVTIETypeLetter,ENVTIELetter)SetTangentIntersectPointPlusPassingPoint(iTgtInt,iPassingPt)); \
} \
HRESULT __stdcall  ENVTIEName::SetTangentIntersectPointPlusConicParm(CATIAReference * iTgtInt, double iConicParam) \
{ \
return (ENVTIECALL(CATIAHybridShapeConic,ENVTIETypeLetter,ENVTIELetter)SetTangentIntersectPointPlusConicParm(iTgtInt,iConicParam)); \
} \
HRESULT __stdcall  ENVTIEName::SetThreeIntermediatePassingPoints(CATIAReference * iPassPt1, CATIAReference * iPassPt2, CATIAReference * iPassPt3) \
{ \
return (ENVTIECALL(CATIAHybridShapeConic,ENVTIETypeLetter,ENVTIELetter)SetThreeIntermediatePassingPoints(iPassPt1,iPassPt2,iPassPt3)); \
} \
HRESULT __stdcall  ENVTIEName::SetTwoIntermediatePassingPointsPlusOneTangent(CATIAReference * iPassPt1, CATIAReference * iPassPt2, CATIAHybridShapeDirection * iTgtDir, CATLONG iIndexPoint) \
{ \
return (ENVTIECALL(CATIAHybridShapeConic,ENVTIETypeLetter,ENVTIELetter)SetTwoIntermediatePassingPointsPlusOneTangent(iPassPt1,iPassPt2,iTgtDir,iIndexPoint)); \
} \
HRESULT __stdcall  ENVTIEName::GetIntermediatePoint(CATLONG iIndexPoint, CATIAReference *& oEndPoint) \
{ \
return (ENVTIECALL(CATIAHybridShapeConic,ENVTIETypeLetter,ENVTIELetter)GetIntermediatePoint(iIndexPoint,oEndPoint)); \
} \
HRESULT __stdcall  ENVTIEName::SetIntermediatePoint(CATLONG iIndexPoint, CATIAReference * iEndPoint) \
{ \
return (ENVTIECALL(CATIAHybridShapeConic,ENVTIETypeLetter,ENVTIELetter)SetIntermediatePoint(iIndexPoint,iEndPoint)); \
} \
HRESULT __stdcall  ENVTIEName::GetIntermedTangent(CATLONG iIndexPoint, CATIAHybridShapeDirection *& oTgtDir) \
{ \
return (ENVTIECALL(CATIAHybridShapeConic,ENVTIETypeLetter,ENVTIELetter)GetIntermedTangent(iIndexPoint,oTgtDir)); \
} \
HRESULT __stdcall  ENVTIEName::SetIntermediateTangent(CATLONG iIndexPoint, CATIAHybridShapeDirection * iTgtDir) \
{ \
return (ENVTIECALL(CATIAHybridShapeConic,ENVTIETypeLetter,ENVTIELetter)SetIntermediateTangent(iIndexPoint,iTgtDir)); \
} \
HRESULT __stdcall  ENVTIEName::SwitchIntermediateTangentDirection(CATLONG iIndexPoint) \
{ \
return (ENVTIECALL(CATIAHybridShapeConic,ENVTIETypeLetter,ENVTIELetter)SwitchIntermediateTangentDirection(iIndexPoint)); \
} \
HRESULT __stdcall  ENVTIEName::SetIntermediateTangentDirectionFlag(CATLONG iIndexPoint, CATLONG iOrientation) \
{ \
return (ENVTIECALL(CATIAHybridShapeConic,ENVTIETypeLetter,ENVTIELetter)SetIntermediateTangentDirectionFlag(iIndexPoint,iOrientation)); \
} \
HRESULT __stdcall  ENVTIEName::GetIntermediateTangentDirectionFlag(CATLONG iIndexPoint, CATLONG & oOrientation) \
{ \
return (ENVTIECALL(CATIAHybridShapeConic,ENVTIETypeLetter,ENVTIELetter)GetIntermediateTangentDirectionFlag(iIndexPoint,oOrientation)); \
} \
HRESULT __stdcall  ENVTIEName::SwitchStartTangentDirection() \
{ \
return (ENVTIECALL(CATIAHybridShapeConic,ENVTIETypeLetter,ENVTIELetter)SwitchStartTangentDirection()); \
} \
HRESULT __stdcall  ENVTIEName::SetStartTangentDirectionFlag(CATLONG iOrientation) \
{ \
return (ENVTIECALL(CATIAHybridShapeConic,ENVTIETypeLetter,ENVTIELetter)SetStartTangentDirectionFlag(iOrientation)); \
} \
HRESULT __stdcall  ENVTIEName::GetStartTangentDirectionFlag(CATLONG & oOrientation) \
{ \
return (ENVTIECALL(CATIAHybridShapeConic,ENVTIETypeLetter,ENVTIELetter)GetStartTangentDirectionFlag(oOrientation)); \
} \
HRESULT __stdcall  ENVTIEName::SwitchEndTangentDirection() \
{ \
return (ENVTIECALL(CATIAHybridShapeConic,ENVTIETypeLetter,ENVTIELetter)SwitchEndTangentDirection()); \
} \
HRESULT __stdcall  ENVTIEName::SetEndTangentDirectionFlag(CATLONG iOrientation) \
{ \
return (ENVTIECALL(CATIAHybridShapeConic,ENVTIETypeLetter,ENVTIELetter)SetEndTangentDirectionFlag(iOrientation)); \
} \
HRESULT __stdcall  ENVTIEName::GetEndTangentDirectionFlag(CATLONG & oOrientation) \
{ \
return (ENVTIECALL(CATIAHybridShapeConic,ENVTIETypeLetter,ENVTIELetter)GetEndTangentDirectionFlag(oOrientation)); \
} \
HRESULT __stdcall  ENVTIEName::get_SupportPlane(CATIAReference *& oSupportPlane) \
{ \
return (ENVTIECALL(CATIAHybridShapeConic,ENVTIETypeLetter,ENVTIELetter)get_SupportPlane(oSupportPlane)); \
} \
HRESULT __stdcall  ENVTIEName::put_SupportPlane(CATIAReference * iSupport) \
{ \
return (ENVTIECALL(CATIAHybridShapeConic,ENVTIETypeLetter,ENVTIELetter)put_SupportPlane(iSupport)); \
} \
HRESULT __stdcall  ENVTIEName::get_TangentIntPoint(CATIAReference *& oTgtPtInt) \
{ \
return (ENVTIECALL(CATIAHybridShapeConic,ENVTIETypeLetter,ENVTIELetter)get_TangentIntPoint(oTgtPtInt)); \
} \
HRESULT __stdcall  ENVTIEName::put_TangentIntPoint(CATIAReference * iTgtPtInt) \
{ \
return (ENVTIECALL(CATIAHybridShapeConic,ENVTIETypeLetter,ENVTIELetter)put_TangentIntPoint(iTgtPtInt)); \
} \
HRESULT __stdcall  ENVTIEName::get_StartPoint(CATIAReference *& oStartPoint) \
{ \
return (ENVTIECALL(CATIAHybridShapeConic,ENVTIETypeLetter,ENVTIELetter)get_StartPoint(oStartPoint)); \
} \
HRESULT __stdcall  ENVTIEName::put_StartPoint(CATIAReference * iStartPoint) \
{ \
return (ENVTIECALL(CATIAHybridShapeConic,ENVTIETypeLetter,ENVTIELetter)put_StartPoint(iStartPoint)); \
} \
HRESULT __stdcall  ENVTIEName::get_EndPoint(CATIAReference *& oEndPoint) \
{ \
return (ENVTIECALL(CATIAHybridShapeConic,ENVTIETypeLetter,ENVTIELetter)get_EndPoint(oEndPoint)); \
} \
HRESULT __stdcall  ENVTIEName::put_EndPoint(CATIAReference * iEndPoint) \
{ \
return (ENVTIECALL(CATIAHybridShapeConic,ENVTIETypeLetter,ENVTIELetter)put_EndPoint(iEndPoint)); \
} \
HRESULT __stdcall  ENVTIEName::get_StartTangent(CATIAHybridShapeDirection *& oStartTangent) \
{ \
return (ENVTIECALL(CATIAHybridShapeConic,ENVTIETypeLetter,ENVTIELetter)get_StartTangent(oStartTangent)); \
} \
HRESULT __stdcall  ENVTIEName::put_StartTangent(CATIAHybridShapeDirection * iStartTangent) \
{ \
return (ENVTIECALL(CATIAHybridShapeConic,ENVTIETypeLetter,ENVTIELetter)put_StartTangent(iStartTangent)); \
} \
HRESULT __stdcall  ENVTIEName::get_EndTangent(CATIAHybridShapeDirection *& oEndTangent) \
{ \
return (ENVTIECALL(CATIAHybridShapeConic,ENVTIETypeLetter,ENVTIELetter)get_EndTangent(oEndTangent)); \
} \
HRESULT __stdcall  ENVTIEName::put_EndTangent(CATIAHybridShapeDirection * iEndTangent) \
{ \
return (ENVTIECALL(CATIAHybridShapeConic,ENVTIETypeLetter,ENVTIELetter)put_EndTangent(iEndTangent)); \
} \
HRESULT __stdcall  ENVTIEName::get_ConicParameter(double & oConicParameter) \
{ \
return (ENVTIECALL(CATIAHybridShapeConic,ENVTIETypeLetter,ENVTIELetter)get_ConicParameter(oConicParameter)); \
} \
HRESULT __stdcall  ENVTIEName::put_ConicParameter(double iConicParameter) \
{ \
return (ENVTIECALL(CATIAHybridShapeConic,ENVTIETypeLetter,ENVTIELetter)put_ConicParameter(iConicParameter)); \
} \
HRESULT __stdcall  ENVTIEName::get_ConicUserTol(CATIALength *& oConicUserTol) \
{ \
return (ENVTIECALL(CATIAHybridShapeConic,ENVTIETypeLetter,ENVTIELetter)get_ConicUserTol(oConicUserTol)); \
} \
HRESULT __stdcall  ENVTIEName::Compute() \
{ \
return (ENVTIECALL(CATIAHybridShapeConic,ENVTIETypeLetter,ENVTIELetter)Compute()); \
} \
HRESULT __stdcall  ENVTIEName::AppendHybridShape(CATIAHybridShape * iHybridShape) \
{ \
return (ENVTIECALL(CATIAHybridShapeConic,ENVTIETypeLetter,ENVTIELetter)AppendHybridShape(iHybridShape)); \
} \
HRESULT __stdcall  ENVTIEName::get_Thickness(CATIAHybridShape *& oThickness) \
{ \
return (ENVTIECALL(CATIAHybridShapeConic,ENVTIETypeLetter,ENVTIELetter)get_Thickness(oThickness)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Application(CATIAApplication *& oApplication) \
{ \
return (ENVTIECALL(CATIAHybridShapeConic,ENVTIETypeLetter,ENVTIELetter)get_Application(oApplication)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Parent(CATBaseDispatch *& oParent) \
{ \
return (ENVTIECALL(CATIAHybridShapeConic,ENVTIETypeLetter,ENVTIELetter)get_Parent(oParent)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Name(CATBSTR & oNameBSTR) \
{ \
return (ENVTIECALL(CATIAHybridShapeConic,ENVTIETypeLetter,ENVTIELetter)get_Name(oNameBSTR)); \
} \
HRESULT  __stdcall  ENVTIEName::put_Name(const CATBSTR & iNameBSTR) \
{ \
return (ENVTIECALL(CATIAHybridShapeConic,ENVTIETypeLetter,ENVTIELetter)put_Name(iNameBSTR)); \
} \
HRESULT  __stdcall  ENVTIEName::GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj) \
{ \
return (ENVTIECALL(CATIAHybridShapeConic,ENVTIETypeLetter,ENVTIELetter)GetItem(IDName,RealObj)); \
} \


/* Name of the TIE class */
#define class_TIE_CATIAHybridShapeConic(classe)    TIECATIAHybridShapeConic##classe


/* Common methods inside a TIE */
#define common_TIE_CATIAHybridShapeConic(classe) \
 \
 \
/* Static initialization */ \
CATDefineCommonTIEMembers(CATIAHybridShapeConic, classe) \
 \
 \
CATImplementTIEMethods(CATIAHybridShapeConic, classe) \
CATImplementIUnknownMethodsForCATBaseUnknownTIE(CATIAHybridShapeConic, classe, 2) \
CATImplementIDispatchMethodsForCATBaseUnknownTIE(CATIAHybridShapeConic, classe) \
CATImplementCATBaseUnknownMethodsForTIE(CATIAHybridShapeConic, classe) \
 \
HRESULT __stdcall  TIECATIAHybridShapeConic##classe::SetStartAndEndTangentsPlusPassingPoint(CATIAHybridShapeDirection * iStartTgt, CATIAHybridShapeDirection * iEndTgt, CATIAReference * iPassingPt) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,1,&_Trac2,&iStartTgt,&iEndTgt,&iPassingPt); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetStartAndEndTangentsPlusPassingPoint(iStartTgt,iEndTgt,iPassingPt); \
   ExitAfterCall(this,1,_Trac2,&_ret_arg,&iStartTgt,&iEndTgt,&iPassingPt); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeConic##classe::SetStartAndEndTangentsPlusConicParameter(CATIAHybridShapeDirection * iStartTgt, CATIAHybridShapeDirection * iEndTgt, double iConicParam) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,2,&_Trac2,&iStartTgt,&iEndTgt,&iConicParam); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetStartAndEndTangentsPlusConicParameter(iStartTgt,iEndTgt,iConicParam); \
   ExitAfterCall(this,2,_Trac2,&_ret_arg,&iStartTgt,&iEndTgt,&iConicParam); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeConic##classe::SetTangentIntersectPointPlusPassingPoint(CATIAReference * iTgtInt, CATIAReference * iPassingPt) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,3,&_Trac2,&iTgtInt,&iPassingPt); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetTangentIntersectPointPlusPassingPoint(iTgtInt,iPassingPt); \
   ExitAfterCall(this,3,_Trac2,&_ret_arg,&iTgtInt,&iPassingPt); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeConic##classe::SetTangentIntersectPointPlusConicParm(CATIAReference * iTgtInt, double iConicParam) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,4,&_Trac2,&iTgtInt,&iConicParam); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetTangentIntersectPointPlusConicParm(iTgtInt,iConicParam); \
   ExitAfterCall(this,4,_Trac2,&_ret_arg,&iTgtInt,&iConicParam); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeConic##classe::SetThreeIntermediatePassingPoints(CATIAReference * iPassPt1, CATIAReference * iPassPt2, CATIAReference * iPassPt3) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,5,&_Trac2,&iPassPt1,&iPassPt2,&iPassPt3); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetThreeIntermediatePassingPoints(iPassPt1,iPassPt2,iPassPt3); \
   ExitAfterCall(this,5,_Trac2,&_ret_arg,&iPassPt1,&iPassPt2,&iPassPt3); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeConic##classe::SetTwoIntermediatePassingPointsPlusOneTangent(CATIAReference * iPassPt1, CATIAReference * iPassPt2, CATIAHybridShapeDirection * iTgtDir, CATLONG iIndexPoint) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,6,&_Trac2,&iPassPt1,&iPassPt2,&iTgtDir,&iIndexPoint); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetTwoIntermediatePassingPointsPlusOneTangent(iPassPt1,iPassPt2,iTgtDir,iIndexPoint); \
   ExitAfterCall(this,6,_Trac2,&_ret_arg,&iPassPt1,&iPassPt2,&iTgtDir,&iIndexPoint); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeConic##classe::GetIntermediatePoint(CATLONG iIndexPoint, CATIAReference *& oEndPoint) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,7,&_Trac2,&iIndexPoint,&oEndPoint); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetIntermediatePoint(iIndexPoint,oEndPoint); \
   ExitAfterCall(this,7,_Trac2,&_ret_arg,&iIndexPoint,&oEndPoint); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeConic##classe::SetIntermediatePoint(CATLONG iIndexPoint, CATIAReference * iEndPoint) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,8,&_Trac2,&iIndexPoint,&iEndPoint); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetIntermediatePoint(iIndexPoint,iEndPoint); \
   ExitAfterCall(this,8,_Trac2,&_ret_arg,&iIndexPoint,&iEndPoint); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeConic##classe::GetIntermedTangent(CATLONG iIndexPoint, CATIAHybridShapeDirection *& oTgtDir) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,9,&_Trac2,&iIndexPoint,&oTgtDir); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetIntermedTangent(iIndexPoint,oTgtDir); \
   ExitAfterCall(this,9,_Trac2,&_ret_arg,&iIndexPoint,&oTgtDir); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeConic##classe::SetIntermediateTangent(CATLONG iIndexPoint, CATIAHybridShapeDirection * iTgtDir) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,10,&_Trac2,&iIndexPoint,&iTgtDir); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetIntermediateTangent(iIndexPoint,iTgtDir); \
   ExitAfterCall(this,10,_Trac2,&_ret_arg,&iIndexPoint,&iTgtDir); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeConic##classe::SwitchIntermediateTangentDirection(CATLONG iIndexPoint) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,11,&_Trac2,&iIndexPoint); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SwitchIntermediateTangentDirection(iIndexPoint); \
   ExitAfterCall(this,11,_Trac2,&_ret_arg,&iIndexPoint); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeConic##classe::SetIntermediateTangentDirectionFlag(CATLONG iIndexPoint, CATLONG iOrientation) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,12,&_Trac2,&iIndexPoint,&iOrientation); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetIntermediateTangentDirectionFlag(iIndexPoint,iOrientation); \
   ExitAfterCall(this,12,_Trac2,&_ret_arg,&iIndexPoint,&iOrientation); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeConic##classe::GetIntermediateTangentDirectionFlag(CATLONG iIndexPoint, CATLONG & oOrientation) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,13,&_Trac2,&iIndexPoint,&oOrientation); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetIntermediateTangentDirectionFlag(iIndexPoint,oOrientation); \
   ExitAfterCall(this,13,_Trac2,&_ret_arg,&iIndexPoint,&oOrientation); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeConic##classe::SwitchStartTangentDirection() \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,14,&_Trac2); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SwitchStartTangentDirection(); \
   ExitAfterCall(this,14,_Trac2,&_ret_arg); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeConic##classe::SetStartTangentDirectionFlag(CATLONG iOrientation) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,15,&_Trac2,&iOrientation); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetStartTangentDirectionFlag(iOrientation); \
   ExitAfterCall(this,15,_Trac2,&_ret_arg,&iOrientation); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeConic##classe::GetStartTangentDirectionFlag(CATLONG & oOrientation) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,16,&_Trac2,&oOrientation); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetStartTangentDirectionFlag(oOrientation); \
   ExitAfterCall(this,16,_Trac2,&_ret_arg,&oOrientation); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeConic##classe::SwitchEndTangentDirection() \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,17,&_Trac2); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SwitchEndTangentDirection(); \
   ExitAfterCall(this,17,_Trac2,&_ret_arg); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeConic##classe::SetEndTangentDirectionFlag(CATLONG iOrientation) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,18,&_Trac2,&iOrientation); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetEndTangentDirectionFlag(iOrientation); \
   ExitAfterCall(this,18,_Trac2,&_ret_arg,&iOrientation); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeConic##classe::GetEndTangentDirectionFlag(CATLONG & oOrientation) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,19,&_Trac2,&oOrientation); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetEndTangentDirectionFlag(oOrientation); \
   ExitAfterCall(this,19,_Trac2,&_ret_arg,&oOrientation); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeConic##classe::get_SupportPlane(CATIAReference *& oSupportPlane) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,20,&_Trac2,&oSupportPlane); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_SupportPlane(oSupportPlane); \
   ExitAfterCall(this,20,_Trac2,&_ret_arg,&oSupportPlane); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeConic##classe::put_SupportPlane(CATIAReference * iSupport) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,21,&_Trac2,&iSupport); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_SupportPlane(iSupport); \
   ExitAfterCall(this,21,_Trac2,&_ret_arg,&iSupport); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeConic##classe::get_TangentIntPoint(CATIAReference *& oTgtPtInt) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,22,&_Trac2,&oTgtPtInt); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_TangentIntPoint(oTgtPtInt); \
   ExitAfterCall(this,22,_Trac2,&_ret_arg,&oTgtPtInt); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeConic##classe::put_TangentIntPoint(CATIAReference * iTgtPtInt) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,23,&_Trac2,&iTgtPtInt); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_TangentIntPoint(iTgtPtInt); \
   ExitAfterCall(this,23,_Trac2,&_ret_arg,&iTgtPtInt); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeConic##classe::get_StartPoint(CATIAReference *& oStartPoint) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,24,&_Trac2,&oStartPoint); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_StartPoint(oStartPoint); \
   ExitAfterCall(this,24,_Trac2,&_ret_arg,&oStartPoint); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeConic##classe::put_StartPoint(CATIAReference * iStartPoint) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,25,&_Trac2,&iStartPoint); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_StartPoint(iStartPoint); \
   ExitAfterCall(this,25,_Trac2,&_ret_arg,&iStartPoint); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeConic##classe::get_EndPoint(CATIAReference *& oEndPoint) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,26,&_Trac2,&oEndPoint); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_EndPoint(oEndPoint); \
   ExitAfterCall(this,26,_Trac2,&_ret_arg,&oEndPoint); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeConic##classe::put_EndPoint(CATIAReference * iEndPoint) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,27,&_Trac2,&iEndPoint); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_EndPoint(iEndPoint); \
   ExitAfterCall(this,27,_Trac2,&_ret_arg,&iEndPoint); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeConic##classe::get_StartTangent(CATIAHybridShapeDirection *& oStartTangent) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,28,&_Trac2,&oStartTangent); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_StartTangent(oStartTangent); \
   ExitAfterCall(this,28,_Trac2,&_ret_arg,&oStartTangent); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeConic##classe::put_StartTangent(CATIAHybridShapeDirection * iStartTangent) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,29,&_Trac2,&iStartTangent); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_StartTangent(iStartTangent); \
   ExitAfterCall(this,29,_Trac2,&_ret_arg,&iStartTangent); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeConic##classe::get_EndTangent(CATIAHybridShapeDirection *& oEndTangent) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,30,&_Trac2,&oEndTangent); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_EndTangent(oEndTangent); \
   ExitAfterCall(this,30,_Trac2,&_ret_arg,&oEndTangent); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeConic##classe::put_EndTangent(CATIAHybridShapeDirection * iEndTangent) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,31,&_Trac2,&iEndTangent); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_EndTangent(iEndTangent); \
   ExitAfterCall(this,31,_Trac2,&_ret_arg,&iEndTangent); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeConic##classe::get_ConicParameter(double & oConicParameter) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,32,&_Trac2,&oConicParameter); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_ConicParameter(oConicParameter); \
   ExitAfterCall(this,32,_Trac2,&_ret_arg,&oConicParameter); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeConic##classe::put_ConicParameter(double iConicParameter) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,33,&_Trac2,&iConicParameter); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_ConicParameter(iConicParameter); \
   ExitAfterCall(this,33,_Trac2,&_ret_arg,&iConicParameter); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeConic##classe::get_ConicUserTol(CATIALength *& oConicUserTol) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,34,&_Trac2,&oConicUserTol); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_ConicUserTol(oConicUserTol); \
   ExitAfterCall(this,34,_Trac2,&_ret_arg,&oConicUserTol); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeConic##classe::Compute() \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,35,&_Trac2); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->Compute(); \
   ExitAfterCall(this,35,_Trac2,&_ret_arg); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeConic##classe::AppendHybridShape(CATIAHybridShape * iHybridShape) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,36,&_Trac2,&iHybridShape); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->AppendHybridShape(iHybridShape); \
   ExitAfterCall(this,36,_Trac2,&_ret_arg,&iHybridShape); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeConic##classe::get_Thickness(CATIAHybridShape *& oThickness) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,37,&_Trac2,&oThickness); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Thickness(oThickness); \
   ExitAfterCall(this,37,_Trac2,&_ret_arg,&oThickness); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAHybridShapeConic##classe::get_Application(CATIAApplication *& oApplication) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,38,&_Trac2,&oApplication); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Application(oApplication); \
   ExitAfterCall(this,38,_Trac2,&_ret_arg,&oApplication); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAHybridShapeConic##classe::get_Parent(CATBaseDispatch *& oParent) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,39,&_Trac2,&oParent); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Parent(oParent); \
   ExitAfterCall(this,39,_Trac2,&_ret_arg,&oParent); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAHybridShapeConic##classe::get_Name(CATBSTR & oNameBSTR) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,40,&_Trac2,&oNameBSTR); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Name(oNameBSTR); \
   ExitAfterCall(this,40,_Trac2,&_ret_arg,&oNameBSTR); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAHybridShapeConic##classe::put_Name(const CATBSTR & iNameBSTR) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,41,&_Trac2,&iNameBSTR); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_Name(iNameBSTR); \
   ExitAfterCall(this,41,_Trac2,&_ret_arg,&iNameBSTR); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAHybridShapeConic##classe::GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,42,&_Trac2,&IDName,&RealObj); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetItem(IDName,RealObj); \
   ExitAfterCall(this,42,_Trac2,&_ret_arg,&IDName,&RealObj); \
   return(_ret_arg); \
} \



/* Macro used to link an implementation with an interface */
#define TIE_CATIAHybridShapeConic(classe) \
 \
 \
declare_TIE_CATIAHybridShapeConic(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIAHybridShapeConic##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIAHybridShapeConic,"CATIAHybridShapeConic",CATIAHybridShapeConic::MetaObject(),classe::MetaObject(),TIE); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIAHybridShapeConic(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIECreation(CATIAHybridShapeConic, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIAHybridShapeConic##classe(classe::MetaObject(),CATIAHybridShapeConic::MetaObject(),(void *)CreateTIECATIAHybridShapeConic##classe)



/* Macro used to link an implementation with an interface */
/* This TIE is chained on the implementation object */
#define TIEchain_CATIAHybridShapeConic(classe) \
 \
 \
declare_TIE_CATIAHybridShapeConic(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIAHybridShapeConic##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIAHybridShapeConic,"CATIAHybridShapeConic",CATIAHybridShapeConic::MetaObject(),classe::MetaObject(),TIEchain); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIAHybridShapeConic(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIEchainCreation(CATIAHybridShapeConic, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIAHybridShapeConic##classe(classe::MetaObject(),CATIAHybridShapeConic::MetaObject(),(void *)CreateTIECATIAHybridShapeConic##classe)


/* Macro to switch between BOA and TIE at build time */ 
#ifdef CATSYS_BOA_IS_TIE
#define BOA_CATIAHybridShapeConic(classe) TIE_CATIAHybridShapeConic(classe)
#else
#define BOA_CATIAHybridShapeConic(classe) CATImplementBOA(CATIAHybridShapeConic, classe)
#endif

#endif
