#ifndef __TIE_CATIAHybridShapeExtract
#define __TIE_CATIAHybridShapeExtract

#include <string.h>
#include "CATBaseUnknown.h"
#include "CATMetaClass.h"
#include "CATMacForTie.h"
#include "CATExitJournal.h"
#include "CATIAHybridShapeExtract.h"
#include "JS0DSPA.h"


#ifdef _WINDOWS_SOURCE
#define Exported __declspec(dllexport)
#define Imported __declspec(dllimport)
#else
#define Exported 
#define Imported 
#endif


/* To link an implementation with the interface CATIAHybridShapeExtract */
#define declare_TIE_CATIAHybridShapeExtract(classe) \
 \
 \
class TIECATIAHybridShapeExtract##classe : public CATIAHybridShapeExtract \
{ \
   private: \
      CATDeclareCommonTIEMembers \
   public: \
      CATDeclareTIEMethods(CATIAHybridShapeExtract, classe) \
      CATDeclareIUnknownMethodsForCATBaseUnknownTIE \
      CATDeclareIDispatchMethodsForCATBaseUnknownTIE \
      CATDeclareCATBaseUnknownMethodsForTIE \
      virtual HRESULT __stdcall get_Elem(CATIAReference *& oElem); \
      virtual HRESULT __stdcall put_Elem(CATIAReference * iElem); \
      virtual HRESULT __stdcall get_PropagationType(CATLONG & oTypePropag); \
      virtual HRESULT __stdcall put_PropagationType(CATLONG iTypePropag); \
      virtual HRESULT __stdcall get_Support(CATIAReference *& oSupport); \
      virtual HRESULT __stdcall put_Support(CATIAReference * iSupport); \
      virtual HRESULT __stdcall get_ComplementaryExtract(CAT_VARIANT_BOOL & oComplementaire); \
      virtual HRESULT __stdcall put_ComplementaryExtract(CAT_VARIANT_BOOL iComplementaire); \
      virtual HRESULT __stdcall get_IsFederated(CAT_VARIANT_BOOL & oIsFederated); \
      virtual HRESULT __stdcall put_IsFederated(CAT_VARIANT_BOOL iIsFederated); \
      virtual HRESULT __stdcall get_CurvatureThreshold(double & oCrvtreThsld); \
      virtual HRESULT __stdcall put_CurvatureThreshold(double iCrvtreThsld); \
      virtual HRESULT __stdcall get_CurvatureThresholdActivity(CAT_VARIANT_BOOL & oCrvtreThsldActivity); \
      virtual HRESULT __stdcall put_CurvatureThresholdActivity(CAT_VARIANT_BOOL iCrvtreThsldActivity); \
      virtual HRESULT __stdcall get_DistanceThreshold(double & oDistreThsld); \
      virtual HRESULT __stdcall put_DistanceThreshold(double iDistreThsld); \
      virtual HRESULT __stdcall get_DistanceThresholdActivity(CAT_VARIANT_BOOL & oDistreThsldActivity); \
      virtual HRESULT __stdcall put_DistanceThresholdActivity(CAT_VARIANT_BOOL iDistreThsldActivity); \
      virtual HRESULT __stdcall get_AngularThreshold(double & oAngtreThsld); \
      virtual HRESULT __stdcall put_AngularThreshold(double iAngtreThsld); \
      virtual HRESULT __stdcall get_AngularThresholdActivity(CAT_VARIANT_BOOL & oAngtreThsldActivity); \
      virtual HRESULT __stdcall put_AngularThresholdActivity(CAT_VARIANT_BOOL iAngtreThsldActivity); \
      virtual HRESULT __stdcall Compute(); \
      virtual HRESULT __stdcall AppendHybridShape(CATIAHybridShape * iHybridShape); \
      virtual HRESULT __stdcall get_Thickness(CATIAHybridShape *& oThickness); \
      virtual HRESULT  __stdcall get_Application(CATIAApplication *& oApplication); \
      virtual HRESULT  __stdcall get_Parent(CATBaseDispatch *& oParent); \
      virtual HRESULT  __stdcall get_Name(CATBSTR & oNameBSTR); \
      virtual HRESULT  __stdcall put_Name(const CATBSTR & iNameBSTR); \
      virtual HRESULT  __stdcall GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj); \
};



#define ENVTIEdeclare_CATIAHybridShapeExtract(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
virtual HRESULT __stdcall get_Elem(CATIAReference *& oElem); \
virtual HRESULT __stdcall put_Elem(CATIAReference * iElem); \
virtual HRESULT __stdcall get_PropagationType(CATLONG & oTypePropag); \
virtual HRESULT __stdcall put_PropagationType(CATLONG iTypePropag); \
virtual HRESULT __stdcall get_Support(CATIAReference *& oSupport); \
virtual HRESULT __stdcall put_Support(CATIAReference * iSupport); \
virtual HRESULT __stdcall get_ComplementaryExtract(CAT_VARIANT_BOOL & oComplementaire); \
virtual HRESULT __stdcall put_ComplementaryExtract(CAT_VARIANT_BOOL iComplementaire); \
virtual HRESULT __stdcall get_IsFederated(CAT_VARIANT_BOOL & oIsFederated); \
virtual HRESULT __stdcall put_IsFederated(CAT_VARIANT_BOOL iIsFederated); \
virtual HRESULT __stdcall get_CurvatureThreshold(double & oCrvtreThsld); \
virtual HRESULT __stdcall put_CurvatureThreshold(double iCrvtreThsld); \
virtual HRESULT __stdcall get_CurvatureThresholdActivity(CAT_VARIANT_BOOL & oCrvtreThsldActivity); \
virtual HRESULT __stdcall put_CurvatureThresholdActivity(CAT_VARIANT_BOOL iCrvtreThsldActivity); \
virtual HRESULT __stdcall get_DistanceThreshold(double & oDistreThsld); \
virtual HRESULT __stdcall put_DistanceThreshold(double iDistreThsld); \
virtual HRESULT __stdcall get_DistanceThresholdActivity(CAT_VARIANT_BOOL & oDistreThsldActivity); \
virtual HRESULT __stdcall put_DistanceThresholdActivity(CAT_VARIANT_BOOL iDistreThsldActivity); \
virtual HRESULT __stdcall get_AngularThreshold(double & oAngtreThsld); \
virtual HRESULT __stdcall put_AngularThreshold(double iAngtreThsld); \
virtual HRESULT __stdcall get_AngularThresholdActivity(CAT_VARIANT_BOOL & oAngtreThsldActivity); \
virtual HRESULT __stdcall put_AngularThresholdActivity(CAT_VARIANT_BOOL iAngtreThsldActivity); \
virtual HRESULT __stdcall Compute(); \
virtual HRESULT __stdcall AppendHybridShape(CATIAHybridShape * iHybridShape); \
virtual HRESULT __stdcall get_Thickness(CATIAHybridShape *& oThickness); \
virtual HRESULT  __stdcall get_Application(CATIAApplication *& oApplication); \
virtual HRESULT  __stdcall get_Parent(CATBaseDispatch *& oParent); \
virtual HRESULT  __stdcall get_Name(CATBSTR & oNameBSTR); \
virtual HRESULT  __stdcall put_Name(const CATBSTR & iNameBSTR); \
virtual HRESULT  __stdcall GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj); \


#define ENVTIEdefine_CATIAHybridShapeExtract(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
HRESULT __stdcall  ENVTIEName::get_Elem(CATIAReference *& oElem) \
{ \
return (ENVTIECALL(CATIAHybridShapeExtract,ENVTIETypeLetter,ENVTIELetter)get_Elem(oElem)); \
} \
HRESULT __stdcall  ENVTIEName::put_Elem(CATIAReference * iElem) \
{ \
return (ENVTIECALL(CATIAHybridShapeExtract,ENVTIETypeLetter,ENVTIELetter)put_Elem(iElem)); \
} \
HRESULT __stdcall  ENVTIEName::get_PropagationType(CATLONG & oTypePropag) \
{ \
return (ENVTIECALL(CATIAHybridShapeExtract,ENVTIETypeLetter,ENVTIELetter)get_PropagationType(oTypePropag)); \
} \
HRESULT __stdcall  ENVTIEName::put_PropagationType(CATLONG iTypePropag) \
{ \
return (ENVTIECALL(CATIAHybridShapeExtract,ENVTIETypeLetter,ENVTIELetter)put_PropagationType(iTypePropag)); \
} \
HRESULT __stdcall  ENVTIEName::get_Support(CATIAReference *& oSupport) \
{ \
return (ENVTIECALL(CATIAHybridShapeExtract,ENVTIETypeLetter,ENVTIELetter)get_Support(oSupport)); \
} \
HRESULT __stdcall  ENVTIEName::put_Support(CATIAReference * iSupport) \
{ \
return (ENVTIECALL(CATIAHybridShapeExtract,ENVTIETypeLetter,ENVTIELetter)put_Support(iSupport)); \
} \
HRESULT __stdcall  ENVTIEName::get_ComplementaryExtract(CAT_VARIANT_BOOL & oComplementaire) \
{ \
return (ENVTIECALL(CATIAHybridShapeExtract,ENVTIETypeLetter,ENVTIELetter)get_ComplementaryExtract(oComplementaire)); \
} \
HRESULT __stdcall  ENVTIEName::put_ComplementaryExtract(CAT_VARIANT_BOOL iComplementaire) \
{ \
return (ENVTIECALL(CATIAHybridShapeExtract,ENVTIETypeLetter,ENVTIELetter)put_ComplementaryExtract(iComplementaire)); \
} \
HRESULT __stdcall  ENVTIEName::get_IsFederated(CAT_VARIANT_BOOL & oIsFederated) \
{ \
return (ENVTIECALL(CATIAHybridShapeExtract,ENVTIETypeLetter,ENVTIELetter)get_IsFederated(oIsFederated)); \
} \
HRESULT __stdcall  ENVTIEName::put_IsFederated(CAT_VARIANT_BOOL iIsFederated) \
{ \
return (ENVTIECALL(CATIAHybridShapeExtract,ENVTIETypeLetter,ENVTIELetter)put_IsFederated(iIsFederated)); \
} \
HRESULT __stdcall  ENVTIEName::get_CurvatureThreshold(double & oCrvtreThsld) \
{ \
return (ENVTIECALL(CATIAHybridShapeExtract,ENVTIETypeLetter,ENVTIELetter)get_CurvatureThreshold(oCrvtreThsld)); \
} \
HRESULT __stdcall  ENVTIEName::put_CurvatureThreshold(double iCrvtreThsld) \
{ \
return (ENVTIECALL(CATIAHybridShapeExtract,ENVTIETypeLetter,ENVTIELetter)put_CurvatureThreshold(iCrvtreThsld)); \
} \
HRESULT __stdcall  ENVTIEName::get_CurvatureThresholdActivity(CAT_VARIANT_BOOL & oCrvtreThsldActivity) \
{ \
return (ENVTIECALL(CATIAHybridShapeExtract,ENVTIETypeLetter,ENVTIELetter)get_CurvatureThresholdActivity(oCrvtreThsldActivity)); \
} \
HRESULT __stdcall  ENVTIEName::put_CurvatureThresholdActivity(CAT_VARIANT_BOOL iCrvtreThsldActivity) \
{ \
return (ENVTIECALL(CATIAHybridShapeExtract,ENVTIETypeLetter,ENVTIELetter)put_CurvatureThresholdActivity(iCrvtreThsldActivity)); \
} \
HRESULT __stdcall  ENVTIEName::get_DistanceThreshold(double & oDistreThsld) \
{ \
return (ENVTIECALL(CATIAHybridShapeExtract,ENVTIETypeLetter,ENVTIELetter)get_DistanceThreshold(oDistreThsld)); \
} \
HRESULT __stdcall  ENVTIEName::put_DistanceThreshold(double iDistreThsld) \
{ \
return (ENVTIECALL(CATIAHybridShapeExtract,ENVTIETypeLetter,ENVTIELetter)put_DistanceThreshold(iDistreThsld)); \
} \
HRESULT __stdcall  ENVTIEName::get_DistanceThresholdActivity(CAT_VARIANT_BOOL & oDistreThsldActivity) \
{ \
return (ENVTIECALL(CATIAHybridShapeExtract,ENVTIETypeLetter,ENVTIELetter)get_DistanceThresholdActivity(oDistreThsldActivity)); \
} \
HRESULT __stdcall  ENVTIEName::put_DistanceThresholdActivity(CAT_VARIANT_BOOL iDistreThsldActivity) \
{ \
return (ENVTIECALL(CATIAHybridShapeExtract,ENVTIETypeLetter,ENVTIELetter)put_DistanceThresholdActivity(iDistreThsldActivity)); \
} \
HRESULT __stdcall  ENVTIEName::get_AngularThreshold(double & oAngtreThsld) \
{ \
return (ENVTIECALL(CATIAHybridShapeExtract,ENVTIETypeLetter,ENVTIELetter)get_AngularThreshold(oAngtreThsld)); \
} \
HRESULT __stdcall  ENVTIEName::put_AngularThreshold(double iAngtreThsld) \
{ \
return (ENVTIECALL(CATIAHybridShapeExtract,ENVTIETypeLetter,ENVTIELetter)put_AngularThreshold(iAngtreThsld)); \
} \
HRESULT __stdcall  ENVTIEName::get_AngularThresholdActivity(CAT_VARIANT_BOOL & oAngtreThsldActivity) \
{ \
return (ENVTIECALL(CATIAHybridShapeExtract,ENVTIETypeLetter,ENVTIELetter)get_AngularThresholdActivity(oAngtreThsldActivity)); \
} \
HRESULT __stdcall  ENVTIEName::put_AngularThresholdActivity(CAT_VARIANT_BOOL iAngtreThsldActivity) \
{ \
return (ENVTIECALL(CATIAHybridShapeExtract,ENVTIETypeLetter,ENVTIELetter)put_AngularThresholdActivity(iAngtreThsldActivity)); \
} \
HRESULT __stdcall  ENVTIEName::Compute() \
{ \
return (ENVTIECALL(CATIAHybridShapeExtract,ENVTIETypeLetter,ENVTIELetter)Compute()); \
} \
HRESULT __stdcall  ENVTIEName::AppendHybridShape(CATIAHybridShape * iHybridShape) \
{ \
return (ENVTIECALL(CATIAHybridShapeExtract,ENVTIETypeLetter,ENVTIELetter)AppendHybridShape(iHybridShape)); \
} \
HRESULT __stdcall  ENVTIEName::get_Thickness(CATIAHybridShape *& oThickness) \
{ \
return (ENVTIECALL(CATIAHybridShapeExtract,ENVTIETypeLetter,ENVTIELetter)get_Thickness(oThickness)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Application(CATIAApplication *& oApplication) \
{ \
return (ENVTIECALL(CATIAHybridShapeExtract,ENVTIETypeLetter,ENVTIELetter)get_Application(oApplication)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Parent(CATBaseDispatch *& oParent) \
{ \
return (ENVTIECALL(CATIAHybridShapeExtract,ENVTIETypeLetter,ENVTIELetter)get_Parent(oParent)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Name(CATBSTR & oNameBSTR) \
{ \
return (ENVTIECALL(CATIAHybridShapeExtract,ENVTIETypeLetter,ENVTIELetter)get_Name(oNameBSTR)); \
} \
HRESULT  __stdcall  ENVTIEName::put_Name(const CATBSTR & iNameBSTR) \
{ \
return (ENVTIECALL(CATIAHybridShapeExtract,ENVTIETypeLetter,ENVTIELetter)put_Name(iNameBSTR)); \
} \
HRESULT  __stdcall  ENVTIEName::GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj) \
{ \
return (ENVTIECALL(CATIAHybridShapeExtract,ENVTIETypeLetter,ENVTIELetter)GetItem(IDName,RealObj)); \
} \


/* Name of the TIE class */
#define class_TIE_CATIAHybridShapeExtract(classe)    TIECATIAHybridShapeExtract##classe


/* Common methods inside a TIE */
#define common_TIE_CATIAHybridShapeExtract(classe) \
 \
 \
/* Static initialization */ \
CATDefineCommonTIEMembers(CATIAHybridShapeExtract, classe) \
 \
 \
CATImplementTIEMethods(CATIAHybridShapeExtract, classe) \
CATImplementIUnknownMethodsForCATBaseUnknownTIE(CATIAHybridShapeExtract, classe, 2) \
CATImplementIDispatchMethodsForCATBaseUnknownTIE(CATIAHybridShapeExtract, classe) \
CATImplementCATBaseUnknownMethodsForTIE(CATIAHybridShapeExtract, classe) \
 \
HRESULT __stdcall  TIECATIAHybridShapeExtract##classe::get_Elem(CATIAReference *& oElem) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,1,&_Trac2,&oElem); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Elem(oElem); \
   ExitAfterCall(this,1,_Trac2,&_ret_arg,&oElem); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeExtract##classe::put_Elem(CATIAReference * iElem) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,2,&_Trac2,&iElem); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_Elem(iElem); \
   ExitAfterCall(this,2,_Trac2,&_ret_arg,&iElem); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeExtract##classe::get_PropagationType(CATLONG & oTypePropag) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,3,&_Trac2,&oTypePropag); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_PropagationType(oTypePropag); \
   ExitAfterCall(this,3,_Trac2,&_ret_arg,&oTypePropag); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeExtract##classe::put_PropagationType(CATLONG iTypePropag) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,4,&_Trac2,&iTypePropag); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_PropagationType(iTypePropag); \
   ExitAfterCall(this,4,_Trac2,&_ret_arg,&iTypePropag); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeExtract##classe::get_Support(CATIAReference *& oSupport) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,5,&_Trac2,&oSupport); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Support(oSupport); \
   ExitAfterCall(this,5,_Trac2,&_ret_arg,&oSupport); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeExtract##classe::put_Support(CATIAReference * iSupport) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,6,&_Trac2,&iSupport); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_Support(iSupport); \
   ExitAfterCall(this,6,_Trac2,&_ret_arg,&iSupport); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeExtract##classe::get_ComplementaryExtract(CAT_VARIANT_BOOL & oComplementaire) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,7,&_Trac2,&oComplementaire); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_ComplementaryExtract(oComplementaire); \
   ExitAfterCall(this,7,_Trac2,&_ret_arg,&oComplementaire); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeExtract##classe::put_ComplementaryExtract(CAT_VARIANT_BOOL iComplementaire) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,8,&_Trac2,&iComplementaire); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_ComplementaryExtract(iComplementaire); \
   ExitAfterCall(this,8,_Trac2,&_ret_arg,&iComplementaire); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeExtract##classe::get_IsFederated(CAT_VARIANT_BOOL & oIsFederated) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,9,&_Trac2,&oIsFederated); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_IsFederated(oIsFederated); \
   ExitAfterCall(this,9,_Trac2,&_ret_arg,&oIsFederated); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeExtract##classe::put_IsFederated(CAT_VARIANT_BOOL iIsFederated) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,10,&_Trac2,&iIsFederated); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_IsFederated(iIsFederated); \
   ExitAfterCall(this,10,_Trac2,&_ret_arg,&iIsFederated); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeExtract##classe::get_CurvatureThreshold(double & oCrvtreThsld) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,11,&_Trac2,&oCrvtreThsld); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_CurvatureThreshold(oCrvtreThsld); \
   ExitAfterCall(this,11,_Trac2,&_ret_arg,&oCrvtreThsld); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeExtract##classe::put_CurvatureThreshold(double iCrvtreThsld) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,12,&_Trac2,&iCrvtreThsld); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_CurvatureThreshold(iCrvtreThsld); \
   ExitAfterCall(this,12,_Trac2,&_ret_arg,&iCrvtreThsld); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeExtract##classe::get_CurvatureThresholdActivity(CAT_VARIANT_BOOL & oCrvtreThsldActivity) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,13,&_Trac2,&oCrvtreThsldActivity); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_CurvatureThresholdActivity(oCrvtreThsldActivity); \
   ExitAfterCall(this,13,_Trac2,&_ret_arg,&oCrvtreThsldActivity); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeExtract##classe::put_CurvatureThresholdActivity(CAT_VARIANT_BOOL iCrvtreThsldActivity) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,14,&_Trac2,&iCrvtreThsldActivity); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_CurvatureThresholdActivity(iCrvtreThsldActivity); \
   ExitAfterCall(this,14,_Trac2,&_ret_arg,&iCrvtreThsldActivity); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeExtract##classe::get_DistanceThreshold(double & oDistreThsld) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,15,&_Trac2,&oDistreThsld); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_DistanceThreshold(oDistreThsld); \
   ExitAfterCall(this,15,_Trac2,&_ret_arg,&oDistreThsld); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeExtract##classe::put_DistanceThreshold(double iDistreThsld) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,16,&_Trac2,&iDistreThsld); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_DistanceThreshold(iDistreThsld); \
   ExitAfterCall(this,16,_Trac2,&_ret_arg,&iDistreThsld); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeExtract##classe::get_DistanceThresholdActivity(CAT_VARIANT_BOOL & oDistreThsldActivity) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,17,&_Trac2,&oDistreThsldActivity); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_DistanceThresholdActivity(oDistreThsldActivity); \
   ExitAfterCall(this,17,_Trac2,&_ret_arg,&oDistreThsldActivity); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeExtract##classe::put_DistanceThresholdActivity(CAT_VARIANT_BOOL iDistreThsldActivity) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,18,&_Trac2,&iDistreThsldActivity); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_DistanceThresholdActivity(iDistreThsldActivity); \
   ExitAfterCall(this,18,_Trac2,&_ret_arg,&iDistreThsldActivity); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeExtract##classe::get_AngularThreshold(double & oAngtreThsld) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,19,&_Trac2,&oAngtreThsld); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_AngularThreshold(oAngtreThsld); \
   ExitAfterCall(this,19,_Trac2,&_ret_arg,&oAngtreThsld); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeExtract##classe::put_AngularThreshold(double iAngtreThsld) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,20,&_Trac2,&iAngtreThsld); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_AngularThreshold(iAngtreThsld); \
   ExitAfterCall(this,20,_Trac2,&_ret_arg,&iAngtreThsld); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeExtract##classe::get_AngularThresholdActivity(CAT_VARIANT_BOOL & oAngtreThsldActivity) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,21,&_Trac2,&oAngtreThsldActivity); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_AngularThresholdActivity(oAngtreThsldActivity); \
   ExitAfterCall(this,21,_Trac2,&_ret_arg,&oAngtreThsldActivity); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeExtract##classe::put_AngularThresholdActivity(CAT_VARIANT_BOOL iAngtreThsldActivity) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,22,&_Trac2,&iAngtreThsldActivity); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_AngularThresholdActivity(iAngtreThsldActivity); \
   ExitAfterCall(this,22,_Trac2,&_ret_arg,&iAngtreThsldActivity); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeExtract##classe::Compute() \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,23,&_Trac2); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->Compute(); \
   ExitAfterCall(this,23,_Trac2,&_ret_arg); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeExtract##classe::AppendHybridShape(CATIAHybridShape * iHybridShape) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,24,&_Trac2,&iHybridShape); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->AppendHybridShape(iHybridShape); \
   ExitAfterCall(this,24,_Trac2,&_ret_arg,&iHybridShape); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeExtract##classe::get_Thickness(CATIAHybridShape *& oThickness) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,25,&_Trac2,&oThickness); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Thickness(oThickness); \
   ExitAfterCall(this,25,_Trac2,&_ret_arg,&oThickness); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAHybridShapeExtract##classe::get_Application(CATIAApplication *& oApplication) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,26,&_Trac2,&oApplication); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Application(oApplication); \
   ExitAfterCall(this,26,_Trac2,&_ret_arg,&oApplication); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAHybridShapeExtract##classe::get_Parent(CATBaseDispatch *& oParent) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,27,&_Trac2,&oParent); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Parent(oParent); \
   ExitAfterCall(this,27,_Trac2,&_ret_arg,&oParent); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAHybridShapeExtract##classe::get_Name(CATBSTR & oNameBSTR) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,28,&_Trac2,&oNameBSTR); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Name(oNameBSTR); \
   ExitAfterCall(this,28,_Trac2,&_ret_arg,&oNameBSTR); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAHybridShapeExtract##classe::put_Name(const CATBSTR & iNameBSTR) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,29,&_Trac2,&iNameBSTR); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_Name(iNameBSTR); \
   ExitAfterCall(this,29,_Trac2,&_ret_arg,&iNameBSTR); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAHybridShapeExtract##classe::GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,30,&_Trac2,&IDName,&RealObj); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetItem(IDName,RealObj); \
   ExitAfterCall(this,30,_Trac2,&_ret_arg,&IDName,&RealObj); \
   return(_ret_arg); \
} \



/* Macro used to link an implementation with an interface */
#define TIE_CATIAHybridShapeExtract(classe) \
 \
 \
declare_TIE_CATIAHybridShapeExtract(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIAHybridShapeExtract##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIAHybridShapeExtract,"CATIAHybridShapeExtract",CATIAHybridShapeExtract::MetaObject(),classe::MetaObject(),TIE); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIAHybridShapeExtract(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIECreation(CATIAHybridShapeExtract, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIAHybridShapeExtract##classe(classe::MetaObject(),CATIAHybridShapeExtract::MetaObject(),(void *)CreateTIECATIAHybridShapeExtract##classe)



/* Macro used to link an implementation with an interface */
/* This TIE is chained on the implementation object */
#define TIEchain_CATIAHybridShapeExtract(classe) \
 \
 \
declare_TIE_CATIAHybridShapeExtract(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIAHybridShapeExtract##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIAHybridShapeExtract,"CATIAHybridShapeExtract",CATIAHybridShapeExtract::MetaObject(),classe::MetaObject(),TIEchain); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIAHybridShapeExtract(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIEchainCreation(CATIAHybridShapeExtract, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIAHybridShapeExtract##classe(classe::MetaObject(),CATIAHybridShapeExtract::MetaObject(),(void *)CreateTIECATIAHybridShapeExtract##classe)


/* Macro to switch between BOA and TIE at build time */ 
#ifdef CATSYS_BOA_IS_TIE
#define BOA_CATIAHybridShapeExtract(classe) TIE_CATIAHybridShapeExtract(classe)
#else
#define BOA_CATIAHybridShapeExtract(classe) CATImplementBOA(CATIAHybridShapeExtract, classe)
#endif

#endif
