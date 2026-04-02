#ifndef __TIE_CATIABasicComponent
#define __TIE_CATIABasicComponent

#include <string.h>
#include "CATBaseUnknown.h"
#include "CATMetaClass.h"
#include "CATMacForTie.h"
#include "CATExitJournal.h"
#include "CATIABasicComponent.h"
#include "JS0DSPA.h"


#ifdef _WINDOWS_SOURCE
#define Exported __declspec(dllexport)
#define Imported __declspec(dllimport)
#else
#define Exported 
#define Imported 
#endif


/* To link an implementation with the interface CATIABasicComponent */
#define declare_TIE_CATIABasicComponent(classe) \
 \
 \
class TIECATIABasicComponent##classe : public CATIABasicComponent \
{ \
   private: \
      CATDeclareCommonTIEMembers \
   public: \
      CATDeclareTIEMethods(CATIABasicComponent, classe) \
      CATDeclareIUnknownMethodsForCATBaseUnknownTIE \
      CATDeclareIDispatchMethodsForCATBaseUnknownTIE \
      CATDeclareCATBaseUnknownMethodsForTIE \
      virtual HRESULT __stdcall get_Type(CATBSTR & oType); \
      virtual HRESULT __stdcall get_BasicComponents(CATIABasicComponents *& oComponents); \
      virtual HRESULT __stdcall get_Entities(CATIAAnalysisEntities *& oEntities); \
      virtual HRESULT __stdcall GetLinesNumber(const CATBSTR & iLabel, CATLONG & oLinesNumber); \
      virtual HRESULT __stdcall GetColumnsNumber(const CATBSTR & iLabel, CATLONG & oColumnsNumber); \
      virtual HRESULT __stdcall GetLayersNumber(const CATBSTR & iLabel, CATLONG & oLayersNumber); \
      virtual HRESULT __stdcall GetValue(const CATBSTR & iLabel, CATLONG iLineIndex, CATLONG iColumnIndex, CATLONG iLayerIndex, CATVariant & iValue); \
      virtual HRESULT __stdcall SetValue(const CATBSTR & iLabel, CATLONG iLineIndex, CATLONG iColumnIndex, CATLONG iLayerIndex, const CATVariant & iValue); \
      virtual HRESULT __stdcall AddSupportFromReference(CATIAReference * iReference, CATIAReference * iSupport); \
      virtual HRESULT __stdcall AddSupportFromProduct(CATIAProduct * iProduct, CATIAReference * iSupport); \
      virtual HRESULT __stdcall AddSupportFromPublication(CATIAProduct * iProduct, CATIAPublication * iPublication); \
      virtual HRESULT __stdcall SetReference(const CATBSTR & iLabel, CATLONG iLineIndex, CATLONG iColumnIndex, CATLONG iLayerIndex, CATIAReference * iValue); \
      virtual HRESULT __stdcall SetDimensions(CATLONG iLineCount, CATLONG iColumnCount, CATLONG iLayerCount); \
      virtual HRESULT __stdcall get_AnalysisSupports(CATIAAnalysisSupports *& oSupports); \
      virtual HRESULT  __stdcall get_Application(CATIAApplication *& oApplication); \
      virtual HRESULT  __stdcall get_Parent(CATBaseDispatch *& oParent); \
      virtual HRESULT  __stdcall get_Name(CATBSTR & oNameBSTR); \
      virtual HRESULT  __stdcall put_Name(const CATBSTR & iNameBSTR); \
      virtual HRESULT  __stdcall GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj); \
};



#define ENVTIEdeclare_CATIABasicComponent(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
virtual HRESULT __stdcall get_Type(CATBSTR & oType); \
virtual HRESULT __stdcall get_BasicComponents(CATIABasicComponents *& oComponents); \
virtual HRESULT __stdcall get_Entities(CATIAAnalysisEntities *& oEntities); \
virtual HRESULT __stdcall GetLinesNumber(const CATBSTR & iLabel, CATLONG & oLinesNumber); \
virtual HRESULT __stdcall GetColumnsNumber(const CATBSTR & iLabel, CATLONG & oColumnsNumber); \
virtual HRESULT __stdcall GetLayersNumber(const CATBSTR & iLabel, CATLONG & oLayersNumber); \
virtual HRESULT __stdcall GetValue(const CATBSTR & iLabel, CATLONG iLineIndex, CATLONG iColumnIndex, CATLONG iLayerIndex, CATVariant & iValue); \
virtual HRESULT __stdcall SetValue(const CATBSTR & iLabel, CATLONG iLineIndex, CATLONG iColumnIndex, CATLONG iLayerIndex, const CATVariant & iValue); \
virtual HRESULT __stdcall AddSupportFromReference(CATIAReference * iReference, CATIAReference * iSupport); \
virtual HRESULT __stdcall AddSupportFromProduct(CATIAProduct * iProduct, CATIAReference * iSupport); \
virtual HRESULT __stdcall AddSupportFromPublication(CATIAProduct * iProduct, CATIAPublication * iPublication); \
virtual HRESULT __stdcall SetReference(const CATBSTR & iLabel, CATLONG iLineIndex, CATLONG iColumnIndex, CATLONG iLayerIndex, CATIAReference * iValue); \
virtual HRESULT __stdcall SetDimensions(CATLONG iLineCount, CATLONG iColumnCount, CATLONG iLayerCount); \
virtual HRESULT __stdcall get_AnalysisSupports(CATIAAnalysisSupports *& oSupports); \
virtual HRESULT  __stdcall get_Application(CATIAApplication *& oApplication); \
virtual HRESULT  __stdcall get_Parent(CATBaseDispatch *& oParent); \
virtual HRESULT  __stdcall get_Name(CATBSTR & oNameBSTR); \
virtual HRESULT  __stdcall put_Name(const CATBSTR & iNameBSTR); \
virtual HRESULT  __stdcall GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj); \


#define ENVTIEdefine_CATIABasicComponent(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
HRESULT __stdcall  ENVTIEName::get_Type(CATBSTR & oType) \
{ \
return (ENVTIECALL(CATIABasicComponent,ENVTIETypeLetter,ENVTIELetter)get_Type(oType)); \
} \
HRESULT __stdcall  ENVTIEName::get_BasicComponents(CATIABasicComponents *& oComponents) \
{ \
return (ENVTIECALL(CATIABasicComponent,ENVTIETypeLetter,ENVTIELetter)get_BasicComponents(oComponents)); \
} \
HRESULT __stdcall  ENVTIEName::get_Entities(CATIAAnalysisEntities *& oEntities) \
{ \
return (ENVTIECALL(CATIABasicComponent,ENVTIETypeLetter,ENVTIELetter)get_Entities(oEntities)); \
} \
HRESULT __stdcall  ENVTIEName::GetLinesNumber(const CATBSTR & iLabel, CATLONG & oLinesNumber) \
{ \
return (ENVTIECALL(CATIABasicComponent,ENVTIETypeLetter,ENVTIELetter)GetLinesNumber(iLabel,oLinesNumber)); \
} \
HRESULT __stdcall  ENVTIEName::GetColumnsNumber(const CATBSTR & iLabel, CATLONG & oColumnsNumber) \
{ \
return (ENVTIECALL(CATIABasicComponent,ENVTIETypeLetter,ENVTIELetter)GetColumnsNumber(iLabel,oColumnsNumber)); \
} \
HRESULT __stdcall  ENVTIEName::GetLayersNumber(const CATBSTR & iLabel, CATLONG & oLayersNumber) \
{ \
return (ENVTIECALL(CATIABasicComponent,ENVTIETypeLetter,ENVTIELetter)GetLayersNumber(iLabel,oLayersNumber)); \
} \
HRESULT __stdcall  ENVTIEName::GetValue(const CATBSTR & iLabel, CATLONG iLineIndex, CATLONG iColumnIndex, CATLONG iLayerIndex, CATVariant & iValue) \
{ \
return (ENVTIECALL(CATIABasicComponent,ENVTIETypeLetter,ENVTIELetter)GetValue(iLabel,iLineIndex,iColumnIndex,iLayerIndex,iValue)); \
} \
HRESULT __stdcall  ENVTIEName::SetValue(const CATBSTR & iLabel, CATLONG iLineIndex, CATLONG iColumnIndex, CATLONG iLayerIndex, const CATVariant & iValue) \
{ \
return (ENVTIECALL(CATIABasicComponent,ENVTIETypeLetter,ENVTIELetter)SetValue(iLabel,iLineIndex,iColumnIndex,iLayerIndex,iValue)); \
} \
HRESULT __stdcall  ENVTIEName::AddSupportFromReference(CATIAReference * iReference, CATIAReference * iSupport) \
{ \
return (ENVTIECALL(CATIABasicComponent,ENVTIETypeLetter,ENVTIELetter)AddSupportFromReference(iReference,iSupport)); \
} \
HRESULT __stdcall  ENVTIEName::AddSupportFromProduct(CATIAProduct * iProduct, CATIAReference * iSupport) \
{ \
return (ENVTIECALL(CATIABasicComponent,ENVTIETypeLetter,ENVTIELetter)AddSupportFromProduct(iProduct,iSupport)); \
} \
HRESULT __stdcall  ENVTIEName::AddSupportFromPublication(CATIAProduct * iProduct, CATIAPublication * iPublication) \
{ \
return (ENVTIECALL(CATIABasicComponent,ENVTIETypeLetter,ENVTIELetter)AddSupportFromPublication(iProduct,iPublication)); \
} \
HRESULT __stdcall  ENVTIEName::SetReference(const CATBSTR & iLabel, CATLONG iLineIndex, CATLONG iColumnIndex, CATLONG iLayerIndex, CATIAReference * iValue) \
{ \
return (ENVTIECALL(CATIABasicComponent,ENVTIETypeLetter,ENVTIELetter)SetReference(iLabel,iLineIndex,iColumnIndex,iLayerIndex,iValue)); \
} \
HRESULT __stdcall  ENVTIEName::SetDimensions(CATLONG iLineCount, CATLONG iColumnCount, CATLONG iLayerCount) \
{ \
return (ENVTIECALL(CATIABasicComponent,ENVTIETypeLetter,ENVTIELetter)SetDimensions(iLineCount,iColumnCount,iLayerCount)); \
} \
HRESULT __stdcall  ENVTIEName::get_AnalysisSupports(CATIAAnalysisSupports *& oSupports) \
{ \
return (ENVTIECALL(CATIABasicComponent,ENVTIETypeLetter,ENVTIELetter)get_AnalysisSupports(oSupports)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Application(CATIAApplication *& oApplication) \
{ \
return (ENVTIECALL(CATIABasicComponent,ENVTIETypeLetter,ENVTIELetter)get_Application(oApplication)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Parent(CATBaseDispatch *& oParent) \
{ \
return (ENVTIECALL(CATIABasicComponent,ENVTIETypeLetter,ENVTIELetter)get_Parent(oParent)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Name(CATBSTR & oNameBSTR) \
{ \
return (ENVTIECALL(CATIABasicComponent,ENVTIETypeLetter,ENVTIELetter)get_Name(oNameBSTR)); \
} \
HRESULT  __stdcall  ENVTIEName::put_Name(const CATBSTR & iNameBSTR) \
{ \
return (ENVTIECALL(CATIABasicComponent,ENVTIETypeLetter,ENVTIELetter)put_Name(iNameBSTR)); \
} \
HRESULT  __stdcall  ENVTIEName::GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj) \
{ \
return (ENVTIECALL(CATIABasicComponent,ENVTIETypeLetter,ENVTIELetter)GetItem(IDName,RealObj)); \
} \


/* Name of the TIE class */
#define class_TIE_CATIABasicComponent(classe)    TIECATIABasicComponent##classe


/* Common methods inside a TIE */
#define common_TIE_CATIABasicComponent(classe) \
 \
 \
/* Static initialization */ \
CATDefineCommonTIEMembers(CATIABasicComponent, classe) \
 \
 \
CATImplementTIEMethods(CATIABasicComponent, classe) \
CATImplementIUnknownMethodsForCATBaseUnknownTIE(CATIABasicComponent, classe, 2) \
CATImplementIDispatchMethodsForCATBaseUnknownTIE(CATIABasicComponent, classe) \
CATImplementCATBaseUnknownMethodsForTIE(CATIABasicComponent, classe) \
 \
HRESULT __stdcall  TIECATIABasicComponent##classe::get_Type(CATBSTR & oType) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,1,&_Trac2,&oType); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Type(oType); \
   ExitAfterCall(this,1,_Trac2,&_ret_arg,&oType); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIABasicComponent##classe::get_BasicComponents(CATIABasicComponents *& oComponents) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,2,&_Trac2,&oComponents); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_BasicComponents(oComponents); \
   ExitAfterCall(this,2,_Trac2,&_ret_arg,&oComponents); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIABasicComponent##classe::get_Entities(CATIAAnalysisEntities *& oEntities) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,3,&_Trac2,&oEntities); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Entities(oEntities); \
   ExitAfterCall(this,3,_Trac2,&_ret_arg,&oEntities); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIABasicComponent##classe::GetLinesNumber(const CATBSTR & iLabel, CATLONG & oLinesNumber) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,4,&_Trac2,&iLabel,&oLinesNumber); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetLinesNumber(iLabel,oLinesNumber); \
   ExitAfterCall(this,4,_Trac2,&_ret_arg,&iLabel,&oLinesNumber); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIABasicComponent##classe::GetColumnsNumber(const CATBSTR & iLabel, CATLONG & oColumnsNumber) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,5,&_Trac2,&iLabel,&oColumnsNumber); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetColumnsNumber(iLabel,oColumnsNumber); \
   ExitAfterCall(this,5,_Trac2,&_ret_arg,&iLabel,&oColumnsNumber); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIABasicComponent##classe::GetLayersNumber(const CATBSTR & iLabel, CATLONG & oLayersNumber) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,6,&_Trac2,&iLabel,&oLayersNumber); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetLayersNumber(iLabel,oLayersNumber); \
   ExitAfterCall(this,6,_Trac2,&_ret_arg,&iLabel,&oLayersNumber); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIABasicComponent##classe::GetValue(const CATBSTR & iLabel, CATLONG iLineIndex, CATLONG iColumnIndex, CATLONG iLayerIndex, CATVariant & iValue) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,7,&_Trac2,&iLabel,&iLineIndex,&iColumnIndex,&iLayerIndex,&iValue); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetValue(iLabel,iLineIndex,iColumnIndex,iLayerIndex,iValue); \
   ExitAfterCall(this,7,_Trac2,&_ret_arg,&iLabel,&iLineIndex,&iColumnIndex,&iLayerIndex,&iValue); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIABasicComponent##classe::SetValue(const CATBSTR & iLabel, CATLONG iLineIndex, CATLONG iColumnIndex, CATLONG iLayerIndex, const CATVariant & iValue) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,8,&_Trac2,&iLabel,&iLineIndex,&iColumnIndex,&iLayerIndex,&iValue); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetValue(iLabel,iLineIndex,iColumnIndex,iLayerIndex,iValue); \
   ExitAfterCall(this,8,_Trac2,&_ret_arg,&iLabel,&iLineIndex,&iColumnIndex,&iLayerIndex,&iValue); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIABasicComponent##classe::AddSupportFromReference(CATIAReference * iReference, CATIAReference * iSupport) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,9,&_Trac2,&iReference,&iSupport); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->AddSupportFromReference(iReference,iSupport); \
   ExitAfterCall(this,9,_Trac2,&_ret_arg,&iReference,&iSupport); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIABasicComponent##classe::AddSupportFromProduct(CATIAProduct * iProduct, CATIAReference * iSupport) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,10,&_Trac2,&iProduct,&iSupport); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->AddSupportFromProduct(iProduct,iSupport); \
   ExitAfterCall(this,10,_Trac2,&_ret_arg,&iProduct,&iSupport); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIABasicComponent##classe::AddSupportFromPublication(CATIAProduct * iProduct, CATIAPublication * iPublication) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,11,&_Trac2,&iProduct,&iPublication); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->AddSupportFromPublication(iProduct,iPublication); \
   ExitAfterCall(this,11,_Trac2,&_ret_arg,&iProduct,&iPublication); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIABasicComponent##classe::SetReference(const CATBSTR & iLabel, CATLONG iLineIndex, CATLONG iColumnIndex, CATLONG iLayerIndex, CATIAReference * iValue) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,12,&_Trac2,&iLabel,&iLineIndex,&iColumnIndex,&iLayerIndex,&iValue); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetReference(iLabel,iLineIndex,iColumnIndex,iLayerIndex,iValue); \
   ExitAfterCall(this,12,_Trac2,&_ret_arg,&iLabel,&iLineIndex,&iColumnIndex,&iLayerIndex,&iValue); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIABasicComponent##classe::SetDimensions(CATLONG iLineCount, CATLONG iColumnCount, CATLONG iLayerCount) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,13,&_Trac2,&iLineCount,&iColumnCount,&iLayerCount); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetDimensions(iLineCount,iColumnCount,iLayerCount); \
   ExitAfterCall(this,13,_Trac2,&_ret_arg,&iLineCount,&iColumnCount,&iLayerCount); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIABasicComponent##classe::get_AnalysisSupports(CATIAAnalysisSupports *& oSupports) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,14,&_Trac2,&oSupports); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_AnalysisSupports(oSupports); \
   ExitAfterCall(this,14,_Trac2,&_ret_arg,&oSupports); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIABasicComponent##classe::get_Application(CATIAApplication *& oApplication) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,15,&_Trac2,&oApplication); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Application(oApplication); \
   ExitAfterCall(this,15,_Trac2,&_ret_arg,&oApplication); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIABasicComponent##classe::get_Parent(CATBaseDispatch *& oParent) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,16,&_Trac2,&oParent); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Parent(oParent); \
   ExitAfterCall(this,16,_Trac2,&_ret_arg,&oParent); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIABasicComponent##classe::get_Name(CATBSTR & oNameBSTR) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,17,&_Trac2,&oNameBSTR); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Name(oNameBSTR); \
   ExitAfterCall(this,17,_Trac2,&_ret_arg,&oNameBSTR); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIABasicComponent##classe::put_Name(const CATBSTR & iNameBSTR) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,18,&_Trac2,&iNameBSTR); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_Name(iNameBSTR); \
   ExitAfterCall(this,18,_Trac2,&_ret_arg,&iNameBSTR); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIABasicComponent##classe::GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,19,&_Trac2,&IDName,&RealObj); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetItem(IDName,RealObj); \
   ExitAfterCall(this,19,_Trac2,&_ret_arg,&IDName,&RealObj); \
   return(_ret_arg); \
} \



/* Macro used to link an implementation with an interface */
#define TIE_CATIABasicComponent(classe) \
 \
 \
declare_TIE_CATIABasicComponent(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIABasicComponent##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIABasicComponent,"CATIABasicComponent",CATIABasicComponent::MetaObject(),classe::MetaObject(),TIE); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIABasicComponent(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIECreation(CATIABasicComponent, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIABasicComponent##classe(classe::MetaObject(),CATIABasicComponent::MetaObject(),(void *)CreateTIECATIABasicComponent##classe)



/* Macro used to link an implementation with an interface */
/* This TIE is chained on the implementation object */
#define TIEchain_CATIABasicComponent(classe) \
 \
 \
declare_TIE_CATIABasicComponent(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIABasicComponent##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIABasicComponent,"CATIABasicComponent",CATIABasicComponent::MetaObject(),classe::MetaObject(),TIEchain); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIABasicComponent(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIEchainCreation(CATIABasicComponent, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIABasicComponent##classe(classe::MetaObject(),CATIABasicComponent::MetaObject(),(void *)CreateTIECATIABasicComponent##classe)


/* Macro to switch between BOA and TIE at build time */ 
#ifdef CATSYS_BOA_IS_TIE
#define BOA_CATIABasicComponent(classe) TIE_CATIABasicComponent(classe)
#else
#define BOA_CATIABasicComponent(classe) CATImplementBOA(CATIABasicComponent, classe)
#endif

#endif
