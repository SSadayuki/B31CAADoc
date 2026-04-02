#ifndef __TIE_CATIAOptimization
#define __TIE_CATIAOptimization

#include <string.h>
#include "CATBaseUnknown.h"
#include "CATMetaClass.h"
#include "CATMacForTie.h"
#include "CATExitJournal.h"
#include "CATIAOptimization.h"
#include "JS0DSPA.h"


#ifdef _WINDOWS_SOURCE
#define Exported __declspec(dllexport)
#define Imported __declspec(dllimport)
#else
#define Exported 
#define Imported 
#endif


/* To link an implementation with the interface CATIAOptimization */
#define declare_TIE_CATIAOptimization(classe) \
 \
 \
class TIECATIAOptimization##classe : public CATIAOptimization \
{ \
   private: \
      CATDeclareCommonTIEMembers \
   public: \
      CATDeclareTIEMethods(CATIAOptimization, classe) \
      CATDeclareIUnknownMethodsForCATBaseUnknownTIE \
      CATDeclareIDispatchMethodsForCATBaseUnknownTIE \
      CATDeclareCATBaseUnknownMethodsForTIE \
      virtual HRESULT __stdcall Run(CAT_VARIANT_BOOL iWithStopDialog); \
      virtual HRESULT __stdcall get_ObjectiveParameter(CATIARealParam *& oParameter); \
      virtual HRESULT __stdcall put_ObjectiveParameter(CATIARealParam * iParameter); \
      virtual HRESULT __stdcall get_MaxEvalsNb(CATLONG & oNb); \
      virtual HRESULT __stdcall put_MaxEvalsNb(CATLONG iNb); \
      virtual HRESULT __stdcall get_MaxTime(CATLONG & oMaxTime); \
      virtual HRESULT __stdcall put_MaxTime(CATLONG oiMaxTime); \
      virtual HRESULT __stdcall get_MaxEvalsWoImprovement(CATLONG & oMaxEvalsWoImpvt); \
      virtual HRESULT __stdcall put_MaxEvalsWoImprovement(CATLONG oMaxEvalsWoImpvt); \
      virtual HRESULT __stdcall get_UseMaxTime(CAT_VARIANT_BOOL & oUse); \
      virtual HRESULT __stdcall put_UseMaxTime(CAT_VARIANT_BOOL iUse); \
      virtual HRESULT __stdcall get_UseMaxEvalsWoImprovement(CAT_VARIANT_BOOL & oUse); \
      virtual HRESULT __stdcall put_UseMaxEvalsWoImprovement(CAT_VARIANT_BOOL iUse); \
      virtual HRESULT __stdcall get_TargetValue(CATIARealParam *& oParameter); \
      virtual HRESULT __stdcall get_OptimizationType(CatOptimizationType & oType); \
      virtual HRESULT __stdcall put_OptimizationType(CatOptimizationType iType); \
      virtual HRESULT __stdcall get_AlgorithmType(CatAlgorithmType & oType); \
      virtual HRESULT __stdcall put_AlgorithmType(CatAlgorithmType iType); \
      virtual HRESULT __stdcall get_Constraints(CATIAOptimizationConstraints *& oConstraints); \
      virtual HRESULT __stdcall get_FreeParameters(CATIAFreeParameters *& oFreeParameters); \
      virtual HRESULT __stdcall get_ConvSpeed(CATLONG & oConvSpeed); \
      virtual HRESULT __stdcall put_ConvSpeed(CATLONG iConvSpeed); \
      virtual HRESULT __stdcall get_Hidden(CAT_VARIANT_BOOL & oHidden); \
      virtual HRESULT __stdcall put_Hidden(CAT_VARIANT_BOOL iHidden); \
      virtual HRESULT __stdcall get_IsConst(CAT_VARIANT_BOOL & oIsConst); \
      virtual HRESULT __stdcall put_IsConst(CAT_VARIANT_BOOL iIsConst); \
      virtual HRESULT  __stdcall get_Application(CATIAApplication *& oApplication); \
      virtual HRESULT  __stdcall get_Parent(CATBaseDispatch *& oParent); \
      virtual HRESULT  __stdcall get_Name(CATBSTR & oNameBSTR); \
      virtual HRESULT  __stdcall put_Name(const CATBSTR & iNameBSTR); \
      virtual HRESULT  __stdcall GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj); \
};



#define ENVTIEdeclare_CATIAOptimization(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
virtual HRESULT __stdcall Run(CAT_VARIANT_BOOL iWithStopDialog); \
virtual HRESULT __stdcall get_ObjectiveParameter(CATIARealParam *& oParameter); \
virtual HRESULT __stdcall put_ObjectiveParameter(CATIARealParam * iParameter); \
virtual HRESULT __stdcall get_MaxEvalsNb(CATLONG & oNb); \
virtual HRESULT __stdcall put_MaxEvalsNb(CATLONG iNb); \
virtual HRESULT __stdcall get_MaxTime(CATLONG & oMaxTime); \
virtual HRESULT __stdcall put_MaxTime(CATLONG oiMaxTime); \
virtual HRESULT __stdcall get_MaxEvalsWoImprovement(CATLONG & oMaxEvalsWoImpvt); \
virtual HRESULT __stdcall put_MaxEvalsWoImprovement(CATLONG oMaxEvalsWoImpvt); \
virtual HRESULT __stdcall get_UseMaxTime(CAT_VARIANT_BOOL & oUse); \
virtual HRESULT __stdcall put_UseMaxTime(CAT_VARIANT_BOOL iUse); \
virtual HRESULT __stdcall get_UseMaxEvalsWoImprovement(CAT_VARIANT_BOOL & oUse); \
virtual HRESULT __stdcall put_UseMaxEvalsWoImprovement(CAT_VARIANT_BOOL iUse); \
virtual HRESULT __stdcall get_TargetValue(CATIARealParam *& oParameter); \
virtual HRESULT __stdcall get_OptimizationType(CatOptimizationType & oType); \
virtual HRESULT __stdcall put_OptimizationType(CatOptimizationType iType); \
virtual HRESULT __stdcall get_AlgorithmType(CatAlgorithmType & oType); \
virtual HRESULT __stdcall put_AlgorithmType(CatAlgorithmType iType); \
virtual HRESULT __stdcall get_Constraints(CATIAOptimizationConstraints *& oConstraints); \
virtual HRESULT __stdcall get_FreeParameters(CATIAFreeParameters *& oFreeParameters); \
virtual HRESULT __stdcall get_ConvSpeed(CATLONG & oConvSpeed); \
virtual HRESULT __stdcall put_ConvSpeed(CATLONG iConvSpeed); \
virtual HRESULT __stdcall get_Hidden(CAT_VARIANT_BOOL & oHidden); \
virtual HRESULT __stdcall put_Hidden(CAT_VARIANT_BOOL iHidden); \
virtual HRESULT __stdcall get_IsConst(CAT_VARIANT_BOOL & oIsConst); \
virtual HRESULT __stdcall put_IsConst(CAT_VARIANT_BOOL iIsConst); \
virtual HRESULT  __stdcall get_Application(CATIAApplication *& oApplication); \
virtual HRESULT  __stdcall get_Parent(CATBaseDispatch *& oParent); \
virtual HRESULT  __stdcall get_Name(CATBSTR & oNameBSTR); \
virtual HRESULT  __stdcall put_Name(const CATBSTR & iNameBSTR); \
virtual HRESULT  __stdcall GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj); \


#define ENVTIEdefine_CATIAOptimization(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
HRESULT __stdcall  ENVTIEName::Run(CAT_VARIANT_BOOL iWithStopDialog) \
{ \
return (ENVTIECALL(CATIAOptimization,ENVTIETypeLetter,ENVTIELetter)Run(iWithStopDialog)); \
} \
HRESULT __stdcall  ENVTIEName::get_ObjectiveParameter(CATIARealParam *& oParameter) \
{ \
return (ENVTIECALL(CATIAOptimization,ENVTIETypeLetter,ENVTIELetter)get_ObjectiveParameter(oParameter)); \
} \
HRESULT __stdcall  ENVTIEName::put_ObjectiveParameter(CATIARealParam * iParameter) \
{ \
return (ENVTIECALL(CATIAOptimization,ENVTIETypeLetter,ENVTIELetter)put_ObjectiveParameter(iParameter)); \
} \
HRESULT __stdcall  ENVTIEName::get_MaxEvalsNb(CATLONG & oNb) \
{ \
return (ENVTIECALL(CATIAOptimization,ENVTIETypeLetter,ENVTIELetter)get_MaxEvalsNb(oNb)); \
} \
HRESULT __stdcall  ENVTIEName::put_MaxEvalsNb(CATLONG iNb) \
{ \
return (ENVTIECALL(CATIAOptimization,ENVTIETypeLetter,ENVTIELetter)put_MaxEvalsNb(iNb)); \
} \
HRESULT __stdcall  ENVTIEName::get_MaxTime(CATLONG & oMaxTime) \
{ \
return (ENVTIECALL(CATIAOptimization,ENVTIETypeLetter,ENVTIELetter)get_MaxTime(oMaxTime)); \
} \
HRESULT __stdcall  ENVTIEName::put_MaxTime(CATLONG oiMaxTime) \
{ \
return (ENVTIECALL(CATIAOptimization,ENVTIETypeLetter,ENVTIELetter)put_MaxTime(oiMaxTime)); \
} \
HRESULT __stdcall  ENVTIEName::get_MaxEvalsWoImprovement(CATLONG & oMaxEvalsWoImpvt) \
{ \
return (ENVTIECALL(CATIAOptimization,ENVTIETypeLetter,ENVTIELetter)get_MaxEvalsWoImprovement(oMaxEvalsWoImpvt)); \
} \
HRESULT __stdcall  ENVTIEName::put_MaxEvalsWoImprovement(CATLONG oMaxEvalsWoImpvt) \
{ \
return (ENVTIECALL(CATIAOptimization,ENVTIETypeLetter,ENVTIELetter)put_MaxEvalsWoImprovement(oMaxEvalsWoImpvt)); \
} \
HRESULT __stdcall  ENVTIEName::get_UseMaxTime(CAT_VARIANT_BOOL & oUse) \
{ \
return (ENVTIECALL(CATIAOptimization,ENVTIETypeLetter,ENVTIELetter)get_UseMaxTime(oUse)); \
} \
HRESULT __stdcall  ENVTIEName::put_UseMaxTime(CAT_VARIANT_BOOL iUse) \
{ \
return (ENVTIECALL(CATIAOptimization,ENVTIETypeLetter,ENVTIELetter)put_UseMaxTime(iUse)); \
} \
HRESULT __stdcall  ENVTIEName::get_UseMaxEvalsWoImprovement(CAT_VARIANT_BOOL & oUse) \
{ \
return (ENVTIECALL(CATIAOptimization,ENVTIETypeLetter,ENVTIELetter)get_UseMaxEvalsWoImprovement(oUse)); \
} \
HRESULT __stdcall  ENVTIEName::put_UseMaxEvalsWoImprovement(CAT_VARIANT_BOOL iUse) \
{ \
return (ENVTIECALL(CATIAOptimization,ENVTIETypeLetter,ENVTIELetter)put_UseMaxEvalsWoImprovement(iUse)); \
} \
HRESULT __stdcall  ENVTIEName::get_TargetValue(CATIARealParam *& oParameter) \
{ \
return (ENVTIECALL(CATIAOptimization,ENVTIETypeLetter,ENVTIELetter)get_TargetValue(oParameter)); \
} \
HRESULT __stdcall  ENVTIEName::get_OptimizationType(CatOptimizationType & oType) \
{ \
return (ENVTIECALL(CATIAOptimization,ENVTIETypeLetter,ENVTIELetter)get_OptimizationType(oType)); \
} \
HRESULT __stdcall  ENVTIEName::put_OptimizationType(CatOptimizationType iType) \
{ \
return (ENVTIECALL(CATIAOptimization,ENVTIETypeLetter,ENVTIELetter)put_OptimizationType(iType)); \
} \
HRESULT __stdcall  ENVTIEName::get_AlgorithmType(CatAlgorithmType & oType) \
{ \
return (ENVTIECALL(CATIAOptimization,ENVTIETypeLetter,ENVTIELetter)get_AlgorithmType(oType)); \
} \
HRESULT __stdcall  ENVTIEName::put_AlgorithmType(CatAlgorithmType iType) \
{ \
return (ENVTIECALL(CATIAOptimization,ENVTIETypeLetter,ENVTIELetter)put_AlgorithmType(iType)); \
} \
HRESULT __stdcall  ENVTIEName::get_Constraints(CATIAOptimizationConstraints *& oConstraints) \
{ \
return (ENVTIECALL(CATIAOptimization,ENVTIETypeLetter,ENVTIELetter)get_Constraints(oConstraints)); \
} \
HRESULT __stdcall  ENVTIEName::get_FreeParameters(CATIAFreeParameters *& oFreeParameters) \
{ \
return (ENVTIECALL(CATIAOptimization,ENVTIETypeLetter,ENVTIELetter)get_FreeParameters(oFreeParameters)); \
} \
HRESULT __stdcall  ENVTIEName::get_ConvSpeed(CATLONG & oConvSpeed) \
{ \
return (ENVTIECALL(CATIAOptimization,ENVTIETypeLetter,ENVTIELetter)get_ConvSpeed(oConvSpeed)); \
} \
HRESULT __stdcall  ENVTIEName::put_ConvSpeed(CATLONG iConvSpeed) \
{ \
return (ENVTIECALL(CATIAOptimization,ENVTIETypeLetter,ENVTIELetter)put_ConvSpeed(iConvSpeed)); \
} \
HRESULT __stdcall  ENVTIEName::get_Hidden(CAT_VARIANT_BOOL & oHidden) \
{ \
return (ENVTIECALL(CATIAOptimization,ENVTIETypeLetter,ENVTIELetter)get_Hidden(oHidden)); \
} \
HRESULT __stdcall  ENVTIEName::put_Hidden(CAT_VARIANT_BOOL iHidden) \
{ \
return (ENVTIECALL(CATIAOptimization,ENVTIETypeLetter,ENVTIELetter)put_Hidden(iHidden)); \
} \
HRESULT __stdcall  ENVTIEName::get_IsConst(CAT_VARIANT_BOOL & oIsConst) \
{ \
return (ENVTIECALL(CATIAOptimization,ENVTIETypeLetter,ENVTIELetter)get_IsConst(oIsConst)); \
} \
HRESULT __stdcall  ENVTIEName::put_IsConst(CAT_VARIANT_BOOL iIsConst) \
{ \
return (ENVTIECALL(CATIAOptimization,ENVTIETypeLetter,ENVTIELetter)put_IsConst(iIsConst)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Application(CATIAApplication *& oApplication) \
{ \
return (ENVTIECALL(CATIAOptimization,ENVTIETypeLetter,ENVTIELetter)get_Application(oApplication)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Parent(CATBaseDispatch *& oParent) \
{ \
return (ENVTIECALL(CATIAOptimization,ENVTIETypeLetter,ENVTIELetter)get_Parent(oParent)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Name(CATBSTR & oNameBSTR) \
{ \
return (ENVTIECALL(CATIAOptimization,ENVTIETypeLetter,ENVTIELetter)get_Name(oNameBSTR)); \
} \
HRESULT  __stdcall  ENVTIEName::put_Name(const CATBSTR & iNameBSTR) \
{ \
return (ENVTIECALL(CATIAOptimization,ENVTIETypeLetter,ENVTIELetter)put_Name(iNameBSTR)); \
} \
HRESULT  __stdcall  ENVTIEName::GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj) \
{ \
return (ENVTIECALL(CATIAOptimization,ENVTIETypeLetter,ENVTIELetter)GetItem(IDName,RealObj)); \
} \


/* Name of the TIE class */
#define class_TIE_CATIAOptimization(classe)    TIECATIAOptimization##classe


/* Common methods inside a TIE */
#define common_TIE_CATIAOptimization(classe) \
 \
 \
/* Static initialization */ \
CATDefineCommonTIEMembers(CATIAOptimization, classe) \
 \
 \
CATImplementTIEMethods(CATIAOptimization, classe) \
CATImplementIUnknownMethodsForCATBaseUnknownTIE(CATIAOptimization, classe, 2) \
CATImplementIDispatchMethodsForCATBaseUnknownTIE(CATIAOptimization, classe) \
CATImplementCATBaseUnknownMethodsForTIE(CATIAOptimization, classe) \
 \
HRESULT __stdcall  TIECATIAOptimization##classe::Run(CAT_VARIANT_BOOL iWithStopDialog) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,1,&_Trac2,&iWithStopDialog); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->Run(iWithStopDialog); \
   ExitAfterCall(this,1,_Trac2,&_ret_arg,&iWithStopDialog); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAOptimization##classe::get_ObjectiveParameter(CATIARealParam *& oParameter) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,2,&_Trac2,&oParameter); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_ObjectiveParameter(oParameter); \
   ExitAfterCall(this,2,_Trac2,&_ret_arg,&oParameter); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAOptimization##classe::put_ObjectiveParameter(CATIARealParam * iParameter) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,3,&_Trac2,&iParameter); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_ObjectiveParameter(iParameter); \
   ExitAfterCall(this,3,_Trac2,&_ret_arg,&iParameter); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAOptimization##classe::get_MaxEvalsNb(CATLONG & oNb) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,4,&_Trac2,&oNb); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_MaxEvalsNb(oNb); \
   ExitAfterCall(this,4,_Trac2,&_ret_arg,&oNb); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAOptimization##classe::put_MaxEvalsNb(CATLONG iNb) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,5,&_Trac2,&iNb); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_MaxEvalsNb(iNb); \
   ExitAfterCall(this,5,_Trac2,&_ret_arg,&iNb); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAOptimization##classe::get_MaxTime(CATLONG & oMaxTime) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,6,&_Trac2,&oMaxTime); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_MaxTime(oMaxTime); \
   ExitAfterCall(this,6,_Trac2,&_ret_arg,&oMaxTime); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAOptimization##classe::put_MaxTime(CATLONG oiMaxTime) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,7,&_Trac2,&oiMaxTime); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_MaxTime(oiMaxTime); \
   ExitAfterCall(this,7,_Trac2,&_ret_arg,&oiMaxTime); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAOptimization##classe::get_MaxEvalsWoImprovement(CATLONG & oMaxEvalsWoImpvt) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,8,&_Trac2,&oMaxEvalsWoImpvt); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_MaxEvalsWoImprovement(oMaxEvalsWoImpvt); \
   ExitAfterCall(this,8,_Trac2,&_ret_arg,&oMaxEvalsWoImpvt); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAOptimization##classe::put_MaxEvalsWoImprovement(CATLONG oMaxEvalsWoImpvt) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,9,&_Trac2,&oMaxEvalsWoImpvt); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_MaxEvalsWoImprovement(oMaxEvalsWoImpvt); \
   ExitAfterCall(this,9,_Trac2,&_ret_arg,&oMaxEvalsWoImpvt); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAOptimization##classe::get_UseMaxTime(CAT_VARIANT_BOOL & oUse) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,10,&_Trac2,&oUse); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_UseMaxTime(oUse); \
   ExitAfterCall(this,10,_Trac2,&_ret_arg,&oUse); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAOptimization##classe::put_UseMaxTime(CAT_VARIANT_BOOL iUse) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,11,&_Trac2,&iUse); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_UseMaxTime(iUse); \
   ExitAfterCall(this,11,_Trac2,&_ret_arg,&iUse); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAOptimization##classe::get_UseMaxEvalsWoImprovement(CAT_VARIANT_BOOL & oUse) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,12,&_Trac2,&oUse); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_UseMaxEvalsWoImprovement(oUse); \
   ExitAfterCall(this,12,_Trac2,&_ret_arg,&oUse); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAOptimization##classe::put_UseMaxEvalsWoImprovement(CAT_VARIANT_BOOL iUse) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,13,&_Trac2,&iUse); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_UseMaxEvalsWoImprovement(iUse); \
   ExitAfterCall(this,13,_Trac2,&_ret_arg,&iUse); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAOptimization##classe::get_TargetValue(CATIARealParam *& oParameter) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,14,&_Trac2,&oParameter); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_TargetValue(oParameter); \
   ExitAfterCall(this,14,_Trac2,&_ret_arg,&oParameter); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAOptimization##classe::get_OptimizationType(CatOptimizationType & oType) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,15,&_Trac2,&oType); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_OptimizationType(oType); \
   ExitAfterCall(this,15,_Trac2,&_ret_arg,&oType); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAOptimization##classe::put_OptimizationType(CatOptimizationType iType) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,16,&_Trac2,&iType); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_OptimizationType(iType); \
   ExitAfterCall(this,16,_Trac2,&_ret_arg,&iType); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAOptimization##classe::get_AlgorithmType(CatAlgorithmType & oType) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,17,&_Trac2,&oType); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_AlgorithmType(oType); \
   ExitAfterCall(this,17,_Trac2,&_ret_arg,&oType); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAOptimization##classe::put_AlgorithmType(CatAlgorithmType iType) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,18,&_Trac2,&iType); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_AlgorithmType(iType); \
   ExitAfterCall(this,18,_Trac2,&_ret_arg,&iType); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAOptimization##classe::get_Constraints(CATIAOptimizationConstraints *& oConstraints) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,19,&_Trac2,&oConstraints); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Constraints(oConstraints); \
   ExitAfterCall(this,19,_Trac2,&_ret_arg,&oConstraints); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAOptimization##classe::get_FreeParameters(CATIAFreeParameters *& oFreeParameters) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,20,&_Trac2,&oFreeParameters); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_FreeParameters(oFreeParameters); \
   ExitAfterCall(this,20,_Trac2,&_ret_arg,&oFreeParameters); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAOptimization##classe::get_ConvSpeed(CATLONG & oConvSpeed) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,21,&_Trac2,&oConvSpeed); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_ConvSpeed(oConvSpeed); \
   ExitAfterCall(this,21,_Trac2,&_ret_arg,&oConvSpeed); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAOptimization##classe::put_ConvSpeed(CATLONG iConvSpeed) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,22,&_Trac2,&iConvSpeed); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_ConvSpeed(iConvSpeed); \
   ExitAfterCall(this,22,_Trac2,&_ret_arg,&iConvSpeed); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAOptimization##classe::get_Hidden(CAT_VARIANT_BOOL & oHidden) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,23,&_Trac2,&oHidden); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Hidden(oHidden); \
   ExitAfterCall(this,23,_Trac2,&_ret_arg,&oHidden); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAOptimization##classe::put_Hidden(CAT_VARIANT_BOOL iHidden) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,24,&_Trac2,&iHidden); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_Hidden(iHidden); \
   ExitAfterCall(this,24,_Trac2,&_ret_arg,&iHidden); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAOptimization##classe::get_IsConst(CAT_VARIANT_BOOL & oIsConst) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,25,&_Trac2,&oIsConst); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_IsConst(oIsConst); \
   ExitAfterCall(this,25,_Trac2,&_ret_arg,&oIsConst); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAOptimization##classe::put_IsConst(CAT_VARIANT_BOOL iIsConst) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,26,&_Trac2,&iIsConst); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_IsConst(iIsConst); \
   ExitAfterCall(this,26,_Trac2,&_ret_arg,&iIsConst); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAOptimization##classe::get_Application(CATIAApplication *& oApplication) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,27,&_Trac2,&oApplication); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Application(oApplication); \
   ExitAfterCall(this,27,_Trac2,&_ret_arg,&oApplication); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAOptimization##classe::get_Parent(CATBaseDispatch *& oParent) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,28,&_Trac2,&oParent); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Parent(oParent); \
   ExitAfterCall(this,28,_Trac2,&_ret_arg,&oParent); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAOptimization##classe::get_Name(CATBSTR & oNameBSTR) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,29,&_Trac2,&oNameBSTR); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Name(oNameBSTR); \
   ExitAfterCall(this,29,_Trac2,&_ret_arg,&oNameBSTR); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAOptimization##classe::put_Name(const CATBSTR & iNameBSTR) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,30,&_Trac2,&iNameBSTR); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_Name(iNameBSTR); \
   ExitAfterCall(this,30,_Trac2,&_ret_arg,&iNameBSTR); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAOptimization##classe::GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,31,&_Trac2,&IDName,&RealObj); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetItem(IDName,RealObj); \
   ExitAfterCall(this,31,_Trac2,&_ret_arg,&IDName,&RealObj); \
   return(_ret_arg); \
} \



/* Macro used to link an implementation with an interface */
#define TIE_CATIAOptimization(classe) \
 \
 \
declare_TIE_CATIAOptimization(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIAOptimization##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIAOptimization,"CATIAOptimization",CATIAOptimization::MetaObject(),classe::MetaObject(),TIE); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIAOptimization(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIECreation(CATIAOptimization, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIAOptimization##classe(classe::MetaObject(),CATIAOptimization::MetaObject(),(void *)CreateTIECATIAOptimization##classe)



/* Macro used to link an implementation with an interface */
/* This TIE is chained on the implementation object */
#define TIEchain_CATIAOptimization(classe) \
 \
 \
declare_TIE_CATIAOptimization(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIAOptimization##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIAOptimization,"CATIAOptimization",CATIAOptimization::MetaObject(),classe::MetaObject(),TIEchain); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIAOptimization(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIEchainCreation(CATIAOptimization, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIAOptimization##classe(classe::MetaObject(),CATIAOptimization::MetaObject(),(void *)CreateTIECATIAOptimization##classe)


/* Macro to switch between BOA and TIE at build time */ 
#ifdef CATSYS_BOA_IS_TIE
#define BOA_CATIAOptimization(classe) TIE_CATIAOptimization(classe)
#else
#define BOA_CATIAOptimization(classe) CATImplementBOA(CATIAOptimization, classe)
#endif

#endif
