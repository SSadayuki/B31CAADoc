#ifndef __TIE_CATIAHybridShapeReflectLine
#define __TIE_CATIAHybridShapeReflectLine

#include <string.h>
#include "CATBaseUnknown.h"
#include "CATMetaClass.h"
#include "CATMacForTie.h"
#include "CATExitJournal.h"
#include "CATIAHybridShapeReflectLine.h"
#include "JS0DSPA.h"


#ifdef _WINDOWS_SOURCE
#define Exported __declspec(dllexport)
#define Imported __declspec(dllimport)
#else
#define Exported 
#define Imported 
#endif


/* To link an implementation with the interface CATIAHybridShapeReflectLine */
#define declare_TIE_CATIAHybridShapeReflectLine(classe) \
 \
 \
class TIECATIAHybridShapeReflectLine##classe : public CATIAHybridShapeReflectLine \
{ \
   private: \
      CATDeclareCommonTIEMembers \
   public: \
      CATDeclareTIEMethods(CATIAHybridShapeReflectLine, classe) \
      CATDeclareIUnknownMethodsForCATBaseUnknownTIE \
      CATDeclareIDispatchMethodsForCATBaseUnknownTIE \
      CATDeclareCATBaseUnknownMethodsForTIE \
      virtual HRESULT __stdcall get_Support(CATIAReference *& oSupport); \
      virtual HRESULT __stdcall put_Support(CATIAReference * iSupport); \
      virtual HRESULT __stdcall get_Origin(CATIAReference *& oOrigin); \
      virtual HRESULT __stdcall put_Origin(CATIAReference * iOrigin); \
      virtual HRESULT __stdcall get_Direction(CATIAHybridShapeDirection *& oDirection); \
      virtual HRESULT __stdcall put_Direction(CATIAHybridShapeDirection * iDirection); \
      virtual HRESULT __stdcall get_Angle(CATIAAngle *& oAngle); \
      virtual HRESULT __stdcall put_Angle(CATIAAngle * iAngle); \
      virtual HRESULT __stdcall get_OrientationSupport(CATLONG & oOrientation); \
      virtual HRESULT __stdcall put_OrientationSupport(CATLONG iOrientation); \
      virtual HRESULT __stdcall get_OrientationDirection(CATLONG & oOrientation); \
      virtual HRESULT __stdcall put_OrientationDirection(CATLONG iOrientation); \
      virtual HRESULT __stdcall get_TypeSolution(CATLONG & oSolutionType); \
      virtual HRESULT __stdcall put_TypeSolution(CATLONG iSolutionType); \
      virtual HRESULT __stdcall get_SourceType(CATLONG & oSourceType); \
      virtual HRESULT __stdcall put_SourceType(CATLONG iSourceType); \
      virtual HRESULT __stdcall InvertOrientationSupport(); \
      virtual HRESULT __stdcall InvertOrientationDirection(); \
      virtual HRESULT __stdcall Compute(); \
      virtual HRESULT __stdcall AppendHybridShape(CATIAHybridShape * iHybridShape); \
      virtual HRESULT __stdcall get_Thickness(CATIAHybridShape *& oThickness); \
      virtual HRESULT  __stdcall get_Application(CATIAApplication *& oApplication); \
      virtual HRESULT  __stdcall get_Parent(CATBaseDispatch *& oParent); \
      virtual HRESULT  __stdcall get_Name(CATBSTR & oNameBSTR); \
      virtual HRESULT  __stdcall put_Name(const CATBSTR & iNameBSTR); \
      virtual HRESULT  __stdcall GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj); \
};



#define ENVTIEdeclare_CATIAHybridShapeReflectLine(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
virtual HRESULT __stdcall get_Support(CATIAReference *& oSupport); \
virtual HRESULT __stdcall put_Support(CATIAReference * iSupport); \
virtual HRESULT __stdcall get_Origin(CATIAReference *& oOrigin); \
virtual HRESULT __stdcall put_Origin(CATIAReference * iOrigin); \
virtual HRESULT __stdcall get_Direction(CATIAHybridShapeDirection *& oDirection); \
virtual HRESULT __stdcall put_Direction(CATIAHybridShapeDirection * iDirection); \
virtual HRESULT __stdcall get_Angle(CATIAAngle *& oAngle); \
virtual HRESULT __stdcall put_Angle(CATIAAngle * iAngle); \
virtual HRESULT __stdcall get_OrientationSupport(CATLONG & oOrientation); \
virtual HRESULT __stdcall put_OrientationSupport(CATLONG iOrientation); \
virtual HRESULT __stdcall get_OrientationDirection(CATLONG & oOrientation); \
virtual HRESULT __stdcall put_OrientationDirection(CATLONG iOrientation); \
virtual HRESULT __stdcall get_TypeSolution(CATLONG & oSolutionType); \
virtual HRESULT __stdcall put_TypeSolution(CATLONG iSolutionType); \
virtual HRESULT __stdcall get_SourceType(CATLONG & oSourceType); \
virtual HRESULT __stdcall put_SourceType(CATLONG iSourceType); \
virtual HRESULT __stdcall InvertOrientationSupport(); \
virtual HRESULT __stdcall InvertOrientationDirection(); \
virtual HRESULT __stdcall Compute(); \
virtual HRESULT __stdcall AppendHybridShape(CATIAHybridShape * iHybridShape); \
virtual HRESULT __stdcall get_Thickness(CATIAHybridShape *& oThickness); \
virtual HRESULT  __stdcall get_Application(CATIAApplication *& oApplication); \
virtual HRESULT  __stdcall get_Parent(CATBaseDispatch *& oParent); \
virtual HRESULT  __stdcall get_Name(CATBSTR & oNameBSTR); \
virtual HRESULT  __stdcall put_Name(const CATBSTR & iNameBSTR); \
virtual HRESULT  __stdcall GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj); \


#define ENVTIEdefine_CATIAHybridShapeReflectLine(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
HRESULT __stdcall  ENVTIEName::get_Support(CATIAReference *& oSupport) \
{ \
return (ENVTIECALL(CATIAHybridShapeReflectLine,ENVTIETypeLetter,ENVTIELetter)get_Support(oSupport)); \
} \
HRESULT __stdcall  ENVTIEName::put_Support(CATIAReference * iSupport) \
{ \
return (ENVTIECALL(CATIAHybridShapeReflectLine,ENVTIETypeLetter,ENVTIELetter)put_Support(iSupport)); \
} \
HRESULT __stdcall  ENVTIEName::get_Origin(CATIAReference *& oOrigin) \
{ \
return (ENVTIECALL(CATIAHybridShapeReflectLine,ENVTIETypeLetter,ENVTIELetter)get_Origin(oOrigin)); \
} \
HRESULT __stdcall  ENVTIEName::put_Origin(CATIAReference * iOrigin) \
{ \
return (ENVTIECALL(CATIAHybridShapeReflectLine,ENVTIETypeLetter,ENVTIELetter)put_Origin(iOrigin)); \
} \
HRESULT __stdcall  ENVTIEName::get_Direction(CATIAHybridShapeDirection *& oDirection) \
{ \
return (ENVTIECALL(CATIAHybridShapeReflectLine,ENVTIETypeLetter,ENVTIELetter)get_Direction(oDirection)); \
} \
HRESULT __stdcall  ENVTIEName::put_Direction(CATIAHybridShapeDirection * iDirection) \
{ \
return (ENVTIECALL(CATIAHybridShapeReflectLine,ENVTIETypeLetter,ENVTIELetter)put_Direction(iDirection)); \
} \
HRESULT __stdcall  ENVTIEName::get_Angle(CATIAAngle *& oAngle) \
{ \
return (ENVTIECALL(CATIAHybridShapeReflectLine,ENVTIETypeLetter,ENVTIELetter)get_Angle(oAngle)); \
} \
HRESULT __stdcall  ENVTIEName::put_Angle(CATIAAngle * iAngle) \
{ \
return (ENVTIECALL(CATIAHybridShapeReflectLine,ENVTIETypeLetter,ENVTIELetter)put_Angle(iAngle)); \
} \
HRESULT __stdcall  ENVTIEName::get_OrientationSupport(CATLONG & oOrientation) \
{ \
return (ENVTIECALL(CATIAHybridShapeReflectLine,ENVTIETypeLetter,ENVTIELetter)get_OrientationSupport(oOrientation)); \
} \
HRESULT __stdcall  ENVTIEName::put_OrientationSupport(CATLONG iOrientation) \
{ \
return (ENVTIECALL(CATIAHybridShapeReflectLine,ENVTIETypeLetter,ENVTIELetter)put_OrientationSupport(iOrientation)); \
} \
HRESULT __stdcall  ENVTIEName::get_OrientationDirection(CATLONG & oOrientation) \
{ \
return (ENVTIECALL(CATIAHybridShapeReflectLine,ENVTIETypeLetter,ENVTIELetter)get_OrientationDirection(oOrientation)); \
} \
HRESULT __stdcall  ENVTIEName::put_OrientationDirection(CATLONG iOrientation) \
{ \
return (ENVTIECALL(CATIAHybridShapeReflectLine,ENVTIETypeLetter,ENVTIELetter)put_OrientationDirection(iOrientation)); \
} \
HRESULT __stdcall  ENVTIEName::get_TypeSolution(CATLONG & oSolutionType) \
{ \
return (ENVTIECALL(CATIAHybridShapeReflectLine,ENVTIETypeLetter,ENVTIELetter)get_TypeSolution(oSolutionType)); \
} \
HRESULT __stdcall  ENVTIEName::put_TypeSolution(CATLONG iSolutionType) \
{ \
return (ENVTIECALL(CATIAHybridShapeReflectLine,ENVTIETypeLetter,ENVTIELetter)put_TypeSolution(iSolutionType)); \
} \
HRESULT __stdcall  ENVTIEName::get_SourceType(CATLONG & oSourceType) \
{ \
return (ENVTIECALL(CATIAHybridShapeReflectLine,ENVTIETypeLetter,ENVTIELetter)get_SourceType(oSourceType)); \
} \
HRESULT __stdcall  ENVTIEName::put_SourceType(CATLONG iSourceType) \
{ \
return (ENVTIECALL(CATIAHybridShapeReflectLine,ENVTIETypeLetter,ENVTIELetter)put_SourceType(iSourceType)); \
} \
HRESULT __stdcall  ENVTIEName::InvertOrientationSupport() \
{ \
return (ENVTIECALL(CATIAHybridShapeReflectLine,ENVTIETypeLetter,ENVTIELetter)InvertOrientationSupport()); \
} \
HRESULT __stdcall  ENVTIEName::InvertOrientationDirection() \
{ \
return (ENVTIECALL(CATIAHybridShapeReflectLine,ENVTIETypeLetter,ENVTIELetter)InvertOrientationDirection()); \
} \
HRESULT __stdcall  ENVTIEName::Compute() \
{ \
return (ENVTIECALL(CATIAHybridShapeReflectLine,ENVTIETypeLetter,ENVTIELetter)Compute()); \
} \
HRESULT __stdcall  ENVTIEName::AppendHybridShape(CATIAHybridShape * iHybridShape) \
{ \
return (ENVTIECALL(CATIAHybridShapeReflectLine,ENVTIETypeLetter,ENVTIELetter)AppendHybridShape(iHybridShape)); \
} \
HRESULT __stdcall  ENVTIEName::get_Thickness(CATIAHybridShape *& oThickness) \
{ \
return (ENVTIECALL(CATIAHybridShapeReflectLine,ENVTIETypeLetter,ENVTIELetter)get_Thickness(oThickness)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Application(CATIAApplication *& oApplication) \
{ \
return (ENVTIECALL(CATIAHybridShapeReflectLine,ENVTIETypeLetter,ENVTIELetter)get_Application(oApplication)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Parent(CATBaseDispatch *& oParent) \
{ \
return (ENVTIECALL(CATIAHybridShapeReflectLine,ENVTIETypeLetter,ENVTIELetter)get_Parent(oParent)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Name(CATBSTR & oNameBSTR) \
{ \
return (ENVTIECALL(CATIAHybridShapeReflectLine,ENVTIETypeLetter,ENVTIELetter)get_Name(oNameBSTR)); \
} \
HRESULT  __stdcall  ENVTIEName::put_Name(const CATBSTR & iNameBSTR) \
{ \
return (ENVTIECALL(CATIAHybridShapeReflectLine,ENVTIETypeLetter,ENVTIELetter)put_Name(iNameBSTR)); \
} \
HRESULT  __stdcall  ENVTIEName::GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj) \
{ \
return (ENVTIECALL(CATIAHybridShapeReflectLine,ENVTIETypeLetter,ENVTIELetter)GetItem(IDName,RealObj)); \
} \


/* Name of the TIE class */
#define class_TIE_CATIAHybridShapeReflectLine(classe)    TIECATIAHybridShapeReflectLine##classe


/* Common methods inside a TIE */
#define common_TIE_CATIAHybridShapeReflectLine(classe) \
 \
 \
/* Static initialization */ \
CATDefineCommonTIEMembers(CATIAHybridShapeReflectLine, classe) \
 \
 \
CATImplementTIEMethods(CATIAHybridShapeReflectLine, classe) \
CATImplementIUnknownMethodsForCATBaseUnknownTIE(CATIAHybridShapeReflectLine, classe, 2) \
CATImplementIDispatchMethodsForCATBaseUnknownTIE(CATIAHybridShapeReflectLine, classe) \
CATImplementCATBaseUnknownMethodsForTIE(CATIAHybridShapeReflectLine, classe) \
 \
HRESULT __stdcall  TIECATIAHybridShapeReflectLine##classe::get_Support(CATIAReference *& oSupport) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,1,&_Trac2,&oSupport); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Support(oSupport); \
   ExitAfterCall(this,1,_Trac2,&_ret_arg,&oSupport); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeReflectLine##classe::put_Support(CATIAReference * iSupport) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,2,&_Trac2,&iSupport); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_Support(iSupport); \
   ExitAfterCall(this,2,_Trac2,&_ret_arg,&iSupport); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeReflectLine##classe::get_Origin(CATIAReference *& oOrigin) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,3,&_Trac2,&oOrigin); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Origin(oOrigin); \
   ExitAfterCall(this,3,_Trac2,&_ret_arg,&oOrigin); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeReflectLine##classe::put_Origin(CATIAReference * iOrigin) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,4,&_Trac2,&iOrigin); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_Origin(iOrigin); \
   ExitAfterCall(this,4,_Trac2,&_ret_arg,&iOrigin); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeReflectLine##classe::get_Direction(CATIAHybridShapeDirection *& oDirection) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,5,&_Trac2,&oDirection); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Direction(oDirection); \
   ExitAfterCall(this,5,_Trac2,&_ret_arg,&oDirection); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeReflectLine##classe::put_Direction(CATIAHybridShapeDirection * iDirection) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,6,&_Trac2,&iDirection); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_Direction(iDirection); \
   ExitAfterCall(this,6,_Trac2,&_ret_arg,&iDirection); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeReflectLine##classe::get_Angle(CATIAAngle *& oAngle) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,7,&_Trac2,&oAngle); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Angle(oAngle); \
   ExitAfterCall(this,7,_Trac2,&_ret_arg,&oAngle); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeReflectLine##classe::put_Angle(CATIAAngle * iAngle) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,8,&_Trac2,&iAngle); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_Angle(iAngle); \
   ExitAfterCall(this,8,_Trac2,&_ret_arg,&iAngle); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeReflectLine##classe::get_OrientationSupport(CATLONG & oOrientation) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,9,&_Trac2,&oOrientation); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_OrientationSupport(oOrientation); \
   ExitAfterCall(this,9,_Trac2,&_ret_arg,&oOrientation); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeReflectLine##classe::put_OrientationSupport(CATLONG iOrientation) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,10,&_Trac2,&iOrientation); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_OrientationSupport(iOrientation); \
   ExitAfterCall(this,10,_Trac2,&_ret_arg,&iOrientation); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeReflectLine##classe::get_OrientationDirection(CATLONG & oOrientation) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,11,&_Trac2,&oOrientation); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_OrientationDirection(oOrientation); \
   ExitAfterCall(this,11,_Trac2,&_ret_arg,&oOrientation); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeReflectLine##classe::put_OrientationDirection(CATLONG iOrientation) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,12,&_Trac2,&iOrientation); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_OrientationDirection(iOrientation); \
   ExitAfterCall(this,12,_Trac2,&_ret_arg,&iOrientation); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeReflectLine##classe::get_TypeSolution(CATLONG & oSolutionType) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,13,&_Trac2,&oSolutionType); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_TypeSolution(oSolutionType); \
   ExitAfterCall(this,13,_Trac2,&_ret_arg,&oSolutionType); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeReflectLine##classe::put_TypeSolution(CATLONG iSolutionType) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,14,&_Trac2,&iSolutionType); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_TypeSolution(iSolutionType); \
   ExitAfterCall(this,14,_Trac2,&_ret_arg,&iSolutionType); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeReflectLine##classe::get_SourceType(CATLONG & oSourceType) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,15,&_Trac2,&oSourceType); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_SourceType(oSourceType); \
   ExitAfterCall(this,15,_Trac2,&_ret_arg,&oSourceType); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeReflectLine##classe::put_SourceType(CATLONG iSourceType) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,16,&_Trac2,&iSourceType); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_SourceType(iSourceType); \
   ExitAfterCall(this,16,_Trac2,&_ret_arg,&iSourceType); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeReflectLine##classe::InvertOrientationSupport() \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,17,&_Trac2); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->InvertOrientationSupport(); \
   ExitAfterCall(this,17,_Trac2,&_ret_arg); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeReflectLine##classe::InvertOrientationDirection() \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,18,&_Trac2); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->InvertOrientationDirection(); \
   ExitAfterCall(this,18,_Trac2,&_ret_arg); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeReflectLine##classe::Compute() \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,19,&_Trac2); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->Compute(); \
   ExitAfterCall(this,19,_Trac2,&_ret_arg); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeReflectLine##classe::AppendHybridShape(CATIAHybridShape * iHybridShape) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,20,&_Trac2,&iHybridShape); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->AppendHybridShape(iHybridShape); \
   ExitAfterCall(this,20,_Trac2,&_ret_arg,&iHybridShape); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeReflectLine##classe::get_Thickness(CATIAHybridShape *& oThickness) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,21,&_Trac2,&oThickness); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Thickness(oThickness); \
   ExitAfterCall(this,21,_Trac2,&_ret_arg,&oThickness); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAHybridShapeReflectLine##classe::get_Application(CATIAApplication *& oApplication) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,22,&_Trac2,&oApplication); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Application(oApplication); \
   ExitAfterCall(this,22,_Trac2,&_ret_arg,&oApplication); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAHybridShapeReflectLine##classe::get_Parent(CATBaseDispatch *& oParent) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,23,&_Trac2,&oParent); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Parent(oParent); \
   ExitAfterCall(this,23,_Trac2,&_ret_arg,&oParent); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAHybridShapeReflectLine##classe::get_Name(CATBSTR & oNameBSTR) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,24,&_Trac2,&oNameBSTR); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Name(oNameBSTR); \
   ExitAfterCall(this,24,_Trac2,&_ret_arg,&oNameBSTR); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAHybridShapeReflectLine##classe::put_Name(const CATBSTR & iNameBSTR) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,25,&_Trac2,&iNameBSTR); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_Name(iNameBSTR); \
   ExitAfterCall(this,25,_Trac2,&_ret_arg,&iNameBSTR); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAHybridShapeReflectLine##classe::GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,26,&_Trac2,&IDName,&RealObj); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetItem(IDName,RealObj); \
   ExitAfterCall(this,26,_Trac2,&_ret_arg,&IDName,&RealObj); \
   return(_ret_arg); \
} \



/* Macro used to link an implementation with an interface */
#define TIE_CATIAHybridShapeReflectLine(classe) \
 \
 \
declare_TIE_CATIAHybridShapeReflectLine(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIAHybridShapeReflectLine##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIAHybridShapeReflectLine,"CATIAHybridShapeReflectLine",CATIAHybridShapeReflectLine::MetaObject(),classe::MetaObject(),TIE); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIAHybridShapeReflectLine(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIECreation(CATIAHybridShapeReflectLine, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIAHybridShapeReflectLine##classe(classe::MetaObject(),CATIAHybridShapeReflectLine::MetaObject(),(void *)CreateTIECATIAHybridShapeReflectLine##classe)



/* Macro used to link an implementation with an interface */
/* This TIE is chained on the implementation object */
#define TIEchain_CATIAHybridShapeReflectLine(classe) \
 \
 \
declare_TIE_CATIAHybridShapeReflectLine(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIAHybridShapeReflectLine##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIAHybridShapeReflectLine,"CATIAHybridShapeReflectLine",CATIAHybridShapeReflectLine::MetaObject(),classe::MetaObject(),TIEchain); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIAHybridShapeReflectLine(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIEchainCreation(CATIAHybridShapeReflectLine, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIAHybridShapeReflectLine##classe(classe::MetaObject(),CATIAHybridShapeReflectLine::MetaObject(),(void *)CreateTIECATIAHybridShapeReflectLine##classe)


/* Macro to switch between BOA and TIE at build time */ 
#ifdef CATSYS_BOA_IS_TIE
#define BOA_CATIAHybridShapeReflectLine(classe) TIE_CATIAHybridShapeReflectLine(classe)
#else
#define BOA_CATIAHybridShapeReflectLine(classe) CATImplementBOA(CATIAHybridShapeReflectLine, classe)
#endif

#endif
