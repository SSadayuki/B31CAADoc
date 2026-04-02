#ifndef __TIE_CATICciNoSpliceZone
#define __TIE_CATICciNoSpliceZone

#include <string.h>
#include "CATBaseUnknown.h"
#include "CATMetaClass.h"
#include "CATMacForTie.h"
#include "CATICciNoSpliceZone.h"
#include "JS0DSPA.h"


#ifdef _WINDOWS_SOURCE
#define Exported __declspec(dllexport)
#define Imported __declspec(dllimport)
#else
#define Exported 
#define Imported 
#endif


/* To link an implementation with the interface CATICciNoSpliceZone */
#define declare_TIE_CATICciNoSpliceZone(classe) \
 \
 \
class TIECATICciNoSpliceZone##classe : public CATICciNoSpliceZone \
{ \
   private: \
      CATDeclareCommonTIEMembers \
   public: \
      CATDeclareTIEMethods(CATICciNoSpliceZone, classe) \
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



#define ENVTIEdeclare_CATICciNoSpliceZone(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
virtual HRESULT GetSpliceZoneType(CATCciSpliceZoneType & oType) ; \
virtual HRESULT GetReferenceShell(CATIMmiMechanicalFeature_var & oRefShell) ; \
virtual HRESULT SetReferenceShell(const CATIMmiMechanicalFeature_var & iRefShell) ; \
virtual HRESULT GetCompositesGeometry(CATICciCompositesGeometry_var & oGeometry) ; \
virtual HRESULT GetHighlightShell (CATIMmiMechanicalFeature_var & oShell) ; \
virtual HRESULT CreateHighlightShell (CATIMmiMechanicalFeature_var & oShell) ; \
virtual HRESULT RemoveHighlightShell() ; \
virtual HRESULT GetPliesAppliedToSpliceZone( CATListValCATBaseUnknown_var& oListOfPlies) ; \
virtual HRESULT SetPliesAppliedToSpliceZone( const CATListValCATBaseUnknown_var& iListOfPlies) ; \


#define ENVTIEdefine_CATICciNoSpliceZone(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
HRESULT  ENVTIEName::GetSpliceZoneType(CATCciSpliceZoneType & oType)  \
{ \
return (ENVTIECALL(CATICciNoSpliceZone,ENVTIETypeLetter,ENVTIELetter)GetSpliceZoneType(oType)); \
} \
HRESULT  ENVTIEName::GetReferenceShell(CATIMmiMechanicalFeature_var & oRefShell)  \
{ \
return (ENVTIECALL(CATICciNoSpliceZone,ENVTIETypeLetter,ENVTIELetter)GetReferenceShell(oRefShell)); \
} \
HRESULT  ENVTIEName::SetReferenceShell(const CATIMmiMechanicalFeature_var & iRefShell)  \
{ \
return (ENVTIECALL(CATICciNoSpliceZone,ENVTIETypeLetter,ENVTIELetter)SetReferenceShell(iRefShell)); \
} \
HRESULT  ENVTIEName::GetCompositesGeometry(CATICciCompositesGeometry_var & oGeometry)  \
{ \
return (ENVTIECALL(CATICciNoSpliceZone,ENVTIETypeLetter,ENVTIELetter)GetCompositesGeometry(oGeometry)); \
} \
HRESULT  ENVTIEName::GetHighlightShell (CATIMmiMechanicalFeature_var & oShell)  \
{ \
return (ENVTIECALL(CATICciNoSpliceZone,ENVTIETypeLetter,ENVTIELetter)GetHighlightShell (oShell)); \
} \
HRESULT  ENVTIEName::CreateHighlightShell (CATIMmiMechanicalFeature_var & oShell)  \
{ \
return (ENVTIECALL(CATICciNoSpliceZone,ENVTIETypeLetter,ENVTIELetter)CreateHighlightShell (oShell)); \
} \
HRESULT  ENVTIEName::RemoveHighlightShell()  \
{ \
return (ENVTIECALL(CATICciNoSpliceZone,ENVTIETypeLetter,ENVTIELetter)RemoveHighlightShell()); \
} \
HRESULT  ENVTIEName::GetPliesAppliedToSpliceZone( CATListValCATBaseUnknown_var& oListOfPlies)  \
{ \
return (ENVTIECALL(CATICciNoSpliceZone,ENVTIETypeLetter,ENVTIELetter)GetPliesAppliedToSpliceZone(oListOfPlies)); \
} \
HRESULT  ENVTIEName::SetPliesAppliedToSpliceZone( const CATListValCATBaseUnknown_var& iListOfPlies)  \
{ \
return (ENVTIECALL(CATICciNoSpliceZone,ENVTIETypeLetter,ENVTIELetter)SetPliesAppliedToSpliceZone(iListOfPlies)); \
} \


/* Name of the TIE class */
#define class_TIE_CATICciNoSpliceZone(classe)    TIECATICciNoSpliceZone##classe


/* Common methods inside a TIE */
#define common_TIE_CATICciNoSpliceZone(classe) \
 \
 \
/* Static initialization */ \
CATDefineCommonTIEMembers(CATICciNoSpliceZone, classe) \
 \
 \
CATImplementTIEMethods(CATICciNoSpliceZone, classe) \
CATImplementIUnknownMethodsForCATBaseUnknownTIE(CATICciNoSpliceZone, classe, 1) \
CATImplementIDispatchMethodsForCATBaseUnknownTIE(CATICciNoSpliceZone, classe) \
CATImplementCATBaseUnknownMethodsForTIE(CATICciNoSpliceZone, classe) \
 \
HRESULT  TIECATICciNoSpliceZone##classe::GetSpliceZoneType(CATCciSpliceZoneType & oType)  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetSpliceZoneType(oType)); \
} \
HRESULT  TIECATICciNoSpliceZone##classe::GetReferenceShell(CATIMmiMechanicalFeature_var & oRefShell)  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetReferenceShell(oRefShell)); \
} \
HRESULT  TIECATICciNoSpliceZone##classe::SetReferenceShell(const CATIMmiMechanicalFeature_var & iRefShell)  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetReferenceShell(iRefShell)); \
} \
HRESULT  TIECATICciNoSpliceZone##classe::GetCompositesGeometry(CATICciCompositesGeometry_var & oGeometry)  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetCompositesGeometry(oGeometry)); \
} \
HRESULT  TIECATICciNoSpliceZone##classe::GetHighlightShell (CATIMmiMechanicalFeature_var & oShell)  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetHighlightShell (oShell)); \
} \
HRESULT  TIECATICciNoSpliceZone##classe::CreateHighlightShell (CATIMmiMechanicalFeature_var & oShell)  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->CreateHighlightShell (oShell)); \
} \
HRESULT  TIECATICciNoSpliceZone##classe::RemoveHighlightShell()  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->RemoveHighlightShell()); \
} \
HRESULT  TIECATICciNoSpliceZone##classe::GetPliesAppliedToSpliceZone( CATListValCATBaseUnknown_var& oListOfPlies)  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetPliesAppliedToSpliceZone(oListOfPlies)); \
} \
HRESULT  TIECATICciNoSpliceZone##classe::SetPliesAppliedToSpliceZone( const CATListValCATBaseUnknown_var& iListOfPlies)  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetPliesAppliedToSpliceZone(iListOfPlies)); \
} \



/* Macro used to link an implementation with an interface */
#define TIE_CATICciNoSpliceZone(classe) \
 \
 \
declare_TIE_CATICciNoSpliceZone(classe) \
 \
 \
CATMetaClass * __stdcall TIECATICciNoSpliceZone##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATICciNoSpliceZone,"CATICciNoSpliceZone",CATICciNoSpliceZone::MetaObject(),classe::MetaObject(),TIE); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATICciNoSpliceZone(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIECreation(CATICciNoSpliceZone, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATICciNoSpliceZone##classe(classe::MetaObject(),CATICciNoSpliceZone::MetaObject(),(void *)CreateTIECATICciNoSpliceZone##classe)



/* Macro used to link an implementation with an interface */
/* This TIE is chained on the implementation object */
#define TIEchain_CATICciNoSpliceZone(classe) \
 \
 \
declare_TIE_CATICciNoSpliceZone(classe) \
 \
 \
CATMetaClass * __stdcall TIECATICciNoSpliceZone##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATICciNoSpliceZone,"CATICciNoSpliceZone",CATICciNoSpliceZone::MetaObject(),classe::MetaObject(),TIEchain); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATICciNoSpliceZone(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIEchainCreation(CATICciNoSpliceZone, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATICciNoSpliceZone##classe(classe::MetaObject(),CATICciNoSpliceZone::MetaObject(),(void *)CreateTIECATICciNoSpliceZone##classe)


/* Macro to switch between BOA and TIE at build time */ 
#ifdef CATSYS_BOA_IS_TIE
#define BOA_CATICciNoSpliceZone(classe) TIE_CATICciNoSpliceZone(classe)
#else
#define BOA_CATICciNoSpliceZone(classe) CATImplementBOA(CATICciNoSpliceZone, classe)
#endif

#endif
