#ifndef __TIE_CATIAHybridShapeProject
#define __TIE_CATIAHybridShapeProject

#include <string.h>
#include "CATBaseUnknown.h"
#include "CATMetaClass.h"
#include "CATMacForTie.h"
#include "CATExitJournal.h"
#include "CATIAHybridShapeProject.h"
#include "JS0DSPA.h"


#ifdef _WINDOWS_SOURCE
#define Exported __declspec(dllexport)
#define Imported __declspec(dllimport)
#else
#define Exported 
#define Imported 
#endif


/* To link an implementation with the interface CATIAHybridShapeProject */
#define declare_TIE_CATIAHybridShapeProject(classe) \
 \
 \
class TIECATIAHybridShapeProject##classe : public CATIAHybridShapeProject \
{ \
   private: \
      CATDeclareCommonTIEMembers \
   public: \
      CATDeclareTIEMethods(CATIAHybridShapeProject, classe) \
      CATDeclareIUnknownMethodsForCATBaseUnknownTIE \
      CATDeclareIDispatchMethodsForCATBaseUnknownTIE \
      CATDeclareCATBaseUnknownMethodsForTIE \
      virtual HRESULT __stdcall get_ElemToProject(CATIAReference *& oElem); \
      virtual HRESULT __stdcall put_ElemToProject(CATIAReference * iElem); \
      virtual HRESULT __stdcall get_Direction(CATIAHybridShapeDirection *& oElem); \
      virtual HRESULT __stdcall put_Direction(CATIAHybridShapeDirection * iElem); \
      virtual HRESULT __stdcall get_Support(CATIAReference *& oElem); \
      virtual HRESULT __stdcall put_Support(CATIAReference * iElem); \
      virtual HRESULT __stdcall get_Normal(CAT_VARIANT_BOOL & oNormal); \
      virtual HRESULT __stdcall put_Normal(CAT_VARIANT_BOOL iNormal); \
      virtual HRESULT __stdcall get_SolutionType(CATLONG & oSolutionType); \
      virtual HRESULT __stdcall put_SolutionType(CATLONG iSolutionType); \
      virtual HRESULT __stdcall get_SmoothingType(CATLONG & oType); \
      virtual HRESULT __stdcall put_SmoothingType(CATLONG iType); \
      virtual HRESULT __stdcall get_MaximumDeviationValue(double & oDevValue); \
      virtual HRESULT __stdcall put_MaximumDeviationValue(double iDevValue); \
      virtual HRESULT __stdcall get_p3DSmoothing(CAT_VARIANT_BOOL & o3DSmoothing); \
      virtual HRESULT __stdcall put_p3DSmoothing(CAT_VARIANT_BOOL i3DSmoothing); \
      virtual HRESULT __stdcall get_ExtrapolationMode(CATLONG & oExtrapolationMode); \
      virtual HRESULT __stdcall put_ExtrapolationMode(CATLONG iExtrapolationMode); \
      virtual HRESULT __stdcall Compute(); \
      virtual HRESULT __stdcall AppendHybridShape(CATIAHybridShape * iHybridShape); \
      virtual HRESULT __stdcall get_Thickness(CATIAHybridShape *& oThickness); \
      virtual HRESULT  __stdcall get_Application(CATIAApplication *& oApplication); \
      virtual HRESULT  __stdcall get_Parent(CATBaseDispatch *& oParent); \
      virtual HRESULT  __stdcall get_Name(CATBSTR & oNameBSTR); \
      virtual HRESULT  __stdcall put_Name(const CATBSTR & iNameBSTR); \
      virtual HRESULT  __stdcall GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj); \
};



#define ENVTIEdeclare_CATIAHybridShapeProject(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
virtual HRESULT __stdcall get_ElemToProject(CATIAReference *& oElem); \
virtual HRESULT __stdcall put_ElemToProject(CATIAReference * iElem); \
virtual HRESULT __stdcall get_Direction(CATIAHybridShapeDirection *& oElem); \
virtual HRESULT __stdcall put_Direction(CATIAHybridShapeDirection * iElem); \
virtual HRESULT __stdcall get_Support(CATIAReference *& oElem); \
virtual HRESULT __stdcall put_Support(CATIAReference * iElem); \
virtual HRESULT __stdcall get_Normal(CAT_VARIANT_BOOL & oNormal); \
virtual HRESULT __stdcall put_Normal(CAT_VARIANT_BOOL iNormal); \
virtual HRESULT __stdcall get_SolutionType(CATLONG & oSolutionType); \
virtual HRESULT __stdcall put_SolutionType(CATLONG iSolutionType); \
virtual HRESULT __stdcall get_SmoothingType(CATLONG & oType); \
virtual HRESULT __stdcall put_SmoothingType(CATLONG iType); \
virtual HRESULT __stdcall get_MaximumDeviationValue(double & oDevValue); \
virtual HRESULT __stdcall put_MaximumDeviationValue(double iDevValue); \
virtual HRESULT __stdcall get_p3DSmoothing(CAT_VARIANT_BOOL & o3DSmoothing); \
virtual HRESULT __stdcall put_p3DSmoothing(CAT_VARIANT_BOOL i3DSmoothing); \
virtual HRESULT __stdcall get_ExtrapolationMode(CATLONG & oExtrapolationMode); \
virtual HRESULT __stdcall put_ExtrapolationMode(CATLONG iExtrapolationMode); \
virtual HRESULT __stdcall Compute(); \
virtual HRESULT __stdcall AppendHybridShape(CATIAHybridShape * iHybridShape); \
virtual HRESULT __stdcall get_Thickness(CATIAHybridShape *& oThickness); \
virtual HRESULT  __stdcall get_Application(CATIAApplication *& oApplication); \
virtual HRESULT  __stdcall get_Parent(CATBaseDispatch *& oParent); \
virtual HRESULT  __stdcall get_Name(CATBSTR & oNameBSTR); \
virtual HRESULT  __stdcall put_Name(const CATBSTR & iNameBSTR); \
virtual HRESULT  __stdcall GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj); \


#define ENVTIEdefine_CATIAHybridShapeProject(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
HRESULT __stdcall  ENVTIEName::get_ElemToProject(CATIAReference *& oElem) \
{ \
return (ENVTIECALL(CATIAHybridShapeProject,ENVTIETypeLetter,ENVTIELetter)get_ElemToProject(oElem)); \
} \
HRESULT __stdcall  ENVTIEName::put_ElemToProject(CATIAReference * iElem) \
{ \
return (ENVTIECALL(CATIAHybridShapeProject,ENVTIETypeLetter,ENVTIELetter)put_ElemToProject(iElem)); \
} \
HRESULT __stdcall  ENVTIEName::get_Direction(CATIAHybridShapeDirection *& oElem) \
{ \
return (ENVTIECALL(CATIAHybridShapeProject,ENVTIETypeLetter,ENVTIELetter)get_Direction(oElem)); \
} \
HRESULT __stdcall  ENVTIEName::put_Direction(CATIAHybridShapeDirection * iElem) \
{ \
return (ENVTIECALL(CATIAHybridShapeProject,ENVTIETypeLetter,ENVTIELetter)put_Direction(iElem)); \
} \
HRESULT __stdcall  ENVTIEName::get_Support(CATIAReference *& oElem) \
{ \
return (ENVTIECALL(CATIAHybridShapeProject,ENVTIETypeLetter,ENVTIELetter)get_Support(oElem)); \
} \
HRESULT __stdcall  ENVTIEName::put_Support(CATIAReference * iElem) \
{ \
return (ENVTIECALL(CATIAHybridShapeProject,ENVTIETypeLetter,ENVTIELetter)put_Support(iElem)); \
} \
HRESULT __stdcall  ENVTIEName::get_Normal(CAT_VARIANT_BOOL & oNormal) \
{ \
return (ENVTIECALL(CATIAHybridShapeProject,ENVTIETypeLetter,ENVTIELetter)get_Normal(oNormal)); \
} \
HRESULT __stdcall  ENVTIEName::put_Normal(CAT_VARIANT_BOOL iNormal) \
{ \
return (ENVTIECALL(CATIAHybridShapeProject,ENVTIETypeLetter,ENVTIELetter)put_Normal(iNormal)); \
} \
HRESULT __stdcall  ENVTIEName::get_SolutionType(CATLONG & oSolutionType) \
{ \
return (ENVTIECALL(CATIAHybridShapeProject,ENVTIETypeLetter,ENVTIELetter)get_SolutionType(oSolutionType)); \
} \
HRESULT __stdcall  ENVTIEName::put_SolutionType(CATLONG iSolutionType) \
{ \
return (ENVTIECALL(CATIAHybridShapeProject,ENVTIETypeLetter,ENVTIELetter)put_SolutionType(iSolutionType)); \
} \
HRESULT __stdcall  ENVTIEName::get_SmoothingType(CATLONG & oType) \
{ \
return (ENVTIECALL(CATIAHybridShapeProject,ENVTIETypeLetter,ENVTIELetter)get_SmoothingType(oType)); \
} \
HRESULT __stdcall  ENVTIEName::put_SmoothingType(CATLONG iType) \
{ \
return (ENVTIECALL(CATIAHybridShapeProject,ENVTIETypeLetter,ENVTIELetter)put_SmoothingType(iType)); \
} \
HRESULT __stdcall  ENVTIEName::get_MaximumDeviationValue(double & oDevValue) \
{ \
return (ENVTIECALL(CATIAHybridShapeProject,ENVTIETypeLetter,ENVTIELetter)get_MaximumDeviationValue(oDevValue)); \
} \
HRESULT __stdcall  ENVTIEName::put_MaximumDeviationValue(double iDevValue) \
{ \
return (ENVTIECALL(CATIAHybridShapeProject,ENVTIETypeLetter,ENVTIELetter)put_MaximumDeviationValue(iDevValue)); \
} \
HRESULT __stdcall  ENVTIEName::get_p3DSmoothing(CAT_VARIANT_BOOL & o3DSmoothing) \
{ \
return (ENVTIECALL(CATIAHybridShapeProject,ENVTIETypeLetter,ENVTIELetter)get_p3DSmoothing(o3DSmoothing)); \
} \
HRESULT __stdcall  ENVTIEName::put_p3DSmoothing(CAT_VARIANT_BOOL i3DSmoothing) \
{ \
return (ENVTIECALL(CATIAHybridShapeProject,ENVTIETypeLetter,ENVTIELetter)put_p3DSmoothing(i3DSmoothing)); \
} \
HRESULT __stdcall  ENVTIEName::get_ExtrapolationMode(CATLONG & oExtrapolationMode) \
{ \
return (ENVTIECALL(CATIAHybridShapeProject,ENVTIETypeLetter,ENVTIELetter)get_ExtrapolationMode(oExtrapolationMode)); \
} \
HRESULT __stdcall  ENVTIEName::put_ExtrapolationMode(CATLONG iExtrapolationMode) \
{ \
return (ENVTIECALL(CATIAHybridShapeProject,ENVTIETypeLetter,ENVTIELetter)put_ExtrapolationMode(iExtrapolationMode)); \
} \
HRESULT __stdcall  ENVTIEName::Compute() \
{ \
return (ENVTIECALL(CATIAHybridShapeProject,ENVTIETypeLetter,ENVTIELetter)Compute()); \
} \
HRESULT __stdcall  ENVTIEName::AppendHybridShape(CATIAHybridShape * iHybridShape) \
{ \
return (ENVTIECALL(CATIAHybridShapeProject,ENVTIETypeLetter,ENVTIELetter)AppendHybridShape(iHybridShape)); \
} \
HRESULT __stdcall  ENVTIEName::get_Thickness(CATIAHybridShape *& oThickness) \
{ \
return (ENVTIECALL(CATIAHybridShapeProject,ENVTIETypeLetter,ENVTIELetter)get_Thickness(oThickness)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Application(CATIAApplication *& oApplication) \
{ \
return (ENVTIECALL(CATIAHybridShapeProject,ENVTIETypeLetter,ENVTIELetter)get_Application(oApplication)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Parent(CATBaseDispatch *& oParent) \
{ \
return (ENVTIECALL(CATIAHybridShapeProject,ENVTIETypeLetter,ENVTIELetter)get_Parent(oParent)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Name(CATBSTR & oNameBSTR) \
{ \
return (ENVTIECALL(CATIAHybridShapeProject,ENVTIETypeLetter,ENVTIELetter)get_Name(oNameBSTR)); \
} \
HRESULT  __stdcall  ENVTIEName::put_Name(const CATBSTR & iNameBSTR) \
{ \
return (ENVTIECALL(CATIAHybridShapeProject,ENVTIETypeLetter,ENVTIELetter)put_Name(iNameBSTR)); \
} \
HRESULT  __stdcall  ENVTIEName::GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj) \
{ \
return (ENVTIECALL(CATIAHybridShapeProject,ENVTIETypeLetter,ENVTIELetter)GetItem(IDName,RealObj)); \
} \


/* Name of the TIE class */
#define class_TIE_CATIAHybridShapeProject(classe)    TIECATIAHybridShapeProject##classe


/* Common methods inside a TIE */
#define common_TIE_CATIAHybridShapeProject(classe) \
 \
 \
/* Static initialization */ \
CATDefineCommonTIEMembers(CATIAHybridShapeProject, classe) \
 \
 \
CATImplementTIEMethods(CATIAHybridShapeProject, classe) \
CATImplementIUnknownMethodsForCATBaseUnknownTIE(CATIAHybridShapeProject, classe, 2) \
CATImplementIDispatchMethodsForCATBaseUnknownTIE(CATIAHybridShapeProject, classe) \
CATImplementCATBaseUnknownMethodsForTIE(CATIAHybridShapeProject, classe) \
 \
HRESULT __stdcall  TIECATIAHybridShapeProject##classe::get_ElemToProject(CATIAReference *& oElem) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,1,&_Trac2,&oElem); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_ElemToProject(oElem); \
   ExitAfterCall(this,1,_Trac2,&_ret_arg,&oElem); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeProject##classe::put_ElemToProject(CATIAReference * iElem) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,2,&_Trac2,&iElem); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_ElemToProject(iElem); \
   ExitAfterCall(this,2,_Trac2,&_ret_arg,&iElem); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeProject##classe::get_Direction(CATIAHybridShapeDirection *& oElem) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,3,&_Trac2,&oElem); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Direction(oElem); \
   ExitAfterCall(this,3,_Trac2,&_ret_arg,&oElem); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeProject##classe::put_Direction(CATIAHybridShapeDirection * iElem) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,4,&_Trac2,&iElem); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_Direction(iElem); \
   ExitAfterCall(this,4,_Trac2,&_ret_arg,&iElem); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeProject##classe::get_Support(CATIAReference *& oElem) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,5,&_Trac2,&oElem); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Support(oElem); \
   ExitAfterCall(this,5,_Trac2,&_ret_arg,&oElem); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeProject##classe::put_Support(CATIAReference * iElem) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,6,&_Trac2,&iElem); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_Support(iElem); \
   ExitAfterCall(this,6,_Trac2,&_ret_arg,&iElem); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeProject##classe::get_Normal(CAT_VARIANT_BOOL & oNormal) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,7,&_Trac2,&oNormal); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Normal(oNormal); \
   ExitAfterCall(this,7,_Trac2,&_ret_arg,&oNormal); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeProject##classe::put_Normal(CAT_VARIANT_BOOL iNormal) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,8,&_Trac2,&iNormal); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_Normal(iNormal); \
   ExitAfterCall(this,8,_Trac2,&_ret_arg,&iNormal); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeProject##classe::get_SolutionType(CATLONG & oSolutionType) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,9,&_Trac2,&oSolutionType); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_SolutionType(oSolutionType); \
   ExitAfterCall(this,9,_Trac2,&_ret_arg,&oSolutionType); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeProject##classe::put_SolutionType(CATLONG iSolutionType) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,10,&_Trac2,&iSolutionType); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_SolutionType(iSolutionType); \
   ExitAfterCall(this,10,_Trac2,&_ret_arg,&iSolutionType); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeProject##classe::get_SmoothingType(CATLONG & oType) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,11,&_Trac2,&oType); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_SmoothingType(oType); \
   ExitAfterCall(this,11,_Trac2,&_ret_arg,&oType); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeProject##classe::put_SmoothingType(CATLONG iType) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,12,&_Trac2,&iType); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_SmoothingType(iType); \
   ExitAfterCall(this,12,_Trac2,&_ret_arg,&iType); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeProject##classe::get_MaximumDeviationValue(double & oDevValue) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,13,&_Trac2,&oDevValue); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_MaximumDeviationValue(oDevValue); \
   ExitAfterCall(this,13,_Trac2,&_ret_arg,&oDevValue); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeProject##classe::put_MaximumDeviationValue(double iDevValue) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,14,&_Trac2,&iDevValue); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_MaximumDeviationValue(iDevValue); \
   ExitAfterCall(this,14,_Trac2,&_ret_arg,&iDevValue); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeProject##classe::get_p3DSmoothing(CAT_VARIANT_BOOL & o3DSmoothing) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,15,&_Trac2,&o3DSmoothing); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_p3DSmoothing(o3DSmoothing); \
   ExitAfterCall(this,15,_Trac2,&_ret_arg,&o3DSmoothing); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeProject##classe::put_p3DSmoothing(CAT_VARIANT_BOOL i3DSmoothing) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,16,&_Trac2,&i3DSmoothing); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_p3DSmoothing(i3DSmoothing); \
   ExitAfterCall(this,16,_Trac2,&_ret_arg,&i3DSmoothing); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeProject##classe::get_ExtrapolationMode(CATLONG & oExtrapolationMode) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,17,&_Trac2,&oExtrapolationMode); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_ExtrapolationMode(oExtrapolationMode); \
   ExitAfterCall(this,17,_Trac2,&_ret_arg,&oExtrapolationMode); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeProject##classe::put_ExtrapolationMode(CATLONG iExtrapolationMode) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,18,&_Trac2,&iExtrapolationMode); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_ExtrapolationMode(iExtrapolationMode); \
   ExitAfterCall(this,18,_Trac2,&_ret_arg,&iExtrapolationMode); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeProject##classe::Compute() \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,19,&_Trac2); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->Compute(); \
   ExitAfterCall(this,19,_Trac2,&_ret_arg); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeProject##classe::AppendHybridShape(CATIAHybridShape * iHybridShape) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,20,&_Trac2,&iHybridShape); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->AppendHybridShape(iHybridShape); \
   ExitAfterCall(this,20,_Trac2,&_ret_arg,&iHybridShape); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeProject##classe::get_Thickness(CATIAHybridShape *& oThickness) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,21,&_Trac2,&oThickness); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Thickness(oThickness); \
   ExitAfterCall(this,21,_Trac2,&_ret_arg,&oThickness); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAHybridShapeProject##classe::get_Application(CATIAApplication *& oApplication) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,22,&_Trac2,&oApplication); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Application(oApplication); \
   ExitAfterCall(this,22,_Trac2,&_ret_arg,&oApplication); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAHybridShapeProject##classe::get_Parent(CATBaseDispatch *& oParent) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,23,&_Trac2,&oParent); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Parent(oParent); \
   ExitAfterCall(this,23,_Trac2,&_ret_arg,&oParent); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAHybridShapeProject##classe::get_Name(CATBSTR & oNameBSTR) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,24,&_Trac2,&oNameBSTR); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Name(oNameBSTR); \
   ExitAfterCall(this,24,_Trac2,&_ret_arg,&oNameBSTR); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAHybridShapeProject##classe::put_Name(const CATBSTR & iNameBSTR) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,25,&_Trac2,&iNameBSTR); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_Name(iNameBSTR); \
   ExitAfterCall(this,25,_Trac2,&_ret_arg,&iNameBSTR); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAHybridShapeProject##classe::GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,26,&_Trac2,&IDName,&RealObj); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetItem(IDName,RealObj); \
   ExitAfterCall(this,26,_Trac2,&_ret_arg,&IDName,&RealObj); \
   return(_ret_arg); \
} \



/* Macro used to link an implementation with an interface */
#define TIE_CATIAHybridShapeProject(classe) \
 \
 \
declare_TIE_CATIAHybridShapeProject(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIAHybridShapeProject##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIAHybridShapeProject,"CATIAHybridShapeProject",CATIAHybridShapeProject::MetaObject(),classe::MetaObject(),TIE); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIAHybridShapeProject(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIECreation(CATIAHybridShapeProject, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIAHybridShapeProject##classe(classe::MetaObject(),CATIAHybridShapeProject::MetaObject(),(void *)CreateTIECATIAHybridShapeProject##classe)



/* Macro used to link an implementation with an interface */
/* This TIE is chained on the implementation object */
#define TIEchain_CATIAHybridShapeProject(classe) \
 \
 \
declare_TIE_CATIAHybridShapeProject(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIAHybridShapeProject##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIAHybridShapeProject,"CATIAHybridShapeProject",CATIAHybridShapeProject::MetaObject(),classe::MetaObject(),TIEchain); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIAHybridShapeProject(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIEchainCreation(CATIAHybridShapeProject, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIAHybridShapeProject##classe(classe::MetaObject(),CATIAHybridShapeProject::MetaObject(),(void *)CreateTIECATIAHybridShapeProject##classe)


/* Macro to switch between BOA and TIE at build time */ 
#ifdef CATSYS_BOA_IS_TIE
#define BOA_CATIAHybridShapeProject(classe) TIE_CATIAHybridShapeProject(classe)
#else
#define BOA_CATIAHybridShapeProject(classe) CATImplementBOA(CATIAHybridShapeProject, classe)
#endif

#endif
