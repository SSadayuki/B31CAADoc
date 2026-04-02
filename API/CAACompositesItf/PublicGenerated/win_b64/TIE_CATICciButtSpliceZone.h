#ifndef __TIE_CATICciButtSpliceZone
#define __TIE_CATICciButtSpliceZone

#include <string.h>
#include "CATBaseUnknown.h"
#include "CATMetaClass.h"
#include "CATMacForTie.h"
#include "CATICciButtSpliceZone.h"
#include "JS0DSPA.h"


#ifdef _WINDOWS_SOURCE
#define Exported __declspec(dllexport)
#define Imported __declspec(dllimport)
#else
#define Exported 
#define Imported 
#endif


/* To link an implementation with the interface CATICciButtSpliceZone */
#define declare_TIE_CATICciButtSpliceZone(classe) \
 \
 \
class TIECATICciButtSpliceZone##classe : public CATICciButtSpliceZone \
{ \
   private: \
      CATDeclareCommonTIEMembers \
   public: \
      CATDeclareTIEMethods(CATICciButtSpliceZone, classe) \
      CATDeclareIUnknownMethodsForCATBaseUnknownTIE \
      CATDeclareIDispatchMethodsForCATBaseUnknownTIE \
      CATDeclareCATBaseUnknownMethodsForTIE \
      virtual HRESULT GetSpliceZoneType(CATCciSpliceZoneType & oType) ; \
      virtual HRESULT GetReferenceShell(CATIMmiMechanicalFeature_var & oRefShell) ; \
      virtual HRESULT SetReferenceShell(const CATIMmiMechanicalFeature_var & iRefShell) ; \
      virtual HRESULT GetCompositesGeometry(CATICciCompositesGeometry_var & oGeometry) ; \
      virtual HRESULT GetHighlightShell (CATIMmiMechanicalFeature_var & oShell) ; \
      virtual HRESULT CreateHighlightShell (CATIMmiMechanicalFeature_var & oShell) ; \
      virtual HRESULT RemoveHighlightShell() ; \
      virtual HRESULT GetPliesAppliedToSpliceZone( CATListValCATBaseUnknown_var& oListOfPlies) ; \
      virtual HRESULT SetPliesAppliedToSpliceZone( const CATListValCATBaseUnknown_var& iListOfPlies) ; \
};



#define ENVTIEdeclare_CATICciButtSpliceZone(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
virtual HRESULT GetSpliceZoneType(CATCciSpliceZoneType & oType) ; \
virtual HRESULT GetReferenceShell(CATIMmiMechanicalFeature_var & oRefShell) ; \
virtual HRESULT SetReferenceShell(const CATIMmiMechanicalFeature_var & iRefShell) ; \
virtual HRESULT GetCompositesGeometry(CATICciCompositesGeometry_var & oGeometry) ; \
virtual HRESULT GetHighlightShell (CATIMmiMechanicalFeature_var & oShell) ; \
virtual HRESULT CreateHighlightShell (CATIMmiMechanicalFeature_var & oShell) ; \
virtual HRESULT RemoveHighlightShell() ; \
virtual HRESULT GetPliesAppliedToSpliceZone( CATListValCATBaseUnknown_var& oListOfPlies) ; \
virtual HRESULT SetPliesAppliedToSpliceZone( const CATListValCATBaseUnknown_var& iListOfPlies) ; \


#define ENVTIEdefine_CATICciButtSpliceZone(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
HRESULT  ENVTIEName::GetSpliceZoneType(CATCciSpliceZoneType & oType)  \
{ \
return (ENVTIECALL(CATICciButtSpliceZone,ENVTIETypeLetter,ENVTIELetter)GetSpliceZoneType(oType)); \
} \
HRESULT  ENVTIEName::GetReferenceShell(CATIMmiMechanicalFeature_var & oRefShell)  \
{ \
return (ENVTIECALL(CATICciButtSpliceZone,ENVTIETypeLetter,ENVTIELetter)GetReferenceShell(oRefShell)); \
} \
HRESULT  ENVTIEName::SetReferenceShell(const CATIMmiMechanicalFeature_var & iRefShell)  \
{ \
return (ENVTIECALL(CATICciButtSpliceZone,ENVTIETypeLetter,ENVTIELetter)SetReferenceShell(iRefShell)); \
} \
HRESULT  ENVTIEName::GetCompositesGeometry(CATICciCompositesGeometry_var & oGeometry)  \
{ \
return (ENVTIECALL(CATICciButtSpliceZone,ENVTIETypeLetter,ENVTIELetter)GetCompositesGeometry(oGeometry)); \
} \
HRESULT  ENVTIEName::GetHighlightShell (CATIMmiMechanicalFeature_var & oShell)  \
{ \
return (ENVTIECALL(CATICciButtSpliceZone,ENVTIETypeLetter,ENVTIELetter)GetHighlightShell (oShell)); \
} \
HRESULT  ENVTIEName::CreateHighlightShell (CATIMmiMechanicalFeature_var & oShell)  \
{ \
return (ENVTIECALL(CATICciButtSpliceZone,ENVTIETypeLetter,ENVTIELetter)CreateHighlightShell (oShell)); \
} \
HRESULT  ENVTIEName::RemoveHighlightShell()  \
{ \
return (ENVTIECALL(CATICciButtSpliceZone,ENVTIETypeLetter,ENVTIELetter)RemoveHighlightShell()); \
} \
HRESULT  ENVTIEName::GetPliesAppliedToSpliceZone( CATListValCATBaseUnknown_var& oListOfPlies)  \
{ \
return (ENVTIECALL(CATICciButtSpliceZone,ENVTIETypeLetter,ENVTIELetter)GetPliesAppliedToSpliceZone(oListOfPlies)); \
} \
HRESULT  ENVTIEName::SetPliesAppliedToSpliceZone( const CATListValCATBaseUnknown_var& iListOfPlies)  \
{ \
return (ENVTIECALL(CATICciButtSpliceZone,ENVTIETypeLetter,ENVTIELetter)SetPliesAppliedToSpliceZone(iListOfPlies)); \
} \


/* Name of the TIE class */
#define class_TIE_CATICciButtSpliceZone(classe)    TIECATICciButtSpliceZone##classe


/* Common methods inside a TIE */
#define common_TIE_CATICciButtSpliceZone(classe) \
 \
 \
/* Static initialization */ \
CATDefineCommonTIEMembers(CATICciButtSpliceZone, classe) \
 \
 \
CATImplementTIEMethods(CATICciButtSpliceZone, classe) \
CATImplementIUnknownMethodsForCATBaseUnknownTIE(CATICciButtSpliceZone, classe, 1) \
CATImplementIDispatchMethodsForCATBaseUnknownTIE(CATICciButtSpliceZone, classe) \
CATImplementCATBaseUnknownMethodsForTIE(CATICciButtSpliceZone, classe) \
 \
HRESULT  TIECATICciButtSpliceZone##classe::GetSpliceZoneType(CATCciSpliceZoneType & oType)  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetSpliceZoneType(oType)); \
} \
HRESULT  TIECATICciButtSpliceZone##classe::GetReferenceShell(CATIMmiMechanicalFeature_var & oRefShell)  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetReferenceShell(oRefShell)); \
} \
HRESULT  TIECATICciButtSpliceZone##classe::SetReferenceShell(const CATIMmiMechanicalFeature_var & iRefShell)  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetReferenceShell(iRefShell)); \
} \
HRESULT  TIECATICciButtSpliceZone##classe::GetCompositesGeometry(CATICciCompositesGeometry_var & oGeometry)  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetCompositesGeometry(oGeometry)); \
} \
HRESULT  TIECATICciButtSpliceZone##classe::GetHighlightShell (CATIMmiMechanicalFeature_var & oShell)  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetHighlightShell (oShell)); \
} \
HRESULT  TIECATICciButtSpliceZone##classe::CreateHighlightShell (CATIMmiMechanicalFeature_var & oShell)  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->CreateHighlightShell (oShell)); \
} \
HRESULT  TIECATICciButtSpliceZone##classe::RemoveHighlightShell()  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->RemoveHighlightShell()); \
} \
HRESULT  TIECATICciButtSpliceZone##classe::GetPliesAppliedToSpliceZone( CATListValCATBaseUnknown_var& oListOfPlies)  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetPliesAppliedToSpliceZone(oListOfPlies)); \
} \
HRESULT  TIECATICciButtSpliceZone##classe::SetPliesAppliedToSpliceZone( const CATListValCATBaseUnknown_var& iListOfPlies)  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetPliesAppliedToSpliceZone(iListOfPlies)); \
} \



/* Macro used to link an implementation with an interface */
#define TIE_CATICciButtSpliceZone(classe) \
 \
 \
declare_TIE_CATICciButtSpliceZone(classe) \
 \
 \
CATMetaClass * __stdcall TIECATICciButtSpliceZone##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATICciButtSpliceZone,"CATICciButtSpliceZone",CATICciButtSpliceZone::MetaObject(),classe::MetaObject(),TIE); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATICciButtSpliceZone(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIECreation(CATICciButtSpliceZone, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATICciButtSpliceZone##classe(classe::MetaObject(),CATICciButtSpliceZone::MetaObject(),(void *)CreateTIECATICciButtSpliceZone##classe)



/* Macro used to link an implementation with an interface */
/* This TIE is chained on the implementation object */
#define TIEchain_CATICciButtSpliceZone(classe) \
 \
 \
declare_TIE_CATICciButtSpliceZone(classe) \
 \
 \
CATMetaClass * __stdcall TIECATICciButtSpliceZone##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATICciButtSpliceZone,"CATICciButtSpliceZone",CATICciButtSpliceZone::MetaObject(),classe::MetaObject(),TIEchain); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATICciButtSpliceZone(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIEchainCreation(CATICciButtSpliceZone, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATICciButtSpliceZone##classe(classe::MetaObject(),CATICciButtSpliceZone::MetaObject(),(void *)CreateTIECATICciButtSpliceZone##classe)


/* Macro to switch between BOA and TIE at build time */ 
#ifdef CATSYS_BOA_IS_TIE
#define BOA_CATICciButtSpliceZone(classe) TIE_CATICciButtSpliceZone(classe)
#else
#define BOA_CATICciButtSpliceZone(classe) CATImplementBOA(CATICciButtSpliceZone, classe)
#endif

#endif
