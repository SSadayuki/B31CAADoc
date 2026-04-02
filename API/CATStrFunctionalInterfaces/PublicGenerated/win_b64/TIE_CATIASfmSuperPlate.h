#ifndef __TIE_CATIASfmSuperPlate
#define __TIE_CATIASfmSuperPlate

#include <string.h>
#include "CATBaseUnknown.h"
#include "CATMetaClass.h"
#include "CATMacForTie.h"
#include "CATExitJournal.h"
#include "CATIASfmSuperPlate.h"
#include "JS0DSPA.h"


#ifdef _WINDOWS_SOURCE
#define Exported __declspec(dllexport)
#define Imported __declspec(dllimport)
#else
#define Exported 
#define Imported 
#endif


/* To link an implementation with the interface CATIASfmSuperPlate */
#define declare_TIE_CATIASfmSuperPlate(classe) \
 \
 \
class TIECATIASfmSuperPlate##classe : public CATIASfmSuperPlate \
{ \
   private: \
      CATDeclareCommonTIEMembers \
   public: \
      CATDeclareTIEMethods(CATIASfmSuperPlate, classe) \
      CATDeclareIUnknownMethodsForCATBaseUnknownTIE \
      CATDeclareIDispatchMethodsForCATBaseUnknownTIE \
      CATDeclareCATBaseUnknownMethodsForTIE \
      virtual HRESULT __stdcall get_Support(CATIAReference *& oSupport); \
      virtual HRESULT __stdcall put_Support(CATIAReference * iSupport); \
      virtual HRESULT __stdcall get_SupportOffset(double & oOffset); \
      virtual HRESULT __stdcall put_SupportOffset(double iOffset); \
      virtual HRESULT __stdcall get_SupportOffsetParam(CATIALength *& oParam); \
      virtual HRESULT __stdcall get_LimitMode(CATLONG & oMode); \
      virtual HRESULT __stdcall put_LimitMode(CATLONG iMode); \
      virtual HRESULT __stdcall Limits(CATIAReferences *& oLimits); \
      virtual HRESULT __stdcall LimitOrientations(CATSafeArrayVariant & ioOrientations); \
      virtual HRESULT __stdcall AddLimit(CATIAReference * iLimit, CATLONG iOrientation); \
      virtual HRESULT __stdcall SetAsLastLimit(const CATVariant & iIndex); \
      virtual HRESULT __stdcall RemoveLimit(const CATVariant & iIndex); \
      virtual HRESULT __stdcall InvertLimit(const CATVariant & iIndex); \
      virtual HRESULT __stdcall get_MoldedSurface(CATIAReference *& oMoldedSurface); \
      virtual HRESULT __stdcall get_SplitPlates(CATIAReferences *& oSplitPlates); \
      virtual HRESULT __stdcall Run(); \
      virtual HRESULT __stdcall GetSlotsOnPlate(CATIASfmSlots *& oSfmSlots); \
      virtual HRESULT __stdcall get_Thickness(double & oThickness); \
      virtual HRESULT __stdcall put_Thickness(double iThickness); \
      virtual HRESULT __stdcall GetSplitPlateAttributes(CATLONG iSplitPlateNumber, double & oThickness, CATBSTR & oMaterialName, CATBSTR & oGradeName); \
      virtual HRESULT __stdcall SetSplitPlateAttributes(CATLONG iSplitPlateNumber, double iThickness, const CATBSTR & iMaterialName, const CATBSTR & iGradeName); \
      virtual HRESULT __stdcall get_SplitPlatesObjects(CATIASfmSplitPlates *& oSplitPlates); \
      virtual HRESULT __stdcall GetFreeEdges(CATIAReferences *& oListFreeEdges); \
      virtual HRESULT __stdcall get_Category(CATBSTR & oCategory); \
      virtual HRESULT __stdcall put_Category(const CATBSTR & iCategory); \
      virtual HRESULT __stdcall get_Material(CATBSTR & oMaterial); \
      virtual HRESULT __stdcall put_Material(const CATBSTR & iMaterial); \
      virtual HRESULT __stdcall get_Grade(CATBSTR & oGrade); \
      virtual HRESULT __stdcall put_Grade(const CATBSTR & iGrade); \
      virtual HRESULT  __stdcall get_Application(CATIAApplication *& oApplication); \
      virtual HRESULT  __stdcall get_Parent(CATBaseDispatch *& oParent); \
      virtual HRESULT  __stdcall get_Name(CATBSTR & oNameBSTR); \
      virtual HRESULT  __stdcall put_Name(const CATBSTR & iNameBSTR); \
      virtual HRESULT  __stdcall GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj); \
};



#define ENVTIEdeclare_CATIASfmSuperPlate(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
virtual HRESULT __stdcall get_Support(CATIAReference *& oSupport); \
virtual HRESULT __stdcall put_Support(CATIAReference * iSupport); \
virtual HRESULT __stdcall get_SupportOffset(double & oOffset); \
virtual HRESULT __stdcall put_SupportOffset(double iOffset); \
virtual HRESULT __stdcall get_SupportOffsetParam(CATIALength *& oParam); \
virtual HRESULT __stdcall get_LimitMode(CATLONG & oMode); \
virtual HRESULT __stdcall put_LimitMode(CATLONG iMode); \
virtual HRESULT __stdcall Limits(CATIAReferences *& oLimits); \
virtual HRESULT __stdcall LimitOrientations(CATSafeArrayVariant & ioOrientations); \
virtual HRESULT __stdcall AddLimit(CATIAReference * iLimit, CATLONG iOrientation); \
virtual HRESULT __stdcall SetAsLastLimit(const CATVariant & iIndex); \
virtual HRESULT __stdcall RemoveLimit(const CATVariant & iIndex); \
virtual HRESULT __stdcall InvertLimit(const CATVariant & iIndex); \
virtual HRESULT __stdcall get_MoldedSurface(CATIAReference *& oMoldedSurface); \
virtual HRESULT __stdcall get_SplitPlates(CATIAReferences *& oSplitPlates); \
virtual HRESULT __stdcall Run(); \
virtual HRESULT __stdcall GetSlotsOnPlate(CATIASfmSlots *& oSfmSlots); \
virtual HRESULT __stdcall get_Thickness(double & oThickness); \
virtual HRESULT __stdcall put_Thickness(double iThickness); \
virtual HRESULT __stdcall GetSplitPlateAttributes(CATLONG iSplitPlateNumber, double & oThickness, CATBSTR & oMaterialName, CATBSTR & oGradeName); \
virtual HRESULT __stdcall SetSplitPlateAttributes(CATLONG iSplitPlateNumber, double iThickness, const CATBSTR & iMaterialName, const CATBSTR & iGradeName); \
virtual HRESULT __stdcall get_SplitPlatesObjects(CATIASfmSplitPlates *& oSplitPlates); \
virtual HRESULT __stdcall GetFreeEdges(CATIAReferences *& oListFreeEdges); \
virtual HRESULT __stdcall get_Category(CATBSTR & oCategory); \
virtual HRESULT __stdcall put_Category(const CATBSTR & iCategory); \
virtual HRESULT __stdcall get_Material(CATBSTR & oMaterial); \
virtual HRESULT __stdcall put_Material(const CATBSTR & iMaterial); \
virtual HRESULT __stdcall get_Grade(CATBSTR & oGrade); \
virtual HRESULT __stdcall put_Grade(const CATBSTR & iGrade); \
virtual HRESULT  __stdcall get_Application(CATIAApplication *& oApplication); \
virtual HRESULT  __stdcall get_Parent(CATBaseDispatch *& oParent); \
virtual HRESULT  __stdcall get_Name(CATBSTR & oNameBSTR); \
virtual HRESULT  __stdcall put_Name(const CATBSTR & iNameBSTR); \
virtual HRESULT  __stdcall GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj); \


#define ENVTIEdefine_CATIASfmSuperPlate(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
HRESULT __stdcall  ENVTIEName::get_Support(CATIAReference *& oSupport) \
{ \
return (ENVTIECALL(CATIASfmSuperPlate,ENVTIETypeLetter,ENVTIELetter)get_Support(oSupport)); \
} \
HRESULT __stdcall  ENVTIEName::put_Support(CATIAReference * iSupport) \
{ \
return (ENVTIECALL(CATIASfmSuperPlate,ENVTIETypeLetter,ENVTIELetter)put_Support(iSupport)); \
} \
HRESULT __stdcall  ENVTIEName::get_SupportOffset(double & oOffset) \
{ \
return (ENVTIECALL(CATIASfmSuperPlate,ENVTIETypeLetter,ENVTIELetter)get_SupportOffset(oOffset)); \
} \
HRESULT __stdcall  ENVTIEName::put_SupportOffset(double iOffset) \
{ \
return (ENVTIECALL(CATIASfmSuperPlate,ENVTIETypeLetter,ENVTIELetter)put_SupportOffset(iOffset)); \
} \
HRESULT __stdcall  ENVTIEName::get_SupportOffsetParam(CATIALength *& oParam) \
{ \
return (ENVTIECALL(CATIASfmSuperPlate,ENVTIETypeLetter,ENVTIELetter)get_SupportOffsetParam(oParam)); \
} \
HRESULT __stdcall  ENVTIEName::get_LimitMode(CATLONG & oMode) \
{ \
return (ENVTIECALL(CATIASfmSuperPlate,ENVTIETypeLetter,ENVTIELetter)get_LimitMode(oMode)); \
} \
HRESULT __stdcall  ENVTIEName::put_LimitMode(CATLONG iMode) \
{ \
return (ENVTIECALL(CATIASfmSuperPlate,ENVTIETypeLetter,ENVTIELetter)put_LimitMode(iMode)); \
} \
HRESULT __stdcall  ENVTIEName::Limits(CATIAReferences *& oLimits) \
{ \
return (ENVTIECALL(CATIASfmSuperPlate,ENVTIETypeLetter,ENVTIELetter)Limits(oLimits)); \
} \
HRESULT __stdcall  ENVTIEName::LimitOrientations(CATSafeArrayVariant & ioOrientations) \
{ \
return (ENVTIECALL(CATIASfmSuperPlate,ENVTIETypeLetter,ENVTIELetter)LimitOrientations(ioOrientations)); \
} \
HRESULT __stdcall  ENVTIEName::AddLimit(CATIAReference * iLimit, CATLONG iOrientation) \
{ \
return (ENVTIECALL(CATIASfmSuperPlate,ENVTIETypeLetter,ENVTIELetter)AddLimit(iLimit,iOrientation)); \
} \
HRESULT __stdcall  ENVTIEName::SetAsLastLimit(const CATVariant & iIndex) \
{ \
return (ENVTIECALL(CATIASfmSuperPlate,ENVTIETypeLetter,ENVTIELetter)SetAsLastLimit(iIndex)); \
} \
HRESULT __stdcall  ENVTIEName::RemoveLimit(const CATVariant & iIndex) \
{ \
return (ENVTIECALL(CATIASfmSuperPlate,ENVTIETypeLetter,ENVTIELetter)RemoveLimit(iIndex)); \
} \
HRESULT __stdcall  ENVTIEName::InvertLimit(const CATVariant & iIndex) \
{ \
return (ENVTIECALL(CATIASfmSuperPlate,ENVTIETypeLetter,ENVTIELetter)InvertLimit(iIndex)); \
} \
HRESULT __stdcall  ENVTIEName::get_MoldedSurface(CATIAReference *& oMoldedSurface) \
{ \
return (ENVTIECALL(CATIASfmSuperPlate,ENVTIETypeLetter,ENVTIELetter)get_MoldedSurface(oMoldedSurface)); \
} \
HRESULT __stdcall  ENVTIEName::get_SplitPlates(CATIAReferences *& oSplitPlates) \
{ \
return (ENVTIECALL(CATIASfmSuperPlate,ENVTIETypeLetter,ENVTIELetter)get_SplitPlates(oSplitPlates)); \
} \
HRESULT __stdcall  ENVTIEName::Run() \
{ \
return (ENVTIECALL(CATIASfmSuperPlate,ENVTIETypeLetter,ENVTIELetter)Run()); \
} \
HRESULT __stdcall  ENVTIEName::GetSlotsOnPlate(CATIASfmSlots *& oSfmSlots) \
{ \
return (ENVTIECALL(CATIASfmSuperPlate,ENVTIETypeLetter,ENVTIELetter)GetSlotsOnPlate(oSfmSlots)); \
} \
HRESULT __stdcall  ENVTIEName::get_Thickness(double & oThickness) \
{ \
return (ENVTIECALL(CATIASfmSuperPlate,ENVTIETypeLetter,ENVTIELetter)get_Thickness(oThickness)); \
} \
HRESULT __stdcall  ENVTIEName::put_Thickness(double iThickness) \
{ \
return (ENVTIECALL(CATIASfmSuperPlate,ENVTIETypeLetter,ENVTIELetter)put_Thickness(iThickness)); \
} \
HRESULT __stdcall  ENVTIEName::GetSplitPlateAttributes(CATLONG iSplitPlateNumber, double & oThickness, CATBSTR & oMaterialName, CATBSTR & oGradeName) \
{ \
return (ENVTIECALL(CATIASfmSuperPlate,ENVTIETypeLetter,ENVTIELetter)GetSplitPlateAttributes(iSplitPlateNumber,oThickness,oMaterialName,oGradeName)); \
} \
HRESULT __stdcall  ENVTIEName::SetSplitPlateAttributes(CATLONG iSplitPlateNumber, double iThickness, const CATBSTR & iMaterialName, const CATBSTR & iGradeName) \
{ \
return (ENVTIECALL(CATIASfmSuperPlate,ENVTIETypeLetter,ENVTIELetter)SetSplitPlateAttributes(iSplitPlateNumber,iThickness,iMaterialName,iGradeName)); \
} \
HRESULT __stdcall  ENVTIEName::get_SplitPlatesObjects(CATIASfmSplitPlates *& oSplitPlates) \
{ \
return (ENVTIECALL(CATIASfmSuperPlate,ENVTIETypeLetter,ENVTIELetter)get_SplitPlatesObjects(oSplitPlates)); \
} \
HRESULT __stdcall  ENVTIEName::GetFreeEdges(CATIAReferences *& oListFreeEdges) \
{ \
return (ENVTIECALL(CATIASfmSuperPlate,ENVTIETypeLetter,ENVTIELetter)GetFreeEdges(oListFreeEdges)); \
} \
HRESULT __stdcall  ENVTIEName::get_Category(CATBSTR & oCategory) \
{ \
return (ENVTIECALL(CATIASfmSuperPlate,ENVTIETypeLetter,ENVTIELetter)get_Category(oCategory)); \
} \
HRESULT __stdcall  ENVTIEName::put_Category(const CATBSTR & iCategory) \
{ \
return (ENVTIECALL(CATIASfmSuperPlate,ENVTIETypeLetter,ENVTIELetter)put_Category(iCategory)); \
} \
HRESULT __stdcall  ENVTIEName::get_Material(CATBSTR & oMaterial) \
{ \
return (ENVTIECALL(CATIASfmSuperPlate,ENVTIETypeLetter,ENVTIELetter)get_Material(oMaterial)); \
} \
HRESULT __stdcall  ENVTIEName::put_Material(const CATBSTR & iMaterial) \
{ \
return (ENVTIECALL(CATIASfmSuperPlate,ENVTIETypeLetter,ENVTIELetter)put_Material(iMaterial)); \
} \
HRESULT __stdcall  ENVTIEName::get_Grade(CATBSTR & oGrade) \
{ \
return (ENVTIECALL(CATIASfmSuperPlate,ENVTIETypeLetter,ENVTIELetter)get_Grade(oGrade)); \
} \
HRESULT __stdcall  ENVTIEName::put_Grade(const CATBSTR & iGrade) \
{ \
return (ENVTIECALL(CATIASfmSuperPlate,ENVTIETypeLetter,ENVTIELetter)put_Grade(iGrade)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Application(CATIAApplication *& oApplication) \
{ \
return (ENVTIECALL(CATIASfmSuperPlate,ENVTIETypeLetter,ENVTIELetter)get_Application(oApplication)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Parent(CATBaseDispatch *& oParent) \
{ \
return (ENVTIECALL(CATIASfmSuperPlate,ENVTIETypeLetter,ENVTIELetter)get_Parent(oParent)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Name(CATBSTR & oNameBSTR) \
{ \
return (ENVTIECALL(CATIASfmSuperPlate,ENVTIETypeLetter,ENVTIELetter)get_Name(oNameBSTR)); \
} \
HRESULT  __stdcall  ENVTIEName::put_Name(const CATBSTR & iNameBSTR) \
{ \
return (ENVTIECALL(CATIASfmSuperPlate,ENVTIETypeLetter,ENVTIELetter)put_Name(iNameBSTR)); \
} \
HRESULT  __stdcall  ENVTIEName::GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj) \
{ \
return (ENVTIECALL(CATIASfmSuperPlate,ENVTIETypeLetter,ENVTIELetter)GetItem(IDName,RealObj)); \
} \


/* Name of the TIE class */
#define class_TIE_CATIASfmSuperPlate(classe)    TIECATIASfmSuperPlate##classe


/* Common methods inside a TIE */
#define common_TIE_CATIASfmSuperPlate(classe) \
 \
 \
/* Static initialization */ \
CATDefineCommonTIEMembers(CATIASfmSuperPlate, classe) \
 \
 \
CATImplementTIEMethods(CATIASfmSuperPlate, classe) \
CATImplementIUnknownMethodsForCATBaseUnknownTIE(CATIASfmSuperPlate, classe, 2) \
CATImplementIDispatchMethodsForCATBaseUnknownTIE(CATIASfmSuperPlate, classe) \
CATImplementCATBaseUnknownMethodsForTIE(CATIASfmSuperPlate, classe) \
 \
HRESULT __stdcall  TIECATIASfmSuperPlate##classe::get_Support(CATIAReference *& oSupport) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,1,&_Trac2,&oSupport); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Support(oSupport); \
   ExitAfterCall(this,1,_Trac2,&_ret_arg,&oSupport); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIASfmSuperPlate##classe::put_Support(CATIAReference * iSupport) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,2,&_Trac2,&iSupport); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_Support(iSupport); \
   ExitAfterCall(this,2,_Trac2,&_ret_arg,&iSupport); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIASfmSuperPlate##classe::get_SupportOffset(double & oOffset) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,3,&_Trac2,&oOffset); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_SupportOffset(oOffset); \
   ExitAfterCall(this,3,_Trac2,&_ret_arg,&oOffset); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIASfmSuperPlate##classe::put_SupportOffset(double iOffset) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,4,&_Trac2,&iOffset); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_SupportOffset(iOffset); \
   ExitAfterCall(this,4,_Trac2,&_ret_arg,&iOffset); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIASfmSuperPlate##classe::get_SupportOffsetParam(CATIALength *& oParam) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,5,&_Trac2,&oParam); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_SupportOffsetParam(oParam); \
   ExitAfterCall(this,5,_Trac2,&_ret_arg,&oParam); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIASfmSuperPlate##classe::get_LimitMode(CATLONG & oMode) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,6,&_Trac2,&oMode); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_LimitMode(oMode); \
   ExitAfterCall(this,6,_Trac2,&_ret_arg,&oMode); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIASfmSuperPlate##classe::put_LimitMode(CATLONG iMode) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,7,&_Trac2,&iMode); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_LimitMode(iMode); \
   ExitAfterCall(this,7,_Trac2,&_ret_arg,&iMode); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIASfmSuperPlate##classe::Limits(CATIAReferences *& oLimits) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,8,&_Trac2,&oLimits); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->Limits(oLimits); \
   ExitAfterCall(this,8,_Trac2,&_ret_arg,&oLimits); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIASfmSuperPlate##classe::LimitOrientations(CATSafeArrayVariant & ioOrientations) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,9,&_Trac2,&ioOrientations); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->LimitOrientations(ioOrientations); \
   ExitAfterCall(this,9,_Trac2,&_ret_arg,&ioOrientations); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIASfmSuperPlate##classe::AddLimit(CATIAReference * iLimit, CATLONG iOrientation) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,10,&_Trac2,&iLimit,&iOrientation); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->AddLimit(iLimit,iOrientation); \
   ExitAfterCall(this,10,_Trac2,&_ret_arg,&iLimit,&iOrientation); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIASfmSuperPlate##classe::SetAsLastLimit(const CATVariant & iIndex) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,11,&_Trac2,&iIndex); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetAsLastLimit(iIndex); \
   ExitAfterCall(this,11,_Trac2,&_ret_arg,&iIndex); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIASfmSuperPlate##classe::RemoveLimit(const CATVariant & iIndex) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,12,&_Trac2,&iIndex); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->RemoveLimit(iIndex); \
   ExitAfterCall(this,12,_Trac2,&_ret_arg,&iIndex); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIASfmSuperPlate##classe::InvertLimit(const CATVariant & iIndex) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,13,&_Trac2,&iIndex); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->InvertLimit(iIndex); \
   ExitAfterCall(this,13,_Trac2,&_ret_arg,&iIndex); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIASfmSuperPlate##classe::get_MoldedSurface(CATIAReference *& oMoldedSurface) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,14,&_Trac2,&oMoldedSurface); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_MoldedSurface(oMoldedSurface); \
   ExitAfterCall(this,14,_Trac2,&_ret_arg,&oMoldedSurface); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIASfmSuperPlate##classe::get_SplitPlates(CATIAReferences *& oSplitPlates) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,15,&_Trac2,&oSplitPlates); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_SplitPlates(oSplitPlates); \
   ExitAfterCall(this,15,_Trac2,&_ret_arg,&oSplitPlates); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIASfmSuperPlate##classe::Run() \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,16,&_Trac2); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->Run(); \
   ExitAfterCall(this,16,_Trac2,&_ret_arg); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIASfmSuperPlate##classe::GetSlotsOnPlate(CATIASfmSlots *& oSfmSlots) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,17,&_Trac2,&oSfmSlots); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetSlotsOnPlate(oSfmSlots); \
   ExitAfterCall(this,17,_Trac2,&_ret_arg,&oSfmSlots); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIASfmSuperPlate##classe::get_Thickness(double & oThickness) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,18,&_Trac2,&oThickness); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Thickness(oThickness); \
   ExitAfterCall(this,18,_Trac2,&_ret_arg,&oThickness); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIASfmSuperPlate##classe::put_Thickness(double iThickness) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,19,&_Trac2,&iThickness); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_Thickness(iThickness); \
   ExitAfterCall(this,19,_Trac2,&_ret_arg,&iThickness); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIASfmSuperPlate##classe::GetSplitPlateAttributes(CATLONG iSplitPlateNumber, double & oThickness, CATBSTR & oMaterialName, CATBSTR & oGradeName) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,20,&_Trac2,&iSplitPlateNumber,&oThickness,&oMaterialName,&oGradeName); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetSplitPlateAttributes(iSplitPlateNumber,oThickness,oMaterialName,oGradeName); \
   ExitAfterCall(this,20,_Trac2,&_ret_arg,&iSplitPlateNumber,&oThickness,&oMaterialName,&oGradeName); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIASfmSuperPlate##classe::SetSplitPlateAttributes(CATLONG iSplitPlateNumber, double iThickness, const CATBSTR & iMaterialName, const CATBSTR & iGradeName) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,21,&_Trac2,&iSplitPlateNumber,&iThickness,&iMaterialName,&iGradeName); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetSplitPlateAttributes(iSplitPlateNumber,iThickness,iMaterialName,iGradeName); \
   ExitAfterCall(this,21,_Trac2,&_ret_arg,&iSplitPlateNumber,&iThickness,&iMaterialName,&iGradeName); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIASfmSuperPlate##classe::get_SplitPlatesObjects(CATIASfmSplitPlates *& oSplitPlates) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,22,&_Trac2,&oSplitPlates); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_SplitPlatesObjects(oSplitPlates); \
   ExitAfterCall(this,22,_Trac2,&_ret_arg,&oSplitPlates); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIASfmSuperPlate##classe::GetFreeEdges(CATIAReferences *& oListFreeEdges) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,23,&_Trac2,&oListFreeEdges); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetFreeEdges(oListFreeEdges); \
   ExitAfterCall(this,23,_Trac2,&_ret_arg,&oListFreeEdges); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIASfmSuperPlate##classe::get_Category(CATBSTR & oCategory) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,24,&_Trac2,&oCategory); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Category(oCategory); \
   ExitAfterCall(this,24,_Trac2,&_ret_arg,&oCategory); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIASfmSuperPlate##classe::put_Category(const CATBSTR & iCategory) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,25,&_Trac2,&iCategory); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_Category(iCategory); \
   ExitAfterCall(this,25,_Trac2,&_ret_arg,&iCategory); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIASfmSuperPlate##classe::get_Material(CATBSTR & oMaterial) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,26,&_Trac2,&oMaterial); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Material(oMaterial); \
   ExitAfterCall(this,26,_Trac2,&_ret_arg,&oMaterial); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIASfmSuperPlate##classe::put_Material(const CATBSTR & iMaterial) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,27,&_Trac2,&iMaterial); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_Material(iMaterial); \
   ExitAfterCall(this,27,_Trac2,&_ret_arg,&iMaterial); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIASfmSuperPlate##classe::get_Grade(CATBSTR & oGrade) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,28,&_Trac2,&oGrade); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Grade(oGrade); \
   ExitAfterCall(this,28,_Trac2,&_ret_arg,&oGrade); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIASfmSuperPlate##classe::put_Grade(const CATBSTR & iGrade) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,29,&_Trac2,&iGrade); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_Grade(iGrade); \
   ExitAfterCall(this,29,_Trac2,&_ret_arg,&iGrade); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIASfmSuperPlate##classe::get_Application(CATIAApplication *& oApplication) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,30,&_Trac2,&oApplication); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Application(oApplication); \
   ExitAfterCall(this,30,_Trac2,&_ret_arg,&oApplication); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIASfmSuperPlate##classe::get_Parent(CATBaseDispatch *& oParent) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,31,&_Trac2,&oParent); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Parent(oParent); \
   ExitAfterCall(this,31,_Trac2,&_ret_arg,&oParent); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIASfmSuperPlate##classe::get_Name(CATBSTR & oNameBSTR) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,32,&_Trac2,&oNameBSTR); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Name(oNameBSTR); \
   ExitAfterCall(this,32,_Trac2,&_ret_arg,&oNameBSTR); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIASfmSuperPlate##classe::put_Name(const CATBSTR & iNameBSTR) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,33,&_Trac2,&iNameBSTR); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_Name(iNameBSTR); \
   ExitAfterCall(this,33,_Trac2,&_ret_arg,&iNameBSTR); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIASfmSuperPlate##classe::GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,34,&_Trac2,&IDName,&RealObj); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetItem(IDName,RealObj); \
   ExitAfterCall(this,34,_Trac2,&_ret_arg,&IDName,&RealObj); \
   return(_ret_arg); \
} \



/* Macro used to link an implementation with an interface */
#define TIE_CATIASfmSuperPlate(classe) \
 \
 \
declare_TIE_CATIASfmSuperPlate(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIASfmSuperPlate##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIASfmSuperPlate,"CATIASfmSuperPlate",CATIASfmSuperPlate::MetaObject(),classe::MetaObject(),TIE); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIASfmSuperPlate(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIECreation(CATIASfmSuperPlate, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIASfmSuperPlate##classe(classe::MetaObject(),CATIASfmSuperPlate::MetaObject(),(void *)CreateTIECATIASfmSuperPlate##classe)



/* Macro used to link an implementation with an interface */
/* This TIE is chained on the implementation object */
#define TIEchain_CATIASfmSuperPlate(classe) \
 \
 \
declare_TIE_CATIASfmSuperPlate(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIASfmSuperPlate##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIASfmSuperPlate,"CATIASfmSuperPlate",CATIASfmSuperPlate::MetaObject(),classe::MetaObject(),TIEchain); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIASfmSuperPlate(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIEchainCreation(CATIASfmSuperPlate, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIASfmSuperPlate##classe(classe::MetaObject(),CATIASfmSuperPlate::MetaObject(),(void *)CreateTIECATIASfmSuperPlate##classe)


/* Macro to switch between BOA and TIE at build time */ 
#ifdef CATSYS_BOA_IS_TIE
#define BOA_CATIASfmSuperPlate(classe) TIE_CATIASfmSuperPlate(classe)
#else
#define BOA_CATIASfmSuperPlate(classe) CATImplementBOA(CATIASfmSuperPlate, classe)
#endif

#endif
