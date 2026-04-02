#ifndef __TIE_CATIAAnalysisColorMap
#define __TIE_CATIAAnalysisColorMap

#include <string.h>
#include "CATBaseUnknown.h"
#include "CATMetaClass.h"
#include "CATMacForTie.h"
#include "CATExitJournal.h"
#include "CATIAAnalysisColorMap.h"
#include "JS0DSPA.h"


#ifdef _WINDOWS_SOURCE
#define Exported __declspec(dllexport)
#define Imported __declspec(dllimport)
#else
#define Exported 
#define Imported 
#endif


/* To link an implementation with the interface CATIAAnalysisColorMap */
#define declare_TIE_CATIAAnalysisColorMap(classe) \
 \
 \
class TIECATIAAnalysisColorMap##classe : public CATIAAnalysisColorMap \
{ \
   private: \
      CATDeclareCommonTIEMembers \
   public: \
      CATDeclareTIEMethods(CATIAAnalysisColorMap, classe) \
      CATDeclareIUnknownMethodsForCATBaseUnknownTIE \
      CATDeclareIDispatchMethodsForCATBaseUnknownTIE \
      CATDeclareCATBaseUnknownMethodsForTIE \
      virtual HRESULT __stdcall get_ImposedMaxValue(double & oMaxValue); \
      virtual HRESULT __stdcall put_ImposedMaxValue(double iMaxValue); \
      virtual HRESULT __stdcall get_ImposedMinValue(double & oMinValue); \
      virtual HRESULT __stdcall put_ImposedMinValue(double iMinValue); \
      virtual HRESULT __stdcall get_NbColors(CATLONG & oNbColors); \
      virtual HRESULT __stdcall put_NbColors(CATLONG iNbColors); \
      virtual HRESULT __stdcall get_SmoothMode(CATVariant & oSmoothMode); \
      virtual HRESULT __stdcall put_SmoothMode(const CATVariant & iSmoothMode); \
      virtual HRESULT __stdcall get_DiscreteMode(CATVariant & oDiscreteMode); \
      virtual HRESULT __stdcall put_DiscreteMode(const CATVariant & iDiscreteMode); \
      virtual HRESULT __stdcall get_InverseMode(CATVariant & oInverseMode); \
      virtual HRESULT __stdcall put_InverseMode(const CATVariant & iInverseMode); \
      virtual HRESULT __stdcall get_DistributionMode(SPMDistributionMode & oDistMode); \
      virtual HRESULT __stdcall put_DistributionMode(SPMDistributionMode iDistMode); \
      virtual HRESULT __stdcall GetDistributionValue(CATLONG indexValue, double & oModeValue); \
      virtual HRESULT __stdcall SetDistributionValue(CATLONG indexValue, double iModeValue, const CATVariant & iSmootheningFlag); \
      virtual HRESULT __stdcall Update(); \
      virtual HRESULT  __stdcall get_Application(CATIAApplication *& oApplication); \
      virtual HRESULT  __stdcall get_Parent(CATBaseDispatch *& oParent); \
      virtual HRESULT  __stdcall get_Name(CATBSTR & oNameBSTR); \
      virtual HRESULT  __stdcall put_Name(const CATBSTR & iNameBSTR); \
      virtual HRESULT  __stdcall GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj); \
};



#define ENVTIEdeclare_CATIAAnalysisColorMap(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
virtual HRESULT __stdcall get_ImposedMaxValue(double & oMaxValue); \
virtual HRESULT __stdcall put_ImposedMaxValue(double iMaxValue); \
virtual HRESULT __stdcall get_ImposedMinValue(double & oMinValue); \
virtual HRESULT __stdcall put_ImposedMinValue(double iMinValue); \
virtual HRESULT __stdcall get_NbColors(CATLONG & oNbColors); \
virtual HRESULT __stdcall put_NbColors(CATLONG iNbColors); \
virtual HRESULT __stdcall get_SmoothMode(CATVariant & oSmoothMode); \
virtual HRESULT __stdcall put_SmoothMode(const CATVariant & iSmoothMode); \
virtual HRESULT __stdcall get_DiscreteMode(CATVariant & oDiscreteMode); \
virtual HRESULT __stdcall put_DiscreteMode(const CATVariant & iDiscreteMode); \
virtual HRESULT __stdcall get_InverseMode(CATVariant & oInverseMode); \
virtual HRESULT __stdcall put_InverseMode(const CATVariant & iInverseMode); \
virtual HRESULT __stdcall get_DistributionMode(SPMDistributionMode & oDistMode); \
virtual HRESULT __stdcall put_DistributionMode(SPMDistributionMode iDistMode); \
virtual HRESULT __stdcall GetDistributionValue(CATLONG indexValue, double & oModeValue); \
virtual HRESULT __stdcall SetDistributionValue(CATLONG indexValue, double iModeValue, const CATVariant & iSmootheningFlag); \
virtual HRESULT __stdcall Update(); \
virtual HRESULT  __stdcall get_Application(CATIAApplication *& oApplication); \
virtual HRESULT  __stdcall get_Parent(CATBaseDispatch *& oParent); \
virtual HRESULT  __stdcall get_Name(CATBSTR & oNameBSTR); \
virtual HRESULT  __stdcall put_Name(const CATBSTR & iNameBSTR); \
virtual HRESULT  __stdcall GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj); \


#define ENVTIEdefine_CATIAAnalysisColorMap(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
HRESULT __stdcall  ENVTIEName::get_ImposedMaxValue(double & oMaxValue) \
{ \
return (ENVTIECALL(CATIAAnalysisColorMap,ENVTIETypeLetter,ENVTIELetter)get_ImposedMaxValue(oMaxValue)); \
} \
HRESULT __stdcall  ENVTIEName::put_ImposedMaxValue(double iMaxValue) \
{ \
return (ENVTIECALL(CATIAAnalysisColorMap,ENVTIETypeLetter,ENVTIELetter)put_ImposedMaxValue(iMaxValue)); \
} \
HRESULT __stdcall  ENVTIEName::get_ImposedMinValue(double & oMinValue) \
{ \
return (ENVTIECALL(CATIAAnalysisColorMap,ENVTIETypeLetter,ENVTIELetter)get_ImposedMinValue(oMinValue)); \
} \
HRESULT __stdcall  ENVTIEName::put_ImposedMinValue(double iMinValue) \
{ \
return (ENVTIECALL(CATIAAnalysisColorMap,ENVTIETypeLetter,ENVTIELetter)put_ImposedMinValue(iMinValue)); \
} \
HRESULT __stdcall  ENVTIEName::get_NbColors(CATLONG & oNbColors) \
{ \
return (ENVTIECALL(CATIAAnalysisColorMap,ENVTIETypeLetter,ENVTIELetter)get_NbColors(oNbColors)); \
} \
HRESULT __stdcall  ENVTIEName::put_NbColors(CATLONG iNbColors) \
{ \
return (ENVTIECALL(CATIAAnalysisColorMap,ENVTIETypeLetter,ENVTIELetter)put_NbColors(iNbColors)); \
} \
HRESULT __stdcall  ENVTIEName::get_SmoothMode(CATVariant & oSmoothMode) \
{ \
return (ENVTIECALL(CATIAAnalysisColorMap,ENVTIETypeLetter,ENVTIELetter)get_SmoothMode(oSmoothMode)); \
} \
HRESULT __stdcall  ENVTIEName::put_SmoothMode(const CATVariant & iSmoothMode) \
{ \
return (ENVTIECALL(CATIAAnalysisColorMap,ENVTIETypeLetter,ENVTIELetter)put_SmoothMode(iSmoothMode)); \
} \
HRESULT __stdcall  ENVTIEName::get_DiscreteMode(CATVariant & oDiscreteMode) \
{ \
return (ENVTIECALL(CATIAAnalysisColorMap,ENVTIETypeLetter,ENVTIELetter)get_DiscreteMode(oDiscreteMode)); \
} \
HRESULT __stdcall  ENVTIEName::put_DiscreteMode(const CATVariant & iDiscreteMode) \
{ \
return (ENVTIECALL(CATIAAnalysisColorMap,ENVTIETypeLetter,ENVTIELetter)put_DiscreteMode(iDiscreteMode)); \
} \
HRESULT __stdcall  ENVTIEName::get_InverseMode(CATVariant & oInverseMode) \
{ \
return (ENVTIECALL(CATIAAnalysisColorMap,ENVTIETypeLetter,ENVTIELetter)get_InverseMode(oInverseMode)); \
} \
HRESULT __stdcall  ENVTIEName::put_InverseMode(const CATVariant & iInverseMode) \
{ \
return (ENVTIECALL(CATIAAnalysisColorMap,ENVTIETypeLetter,ENVTIELetter)put_InverseMode(iInverseMode)); \
} \
HRESULT __stdcall  ENVTIEName::get_DistributionMode(SPMDistributionMode & oDistMode) \
{ \
return (ENVTIECALL(CATIAAnalysisColorMap,ENVTIETypeLetter,ENVTIELetter)get_DistributionMode(oDistMode)); \
} \
HRESULT __stdcall  ENVTIEName::put_DistributionMode(SPMDistributionMode iDistMode) \
{ \
return (ENVTIECALL(CATIAAnalysisColorMap,ENVTIETypeLetter,ENVTIELetter)put_DistributionMode(iDistMode)); \
} \
HRESULT __stdcall  ENVTIEName::GetDistributionValue(CATLONG indexValue, double & oModeValue) \
{ \
return (ENVTIECALL(CATIAAnalysisColorMap,ENVTIETypeLetter,ENVTIELetter)GetDistributionValue(indexValue,oModeValue)); \
} \
HRESULT __stdcall  ENVTIEName::SetDistributionValue(CATLONG indexValue, double iModeValue, const CATVariant & iSmootheningFlag) \
{ \
return (ENVTIECALL(CATIAAnalysisColorMap,ENVTIETypeLetter,ENVTIELetter)SetDistributionValue(indexValue,iModeValue,iSmootheningFlag)); \
} \
HRESULT __stdcall  ENVTIEName::Update() \
{ \
return (ENVTIECALL(CATIAAnalysisColorMap,ENVTIETypeLetter,ENVTIELetter)Update()); \
} \
HRESULT  __stdcall  ENVTIEName::get_Application(CATIAApplication *& oApplication) \
{ \
return (ENVTIECALL(CATIAAnalysisColorMap,ENVTIETypeLetter,ENVTIELetter)get_Application(oApplication)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Parent(CATBaseDispatch *& oParent) \
{ \
return (ENVTIECALL(CATIAAnalysisColorMap,ENVTIETypeLetter,ENVTIELetter)get_Parent(oParent)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Name(CATBSTR & oNameBSTR) \
{ \
return (ENVTIECALL(CATIAAnalysisColorMap,ENVTIETypeLetter,ENVTIELetter)get_Name(oNameBSTR)); \
} \
HRESULT  __stdcall  ENVTIEName::put_Name(const CATBSTR & iNameBSTR) \
{ \
return (ENVTIECALL(CATIAAnalysisColorMap,ENVTIETypeLetter,ENVTIELetter)put_Name(iNameBSTR)); \
} \
HRESULT  __stdcall  ENVTIEName::GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj) \
{ \
return (ENVTIECALL(CATIAAnalysisColorMap,ENVTIETypeLetter,ENVTIELetter)GetItem(IDName,RealObj)); \
} \


/* Name of the TIE class */
#define class_TIE_CATIAAnalysisColorMap(classe)    TIECATIAAnalysisColorMap##classe


/* Common methods inside a TIE */
#define common_TIE_CATIAAnalysisColorMap(classe) \
 \
 \
/* Static initialization */ \
CATDefineCommonTIEMembers(CATIAAnalysisColorMap, classe) \
 \
 \
CATImplementTIEMethods(CATIAAnalysisColorMap, classe) \
CATImplementIUnknownMethodsForCATBaseUnknownTIE(CATIAAnalysisColorMap, classe, 2) \
CATImplementIDispatchMethodsForCATBaseUnknownTIE(CATIAAnalysisColorMap, classe) \
CATImplementCATBaseUnknownMethodsForTIE(CATIAAnalysisColorMap, classe) \
 \
HRESULT __stdcall  TIECATIAAnalysisColorMap##classe::get_ImposedMaxValue(double & oMaxValue) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,1,&_Trac2,&oMaxValue); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_ImposedMaxValue(oMaxValue); \
   ExitAfterCall(this,1,_Trac2,&_ret_arg,&oMaxValue); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAAnalysisColorMap##classe::put_ImposedMaxValue(double iMaxValue) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,2,&_Trac2,&iMaxValue); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_ImposedMaxValue(iMaxValue); \
   ExitAfterCall(this,2,_Trac2,&_ret_arg,&iMaxValue); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAAnalysisColorMap##classe::get_ImposedMinValue(double & oMinValue) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,3,&_Trac2,&oMinValue); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_ImposedMinValue(oMinValue); \
   ExitAfterCall(this,3,_Trac2,&_ret_arg,&oMinValue); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAAnalysisColorMap##classe::put_ImposedMinValue(double iMinValue) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,4,&_Trac2,&iMinValue); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_ImposedMinValue(iMinValue); \
   ExitAfterCall(this,4,_Trac2,&_ret_arg,&iMinValue); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAAnalysisColorMap##classe::get_NbColors(CATLONG & oNbColors) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,5,&_Trac2,&oNbColors); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_NbColors(oNbColors); \
   ExitAfterCall(this,5,_Trac2,&_ret_arg,&oNbColors); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAAnalysisColorMap##classe::put_NbColors(CATLONG iNbColors) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,6,&_Trac2,&iNbColors); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_NbColors(iNbColors); \
   ExitAfterCall(this,6,_Trac2,&_ret_arg,&iNbColors); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAAnalysisColorMap##classe::get_SmoothMode(CATVariant & oSmoothMode) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,7,&_Trac2,&oSmoothMode); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_SmoothMode(oSmoothMode); \
   ExitAfterCall(this,7,_Trac2,&_ret_arg,&oSmoothMode); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAAnalysisColorMap##classe::put_SmoothMode(const CATVariant & iSmoothMode) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,8,&_Trac2,&iSmoothMode); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_SmoothMode(iSmoothMode); \
   ExitAfterCall(this,8,_Trac2,&_ret_arg,&iSmoothMode); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAAnalysisColorMap##classe::get_DiscreteMode(CATVariant & oDiscreteMode) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,9,&_Trac2,&oDiscreteMode); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_DiscreteMode(oDiscreteMode); \
   ExitAfterCall(this,9,_Trac2,&_ret_arg,&oDiscreteMode); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAAnalysisColorMap##classe::put_DiscreteMode(const CATVariant & iDiscreteMode) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,10,&_Trac2,&iDiscreteMode); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_DiscreteMode(iDiscreteMode); \
   ExitAfterCall(this,10,_Trac2,&_ret_arg,&iDiscreteMode); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAAnalysisColorMap##classe::get_InverseMode(CATVariant & oInverseMode) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,11,&_Trac2,&oInverseMode); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_InverseMode(oInverseMode); \
   ExitAfterCall(this,11,_Trac2,&_ret_arg,&oInverseMode); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAAnalysisColorMap##classe::put_InverseMode(const CATVariant & iInverseMode) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,12,&_Trac2,&iInverseMode); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_InverseMode(iInverseMode); \
   ExitAfterCall(this,12,_Trac2,&_ret_arg,&iInverseMode); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAAnalysisColorMap##classe::get_DistributionMode(SPMDistributionMode & oDistMode) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,13,&_Trac2,&oDistMode); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_DistributionMode(oDistMode); \
   ExitAfterCall(this,13,_Trac2,&_ret_arg,&oDistMode); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAAnalysisColorMap##classe::put_DistributionMode(SPMDistributionMode iDistMode) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,14,&_Trac2,&iDistMode); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_DistributionMode(iDistMode); \
   ExitAfterCall(this,14,_Trac2,&_ret_arg,&iDistMode); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAAnalysisColorMap##classe::GetDistributionValue(CATLONG indexValue, double & oModeValue) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,15,&_Trac2,&indexValue,&oModeValue); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetDistributionValue(indexValue,oModeValue); \
   ExitAfterCall(this,15,_Trac2,&_ret_arg,&indexValue,&oModeValue); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAAnalysisColorMap##classe::SetDistributionValue(CATLONG indexValue, double iModeValue, const CATVariant & iSmootheningFlag) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,16,&_Trac2,&indexValue,&iModeValue,&iSmootheningFlag); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetDistributionValue(indexValue,iModeValue,iSmootheningFlag); \
   ExitAfterCall(this,16,_Trac2,&_ret_arg,&indexValue,&iModeValue,&iSmootheningFlag); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAAnalysisColorMap##classe::Update() \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,17,&_Trac2); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->Update(); \
   ExitAfterCall(this,17,_Trac2,&_ret_arg); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAAnalysisColorMap##classe::get_Application(CATIAApplication *& oApplication) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,18,&_Trac2,&oApplication); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Application(oApplication); \
   ExitAfterCall(this,18,_Trac2,&_ret_arg,&oApplication); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAAnalysisColorMap##classe::get_Parent(CATBaseDispatch *& oParent) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,19,&_Trac2,&oParent); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Parent(oParent); \
   ExitAfterCall(this,19,_Trac2,&_ret_arg,&oParent); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAAnalysisColorMap##classe::get_Name(CATBSTR & oNameBSTR) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,20,&_Trac2,&oNameBSTR); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Name(oNameBSTR); \
   ExitAfterCall(this,20,_Trac2,&_ret_arg,&oNameBSTR); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAAnalysisColorMap##classe::put_Name(const CATBSTR & iNameBSTR) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,21,&_Trac2,&iNameBSTR); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_Name(iNameBSTR); \
   ExitAfterCall(this,21,_Trac2,&_ret_arg,&iNameBSTR); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAAnalysisColorMap##classe::GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,22,&_Trac2,&IDName,&RealObj); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetItem(IDName,RealObj); \
   ExitAfterCall(this,22,_Trac2,&_ret_arg,&IDName,&RealObj); \
   return(_ret_arg); \
} \



/* Macro used to link an implementation with an interface */
#define TIE_CATIAAnalysisColorMap(classe) \
 \
 \
declare_TIE_CATIAAnalysisColorMap(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIAAnalysisColorMap##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIAAnalysisColorMap,"CATIAAnalysisColorMap",CATIAAnalysisColorMap::MetaObject(),classe::MetaObject(),TIE); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIAAnalysisColorMap(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIECreation(CATIAAnalysisColorMap, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIAAnalysisColorMap##classe(classe::MetaObject(),CATIAAnalysisColorMap::MetaObject(),(void *)CreateTIECATIAAnalysisColorMap##classe)



/* Macro used to link an implementation with an interface */
/* This TIE is chained on the implementation object */
#define TIEchain_CATIAAnalysisColorMap(classe) \
 \
 \
declare_TIE_CATIAAnalysisColorMap(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIAAnalysisColorMap##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIAAnalysisColorMap,"CATIAAnalysisColorMap",CATIAAnalysisColorMap::MetaObject(),classe::MetaObject(),TIEchain); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIAAnalysisColorMap(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIEchainCreation(CATIAAnalysisColorMap, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIAAnalysisColorMap##classe(classe::MetaObject(),CATIAAnalysisColorMap::MetaObject(),(void *)CreateTIECATIAAnalysisColorMap##classe)


/* Macro to switch between BOA and TIE at build time */ 
#ifdef CATSYS_BOA_IS_TIE
#define BOA_CATIAAnalysisColorMap(classe) TIE_CATIAAnalysisColorMap(classe)
#else
#define BOA_CATIAAnalysisColorMap(classe) CATImplementBOA(CATIAAnalysisColorMap, classe)
#endif

#endif
