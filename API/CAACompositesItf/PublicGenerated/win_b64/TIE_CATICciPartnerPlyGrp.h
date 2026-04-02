#ifndef __TIE_CATICciPartnerPlyGrp
#define __TIE_CATICciPartnerPlyGrp

#include <string.h>
#include "CATBaseUnknown.h"
#include "CATMetaClass.h"
#include "CATMacForTie.h"
#include "CATICciPartnerPlyGrp.h"
#include "JS0DSPA.h"


#ifdef _WINDOWS_SOURCE
#define Exported __declspec(dllexport)
#define Imported __declspec(dllimport)
#else
#define Exported 
#define Imported 
#endif


/* To link an implementation with the interface CATICciPartnerPlyGrp */
#define declare_TIE_CATICciPartnerPlyGrp(classe) \
 \
 \
class TIECATICciPartnerPlyGrp##classe : public CATICciPartnerPlyGrp \
{ \
   private: \
      CATDeclareCommonTIEMembers \
   public: \
      CATDeclareTIEMethods(CATICciPartnerPlyGrp, classe) \
      CATDeclareIUnknownMethodsForCATBaseUnknownTIE \
      CATDeclareIDispatchMethodsForCATBaseUnknownTIE \
      CATDeclareCATBaseUnknownMethodsForTIE \
      virtual void GetListOfRTransfertTypes(CATListOfCATUnicodeString & oListOfRTransfertTypes, CATListOfCATUnicodeString & oListOfNLSRTransfertTypes) ; \
      virtual HRESULT ComputeRosetteTransfert( const CATICciPhysicalEntity_var ispCoPhysicalEnt, const CATUnicodeString icAdvMode, const int iContextForComputation , const CATIMf3DAxisSystem_var ispRosetteRefAxis,  const CATBody_var spSurfaceBody, const CATListOfDouble     iListPtCoords, const CATListOfDouble     iListPtNormals, CATListOfDouble  &oListPtVecR1,  CATListOfDouble &oListPtVecR2, CATListOfInt &oListXZOrientation ) ; \
};



#define ENVTIEdeclare_CATICciPartnerPlyGrp(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
virtual void GetListOfRTransfertTypes(CATListOfCATUnicodeString & oListOfRTransfertTypes, CATListOfCATUnicodeString & oListOfNLSRTransfertTypes) ; \
virtual HRESULT ComputeRosetteTransfert( const CATICciPhysicalEntity_var ispCoPhysicalEnt, const CATUnicodeString icAdvMode, const int iContextForComputation , const CATIMf3DAxisSystem_var ispRosetteRefAxis,  const CATBody_var spSurfaceBody, const CATListOfDouble     iListPtCoords, const CATListOfDouble     iListPtNormals, CATListOfDouble  &oListPtVecR1,  CATListOfDouble &oListPtVecR2, CATListOfInt &oListXZOrientation ) ; \


#define ENVTIEdefine_CATICciPartnerPlyGrp(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
void  ENVTIEName::GetListOfRTransfertTypes(CATListOfCATUnicodeString & oListOfRTransfertTypes, CATListOfCATUnicodeString & oListOfNLSRTransfertTypes)  \
{ \
 (ENVTIECALL(CATICciPartnerPlyGrp,ENVTIETypeLetter,ENVTIELetter)GetListOfRTransfertTypes(oListOfRTransfertTypes,oListOfNLSRTransfertTypes)); \
} \
HRESULT  ENVTIEName::ComputeRosetteTransfert( const CATICciPhysicalEntity_var ispCoPhysicalEnt, const CATUnicodeString icAdvMode, const int iContextForComputation , const CATIMf3DAxisSystem_var ispRosetteRefAxis,  const CATBody_var spSurfaceBody, const CATListOfDouble     iListPtCoords, const CATListOfDouble     iListPtNormals, CATListOfDouble  &oListPtVecR1,  CATListOfDouble &oListPtVecR2, CATListOfInt &oListXZOrientation )  \
{ \
return (ENVTIECALL(CATICciPartnerPlyGrp,ENVTIETypeLetter,ENVTIELetter)ComputeRosetteTransfert(ispCoPhysicalEnt,icAdvMode,iContextForComputation ,ispRosetteRefAxis,spSurfaceBody,iListPtCoords,iListPtNormals,oListPtVecR1,oListPtVecR2,oListXZOrientation )); \
} \


/* Name of the TIE class */
#define class_TIE_CATICciPartnerPlyGrp(classe)    TIECATICciPartnerPlyGrp##classe


/* Common methods inside a TIE */
#define common_TIE_CATICciPartnerPlyGrp(classe) \
 \
 \
/* Static initialization */ \
CATDefineCommonTIEMembers(CATICciPartnerPlyGrp, classe) \
 \
 \
CATImplementTIEMethods(CATICciPartnerPlyGrp, classe) \
CATImplementIUnknownMethodsForCATBaseUnknownTIE(CATICciPartnerPlyGrp, classe, 1) \
CATImplementIDispatchMethodsForCATBaseUnknownTIE(CATICciPartnerPlyGrp, classe) \
CATImplementCATBaseUnknownMethodsForTIE(CATICciPartnerPlyGrp, classe) \
 \
void  TIECATICciPartnerPlyGrp##classe::GetListOfRTransfertTypes(CATListOfCATUnicodeString & oListOfRTransfertTypes, CATListOfCATUnicodeString & oListOfNLSRTransfertTypes)  \
{ \
   ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetListOfRTransfertTypes(oListOfRTransfertTypes,oListOfNLSRTransfertTypes); \
} \
HRESULT  TIECATICciPartnerPlyGrp##classe::ComputeRosetteTransfert( const CATICciPhysicalEntity_var ispCoPhysicalEnt, const CATUnicodeString icAdvMode, const int iContextForComputation , const CATIMf3DAxisSystem_var ispRosetteRefAxis,  const CATBody_var spSurfaceBody, const CATListOfDouble     iListPtCoords, const CATListOfDouble     iListPtNormals, CATListOfDouble  &oListPtVecR1,  CATListOfDouble &oListPtVecR2, CATListOfInt &oListXZOrientation )  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->ComputeRosetteTransfert(ispCoPhysicalEnt,icAdvMode,iContextForComputation ,ispRosetteRefAxis,spSurfaceBody,iListPtCoords,iListPtNormals,oListPtVecR1,oListPtVecR2,oListXZOrientation )); \
} \



/* Macro used to link an implementation with an interface */
#define TIE_CATICciPartnerPlyGrp(classe) \
 \
 \
declare_TIE_CATICciPartnerPlyGrp(classe) \
 \
 \
CATMetaClass * __stdcall TIECATICciPartnerPlyGrp##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATICciPartnerPlyGrp,"CATICciPartnerPlyGrp",CATICciPartnerPlyGrp::MetaObject(),classe::MetaObject(),TIE); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATICciPartnerPlyGrp(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIECreation(CATICciPartnerPlyGrp, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATICciPartnerPlyGrp##classe(classe::MetaObject(),CATICciPartnerPlyGrp::MetaObject(),(void *)CreateTIECATICciPartnerPlyGrp##classe)



/* Macro used to link an implementation with an interface */
/* This TIE is chained on the implementation object */
#define TIEchain_CATICciPartnerPlyGrp(classe) \
 \
 \
declare_TIE_CATICciPartnerPlyGrp(classe) \
 \
 \
CATMetaClass * __stdcall TIECATICciPartnerPlyGrp##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATICciPartnerPlyGrp,"CATICciPartnerPlyGrp",CATICciPartnerPlyGrp::MetaObject(),classe::MetaObject(),TIEchain); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATICciPartnerPlyGrp(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIEchainCreation(CATICciPartnerPlyGrp, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATICciPartnerPlyGrp##classe(classe::MetaObject(),CATICciPartnerPlyGrp::MetaObject(),(void *)CreateTIECATICciPartnerPlyGrp##classe)


/* Macro to switch between BOA and TIE at build time */ 
#ifdef CATSYS_BOA_IS_TIE
#define BOA_CATICciPartnerPlyGrp(classe) TIE_CATICciPartnerPlyGrp(classe)
#else
#define BOA_CATICciPartnerPlyGrp(classe) CATImplementBOA(CATICciPartnerPlyGrp, classe)
#endif

#endif
