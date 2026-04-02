#ifndef __TIE_CATIAHybridShapeExtractMulti
#define __TIE_CATIAHybridShapeExtractMulti

#include <string.h>
#include "CATBaseUnknown.h"
#include "CATMetaClass.h"
#include "CATMacForTie.h"
#include "CATExitJournal.h"
#include "CATIAHybridShapeExtractMulti.h"
#include "JS0DSPA.h"


#ifdef _WINDOWS_SOURCE
#define Exported __declspec(dllexport)
#define Imported __declspec(dllimport)
#else
#define Exported 
#define Imported 
#endif


/* To link an implementation with the interface CATIAHybridShapeExtractMulti */
#define declare_TIE_CATIAHybridShapeExtractMulti(classe) \
 \
 \
class TIECATIAHybridShapeExtractMulti##classe : public CATIAHybridShapeExtractMulti \
{ \
   private: \
      CATDeclareCommonTIEMembers \
   public: \
      CATDeclareTIEMethods(CATIAHybridShapeExtractMulti, classe) \
      CATDeclareIUnknownMethodsForCATBaseUnknownTIE \
      CATDeclareIDispatchMethodsForCATBaseUnknownTIE \
      CATDeclareCATBaseUnknownMethodsForTIE \
      virtual HRESULT __stdcall GetElement(CATLONG iPos, CATIAReference *& oElem); \
      virtual HRESULT __stdcall SetElement(CATLONG iPos, CATIAReference * iElem); \
      virtual HRESULT __stdcall GetPropagationType(CATLONG iPos, CATLONG & oTypePropag); \
      virtual HRESULT __stdcall SetPropagationType(CATLONG iPos, CATLONG iTypePropag); \
      virtual HRESULT __stdcall GetComplementaryExtractMulti(CATLONG iPos, CAT_VARIANT_BOOL & oComplementaire); \
      virtual HRESULT __stdcall SetComplementaryExtractMulti(CATLONG iPos, CAT_VARIANT_BOOL iComplementaire); \
      virtual HRESULT __stdcall GetIsFederated(CATLONG iPos, CAT_VARIANT_BOOL & oIsFederated); \
      virtual HRESULT __stdcall SetIsFederated(CATLONG iPos, CAT_VARIANT_BOOL iIsFederated); \
      virtual HRESULT __stdcall GetCurvatureThreshold(CATLONG iPos, double & oCrvtreThsld); \
      virtual HRESULT __stdcall SetCurvatureThreshold(CATLONG iPos, double iCrvtreThsld); \
      virtual HRESULT __stdcall GetCurvatureThresholdActivity(CATLONG iPos, CAT_VARIANT_BOOL & oCrvtreThsldActivity); \
      virtual HRESULT __stdcall SetCurvatureThresholdActivity(CATLONG iPos, CAT_VARIANT_BOOL iCrvtreThsldActivity); \
      virtual HRESULT __stdcall GetNbConstraints(CATLONG & oNbConstraints); \
      virtual HRESULT __stdcall GetListOfConstraints(CATSafeArrayVariant & oListOfExtractedConstraints); \
      virtual HRESULT __stdcall AddConstraint(CATIAReference * iConstraint, CATLONG iType, CAT_VARIANT_BOOL iComplementaire, CAT_VARIANT_BOOL iIsFederated, double iCrvtreThsld, CATLONG iPos); \
      virtual HRESULT __stdcall AddConstraintTolerant(CATIAReference * iConstraint, CATLONG iType, CAT_VARIANT_BOOL iComplementaire, CAT_VARIANT_BOOL iIsFederated, double iDistreThsld, double iAngtreThsld, double iCrvtreThsld, CATLONG iPos); \
      virtual HRESULT __stdcall ReplaceElement(CATIAReference * iExtractToReplace, CATIAReference * iNewExtract, CATLONG iPos); \
      virtual HRESULT __stdcall RemoveElement(CATLONG iPosition); \
      virtual HRESULT __stdcall GetDistanceThreshold(CATLONG iPos, double & oDistreThsld); \
      virtual HRESULT __stdcall SetDistanceThreshold(CATLONG iPos, double iDistreThsld); \
      virtual HRESULT __stdcall GetDistanceThresholdActivity(CATLONG iPos, CAT_VARIANT_BOOL & oDistreThsldActivity); \
      virtual HRESULT __stdcall SetDistanceThresholdActivity(CATLONG iPos, CAT_VARIANT_BOOL iDistreThsldActivity); \
      virtual HRESULT __stdcall GetAngularThreshold(CATLONG iPos, double & oAngtreThsld); \
      virtual HRESULT __stdcall SetAngularThreshold(CATLONG iPos, double iAngtreThsld); \
      virtual HRESULT __stdcall GetAngularThresholdActivity(CATLONG iPos, CAT_VARIANT_BOOL & oAngtreThsldActivity); \
      virtual HRESULT __stdcall SetAngularThresholdActivity(CATLONG iPos, CAT_VARIANT_BOOL iAngtreThsldActivity); \
      virtual HRESULT __stdcall GetSupport(CATLONG iPos, CATIAReference *& oSupport); \
      virtual HRESULT __stdcall SetSupport(CATLONG iPos, CATIAReference * iSupport); \
      virtual HRESULT __stdcall Compute(); \
      virtual HRESULT __stdcall AppendHybridShape(CATIAHybridShape * iHybridShape); \
      virtual HRESULT __stdcall get_Thickness(CATIAHybridShape *& oThickness); \
      virtual HRESULT  __stdcall get_Application(CATIAApplication *& oApplication); \
      virtual HRESULT  __stdcall get_Parent(CATBaseDispatch *& oParent); \
      virtual HRESULT  __stdcall get_Name(CATBSTR & oNameBSTR); \
      virtual HRESULT  __stdcall put_Name(const CATBSTR & iNameBSTR); \
      virtual HRESULT  __stdcall GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj); \
};



#define ENVTIEdeclare_CATIAHybridShapeExtractMulti(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
virtual HRESULT __stdcall GetElement(CATLONG iPos, CATIAReference *& oElem); \
virtual HRESULT __stdcall SetElement(CATLONG iPos, CATIAReference * iElem); \
virtual HRESULT __stdcall GetPropagationType(CATLONG iPos, CATLONG & oTypePropag); \
virtual HRESULT __stdcall SetPropagationType(CATLONG iPos, CATLONG iTypePropag); \
virtual HRESULT __stdcall GetComplementaryExtractMulti(CATLONG iPos, CAT_VARIANT_BOOL & oComplementaire); \
virtual HRESULT __stdcall SetComplementaryExtractMulti(CATLONG iPos, CAT_VARIANT_BOOL iComplementaire); \
virtual HRESULT __stdcall GetIsFederated(CATLONG iPos, CAT_VARIANT_BOOL & oIsFederated); \
virtual HRESULT __stdcall SetIsFederated(CATLONG iPos, CAT_VARIANT_BOOL iIsFederated); \
virtual HRESULT __stdcall GetCurvatureThreshold(CATLONG iPos, double & oCrvtreThsld); \
virtual HRESULT __stdcall SetCurvatureThreshold(CATLONG iPos, double iCrvtreThsld); \
virtual HRESULT __stdcall GetCurvatureThresholdActivity(CATLONG iPos, CAT_VARIANT_BOOL & oCrvtreThsldActivity); \
virtual HRESULT __stdcall SetCurvatureThresholdActivity(CATLONG iPos, CAT_VARIANT_BOOL iCrvtreThsldActivity); \
virtual HRESULT __stdcall GetNbConstraints(CATLONG & oNbConstraints); \
virtual HRESULT __stdcall GetListOfConstraints(CATSafeArrayVariant & oListOfExtractedConstraints); \
virtual HRESULT __stdcall AddConstraint(CATIAReference * iConstraint, CATLONG iType, CAT_VARIANT_BOOL iComplementaire, CAT_VARIANT_BOOL iIsFederated, double iCrvtreThsld, CATLONG iPos); \
virtual HRESULT __stdcall AddConstraintTolerant(CATIAReference * iConstraint, CATLONG iType, CAT_VARIANT_BOOL iComplementaire, CAT_VARIANT_BOOL iIsFederated, double iDistreThsld, double iAngtreThsld, double iCrvtreThsld, CATLONG iPos); \
virtual HRESULT __stdcall ReplaceElement(CATIAReference * iExtractToReplace, CATIAReference * iNewExtract, CATLONG iPos); \
virtual HRESULT __stdcall RemoveElement(CATLONG iPosition); \
virtual HRESULT __stdcall GetDistanceThreshold(CATLONG iPos, double & oDistreThsld); \
virtual HRESULT __stdcall SetDistanceThreshold(CATLONG iPos, double iDistreThsld); \
virtual HRESULT __stdcall GetDistanceThresholdActivity(CATLONG iPos, CAT_VARIANT_BOOL & oDistreThsldActivity); \
virtual HRESULT __stdcall SetDistanceThresholdActivity(CATLONG iPos, CAT_VARIANT_BOOL iDistreThsldActivity); \
virtual HRESULT __stdcall GetAngularThreshold(CATLONG iPos, double & oAngtreThsld); \
virtual HRESULT __stdcall SetAngularThreshold(CATLONG iPos, double iAngtreThsld); \
virtual HRESULT __stdcall GetAngularThresholdActivity(CATLONG iPos, CAT_VARIANT_BOOL & oAngtreThsldActivity); \
virtual HRESULT __stdcall SetAngularThresholdActivity(CATLONG iPos, CAT_VARIANT_BOOL iAngtreThsldActivity); \
virtual HRESULT __stdcall GetSupport(CATLONG iPos, CATIAReference *& oSupport); \
virtual HRESULT __stdcall SetSupport(CATLONG iPos, CATIAReference * iSupport); \
virtual HRESULT __stdcall Compute(); \
virtual HRESULT __stdcall AppendHybridShape(CATIAHybridShape * iHybridShape); \
virtual HRESULT __stdcall get_Thickness(CATIAHybridShape *& oThickness); \
virtual HRESULT  __stdcall get_Application(CATIAApplication *& oApplication); \
virtual HRESULT  __stdcall get_Parent(CATBaseDispatch *& oParent); \
virtual HRESULT  __stdcall get_Name(CATBSTR & oNameBSTR); \
virtual HRESULT  __stdcall put_Name(const CATBSTR & iNameBSTR); \
virtual HRESULT  __stdcall GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj); \


#define ENVTIEdefine_CATIAHybridShapeExtractMulti(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
HRESULT __stdcall  ENVTIEName::GetElement(CATLONG iPos, CATIAReference *& oElem) \
{ \
return (ENVTIECALL(CATIAHybridShapeExtractMulti,ENVTIETypeLetter,ENVTIELetter)GetElement(iPos,oElem)); \
} \
HRESULT __stdcall  ENVTIEName::SetElement(CATLONG iPos, CATIAReference * iElem) \
{ \
return (ENVTIECALL(CATIAHybridShapeExtractMulti,ENVTIETypeLetter,ENVTIELetter)SetElement(iPos,iElem)); \
} \
HRESULT __stdcall  ENVTIEName::GetPropagationType(CATLONG iPos, CATLONG & oTypePropag) \
{ \
return (ENVTIECALL(CATIAHybridShapeExtractMulti,ENVTIETypeLetter,ENVTIELetter)GetPropagationType(iPos,oTypePropag)); \
} \
HRESULT __stdcall  ENVTIEName::SetPropagationType(CATLONG iPos, CATLONG iTypePropag) \
{ \
return (ENVTIECALL(CATIAHybridShapeExtractMulti,ENVTIETypeLetter,ENVTIELetter)SetPropagationType(iPos,iTypePropag)); \
} \
HRESULT __stdcall  ENVTIEName::GetComplementaryExtractMulti(CATLONG iPos, CAT_VARIANT_BOOL & oComplementaire) \
{ \
return (ENVTIECALL(CATIAHybridShapeExtractMulti,ENVTIETypeLetter,ENVTIELetter)GetComplementaryExtractMulti(iPos,oComplementaire)); \
} \
HRESULT __stdcall  ENVTIEName::SetComplementaryExtractMulti(CATLONG iPos, CAT_VARIANT_BOOL iComplementaire) \
{ \
return (ENVTIECALL(CATIAHybridShapeExtractMulti,ENVTIETypeLetter,ENVTIELetter)SetComplementaryExtractMulti(iPos,iComplementaire)); \
} \
HRESULT __stdcall  ENVTIEName::GetIsFederated(CATLONG iPos, CAT_VARIANT_BOOL & oIsFederated) \
{ \
return (ENVTIECALL(CATIAHybridShapeExtractMulti,ENVTIETypeLetter,ENVTIELetter)GetIsFederated(iPos,oIsFederated)); \
} \
HRESULT __stdcall  ENVTIEName::SetIsFederated(CATLONG iPos, CAT_VARIANT_BOOL iIsFederated) \
{ \
return (ENVTIECALL(CATIAHybridShapeExtractMulti,ENVTIETypeLetter,ENVTIELetter)SetIsFederated(iPos,iIsFederated)); \
} \
HRESULT __stdcall  ENVTIEName::GetCurvatureThreshold(CATLONG iPos, double & oCrvtreThsld) \
{ \
return (ENVTIECALL(CATIAHybridShapeExtractMulti,ENVTIETypeLetter,ENVTIELetter)GetCurvatureThreshold(iPos,oCrvtreThsld)); \
} \
HRESULT __stdcall  ENVTIEName::SetCurvatureThreshold(CATLONG iPos, double iCrvtreThsld) \
{ \
return (ENVTIECALL(CATIAHybridShapeExtractMulti,ENVTIETypeLetter,ENVTIELetter)SetCurvatureThreshold(iPos,iCrvtreThsld)); \
} \
HRESULT __stdcall  ENVTIEName::GetCurvatureThresholdActivity(CATLONG iPos, CAT_VARIANT_BOOL & oCrvtreThsldActivity) \
{ \
return (ENVTIECALL(CATIAHybridShapeExtractMulti,ENVTIETypeLetter,ENVTIELetter)GetCurvatureThresholdActivity(iPos,oCrvtreThsldActivity)); \
} \
HRESULT __stdcall  ENVTIEName::SetCurvatureThresholdActivity(CATLONG iPos, CAT_VARIANT_BOOL iCrvtreThsldActivity) \
{ \
return (ENVTIECALL(CATIAHybridShapeExtractMulti,ENVTIETypeLetter,ENVTIELetter)SetCurvatureThresholdActivity(iPos,iCrvtreThsldActivity)); \
} \
HRESULT __stdcall  ENVTIEName::GetNbConstraints(CATLONG & oNbConstraints) \
{ \
return (ENVTIECALL(CATIAHybridShapeExtractMulti,ENVTIETypeLetter,ENVTIELetter)GetNbConstraints(oNbConstraints)); \
} \
HRESULT __stdcall  ENVTIEName::GetListOfConstraints(CATSafeArrayVariant & oListOfExtractedConstraints) \
{ \
return (ENVTIECALL(CATIAHybridShapeExtractMulti,ENVTIETypeLetter,ENVTIELetter)GetListOfConstraints(oListOfExtractedConstraints)); \
} \
HRESULT __stdcall  ENVTIEName::AddConstraint(CATIAReference * iConstraint, CATLONG iType, CAT_VARIANT_BOOL iComplementaire, CAT_VARIANT_BOOL iIsFederated, double iCrvtreThsld, CATLONG iPos) \
{ \
return (ENVTIECALL(CATIAHybridShapeExtractMulti,ENVTIETypeLetter,ENVTIELetter)AddConstraint(iConstraint,iType,iComplementaire,iIsFederated,iCrvtreThsld,iPos)); \
} \
HRESULT __stdcall  ENVTIEName::AddConstraintTolerant(CATIAReference * iConstraint, CATLONG iType, CAT_VARIANT_BOOL iComplementaire, CAT_VARIANT_BOOL iIsFederated, double iDistreThsld, double iAngtreThsld, double iCrvtreThsld, CATLONG iPos) \
{ \
return (ENVTIECALL(CATIAHybridShapeExtractMulti,ENVTIETypeLetter,ENVTIELetter)AddConstraintTolerant(iConstraint,iType,iComplementaire,iIsFederated,iDistreThsld,iAngtreThsld,iCrvtreThsld,iPos)); \
} \
HRESULT __stdcall  ENVTIEName::ReplaceElement(CATIAReference * iExtractToReplace, CATIAReference * iNewExtract, CATLONG iPos) \
{ \
return (ENVTIECALL(CATIAHybridShapeExtractMulti,ENVTIETypeLetter,ENVTIELetter)ReplaceElement(iExtractToReplace,iNewExtract,iPos)); \
} \
HRESULT __stdcall  ENVTIEName::RemoveElement(CATLONG iPosition) \
{ \
return (ENVTIECALL(CATIAHybridShapeExtractMulti,ENVTIETypeLetter,ENVTIELetter)RemoveElement(iPosition)); \
} \
HRESULT __stdcall  ENVTIEName::GetDistanceThreshold(CATLONG iPos, double & oDistreThsld) \
{ \
return (ENVTIECALL(CATIAHybridShapeExtractMulti,ENVTIETypeLetter,ENVTIELetter)GetDistanceThreshold(iPos,oDistreThsld)); \
} \
HRESULT __stdcall  ENVTIEName::SetDistanceThreshold(CATLONG iPos, double iDistreThsld) \
{ \
return (ENVTIECALL(CATIAHybridShapeExtractMulti,ENVTIETypeLetter,ENVTIELetter)SetDistanceThreshold(iPos,iDistreThsld)); \
} \
HRESULT __stdcall  ENVTIEName::GetDistanceThresholdActivity(CATLONG iPos, CAT_VARIANT_BOOL & oDistreThsldActivity) \
{ \
return (ENVTIECALL(CATIAHybridShapeExtractMulti,ENVTIETypeLetter,ENVTIELetter)GetDistanceThresholdActivity(iPos,oDistreThsldActivity)); \
} \
HRESULT __stdcall  ENVTIEName::SetDistanceThresholdActivity(CATLONG iPos, CAT_VARIANT_BOOL iDistreThsldActivity) \
{ \
return (ENVTIECALL(CATIAHybridShapeExtractMulti,ENVTIETypeLetter,ENVTIELetter)SetDistanceThresholdActivity(iPos,iDistreThsldActivity)); \
} \
HRESULT __stdcall  ENVTIEName::GetAngularThreshold(CATLONG iPos, double & oAngtreThsld) \
{ \
return (ENVTIECALL(CATIAHybridShapeExtractMulti,ENVTIETypeLetter,ENVTIELetter)GetAngularThreshold(iPos,oAngtreThsld)); \
} \
HRESULT __stdcall  ENVTIEName::SetAngularThreshold(CATLONG iPos, double iAngtreThsld) \
{ \
return (ENVTIECALL(CATIAHybridShapeExtractMulti,ENVTIETypeLetter,ENVTIELetter)SetAngularThreshold(iPos,iAngtreThsld)); \
} \
HRESULT __stdcall  ENVTIEName::GetAngularThresholdActivity(CATLONG iPos, CAT_VARIANT_BOOL & oAngtreThsldActivity) \
{ \
return (ENVTIECALL(CATIAHybridShapeExtractMulti,ENVTIETypeLetter,ENVTIELetter)GetAngularThresholdActivity(iPos,oAngtreThsldActivity)); \
} \
HRESULT __stdcall  ENVTIEName::SetAngularThresholdActivity(CATLONG iPos, CAT_VARIANT_BOOL iAngtreThsldActivity) \
{ \
return (ENVTIECALL(CATIAHybridShapeExtractMulti,ENVTIETypeLetter,ENVTIELetter)SetAngularThresholdActivity(iPos,iAngtreThsldActivity)); \
} \
HRESULT __stdcall  ENVTIEName::GetSupport(CATLONG iPos, CATIAReference *& oSupport) \
{ \
return (ENVTIECALL(CATIAHybridShapeExtractMulti,ENVTIETypeLetter,ENVTIELetter)GetSupport(iPos,oSupport)); \
} \
HRESULT __stdcall  ENVTIEName::SetSupport(CATLONG iPos, CATIAReference * iSupport) \
{ \
return (ENVTIECALL(CATIAHybridShapeExtractMulti,ENVTIETypeLetter,ENVTIELetter)SetSupport(iPos,iSupport)); \
} \
HRESULT __stdcall  ENVTIEName::Compute() \
{ \
return (ENVTIECALL(CATIAHybridShapeExtractMulti,ENVTIETypeLetter,ENVTIELetter)Compute()); \
} \
HRESULT __stdcall  ENVTIEName::AppendHybridShape(CATIAHybridShape * iHybridShape) \
{ \
return (ENVTIECALL(CATIAHybridShapeExtractMulti,ENVTIETypeLetter,ENVTIELetter)AppendHybridShape(iHybridShape)); \
} \
HRESULT __stdcall  ENVTIEName::get_Thickness(CATIAHybridShape *& oThickness) \
{ \
return (ENVTIECALL(CATIAHybridShapeExtractMulti,ENVTIETypeLetter,ENVTIELetter)get_Thickness(oThickness)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Application(CATIAApplication *& oApplication) \
{ \
return (ENVTIECALL(CATIAHybridShapeExtractMulti,ENVTIETypeLetter,ENVTIELetter)get_Application(oApplication)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Parent(CATBaseDispatch *& oParent) \
{ \
return (ENVTIECALL(CATIAHybridShapeExtractMulti,ENVTIETypeLetter,ENVTIELetter)get_Parent(oParent)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Name(CATBSTR & oNameBSTR) \
{ \
return (ENVTIECALL(CATIAHybridShapeExtractMulti,ENVTIETypeLetter,ENVTIELetter)get_Name(oNameBSTR)); \
} \
HRESULT  __stdcall  ENVTIEName::put_Name(const CATBSTR & iNameBSTR) \
{ \
return (ENVTIECALL(CATIAHybridShapeExtractMulti,ENVTIETypeLetter,ENVTIELetter)put_Name(iNameBSTR)); \
} \
HRESULT  __stdcall  ENVTIEName::GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj) \
{ \
return (ENVTIECALL(CATIAHybridShapeExtractMulti,ENVTIETypeLetter,ENVTIELetter)GetItem(IDName,RealObj)); \
} \


/* Name of the TIE class */
#define class_TIE_CATIAHybridShapeExtractMulti(classe)    TIECATIAHybridShapeExtractMulti##classe


/* Common methods inside a TIE */
#define common_TIE_CATIAHybridShapeExtractMulti(classe) \
 \
 \
/* Static initialization */ \
CATDefineCommonTIEMembers(CATIAHybridShapeExtractMulti, classe) \
 \
 \
CATImplementTIEMethods(CATIAHybridShapeExtractMulti, classe) \
CATImplementIUnknownMethodsForCATBaseUnknownTIE(CATIAHybridShapeExtractMulti, classe, 2) \
CATImplementIDispatchMethodsForCATBaseUnknownTIE(CATIAHybridShapeExtractMulti, classe) \
CATImplementCATBaseUnknownMethodsForTIE(CATIAHybridShapeExtractMulti, classe) \
 \
HRESULT __stdcall  TIECATIAHybridShapeExtractMulti##classe::GetElement(CATLONG iPos, CATIAReference *& oElem) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,1,&_Trac2,&iPos,&oElem); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetElement(iPos,oElem); \
   ExitAfterCall(this,1,_Trac2,&_ret_arg,&iPos,&oElem); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeExtractMulti##classe::SetElement(CATLONG iPos, CATIAReference * iElem) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,2,&_Trac2,&iPos,&iElem); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetElement(iPos,iElem); \
   ExitAfterCall(this,2,_Trac2,&_ret_arg,&iPos,&iElem); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeExtractMulti##classe::GetPropagationType(CATLONG iPos, CATLONG & oTypePropag) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,3,&_Trac2,&iPos,&oTypePropag); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetPropagationType(iPos,oTypePropag); \
   ExitAfterCall(this,3,_Trac2,&_ret_arg,&iPos,&oTypePropag); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeExtractMulti##classe::SetPropagationType(CATLONG iPos, CATLONG iTypePropag) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,4,&_Trac2,&iPos,&iTypePropag); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetPropagationType(iPos,iTypePropag); \
   ExitAfterCall(this,4,_Trac2,&_ret_arg,&iPos,&iTypePropag); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeExtractMulti##classe::GetComplementaryExtractMulti(CATLONG iPos, CAT_VARIANT_BOOL & oComplementaire) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,5,&_Trac2,&iPos,&oComplementaire); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetComplementaryExtractMulti(iPos,oComplementaire); \
   ExitAfterCall(this,5,_Trac2,&_ret_arg,&iPos,&oComplementaire); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeExtractMulti##classe::SetComplementaryExtractMulti(CATLONG iPos, CAT_VARIANT_BOOL iComplementaire) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,6,&_Trac2,&iPos,&iComplementaire); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetComplementaryExtractMulti(iPos,iComplementaire); \
   ExitAfterCall(this,6,_Trac2,&_ret_arg,&iPos,&iComplementaire); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeExtractMulti##classe::GetIsFederated(CATLONG iPos, CAT_VARIANT_BOOL & oIsFederated) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,7,&_Trac2,&iPos,&oIsFederated); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetIsFederated(iPos,oIsFederated); \
   ExitAfterCall(this,7,_Trac2,&_ret_arg,&iPos,&oIsFederated); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeExtractMulti##classe::SetIsFederated(CATLONG iPos, CAT_VARIANT_BOOL iIsFederated) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,8,&_Trac2,&iPos,&iIsFederated); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetIsFederated(iPos,iIsFederated); \
   ExitAfterCall(this,8,_Trac2,&_ret_arg,&iPos,&iIsFederated); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeExtractMulti##classe::GetCurvatureThreshold(CATLONG iPos, double & oCrvtreThsld) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,9,&_Trac2,&iPos,&oCrvtreThsld); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetCurvatureThreshold(iPos,oCrvtreThsld); \
   ExitAfterCall(this,9,_Trac2,&_ret_arg,&iPos,&oCrvtreThsld); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeExtractMulti##classe::SetCurvatureThreshold(CATLONG iPos, double iCrvtreThsld) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,10,&_Trac2,&iPos,&iCrvtreThsld); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetCurvatureThreshold(iPos,iCrvtreThsld); \
   ExitAfterCall(this,10,_Trac2,&_ret_arg,&iPos,&iCrvtreThsld); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeExtractMulti##classe::GetCurvatureThresholdActivity(CATLONG iPos, CAT_VARIANT_BOOL & oCrvtreThsldActivity) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,11,&_Trac2,&iPos,&oCrvtreThsldActivity); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetCurvatureThresholdActivity(iPos,oCrvtreThsldActivity); \
   ExitAfterCall(this,11,_Trac2,&_ret_arg,&iPos,&oCrvtreThsldActivity); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeExtractMulti##classe::SetCurvatureThresholdActivity(CATLONG iPos, CAT_VARIANT_BOOL iCrvtreThsldActivity) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,12,&_Trac2,&iPos,&iCrvtreThsldActivity); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetCurvatureThresholdActivity(iPos,iCrvtreThsldActivity); \
   ExitAfterCall(this,12,_Trac2,&_ret_arg,&iPos,&iCrvtreThsldActivity); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeExtractMulti##classe::GetNbConstraints(CATLONG & oNbConstraints) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,13,&_Trac2,&oNbConstraints); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetNbConstraints(oNbConstraints); \
   ExitAfterCall(this,13,_Trac2,&_ret_arg,&oNbConstraints); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeExtractMulti##classe::GetListOfConstraints(CATSafeArrayVariant & oListOfExtractedConstraints) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,14,&_Trac2,&oListOfExtractedConstraints); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetListOfConstraints(oListOfExtractedConstraints); \
   ExitAfterCall(this,14,_Trac2,&_ret_arg,&oListOfExtractedConstraints); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeExtractMulti##classe::AddConstraint(CATIAReference * iConstraint, CATLONG iType, CAT_VARIANT_BOOL iComplementaire, CAT_VARIANT_BOOL iIsFederated, double iCrvtreThsld, CATLONG iPos) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,15,&_Trac2,&iConstraint,&iType,&iComplementaire,&iIsFederated,&iCrvtreThsld,&iPos); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->AddConstraint(iConstraint,iType,iComplementaire,iIsFederated,iCrvtreThsld,iPos); \
   ExitAfterCall(this,15,_Trac2,&_ret_arg,&iConstraint,&iType,&iComplementaire,&iIsFederated,&iCrvtreThsld,&iPos); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeExtractMulti##classe::AddConstraintTolerant(CATIAReference * iConstraint, CATLONG iType, CAT_VARIANT_BOOL iComplementaire, CAT_VARIANT_BOOL iIsFederated, double iDistreThsld, double iAngtreThsld, double iCrvtreThsld, CATLONG iPos) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,16,&_Trac2,&iConstraint,&iType,&iComplementaire,&iIsFederated,&iDistreThsld,&iAngtreThsld,&iCrvtreThsld,&iPos); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->AddConstraintTolerant(iConstraint,iType,iComplementaire,iIsFederated,iDistreThsld,iAngtreThsld,iCrvtreThsld,iPos); \
   ExitAfterCall(this,16,_Trac2,&_ret_arg,&iConstraint,&iType,&iComplementaire,&iIsFederated,&iDistreThsld,&iAngtreThsld,&iCrvtreThsld,&iPos); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeExtractMulti##classe::ReplaceElement(CATIAReference * iExtractToReplace, CATIAReference * iNewExtract, CATLONG iPos) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,17,&_Trac2,&iExtractToReplace,&iNewExtract,&iPos); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->ReplaceElement(iExtractToReplace,iNewExtract,iPos); \
   ExitAfterCall(this,17,_Trac2,&_ret_arg,&iExtractToReplace,&iNewExtract,&iPos); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeExtractMulti##classe::RemoveElement(CATLONG iPosition) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,18,&_Trac2,&iPosition); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->RemoveElement(iPosition); \
   ExitAfterCall(this,18,_Trac2,&_ret_arg,&iPosition); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeExtractMulti##classe::GetDistanceThreshold(CATLONG iPos, double & oDistreThsld) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,19,&_Trac2,&iPos,&oDistreThsld); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetDistanceThreshold(iPos,oDistreThsld); \
   ExitAfterCall(this,19,_Trac2,&_ret_arg,&iPos,&oDistreThsld); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeExtractMulti##classe::SetDistanceThreshold(CATLONG iPos, double iDistreThsld) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,20,&_Trac2,&iPos,&iDistreThsld); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetDistanceThreshold(iPos,iDistreThsld); \
   ExitAfterCall(this,20,_Trac2,&_ret_arg,&iPos,&iDistreThsld); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeExtractMulti##classe::GetDistanceThresholdActivity(CATLONG iPos, CAT_VARIANT_BOOL & oDistreThsldActivity) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,21,&_Trac2,&iPos,&oDistreThsldActivity); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetDistanceThresholdActivity(iPos,oDistreThsldActivity); \
   ExitAfterCall(this,21,_Trac2,&_ret_arg,&iPos,&oDistreThsldActivity); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeExtractMulti##classe::SetDistanceThresholdActivity(CATLONG iPos, CAT_VARIANT_BOOL iDistreThsldActivity) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,22,&_Trac2,&iPos,&iDistreThsldActivity); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetDistanceThresholdActivity(iPos,iDistreThsldActivity); \
   ExitAfterCall(this,22,_Trac2,&_ret_arg,&iPos,&iDistreThsldActivity); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeExtractMulti##classe::GetAngularThreshold(CATLONG iPos, double & oAngtreThsld) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,23,&_Trac2,&iPos,&oAngtreThsld); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetAngularThreshold(iPos,oAngtreThsld); \
   ExitAfterCall(this,23,_Trac2,&_ret_arg,&iPos,&oAngtreThsld); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeExtractMulti##classe::SetAngularThreshold(CATLONG iPos, double iAngtreThsld) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,24,&_Trac2,&iPos,&iAngtreThsld); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetAngularThreshold(iPos,iAngtreThsld); \
   ExitAfterCall(this,24,_Trac2,&_ret_arg,&iPos,&iAngtreThsld); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeExtractMulti##classe::GetAngularThresholdActivity(CATLONG iPos, CAT_VARIANT_BOOL & oAngtreThsldActivity) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,25,&_Trac2,&iPos,&oAngtreThsldActivity); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetAngularThresholdActivity(iPos,oAngtreThsldActivity); \
   ExitAfterCall(this,25,_Trac2,&_ret_arg,&iPos,&oAngtreThsldActivity); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeExtractMulti##classe::SetAngularThresholdActivity(CATLONG iPos, CAT_VARIANT_BOOL iAngtreThsldActivity) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,26,&_Trac2,&iPos,&iAngtreThsldActivity); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetAngularThresholdActivity(iPos,iAngtreThsldActivity); \
   ExitAfterCall(this,26,_Trac2,&_ret_arg,&iPos,&iAngtreThsldActivity); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeExtractMulti##classe::GetSupport(CATLONG iPos, CATIAReference *& oSupport) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,27,&_Trac2,&iPos,&oSupport); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetSupport(iPos,oSupport); \
   ExitAfterCall(this,27,_Trac2,&_ret_arg,&iPos,&oSupport); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeExtractMulti##classe::SetSupport(CATLONG iPos, CATIAReference * iSupport) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,28,&_Trac2,&iPos,&iSupport); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetSupport(iPos,iSupport); \
   ExitAfterCall(this,28,_Trac2,&_ret_arg,&iPos,&iSupport); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeExtractMulti##classe::Compute() \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,29,&_Trac2); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->Compute(); \
   ExitAfterCall(this,29,_Trac2,&_ret_arg); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeExtractMulti##classe::AppendHybridShape(CATIAHybridShape * iHybridShape) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,30,&_Trac2,&iHybridShape); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->AppendHybridShape(iHybridShape); \
   ExitAfterCall(this,30,_Trac2,&_ret_arg,&iHybridShape); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeExtractMulti##classe::get_Thickness(CATIAHybridShape *& oThickness) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,31,&_Trac2,&oThickness); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Thickness(oThickness); \
   ExitAfterCall(this,31,_Trac2,&_ret_arg,&oThickness); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAHybridShapeExtractMulti##classe::get_Application(CATIAApplication *& oApplication) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,32,&_Trac2,&oApplication); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Application(oApplication); \
   ExitAfterCall(this,32,_Trac2,&_ret_arg,&oApplication); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAHybridShapeExtractMulti##classe::get_Parent(CATBaseDispatch *& oParent) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,33,&_Trac2,&oParent); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Parent(oParent); \
   ExitAfterCall(this,33,_Trac2,&_ret_arg,&oParent); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAHybridShapeExtractMulti##classe::get_Name(CATBSTR & oNameBSTR) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,34,&_Trac2,&oNameBSTR); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Name(oNameBSTR); \
   ExitAfterCall(this,34,_Trac2,&_ret_arg,&oNameBSTR); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAHybridShapeExtractMulti##classe::put_Name(const CATBSTR & iNameBSTR) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,35,&_Trac2,&iNameBSTR); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_Name(iNameBSTR); \
   ExitAfterCall(this,35,_Trac2,&_ret_arg,&iNameBSTR); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAHybridShapeExtractMulti##classe::GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,36,&_Trac2,&IDName,&RealObj); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetItem(IDName,RealObj); \
   ExitAfterCall(this,36,_Trac2,&_ret_arg,&IDName,&RealObj); \
   return(_ret_arg); \
} \



/* Macro used to link an implementation with an interface */
#define TIE_CATIAHybridShapeExtractMulti(classe) \
 \
 \
declare_TIE_CATIAHybridShapeExtractMulti(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIAHybridShapeExtractMulti##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIAHybridShapeExtractMulti,"CATIAHybridShapeExtractMulti",CATIAHybridShapeExtractMulti::MetaObject(),classe::MetaObject(),TIE); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIAHybridShapeExtractMulti(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIECreation(CATIAHybridShapeExtractMulti, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIAHybridShapeExtractMulti##classe(classe::MetaObject(),CATIAHybridShapeExtractMulti::MetaObject(),(void *)CreateTIECATIAHybridShapeExtractMulti##classe)



/* Macro used to link an implementation with an interface */
/* This TIE is chained on the implementation object */
#define TIEchain_CATIAHybridShapeExtractMulti(classe) \
 \
 \
declare_TIE_CATIAHybridShapeExtractMulti(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIAHybridShapeExtractMulti##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIAHybridShapeExtractMulti,"CATIAHybridShapeExtractMulti",CATIAHybridShapeExtractMulti::MetaObject(),classe::MetaObject(),TIEchain); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIAHybridShapeExtractMulti(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIEchainCreation(CATIAHybridShapeExtractMulti, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIAHybridShapeExtractMulti##classe(classe::MetaObject(),CATIAHybridShapeExtractMulti::MetaObject(),(void *)CreateTIECATIAHybridShapeExtractMulti##classe)


/* Macro to switch between BOA and TIE at build time */ 
#ifdef CATSYS_BOA_IS_TIE
#define BOA_CATIAHybridShapeExtractMulti(classe) TIE_CATIAHybridShapeExtractMulti(classe)
#else
#define BOA_CATIAHybridShapeExtractMulti(classe) CATImplementBOA(CATIAHybridShapeExtractMulti, classe)
#endif

#endif
