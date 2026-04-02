#ifndef __TIE_SWKIADOF
#define __TIE_SWKIADOF

#include <string.h>
#include "CATBaseUnknown.h"
#include "CATMetaClass.h"
#include "CATMacForTie.h"
#include "CATExitJournal.h"
#include "SWKIADOF.h"
#include "JS0DSPA.h"


#ifdef _WINDOWS_SOURCE
#define Exported __declspec(dllexport)
#define Imported __declspec(dllimport)
#else
#define Exported 
#define Imported 
#endif


/* To link an implementation with the interface SWKIADOF */
#define declare_TIE_SWKIADOF(classe) \
 \
 \
class TIESWKIADOF##classe : public SWKIADOF \
{ \
   private: \
      CATDeclareCommonTIEMembers \
   public: \
      CATDeclareTIEMethods(SWKIADOF, classe) \
      CATDeclareIUnknownMethodsForCATBaseUnknownTIE \
      CATDeclareIDispatchMethodsForCATBaseUnknownTIE \
      CATDeclareCATBaseUnknownMethodsForTIE \
      virtual HRESULT __stdcall get_Value(double & poValue); \
      virtual HRESULT __stdcall put_Value(double piValue); \
      virtual HRESULT __stdcall get_ValueAsString(CATBSTR & pioValue); \
      virtual HRESULT __stdcall put_ValueAsString(const CATBSTR & piValue); \
      virtual HRESULT __stdcall get_DefaultValue(double & poDefaultValue); \
      virtual HRESULT __stdcall ResetValue(); \
      virtual HRESULT __stdcall get_Score(double & poScore); \
      virtual HRESULT __stdcall get_MaxScore(double & poMaxScore); \
      virtual HRESULT __stdcall SetLimitsToMatchBestPrefAngle(); \
      virtual HRESULT __stdcall get_Number(CATLONG & poNumber); \
      virtual HRESULT __stdcall get_MinValue(double & poMinValue); \
      virtual HRESULT __stdcall get_MinValueInterSegment(double & poMinValue); \
      virtual HRESULT __stdcall put_MinValue(double piMinValue); \
      virtual HRESULT __stdcall get_MaxValue(double & poMaxValue); \
      virtual HRESULT __stdcall put_MaxValue(double piMaxValue); \
      virtual HRESULT __stdcall get_MinValueAsPercentile(double & poMinValueAsPercentile); \
      virtual HRESULT __stdcall put_MinValueAsPercentile(double piMinValueAsPercentile); \
      virtual HRESULT __stdcall get_MaxValueAsPercentile(double & poMaxValueAsPercentile); \
      virtual HRESULT __stdcall put_MaxValueAsPercentile(double piMaxValueAsPercentile); \
      virtual HRESULT __stdcall get_LimitsLocked(CAT_VARIANT_BOOL & poLimitsLocked); \
      virtual HRESULT __stdcall put_LimitsLocked(CAT_VARIANT_BOOL piLimitsLocked); \
      virtual HRESULT __stdcall get_ValueLocked(CAT_VARIANT_BOOL & poValueLocked); \
      virtual HRESULT __stdcall put_ValueLocked(CAT_VARIANT_BOOL piValueLocked); \
      virtual HRESULT __stdcall get_MinMean(double & poMinMean); \
      virtual HRESULT __stdcall get_MinMeanInterSegment(double & poMinMean); \
      virtual HRESULT __stdcall get_MinStdDev(double & poMinStdDev); \
      virtual HRESULT __stdcall get_MaxMean(double & poMaxMean); \
      virtual HRESULT __stdcall get_MaxMeanInterSegment(double & poMaxMean); \
      virtual HRESULT __stdcall get_MaxStdDev(double & poMaxStdDev); \
      virtual HRESULT __stdcall get_FullName(CATBSTR & pioFullName); \
      virtual HRESULT __stdcall get_Memo(CATBSTR & pioText); \
      virtual HRESULT __stdcall put_Memo(const CATBSTR & piText); \
      virtual HRESULT  __stdcall get_Application(CATIAApplication *& oApplication); \
      virtual HRESULT  __stdcall get_Parent(CATBaseDispatch *& oParent); \
      virtual HRESULT  __stdcall get_Name(CATBSTR & oNameBSTR); \
      virtual HRESULT  __stdcall put_Name(const CATBSTR & iNameBSTR); \
      virtual HRESULT  __stdcall GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj); \
};



#define ENVTIEdeclare_SWKIADOF(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
virtual HRESULT __stdcall get_Value(double & poValue); \
virtual HRESULT __stdcall put_Value(double piValue); \
virtual HRESULT __stdcall get_ValueAsString(CATBSTR & pioValue); \
virtual HRESULT __stdcall put_ValueAsString(const CATBSTR & piValue); \
virtual HRESULT __stdcall get_DefaultValue(double & poDefaultValue); \
virtual HRESULT __stdcall ResetValue(); \
virtual HRESULT __stdcall get_Score(double & poScore); \
virtual HRESULT __stdcall get_MaxScore(double & poMaxScore); \
virtual HRESULT __stdcall SetLimitsToMatchBestPrefAngle(); \
virtual HRESULT __stdcall get_Number(CATLONG & poNumber); \
virtual HRESULT __stdcall get_MinValue(double & poMinValue); \
virtual HRESULT __stdcall get_MinValueInterSegment(double & poMinValue); \
virtual HRESULT __stdcall put_MinValue(double piMinValue); \
virtual HRESULT __stdcall get_MaxValue(double & poMaxValue); \
virtual HRESULT __stdcall put_MaxValue(double piMaxValue); \
virtual HRESULT __stdcall get_MinValueAsPercentile(double & poMinValueAsPercentile); \
virtual HRESULT __stdcall put_MinValueAsPercentile(double piMinValueAsPercentile); \
virtual HRESULT __stdcall get_MaxValueAsPercentile(double & poMaxValueAsPercentile); \
virtual HRESULT __stdcall put_MaxValueAsPercentile(double piMaxValueAsPercentile); \
virtual HRESULT __stdcall get_LimitsLocked(CAT_VARIANT_BOOL & poLimitsLocked); \
virtual HRESULT __stdcall put_LimitsLocked(CAT_VARIANT_BOOL piLimitsLocked); \
virtual HRESULT __stdcall get_ValueLocked(CAT_VARIANT_BOOL & poValueLocked); \
virtual HRESULT __stdcall put_ValueLocked(CAT_VARIANT_BOOL piValueLocked); \
virtual HRESULT __stdcall get_MinMean(double & poMinMean); \
virtual HRESULT __stdcall get_MinMeanInterSegment(double & poMinMean); \
virtual HRESULT __stdcall get_MinStdDev(double & poMinStdDev); \
virtual HRESULT __stdcall get_MaxMean(double & poMaxMean); \
virtual HRESULT __stdcall get_MaxMeanInterSegment(double & poMaxMean); \
virtual HRESULT __stdcall get_MaxStdDev(double & poMaxStdDev); \
virtual HRESULT __stdcall get_FullName(CATBSTR & pioFullName); \
virtual HRESULT __stdcall get_Memo(CATBSTR & pioText); \
virtual HRESULT __stdcall put_Memo(const CATBSTR & piText); \
virtual HRESULT  __stdcall get_Application(CATIAApplication *& oApplication); \
virtual HRESULT  __stdcall get_Parent(CATBaseDispatch *& oParent); \
virtual HRESULT  __stdcall get_Name(CATBSTR & oNameBSTR); \
virtual HRESULT  __stdcall put_Name(const CATBSTR & iNameBSTR); \
virtual HRESULT  __stdcall GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj); \


#define ENVTIEdefine_SWKIADOF(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
HRESULT __stdcall  ENVTIEName::get_Value(double & poValue) \
{ \
return (ENVTIECALL(SWKIADOF,ENVTIETypeLetter,ENVTIELetter)get_Value(poValue)); \
} \
HRESULT __stdcall  ENVTIEName::put_Value(double piValue) \
{ \
return (ENVTIECALL(SWKIADOF,ENVTIETypeLetter,ENVTIELetter)put_Value(piValue)); \
} \
HRESULT __stdcall  ENVTIEName::get_ValueAsString(CATBSTR & pioValue) \
{ \
return (ENVTIECALL(SWKIADOF,ENVTIETypeLetter,ENVTIELetter)get_ValueAsString(pioValue)); \
} \
HRESULT __stdcall  ENVTIEName::put_ValueAsString(const CATBSTR & piValue) \
{ \
return (ENVTIECALL(SWKIADOF,ENVTIETypeLetter,ENVTIELetter)put_ValueAsString(piValue)); \
} \
HRESULT __stdcall  ENVTIEName::get_DefaultValue(double & poDefaultValue) \
{ \
return (ENVTIECALL(SWKIADOF,ENVTIETypeLetter,ENVTIELetter)get_DefaultValue(poDefaultValue)); \
} \
HRESULT __stdcall  ENVTIEName::ResetValue() \
{ \
return (ENVTIECALL(SWKIADOF,ENVTIETypeLetter,ENVTIELetter)ResetValue()); \
} \
HRESULT __stdcall  ENVTIEName::get_Score(double & poScore) \
{ \
return (ENVTIECALL(SWKIADOF,ENVTIETypeLetter,ENVTIELetter)get_Score(poScore)); \
} \
HRESULT __stdcall  ENVTIEName::get_MaxScore(double & poMaxScore) \
{ \
return (ENVTIECALL(SWKIADOF,ENVTIETypeLetter,ENVTIELetter)get_MaxScore(poMaxScore)); \
} \
HRESULT __stdcall  ENVTIEName::SetLimitsToMatchBestPrefAngle() \
{ \
return (ENVTIECALL(SWKIADOF,ENVTIETypeLetter,ENVTIELetter)SetLimitsToMatchBestPrefAngle()); \
} \
HRESULT __stdcall  ENVTIEName::get_Number(CATLONG & poNumber) \
{ \
return (ENVTIECALL(SWKIADOF,ENVTIETypeLetter,ENVTIELetter)get_Number(poNumber)); \
} \
HRESULT __stdcall  ENVTIEName::get_MinValue(double & poMinValue) \
{ \
return (ENVTIECALL(SWKIADOF,ENVTIETypeLetter,ENVTIELetter)get_MinValue(poMinValue)); \
} \
HRESULT __stdcall  ENVTIEName::get_MinValueInterSegment(double & poMinValue) \
{ \
return (ENVTIECALL(SWKIADOF,ENVTIETypeLetter,ENVTIELetter)get_MinValueInterSegment(poMinValue)); \
} \
HRESULT __stdcall  ENVTIEName::put_MinValue(double piMinValue) \
{ \
return (ENVTIECALL(SWKIADOF,ENVTIETypeLetter,ENVTIELetter)put_MinValue(piMinValue)); \
} \
HRESULT __stdcall  ENVTIEName::get_MaxValue(double & poMaxValue) \
{ \
return (ENVTIECALL(SWKIADOF,ENVTIETypeLetter,ENVTIELetter)get_MaxValue(poMaxValue)); \
} \
HRESULT __stdcall  ENVTIEName::put_MaxValue(double piMaxValue) \
{ \
return (ENVTIECALL(SWKIADOF,ENVTIETypeLetter,ENVTIELetter)put_MaxValue(piMaxValue)); \
} \
HRESULT __stdcall  ENVTIEName::get_MinValueAsPercentile(double & poMinValueAsPercentile) \
{ \
return (ENVTIECALL(SWKIADOF,ENVTIETypeLetter,ENVTIELetter)get_MinValueAsPercentile(poMinValueAsPercentile)); \
} \
HRESULT __stdcall  ENVTIEName::put_MinValueAsPercentile(double piMinValueAsPercentile) \
{ \
return (ENVTIECALL(SWKIADOF,ENVTIETypeLetter,ENVTIELetter)put_MinValueAsPercentile(piMinValueAsPercentile)); \
} \
HRESULT __stdcall  ENVTIEName::get_MaxValueAsPercentile(double & poMaxValueAsPercentile) \
{ \
return (ENVTIECALL(SWKIADOF,ENVTIETypeLetter,ENVTIELetter)get_MaxValueAsPercentile(poMaxValueAsPercentile)); \
} \
HRESULT __stdcall  ENVTIEName::put_MaxValueAsPercentile(double piMaxValueAsPercentile) \
{ \
return (ENVTIECALL(SWKIADOF,ENVTIETypeLetter,ENVTIELetter)put_MaxValueAsPercentile(piMaxValueAsPercentile)); \
} \
HRESULT __stdcall  ENVTIEName::get_LimitsLocked(CAT_VARIANT_BOOL & poLimitsLocked) \
{ \
return (ENVTIECALL(SWKIADOF,ENVTIETypeLetter,ENVTIELetter)get_LimitsLocked(poLimitsLocked)); \
} \
HRESULT __stdcall  ENVTIEName::put_LimitsLocked(CAT_VARIANT_BOOL piLimitsLocked) \
{ \
return (ENVTIECALL(SWKIADOF,ENVTIETypeLetter,ENVTIELetter)put_LimitsLocked(piLimitsLocked)); \
} \
HRESULT __stdcall  ENVTIEName::get_ValueLocked(CAT_VARIANT_BOOL & poValueLocked) \
{ \
return (ENVTIECALL(SWKIADOF,ENVTIETypeLetter,ENVTIELetter)get_ValueLocked(poValueLocked)); \
} \
HRESULT __stdcall  ENVTIEName::put_ValueLocked(CAT_VARIANT_BOOL piValueLocked) \
{ \
return (ENVTIECALL(SWKIADOF,ENVTIETypeLetter,ENVTIELetter)put_ValueLocked(piValueLocked)); \
} \
HRESULT __stdcall  ENVTIEName::get_MinMean(double & poMinMean) \
{ \
return (ENVTIECALL(SWKIADOF,ENVTIETypeLetter,ENVTIELetter)get_MinMean(poMinMean)); \
} \
HRESULT __stdcall  ENVTIEName::get_MinMeanInterSegment(double & poMinMean) \
{ \
return (ENVTIECALL(SWKIADOF,ENVTIETypeLetter,ENVTIELetter)get_MinMeanInterSegment(poMinMean)); \
} \
HRESULT __stdcall  ENVTIEName::get_MinStdDev(double & poMinStdDev) \
{ \
return (ENVTIECALL(SWKIADOF,ENVTIETypeLetter,ENVTIELetter)get_MinStdDev(poMinStdDev)); \
} \
HRESULT __stdcall  ENVTIEName::get_MaxMean(double & poMaxMean) \
{ \
return (ENVTIECALL(SWKIADOF,ENVTIETypeLetter,ENVTIELetter)get_MaxMean(poMaxMean)); \
} \
HRESULT __stdcall  ENVTIEName::get_MaxMeanInterSegment(double & poMaxMean) \
{ \
return (ENVTIECALL(SWKIADOF,ENVTIETypeLetter,ENVTIELetter)get_MaxMeanInterSegment(poMaxMean)); \
} \
HRESULT __stdcall  ENVTIEName::get_MaxStdDev(double & poMaxStdDev) \
{ \
return (ENVTIECALL(SWKIADOF,ENVTIETypeLetter,ENVTIELetter)get_MaxStdDev(poMaxStdDev)); \
} \
HRESULT __stdcall  ENVTIEName::get_FullName(CATBSTR & pioFullName) \
{ \
return (ENVTIECALL(SWKIADOF,ENVTIETypeLetter,ENVTIELetter)get_FullName(pioFullName)); \
} \
HRESULT __stdcall  ENVTIEName::get_Memo(CATBSTR & pioText) \
{ \
return (ENVTIECALL(SWKIADOF,ENVTIETypeLetter,ENVTIELetter)get_Memo(pioText)); \
} \
HRESULT __stdcall  ENVTIEName::put_Memo(const CATBSTR & piText) \
{ \
return (ENVTIECALL(SWKIADOF,ENVTIETypeLetter,ENVTIELetter)put_Memo(piText)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Application(CATIAApplication *& oApplication) \
{ \
return (ENVTIECALL(SWKIADOF,ENVTIETypeLetter,ENVTIELetter)get_Application(oApplication)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Parent(CATBaseDispatch *& oParent) \
{ \
return (ENVTIECALL(SWKIADOF,ENVTIETypeLetter,ENVTIELetter)get_Parent(oParent)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Name(CATBSTR & oNameBSTR) \
{ \
return (ENVTIECALL(SWKIADOF,ENVTIETypeLetter,ENVTIELetter)get_Name(oNameBSTR)); \
} \
HRESULT  __stdcall  ENVTIEName::put_Name(const CATBSTR & iNameBSTR) \
{ \
return (ENVTIECALL(SWKIADOF,ENVTIETypeLetter,ENVTIELetter)put_Name(iNameBSTR)); \
} \
HRESULT  __stdcall  ENVTIEName::GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj) \
{ \
return (ENVTIECALL(SWKIADOF,ENVTIETypeLetter,ENVTIELetter)GetItem(IDName,RealObj)); \
} \


/* Name of the TIE class */
#define class_TIE_SWKIADOF(classe)    TIESWKIADOF##classe


/* Common methods inside a TIE */
#define common_TIE_SWKIADOF(classe) \
 \
 \
/* Static initialization */ \
CATDefineCommonTIEMembers(SWKIADOF, classe) \
 \
 \
CATImplementTIEMethods(SWKIADOF, classe) \
CATImplementIUnknownMethodsForCATBaseUnknownTIE(SWKIADOF, classe, 2) \
CATImplementIDispatchMethodsForCATBaseUnknownTIE(SWKIADOF, classe) \
CATImplementCATBaseUnknownMethodsForTIE(SWKIADOF, classe) \
 \
HRESULT __stdcall  TIESWKIADOF##classe::get_Value(double & poValue) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,1,&_Trac2,&poValue); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Value(poValue); \
   ExitAfterCall(this,1,_Trac2,&_ret_arg,&poValue); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIESWKIADOF##classe::put_Value(double piValue) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,2,&_Trac2,&piValue); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_Value(piValue); \
   ExitAfterCall(this,2,_Trac2,&_ret_arg,&piValue); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIESWKIADOF##classe::get_ValueAsString(CATBSTR & pioValue) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,3,&_Trac2,&pioValue); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_ValueAsString(pioValue); \
   ExitAfterCall(this,3,_Trac2,&_ret_arg,&pioValue); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIESWKIADOF##classe::put_ValueAsString(const CATBSTR & piValue) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,4,&_Trac2,&piValue); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_ValueAsString(piValue); \
   ExitAfterCall(this,4,_Trac2,&_ret_arg,&piValue); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIESWKIADOF##classe::get_DefaultValue(double & poDefaultValue) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,5,&_Trac2,&poDefaultValue); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_DefaultValue(poDefaultValue); \
   ExitAfterCall(this,5,_Trac2,&_ret_arg,&poDefaultValue); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIESWKIADOF##classe::ResetValue() \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,6,&_Trac2); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->ResetValue(); \
   ExitAfterCall(this,6,_Trac2,&_ret_arg); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIESWKIADOF##classe::get_Score(double & poScore) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,7,&_Trac2,&poScore); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Score(poScore); \
   ExitAfterCall(this,7,_Trac2,&_ret_arg,&poScore); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIESWKIADOF##classe::get_MaxScore(double & poMaxScore) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,8,&_Trac2,&poMaxScore); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_MaxScore(poMaxScore); \
   ExitAfterCall(this,8,_Trac2,&_ret_arg,&poMaxScore); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIESWKIADOF##classe::SetLimitsToMatchBestPrefAngle() \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,9,&_Trac2); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetLimitsToMatchBestPrefAngle(); \
   ExitAfterCall(this,9,_Trac2,&_ret_arg); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIESWKIADOF##classe::get_Number(CATLONG & poNumber) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,10,&_Trac2,&poNumber); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Number(poNumber); \
   ExitAfterCall(this,10,_Trac2,&_ret_arg,&poNumber); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIESWKIADOF##classe::get_MinValue(double & poMinValue) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,11,&_Trac2,&poMinValue); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_MinValue(poMinValue); \
   ExitAfterCall(this,11,_Trac2,&_ret_arg,&poMinValue); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIESWKIADOF##classe::get_MinValueInterSegment(double & poMinValue) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,12,&_Trac2,&poMinValue); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_MinValueInterSegment(poMinValue); \
   ExitAfterCall(this,12,_Trac2,&_ret_arg,&poMinValue); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIESWKIADOF##classe::put_MinValue(double piMinValue) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,13,&_Trac2,&piMinValue); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_MinValue(piMinValue); \
   ExitAfterCall(this,13,_Trac2,&_ret_arg,&piMinValue); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIESWKIADOF##classe::get_MaxValue(double & poMaxValue) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,14,&_Trac2,&poMaxValue); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_MaxValue(poMaxValue); \
   ExitAfterCall(this,14,_Trac2,&_ret_arg,&poMaxValue); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIESWKIADOF##classe::put_MaxValue(double piMaxValue) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,15,&_Trac2,&piMaxValue); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_MaxValue(piMaxValue); \
   ExitAfterCall(this,15,_Trac2,&_ret_arg,&piMaxValue); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIESWKIADOF##classe::get_MinValueAsPercentile(double & poMinValueAsPercentile) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,16,&_Trac2,&poMinValueAsPercentile); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_MinValueAsPercentile(poMinValueAsPercentile); \
   ExitAfterCall(this,16,_Trac2,&_ret_arg,&poMinValueAsPercentile); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIESWKIADOF##classe::put_MinValueAsPercentile(double piMinValueAsPercentile) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,17,&_Trac2,&piMinValueAsPercentile); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_MinValueAsPercentile(piMinValueAsPercentile); \
   ExitAfterCall(this,17,_Trac2,&_ret_arg,&piMinValueAsPercentile); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIESWKIADOF##classe::get_MaxValueAsPercentile(double & poMaxValueAsPercentile) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,18,&_Trac2,&poMaxValueAsPercentile); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_MaxValueAsPercentile(poMaxValueAsPercentile); \
   ExitAfterCall(this,18,_Trac2,&_ret_arg,&poMaxValueAsPercentile); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIESWKIADOF##classe::put_MaxValueAsPercentile(double piMaxValueAsPercentile) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,19,&_Trac2,&piMaxValueAsPercentile); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_MaxValueAsPercentile(piMaxValueAsPercentile); \
   ExitAfterCall(this,19,_Trac2,&_ret_arg,&piMaxValueAsPercentile); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIESWKIADOF##classe::get_LimitsLocked(CAT_VARIANT_BOOL & poLimitsLocked) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,20,&_Trac2,&poLimitsLocked); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_LimitsLocked(poLimitsLocked); \
   ExitAfterCall(this,20,_Trac2,&_ret_arg,&poLimitsLocked); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIESWKIADOF##classe::put_LimitsLocked(CAT_VARIANT_BOOL piLimitsLocked) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,21,&_Trac2,&piLimitsLocked); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_LimitsLocked(piLimitsLocked); \
   ExitAfterCall(this,21,_Trac2,&_ret_arg,&piLimitsLocked); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIESWKIADOF##classe::get_ValueLocked(CAT_VARIANT_BOOL & poValueLocked) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,22,&_Trac2,&poValueLocked); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_ValueLocked(poValueLocked); \
   ExitAfterCall(this,22,_Trac2,&_ret_arg,&poValueLocked); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIESWKIADOF##classe::put_ValueLocked(CAT_VARIANT_BOOL piValueLocked) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,23,&_Trac2,&piValueLocked); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_ValueLocked(piValueLocked); \
   ExitAfterCall(this,23,_Trac2,&_ret_arg,&piValueLocked); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIESWKIADOF##classe::get_MinMean(double & poMinMean) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,24,&_Trac2,&poMinMean); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_MinMean(poMinMean); \
   ExitAfterCall(this,24,_Trac2,&_ret_arg,&poMinMean); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIESWKIADOF##classe::get_MinMeanInterSegment(double & poMinMean) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,25,&_Trac2,&poMinMean); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_MinMeanInterSegment(poMinMean); \
   ExitAfterCall(this,25,_Trac2,&_ret_arg,&poMinMean); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIESWKIADOF##classe::get_MinStdDev(double & poMinStdDev) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,26,&_Trac2,&poMinStdDev); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_MinStdDev(poMinStdDev); \
   ExitAfterCall(this,26,_Trac2,&_ret_arg,&poMinStdDev); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIESWKIADOF##classe::get_MaxMean(double & poMaxMean) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,27,&_Trac2,&poMaxMean); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_MaxMean(poMaxMean); \
   ExitAfterCall(this,27,_Trac2,&_ret_arg,&poMaxMean); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIESWKIADOF##classe::get_MaxMeanInterSegment(double & poMaxMean) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,28,&_Trac2,&poMaxMean); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_MaxMeanInterSegment(poMaxMean); \
   ExitAfterCall(this,28,_Trac2,&_ret_arg,&poMaxMean); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIESWKIADOF##classe::get_MaxStdDev(double & poMaxStdDev) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,29,&_Trac2,&poMaxStdDev); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_MaxStdDev(poMaxStdDev); \
   ExitAfterCall(this,29,_Trac2,&_ret_arg,&poMaxStdDev); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIESWKIADOF##classe::get_FullName(CATBSTR & pioFullName) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,30,&_Trac2,&pioFullName); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_FullName(pioFullName); \
   ExitAfterCall(this,30,_Trac2,&_ret_arg,&pioFullName); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIESWKIADOF##classe::get_Memo(CATBSTR & pioText) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,31,&_Trac2,&pioText); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Memo(pioText); \
   ExitAfterCall(this,31,_Trac2,&_ret_arg,&pioText); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIESWKIADOF##classe::put_Memo(const CATBSTR & piText) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,32,&_Trac2,&piText); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_Memo(piText); \
   ExitAfterCall(this,32,_Trac2,&_ret_arg,&piText); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIESWKIADOF##classe::get_Application(CATIAApplication *& oApplication) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,33,&_Trac2,&oApplication); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Application(oApplication); \
   ExitAfterCall(this,33,_Trac2,&_ret_arg,&oApplication); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIESWKIADOF##classe::get_Parent(CATBaseDispatch *& oParent) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,34,&_Trac2,&oParent); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Parent(oParent); \
   ExitAfterCall(this,34,_Trac2,&_ret_arg,&oParent); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIESWKIADOF##classe::get_Name(CATBSTR & oNameBSTR) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,35,&_Trac2,&oNameBSTR); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Name(oNameBSTR); \
   ExitAfterCall(this,35,_Trac2,&_ret_arg,&oNameBSTR); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIESWKIADOF##classe::put_Name(const CATBSTR & iNameBSTR) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,36,&_Trac2,&iNameBSTR); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_Name(iNameBSTR); \
   ExitAfterCall(this,36,_Trac2,&_ret_arg,&iNameBSTR); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIESWKIADOF##classe::GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,37,&_Trac2,&IDName,&RealObj); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetItem(IDName,RealObj); \
   ExitAfterCall(this,37,_Trac2,&_ret_arg,&IDName,&RealObj); \
   return(_ret_arg); \
} \



/* Macro used to link an implementation with an interface */
#define TIE_SWKIADOF(classe) \
 \
 \
declare_TIE_SWKIADOF(classe) \
 \
 \
CATMetaClass * __stdcall TIESWKIADOF##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_SWKIADOF,"SWKIADOF",SWKIADOF::MetaObject(),classe::MetaObject(),TIE); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_SWKIADOF(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIECreation(SWKIADOF, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicSWKIADOF##classe(classe::MetaObject(),SWKIADOF::MetaObject(),(void *)CreateTIESWKIADOF##classe)



/* Macro used to link an implementation with an interface */
/* This TIE is chained on the implementation object */
#define TIEchain_SWKIADOF(classe) \
 \
 \
declare_TIE_SWKIADOF(classe) \
 \
 \
CATMetaClass * __stdcall TIESWKIADOF##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_SWKIADOF,"SWKIADOF",SWKIADOF::MetaObject(),classe::MetaObject(),TIEchain); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_SWKIADOF(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIEchainCreation(SWKIADOF, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicSWKIADOF##classe(classe::MetaObject(),SWKIADOF::MetaObject(),(void *)CreateTIESWKIADOF##classe)


/* Macro to switch between BOA and TIE at build time */ 
#ifdef CATSYS_BOA_IS_TIE
#define BOA_SWKIADOF(classe) TIE_SWKIADOF(classe)
#else
#define BOA_SWKIADOF(classe) CATImplementBOA(SWKIADOF, classe)
#endif

#endif
