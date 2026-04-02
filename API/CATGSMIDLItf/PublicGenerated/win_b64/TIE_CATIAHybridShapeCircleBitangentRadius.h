#ifndef __TIE_CATIAHybridShapeCircleBitangentRadius
#define __TIE_CATIAHybridShapeCircleBitangentRadius

#include <string.h>
#include "CATBaseUnknown.h"
#include "CATMetaClass.h"
#include "CATMacForTie.h"
#include "CATExitJournal.h"
#include "CATIAHybridShapeCircleBitangentRadius.h"
#include "JS0DSPA.h"


#ifdef _WINDOWS_SOURCE
#define Exported __declspec(dllexport)
#define Imported __declspec(dllimport)
#else
#define Exported 
#define Imported 
#endif


/* To link an implementation with the interface CATIAHybridShapeCircleBitangentRadius */
#define declare_TIE_CATIAHybridShapeCircleBitangentRadius(classe) \
 \
 \
class TIECATIAHybridShapeCircleBitangentRadius##classe : public CATIAHybridShapeCircleBitangentRadius \
{ \
   private: \
      CATDeclareCommonTIEMembers \
   public: \
      CATDeclareTIEMethods(CATIAHybridShapeCircleBitangentRadius, classe) \
      CATDeclareIUnknownMethodsForCATBaseUnknownTIE \
      CATDeclareIDispatchMethodsForCATBaseUnknownTIE \
      CATDeclareCATBaseUnknownMethodsForTIE \
      virtual HRESULT __stdcall get_Curve1(CATIAReference *& oCrv); \
      virtual HRESULT __stdcall put_Curve1(CATIAReference * iCrv); \
      virtual HRESULT __stdcall get_Curve2(CATIAReference *& oCrv); \
      virtual HRESULT __stdcall put_Curve2(CATIAReference * iCrv); \
      virtual HRESULT __stdcall get_Support(CATIAReference *& oSupport); \
      virtual HRESULT __stdcall put_Support(CATIAReference * iSupport); \
      virtual HRESULT __stdcall get_Orientation1(CATLONG & oOri); \
      virtual HRESULT __stdcall put_Orientation1(CATLONG iOri); \
      virtual HRESULT __stdcall get_Orientation2(CATLONG & oOri); \
      virtual HRESULT __stdcall put_Orientation2(CATLONG iOri); \
      virtual HRESULT __stdcall get_DiameterMode(CAT_VARIANT_BOOL & oDiameterMode); \
      virtual HRESULT __stdcall put_DiameterMode(CAT_VARIANT_BOOL iDiameterMode); \
      virtual HRESULT __stdcall get_Radius(CATIALength *& Radius); \
      virtual HRESULT __stdcall get_Diameter(CATIALength *& oDiameter); \
      virtual HRESULT __stdcall get_DiscriminationIndex(CATLONG & oDiscriminationIndex); \
      virtual HRESULT __stdcall put_DiscriminationIndex(CATLONG iDiscriminationIndex); \
      virtual HRESULT __stdcall get_BeginOfCircle(CATLONG & oNumWireBegin); \
      virtual HRESULT __stdcall put_BeginOfCircle(CATLONG iNumWireBegin); \
      virtual HRESULT __stdcall get_TangentOrientation1(CATLONG & oOrientation); \
      virtual HRESULT __stdcall put_TangentOrientation1(CATLONG iOrientation); \
      virtual HRESULT __stdcall get_TangentOrientation2(CATLONG & oOrientation); \
      virtual HRESULT __stdcall put_TangentOrientation2(CATLONG iOrientation); \
      virtual HRESULT __stdcall get_TrimMode(CATLONG & oTrim); \
      virtual HRESULT __stdcall put_TrimMode(CATLONG iTrim); \
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



#define ENVTIEdeclare_CATIAHybridShapeCircleBitangentRadius(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
virtual HRESULT __stdcall get_Curve1(CATIAReference *& oCrv); \
virtual HRESULT __stdcall put_Curve1(CATIAReference * iCrv); \
virtual HRESULT __stdcall get_Curve2(CATIAReference *& oCrv); \
virtual HRESULT __stdcall put_Curve2(CATIAReference * iCrv); \
virtual HRESULT __stdcall get_Support(CATIAReference *& oSupport); \
virtual HRESULT __stdcall put_Support(CATIAReference * iSupport); \
virtual HRESULT __stdcall get_Orientation1(CATLONG & oOri); \
virtual HRESULT __stdcall put_Orientation1(CATLONG iOri); \
virtual HRESULT __stdcall get_Orientation2(CATLONG & oOri); \
virtual HRESULT __stdcall put_Orientation2(CATLONG iOri); \
virtual HRESULT __stdcall get_DiameterMode(CAT_VARIANT_BOOL & oDiameterMode); \
virtual HRESULT __stdcall put_DiameterMode(CAT_VARIANT_BOOL iDiameterMode); \
virtual HRESULT __stdcall get_Radius(CATIALength *& Radius); \
virtual HRESULT __stdcall get_Diameter(CATIALength *& oDiameter); \
virtual HRESULT __stdcall get_DiscriminationIndex(CATLONG & oDiscriminationIndex); \
virtual HRESULT __stdcall put_DiscriminationIndex(CATLONG iDiscriminationIndex); \
virtual HRESULT __stdcall get_BeginOfCircle(CATLONG & oNumWireBegin); \
virtual HRESULT __stdcall put_BeginOfCircle(CATLONG iNumWireBegin); \
virtual HRESULT __stdcall get_TangentOrientation1(CATLONG & oOrientation); \
virtual HRESULT __stdcall put_TangentOrientation1(CATLONG iOrientation); \
virtual HRESULT __stdcall get_TangentOrientation2(CATLONG & oOrientation); \
virtual HRESULT __stdcall put_TangentOrientation2(CATLONG iOrientation); \
virtual HRESULT __stdcall get_TrimMode(CATLONG & oTrim); \
virtual HRESULT __stdcall put_TrimMode(CATLONG iTrim); \
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


#define ENVTIEdefine_CATIAHybridShapeCircleBitangentRadius(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
HRESULT __stdcall  ENVTIEName::get_Curve1(CATIAReference *& oCrv) \
{ \
return (ENVTIECALL(CATIAHybridShapeCircleBitangentRadius,ENVTIETypeLetter,ENVTIELetter)get_Curve1(oCrv)); \
} \
HRESULT __stdcall  ENVTIEName::put_Curve1(CATIAReference * iCrv) \
{ \
return (ENVTIECALL(CATIAHybridShapeCircleBitangentRadius,ENVTIETypeLetter,ENVTIELetter)put_Curve1(iCrv)); \
} \
HRESULT __stdcall  ENVTIEName::get_Curve2(CATIAReference *& oCrv) \
{ \
return (ENVTIECALL(CATIAHybridShapeCircleBitangentRadius,ENVTIETypeLetter,ENVTIELetter)get_Curve2(oCrv)); \
} \
HRESULT __stdcall  ENVTIEName::put_Curve2(CATIAReference * iCrv) \
{ \
return (ENVTIECALL(CATIAHybridShapeCircleBitangentRadius,ENVTIETypeLetter,ENVTIELetter)put_Curve2(iCrv)); \
} \
HRESULT __stdcall  ENVTIEName::get_Support(CATIAReference *& oSupport) \
{ \
return (ENVTIECALL(CATIAHybridShapeCircleBitangentRadius,ENVTIETypeLetter,ENVTIELetter)get_Support(oSupport)); \
} \
HRESULT __stdcall  ENVTIEName::put_Support(CATIAReference * iSupport) \
{ \
return (ENVTIECALL(CATIAHybridShapeCircleBitangentRadius,ENVTIETypeLetter,ENVTIELetter)put_Support(iSupport)); \
} \
HRESULT __stdcall  ENVTIEName::get_Orientation1(CATLONG & oOri) \
{ \
return (ENVTIECALL(CATIAHybridShapeCircleBitangentRadius,ENVTIETypeLetter,ENVTIELetter)get_Orientation1(oOri)); \
} \
HRESULT __stdcall  ENVTIEName::put_Orientation1(CATLONG iOri) \
{ \
return (ENVTIECALL(CATIAHybridShapeCircleBitangentRadius,ENVTIETypeLetter,ENVTIELetter)put_Orientation1(iOri)); \
} \
HRESULT __stdcall  ENVTIEName::get_Orientation2(CATLONG & oOri) \
{ \
return (ENVTIECALL(CATIAHybridShapeCircleBitangentRadius,ENVTIETypeLetter,ENVTIELetter)get_Orientation2(oOri)); \
} \
HRESULT __stdcall  ENVTIEName::put_Orientation2(CATLONG iOri) \
{ \
return (ENVTIECALL(CATIAHybridShapeCircleBitangentRadius,ENVTIETypeLetter,ENVTIELetter)put_Orientation2(iOri)); \
} \
HRESULT __stdcall  ENVTIEName::get_DiameterMode(CAT_VARIANT_BOOL & oDiameterMode) \
{ \
return (ENVTIECALL(CATIAHybridShapeCircleBitangentRadius,ENVTIETypeLetter,ENVTIELetter)get_DiameterMode(oDiameterMode)); \
} \
HRESULT __stdcall  ENVTIEName::put_DiameterMode(CAT_VARIANT_BOOL iDiameterMode) \
{ \
return (ENVTIECALL(CATIAHybridShapeCircleBitangentRadius,ENVTIETypeLetter,ENVTIELetter)put_DiameterMode(iDiameterMode)); \
} \
HRESULT __stdcall  ENVTIEName::get_Radius(CATIALength *& Radius) \
{ \
return (ENVTIECALL(CATIAHybridShapeCircleBitangentRadius,ENVTIETypeLetter,ENVTIELetter)get_Radius(Radius)); \
} \
HRESULT __stdcall  ENVTIEName::get_Diameter(CATIALength *& oDiameter) \
{ \
return (ENVTIECALL(CATIAHybridShapeCircleBitangentRadius,ENVTIETypeLetter,ENVTIELetter)get_Diameter(oDiameter)); \
} \
HRESULT __stdcall  ENVTIEName::get_DiscriminationIndex(CATLONG & oDiscriminationIndex) \
{ \
return (ENVTIECALL(CATIAHybridShapeCircleBitangentRadius,ENVTIETypeLetter,ENVTIELetter)get_DiscriminationIndex(oDiscriminationIndex)); \
} \
HRESULT __stdcall  ENVTIEName::put_DiscriminationIndex(CATLONG iDiscriminationIndex) \
{ \
return (ENVTIECALL(CATIAHybridShapeCircleBitangentRadius,ENVTIETypeLetter,ENVTIELetter)put_DiscriminationIndex(iDiscriminationIndex)); \
} \
HRESULT __stdcall  ENVTIEName::get_BeginOfCircle(CATLONG & oNumWireBegin) \
{ \
return (ENVTIECALL(CATIAHybridShapeCircleBitangentRadius,ENVTIETypeLetter,ENVTIELetter)get_BeginOfCircle(oNumWireBegin)); \
} \
HRESULT __stdcall  ENVTIEName::put_BeginOfCircle(CATLONG iNumWireBegin) \
{ \
return (ENVTIECALL(CATIAHybridShapeCircleBitangentRadius,ENVTIETypeLetter,ENVTIELetter)put_BeginOfCircle(iNumWireBegin)); \
} \
HRESULT __stdcall  ENVTIEName::get_TangentOrientation1(CATLONG & oOrientation) \
{ \
return (ENVTIECALL(CATIAHybridShapeCircleBitangentRadius,ENVTIETypeLetter,ENVTIELetter)get_TangentOrientation1(oOrientation)); \
} \
HRESULT __stdcall  ENVTIEName::put_TangentOrientation1(CATLONG iOrientation) \
{ \
return (ENVTIECALL(CATIAHybridShapeCircleBitangentRadius,ENVTIETypeLetter,ENVTIELetter)put_TangentOrientation1(iOrientation)); \
} \
HRESULT __stdcall  ENVTIEName::get_TangentOrientation2(CATLONG & oOrientation) \
{ \
return (ENVTIECALL(CATIAHybridShapeCircleBitangentRadius,ENVTIETypeLetter,ENVTIELetter)get_TangentOrientation2(oOrientation)); \
} \
HRESULT __stdcall  ENVTIEName::put_TangentOrientation2(CATLONG iOrientation) \
{ \
return (ENVTIECALL(CATIAHybridShapeCircleBitangentRadius,ENVTIETypeLetter,ENVTIELetter)put_TangentOrientation2(iOrientation)); \
} \
HRESULT __stdcall  ENVTIEName::get_TrimMode(CATLONG & oTrim) \
{ \
return (ENVTIECALL(CATIAHybridShapeCircleBitangentRadius,ENVTIETypeLetter,ENVTIELetter)get_TrimMode(oTrim)); \
} \
HRESULT __stdcall  ENVTIEName::put_TrimMode(CATLONG iTrim) \
{ \
return (ENVTIECALL(CATIAHybridShapeCircleBitangentRadius,ENVTIETypeLetter,ENVTIELetter)put_TrimMode(iTrim)); \
} \
HRESULT __stdcall  ENVTIEName::GetFreeRadius(double & oRadius) \
{ \
return (ENVTIECALL(CATIAHybridShapeCircleBitangentRadius,ENVTIETypeLetter,ENVTIELetter)GetFreeRadius(oRadius)); \
} \
HRESULT __stdcall  ENVTIEName::GetFreeCenter(CATSafeArrayVariant & ioCenter) \
{ \
return (ENVTIECALL(CATIAHybridShapeCircleBitangentRadius,ENVTIETypeLetter,ENVTIELetter)GetFreeCenter(ioCenter)); \
} \
HRESULT __stdcall  ENVTIEName::SetLimitation(CATLONG iLimitation) \
{ \
return (ENVTIECALL(CATIAHybridShapeCircleBitangentRadius,ENVTIETypeLetter,ENVTIELetter)SetLimitation(iLimitation)); \
} \
HRESULT __stdcall  ENVTIEName::get_StartAngle(CATIAAngle *& oStartAngle) \
{ \
return (ENVTIECALL(CATIAHybridShapeCircleBitangentRadius,ENVTIETypeLetter,ENVTIELetter)get_StartAngle(oStartAngle)); \
} \
HRESULT __stdcall  ENVTIEName::get_EndAngle(CATIAAngle *& oEndAngle) \
{ \
return (ENVTIECALL(CATIAHybridShapeCircleBitangentRadius,ENVTIETypeLetter,ENVTIELetter)get_EndAngle(oEndAngle)); \
} \
HRESULT __stdcall  ENVTIEName::get_AxisComputation(CAT_VARIANT_BOOL & oAxisComputation) \
{ \
return (ENVTIECALL(CATIAHybridShapeCircleBitangentRadius,ENVTIETypeLetter,ENVTIELetter)get_AxisComputation(oAxisComputation)); \
} \
HRESULT __stdcall  ENVTIEName::put_AxisComputation(CAT_VARIANT_BOOL iAxisComputation) \
{ \
return (ENVTIECALL(CATIAHybridShapeCircleBitangentRadius,ENVTIETypeLetter,ENVTIELetter)put_AxisComputation(iAxisComputation)); \
} \
HRESULT __stdcall  ENVTIEName::get_AxisDirection(CATIAHybridShapeDirection *& oDir) \
{ \
return (ENVTIECALL(CATIAHybridShapeCircleBitangentRadius,ENVTIETypeLetter,ENVTIELetter)get_AxisDirection(oDir)); \
} \
HRESULT __stdcall  ENVTIEName::put_AxisDirection(CATIAHybridShapeDirection * iDir) \
{ \
return (ENVTIECALL(CATIAHybridShapeCircleBitangentRadius,ENVTIETypeLetter,ENVTIELetter)put_AxisDirection(iDir)); \
} \
HRESULT __stdcall  ENVTIEName::GetAxis(CATLONG iPosition, CATIAReference *& oAxis) \
{ \
return (ENVTIECALL(CATIAHybridShapeCircleBitangentRadius,ENVTIETypeLetter,ENVTIELetter)GetAxis(iPosition,oAxis)); \
} \
HRESULT __stdcall  ENVTIEName::GetCenter(double & oCenterX, double & oCenterY, double & oCenterZ) \
{ \
return (ENVTIECALL(CATIAHybridShapeCircleBitangentRadius,ENVTIETypeLetter,ENVTIELetter)GetCenter(oCenterX,oCenterY,oCenterZ)); \
} \
HRESULT __stdcall  ENVTIEName::GetLimitation(CATLONG & oLimit) \
{ \
return (ENVTIECALL(CATIAHybridShapeCircleBitangentRadius,ENVTIETypeLetter,ENVTIELetter)GetLimitation(oLimit)); \
} \
HRESULT __stdcall  ENVTIEName::Compute() \
{ \
return (ENVTIECALL(CATIAHybridShapeCircleBitangentRadius,ENVTIETypeLetter,ENVTIELetter)Compute()); \
} \
HRESULT __stdcall  ENVTIEName::AppendHybridShape(CATIAHybridShape * iHybridShape) \
{ \
return (ENVTIECALL(CATIAHybridShapeCircleBitangentRadius,ENVTIETypeLetter,ENVTIELetter)AppendHybridShape(iHybridShape)); \
} \
HRESULT __stdcall  ENVTIEName::get_Thickness(CATIAHybridShape *& oThickness) \
{ \
return (ENVTIECALL(CATIAHybridShapeCircleBitangentRadius,ENVTIETypeLetter,ENVTIELetter)get_Thickness(oThickness)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Application(CATIAApplication *& oApplication) \
{ \
return (ENVTIECALL(CATIAHybridShapeCircleBitangentRadius,ENVTIETypeLetter,ENVTIELetter)get_Application(oApplication)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Parent(CATBaseDispatch *& oParent) \
{ \
return (ENVTIECALL(CATIAHybridShapeCircleBitangentRadius,ENVTIETypeLetter,ENVTIELetter)get_Parent(oParent)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Name(CATBSTR & oNameBSTR) \
{ \
return (ENVTIECALL(CATIAHybridShapeCircleBitangentRadius,ENVTIETypeLetter,ENVTIELetter)get_Name(oNameBSTR)); \
} \
HRESULT  __stdcall  ENVTIEName::put_Name(const CATBSTR & iNameBSTR) \
{ \
return (ENVTIECALL(CATIAHybridShapeCircleBitangentRadius,ENVTIETypeLetter,ENVTIELetter)put_Name(iNameBSTR)); \
} \
HRESULT  __stdcall  ENVTIEName::GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj) \
{ \
return (ENVTIECALL(CATIAHybridShapeCircleBitangentRadius,ENVTIETypeLetter,ENVTIELetter)GetItem(IDName,RealObj)); \
} \


/* Name of the TIE class */
#define class_TIE_CATIAHybridShapeCircleBitangentRadius(classe)    TIECATIAHybridShapeCircleBitangentRadius##classe


/* Common methods inside a TIE */
#define common_TIE_CATIAHybridShapeCircleBitangentRadius(classe) \
 \
 \
/* Static initialization */ \
CATDefineCommonTIEMembers(CATIAHybridShapeCircleBitangentRadius, classe) \
 \
 \
CATImplementTIEMethods(CATIAHybridShapeCircleBitangentRadius, classe) \
CATImplementIUnknownMethodsForCATBaseUnknownTIE(CATIAHybridShapeCircleBitangentRadius, classe, 2) \
CATImplementIDispatchMethodsForCATBaseUnknownTIE(CATIAHybridShapeCircleBitangentRadius, classe) \
CATImplementCATBaseUnknownMethodsForTIE(CATIAHybridShapeCircleBitangentRadius, classe) \
 \
HRESULT __stdcall  TIECATIAHybridShapeCircleBitangentRadius##classe::get_Curve1(CATIAReference *& oCrv) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,1,&_Trac2,&oCrv); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Curve1(oCrv); \
   ExitAfterCall(this,1,_Trac2,&_ret_arg,&oCrv); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeCircleBitangentRadius##classe::put_Curve1(CATIAReference * iCrv) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,2,&_Trac2,&iCrv); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_Curve1(iCrv); \
   ExitAfterCall(this,2,_Trac2,&_ret_arg,&iCrv); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeCircleBitangentRadius##classe::get_Curve2(CATIAReference *& oCrv) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,3,&_Trac2,&oCrv); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Curve2(oCrv); \
   ExitAfterCall(this,3,_Trac2,&_ret_arg,&oCrv); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeCircleBitangentRadius##classe::put_Curve2(CATIAReference * iCrv) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,4,&_Trac2,&iCrv); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_Curve2(iCrv); \
   ExitAfterCall(this,4,_Trac2,&_ret_arg,&iCrv); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeCircleBitangentRadius##classe::get_Support(CATIAReference *& oSupport) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,5,&_Trac2,&oSupport); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Support(oSupport); \
   ExitAfterCall(this,5,_Trac2,&_ret_arg,&oSupport); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeCircleBitangentRadius##classe::put_Support(CATIAReference * iSupport) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,6,&_Trac2,&iSupport); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_Support(iSupport); \
   ExitAfterCall(this,6,_Trac2,&_ret_arg,&iSupport); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeCircleBitangentRadius##classe::get_Orientation1(CATLONG & oOri) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,7,&_Trac2,&oOri); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Orientation1(oOri); \
   ExitAfterCall(this,7,_Trac2,&_ret_arg,&oOri); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeCircleBitangentRadius##classe::put_Orientation1(CATLONG iOri) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,8,&_Trac2,&iOri); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_Orientation1(iOri); \
   ExitAfterCall(this,8,_Trac2,&_ret_arg,&iOri); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeCircleBitangentRadius##classe::get_Orientation2(CATLONG & oOri) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,9,&_Trac2,&oOri); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Orientation2(oOri); \
   ExitAfterCall(this,9,_Trac2,&_ret_arg,&oOri); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeCircleBitangentRadius##classe::put_Orientation2(CATLONG iOri) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,10,&_Trac2,&iOri); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_Orientation2(iOri); \
   ExitAfterCall(this,10,_Trac2,&_ret_arg,&iOri); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeCircleBitangentRadius##classe::get_DiameterMode(CAT_VARIANT_BOOL & oDiameterMode) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,11,&_Trac2,&oDiameterMode); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_DiameterMode(oDiameterMode); \
   ExitAfterCall(this,11,_Trac2,&_ret_arg,&oDiameterMode); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeCircleBitangentRadius##classe::put_DiameterMode(CAT_VARIANT_BOOL iDiameterMode) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,12,&_Trac2,&iDiameterMode); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_DiameterMode(iDiameterMode); \
   ExitAfterCall(this,12,_Trac2,&_ret_arg,&iDiameterMode); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeCircleBitangentRadius##classe::get_Radius(CATIALength *& Radius) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,13,&_Trac2,&Radius); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Radius(Radius); \
   ExitAfterCall(this,13,_Trac2,&_ret_arg,&Radius); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeCircleBitangentRadius##classe::get_Diameter(CATIALength *& oDiameter) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,14,&_Trac2,&oDiameter); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Diameter(oDiameter); \
   ExitAfterCall(this,14,_Trac2,&_ret_arg,&oDiameter); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeCircleBitangentRadius##classe::get_DiscriminationIndex(CATLONG & oDiscriminationIndex) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,15,&_Trac2,&oDiscriminationIndex); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_DiscriminationIndex(oDiscriminationIndex); \
   ExitAfterCall(this,15,_Trac2,&_ret_arg,&oDiscriminationIndex); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeCircleBitangentRadius##classe::put_DiscriminationIndex(CATLONG iDiscriminationIndex) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,16,&_Trac2,&iDiscriminationIndex); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_DiscriminationIndex(iDiscriminationIndex); \
   ExitAfterCall(this,16,_Trac2,&_ret_arg,&iDiscriminationIndex); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeCircleBitangentRadius##classe::get_BeginOfCircle(CATLONG & oNumWireBegin) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,17,&_Trac2,&oNumWireBegin); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_BeginOfCircle(oNumWireBegin); \
   ExitAfterCall(this,17,_Trac2,&_ret_arg,&oNumWireBegin); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeCircleBitangentRadius##classe::put_BeginOfCircle(CATLONG iNumWireBegin) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,18,&_Trac2,&iNumWireBegin); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_BeginOfCircle(iNumWireBegin); \
   ExitAfterCall(this,18,_Trac2,&_ret_arg,&iNumWireBegin); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeCircleBitangentRadius##classe::get_TangentOrientation1(CATLONG & oOrientation) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,19,&_Trac2,&oOrientation); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_TangentOrientation1(oOrientation); \
   ExitAfterCall(this,19,_Trac2,&_ret_arg,&oOrientation); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeCircleBitangentRadius##classe::put_TangentOrientation1(CATLONG iOrientation) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,20,&_Trac2,&iOrientation); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_TangentOrientation1(iOrientation); \
   ExitAfterCall(this,20,_Trac2,&_ret_arg,&iOrientation); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeCircleBitangentRadius##classe::get_TangentOrientation2(CATLONG & oOrientation) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,21,&_Trac2,&oOrientation); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_TangentOrientation2(oOrientation); \
   ExitAfterCall(this,21,_Trac2,&_ret_arg,&oOrientation); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeCircleBitangentRadius##classe::put_TangentOrientation2(CATLONG iOrientation) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,22,&_Trac2,&iOrientation); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_TangentOrientation2(iOrientation); \
   ExitAfterCall(this,22,_Trac2,&_ret_arg,&iOrientation); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeCircleBitangentRadius##classe::get_TrimMode(CATLONG & oTrim) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,23,&_Trac2,&oTrim); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_TrimMode(oTrim); \
   ExitAfterCall(this,23,_Trac2,&_ret_arg,&oTrim); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeCircleBitangentRadius##classe::put_TrimMode(CATLONG iTrim) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,24,&_Trac2,&iTrim); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_TrimMode(iTrim); \
   ExitAfterCall(this,24,_Trac2,&_ret_arg,&iTrim); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeCircleBitangentRadius##classe::GetFreeRadius(double & oRadius) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,25,&_Trac2,&oRadius); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetFreeRadius(oRadius); \
   ExitAfterCall(this,25,_Trac2,&_ret_arg,&oRadius); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeCircleBitangentRadius##classe::GetFreeCenter(CATSafeArrayVariant & ioCenter) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,26,&_Trac2,&ioCenter); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetFreeCenter(ioCenter); \
   ExitAfterCall(this,26,_Trac2,&_ret_arg,&ioCenter); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeCircleBitangentRadius##classe::SetLimitation(CATLONG iLimitation) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,27,&_Trac2,&iLimitation); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetLimitation(iLimitation); \
   ExitAfterCall(this,27,_Trac2,&_ret_arg,&iLimitation); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeCircleBitangentRadius##classe::get_StartAngle(CATIAAngle *& oStartAngle) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,28,&_Trac2,&oStartAngle); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_StartAngle(oStartAngle); \
   ExitAfterCall(this,28,_Trac2,&_ret_arg,&oStartAngle); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeCircleBitangentRadius##classe::get_EndAngle(CATIAAngle *& oEndAngle) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,29,&_Trac2,&oEndAngle); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_EndAngle(oEndAngle); \
   ExitAfterCall(this,29,_Trac2,&_ret_arg,&oEndAngle); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeCircleBitangentRadius##classe::get_AxisComputation(CAT_VARIANT_BOOL & oAxisComputation) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,30,&_Trac2,&oAxisComputation); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_AxisComputation(oAxisComputation); \
   ExitAfterCall(this,30,_Trac2,&_ret_arg,&oAxisComputation); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeCircleBitangentRadius##classe::put_AxisComputation(CAT_VARIANT_BOOL iAxisComputation) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,31,&_Trac2,&iAxisComputation); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_AxisComputation(iAxisComputation); \
   ExitAfterCall(this,31,_Trac2,&_ret_arg,&iAxisComputation); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeCircleBitangentRadius##classe::get_AxisDirection(CATIAHybridShapeDirection *& oDir) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,32,&_Trac2,&oDir); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_AxisDirection(oDir); \
   ExitAfterCall(this,32,_Trac2,&_ret_arg,&oDir); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeCircleBitangentRadius##classe::put_AxisDirection(CATIAHybridShapeDirection * iDir) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,33,&_Trac2,&iDir); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_AxisDirection(iDir); \
   ExitAfterCall(this,33,_Trac2,&_ret_arg,&iDir); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeCircleBitangentRadius##classe::GetAxis(CATLONG iPosition, CATIAReference *& oAxis) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,34,&_Trac2,&iPosition,&oAxis); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetAxis(iPosition,oAxis); \
   ExitAfterCall(this,34,_Trac2,&_ret_arg,&iPosition,&oAxis); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeCircleBitangentRadius##classe::GetCenter(double & oCenterX, double & oCenterY, double & oCenterZ) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,35,&_Trac2,&oCenterX,&oCenterY,&oCenterZ); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetCenter(oCenterX,oCenterY,oCenterZ); \
   ExitAfterCall(this,35,_Trac2,&_ret_arg,&oCenterX,&oCenterY,&oCenterZ); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeCircleBitangentRadius##classe::GetLimitation(CATLONG & oLimit) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,36,&_Trac2,&oLimit); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetLimitation(oLimit); \
   ExitAfterCall(this,36,_Trac2,&_ret_arg,&oLimit); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeCircleBitangentRadius##classe::Compute() \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,37,&_Trac2); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->Compute(); \
   ExitAfterCall(this,37,_Trac2,&_ret_arg); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeCircleBitangentRadius##classe::AppendHybridShape(CATIAHybridShape * iHybridShape) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,38,&_Trac2,&iHybridShape); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->AppendHybridShape(iHybridShape); \
   ExitAfterCall(this,38,_Trac2,&_ret_arg,&iHybridShape); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeCircleBitangentRadius##classe::get_Thickness(CATIAHybridShape *& oThickness) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,39,&_Trac2,&oThickness); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Thickness(oThickness); \
   ExitAfterCall(this,39,_Trac2,&_ret_arg,&oThickness); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAHybridShapeCircleBitangentRadius##classe::get_Application(CATIAApplication *& oApplication) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,40,&_Trac2,&oApplication); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Application(oApplication); \
   ExitAfterCall(this,40,_Trac2,&_ret_arg,&oApplication); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAHybridShapeCircleBitangentRadius##classe::get_Parent(CATBaseDispatch *& oParent) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,41,&_Trac2,&oParent); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Parent(oParent); \
   ExitAfterCall(this,41,_Trac2,&_ret_arg,&oParent); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAHybridShapeCircleBitangentRadius##classe::get_Name(CATBSTR & oNameBSTR) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,42,&_Trac2,&oNameBSTR); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Name(oNameBSTR); \
   ExitAfterCall(this,42,_Trac2,&_ret_arg,&oNameBSTR); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAHybridShapeCircleBitangentRadius##classe::put_Name(const CATBSTR & iNameBSTR) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,43,&_Trac2,&iNameBSTR); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_Name(iNameBSTR); \
   ExitAfterCall(this,43,_Trac2,&_ret_arg,&iNameBSTR); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAHybridShapeCircleBitangentRadius##classe::GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,44,&_Trac2,&IDName,&RealObj); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetItem(IDName,RealObj); \
   ExitAfterCall(this,44,_Trac2,&_ret_arg,&IDName,&RealObj); \
   return(_ret_arg); \
} \



/* Macro used to link an implementation with an interface */
#define TIE_CATIAHybridShapeCircleBitangentRadius(classe) \
 \
 \
declare_TIE_CATIAHybridShapeCircleBitangentRadius(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIAHybridShapeCircleBitangentRadius##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIAHybridShapeCircleBitangentRadius,"CATIAHybridShapeCircleBitangentRadius",CATIAHybridShapeCircleBitangentRadius::MetaObject(),classe::MetaObject(),TIE); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIAHybridShapeCircleBitangentRadius(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIECreation(CATIAHybridShapeCircleBitangentRadius, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIAHybridShapeCircleBitangentRadius##classe(classe::MetaObject(),CATIAHybridShapeCircleBitangentRadius::MetaObject(),(void *)CreateTIECATIAHybridShapeCircleBitangentRadius##classe)



/* Macro used to link an implementation with an interface */
/* This TIE is chained on the implementation object */
#define TIEchain_CATIAHybridShapeCircleBitangentRadius(classe) \
 \
 \
declare_TIE_CATIAHybridShapeCircleBitangentRadius(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIAHybridShapeCircleBitangentRadius##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIAHybridShapeCircleBitangentRadius,"CATIAHybridShapeCircleBitangentRadius",CATIAHybridShapeCircleBitangentRadius::MetaObject(),classe::MetaObject(),TIEchain); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIAHybridShapeCircleBitangentRadius(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIEchainCreation(CATIAHybridShapeCircleBitangentRadius, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIAHybridShapeCircleBitangentRadius##classe(classe::MetaObject(),CATIAHybridShapeCircleBitangentRadius::MetaObject(),(void *)CreateTIECATIAHybridShapeCircleBitangentRadius##classe)


/* Macro to switch between BOA and TIE at build time */ 
#ifdef CATSYS_BOA_IS_TIE
#define BOA_CATIAHybridShapeCircleBitangentRadius(classe) TIE_CATIAHybridShapeCircleBitangentRadius(classe)
#else
#define BOA_CATIAHybridShapeCircleBitangentRadius(classe) CATImplementBOA(CATIAHybridShapeCircleBitangentRadius, classe)
#endif

#endif
