#ifndef __TIE_CATIASweep
#define __TIE_CATIASweep

#include <string.h>
#include "CATBaseUnknown.h"
#include "CATMetaClass.h"
#include "CATMacForTie.h"
#include "CATExitJournal.h"
#include "CATIASweep.h"
#include "JS0DSPA.h"


#ifdef _WINDOWS_SOURCE
#define Exported __declspec(dllexport)
#define Imported __declspec(dllimport)
#else
#define Exported 
#define Imported 
#endif


/* To link an implementation with the interface CATIASweep */
#define declare_TIE_CATIASweep(classe) \
 \
 \
class TIECATIASweep##classe : public CATIASweep \
{ \
   private: \
      CATDeclareCommonTIEMembers \
   public: \
      CATDeclareTIEMethods(CATIASweep, classe) \
      CATDeclareIUnknownMethodsForCATBaseUnknownTIE \
      CATDeclareIDispatchMethodsForCATBaseUnknownTIE \
      CATDeclareCATBaseUnknownMethodsForTIE \
      virtual HRESULT __stdcall get_CenterCurve(CATIASketch *& oCenterCurve); \
      virtual HRESULT __stdcall get_CenterCurveElement(CATIAReference *& oCenterCurveElement); \
      virtual HRESULT __stdcall put_CenterCurveElement(CATIAReference * iCenterCurveElement); \
      virtual HRESULT __stdcall get_ReferenceSurfaceElement(CATIAReference *& oReferenceSurfaceElement); \
      virtual HRESULT __stdcall put_ReferenceSurfaceElement(CATIAReference * iReferenceSurfaceElement); \
      virtual HRESULT __stdcall get_PullingDirElement(CATIAReference *& oPullingDirElement); \
      virtual HRESULT __stdcall put_PullingDirElement(CATIAReference * iPullingDirElement); \
      virtual HRESULT __stdcall get_MergeMode(CatMergeMode & oMergeMode); \
      virtual HRESULT __stdcall put_MergeMode(CatMergeMode iMergeMode); \
      virtual HRESULT __stdcall SetKeepAngleOption(); \
      virtual HRESULT __stdcall get_IsThin(CAT_VARIANT_BOOL & oIsThin); \
      virtual HRESULT __stdcall put_IsThin(CAT_VARIANT_BOOL iIsThin); \
      virtual HRESULT __stdcall get_NeutralFiber(CAT_VARIANT_BOOL & oIsNeutralFiber); \
      virtual HRESULT __stdcall put_NeutralFiber(CAT_VARIANT_BOOL iIsNeutralFiber); \
      virtual HRESULT __stdcall get_MergeEnd(CAT_VARIANT_BOOL & oIsMergeEnd); \
      virtual HRESULT __stdcall put_MergeEnd(CAT_VARIANT_BOOL iIsMergeEnd); \
      virtual HRESULT __stdcall get_MoveProfileToPath(CAT_VARIANT_BOOL & oIsMoveProfileToPath); \
      virtual HRESULT __stdcall put_MoveProfileToPath(CAT_VARIANT_BOOL iIsMoveProfileToPath); \
      virtual HRESULT __stdcall get_NormalAxisDirReverse(CAT_VARIANT_BOOL & oNormalAxisDirReverse); \
      virtual HRESULT __stdcall put_NormalAxisDirReverse(CAT_VARIANT_BOOL iNormalAxisDirReverse); \
      virtual HRESULT __stdcall get_AnchorDirReverse(CAT_VARIANT_BOOL & oAnchorDirReverse); \
      virtual HRESULT __stdcall put_AnchorDirReverse(CAT_VARIANT_BOOL iAnchorDirReverse); \
      virtual HRESULT __stdcall get_Sketch(CATIASketch *& oSketch); \
      virtual HRESULT __stdcall SetProfileElement(CATIAReference * iProfileElement); \
      virtual HRESULT  __stdcall get_Application(CATIAApplication *& oApplication); \
      virtual HRESULT  __stdcall get_Parent(CATBaseDispatch *& oParent); \
      virtual HRESULT  __stdcall get_Name(CATBSTR & oNameBSTR); \
      virtual HRESULT  __stdcall put_Name(const CATBSTR & iNameBSTR); \
      virtual HRESULT  __stdcall GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj); \
};



#define ENVTIEdeclare_CATIASweep(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
virtual HRESULT __stdcall get_CenterCurve(CATIASketch *& oCenterCurve); \
virtual HRESULT __stdcall get_CenterCurveElement(CATIAReference *& oCenterCurveElement); \
virtual HRESULT __stdcall put_CenterCurveElement(CATIAReference * iCenterCurveElement); \
virtual HRESULT __stdcall get_ReferenceSurfaceElement(CATIAReference *& oReferenceSurfaceElement); \
virtual HRESULT __stdcall put_ReferenceSurfaceElement(CATIAReference * iReferenceSurfaceElement); \
virtual HRESULT __stdcall get_PullingDirElement(CATIAReference *& oPullingDirElement); \
virtual HRESULT __stdcall put_PullingDirElement(CATIAReference * iPullingDirElement); \
virtual HRESULT __stdcall get_MergeMode(CatMergeMode & oMergeMode); \
virtual HRESULT __stdcall put_MergeMode(CatMergeMode iMergeMode); \
virtual HRESULT __stdcall SetKeepAngleOption(); \
virtual HRESULT __stdcall get_IsThin(CAT_VARIANT_BOOL & oIsThin); \
virtual HRESULT __stdcall put_IsThin(CAT_VARIANT_BOOL iIsThin); \
virtual HRESULT __stdcall get_NeutralFiber(CAT_VARIANT_BOOL & oIsNeutralFiber); \
virtual HRESULT __stdcall put_NeutralFiber(CAT_VARIANT_BOOL iIsNeutralFiber); \
virtual HRESULT __stdcall get_MergeEnd(CAT_VARIANT_BOOL & oIsMergeEnd); \
virtual HRESULT __stdcall put_MergeEnd(CAT_VARIANT_BOOL iIsMergeEnd); \
virtual HRESULT __stdcall get_MoveProfileToPath(CAT_VARIANT_BOOL & oIsMoveProfileToPath); \
virtual HRESULT __stdcall put_MoveProfileToPath(CAT_VARIANT_BOOL iIsMoveProfileToPath); \
virtual HRESULT __stdcall get_NormalAxisDirReverse(CAT_VARIANT_BOOL & oNormalAxisDirReverse); \
virtual HRESULT __stdcall put_NormalAxisDirReverse(CAT_VARIANT_BOOL iNormalAxisDirReverse); \
virtual HRESULT __stdcall get_AnchorDirReverse(CAT_VARIANT_BOOL & oAnchorDirReverse); \
virtual HRESULT __stdcall put_AnchorDirReverse(CAT_VARIANT_BOOL iAnchorDirReverse); \
virtual HRESULT __stdcall get_Sketch(CATIASketch *& oSketch); \
virtual HRESULT __stdcall SetProfileElement(CATIAReference * iProfileElement); \
virtual HRESULT  __stdcall get_Application(CATIAApplication *& oApplication); \
virtual HRESULT  __stdcall get_Parent(CATBaseDispatch *& oParent); \
virtual HRESULT  __stdcall get_Name(CATBSTR & oNameBSTR); \
virtual HRESULT  __stdcall put_Name(const CATBSTR & iNameBSTR); \
virtual HRESULT  __stdcall GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj); \


#define ENVTIEdefine_CATIASweep(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
HRESULT __stdcall  ENVTIEName::get_CenterCurve(CATIASketch *& oCenterCurve) \
{ \
return (ENVTIECALL(CATIASweep,ENVTIETypeLetter,ENVTIELetter)get_CenterCurve(oCenterCurve)); \
} \
HRESULT __stdcall  ENVTIEName::get_CenterCurveElement(CATIAReference *& oCenterCurveElement) \
{ \
return (ENVTIECALL(CATIASweep,ENVTIETypeLetter,ENVTIELetter)get_CenterCurveElement(oCenterCurveElement)); \
} \
HRESULT __stdcall  ENVTIEName::put_CenterCurveElement(CATIAReference * iCenterCurveElement) \
{ \
return (ENVTIECALL(CATIASweep,ENVTIETypeLetter,ENVTIELetter)put_CenterCurveElement(iCenterCurveElement)); \
} \
HRESULT __stdcall  ENVTIEName::get_ReferenceSurfaceElement(CATIAReference *& oReferenceSurfaceElement) \
{ \
return (ENVTIECALL(CATIASweep,ENVTIETypeLetter,ENVTIELetter)get_ReferenceSurfaceElement(oReferenceSurfaceElement)); \
} \
HRESULT __stdcall  ENVTIEName::put_ReferenceSurfaceElement(CATIAReference * iReferenceSurfaceElement) \
{ \
return (ENVTIECALL(CATIASweep,ENVTIETypeLetter,ENVTIELetter)put_ReferenceSurfaceElement(iReferenceSurfaceElement)); \
} \
HRESULT __stdcall  ENVTIEName::get_PullingDirElement(CATIAReference *& oPullingDirElement) \
{ \
return (ENVTIECALL(CATIASweep,ENVTIETypeLetter,ENVTIELetter)get_PullingDirElement(oPullingDirElement)); \
} \
HRESULT __stdcall  ENVTIEName::put_PullingDirElement(CATIAReference * iPullingDirElement) \
{ \
return (ENVTIECALL(CATIASweep,ENVTIETypeLetter,ENVTIELetter)put_PullingDirElement(iPullingDirElement)); \
} \
HRESULT __stdcall  ENVTIEName::get_MergeMode(CatMergeMode & oMergeMode) \
{ \
return (ENVTIECALL(CATIASweep,ENVTIETypeLetter,ENVTIELetter)get_MergeMode(oMergeMode)); \
} \
HRESULT __stdcall  ENVTIEName::put_MergeMode(CatMergeMode iMergeMode) \
{ \
return (ENVTIECALL(CATIASweep,ENVTIETypeLetter,ENVTIELetter)put_MergeMode(iMergeMode)); \
} \
HRESULT __stdcall  ENVTIEName::SetKeepAngleOption() \
{ \
return (ENVTIECALL(CATIASweep,ENVTIETypeLetter,ENVTIELetter)SetKeepAngleOption()); \
} \
HRESULT __stdcall  ENVTIEName::get_IsThin(CAT_VARIANT_BOOL & oIsThin) \
{ \
return (ENVTIECALL(CATIASweep,ENVTIETypeLetter,ENVTIELetter)get_IsThin(oIsThin)); \
} \
HRESULT __stdcall  ENVTIEName::put_IsThin(CAT_VARIANT_BOOL iIsThin) \
{ \
return (ENVTIECALL(CATIASweep,ENVTIETypeLetter,ENVTIELetter)put_IsThin(iIsThin)); \
} \
HRESULT __stdcall  ENVTIEName::get_NeutralFiber(CAT_VARIANT_BOOL & oIsNeutralFiber) \
{ \
return (ENVTIECALL(CATIASweep,ENVTIETypeLetter,ENVTIELetter)get_NeutralFiber(oIsNeutralFiber)); \
} \
HRESULT __stdcall  ENVTIEName::put_NeutralFiber(CAT_VARIANT_BOOL iIsNeutralFiber) \
{ \
return (ENVTIECALL(CATIASweep,ENVTIETypeLetter,ENVTIELetter)put_NeutralFiber(iIsNeutralFiber)); \
} \
HRESULT __stdcall  ENVTIEName::get_MergeEnd(CAT_VARIANT_BOOL & oIsMergeEnd) \
{ \
return (ENVTIECALL(CATIASweep,ENVTIETypeLetter,ENVTIELetter)get_MergeEnd(oIsMergeEnd)); \
} \
HRESULT __stdcall  ENVTIEName::put_MergeEnd(CAT_VARIANT_BOOL iIsMergeEnd) \
{ \
return (ENVTIECALL(CATIASweep,ENVTIETypeLetter,ENVTIELetter)put_MergeEnd(iIsMergeEnd)); \
} \
HRESULT __stdcall  ENVTIEName::get_MoveProfileToPath(CAT_VARIANT_BOOL & oIsMoveProfileToPath) \
{ \
return (ENVTIECALL(CATIASweep,ENVTIETypeLetter,ENVTIELetter)get_MoveProfileToPath(oIsMoveProfileToPath)); \
} \
HRESULT __stdcall  ENVTIEName::put_MoveProfileToPath(CAT_VARIANT_BOOL iIsMoveProfileToPath) \
{ \
return (ENVTIECALL(CATIASweep,ENVTIETypeLetter,ENVTIELetter)put_MoveProfileToPath(iIsMoveProfileToPath)); \
} \
HRESULT __stdcall  ENVTIEName::get_NormalAxisDirReverse(CAT_VARIANT_BOOL & oNormalAxisDirReverse) \
{ \
return (ENVTIECALL(CATIASweep,ENVTIETypeLetter,ENVTIELetter)get_NormalAxisDirReverse(oNormalAxisDirReverse)); \
} \
HRESULT __stdcall  ENVTIEName::put_NormalAxisDirReverse(CAT_VARIANT_BOOL iNormalAxisDirReverse) \
{ \
return (ENVTIECALL(CATIASweep,ENVTIETypeLetter,ENVTIELetter)put_NormalAxisDirReverse(iNormalAxisDirReverse)); \
} \
HRESULT __stdcall  ENVTIEName::get_AnchorDirReverse(CAT_VARIANT_BOOL & oAnchorDirReverse) \
{ \
return (ENVTIECALL(CATIASweep,ENVTIETypeLetter,ENVTIELetter)get_AnchorDirReverse(oAnchorDirReverse)); \
} \
HRESULT __stdcall  ENVTIEName::put_AnchorDirReverse(CAT_VARIANT_BOOL iAnchorDirReverse) \
{ \
return (ENVTIECALL(CATIASweep,ENVTIETypeLetter,ENVTIELetter)put_AnchorDirReverse(iAnchorDirReverse)); \
} \
HRESULT __stdcall  ENVTIEName::get_Sketch(CATIASketch *& oSketch) \
{ \
return (ENVTIECALL(CATIASweep,ENVTIETypeLetter,ENVTIELetter)get_Sketch(oSketch)); \
} \
HRESULT __stdcall  ENVTIEName::SetProfileElement(CATIAReference * iProfileElement) \
{ \
return (ENVTIECALL(CATIASweep,ENVTIETypeLetter,ENVTIELetter)SetProfileElement(iProfileElement)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Application(CATIAApplication *& oApplication) \
{ \
return (ENVTIECALL(CATIASweep,ENVTIETypeLetter,ENVTIELetter)get_Application(oApplication)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Parent(CATBaseDispatch *& oParent) \
{ \
return (ENVTIECALL(CATIASweep,ENVTIETypeLetter,ENVTIELetter)get_Parent(oParent)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Name(CATBSTR & oNameBSTR) \
{ \
return (ENVTIECALL(CATIASweep,ENVTIETypeLetter,ENVTIELetter)get_Name(oNameBSTR)); \
} \
HRESULT  __stdcall  ENVTIEName::put_Name(const CATBSTR & iNameBSTR) \
{ \
return (ENVTIECALL(CATIASweep,ENVTIETypeLetter,ENVTIELetter)put_Name(iNameBSTR)); \
} \
HRESULT  __stdcall  ENVTIEName::GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj) \
{ \
return (ENVTIECALL(CATIASweep,ENVTIETypeLetter,ENVTIELetter)GetItem(IDName,RealObj)); \
} \


/* Name of the TIE class */
#define class_TIE_CATIASweep(classe)    TIECATIASweep##classe


/* Common methods inside a TIE */
#define common_TIE_CATIASweep(classe) \
 \
 \
/* Static initialization */ \
CATDefineCommonTIEMembers(CATIASweep, classe) \
 \
 \
CATImplementTIEMethods(CATIASweep, classe) \
CATImplementIUnknownMethodsForCATBaseUnknownTIE(CATIASweep, classe, 2) \
CATImplementIDispatchMethodsForCATBaseUnknownTIE(CATIASweep, classe) \
CATImplementCATBaseUnknownMethodsForTIE(CATIASweep, classe) \
 \
HRESULT __stdcall  TIECATIASweep##classe::get_CenterCurve(CATIASketch *& oCenterCurve) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,1,&_Trac2,&oCenterCurve); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_CenterCurve(oCenterCurve); \
   ExitAfterCall(this,1,_Trac2,&_ret_arg,&oCenterCurve); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIASweep##classe::get_CenterCurveElement(CATIAReference *& oCenterCurveElement) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,2,&_Trac2,&oCenterCurveElement); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_CenterCurveElement(oCenterCurveElement); \
   ExitAfterCall(this,2,_Trac2,&_ret_arg,&oCenterCurveElement); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIASweep##classe::put_CenterCurveElement(CATIAReference * iCenterCurveElement) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,3,&_Trac2,&iCenterCurveElement); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_CenterCurveElement(iCenterCurveElement); \
   ExitAfterCall(this,3,_Trac2,&_ret_arg,&iCenterCurveElement); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIASweep##classe::get_ReferenceSurfaceElement(CATIAReference *& oReferenceSurfaceElement) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,4,&_Trac2,&oReferenceSurfaceElement); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_ReferenceSurfaceElement(oReferenceSurfaceElement); \
   ExitAfterCall(this,4,_Trac2,&_ret_arg,&oReferenceSurfaceElement); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIASweep##classe::put_ReferenceSurfaceElement(CATIAReference * iReferenceSurfaceElement) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,5,&_Trac2,&iReferenceSurfaceElement); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_ReferenceSurfaceElement(iReferenceSurfaceElement); \
   ExitAfterCall(this,5,_Trac2,&_ret_arg,&iReferenceSurfaceElement); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIASweep##classe::get_PullingDirElement(CATIAReference *& oPullingDirElement) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,6,&_Trac2,&oPullingDirElement); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_PullingDirElement(oPullingDirElement); \
   ExitAfterCall(this,6,_Trac2,&_ret_arg,&oPullingDirElement); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIASweep##classe::put_PullingDirElement(CATIAReference * iPullingDirElement) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,7,&_Trac2,&iPullingDirElement); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_PullingDirElement(iPullingDirElement); \
   ExitAfterCall(this,7,_Trac2,&_ret_arg,&iPullingDirElement); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIASweep##classe::get_MergeMode(CatMergeMode & oMergeMode) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,8,&_Trac2,&oMergeMode); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_MergeMode(oMergeMode); \
   ExitAfterCall(this,8,_Trac2,&_ret_arg,&oMergeMode); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIASweep##classe::put_MergeMode(CatMergeMode iMergeMode) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,9,&_Trac2,&iMergeMode); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_MergeMode(iMergeMode); \
   ExitAfterCall(this,9,_Trac2,&_ret_arg,&iMergeMode); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIASweep##classe::SetKeepAngleOption() \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,10,&_Trac2); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetKeepAngleOption(); \
   ExitAfterCall(this,10,_Trac2,&_ret_arg); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIASweep##classe::get_IsThin(CAT_VARIANT_BOOL & oIsThin) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,11,&_Trac2,&oIsThin); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_IsThin(oIsThin); \
   ExitAfterCall(this,11,_Trac2,&_ret_arg,&oIsThin); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIASweep##classe::put_IsThin(CAT_VARIANT_BOOL iIsThin) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,12,&_Trac2,&iIsThin); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_IsThin(iIsThin); \
   ExitAfterCall(this,12,_Trac2,&_ret_arg,&iIsThin); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIASweep##classe::get_NeutralFiber(CAT_VARIANT_BOOL & oIsNeutralFiber) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,13,&_Trac2,&oIsNeutralFiber); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_NeutralFiber(oIsNeutralFiber); \
   ExitAfterCall(this,13,_Trac2,&_ret_arg,&oIsNeutralFiber); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIASweep##classe::put_NeutralFiber(CAT_VARIANT_BOOL iIsNeutralFiber) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,14,&_Trac2,&iIsNeutralFiber); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_NeutralFiber(iIsNeutralFiber); \
   ExitAfterCall(this,14,_Trac2,&_ret_arg,&iIsNeutralFiber); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIASweep##classe::get_MergeEnd(CAT_VARIANT_BOOL & oIsMergeEnd) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,15,&_Trac2,&oIsMergeEnd); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_MergeEnd(oIsMergeEnd); \
   ExitAfterCall(this,15,_Trac2,&_ret_arg,&oIsMergeEnd); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIASweep##classe::put_MergeEnd(CAT_VARIANT_BOOL iIsMergeEnd) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,16,&_Trac2,&iIsMergeEnd); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_MergeEnd(iIsMergeEnd); \
   ExitAfterCall(this,16,_Trac2,&_ret_arg,&iIsMergeEnd); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIASweep##classe::get_MoveProfileToPath(CAT_VARIANT_BOOL & oIsMoveProfileToPath) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,17,&_Trac2,&oIsMoveProfileToPath); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_MoveProfileToPath(oIsMoveProfileToPath); \
   ExitAfterCall(this,17,_Trac2,&_ret_arg,&oIsMoveProfileToPath); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIASweep##classe::put_MoveProfileToPath(CAT_VARIANT_BOOL iIsMoveProfileToPath) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,18,&_Trac2,&iIsMoveProfileToPath); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_MoveProfileToPath(iIsMoveProfileToPath); \
   ExitAfterCall(this,18,_Trac2,&_ret_arg,&iIsMoveProfileToPath); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIASweep##classe::get_NormalAxisDirReverse(CAT_VARIANT_BOOL & oNormalAxisDirReverse) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,19,&_Trac2,&oNormalAxisDirReverse); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_NormalAxisDirReverse(oNormalAxisDirReverse); \
   ExitAfterCall(this,19,_Trac2,&_ret_arg,&oNormalAxisDirReverse); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIASweep##classe::put_NormalAxisDirReverse(CAT_VARIANT_BOOL iNormalAxisDirReverse) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,20,&_Trac2,&iNormalAxisDirReverse); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_NormalAxisDirReverse(iNormalAxisDirReverse); \
   ExitAfterCall(this,20,_Trac2,&_ret_arg,&iNormalAxisDirReverse); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIASweep##classe::get_AnchorDirReverse(CAT_VARIANT_BOOL & oAnchorDirReverse) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,21,&_Trac2,&oAnchorDirReverse); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_AnchorDirReverse(oAnchorDirReverse); \
   ExitAfterCall(this,21,_Trac2,&_ret_arg,&oAnchorDirReverse); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIASweep##classe::put_AnchorDirReverse(CAT_VARIANT_BOOL iAnchorDirReverse) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,22,&_Trac2,&iAnchorDirReverse); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_AnchorDirReverse(iAnchorDirReverse); \
   ExitAfterCall(this,22,_Trac2,&_ret_arg,&iAnchorDirReverse); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIASweep##classe::get_Sketch(CATIASketch *& oSketch) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,23,&_Trac2,&oSketch); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Sketch(oSketch); \
   ExitAfterCall(this,23,_Trac2,&_ret_arg,&oSketch); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIASweep##classe::SetProfileElement(CATIAReference * iProfileElement) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,24,&_Trac2,&iProfileElement); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetProfileElement(iProfileElement); \
   ExitAfterCall(this,24,_Trac2,&_ret_arg,&iProfileElement); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIASweep##classe::get_Application(CATIAApplication *& oApplication) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,25,&_Trac2,&oApplication); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Application(oApplication); \
   ExitAfterCall(this,25,_Trac2,&_ret_arg,&oApplication); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIASweep##classe::get_Parent(CATBaseDispatch *& oParent) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,26,&_Trac2,&oParent); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Parent(oParent); \
   ExitAfterCall(this,26,_Trac2,&_ret_arg,&oParent); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIASweep##classe::get_Name(CATBSTR & oNameBSTR) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,27,&_Trac2,&oNameBSTR); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Name(oNameBSTR); \
   ExitAfterCall(this,27,_Trac2,&_ret_arg,&oNameBSTR); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIASweep##classe::put_Name(const CATBSTR & iNameBSTR) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,28,&_Trac2,&iNameBSTR); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_Name(iNameBSTR); \
   ExitAfterCall(this,28,_Trac2,&_ret_arg,&iNameBSTR); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIASweep##classe::GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,29,&_Trac2,&IDName,&RealObj); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetItem(IDName,RealObj); \
   ExitAfterCall(this,29,_Trac2,&_ret_arg,&IDName,&RealObj); \
   return(_ret_arg); \
} \



/* Macro used to link an implementation with an interface */
#define TIE_CATIASweep(classe) \
 \
 \
declare_TIE_CATIASweep(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIASweep##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIASweep,"CATIASweep",CATIASweep::MetaObject(),classe::MetaObject(),TIE); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIASweep(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIECreation(CATIASweep, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIASweep##classe(classe::MetaObject(),CATIASweep::MetaObject(),(void *)CreateTIECATIASweep##classe)



/* Macro used to link an implementation with an interface */
/* This TIE is chained on the implementation object */
#define TIEchain_CATIASweep(classe) \
 \
 \
declare_TIE_CATIASweep(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIASweep##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIASweep,"CATIASweep",CATIASweep::MetaObject(),classe::MetaObject(),TIEchain); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIASweep(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIEchainCreation(CATIASweep, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIASweep##classe(classe::MetaObject(),CATIASweep::MetaObject(),(void *)CreateTIECATIASweep##classe)


/* Macro to switch between BOA and TIE at build time */ 
#ifdef CATSYS_BOA_IS_TIE
#define BOA_CATIASweep(classe) TIE_CATIASweep(classe)
#else
#define BOA_CATIASweep(classe) CATImplementBOA(CATIASweep, classe)
#endif

#endif
