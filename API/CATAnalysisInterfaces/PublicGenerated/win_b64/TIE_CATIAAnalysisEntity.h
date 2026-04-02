#ifndef __TIE_CATIAAnalysisEntity
#define __TIE_CATIAAnalysisEntity

#include <string.h>
#include "CATBaseUnknown.h"
#include "CATMetaClass.h"
#include "CATMacForTie.h"
#include "CATExitJournal.h"
#include "CATIAAnalysisEntity.h"
#include "JS0DSPA.h"


#ifdef _WINDOWS_SOURCE
#define Exported __declspec(dllexport)
#define Imported __declspec(dllimport)
#else
#define Exported 
#define Imported 
#endif


/* To link an implementation with the interface CATIAAnalysisEntity */
#define declare_TIE_CATIAAnalysisEntity(classe) \
 \
 \
class TIECATIAAnalysisEntity##classe : public CATIAAnalysisEntity \
{ \
   private: \
      CATDeclareCommonTIEMembers \
   public: \
      CATDeclareTIEMethods(CATIAAnalysisEntity, classe) \
      CATDeclareIUnknownMethodsForCATBaseUnknownTIE \
      CATDeclareIDispatchMethodsForCATBaseUnknownTIE \
      CATDeclareCATBaseUnknownMethodsForTIE \
      virtual HRESULT __stdcall get_Type(CATBSTR & oType); \
      virtual HRESULT __stdcall get_BasicComponents(CATIABasicComponents *& oComponents); \
      virtual HRESULT __stdcall GetValue(const CATBSTR & iComponent, const CATBSTR & iLabel, CATLONG iLineIndex, CATLONG iColumnIndex, CATLONG iLayerIndex, CATVariant & iValue); \
      virtual HRESULT __stdcall SetValue(const CATBSTR & iComponent, const CATBSTR & iLabel, CATLONG iLineIndex, CATLONG iColumnIndex, CATLONG iLayerIndex, const CATVariant & iValue); \
      virtual HRESULT __stdcall GetReference(const CATBSTR & iComponent, const CATBSTR & iLabel, CATLONG iLineIndex, CATLONG iColumnIndex, CATLONG iLayerIndex, CATIAReference *& iValue); \
      virtual HRESULT __stdcall SetReference(const CATBSTR & iComponent, const CATBSTR & iLabel, CATLONG iLineIndex, CATLONG iColumnIndex, CATLONG iLayerIndex, CATIAReference * iValue); \
      virtual HRESULT __stdcall get_AnalysisSupports(CATIAAnalysisSupports *& oSupports); \
      virtual HRESULT __stdcall AddSupportFromReference(CATIAReference * iReference, CATIAReference * iSupport); \
      virtual HRESULT __stdcall AddSupportFromPart(CATIAProduct * iPartProduct, CATIAPart * iPart); \
      virtual HRESULT __stdcall AddSupportFromConstraint(CATIAProduct * iConstraintProduct, CATIAConstraint * iConstraint); \
      virtual HRESULT __stdcall AddSupportFromProduct(CATIAProduct * iProduct, CATIAReference * iSupport); \
      virtual HRESULT __stdcall AddSupportFromPublication(CATIAProduct * iProduct, CATIAPublication * iPublication); \
      virtual HRESULT __stdcall get_AnalysisImages(CATIAAnalysisImages *& oAnalysisImages); \
      virtual HRESULT __stdcall get_AnalysisLocalEntities(CATIAAnalysisLocalEntities *& oAnalysisLocalEntities); \
      virtual HRESULT  __stdcall get_Application(CATIAApplication *& oApplication); \
      virtual HRESULT  __stdcall get_Parent(CATBaseDispatch *& oParent); \
      virtual HRESULT  __stdcall get_Name(CATBSTR & oNameBSTR); \
      virtual HRESULT  __stdcall put_Name(const CATBSTR & iNameBSTR); \
      virtual HRESULT  __stdcall GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj); \
};



#define ENVTIEdeclare_CATIAAnalysisEntity(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
virtual HRESULT __stdcall get_Type(CATBSTR & oType); \
virtual HRESULT __stdcall get_BasicComponents(CATIABasicComponents *& oComponents); \
virtual HRESULT __stdcall GetValue(const CATBSTR & iComponent, const CATBSTR & iLabel, CATLONG iLineIndex, CATLONG iColumnIndex, CATLONG iLayerIndex, CATVariant & iValue); \
virtual HRESULT __stdcall SetValue(const CATBSTR & iComponent, const CATBSTR & iLabel, CATLONG iLineIndex, CATLONG iColumnIndex, CATLONG iLayerIndex, const CATVariant & iValue); \
virtual HRESULT __stdcall GetReference(const CATBSTR & iComponent, const CATBSTR & iLabel, CATLONG iLineIndex, CATLONG iColumnIndex, CATLONG iLayerIndex, CATIAReference *& iValue); \
virtual HRESULT __stdcall SetReference(const CATBSTR & iComponent, const CATBSTR & iLabel, CATLONG iLineIndex, CATLONG iColumnIndex, CATLONG iLayerIndex, CATIAReference * iValue); \
virtual HRESULT __stdcall get_AnalysisSupports(CATIAAnalysisSupports *& oSupports); \
virtual HRESULT __stdcall AddSupportFromReference(CATIAReference * iReference, CATIAReference * iSupport); \
virtual HRESULT __stdcall AddSupportFromPart(CATIAProduct * iPartProduct, CATIAPart * iPart); \
virtual HRESULT __stdcall AddSupportFromConstraint(CATIAProduct * iConstraintProduct, CATIAConstraint * iConstraint); \
virtual HRESULT __stdcall AddSupportFromProduct(CATIAProduct * iProduct, CATIAReference * iSupport); \
virtual HRESULT __stdcall AddSupportFromPublication(CATIAProduct * iProduct, CATIAPublication * iPublication); \
virtual HRESULT __stdcall get_AnalysisImages(CATIAAnalysisImages *& oAnalysisImages); \
virtual HRESULT __stdcall get_AnalysisLocalEntities(CATIAAnalysisLocalEntities *& oAnalysisLocalEntities); \
virtual HRESULT  __stdcall get_Application(CATIAApplication *& oApplication); \
virtual HRESULT  __stdcall get_Parent(CATBaseDispatch *& oParent); \
virtual HRESULT  __stdcall get_Name(CATBSTR & oNameBSTR); \
virtual HRESULT  __stdcall put_Name(const CATBSTR & iNameBSTR); \
virtual HRESULT  __stdcall GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj); \


#define ENVTIEdefine_CATIAAnalysisEntity(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
HRESULT __stdcall  ENVTIEName::get_Type(CATBSTR & oType) \
{ \
return (ENVTIECALL(CATIAAnalysisEntity,ENVTIETypeLetter,ENVTIELetter)get_Type(oType)); \
} \
HRESULT __stdcall  ENVTIEName::get_BasicComponents(CATIABasicComponents *& oComponents) \
{ \
return (ENVTIECALL(CATIAAnalysisEntity,ENVTIETypeLetter,ENVTIELetter)get_BasicComponents(oComponents)); \
} \
HRESULT __stdcall  ENVTIEName::GetValue(const CATBSTR & iComponent, const CATBSTR & iLabel, CATLONG iLineIndex, CATLONG iColumnIndex, CATLONG iLayerIndex, CATVariant & iValue) \
{ \
return (ENVTIECALL(CATIAAnalysisEntity,ENVTIETypeLetter,ENVTIELetter)GetValue(iComponent,iLabel,iLineIndex,iColumnIndex,iLayerIndex,iValue)); \
} \
HRESULT __stdcall  ENVTIEName::SetValue(const CATBSTR & iComponent, const CATBSTR & iLabel, CATLONG iLineIndex, CATLONG iColumnIndex, CATLONG iLayerIndex, const CATVariant & iValue) \
{ \
return (ENVTIECALL(CATIAAnalysisEntity,ENVTIETypeLetter,ENVTIELetter)SetValue(iComponent,iLabel,iLineIndex,iColumnIndex,iLayerIndex,iValue)); \
} \
HRESULT __stdcall  ENVTIEName::GetReference(const CATBSTR & iComponent, const CATBSTR & iLabel, CATLONG iLineIndex, CATLONG iColumnIndex, CATLONG iLayerIndex, CATIAReference *& iValue) \
{ \
return (ENVTIECALL(CATIAAnalysisEntity,ENVTIETypeLetter,ENVTIELetter)GetReference(iComponent,iLabel,iLineIndex,iColumnIndex,iLayerIndex,iValue)); \
} \
HRESULT __stdcall  ENVTIEName::SetReference(const CATBSTR & iComponent, const CATBSTR & iLabel, CATLONG iLineIndex, CATLONG iColumnIndex, CATLONG iLayerIndex, CATIAReference * iValue) \
{ \
return (ENVTIECALL(CATIAAnalysisEntity,ENVTIETypeLetter,ENVTIELetter)SetReference(iComponent,iLabel,iLineIndex,iColumnIndex,iLayerIndex,iValue)); \
} \
HRESULT __stdcall  ENVTIEName::get_AnalysisSupports(CATIAAnalysisSupports *& oSupports) \
{ \
return (ENVTIECALL(CATIAAnalysisEntity,ENVTIETypeLetter,ENVTIELetter)get_AnalysisSupports(oSupports)); \
} \
HRESULT __stdcall  ENVTIEName::AddSupportFromReference(CATIAReference * iReference, CATIAReference * iSupport) \
{ \
return (ENVTIECALL(CATIAAnalysisEntity,ENVTIETypeLetter,ENVTIELetter)AddSupportFromReference(iReference,iSupport)); \
} \
HRESULT __stdcall  ENVTIEName::AddSupportFromPart(CATIAProduct * iPartProduct, CATIAPart * iPart) \
{ \
return (ENVTIECALL(CATIAAnalysisEntity,ENVTIETypeLetter,ENVTIELetter)AddSupportFromPart(iPartProduct,iPart)); \
} \
HRESULT __stdcall  ENVTIEName::AddSupportFromConstraint(CATIAProduct * iConstraintProduct, CATIAConstraint * iConstraint) \
{ \
return (ENVTIECALL(CATIAAnalysisEntity,ENVTIETypeLetter,ENVTIELetter)AddSupportFromConstraint(iConstraintProduct,iConstraint)); \
} \
HRESULT __stdcall  ENVTIEName::AddSupportFromProduct(CATIAProduct * iProduct, CATIAReference * iSupport) \
{ \
return (ENVTIECALL(CATIAAnalysisEntity,ENVTIETypeLetter,ENVTIELetter)AddSupportFromProduct(iProduct,iSupport)); \
} \
HRESULT __stdcall  ENVTIEName::AddSupportFromPublication(CATIAProduct * iProduct, CATIAPublication * iPublication) \
{ \
return (ENVTIECALL(CATIAAnalysisEntity,ENVTIETypeLetter,ENVTIELetter)AddSupportFromPublication(iProduct,iPublication)); \
} \
HRESULT __stdcall  ENVTIEName::get_AnalysisImages(CATIAAnalysisImages *& oAnalysisImages) \
{ \
return (ENVTIECALL(CATIAAnalysisEntity,ENVTIETypeLetter,ENVTIELetter)get_AnalysisImages(oAnalysisImages)); \
} \
HRESULT __stdcall  ENVTIEName::get_AnalysisLocalEntities(CATIAAnalysisLocalEntities *& oAnalysisLocalEntities) \
{ \
return (ENVTIECALL(CATIAAnalysisEntity,ENVTIETypeLetter,ENVTIELetter)get_AnalysisLocalEntities(oAnalysisLocalEntities)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Application(CATIAApplication *& oApplication) \
{ \
return (ENVTIECALL(CATIAAnalysisEntity,ENVTIETypeLetter,ENVTIELetter)get_Application(oApplication)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Parent(CATBaseDispatch *& oParent) \
{ \
return (ENVTIECALL(CATIAAnalysisEntity,ENVTIETypeLetter,ENVTIELetter)get_Parent(oParent)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Name(CATBSTR & oNameBSTR) \
{ \
return (ENVTIECALL(CATIAAnalysisEntity,ENVTIETypeLetter,ENVTIELetter)get_Name(oNameBSTR)); \
} \
HRESULT  __stdcall  ENVTIEName::put_Name(const CATBSTR & iNameBSTR) \
{ \
return (ENVTIECALL(CATIAAnalysisEntity,ENVTIETypeLetter,ENVTIELetter)put_Name(iNameBSTR)); \
} \
HRESULT  __stdcall  ENVTIEName::GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj) \
{ \
return (ENVTIECALL(CATIAAnalysisEntity,ENVTIETypeLetter,ENVTIELetter)GetItem(IDName,RealObj)); \
} \


/* Name of the TIE class */
#define class_TIE_CATIAAnalysisEntity(classe)    TIECATIAAnalysisEntity##classe


/* Common methods inside a TIE */
#define common_TIE_CATIAAnalysisEntity(classe) \
 \
 \
/* Static initialization */ \
CATDefineCommonTIEMembers(CATIAAnalysisEntity, classe) \
 \
 \
CATImplementTIEMethods(CATIAAnalysisEntity, classe) \
CATImplementIUnknownMethodsForCATBaseUnknownTIE(CATIAAnalysisEntity, classe, 2) \
CATImplementIDispatchMethodsForCATBaseUnknownTIE(CATIAAnalysisEntity, classe) \
CATImplementCATBaseUnknownMethodsForTIE(CATIAAnalysisEntity, classe) \
 \
HRESULT __stdcall  TIECATIAAnalysisEntity##classe::get_Type(CATBSTR & oType) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,1,&_Trac2,&oType); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Type(oType); \
   ExitAfterCall(this,1,_Trac2,&_ret_arg,&oType); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAAnalysisEntity##classe::get_BasicComponents(CATIABasicComponents *& oComponents) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,2,&_Trac2,&oComponents); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_BasicComponents(oComponents); \
   ExitAfterCall(this,2,_Trac2,&_ret_arg,&oComponents); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAAnalysisEntity##classe::GetValue(const CATBSTR & iComponent, const CATBSTR & iLabel, CATLONG iLineIndex, CATLONG iColumnIndex, CATLONG iLayerIndex, CATVariant & iValue) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,3,&_Trac2,&iComponent,&iLabel,&iLineIndex,&iColumnIndex,&iLayerIndex,&iValue); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetValue(iComponent,iLabel,iLineIndex,iColumnIndex,iLayerIndex,iValue); \
   ExitAfterCall(this,3,_Trac2,&_ret_arg,&iComponent,&iLabel,&iLineIndex,&iColumnIndex,&iLayerIndex,&iValue); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAAnalysisEntity##classe::SetValue(const CATBSTR & iComponent, const CATBSTR & iLabel, CATLONG iLineIndex, CATLONG iColumnIndex, CATLONG iLayerIndex, const CATVariant & iValue) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,4,&_Trac2,&iComponent,&iLabel,&iLineIndex,&iColumnIndex,&iLayerIndex,&iValue); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetValue(iComponent,iLabel,iLineIndex,iColumnIndex,iLayerIndex,iValue); \
   ExitAfterCall(this,4,_Trac2,&_ret_arg,&iComponent,&iLabel,&iLineIndex,&iColumnIndex,&iLayerIndex,&iValue); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAAnalysisEntity##classe::GetReference(const CATBSTR & iComponent, const CATBSTR & iLabel, CATLONG iLineIndex, CATLONG iColumnIndex, CATLONG iLayerIndex, CATIAReference *& iValue) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,5,&_Trac2,&iComponent,&iLabel,&iLineIndex,&iColumnIndex,&iLayerIndex,&iValue); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetReference(iComponent,iLabel,iLineIndex,iColumnIndex,iLayerIndex,iValue); \
   ExitAfterCall(this,5,_Trac2,&_ret_arg,&iComponent,&iLabel,&iLineIndex,&iColumnIndex,&iLayerIndex,&iValue); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAAnalysisEntity##classe::SetReference(const CATBSTR & iComponent, const CATBSTR & iLabel, CATLONG iLineIndex, CATLONG iColumnIndex, CATLONG iLayerIndex, CATIAReference * iValue) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,6,&_Trac2,&iComponent,&iLabel,&iLineIndex,&iColumnIndex,&iLayerIndex,&iValue); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetReference(iComponent,iLabel,iLineIndex,iColumnIndex,iLayerIndex,iValue); \
   ExitAfterCall(this,6,_Trac2,&_ret_arg,&iComponent,&iLabel,&iLineIndex,&iColumnIndex,&iLayerIndex,&iValue); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAAnalysisEntity##classe::get_AnalysisSupports(CATIAAnalysisSupports *& oSupports) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,7,&_Trac2,&oSupports); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_AnalysisSupports(oSupports); \
   ExitAfterCall(this,7,_Trac2,&_ret_arg,&oSupports); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAAnalysisEntity##classe::AddSupportFromReference(CATIAReference * iReference, CATIAReference * iSupport) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,8,&_Trac2,&iReference,&iSupport); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->AddSupportFromReference(iReference,iSupport); \
   ExitAfterCall(this,8,_Trac2,&_ret_arg,&iReference,&iSupport); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAAnalysisEntity##classe::AddSupportFromPart(CATIAProduct * iPartProduct, CATIAPart * iPart) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,9,&_Trac2,&iPartProduct,&iPart); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->AddSupportFromPart(iPartProduct,iPart); \
   ExitAfterCall(this,9,_Trac2,&_ret_arg,&iPartProduct,&iPart); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAAnalysisEntity##classe::AddSupportFromConstraint(CATIAProduct * iConstraintProduct, CATIAConstraint * iConstraint) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,10,&_Trac2,&iConstraintProduct,&iConstraint); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->AddSupportFromConstraint(iConstraintProduct,iConstraint); \
   ExitAfterCall(this,10,_Trac2,&_ret_arg,&iConstraintProduct,&iConstraint); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAAnalysisEntity##classe::AddSupportFromProduct(CATIAProduct * iProduct, CATIAReference * iSupport) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,11,&_Trac2,&iProduct,&iSupport); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->AddSupportFromProduct(iProduct,iSupport); \
   ExitAfterCall(this,11,_Trac2,&_ret_arg,&iProduct,&iSupport); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAAnalysisEntity##classe::AddSupportFromPublication(CATIAProduct * iProduct, CATIAPublication * iPublication) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,12,&_Trac2,&iProduct,&iPublication); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->AddSupportFromPublication(iProduct,iPublication); \
   ExitAfterCall(this,12,_Trac2,&_ret_arg,&iProduct,&iPublication); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAAnalysisEntity##classe::get_AnalysisImages(CATIAAnalysisImages *& oAnalysisImages) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,13,&_Trac2,&oAnalysisImages); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_AnalysisImages(oAnalysisImages); \
   ExitAfterCall(this,13,_Trac2,&_ret_arg,&oAnalysisImages); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAAnalysisEntity##classe::get_AnalysisLocalEntities(CATIAAnalysisLocalEntities *& oAnalysisLocalEntities) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,14,&_Trac2,&oAnalysisLocalEntities); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_AnalysisLocalEntities(oAnalysisLocalEntities); \
   ExitAfterCall(this,14,_Trac2,&_ret_arg,&oAnalysisLocalEntities); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAAnalysisEntity##classe::get_Application(CATIAApplication *& oApplication) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,15,&_Trac2,&oApplication); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Application(oApplication); \
   ExitAfterCall(this,15,_Trac2,&_ret_arg,&oApplication); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAAnalysisEntity##classe::get_Parent(CATBaseDispatch *& oParent) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,16,&_Trac2,&oParent); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Parent(oParent); \
   ExitAfterCall(this,16,_Trac2,&_ret_arg,&oParent); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAAnalysisEntity##classe::get_Name(CATBSTR & oNameBSTR) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,17,&_Trac2,&oNameBSTR); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Name(oNameBSTR); \
   ExitAfterCall(this,17,_Trac2,&_ret_arg,&oNameBSTR); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAAnalysisEntity##classe::put_Name(const CATBSTR & iNameBSTR) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,18,&_Trac2,&iNameBSTR); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_Name(iNameBSTR); \
   ExitAfterCall(this,18,_Trac2,&_ret_arg,&iNameBSTR); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAAnalysisEntity##classe::GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,19,&_Trac2,&IDName,&RealObj); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetItem(IDName,RealObj); \
   ExitAfterCall(this,19,_Trac2,&_ret_arg,&IDName,&RealObj); \
   return(_ret_arg); \
} \



/* Macro used to link an implementation with an interface */
#define TIE_CATIAAnalysisEntity(classe) \
 \
 \
declare_TIE_CATIAAnalysisEntity(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIAAnalysisEntity##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIAAnalysisEntity,"CATIAAnalysisEntity",CATIAAnalysisEntity::MetaObject(),classe::MetaObject(),TIE); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIAAnalysisEntity(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIECreation(CATIAAnalysisEntity, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIAAnalysisEntity##classe(classe::MetaObject(),CATIAAnalysisEntity::MetaObject(),(void *)CreateTIECATIAAnalysisEntity##classe)



/* Macro used to link an implementation with an interface */
/* This TIE is chained on the implementation object */
#define TIEchain_CATIAAnalysisEntity(classe) \
 \
 \
declare_TIE_CATIAAnalysisEntity(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIAAnalysisEntity##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIAAnalysisEntity,"CATIAAnalysisEntity",CATIAAnalysisEntity::MetaObject(),classe::MetaObject(),TIEchain); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIAAnalysisEntity(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIEchainCreation(CATIAAnalysisEntity, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIAAnalysisEntity##classe(classe::MetaObject(),CATIAAnalysisEntity::MetaObject(),(void *)CreateTIECATIAAnalysisEntity##classe)


/* Macro to switch between BOA and TIE at build time */ 
#ifdef CATSYS_BOA_IS_TIE
#define BOA_CATIAAnalysisEntity(classe) TIE_CATIAAnalysisEntity(classe)
#else
#define BOA_CATIAAnalysisEntity(classe) CATImplementBOA(CATIAAnalysisEntity, classe)
#endif

#endif
