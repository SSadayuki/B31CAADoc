#ifndef __TIE_CATIAAnalysisMeshPart
#define __TIE_CATIAAnalysisMeshPart

#include <string.h>
#include "CATBaseUnknown.h"
#include "CATMetaClass.h"
#include "CATMacForTie.h"
#include "CATExitJournal.h"
#include "CATIAAnalysisMeshPart.h"
#include "JS0DSPA.h"


#ifdef _WINDOWS_SOURCE
#define Exported __declspec(dllexport)
#define Imported __declspec(dllimport)
#else
#define Exported 
#define Imported 
#endif


/* To link an implementation with the interface CATIAAnalysisMeshPart */
#define declare_TIE_CATIAAnalysisMeshPart(classe) \
 \
 \
class TIECATIAAnalysisMeshPart##classe : public CATIAAnalysisMeshPart \
{ \
   private: \
      CATDeclareCommonTIEMembers \
   public: \
      CATDeclareTIEMethods(CATIAAnalysisMeshPart, classe) \
      CATDeclareIUnknownMethodsForCATBaseUnknownTIE \
      CATDeclareIDispatchMethodsForCATBaseUnknownTIE \
      CATDeclareCATBaseUnknownMethodsForTIE \
      virtual HRESULT __stdcall AddSupportFromReference(CATIAProduct * iProduct, CATIAReference * iSupport); \
      virtual HRESULT __stdcall AddSupportFromPublication(CATIAProduct * iProduct, CATIAPublication * iSupport); \
      virtual HRESULT __stdcall SetGlobalSpecification(const CATBSTR & iName, const CATVariant & iValue); \
      virtual HRESULT __stdcall SetSpecificationFromReference(const CATBSTR & iName, CATIAProduct * iProduct, CATIAReference * iSupport, CATLONG iMode); \
      virtual HRESULT __stdcall SetSpecificationFromPublication(const CATBSTR & iName, CATIAProduct * iProduct, CATIAPublication * iSupport, CATLONG iMode); \
      virtual HRESULT __stdcall SetMeshPartsToCapture(const CATSafeArrayVariant & iMeshParts); \
      virtual HRESULT __stdcall get_AnalysisMeshLocalSpecifications(CATIAAnalysisMeshLocalSpecifications *& oLocalSpecs); \
      virtual HRESULT __stdcall get_Activity(CAT_VARIANT_BOOL & oActivity); \
      virtual HRESULT __stdcall put_Activity(CAT_VARIANT_BOOL iActivity); \
      virtual HRESULT __stdcall get_Type(CATBSTR & oType); \
      virtual HRESULT __stdcall get_AnalysisEntities(CATIAAnalysisEntities *& oAnalysisEntities); \
      virtual HRESULT __stdcall get_AnalysisOutputEntities(CATIAAnalysisOutputEntities *& oAnalysisEntities); \
      virtual HRESULT __stdcall get_AnalysisSets(CATIAAnalysisSets *& oAnalysisSets); \
      virtual HRESULT __stdcall get_AnalysisImages(CATIAAnalysisImages *& oAnalysisImages); \
      virtual HRESULT __stdcall get_BasicComponents(CATIABasicComponents *& oBasicComponents); \
      virtual HRESULT __stdcall Update(); \
      virtual HRESULT  __stdcall get_Application(CATIAApplication *& oApplication); \
      virtual HRESULT  __stdcall get_Parent(CATBaseDispatch *& oParent); \
      virtual HRESULT  __stdcall get_Name(CATBSTR & oNameBSTR); \
      virtual HRESULT  __stdcall put_Name(const CATBSTR & iNameBSTR); \
      virtual HRESULT  __stdcall GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj); \
};



#define ENVTIEdeclare_CATIAAnalysisMeshPart(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
virtual HRESULT __stdcall AddSupportFromReference(CATIAProduct * iProduct, CATIAReference * iSupport); \
virtual HRESULT __stdcall AddSupportFromPublication(CATIAProduct * iProduct, CATIAPublication * iSupport); \
virtual HRESULT __stdcall SetGlobalSpecification(const CATBSTR & iName, const CATVariant & iValue); \
virtual HRESULT __stdcall SetSpecificationFromReference(const CATBSTR & iName, CATIAProduct * iProduct, CATIAReference * iSupport, CATLONG iMode); \
virtual HRESULT __stdcall SetSpecificationFromPublication(const CATBSTR & iName, CATIAProduct * iProduct, CATIAPublication * iSupport, CATLONG iMode); \
virtual HRESULT __stdcall SetMeshPartsToCapture(const CATSafeArrayVariant & iMeshParts); \
virtual HRESULT __stdcall get_AnalysisMeshLocalSpecifications(CATIAAnalysisMeshLocalSpecifications *& oLocalSpecs); \
virtual HRESULT __stdcall get_Activity(CAT_VARIANT_BOOL & oActivity); \
virtual HRESULT __stdcall put_Activity(CAT_VARIANT_BOOL iActivity); \
virtual HRESULT __stdcall get_Type(CATBSTR & oType); \
virtual HRESULT __stdcall get_AnalysisEntities(CATIAAnalysisEntities *& oAnalysisEntities); \
virtual HRESULT __stdcall get_AnalysisOutputEntities(CATIAAnalysisOutputEntities *& oAnalysisEntities); \
virtual HRESULT __stdcall get_AnalysisSets(CATIAAnalysisSets *& oAnalysisSets); \
virtual HRESULT __stdcall get_AnalysisImages(CATIAAnalysisImages *& oAnalysisImages); \
virtual HRESULT __stdcall get_BasicComponents(CATIABasicComponents *& oBasicComponents); \
virtual HRESULT __stdcall Update(); \
virtual HRESULT  __stdcall get_Application(CATIAApplication *& oApplication); \
virtual HRESULT  __stdcall get_Parent(CATBaseDispatch *& oParent); \
virtual HRESULT  __stdcall get_Name(CATBSTR & oNameBSTR); \
virtual HRESULT  __stdcall put_Name(const CATBSTR & iNameBSTR); \
virtual HRESULT  __stdcall GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj); \


#define ENVTIEdefine_CATIAAnalysisMeshPart(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
HRESULT __stdcall  ENVTIEName::AddSupportFromReference(CATIAProduct * iProduct, CATIAReference * iSupport) \
{ \
return (ENVTIECALL(CATIAAnalysisMeshPart,ENVTIETypeLetter,ENVTIELetter)AddSupportFromReference(iProduct,iSupport)); \
} \
HRESULT __stdcall  ENVTIEName::AddSupportFromPublication(CATIAProduct * iProduct, CATIAPublication * iSupport) \
{ \
return (ENVTIECALL(CATIAAnalysisMeshPart,ENVTIETypeLetter,ENVTIELetter)AddSupportFromPublication(iProduct,iSupport)); \
} \
HRESULT __stdcall  ENVTIEName::SetGlobalSpecification(const CATBSTR & iName, const CATVariant & iValue) \
{ \
return (ENVTIECALL(CATIAAnalysisMeshPart,ENVTIETypeLetter,ENVTIELetter)SetGlobalSpecification(iName,iValue)); \
} \
HRESULT __stdcall  ENVTIEName::SetSpecificationFromReference(const CATBSTR & iName, CATIAProduct * iProduct, CATIAReference * iSupport, CATLONG iMode) \
{ \
return (ENVTIECALL(CATIAAnalysisMeshPart,ENVTIETypeLetter,ENVTIELetter)SetSpecificationFromReference(iName,iProduct,iSupport,iMode)); \
} \
HRESULT __stdcall  ENVTIEName::SetSpecificationFromPublication(const CATBSTR & iName, CATIAProduct * iProduct, CATIAPublication * iSupport, CATLONG iMode) \
{ \
return (ENVTIECALL(CATIAAnalysisMeshPart,ENVTIETypeLetter,ENVTIELetter)SetSpecificationFromPublication(iName,iProduct,iSupport,iMode)); \
} \
HRESULT __stdcall  ENVTIEName::SetMeshPartsToCapture(const CATSafeArrayVariant & iMeshParts) \
{ \
return (ENVTIECALL(CATIAAnalysisMeshPart,ENVTIETypeLetter,ENVTIELetter)SetMeshPartsToCapture(iMeshParts)); \
} \
HRESULT __stdcall  ENVTIEName::get_AnalysisMeshLocalSpecifications(CATIAAnalysisMeshLocalSpecifications *& oLocalSpecs) \
{ \
return (ENVTIECALL(CATIAAnalysisMeshPart,ENVTIETypeLetter,ENVTIELetter)get_AnalysisMeshLocalSpecifications(oLocalSpecs)); \
} \
HRESULT __stdcall  ENVTIEName::get_Activity(CAT_VARIANT_BOOL & oActivity) \
{ \
return (ENVTIECALL(CATIAAnalysisMeshPart,ENVTIETypeLetter,ENVTIELetter)get_Activity(oActivity)); \
} \
HRESULT __stdcall  ENVTIEName::put_Activity(CAT_VARIANT_BOOL iActivity) \
{ \
return (ENVTIECALL(CATIAAnalysisMeshPart,ENVTIETypeLetter,ENVTIELetter)put_Activity(iActivity)); \
} \
HRESULT __stdcall  ENVTIEName::get_Type(CATBSTR & oType) \
{ \
return (ENVTIECALL(CATIAAnalysisMeshPart,ENVTIETypeLetter,ENVTIELetter)get_Type(oType)); \
} \
HRESULT __stdcall  ENVTIEName::get_AnalysisEntities(CATIAAnalysisEntities *& oAnalysisEntities) \
{ \
return (ENVTIECALL(CATIAAnalysisMeshPart,ENVTIETypeLetter,ENVTIELetter)get_AnalysisEntities(oAnalysisEntities)); \
} \
HRESULT __stdcall  ENVTIEName::get_AnalysisOutputEntities(CATIAAnalysisOutputEntities *& oAnalysisEntities) \
{ \
return (ENVTIECALL(CATIAAnalysisMeshPart,ENVTIETypeLetter,ENVTIELetter)get_AnalysisOutputEntities(oAnalysisEntities)); \
} \
HRESULT __stdcall  ENVTIEName::get_AnalysisSets(CATIAAnalysisSets *& oAnalysisSets) \
{ \
return (ENVTIECALL(CATIAAnalysisMeshPart,ENVTIETypeLetter,ENVTIELetter)get_AnalysisSets(oAnalysisSets)); \
} \
HRESULT __stdcall  ENVTIEName::get_AnalysisImages(CATIAAnalysisImages *& oAnalysisImages) \
{ \
return (ENVTIECALL(CATIAAnalysisMeshPart,ENVTIETypeLetter,ENVTIELetter)get_AnalysisImages(oAnalysisImages)); \
} \
HRESULT __stdcall  ENVTIEName::get_BasicComponents(CATIABasicComponents *& oBasicComponents) \
{ \
return (ENVTIECALL(CATIAAnalysisMeshPart,ENVTIETypeLetter,ENVTIELetter)get_BasicComponents(oBasicComponents)); \
} \
HRESULT __stdcall  ENVTIEName::Update() \
{ \
return (ENVTIECALL(CATIAAnalysisMeshPart,ENVTIETypeLetter,ENVTIELetter)Update()); \
} \
HRESULT  __stdcall  ENVTIEName::get_Application(CATIAApplication *& oApplication) \
{ \
return (ENVTIECALL(CATIAAnalysisMeshPart,ENVTIETypeLetter,ENVTIELetter)get_Application(oApplication)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Parent(CATBaseDispatch *& oParent) \
{ \
return (ENVTIECALL(CATIAAnalysisMeshPart,ENVTIETypeLetter,ENVTIELetter)get_Parent(oParent)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Name(CATBSTR & oNameBSTR) \
{ \
return (ENVTIECALL(CATIAAnalysisMeshPart,ENVTIETypeLetter,ENVTIELetter)get_Name(oNameBSTR)); \
} \
HRESULT  __stdcall  ENVTIEName::put_Name(const CATBSTR & iNameBSTR) \
{ \
return (ENVTIECALL(CATIAAnalysisMeshPart,ENVTIETypeLetter,ENVTIELetter)put_Name(iNameBSTR)); \
} \
HRESULT  __stdcall  ENVTIEName::GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj) \
{ \
return (ENVTIECALL(CATIAAnalysisMeshPart,ENVTIETypeLetter,ENVTIELetter)GetItem(IDName,RealObj)); \
} \


/* Name of the TIE class */
#define class_TIE_CATIAAnalysisMeshPart(classe)    TIECATIAAnalysisMeshPart##classe


/* Common methods inside a TIE */
#define common_TIE_CATIAAnalysisMeshPart(classe) \
 \
 \
/* Static initialization */ \
CATDefineCommonTIEMembers(CATIAAnalysisMeshPart, classe) \
 \
 \
CATImplementTIEMethods(CATIAAnalysisMeshPart, classe) \
CATImplementIUnknownMethodsForCATBaseUnknownTIE(CATIAAnalysisMeshPart, classe, 2) \
CATImplementIDispatchMethodsForCATBaseUnknownTIE(CATIAAnalysisMeshPart, classe) \
CATImplementCATBaseUnknownMethodsForTIE(CATIAAnalysisMeshPart, classe) \
 \
HRESULT __stdcall  TIECATIAAnalysisMeshPart##classe::AddSupportFromReference(CATIAProduct * iProduct, CATIAReference * iSupport) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,1,&_Trac2,&iProduct,&iSupport); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->AddSupportFromReference(iProduct,iSupport); \
   ExitAfterCall(this,1,_Trac2,&_ret_arg,&iProduct,&iSupport); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAAnalysisMeshPart##classe::AddSupportFromPublication(CATIAProduct * iProduct, CATIAPublication * iSupport) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,2,&_Trac2,&iProduct,&iSupport); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->AddSupportFromPublication(iProduct,iSupport); \
   ExitAfterCall(this,2,_Trac2,&_ret_arg,&iProduct,&iSupport); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAAnalysisMeshPart##classe::SetGlobalSpecification(const CATBSTR & iName, const CATVariant & iValue) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,3,&_Trac2,&iName,&iValue); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetGlobalSpecification(iName,iValue); \
   ExitAfterCall(this,3,_Trac2,&_ret_arg,&iName,&iValue); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAAnalysisMeshPart##classe::SetSpecificationFromReference(const CATBSTR & iName, CATIAProduct * iProduct, CATIAReference * iSupport, CATLONG iMode) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,4,&_Trac2,&iName,&iProduct,&iSupport,&iMode); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetSpecificationFromReference(iName,iProduct,iSupport,iMode); \
   ExitAfterCall(this,4,_Trac2,&_ret_arg,&iName,&iProduct,&iSupport,&iMode); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAAnalysisMeshPart##classe::SetSpecificationFromPublication(const CATBSTR & iName, CATIAProduct * iProduct, CATIAPublication * iSupport, CATLONG iMode) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,5,&_Trac2,&iName,&iProduct,&iSupport,&iMode); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetSpecificationFromPublication(iName,iProduct,iSupport,iMode); \
   ExitAfterCall(this,5,_Trac2,&_ret_arg,&iName,&iProduct,&iSupport,&iMode); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAAnalysisMeshPart##classe::SetMeshPartsToCapture(const CATSafeArrayVariant & iMeshParts) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,6,&_Trac2,&iMeshParts); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetMeshPartsToCapture(iMeshParts); \
   ExitAfterCall(this,6,_Trac2,&_ret_arg,&iMeshParts); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAAnalysisMeshPart##classe::get_AnalysisMeshLocalSpecifications(CATIAAnalysisMeshLocalSpecifications *& oLocalSpecs) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,7,&_Trac2,&oLocalSpecs); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_AnalysisMeshLocalSpecifications(oLocalSpecs); \
   ExitAfterCall(this,7,_Trac2,&_ret_arg,&oLocalSpecs); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAAnalysisMeshPart##classe::get_Activity(CAT_VARIANT_BOOL & oActivity) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,8,&_Trac2,&oActivity); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Activity(oActivity); \
   ExitAfterCall(this,8,_Trac2,&_ret_arg,&oActivity); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAAnalysisMeshPart##classe::put_Activity(CAT_VARIANT_BOOL iActivity) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,9,&_Trac2,&iActivity); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_Activity(iActivity); \
   ExitAfterCall(this,9,_Trac2,&_ret_arg,&iActivity); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAAnalysisMeshPart##classe::get_Type(CATBSTR & oType) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,10,&_Trac2,&oType); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Type(oType); \
   ExitAfterCall(this,10,_Trac2,&_ret_arg,&oType); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAAnalysisMeshPart##classe::get_AnalysisEntities(CATIAAnalysisEntities *& oAnalysisEntities) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,11,&_Trac2,&oAnalysisEntities); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_AnalysisEntities(oAnalysisEntities); \
   ExitAfterCall(this,11,_Trac2,&_ret_arg,&oAnalysisEntities); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAAnalysisMeshPart##classe::get_AnalysisOutputEntities(CATIAAnalysisOutputEntities *& oAnalysisEntities) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,12,&_Trac2,&oAnalysisEntities); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_AnalysisOutputEntities(oAnalysisEntities); \
   ExitAfterCall(this,12,_Trac2,&_ret_arg,&oAnalysisEntities); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAAnalysisMeshPart##classe::get_AnalysisSets(CATIAAnalysisSets *& oAnalysisSets) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,13,&_Trac2,&oAnalysisSets); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_AnalysisSets(oAnalysisSets); \
   ExitAfterCall(this,13,_Trac2,&_ret_arg,&oAnalysisSets); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAAnalysisMeshPart##classe::get_AnalysisImages(CATIAAnalysisImages *& oAnalysisImages) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,14,&_Trac2,&oAnalysisImages); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_AnalysisImages(oAnalysisImages); \
   ExitAfterCall(this,14,_Trac2,&_ret_arg,&oAnalysisImages); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAAnalysisMeshPart##classe::get_BasicComponents(CATIABasicComponents *& oBasicComponents) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,15,&_Trac2,&oBasicComponents); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_BasicComponents(oBasicComponents); \
   ExitAfterCall(this,15,_Trac2,&_ret_arg,&oBasicComponents); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAAnalysisMeshPart##classe::Update() \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,16,&_Trac2); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->Update(); \
   ExitAfterCall(this,16,_Trac2,&_ret_arg); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAAnalysisMeshPart##classe::get_Application(CATIAApplication *& oApplication) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,17,&_Trac2,&oApplication); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Application(oApplication); \
   ExitAfterCall(this,17,_Trac2,&_ret_arg,&oApplication); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAAnalysisMeshPart##classe::get_Parent(CATBaseDispatch *& oParent) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,18,&_Trac2,&oParent); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Parent(oParent); \
   ExitAfterCall(this,18,_Trac2,&_ret_arg,&oParent); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAAnalysisMeshPart##classe::get_Name(CATBSTR & oNameBSTR) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,19,&_Trac2,&oNameBSTR); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Name(oNameBSTR); \
   ExitAfterCall(this,19,_Trac2,&_ret_arg,&oNameBSTR); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAAnalysisMeshPart##classe::put_Name(const CATBSTR & iNameBSTR) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,20,&_Trac2,&iNameBSTR); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_Name(iNameBSTR); \
   ExitAfterCall(this,20,_Trac2,&_ret_arg,&iNameBSTR); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAAnalysisMeshPart##classe::GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,21,&_Trac2,&IDName,&RealObj); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetItem(IDName,RealObj); \
   ExitAfterCall(this,21,_Trac2,&_ret_arg,&IDName,&RealObj); \
   return(_ret_arg); \
} \



/* Macro used to link an implementation with an interface */
#define TIE_CATIAAnalysisMeshPart(classe) \
 \
 \
declare_TIE_CATIAAnalysisMeshPart(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIAAnalysisMeshPart##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIAAnalysisMeshPart,"CATIAAnalysisMeshPart",CATIAAnalysisMeshPart::MetaObject(),classe::MetaObject(),TIE); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIAAnalysisMeshPart(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIECreation(CATIAAnalysisMeshPart, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIAAnalysisMeshPart##classe(classe::MetaObject(),CATIAAnalysisMeshPart::MetaObject(),(void *)CreateTIECATIAAnalysisMeshPart##classe)



/* Macro used to link an implementation with an interface */
/* This TIE is chained on the implementation object */
#define TIEchain_CATIAAnalysisMeshPart(classe) \
 \
 \
declare_TIE_CATIAAnalysisMeshPart(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIAAnalysisMeshPart##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIAAnalysisMeshPart,"CATIAAnalysisMeshPart",CATIAAnalysisMeshPart::MetaObject(),classe::MetaObject(),TIEchain); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIAAnalysisMeshPart(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIEchainCreation(CATIAAnalysisMeshPart, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIAAnalysisMeshPart##classe(classe::MetaObject(),CATIAAnalysisMeshPart::MetaObject(),(void *)CreateTIECATIAAnalysisMeshPart##classe)


/* Macro to switch between BOA and TIE at build time */ 
#ifdef CATSYS_BOA_IS_TIE
#define BOA_CATIAAnalysisMeshPart(classe) TIE_CATIAAnalysisMeshPart(classe)
#else
#define BOA_CATIAAnalysisMeshPart(classe) CATImplementBOA(CATIAAnalysisMeshPart, classe)
#endif

#endif
