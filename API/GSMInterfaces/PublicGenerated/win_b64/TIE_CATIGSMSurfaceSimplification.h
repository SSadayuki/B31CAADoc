#ifndef __TIE_CATIGSMSurfaceSimplification
#define __TIE_CATIGSMSurfaceSimplification

#include <string.h>
#include "CATBaseUnknown.h"
#include "CATMetaClass.h"
#include "CATMacForTie.h"
#include "CATIGSMSurfaceSimplification.h"
#include "JS0DSPA.h"


#ifdef _WINDOWS_SOURCE
#define Exported __declspec(dllexport)
#define Imported __declspec(dllimport)
#else
#define Exported 
#define Imported 
#endif


/* To link an implementation with the interface CATIGSMSurfaceSimplification */
#define declare_TIE_CATIGSMSurfaceSimplification(classe) \
 \
 \
class TIECATIGSMSurfaceSimplification##classe : public CATIGSMSurfaceSimplification \
{ \
   private: \
      CATDeclareCommonTIEMembers \
   public: \
      CATDeclareTIEMethods(CATIGSMSurfaceSimplification, classe) \
      CATDeclareIUnknownMethodsForCATBaseUnknownTIE \
      CATDeclareIDispatchMethodsForCATBaseUnknownTIE \
      CATDeclareCATBaseUnknownMethodsForTIE \
      virtual HRESULT SetSurface (const CATISpecObject_var& spSurface) ; \
      virtual HRESULT GetSurface (CATISpecObject_var& spSurface) ; \
      virtual HRESULT SetFaceSubElement (const CATISpecObject_var& spFace, int Rank=0) ; \
      virtual HRESULT GetFaceSubElement (CATISpecObject_var& spFace, const int& Rank) ; \
      virtual HRESULT GetListOfFaceSubElements (CATListValCATISpecObject_var& subelements) ; \
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
      virtual HRESULT SetBoundaryConstraintLevel (const BoundaryConstraintLevel boundary_constraint_level) ; \
      virtual HRESULT GetBoundaryConstraintLevel (BoundaryConstraintLevel& boundary_constraint_level) ; \
};



#define ENVTIEdeclare_CATIGSMSurfaceSimplification(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
virtual HRESULT SetSurface (const CATISpecObject_var& spSurface) ; \
virtual HRESULT GetSurface (CATISpecObject_var& spSurface) ; \
virtual HRESULT SetFaceSubElement (const CATISpecObject_var& spFace, int Rank=0) ; \
virtual HRESULT GetFaceSubElement (CATISpecObject_var& spFace, const int& Rank) ; \
virtual HRESULT GetListOfFaceSubElements (CATListValCATISpecObject_var& subelements) ; \
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
virtual HRESULT SetBoundaryConstraintLevel (const BoundaryConstraintLevel boundary_constraint_level) ; \
virtual HRESULT GetBoundaryConstraintLevel (BoundaryConstraintLevel& boundary_constraint_level) ; \


#define ENVTIEdefine_CATIGSMSurfaceSimplification(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
HRESULT  ENVTIEName::SetSurface (const CATISpecObject_var& spSurface)  \
{ \
return (ENVTIECALL(CATIGSMSurfaceSimplification,ENVTIETypeLetter,ENVTIELetter)SetSurface (spSurface)); \
} \
HRESULT  ENVTIEName::GetSurface (CATISpecObject_var& spSurface)  \
{ \
return (ENVTIECALL(CATIGSMSurfaceSimplification,ENVTIETypeLetter,ENVTIELetter)GetSurface (spSurface)); \
} \
HRESULT  ENVTIEName::SetFaceSubElement (const CATISpecObject_var& spFace, int Rank)  \
{ \
return (ENVTIECALL(CATIGSMSurfaceSimplification,ENVTIETypeLetter,ENVTIELetter)SetFaceSubElement (spFace,Rank)); \
} \
HRESULT  ENVTIEName::GetFaceSubElement (CATISpecObject_var& spFace, const int& Rank)  \
{ \
return (ENVTIECALL(CATIGSMSurfaceSimplification,ENVTIETypeLetter,ENVTIELetter)GetFaceSubElement (spFace,Rank)); \
} \
HRESULT  ENVTIEName::GetListOfFaceSubElements (CATListValCATISpecObject_var& subelements)  \
{ \
return (ENVTIECALL(CATIGSMSurfaceSimplification,ENVTIETypeLetter,ENVTIELetter)GetListOfFaceSubElements (subelements)); \
} \
HRESULT  ENVTIEName::SetMaxG0InnerDeviation (const double& max_g0_inner_deviation_mm)  \
{ \
return (ENVTIECALL(CATIGSMSurfaceSimplification,ENVTIETypeLetter,ENVTIELetter)SetMaxG0InnerDeviation (max_g0_inner_deviation_mm)); \
} \
HRESULT  ENVTIEName::SetMaxG0InnerDeviation (const CATICkeParm_var& spMaxG0InnerDeviationParm)  \
{ \
return (ENVTIECALL(CATIGSMSurfaceSimplification,ENVTIETypeLetter,ENVTIELetter)SetMaxG0InnerDeviation (spMaxG0InnerDeviationParm)); \
} \
HRESULT  ENVTIEName::GetMaxG0InnerDeviation (double& max_g0_inner_deviation_mm)  \
{ \
return (ENVTIECALL(CATIGSMSurfaceSimplification,ENVTIETypeLetter,ENVTIELetter)GetMaxG0InnerDeviation (max_g0_inner_deviation_mm)); \
} \
HRESULT  ENVTIEName::GetMaxG0InnerDeviation (CATICkeParm_var& spMaxG0InnerDeviationParm )  \
{ \
return (ENVTIECALL(CATIGSMSurfaceSimplification,ENVTIETypeLetter,ENVTIELetter)GetMaxG0InnerDeviation (spMaxG0InnerDeviationParm )); \
} \
HRESULT  ENVTIEName::SetMaxG0BoundaryDeviation (const double& max_g0_boundary_deviation_mm)  \
{ \
return (ENVTIECALL(CATIGSMSurfaceSimplification,ENVTIETypeLetter,ENVTIELetter)SetMaxG0BoundaryDeviation (max_g0_boundary_deviation_mm)); \
} \
HRESULT  ENVTIEName::SetMaxG0BoundaryDeviation (const CATICkeParm_var& spMaxG0BoundaryDeviationParm)  \
{ \
return (ENVTIECALL(CATIGSMSurfaceSimplification,ENVTIETypeLetter,ENVTIELetter)SetMaxG0BoundaryDeviation (spMaxG0BoundaryDeviationParm)); \
} \
HRESULT  ENVTIEName::GetMaxG0BoundaryDeviation (double& max_g0_boundary_deviation_mm)  \
{ \
return (ENVTIECALL(CATIGSMSurfaceSimplification,ENVTIETypeLetter,ENVTIELetter)GetMaxG0BoundaryDeviation (max_g0_boundary_deviation_mm)); \
} \
HRESULT  ENVTIEName::GetMaxG0BoundaryDeviation (CATICkeParm_var& spMaxG0BoundaryDeviationParm)  \
{ \
return (ENVTIECALL(CATIGSMSurfaceSimplification,ENVTIETypeLetter,ENVTIELetter)GetMaxG0BoundaryDeviation (spMaxG0BoundaryDeviationParm)); \
} \
HRESULT  ENVTIEName::SetMaxG1BoundaryDeviation (const double& max_g1_boundary_deviation_rad)  \
{ \
return (ENVTIECALL(CATIGSMSurfaceSimplification,ENVTIETypeLetter,ENVTIELetter)SetMaxG1BoundaryDeviation (max_g1_boundary_deviation_rad)); \
} \
HRESULT  ENVTIEName::SetMaxG1BoundaryDeviation (const CATICkeParm_var& spMaxG1BoundaryDeviationParm)  \
{ \
return (ENVTIECALL(CATIGSMSurfaceSimplification,ENVTIETypeLetter,ENVTIELetter)SetMaxG1BoundaryDeviation (spMaxG1BoundaryDeviationParm)); \
} \
HRESULT  ENVTIEName::GetMaxG1BoundaryDeviation (double& max_g1_boundary_deviation_rad)  \
{ \
return (ENVTIECALL(CATIGSMSurfaceSimplification,ENVTIETypeLetter,ENVTIELetter)GetMaxG1BoundaryDeviation (max_g1_boundary_deviation_rad)); \
} \
HRESULT  ENVTIEName::GetMaxG1BoundaryDeviation (CATICkeParm_var& spMaxG1BoundaryDeviationParm)  \
{ \
return (ENVTIECALL(CATIGSMSurfaceSimplification,ENVTIETypeLetter,ENVTIELetter)GetMaxG1BoundaryDeviation (spMaxG1BoundaryDeviationParm)); \
} \
HRESULT  ENVTIEName::SetBoundaryConstraintLevel (const BoundaryConstraintLevel boundary_constraint_level)  \
{ \
return (ENVTIECALL(CATIGSMSurfaceSimplification,ENVTIETypeLetter,ENVTIELetter)SetBoundaryConstraintLevel (boundary_constraint_level)); \
} \
HRESULT  ENVTIEName::GetBoundaryConstraintLevel (BoundaryConstraintLevel& boundary_constraint_level)  \
{ \
return (ENVTIECALL(CATIGSMSurfaceSimplification,ENVTIETypeLetter,ENVTIELetter)GetBoundaryConstraintLevel (boundary_constraint_level)); \
} \


/* Name of the TIE class */
#define class_TIE_CATIGSMSurfaceSimplification(classe)    TIECATIGSMSurfaceSimplification##classe


/* Common methods inside a TIE */
#define common_TIE_CATIGSMSurfaceSimplification(classe) \
 \
 \
/* Static initialization */ \
CATDefineCommonTIEMembers(CATIGSMSurfaceSimplification, classe) \
 \
 \
CATImplementTIEMethods(CATIGSMSurfaceSimplification, classe) \
CATImplementIUnknownMethodsForCATBaseUnknownTIE(CATIGSMSurfaceSimplification, classe, 1) \
CATImplementIDispatchMethodsForCATBaseUnknownTIE(CATIGSMSurfaceSimplification, classe) \
CATImplementCATBaseUnknownMethodsForTIE(CATIGSMSurfaceSimplification, classe) \
 \
HRESULT  TIECATIGSMSurfaceSimplification##classe::SetSurface (const CATISpecObject_var& spSurface)  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetSurface (spSurface)); \
} \
HRESULT  TIECATIGSMSurfaceSimplification##classe::GetSurface (CATISpecObject_var& spSurface)  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetSurface (spSurface)); \
} \
HRESULT  TIECATIGSMSurfaceSimplification##classe::SetFaceSubElement (const CATISpecObject_var& spFace, int Rank)  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetFaceSubElement (spFace,Rank)); \
} \
HRESULT  TIECATIGSMSurfaceSimplification##classe::GetFaceSubElement (CATISpecObject_var& spFace, const int& Rank)  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetFaceSubElement (spFace,Rank)); \
} \
HRESULT  TIECATIGSMSurfaceSimplification##classe::GetListOfFaceSubElements (CATListValCATISpecObject_var& subelements)  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetListOfFaceSubElements (subelements)); \
} \
HRESULT  TIECATIGSMSurfaceSimplification##classe::SetMaxG0InnerDeviation (const double& max_g0_inner_deviation_mm)  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetMaxG0InnerDeviation (max_g0_inner_deviation_mm)); \
} \
HRESULT  TIECATIGSMSurfaceSimplification##classe::SetMaxG0InnerDeviation (const CATICkeParm_var& spMaxG0InnerDeviationParm)  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetMaxG0InnerDeviation (spMaxG0InnerDeviationParm)); \
} \
HRESULT  TIECATIGSMSurfaceSimplification##classe::GetMaxG0InnerDeviation (double& max_g0_inner_deviation_mm)  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetMaxG0InnerDeviation (max_g0_inner_deviation_mm)); \
} \
HRESULT  TIECATIGSMSurfaceSimplification##classe::GetMaxG0InnerDeviation (CATICkeParm_var& spMaxG0InnerDeviationParm )  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetMaxG0InnerDeviation (spMaxG0InnerDeviationParm )); \
} \
HRESULT  TIECATIGSMSurfaceSimplification##classe::SetMaxG0BoundaryDeviation (const double& max_g0_boundary_deviation_mm)  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetMaxG0BoundaryDeviation (max_g0_boundary_deviation_mm)); \
} \
HRESULT  TIECATIGSMSurfaceSimplification##classe::SetMaxG0BoundaryDeviation (const CATICkeParm_var& spMaxG0BoundaryDeviationParm)  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetMaxG0BoundaryDeviation (spMaxG0BoundaryDeviationParm)); \
} \
HRESULT  TIECATIGSMSurfaceSimplification##classe::GetMaxG0BoundaryDeviation (double& max_g0_boundary_deviation_mm)  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetMaxG0BoundaryDeviation (max_g0_boundary_deviation_mm)); \
} \
HRESULT  TIECATIGSMSurfaceSimplification##classe::GetMaxG0BoundaryDeviation (CATICkeParm_var& spMaxG0BoundaryDeviationParm)  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetMaxG0BoundaryDeviation (spMaxG0BoundaryDeviationParm)); \
} \
HRESULT  TIECATIGSMSurfaceSimplification##classe::SetMaxG1BoundaryDeviation (const double& max_g1_boundary_deviation_rad)  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetMaxG1BoundaryDeviation (max_g1_boundary_deviation_rad)); \
} \
HRESULT  TIECATIGSMSurfaceSimplification##classe::SetMaxG1BoundaryDeviation (const CATICkeParm_var& spMaxG1BoundaryDeviationParm)  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetMaxG1BoundaryDeviation (spMaxG1BoundaryDeviationParm)); \
} \
HRESULT  TIECATIGSMSurfaceSimplification##classe::GetMaxG1BoundaryDeviation (double& max_g1_boundary_deviation_rad)  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetMaxG1BoundaryDeviation (max_g1_boundary_deviation_rad)); \
} \
HRESULT  TIECATIGSMSurfaceSimplification##classe::GetMaxG1BoundaryDeviation (CATICkeParm_var& spMaxG1BoundaryDeviationParm)  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetMaxG1BoundaryDeviation (spMaxG1BoundaryDeviationParm)); \
} \
HRESULT  TIECATIGSMSurfaceSimplification##classe::SetBoundaryConstraintLevel (const BoundaryConstraintLevel boundary_constraint_level)  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetBoundaryConstraintLevel (boundary_constraint_level)); \
} \
HRESULT  TIECATIGSMSurfaceSimplification##classe::GetBoundaryConstraintLevel (BoundaryConstraintLevel& boundary_constraint_level)  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetBoundaryConstraintLevel (boundary_constraint_level)); \
} \



/* Macro used to link an implementation with an interface */
#define TIE_CATIGSMSurfaceSimplification(classe) \
 \
 \
declare_TIE_CATIGSMSurfaceSimplification(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIGSMSurfaceSimplification##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIGSMSurfaceSimplification,"CATIGSMSurfaceSimplification",CATIGSMSurfaceSimplification::MetaObject(),classe::MetaObject(),TIE); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIGSMSurfaceSimplification(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIECreation(CATIGSMSurfaceSimplification, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIGSMSurfaceSimplification##classe(classe::MetaObject(),CATIGSMSurfaceSimplification::MetaObject(),(void *)CreateTIECATIGSMSurfaceSimplification##classe)



/* Macro used to link an implementation with an interface */
/* This TIE is chained on the implementation object */
#define TIEchain_CATIGSMSurfaceSimplification(classe) \
 \
 \
declare_TIE_CATIGSMSurfaceSimplification(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIGSMSurfaceSimplification##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIGSMSurfaceSimplification,"CATIGSMSurfaceSimplification",CATIGSMSurfaceSimplification::MetaObject(),classe::MetaObject(),TIEchain); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIGSMSurfaceSimplification(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIEchainCreation(CATIGSMSurfaceSimplification, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIGSMSurfaceSimplification##classe(classe::MetaObject(),CATIGSMSurfaceSimplification::MetaObject(),(void *)CreateTIECATIGSMSurfaceSimplification##classe)


/* Macro to switch between BOA and TIE at build time */ 
#ifdef CATSYS_BOA_IS_TIE
#define BOA_CATIGSMSurfaceSimplification(classe) TIE_CATIGSMSurfaceSimplification(classe)
#else
#define BOA_CATIGSMSurfaceSimplification(classe) CATImplementBOA(CATIGSMSurfaceSimplification, classe)
#endif

#endif
