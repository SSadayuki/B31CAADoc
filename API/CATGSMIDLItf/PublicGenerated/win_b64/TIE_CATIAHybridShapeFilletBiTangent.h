#ifndef __TIE_CATIAHybridShapeFilletBiTangent
#define __TIE_CATIAHybridShapeFilletBiTangent

#include <string.h>
#include "CATBaseUnknown.h"
#include "CATMetaClass.h"
#include "CATMacForTie.h"
#include "CATExitJournal.h"
#include "CATIAHybridShapeFilletBiTangent.h"
#include "JS0DSPA.h"


#ifdef _WINDOWS_SOURCE
#define Exported __declspec(dllexport)
#define Imported __declspec(dllimport)
#else
#define Exported 
#define Imported 
#endif


/* To link an implementation with the interface CATIAHybridShapeFilletBiTangent */
#define declare_TIE_CATIAHybridShapeFilletBiTangent(classe) \
 \
 \
class TIECATIAHybridShapeFilletBiTangent##classe : public CATIAHybridShapeFilletBiTangent \
{ \
   private: \
      CATDeclareCommonTIEMembers \
   public: \
      CATDeclareTIEMethods(CATIAHybridShapeFilletBiTangent, classe) \
      CATDeclareIUnknownMethodsForCATBaseUnknownTIE \
      CATDeclareIDispatchMethodsForCATBaseUnknownTIE \
      CATDeclareCATBaseUnknownMethodsForTIE \
      virtual HRESULT __stdcall get_FirstElem(CATIAReference *& oElem); \
      virtual HRESULT __stdcall put_FirstElem(CATIAReference * iElem); \
      virtual HRESULT __stdcall get_SecondElem(CATIAReference *& oElem); \
      virtual HRESULT __stdcall put_SecondElem(CATIAReference * iElem); \
      virtual HRESULT __stdcall get_Radius(CATIALength *& oRadius); \
      virtual HRESULT __stdcall get_RadiusValue(double & oX); \
      virtual HRESULT __stdcall put_RadiusValue(double iX); \
      virtual HRESULT __stdcall get_FirstOrientation(CATLONG & oOrientation); \
      virtual HRESULT __stdcall put_FirstOrientation(CATLONG iOrientation); \
      virtual HRESULT __stdcall get_SecondOrientation(CATLONG & oOrientation); \
      virtual HRESULT __stdcall put_SecondOrientation(CATLONG iOrientation); \
      virtual HRESULT __stdcall InvertFirstOrientation(); \
      virtual HRESULT __stdcall InvertSecondOrientation(); \
      virtual HRESULT __stdcall get_SupportsTrimMode(CATLONG & oTrimMode); \
      virtual HRESULT __stdcall put_SupportsTrimMode(CATLONG iTrimMode); \
      virtual HRESULT __stdcall get_RibbonRelimitationMode(CATLONG & oRelimitationMode); \
      virtual HRESULT __stdcall put_RibbonRelimitationMode(CATLONG iRelimitationMode); \
      virtual HRESULT __stdcall get_Spine(CATIAReference *& oElem); \
      virtual HRESULT __stdcall put_Spine(CATIAReference * iElem); \
      virtual HRESULT __stdcall get_HoldCurve(CATIAReference *& oElem); \
      virtual HRESULT __stdcall put_HoldCurve(CATIAReference * iElem); \
      virtual HRESULT __stdcall GetFaceToKeep(CATLONG iPos, CATIAReference *& oFace); \
      virtual HRESULT __stdcall AppendNewFaceToKeep(CATIAReference * iFace); \
      virtual HRESULT __stdcall RemoveFaceToKeep(CATIAReference * iFace); \
      virtual HRESULT __stdcall RemoveAllFacesToKeep(); \
      virtual HRESULT __stdcall get_FirstLawRelimiter(CATIAReference *& oFirstLaw); \
      virtual HRESULT __stdcall put_FirstLawRelimiter(CATIAReference * iFirstLaw); \
      virtual HRESULT __stdcall get_SecondLawRelimiter(CATIAReference *& oSecondLaw); \
      virtual HRESULT __stdcall put_SecondLawRelimiter(CATIAReference * iSecondLaw); \
      virtual HRESULT __stdcall get_IntegratedLaw(CATIAHybridShapeIntegratedLaw *& oIntegratedLaw); \
      virtual HRESULT __stdcall put_IntegratedLaw(CATIAHybridShapeIntegratedLaw * iIntegratedLaw); \
      virtual HRESULT __stdcall get_RadiusType(CATLONG & oRadiusType); \
      virtual HRESULT __stdcall put_RadiusType(CATLONG iRadiusType); \
      virtual HRESULT __stdcall get_SectionType(CATLONG & oSectionType); \
      virtual HRESULT __stdcall put_SectionType(CATLONG iSectionType); \
      virtual HRESULT __stdcall get_ConicalSectionParameter(double & oX); \
      virtual HRESULT __stdcall put_ConicalSectionParameter(double iX); \
      virtual HRESULT __stdcall Compute(); \
      virtual HRESULT __stdcall AppendHybridShape(CATIAHybridShape * iHybridShape); \
      virtual HRESULT __stdcall get_Thickness(CATIAHybridShape *& oThickness); \
      virtual HRESULT  __stdcall get_Application(CATIAApplication *& oApplication); \
      virtual HRESULT  __stdcall get_Parent(CATBaseDispatch *& oParent); \
      virtual HRESULT  __stdcall get_Name(CATBSTR & oNameBSTR); \
      virtual HRESULT  __stdcall put_Name(const CATBSTR & iNameBSTR); \
      virtual HRESULT  __stdcall GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj); \
};



#define ENVTIEdeclare_CATIAHybridShapeFilletBiTangent(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
virtual HRESULT __stdcall get_FirstElem(CATIAReference *& oElem); \
virtual HRESULT __stdcall put_FirstElem(CATIAReference * iElem); \
virtual HRESULT __stdcall get_SecondElem(CATIAReference *& oElem); \
virtual HRESULT __stdcall put_SecondElem(CATIAReference * iElem); \
virtual HRESULT __stdcall get_Radius(CATIALength *& oRadius); \
virtual HRESULT __stdcall get_RadiusValue(double & oX); \
virtual HRESULT __stdcall put_RadiusValue(double iX); \
virtual HRESULT __stdcall get_FirstOrientation(CATLONG & oOrientation); \
virtual HRESULT __stdcall put_FirstOrientation(CATLONG iOrientation); \
virtual HRESULT __stdcall get_SecondOrientation(CATLONG & oOrientation); \
virtual HRESULT __stdcall put_SecondOrientation(CATLONG iOrientation); \
virtual HRESULT __stdcall InvertFirstOrientation(); \
virtual HRESULT __stdcall InvertSecondOrientation(); \
virtual HRESULT __stdcall get_SupportsTrimMode(CATLONG & oTrimMode); \
virtual HRESULT __stdcall put_SupportsTrimMode(CATLONG iTrimMode); \
virtual HRESULT __stdcall get_RibbonRelimitationMode(CATLONG & oRelimitationMode); \
virtual HRESULT __stdcall put_RibbonRelimitationMode(CATLONG iRelimitationMode); \
virtual HRESULT __stdcall get_Spine(CATIAReference *& oElem); \
virtual HRESULT __stdcall put_Spine(CATIAReference * iElem); \
virtual HRESULT __stdcall get_HoldCurve(CATIAReference *& oElem); \
virtual HRESULT __stdcall put_HoldCurve(CATIAReference * iElem); \
virtual HRESULT __stdcall GetFaceToKeep(CATLONG iPos, CATIAReference *& oFace); \
virtual HRESULT __stdcall AppendNewFaceToKeep(CATIAReference * iFace); \
virtual HRESULT __stdcall RemoveFaceToKeep(CATIAReference * iFace); \
virtual HRESULT __stdcall RemoveAllFacesToKeep(); \
virtual HRESULT __stdcall get_FirstLawRelimiter(CATIAReference *& oFirstLaw); \
virtual HRESULT __stdcall put_FirstLawRelimiter(CATIAReference * iFirstLaw); \
virtual HRESULT __stdcall get_SecondLawRelimiter(CATIAReference *& oSecondLaw); \
virtual HRESULT __stdcall put_SecondLawRelimiter(CATIAReference * iSecondLaw); \
virtual HRESULT __stdcall get_IntegratedLaw(CATIAHybridShapeIntegratedLaw *& oIntegratedLaw); \
virtual HRESULT __stdcall put_IntegratedLaw(CATIAHybridShapeIntegratedLaw * iIntegratedLaw); \
virtual HRESULT __stdcall get_RadiusType(CATLONG & oRadiusType); \
virtual HRESULT __stdcall put_RadiusType(CATLONG iRadiusType); \
virtual HRESULT __stdcall get_SectionType(CATLONG & oSectionType); \
virtual HRESULT __stdcall put_SectionType(CATLONG iSectionType); \
virtual HRESULT __stdcall get_ConicalSectionParameter(double & oX); \
virtual HRESULT __stdcall put_ConicalSectionParameter(double iX); \
virtual HRESULT __stdcall Compute(); \
virtual HRESULT __stdcall AppendHybridShape(CATIAHybridShape * iHybridShape); \
virtual HRESULT __stdcall get_Thickness(CATIAHybridShape *& oThickness); \
virtual HRESULT  __stdcall get_Application(CATIAApplication *& oApplication); \
virtual HRESULT  __stdcall get_Parent(CATBaseDispatch *& oParent); \
virtual HRESULT  __stdcall get_Name(CATBSTR & oNameBSTR); \
virtual HRESULT  __stdcall put_Name(const CATBSTR & iNameBSTR); \
virtual HRESULT  __stdcall GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj); \


#define ENVTIEdefine_CATIAHybridShapeFilletBiTangent(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
HRESULT __stdcall  ENVTIEName::get_FirstElem(CATIAReference *& oElem) \
{ \
return (ENVTIECALL(CATIAHybridShapeFilletBiTangent,ENVTIETypeLetter,ENVTIELetter)get_FirstElem(oElem)); \
} \
HRESULT __stdcall  ENVTIEName::put_FirstElem(CATIAReference * iElem) \
{ \
return (ENVTIECALL(CATIAHybridShapeFilletBiTangent,ENVTIETypeLetter,ENVTIELetter)put_FirstElem(iElem)); \
} \
HRESULT __stdcall  ENVTIEName::get_SecondElem(CATIAReference *& oElem) \
{ \
return (ENVTIECALL(CATIAHybridShapeFilletBiTangent,ENVTIETypeLetter,ENVTIELetter)get_SecondElem(oElem)); \
} \
HRESULT __stdcall  ENVTIEName::put_SecondElem(CATIAReference * iElem) \
{ \
return (ENVTIECALL(CATIAHybridShapeFilletBiTangent,ENVTIETypeLetter,ENVTIELetter)put_SecondElem(iElem)); \
} \
HRESULT __stdcall  ENVTIEName::get_Radius(CATIALength *& oRadius) \
{ \
return (ENVTIECALL(CATIAHybridShapeFilletBiTangent,ENVTIETypeLetter,ENVTIELetter)get_Radius(oRadius)); \
} \
HRESULT __stdcall  ENVTIEName::get_RadiusValue(double & oX) \
{ \
return (ENVTIECALL(CATIAHybridShapeFilletBiTangent,ENVTIETypeLetter,ENVTIELetter)get_RadiusValue(oX)); \
} \
HRESULT __stdcall  ENVTIEName::put_RadiusValue(double iX) \
{ \
return (ENVTIECALL(CATIAHybridShapeFilletBiTangent,ENVTIETypeLetter,ENVTIELetter)put_RadiusValue(iX)); \
} \
HRESULT __stdcall  ENVTIEName::get_FirstOrientation(CATLONG & oOrientation) \
{ \
return (ENVTIECALL(CATIAHybridShapeFilletBiTangent,ENVTIETypeLetter,ENVTIELetter)get_FirstOrientation(oOrientation)); \
} \
HRESULT __stdcall  ENVTIEName::put_FirstOrientation(CATLONG iOrientation) \
{ \
return (ENVTIECALL(CATIAHybridShapeFilletBiTangent,ENVTIETypeLetter,ENVTIELetter)put_FirstOrientation(iOrientation)); \
} \
HRESULT __stdcall  ENVTIEName::get_SecondOrientation(CATLONG & oOrientation) \
{ \
return (ENVTIECALL(CATIAHybridShapeFilletBiTangent,ENVTIETypeLetter,ENVTIELetter)get_SecondOrientation(oOrientation)); \
} \
HRESULT __stdcall  ENVTIEName::put_SecondOrientation(CATLONG iOrientation) \
{ \
return (ENVTIECALL(CATIAHybridShapeFilletBiTangent,ENVTIETypeLetter,ENVTIELetter)put_SecondOrientation(iOrientation)); \
} \
HRESULT __stdcall  ENVTIEName::InvertFirstOrientation() \
{ \
return (ENVTIECALL(CATIAHybridShapeFilletBiTangent,ENVTIETypeLetter,ENVTIELetter)InvertFirstOrientation()); \
} \
HRESULT __stdcall  ENVTIEName::InvertSecondOrientation() \
{ \
return (ENVTIECALL(CATIAHybridShapeFilletBiTangent,ENVTIETypeLetter,ENVTIELetter)InvertSecondOrientation()); \
} \
HRESULT __stdcall  ENVTIEName::get_SupportsTrimMode(CATLONG & oTrimMode) \
{ \
return (ENVTIECALL(CATIAHybridShapeFilletBiTangent,ENVTIETypeLetter,ENVTIELetter)get_SupportsTrimMode(oTrimMode)); \
} \
HRESULT __stdcall  ENVTIEName::put_SupportsTrimMode(CATLONG iTrimMode) \
{ \
return (ENVTIECALL(CATIAHybridShapeFilletBiTangent,ENVTIETypeLetter,ENVTIELetter)put_SupportsTrimMode(iTrimMode)); \
} \
HRESULT __stdcall  ENVTIEName::get_RibbonRelimitationMode(CATLONG & oRelimitationMode) \
{ \
return (ENVTIECALL(CATIAHybridShapeFilletBiTangent,ENVTIETypeLetter,ENVTIELetter)get_RibbonRelimitationMode(oRelimitationMode)); \
} \
HRESULT __stdcall  ENVTIEName::put_RibbonRelimitationMode(CATLONG iRelimitationMode) \
{ \
return (ENVTIECALL(CATIAHybridShapeFilletBiTangent,ENVTIETypeLetter,ENVTIELetter)put_RibbonRelimitationMode(iRelimitationMode)); \
} \
HRESULT __stdcall  ENVTIEName::get_Spine(CATIAReference *& oElem) \
{ \
return (ENVTIECALL(CATIAHybridShapeFilletBiTangent,ENVTIETypeLetter,ENVTIELetter)get_Spine(oElem)); \
} \
HRESULT __stdcall  ENVTIEName::put_Spine(CATIAReference * iElem) \
{ \
return (ENVTIECALL(CATIAHybridShapeFilletBiTangent,ENVTIETypeLetter,ENVTIELetter)put_Spine(iElem)); \
} \
HRESULT __stdcall  ENVTIEName::get_HoldCurve(CATIAReference *& oElem) \
{ \
return (ENVTIECALL(CATIAHybridShapeFilletBiTangent,ENVTIETypeLetter,ENVTIELetter)get_HoldCurve(oElem)); \
} \
HRESULT __stdcall  ENVTIEName::put_HoldCurve(CATIAReference * iElem) \
{ \
return (ENVTIECALL(CATIAHybridShapeFilletBiTangent,ENVTIETypeLetter,ENVTIELetter)put_HoldCurve(iElem)); \
} \
HRESULT __stdcall  ENVTIEName::GetFaceToKeep(CATLONG iPos, CATIAReference *& oFace) \
{ \
return (ENVTIECALL(CATIAHybridShapeFilletBiTangent,ENVTIETypeLetter,ENVTIELetter)GetFaceToKeep(iPos,oFace)); \
} \
HRESULT __stdcall  ENVTIEName::AppendNewFaceToKeep(CATIAReference * iFace) \
{ \
return (ENVTIECALL(CATIAHybridShapeFilletBiTangent,ENVTIETypeLetter,ENVTIELetter)AppendNewFaceToKeep(iFace)); \
} \
HRESULT __stdcall  ENVTIEName::RemoveFaceToKeep(CATIAReference * iFace) \
{ \
return (ENVTIECALL(CATIAHybridShapeFilletBiTangent,ENVTIETypeLetter,ENVTIELetter)RemoveFaceToKeep(iFace)); \
} \
HRESULT __stdcall  ENVTIEName::RemoveAllFacesToKeep() \
{ \
return (ENVTIECALL(CATIAHybridShapeFilletBiTangent,ENVTIETypeLetter,ENVTIELetter)RemoveAllFacesToKeep()); \
} \
HRESULT __stdcall  ENVTIEName::get_FirstLawRelimiter(CATIAReference *& oFirstLaw) \
{ \
return (ENVTIECALL(CATIAHybridShapeFilletBiTangent,ENVTIETypeLetter,ENVTIELetter)get_FirstLawRelimiter(oFirstLaw)); \
} \
HRESULT __stdcall  ENVTIEName::put_FirstLawRelimiter(CATIAReference * iFirstLaw) \
{ \
return (ENVTIECALL(CATIAHybridShapeFilletBiTangent,ENVTIETypeLetter,ENVTIELetter)put_FirstLawRelimiter(iFirstLaw)); \
} \
HRESULT __stdcall  ENVTIEName::get_SecondLawRelimiter(CATIAReference *& oSecondLaw) \
{ \
return (ENVTIECALL(CATIAHybridShapeFilletBiTangent,ENVTIETypeLetter,ENVTIELetter)get_SecondLawRelimiter(oSecondLaw)); \
} \
HRESULT __stdcall  ENVTIEName::put_SecondLawRelimiter(CATIAReference * iSecondLaw) \
{ \
return (ENVTIECALL(CATIAHybridShapeFilletBiTangent,ENVTIETypeLetter,ENVTIELetter)put_SecondLawRelimiter(iSecondLaw)); \
} \
HRESULT __stdcall  ENVTIEName::get_IntegratedLaw(CATIAHybridShapeIntegratedLaw *& oIntegratedLaw) \
{ \
return (ENVTIECALL(CATIAHybridShapeFilletBiTangent,ENVTIETypeLetter,ENVTIELetter)get_IntegratedLaw(oIntegratedLaw)); \
} \
HRESULT __stdcall  ENVTIEName::put_IntegratedLaw(CATIAHybridShapeIntegratedLaw * iIntegratedLaw) \
{ \
return (ENVTIECALL(CATIAHybridShapeFilletBiTangent,ENVTIETypeLetter,ENVTIELetter)put_IntegratedLaw(iIntegratedLaw)); \
} \
HRESULT __stdcall  ENVTIEName::get_RadiusType(CATLONG & oRadiusType) \
{ \
return (ENVTIECALL(CATIAHybridShapeFilletBiTangent,ENVTIETypeLetter,ENVTIELetter)get_RadiusType(oRadiusType)); \
} \
HRESULT __stdcall  ENVTIEName::put_RadiusType(CATLONG iRadiusType) \
{ \
return (ENVTIECALL(CATIAHybridShapeFilletBiTangent,ENVTIETypeLetter,ENVTIELetter)put_RadiusType(iRadiusType)); \
} \
HRESULT __stdcall  ENVTIEName::get_SectionType(CATLONG & oSectionType) \
{ \
return (ENVTIECALL(CATIAHybridShapeFilletBiTangent,ENVTIETypeLetter,ENVTIELetter)get_SectionType(oSectionType)); \
} \
HRESULT __stdcall  ENVTIEName::put_SectionType(CATLONG iSectionType) \
{ \
return (ENVTIECALL(CATIAHybridShapeFilletBiTangent,ENVTIETypeLetter,ENVTIELetter)put_SectionType(iSectionType)); \
} \
HRESULT __stdcall  ENVTIEName::get_ConicalSectionParameter(double & oX) \
{ \
return (ENVTIECALL(CATIAHybridShapeFilletBiTangent,ENVTIETypeLetter,ENVTIELetter)get_ConicalSectionParameter(oX)); \
} \
HRESULT __stdcall  ENVTIEName::put_ConicalSectionParameter(double iX) \
{ \
return (ENVTIECALL(CATIAHybridShapeFilletBiTangent,ENVTIETypeLetter,ENVTIELetter)put_ConicalSectionParameter(iX)); \
} \
HRESULT __stdcall  ENVTIEName::Compute() \
{ \
return (ENVTIECALL(CATIAHybridShapeFilletBiTangent,ENVTIETypeLetter,ENVTIELetter)Compute()); \
} \
HRESULT __stdcall  ENVTIEName::AppendHybridShape(CATIAHybridShape * iHybridShape) \
{ \
return (ENVTIECALL(CATIAHybridShapeFilletBiTangent,ENVTIETypeLetter,ENVTIELetter)AppendHybridShape(iHybridShape)); \
} \
HRESULT __stdcall  ENVTIEName::get_Thickness(CATIAHybridShape *& oThickness) \
{ \
return (ENVTIECALL(CATIAHybridShapeFilletBiTangent,ENVTIETypeLetter,ENVTIELetter)get_Thickness(oThickness)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Application(CATIAApplication *& oApplication) \
{ \
return (ENVTIECALL(CATIAHybridShapeFilletBiTangent,ENVTIETypeLetter,ENVTIELetter)get_Application(oApplication)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Parent(CATBaseDispatch *& oParent) \
{ \
return (ENVTIECALL(CATIAHybridShapeFilletBiTangent,ENVTIETypeLetter,ENVTIELetter)get_Parent(oParent)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Name(CATBSTR & oNameBSTR) \
{ \
return (ENVTIECALL(CATIAHybridShapeFilletBiTangent,ENVTIETypeLetter,ENVTIELetter)get_Name(oNameBSTR)); \
} \
HRESULT  __stdcall  ENVTIEName::put_Name(const CATBSTR & iNameBSTR) \
{ \
return (ENVTIECALL(CATIAHybridShapeFilletBiTangent,ENVTIETypeLetter,ENVTIELetter)put_Name(iNameBSTR)); \
} \
HRESULT  __stdcall  ENVTIEName::GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj) \
{ \
return (ENVTIECALL(CATIAHybridShapeFilletBiTangent,ENVTIETypeLetter,ENVTIELetter)GetItem(IDName,RealObj)); \
} \


/* Name of the TIE class */
#define class_TIE_CATIAHybridShapeFilletBiTangent(classe)    TIECATIAHybridShapeFilletBiTangent##classe


/* Common methods inside a TIE */
#define common_TIE_CATIAHybridShapeFilletBiTangent(classe) \
 \
 \
/* Static initialization */ \
CATDefineCommonTIEMembers(CATIAHybridShapeFilletBiTangent, classe) \
 \
 \
CATImplementTIEMethods(CATIAHybridShapeFilletBiTangent, classe) \
CATImplementIUnknownMethodsForCATBaseUnknownTIE(CATIAHybridShapeFilletBiTangent, classe, 2) \
CATImplementIDispatchMethodsForCATBaseUnknownTIE(CATIAHybridShapeFilletBiTangent, classe) \
CATImplementCATBaseUnknownMethodsForTIE(CATIAHybridShapeFilletBiTangent, classe) \
 \
HRESULT __stdcall  TIECATIAHybridShapeFilletBiTangent##classe::get_FirstElem(CATIAReference *& oElem) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,1,&_Trac2,&oElem); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_FirstElem(oElem); \
   ExitAfterCall(this,1,_Trac2,&_ret_arg,&oElem); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeFilletBiTangent##classe::put_FirstElem(CATIAReference * iElem) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,2,&_Trac2,&iElem); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_FirstElem(iElem); \
   ExitAfterCall(this,2,_Trac2,&_ret_arg,&iElem); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeFilletBiTangent##classe::get_SecondElem(CATIAReference *& oElem) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,3,&_Trac2,&oElem); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_SecondElem(oElem); \
   ExitAfterCall(this,3,_Trac2,&_ret_arg,&oElem); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeFilletBiTangent##classe::put_SecondElem(CATIAReference * iElem) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,4,&_Trac2,&iElem); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_SecondElem(iElem); \
   ExitAfterCall(this,4,_Trac2,&_ret_arg,&iElem); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeFilletBiTangent##classe::get_Radius(CATIALength *& oRadius) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,5,&_Trac2,&oRadius); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Radius(oRadius); \
   ExitAfterCall(this,5,_Trac2,&_ret_arg,&oRadius); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeFilletBiTangent##classe::get_RadiusValue(double & oX) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,6,&_Trac2,&oX); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_RadiusValue(oX); \
   ExitAfterCall(this,6,_Trac2,&_ret_arg,&oX); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeFilletBiTangent##classe::put_RadiusValue(double iX) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,7,&_Trac2,&iX); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_RadiusValue(iX); \
   ExitAfterCall(this,7,_Trac2,&_ret_arg,&iX); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeFilletBiTangent##classe::get_FirstOrientation(CATLONG & oOrientation) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,8,&_Trac2,&oOrientation); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_FirstOrientation(oOrientation); \
   ExitAfterCall(this,8,_Trac2,&_ret_arg,&oOrientation); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeFilletBiTangent##classe::put_FirstOrientation(CATLONG iOrientation) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,9,&_Trac2,&iOrientation); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_FirstOrientation(iOrientation); \
   ExitAfterCall(this,9,_Trac2,&_ret_arg,&iOrientation); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeFilletBiTangent##classe::get_SecondOrientation(CATLONG & oOrientation) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,10,&_Trac2,&oOrientation); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_SecondOrientation(oOrientation); \
   ExitAfterCall(this,10,_Trac2,&_ret_arg,&oOrientation); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeFilletBiTangent##classe::put_SecondOrientation(CATLONG iOrientation) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,11,&_Trac2,&iOrientation); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_SecondOrientation(iOrientation); \
   ExitAfterCall(this,11,_Trac2,&_ret_arg,&iOrientation); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeFilletBiTangent##classe::InvertFirstOrientation() \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,12,&_Trac2); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->InvertFirstOrientation(); \
   ExitAfterCall(this,12,_Trac2,&_ret_arg); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeFilletBiTangent##classe::InvertSecondOrientation() \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,13,&_Trac2); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->InvertSecondOrientation(); \
   ExitAfterCall(this,13,_Trac2,&_ret_arg); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeFilletBiTangent##classe::get_SupportsTrimMode(CATLONG & oTrimMode) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,14,&_Trac2,&oTrimMode); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_SupportsTrimMode(oTrimMode); \
   ExitAfterCall(this,14,_Trac2,&_ret_arg,&oTrimMode); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeFilletBiTangent##classe::put_SupportsTrimMode(CATLONG iTrimMode) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,15,&_Trac2,&iTrimMode); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_SupportsTrimMode(iTrimMode); \
   ExitAfterCall(this,15,_Trac2,&_ret_arg,&iTrimMode); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeFilletBiTangent##classe::get_RibbonRelimitationMode(CATLONG & oRelimitationMode) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,16,&_Trac2,&oRelimitationMode); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_RibbonRelimitationMode(oRelimitationMode); \
   ExitAfterCall(this,16,_Trac2,&_ret_arg,&oRelimitationMode); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeFilletBiTangent##classe::put_RibbonRelimitationMode(CATLONG iRelimitationMode) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,17,&_Trac2,&iRelimitationMode); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_RibbonRelimitationMode(iRelimitationMode); \
   ExitAfterCall(this,17,_Trac2,&_ret_arg,&iRelimitationMode); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeFilletBiTangent##classe::get_Spine(CATIAReference *& oElem) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,18,&_Trac2,&oElem); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Spine(oElem); \
   ExitAfterCall(this,18,_Trac2,&_ret_arg,&oElem); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeFilletBiTangent##classe::put_Spine(CATIAReference * iElem) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,19,&_Trac2,&iElem); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_Spine(iElem); \
   ExitAfterCall(this,19,_Trac2,&_ret_arg,&iElem); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeFilletBiTangent##classe::get_HoldCurve(CATIAReference *& oElem) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,20,&_Trac2,&oElem); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_HoldCurve(oElem); \
   ExitAfterCall(this,20,_Trac2,&_ret_arg,&oElem); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeFilletBiTangent##classe::put_HoldCurve(CATIAReference * iElem) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,21,&_Trac2,&iElem); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_HoldCurve(iElem); \
   ExitAfterCall(this,21,_Trac2,&_ret_arg,&iElem); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeFilletBiTangent##classe::GetFaceToKeep(CATLONG iPos, CATIAReference *& oFace) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,22,&_Trac2,&iPos,&oFace); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetFaceToKeep(iPos,oFace); \
   ExitAfterCall(this,22,_Trac2,&_ret_arg,&iPos,&oFace); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeFilletBiTangent##classe::AppendNewFaceToKeep(CATIAReference * iFace) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,23,&_Trac2,&iFace); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->AppendNewFaceToKeep(iFace); \
   ExitAfterCall(this,23,_Trac2,&_ret_arg,&iFace); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeFilletBiTangent##classe::RemoveFaceToKeep(CATIAReference * iFace) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,24,&_Trac2,&iFace); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->RemoveFaceToKeep(iFace); \
   ExitAfterCall(this,24,_Trac2,&_ret_arg,&iFace); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeFilletBiTangent##classe::RemoveAllFacesToKeep() \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,25,&_Trac2); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->RemoveAllFacesToKeep(); \
   ExitAfterCall(this,25,_Trac2,&_ret_arg); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeFilletBiTangent##classe::get_FirstLawRelimiter(CATIAReference *& oFirstLaw) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,26,&_Trac2,&oFirstLaw); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_FirstLawRelimiter(oFirstLaw); \
   ExitAfterCall(this,26,_Trac2,&_ret_arg,&oFirstLaw); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeFilletBiTangent##classe::put_FirstLawRelimiter(CATIAReference * iFirstLaw) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,27,&_Trac2,&iFirstLaw); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_FirstLawRelimiter(iFirstLaw); \
   ExitAfterCall(this,27,_Trac2,&_ret_arg,&iFirstLaw); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeFilletBiTangent##classe::get_SecondLawRelimiter(CATIAReference *& oSecondLaw) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,28,&_Trac2,&oSecondLaw); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_SecondLawRelimiter(oSecondLaw); \
   ExitAfterCall(this,28,_Trac2,&_ret_arg,&oSecondLaw); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeFilletBiTangent##classe::put_SecondLawRelimiter(CATIAReference * iSecondLaw) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,29,&_Trac2,&iSecondLaw); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_SecondLawRelimiter(iSecondLaw); \
   ExitAfterCall(this,29,_Trac2,&_ret_arg,&iSecondLaw); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeFilletBiTangent##classe::get_IntegratedLaw(CATIAHybridShapeIntegratedLaw *& oIntegratedLaw) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,30,&_Trac2,&oIntegratedLaw); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_IntegratedLaw(oIntegratedLaw); \
   ExitAfterCall(this,30,_Trac2,&_ret_arg,&oIntegratedLaw); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeFilletBiTangent##classe::put_IntegratedLaw(CATIAHybridShapeIntegratedLaw * iIntegratedLaw) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,31,&_Trac2,&iIntegratedLaw); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_IntegratedLaw(iIntegratedLaw); \
   ExitAfterCall(this,31,_Trac2,&_ret_arg,&iIntegratedLaw); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeFilletBiTangent##classe::get_RadiusType(CATLONG & oRadiusType) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,32,&_Trac2,&oRadiusType); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_RadiusType(oRadiusType); \
   ExitAfterCall(this,32,_Trac2,&_ret_arg,&oRadiusType); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeFilletBiTangent##classe::put_RadiusType(CATLONG iRadiusType) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,33,&_Trac2,&iRadiusType); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_RadiusType(iRadiusType); \
   ExitAfterCall(this,33,_Trac2,&_ret_arg,&iRadiusType); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeFilletBiTangent##classe::get_SectionType(CATLONG & oSectionType) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,34,&_Trac2,&oSectionType); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_SectionType(oSectionType); \
   ExitAfterCall(this,34,_Trac2,&_ret_arg,&oSectionType); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeFilletBiTangent##classe::put_SectionType(CATLONG iSectionType) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,35,&_Trac2,&iSectionType); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_SectionType(iSectionType); \
   ExitAfterCall(this,35,_Trac2,&_ret_arg,&iSectionType); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeFilletBiTangent##classe::get_ConicalSectionParameter(double & oX) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,36,&_Trac2,&oX); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_ConicalSectionParameter(oX); \
   ExitAfterCall(this,36,_Trac2,&_ret_arg,&oX); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeFilletBiTangent##classe::put_ConicalSectionParameter(double iX) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,37,&_Trac2,&iX); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_ConicalSectionParameter(iX); \
   ExitAfterCall(this,37,_Trac2,&_ret_arg,&iX); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeFilletBiTangent##classe::Compute() \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,38,&_Trac2); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->Compute(); \
   ExitAfterCall(this,38,_Trac2,&_ret_arg); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeFilletBiTangent##classe::AppendHybridShape(CATIAHybridShape * iHybridShape) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,39,&_Trac2,&iHybridShape); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->AppendHybridShape(iHybridShape); \
   ExitAfterCall(this,39,_Trac2,&_ret_arg,&iHybridShape); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeFilletBiTangent##classe::get_Thickness(CATIAHybridShape *& oThickness) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,40,&_Trac2,&oThickness); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Thickness(oThickness); \
   ExitAfterCall(this,40,_Trac2,&_ret_arg,&oThickness); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAHybridShapeFilletBiTangent##classe::get_Application(CATIAApplication *& oApplication) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,41,&_Trac2,&oApplication); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Application(oApplication); \
   ExitAfterCall(this,41,_Trac2,&_ret_arg,&oApplication); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAHybridShapeFilletBiTangent##classe::get_Parent(CATBaseDispatch *& oParent) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,42,&_Trac2,&oParent); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Parent(oParent); \
   ExitAfterCall(this,42,_Trac2,&_ret_arg,&oParent); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAHybridShapeFilletBiTangent##classe::get_Name(CATBSTR & oNameBSTR) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,43,&_Trac2,&oNameBSTR); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Name(oNameBSTR); \
   ExitAfterCall(this,43,_Trac2,&_ret_arg,&oNameBSTR); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAHybridShapeFilletBiTangent##classe::put_Name(const CATBSTR & iNameBSTR) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,44,&_Trac2,&iNameBSTR); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_Name(iNameBSTR); \
   ExitAfterCall(this,44,_Trac2,&_ret_arg,&iNameBSTR); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAHybridShapeFilletBiTangent##classe::GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,45,&_Trac2,&IDName,&RealObj); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetItem(IDName,RealObj); \
   ExitAfterCall(this,45,_Trac2,&_ret_arg,&IDName,&RealObj); \
   return(_ret_arg); \
} \



/* Macro used to link an implementation with an interface */
#define TIE_CATIAHybridShapeFilletBiTangent(classe) \
 \
 \
declare_TIE_CATIAHybridShapeFilletBiTangent(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIAHybridShapeFilletBiTangent##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIAHybridShapeFilletBiTangent,"CATIAHybridShapeFilletBiTangent",CATIAHybridShapeFilletBiTangent::MetaObject(),classe::MetaObject(),TIE); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIAHybridShapeFilletBiTangent(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIECreation(CATIAHybridShapeFilletBiTangent, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIAHybridShapeFilletBiTangent##classe(classe::MetaObject(),CATIAHybridShapeFilletBiTangent::MetaObject(),(void *)CreateTIECATIAHybridShapeFilletBiTangent##classe)



/* Macro used to link an implementation with an interface */
/* This TIE is chained on the implementation object */
#define TIEchain_CATIAHybridShapeFilletBiTangent(classe) \
 \
 \
declare_TIE_CATIAHybridShapeFilletBiTangent(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIAHybridShapeFilletBiTangent##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIAHybridShapeFilletBiTangent,"CATIAHybridShapeFilletBiTangent",CATIAHybridShapeFilletBiTangent::MetaObject(),classe::MetaObject(),TIEchain); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIAHybridShapeFilletBiTangent(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIEchainCreation(CATIAHybridShapeFilletBiTangent, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIAHybridShapeFilletBiTangent##classe(classe::MetaObject(),CATIAHybridShapeFilletBiTangent::MetaObject(),(void *)CreateTIECATIAHybridShapeFilletBiTangent##classe)


/* Macro to switch between BOA and TIE at build time */ 
#ifdef CATSYS_BOA_IS_TIE
#define BOA_CATIAHybridShapeFilletBiTangent(classe) TIE_CATIAHybridShapeFilletBiTangent(classe)
#else
#define BOA_CATIAHybridShapeFilletBiTangent(classe) CATImplementBOA(CATIAHybridShapeFilletBiTangent, classe)
#endif

#endif
