#ifndef __TIE_CATIAHybridShapeSplit
#define __TIE_CATIAHybridShapeSplit

#include <string.h>
#include "CATBaseUnknown.h"
#include "CATMetaClass.h"
#include "CATMacForTie.h"
#include "CATExitJournal.h"
#include "CATIAHybridShapeSplit.h"
#include "JS0DSPA.h"


#ifdef _WINDOWS_SOURCE
#define Exported __declspec(dllexport)
#define Imported __declspec(dllimport)
#else
#define Exported 
#define Imported 
#endif


/* To link an implementation with the interface CATIAHybridShapeSplit */
#define declare_TIE_CATIAHybridShapeSplit(classe) \
 \
 \
class TIECATIAHybridShapeSplit##classe : public CATIAHybridShapeSplit \
{ \
   private: \
      CATDeclareCommonTIEMembers \
   public: \
      CATDeclareTIEMethods(CATIAHybridShapeSplit, classe) \
      CATDeclareIUnknownMethodsForCATBaseUnknownTIE \
      CATDeclareIDispatchMethodsForCATBaseUnknownTIE \
      CATDeclareCATBaseUnknownMethodsForTIE \
      virtual HRESULT __stdcall get_ElemToCut(CATIAReference *& oElem); \
      virtual HRESULT __stdcall put_ElemToCut(CATIAReference * iElem); \
      virtual HRESULT __stdcall get_CuttingElem(CATIAReference *& oElem); \
      virtual HRESULT __stdcall put_CuttingElem(CATIAReference * iElem); \
      virtual HRESULT __stdcall get_Orientation(CATLONG & oOrientation); \
      virtual HRESULT __stdcall put_Orientation(CATLONG iOrientation); \
      virtual HRESULT __stdcall InvertOrientation(); \
      virtual HRESULT __stdcall get_Support(CATIAReference *& oElem); \
      virtual HRESULT __stdcall put_Support(CATIAReference * iElem); \
      virtual HRESULT __stdcall get_VolumeResult(CATLONG & oType); \
      virtual HRESULT __stdcall put_VolumeResult(CATLONG iType); \
      virtual HRESULT __stdcall AddCuttingElem(CATIAReference * iElem, CATLONG iOrientation); \
      virtual HRESULT __stdcall AddElementToKeep(CATIAReference * iElement); \
      virtual HRESULT __stdcall AddElementToRemove(CATIAReference * iElement); \
      virtual HRESULT __stdcall GetIntersection(CATLONG iRank, CATIAReference *& oElem); \
      virtual HRESULT __stdcall GetKeptElem(CATLONG iRank, CATIAReference *& oElem); \
      virtual HRESULT __stdcall GetCuttingElem(CATLONG iRank, CATIAReference *& oElem); \
      virtual HRESULT __stdcall GetNbCuttingElem(CATLONG & oNbCuttingElem); \
      virtual HRESULT __stdcall GetNbElementsToKeep(CATLONG & oNbElementsToKeep); \
      virtual HRESULT __stdcall GetNbElementsToRemove(CATLONG & oNbElementsToRemove); \
      virtual HRESULT __stdcall GetOtherSide(CATIAReference *& oElem); \
      virtual HRESULT __stdcall GetRemovedElem(CATLONG iRank, CATIAReference *& oElem); \
      virtual HRESULT __stdcall RemoveCuttingElem(CATIAReference * iElem); \
      virtual HRESULT __stdcall RemoveElementToKeep(CATLONG iRank); \
      virtual HRESULT __stdcall RemoveElementToRemove(CATLONG iRank); \
      virtual HRESULT __stdcall GetOrientation(CATLONG iRank, CATLONG & oOrientation); \
      virtual HRESULT __stdcall SetOrientation(CATLONG iRank, CATLONG iOrientation); \
      virtual HRESULT __stdcall get_AutomaticExtrapolationMode(CAT_VARIANT_BOOL & oMode); \
      virtual HRESULT __stdcall put_AutomaticExtrapolationMode(CAT_VARIANT_BOOL iMode); \
      virtual HRESULT __stdcall get_ExtrapolationType(CATLONG & oMode); \
      virtual HRESULT __stdcall put_ExtrapolationType(CATLONG iMode); \
      virtual HRESULT __stdcall get_BothSidesMode(CAT_VARIANT_BOOL & oMode); \
      virtual HRESULT __stdcall put_BothSidesMode(CAT_VARIANT_BOOL iMode); \
      virtual HRESULT __stdcall get_IntersectionComputation(CAT_VARIANT_BOOL & oMode); \
      virtual HRESULT __stdcall put_IntersectionComputation(CAT_VARIANT_BOOL iMode); \
      virtual HRESULT __stdcall Compute(); \
      virtual HRESULT __stdcall AppendHybridShape(CATIAHybridShape * iHybridShape); \
      virtual HRESULT __stdcall get_Thickness(CATIAHybridShape *& oThickness); \
      virtual HRESULT  __stdcall get_Application(CATIAApplication *& oApplication); \
      virtual HRESULT  __stdcall get_Parent(CATBaseDispatch *& oParent); \
      virtual HRESULT  __stdcall get_Name(CATBSTR & oNameBSTR); \
      virtual HRESULT  __stdcall put_Name(const CATBSTR & iNameBSTR); \
      virtual HRESULT  __stdcall GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj); \
};



#define ENVTIEdeclare_CATIAHybridShapeSplit(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
virtual HRESULT __stdcall get_ElemToCut(CATIAReference *& oElem); \
virtual HRESULT __stdcall put_ElemToCut(CATIAReference * iElem); \
virtual HRESULT __stdcall get_CuttingElem(CATIAReference *& oElem); \
virtual HRESULT __stdcall put_CuttingElem(CATIAReference * iElem); \
virtual HRESULT __stdcall get_Orientation(CATLONG & oOrientation); \
virtual HRESULT __stdcall put_Orientation(CATLONG iOrientation); \
virtual HRESULT __stdcall InvertOrientation(); \
virtual HRESULT __stdcall get_Support(CATIAReference *& oElem); \
virtual HRESULT __stdcall put_Support(CATIAReference * iElem); \
virtual HRESULT __stdcall get_VolumeResult(CATLONG & oType); \
virtual HRESULT __stdcall put_VolumeResult(CATLONG iType); \
virtual HRESULT __stdcall AddCuttingElem(CATIAReference * iElem, CATLONG iOrientation); \
virtual HRESULT __stdcall AddElementToKeep(CATIAReference * iElement); \
virtual HRESULT __stdcall AddElementToRemove(CATIAReference * iElement); \
virtual HRESULT __stdcall GetIntersection(CATLONG iRank, CATIAReference *& oElem); \
virtual HRESULT __stdcall GetKeptElem(CATLONG iRank, CATIAReference *& oElem); \
virtual HRESULT __stdcall GetCuttingElem(CATLONG iRank, CATIAReference *& oElem); \
virtual HRESULT __stdcall GetNbCuttingElem(CATLONG & oNbCuttingElem); \
virtual HRESULT __stdcall GetNbElementsToKeep(CATLONG & oNbElementsToKeep); \
virtual HRESULT __stdcall GetNbElementsToRemove(CATLONG & oNbElementsToRemove); \
virtual HRESULT __stdcall GetOtherSide(CATIAReference *& oElem); \
virtual HRESULT __stdcall GetRemovedElem(CATLONG iRank, CATIAReference *& oElem); \
virtual HRESULT __stdcall RemoveCuttingElem(CATIAReference * iElem); \
virtual HRESULT __stdcall RemoveElementToKeep(CATLONG iRank); \
virtual HRESULT __stdcall RemoveElementToRemove(CATLONG iRank); \
virtual HRESULT __stdcall GetOrientation(CATLONG iRank, CATLONG & oOrientation); \
virtual HRESULT __stdcall SetOrientation(CATLONG iRank, CATLONG iOrientation); \
virtual HRESULT __stdcall get_AutomaticExtrapolationMode(CAT_VARIANT_BOOL & oMode); \
virtual HRESULT __stdcall put_AutomaticExtrapolationMode(CAT_VARIANT_BOOL iMode); \
virtual HRESULT __stdcall get_ExtrapolationType(CATLONG & oMode); \
virtual HRESULT __stdcall put_ExtrapolationType(CATLONG iMode); \
virtual HRESULT __stdcall get_BothSidesMode(CAT_VARIANT_BOOL & oMode); \
virtual HRESULT __stdcall put_BothSidesMode(CAT_VARIANT_BOOL iMode); \
virtual HRESULT __stdcall get_IntersectionComputation(CAT_VARIANT_BOOL & oMode); \
virtual HRESULT __stdcall put_IntersectionComputation(CAT_VARIANT_BOOL iMode); \
virtual HRESULT __stdcall Compute(); \
virtual HRESULT __stdcall AppendHybridShape(CATIAHybridShape * iHybridShape); \
virtual HRESULT __stdcall get_Thickness(CATIAHybridShape *& oThickness); \
virtual HRESULT  __stdcall get_Application(CATIAApplication *& oApplication); \
virtual HRESULT  __stdcall get_Parent(CATBaseDispatch *& oParent); \
virtual HRESULT  __stdcall get_Name(CATBSTR & oNameBSTR); \
virtual HRESULT  __stdcall put_Name(const CATBSTR & iNameBSTR); \
virtual HRESULT  __stdcall GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj); \


#define ENVTIEdefine_CATIAHybridShapeSplit(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
HRESULT __stdcall  ENVTIEName::get_ElemToCut(CATIAReference *& oElem) \
{ \
return (ENVTIECALL(CATIAHybridShapeSplit,ENVTIETypeLetter,ENVTIELetter)get_ElemToCut(oElem)); \
} \
HRESULT __stdcall  ENVTIEName::put_ElemToCut(CATIAReference * iElem) \
{ \
return (ENVTIECALL(CATIAHybridShapeSplit,ENVTIETypeLetter,ENVTIELetter)put_ElemToCut(iElem)); \
} \
HRESULT __stdcall  ENVTIEName::get_CuttingElem(CATIAReference *& oElem) \
{ \
return (ENVTIECALL(CATIAHybridShapeSplit,ENVTIETypeLetter,ENVTIELetter)get_CuttingElem(oElem)); \
} \
HRESULT __stdcall  ENVTIEName::put_CuttingElem(CATIAReference * iElem) \
{ \
return (ENVTIECALL(CATIAHybridShapeSplit,ENVTIETypeLetter,ENVTIELetter)put_CuttingElem(iElem)); \
} \
HRESULT __stdcall  ENVTIEName::get_Orientation(CATLONG & oOrientation) \
{ \
return (ENVTIECALL(CATIAHybridShapeSplit,ENVTIETypeLetter,ENVTIELetter)get_Orientation(oOrientation)); \
} \
HRESULT __stdcall  ENVTIEName::put_Orientation(CATLONG iOrientation) \
{ \
return (ENVTIECALL(CATIAHybridShapeSplit,ENVTIETypeLetter,ENVTIELetter)put_Orientation(iOrientation)); \
} \
HRESULT __stdcall  ENVTIEName::InvertOrientation() \
{ \
return (ENVTIECALL(CATIAHybridShapeSplit,ENVTIETypeLetter,ENVTIELetter)InvertOrientation()); \
} \
HRESULT __stdcall  ENVTIEName::get_Support(CATIAReference *& oElem) \
{ \
return (ENVTIECALL(CATIAHybridShapeSplit,ENVTIETypeLetter,ENVTIELetter)get_Support(oElem)); \
} \
HRESULT __stdcall  ENVTIEName::put_Support(CATIAReference * iElem) \
{ \
return (ENVTIECALL(CATIAHybridShapeSplit,ENVTIETypeLetter,ENVTIELetter)put_Support(iElem)); \
} \
HRESULT __stdcall  ENVTIEName::get_VolumeResult(CATLONG & oType) \
{ \
return (ENVTIECALL(CATIAHybridShapeSplit,ENVTIETypeLetter,ENVTIELetter)get_VolumeResult(oType)); \
} \
HRESULT __stdcall  ENVTIEName::put_VolumeResult(CATLONG iType) \
{ \
return (ENVTIECALL(CATIAHybridShapeSplit,ENVTIETypeLetter,ENVTIELetter)put_VolumeResult(iType)); \
} \
HRESULT __stdcall  ENVTIEName::AddCuttingElem(CATIAReference * iElem, CATLONG iOrientation) \
{ \
return (ENVTIECALL(CATIAHybridShapeSplit,ENVTIETypeLetter,ENVTIELetter)AddCuttingElem(iElem,iOrientation)); \
} \
HRESULT __stdcall  ENVTIEName::AddElementToKeep(CATIAReference * iElement) \
{ \
return (ENVTIECALL(CATIAHybridShapeSplit,ENVTIETypeLetter,ENVTIELetter)AddElementToKeep(iElement)); \
} \
HRESULT __stdcall  ENVTIEName::AddElementToRemove(CATIAReference * iElement) \
{ \
return (ENVTIECALL(CATIAHybridShapeSplit,ENVTIETypeLetter,ENVTIELetter)AddElementToRemove(iElement)); \
} \
HRESULT __stdcall  ENVTIEName::GetIntersection(CATLONG iRank, CATIAReference *& oElem) \
{ \
return (ENVTIECALL(CATIAHybridShapeSplit,ENVTIETypeLetter,ENVTIELetter)GetIntersection(iRank,oElem)); \
} \
HRESULT __stdcall  ENVTIEName::GetKeptElem(CATLONG iRank, CATIAReference *& oElem) \
{ \
return (ENVTIECALL(CATIAHybridShapeSplit,ENVTIETypeLetter,ENVTIELetter)GetKeptElem(iRank,oElem)); \
} \
HRESULT __stdcall  ENVTIEName::GetCuttingElem(CATLONG iRank, CATIAReference *& oElem) \
{ \
return (ENVTIECALL(CATIAHybridShapeSplit,ENVTIETypeLetter,ENVTIELetter)GetCuttingElem(iRank,oElem)); \
} \
HRESULT __stdcall  ENVTIEName::GetNbCuttingElem(CATLONG & oNbCuttingElem) \
{ \
return (ENVTIECALL(CATIAHybridShapeSplit,ENVTIETypeLetter,ENVTIELetter)GetNbCuttingElem(oNbCuttingElem)); \
} \
HRESULT __stdcall  ENVTIEName::GetNbElementsToKeep(CATLONG & oNbElementsToKeep) \
{ \
return (ENVTIECALL(CATIAHybridShapeSplit,ENVTIETypeLetter,ENVTIELetter)GetNbElementsToKeep(oNbElementsToKeep)); \
} \
HRESULT __stdcall  ENVTIEName::GetNbElementsToRemove(CATLONG & oNbElementsToRemove) \
{ \
return (ENVTIECALL(CATIAHybridShapeSplit,ENVTIETypeLetter,ENVTIELetter)GetNbElementsToRemove(oNbElementsToRemove)); \
} \
HRESULT __stdcall  ENVTIEName::GetOtherSide(CATIAReference *& oElem) \
{ \
return (ENVTIECALL(CATIAHybridShapeSplit,ENVTIETypeLetter,ENVTIELetter)GetOtherSide(oElem)); \
} \
HRESULT __stdcall  ENVTIEName::GetRemovedElem(CATLONG iRank, CATIAReference *& oElem) \
{ \
return (ENVTIECALL(CATIAHybridShapeSplit,ENVTIETypeLetter,ENVTIELetter)GetRemovedElem(iRank,oElem)); \
} \
HRESULT __stdcall  ENVTIEName::RemoveCuttingElem(CATIAReference * iElem) \
{ \
return (ENVTIECALL(CATIAHybridShapeSplit,ENVTIETypeLetter,ENVTIELetter)RemoveCuttingElem(iElem)); \
} \
HRESULT __stdcall  ENVTIEName::RemoveElementToKeep(CATLONG iRank) \
{ \
return (ENVTIECALL(CATIAHybridShapeSplit,ENVTIETypeLetter,ENVTIELetter)RemoveElementToKeep(iRank)); \
} \
HRESULT __stdcall  ENVTIEName::RemoveElementToRemove(CATLONG iRank) \
{ \
return (ENVTIECALL(CATIAHybridShapeSplit,ENVTIETypeLetter,ENVTIELetter)RemoveElementToRemove(iRank)); \
} \
HRESULT __stdcall  ENVTIEName::GetOrientation(CATLONG iRank, CATLONG & oOrientation) \
{ \
return (ENVTIECALL(CATIAHybridShapeSplit,ENVTIETypeLetter,ENVTIELetter)GetOrientation(iRank,oOrientation)); \
} \
HRESULT __stdcall  ENVTIEName::SetOrientation(CATLONG iRank, CATLONG iOrientation) \
{ \
return (ENVTIECALL(CATIAHybridShapeSplit,ENVTIETypeLetter,ENVTIELetter)SetOrientation(iRank,iOrientation)); \
} \
HRESULT __stdcall  ENVTIEName::get_AutomaticExtrapolationMode(CAT_VARIANT_BOOL & oMode) \
{ \
return (ENVTIECALL(CATIAHybridShapeSplit,ENVTIETypeLetter,ENVTIELetter)get_AutomaticExtrapolationMode(oMode)); \
} \
HRESULT __stdcall  ENVTIEName::put_AutomaticExtrapolationMode(CAT_VARIANT_BOOL iMode) \
{ \
return (ENVTIECALL(CATIAHybridShapeSplit,ENVTIETypeLetter,ENVTIELetter)put_AutomaticExtrapolationMode(iMode)); \
} \
HRESULT __stdcall  ENVTIEName::get_ExtrapolationType(CATLONG & oMode) \
{ \
return (ENVTIECALL(CATIAHybridShapeSplit,ENVTIETypeLetter,ENVTIELetter)get_ExtrapolationType(oMode)); \
} \
HRESULT __stdcall  ENVTIEName::put_ExtrapolationType(CATLONG iMode) \
{ \
return (ENVTIECALL(CATIAHybridShapeSplit,ENVTIETypeLetter,ENVTIELetter)put_ExtrapolationType(iMode)); \
} \
HRESULT __stdcall  ENVTIEName::get_BothSidesMode(CAT_VARIANT_BOOL & oMode) \
{ \
return (ENVTIECALL(CATIAHybridShapeSplit,ENVTIETypeLetter,ENVTIELetter)get_BothSidesMode(oMode)); \
} \
HRESULT __stdcall  ENVTIEName::put_BothSidesMode(CAT_VARIANT_BOOL iMode) \
{ \
return (ENVTIECALL(CATIAHybridShapeSplit,ENVTIETypeLetter,ENVTIELetter)put_BothSidesMode(iMode)); \
} \
HRESULT __stdcall  ENVTIEName::get_IntersectionComputation(CAT_VARIANT_BOOL & oMode) \
{ \
return (ENVTIECALL(CATIAHybridShapeSplit,ENVTIETypeLetter,ENVTIELetter)get_IntersectionComputation(oMode)); \
} \
HRESULT __stdcall  ENVTIEName::put_IntersectionComputation(CAT_VARIANT_BOOL iMode) \
{ \
return (ENVTIECALL(CATIAHybridShapeSplit,ENVTIETypeLetter,ENVTIELetter)put_IntersectionComputation(iMode)); \
} \
HRESULT __stdcall  ENVTIEName::Compute() \
{ \
return (ENVTIECALL(CATIAHybridShapeSplit,ENVTIETypeLetter,ENVTIELetter)Compute()); \
} \
HRESULT __stdcall  ENVTIEName::AppendHybridShape(CATIAHybridShape * iHybridShape) \
{ \
return (ENVTIECALL(CATIAHybridShapeSplit,ENVTIETypeLetter,ENVTIELetter)AppendHybridShape(iHybridShape)); \
} \
HRESULT __stdcall  ENVTIEName::get_Thickness(CATIAHybridShape *& oThickness) \
{ \
return (ENVTIECALL(CATIAHybridShapeSplit,ENVTIETypeLetter,ENVTIELetter)get_Thickness(oThickness)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Application(CATIAApplication *& oApplication) \
{ \
return (ENVTIECALL(CATIAHybridShapeSplit,ENVTIETypeLetter,ENVTIELetter)get_Application(oApplication)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Parent(CATBaseDispatch *& oParent) \
{ \
return (ENVTIECALL(CATIAHybridShapeSplit,ENVTIETypeLetter,ENVTIELetter)get_Parent(oParent)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Name(CATBSTR & oNameBSTR) \
{ \
return (ENVTIECALL(CATIAHybridShapeSplit,ENVTIETypeLetter,ENVTIELetter)get_Name(oNameBSTR)); \
} \
HRESULT  __stdcall  ENVTIEName::put_Name(const CATBSTR & iNameBSTR) \
{ \
return (ENVTIECALL(CATIAHybridShapeSplit,ENVTIETypeLetter,ENVTIELetter)put_Name(iNameBSTR)); \
} \
HRESULT  __stdcall  ENVTIEName::GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj) \
{ \
return (ENVTIECALL(CATIAHybridShapeSplit,ENVTIETypeLetter,ENVTIELetter)GetItem(IDName,RealObj)); \
} \


/* Name of the TIE class */
#define class_TIE_CATIAHybridShapeSplit(classe)    TIECATIAHybridShapeSplit##classe


/* Common methods inside a TIE */
#define common_TIE_CATIAHybridShapeSplit(classe) \
 \
 \
/* Static initialization */ \
CATDefineCommonTIEMembers(CATIAHybridShapeSplit, classe) \
 \
 \
CATImplementTIEMethods(CATIAHybridShapeSplit, classe) \
CATImplementIUnknownMethodsForCATBaseUnknownTIE(CATIAHybridShapeSplit, classe, 2) \
CATImplementIDispatchMethodsForCATBaseUnknownTIE(CATIAHybridShapeSplit, classe) \
CATImplementCATBaseUnknownMethodsForTIE(CATIAHybridShapeSplit, classe) \
 \
HRESULT __stdcall  TIECATIAHybridShapeSplit##classe::get_ElemToCut(CATIAReference *& oElem) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,1,&_Trac2,&oElem); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_ElemToCut(oElem); \
   ExitAfterCall(this,1,_Trac2,&_ret_arg,&oElem); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeSplit##classe::put_ElemToCut(CATIAReference * iElem) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,2,&_Trac2,&iElem); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_ElemToCut(iElem); \
   ExitAfterCall(this,2,_Trac2,&_ret_arg,&iElem); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeSplit##classe::get_CuttingElem(CATIAReference *& oElem) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,3,&_Trac2,&oElem); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_CuttingElem(oElem); \
   ExitAfterCall(this,3,_Trac2,&_ret_arg,&oElem); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeSplit##classe::put_CuttingElem(CATIAReference * iElem) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,4,&_Trac2,&iElem); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_CuttingElem(iElem); \
   ExitAfterCall(this,4,_Trac2,&_ret_arg,&iElem); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeSplit##classe::get_Orientation(CATLONG & oOrientation) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,5,&_Trac2,&oOrientation); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Orientation(oOrientation); \
   ExitAfterCall(this,5,_Trac2,&_ret_arg,&oOrientation); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeSplit##classe::put_Orientation(CATLONG iOrientation) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,6,&_Trac2,&iOrientation); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_Orientation(iOrientation); \
   ExitAfterCall(this,6,_Trac2,&_ret_arg,&iOrientation); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeSplit##classe::InvertOrientation() \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,7,&_Trac2); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->InvertOrientation(); \
   ExitAfterCall(this,7,_Trac2,&_ret_arg); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeSplit##classe::get_Support(CATIAReference *& oElem) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,8,&_Trac2,&oElem); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Support(oElem); \
   ExitAfterCall(this,8,_Trac2,&_ret_arg,&oElem); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeSplit##classe::put_Support(CATIAReference * iElem) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,9,&_Trac2,&iElem); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_Support(iElem); \
   ExitAfterCall(this,9,_Trac2,&_ret_arg,&iElem); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeSplit##classe::get_VolumeResult(CATLONG & oType) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,10,&_Trac2,&oType); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_VolumeResult(oType); \
   ExitAfterCall(this,10,_Trac2,&_ret_arg,&oType); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeSplit##classe::put_VolumeResult(CATLONG iType) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,11,&_Trac2,&iType); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_VolumeResult(iType); \
   ExitAfterCall(this,11,_Trac2,&_ret_arg,&iType); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeSplit##classe::AddCuttingElem(CATIAReference * iElem, CATLONG iOrientation) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,12,&_Trac2,&iElem,&iOrientation); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->AddCuttingElem(iElem,iOrientation); \
   ExitAfterCall(this,12,_Trac2,&_ret_arg,&iElem,&iOrientation); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeSplit##classe::AddElementToKeep(CATIAReference * iElement) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,13,&_Trac2,&iElement); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->AddElementToKeep(iElement); \
   ExitAfterCall(this,13,_Trac2,&_ret_arg,&iElement); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeSplit##classe::AddElementToRemove(CATIAReference * iElement) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,14,&_Trac2,&iElement); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->AddElementToRemove(iElement); \
   ExitAfterCall(this,14,_Trac2,&_ret_arg,&iElement); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeSplit##classe::GetIntersection(CATLONG iRank, CATIAReference *& oElem) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,15,&_Trac2,&iRank,&oElem); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetIntersection(iRank,oElem); \
   ExitAfterCall(this,15,_Trac2,&_ret_arg,&iRank,&oElem); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeSplit##classe::GetKeptElem(CATLONG iRank, CATIAReference *& oElem) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,16,&_Trac2,&iRank,&oElem); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetKeptElem(iRank,oElem); \
   ExitAfterCall(this,16,_Trac2,&_ret_arg,&iRank,&oElem); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeSplit##classe::GetCuttingElem(CATLONG iRank, CATIAReference *& oElem) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,17,&_Trac2,&iRank,&oElem); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetCuttingElem(iRank,oElem); \
   ExitAfterCall(this,17,_Trac2,&_ret_arg,&iRank,&oElem); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeSplit##classe::GetNbCuttingElem(CATLONG & oNbCuttingElem) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,18,&_Trac2,&oNbCuttingElem); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetNbCuttingElem(oNbCuttingElem); \
   ExitAfterCall(this,18,_Trac2,&_ret_arg,&oNbCuttingElem); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeSplit##classe::GetNbElementsToKeep(CATLONG & oNbElementsToKeep) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,19,&_Trac2,&oNbElementsToKeep); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetNbElementsToKeep(oNbElementsToKeep); \
   ExitAfterCall(this,19,_Trac2,&_ret_arg,&oNbElementsToKeep); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeSplit##classe::GetNbElementsToRemove(CATLONG & oNbElementsToRemove) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,20,&_Trac2,&oNbElementsToRemove); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetNbElementsToRemove(oNbElementsToRemove); \
   ExitAfterCall(this,20,_Trac2,&_ret_arg,&oNbElementsToRemove); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeSplit##classe::GetOtherSide(CATIAReference *& oElem) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,21,&_Trac2,&oElem); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetOtherSide(oElem); \
   ExitAfterCall(this,21,_Trac2,&_ret_arg,&oElem); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeSplit##classe::GetRemovedElem(CATLONG iRank, CATIAReference *& oElem) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,22,&_Trac2,&iRank,&oElem); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetRemovedElem(iRank,oElem); \
   ExitAfterCall(this,22,_Trac2,&_ret_arg,&iRank,&oElem); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeSplit##classe::RemoveCuttingElem(CATIAReference * iElem) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,23,&_Trac2,&iElem); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->RemoveCuttingElem(iElem); \
   ExitAfterCall(this,23,_Trac2,&_ret_arg,&iElem); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeSplit##classe::RemoveElementToKeep(CATLONG iRank) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,24,&_Trac2,&iRank); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->RemoveElementToKeep(iRank); \
   ExitAfterCall(this,24,_Trac2,&_ret_arg,&iRank); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeSplit##classe::RemoveElementToRemove(CATLONG iRank) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,25,&_Trac2,&iRank); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->RemoveElementToRemove(iRank); \
   ExitAfterCall(this,25,_Trac2,&_ret_arg,&iRank); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeSplit##classe::GetOrientation(CATLONG iRank, CATLONG & oOrientation) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,26,&_Trac2,&iRank,&oOrientation); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetOrientation(iRank,oOrientation); \
   ExitAfterCall(this,26,_Trac2,&_ret_arg,&iRank,&oOrientation); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeSplit##classe::SetOrientation(CATLONG iRank, CATLONG iOrientation) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,27,&_Trac2,&iRank,&iOrientation); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetOrientation(iRank,iOrientation); \
   ExitAfterCall(this,27,_Trac2,&_ret_arg,&iRank,&iOrientation); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeSplit##classe::get_AutomaticExtrapolationMode(CAT_VARIANT_BOOL & oMode) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,28,&_Trac2,&oMode); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_AutomaticExtrapolationMode(oMode); \
   ExitAfterCall(this,28,_Trac2,&_ret_arg,&oMode); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeSplit##classe::put_AutomaticExtrapolationMode(CAT_VARIANT_BOOL iMode) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,29,&_Trac2,&iMode); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_AutomaticExtrapolationMode(iMode); \
   ExitAfterCall(this,29,_Trac2,&_ret_arg,&iMode); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeSplit##classe::get_ExtrapolationType(CATLONG & oMode) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,30,&_Trac2,&oMode); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_ExtrapolationType(oMode); \
   ExitAfterCall(this,30,_Trac2,&_ret_arg,&oMode); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeSplit##classe::put_ExtrapolationType(CATLONG iMode) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,31,&_Trac2,&iMode); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_ExtrapolationType(iMode); \
   ExitAfterCall(this,31,_Trac2,&_ret_arg,&iMode); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeSplit##classe::get_BothSidesMode(CAT_VARIANT_BOOL & oMode) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,32,&_Trac2,&oMode); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_BothSidesMode(oMode); \
   ExitAfterCall(this,32,_Trac2,&_ret_arg,&oMode); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeSplit##classe::put_BothSidesMode(CAT_VARIANT_BOOL iMode) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,33,&_Trac2,&iMode); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_BothSidesMode(iMode); \
   ExitAfterCall(this,33,_Trac2,&_ret_arg,&iMode); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeSplit##classe::get_IntersectionComputation(CAT_VARIANT_BOOL & oMode) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,34,&_Trac2,&oMode); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_IntersectionComputation(oMode); \
   ExitAfterCall(this,34,_Trac2,&_ret_arg,&oMode); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeSplit##classe::put_IntersectionComputation(CAT_VARIANT_BOOL iMode) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,35,&_Trac2,&iMode); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_IntersectionComputation(iMode); \
   ExitAfterCall(this,35,_Trac2,&_ret_arg,&iMode); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeSplit##classe::Compute() \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,36,&_Trac2); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->Compute(); \
   ExitAfterCall(this,36,_Trac2,&_ret_arg); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeSplit##classe::AppendHybridShape(CATIAHybridShape * iHybridShape) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,37,&_Trac2,&iHybridShape); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->AppendHybridShape(iHybridShape); \
   ExitAfterCall(this,37,_Trac2,&_ret_arg,&iHybridShape); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeSplit##classe::get_Thickness(CATIAHybridShape *& oThickness) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,38,&_Trac2,&oThickness); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Thickness(oThickness); \
   ExitAfterCall(this,38,_Trac2,&_ret_arg,&oThickness); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAHybridShapeSplit##classe::get_Application(CATIAApplication *& oApplication) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,39,&_Trac2,&oApplication); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Application(oApplication); \
   ExitAfterCall(this,39,_Trac2,&_ret_arg,&oApplication); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAHybridShapeSplit##classe::get_Parent(CATBaseDispatch *& oParent) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,40,&_Trac2,&oParent); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Parent(oParent); \
   ExitAfterCall(this,40,_Trac2,&_ret_arg,&oParent); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAHybridShapeSplit##classe::get_Name(CATBSTR & oNameBSTR) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,41,&_Trac2,&oNameBSTR); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Name(oNameBSTR); \
   ExitAfterCall(this,41,_Trac2,&_ret_arg,&oNameBSTR); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAHybridShapeSplit##classe::put_Name(const CATBSTR & iNameBSTR) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,42,&_Trac2,&iNameBSTR); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_Name(iNameBSTR); \
   ExitAfterCall(this,42,_Trac2,&_ret_arg,&iNameBSTR); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAHybridShapeSplit##classe::GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,43,&_Trac2,&IDName,&RealObj); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetItem(IDName,RealObj); \
   ExitAfterCall(this,43,_Trac2,&_ret_arg,&IDName,&RealObj); \
   return(_ret_arg); \
} \



/* Macro used to link an implementation with an interface */
#define TIE_CATIAHybridShapeSplit(classe) \
 \
 \
declare_TIE_CATIAHybridShapeSplit(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIAHybridShapeSplit##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIAHybridShapeSplit,"CATIAHybridShapeSplit",CATIAHybridShapeSplit::MetaObject(),classe::MetaObject(),TIE); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIAHybridShapeSplit(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIECreation(CATIAHybridShapeSplit, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIAHybridShapeSplit##classe(classe::MetaObject(),CATIAHybridShapeSplit::MetaObject(),(void *)CreateTIECATIAHybridShapeSplit##classe)



/* Macro used to link an implementation with an interface */
/* This TIE is chained on the implementation object */
#define TIEchain_CATIAHybridShapeSplit(classe) \
 \
 \
declare_TIE_CATIAHybridShapeSplit(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIAHybridShapeSplit##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIAHybridShapeSplit,"CATIAHybridShapeSplit",CATIAHybridShapeSplit::MetaObject(),classe::MetaObject(),TIEchain); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIAHybridShapeSplit(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIEchainCreation(CATIAHybridShapeSplit, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIAHybridShapeSplit##classe(classe::MetaObject(),CATIAHybridShapeSplit::MetaObject(),(void *)CreateTIECATIAHybridShapeSplit##classe)


/* Macro to switch between BOA and TIE at build time */ 
#ifdef CATSYS_BOA_IS_TIE
#define BOA_CATIAHybridShapeSplit(classe) TIE_CATIAHybridShapeSplit(classe)
#else
#define BOA_CATIAHybridShapeSplit(classe) CATImplementBOA(CATIAHybridShapeSplit, classe)
#endif

#endif
