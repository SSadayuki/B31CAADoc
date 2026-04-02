#ifndef __TIE_CATIAHybridShapeIntegratedLaw
#define __TIE_CATIAHybridShapeIntegratedLaw

#include <string.h>
#include "CATBaseUnknown.h"
#include "CATMetaClass.h"
#include "CATMacForTie.h"
#include "CATExitJournal.h"
#include "CATIAHybridShapeIntegratedLaw.h"
#include "JS0DSPA.h"


#ifdef _WINDOWS_SOURCE
#define Exported __declspec(dllexport)
#define Imported __declspec(dllimport)
#else
#define Exported 
#define Imported 
#endif


/* To link an implementation with the interface CATIAHybridShapeIntegratedLaw */
#define declare_TIE_CATIAHybridShapeIntegratedLaw(classe) \
 \
 \
class TIECATIAHybridShapeIntegratedLaw##classe : public CATIAHybridShapeIntegratedLaw \
{ \
   private: \
      CATDeclareCommonTIEMembers \
   public: \
      CATDeclareTIEMethods(CATIAHybridShapeIntegratedLaw, classe) \
      CATDeclareIUnknownMethodsForCATBaseUnknownTIE \
      CATDeclareIDispatchMethodsForCATBaseUnknownTIE \
      CATDeclareCATBaseUnknownMethodsForTIE \
      virtual HRESULT __stdcall get_PitchLawType(CATLONG & oType); \
      virtual HRESULT __stdcall put_PitchLawType(CATLONG iType); \
      virtual HRESULT __stdcall get_InvertMappingLaw(CAT_VARIANT_BOOL & oType); \
      virtual HRESULT __stdcall put_InvertMappingLaw(CAT_VARIANT_BOOL iType); \
      virtual HRESULT __stdcall get_Spine(CATIAReference *& oSpine); \
      virtual HRESULT __stdcall put_Spine(CATIAReference * iSpine); \
      virtual HRESULT __stdcall get_ImplicitLawInterpolationMode(CATLONG & oMode); \
      virtual HRESULT __stdcall put_ImplicitLawInterpolationMode(CATLONG iMode); \
      virtual HRESULT __stdcall get_StartParam(CATIALength *& oStartParam); \
      virtual HRESULT __stdcall SetStartParam(CATLONG iStartParam); \
      virtual HRESULT __stdcall get_EndParam(CATIALength *& oEndParam); \
      virtual HRESULT __stdcall SetEndParam(CATLONG iEndParam); \
      virtual HRESULT __stdcall AppendNewPointAndParam(CATIAReference * iPoint, CATLONG iParam); \
      virtual HRESULT __stdcall RemovePointAndParam(CATIAReference * iPoint); \
      virtual HRESULT __stdcall RemoveAllPointsAndParams(); \
      virtual HRESULT __stdcall GetPointAndParam(CATLONG iPos, CATIAReference *& oPoint, CATIAReference *& oParam); \
      virtual HRESULT __stdcall GetSize(CATLONG & oSize); \
      virtual HRESULT __stdcall get_AdvancedLaw(CATIAReference *& oLaw); \
      virtual HRESULT __stdcall put_AdvancedLaw(CATIAReference * iLaw); \
      virtual HRESULT __stdcall Compute(); \
      virtual HRESULT __stdcall AppendHybridShape(CATIAHybridShape * iHybridShape); \
      virtual HRESULT __stdcall get_Thickness(CATIAHybridShape *& oThickness); \
      virtual HRESULT  __stdcall get_Application(CATIAApplication *& oApplication); \
      virtual HRESULT  __stdcall get_Parent(CATBaseDispatch *& oParent); \
      virtual HRESULT  __stdcall get_Name(CATBSTR & oNameBSTR); \
      virtual HRESULT  __stdcall put_Name(const CATBSTR & iNameBSTR); \
      virtual HRESULT  __stdcall GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj); \
};



#define ENVTIEdeclare_CATIAHybridShapeIntegratedLaw(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
virtual HRESULT __stdcall get_PitchLawType(CATLONG & oType); \
virtual HRESULT __stdcall put_PitchLawType(CATLONG iType); \
virtual HRESULT __stdcall get_InvertMappingLaw(CAT_VARIANT_BOOL & oType); \
virtual HRESULT __stdcall put_InvertMappingLaw(CAT_VARIANT_BOOL iType); \
virtual HRESULT __stdcall get_Spine(CATIAReference *& oSpine); \
virtual HRESULT __stdcall put_Spine(CATIAReference * iSpine); \
virtual HRESULT __stdcall get_ImplicitLawInterpolationMode(CATLONG & oMode); \
virtual HRESULT __stdcall put_ImplicitLawInterpolationMode(CATLONG iMode); \
virtual HRESULT __stdcall get_StartParam(CATIALength *& oStartParam); \
virtual HRESULT __stdcall SetStartParam(CATLONG iStartParam); \
virtual HRESULT __stdcall get_EndParam(CATIALength *& oEndParam); \
virtual HRESULT __stdcall SetEndParam(CATLONG iEndParam); \
virtual HRESULT __stdcall AppendNewPointAndParam(CATIAReference * iPoint, CATLONG iParam); \
virtual HRESULT __stdcall RemovePointAndParam(CATIAReference * iPoint); \
virtual HRESULT __stdcall RemoveAllPointsAndParams(); \
virtual HRESULT __stdcall GetPointAndParam(CATLONG iPos, CATIAReference *& oPoint, CATIAReference *& oParam); \
virtual HRESULT __stdcall GetSize(CATLONG & oSize); \
virtual HRESULT __stdcall get_AdvancedLaw(CATIAReference *& oLaw); \
virtual HRESULT __stdcall put_AdvancedLaw(CATIAReference * iLaw); \
virtual HRESULT __stdcall Compute(); \
virtual HRESULT __stdcall AppendHybridShape(CATIAHybridShape * iHybridShape); \
virtual HRESULT __stdcall get_Thickness(CATIAHybridShape *& oThickness); \
virtual HRESULT  __stdcall get_Application(CATIAApplication *& oApplication); \
virtual HRESULT  __stdcall get_Parent(CATBaseDispatch *& oParent); \
virtual HRESULT  __stdcall get_Name(CATBSTR & oNameBSTR); \
virtual HRESULT  __stdcall put_Name(const CATBSTR & iNameBSTR); \
virtual HRESULT  __stdcall GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj); \


#define ENVTIEdefine_CATIAHybridShapeIntegratedLaw(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
HRESULT __stdcall  ENVTIEName::get_PitchLawType(CATLONG & oType) \
{ \
return (ENVTIECALL(CATIAHybridShapeIntegratedLaw,ENVTIETypeLetter,ENVTIELetter)get_PitchLawType(oType)); \
} \
HRESULT __stdcall  ENVTIEName::put_PitchLawType(CATLONG iType) \
{ \
return (ENVTIECALL(CATIAHybridShapeIntegratedLaw,ENVTIETypeLetter,ENVTIELetter)put_PitchLawType(iType)); \
} \
HRESULT __stdcall  ENVTIEName::get_InvertMappingLaw(CAT_VARIANT_BOOL & oType) \
{ \
return (ENVTIECALL(CATIAHybridShapeIntegratedLaw,ENVTIETypeLetter,ENVTIELetter)get_InvertMappingLaw(oType)); \
} \
HRESULT __stdcall  ENVTIEName::put_InvertMappingLaw(CAT_VARIANT_BOOL iType) \
{ \
return (ENVTIECALL(CATIAHybridShapeIntegratedLaw,ENVTIETypeLetter,ENVTIELetter)put_InvertMappingLaw(iType)); \
} \
HRESULT __stdcall  ENVTIEName::get_Spine(CATIAReference *& oSpine) \
{ \
return (ENVTIECALL(CATIAHybridShapeIntegratedLaw,ENVTIETypeLetter,ENVTIELetter)get_Spine(oSpine)); \
} \
HRESULT __stdcall  ENVTIEName::put_Spine(CATIAReference * iSpine) \
{ \
return (ENVTIECALL(CATIAHybridShapeIntegratedLaw,ENVTIETypeLetter,ENVTIELetter)put_Spine(iSpine)); \
} \
HRESULT __stdcall  ENVTIEName::get_ImplicitLawInterpolationMode(CATLONG & oMode) \
{ \
return (ENVTIECALL(CATIAHybridShapeIntegratedLaw,ENVTIETypeLetter,ENVTIELetter)get_ImplicitLawInterpolationMode(oMode)); \
} \
HRESULT __stdcall  ENVTIEName::put_ImplicitLawInterpolationMode(CATLONG iMode) \
{ \
return (ENVTIECALL(CATIAHybridShapeIntegratedLaw,ENVTIETypeLetter,ENVTIELetter)put_ImplicitLawInterpolationMode(iMode)); \
} \
HRESULT __stdcall  ENVTIEName::get_StartParam(CATIALength *& oStartParam) \
{ \
return (ENVTIECALL(CATIAHybridShapeIntegratedLaw,ENVTIETypeLetter,ENVTIELetter)get_StartParam(oStartParam)); \
} \
HRESULT __stdcall  ENVTIEName::SetStartParam(CATLONG iStartParam) \
{ \
return (ENVTIECALL(CATIAHybridShapeIntegratedLaw,ENVTIETypeLetter,ENVTIELetter)SetStartParam(iStartParam)); \
} \
HRESULT __stdcall  ENVTIEName::get_EndParam(CATIALength *& oEndParam) \
{ \
return (ENVTIECALL(CATIAHybridShapeIntegratedLaw,ENVTIETypeLetter,ENVTIELetter)get_EndParam(oEndParam)); \
} \
HRESULT __stdcall  ENVTIEName::SetEndParam(CATLONG iEndParam) \
{ \
return (ENVTIECALL(CATIAHybridShapeIntegratedLaw,ENVTIETypeLetter,ENVTIELetter)SetEndParam(iEndParam)); \
} \
HRESULT __stdcall  ENVTIEName::AppendNewPointAndParam(CATIAReference * iPoint, CATLONG iParam) \
{ \
return (ENVTIECALL(CATIAHybridShapeIntegratedLaw,ENVTIETypeLetter,ENVTIELetter)AppendNewPointAndParam(iPoint,iParam)); \
} \
HRESULT __stdcall  ENVTIEName::RemovePointAndParam(CATIAReference * iPoint) \
{ \
return (ENVTIECALL(CATIAHybridShapeIntegratedLaw,ENVTIETypeLetter,ENVTIELetter)RemovePointAndParam(iPoint)); \
} \
HRESULT __stdcall  ENVTIEName::RemoveAllPointsAndParams() \
{ \
return (ENVTIECALL(CATIAHybridShapeIntegratedLaw,ENVTIETypeLetter,ENVTIELetter)RemoveAllPointsAndParams()); \
} \
HRESULT __stdcall  ENVTIEName::GetPointAndParam(CATLONG iPos, CATIAReference *& oPoint, CATIAReference *& oParam) \
{ \
return (ENVTIECALL(CATIAHybridShapeIntegratedLaw,ENVTIETypeLetter,ENVTIELetter)GetPointAndParam(iPos,oPoint,oParam)); \
} \
HRESULT __stdcall  ENVTIEName::GetSize(CATLONG & oSize) \
{ \
return (ENVTIECALL(CATIAHybridShapeIntegratedLaw,ENVTIETypeLetter,ENVTIELetter)GetSize(oSize)); \
} \
HRESULT __stdcall  ENVTIEName::get_AdvancedLaw(CATIAReference *& oLaw) \
{ \
return (ENVTIECALL(CATIAHybridShapeIntegratedLaw,ENVTIETypeLetter,ENVTIELetter)get_AdvancedLaw(oLaw)); \
} \
HRESULT __stdcall  ENVTIEName::put_AdvancedLaw(CATIAReference * iLaw) \
{ \
return (ENVTIECALL(CATIAHybridShapeIntegratedLaw,ENVTIETypeLetter,ENVTIELetter)put_AdvancedLaw(iLaw)); \
} \
HRESULT __stdcall  ENVTIEName::Compute() \
{ \
return (ENVTIECALL(CATIAHybridShapeIntegratedLaw,ENVTIETypeLetter,ENVTIELetter)Compute()); \
} \
HRESULT __stdcall  ENVTIEName::AppendHybridShape(CATIAHybridShape * iHybridShape) \
{ \
return (ENVTIECALL(CATIAHybridShapeIntegratedLaw,ENVTIETypeLetter,ENVTIELetter)AppendHybridShape(iHybridShape)); \
} \
HRESULT __stdcall  ENVTIEName::get_Thickness(CATIAHybridShape *& oThickness) \
{ \
return (ENVTIECALL(CATIAHybridShapeIntegratedLaw,ENVTIETypeLetter,ENVTIELetter)get_Thickness(oThickness)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Application(CATIAApplication *& oApplication) \
{ \
return (ENVTIECALL(CATIAHybridShapeIntegratedLaw,ENVTIETypeLetter,ENVTIELetter)get_Application(oApplication)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Parent(CATBaseDispatch *& oParent) \
{ \
return (ENVTIECALL(CATIAHybridShapeIntegratedLaw,ENVTIETypeLetter,ENVTIELetter)get_Parent(oParent)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Name(CATBSTR & oNameBSTR) \
{ \
return (ENVTIECALL(CATIAHybridShapeIntegratedLaw,ENVTIETypeLetter,ENVTIELetter)get_Name(oNameBSTR)); \
} \
HRESULT  __stdcall  ENVTIEName::put_Name(const CATBSTR & iNameBSTR) \
{ \
return (ENVTIECALL(CATIAHybridShapeIntegratedLaw,ENVTIETypeLetter,ENVTIELetter)put_Name(iNameBSTR)); \
} \
HRESULT  __stdcall  ENVTIEName::GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj) \
{ \
return (ENVTIECALL(CATIAHybridShapeIntegratedLaw,ENVTIETypeLetter,ENVTIELetter)GetItem(IDName,RealObj)); \
} \


/* Name of the TIE class */
#define class_TIE_CATIAHybridShapeIntegratedLaw(classe)    TIECATIAHybridShapeIntegratedLaw##classe


/* Common methods inside a TIE */
#define common_TIE_CATIAHybridShapeIntegratedLaw(classe) \
 \
 \
/* Static initialization */ \
CATDefineCommonTIEMembers(CATIAHybridShapeIntegratedLaw, classe) \
 \
 \
CATImplementTIEMethods(CATIAHybridShapeIntegratedLaw, classe) \
CATImplementIUnknownMethodsForCATBaseUnknownTIE(CATIAHybridShapeIntegratedLaw, classe, 2) \
CATImplementIDispatchMethodsForCATBaseUnknownTIE(CATIAHybridShapeIntegratedLaw, classe) \
CATImplementCATBaseUnknownMethodsForTIE(CATIAHybridShapeIntegratedLaw, classe) \
 \
HRESULT __stdcall  TIECATIAHybridShapeIntegratedLaw##classe::get_PitchLawType(CATLONG & oType) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,1,&_Trac2,&oType); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_PitchLawType(oType); \
   ExitAfterCall(this,1,_Trac2,&_ret_arg,&oType); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeIntegratedLaw##classe::put_PitchLawType(CATLONG iType) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,2,&_Trac2,&iType); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_PitchLawType(iType); \
   ExitAfterCall(this,2,_Trac2,&_ret_arg,&iType); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeIntegratedLaw##classe::get_InvertMappingLaw(CAT_VARIANT_BOOL & oType) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,3,&_Trac2,&oType); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_InvertMappingLaw(oType); \
   ExitAfterCall(this,3,_Trac2,&_ret_arg,&oType); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeIntegratedLaw##classe::put_InvertMappingLaw(CAT_VARIANT_BOOL iType) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,4,&_Trac2,&iType); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_InvertMappingLaw(iType); \
   ExitAfterCall(this,4,_Trac2,&_ret_arg,&iType); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeIntegratedLaw##classe::get_Spine(CATIAReference *& oSpine) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,5,&_Trac2,&oSpine); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Spine(oSpine); \
   ExitAfterCall(this,5,_Trac2,&_ret_arg,&oSpine); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeIntegratedLaw##classe::put_Spine(CATIAReference * iSpine) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,6,&_Trac2,&iSpine); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_Spine(iSpine); \
   ExitAfterCall(this,6,_Trac2,&_ret_arg,&iSpine); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeIntegratedLaw##classe::get_ImplicitLawInterpolationMode(CATLONG & oMode) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,7,&_Trac2,&oMode); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_ImplicitLawInterpolationMode(oMode); \
   ExitAfterCall(this,7,_Trac2,&_ret_arg,&oMode); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeIntegratedLaw##classe::put_ImplicitLawInterpolationMode(CATLONG iMode) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,8,&_Trac2,&iMode); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_ImplicitLawInterpolationMode(iMode); \
   ExitAfterCall(this,8,_Trac2,&_ret_arg,&iMode); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeIntegratedLaw##classe::get_StartParam(CATIALength *& oStartParam) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,9,&_Trac2,&oStartParam); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_StartParam(oStartParam); \
   ExitAfterCall(this,9,_Trac2,&_ret_arg,&oStartParam); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeIntegratedLaw##classe::SetStartParam(CATLONG iStartParam) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,10,&_Trac2,&iStartParam); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetStartParam(iStartParam); \
   ExitAfterCall(this,10,_Trac2,&_ret_arg,&iStartParam); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeIntegratedLaw##classe::get_EndParam(CATIALength *& oEndParam) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,11,&_Trac2,&oEndParam); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_EndParam(oEndParam); \
   ExitAfterCall(this,11,_Trac2,&_ret_arg,&oEndParam); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeIntegratedLaw##classe::SetEndParam(CATLONG iEndParam) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,12,&_Trac2,&iEndParam); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetEndParam(iEndParam); \
   ExitAfterCall(this,12,_Trac2,&_ret_arg,&iEndParam); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeIntegratedLaw##classe::AppendNewPointAndParam(CATIAReference * iPoint, CATLONG iParam) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,13,&_Trac2,&iPoint,&iParam); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->AppendNewPointAndParam(iPoint,iParam); \
   ExitAfterCall(this,13,_Trac2,&_ret_arg,&iPoint,&iParam); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeIntegratedLaw##classe::RemovePointAndParam(CATIAReference * iPoint) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,14,&_Trac2,&iPoint); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->RemovePointAndParam(iPoint); \
   ExitAfterCall(this,14,_Trac2,&_ret_arg,&iPoint); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeIntegratedLaw##classe::RemoveAllPointsAndParams() \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,15,&_Trac2); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->RemoveAllPointsAndParams(); \
   ExitAfterCall(this,15,_Trac2,&_ret_arg); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeIntegratedLaw##classe::GetPointAndParam(CATLONG iPos, CATIAReference *& oPoint, CATIAReference *& oParam) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,16,&_Trac2,&iPos,&oPoint,&oParam); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetPointAndParam(iPos,oPoint,oParam); \
   ExitAfterCall(this,16,_Trac2,&_ret_arg,&iPos,&oPoint,&oParam); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeIntegratedLaw##classe::GetSize(CATLONG & oSize) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,17,&_Trac2,&oSize); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetSize(oSize); \
   ExitAfterCall(this,17,_Trac2,&_ret_arg,&oSize); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeIntegratedLaw##classe::get_AdvancedLaw(CATIAReference *& oLaw) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,18,&_Trac2,&oLaw); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_AdvancedLaw(oLaw); \
   ExitAfterCall(this,18,_Trac2,&_ret_arg,&oLaw); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeIntegratedLaw##classe::put_AdvancedLaw(CATIAReference * iLaw) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,19,&_Trac2,&iLaw); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_AdvancedLaw(iLaw); \
   ExitAfterCall(this,19,_Trac2,&_ret_arg,&iLaw); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeIntegratedLaw##classe::Compute() \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,20,&_Trac2); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->Compute(); \
   ExitAfterCall(this,20,_Trac2,&_ret_arg); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeIntegratedLaw##classe::AppendHybridShape(CATIAHybridShape * iHybridShape) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,21,&_Trac2,&iHybridShape); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->AppendHybridShape(iHybridShape); \
   ExitAfterCall(this,21,_Trac2,&_ret_arg,&iHybridShape); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeIntegratedLaw##classe::get_Thickness(CATIAHybridShape *& oThickness) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,22,&_Trac2,&oThickness); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Thickness(oThickness); \
   ExitAfterCall(this,22,_Trac2,&_ret_arg,&oThickness); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAHybridShapeIntegratedLaw##classe::get_Application(CATIAApplication *& oApplication) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,23,&_Trac2,&oApplication); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Application(oApplication); \
   ExitAfterCall(this,23,_Trac2,&_ret_arg,&oApplication); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAHybridShapeIntegratedLaw##classe::get_Parent(CATBaseDispatch *& oParent) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,24,&_Trac2,&oParent); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Parent(oParent); \
   ExitAfterCall(this,24,_Trac2,&_ret_arg,&oParent); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAHybridShapeIntegratedLaw##classe::get_Name(CATBSTR & oNameBSTR) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,25,&_Trac2,&oNameBSTR); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Name(oNameBSTR); \
   ExitAfterCall(this,25,_Trac2,&_ret_arg,&oNameBSTR); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAHybridShapeIntegratedLaw##classe::put_Name(const CATBSTR & iNameBSTR) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,26,&_Trac2,&iNameBSTR); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_Name(iNameBSTR); \
   ExitAfterCall(this,26,_Trac2,&_ret_arg,&iNameBSTR); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAHybridShapeIntegratedLaw##classe::GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,27,&_Trac2,&IDName,&RealObj); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetItem(IDName,RealObj); \
   ExitAfterCall(this,27,_Trac2,&_ret_arg,&IDName,&RealObj); \
   return(_ret_arg); \
} \



/* Macro used to link an implementation with an interface */
#define TIE_CATIAHybridShapeIntegratedLaw(classe) \
 \
 \
declare_TIE_CATIAHybridShapeIntegratedLaw(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIAHybridShapeIntegratedLaw##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIAHybridShapeIntegratedLaw,"CATIAHybridShapeIntegratedLaw",CATIAHybridShapeIntegratedLaw::MetaObject(),classe::MetaObject(),TIE); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIAHybridShapeIntegratedLaw(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIECreation(CATIAHybridShapeIntegratedLaw, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIAHybridShapeIntegratedLaw##classe(classe::MetaObject(),CATIAHybridShapeIntegratedLaw::MetaObject(),(void *)CreateTIECATIAHybridShapeIntegratedLaw##classe)



/* Macro used to link an implementation with an interface */
/* This TIE is chained on the implementation object */
#define TIEchain_CATIAHybridShapeIntegratedLaw(classe) \
 \
 \
declare_TIE_CATIAHybridShapeIntegratedLaw(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIAHybridShapeIntegratedLaw##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIAHybridShapeIntegratedLaw,"CATIAHybridShapeIntegratedLaw",CATIAHybridShapeIntegratedLaw::MetaObject(),classe::MetaObject(),TIEchain); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIAHybridShapeIntegratedLaw(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIEchainCreation(CATIAHybridShapeIntegratedLaw, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIAHybridShapeIntegratedLaw##classe(classe::MetaObject(),CATIAHybridShapeIntegratedLaw::MetaObject(),(void *)CreateTIECATIAHybridShapeIntegratedLaw##classe)


/* Macro to switch between BOA and TIE at build time */ 
#ifdef CATSYS_BOA_IS_TIE
#define BOA_CATIAHybridShapeIntegratedLaw(classe) TIE_CATIAHybridShapeIntegratedLaw(classe)
#else
#define BOA_CATIAHybridShapeIntegratedLaw(classe) CATImplementBOA(CATIAHybridShapeIntegratedLaw, classe)
#endif

#endif
