#ifndef __TIE_CATIAHybridShapeLawDistProj
#define __TIE_CATIAHybridShapeLawDistProj

#include <string.h>
#include "CATBaseUnknown.h"
#include "CATMetaClass.h"
#include "CATMacForTie.h"
#include "CATExitJournal.h"
#include "CATIAHybridShapeLawDistProj.h"
#include "JS0DSPA.h"


#ifdef _WINDOWS_SOURCE
#define Exported __declspec(dllexport)
#define Imported __declspec(dllimport)
#else
#define Exported 
#define Imported 
#endif


/* To link an implementation with the interface CATIAHybridShapeLawDistProj */
#define declare_TIE_CATIAHybridShapeLawDistProj(classe) \
 \
 \
class TIECATIAHybridShapeLawDistProj##classe : public CATIAHybridShapeLawDistProj \
{ \
   private: \
      CATDeclareCommonTIEMembers \
   public: \
      CATDeclareTIEMethods(CATIAHybridShapeLawDistProj, classe) \
      CATDeclareIUnknownMethodsForCATBaseUnknownTIE \
      CATDeclareIDispatchMethodsForCATBaseUnknownTIE \
      CATDeclareCATBaseUnknownMethodsForTIE \
      virtual HRESULT __stdcall get_Reference(CATIAReference *& oElem); \
      virtual HRESULT __stdcall put_Reference(CATIAReference * iElem); \
      virtual HRESULT __stdcall get_Definition(CATIAReference *& oElem); \
      virtual HRESULT __stdcall put_Definition(CATIAReference * iElem); \
      virtual HRESULT __stdcall get_Scaling(double & oScale); \
      virtual HRESULT __stdcall put_Scaling(double iScale); \
      virtual HRESULT __stdcall put_AppliedUnitSymbol(const CATBSTR & iSymbol); \
      virtual HRESULT __stdcall GetAppliedUnitSymbol(CATBSTR & oSymbol); \
      virtual HRESULT __stdcall put_MeasureUnitSymbol(const CATBSTR & iSymbol); \
      virtual HRESULT __stdcall GetMeasureUnitSymbol(CATBSTR & oSymbol); \
      virtual HRESULT __stdcall GetPlaneNormal(CATSafeArrayVariant & oNormal); \
      virtual HRESULT __stdcall PutPlaneNormal(const CATSafeArrayVariant & iNormal); \
      virtual HRESULT __stdcall get_PositiveDirectionOrientation(CATLONG & oOri); \
      virtual HRESULT __stdcall put_PositiveDirectionOrientation(CATLONG iOri); \
      virtual HRESULT __stdcall IsHeterogeneousLaw(CAT_VARIANT_BOOL & oHeterogeneousLaw); \
      virtual HRESULT __stdcall get_ParameterOnDefinition(CAT_VARIANT_BOOL & oParameterOnDefinition); \
      virtual HRESULT __stdcall put_ParameterOnDefinition(CAT_VARIANT_BOOL iParameterOnDefinition); \
      virtual HRESULT __stdcall Compute(); \
      virtual HRESULT __stdcall AppendHybridShape(CATIAHybridShape * iHybridShape); \
      virtual HRESULT __stdcall get_Thickness(CATIAHybridShape *& oThickness); \
      virtual HRESULT  __stdcall get_Application(CATIAApplication *& oApplication); \
      virtual HRESULT  __stdcall get_Parent(CATBaseDispatch *& oParent); \
      virtual HRESULT  __stdcall get_Name(CATBSTR & oNameBSTR); \
      virtual HRESULT  __stdcall put_Name(const CATBSTR & iNameBSTR); \
      virtual HRESULT  __stdcall GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj); \
};



#define ENVTIEdeclare_CATIAHybridShapeLawDistProj(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
virtual HRESULT __stdcall get_Reference(CATIAReference *& oElem); \
virtual HRESULT __stdcall put_Reference(CATIAReference * iElem); \
virtual HRESULT __stdcall get_Definition(CATIAReference *& oElem); \
virtual HRESULT __stdcall put_Definition(CATIAReference * iElem); \
virtual HRESULT __stdcall get_Scaling(double & oScale); \
virtual HRESULT __stdcall put_Scaling(double iScale); \
virtual HRESULT __stdcall put_AppliedUnitSymbol(const CATBSTR & iSymbol); \
virtual HRESULT __stdcall GetAppliedUnitSymbol(CATBSTR & oSymbol); \
virtual HRESULT __stdcall put_MeasureUnitSymbol(const CATBSTR & iSymbol); \
virtual HRESULT __stdcall GetMeasureUnitSymbol(CATBSTR & oSymbol); \
virtual HRESULT __stdcall GetPlaneNormal(CATSafeArrayVariant & oNormal); \
virtual HRESULT __stdcall PutPlaneNormal(const CATSafeArrayVariant & iNormal); \
virtual HRESULT __stdcall get_PositiveDirectionOrientation(CATLONG & oOri); \
virtual HRESULT __stdcall put_PositiveDirectionOrientation(CATLONG iOri); \
virtual HRESULT __stdcall IsHeterogeneousLaw(CAT_VARIANT_BOOL & oHeterogeneousLaw); \
virtual HRESULT __stdcall get_ParameterOnDefinition(CAT_VARIANT_BOOL & oParameterOnDefinition); \
virtual HRESULT __stdcall put_ParameterOnDefinition(CAT_VARIANT_BOOL iParameterOnDefinition); \
virtual HRESULT __stdcall Compute(); \
virtual HRESULT __stdcall AppendHybridShape(CATIAHybridShape * iHybridShape); \
virtual HRESULT __stdcall get_Thickness(CATIAHybridShape *& oThickness); \
virtual HRESULT  __stdcall get_Application(CATIAApplication *& oApplication); \
virtual HRESULT  __stdcall get_Parent(CATBaseDispatch *& oParent); \
virtual HRESULT  __stdcall get_Name(CATBSTR & oNameBSTR); \
virtual HRESULT  __stdcall put_Name(const CATBSTR & iNameBSTR); \
virtual HRESULT  __stdcall GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj); \


#define ENVTIEdefine_CATIAHybridShapeLawDistProj(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
HRESULT __stdcall  ENVTIEName::get_Reference(CATIAReference *& oElem) \
{ \
return (ENVTIECALL(CATIAHybridShapeLawDistProj,ENVTIETypeLetter,ENVTIELetter)get_Reference(oElem)); \
} \
HRESULT __stdcall  ENVTIEName::put_Reference(CATIAReference * iElem) \
{ \
return (ENVTIECALL(CATIAHybridShapeLawDistProj,ENVTIETypeLetter,ENVTIELetter)put_Reference(iElem)); \
} \
HRESULT __stdcall  ENVTIEName::get_Definition(CATIAReference *& oElem) \
{ \
return (ENVTIECALL(CATIAHybridShapeLawDistProj,ENVTIETypeLetter,ENVTIELetter)get_Definition(oElem)); \
} \
HRESULT __stdcall  ENVTIEName::put_Definition(CATIAReference * iElem) \
{ \
return (ENVTIECALL(CATIAHybridShapeLawDistProj,ENVTIETypeLetter,ENVTIELetter)put_Definition(iElem)); \
} \
HRESULT __stdcall  ENVTIEName::get_Scaling(double & oScale) \
{ \
return (ENVTIECALL(CATIAHybridShapeLawDistProj,ENVTIETypeLetter,ENVTIELetter)get_Scaling(oScale)); \
} \
HRESULT __stdcall  ENVTIEName::put_Scaling(double iScale) \
{ \
return (ENVTIECALL(CATIAHybridShapeLawDistProj,ENVTIETypeLetter,ENVTIELetter)put_Scaling(iScale)); \
} \
HRESULT __stdcall  ENVTIEName::put_AppliedUnitSymbol(const CATBSTR & iSymbol) \
{ \
return (ENVTIECALL(CATIAHybridShapeLawDistProj,ENVTIETypeLetter,ENVTIELetter)put_AppliedUnitSymbol(iSymbol)); \
} \
HRESULT __stdcall  ENVTIEName::GetAppliedUnitSymbol(CATBSTR & oSymbol) \
{ \
return (ENVTIECALL(CATIAHybridShapeLawDistProj,ENVTIETypeLetter,ENVTIELetter)GetAppliedUnitSymbol(oSymbol)); \
} \
HRESULT __stdcall  ENVTIEName::put_MeasureUnitSymbol(const CATBSTR & iSymbol) \
{ \
return (ENVTIECALL(CATIAHybridShapeLawDistProj,ENVTIETypeLetter,ENVTIELetter)put_MeasureUnitSymbol(iSymbol)); \
} \
HRESULT __stdcall  ENVTIEName::GetMeasureUnitSymbol(CATBSTR & oSymbol) \
{ \
return (ENVTIECALL(CATIAHybridShapeLawDistProj,ENVTIETypeLetter,ENVTIELetter)GetMeasureUnitSymbol(oSymbol)); \
} \
HRESULT __stdcall  ENVTIEName::GetPlaneNormal(CATSafeArrayVariant & oNormal) \
{ \
return (ENVTIECALL(CATIAHybridShapeLawDistProj,ENVTIETypeLetter,ENVTIELetter)GetPlaneNormal(oNormal)); \
} \
HRESULT __stdcall  ENVTIEName::PutPlaneNormal(const CATSafeArrayVariant & iNormal) \
{ \
return (ENVTIECALL(CATIAHybridShapeLawDistProj,ENVTIETypeLetter,ENVTIELetter)PutPlaneNormal(iNormal)); \
} \
HRESULT __stdcall  ENVTIEName::get_PositiveDirectionOrientation(CATLONG & oOri) \
{ \
return (ENVTIECALL(CATIAHybridShapeLawDistProj,ENVTIETypeLetter,ENVTIELetter)get_PositiveDirectionOrientation(oOri)); \
} \
HRESULT __stdcall  ENVTIEName::put_PositiveDirectionOrientation(CATLONG iOri) \
{ \
return (ENVTIECALL(CATIAHybridShapeLawDistProj,ENVTIETypeLetter,ENVTIELetter)put_PositiveDirectionOrientation(iOri)); \
} \
HRESULT __stdcall  ENVTIEName::IsHeterogeneousLaw(CAT_VARIANT_BOOL & oHeterogeneousLaw) \
{ \
return (ENVTIECALL(CATIAHybridShapeLawDistProj,ENVTIETypeLetter,ENVTIELetter)IsHeterogeneousLaw(oHeterogeneousLaw)); \
} \
HRESULT __stdcall  ENVTIEName::get_ParameterOnDefinition(CAT_VARIANT_BOOL & oParameterOnDefinition) \
{ \
return (ENVTIECALL(CATIAHybridShapeLawDistProj,ENVTIETypeLetter,ENVTIELetter)get_ParameterOnDefinition(oParameterOnDefinition)); \
} \
HRESULT __stdcall  ENVTIEName::put_ParameterOnDefinition(CAT_VARIANT_BOOL iParameterOnDefinition) \
{ \
return (ENVTIECALL(CATIAHybridShapeLawDistProj,ENVTIETypeLetter,ENVTIELetter)put_ParameterOnDefinition(iParameterOnDefinition)); \
} \
HRESULT __stdcall  ENVTIEName::Compute() \
{ \
return (ENVTIECALL(CATIAHybridShapeLawDistProj,ENVTIETypeLetter,ENVTIELetter)Compute()); \
} \
HRESULT __stdcall  ENVTIEName::AppendHybridShape(CATIAHybridShape * iHybridShape) \
{ \
return (ENVTIECALL(CATIAHybridShapeLawDistProj,ENVTIETypeLetter,ENVTIELetter)AppendHybridShape(iHybridShape)); \
} \
HRESULT __stdcall  ENVTIEName::get_Thickness(CATIAHybridShape *& oThickness) \
{ \
return (ENVTIECALL(CATIAHybridShapeLawDistProj,ENVTIETypeLetter,ENVTIELetter)get_Thickness(oThickness)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Application(CATIAApplication *& oApplication) \
{ \
return (ENVTIECALL(CATIAHybridShapeLawDistProj,ENVTIETypeLetter,ENVTIELetter)get_Application(oApplication)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Parent(CATBaseDispatch *& oParent) \
{ \
return (ENVTIECALL(CATIAHybridShapeLawDistProj,ENVTIETypeLetter,ENVTIELetter)get_Parent(oParent)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Name(CATBSTR & oNameBSTR) \
{ \
return (ENVTIECALL(CATIAHybridShapeLawDistProj,ENVTIETypeLetter,ENVTIELetter)get_Name(oNameBSTR)); \
} \
HRESULT  __stdcall  ENVTIEName::put_Name(const CATBSTR & iNameBSTR) \
{ \
return (ENVTIECALL(CATIAHybridShapeLawDistProj,ENVTIETypeLetter,ENVTIELetter)put_Name(iNameBSTR)); \
} \
HRESULT  __stdcall  ENVTIEName::GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj) \
{ \
return (ENVTIECALL(CATIAHybridShapeLawDistProj,ENVTIETypeLetter,ENVTIELetter)GetItem(IDName,RealObj)); \
} \


/* Name of the TIE class */
#define class_TIE_CATIAHybridShapeLawDistProj(classe)    TIECATIAHybridShapeLawDistProj##classe


/* Common methods inside a TIE */
#define common_TIE_CATIAHybridShapeLawDistProj(classe) \
 \
 \
/* Static initialization */ \
CATDefineCommonTIEMembers(CATIAHybridShapeLawDistProj, classe) \
 \
 \
CATImplementTIEMethods(CATIAHybridShapeLawDistProj, classe) \
CATImplementIUnknownMethodsForCATBaseUnknownTIE(CATIAHybridShapeLawDistProj, classe, 2) \
CATImplementIDispatchMethodsForCATBaseUnknownTIE(CATIAHybridShapeLawDistProj, classe) \
CATImplementCATBaseUnknownMethodsForTIE(CATIAHybridShapeLawDistProj, classe) \
 \
HRESULT __stdcall  TIECATIAHybridShapeLawDistProj##classe::get_Reference(CATIAReference *& oElem) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,1,&_Trac2,&oElem); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Reference(oElem); \
   ExitAfterCall(this,1,_Trac2,&_ret_arg,&oElem); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeLawDistProj##classe::put_Reference(CATIAReference * iElem) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,2,&_Trac2,&iElem); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_Reference(iElem); \
   ExitAfterCall(this,2,_Trac2,&_ret_arg,&iElem); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeLawDistProj##classe::get_Definition(CATIAReference *& oElem) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,3,&_Trac2,&oElem); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Definition(oElem); \
   ExitAfterCall(this,3,_Trac2,&_ret_arg,&oElem); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeLawDistProj##classe::put_Definition(CATIAReference * iElem) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,4,&_Trac2,&iElem); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_Definition(iElem); \
   ExitAfterCall(this,4,_Trac2,&_ret_arg,&iElem); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeLawDistProj##classe::get_Scaling(double & oScale) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,5,&_Trac2,&oScale); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Scaling(oScale); \
   ExitAfterCall(this,5,_Trac2,&_ret_arg,&oScale); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeLawDistProj##classe::put_Scaling(double iScale) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,6,&_Trac2,&iScale); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_Scaling(iScale); \
   ExitAfterCall(this,6,_Trac2,&_ret_arg,&iScale); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeLawDistProj##classe::put_AppliedUnitSymbol(const CATBSTR & iSymbol) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,7,&_Trac2,&iSymbol); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_AppliedUnitSymbol(iSymbol); \
   ExitAfterCall(this,7,_Trac2,&_ret_arg,&iSymbol); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeLawDistProj##classe::GetAppliedUnitSymbol(CATBSTR & oSymbol) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,8,&_Trac2,&oSymbol); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetAppliedUnitSymbol(oSymbol); \
   ExitAfterCall(this,8,_Trac2,&_ret_arg,&oSymbol); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeLawDistProj##classe::put_MeasureUnitSymbol(const CATBSTR & iSymbol) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,9,&_Trac2,&iSymbol); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_MeasureUnitSymbol(iSymbol); \
   ExitAfterCall(this,9,_Trac2,&_ret_arg,&iSymbol); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeLawDistProj##classe::GetMeasureUnitSymbol(CATBSTR & oSymbol) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,10,&_Trac2,&oSymbol); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetMeasureUnitSymbol(oSymbol); \
   ExitAfterCall(this,10,_Trac2,&_ret_arg,&oSymbol); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeLawDistProj##classe::GetPlaneNormal(CATSafeArrayVariant & oNormal) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,11,&_Trac2,&oNormal); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetPlaneNormal(oNormal); \
   ExitAfterCall(this,11,_Trac2,&_ret_arg,&oNormal); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeLawDistProj##classe::PutPlaneNormal(const CATSafeArrayVariant & iNormal) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,12,&_Trac2,&iNormal); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->PutPlaneNormal(iNormal); \
   ExitAfterCall(this,12,_Trac2,&_ret_arg,&iNormal); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeLawDistProj##classe::get_PositiveDirectionOrientation(CATLONG & oOri) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,13,&_Trac2,&oOri); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_PositiveDirectionOrientation(oOri); \
   ExitAfterCall(this,13,_Trac2,&_ret_arg,&oOri); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeLawDistProj##classe::put_PositiveDirectionOrientation(CATLONG iOri) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,14,&_Trac2,&iOri); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_PositiveDirectionOrientation(iOri); \
   ExitAfterCall(this,14,_Trac2,&_ret_arg,&iOri); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeLawDistProj##classe::IsHeterogeneousLaw(CAT_VARIANT_BOOL & oHeterogeneousLaw) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,15,&_Trac2,&oHeterogeneousLaw); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->IsHeterogeneousLaw(oHeterogeneousLaw); \
   ExitAfterCall(this,15,_Trac2,&_ret_arg,&oHeterogeneousLaw); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeLawDistProj##classe::get_ParameterOnDefinition(CAT_VARIANT_BOOL & oParameterOnDefinition) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,16,&_Trac2,&oParameterOnDefinition); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_ParameterOnDefinition(oParameterOnDefinition); \
   ExitAfterCall(this,16,_Trac2,&_ret_arg,&oParameterOnDefinition); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeLawDistProj##classe::put_ParameterOnDefinition(CAT_VARIANT_BOOL iParameterOnDefinition) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,17,&_Trac2,&iParameterOnDefinition); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_ParameterOnDefinition(iParameterOnDefinition); \
   ExitAfterCall(this,17,_Trac2,&_ret_arg,&iParameterOnDefinition); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeLawDistProj##classe::Compute() \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,18,&_Trac2); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->Compute(); \
   ExitAfterCall(this,18,_Trac2,&_ret_arg); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeLawDistProj##classe::AppendHybridShape(CATIAHybridShape * iHybridShape) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,19,&_Trac2,&iHybridShape); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->AppendHybridShape(iHybridShape); \
   ExitAfterCall(this,19,_Trac2,&_ret_arg,&iHybridShape); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeLawDistProj##classe::get_Thickness(CATIAHybridShape *& oThickness) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,20,&_Trac2,&oThickness); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Thickness(oThickness); \
   ExitAfterCall(this,20,_Trac2,&_ret_arg,&oThickness); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAHybridShapeLawDistProj##classe::get_Application(CATIAApplication *& oApplication) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,21,&_Trac2,&oApplication); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Application(oApplication); \
   ExitAfterCall(this,21,_Trac2,&_ret_arg,&oApplication); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAHybridShapeLawDistProj##classe::get_Parent(CATBaseDispatch *& oParent) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,22,&_Trac2,&oParent); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Parent(oParent); \
   ExitAfterCall(this,22,_Trac2,&_ret_arg,&oParent); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAHybridShapeLawDistProj##classe::get_Name(CATBSTR & oNameBSTR) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,23,&_Trac2,&oNameBSTR); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Name(oNameBSTR); \
   ExitAfterCall(this,23,_Trac2,&_ret_arg,&oNameBSTR); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAHybridShapeLawDistProj##classe::put_Name(const CATBSTR & iNameBSTR) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,24,&_Trac2,&iNameBSTR); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_Name(iNameBSTR); \
   ExitAfterCall(this,24,_Trac2,&_ret_arg,&iNameBSTR); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAHybridShapeLawDistProj##classe::GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,25,&_Trac2,&IDName,&RealObj); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetItem(IDName,RealObj); \
   ExitAfterCall(this,25,_Trac2,&_ret_arg,&IDName,&RealObj); \
   return(_ret_arg); \
} \



/* Macro used to link an implementation with an interface */
#define TIE_CATIAHybridShapeLawDistProj(classe) \
 \
 \
declare_TIE_CATIAHybridShapeLawDistProj(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIAHybridShapeLawDistProj##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIAHybridShapeLawDistProj,"CATIAHybridShapeLawDistProj",CATIAHybridShapeLawDistProj::MetaObject(),classe::MetaObject(),TIE); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIAHybridShapeLawDistProj(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIECreation(CATIAHybridShapeLawDistProj, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIAHybridShapeLawDistProj##classe(classe::MetaObject(),CATIAHybridShapeLawDistProj::MetaObject(),(void *)CreateTIECATIAHybridShapeLawDistProj##classe)



/* Macro used to link an implementation with an interface */
/* This TIE is chained on the implementation object */
#define TIEchain_CATIAHybridShapeLawDistProj(classe) \
 \
 \
declare_TIE_CATIAHybridShapeLawDistProj(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIAHybridShapeLawDistProj##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIAHybridShapeLawDistProj,"CATIAHybridShapeLawDistProj",CATIAHybridShapeLawDistProj::MetaObject(),classe::MetaObject(),TIEchain); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIAHybridShapeLawDistProj(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIEchainCreation(CATIAHybridShapeLawDistProj, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIAHybridShapeLawDistProj##classe(classe::MetaObject(),CATIAHybridShapeLawDistProj::MetaObject(),(void *)CreateTIECATIAHybridShapeLawDistProj##classe)


/* Macro to switch between BOA and TIE at build time */ 
#ifdef CATSYS_BOA_IS_TIE
#define BOA_CATIAHybridShapeLawDistProj(classe) TIE_CATIAHybridShapeLawDistProj(classe)
#else
#define BOA_CATIAHybridShapeLawDistProj(classe) CATImplementBOA(CATIAHybridShapeLawDistProj, classe)
#endif

#endif
