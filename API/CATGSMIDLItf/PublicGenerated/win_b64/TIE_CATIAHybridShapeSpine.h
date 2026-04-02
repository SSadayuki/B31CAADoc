#ifndef __TIE_CATIAHybridShapeSpine
#define __TIE_CATIAHybridShapeSpine

#include <string.h>
#include "CATBaseUnknown.h"
#include "CATMetaClass.h"
#include "CATMacForTie.h"
#include "CATExitJournal.h"
#include "CATIAHybridShapeSpine.h"
#include "JS0DSPA.h"


#ifdef _WINDOWS_SOURCE
#define Exported __declspec(dllexport)
#define Imported __declspec(dllimport)
#else
#define Exported 
#define Imported 
#endif


/* To link an implementation with the interface CATIAHybridShapeSpine */
#define declare_TIE_CATIAHybridShapeSpine(classe) \
 \
 \
class TIECATIAHybridShapeSpine##classe : public CATIAHybridShapeSpine \
{ \
   private: \
      CATDeclareCommonTIEMembers \
   public: \
      CATDeclareTIEMethods(CATIAHybridShapeSpine, classe) \
      CATDeclareIUnknownMethodsForCATBaseUnknownTIE \
      CATDeclareIDispatchMethodsForCATBaseUnknownTIE \
      CATDeclareCATBaseUnknownMethodsForTIE \
      virtual HRESULT __stdcall get_StartPoint(CATIAReference *& opIAPoint); \
      virtual HRESULT __stdcall put_StartPoint(CATIAReference * ipIAPoint); \
      virtual HRESULT __stdcall SetStartPoint(CATIAReference * iPoint); \
      virtual HRESULT __stdcall AddGuide(CATIAReference * iGuide); \
      virtual HRESULT __stdcall AddSection(CATIAReference * iSection); \
      virtual HRESULT __stdcall RemoveGuide(CATIAReference * iGuide); \
      virtual HRESULT __stdcall RemoveSection(CATIAReference * iSection); \
      virtual HRESULT __stdcall GetNumberOfGuides(CATLONG & oNbGuides); \
      virtual HRESULT __stdcall GetNumberOfSections(CATLONG & oNbSections); \
      virtual HRESULT __stdcall GetGuide(CATLONG iIdx, CATIAReference *& opIAGuide); \
      virtual HRESULT __stdcall GetSection(CATLONG iIdx, CATIAReference *& oSection); \
      virtual HRESULT __stdcall ModifySectionCurve(CATIAReference * ipIASection, CATIAReference * ipIANewSection); \
      virtual HRESULT __stdcall ModifyGuideCurve(CATIAReference * ipIAGuide, CATIAReference * ipIANewGuide); \
      virtual HRESULT __stdcall get_Orientation(CATLONG & oOrientation); \
      virtual HRESULT __stdcall put_Orientation(CATLONG iOrientation); \
      virtual HRESULT __stdcall Compute(); \
      virtual HRESULT __stdcall AppendHybridShape(CATIAHybridShape * iHybridShape); \
      virtual HRESULT __stdcall get_Thickness(CATIAHybridShape *& oThickness); \
      virtual HRESULT  __stdcall get_Application(CATIAApplication *& oApplication); \
      virtual HRESULT  __stdcall get_Parent(CATBaseDispatch *& oParent); \
      virtual HRESULT  __stdcall get_Name(CATBSTR & oNameBSTR); \
      virtual HRESULT  __stdcall put_Name(const CATBSTR & iNameBSTR); \
      virtual HRESULT  __stdcall GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj); \
};



#define ENVTIEdeclare_CATIAHybridShapeSpine(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
virtual HRESULT __stdcall get_StartPoint(CATIAReference *& opIAPoint); \
virtual HRESULT __stdcall put_StartPoint(CATIAReference * ipIAPoint); \
virtual HRESULT __stdcall SetStartPoint(CATIAReference * iPoint); \
virtual HRESULT __stdcall AddGuide(CATIAReference * iGuide); \
virtual HRESULT __stdcall AddSection(CATIAReference * iSection); \
virtual HRESULT __stdcall RemoveGuide(CATIAReference * iGuide); \
virtual HRESULT __stdcall RemoveSection(CATIAReference * iSection); \
virtual HRESULT __stdcall GetNumberOfGuides(CATLONG & oNbGuides); \
virtual HRESULT __stdcall GetNumberOfSections(CATLONG & oNbSections); \
virtual HRESULT __stdcall GetGuide(CATLONG iIdx, CATIAReference *& opIAGuide); \
virtual HRESULT __stdcall GetSection(CATLONG iIdx, CATIAReference *& oSection); \
virtual HRESULT __stdcall ModifySectionCurve(CATIAReference * ipIASection, CATIAReference * ipIANewSection); \
virtual HRESULT __stdcall ModifyGuideCurve(CATIAReference * ipIAGuide, CATIAReference * ipIANewGuide); \
virtual HRESULT __stdcall get_Orientation(CATLONG & oOrientation); \
virtual HRESULT __stdcall put_Orientation(CATLONG iOrientation); \
virtual HRESULT __stdcall Compute(); \
virtual HRESULT __stdcall AppendHybridShape(CATIAHybridShape * iHybridShape); \
virtual HRESULT __stdcall get_Thickness(CATIAHybridShape *& oThickness); \
virtual HRESULT  __stdcall get_Application(CATIAApplication *& oApplication); \
virtual HRESULT  __stdcall get_Parent(CATBaseDispatch *& oParent); \
virtual HRESULT  __stdcall get_Name(CATBSTR & oNameBSTR); \
virtual HRESULT  __stdcall put_Name(const CATBSTR & iNameBSTR); \
virtual HRESULT  __stdcall GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj); \


#define ENVTIEdefine_CATIAHybridShapeSpine(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
HRESULT __stdcall  ENVTIEName::get_StartPoint(CATIAReference *& opIAPoint) \
{ \
return (ENVTIECALL(CATIAHybridShapeSpine,ENVTIETypeLetter,ENVTIELetter)get_StartPoint(opIAPoint)); \
} \
HRESULT __stdcall  ENVTIEName::put_StartPoint(CATIAReference * ipIAPoint) \
{ \
return (ENVTIECALL(CATIAHybridShapeSpine,ENVTIETypeLetter,ENVTIELetter)put_StartPoint(ipIAPoint)); \
} \
HRESULT __stdcall  ENVTIEName::SetStartPoint(CATIAReference * iPoint) \
{ \
return (ENVTIECALL(CATIAHybridShapeSpine,ENVTIETypeLetter,ENVTIELetter)SetStartPoint(iPoint)); \
} \
HRESULT __stdcall  ENVTIEName::AddGuide(CATIAReference * iGuide) \
{ \
return (ENVTIECALL(CATIAHybridShapeSpine,ENVTIETypeLetter,ENVTIELetter)AddGuide(iGuide)); \
} \
HRESULT __stdcall  ENVTIEName::AddSection(CATIAReference * iSection) \
{ \
return (ENVTIECALL(CATIAHybridShapeSpine,ENVTIETypeLetter,ENVTIELetter)AddSection(iSection)); \
} \
HRESULT __stdcall  ENVTIEName::RemoveGuide(CATIAReference * iGuide) \
{ \
return (ENVTIECALL(CATIAHybridShapeSpine,ENVTIETypeLetter,ENVTIELetter)RemoveGuide(iGuide)); \
} \
HRESULT __stdcall  ENVTIEName::RemoveSection(CATIAReference * iSection) \
{ \
return (ENVTIECALL(CATIAHybridShapeSpine,ENVTIETypeLetter,ENVTIELetter)RemoveSection(iSection)); \
} \
HRESULT __stdcall  ENVTIEName::GetNumberOfGuides(CATLONG & oNbGuides) \
{ \
return (ENVTIECALL(CATIAHybridShapeSpine,ENVTIETypeLetter,ENVTIELetter)GetNumberOfGuides(oNbGuides)); \
} \
HRESULT __stdcall  ENVTIEName::GetNumberOfSections(CATLONG & oNbSections) \
{ \
return (ENVTIECALL(CATIAHybridShapeSpine,ENVTIETypeLetter,ENVTIELetter)GetNumberOfSections(oNbSections)); \
} \
HRESULT __stdcall  ENVTIEName::GetGuide(CATLONG iIdx, CATIAReference *& opIAGuide) \
{ \
return (ENVTIECALL(CATIAHybridShapeSpine,ENVTIETypeLetter,ENVTIELetter)GetGuide(iIdx,opIAGuide)); \
} \
HRESULT __stdcall  ENVTIEName::GetSection(CATLONG iIdx, CATIAReference *& oSection) \
{ \
return (ENVTIECALL(CATIAHybridShapeSpine,ENVTIETypeLetter,ENVTIELetter)GetSection(iIdx,oSection)); \
} \
HRESULT __stdcall  ENVTIEName::ModifySectionCurve(CATIAReference * ipIASection, CATIAReference * ipIANewSection) \
{ \
return (ENVTIECALL(CATIAHybridShapeSpine,ENVTIETypeLetter,ENVTIELetter)ModifySectionCurve(ipIASection,ipIANewSection)); \
} \
HRESULT __stdcall  ENVTIEName::ModifyGuideCurve(CATIAReference * ipIAGuide, CATIAReference * ipIANewGuide) \
{ \
return (ENVTIECALL(CATIAHybridShapeSpine,ENVTIETypeLetter,ENVTIELetter)ModifyGuideCurve(ipIAGuide,ipIANewGuide)); \
} \
HRESULT __stdcall  ENVTIEName::get_Orientation(CATLONG & oOrientation) \
{ \
return (ENVTIECALL(CATIAHybridShapeSpine,ENVTIETypeLetter,ENVTIELetter)get_Orientation(oOrientation)); \
} \
HRESULT __stdcall  ENVTIEName::put_Orientation(CATLONG iOrientation) \
{ \
return (ENVTIECALL(CATIAHybridShapeSpine,ENVTIETypeLetter,ENVTIELetter)put_Orientation(iOrientation)); \
} \
HRESULT __stdcall  ENVTIEName::Compute() \
{ \
return (ENVTIECALL(CATIAHybridShapeSpine,ENVTIETypeLetter,ENVTIELetter)Compute()); \
} \
HRESULT __stdcall  ENVTIEName::AppendHybridShape(CATIAHybridShape * iHybridShape) \
{ \
return (ENVTIECALL(CATIAHybridShapeSpine,ENVTIETypeLetter,ENVTIELetter)AppendHybridShape(iHybridShape)); \
} \
HRESULT __stdcall  ENVTIEName::get_Thickness(CATIAHybridShape *& oThickness) \
{ \
return (ENVTIECALL(CATIAHybridShapeSpine,ENVTIETypeLetter,ENVTIELetter)get_Thickness(oThickness)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Application(CATIAApplication *& oApplication) \
{ \
return (ENVTIECALL(CATIAHybridShapeSpine,ENVTIETypeLetter,ENVTIELetter)get_Application(oApplication)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Parent(CATBaseDispatch *& oParent) \
{ \
return (ENVTIECALL(CATIAHybridShapeSpine,ENVTIETypeLetter,ENVTIELetter)get_Parent(oParent)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Name(CATBSTR & oNameBSTR) \
{ \
return (ENVTIECALL(CATIAHybridShapeSpine,ENVTIETypeLetter,ENVTIELetter)get_Name(oNameBSTR)); \
} \
HRESULT  __stdcall  ENVTIEName::put_Name(const CATBSTR & iNameBSTR) \
{ \
return (ENVTIECALL(CATIAHybridShapeSpine,ENVTIETypeLetter,ENVTIELetter)put_Name(iNameBSTR)); \
} \
HRESULT  __stdcall  ENVTIEName::GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj) \
{ \
return (ENVTIECALL(CATIAHybridShapeSpine,ENVTIETypeLetter,ENVTIELetter)GetItem(IDName,RealObj)); \
} \


/* Name of the TIE class */
#define class_TIE_CATIAHybridShapeSpine(classe)    TIECATIAHybridShapeSpine##classe


/* Common methods inside a TIE */
#define common_TIE_CATIAHybridShapeSpine(classe) \
 \
 \
/* Static initialization */ \
CATDefineCommonTIEMembers(CATIAHybridShapeSpine, classe) \
 \
 \
CATImplementTIEMethods(CATIAHybridShapeSpine, classe) \
CATImplementIUnknownMethodsForCATBaseUnknownTIE(CATIAHybridShapeSpine, classe, 2) \
CATImplementIDispatchMethodsForCATBaseUnknownTIE(CATIAHybridShapeSpine, classe) \
CATImplementCATBaseUnknownMethodsForTIE(CATIAHybridShapeSpine, classe) \
 \
HRESULT __stdcall  TIECATIAHybridShapeSpine##classe::get_StartPoint(CATIAReference *& opIAPoint) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,1,&_Trac2,&opIAPoint); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_StartPoint(opIAPoint); \
   ExitAfterCall(this,1,_Trac2,&_ret_arg,&opIAPoint); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeSpine##classe::put_StartPoint(CATIAReference * ipIAPoint) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,2,&_Trac2,&ipIAPoint); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_StartPoint(ipIAPoint); \
   ExitAfterCall(this,2,_Trac2,&_ret_arg,&ipIAPoint); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeSpine##classe::SetStartPoint(CATIAReference * iPoint) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,3,&_Trac2,&iPoint); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetStartPoint(iPoint); \
   ExitAfterCall(this,3,_Trac2,&_ret_arg,&iPoint); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeSpine##classe::AddGuide(CATIAReference * iGuide) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,4,&_Trac2,&iGuide); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->AddGuide(iGuide); \
   ExitAfterCall(this,4,_Trac2,&_ret_arg,&iGuide); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeSpine##classe::AddSection(CATIAReference * iSection) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,5,&_Trac2,&iSection); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->AddSection(iSection); \
   ExitAfterCall(this,5,_Trac2,&_ret_arg,&iSection); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeSpine##classe::RemoveGuide(CATIAReference * iGuide) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,6,&_Trac2,&iGuide); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->RemoveGuide(iGuide); \
   ExitAfterCall(this,6,_Trac2,&_ret_arg,&iGuide); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeSpine##classe::RemoveSection(CATIAReference * iSection) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,7,&_Trac2,&iSection); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->RemoveSection(iSection); \
   ExitAfterCall(this,7,_Trac2,&_ret_arg,&iSection); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeSpine##classe::GetNumberOfGuides(CATLONG & oNbGuides) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,8,&_Trac2,&oNbGuides); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetNumberOfGuides(oNbGuides); \
   ExitAfterCall(this,8,_Trac2,&_ret_arg,&oNbGuides); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeSpine##classe::GetNumberOfSections(CATLONG & oNbSections) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,9,&_Trac2,&oNbSections); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetNumberOfSections(oNbSections); \
   ExitAfterCall(this,9,_Trac2,&_ret_arg,&oNbSections); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeSpine##classe::GetGuide(CATLONG iIdx, CATIAReference *& opIAGuide) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,10,&_Trac2,&iIdx,&opIAGuide); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetGuide(iIdx,opIAGuide); \
   ExitAfterCall(this,10,_Trac2,&_ret_arg,&iIdx,&opIAGuide); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeSpine##classe::GetSection(CATLONG iIdx, CATIAReference *& oSection) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,11,&_Trac2,&iIdx,&oSection); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetSection(iIdx,oSection); \
   ExitAfterCall(this,11,_Trac2,&_ret_arg,&iIdx,&oSection); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeSpine##classe::ModifySectionCurve(CATIAReference * ipIASection, CATIAReference * ipIANewSection) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,12,&_Trac2,&ipIASection,&ipIANewSection); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->ModifySectionCurve(ipIASection,ipIANewSection); \
   ExitAfterCall(this,12,_Trac2,&_ret_arg,&ipIASection,&ipIANewSection); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeSpine##classe::ModifyGuideCurve(CATIAReference * ipIAGuide, CATIAReference * ipIANewGuide) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,13,&_Trac2,&ipIAGuide,&ipIANewGuide); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->ModifyGuideCurve(ipIAGuide,ipIANewGuide); \
   ExitAfterCall(this,13,_Trac2,&_ret_arg,&ipIAGuide,&ipIANewGuide); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeSpine##classe::get_Orientation(CATLONG & oOrientation) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,14,&_Trac2,&oOrientation); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Orientation(oOrientation); \
   ExitAfterCall(this,14,_Trac2,&_ret_arg,&oOrientation); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeSpine##classe::put_Orientation(CATLONG iOrientation) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,15,&_Trac2,&iOrientation); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_Orientation(iOrientation); \
   ExitAfterCall(this,15,_Trac2,&_ret_arg,&iOrientation); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeSpine##classe::Compute() \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,16,&_Trac2); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->Compute(); \
   ExitAfterCall(this,16,_Trac2,&_ret_arg); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeSpine##classe::AppendHybridShape(CATIAHybridShape * iHybridShape) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,17,&_Trac2,&iHybridShape); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->AppendHybridShape(iHybridShape); \
   ExitAfterCall(this,17,_Trac2,&_ret_arg,&iHybridShape); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeSpine##classe::get_Thickness(CATIAHybridShape *& oThickness) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,18,&_Trac2,&oThickness); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Thickness(oThickness); \
   ExitAfterCall(this,18,_Trac2,&_ret_arg,&oThickness); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAHybridShapeSpine##classe::get_Application(CATIAApplication *& oApplication) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,19,&_Trac2,&oApplication); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Application(oApplication); \
   ExitAfterCall(this,19,_Trac2,&_ret_arg,&oApplication); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAHybridShapeSpine##classe::get_Parent(CATBaseDispatch *& oParent) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,20,&_Trac2,&oParent); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Parent(oParent); \
   ExitAfterCall(this,20,_Trac2,&_ret_arg,&oParent); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAHybridShapeSpine##classe::get_Name(CATBSTR & oNameBSTR) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,21,&_Trac2,&oNameBSTR); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Name(oNameBSTR); \
   ExitAfterCall(this,21,_Trac2,&_ret_arg,&oNameBSTR); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAHybridShapeSpine##classe::put_Name(const CATBSTR & iNameBSTR) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,22,&_Trac2,&iNameBSTR); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_Name(iNameBSTR); \
   ExitAfterCall(this,22,_Trac2,&_ret_arg,&iNameBSTR); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAHybridShapeSpine##classe::GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,23,&_Trac2,&IDName,&RealObj); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetItem(IDName,RealObj); \
   ExitAfterCall(this,23,_Trac2,&_ret_arg,&IDName,&RealObj); \
   return(_ret_arg); \
} \



/* Macro used to link an implementation with an interface */
#define TIE_CATIAHybridShapeSpine(classe) \
 \
 \
declare_TIE_CATIAHybridShapeSpine(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIAHybridShapeSpine##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIAHybridShapeSpine,"CATIAHybridShapeSpine",CATIAHybridShapeSpine::MetaObject(),classe::MetaObject(),TIE); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIAHybridShapeSpine(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIECreation(CATIAHybridShapeSpine, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIAHybridShapeSpine##classe(classe::MetaObject(),CATIAHybridShapeSpine::MetaObject(),(void *)CreateTIECATIAHybridShapeSpine##classe)



/* Macro used to link an implementation with an interface */
/* This TIE is chained on the implementation object */
#define TIEchain_CATIAHybridShapeSpine(classe) \
 \
 \
declare_TIE_CATIAHybridShapeSpine(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIAHybridShapeSpine##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIAHybridShapeSpine,"CATIAHybridShapeSpine",CATIAHybridShapeSpine::MetaObject(),classe::MetaObject(),TIEchain); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIAHybridShapeSpine(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIEchainCreation(CATIAHybridShapeSpine, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIAHybridShapeSpine##classe(classe::MetaObject(),CATIAHybridShapeSpine::MetaObject(),(void *)CreateTIECATIAHybridShapeSpine##classe)


/* Macro to switch between BOA and TIE at build time */ 
#ifdef CATSYS_BOA_IS_TIE
#define BOA_CATIAHybridShapeSpine(classe) TIE_CATIAHybridShapeSpine(classe)
#else
#define BOA_CATIAHybridShapeSpine(classe) CATImplementBOA(CATIAHybridShapeSpine, classe)
#endif

#endif
