#ifndef __TIE_CATIAHybridShapeBump
#define __TIE_CATIAHybridShapeBump

#include <string.h>
#include "CATBaseUnknown.h"
#include "CATMetaClass.h"
#include "CATMacForTie.h"
#include "CATExitJournal.h"
#include "CATIAHybridShapeBump.h"
#include "JS0DSPA.h"


#ifdef _WINDOWS_SOURCE
#define Exported __declspec(dllexport)
#define Imported __declspec(dllimport)
#else
#define Exported 
#define Imported 
#endif


/* To link an implementation with the interface CATIAHybridShapeBump */
#define declare_TIE_CATIAHybridShapeBump(classe) \
 \
 \
class TIECATIAHybridShapeBump##classe : public CATIAHybridShapeBump \
{ \
   private: \
      CATDeclareCommonTIEMembers \
   public: \
      CATDeclareTIEMethods(CATIAHybridShapeBump, classe) \
      CATDeclareIUnknownMethodsForCATBaseUnknownTIE \
      CATDeclareIDispatchMethodsForCATBaseUnknownTIE \
      CATDeclareCATBaseUnknownMethodsForTIE \
      virtual HRESULT __stdcall get_BodyToBump(CATIAReference *& oBodyToBump); \
      virtual HRESULT __stdcall put_BodyToBump(CATIAReference * iBodyToBump); \
      virtual HRESULT __stdcall get_LimitCurve(CATIAReference *& oLimitCurve); \
      virtual HRESULT __stdcall put_LimitCurve(CATIAReference * iLimitCurve); \
      virtual HRESULT __stdcall get_DeformationCenter(CATIAReference *& oDeformationCenter); \
      virtual HRESULT __stdcall put_DeformationCenter(CATIAReference * iDeformationCenter); \
      virtual HRESULT __stdcall get_DeformationDir(CATIAReference *& oDeformationDir); \
      virtual HRESULT __stdcall put_DeformationDir(CATIAReference * iDeformationDir); \
      virtual HRESULT __stdcall get_DeformationDist(CATIALength *& oDefDist); \
      virtual HRESULT __stdcall put_DeformationDist(CATIALength * iDefDist); \
      virtual HRESULT __stdcall get_DeformationDistValue(double & oDefDistVal); \
      virtual HRESULT __stdcall put_DeformationDistValue(double iDefDistVal); \
      virtual HRESULT __stdcall get_ContinuityType(CATLONG & oContinuity); \
      virtual HRESULT __stdcall put_ContinuityType(CATLONG iContinuity); \
      virtual HRESULT __stdcall get_ProjectionDir(CATIAReference *& oProjectionDir); \
      virtual HRESULT __stdcall put_ProjectionDir(CATIAReference * iProjectionDir); \
      virtual HRESULT __stdcall get_CenterTension(CATIARealParam *& oCenterTension); \
      virtual HRESULT __stdcall put_CenterTension(CATIARealParam * iCenterTension); \
      virtual HRESULT __stdcall Compute(); \
      virtual HRESULT __stdcall AppendHybridShape(CATIAHybridShape * iHybridShape); \
      virtual HRESULT __stdcall get_Thickness(CATIAHybridShape *& oThickness); \
      virtual HRESULT  __stdcall get_Application(CATIAApplication *& oApplication); \
      virtual HRESULT  __stdcall get_Parent(CATBaseDispatch *& oParent); \
      virtual HRESULT  __stdcall get_Name(CATBSTR & oNameBSTR); \
      virtual HRESULT  __stdcall put_Name(const CATBSTR & iNameBSTR); \
      virtual HRESULT  __stdcall GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj); \
};



#define ENVTIEdeclare_CATIAHybridShapeBump(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
virtual HRESULT __stdcall get_BodyToBump(CATIAReference *& oBodyToBump); \
virtual HRESULT __stdcall put_BodyToBump(CATIAReference * iBodyToBump); \
virtual HRESULT __stdcall get_LimitCurve(CATIAReference *& oLimitCurve); \
virtual HRESULT __stdcall put_LimitCurve(CATIAReference * iLimitCurve); \
virtual HRESULT __stdcall get_DeformationCenter(CATIAReference *& oDeformationCenter); \
virtual HRESULT __stdcall put_DeformationCenter(CATIAReference * iDeformationCenter); \
virtual HRESULT __stdcall get_DeformationDir(CATIAReference *& oDeformationDir); \
virtual HRESULT __stdcall put_DeformationDir(CATIAReference * iDeformationDir); \
virtual HRESULT __stdcall get_DeformationDist(CATIALength *& oDefDist); \
virtual HRESULT __stdcall put_DeformationDist(CATIALength * iDefDist); \
virtual HRESULT __stdcall get_DeformationDistValue(double & oDefDistVal); \
virtual HRESULT __stdcall put_DeformationDistValue(double iDefDistVal); \
virtual HRESULT __stdcall get_ContinuityType(CATLONG & oContinuity); \
virtual HRESULT __stdcall put_ContinuityType(CATLONG iContinuity); \
virtual HRESULT __stdcall get_ProjectionDir(CATIAReference *& oProjectionDir); \
virtual HRESULT __stdcall put_ProjectionDir(CATIAReference * iProjectionDir); \
virtual HRESULT __stdcall get_CenterTension(CATIARealParam *& oCenterTension); \
virtual HRESULT __stdcall put_CenterTension(CATIARealParam * iCenterTension); \
virtual HRESULT __stdcall Compute(); \
virtual HRESULT __stdcall AppendHybridShape(CATIAHybridShape * iHybridShape); \
virtual HRESULT __stdcall get_Thickness(CATIAHybridShape *& oThickness); \
virtual HRESULT  __stdcall get_Application(CATIAApplication *& oApplication); \
virtual HRESULT  __stdcall get_Parent(CATBaseDispatch *& oParent); \
virtual HRESULT  __stdcall get_Name(CATBSTR & oNameBSTR); \
virtual HRESULT  __stdcall put_Name(const CATBSTR & iNameBSTR); \
virtual HRESULT  __stdcall GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj); \


#define ENVTIEdefine_CATIAHybridShapeBump(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
HRESULT __stdcall  ENVTIEName::get_BodyToBump(CATIAReference *& oBodyToBump) \
{ \
return (ENVTIECALL(CATIAHybridShapeBump,ENVTIETypeLetter,ENVTIELetter)get_BodyToBump(oBodyToBump)); \
} \
HRESULT __stdcall  ENVTIEName::put_BodyToBump(CATIAReference * iBodyToBump) \
{ \
return (ENVTIECALL(CATIAHybridShapeBump,ENVTIETypeLetter,ENVTIELetter)put_BodyToBump(iBodyToBump)); \
} \
HRESULT __stdcall  ENVTIEName::get_LimitCurve(CATIAReference *& oLimitCurve) \
{ \
return (ENVTIECALL(CATIAHybridShapeBump,ENVTIETypeLetter,ENVTIELetter)get_LimitCurve(oLimitCurve)); \
} \
HRESULT __stdcall  ENVTIEName::put_LimitCurve(CATIAReference * iLimitCurve) \
{ \
return (ENVTIECALL(CATIAHybridShapeBump,ENVTIETypeLetter,ENVTIELetter)put_LimitCurve(iLimitCurve)); \
} \
HRESULT __stdcall  ENVTIEName::get_DeformationCenter(CATIAReference *& oDeformationCenter) \
{ \
return (ENVTIECALL(CATIAHybridShapeBump,ENVTIETypeLetter,ENVTIELetter)get_DeformationCenter(oDeformationCenter)); \
} \
HRESULT __stdcall  ENVTIEName::put_DeformationCenter(CATIAReference * iDeformationCenter) \
{ \
return (ENVTIECALL(CATIAHybridShapeBump,ENVTIETypeLetter,ENVTIELetter)put_DeformationCenter(iDeformationCenter)); \
} \
HRESULT __stdcall  ENVTIEName::get_DeformationDir(CATIAReference *& oDeformationDir) \
{ \
return (ENVTIECALL(CATIAHybridShapeBump,ENVTIETypeLetter,ENVTIELetter)get_DeformationDir(oDeformationDir)); \
} \
HRESULT __stdcall  ENVTIEName::put_DeformationDir(CATIAReference * iDeformationDir) \
{ \
return (ENVTIECALL(CATIAHybridShapeBump,ENVTIETypeLetter,ENVTIELetter)put_DeformationDir(iDeformationDir)); \
} \
HRESULT __stdcall  ENVTIEName::get_DeformationDist(CATIALength *& oDefDist) \
{ \
return (ENVTIECALL(CATIAHybridShapeBump,ENVTIETypeLetter,ENVTIELetter)get_DeformationDist(oDefDist)); \
} \
HRESULT __stdcall  ENVTIEName::put_DeformationDist(CATIALength * iDefDist) \
{ \
return (ENVTIECALL(CATIAHybridShapeBump,ENVTIETypeLetter,ENVTIELetter)put_DeformationDist(iDefDist)); \
} \
HRESULT __stdcall  ENVTIEName::get_DeformationDistValue(double & oDefDistVal) \
{ \
return (ENVTIECALL(CATIAHybridShapeBump,ENVTIETypeLetter,ENVTIELetter)get_DeformationDistValue(oDefDistVal)); \
} \
HRESULT __stdcall  ENVTIEName::put_DeformationDistValue(double iDefDistVal) \
{ \
return (ENVTIECALL(CATIAHybridShapeBump,ENVTIETypeLetter,ENVTIELetter)put_DeformationDistValue(iDefDistVal)); \
} \
HRESULT __stdcall  ENVTIEName::get_ContinuityType(CATLONG & oContinuity) \
{ \
return (ENVTIECALL(CATIAHybridShapeBump,ENVTIETypeLetter,ENVTIELetter)get_ContinuityType(oContinuity)); \
} \
HRESULT __stdcall  ENVTIEName::put_ContinuityType(CATLONG iContinuity) \
{ \
return (ENVTIECALL(CATIAHybridShapeBump,ENVTIETypeLetter,ENVTIELetter)put_ContinuityType(iContinuity)); \
} \
HRESULT __stdcall  ENVTIEName::get_ProjectionDir(CATIAReference *& oProjectionDir) \
{ \
return (ENVTIECALL(CATIAHybridShapeBump,ENVTIETypeLetter,ENVTIELetter)get_ProjectionDir(oProjectionDir)); \
} \
HRESULT __stdcall  ENVTIEName::put_ProjectionDir(CATIAReference * iProjectionDir) \
{ \
return (ENVTIECALL(CATIAHybridShapeBump,ENVTIETypeLetter,ENVTIELetter)put_ProjectionDir(iProjectionDir)); \
} \
HRESULT __stdcall  ENVTIEName::get_CenterTension(CATIARealParam *& oCenterTension) \
{ \
return (ENVTIECALL(CATIAHybridShapeBump,ENVTIETypeLetter,ENVTIELetter)get_CenterTension(oCenterTension)); \
} \
HRESULT __stdcall  ENVTIEName::put_CenterTension(CATIARealParam * iCenterTension) \
{ \
return (ENVTIECALL(CATIAHybridShapeBump,ENVTIETypeLetter,ENVTIELetter)put_CenterTension(iCenterTension)); \
} \
HRESULT __stdcall  ENVTIEName::Compute() \
{ \
return (ENVTIECALL(CATIAHybridShapeBump,ENVTIETypeLetter,ENVTIELetter)Compute()); \
} \
HRESULT __stdcall  ENVTIEName::AppendHybridShape(CATIAHybridShape * iHybridShape) \
{ \
return (ENVTIECALL(CATIAHybridShapeBump,ENVTIETypeLetter,ENVTIELetter)AppendHybridShape(iHybridShape)); \
} \
HRESULT __stdcall  ENVTIEName::get_Thickness(CATIAHybridShape *& oThickness) \
{ \
return (ENVTIECALL(CATIAHybridShapeBump,ENVTIETypeLetter,ENVTIELetter)get_Thickness(oThickness)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Application(CATIAApplication *& oApplication) \
{ \
return (ENVTIECALL(CATIAHybridShapeBump,ENVTIETypeLetter,ENVTIELetter)get_Application(oApplication)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Parent(CATBaseDispatch *& oParent) \
{ \
return (ENVTIECALL(CATIAHybridShapeBump,ENVTIETypeLetter,ENVTIELetter)get_Parent(oParent)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Name(CATBSTR & oNameBSTR) \
{ \
return (ENVTIECALL(CATIAHybridShapeBump,ENVTIETypeLetter,ENVTIELetter)get_Name(oNameBSTR)); \
} \
HRESULT  __stdcall  ENVTIEName::put_Name(const CATBSTR & iNameBSTR) \
{ \
return (ENVTIECALL(CATIAHybridShapeBump,ENVTIETypeLetter,ENVTIELetter)put_Name(iNameBSTR)); \
} \
HRESULT  __stdcall  ENVTIEName::GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj) \
{ \
return (ENVTIECALL(CATIAHybridShapeBump,ENVTIETypeLetter,ENVTIELetter)GetItem(IDName,RealObj)); \
} \


/* Name of the TIE class */
#define class_TIE_CATIAHybridShapeBump(classe)    TIECATIAHybridShapeBump##classe


/* Common methods inside a TIE */
#define common_TIE_CATIAHybridShapeBump(classe) \
 \
 \
/* Static initialization */ \
CATDefineCommonTIEMembers(CATIAHybridShapeBump, classe) \
 \
 \
CATImplementTIEMethods(CATIAHybridShapeBump, classe) \
CATImplementIUnknownMethodsForCATBaseUnknownTIE(CATIAHybridShapeBump, classe, 2) \
CATImplementIDispatchMethodsForCATBaseUnknownTIE(CATIAHybridShapeBump, classe) \
CATImplementCATBaseUnknownMethodsForTIE(CATIAHybridShapeBump, classe) \
 \
HRESULT __stdcall  TIECATIAHybridShapeBump##classe::get_BodyToBump(CATIAReference *& oBodyToBump) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,1,&_Trac2,&oBodyToBump); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_BodyToBump(oBodyToBump); \
   ExitAfterCall(this,1,_Trac2,&_ret_arg,&oBodyToBump); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeBump##classe::put_BodyToBump(CATIAReference * iBodyToBump) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,2,&_Trac2,&iBodyToBump); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_BodyToBump(iBodyToBump); \
   ExitAfterCall(this,2,_Trac2,&_ret_arg,&iBodyToBump); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeBump##classe::get_LimitCurve(CATIAReference *& oLimitCurve) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,3,&_Trac2,&oLimitCurve); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_LimitCurve(oLimitCurve); \
   ExitAfterCall(this,3,_Trac2,&_ret_arg,&oLimitCurve); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeBump##classe::put_LimitCurve(CATIAReference * iLimitCurve) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,4,&_Trac2,&iLimitCurve); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_LimitCurve(iLimitCurve); \
   ExitAfterCall(this,4,_Trac2,&_ret_arg,&iLimitCurve); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeBump##classe::get_DeformationCenter(CATIAReference *& oDeformationCenter) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,5,&_Trac2,&oDeformationCenter); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_DeformationCenter(oDeformationCenter); \
   ExitAfterCall(this,5,_Trac2,&_ret_arg,&oDeformationCenter); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeBump##classe::put_DeformationCenter(CATIAReference * iDeformationCenter) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,6,&_Trac2,&iDeformationCenter); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_DeformationCenter(iDeformationCenter); \
   ExitAfterCall(this,6,_Trac2,&_ret_arg,&iDeformationCenter); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeBump##classe::get_DeformationDir(CATIAReference *& oDeformationDir) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,7,&_Trac2,&oDeformationDir); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_DeformationDir(oDeformationDir); \
   ExitAfterCall(this,7,_Trac2,&_ret_arg,&oDeformationDir); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeBump##classe::put_DeformationDir(CATIAReference * iDeformationDir) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,8,&_Trac2,&iDeformationDir); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_DeformationDir(iDeformationDir); \
   ExitAfterCall(this,8,_Trac2,&_ret_arg,&iDeformationDir); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeBump##classe::get_DeformationDist(CATIALength *& oDefDist) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,9,&_Trac2,&oDefDist); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_DeformationDist(oDefDist); \
   ExitAfterCall(this,9,_Trac2,&_ret_arg,&oDefDist); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeBump##classe::put_DeformationDist(CATIALength * iDefDist) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,10,&_Trac2,&iDefDist); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_DeformationDist(iDefDist); \
   ExitAfterCall(this,10,_Trac2,&_ret_arg,&iDefDist); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeBump##classe::get_DeformationDistValue(double & oDefDistVal) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,11,&_Trac2,&oDefDistVal); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_DeformationDistValue(oDefDistVal); \
   ExitAfterCall(this,11,_Trac2,&_ret_arg,&oDefDistVal); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeBump##classe::put_DeformationDistValue(double iDefDistVal) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,12,&_Trac2,&iDefDistVal); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_DeformationDistValue(iDefDistVal); \
   ExitAfterCall(this,12,_Trac2,&_ret_arg,&iDefDistVal); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeBump##classe::get_ContinuityType(CATLONG & oContinuity) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,13,&_Trac2,&oContinuity); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_ContinuityType(oContinuity); \
   ExitAfterCall(this,13,_Trac2,&_ret_arg,&oContinuity); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeBump##classe::put_ContinuityType(CATLONG iContinuity) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,14,&_Trac2,&iContinuity); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_ContinuityType(iContinuity); \
   ExitAfterCall(this,14,_Trac2,&_ret_arg,&iContinuity); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeBump##classe::get_ProjectionDir(CATIAReference *& oProjectionDir) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,15,&_Trac2,&oProjectionDir); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_ProjectionDir(oProjectionDir); \
   ExitAfterCall(this,15,_Trac2,&_ret_arg,&oProjectionDir); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeBump##classe::put_ProjectionDir(CATIAReference * iProjectionDir) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,16,&_Trac2,&iProjectionDir); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_ProjectionDir(iProjectionDir); \
   ExitAfterCall(this,16,_Trac2,&_ret_arg,&iProjectionDir); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeBump##classe::get_CenterTension(CATIARealParam *& oCenterTension) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,17,&_Trac2,&oCenterTension); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_CenterTension(oCenterTension); \
   ExitAfterCall(this,17,_Trac2,&_ret_arg,&oCenterTension); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeBump##classe::put_CenterTension(CATIARealParam * iCenterTension) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,18,&_Trac2,&iCenterTension); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_CenterTension(iCenterTension); \
   ExitAfterCall(this,18,_Trac2,&_ret_arg,&iCenterTension); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeBump##classe::Compute() \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,19,&_Trac2); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->Compute(); \
   ExitAfterCall(this,19,_Trac2,&_ret_arg); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeBump##classe::AppendHybridShape(CATIAHybridShape * iHybridShape) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,20,&_Trac2,&iHybridShape); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->AppendHybridShape(iHybridShape); \
   ExitAfterCall(this,20,_Trac2,&_ret_arg,&iHybridShape); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeBump##classe::get_Thickness(CATIAHybridShape *& oThickness) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,21,&_Trac2,&oThickness); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Thickness(oThickness); \
   ExitAfterCall(this,21,_Trac2,&_ret_arg,&oThickness); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAHybridShapeBump##classe::get_Application(CATIAApplication *& oApplication) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,22,&_Trac2,&oApplication); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Application(oApplication); \
   ExitAfterCall(this,22,_Trac2,&_ret_arg,&oApplication); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAHybridShapeBump##classe::get_Parent(CATBaseDispatch *& oParent) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,23,&_Trac2,&oParent); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Parent(oParent); \
   ExitAfterCall(this,23,_Trac2,&_ret_arg,&oParent); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAHybridShapeBump##classe::get_Name(CATBSTR & oNameBSTR) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,24,&_Trac2,&oNameBSTR); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Name(oNameBSTR); \
   ExitAfterCall(this,24,_Trac2,&_ret_arg,&oNameBSTR); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAHybridShapeBump##classe::put_Name(const CATBSTR & iNameBSTR) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,25,&_Trac2,&iNameBSTR); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_Name(iNameBSTR); \
   ExitAfterCall(this,25,_Trac2,&_ret_arg,&iNameBSTR); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAHybridShapeBump##classe::GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,26,&_Trac2,&IDName,&RealObj); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetItem(IDName,RealObj); \
   ExitAfterCall(this,26,_Trac2,&_ret_arg,&IDName,&RealObj); \
   return(_ret_arg); \
} \



/* Macro used to link an implementation with an interface */
#define TIE_CATIAHybridShapeBump(classe) \
 \
 \
declare_TIE_CATIAHybridShapeBump(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIAHybridShapeBump##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIAHybridShapeBump,"CATIAHybridShapeBump",CATIAHybridShapeBump::MetaObject(),classe::MetaObject(),TIE); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIAHybridShapeBump(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIECreation(CATIAHybridShapeBump, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIAHybridShapeBump##classe(classe::MetaObject(),CATIAHybridShapeBump::MetaObject(),(void *)CreateTIECATIAHybridShapeBump##classe)



/* Macro used to link an implementation with an interface */
/* This TIE is chained on the implementation object */
#define TIEchain_CATIAHybridShapeBump(classe) \
 \
 \
declare_TIE_CATIAHybridShapeBump(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIAHybridShapeBump##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIAHybridShapeBump,"CATIAHybridShapeBump",CATIAHybridShapeBump::MetaObject(),classe::MetaObject(),TIEchain); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIAHybridShapeBump(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIEchainCreation(CATIAHybridShapeBump, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIAHybridShapeBump##classe(classe::MetaObject(),CATIAHybridShapeBump::MetaObject(),(void *)CreateTIECATIAHybridShapeBump##classe)


/* Macro to switch between BOA and TIE at build time */ 
#ifdef CATSYS_BOA_IS_TIE
#define BOA_CATIAHybridShapeBump(classe) TIE_CATIAHybridShapeBump(classe)
#else
#define BOA_CATIAHybridShapeBump(classe) CATImplementBOA(CATIAHybridShapeBump, classe)
#endif

#endif
