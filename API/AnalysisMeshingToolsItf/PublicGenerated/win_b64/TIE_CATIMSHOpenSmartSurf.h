#ifndef __TIE_CATIMSHOpenSmartSurf
#define __TIE_CATIMSHOpenSmartSurf

#include <string.h>
#include "CATBaseUnknown.h"
#include "CATMetaClass.h"
#include "CATMacForTie.h"
#include "CATIMSHOpenSmartSurf.h"
#include "JS0DSPA.h"


#ifdef _WINDOWS_SOURCE
#define Exported __declspec(dllexport)
#define Imported __declspec(dllimport)
#else
#define Exported 
#define Imported 
#endif


/* To link an implementation with the interface CATIMSHOpenSmartSurf */
#define declare_TIE_CATIMSHOpenSmartSurf(classe) \
 \
 \
class TIECATIMSHOpenSmartSurf##classe : public CATIMSHOpenSmartSurf \
{ \
   private: \
      CATDeclareCommonTIEMembers \
   public: \
      CATDeclareTIEMethods(CATIMSHOpenSmartSurf, classe) \
      CATDeclareIUnknownMethodsForCATBaseUnknownTIE \
      CATDeclareIDispatchMethodsForCATBaseUnknownTIE \
      CATDeclareCATBaseUnknownMethodsForTIE \
      virtual HRESULT SpecifyTopology ( CATIMSHMeshPart * MeshPart ) ; \
      virtual HRESULT ModifyTopology ( CATIMSHMeshPart * MeshPart ) ; \
      virtual HRESULT SpecifyMesh ( CATIMSHMeshPart * MeshPart ) ; \
};



#define ENVTIEdeclare_CATIMSHOpenSmartSurf(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
virtual HRESULT SpecifyTopology ( CATIMSHMeshPart * MeshPart ) ; \
virtual HRESULT ModifyTopology ( CATIMSHMeshPart * MeshPart ) ; \
virtual HRESULT SpecifyMesh ( CATIMSHMeshPart * MeshPart ) ; \


#define ENVTIEdefine_CATIMSHOpenSmartSurf(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
HRESULT  ENVTIEName::SpecifyTopology ( CATIMSHMeshPart * MeshPart )  \
{ \
return (ENVTIECALL(CATIMSHOpenSmartSurf,ENVTIETypeLetter,ENVTIELetter)SpecifyTopology (MeshPart )); \
} \
HRESULT  ENVTIEName::ModifyTopology ( CATIMSHMeshPart * MeshPart )  \
{ \
return (ENVTIECALL(CATIMSHOpenSmartSurf,ENVTIETypeLetter,ENVTIELetter)ModifyTopology (MeshPart )); \
} \
HRESULT  ENVTIEName::SpecifyMesh ( CATIMSHMeshPart * MeshPart )  \
{ \
return (ENVTIECALL(CATIMSHOpenSmartSurf,ENVTIETypeLetter,ENVTIELetter)SpecifyMesh (MeshPart )); \
} \


/* Name of the TIE class */
#define class_TIE_CATIMSHOpenSmartSurf(classe)    TIECATIMSHOpenSmartSurf##classe


/* Common methods inside a TIE */
#define common_TIE_CATIMSHOpenSmartSurf(classe) \
 \
 \
/* Static initialization */ \
CATDefineCommonTIEMembers(CATIMSHOpenSmartSurf, classe) \
 \
 \
CATImplementTIEMethods(CATIMSHOpenSmartSurf, classe) \
CATImplementIUnknownMethodsForCATBaseUnknownTIE(CATIMSHOpenSmartSurf, classe, 1) \
CATImplementIDispatchMethodsForCATBaseUnknownTIE(CATIMSHOpenSmartSurf, classe) \
CATImplementCATBaseUnknownMethodsForTIE(CATIMSHOpenSmartSurf, classe) \
 \
HRESULT  TIECATIMSHOpenSmartSurf##classe::SpecifyTopology ( CATIMSHMeshPart * MeshPart )  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SpecifyTopology (MeshPart )); \
} \
HRESULT  TIECATIMSHOpenSmartSurf##classe::ModifyTopology ( CATIMSHMeshPart * MeshPart )  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->ModifyTopology (MeshPart )); \
} \
HRESULT  TIECATIMSHOpenSmartSurf##classe::SpecifyMesh ( CATIMSHMeshPart * MeshPart )  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SpecifyMesh (MeshPart )); \
} \



/* Macro used to link an implementation with an interface */
#define TIE_CATIMSHOpenSmartSurf(classe) \
 \
 \
declare_TIE_CATIMSHOpenSmartSurf(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIMSHOpenSmartSurf##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIMSHOpenSmartSurf,"CATIMSHOpenSmartSurf",CATIMSHOpenSmartSurf::MetaObject(),classe::MetaObject(),TIE); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIMSHOpenSmartSurf(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIECreation(CATIMSHOpenSmartSurf, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIMSHOpenSmartSurf##classe(classe::MetaObject(),CATIMSHOpenSmartSurf::MetaObject(),(void *)CreateTIECATIMSHOpenSmartSurf##classe)



/* Macro used to link an implementation with an interface */
/* This TIE is chained on the implementation object */
#define TIEchain_CATIMSHOpenSmartSurf(classe) \
 \
 \
declare_TIE_CATIMSHOpenSmartSurf(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIMSHOpenSmartSurf##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIMSHOpenSmartSurf,"CATIMSHOpenSmartSurf",CATIMSHOpenSmartSurf::MetaObject(),classe::MetaObject(),TIEchain); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIMSHOpenSmartSurf(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIEchainCreation(CATIMSHOpenSmartSurf, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIMSHOpenSmartSurf##classe(classe::MetaObject(),CATIMSHOpenSmartSurf::MetaObject(),(void *)CreateTIECATIMSHOpenSmartSurf##classe)


/* Macro to switch between BOA and TIE at build time */ 
#ifdef CATSYS_BOA_IS_TIE
#define BOA_CATIMSHOpenSmartSurf(classe) TIE_CATIMSHOpenSmartSurf(classe)
#else
#define BOA_CATIMSHOpenSmartSurf(classe) CATImplementBOA(CATIMSHOpenSmartSurf, classe)
#endif

#endif
