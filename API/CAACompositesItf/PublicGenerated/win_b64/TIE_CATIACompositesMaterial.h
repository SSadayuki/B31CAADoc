#ifndef __TIE_CATIACompositesMaterial
#define __TIE_CATIACompositesMaterial

#include <string.h>
#include "CATBaseUnknown.h"
#include "CATMetaClass.h"
#include "CATMacForTie.h"
#include "CATExitJournal.h"
#include "CATIACompositesMaterial.h"
#include "JS0DSPA.h"


#ifdef _WINDOWS_SOURCE
#define Exported __declspec(dllexport)
#define Imported __declspec(dllimport)
#else
#define Exported 
#define Imported 
#endif


/* To link an implementation with the interface CATIACompositesMaterial */
#define declare_TIE_CATIACompositesMaterial(classe) \
 \
 \
class TIECATIACompositesMaterial##classe : public CATIACompositesMaterial \
{ \
   private: \
      CATDeclareCommonTIEMembers \
   public: \
      CATDeclareTIEMethods(CATIACompositesMaterial, classe) \
      CATDeclareIUnknownMethodsForCATBaseUnknownTIE \
      CATDeclareIDispatchMethodsForCATBaseUnknownTIE \
      CATDeclareCATBaseUnknownMethodsForTIE \
      virtual HRESULT __stdcall ExistCompositesData(short & bAnswer); \
      virtual HRESULT __stdcall CreateCompositesData(); \
      virtual HRESULT __stdcall get_MaterialType(short & oMaterialType); \
      virtual HRESULT __stdcall put_MaterialType(short iMaterialType); \
      virtual HRESULT __stdcall get_UncuredThickness(double & oUncuredThickness); \
      virtual HRESULT __stdcall put_UncuredThickness(double iUncuredThickness); \
      virtual HRESULT __stdcall get_CuredThickness(double & oCuredThickness); \
      virtual HRESULT __stdcall put_CuredThickness(double iCuredThickness); \
      virtual HRESULT __stdcall get_MaxDeformation(double & oMaxDeformation); \
      virtual HRESULT __stdcall put_MaxDeformation(double iMaxDeformation); \
      virtual HRESULT __stdcall get_LimitDeformation(double & oLimitDeformation); \
      virtual HRESULT __stdcall put_LimitDeformation(double iLimitDeformation); \
      virtual HRESULT __stdcall get_FabricWidth(double & oFabricWidth); \
      virtual HRESULT __stdcall put_FabricWidth(double iFabricWidth); \
      virtual HRESULT __stdcall get_SurfacicWeigth(double & oSurfacicWeigth); \
      virtual HRESULT __stdcall put_SurfacicWeigth(double iSurfacicWeigth); \
      virtual HRESULT __stdcall get_MassCost(double & oMassCost); \
      virtual HRESULT __stdcall put_MassCost(double iMassCost); \
      virtual HRESULT  __stdcall get_Application(CATIAApplication *& oApplication); \
      virtual HRESULT  __stdcall get_Parent(CATBaseDispatch *& oParent); \
      virtual HRESULT  __stdcall get_Name(CATBSTR & oNameBSTR); \
      virtual HRESULT  __stdcall put_Name(const CATBSTR & iNameBSTR); \
      virtual HRESULT  __stdcall GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj); \
};



#define ENVTIEdeclare_CATIACompositesMaterial(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
virtual HRESULT __stdcall ExistCompositesData(short & bAnswer); \
virtual HRESULT __stdcall CreateCompositesData(); \
virtual HRESULT __stdcall get_MaterialType(short & oMaterialType); \
virtual HRESULT __stdcall put_MaterialType(short iMaterialType); \
virtual HRESULT __stdcall get_UncuredThickness(double & oUncuredThickness); \
virtual HRESULT __stdcall put_UncuredThickness(double iUncuredThickness); \
virtual HRESULT __stdcall get_CuredThickness(double & oCuredThickness); \
virtual HRESULT __stdcall put_CuredThickness(double iCuredThickness); \
virtual HRESULT __stdcall get_MaxDeformation(double & oMaxDeformation); \
virtual HRESULT __stdcall put_MaxDeformation(double iMaxDeformation); \
virtual HRESULT __stdcall get_LimitDeformation(double & oLimitDeformation); \
virtual HRESULT __stdcall put_LimitDeformation(double iLimitDeformation); \
virtual HRESULT __stdcall get_FabricWidth(double & oFabricWidth); \
virtual HRESULT __stdcall put_FabricWidth(double iFabricWidth); \
virtual HRESULT __stdcall get_SurfacicWeigth(double & oSurfacicWeigth); \
virtual HRESULT __stdcall put_SurfacicWeigth(double iSurfacicWeigth); \
virtual HRESULT __stdcall get_MassCost(double & oMassCost); \
virtual HRESULT __stdcall put_MassCost(double iMassCost); \
virtual HRESULT  __stdcall get_Application(CATIAApplication *& oApplication); \
virtual HRESULT  __stdcall get_Parent(CATBaseDispatch *& oParent); \
virtual HRESULT  __stdcall get_Name(CATBSTR & oNameBSTR); \
virtual HRESULT  __stdcall put_Name(const CATBSTR & iNameBSTR); \
virtual HRESULT  __stdcall GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj); \


#define ENVTIEdefine_CATIACompositesMaterial(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
HRESULT __stdcall  ENVTIEName::ExistCompositesData(short & bAnswer) \
{ \
return (ENVTIECALL(CATIACompositesMaterial,ENVTIETypeLetter,ENVTIELetter)ExistCompositesData(bAnswer)); \
} \
HRESULT __stdcall  ENVTIEName::CreateCompositesData() \
{ \
return (ENVTIECALL(CATIACompositesMaterial,ENVTIETypeLetter,ENVTIELetter)CreateCompositesData()); \
} \
HRESULT __stdcall  ENVTIEName::get_MaterialType(short & oMaterialType) \
{ \
return (ENVTIECALL(CATIACompositesMaterial,ENVTIETypeLetter,ENVTIELetter)get_MaterialType(oMaterialType)); \
} \
HRESULT __stdcall  ENVTIEName::put_MaterialType(short iMaterialType) \
{ \
return (ENVTIECALL(CATIACompositesMaterial,ENVTIETypeLetter,ENVTIELetter)put_MaterialType(iMaterialType)); \
} \
HRESULT __stdcall  ENVTIEName::get_UncuredThickness(double & oUncuredThickness) \
{ \
return (ENVTIECALL(CATIACompositesMaterial,ENVTIETypeLetter,ENVTIELetter)get_UncuredThickness(oUncuredThickness)); \
} \
HRESULT __stdcall  ENVTIEName::put_UncuredThickness(double iUncuredThickness) \
{ \
return (ENVTIECALL(CATIACompositesMaterial,ENVTIETypeLetter,ENVTIELetter)put_UncuredThickness(iUncuredThickness)); \
} \
HRESULT __stdcall  ENVTIEName::get_CuredThickness(double & oCuredThickness) \
{ \
return (ENVTIECALL(CATIACompositesMaterial,ENVTIETypeLetter,ENVTIELetter)get_CuredThickness(oCuredThickness)); \
} \
HRESULT __stdcall  ENVTIEName::put_CuredThickness(double iCuredThickness) \
{ \
return (ENVTIECALL(CATIACompositesMaterial,ENVTIETypeLetter,ENVTIELetter)put_CuredThickness(iCuredThickness)); \
} \
HRESULT __stdcall  ENVTIEName::get_MaxDeformation(double & oMaxDeformation) \
{ \
return (ENVTIECALL(CATIACompositesMaterial,ENVTIETypeLetter,ENVTIELetter)get_MaxDeformation(oMaxDeformation)); \
} \
HRESULT __stdcall  ENVTIEName::put_MaxDeformation(double iMaxDeformation) \
{ \
return (ENVTIECALL(CATIACompositesMaterial,ENVTIETypeLetter,ENVTIELetter)put_MaxDeformation(iMaxDeformation)); \
} \
HRESULT __stdcall  ENVTIEName::get_LimitDeformation(double & oLimitDeformation) \
{ \
return (ENVTIECALL(CATIACompositesMaterial,ENVTIETypeLetter,ENVTIELetter)get_LimitDeformation(oLimitDeformation)); \
} \
HRESULT __stdcall  ENVTIEName::put_LimitDeformation(double iLimitDeformation) \
{ \
return (ENVTIECALL(CATIACompositesMaterial,ENVTIETypeLetter,ENVTIELetter)put_LimitDeformation(iLimitDeformation)); \
} \
HRESULT __stdcall  ENVTIEName::get_FabricWidth(double & oFabricWidth) \
{ \
return (ENVTIECALL(CATIACompositesMaterial,ENVTIETypeLetter,ENVTIELetter)get_FabricWidth(oFabricWidth)); \
} \
HRESULT __stdcall  ENVTIEName::put_FabricWidth(double iFabricWidth) \
{ \
return (ENVTIECALL(CATIACompositesMaterial,ENVTIETypeLetter,ENVTIELetter)put_FabricWidth(iFabricWidth)); \
} \
HRESULT __stdcall  ENVTIEName::get_SurfacicWeigth(double & oSurfacicWeigth) \
{ \
return (ENVTIECALL(CATIACompositesMaterial,ENVTIETypeLetter,ENVTIELetter)get_SurfacicWeigth(oSurfacicWeigth)); \
} \
HRESULT __stdcall  ENVTIEName::put_SurfacicWeigth(double iSurfacicWeigth) \
{ \
return (ENVTIECALL(CATIACompositesMaterial,ENVTIETypeLetter,ENVTIELetter)put_SurfacicWeigth(iSurfacicWeigth)); \
} \
HRESULT __stdcall  ENVTIEName::get_MassCost(double & oMassCost) \
{ \
return (ENVTIECALL(CATIACompositesMaterial,ENVTIETypeLetter,ENVTIELetter)get_MassCost(oMassCost)); \
} \
HRESULT __stdcall  ENVTIEName::put_MassCost(double iMassCost) \
{ \
return (ENVTIECALL(CATIACompositesMaterial,ENVTIETypeLetter,ENVTIELetter)put_MassCost(iMassCost)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Application(CATIAApplication *& oApplication) \
{ \
return (ENVTIECALL(CATIACompositesMaterial,ENVTIETypeLetter,ENVTIELetter)get_Application(oApplication)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Parent(CATBaseDispatch *& oParent) \
{ \
return (ENVTIECALL(CATIACompositesMaterial,ENVTIETypeLetter,ENVTIELetter)get_Parent(oParent)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Name(CATBSTR & oNameBSTR) \
{ \
return (ENVTIECALL(CATIACompositesMaterial,ENVTIETypeLetter,ENVTIELetter)get_Name(oNameBSTR)); \
} \
HRESULT  __stdcall  ENVTIEName::put_Name(const CATBSTR & iNameBSTR) \
{ \
return (ENVTIECALL(CATIACompositesMaterial,ENVTIETypeLetter,ENVTIELetter)put_Name(iNameBSTR)); \
} \
HRESULT  __stdcall  ENVTIEName::GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj) \
{ \
return (ENVTIECALL(CATIACompositesMaterial,ENVTIETypeLetter,ENVTIELetter)GetItem(IDName,RealObj)); \
} \


/* Name of the TIE class */
#define class_TIE_CATIACompositesMaterial(classe)    TIECATIACompositesMaterial##classe


/* Common methods inside a TIE */
#define common_TIE_CATIACompositesMaterial(classe) \
 \
 \
/* Static initialization */ \
CATDefineCommonTIEMembers(CATIACompositesMaterial, classe) \
 \
 \
CATImplementTIEMethods(CATIACompositesMaterial, classe) \
CATImplementIUnknownMethodsForCATBaseUnknownTIE(CATIACompositesMaterial, classe, 2) \
CATImplementIDispatchMethodsForCATBaseUnknownTIE(CATIACompositesMaterial, classe) \
CATImplementCATBaseUnknownMethodsForTIE(CATIACompositesMaterial, classe) \
 \
HRESULT __stdcall  TIECATIACompositesMaterial##classe::ExistCompositesData(short & bAnswer) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,1,&_Trac2,&bAnswer); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->ExistCompositesData(bAnswer); \
   ExitAfterCall(this,1,_Trac2,&_ret_arg,&bAnswer); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIACompositesMaterial##classe::CreateCompositesData() \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,2,&_Trac2); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->CreateCompositesData(); \
   ExitAfterCall(this,2,_Trac2,&_ret_arg); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIACompositesMaterial##classe::get_MaterialType(short & oMaterialType) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,3,&_Trac2,&oMaterialType); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_MaterialType(oMaterialType); \
   ExitAfterCall(this,3,_Trac2,&_ret_arg,&oMaterialType); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIACompositesMaterial##classe::put_MaterialType(short iMaterialType) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,4,&_Trac2,&iMaterialType); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_MaterialType(iMaterialType); \
   ExitAfterCall(this,4,_Trac2,&_ret_arg,&iMaterialType); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIACompositesMaterial##classe::get_UncuredThickness(double & oUncuredThickness) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,5,&_Trac2,&oUncuredThickness); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_UncuredThickness(oUncuredThickness); \
   ExitAfterCall(this,5,_Trac2,&_ret_arg,&oUncuredThickness); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIACompositesMaterial##classe::put_UncuredThickness(double iUncuredThickness) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,6,&_Trac2,&iUncuredThickness); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_UncuredThickness(iUncuredThickness); \
   ExitAfterCall(this,6,_Trac2,&_ret_arg,&iUncuredThickness); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIACompositesMaterial##classe::get_CuredThickness(double & oCuredThickness) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,7,&_Trac2,&oCuredThickness); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_CuredThickness(oCuredThickness); \
   ExitAfterCall(this,7,_Trac2,&_ret_arg,&oCuredThickness); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIACompositesMaterial##classe::put_CuredThickness(double iCuredThickness) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,8,&_Trac2,&iCuredThickness); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_CuredThickness(iCuredThickness); \
   ExitAfterCall(this,8,_Trac2,&_ret_arg,&iCuredThickness); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIACompositesMaterial##classe::get_MaxDeformation(double & oMaxDeformation) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,9,&_Trac2,&oMaxDeformation); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_MaxDeformation(oMaxDeformation); \
   ExitAfterCall(this,9,_Trac2,&_ret_arg,&oMaxDeformation); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIACompositesMaterial##classe::put_MaxDeformation(double iMaxDeformation) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,10,&_Trac2,&iMaxDeformation); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_MaxDeformation(iMaxDeformation); \
   ExitAfterCall(this,10,_Trac2,&_ret_arg,&iMaxDeformation); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIACompositesMaterial##classe::get_LimitDeformation(double & oLimitDeformation) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,11,&_Trac2,&oLimitDeformation); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_LimitDeformation(oLimitDeformation); \
   ExitAfterCall(this,11,_Trac2,&_ret_arg,&oLimitDeformation); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIACompositesMaterial##classe::put_LimitDeformation(double iLimitDeformation) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,12,&_Trac2,&iLimitDeformation); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_LimitDeformation(iLimitDeformation); \
   ExitAfterCall(this,12,_Trac2,&_ret_arg,&iLimitDeformation); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIACompositesMaterial##classe::get_FabricWidth(double & oFabricWidth) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,13,&_Trac2,&oFabricWidth); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_FabricWidth(oFabricWidth); \
   ExitAfterCall(this,13,_Trac2,&_ret_arg,&oFabricWidth); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIACompositesMaterial##classe::put_FabricWidth(double iFabricWidth) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,14,&_Trac2,&iFabricWidth); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_FabricWidth(iFabricWidth); \
   ExitAfterCall(this,14,_Trac2,&_ret_arg,&iFabricWidth); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIACompositesMaterial##classe::get_SurfacicWeigth(double & oSurfacicWeigth) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,15,&_Trac2,&oSurfacicWeigth); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_SurfacicWeigth(oSurfacicWeigth); \
   ExitAfterCall(this,15,_Trac2,&_ret_arg,&oSurfacicWeigth); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIACompositesMaterial##classe::put_SurfacicWeigth(double iSurfacicWeigth) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,16,&_Trac2,&iSurfacicWeigth); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_SurfacicWeigth(iSurfacicWeigth); \
   ExitAfterCall(this,16,_Trac2,&_ret_arg,&iSurfacicWeigth); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIACompositesMaterial##classe::get_MassCost(double & oMassCost) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,17,&_Trac2,&oMassCost); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_MassCost(oMassCost); \
   ExitAfterCall(this,17,_Trac2,&_ret_arg,&oMassCost); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIACompositesMaterial##classe::put_MassCost(double iMassCost) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,18,&_Trac2,&iMassCost); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_MassCost(iMassCost); \
   ExitAfterCall(this,18,_Trac2,&_ret_arg,&iMassCost); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIACompositesMaterial##classe::get_Application(CATIAApplication *& oApplication) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,19,&_Trac2,&oApplication); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Application(oApplication); \
   ExitAfterCall(this,19,_Trac2,&_ret_arg,&oApplication); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIACompositesMaterial##classe::get_Parent(CATBaseDispatch *& oParent) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,20,&_Trac2,&oParent); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Parent(oParent); \
   ExitAfterCall(this,20,_Trac2,&_ret_arg,&oParent); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIACompositesMaterial##classe::get_Name(CATBSTR & oNameBSTR) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,21,&_Trac2,&oNameBSTR); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Name(oNameBSTR); \
   ExitAfterCall(this,21,_Trac2,&_ret_arg,&oNameBSTR); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIACompositesMaterial##classe::put_Name(const CATBSTR & iNameBSTR) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,22,&_Trac2,&iNameBSTR); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_Name(iNameBSTR); \
   ExitAfterCall(this,22,_Trac2,&_ret_arg,&iNameBSTR); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIACompositesMaterial##classe::GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,23,&_Trac2,&IDName,&RealObj); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetItem(IDName,RealObj); \
   ExitAfterCall(this,23,_Trac2,&_ret_arg,&IDName,&RealObj); \
   return(_ret_arg); \
} \



/* Macro used to link an implementation with an interface */
#define TIE_CATIACompositesMaterial(classe) \
 \
 \
declare_TIE_CATIACompositesMaterial(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIACompositesMaterial##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIACompositesMaterial,"CATIACompositesMaterial",CATIACompositesMaterial::MetaObject(),classe::MetaObject(),TIE); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIACompositesMaterial(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIECreation(CATIACompositesMaterial, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIACompositesMaterial##classe(classe::MetaObject(),CATIACompositesMaterial::MetaObject(),(void *)CreateTIECATIACompositesMaterial##classe)



/* Macro used to link an implementation with an interface */
/* This TIE is chained on the implementation object */
#define TIEchain_CATIACompositesMaterial(classe) \
 \
 \
declare_TIE_CATIACompositesMaterial(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIACompositesMaterial##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIACompositesMaterial,"CATIACompositesMaterial",CATIACompositesMaterial::MetaObject(),classe::MetaObject(),TIEchain); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIACompositesMaterial(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIEchainCreation(CATIACompositesMaterial, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIACompositesMaterial##classe(classe::MetaObject(),CATIACompositesMaterial::MetaObject(),(void *)CreateTIECATIACompositesMaterial##classe)


/* Macro to switch between BOA and TIE at build time */ 
#ifdef CATSYS_BOA_IS_TIE
#define BOA_CATIACompositesMaterial(classe) TIE_CATIACompositesMaterial(classe)
#else
#define BOA_CATIACompositesMaterial(classe) CATImplementBOA(CATIACompositesMaterial, classe)
#endif

#endif
