#ifndef __TIE_CATICciSpliceZone
#define __TIE_CATICciSpliceZone

#include <string.h>
#include "CATBaseUnknown.h"
#include "CATMetaClass.h"
#include "CATMacForTie.h"
#include "CATICciSpliceZone.h"
#include "JS0DSPA.h"


#ifdef _WINDOWS_SOURCE
#define Exported __declspec(dllexport)
#define Imported __declspec(dllimport)
#else
#define Exported 
#define Imported 
#endif


/* To link an implementation with the interface CATICciSpliceZone */
#define declare_TIE_CATICciSpliceZone(classe) \
 \
 \
class TIECATICciSpliceZone##classe : public CATICciSpliceZone \
{ \
   private: \
      CATDeclareCommonTIEMembers \
   public: \
      CATDeclareTIEMethods(CATICciSpliceZone, classe) \
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



#define ENVTIEdeclare_CATICciSpliceZone(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
virtual HRESULT GetSpliceZoneType(CATCciSpliceZoneType & oType) ; \
virtual HRESULT GetReferenceShell(CATIMmiMechanicalFeature_var & oRefShell) ; \
virtual HRESULT SetReferenceShell(const CATIMmiMechanicalFeature_var & iRefShell) ; \
virtual HRESULT GetCompositesGeometry(CATICciCompositesGeometry_var & oGeometry) ; \
virtual HRESULT GetHighlightShell (CATIMmiMechanicalFeature_var & oShell) ; \
virtual HRESULT CreateHighlightShell (CATIMmiMechanicalFeature_var & oShell) ; \
virtual HRESULT RemoveHighlightShell() ; \
virtual HRESULT GetPliesAppliedToSpliceZone( CATListValCATBaseUnknown_var& oListOfPlies) ; \
virtual HRESULT SetPliesAppliedToSpliceZone( const CATListValCATBaseUnknown_var& iListOfPlies) ; \


#define ENVTIEdefine_CATICciSpliceZone(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
HRESULT  ENVTIEName::GetSpliceZoneType(CATCciSpliceZoneType & oType)  \
{ \
return (ENVTIECALL(CATICciSpliceZone,ENVTIETypeLetter,ENVTIELetter)GetSpliceZoneType(oType)); \
} \
HRESULT  ENVTIEName::GetReferenceShell(CATIMmiMechanicalFeature_var & oRefShell)  \
{ \
return (ENVTIECALL(CATICciSpliceZone,ENVTIETypeLetter,ENVTIELetter)GetReferenceShell(oRefShell)); \
} \
HRESULT  ENVTIEName::SetReferenceShell(const CATIMmiMechanicalFeature_var & iRefShell)  \
{ \
return (ENVTIECALL(CATICciSpliceZone,ENVTIETypeLetter,ENVTIELetter)SetReferenceShell(iRefShell)); \
} \
HRESULT  ENVTIEName::GetCompositesGeometry(CATICciCompositesGeometry_var & oGeometry)  \
{ \
return (ENVTIECALL(CATICciSpliceZone,ENVTIETypeLetter,ENVTIELetter)GetCompositesGeometry(oGeometry)); \
} \
HRESULT  ENVTIEName::GetHighlightShell (CATIMmiMechanicalFeature_var & oShell)  \
{ \
return (ENVTIECALL(CATICciSpliceZone,ENVTIETypeLetter,ENVTIELetter)GetHighlightShell (oShell)); \
} \
HRESULT  ENVTIEName::CreateHighlightShell (CATIMmiMechanicalFeature_var & oShell)  \
{ \
return (ENVTIECALL(CATICciSpliceZone,ENVTIETypeLetter,ENVTIELetter)CreateHighlightShell (oShell)); \
} \
HRESULT  ENVTIEName::RemoveHighlightShell()  \
{ \
return (ENVTIECALL(CATICciSpliceZone,ENVTIETypeLetter,ENVTIELetter)RemoveHighlightShell()); \
} \
HRESULT  ENVTIEName::GetPliesAppliedToSpliceZone( CATListValCATBaseUnknown_var& oListOfPlies)  \
{ \
return (ENVTIECALL(CATICciSpliceZone,ENVTIETypeLetter,ENVTIELetter)GetPliesAppliedToSpliceZone(oListOfPlies)); \
} \
HRESULT  ENVTIEName::SetPliesAppliedToSpliceZone( const CATListValCATBaseUnknown_var& iListOfPlies)  \
{ \
return (ENVTIECALL(CATICciSpliceZone,ENVTIETypeLetter,ENVTIELetter)SetPliesAppliedToSpliceZone(iListOfPlies)); \
} \


/* Name of the TIE class */
#define class_TIE_CATICciSpliceZone(classe)    TIECATICciSpliceZone##classe


/* Common methods inside a TIE */
#define common_TIE_CATICciSpliceZone(classe) \
 \
 \
/* Static initialization */ \
CATDefineCommonTIEMembers(CATICciSpliceZone, classe) \
 \
 \
CATImplementTIEMethods(CATICciSpliceZone, classe) \
CATImplementIUnknownMethodsForCATBaseUnknownTIE(CATICciSpliceZone, classe, 1) \
CATImplementIDispatchMethodsForCATBaseUnknownTIE(CATICciSpliceZone, classe) \
CATImplementCATBaseUnknownMethodsForTIE(CATICciSpliceZone, classe) \
 \
HRESULT  TIECATICciSpliceZone##classe::GetSpliceZoneType(CATCciSpliceZoneType & oType)  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetSpliceZoneType(oType)); \
} \
HRESULT  TIECATICciSpliceZone##classe::GetReferenceShell(CATIMmiMechanicalFeature_var & oRefShell)  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetReferenceShell(oRefShell)); \
} \
HRESULT  TIECATICciSpliceZone##classe::SetReferenceShell(const CATIMmiMechanicalFeature_var & iRefShell)  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetReferenceShell(iRefShell)); \
} \
HRESULT  TIECATICciSpliceZone##classe::GetCompositesGeometry(CATICciCompositesGeometry_var & oGeometry)  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetCompositesGeometry(oGeometry)); \
} \
HRESULT  TIECATICciSpliceZone##classe::GetHighlightShell (CATIMmiMechanicalFeature_var & oShell)  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetHighlightShell (oShell)); \
} \
HRESULT  TIECATICciSpliceZone##classe::CreateHighlightShell (CATIMmiMechanicalFeature_var & oShell)  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->CreateHighlightShell (oShell)); \
} \
HRESULT  TIECATICciSpliceZone##classe::RemoveHighlightShell()  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->RemoveHighlightShell()); \
} \
HRESULT  TIECATICciSpliceZone##classe::GetPliesAppliedToSpliceZone( CATListValCATBaseUnknown_var& oListOfPlies)  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetPliesAppliedToSpliceZone(oListOfPlies)); \
} \
HRESULT  TIECATICciSpliceZone##classe::SetPliesAppliedToSpliceZone( const CATListValCATBaseUnknown_var& iListOfPlies)  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetPliesAppliedToSpliceZone(iListOfPlies)); \
} \



/* Macro used to link an implementation with an interface */
#define TIE_CATICciSpliceZone(classe) \
 \
 \
declare_TIE_CATICciSpliceZone(classe) \
 \
 \
CATMetaClass * __stdcall TIECATICciSpliceZone##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATICciSpliceZone,"CATICciSpliceZone",CATICciSpliceZone::MetaObject(),classe::MetaObject(),TIE); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATICciSpliceZone(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIECreation(CATICciSpliceZone, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATICciSpliceZone##classe(classe::MetaObject(),CATICciSpliceZone::MetaObject(),(void *)CreateTIECATICciSpliceZone##classe)



/* Macro used to link an implementation with an interface */
/* This TIE is chained on the implementation object */
#define TIEchain_CATICciSpliceZone(classe) \
 \
 \
declare_TIE_CATICciSpliceZone(classe) \
 \
 \
CATMetaClass * __stdcall TIECATICciSpliceZone##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATICciSpliceZone,"CATICciSpliceZone",CATICciSpliceZone::MetaObject(),classe::MetaObject(),TIEchain); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATICciSpliceZone(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIEchainCreation(CATICciSpliceZone, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATICciSpliceZone##classe(classe::MetaObject(),CATICciSpliceZone::MetaObject(),(void *)CreateTIECATICciSpliceZone##classe)


/* Macro to switch between BOA and TIE at build time */ 
#ifdef CATSYS_BOA_IS_TIE
#define BOA_CATICciSpliceZone(classe) TIE_CATICciSpliceZone(classe)
#else
#define BOA_CATICciSpliceZone(classe) CATImplementBOA(CATICciSpliceZone, classe)
#endif

#endif
