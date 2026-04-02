#ifndef __TIE_CATIGSMUseSurfaceSimplification
#define __TIE_CATIGSMUseSurfaceSimplification

#include <string.h>
#include "CATBaseUnknown.h"
#include "CATMetaClass.h"
#include "CATMacForTie.h"
#include "CATIGSMUseSurfaceSimplification.h"
#include "JS0DSPA.h"


#ifdef _WINDOWS_SOURCE
#define Exported __declspec(dllexport)
#define Imported __declspec(dllimport)
#else
#define Exported 
#define Imported 
#endif


/* To link an implementation with the interface CATIGSMUseSurfaceSimplification */
#define declare_TIE_CATIGSMUseSurfaceSimplification(classe) \
 \
 \
class TIECATIGSMUseSurfaceSimplification##classe : public CATIGSMUseSurfaceSimplification \
{ \
   private: \
      CATDeclareCommonTIEMembers \
   public: \
      CATDeclareTIEMethods(CATIGSMUseSurfaceSimplification, classe) \
      CATDeclareIUnknownMethodsForCATBaseUnknownTIE \
      CATDeclareIDispatchMethodsForCATBaseUnknownTIE \
      CATDeclareCATBaseUnknownMethodsForTIE \
      virtual HRESULT SetSurface(const CATIMmiMechanicalFeature_var &ihMechFeature) ; \
      virtual HRESULT GetSurface(CATIMmiMechanicalFeature_var &ohMechFeature) ; \
      virtual HRESULT SetFaceSubElement(const CATIMmiMechanicalFeature_var &ihMechFeature, int iRank=0) ; \
      virtual HRESULT GetFaceSubElement(CATIMmiMechanicalFeature_var &ohMechFeature, const int &iRank) ; \
      virtual HRESULT GetListOfFaceSubElements(CATListValCATIMmiMechanicalFeature_var &olMechFeatures) ; \
      virtual HRESULT SetMaxG0InnerDeviation (const double& max_g0_inner_deviation_mm) ; \
      virtual HRESULT SetMaxG0InnerDeviation (const CATICkeParm_var& spMaxG0InnerDeviationParm) ; \
      virtual HRESULT GetMaxG0InnerDeviation (double& max_g0_inner_deviation_mm) ; \
      virtual HRESULT GetMaxG0InnerDeviation (CATICkeParm_var& spMaxG0InnerDeviationParm ) ; \
      virtual HRESULT SetMaxG0BoundaryDeviation (const double& max_g0_boundary_deviation_mm) ; \
      virtual HRESULT SetMaxG0BoundaryDeviation (const CATICkeParm_var& spMaxG0BoundaryDeviationParm) ; \
      virtual HRESULT GetMaxG0BoundaryDeviation (double& max_g0_boundary_deviation_mm) ; \
      virtual HRESULT GetMaxG0BoundaryDeviation (CATICkeParm_var& spMaxG0BoundaryDeviationParm) ; \
      virtual HRESULT SetMaxG1BoundaryDeviation (const double& max_g1_boundary_deviation_rad) ; \
      virtual HRESULT SetMaxG1BoundaryDeviation (const CATICkeParm_var& spMaxG1BoundaryDeviationParm) ; \
      virtual HRESULT GetMaxG1BoundaryDeviation (double& max_g1_boundary_deviation_rad) ; \
      virtual HRESULT GetMaxG1BoundaryDeviation (CATICkeParm_var& spMaxG1BoundaryDeviationParm) ; \
      virtual HRESULT SetBoundaryConstraintLevel(const BoundaryConstraintLevel ieBoundaryConstLvl) ; \
      virtual HRESULT GetBoundaryConstraintLevel(BoundaryConstraintLevel &oeBoundaryConstLvl) ; \
};



#define ENVTIEdeclare_CATIGSMUseSurfaceSimplification(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
virtual HRESULT SetSurface(const CATIMmiMechanicalFeature_var &ihMechFeature) ; \
virtual HRESULT GetSurface(CATIMmiMechanicalFeature_var &ohMechFeature) ; \
virtual HRESULT SetFaceSubElement(const CATIMmiMechanicalFeature_var &ihMechFeature, int iRank=0) ; \
virtual HRESULT GetFaceSubElement(CATIMmiMechanicalFeature_var &ohMechFeature, const int &iRank) ; \
virtual HRESULT GetListOfFaceSubElements(CATListValCATIMmiMechanicalFeature_var &olMechFeatures) ; \
virtual HRESULT SetMaxG0InnerDeviation (const double& max_g0_inner_deviation_mm) ; \
virtual HRESULT SetMaxG0InnerDeviation (const CATICkeParm_var& spMaxG0InnerDeviationParm) ; \
virtual HRESULT GetMaxG0InnerDeviation (double& max_g0_inner_deviation_mm) ; \
virtual HRESULT GetMaxG0InnerDeviation (CATICkeParm_var& spMaxG0InnerDeviationParm ) ; \
virtual HRESULT SetMaxG0BoundaryDeviation (const double& max_g0_boundary_deviation_mm) ; \
virtual HRESULT SetMaxG0BoundaryDeviation (const CATICkeParm_var& spMaxG0BoundaryDeviationParm) ; \
virtual HRESULT GetMaxG0BoundaryDeviation (double& max_g0_boundary_deviation_mm) ; \
virtual HRESULT GetMaxG0BoundaryDeviation (CATICkeParm_var& spMaxG0BoundaryDeviationParm) ; \
virtual HRESULT SetMaxG1BoundaryDeviation (const double& max_g1_boundary_deviation_rad) ; \
virtual HRESULT SetMaxG1BoundaryDeviation (const CATICkeParm_var& spMaxG1BoundaryDeviationParm) ; \
virtual HRESULT GetMaxG1BoundaryDeviation (double& max_g1_boundary_deviation_rad) ; \
virtual HRESULT GetMaxG1BoundaryDeviation (CATICkeParm_var& spMaxG1BoundaryDeviationParm) ; \
virtual HRESULT SetBoundaryConstraintLevel(const BoundaryConstraintLevel ieBoundaryConstLvl) ; \
virtual HRESULT GetBoundaryConstraintLevel(BoundaryConstraintLevel &oeBoundaryConstLvl) ; \


#define ENVTIEdefine_CATIGSMUseSurfaceSimplification(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
HRESULT  ENVTIEName::SetSurface(const CATIMmiMechanicalFeature_var &ihMechFeature)  \
{ \
return (ENVTIECALL(CATIGSMUseSurfaceSimplification,ENVTIETypeLetter,ENVTIELetter)SetSurface(ihMechFeature)); \
} \
HRESULT  ENVTIEName::GetSurface(CATIMmiMechanicalFeature_var &ohMechFeature)  \
{ \
return (ENVTIECALL(CATIGSMUseSurfaceSimplification,ENVTIETypeLetter,ENVTIELetter)GetSurface(ohMechFeature)); \
} \
HRESULT  ENVTIEName::SetFaceSubElement(const CATIMmiMechanicalFeature_var &ihMechFeature, int iRank)  \
{ \
return (ENVTIECALL(CATIGSMUseSurfaceSimplification,ENVTIETypeLetter,ENVTIELetter)SetFaceSubElement(ihMechFeature,iRank)); \
} \
HRESULT  ENVTIEName::GetFaceSubElement(CATIMmiMechanicalFeature_var &ohMechFeature, const int &iRank)  \
{ \
return (ENVTIECALL(CATIGSMUseSurfaceSimplification,ENVTIETypeLetter,ENVTIELetter)GetFaceSubElement(ohMechFeature,iRank)); \
} \
HRESULT  ENVTIEName::GetListOfFaceSubElements(CATListValCATIMmiMechanicalFeature_var &olMechFeatures)  \
{ \
return (ENVTIECALL(CATIGSMUseSurfaceSimplification,ENVTIETypeLetter,ENVTIELetter)GetListOfFaceSubElements(olMechFeatures)); \
} \
HRESULT  ENVTIEName::SetMaxG0InnerDeviation (const double& max_g0_inner_deviation_mm)  \
{ \
return (ENVTIECALL(CATIGSMUseSurfaceSimplification,ENVTIETypeLetter,ENVTIELetter)SetMaxG0InnerDeviation (max_g0_inner_deviation_mm)); \
} \
HRESULT  ENVTIEName::SetMaxG0InnerDeviation (const CATICkeParm_var& spMaxG0InnerDeviationParm)  \
{ \
return (ENVTIECALL(CATIGSMUseSurfaceSimplification,ENVTIETypeLetter,ENVTIELetter)SetMaxG0InnerDeviation (spMaxG0InnerDeviationParm)); \
} \
HRESULT  ENVTIEName::GetMaxG0InnerDeviation (double& max_g0_inner_deviation_mm)  \
{ \
return (ENVTIECALL(CATIGSMUseSurfaceSimplification,ENVTIETypeLetter,ENVTIELetter)GetMaxG0InnerDeviation (max_g0_inner_deviation_mm)); \
} \
HRESULT  ENVTIEName::GetMaxG0InnerDeviation (CATICkeParm_var& spMaxG0InnerDeviationParm )  \
{ \
return (ENVTIECALL(CATIGSMUseSurfaceSimplification,ENVTIETypeLetter,ENVTIELetter)GetMaxG0InnerDeviation (spMaxG0InnerDeviationParm )); \
} \
HRESULT  ENVTIEName::SetMaxG0BoundaryDeviation (const double& max_g0_boundary_deviation_mm)  \
{ \
return (ENVTIECALL(CATIGSMUseSurfaceSimplification,ENVTIETypeLetter,ENVTIELetter)SetMaxG0BoundaryDeviation (max_g0_boundary_deviation_mm)); \
} \
HRESULT  ENVTIEName::SetMaxG0BoundaryDeviation (const CATICkeParm_var& spMaxG0BoundaryDeviationParm)  \
{ \
return (ENVTIECALL(CATIGSMUseSurfaceSimplification,ENVTIETypeLetter,ENVTIELetter)SetMaxG0BoundaryDeviation (spMaxG0BoundaryDeviationParm)); \
} \
HRESULT  ENVTIEName::GetMaxG0BoundaryDeviation (double& max_g0_boundary_deviation_mm)  \
{ \
return (ENVTIECALL(CATIGSMUseSurfaceSimplification,ENVTIETypeLetter,ENVTIELetter)GetMaxG0BoundaryDeviation (max_g0_boundary_deviation_mm)); \
} \
HRESULT  ENVTIEName::GetMaxG0BoundaryDeviation (CATICkeParm_var& spMaxG0BoundaryDeviationParm)  \
{ \
return (ENVTIECALL(CATIGSMUseSurfaceSimplification,ENVTIETypeLetter,ENVTIELetter)GetMaxG0BoundaryDeviation (spMaxG0BoundaryDeviationParm)); \
} \
HRESULT  ENVTIEName::SetMaxG1BoundaryDeviation (const double& max_g1_boundary_deviation_rad)  \
{ \
return (ENVTIECALL(CATIGSMUseSurfaceSimplification,ENVTIETypeLetter,ENVTIELetter)SetMaxG1BoundaryDeviation (max_g1_boundary_deviation_rad)); \
} \
HRESULT  ENVTIEName::SetMaxG1BoundaryDeviation (const CATICkeParm_var& spMaxG1BoundaryDeviationParm)  \
{ \
return (ENVTIECALL(CATIGSMUseSurfaceSimplification,ENVTIETypeLetter,ENVTIELetter)SetMaxG1BoundaryDeviation (spMaxG1BoundaryDeviationParm)); \
} \
HRESULT  ENVTIEName::GetMaxG1BoundaryDeviation (double& max_g1_boundary_deviation_rad)  \
{ \
return (ENVTIECALL(CATIGSMUseSurfaceSimplification,ENVTIETypeLetter,ENVTIELetter)GetMaxG1BoundaryDeviation (max_g1_boundary_deviation_rad)); \
} \
HRESULT  ENVTIEName::GetMaxG1BoundaryDeviation (CATICkeParm_var& spMaxG1BoundaryDeviationParm)  \
{ \
return (ENVTIECALL(CATIGSMUseSurfaceSimplification,ENVTIETypeLetter,ENVTIELetter)GetMaxG1BoundaryDeviation (spMaxG1BoundaryDeviationParm)); \
} \
HRESULT  ENVTIEName::SetBoundaryConstraintLevel(const BoundaryConstraintLevel ieBoundaryConstLvl)  \
{ \
return (ENVTIECALL(CATIGSMUseSurfaceSimplification,ENVTIETypeLetter,ENVTIELetter)SetBoundaryConstraintLevel(ieBoundaryConstLvl)); \
} \
HRESULT  ENVTIEName::GetBoundaryConstraintLevel(BoundaryConstraintLevel &oeBoundaryConstLvl)  \
{ \
return (ENVTIECALL(CATIGSMUseSurfaceSimplification,ENVTIETypeLetter,ENVTIELetter)GetBoundaryConstraintLevel(oeBoundaryConstLvl)); \
} \


/* Name of the TIE class */
#define class_TIE_CATIGSMUseSurfaceSimplification(classe)    TIECATIGSMUseSurfaceSimplification##classe


/* Common methods inside a TIE */
#define common_TIE_CATIGSMUseSurfaceSimplification(classe) \
 \
 \
/* Static initialization */ \
CATDefineCommonTIEMembers(CATIGSMUseSurfaceSimplification, classe) \
 \
 \
CATImplementTIEMethods(CATIGSMUseSurfaceSimplification, classe) \
CATImplementIUnknownMethodsForCATBaseUnknownTIE(CATIGSMUseSurfaceSimplification, classe, 1) \
CATImplementIDispatchMethodsForCATBaseUnknownTIE(CATIGSMUseSurfaceSimplification, classe) \
CATImplementCATBaseUnknownMethodsForTIE(CATIGSMUseSurfaceSimplification, classe) \
 \
HRESULT  TIECATIGSMUseSurfaceSimplification##classe::SetSurface(const CATIMmiMechanicalFeature_var &ihMechFeature)  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetSurface(ihMechFeature)); \
} \
HRESULT  TIECATIGSMUseSurfaceSimplification##classe::GetSurface(CATIMmiMechanicalFeature_var &ohMechFeature)  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetSurface(ohMechFeature)); \
} \
HRESULT  TIECATIGSMUseSurfaceSimplification##classe::SetFaceSubElement(const CATIMmiMechanicalFeature_var &ihMechFeature, int iRank)  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetFaceSubElement(ihMechFeature,iRank)); \
} \
HRESULT  TIECATIGSMUseSurfaceSimplification##classe::GetFaceSubElement(CATIMmiMechanicalFeature_var &ohMechFeature, const int &iRank)  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetFaceSubElement(ohMechFeature,iRank)); \
} \
HRESULT  TIECATIGSMUseSurfaceSimplification##classe::GetListOfFaceSubElements(CATListValCATIMmiMechanicalFeature_var &olMechFeatures)  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetListOfFaceSubElements(olMechFeatures)); \
} \
HRESULT  TIECATIGSMUseSurfaceSimplification##classe::SetMaxG0InnerDeviation (const double& max_g0_inner_deviation_mm)  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetMaxG0InnerDeviation (max_g0_inner_deviation_mm)); \
} \
HRESULT  TIECATIGSMUseSurfaceSimplification##classe::SetMaxG0InnerDeviation (const CATICkeParm_var& spMaxG0InnerDeviationParm)  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetMaxG0InnerDeviation (spMaxG0InnerDeviationParm)); \
} \
HRESULT  TIECATIGSMUseSurfaceSimplification##classe::GetMaxG0InnerDeviation (double& max_g0_inner_deviation_mm)  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetMaxG0InnerDeviation (max_g0_inner_deviation_mm)); \
} \
HRESULT  TIECATIGSMUseSurfaceSimplification##classe::GetMaxG0InnerDeviation (CATICkeParm_var& spMaxG0InnerDeviationParm )  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetMaxG0InnerDeviation (spMaxG0InnerDeviationParm )); \
} \
HRESULT  TIECATIGSMUseSurfaceSimplification##classe::SetMaxG0BoundaryDeviation (const double& max_g0_boundary_deviation_mm)  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetMaxG0BoundaryDeviation (max_g0_boundary_deviation_mm)); \
} \
HRESULT  TIECATIGSMUseSurfaceSimplification##classe::SetMaxG0BoundaryDeviation (const CATICkeParm_var& spMaxG0BoundaryDeviationParm)  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetMaxG0BoundaryDeviation (spMaxG0BoundaryDeviationParm)); \
} \
HRESULT  TIECATIGSMUseSurfaceSimplification##classe::GetMaxG0BoundaryDeviation (double& max_g0_boundary_deviation_mm)  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetMaxG0BoundaryDeviation (max_g0_boundary_deviation_mm)); \
} \
HRESULT  TIECATIGSMUseSurfaceSimplification##classe::GetMaxG0BoundaryDeviation (CATICkeParm_var& spMaxG0BoundaryDeviationParm)  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetMaxG0BoundaryDeviation (spMaxG0BoundaryDeviationParm)); \
} \
HRESULT  TIECATIGSMUseSurfaceSimplification##classe::SetMaxG1BoundaryDeviation (const double& max_g1_boundary_deviation_rad)  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetMaxG1BoundaryDeviation (max_g1_boundary_deviation_rad)); \
} \
HRESULT  TIECATIGSMUseSurfaceSimplification##classe::SetMaxG1BoundaryDeviation (const CATICkeParm_var& spMaxG1BoundaryDeviationParm)  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetMaxG1BoundaryDeviation (spMaxG1BoundaryDeviationParm)); \
} \
HRESULT  TIECATIGSMUseSurfaceSimplification##classe::GetMaxG1BoundaryDeviation (double& max_g1_boundary_deviation_rad)  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetMaxG1BoundaryDeviation (max_g1_boundary_deviation_rad)); \
} \
HRESULT  TIECATIGSMUseSurfaceSimplification##classe::GetMaxG1BoundaryDeviation (CATICkeParm_var& spMaxG1BoundaryDeviationParm)  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetMaxG1BoundaryDeviation (spMaxG1BoundaryDeviationParm)); \
} \
HRESULT  TIECATIGSMUseSurfaceSimplification##classe::SetBoundaryConstraintLevel(const BoundaryConstraintLevel ieBoundaryConstLvl)  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetBoundaryConstraintLevel(ieBoundaryConstLvl)); \
} \
HRESULT  TIECATIGSMUseSurfaceSimplification##classe::GetBoundaryConstraintLevel(BoundaryConstraintLevel &oeBoundaryConstLvl)  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetBoundaryConstraintLevel(oeBoundaryConstLvl)); \
} \



/* Macro used to link an implementation with an interface */
#define TIE_CATIGSMUseSurfaceSimplification(classe) \
 \
 \
declare_TIE_CATIGSMUseSurfaceSimplification(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIGSMUseSurfaceSimplification##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIGSMUseSurfaceSimplification,"CATIGSMUseSurfaceSimplification",CATIGSMUseSurfaceSimplification::MetaObject(),classe::MetaObject(),TIE); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIGSMUseSurfaceSimplification(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIECreation(CATIGSMUseSurfaceSimplification, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIGSMUseSurfaceSimplification##classe(classe::MetaObject(),CATIGSMUseSurfaceSimplification::MetaObject(),(void *)CreateTIECATIGSMUseSurfaceSimplification##classe)



/* Macro used to link an implementation with an interface */
/* This TIE is chained on the implementation object */
#define TIEchain_CATIGSMUseSurfaceSimplification(classe) \
 \
 \
declare_TIE_CATIGSMUseSurfaceSimplification(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIGSMUseSurfaceSimplification##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIGSMUseSurfaceSimplification,"CATIGSMUseSurfaceSimplification",CATIGSMUseSurfaceSimplification::MetaObject(),classe::MetaObject(),TIEchain); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIGSMUseSurfaceSimplification(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIEchainCreation(CATIGSMUseSurfaceSimplification, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIGSMUseSurfaceSimplification##classe(classe::MetaObject(),CATIGSMUseSurfaceSimplification::MetaObject(),(void *)CreateTIECATIGSMUseSurfaceSimplification##classe)


/* Macro to switch between BOA and TIE at build time */ 
#ifdef CATSYS_BOA_IS_TIE
#define BOA_CATIGSMUseSurfaceSimplification(classe) TIE_CATIGSMUseSurfaceSimplification(classe)
#else
#define BOA_CATIGSMUseSurfaceSimplification(classe) CATImplementBOA(CATIGSMUseSurfaceSimplification, classe)
#endif

#endif
