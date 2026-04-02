#ifndef __TIE_CATIAHybridShapeUnfold
#define __TIE_CATIAHybridShapeUnfold

#include <string.h>
#include "CATBaseUnknown.h"
#include "CATMetaClass.h"
#include "CATMacForTie.h"
#include "CATExitJournal.h"
#include "CATIAHybridShapeUnfold.h"
#include "JS0DSPA.h"


#ifdef _WINDOWS_SOURCE
#define Exported __declspec(dllexport)
#define Imported __declspec(dllimport)
#else
#define Exported 
#define Imported 
#endif


/* To link an implementation with the interface CATIAHybridShapeUnfold */
#define declare_TIE_CATIAHybridShapeUnfold(classe) \
 \
 \
class TIECATIAHybridShapeUnfold##classe : public CATIAHybridShapeUnfold \
{ \
   private: \
      CATDeclareCommonTIEMembers \
   public: \
      CATDeclareTIEMethods(CATIAHybridShapeUnfold, classe) \
      CATDeclareIUnknownMethodsForCATBaseUnknownTIE \
      CATDeclareIDispatchMethodsForCATBaseUnknownTIE \
      CATDeclareCATBaseUnknownMethodsForTIE \
      virtual HRESULT __stdcall get_SurfaceToUnfold(CATIAReference *& oElem); \
      virtual HRESULT __stdcall put_SurfaceToUnfold(CATIAReference * iElem); \
      virtual HRESULT __stdcall get_OriginToUnfold(CATIAReference *& oElem); \
      virtual HRESULT __stdcall put_OriginToUnfold(CATIAReference * iElem); \
      virtual HRESULT __stdcall get_DirectionToUnfold(CATIAReference *& oElem); \
      virtual HRESULT __stdcall put_DirectionToUnfold(CATIAReference * iElem); \
      virtual HRESULT __stdcall get_TargetPlane(CATIAReference *& oElem); \
      virtual HRESULT __stdcall put_TargetPlane(CATIAReference * iElem); \
      virtual HRESULT __stdcall AddEdgeToTear(CATIAReference * iElement); \
      virtual HRESULT __stdcall GetEdgeToTear(CATLONG iRank, CATIAReference *& oElement); \
      virtual HRESULT __stdcall RemoveEdgeToTear(CATLONG iRank); \
      virtual HRESULT __stdcall get_SurfaceType(CATLONG & oType); \
      virtual HRESULT __stdcall put_SurfaceType(CATLONG iType); \
      virtual HRESULT __stdcall get_TargetOrientationMode(CATLONG & oMode); \
      virtual HRESULT __stdcall put_TargetOrientationMode(CATLONG iMode); \
      virtual HRESULT __stdcall get_EdgeToTearPositioningOrientation(CATLONG & oMode); \
      virtual HRESULT __stdcall put_EdgeToTearPositioningOrientation(CATLONG iMode); \
      virtual HRESULT __stdcall AddElementToTransfer(CATIAReference * iElement, CATLONG iTypeOfTransfer); \
      virtual HRESULT __stdcall GetElementToTransfer(CATLONG iRank, CATIAReference *& opElement, CATLONG & oTypeOfTransfer); \
      virtual HRESULT __stdcall RemoveElementToTransfer(CATLONG iRank); \
      virtual HRESULT __stdcall ReplaceElementsToTransfer(CATLONG iRank, CATIAReference * iElement); \
      virtual HRESULT __stdcall get_TargetOrigin(CATIAReference *& oElem); \
      virtual HRESULT __stdcall put_TargetOrigin(CATIAReference * iElem); \
      virtual HRESULT __stdcall get_TargetDirection(CATIAHybridShapeDirection *& oDir); \
      virtual HRESULT __stdcall put_TargetDirection(CATIAHybridShapeDirection * iDir); \
      virtual HRESULT __stdcall Compute(); \
      virtual HRESULT __stdcall AppendHybridShape(CATIAHybridShape * iHybridShape); \
      virtual HRESULT __stdcall get_Thickness(CATIAHybridShape *& oThickness); \
      virtual HRESULT  __stdcall get_Application(CATIAApplication *& oApplication); \
      virtual HRESULT  __stdcall get_Parent(CATBaseDispatch *& oParent); \
      virtual HRESULT  __stdcall get_Name(CATBSTR & oNameBSTR); \
      virtual HRESULT  __stdcall put_Name(const CATBSTR & iNameBSTR); \
      virtual HRESULT  __stdcall GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj); \
};



#define ENVTIEdeclare_CATIAHybridShapeUnfold(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
virtual HRESULT __stdcall get_SurfaceToUnfold(CATIAReference *& oElem); \
virtual HRESULT __stdcall put_SurfaceToUnfold(CATIAReference * iElem); \
virtual HRESULT __stdcall get_OriginToUnfold(CATIAReference *& oElem); \
virtual HRESULT __stdcall put_OriginToUnfold(CATIAReference * iElem); \
virtual HRESULT __stdcall get_DirectionToUnfold(CATIAReference *& oElem); \
virtual HRESULT __stdcall put_DirectionToUnfold(CATIAReference * iElem); \
virtual HRESULT __stdcall get_TargetPlane(CATIAReference *& oElem); \
virtual HRESULT __stdcall put_TargetPlane(CATIAReference * iElem); \
virtual HRESULT __stdcall AddEdgeToTear(CATIAReference * iElement); \
virtual HRESULT __stdcall GetEdgeToTear(CATLONG iRank, CATIAReference *& oElement); \
virtual HRESULT __stdcall RemoveEdgeToTear(CATLONG iRank); \
virtual HRESULT __stdcall get_SurfaceType(CATLONG & oType); \
virtual HRESULT __stdcall put_SurfaceType(CATLONG iType); \
virtual HRESULT __stdcall get_TargetOrientationMode(CATLONG & oMode); \
virtual HRESULT __stdcall put_TargetOrientationMode(CATLONG iMode); \
virtual HRESULT __stdcall get_EdgeToTearPositioningOrientation(CATLONG & oMode); \
virtual HRESULT __stdcall put_EdgeToTearPositioningOrientation(CATLONG iMode); \
virtual HRESULT __stdcall AddElementToTransfer(CATIAReference * iElement, CATLONG iTypeOfTransfer); \
virtual HRESULT __stdcall GetElementToTransfer(CATLONG iRank, CATIAReference *& opElement, CATLONG & oTypeOfTransfer); \
virtual HRESULT __stdcall RemoveElementToTransfer(CATLONG iRank); \
virtual HRESULT __stdcall ReplaceElementsToTransfer(CATLONG iRank, CATIAReference * iElement); \
virtual HRESULT __stdcall get_TargetOrigin(CATIAReference *& oElem); \
virtual HRESULT __stdcall put_TargetOrigin(CATIAReference * iElem); \
virtual HRESULT __stdcall get_TargetDirection(CATIAHybridShapeDirection *& oDir); \
virtual HRESULT __stdcall put_TargetDirection(CATIAHybridShapeDirection * iDir); \
virtual HRESULT __stdcall Compute(); \
virtual HRESULT __stdcall AppendHybridShape(CATIAHybridShape * iHybridShape); \
virtual HRESULT __stdcall get_Thickness(CATIAHybridShape *& oThickness); \
virtual HRESULT  __stdcall get_Application(CATIAApplication *& oApplication); \
virtual HRESULT  __stdcall get_Parent(CATBaseDispatch *& oParent); \
virtual HRESULT  __stdcall get_Name(CATBSTR & oNameBSTR); \
virtual HRESULT  __stdcall put_Name(const CATBSTR & iNameBSTR); \
virtual HRESULT  __stdcall GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj); \


#define ENVTIEdefine_CATIAHybridShapeUnfold(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
HRESULT __stdcall  ENVTIEName::get_SurfaceToUnfold(CATIAReference *& oElem) \
{ \
return (ENVTIECALL(CATIAHybridShapeUnfold,ENVTIETypeLetter,ENVTIELetter)get_SurfaceToUnfold(oElem)); \
} \
HRESULT __stdcall  ENVTIEName::put_SurfaceToUnfold(CATIAReference * iElem) \
{ \
return (ENVTIECALL(CATIAHybridShapeUnfold,ENVTIETypeLetter,ENVTIELetter)put_SurfaceToUnfold(iElem)); \
} \
HRESULT __stdcall  ENVTIEName::get_OriginToUnfold(CATIAReference *& oElem) \
{ \
return (ENVTIECALL(CATIAHybridShapeUnfold,ENVTIETypeLetter,ENVTIELetter)get_OriginToUnfold(oElem)); \
} \
HRESULT __stdcall  ENVTIEName::put_OriginToUnfold(CATIAReference * iElem) \
{ \
return (ENVTIECALL(CATIAHybridShapeUnfold,ENVTIETypeLetter,ENVTIELetter)put_OriginToUnfold(iElem)); \
} \
HRESULT __stdcall  ENVTIEName::get_DirectionToUnfold(CATIAReference *& oElem) \
{ \
return (ENVTIECALL(CATIAHybridShapeUnfold,ENVTIETypeLetter,ENVTIELetter)get_DirectionToUnfold(oElem)); \
} \
HRESULT __stdcall  ENVTIEName::put_DirectionToUnfold(CATIAReference * iElem) \
{ \
return (ENVTIECALL(CATIAHybridShapeUnfold,ENVTIETypeLetter,ENVTIELetter)put_DirectionToUnfold(iElem)); \
} \
HRESULT __stdcall  ENVTIEName::get_TargetPlane(CATIAReference *& oElem) \
{ \
return (ENVTIECALL(CATIAHybridShapeUnfold,ENVTIETypeLetter,ENVTIELetter)get_TargetPlane(oElem)); \
} \
HRESULT __stdcall  ENVTIEName::put_TargetPlane(CATIAReference * iElem) \
{ \
return (ENVTIECALL(CATIAHybridShapeUnfold,ENVTIETypeLetter,ENVTIELetter)put_TargetPlane(iElem)); \
} \
HRESULT __stdcall  ENVTIEName::AddEdgeToTear(CATIAReference * iElement) \
{ \
return (ENVTIECALL(CATIAHybridShapeUnfold,ENVTIETypeLetter,ENVTIELetter)AddEdgeToTear(iElement)); \
} \
HRESULT __stdcall  ENVTIEName::GetEdgeToTear(CATLONG iRank, CATIAReference *& oElement) \
{ \
return (ENVTIECALL(CATIAHybridShapeUnfold,ENVTIETypeLetter,ENVTIELetter)GetEdgeToTear(iRank,oElement)); \
} \
HRESULT __stdcall  ENVTIEName::RemoveEdgeToTear(CATLONG iRank) \
{ \
return (ENVTIECALL(CATIAHybridShapeUnfold,ENVTIETypeLetter,ENVTIELetter)RemoveEdgeToTear(iRank)); \
} \
HRESULT __stdcall  ENVTIEName::get_SurfaceType(CATLONG & oType) \
{ \
return (ENVTIECALL(CATIAHybridShapeUnfold,ENVTIETypeLetter,ENVTIELetter)get_SurfaceType(oType)); \
} \
HRESULT __stdcall  ENVTIEName::put_SurfaceType(CATLONG iType) \
{ \
return (ENVTIECALL(CATIAHybridShapeUnfold,ENVTIETypeLetter,ENVTIELetter)put_SurfaceType(iType)); \
} \
HRESULT __stdcall  ENVTIEName::get_TargetOrientationMode(CATLONG & oMode) \
{ \
return (ENVTIECALL(CATIAHybridShapeUnfold,ENVTIETypeLetter,ENVTIELetter)get_TargetOrientationMode(oMode)); \
} \
HRESULT __stdcall  ENVTIEName::put_TargetOrientationMode(CATLONG iMode) \
{ \
return (ENVTIECALL(CATIAHybridShapeUnfold,ENVTIETypeLetter,ENVTIELetter)put_TargetOrientationMode(iMode)); \
} \
HRESULT __stdcall  ENVTIEName::get_EdgeToTearPositioningOrientation(CATLONG & oMode) \
{ \
return (ENVTIECALL(CATIAHybridShapeUnfold,ENVTIETypeLetter,ENVTIELetter)get_EdgeToTearPositioningOrientation(oMode)); \
} \
HRESULT __stdcall  ENVTIEName::put_EdgeToTearPositioningOrientation(CATLONG iMode) \
{ \
return (ENVTIECALL(CATIAHybridShapeUnfold,ENVTIETypeLetter,ENVTIELetter)put_EdgeToTearPositioningOrientation(iMode)); \
} \
HRESULT __stdcall  ENVTIEName::AddElementToTransfer(CATIAReference * iElement, CATLONG iTypeOfTransfer) \
{ \
return (ENVTIECALL(CATIAHybridShapeUnfold,ENVTIETypeLetter,ENVTIELetter)AddElementToTransfer(iElement,iTypeOfTransfer)); \
} \
HRESULT __stdcall  ENVTIEName::GetElementToTransfer(CATLONG iRank, CATIAReference *& opElement, CATLONG & oTypeOfTransfer) \
{ \
return (ENVTIECALL(CATIAHybridShapeUnfold,ENVTIETypeLetter,ENVTIELetter)GetElementToTransfer(iRank,opElement,oTypeOfTransfer)); \
} \
HRESULT __stdcall  ENVTIEName::RemoveElementToTransfer(CATLONG iRank) \
{ \
return (ENVTIECALL(CATIAHybridShapeUnfold,ENVTIETypeLetter,ENVTIELetter)RemoveElementToTransfer(iRank)); \
} \
HRESULT __stdcall  ENVTIEName::ReplaceElementsToTransfer(CATLONG iRank, CATIAReference * iElement) \
{ \
return (ENVTIECALL(CATIAHybridShapeUnfold,ENVTIETypeLetter,ENVTIELetter)ReplaceElementsToTransfer(iRank,iElement)); \
} \
HRESULT __stdcall  ENVTIEName::get_TargetOrigin(CATIAReference *& oElem) \
{ \
return (ENVTIECALL(CATIAHybridShapeUnfold,ENVTIETypeLetter,ENVTIELetter)get_TargetOrigin(oElem)); \
} \
HRESULT __stdcall  ENVTIEName::put_TargetOrigin(CATIAReference * iElem) \
{ \
return (ENVTIECALL(CATIAHybridShapeUnfold,ENVTIETypeLetter,ENVTIELetter)put_TargetOrigin(iElem)); \
} \
HRESULT __stdcall  ENVTIEName::get_TargetDirection(CATIAHybridShapeDirection *& oDir) \
{ \
return (ENVTIECALL(CATIAHybridShapeUnfold,ENVTIETypeLetter,ENVTIELetter)get_TargetDirection(oDir)); \
} \
HRESULT __stdcall  ENVTIEName::put_TargetDirection(CATIAHybridShapeDirection * iDir) \
{ \
return (ENVTIECALL(CATIAHybridShapeUnfold,ENVTIETypeLetter,ENVTIELetter)put_TargetDirection(iDir)); \
} \
HRESULT __stdcall  ENVTIEName::Compute() \
{ \
return (ENVTIECALL(CATIAHybridShapeUnfold,ENVTIETypeLetter,ENVTIELetter)Compute()); \
} \
HRESULT __stdcall  ENVTIEName::AppendHybridShape(CATIAHybridShape * iHybridShape) \
{ \
return (ENVTIECALL(CATIAHybridShapeUnfold,ENVTIETypeLetter,ENVTIELetter)AppendHybridShape(iHybridShape)); \
} \
HRESULT __stdcall  ENVTIEName::get_Thickness(CATIAHybridShape *& oThickness) \
{ \
return (ENVTIECALL(CATIAHybridShapeUnfold,ENVTIETypeLetter,ENVTIELetter)get_Thickness(oThickness)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Application(CATIAApplication *& oApplication) \
{ \
return (ENVTIECALL(CATIAHybridShapeUnfold,ENVTIETypeLetter,ENVTIELetter)get_Application(oApplication)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Parent(CATBaseDispatch *& oParent) \
{ \
return (ENVTIECALL(CATIAHybridShapeUnfold,ENVTIETypeLetter,ENVTIELetter)get_Parent(oParent)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Name(CATBSTR & oNameBSTR) \
{ \
return (ENVTIECALL(CATIAHybridShapeUnfold,ENVTIETypeLetter,ENVTIELetter)get_Name(oNameBSTR)); \
} \
HRESULT  __stdcall  ENVTIEName::put_Name(const CATBSTR & iNameBSTR) \
{ \
return (ENVTIECALL(CATIAHybridShapeUnfold,ENVTIETypeLetter,ENVTIELetter)put_Name(iNameBSTR)); \
} \
HRESULT  __stdcall  ENVTIEName::GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj) \
{ \
return (ENVTIECALL(CATIAHybridShapeUnfold,ENVTIETypeLetter,ENVTIELetter)GetItem(IDName,RealObj)); \
} \


/* Name of the TIE class */
#define class_TIE_CATIAHybridShapeUnfold(classe)    TIECATIAHybridShapeUnfold##classe


/* Common methods inside a TIE */
#define common_TIE_CATIAHybridShapeUnfold(classe) \
 \
 \
/* Static initialization */ \
CATDefineCommonTIEMembers(CATIAHybridShapeUnfold, classe) \
 \
 \
CATImplementTIEMethods(CATIAHybridShapeUnfold, classe) \
CATImplementIUnknownMethodsForCATBaseUnknownTIE(CATIAHybridShapeUnfold, classe, 2) \
CATImplementIDispatchMethodsForCATBaseUnknownTIE(CATIAHybridShapeUnfold, classe) \
CATImplementCATBaseUnknownMethodsForTIE(CATIAHybridShapeUnfold, classe) \
 \
HRESULT __stdcall  TIECATIAHybridShapeUnfold##classe::get_SurfaceToUnfold(CATIAReference *& oElem) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,1,&_Trac2,&oElem); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_SurfaceToUnfold(oElem); \
   ExitAfterCall(this,1,_Trac2,&_ret_arg,&oElem); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeUnfold##classe::put_SurfaceToUnfold(CATIAReference * iElem) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,2,&_Trac2,&iElem); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_SurfaceToUnfold(iElem); \
   ExitAfterCall(this,2,_Trac2,&_ret_arg,&iElem); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeUnfold##classe::get_OriginToUnfold(CATIAReference *& oElem) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,3,&_Trac2,&oElem); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_OriginToUnfold(oElem); \
   ExitAfterCall(this,3,_Trac2,&_ret_arg,&oElem); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeUnfold##classe::put_OriginToUnfold(CATIAReference * iElem) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,4,&_Trac2,&iElem); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_OriginToUnfold(iElem); \
   ExitAfterCall(this,4,_Trac2,&_ret_arg,&iElem); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeUnfold##classe::get_DirectionToUnfold(CATIAReference *& oElem) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,5,&_Trac2,&oElem); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_DirectionToUnfold(oElem); \
   ExitAfterCall(this,5,_Trac2,&_ret_arg,&oElem); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeUnfold##classe::put_DirectionToUnfold(CATIAReference * iElem) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,6,&_Trac2,&iElem); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_DirectionToUnfold(iElem); \
   ExitAfterCall(this,6,_Trac2,&_ret_arg,&iElem); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeUnfold##classe::get_TargetPlane(CATIAReference *& oElem) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,7,&_Trac2,&oElem); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_TargetPlane(oElem); \
   ExitAfterCall(this,7,_Trac2,&_ret_arg,&oElem); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeUnfold##classe::put_TargetPlane(CATIAReference * iElem) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,8,&_Trac2,&iElem); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_TargetPlane(iElem); \
   ExitAfterCall(this,8,_Trac2,&_ret_arg,&iElem); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeUnfold##classe::AddEdgeToTear(CATIAReference * iElement) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,9,&_Trac2,&iElement); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->AddEdgeToTear(iElement); \
   ExitAfterCall(this,9,_Trac2,&_ret_arg,&iElement); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeUnfold##classe::GetEdgeToTear(CATLONG iRank, CATIAReference *& oElement) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,10,&_Trac2,&iRank,&oElement); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetEdgeToTear(iRank,oElement); \
   ExitAfterCall(this,10,_Trac2,&_ret_arg,&iRank,&oElement); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeUnfold##classe::RemoveEdgeToTear(CATLONG iRank) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,11,&_Trac2,&iRank); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->RemoveEdgeToTear(iRank); \
   ExitAfterCall(this,11,_Trac2,&_ret_arg,&iRank); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeUnfold##classe::get_SurfaceType(CATLONG & oType) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,12,&_Trac2,&oType); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_SurfaceType(oType); \
   ExitAfterCall(this,12,_Trac2,&_ret_arg,&oType); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeUnfold##classe::put_SurfaceType(CATLONG iType) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,13,&_Trac2,&iType); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_SurfaceType(iType); \
   ExitAfterCall(this,13,_Trac2,&_ret_arg,&iType); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeUnfold##classe::get_TargetOrientationMode(CATLONG & oMode) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,14,&_Trac2,&oMode); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_TargetOrientationMode(oMode); \
   ExitAfterCall(this,14,_Trac2,&_ret_arg,&oMode); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeUnfold##classe::put_TargetOrientationMode(CATLONG iMode) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,15,&_Trac2,&iMode); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_TargetOrientationMode(iMode); \
   ExitAfterCall(this,15,_Trac2,&_ret_arg,&iMode); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeUnfold##classe::get_EdgeToTearPositioningOrientation(CATLONG & oMode) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,16,&_Trac2,&oMode); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_EdgeToTearPositioningOrientation(oMode); \
   ExitAfterCall(this,16,_Trac2,&_ret_arg,&oMode); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeUnfold##classe::put_EdgeToTearPositioningOrientation(CATLONG iMode) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,17,&_Trac2,&iMode); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_EdgeToTearPositioningOrientation(iMode); \
   ExitAfterCall(this,17,_Trac2,&_ret_arg,&iMode); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeUnfold##classe::AddElementToTransfer(CATIAReference * iElement, CATLONG iTypeOfTransfer) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,18,&_Trac2,&iElement,&iTypeOfTransfer); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->AddElementToTransfer(iElement,iTypeOfTransfer); \
   ExitAfterCall(this,18,_Trac2,&_ret_arg,&iElement,&iTypeOfTransfer); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeUnfold##classe::GetElementToTransfer(CATLONG iRank, CATIAReference *& opElement, CATLONG & oTypeOfTransfer) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,19,&_Trac2,&iRank,&opElement,&oTypeOfTransfer); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetElementToTransfer(iRank,opElement,oTypeOfTransfer); \
   ExitAfterCall(this,19,_Trac2,&_ret_arg,&iRank,&opElement,&oTypeOfTransfer); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeUnfold##classe::RemoveElementToTransfer(CATLONG iRank) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,20,&_Trac2,&iRank); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->RemoveElementToTransfer(iRank); \
   ExitAfterCall(this,20,_Trac2,&_ret_arg,&iRank); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeUnfold##classe::ReplaceElementsToTransfer(CATLONG iRank, CATIAReference * iElement) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,21,&_Trac2,&iRank,&iElement); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->ReplaceElementsToTransfer(iRank,iElement); \
   ExitAfterCall(this,21,_Trac2,&_ret_arg,&iRank,&iElement); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeUnfold##classe::get_TargetOrigin(CATIAReference *& oElem) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,22,&_Trac2,&oElem); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_TargetOrigin(oElem); \
   ExitAfterCall(this,22,_Trac2,&_ret_arg,&oElem); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeUnfold##classe::put_TargetOrigin(CATIAReference * iElem) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,23,&_Trac2,&iElem); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_TargetOrigin(iElem); \
   ExitAfterCall(this,23,_Trac2,&_ret_arg,&iElem); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeUnfold##classe::get_TargetDirection(CATIAHybridShapeDirection *& oDir) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,24,&_Trac2,&oDir); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_TargetDirection(oDir); \
   ExitAfterCall(this,24,_Trac2,&_ret_arg,&oDir); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeUnfold##classe::put_TargetDirection(CATIAHybridShapeDirection * iDir) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,25,&_Trac2,&iDir); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_TargetDirection(iDir); \
   ExitAfterCall(this,25,_Trac2,&_ret_arg,&iDir); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeUnfold##classe::Compute() \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,26,&_Trac2); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->Compute(); \
   ExitAfterCall(this,26,_Trac2,&_ret_arg); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeUnfold##classe::AppendHybridShape(CATIAHybridShape * iHybridShape) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,27,&_Trac2,&iHybridShape); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->AppendHybridShape(iHybridShape); \
   ExitAfterCall(this,27,_Trac2,&_ret_arg,&iHybridShape); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeUnfold##classe::get_Thickness(CATIAHybridShape *& oThickness) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,28,&_Trac2,&oThickness); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Thickness(oThickness); \
   ExitAfterCall(this,28,_Trac2,&_ret_arg,&oThickness); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAHybridShapeUnfold##classe::get_Application(CATIAApplication *& oApplication) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,29,&_Trac2,&oApplication); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Application(oApplication); \
   ExitAfterCall(this,29,_Trac2,&_ret_arg,&oApplication); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAHybridShapeUnfold##classe::get_Parent(CATBaseDispatch *& oParent) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,30,&_Trac2,&oParent); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Parent(oParent); \
   ExitAfterCall(this,30,_Trac2,&_ret_arg,&oParent); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAHybridShapeUnfold##classe::get_Name(CATBSTR & oNameBSTR) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,31,&_Trac2,&oNameBSTR); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Name(oNameBSTR); \
   ExitAfterCall(this,31,_Trac2,&_ret_arg,&oNameBSTR); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAHybridShapeUnfold##classe::put_Name(const CATBSTR & iNameBSTR) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,32,&_Trac2,&iNameBSTR); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_Name(iNameBSTR); \
   ExitAfterCall(this,32,_Trac2,&_ret_arg,&iNameBSTR); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAHybridShapeUnfold##classe::GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,33,&_Trac2,&IDName,&RealObj); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetItem(IDName,RealObj); \
   ExitAfterCall(this,33,_Trac2,&_ret_arg,&IDName,&RealObj); \
   return(_ret_arg); \
} \



/* Macro used to link an implementation with an interface */
#define TIE_CATIAHybridShapeUnfold(classe) \
 \
 \
declare_TIE_CATIAHybridShapeUnfold(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIAHybridShapeUnfold##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIAHybridShapeUnfold,"CATIAHybridShapeUnfold",CATIAHybridShapeUnfold::MetaObject(),classe::MetaObject(),TIE); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIAHybridShapeUnfold(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIECreation(CATIAHybridShapeUnfold, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIAHybridShapeUnfold##classe(classe::MetaObject(),CATIAHybridShapeUnfold::MetaObject(),(void *)CreateTIECATIAHybridShapeUnfold##classe)



/* Macro used to link an implementation with an interface */
/* This TIE is chained on the implementation object */
#define TIEchain_CATIAHybridShapeUnfold(classe) \
 \
 \
declare_TIE_CATIAHybridShapeUnfold(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIAHybridShapeUnfold##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIAHybridShapeUnfold,"CATIAHybridShapeUnfold",CATIAHybridShapeUnfold::MetaObject(),classe::MetaObject(),TIEchain); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIAHybridShapeUnfold(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIEchainCreation(CATIAHybridShapeUnfold, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIAHybridShapeUnfold##classe(classe::MetaObject(),CATIAHybridShapeUnfold::MetaObject(),(void *)CreateTIECATIAHybridShapeUnfold##classe)


/* Macro to switch between BOA and TIE at build time */ 
#ifdef CATSYS_BOA_IS_TIE
#define BOA_CATIAHybridShapeUnfold(classe) TIE_CATIAHybridShapeUnfold(classe)
#else
#define BOA_CATIAHybridShapeUnfold(classe) CATImplementBOA(CATIAHybridShapeUnfold, classe)
#endif

#endif
