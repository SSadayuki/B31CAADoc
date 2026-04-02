#ifndef __TIE_CATIAHybridShapeCircleTritangent
#define __TIE_CATIAHybridShapeCircleTritangent

#include <string.h>
#include "CATBaseUnknown.h"
#include "CATMetaClass.h"
#include "CATMacForTie.h"
#include "CATExitJournal.h"
#include "CATIAHybridShapeCircleTritangent.h"
#include "JS0DSPA.h"


#ifdef _WINDOWS_SOURCE
#define Exported __declspec(dllexport)
#define Imported __declspec(dllimport)
#else
#define Exported 
#define Imported 
#endif


/* To link an implementation with the interface CATIAHybridShapeCircleTritangent */
#define declare_TIE_CATIAHybridShapeCircleTritangent(classe) \
 \
 \
class TIECATIAHybridShapeCircleTritangent##classe : public CATIAHybridShapeCircleTritangent \
{ \
   private: \
      CATDeclareCommonTIEMembers \
   public: \
      CATDeclareTIEMethods(CATIAHybridShapeCircleTritangent, classe) \
      CATDeclareIUnknownMethodsForCATBaseUnknownTIE \
      CATDeclareIDispatchMethodsForCATBaseUnknownTIE \
      CATDeclareCATBaseUnknownMethodsForTIE \
      virtual HRESULT __stdcall get_Curve1(CATIAReference *& oCrv); \
      virtual HRESULT __stdcall put_Curve1(CATIAReference * iCrv); \
      virtual HRESULT __stdcall get_Curve2(CATIAReference *& oCrv); \
      virtual HRESULT __stdcall put_Curve2(CATIAReference * iCrv); \
      virtual HRESULT __stdcall get_Curve3(CATIAReference *& oCrv); \
      virtual HRESULT __stdcall put_Curve3(CATIAReference * iCrv); \
      virtual HRESULT __stdcall get_Support(CATIAReference *& oSupport); \
      virtual HRESULT __stdcall put_Support(CATIAReference * iSupport); \
      virtual HRESULT __stdcall get_Orientation1(CATLONG & oOri); \
      virtual HRESULT __stdcall put_Orientation1(CATLONG iOri); \
      virtual HRESULT __stdcall get_Orientation2(CATLONG & oOri); \
      virtual HRESULT __stdcall put_Orientation2(CATLONG iOri); \
      virtual HRESULT __stdcall get_Orientation3(CATLONG & oOri); \
      virtual HRESULT __stdcall put_Orientation3(CATLONG iOri); \
      virtual HRESULT __stdcall get_DiscriminationIndex(CATLONG & oDiscriminationIndex); \
      virtual HRESULT __stdcall put_DiscriminationIndex(CATLONG iDiscriminationIndex); \
      virtual HRESULT __stdcall get_BeginOfCircle(CATLONG & oNumWireBegin); \
      virtual HRESULT __stdcall put_BeginOfCircle(CATLONG iNumWireBegin); \
      virtual HRESULT __stdcall get_TangentOrientation1(CATLONG & oOrientation); \
      virtual HRESULT __stdcall put_TangentOrientation1(CATLONG iOrientation); \
      virtual HRESULT __stdcall get_TangentOrientation2(CATLONG & oOrientation); \
      virtual HRESULT __stdcall put_TangentOrientation2(CATLONG iOrientation); \
      virtual HRESULT __stdcall get_TangentOrientation3(CATLONG & oOrientation); \
      virtual HRESULT __stdcall put_TangentOrientation3(CATLONG iOrientation); \
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



#define ENVTIEdeclare_CATIAHybridShapeCircleTritangent(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
virtual HRESULT __stdcall get_Curve1(CATIAReference *& oCrv); \
virtual HRESULT __stdcall put_Curve1(CATIAReference * iCrv); \
virtual HRESULT __stdcall get_Curve2(CATIAReference *& oCrv); \
virtual HRESULT __stdcall put_Curve2(CATIAReference * iCrv); \
virtual HRESULT __stdcall get_Curve3(CATIAReference *& oCrv); \
virtual HRESULT __stdcall put_Curve3(CATIAReference * iCrv); \
virtual HRESULT __stdcall get_Support(CATIAReference *& oSupport); \
virtual HRESULT __stdcall put_Support(CATIAReference * iSupport); \
virtual HRESULT __stdcall get_Orientation1(CATLONG & oOri); \
virtual HRESULT __stdcall put_Orientation1(CATLONG iOri); \
virtual HRESULT __stdcall get_Orientation2(CATLONG & oOri); \
virtual HRESULT __stdcall put_Orientation2(CATLONG iOri); \
virtual HRESULT __stdcall get_Orientation3(CATLONG & oOri); \
virtual HRESULT __stdcall put_Orientation3(CATLONG iOri); \
virtual HRESULT __stdcall get_DiscriminationIndex(CATLONG & oDiscriminationIndex); \
virtual HRESULT __stdcall put_DiscriminationIndex(CATLONG iDiscriminationIndex); \
virtual HRESULT __stdcall get_BeginOfCircle(CATLONG & oNumWireBegin); \
virtual HRESULT __stdcall put_BeginOfCircle(CATLONG iNumWireBegin); \
virtual HRESULT __stdcall get_TangentOrientation1(CATLONG & oOrientation); \
virtual HRESULT __stdcall put_TangentOrientation1(CATLONG iOrientation); \
virtual HRESULT __stdcall get_TangentOrientation2(CATLONG & oOrientation); \
virtual HRESULT __stdcall put_TangentOrientation2(CATLONG iOrientation); \
virtual HRESULT __stdcall get_TangentOrientation3(CATLONG & oOrientation); \
virtual HRESULT __stdcall put_TangentOrientation3(CATLONG iOrientation); \
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


#define ENVTIEdefine_CATIAHybridShapeCircleTritangent(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
HRESULT __stdcall  ENVTIEName::get_Curve1(CATIAReference *& oCrv) \
{ \
return (ENVTIECALL(CATIAHybridShapeCircleTritangent,ENVTIETypeLetter,ENVTIELetter)get_Curve1(oCrv)); \
} \
HRESULT __stdcall  ENVTIEName::put_Curve1(CATIAReference * iCrv) \
{ \
return (ENVTIECALL(CATIAHybridShapeCircleTritangent,ENVTIETypeLetter,ENVTIELetter)put_Curve1(iCrv)); \
} \
HRESULT __stdcall  ENVTIEName::get_Curve2(CATIAReference *& oCrv) \
{ \
return (ENVTIECALL(CATIAHybridShapeCircleTritangent,ENVTIETypeLetter,ENVTIELetter)get_Curve2(oCrv)); \
} \
HRESULT __stdcall  ENVTIEName::put_Curve2(CATIAReference * iCrv) \
{ \
return (ENVTIECALL(CATIAHybridShapeCircleTritangent,ENVTIETypeLetter,ENVTIELetter)put_Curve2(iCrv)); \
} \
HRESULT __stdcall  ENVTIEName::get_Curve3(CATIAReference *& oCrv) \
{ \
return (ENVTIECALL(CATIAHybridShapeCircleTritangent,ENVTIETypeLetter,ENVTIELetter)get_Curve3(oCrv)); \
} \
HRESULT __stdcall  ENVTIEName::put_Curve3(CATIAReference * iCrv) \
{ \
return (ENVTIECALL(CATIAHybridShapeCircleTritangent,ENVTIETypeLetter,ENVTIELetter)put_Curve3(iCrv)); \
} \
HRESULT __stdcall  ENVTIEName::get_Support(CATIAReference *& oSupport) \
{ \
return (ENVTIECALL(CATIAHybridShapeCircleTritangent,ENVTIETypeLetter,ENVTIELetter)get_Support(oSupport)); \
} \
HRESULT __stdcall  ENVTIEName::put_Support(CATIAReference * iSupport) \
{ \
return (ENVTIECALL(CATIAHybridShapeCircleTritangent,ENVTIETypeLetter,ENVTIELetter)put_Support(iSupport)); \
} \
HRESULT __stdcall  ENVTIEName::get_Orientation1(CATLONG & oOri) \
{ \
return (ENVTIECALL(CATIAHybridShapeCircleTritangent,ENVTIETypeLetter,ENVTIELetter)get_Orientation1(oOri)); \
} \
HRESULT __stdcall  ENVTIEName::put_Orientation1(CATLONG iOri) \
{ \
return (ENVTIECALL(CATIAHybridShapeCircleTritangent,ENVTIETypeLetter,ENVTIELetter)put_Orientation1(iOri)); \
} \
HRESULT __stdcall  ENVTIEName::get_Orientation2(CATLONG & oOri) \
{ \
return (ENVTIECALL(CATIAHybridShapeCircleTritangent,ENVTIETypeLetter,ENVTIELetter)get_Orientation2(oOri)); \
} \
HRESULT __stdcall  ENVTIEName::put_Orientation2(CATLONG iOri) \
{ \
return (ENVTIECALL(CATIAHybridShapeCircleTritangent,ENVTIETypeLetter,ENVTIELetter)put_Orientation2(iOri)); \
} \
HRESULT __stdcall  ENVTIEName::get_Orientation3(CATLONG & oOri) \
{ \
return (ENVTIECALL(CATIAHybridShapeCircleTritangent,ENVTIETypeLetter,ENVTIELetter)get_Orientation3(oOri)); \
} \
HRESULT __stdcall  ENVTIEName::put_Orientation3(CATLONG iOri) \
{ \
return (ENVTIECALL(CATIAHybridShapeCircleTritangent,ENVTIETypeLetter,ENVTIELetter)put_Orientation3(iOri)); \
} \
HRESULT __stdcall  ENVTIEName::get_DiscriminationIndex(CATLONG & oDiscriminationIndex) \
{ \
return (ENVTIECALL(CATIAHybridShapeCircleTritangent,ENVTIETypeLetter,ENVTIELetter)get_DiscriminationIndex(oDiscriminationIndex)); \
} \
HRESULT __stdcall  ENVTIEName::put_DiscriminationIndex(CATLONG iDiscriminationIndex) \
{ \
return (ENVTIECALL(CATIAHybridShapeCircleTritangent,ENVTIETypeLetter,ENVTIELetter)put_DiscriminationIndex(iDiscriminationIndex)); \
} \
HRESULT __stdcall  ENVTIEName::get_BeginOfCircle(CATLONG & oNumWireBegin) \
{ \
return (ENVTIECALL(CATIAHybridShapeCircleTritangent,ENVTIETypeLetter,ENVTIELetter)get_BeginOfCircle(oNumWireBegin)); \
} \
HRESULT __stdcall  ENVTIEName::put_BeginOfCircle(CATLONG iNumWireBegin) \
{ \
return (ENVTIECALL(CATIAHybridShapeCircleTritangent,ENVTIETypeLetter,ENVTIELetter)put_BeginOfCircle(iNumWireBegin)); \
} \
HRESULT __stdcall  ENVTIEName::get_TangentOrientation1(CATLONG & oOrientation) \
{ \
return (ENVTIECALL(CATIAHybridShapeCircleTritangent,ENVTIETypeLetter,ENVTIELetter)get_TangentOrientation1(oOrientation)); \
} \
HRESULT __stdcall  ENVTIEName::put_TangentOrientation1(CATLONG iOrientation) \
{ \
return (ENVTIECALL(CATIAHybridShapeCircleTritangent,ENVTIETypeLetter,ENVTIELetter)put_TangentOrientation1(iOrientation)); \
} \
HRESULT __stdcall  ENVTIEName::get_TangentOrientation2(CATLONG & oOrientation) \
{ \
return (ENVTIECALL(CATIAHybridShapeCircleTritangent,ENVTIETypeLetter,ENVTIELetter)get_TangentOrientation2(oOrientation)); \
} \
HRESULT __stdcall  ENVTIEName::put_TangentOrientation2(CATLONG iOrientation) \
{ \
return (ENVTIECALL(CATIAHybridShapeCircleTritangent,ENVTIETypeLetter,ENVTIELetter)put_TangentOrientation2(iOrientation)); \
} \
HRESULT __stdcall  ENVTIEName::get_TangentOrientation3(CATLONG & oOrientation) \
{ \
return (ENVTIECALL(CATIAHybridShapeCircleTritangent,ENVTIETypeLetter,ENVTIELetter)get_TangentOrientation3(oOrientation)); \
} \
HRESULT __stdcall  ENVTIEName::put_TangentOrientation3(CATLONG iOrientation) \
{ \
return (ENVTIECALL(CATIAHybridShapeCircleTritangent,ENVTIETypeLetter,ENVTIELetter)put_TangentOrientation3(iOrientation)); \
} \
HRESULT __stdcall  ENVTIEName::get_TrimMode(CATLONG & oTrim) \
{ \
return (ENVTIECALL(CATIAHybridShapeCircleTritangent,ENVTIETypeLetter,ENVTIELetter)get_TrimMode(oTrim)); \
} \
HRESULT __stdcall  ENVTIEName::put_TrimMode(CATLONG iTrim) \
{ \
return (ENVTIECALL(CATIAHybridShapeCircleTritangent,ENVTIETypeLetter,ENVTIELetter)put_TrimMode(iTrim)); \
} \
HRESULT __stdcall  ENVTIEName::GetFreeRadius(double & oRadius) \
{ \
return (ENVTIECALL(CATIAHybridShapeCircleTritangent,ENVTIETypeLetter,ENVTIELetter)GetFreeRadius(oRadius)); \
} \
HRESULT __stdcall  ENVTIEName::GetFreeCenter(CATSafeArrayVariant & ioCenter) \
{ \
return (ENVTIECALL(CATIAHybridShapeCircleTritangent,ENVTIETypeLetter,ENVTIELetter)GetFreeCenter(ioCenter)); \
} \
HRESULT __stdcall  ENVTIEName::SetLimitation(CATLONG iLimitation) \
{ \
return (ENVTIECALL(CATIAHybridShapeCircleTritangent,ENVTIETypeLetter,ENVTIELetter)SetLimitation(iLimitation)); \
} \
HRESULT __stdcall  ENVTIEName::get_StartAngle(CATIAAngle *& oStartAngle) \
{ \
return (ENVTIECALL(CATIAHybridShapeCircleTritangent,ENVTIETypeLetter,ENVTIELetter)get_StartAngle(oStartAngle)); \
} \
HRESULT __stdcall  ENVTIEName::get_EndAngle(CATIAAngle *& oEndAngle) \
{ \
return (ENVTIECALL(CATIAHybridShapeCircleTritangent,ENVTIETypeLetter,ENVTIELetter)get_EndAngle(oEndAngle)); \
} \
HRESULT __stdcall  ENVTIEName::get_AxisComputation(CAT_VARIANT_BOOL & oAxisComputation) \
{ \
return (ENVTIECALL(CATIAHybridShapeCircleTritangent,ENVTIETypeLetter,ENVTIELetter)get_AxisComputation(oAxisComputation)); \
} \
HRESULT __stdcall  ENVTIEName::put_AxisComputation(CAT_VARIANT_BOOL iAxisComputation) \
{ \
return (ENVTIECALL(CATIAHybridShapeCircleTritangent,ENVTIETypeLetter,ENVTIELetter)put_AxisComputation(iAxisComputation)); \
} \
HRESULT __stdcall  ENVTIEName::get_AxisDirection(CATIAHybridShapeDirection *& oDir) \
{ \
return (ENVTIECALL(CATIAHybridShapeCircleTritangent,ENVTIETypeLetter,ENVTIELetter)get_AxisDirection(oDir)); \
} \
HRESULT __stdcall  ENVTIEName::put_AxisDirection(CATIAHybridShapeDirection * iDir) \
{ \
return (ENVTIECALL(CATIAHybridShapeCircleTritangent,ENVTIETypeLetter,ENVTIELetter)put_AxisDirection(iDir)); \
} \
HRESULT __stdcall  ENVTIEName::GetAxis(CATLONG iPosition, CATIAReference *& oAxis) \
{ \
return (ENVTIECALL(CATIAHybridShapeCircleTritangent,ENVTIETypeLetter,ENVTIELetter)GetAxis(iPosition,oAxis)); \
} \
HRESULT __stdcall  ENVTIEName::GetCenter(double & oCenterX, double & oCenterY, double & oCenterZ) \
{ \
return (ENVTIECALL(CATIAHybridShapeCircleTritangent,ENVTIETypeLetter,ENVTIELetter)GetCenter(oCenterX,oCenterY,oCenterZ)); \
} \
HRESULT __stdcall  ENVTIEName::GetLimitation(CATLONG & oLimit) \
{ \
return (ENVTIECALL(CATIAHybridShapeCircleTritangent,ENVTIETypeLetter,ENVTIELetter)GetLimitation(oLimit)); \
} \
HRESULT __stdcall  ENVTIEName::Compute() \
{ \
return (ENVTIECALL(CATIAHybridShapeCircleTritangent,ENVTIETypeLetter,ENVTIELetter)Compute()); \
} \
HRESULT __stdcall  ENVTIEName::AppendHybridShape(CATIAHybridShape * iHybridShape) \
{ \
return (ENVTIECALL(CATIAHybridShapeCircleTritangent,ENVTIETypeLetter,ENVTIELetter)AppendHybridShape(iHybridShape)); \
} \
HRESULT __stdcall  ENVTIEName::get_Thickness(CATIAHybridShape *& oThickness) \
{ \
return (ENVTIECALL(CATIAHybridShapeCircleTritangent,ENVTIETypeLetter,ENVTIELetter)get_Thickness(oThickness)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Application(CATIAApplication *& oApplication) \
{ \
return (ENVTIECALL(CATIAHybridShapeCircleTritangent,ENVTIETypeLetter,ENVTIELetter)get_Application(oApplication)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Parent(CATBaseDispatch *& oParent) \
{ \
return (ENVTIECALL(CATIAHybridShapeCircleTritangent,ENVTIETypeLetter,ENVTIELetter)get_Parent(oParent)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Name(CATBSTR & oNameBSTR) \
{ \
return (ENVTIECALL(CATIAHybridShapeCircleTritangent,ENVTIETypeLetter,ENVTIELetter)get_Name(oNameBSTR)); \
} \
HRESULT  __stdcall  ENVTIEName::put_Name(const CATBSTR & iNameBSTR) \
{ \
return (ENVTIECALL(CATIAHybridShapeCircleTritangent,ENVTIETypeLetter,ENVTIELetter)put_Name(iNameBSTR)); \
} \
HRESULT  __stdcall  ENVTIEName::GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj) \
{ \
return (ENVTIECALL(CATIAHybridShapeCircleTritangent,ENVTIETypeLetter,ENVTIELetter)GetItem(IDName,RealObj)); \
} \


/* Name of the TIE class */
#define class_TIE_CATIAHybridShapeCircleTritangent(classe)    TIECATIAHybridShapeCircleTritangent##classe


/* Common methods inside a TIE */
#define common_TIE_CATIAHybridShapeCircleTritangent(classe) \
 \
 \
/* Static initialization */ \
CATDefineCommonTIEMembers(CATIAHybridShapeCircleTritangent, classe) \
 \
 \
CATImplementTIEMethods(CATIAHybridShapeCircleTritangent, classe) \
CATImplementIUnknownMethodsForCATBaseUnknownTIE(CATIAHybridShapeCircleTritangent, classe, 2) \
CATImplementIDispatchMethodsForCATBaseUnknownTIE(CATIAHybridShapeCircleTritangent, classe) \
CATImplementCATBaseUnknownMethodsForTIE(CATIAHybridShapeCircleTritangent, classe) \
 \
HRESULT __stdcall  TIECATIAHybridShapeCircleTritangent##classe::get_Curve1(CATIAReference *& oCrv) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,1,&_Trac2,&oCrv); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Curve1(oCrv); \
   ExitAfterCall(this,1,_Trac2,&_ret_arg,&oCrv); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeCircleTritangent##classe::put_Curve1(CATIAReference * iCrv) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,2,&_Trac2,&iCrv); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_Curve1(iCrv); \
   ExitAfterCall(this,2,_Trac2,&_ret_arg,&iCrv); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeCircleTritangent##classe::get_Curve2(CATIAReference *& oCrv) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,3,&_Trac2,&oCrv); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Curve2(oCrv); \
   ExitAfterCall(this,3,_Trac2,&_ret_arg,&oCrv); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeCircleTritangent##classe::put_Curve2(CATIAReference * iCrv) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,4,&_Trac2,&iCrv); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_Curve2(iCrv); \
   ExitAfterCall(this,4,_Trac2,&_ret_arg,&iCrv); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeCircleTritangent##classe::get_Curve3(CATIAReference *& oCrv) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,5,&_Trac2,&oCrv); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Curve3(oCrv); \
   ExitAfterCall(this,5,_Trac2,&_ret_arg,&oCrv); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeCircleTritangent##classe::put_Curve3(CATIAReference * iCrv) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,6,&_Trac2,&iCrv); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_Curve3(iCrv); \
   ExitAfterCall(this,6,_Trac2,&_ret_arg,&iCrv); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeCircleTritangent##classe::get_Support(CATIAReference *& oSupport) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,7,&_Trac2,&oSupport); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Support(oSupport); \
   ExitAfterCall(this,7,_Trac2,&_ret_arg,&oSupport); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeCircleTritangent##classe::put_Support(CATIAReference * iSupport) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,8,&_Trac2,&iSupport); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_Support(iSupport); \
   ExitAfterCall(this,8,_Trac2,&_ret_arg,&iSupport); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeCircleTritangent##classe::get_Orientation1(CATLONG & oOri) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,9,&_Trac2,&oOri); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Orientation1(oOri); \
   ExitAfterCall(this,9,_Trac2,&_ret_arg,&oOri); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeCircleTritangent##classe::put_Orientation1(CATLONG iOri) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,10,&_Trac2,&iOri); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_Orientation1(iOri); \
   ExitAfterCall(this,10,_Trac2,&_ret_arg,&iOri); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeCircleTritangent##classe::get_Orientation2(CATLONG & oOri) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,11,&_Trac2,&oOri); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Orientation2(oOri); \
   ExitAfterCall(this,11,_Trac2,&_ret_arg,&oOri); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeCircleTritangent##classe::put_Orientation2(CATLONG iOri) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,12,&_Trac2,&iOri); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_Orientation2(iOri); \
   ExitAfterCall(this,12,_Trac2,&_ret_arg,&iOri); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeCircleTritangent##classe::get_Orientation3(CATLONG & oOri) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,13,&_Trac2,&oOri); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Orientation3(oOri); \
   ExitAfterCall(this,13,_Trac2,&_ret_arg,&oOri); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeCircleTritangent##classe::put_Orientation3(CATLONG iOri) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,14,&_Trac2,&iOri); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_Orientation3(iOri); \
   ExitAfterCall(this,14,_Trac2,&_ret_arg,&iOri); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeCircleTritangent##classe::get_DiscriminationIndex(CATLONG & oDiscriminationIndex) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,15,&_Trac2,&oDiscriminationIndex); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_DiscriminationIndex(oDiscriminationIndex); \
   ExitAfterCall(this,15,_Trac2,&_ret_arg,&oDiscriminationIndex); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeCircleTritangent##classe::put_DiscriminationIndex(CATLONG iDiscriminationIndex) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,16,&_Trac2,&iDiscriminationIndex); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_DiscriminationIndex(iDiscriminationIndex); \
   ExitAfterCall(this,16,_Trac2,&_ret_arg,&iDiscriminationIndex); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeCircleTritangent##classe::get_BeginOfCircle(CATLONG & oNumWireBegin) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,17,&_Trac2,&oNumWireBegin); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_BeginOfCircle(oNumWireBegin); \
   ExitAfterCall(this,17,_Trac2,&_ret_arg,&oNumWireBegin); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeCircleTritangent##classe::put_BeginOfCircle(CATLONG iNumWireBegin) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,18,&_Trac2,&iNumWireBegin); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_BeginOfCircle(iNumWireBegin); \
   ExitAfterCall(this,18,_Trac2,&_ret_arg,&iNumWireBegin); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeCircleTritangent##classe::get_TangentOrientation1(CATLONG & oOrientation) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,19,&_Trac2,&oOrientation); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_TangentOrientation1(oOrientation); \
   ExitAfterCall(this,19,_Trac2,&_ret_arg,&oOrientation); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeCircleTritangent##classe::put_TangentOrientation1(CATLONG iOrientation) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,20,&_Trac2,&iOrientation); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_TangentOrientation1(iOrientation); \
   ExitAfterCall(this,20,_Trac2,&_ret_arg,&iOrientation); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeCircleTritangent##classe::get_TangentOrientation2(CATLONG & oOrientation) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,21,&_Trac2,&oOrientation); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_TangentOrientation2(oOrientation); \
   ExitAfterCall(this,21,_Trac2,&_ret_arg,&oOrientation); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeCircleTritangent##classe::put_TangentOrientation2(CATLONG iOrientation) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,22,&_Trac2,&iOrientation); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_TangentOrientation2(iOrientation); \
   ExitAfterCall(this,22,_Trac2,&_ret_arg,&iOrientation); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeCircleTritangent##classe::get_TangentOrientation3(CATLONG & oOrientation) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,23,&_Trac2,&oOrientation); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_TangentOrientation3(oOrientation); \
   ExitAfterCall(this,23,_Trac2,&_ret_arg,&oOrientation); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeCircleTritangent##classe::put_TangentOrientation3(CATLONG iOrientation) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,24,&_Trac2,&iOrientation); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_TangentOrientation3(iOrientation); \
   ExitAfterCall(this,24,_Trac2,&_ret_arg,&iOrientation); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeCircleTritangent##classe::get_TrimMode(CATLONG & oTrim) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,25,&_Trac2,&oTrim); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_TrimMode(oTrim); \
   ExitAfterCall(this,25,_Trac2,&_ret_arg,&oTrim); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeCircleTritangent##classe::put_TrimMode(CATLONG iTrim) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,26,&_Trac2,&iTrim); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_TrimMode(iTrim); \
   ExitAfterCall(this,26,_Trac2,&_ret_arg,&iTrim); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeCircleTritangent##classe::GetFreeRadius(double & oRadius) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,27,&_Trac2,&oRadius); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetFreeRadius(oRadius); \
   ExitAfterCall(this,27,_Trac2,&_ret_arg,&oRadius); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeCircleTritangent##classe::GetFreeCenter(CATSafeArrayVariant & ioCenter) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,28,&_Trac2,&ioCenter); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetFreeCenter(ioCenter); \
   ExitAfterCall(this,28,_Trac2,&_ret_arg,&ioCenter); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeCircleTritangent##classe::SetLimitation(CATLONG iLimitation) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,29,&_Trac2,&iLimitation); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetLimitation(iLimitation); \
   ExitAfterCall(this,29,_Trac2,&_ret_arg,&iLimitation); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeCircleTritangent##classe::get_StartAngle(CATIAAngle *& oStartAngle) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,30,&_Trac2,&oStartAngle); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_StartAngle(oStartAngle); \
   ExitAfterCall(this,30,_Trac2,&_ret_arg,&oStartAngle); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeCircleTritangent##classe::get_EndAngle(CATIAAngle *& oEndAngle) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,31,&_Trac2,&oEndAngle); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_EndAngle(oEndAngle); \
   ExitAfterCall(this,31,_Trac2,&_ret_arg,&oEndAngle); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeCircleTritangent##classe::get_AxisComputation(CAT_VARIANT_BOOL & oAxisComputation) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,32,&_Trac2,&oAxisComputation); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_AxisComputation(oAxisComputation); \
   ExitAfterCall(this,32,_Trac2,&_ret_arg,&oAxisComputation); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeCircleTritangent##classe::put_AxisComputation(CAT_VARIANT_BOOL iAxisComputation) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,33,&_Trac2,&iAxisComputation); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_AxisComputation(iAxisComputation); \
   ExitAfterCall(this,33,_Trac2,&_ret_arg,&iAxisComputation); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeCircleTritangent##classe::get_AxisDirection(CATIAHybridShapeDirection *& oDir) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,34,&_Trac2,&oDir); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_AxisDirection(oDir); \
   ExitAfterCall(this,34,_Trac2,&_ret_arg,&oDir); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeCircleTritangent##classe::put_AxisDirection(CATIAHybridShapeDirection * iDir) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,35,&_Trac2,&iDir); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_AxisDirection(iDir); \
   ExitAfterCall(this,35,_Trac2,&_ret_arg,&iDir); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeCircleTritangent##classe::GetAxis(CATLONG iPosition, CATIAReference *& oAxis) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,36,&_Trac2,&iPosition,&oAxis); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetAxis(iPosition,oAxis); \
   ExitAfterCall(this,36,_Trac2,&_ret_arg,&iPosition,&oAxis); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeCircleTritangent##classe::GetCenter(double & oCenterX, double & oCenterY, double & oCenterZ) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,37,&_Trac2,&oCenterX,&oCenterY,&oCenterZ); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetCenter(oCenterX,oCenterY,oCenterZ); \
   ExitAfterCall(this,37,_Trac2,&_ret_arg,&oCenterX,&oCenterY,&oCenterZ); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeCircleTritangent##classe::GetLimitation(CATLONG & oLimit) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,38,&_Trac2,&oLimit); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetLimitation(oLimit); \
   ExitAfterCall(this,38,_Trac2,&_ret_arg,&oLimit); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeCircleTritangent##classe::Compute() \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,39,&_Trac2); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->Compute(); \
   ExitAfterCall(this,39,_Trac2,&_ret_arg); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeCircleTritangent##classe::AppendHybridShape(CATIAHybridShape * iHybridShape) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,40,&_Trac2,&iHybridShape); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->AppendHybridShape(iHybridShape); \
   ExitAfterCall(this,40,_Trac2,&_ret_arg,&iHybridShape); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeCircleTritangent##classe::get_Thickness(CATIAHybridShape *& oThickness) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,41,&_Trac2,&oThickness); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Thickness(oThickness); \
   ExitAfterCall(this,41,_Trac2,&_ret_arg,&oThickness); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAHybridShapeCircleTritangent##classe::get_Application(CATIAApplication *& oApplication) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,42,&_Trac2,&oApplication); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Application(oApplication); \
   ExitAfterCall(this,42,_Trac2,&_ret_arg,&oApplication); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAHybridShapeCircleTritangent##classe::get_Parent(CATBaseDispatch *& oParent) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,43,&_Trac2,&oParent); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Parent(oParent); \
   ExitAfterCall(this,43,_Trac2,&_ret_arg,&oParent); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAHybridShapeCircleTritangent##classe::get_Name(CATBSTR & oNameBSTR) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,44,&_Trac2,&oNameBSTR); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Name(oNameBSTR); \
   ExitAfterCall(this,44,_Trac2,&_ret_arg,&oNameBSTR); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAHybridShapeCircleTritangent##classe::put_Name(const CATBSTR & iNameBSTR) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,45,&_Trac2,&iNameBSTR); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_Name(iNameBSTR); \
   ExitAfterCall(this,45,_Trac2,&_ret_arg,&iNameBSTR); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAHybridShapeCircleTritangent##classe::GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,46,&_Trac2,&IDName,&RealObj); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetItem(IDName,RealObj); \
   ExitAfterCall(this,46,_Trac2,&_ret_arg,&IDName,&RealObj); \
   return(_ret_arg); \
} \



/* Macro used to link an implementation with an interface */
#define TIE_CATIAHybridShapeCircleTritangent(classe) \
 \
 \
declare_TIE_CATIAHybridShapeCircleTritangent(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIAHybridShapeCircleTritangent##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIAHybridShapeCircleTritangent,"CATIAHybridShapeCircleTritangent",CATIAHybridShapeCircleTritangent::MetaObject(),classe::MetaObject(),TIE); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIAHybridShapeCircleTritangent(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIECreation(CATIAHybridShapeCircleTritangent, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIAHybridShapeCircleTritangent##classe(classe::MetaObject(),CATIAHybridShapeCircleTritangent::MetaObject(),(void *)CreateTIECATIAHybridShapeCircleTritangent##classe)



/* Macro used to link an implementation with an interface */
/* This TIE is chained on the implementation object */
#define TIEchain_CATIAHybridShapeCircleTritangent(classe) \
 \
 \
declare_TIE_CATIAHybridShapeCircleTritangent(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIAHybridShapeCircleTritangent##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIAHybridShapeCircleTritangent,"CATIAHybridShapeCircleTritangent",CATIAHybridShapeCircleTritangent::MetaObject(),classe::MetaObject(),TIEchain); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIAHybridShapeCircleTritangent(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIEchainCreation(CATIAHybridShapeCircleTritangent, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIAHybridShapeCircleTritangent##classe(classe::MetaObject(),CATIAHybridShapeCircleTritangent::MetaObject(),(void *)CreateTIECATIAHybridShapeCircleTritangent##classe)


/* Macro to switch between BOA and TIE at build time */ 
#ifdef CATSYS_BOA_IS_TIE
#define BOA_CATIAHybridShapeCircleTritangent(classe) TIE_CATIAHybridShapeCircleTritangent(classe)
#else
#define BOA_CATIAHybridShapeCircleTritangent(classe) CATImplementBOA(CATIAHybridShapeCircleTritangent, classe)
#endif

#endif
