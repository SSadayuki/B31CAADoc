#ifndef __TIE_CATIAHybridShapeTrim
#define __TIE_CATIAHybridShapeTrim

#include <string.h>
#include "CATBaseUnknown.h"
#include "CATMetaClass.h"
#include "CATMacForTie.h"
#include "CATExitJournal.h"
#include "CATIAHybridShapeTrim.h"
#include "JS0DSPA.h"


#ifdef _WINDOWS_SOURCE
#define Exported __declspec(dllexport)
#define Imported __declspec(dllimport)
#else
#define Exported 
#define Imported 
#endif


/* To link an implementation with the interface CATIAHybridShapeTrim */
#define declare_TIE_CATIAHybridShapeTrim(classe) \
 \
 \
class TIECATIAHybridShapeTrim##classe : public CATIAHybridShapeTrim \
{ \
   private: \
      CATDeclareCommonTIEMembers \
   public: \
      CATDeclareTIEMethods(CATIAHybridShapeTrim, classe) \
      CATDeclareIUnknownMethodsForCATBaseUnknownTIE \
      CATDeclareIDispatchMethodsForCATBaseUnknownTIE \
      CATDeclareCATBaseUnknownMethodsForTIE \
      virtual HRESULT __stdcall get_FirstElem(CATIAReference *& oElem); \
      virtual HRESULT __stdcall put_FirstElem(CATIAReference * iElem); \
      virtual HRESULT __stdcall get_SecondElem(CATIAReference *& oElem); \
      virtual HRESULT __stdcall put_SecondElem(CATIAReference * iElem); \
      virtual HRESULT __stdcall get_FirstOrientation(CATLONG & oOrientation); \
      virtual HRESULT __stdcall put_FirstOrientation(CATLONG iOrientation); \
      virtual HRESULT __stdcall get_SecondOrientation(CATLONG & oOrientation); \
      virtual HRESULT __stdcall put_SecondOrientation(CATLONG iOrientation); \
      virtual HRESULT __stdcall InvertFirstOrientation(); \
      virtual HRESULT __stdcall InvertSecondOrientation(); \
      virtual HRESULT __stdcall get_Simplify(CAT_VARIANT_BOOL & oSimplify); \
      virtual HRESULT __stdcall put_Simplify(CAT_VARIANT_BOOL iSimplify); \
      virtual HRESULT __stdcall get_Support(CATIAReference *& oElem); \
      virtual HRESULT __stdcall put_Support(CATIAReference * iElem); \
      virtual HRESULT __stdcall AddElementToKeep(CATIAReference * iElement); \
      virtual HRESULT __stdcall AddElementToRemove(CATIAReference * iElement); \
      virtual HRESULT __stdcall GetKeptElem(CATLONG iRank, CATIAReference *& oElem); \
      virtual HRESULT __stdcall GetNbElementsToKeep(CATLONG & oNbElementsToKeep); \
      virtual HRESULT __stdcall GetNbElementsToRemove(CATLONG & oNbElementsToRemove); \
      virtual HRESULT __stdcall GetRemovedElem(CATLONG iRank, CATIAReference *& oElem); \
      virtual HRESULT __stdcall RemoveElementToKeep(CATLONG iRank); \
      virtual HRESULT __stdcall RemoveElementToRemove(CATLONG iRank); \
      virtual HRESULT __stdcall get_AutomaticExtrapolationMode(CAT_VARIANT_BOOL & oMode); \
      virtual HRESULT __stdcall put_AutomaticExtrapolationMode(CAT_VARIANT_BOOL iMode); \
      virtual HRESULT __stdcall get_IntersectionComputation(CAT_VARIANT_BOOL & oMode); \
      virtual HRESULT __stdcall put_IntersectionComputation(CAT_VARIANT_BOOL iMode); \
      virtual HRESULT __stdcall GetNbElem(CATLONG & NbElem); \
      virtual HRESULT __stdcall GetElem(CATLONG iRank, CATIAReference *& oElem); \
      virtual HRESULT __stdcall SetElem(CATLONG iRank, CATIAReference * iElem); \
      virtual HRESULT __stdcall GetPreviousOrientation(CATLONG iRank, CATLONG & oOrientation); \
      virtual HRESULT __stdcall GetNextOrientation(CATLONG iRank, CATLONG & oOrientation); \
      virtual HRESULT __stdcall SetPreviousOrientation(CATLONG iRank, CATLONG iOrientation); \
      virtual HRESULT __stdcall SetNextOrientation(CATLONG iRank, CATLONG iOrientation); \
      virtual HRESULT __stdcall get_Mode(CATLONG & oMode); \
      virtual HRESULT __stdcall put_Mode(CATLONG iMode); \
      virtual HRESULT __stdcall GetPortionToKeep(CATLONG iRank, CATLONG & oPortionNumber); \
      virtual HRESULT __stdcall SetPortionToKeep(CATLONG iRank, CATLONG iPortionNumber); \
      virtual HRESULT __stdcall GetPieceNbCutters(CATLONG iRank, CATLONG & oNbCutters); \
      virtual HRESULT __stdcall GetPieceCutter(CATLONG iRank, CATLONG iCutterIndex, CATLONG & oCutterElemIdx, CATLONG & oOrientation); \
      virtual HRESULT __stdcall AddPieceCutter(CATLONG iRank, CATLONG iCutterElem, CATLONG iOrientation); \
      virtual HRESULT __stdcall RemovePieceCutter(CATLONG iRank, CATLONG iCutterIndex); \
      virtual HRESULT __stdcall GetPieceDiscriminationIndex(CATLONG iRank, CATLONG & oIndex); \
      virtual HRESULT __stdcall SetPieceDiscriminationIndex(CATLONG iRank, CATLONG iIndex); \
      virtual HRESULT __stdcall get_KeepAllPieces(CAT_VARIANT_BOOL & oMode); \
      virtual HRESULT __stdcall put_KeepAllPieces(CAT_VARIANT_BOOL iMode); \
      virtual HRESULT __stdcall get_Connex(CAT_VARIANT_BOOL & oMode); \
      virtual HRESULT __stdcall put_Connex(CAT_VARIANT_BOOL iMode); \
      virtual HRESULT __stdcall get_Manifold(CAT_VARIANT_BOOL & oMode); \
      virtual HRESULT __stdcall put_Manifold(CAT_VARIANT_BOOL iMode); \
      virtual HRESULT __stdcall Compute(); \
      virtual HRESULT __stdcall AppendHybridShape(CATIAHybridShape * iHybridShape); \
      virtual HRESULT __stdcall get_Thickness(CATIAHybridShape *& oThickness); \
      virtual HRESULT  __stdcall get_Application(CATIAApplication *& oApplication); \
      virtual HRESULT  __stdcall get_Parent(CATBaseDispatch *& oParent); \
      virtual HRESULT  __stdcall get_Name(CATBSTR & oNameBSTR); \
      virtual HRESULT  __stdcall put_Name(const CATBSTR & iNameBSTR); \
      virtual HRESULT  __stdcall GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj); \
};



#define ENVTIEdeclare_CATIAHybridShapeTrim(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
virtual HRESULT __stdcall get_FirstElem(CATIAReference *& oElem); \
virtual HRESULT __stdcall put_FirstElem(CATIAReference * iElem); \
virtual HRESULT __stdcall get_SecondElem(CATIAReference *& oElem); \
virtual HRESULT __stdcall put_SecondElem(CATIAReference * iElem); \
virtual HRESULT __stdcall get_FirstOrientation(CATLONG & oOrientation); \
virtual HRESULT __stdcall put_FirstOrientation(CATLONG iOrientation); \
virtual HRESULT __stdcall get_SecondOrientation(CATLONG & oOrientation); \
virtual HRESULT __stdcall put_SecondOrientation(CATLONG iOrientation); \
virtual HRESULT __stdcall InvertFirstOrientation(); \
virtual HRESULT __stdcall InvertSecondOrientation(); \
virtual HRESULT __stdcall get_Simplify(CAT_VARIANT_BOOL & oSimplify); \
virtual HRESULT __stdcall put_Simplify(CAT_VARIANT_BOOL iSimplify); \
virtual HRESULT __stdcall get_Support(CATIAReference *& oElem); \
virtual HRESULT __stdcall put_Support(CATIAReference * iElem); \
virtual HRESULT __stdcall AddElementToKeep(CATIAReference * iElement); \
virtual HRESULT __stdcall AddElementToRemove(CATIAReference * iElement); \
virtual HRESULT __stdcall GetKeptElem(CATLONG iRank, CATIAReference *& oElem); \
virtual HRESULT __stdcall GetNbElementsToKeep(CATLONG & oNbElementsToKeep); \
virtual HRESULT __stdcall GetNbElementsToRemove(CATLONG & oNbElementsToRemove); \
virtual HRESULT __stdcall GetRemovedElem(CATLONG iRank, CATIAReference *& oElem); \
virtual HRESULT __stdcall RemoveElementToKeep(CATLONG iRank); \
virtual HRESULT __stdcall RemoveElementToRemove(CATLONG iRank); \
virtual HRESULT __stdcall get_AutomaticExtrapolationMode(CAT_VARIANT_BOOL & oMode); \
virtual HRESULT __stdcall put_AutomaticExtrapolationMode(CAT_VARIANT_BOOL iMode); \
virtual HRESULT __stdcall get_IntersectionComputation(CAT_VARIANT_BOOL & oMode); \
virtual HRESULT __stdcall put_IntersectionComputation(CAT_VARIANT_BOOL iMode); \
virtual HRESULT __stdcall GetNbElem(CATLONG & NbElem); \
virtual HRESULT __stdcall GetElem(CATLONG iRank, CATIAReference *& oElem); \
virtual HRESULT __stdcall SetElem(CATLONG iRank, CATIAReference * iElem); \
virtual HRESULT __stdcall GetPreviousOrientation(CATLONG iRank, CATLONG & oOrientation); \
virtual HRESULT __stdcall GetNextOrientation(CATLONG iRank, CATLONG & oOrientation); \
virtual HRESULT __stdcall SetPreviousOrientation(CATLONG iRank, CATLONG iOrientation); \
virtual HRESULT __stdcall SetNextOrientation(CATLONG iRank, CATLONG iOrientation); \
virtual HRESULT __stdcall get_Mode(CATLONG & oMode); \
virtual HRESULT __stdcall put_Mode(CATLONG iMode); \
virtual HRESULT __stdcall GetPortionToKeep(CATLONG iRank, CATLONG & oPortionNumber); \
virtual HRESULT __stdcall SetPortionToKeep(CATLONG iRank, CATLONG iPortionNumber); \
virtual HRESULT __stdcall GetPieceNbCutters(CATLONG iRank, CATLONG & oNbCutters); \
virtual HRESULT __stdcall GetPieceCutter(CATLONG iRank, CATLONG iCutterIndex, CATLONG & oCutterElemIdx, CATLONG & oOrientation); \
virtual HRESULT __stdcall AddPieceCutter(CATLONG iRank, CATLONG iCutterElem, CATLONG iOrientation); \
virtual HRESULT __stdcall RemovePieceCutter(CATLONG iRank, CATLONG iCutterIndex); \
virtual HRESULT __stdcall GetPieceDiscriminationIndex(CATLONG iRank, CATLONG & oIndex); \
virtual HRESULT __stdcall SetPieceDiscriminationIndex(CATLONG iRank, CATLONG iIndex); \
virtual HRESULT __stdcall get_KeepAllPieces(CAT_VARIANT_BOOL & oMode); \
virtual HRESULT __stdcall put_KeepAllPieces(CAT_VARIANT_BOOL iMode); \
virtual HRESULT __stdcall get_Connex(CAT_VARIANT_BOOL & oMode); \
virtual HRESULT __stdcall put_Connex(CAT_VARIANT_BOOL iMode); \
virtual HRESULT __stdcall get_Manifold(CAT_VARIANT_BOOL & oMode); \
virtual HRESULT __stdcall put_Manifold(CAT_VARIANT_BOOL iMode); \
virtual HRESULT __stdcall Compute(); \
virtual HRESULT __stdcall AppendHybridShape(CATIAHybridShape * iHybridShape); \
virtual HRESULT __stdcall get_Thickness(CATIAHybridShape *& oThickness); \
virtual HRESULT  __stdcall get_Application(CATIAApplication *& oApplication); \
virtual HRESULT  __stdcall get_Parent(CATBaseDispatch *& oParent); \
virtual HRESULT  __stdcall get_Name(CATBSTR & oNameBSTR); \
virtual HRESULT  __stdcall put_Name(const CATBSTR & iNameBSTR); \
virtual HRESULT  __stdcall GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj); \


#define ENVTIEdefine_CATIAHybridShapeTrim(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
HRESULT __stdcall  ENVTIEName::get_FirstElem(CATIAReference *& oElem) \
{ \
return (ENVTIECALL(CATIAHybridShapeTrim,ENVTIETypeLetter,ENVTIELetter)get_FirstElem(oElem)); \
} \
HRESULT __stdcall  ENVTIEName::put_FirstElem(CATIAReference * iElem) \
{ \
return (ENVTIECALL(CATIAHybridShapeTrim,ENVTIETypeLetter,ENVTIELetter)put_FirstElem(iElem)); \
} \
HRESULT __stdcall  ENVTIEName::get_SecondElem(CATIAReference *& oElem) \
{ \
return (ENVTIECALL(CATIAHybridShapeTrim,ENVTIETypeLetter,ENVTIELetter)get_SecondElem(oElem)); \
} \
HRESULT __stdcall  ENVTIEName::put_SecondElem(CATIAReference * iElem) \
{ \
return (ENVTIECALL(CATIAHybridShapeTrim,ENVTIETypeLetter,ENVTIELetter)put_SecondElem(iElem)); \
} \
HRESULT __stdcall  ENVTIEName::get_FirstOrientation(CATLONG & oOrientation) \
{ \
return (ENVTIECALL(CATIAHybridShapeTrim,ENVTIETypeLetter,ENVTIELetter)get_FirstOrientation(oOrientation)); \
} \
HRESULT __stdcall  ENVTIEName::put_FirstOrientation(CATLONG iOrientation) \
{ \
return (ENVTIECALL(CATIAHybridShapeTrim,ENVTIETypeLetter,ENVTIELetter)put_FirstOrientation(iOrientation)); \
} \
HRESULT __stdcall  ENVTIEName::get_SecondOrientation(CATLONG & oOrientation) \
{ \
return (ENVTIECALL(CATIAHybridShapeTrim,ENVTIETypeLetter,ENVTIELetter)get_SecondOrientation(oOrientation)); \
} \
HRESULT __stdcall  ENVTIEName::put_SecondOrientation(CATLONG iOrientation) \
{ \
return (ENVTIECALL(CATIAHybridShapeTrim,ENVTIETypeLetter,ENVTIELetter)put_SecondOrientation(iOrientation)); \
} \
HRESULT __stdcall  ENVTIEName::InvertFirstOrientation() \
{ \
return (ENVTIECALL(CATIAHybridShapeTrim,ENVTIETypeLetter,ENVTIELetter)InvertFirstOrientation()); \
} \
HRESULT __stdcall  ENVTIEName::InvertSecondOrientation() \
{ \
return (ENVTIECALL(CATIAHybridShapeTrim,ENVTIETypeLetter,ENVTIELetter)InvertSecondOrientation()); \
} \
HRESULT __stdcall  ENVTIEName::get_Simplify(CAT_VARIANT_BOOL & oSimplify) \
{ \
return (ENVTIECALL(CATIAHybridShapeTrim,ENVTIETypeLetter,ENVTIELetter)get_Simplify(oSimplify)); \
} \
HRESULT __stdcall  ENVTIEName::put_Simplify(CAT_VARIANT_BOOL iSimplify) \
{ \
return (ENVTIECALL(CATIAHybridShapeTrim,ENVTIETypeLetter,ENVTIELetter)put_Simplify(iSimplify)); \
} \
HRESULT __stdcall  ENVTIEName::get_Support(CATIAReference *& oElem) \
{ \
return (ENVTIECALL(CATIAHybridShapeTrim,ENVTIETypeLetter,ENVTIELetter)get_Support(oElem)); \
} \
HRESULT __stdcall  ENVTIEName::put_Support(CATIAReference * iElem) \
{ \
return (ENVTIECALL(CATIAHybridShapeTrim,ENVTIETypeLetter,ENVTIELetter)put_Support(iElem)); \
} \
HRESULT __stdcall  ENVTIEName::AddElementToKeep(CATIAReference * iElement) \
{ \
return (ENVTIECALL(CATIAHybridShapeTrim,ENVTIETypeLetter,ENVTIELetter)AddElementToKeep(iElement)); \
} \
HRESULT __stdcall  ENVTIEName::AddElementToRemove(CATIAReference * iElement) \
{ \
return (ENVTIECALL(CATIAHybridShapeTrim,ENVTIETypeLetter,ENVTIELetter)AddElementToRemove(iElement)); \
} \
HRESULT __stdcall  ENVTIEName::GetKeptElem(CATLONG iRank, CATIAReference *& oElem) \
{ \
return (ENVTIECALL(CATIAHybridShapeTrim,ENVTIETypeLetter,ENVTIELetter)GetKeptElem(iRank,oElem)); \
} \
HRESULT __stdcall  ENVTIEName::GetNbElementsToKeep(CATLONG & oNbElementsToKeep) \
{ \
return (ENVTIECALL(CATIAHybridShapeTrim,ENVTIETypeLetter,ENVTIELetter)GetNbElementsToKeep(oNbElementsToKeep)); \
} \
HRESULT __stdcall  ENVTIEName::GetNbElementsToRemove(CATLONG & oNbElementsToRemove) \
{ \
return (ENVTIECALL(CATIAHybridShapeTrim,ENVTIETypeLetter,ENVTIELetter)GetNbElementsToRemove(oNbElementsToRemove)); \
} \
HRESULT __stdcall  ENVTIEName::GetRemovedElem(CATLONG iRank, CATIAReference *& oElem) \
{ \
return (ENVTIECALL(CATIAHybridShapeTrim,ENVTIETypeLetter,ENVTIELetter)GetRemovedElem(iRank,oElem)); \
} \
HRESULT __stdcall  ENVTIEName::RemoveElementToKeep(CATLONG iRank) \
{ \
return (ENVTIECALL(CATIAHybridShapeTrim,ENVTIETypeLetter,ENVTIELetter)RemoveElementToKeep(iRank)); \
} \
HRESULT __stdcall  ENVTIEName::RemoveElementToRemove(CATLONG iRank) \
{ \
return (ENVTIECALL(CATIAHybridShapeTrim,ENVTIETypeLetter,ENVTIELetter)RemoveElementToRemove(iRank)); \
} \
HRESULT __stdcall  ENVTIEName::get_AutomaticExtrapolationMode(CAT_VARIANT_BOOL & oMode) \
{ \
return (ENVTIECALL(CATIAHybridShapeTrim,ENVTIETypeLetter,ENVTIELetter)get_AutomaticExtrapolationMode(oMode)); \
} \
HRESULT __stdcall  ENVTIEName::put_AutomaticExtrapolationMode(CAT_VARIANT_BOOL iMode) \
{ \
return (ENVTIECALL(CATIAHybridShapeTrim,ENVTIETypeLetter,ENVTIELetter)put_AutomaticExtrapolationMode(iMode)); \
} \
HRESULT __stdcall  ENVTIEName::get_IntersectionComputation(CAT_VARIANT_BOOL & oMode) \
{ \
return (ENVTIECALL(CATIAHybridShapeTrim,ENVTIETypeLetter,ENVTIELetter)get_IntersectionComputation(oMode)); \
} \
HRESULT __stdcall  ENVTIEName::put_IntersectionComputation(CAT_VARIANT_BOOL iMode) \
{ \
return (ENVTIECALL(CATIAHybridShapeTrim,ENVTIETypeLetter,ENVTIELetter)put_IntersectionComputation(iMode)); \
} \
HRESULT __stdcall  ENVTIEName::GetNbElem(CATLONG & NbElem) \
{ \
return (ENVTIECALL(CATIAHybridShapeTrim,ENVTIETypeLetter,ENVTIELetter)GetNbElem(NbElem)); \
} \
HRESULT __stdcall  ENVTIEName::GetElem(CATLONG iRank, CATIAReference *& oElem) \
{ \
return (ENVTIECALL(CATIAHybridShapeTrim,ENVTIETypeLetter,ENVTIELetter)GetElem(iRank,oElem)); \
} \
HRESULT __stdcall  ENVTIEName::SetElem(CATLONG iRank, CATIAReference * iElem) \
{ \
return (ENVTIECALL(CATIAHybridShapeTrim,ENVTIETypeLetter,ENVTIELetter)SetElem(iRank,iElem)); \
} \
HRESULT __stdcall  ENVTIEName::GetPreviousOrientation(CATLONG iRank, CATLONG & oOrientation) \
{ \
return (ENVTIECALL(CATIAHybridShapeTrim,ENVTIETypeLetter,ENVTIELetter)GetPreviousOrientation(iRank,oOrientation)); \
} \
HRESULT __stdcall  ENVTIEName::GetNextOrientation(CATLONG iRank, CATLONG & oOrientation) \
{ \
return (ENVTIECALL(CATIAHybridShapeTrim,ENVTIETypeLetter,ENVTIELetter)GetNextOrientation(iRank,oOrientation)); \
} \
HRESULT __stdcall  ENVTIEName::SetPreviousOrientation(CATLONG iRank, CATLONG iOrientation) \
{ \
return (ENVTIECALL(CATIAHybridShapeTrim,ENVTIETypeLetter,ENVTIELetter)SetPreviousOrientation(iRank,iOrientation)); \
} \
HRESULT __stdcall  ENVTIEName::SetNextOrientation(CATLONG iRank, CATLONG iOrientation) \
{ \
return (ENVTIECALL(CATIAHybridShapeTrim,ENVTIETypeLetter,ENVTIELetter)SetNextOrientation(iRank,iOrientation)); \
} \
HRESULT __stdcall  ENVTIEName::get_Mode(CATLONG & oMode) \
{ \
return (ENVTIECALL(CATIAHybridShapeTrim,ENVTIETypeLetter,ENVTIELetter)get_Mode(oMode)); \
} \
HRESULT __stdcall  ENVTIEName::put_Mode(CATLONG iMode) \
{ \
return (ENVTIECALL(CATIAHybridShapeTrim,ENVTIETypeLetter,ENVTIELetter)put_Mode(iMode)); \
} \
HRESULT __stdcall  ENVTIEName::GetPortionToKeep(CATLONG iRank, CATLONG & oPortionNumber) \
{ \
return (ENVTIECALL(CATIAHybridShapeTrim,ENVTIETypeLetter,ENVTIELetter)GetPortionToKeep(iRank,oPortionNumber)); \
} \
HRESULT __stdcall  ENVTIEName::SetPortionToKeep(CATLONG iRank, CATLONG iPortionNumber) \
{ \
return (ENVTIECALL(CATIAHybridShapeTrim,ENVTIETypeLetter,ENVTIELetter)SetPortionToKeep(iRank,iPortionNumber)); \
} \
HRESULT __stdcall  ENVTIEName::GetPieceNbCutters(CATLONG iRank, CATLONG & oNbCutters) \
{ \
return (ENVTIECALL(CATIAHybridShapeTrim,ENVTIETypeLetter,ENVTIELetter)GetPieceNbCutters(iRank,oNbCutters)); \
} \
HRESULT __stdcall  ENVTIEName::GetPieceCutter(CATLONG iRank, CATLONG iCutterIndex, CATLONG & oCutterElemIdx, CATLONG & oOrientation) \
{ \
return (ENVTIECALL(CATIAHybridShapeTrim,ENVTIETypeLetter,ENVTIELetter)GetPieceCutter(iRank,iCutterIndex,oCutterElemIdx,oOrientation)); \
} \
HRESULT __stdcall  ENVTIEName::AddPieceCutter(CATLONG iRank, CATLONG iCutterElem, CATLONG iOrientation) \
{ \
return (ENVTIECALL(CATIAHybridShapeTrim,ENVTIETypeLetter,ENVTIELetter)AddPieceCutter(iRank,iCutterElem,iOrientation)); \
} \
HRESULT __stdcall  ENVTIEName::RemovePieceCutter(CATLONG iRank, CATLONG iCutterIndex) \
{ \
return (ENVTIECALL(CATIAHybridShapeTrim,ENVTIETypeLetter,ENVTIELetter)RemovePieceCutter(iRank,iCutterIndex)); \
} \
HRESULT __stdcall  ENVTIEName::GetPieceDiscriminationIndex(CATLONG iRank, CATLONG & oIndex) \
{ \
return (ENVTIECALL(CATIAHybridShapeTrim,ENVTIETypeLetter,ENVTIELetter)GetPieceDiscriminationIndex(iRank,oIndex)); \
} \
HRESULT __stdcall  ENVTIEName::SetPieceDiscriminationIndex(CATLONG iRank, CATLONG iIndex) \
{ \
return (ENVTIECALL(CATIAHybridShapeTrim,ENVTIETypeLetter,ENVTIELetter)SetPieceDiscriminationIndex(iRank,iIndex)); \
} \
HRESULT __stdcall  ENVTIEName::get_KeepAllPieces(CAT_VARIANT_BOOL & oMode) \
{ \
return (ENVTIECALL(CATIAHybridShapeTrim,ENVTIETypeLetter,ENVTIELetter)get_KeepAllPieces(oMode)); \
} \
HRESULT __stdcall  ENVTIEName::put_KeepAllPieces(CAT_VARIANT_BOOL iMode) \
{ \
return (ENVTIECALL(CATIAHybridShapeTrim,ENVTIETypeLetter,ENVTIELetter)put_KeepAllPieces(iMode)); \
} \
HRESULT __stdcall  ENVTIEName::get_Connex(CAT_VARIANT_BOOL & oMode) \
{ \
return (ENVTIECALL(CATIAHybridShapeTrim,ENVTIETypeLetter,ENVTIELetter)get_Connex(oMode)); \
} \
HRESULT __stdcall  ENVTIEName::put_Connex(CAT_VARIANT_BOOL iMode) \
{ \
return (ENVTIECALL(CATIAHybridShapeTrim,ENVTIETypeLetter,ENVTIELetter)put_Connex(iMode)); \
} \
HRESULT __stdcall  ENVTIEName::get_Manifold(CAT_VARIANT_BOOL & oMode) \
{ \
return (ENVTIECALL(CATIAHybridShapeTrim,ENVTIETypeLetter,ENVTIELetter)get_Manifold(oMode)); \
} \
HRESULT __stdcall  ENVTIEName::put_Manifold(CAT_VARIANT_BOOL iMode) \
{ \
return (ENVTIECALL(CATIAHybridShapeTrim,ENVTIETypeLetter,ENVTIELetter)put_Manifold(iMode)); \
} \
HRESULT __stdcall  ENVTIEName::Compute() \
{ \
return (ENVTIECALL(CATIAHybridShapeTrim,ENVTIETypeLetter,ENVTIELetter)Compute()); \
} \
HRESULT __stdcall  ENVTIEName::AppendHybridShape(CATIAHybridShape * iHybridShape) \
{ \
return (ENVTIECALL(CATIAHybridShapeTrim,ENVTIETypeLetter,ENVTIELetter)AppendHybridShape(iHybridShape)); \
} \
HRESULT __stdcall  ENVTIEName::get_Thickness(CATIAHybridShape *& oThickness) \
{ \
return (ENVTIECALL(CATIAHybridShapeTrim,ENVTIETypeLetter,ENVTIELetter)get_Thickness(oThickness)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Application(CATIAApplication *& oApplication) \
{ \
return (ENVTIECALL(CATIAHybridShapeTrim,ENVTIETypeLetter,ENVTIELetter)get_Application(oApplication)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Parent(CATBaseDispatch *& oParent) \
{ \
return (ENVTIECALL(CATIAHybridShapeTrim,ENVTIETypeLetter,ENVTIELetter)get_Parent(oParent)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Name(CATBSTR & oNameBSTR) \
{ \
return (ENVTIECALL(CATIAHybridShapeTrim,ENVTIETypeLetter,ENVTIELetter)get_Name(oNameBSTR)); \
} \
HRESULT  __stdcall  ENVTIEName::put_Name(const CATBSTR & iNameBSTR) \
{ \
return (ENVTIECALL(CATIAHybridShapeTrim,ENVTIETypeLetter,ENVTIELetter)put_Name(iNameBSTR)); \
} \
HRESULT  __stdcall  ENVTIEName::GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj) \
{ \
return (ENVTIECALL(CATIAHybridShapeTrim,ENVTIETypeLetter,ENVTIELetter)GetItem(IDName,RealObj)); \
} \


/* Name of the TIE class */
#define class_TIE_CATIAHybridShapeTrim(classe)    TIECATIAHybridShapeTrim##classe


/* Common methods inside a TIE */
#define common_TIE_CATIAHybridShapeTrim(classe) \
 \
 \
/* Static initialization */ \
CATDefineCommonTIEMembers(CATIAHybridShapeTrim, classe) \
 \
 \
CATImplementTIEMethods(CATIAHybridShapeTrim, classe) \
CATImplementIUnknownMethodsForCATBaseUnknownTIE(CATIAHybridShapeTrim, classe, 2) \
CATImplementIDispatchMethodsForCATBaseUnknownTIE(CATIAHybridShapeTrim, classe) \
CATImplementCATBaseUnknownMethodsForTIE(CATIAHybridShapeTrim, classe) \
 \
HRESULT __stdcall  TIECATIAHybridShapeTrim##classe::get_FirstElem(CATIAReference *& oElem) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,1,&_Trac2,&oElem); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_FirstElem(oElem); \
   ExitAfterCall(this,1,_Trac2,&_ret_arg,&oElem); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeTrim##classe::put_FirstElem(CATIAReference * iElem) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,2,&_Trac2,&iElem); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_FirstElem(iElem); \
   ExitAfterCall(this,2,_Trac2,&_ret_arg,&iElem); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeTrim##classe::get_SecondElem(CATIAReference *& oElem) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,3,&_Trac2,&oElem); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_SecondElem(oElem); \
   ExitAfterCall(this,3,_Trac2,&_ret_arg,&oElem); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeTrim##classe::put_SecondElem(CATIAReference * iElem) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,4,&_Trac2,&iElem); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_SecondElem(iElem); \
   ExitAfterCall(this,4,_Trac2,&_ret_arg,&iElem); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeTrim##classe::get_FirstOrientation(CATLONG & oOrientation) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,5,&_Trac2,&oOrientation); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_FirstOrientation(oOrientation); \
   ExitAfterCall(this,5,_Trac2,&_ret_arg,&oOrientation); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeTrim##classe::put_FirstOrientation(CATLONG iOrientation) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,6,&_Trac2,&iOrientation); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_FirstOrientation(iOrientation); \
   ExitAfterCall(this,6,_Trac2,&_ret_arg,&iOrientation); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeTrim##classe::get_SecondOrientation(CATLONG & oOrientation) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,7,&_Trac2,&oOrientation); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_SecondOrientation(oOrientation); \
   ExitAfterCall(this,7,_Trac2,&_ret_arg,&oOrientation); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeTrim##classe::put_SecondOrientation(CATLONG iOrientation) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,8,&_Trac2,&iOrientation); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_SecondOrientation(iOrientation); \
   ExitAfterCall(this,8,_Trac2,&_ret_arg,&iOrientation); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeTrim##classe::InvertFirstOrientation() \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,9,&_Trac2); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->InvertFirstOrientation(); \
   ExitAfterCall(this,9,_Trac2,&_ret_arg); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeTrim##classe::InvertSecondOrientation() \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,10,&_Trac2); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->InvertSecondOrientation(); \
   ExitAfterCall(this,10,_Trac2,&_ret_arg); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeTrim##classe::get_Simplify(CAT_VARIANT_BOOL & oSimplify) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,11,&_Trac2,&oSimplify); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Simplify(oSimplify); \
   ExitAfterCall(this,11,_Trac2,&_ret_arg,&oSimplify); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeTrim##classe::put_Simplify(CAT_VARIANT_BOOL iSimplify) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,12,&_Trac2,&iSimplify); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_Simplify(iSimplify); \
   ExitAfterCall(this,12,_Trac2,&_ret_arg,&iSimplify); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeTrim##classe::get_Support(CATIAReference *& oElem) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,13,&_Trac2,&oElem); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Support(oElem); \
   ExitAfterCall(this,13,_Trac2,&_ret_arg,&oElem); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeTrim##classe::put_Support(CATIAReference * iElem) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,14,&_Trac2,&iElem); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_Support(iElem); \
   ExitAfterCall(this,14,_Trac2,&_ret_arg,&iElem); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeTrim##classe::AddElementToKeep(CATIAReference * iElement) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,15,&_Trac2,&iElement); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->AddElementToKeep(iElement); \
   ExitAfterCall(this,15,_Trac2,&_ret_arg,&iElement); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeTrim##classe::AddElementToRemove(CATIAReference * iElement) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,16,&_Trac2,&iElement); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->AddElementToRemove(iElement); \
   ExitAfterCall(this,16,_Trac2,&_ret_arg,&iElement); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeTrim##classe::GetKeptElem(CATLONG iRank, CATIAReference *& oElem) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,17,&_Trac2,&iRank,&oElem); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetKeptElem(iRank,oElem); \
   ExitAfterCall(this,17,_Trac2,&_ret_arg,&iRank,&oElem); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeTrim##classe::GetNbElementsToKeep(CATLONG & oNbElementsToKeep) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,18,&_Trac2,&oNbElementsToKeep); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetNbElementsToKeep(oNbElementsToKeep); \
   ExitAfterCall(this,18,_Trac2,&_ret_arg,&oNbElementsToKeep); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeTrim##classe::GetNbElementsToRemove(CATLONG & oNbElementsToRemove) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,19,&_Trac2,&oNbElementsToRemove); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetNbElementsToRemove(oNbElementsToRemove); \
   ExitAfterCall(this,19,_Trac2,&_ret_arg,&oNbElementsToRemove); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeTrim##classe::GetRemovedElem(CATLONG iRank, CATIAReference *& oElem) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,20,&_Trac2,&iRank,&oElem); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetRemovedElem(iRank,oElem); \
   ExitAfterCall(this,20,_Trac2,&_ret_arg,&iRank,&oElem); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeTrim##classe::RemoveElementToKeep(CATLONG iRank) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,21,&_Trac2,&iRank); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->RemoveElementToKeep(iRank); \
   ExitAfterCall(this,21,_Trac2,&_ret_arg,&iRank); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeTrim##classe::RemoveElementToRemove(CATLONG iRank) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,22,&_Trac2,&iRank); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->RemoveElementToRemove(iRank); \
   ExitAfterCall(this,22,_Trac2,&_ret_arg,&iRank); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeTrim##classe::get_AutomaticExtrapolationMode(CAT_VARIANT_BOOL & oMode) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,23,&_Trac2,&oMode); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_AutomaticExtrapolationMode(oMode); \
   ExitAfterCall(this,23,_Trac2,&_ret_arg,&oMode); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeTrim##classe::put_AutomaticExtrapolationMode(CAT_VARIANT_BOOL iMode) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,24,&_Trac2,&iMode); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_AutomaticExtrapolationMode(iMode); \
   ExitAfterCall(this,24,_Trac2,&_ret_arg,&iMode); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeTrim##classe::get_IntersectionComputation(CAT_VARIANT_BOOL & oMode) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,25,&_Trac2,&oMode); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_IntersectionComputation(oMode); \
   ExitAfterCall(this,25,_Trac2,&_ret_arg,&oMode); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeTrim##classe::put_IntersectionComputation(CAT_VARIANT_BOOL iMode) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,26,&_Trac2,&iMode); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_IntersectionComputation(iMode); \
   ExitAfterCall(this,26,_Trac2,&_ret_arg,&iMode); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeTrim##classe::GetNbElem(CATLONG & NbElem) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,27,&_Trac2,&NbElem); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetNbElem(NbElem); \
   ExitAfterCall(this,27,_Trac2,&_ret_arg,&NbElem); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeTrim##classe::GetElem(CATLONG iRank, CATIAReference *& oElem) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,28,&_Trac2,&iRank,&oElem); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetElem(iRank,oElem); \
   ExitAfterCall(this,28,_Trac2,&_ret_arg,&iRank,&oElem); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeTrim##classe::SetElem(CATLONG iRank, CATIAReference * iElem) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,29,&_Trac2,&iRank,&iElem); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetElem(iRank,iElem); \
   ExitAfterCall(this,29,_Trac2,&_ret_arg,&iRank,&iElem); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeTrim##classe::GetPreviousOrientation(CATLONG iRank, CATLONG & oOrientation) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,30,&_Trac2,&iRank,&oOrientation); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetPreviousOrientation(iRank,oOrientation); \
   ExitAfterCall(this,30,_Trac2,&_ret_arg,&iRank,&oOrientation); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeTrim##classe::GetNextOrientation(CATLONG iRank, CATLONG & oOrientation) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,31,&_Trac2,&iRank,&oOrientation); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetNextOrientation(iRank,oOrientation); \
   ExitAfterCall(this,31,_Trac2,&_ret_arg,&iRank,&oOrientation); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeTrim##classe::SetPreviousOrientation(CATLONG iRank, CATLONG iOrientation) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,32,&_Trac2,&iRank,&iOrientation); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetPreviousOrientation(iRank,iOrientation); \
   ExitAfterCall(this,32,_Trac2,&_ret_arg,&iRank,&iOrientation); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeTrim##classe::SetNextOrientation(CATLONG iRank, CATLONG iOrientation) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,33,&_Trac2,&iRank,&iOrientation); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetNextOrientation(iRank,iOrientation); \
   ExitAfterCall(this,33,_Trac2,&_ret_arg,&iRank,&iOrientation); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeTrim##classe::get_Mode(CATLONG & oMode) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,34,&_Trac2,&oMode); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Mode(oMode); \
   ExitAfterCall(this,34,_Trac2,&_ret_arg,&oMode); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeTrim##classe::put_Mode(CATLONG iMode) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,35,&_Trac2,&iMode); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_Mode(iMode); \
   ExitAfterCall(this,35,_Trac2,&_ret_arg,&iMode); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeTrim##classe::GetPortionToKeep(CATLONG iRank, CATLONG & oPortionNumber) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,36,&_Trac2,&iRank,&oPortionNumber); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetPortionToKeep(iRank,oPortionNumber); \
   ExitAfterCall(this,36,_Trac2,&_ret_arg,&iRank,&oPortionNumber); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeTrim##classe::SetPortionToKeep(CATLONG iRank, CATLONG iPortionNumber) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,37,&_Trac2,&iRank,&iPortionNumber); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetPortionToKeep(iRank,iPortionNumber); \
   ExitAfterCall(this,37,_Trac2,&_ret_arg,&iRank,&iPortionNumber); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeTrim##classe::GetPieceNbCutters(CATLONG iRank, CATLONG & oNbCutters) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,38,&_Trac2,&iRank,&oNbCutters); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetPieceNbCutters(iRank,oNbCutters); \
   ExitAfterCall(this,38,_Trac2,&_ret_arg,&iRank,&oNbCutters); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeTrim##classe::GetPieceCutter(CATLONG iRank, CATLONG iCutterIndex, CATLONG & oCutterElemIdx, CATLONG & oOrientation) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,39,&_Trac2,&iRank,&iCutterIndex,&oCutterElemIdx,&oOrientation); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetPieceCutter(iRank,iCutterIndex,oCutterElemIdx,oOrientation); \
   ExitAfterCall(this,39,_Trac2,&_ret_arg,&iRank,&iCutterIndex,&oCutterElemIdx,&oOrientation); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeTrim##classe::AddPieceCutter(CATLONG iRank, CATLONG iCutterElem, CATLONG iOrientation) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,40,&_Trac2,&iRank,&iCutterElem,&iOrientation); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->AddPieceCutter(iRank,iCutterElem,iOrientation); \
   ExitAfterCall(this,40,_Trac2,&_ret_arg,&iRank,&iCutterElem,&iOrientation); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeTrim##classe::RemovePieceCutter(CATLONG iRank, CATLONG iCutterIndex) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,41,&_Trac2,&iRank,&iCutterIndex); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->RemovePieceCutter(iRank,iCutterIndex); \
   ExitAfterCall(this,41,_Trac2,&_ret_arg,&iRank,&iCutterIndex); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeTrim##classe::GetPieceDiscriminationIndex(CATLONG iRank, CATLONG & oIndex) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,42,&_Trac2,&iRank,&oIndex); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetPieceDiscriminationIndex(iRank,oIndex); \
   ExitAfterCall(this,42,_Trac2,&_ret_arg,&iRank,&oIndex); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeTrim##classe::SetPieceDiscriminationIndex(CATLONG iRank, CATLONG iIndex) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,43,&_Trac2,&iRank,&iIndex); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetPieceDiscriminationIndex(iRank,iIndex); \
   ExitAfterCall(this,43,_Trac2,&_ret_arg,&iRank,&iIndex); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeTrim##classe::get_KeepAllPieces(CAT_VARIANT_BOOL & oMode) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,44,&_Trac2,&oMode); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_KeepAllPieces(oMode); \
   ExitAfterCall(this,44,_Trac2,&_ret_arg,&oMode); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeTrim##classe::put_KeepAllPieces(CAT_VARIANT_BOOL iMode) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,45,&_Trac2,&iMode); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_KeepAllPieces(iMode); \
   ExitAfterCall(this,45,_Trac2,&_ret_arg,&iMode); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeTrim##classe::get_Connex(CAT_VARIANT_BOOL & oMode) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,46,&_Trac2,&oMode); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Connex(oMode); \
   ExitAfterCall(this,46,_Trac2,&_ret_arg,&oMode); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeTrim##classe::put_Connex(CAT_VARIANT_BOOL iMode) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,47,&_Trac2,&iMode); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_Connex(iMode); \
   ExitAfterCall(this,47,_Trac2,&_ret_arg,&iMode); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeTrim##classe::get_Manifold(CAT_VARIANT_BOOL & oMode) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,48,&_Trac2,&oMode); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Manifold(oMode); \
   ExitAfterCall(this,48,_Trac2,&_ret_arg,&oMode); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeTrim##classe::put_Manifold(CAT_VARIANT_BOOL iMode) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,49,&_Trac2,&iMode); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_Manifold(iMode); \
   ExitAfterCall(this,49,_Trac2,&_ret_arg,&iMode); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeTrim##classe::Compute() \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,50,&_Trac2); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->Compute(); \
   ExitAfterCall(this,50,_Trac2,&_ret_arg); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeTrim##classe::AppendHybridShape(CATIAHybridShape * iHybridShape) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,51,&_Trac2,&iHybridShape); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->AppendHybridShape(iHybridShape); \
   ExitAfterCall(this,51,_Trac2,&_ret_arg,&iHybridShape); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeTrim##classe::get_Thickness(CATIAHybridShape *& oThickness) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,52,&_Trac2,&oThickness); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Thickness(oThickness); \
   ExitAfterCall(this,52,_Trac2,&_ret_arg,&oThickness); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAHybridShapeTrim##classe::get_Application(CATIAApplication *& oApplication) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,53,&_Trac2,&oApplication); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Application(oApplication); \
   ExitAfterCall(this,53,_Trac2,&_ret_arg,&oApplication); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAHybridShapeTrim##classe::get_Parent(CATBaseDispatch *& oParent) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,54,&_Trac2,&oParent); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Parent(oParent); \
   ExitAfterCall(this,54,_Trac2,&_ret_arg,&oParent); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAHybridShapeTrim##classe::get_Name(CATBSTR & oNameBSTR) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,55,&_Trac2,&oNameBSTR); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Name(oNameBSTR); \
   ExitAfterCall(this,55,_Trac2,&_ret_arg,&oNameBSTR); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAHybridShapeTrim##classe::put_Name(const CATBSTR & iNameBSTR) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,56,&_Trac2,&iNameBSTR); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_Name(iNameBSTR); \
   ExitAfterCall(this,56,_Trac2,&_ret_arg,&iNameBSTR); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAHybridShapeTrim##classe::GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,57,&_Trac2,&IDName,&RealObj); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetItem(IDName,RealObj); \
   ExitAfterCall(this,57,_Trac2,&_ret_arg,&IDName,&RealObj); \
   return(_ret_arg); \
} \



/* Macro used to link an implementation with an interface */
#define TIE_CATIAHybridShapeTrim(classe) \
 \
 \
declare_TIE_CATIAHybridShapeTrim(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIAHybridShapeTrim##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIAHybridShapeTrim,"CATIAHybridShapeTrim",CATIAHybridShapeTrim::MetaObject(),classe::MetaObject(),TIE); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIAHybridShapeTrim(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIECreation(CATIAHybridShapeTrim, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIAHybridShapeTrim##classe(classe::MetaObject(),CATIAHybridShapeTrim::MetaObject(),(void *)CreateTIECATIAHybridShapeTrim##classe)



/* Macro used to link an implementation with an interface */
/* This TIE is chained on the implementation object */
#define TIEchain_CATIAHybridShapeTrim(classe) \
 \
 \
declare_TIE_CATIAHybridShapeTrim(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIAHybridShapeTrim##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIAHybridShapeTrim,"CATIAHybridShapeTrim",CATIAHybridShapeTrim::MetaObject(),classe::MetaObject(),TIEchain); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIAHybridShapeTrim(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIEchainCreation(CATIAHybridShapeTrim, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIAHybridShapeTrim##classe(classe::MetaObject(),CATIAHybridShapeTrim::MetaObject(),(void *)CreateTIECATIAHybridShapeTrim##classe)


/* Macro to switch between BOA and TIE at build time */ 
#ifdef CATSYS_BOA_IS_TIE
#define BOA_CATIAHybridShapeTrim(classe) TIE_CATIAHybridShapeTrim(classe)
#else
#define BOA_CATIAHybridShapeTrim(classe) CATImplementBOA(CATIAHybridShapeTrim, classe)
#endif

#endif
