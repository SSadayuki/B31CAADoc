#ifndef __TIE_CATIADistance
#define __TIE_CATIADistance

#include <string.h>
#include "CATBaseUnknown.h"
#include "CATMetaClass.h"
#include "CATMacForTie.h"
#include "CATExitJournal.h"
#include "CATIADistance.h"
#include "JS0DSPA.h"


#ifdef _WINDOWS_SOURCE
#define Exported __declspec(dllexport)
#define Imported __declspec(dllimport)
#else
#define Exported 
#define Imported 
#endif


/* To link an implementation with the interface CATIADistance */
#define declare_TIE_CATIADistance(classe) \
 \
 \
class TIECATIADistance##classe : public CATIADistance \
{ \
   private: \
      CATDeclareCommonTIEMembers \
   public: \
      CATDeclareTIEMethods(CATIADistance, classe) \
      CATDeclareIUnknownMethodsForCATBaseUnknownTIE \
      CATDeclareIDispatchMethodsForCATBaseUnknownTIE \
      CATDeclareCATBaseUnknownMethodsForTIE \
      virtual HRESULT __stdcall get_ComputationType(CatDistanceComputationType & oType); \
      virtual HRESULT __stdcall put_ComputationType(CatDistanceComputationType iType); \
      virtual HRESULT __stdcall get_MeasureType(CatDistanceMeasureType & oType); \
      virtual HRESULT __stdcall put_MeasureType(CatDistanceMeasureType iType); \
      virtual HRESULT __stdcall get_MinimumDistance(double & oMinimumDistance); \
      virtual HRESULT __stdcall put_MinimumDistance(double iMinimumDistance); \
      virtual HRESULT __stdcall get_MaximumDistance(double & oMaximumDistance); \
      virtual HRESULT __stdcall put_MaximumDistance(double iMaximumDistance); \
      virtual HRESULT __stdcall get_Accuracy(double & oAccuracy); \
      virtual HRESULT __stdcall put_Accuracy(double iAccuracy); \
      virtual HRESULT __stdcall get_FirstGroup(CATIAGroup *& oGroup); \
      virtual HRESULT __stdcall put_FirstGroup(CATIAGroup * iGroup); \
      virtual HRESULT __stdcall get_SecondGroup(CATIAGroup *& oGroup); \
      virtual HRESULT __stdcall put_SecondGroup(CATIAGroup * iGroup); \
      virtual HRESULT __stdcall Compute(); \
      virtual HRESULT __stdcall get_IsDefined(CATLONG & oDiagnosis); \
      virtual HRESULT __stdcall get_FirstProduct(CATIAProduct *& oProduct); \
      virtual HRESULT __stdcall GetFirstPointCoordinates(CATSafeArrayVariant & oCoordinates); \
      virtual HRESULT __stdcall get_SecondProduct(CATIAProduct *& oProduct); \
      virtual HRESULT __stdcall GetSecondPointCoordinates(CATSafeArrayVariant & oCoordinates); \
      virtual HRESULT __stdcall get_Value(double & oValue); \
      virtual HRESULT __stdcall get_AnnotatedViews(CATIAAnnotatedViews *& oAnnotatedViews); \
      virtual HRESULT __stdcall get_Marker3Ds(CATIAMarker3Ds *& oMarker3Ds); \
      virtual HRESULT  __stdcall get_Application(CATIAApplication *& oApplication); \
      virtual HRESULT  __stdcall get_Parent(CATBaseDispatch *& oParent); \
      virtual HRESULT  __stdcall get_Name(CATBSTR & oNameBSTR); \
      virtual HRESULT  __stdcall put_Name(const CATBSTR & iNameBSTR); \
      virtual HRESULT  __stdcall GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj); \
};



#define ENVTIEdeclare_CATIADistance(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
virtual HRESULT __stdcall get_ComputationType(CatDistanceComputationType & oType); \
virtual HRESULT __stdcall put_ComputationType(CatDistanceComputationType iType); \
virtual HRESULT __stdcall get_MeasureType(CatDistanceMeasureType & oType); \
virtual HRESULT __stdcall put_MeasureType(CatDistanceMeasureType iType); \
virtual HRESULT __stdcall get_MinimumDistance(double & oMinimumDistance); \
virtual HRESULT __stdcall put_MinimumDistance(double iMinimumDistance); \
virtual HRESULT __stdcall get_MaximumDistance(double & oMaximumDistance); \
virtual HRESULT __stdcall put_MaximumDistance(double iMaximumDistance); \
virtual HRESULT __stdcall get_Accuracy(double & oAccuracy); \
virtual HRESULT __stdcall put_Accuracy(double iAccuracy); \
virtual HRESULT __stdcall get_FirstGroup(CATIAGroup *& oGroup); \
virtual HRESULT __stdcall put_FirstGroup(CATIAGroup * iGroup); \
virtual HRESULT __stdcall get_SecondGroup(CATIAGroup *& oGroup); \
virtual HRESULT __stdcall put_SecondGroup(CATIAGroup * iGroup); \
virtual HRESULT __stdcall Compute(); \
virtual HRESULT __stdcall get_IsDefined(CATLONG & oDiagnosis); \
virtual HRESULT __stdcall get_FirstProduct(CATIAProduct *& oProduct); \
virtual HRESULT __stdcall GetFirstPointCoordinates(CATSafeArrayVariant & oCoordinates); \
virtual HRESULT __stdcall get_SecondProduct(CATIAProduct *& oProduct); \
virtual HRESULT __stdcall GetSecondPointCoordinates(CATSafeArrayVariant & oCoordinates); \
virtual HRESULT __stdcall get_Value(double & oValue); \
virtual HRESULT __stdcall get_AnnotatedViews(CATIAAnnotatedViews *& oAnnotatedViews); \
virtual HRESULT __stdcall get_Marker3Ds(CATIAMarker3Ds *& oMarker3Ds); \
virtual HRESULT  __stdcall get_Application(CATIAApplication *& oApplication); \
virtual HRESULT  __stdcall get_Parent(CATBaseDispatch *& oParent); \
virtual HRESULT  __stdcall get_Name(CATBSTR & oNameBSTR); \
virtual HRESULT  __stdcall put_Name(const CATBSTR & iNameBSTR); \
virtual HRESULT  __stdcall GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj); \


#define ENVTIEdefine_CATIADistance(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
HRESULT __stdcall  ENVTIEName::get_ComputationType(CatDistanceComputationType & oType) \
{ \
return (ENVTIECALL(CATIADistance,ENVTIETypeLetter,ENVTIELetter)get_ComputationType(oType)); \
} \
HRESULT __stdcall  ENVTIEName::put_ComputationType(CatDistanceComputationType iType) \
{ \
return (ENVTIECALL(CATIADistance,ENVTIETypeLetter,ENVTIELetter)put_ComputationType(iType)); \
} \
HRESULT __stdcall  ENVTIEName::get_MeasureType(CatDistanceMeasureType & oType) \
{ \
return (ENVTIECALL(CATIADistance,ENVTIETypeLetter,ENVTIELetter)get_MeasureType(oType)); \
} \
HRESULT __stdcall  ENVTIEName::put_MeasureType(CatDistanceMeasureType iType) \
{ \
return (ENVTIECALL(CATIADistance,ENVTIETypeLetter,ENVTIELetter)put_MeasureType(iType)); \
} \
HRESULT __stdcall  ENVTIEName::get_MinimumDistance(double & oMinimumDistance) \
{ \
return (ENVTIECALL(CATIADistance,ENVTIETypeLetter,ENVTIELetter)get_MinimumDistance(oMinimumDistance)); \
} \
HRESULT __stdcall  ENVTIEName::put_MinimumDistance(double iMinimumDistance) \
{ \
return (ENVTIECALL(CATIADistance,ENVTIETypeLetter,ENVTIELetter)put_MinimumDistance(iMinimumDistance)); \
} \
HRESULT __stdcall  ENVTIEName::get_MaximumDistance(double & oMaximumDistance) \
{ \
return (ENVTIECALL(CATIADistance,ENVTIETypeLetter,ENVTIELetter)get_MaximumDistance(oMaximumDistance)); \
} \
HRESULT __stdcall  ENVTIEName::put_MaximumDistance(double iMaximumDistance) \
{ \
return (ENVTIECALL(CATIADistance,ENVTIETypeLetter,ENVTIELetter)put_MaximumDistance(iMaximumDistance)); \
} \
HRESULT __stdcall  ENVTIEName::get_Accuracy(double & oAccuracy) \
{ \
return (ENVTIECALL(CATIADistance,ENVTIETypeLetter,ENVTIELetter)get_Accuracy(oAccuracy)); \
} \
HRESULT __stdcall  ENVTIEName::put_Accuracy(double iAccuracy) \
{ \
return (ENVTIECALL(CATIADistance,ENVTIETypeLetter,ENVTIELetter)put_Accuracy(iAccuracy)); \
} \
HRESULT __stdcall  ENVTIEName::get_FirstGroup(CATIAGroup *& oGroup) \
{ \
return (ENVTIECALL(CATIADistance,ENVTIETypeLetter,ENVTIELetter)get_FirstGroup(oGroup)); \
} \
HRESULT __stdcall  ENVTIEName::put_FirstGroup(CATIAGroup * iGroup) \
{ \
return (ENVTIECALL(CATIADistance,ENVTIETypeLetter,ENVTIELetter)put_FirstGroup(iGroup)); \
} \
HRESULT __stdcall  ENVTIEName::get_SecondGroup(CATIAGroup *& oGroup) \
{ \
return (ENVTIECALL(CATIADistance,ENVTIETypeLetter,ENVTIELetter)get_SecondGroup(oGroup)); \
} \
HRESULT __stdcall  ENVTIEName::put_SecondGroup(CATIAGroup * iGroup) \
{ \
return (ENVTIECALL(CATIADistance,ENVTIETypeLetter,ENVTIELetter)put_SecondGroup(iGroup)); \
} \
HRESULT __stdcall  ENVTIEName::Compute() \
{ \
return (ENVTIECALL(CATIADistance,ENVTIETypeLetter,ENVTIELetter)Compute()); \
} \
HRESULT __stdcall  ENVTIEName::get_IsDefined(CATLONG & oDiagnosis) \
{ \
return (ENVTIECALL(CATIADistance,ENVTIETypeLetter,ENVTIELetter)get_IsDefined(oDiagnosis)); \
} \
HRESULT __stdcall  ENVTIEName::get_FirstProduct(CATIAProduct *& oProduct) \
{ \
return (ENVTIECALL(CATIADistance,ENVTIETypeLetter,ENVTIELetter)get_FirstProduct(oProduct)); \
} \
HRESULT __stdcall  ENVTIEName::GetFirstPointCoordinates(CATSafeArrayVariant & oCoordinates) \
{ \
return (ENVTIECALL(CATIADistance,ENVTIETypeLetter,ENVTIELetter)GetFirstPointCoordinates(oCoordinates)); \
} \
HRESULT __stdcall  ENVTIEName::get_SecondProduct(CATIAProduct *& oProduct) \
{ \
return (ENVTIECALL(CATIADistance,ENVTIETypeLetter,ENVTIELetter)get_SecondProduct(oProduct)); \
} \
HRESULT __stdcall  ENVTIEName::GetSecondPointCoordinates(CATSafeArrayVariant & oCoordinates) \
{ \
return (ENVTIECALL(CATIADistance,ENVTIETypeLetter,ENVTIELetter)GetSecondPointCoordinates(oCoordinates)); \
} \
HRESULT __stdcall  ENVTIEName::get_Value(double & oValue) \
{ \
return (ENVTIECALL(CATIADistance,ENVTIETypeLetter,ENVTIELetter)get_Value(oValue)); \
} \
HRESULT __stdcall  ENVTIEName::get_AnnotatedViews(CATIAAnnotatedViews *& oAnnotatedViews) \
{ \
return (ENVTIECALL(CATIADistance,ENVTIETypeLetter,ENVTIELetter)get_AnnotatedViews(oAnnotatedViews)); \
} \
HRESULT __stdcall  ENVTIEName::get_Marker3Ds(CATIAMarker3Ds *& oMarker3Ds) \
{ \
return (ENVTIECALL(CATIADistance,ENVTIETypeLetter,ENVTIELetter)get_Marker3Ds(oMarker3Ds)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Application(CATIAApplication *& oApplication) \
{ \
return (ENVTIECALL(CATIADistance,ENVTIETypeLetter,ENVTIELetter)get_Application(oApplication)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Parent(CATBaseDispatch *& oParent) \
{ \
return (ENVTIECALL(CATIADistance,ENVTIETypeLetter,ENVTIELetter)get_Parent(oParent)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Name(CATBSTR & oNameBSTR) \
{ \
return (ENVTIECALL(CATIADistance,ENVTIETypeLetter,ENVTIELetter)get_Name(oNameBSTR)); \
} \
HRESULT  __stdcall  ENVTIEName::put_Name(const CATBSTR & iNameBSTR) \
{ \
return (ENVTIECALL(CATIADistance,ENVTIETypeLetter,ENVTIELetter)put_Name(iNameBSTR)); \
} \
HRESULT  __stdcall  ENVTIEName::GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj) \
{ \
return (ENVTIECALL(CATIADistance,ENVTIETypeLetter,ENVTIELetter)GetItem(IDName,RealObj)); \
} \


/* Name of the TIE class */
#define class_TIE_CATIADistance(classe)    TIECATIADistance##classe


/* Common methods inside a TIE */
#define common_TIE_CATIADistance(classe) \
 \
 \
/* Static initialization */ \
CATDefineCommonTIEMembers(CATIADistance, classe) \
 \
 \
CATImplementTIEMethods(CATIADistance, classe) \
CATImplementIUnknownMethodsForCATBaseUnknownTIE(CATIADistance, classe, 2) \
CATImplementIDispatchMethodsForCATBaseUnknownTIE(CATIADistance, classe) \
CATImplementCATBaseUnknownMethodsForTIE(CATIADistance, classe) \
 \
HRESULT __stdcall  TIECATIADistance##classe::get_ComputationType(CatDistanceComputationType & oType) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,1,&_Trac2,&oType); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_ComputationType(oType); \
   ExitAfterCall(this,1,_Trac2,&_ret_arg,&oType); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIADistance##classe::put_ComputationType(CatDistanceComputationType iType) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,2,&_Trac2,&iType); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_ComputationType(iType); \
   ExitAfterCall(this,2,_Trac2,&_ret_arg,&iType); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIADistance##classe::get_MeasureType(CatDistanceMeasureType & oType) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,3,&_Trac2,&oType); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_MeasureType(oType); \
   ExitAfterCall(this,3,_Trac2,&_ret_arg,&oType); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIADistance##classe::put_MeasureType(CatDistanceMeasureType iType) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,4,&_Trac2,&iType); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_MeasureType(iType); \
   ExitAfterCall(this,4,_Trac2,&_ret_arg,&iType); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIADistance##classe::get_MinimumDistance(double & oMinimumDistance) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,5,&_Trac2,&oMinimumDistance); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_MinimumDistance(oMinimumDistance); \
   ExitAfterCall(this,5,_Trac2,&_ret_arg,&oMinimumDistance); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIADistance##classe::put_MinimumDistance(double iMinimumDistance) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,6,&_Trac2,&iMinimumDistance); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_MinimumDistance(iMinimumDistance); \
   ExitAfterCall(this,6,_Trac2,&_ret_arg,&iMinimumDistance); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIADistance##classe::get_MaximumDistance(double & oMaximumDistance) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,7,&_Trac2,&oMaximumDistance); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_MaximumDistance(oMaximumDistance); \
   ExitAfterCall(this,7,_Trac2,&_ret_arg,&oMaximumDistance); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIADistance##classe::put_MaximumDistance(double iMaximumDistance) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,8,&_Trac2,&iMaximumDistance); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_MaximumDistance(iMaximumDistance); \
   ExitAfterCall(this,8,_Trac2,&_ret_arg,&iMaximumDistance); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIADistance##classe::get_Accuracy(double & oAccuracy) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,9,&_Trac2,&oAccuracy); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Accuracy(oAccuracy); \
   ExitAfterCall(this,9,_Trac2,&_ret_arg,&oAccuracy); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIADistance##classe::put_Accuracy(double iAccuracy) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,10,&_Trac2,&iAccuracy); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_Accuracy(iAccuracy); \
   ExitAfterCall(this,10,_Trac2,&_ret_arg,&iAccuracy); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIADistance##classe::get_FirstGroup(CATIAGroup *& oGroup) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,11,&_Trac2,&oGroup); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_FirstGroup(oGroup); \
   ExitAfterCall(this,11,_Trac2,&_ret_arg,&oGroup); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIADistance##classe::put_FirstGroup(CATIAGroup * iGroup) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,12,&_Trac2,&iGroup); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_FirstGroup(iGroup); \
   ExitAfterCall(this,12,_Trac2,&_ret_arg,&iGroup); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIADistance##classe::get_SecondGroup(CATIAGroup *& oGroup) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,13,&_Trac2,&oGroup); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_SecondGroup(oGroup); \
   ExitAfterCall(this,13,_Trac2,&_ret_arg,&oGroup); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIADistance##classe::put_SecondGroup(CATIAGroup * iGroup) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,14,&_Trac2,&iGroup); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_SecondGroup(iGroup); \
   ExitAfterCall(this,14,_Trac2,&_ret_arg,&iGroup); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIADistance##classe::Compute() \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,15,&_Trac2); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->Compute(); \
   ExitAfterCall(this,15,_Trac2,&_ret_arg); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIADistance##classe::get_IsDefined(CATLONG & oDiagnosis) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,16,&_Trac2,&oDiagnosis); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_IsDefined(oDiagnosis); \
   ExitAfterCall(this,16,_Trac2,&_ret_arg,&oDiagnosis); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIADistance##classe::get_FirstProduct(CATIAProduct *& oProduct) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,17,&_Trac2,&oProduct); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_FirstProduct(oProduct); \
   ExitAfterCall(this,17,_Trac2,&_ret_arg,&oProduct); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIADistance##classe::GetFirstPointCoordinates(CATSafeArrayVariant & oCoordinates) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,18,&_Trac2,&oCoordinates); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetFirstPointCoordinates(oCoordinates); \
   ExitAfterCall(this,18,_Trac2,&_ret_arg,&oCoordinates); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIADistance##classe::get_SecondProduct(CATIAProduct *& oProduct) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,19,&_Trac2,&oProduct); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_SecondProduct(oProduct); \
   ExitAfterCall(this,19,_Trac2,&_ret_arg,&oProduct); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIADistance##classe::GetSecondPointCoordinates(CATSafeArrayVariant & oCoordinates) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,20,&_Trac2,&oCoordinates); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetSecondPointCoordinates(oCoordinates); \
   ExitAfterCall(this,20,_Trac2,&_ret_arg,&oCoordinates); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIADistance##classe::get_Value(double & oValue) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,21,&_Trac2,&oValue); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Value(oValue); \
   ExitAfterCall(this,21,_Trac2,&_ret_arg,&oValue); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIADistance##classe::get_AnnotatedViews(CATIAAnnotatedViews *& oAnnotatedViews) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,22,&_Trac2,&oAnnotatedViews); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_AnnotatedViews(oAnnotatedViews); \
   ExitAfterCall(this,22,_Trac2,&_ret_arg,&oAnnotatedViews); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIADistance##classe::get_Marker3Ds(CATIAMarker3Ds *& oMarker3Ds) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,23,&_Trac2,&oMarker3Ds); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Marker3Ds(oMarker3Ds); \
   ExitAfterCall(this,23,_Trac2,&_ret_arg,&oMarker3Ds); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIADistance##classe::get_Application(CATIAApplication *& oApplication) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,24,&_Trac2,&oApplication); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Application(oApplication); \
   ExitAfterCall(this,24,_Trac2,&_ret_arg,&oApplication); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIADistance##classe::get_Parent(CATBaseDispatch *& oParent) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,25,&_Trac2,&oParent); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Parent(oParent); \
   ExitAfterCall(this,25,_Trac2,&_ret_arg,&oParent); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIADistance##classe::get_Name(CATBSTR & oNameBSTR) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,26,&_Trac2,&oNameBSTR); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Name(oNameBSTR); \
   ExitAfterCall(this,26,_Trac2,&_ret_arg,&oNameBSTR); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIADistance##classe::put_Name(const CATBSTR & iNameBSTR) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,27,&_Trac2,&iNameBSTR); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_Name(iNameBSTR); \
   ExitAfterCall(this,27,_Trac2,&_ret_arg,&iNameBSTR); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIADistance##classe::GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,28,&_Trac2,&IDName,&RealObj); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetItem(IDName,RealObj); \
   ExitAfterCall(this,28,_Trac2,&_ret_arg,&IDName,&RealObj); \
   return(_ret_arg); \
} \



/* Macro used to link an implementation with an interface */
#define TIE_CATIADistance(classe) \
 \
 \
declare_TIE_CATIADistance(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIADistance##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIADistance,"CATIADistance",CATIADistance::MetaObject(),classe::MetaObject(),TIE); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIADistance(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIECreation(CATIADistance, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIADistance##classe(classe::MetaObject(),CATIADistance::MetaObject(),(void *)CreateTIECATIADistance##classe)



/* Macro used to link an implementation with an interface */
/* This TIE is chained on the implementation object */
#define TIEchain_CATIADistance(classe) \
 \
 \
declare_TIE_CATIADistance(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIADistance##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIADistance,"CATIADistance",CATIADistance::MetaObject(),classe::MetaObject(),TIEchain); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIADistance(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIEchainCreation(CATIADistance, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIADistance##classe(classe::MetaObject(),CATIADistance::MetaObject(),(void *)CreateTIECATIADistance##classe)


/* Macro to switch between BOA and TIE at build time */ 
#ifdef CATSYS_BOA_IS_TIE
#define BOA_CATIADistance(classe) TIE_CATIADistance(classe)
#else
#define BOA_CATIADistance(classe) CATImplementBOA(CATIADistance, classe)
#endif

#endif
