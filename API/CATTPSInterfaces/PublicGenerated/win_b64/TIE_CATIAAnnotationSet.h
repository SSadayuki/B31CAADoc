#ifndef __TIE_CATIAAnnotationSet
#define __TIE_CATIAAnnotationSet

#include <string.h>
#include "CATBaseUnknown.h"
#include "CATMetaClass.h"
#include "CATMacForTie.h"
#include "CATIAAnnotationSet.h"
#include "JS0DSPA.h"


#ifdef _WINDOWS_SOURCE
#define Exported __declspec(dllexport)
#define Imported __declspec(dllimport)
#else
#define Exported 
#define Imported 
#endif


/* To link an implementation with the interface CATIAAnnotationSet */
#define declare_TIE_CATIAAnnotationSet(classe) \
 \
 \
class TIECATIAAnnotationSet##classe : public CATIAAnnotationSet \
{ \
   private: \
      CATDeclareCommonTIEMembers \
   public: \
      CATDeclareTIEMethods(CATIAAnnotationSet, classe) \
      CATDeclareIUnknownMethodsForCATBaseUnknownTIE \
      CATDeclareIDispatchMethodsForCATBaseUnknownTIE \
      CATDeclareCATBaseUnknownMethodsForTIE \
      virtual HRESULT __stdcall get_AnnotationFactory(CATIAAnnotationFactory *& oAFact); \
      virtual HRESULT __stdcall get_TPSViewFactory(CATIATPSViewFactory *& oTPSViewFact); \
      virtual HRESULT __stdcall get_CaptureFactory(CATIACaptureFactory *& opiCapFact); \
      virtual HRESULT __stdcall get_Annotations(CATIAAnnotations *& oAnnots); \
      virtual HRESULT __stdcall get_AnEmptyAnnotationsList(CATIAAnnotations *& oAnnots); \
      virtual HRESULT __stdcall get_Standard(CATBSTR & oStandard); \
      virtual HRESULT __stdcall ReadISODefaultProperties(CATSafeArrayVariant & oISODefaults, CATLONG & oCount); \
      virtual HRESULT __stdcall get_Captures(CATIACaptures *& oCaptures); \
      virtual HRESULT __stdcall get_KindOfSet(CATBSTR & oKindOfSet); \
      virtual HRESULT __stdcall get_SwitchOn(CAT_VARIANT_BOOL & oDisplay); \
      virtual HRESULT __stdcall put_SwitchOn(CAT_VARIANT_BOOL iDisplay); \
      virtual HRESULT __stdcall get_TPSViews(CATIATPSViews *& oViews); \
      virtual HRESULT __stdcall get_ActiveView(CATIATPSView *& oView); \
      virtual HRESULT __stdcall put_ActiveView(CATIATPSView * iView); \
      virtual HRESULT __stdcall get_AnnotationFactory2(CATIAAnnotationFactory2 *& oAFact); \
      virtual HRESULT __stdcall get_AnnotationSetType(CatAnnotationSetType & oAnnotationSetType); \
      virtual HRESULT __stdcall get_AnnotationSetPupose(CATBSTR & oAnnotationSetSpecification); \
      virtual HRESULT __stdcall GlobalCopySetTo(CATIAPart * iDestinationPart, CATBSTR & oMessage); \
      virtual HRESULT __stdcall GlobalCopySetToWithTransformation(CATIAPart * iDestinationPart, CATSafeArrayVariant & iTransfo, CATBSTR & oMessage); \
      virtual HRESULT __stdcall ApplyViewReUseWhenCopySetTo(); \
      virtual HRESULT __stdcall ApplyResultWithLinkWhenCopySetTo(); \
      virtual HRESULT  __stdcall get_Application(CATIAApplication *& oApplication); \
      virtual HRESULT  __stdcall get_Parent(CATBaseDispatch *& oParent); \
      virtual HRESULT  __stdcall get_Name(CATBSTR & oNameBSTR); \
      virtual HRESULT  __stdcall put_Name(const CATBSTR & iNameBSTR); \
      virtual HRESULT  __stdcall GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj); \
};



#define ENVTIEdeclare_CATIAAnnotationSet(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
virtual HRESULT __stdcall get_AnnotationFactory(CATIAAnnotationFactory *& oAFact); \
virtual HRESULT __stdcall get_TPSViewFactory(CATIATPSViewFactory *& oTPSViewFact); \
virtual HRESULT __stdcall get_CaptureFactory(CATIACaptureFactory *& opiCapFact); \
virtual HRESULT __stdcall get_Annotations(CATIAAnnotations *& oAnnots); \
virtual HRESULT __stdcall get_AnEmptyAnnotationsList(CATIAAnnotations *& oAnnots); \
virtual HRESULT __stdcall get_Standard(CATBSTR & oStandard); \
virtual HRESULT __stdcall ReadISODefaultProperties(CATSafeArrayVariant & oISODefaults, CATLONG & oCount); \
virtual HRESULT __stdcall get_Captures(CATIACaptures *& oCaptures); \
virtual HRESULT __stdcall get_KindOfSet(CATBSTR & oKindOfSet); \
virtual HRESULT __stdcall get_SwitchOn(CAT_VARIANT_BOOL & oDisplay); \
virtual HRESULT __stdcall put_SwitchOn(CAT_VARIANT_BOOL iDisplay); \
virtual HRESULT __stdcall get_TPSViews(CATIATPSViews *& oViews); \
virtual HRESULT __stdcall get_ActiveView(CATIATPSView *& oView); \
virtual HRESULT __stdcall put_ActiveView(CATIATPSView * iView); \
virtual HRESULT __stdcall get_AnnotationFactory2(CATIAAnnotationFactory2 *& oAFact); \
virtual HRESULT __stdcall get_AnnotationSetType(CatAnnotationSetType & oAnnotationSetType); \
virtual HRESULT __stdcall get_AnnotationSetPupose(CATBSTR & oAnnotationSetSpecification); \
virtual HRESULT __stdcall GlobalCopySetTo(CATIAPart * iDestinationPart, CATBSTR & oMessage); \
virtual HRESULT __stdcall GlobalCopySetToWithTransformation(CATIAPart * iDestinationPart, CATSafeArrayVariant & iTransfo, CATBSTR & oMessage); \
virtual HRESULT __stdcall ApplyViewReUseWhenCopySetTo(); \
virtual HRESULT __stdcall ApplyResultWithLinkWhenCopySetTo(); \
virtual HRESULT  __stdcall get_Application(CATIAApplication *& oApplication); \
virtual HRESULT  __stdcall get_Parent(CATBaseDispatch *& oParent); \
virtual HRESULT  __stdcall get_Name(CATBSTR & oNameBSTR); \
virtual HRESULT  __stdcall put_Name(const CATBSTR & iNameBSTR); \
virtual HRESULT  __stdcall GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj); \


#define ENVTIEdefine_CATIAAnnotationSet(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
HRESULT __stdcall  ENVTIEName::get_AnnotationFactory(CATIAAnnotationFactory *& oAFact) \
{ \
return (ENVTIECALL(CATIAAnnotationSet,ENVTIETypeLetter,ENVTIELetter)get_AnnotationFactory(oAFact)); \
} \
HRESULT __stdcall  ENVTIEName::get_TPSViewFactory(CATIATPSViewFactory *& oTPSViewFact) \
{ \
return (ENVTIECALL(CATIAAnnotationSet,ENVTIETypeLetter,ENVTIELetter)get_TPSViewFactory(oTPSViewFact)); \
} \
HRESULT __stdcall  ENVTIEName::get_CaptureFactory(CATIACaptureFactory *& opiCapFact) \
{ \
return (ENVTIECALL(CATIAAnnotationSet,ENVTIETypeLetter,ENVTIELetter)get_CaptureFactory(opiCapFact)); \
} \
HRESULT __stdcall  ENVTIEName::get_Annotations(CATIAAnnotations *& oAnnots) \
{ \
return (ENVTIECALL(CATIAAnnotationSet,ENVTIETypeLetter,ENVTIELetter)get_Annotations(oAnnots)); \
} \
HRESULT __stdcall  ENVTIEName::get_AnEmptyAnnotationsList(CATIAAnnotations *& oAnnots) \
{ \
return (ENVTIECALL(CATIAAnnotationSet,ENVTIETypeLetter,ENVTIELetter)get_AnEmptyAnnotationsList(oAnnots)); \
} \
HRESULT __stdcall  ENVTIEName::get_Standard(CATBSTR & oStandard) \
{ \
return (ENVTIECALL(CATIAAnnotationSet,ENVTIETypeLetter,ENVTIELetter)get_Standard(oStandard)); \
} \
HRESULT __stdcall  ENVTIEName::ReadISODefaultProperties(CATSafeArrayVariant & oISODefaults, CATLONG & oCount) \
{ \
return (ENVTIECALL(CATIAAnnotationSet,ENVTIETypeLetter,ENVTIELetter)ReadISODefaultProperties(oISODefaults,oCount)); \
} \
HRESULT __stdcall  ENVTIEName::get_Captures(CATIACaptures *& oCaptures) \
{ \
return (ENVTIECALL(CATIAAnnotationSet,ENVTIETypeLetter,ENVTIELetter)get_Captures(oCaptures)); \
} \
HRESULT __stdcall  ENVTIEName::get_KindOfSet(CATBSTR & oKindOfSet) \
{ \
return (ENVTIECALL(CATIAAnnotationSet,ENVTIETypeLetter,ENVTIELetter)get_KindOfSet(oKindOfSet)); \
} \
HRESULT __stdcall  ENVTIEName::get_SwitchOn(CAT_VARIANT_BOOL & oDisplay) \
{ \
return (ENVTIECALL(CATIAAnnotationSet,ENVTIETypeLetter,ENVTIELetter)get_SwitchOn(oDisplay)); \
} \
HRESULT __stdcall  ENVTIEName::put_SwitchOn(CAT_VARIANT_BOOL iDisplay) \
{ \
return (ENVTIECALL(CATIAAnnotationSet,ENVTIETypeLetter,ENVTIELetter)put_SwitchOn(iDisplay)); \
} \
HRESULT __stdcall  ENVTIEName::get_TPSViews(CATIATPSViews *& oViews) \
{ \
return (ENVTIECALL(CATIAAnnotationSet,ENVTIETypeLetter,ENVTIELetter)get_TPSViews(oViews)); \
} \
HRESULT __stdcall  ENVTIEName::get_ActiveView(CATIATPSView *& oView) \
{ \
return (ENVTIECALL(CATIAAnnotationSet,ENVTIETypeLetter,ENVTIELetter)get_ActiveView(oView)); \
} \
HRESULT __stdcall  ENVTIEName::put_ActiveView(CATIATPSView * iView) \
{ \
return (ENVTIECALL(CATIAAnnotationSet,ENVTIETypeLetter,ENVTIELetter)put_ActiveView(iView)); \
} \
HRESULT __stdcall  ENVTIEName::get_AnnotationFactory2(CATIAAnnotationFactory2 *& oAFact) \
{ \
return (ENVTIECALL(CATIAAnnotationSet,ENVTIETypeLetter,ENVTIELetter)get_AnnotationFactory2(oAFact)); \
} \
HRESULT __stdcall  ENVTIEName::get_AnnotationSetType(CatAnnotationSetType & oAnnotationSetType) \
{ \
return (ENVTIECALL(CATIAAnnotationSet,ENVTIETypeLetter,ENVTIELetter)get_AnnotationSetType(oAnnotationSetType)); \
} \
HRESULT __stdcall  ENVTIEName::get_AnnotationSetPupose(CATBSTR & oAnnotationSetSpecification) \
{ \
return (ENVTIECALL(CATIAAnnotationSet,ENVTIETypeLetter,ENVTIELetter)get_AnnotationSetPupose(oAnnotationSetSpecification)); \
} \
HRESULT __stdcall  ENVTIEName::GlobalCopySetTo(CATIAPart * iDestinationPart, CATBSTR & oMessage) \
{ \
return (ENVTIECALL(CATIAAnnotationSet,ENVTIETypeLetter,ENVTIELetter)GlobalCopySetTo(iDestinationPart,oMessage)); \
} \
HRESULT __stdcall  ENVTIEName::GlobalCopySetToWithTransformation(CATIAPart * iDestinationPart, CATSafeArrayVariant & iTransfo, CATBSTR & oMessage) \
{ \
return (ENVTIECALL(CATIAAnnotationSet,ENVTIETypeLetter,ENVTIELetter)GlobalCopySetToWithTransformation(iDestinationPart,iTransfo,oMessage)); \
} \
HRESULT __stdcall  ENVTIEName::ApplyViewReUseWhenCopySetTo() \
{ \
return (ENVTIECALL(CATIAAnnotationSet,ENVTIETypeLetter,ENVTIELetter)ApplyViewReUseWhenCopySetTo()); \
} \
HRESULT __stdcall  ENVTIEName::ApplyResultWithLinkWhenCopySetTo() \
{ \
return (ENVTIECALL(CATIAAnnotationSet,ENVTIETypeLetter,ENVTIELetter)ApplyResultWithLinkWhenCopySetTo()); \
} \
HRESULT  __stdcall  ENVTIEName::get_Application(CATIAApplication *& oApplication) \
{ \
return (ENVTIECALL(CATIAAnnotationSet,ENVTIETypeLetter,ENVTIELetter)get_Application(oApplication)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Parent(CATBaseDispatch *& oParent) \
{ \
return (ENVTIECALL(CATIAAnnotationSet,ENVTIETypeLetter,ENVTIELetter)get_Parent(oParent)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Name(CATBSTR & oNameBSTR) \
{ \
return (ENVTIECALL(CATIAAnnotationSet,ENVTIETypeLetter,ENVTIELetter)get_Name(oNameBSTR)); \
} \
HRESULT  __stdcall  ENVTIEName::put_Name(const CATBSTR & iNameBSTR) \
{ \
return (ENVTIECALL(CATIAAnnotationSet,ENVTIETypeLetter,ENVTIELetter)put_Name(iNameBSTR)); \
} \
HRESULT  __stdcall  ENVTIEName::GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj) \
{ \
return (ENVTIECALL(CATIAAnnotationSet,ENVTIETypeLetter,ENVTIELetter)GetItem(IDName,RealObj)); \
} \


/* Name of the TIE class */
#define class_TIE_CATIAAnnotationSet(classe)    TIECATIAAnnotationSet##classe


/* Common methods inside a TIE */
#define common_TIE_CATIAAnnotationSet(classe) \
 \
 \
/* Static initialization */ \
CATDefineCommonTIEMembers(CATIAAnnotationSet, classe) \
 \
 \
CATImplementTIEMethods(CATIAAnnotationSet, classe) \
CATImplementIUnknownMethodsForCATBaseUnknownTIE(CATIAAnnotationSet, classe, 2) \
CATImplementIDispatchMethodsForCATBaseUnknownTIE(CATIAAnnotationSet, classe) \
CATImplementCATBaseUnknownMethodsForTIE(CATIAAnnotationSet, classe) \
 \
HRESULT __stdcall  TIECATIAAnnotationSet##classe::get_AnnotationFactory(CATIAAnnotationFactory *& oAFact) \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_AnnotationFactory(oAFact)); \
} \
HRESULT __stdcall  TIECATIAAnnotationSet##classe::get_TPSViewFactory(CATIATPSViewFactory *& oTPSViewFact) \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_TPSViewFactory(oTPSViewFact)); \
} \
HRESULT __stdcall  TIECATIAAnnotationSet##classe::get_CaptureFactory(CATIACaptureFactory *& opiCapFact) \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_CaptureFactory(opiCapFact)); \
} \
HRESULT __stdcall  TIECATIAAnnotationSet##classe::get_Annotations(CATIAAnnotations *& oAnnots) \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Annotations(oAnnots)); \
} \
HRESULT __stdcall  TIECATIAAnnotationSet##classe::get_AnEmptyAnnotationsList(CATIAAnnotations *& oAnnots) \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_AnEmptyAnnotationsList(oAnnots)); \
} \
HRESULT __stdcall  TIECATIAAnnotationSet##classe::get_Standard(CATBSTR & oStandard) \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Standard(oStandard)); \
} \
HRESULT __stdcall  TIECATIAAnnotationSet##classe::ReadISODefaultProperties(CATSafeArrayVariant & oISODefaults, CATLONG & oCount) \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->ReadISODefaultProperties(oISODefaults,oCount)); \
} \
HRESULT __stdcall  TIECATIAAnnotationSet##classe::get_Captures(CATIACaptures *& oCaptures) \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Captures(oCaptures)); \
} \
HRESULT __stdcall  TIECATIAAnnotationSet##classe::get_KindOfSet(CATBSTR & oKindOfSet) \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_KindOfSet(oKindOfSet)); \
} \
HRESULT __stdcall  TIECATIAAnnotationSet##classe::get_SwitchOn(CAT_VARIANT_BOOL & oDisplay) \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_SwitchOn(oDisplay)); \
} \
HRESULT __stdcall  TIECATIAAnnotationSet##classe::put_SwitchOn(CAT_VARIANT_BOOL iDisplay) \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_SwitchOn(iDisplay)); \
} \
HRESULT __stdcall  TIECATIAAnnotationSet##classe::get_TPSViews(CATIATPSViews *& oViews) \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_TPSViews(oViews)); \
} \
HRESULT __stdcall  TIECATIAAnnotationSet##classe::get_ActiveView(CATIATPSView *& oView) \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_ActiveView(oView)); \
} \
HRESULT __stdcall  TIECATIAAnnotationSet##classe::put_ActiveView(CATIATPSView * iView) \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_ActiveView(iView)); \
} \
HRESULT __stdcall  TIECATIAAnnotationSet##classe::get_AnnotationFactory2(CATIAAnnotationFactory2 *& oAFact) \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_AnnotationFactory2(oAFact)); \
} \
HRESULT __stdcall  TIECATIAAnnotationSet##classe::get_AnnotationSetType(CatAnnotationSetType & oAnnotationSetType) \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_AnnotationSetType(oAnnotationSetType)); \
} \
HRESULT __stdcall  TIECATIAAnnotationSet##classe::get_AnnotationSetPupose(CATBSTR & oAnnotationSetSpecification) \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_AnnotationSetPupose(oAnnotationSetSpecification)); \
} \
HRESULT __stdcall  TIECATIAAnnotationSet##classe::GlobalCopySetTo(CATIAPart * iDestinationPart, CATBSTR & oMessage) \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GlobalCopySetTo(iDestinationPart,oMessage)); \
} \
HRESULT __stdcall  TIECATIAAnnotationSet##classe::GlobalCopySetToWithTransformation(CATIAPart * iDestinationPart, CATSafeArrayVariant & iTransfo, CATBSTR & oMessage) \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GlobalCopySetToWithTransformation(iDestinationPart,iTransfo,oMessage)); \
} \
HRESULT __stdcall  TIECATIAAnnotationSet##classe::ApplyViewReUseWhenCopySetTo() \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->ApplyViewReUseWhenCopySetTo()); \
} \
HRESULT __stdcall  TIECATIAAnnotationSet##classe::ApplyResultWithLinkWhenCopySetTo() \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->ApplyResultWithLinkWhenCopySetTo()); \
} \
HRESULT  __stdcall  TIECATIAAnnotationSet##classe::get_Application(CATIAApplication *& oApplication) \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Application(oApplication)); \
} \
HRESULT  __stdcall  TIECATIAAnnotationSet##classe::get_Parent(CATBaseDispatch *& oParent) \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Parent(oParent)); \
} \
HRESULT  __stdcall  TIECATIAAnnotationSet##classe::get_Name(CATBSTR & oNameBSTR) \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Name(oNameBSTR)); \
} \
HRESULT  __stdcall  TIECATIAAnnotationSet##classe::put_Name(const CATBSTR & iNameBSTR) \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_Name(iNameBSTR)); \
} \
HRESULT  __stdcall  TIECATIAAnnotationSet##classe::GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj) \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetItem(IDName,RealObj)); \
} \



/* Macro used to link an implementation with an interface */
#define TIE_CATIAAnnotationSet(classe) \
 \
 \
declare_TIE_CATIAAnnotationSet(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIAAnnotationSet##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIAAnnotationSet,"CATIAAnnotationSet",CATIAAnnotationSet::MetaObject(),classe::MetaObject(),TIE); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIAAnnotationSet(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIECreation(CATIAAnnotationSet, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIAAnnotationSet##classe(classe::MetaObject(),CATIAAnnotationSet::MetaObject(),(void *)CreateTIECATIAAnnotationSet##classe)



/* Macro used to link an implementation with an interface */
/* This TIE is chained on the implementation object */
#define TIEchain_CATIAAnnotationSet(classe) \
 \
 \
declare_TIE_CATIAAnnotationSet(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIAAnnotationSet##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIAAnnotationSet,"CATIAAnnotationSet",CATIAAnnotationSet::MetaObject(),classe::MetaObject(),TIEchain); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIAAnnotationSet(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIEchainCreation(CATIAAnnotationSet, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIAAnnotationSet##classe(classe::MetaObject(),CATIAAnnotationSet::MetaObject(),(void *)CreateTIECATIAAnnotationSet##classe)


/* Macro to switch between BOA and TIE at build time */ 
#ifdef CATSYS_BOA_IS_TIE
#define BOA_CATIAAnnotationSet(classe) TIE_CATIAAnnotationSet(classe)
#else
#define BOA_CATIAAnnotationSet(classe) CATImplementBOA(CATIAAnnotationSet, classe)
#endif

#endif
