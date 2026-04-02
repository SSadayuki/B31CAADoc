#ifndef __TIE_SWKIAAnthroVariable
#define __TIE_SWKIAAnthroVariable

#include <string.h>
#include "CATBaseUnknown.h"
#include "CATMetaClass.h"
#include "CATMacForTie.h"
#include "CATExitJournal.h"
#include "SWKIAAnthroVariable.h"
#include "JS0DSPA.h"


#ifdef _WINDOWS_SOURCE
#define Exported __declspec(dllexport)
#define Imported __declspec(dllimport)
#else
#define Exported 
#define Imported 
#endif


/* To link an implementation with the interface SWKIAAnthroVariable */
#define declare_TIE_SWKIAAnthroVariable(classe) \
 \
 \
class TIESWKIAAnthroVariable##classe : public SWKIAAnthroVariable \
{ \
   private: \
      CATDeclareCommonTIEMembers \
   public: \
      CATDeclareTIEMethods(SWKIAAnthroVariable, classe) \
      CATDeclareIUnknownMethodsForCATBaseUnknownTIE \
      CATDeclareIDispatchMethodsForCATBaseUnknownTIE \
      CATDeclareCATBaseUnknownMethodsForTIE \
      virtual HRESULT __stdcall get_FullName(CATBSTR & pioFullName); \
      virtual HRESULT __stdcall get_ReferenceNumber(CATLONG & poRefNumber); \
      virtual HRESULT __stdcall get_Value(double & poValue); \
      virtual HRESULT __stdcall put_Value(double piValue); \
      virtual HRESULT __stdcall get_ValueAsString(CATBSTR & pioValue); \
      virtual HRESULT __stdcall put_ValueAsString(const CATBSTR & piValue); \
      virtual HRESULT __stdcall get_ValueAsPercentile(double & poValueAsPercentile); \
      virtual HRESULT __stdcall put_ValueAsPercentile(double piValueAsPercentile); \
      virtual HRESULT __stdcall get_MinValue(double & poMinValue); \
      virtual HRESULT __stdcall get_MaxValue(double & poMaxValue); \
      virtual HRESULT __stdcall get_Mean(double & poMean); \
      virtual HRESULT __stdcall get_StdDev(double & poStdDev); \
      virtual HRESULT __stdcall get_Manual(CAT_VARIANT_BOOL & poValueAsPercentile); \
      virtual HRESULT __stdcall put_Manual(CAT_VARIANT_BOOL piValueAsPercentile); \
      virtual HRESULT __stdcall GetCorrelationWith(CATLONG piRefNumberOfOther, double & poCorrelationValue); \
      virtual HRESULT __stdcall get_Memo(CATBSTR & pioText); \
      virtual HRESULT __stdcall put_Memo(const CATBSTR & piText); \
      virtual HRESULT  __stdcall get_Application(CATIAApplication *& oApplication); \
      virtual HRESULT  __stdcall get_Parent(CATBaseDispatch *& oParent); \
      virtual HRESULT  __stdcall get_Name(CATBSTR & oNameBSTR); \
      virtual HRESULT  __stdcall put_Name(const CATBSTR & iNameBSTR); \
      virtual HRESULT  __stdcall GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj); \
};



#define ENVTIEdeclare_SWKIAAnthroVariable(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
virtual HRESULT __stdcall get_FullName(CATBSTR & pioFullName); \
virtual HRESULT __stdcall get_ReferenceNumber(CATLONG & poRefNumber); \
virtual HRESULT __stdcall get_Value(double & poValue); \
virtual HRESULT __stdcall put_Value(double piValue); \
virtual HRESULT __stdcall get_ValueAsString(CATBSTR & pioValue); \
virtual HRESULT __stdcall put_ValueAsString(const CATBSTR & piValue); \
virtual HRESULT __stdcall get_ValueAsPercentile(double & poValueAsPercentile); \
virtual HRESULT __stdcall put_ValueAsPercentile(double piValueAsPercentile); \
virtual HRESULT __stdcall get_MinValue(double & poMinValue); \
virtual HRESULT __stdcall get_MaxValue(double & poMaxValue); \
virtual HRESULT __stdcall get_Mean(double & poMean); \
virtual HRESULT __stdcall get_StdDev(double & poStdDev); \
virtual HRESULT __stdcall get_Manual(CAT_VARIANT_BOOL & poValueAsPercentile); \
virtual HRESULT __stdcall put_Manual(CAT_VARIANT_BOOL piValueAsPercentile); \
virtual HRESULT __stdcall GetCorrelationWith(CATLONG piRefNumberOfOther, double & poCorrelationValue); \
virtual HRESULT __stdcall get_Memo(CATBSTR & pioText); \
virtual HRESULT __stdcall put_Memo(const CATBSTR & piText); \
virtual HRESULT  __stdcall get_Application(CATIAApplication *& oApplication); \
virtual HRESULT  __stdcall get_Parent(CATBaseDispatch *& oParent); \
virtual HRESULT  __stdcall get_Name(CATBSTR & oNameBSTR); \
virtual HRESULT  __stdcall put_Name(const CATBSTR & iNameBSTR); \
virtual HRESULT  __stdcall GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj); \


#define ENVTIEdefine_SWKIAAnthroVariable(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
HRESULT __stdcall  ENVTIEName::get_FullName(CATBSTR & pioFullName) \
{ \
return (ENVTIECALL(SWKIAAnthroVariable,ENVTIETypeLetter,ENVTIELetter)get_FullName(pioFullName)); \
} \
HRESULT __stdcall  ENVTIEName::get_ReferenceNumber(CATLONG & poRefNumber) \
{ \
return (ENVTIECALL(SWKIAAnthroVariable,ENVTIETypeLetter,ENVTIELetter)get_ReferenceNumber(poRefNumber)); \
} \
HRESULT __stdcall  ENVTIEName::get_Value(double & poValue) \
{ \
return (ENVTIECALL(SWKIAAnthroVariable,ENVTIETypeLetter,ENVTIELetter)get_Value(poValue)); \
} \
HRESULT __stdcall  ENVTIEName::put_Value(double piValue) \
{ \
return (ENVTIECALL(SWKIAAnthroVariable,ENVTIETypeLetter,ENVTIELetter)put_Value(piValue)); \
} \
HRESULT __stdcall  ENVTIEName::get_ValueAsString(CATBSTR & pioValue) \
{ \
return (ENVTIECALL(SWKIAAnthroVariable,ENVTIETypeLetter,ENVTIELetter)get_ValueAsString(pioValue)); \
} \
HRESULT __stdcall  ENVTIEName::put_ValueAsString(const CATBSTR & piValue) \
{ \
return (ENVTIECALL(SWKIAAnthroVariable,ENVTIETypeLetter,ENVTIELetter)put_ValueAsString(piValue)); \
} \
HRESULT __stdcall  ENVTIEName::get_ValueAsPercentile(double & poValueAsPercentile) \
{ \
return (ENVTIECALL(SWKIAAnthroVariable,ENVTIETypeLetter,ENVTIELetter)get_ValueAsPercentile(poValueAsPercentile)); \
} \
HRESULT __stdcall  ENVTIEName::put_ValueAsPercentile(double piValueAsPercentile) \
{ \
return (ENVTIECALL(SWKIAAnthroVariable,ENVTIETypeLetter,ENVTIELetter)put_ValueAsPercentile(piValueAsPercentile)); \
} \
HRESULT __stdcall  ENVTIEName::get_MinValue(double & poMinValue) \
{ \
return (ENVTIECALL(SWKIAAnthroVariable,ENVTIETypeLetter,ENVTIELetter)get_MinValue(poMinValue)); \
} \
HRESULT __stdcall  ENVTIEName::get_MaxValue(double & poMaxValue) \
{ \
return (ENVTIECALL(SWKIAAnthroVariable,ENVTIETypeLetter,ENVTIELetter)get_MaxValue(poMaxValue)); \
} \
HRESULT __stdcall  ENVTIEName::get_Mean(double & poMean) \
{ \
return (ENVTIECALL(SWKIAAnthroVariable,ENVTIETypeLetter,ENVTIELetter)get_Mean(poMean)); \
} \
HRESULT __stdcall  ENVTIEName::get_StdDev(double & poStdDev) \
{ \
return (ENVTIECALL(SWKIAAnthroVariable,ENVTIETypeLetter,ENVTIELetter)get_StdDev(poStdDev)); \
} \
HRESULT __stdcall  ENVTIEName::get_Manual(CAT_VARIANT_BOOL & poValueAsPercentile) \
{ \
return (ENVTIECALL(SWKIAAnthroVariable,ENVTIETypeLetter,ENVTIELetter)get_Manual(poValueAsPercentile)); \
} \
HRESULT __stdcall  ENVTIEName::put_Manual(CAT_VARIANT_BOOL piValueAsPercentile) \
{ \
return (ENVTIECALL(SWKIAAnthroVariable,ENVTIETypeLetter,ENVTIELetter)put_Manual(piValueAsPercentile)); \
} \
HRESULT __stdcall  ENVTIEName::GetCorrelationWith(CATLONG piRefNumberOfOther, double & poCorrelationValue) \
{ \
return (ENVTIECALL(SWKIAAnthroVariable,ENVTIETypeLetter,ENVTIELetter)GetCorrelationWith(piRefNumberOfOther,poCorrelationValue)); \
} \
HRESULT __stdcall  ENVTIEName::get_Memo(CATBSTR & pioText) \
{ \
return (ENVTIECALL(SWKIAAnthroVariable,ENVTIETypeLetter,ENVTIELetter)get_Memo(pioText)); \
} \
HRESULT __stdcall  ENVTIEName::put_Memo(const CATBSTR & piText) \
{ \
return (ENVTIECALL(SWKIAAnthroVariable,ENVTIETypeLetter,ENVTIELetter)put_Memo(piText)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Application(CATIAApplication *& oApplication) \
{ \
return (ENVTIECALL(SWKIAAnthroVariable,ENVTIETypeLetter,ENVTIELetter)get_Application(oApplication)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Parent(CATBaseDispatch *& oParent) \
{ \
return (ENVTIECALL(SWKIAAnthroVariable,ENVTIETypeLetter,ENVTIELetter)get_Parent(oParent)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Name(CATBSTR & oNameBSTR) \
{ \
return (ENVTIECALL(SWKIAAnthroVariable,ENVTIETypeLetter,ENVTIELetter)get_Name(oNameBSTR)); \
} \
HRESULT  __stdcall  ENVTIEName::put_Name(const CATBSTR & iNameBSTR) \
{ \
return (ENVTIECALL(SWKIAAnthroVariable,ENVTIETypeLetter,ENVTIELetter)put_Name(iNameBSTR)); \
} \
HRESULT  __stdcall  ENVTIEName::GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj) \
{ \
return (ENVTIECALL(SWKIAAnthroVariable,ENVTIETypeLetter,ENVTIELetter)GetItem(IDName,RealObj)); \
} \


/* Name of the TIE class */
#define class_TIE_SWKIAAnthroVariable(classe)    TIESWKIAAnthroVariable##classe


/* Common methods inside a TIE */
#define common_TIE_SWKIAAnthroVariable(classe) \
 \
 \
/* Static initialization */ \
CATDefineCommonTIEMembers(SWKIAAnthroVariable, classe) \
 \
 \
CATImplementTIEMethods(SWKIAAnthroVariable, classe) \
CATImplementIUnknownMethodsForCATBaseUnknownTIE(SWKIAAnthroVariable, classe, 2) \
CATImplementIDispatchMethodsForCATBaseUnknownTIE(SWKIAAnthroVariable, classe) \
CATImplementCATBaseUnknownMethodsForTIE(SWKIAAnthroVariable, classe) \
 \
HRESULT __stdcall  TIESWKIAAnthroVariable##classe::get_FullName(CATBSTR & pioFullName) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,1,&_Trac2,&pioFullName); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_FullName(pioFullName); \
   ExitAfterCall(this,1,_Trac2,&_ret_arg,&pioFullName); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIESWKIAAnthroVariable##classe::get_ReferenceNumber(CATLONG & poRefNumber) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,2,&_Trac2,&poRefNumber); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_ReferenceNumber(poRefNumber); \
   ExitAfterCall(this,2,_Trac2,&_ret_arg,&poRefNumber); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIESWKIAAnthroVariable##classe::get_Value(double & poValue) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,3,&_Trac2,&poValue); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Value(poValue); \
   ExitAfterCall(this,3,_Trac2,&_ret_arg,&poValue); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIESWKIAAnthroVariable##classe::put_Value(double piValue) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,4,&_Trac2,&piValue); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_Value(piValue); \
   ExitAfterCall(this,4,_Trac2,&_ret_arg,&piValue); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIESWKIAAnthroVariable##classe::get_ValueAsString(CATBSTR & pioValue) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,5,&_Trac2,&pioValue); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_ValueAsString(pioValue); \
   ExitAfterCall(this,5,_Trac2,&_ret_arg,&pioValue); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIESWKIAAnthroVariable##classe::put_ValueAsString(const CATBSTR & piValue) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,6,&_Trac2,&piValue); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_ValueAsString(piValue); \
   ExitAfterCall(this,6,_Trac2,&_ret_arg,&piValue); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIESWKIAAnthroVariable##classe::get_ValueAsPercentile(double & poValueAsPercentile) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,7,&_Trac2,&poValueAsPercentile); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_ValueAsPercentile(poValueAsPercentile); \
   ExitAfterCall(this,7,_Trac2,&_ret_arg,&poValueAsPercentile); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIESWKIAAnthroVariable##classe::put_ValueAsPercentile(double piValueAsPercentile) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,8,&_Trac2,&piValueAsPercentile); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_ValueAsPercentile(piValueAsPercentile); \
   ExitAfterCall(this,8,_Trac2,&_ret_arg,&piValueAsPercentile); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIESWKIAAnthroVariable##classe::get_MinValue(double & poMinValue) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,9,&_Trac2,&poMinValue); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_MinValue(poMinValue); \
   ExitAfterCall(this,9,_Trac2,&_ret_arg,&poMinValue); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIESWKIAAnthroVariable##classe::get_MaxValue(double & poMaxValue) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,10,&_Trac2,&poMaxValue); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_MaxValue(poMaxValue); \
   ExitAfterCall(this,10,_Trac2,&_ret_arg,&poMaxValue); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIESWKIAAnthroVariable##classe::get_Mean(double & poMean) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,11,&_Trac2,&poMean); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Mean(poMean); \
   ExitAfterCall(this,11,_Trac2,&_ret_arg,&poMean); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIESWKIAAnthroVariable##classe::get_StdDev(double & poStdDev) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,12,&_Trac2,&poStdDev); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_StdDev(poStdDev); \
   ExitAfterCall(this,12,_Trac2,&_ret_arg,&poStdDev); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIESWKIAAnthroVariable##classe::get_Manual(CAT_VARIANT_BOOL & poValueAsPercentile) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,13,&_Trac2,&poValueAsPercentile); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Manual(poValueAsPercentile); \
   ExitAfterCall(this,13,_Trac2,&_ret_arg,&poValueAsPercentile); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIESWKIAAnthroVariable##classe::put_Manual(CAT_VARIANT_BOOL piValueAsPercentile) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,14,&_Trac2,&piValueAsPercentile); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_Manual(piValueAsPercentile); \
   ExitAfterCall(this,14,_Trac2,&_ret_arg,&piValueAsPercentile); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIESWKIAAnthroVariable##classe::GetCorrelationWith(CATLONG piRefNumberOfOther, double & poCorrelationValue) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,15,&_Trac2,&piRefNumberOfOther,&poCorrelationValue); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetCorrelationWith(piRefNumberOfOther,poCorrelationValue); \
   ExitAfterCall(this,15,_Trac2,&_ret_arg,&piRefNumberOfOther,&poCorrelationValue); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIESWKIAAnthroVariable##classe::get_Memo(CATBSTR & pioText) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,16,&_Trac2,&pioText); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Memo(pioText); \
   ExitAfterCall(this,16,_Trac2,&_ret_arg,&pioText); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIESWKIAAnthroVariable##classe::put_Memo(const CATBSTR & piText) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,17,&_Trac2,&piText); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_Memo(piText); \
   ExitAfterCall(this,17,_Trac2,&_ret_arg,&piText); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIESWKIAAnthroVariable##classe::get_Application(CATIAApplication *& oApplication) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,18,&_Trac2,&oApplication); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Application(oApplication); \
   ExitAfterCall(this,18,_Trac2,&_ret_arg,&oApplication); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIESWKIAAnthroVariable##classe::get_Parent(CATBaseDispatch *& oParent) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,19,&_Trac2,&oParent); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Parent(oParent); \
   ExitAfterCall(this,19,_Trac2,&_ret_arg,&oParent); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIESWKIAAnthroVariable##classe::get_Name(CATBSTR & oNameBSTR) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,20,&_Trac2,&oNameBSTR); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Name(oNameBSTR); \
   ExitAfterCall(this,20,_Trac2,&_ret_arg,&oNameBSTR); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIESWKIAAnthroVariable##classe::put_Name(const CATBSTR & iNameBSTR) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,21,&_Trac2,&iNameBSTR); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_Name(iNameBSTR); \
   ExitAfterCall(this,21,_Trac2,&_ret_arg,&iNameBSTR); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIESWKIAAnthroVariable##classe::GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,22,&_Trac2,&IDName,&RealObj); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetItem(IDName,RealObj); \
   ExitAfterCall(this,22,_Trac2,&_ret_arg,&IDName,&RealObj); \
   return(_ret_arg); \
} \



/* Macro used to link an implementation with an interface */
#define TIE_SWKIAAnthroVariable(classe) \
 \
 \
declare_TIE_SWKIAAnthroVariable(classe) \
 \
 \
CATMetaClass * __stdcall TIESWKIAAnthroVariable##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_SWKIAAnthroVariable,"SWKIAAnthroVariable",SWKIAAnthroVariable::MetaObject(),classe::MetaObject(),TIE); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_SWKIAAnthroVariable(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIECreation(SWKIAAnthroVariable, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicSWKIAAnthroVariable##classe(classe::MetaObject(),SWKIAAnthroVariable::MetaObject(),(void *)CreateTIESWKIAAnthroVariable##classe)



/* Macro used to link an implementation with an interface */
/* This TIE is chained on the implementation object */
#define TIEchain_SWKIAAnthroVariable(classe) \
 \
 \
declare_TIE_SWKIAAnthroVariable(classe) \
 \
 \
CATMetaClass * __stdcall TIESWKIAAnthroVariable##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_SWKIAAnthroVariable,"SWKIAAnthroVariable",SWKIAAnthroVariable::MetaObject(),classe::MetaObject(),TIEchain); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_SWKIAAnthroVariable(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIEchainCreation(SWKIAAnthroVariable, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicSWKIAAnthroVariable##classe(classe::MetaObject(),SWKIAAnthroVariable::MetaObject(),(void *)CreateTIESWKIAAnthroVariable##classe)


/* Macro to switch between BOA and TIE at build time */ 
#ifdef CATSYS_BOA_IS_TIE
#define BOA_SWKIAAnthroVariable(classe) TIE_SWKIAAnthroVariable(classe)
#else
#define BOA_SWKIAAnthroVariable(classe) CATImplementBOA(SWKIAAnthroVariable, classe)
#endif

#endif
