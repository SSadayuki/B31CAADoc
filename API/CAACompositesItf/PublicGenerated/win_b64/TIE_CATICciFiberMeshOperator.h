#ifndef __TIE_CATICciFiberMeshOperator
#define __TIE_CATICciFiberMeshOperator

#include <string.h>
#include "CATBaseUnknown.h"
#include "CATMetaClass.h"
#include "CATMacForTie.h"
#include "CATICciFiberMeshOperator.h"
#include "JS0DSPA.h"


#ifdef _WINDOWS_SOURCE
#define Exported __declspec(dllexport)
#define Imported __declspec(dllimport)
#else
#define Exported 
#define Imported 
#endif


/* To link an implementation with the interface CATICciFiberMeshOperator */
#define declare_TIE_CATICciFiberMeshOperator(classe) \
 \
 \
class TIECATICciFiberMeshOperator##classe : public CATICciFiberMeshOperator \
{ \
   private: \
      CATDeclareCommonTIEMembers \
   public: \
      CATDeclareTIEMethods(CATICciFiberMeshOperator, classe) \
      CATDeclareIUnknownMethodsForCATBaseUnknownTIE \
      CATDeclareIDispatchMethodsForCATBaseUnknownTIE \
      CATDeclareCATBaseUnknownMethodsForTIE \
      virtual void GetListOfPropagationTypes(CATListOfCATUnicodeString & oListOfPropTypes) ; \
      virtual void GetListOfFilteredPropagationTypes(CompManufacturingType iType, CATListOfCATUnicodeString & oListOfPropTypes) ; \
      virtual void GetListOfNLSPropagationTypes(CATListOfCATUnicodeString & oListOfPropTypes) ; \
      virtual CATBoolean IsSeedPointSelectionNeeded (const CATUnicodeString & iPropagationType) ; \
      virtual CATBoolean IsSeedCurveSelectionNeeded (const CATUnicodeString & iPropagationType) ; \
      virtual CATBoolean IsSeedAreasSelectionNeeded (const CATUnicodeString & iPropagationType) ; \
      virtual CATBoolean IsUnidirectionalSimulation (const CATUnicodeString & iPropagationType) ; \
      virtual CATBoolean IsDisplayFlatPatternOptionNeeded() ; \
      virtual void SetTessellationData(const CATICciTessellationData * ipTessellationData) ; \
      virtual void SetMaterialType(const CompMaterialType iType) ; \
      virtual void SetBiaxialMaterialParameters(const double iWarpWeft=90., const double iMaxStrain=60., const double iWarnStrain=30. ) ; \
      virtual void GetBiaxialMaterialParameters(double & oWarpWeft, double & oMaxStrain, double & oWarnStrain) ; \
      virtual void SetUniaxialMaterialParameters(const double iLimitShearing, const double iMaxElongation ) ; \
      virtual void GetUniaxialMaterialParameters(double & oLimitShearing, double & oMaxElongation ) ; \
      virtual void SetSeedPoint( const double *iPoint ) ; \
      virtual void SetRosetteAtSeedPoint( const double *iX, const double *iY, const double *iZ ) ; \
      virtual void SetWarpAndWeft( const double iWarp = 0., const double iWeft = 0. ) ; \
      virtual void SetPropogationType(const CATUnicodeString & iPropogationType) ; \
      virtual int Run( const RunMode iMode ) ; \
      virtual HRESULT GetFiberMesh(int *&oArrayMinusU, int *&oArrayPlusU, int *&oArrayMinusV, int *&oArrayPlusV, int *&oArrayTrigOn, double (*&oArr3DPoints)[3], int &oNumNodes) ; \
      virtual HRESULT GetFlattenContour(double (*&oArr3DPoints)[3], int &oNbPoints, double oArrPlaneDef[][3]) ; \
      virtual void SetPropogationType( const PropogationType iType ) ; \
};



#define ENVTIEdeclare_CATICciFiberMeshOperator(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
virtual void GetListOfPropagationTypes(CATListOfCATUnicodeString & oListOfPropTypes) ; \
virtual void GetListOfFilteredPropagationTypes(CompManufacturingType iType, CATListOfCATUnicodeString & oListOfPropTypes) ; \
virtual void GetListOfNLSPropagationTypes(CATListOfCATUnicodeString & oListOfPropTypes) ; \
virtual CATBoolean IsSeedPointSelectionNeeded (const CATUnicodeString & iPropagationType) ; \
virtual CATBoolean IsSeedCurveSelectionNeeded (const CATUnicodeString & iPropagationType) ; \
virtual CATBoolean IsSeedAreasSelectionNeeded (const CATUnicodeString & iPropagationType) ; \
virtual CATBoolean IsUnidirectionalSimulation (const CATUnicodeString & iPropagationType) ; \
virtual CATBoolean IsDisplayFlatPatternOptionNeeded() ; \
virtual void SetTessellationData(const CATICciTessellationData * ipTessellationData) ; \
virtual void SetMaterialType(const CompMaterialType iType) ; \
virtual void SetBiaxialMaterialParameters(const double iWarpWeft=90., const double iMaxStrain=60., const double iWarnStrain=30. ) ; \
virtual void GetBiaxialMaterialParameters(double & oWarpWeft, double & oMaxStrain, double & oWarnStrain) ; \
virtual void SetUniaxialMaterialParameters(const double iLimitShearing, const double iMaxElongation ) ; \
virtual void GetUniaxialMaterialParameters(double & oLimitShearing, double & oMaxElongation ) ; \
virtual void SetSeedPoint( const double *iPoint ) ; \
virtual void SetRosetteAtSeedPoint( const double *iX, const double *iY, const double *iZ ) ; \
virtual void SetWarpAndWeft( const double iWarp = 0., const double iWeft = 0. ) ; \
virtual void SetPropogationType(const CATUnicodeString & iPropogationType) ; \
virtual int Run( const RunMode iMode ) ; \
virtual HRESULT GetFiberMesh(int *&oArrayMinusU, int *&oArrayPlusU, int *&oArrayMinusV, int *&oArrayPlusV, int *&oArrayTrigOn, double (*&oArr3DPoints)[3], int &oNumNodes) ; \
virtual HRESULT GetFlattenContour(double (*&oArr3DPoints)[3], int &oNbPoints, double oArrPlaneDef[][3]) ; \
virtual void SetPropogationType( const PropogationType iType ) ; \


#define ENVTIEdefine_CATICciFiberMeshOperator(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
void  ENVTIEName::GetListOfPropagationTypes(CATListOfCATUnicodeString & oListOfPropTypes)  \
{ \
 (ENVTIECALL(CATICciFiberMeshOperator,ENVTIETypeLetter,ENVTIELetter)GetListOfPropagationTypes(oListOfPropTypes)); \
} \
void  ENVTIEName::GetListOfFilteredPropagationTypes(CompManufacturingType iType, CATListOfCATUnicodeString & oListOfPropTypes)  \
{ \
 (ENVTIECALL(CATICciFiberMeshOperator,ENVTIETypeLetter,ENVTIELetter)GetListOfFilteredPropagationTypes(iType,oListOfPropTypes)); \
} \
void  ENVTIEName::GetListOfNLSPropagationTypes(CATListOfCATUnicodeString & oListOfPropTypes)  \
{ \
 (ENVTIECALL(CATICciFiberMeshOperator,ENVTIETypeLetter,ENVTIELetter)GetListOfNLSPropagationTypes(oListOfPropTypes)); \
} \
CATBoolean  ENVTIEName::IsSeedPointSelectionNeeded (const CATUnicodeString & iPropagationType)  \
{ \
return (ENVTIECALL(CATICciFiberMeshOperator,ENVTIETypeLetter,ENVTIELetter)IsSeedPointSelectionNeeded (iPropagationType)); \
} \
CATBoolean  ENVTIEName::IsSeedCurveSelectionNeeded (const CATUnicodeString & iPropagationType)  \
{ \
return (ENVTIECALL(CATICciFiberMeshOperator,ENVTIETypeLetter,ENVTIELetter)IsSeedCurveSelectionNeeded (iPropagationType)); \
} \
CATBoolean  ENVTIEName::IsSeedAreasSelectionNeeded (const CATUnicodeString & iPropagationType)  \
{ \
return (ENVTIECALL(CATICciFiberMeshOperator,ENVTIETypeLetter,ENVTIELetter)IsSeedAreasSelectionNeeded (iPropagationType)); \
} \
CATBoolean  ENVTIEName::IsUnidirectionalSimulation (const CATUnicodeString & iPropagationType)  \
{ \
return (ENVTIECALL(CATICciFiberMeshOperator,ENVTIETypeLetter,ENVTIELetter)IsUnidirectionalSimulation (iPropagationType)); \
} \
CATBoolean  ENVTIEName::IsDisplayFlatPatternOptionNeeded()  \
{ \
return (ENVTIECALL(CATICciFiberMeshOperator,ENVTIETypeLetter,ENVTIELetter)IsDisplayFlatPatternOptionNeeded()); \
} \
void  ENVTIEName::SetTessellationData(const CATICciTessellationData * ipTessellationData)  \
{ \
 (ENVTIECALL(CATICciFiberMeshOperator,ENVTIETypeLetter,ENVTIELetter)SetTessellationData(ipTessellationData)); \
} \
void  ENVTIEName::SetMaterialType(const CompMaterialType iType)  \
{ \
 (ENVTIECALL(CATICciFiberMeshOperator,ENVTIETypeLetter,ENVTIELetter)SetMaterialType(iType)); \
} \
void  ENVTIEName::SetBiaxialMaterialParameters(const double iWarpWeft, const double iMaxStrain, const double iWarnStrain)  \
{ \
 (ENVTIECALL(CATICciFiberMeshOperator,ENVTIETypeLetter,ENVTIELetter)SetBiaxialMaterialParameters(iWarpWeft,iMaxStrain,iWarnStrain)); \
} \
void  ENVTIEName::GetBiaxialMaterialParameters(double & oWarpWeft, double & oMaxStrain, double & oWarnStrain)  \
{ \
 (ENVTIECALL(CATICciFiberMeshOperator,ENVTIETypeLetter,ENVTIELetter)GetBiaxialMaterialParameters(oWarpWeft,oMaxStrain,oWarnStrain)); \
} \
void  ENVTIEName::SetUniaxialMaterialParameters(const double iLimitShearing, const double iMaxElongation )  \
{ \
 (ENVTIECALL(CATICciFiberMeshOperator,ENVTIETypeLetter,ENVTIELetter)SetUniaxialMaterialParameters(iLimitShearing,iMaxElongation )); \
} \
void  ENVTIEName::GetUniaxialMaterialParameters(double & oLimitShearing, double & oMaxElongation )  \
{ \
 (ENVTIECALL(CATICciFiberMeshOperator,ENVTIETypeLetter,ENVTIELetter)GetUniaxialMaterialParameters(oLimitShearing,oMaxElongation )); \
} \
void  ENVTIEName::SetSeedPoint( const double *iPoint )  \
{ \
 (ENVTIECALL(CATICciFiberMeshOperator,ENVTIETypeLetter,ENVTIELetter)SetSeedPoint(iPoint )); \
} \
void  ENVTIEName::SetRosetteAtSeedPoint( const double *iX, const double *iY, const double *iZ )  \
{ \
 (ENVTIECALL(CATICciFiberMeshOperator,ENVTIETypeLetter,ENVTIELetter)SetRosetteAtSeedPoint(iX,iY,iZ )); \
} \
void  ENVTIEName::SetWarpAndWeft( const double iWarp , const double iWeft )  \
{ \
 (ENVTIECALL(CATICciFiberMeshOperator,ENVTIETypeLetter,ENVTIELetter)SetWarpAndWeft(iWarp ,iWeft )); \
} \
void  ENVTIEName::SetPropogationType(const CATUnicodeString & iPropogationType)  \
{ \
 (ENVTIECALL(CATICciFiberMeshOperator,ENVTIETypeLetter,ENVTIELetter)SetPropogationType(iPropogationType)); \
} \
int  ENVTIEName::Run( const RunMode iMode )  \
{ \
return (ENVTIECALL(CATICciFiberMeshOperator,ENVTIETypeLetter,ENVTIELetter)Run(iMode )); \
} \
HRESULT  ENVTIEName::GetFiberMesh(int *&oArrayMinusU, int *&oArrayPlusU, int *&oArrayMinusV, int *&oArrayPlusV, int *&oArrayTrigOn, double (*&oArr3DPoints)[3], int &oNumNodes)  \
{ \
return (ENVTIECALL(CATICciFiberMeshOperator,ENVTIETypeLetter,ENVTIELetter)GetFiberMesh(oArrayMinusU,oArrayPlusU,oArrayMinusV,oArrayPlusV,oArrayTrigOn,oArr3DPoints),oNumNodes)); \
} \
HRESULT  ENVTIEName::GetFlattenContour(double (*&oArr3DPoints)[3], int &oNbPoints, double oArrPlaneDef[][3])  \
{ \
return (ENVTIECALL(CATICciFiberMeshOperator,ENVTIETypeLetter,ENVTIELetter)GetFlattenContour(oArr3DPoints),oNbPoints,oArrPlaneDef)); \
} \
void  ENVTIEName::SetPropogationType( const PropogationType iType )  \
{ \
 (ENVTIECALL(CATICciFiberMeshOperator,ENVTIETypeLetter,ENVTIELetter)SetPropogationType(iType )); \
} \


/* Name of the TIE class */
#define class_TIE_CATICciFiberMeshOperator(classe)    TIECATICciFiberMeshOperator##classe


/* Common methods inside a TIE */
#define common_TIE_CATICciFiberMeshOperator(classe) \
 \
 \
/* Static initialization */ \
CATDefineCommonTIEMembers(CATICciFiberMeshOperator, classe) \
 \
 \
CATImplementTIEMethods(CATICciFiberMeshOperator, classe) \
CATImplementIUnknownMethodsForCATBaseUnknownTIE(CATICciFiberMeshOperator, classe, 1) \
CATImplementIDispatchMethodsForCATBaseUnknownTIE(CATICciFiberMeshOperator, classe) \
CATImplementCATBaseUnknownMethodsForTIE(CATICciFiberMeshOperator, classe) \
 \
void  TIECATICciFiberMeshOperator##classe::GetListOfPropagationTypes(CATListOfCATUnicodeString & oListOfPropTypes)  \
{ \
   ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetListOfPropagationTypes(oListOfPropTypes); \
} \
void  TIECATICciFiberMeshOperator##classe::GetListOfFilteredPropagationTypes(CompManufacturingType iType, CATListOfCATUnicodeString & oListOfPropTypes)  \
{ \
   ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetListOfFilteredPropagationTypes(iType,oListOfPropTypes); \
} \
void  TIECATICciFiberMeshOperator##classe::GetListOfNLSPropagationTypes(CATListOfCATUnicodeString & oListOfPropTypes)  \
{ \
   ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetListOfNLSPropagationTypes(oListOfPropTypes); \
} \
CATBoolean  TIECATICciFiberMeshOperator##classe::IsSeedPointSelectionNeeded (const CATUnicodeString & iPropagationType)  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->IsSeedPointSelectionNeeded (iPropagationType)); \
} \
CATBoolean  TIECATICciFiberMeshOperator##classe::IsSeedCurveSelectionNeeded (const CATUnicodeString & iPropagationType)  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->IsSeedCurveSelectionNeeded (iPropagationType)); \
} \
CATBoolean  TIECATICciFiberMeshOperator##classe::IsSeedAreasSelectionNeeded (const CATUnicodeString & iPropagationType)  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->IsSeedAreasSelectionNeeded (iPropagationType)); \
} \
CATBoolean  TIECATICciFiberMeshOperator##classe::IsUnidirectionalSimulation (const CATUnicodeString & iPropagationType)  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->IsUnidirectionalSimulation (iPropagationType)); \
} \
CATBoolean  TIECATICciFiberMeshOperator##classe::IsDisplayFlatPatternOptionNeeded()  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->IsDisplayFlatPatternOptionNeeded()); \
} \
void  TIECATICciFiberMeshOperator##classe::SetTessellationData(const CATICciTessellationData * ipTessellationData)  \
{ \
   ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetTessellationData(ipTessellationData); \
} \
void  TIECATICciFiberMeshOperator##classe::SetMaterialType(const CompMaterialType iType)  \
{ \
   ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetMaterialType(iType); \
} \
void  TIECATICciFiberMeshOperator##classe::SetBiaxialMaterialParameters(const double iWarpWeft, const double iMaxStrain, const double iWarnStrain)  \
{ \
   ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetBiaxialMaterialParameters(iWarpWeft,iMaxStrain,iWarnStrain); \
} \
void  TIECATICciFiberMeshOperator##classe::GetBiaxialMaterialParameters(double & oWarpWeft, double & oMaxStrain, double & oWarnStrain)  \
{ \
   ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetBiaxialMaterialParameters(oWarpWeft,oMaxStrain,oWarnStrain); \
} \
void  TIECATICciFiberMeshOperator##classe::SetUniaxialMaterialParameters(const double iLimitShearing, const double iMaxElongation )  \
{ \
   ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetUniaxialMaterialParameters(iLimitShearing,iMaxElongation ); \
} \
void  TIECATICciFiberMeshOperator##classe::GetUniaxialMaterialParameters(double & oLimitShearing, double & oMaxElongation )  \
{ \
   ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetUniaxialMaterialParameters(oLimitShearing,oMaxElongation ); \
} \
void  TIECATICciFiberMeshOperator##classe::SetSeedPoint( const double *iPoint )  \
{ \
   ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetSeedPoint(iPoint ); \
} \
void  TIECATICciFiberMeshOperator##classe::SetRosetteAtSeedPoint( const double *iX, const double *iY, const double *iZ )  \
{ \
   ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetRosetteAtSeedPoint(iX,iY,iZ ); \
} \
void  TIECATICciFiberMeshOperator##classe::SetWarpAndWeft( const double iWarp , const double iWeft )  \
{ \
   ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetWarpAndWeft(iWarp ,iWeft ); \
} \
void  TIECATICciFiberMeshOperator##classe::SetPropogationType(const CATUnicodeString & iPropogationType)  \
{ \
   ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetPropogationType(iPropogationType); \
} \
int  TIECATICciFiberMeshOperator##classe::Run( const RunMode iMode )  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->Run(iMode )); \
} \
HRESULT  TIECATICciFiberMeshOperator##classe::GetFiberMesh(int *&oArrayMinusU, int *&oArrayPlusU, int *&oArrayMinusV, int *&oArrayPlusV, int *&oArrayTrigOn, double (*&oArr3DPoints)[3], int &oNumNodes)  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetFiberMesh(oArrayMinusU,oArrayPlusU,oArrayMinusV,oArrayPlusV,oArrayTrigOn,oArr3DPoints),oNumNodes)); \
} \
HRESULT  TIECATICciFiberMeshOperator##classe::GetFlattenContour(double (*&oArr3DPoints)[3], int &oNbPoints, double oArrPlaneDef[][3])  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetFlattenContour(oArr3DPoints),oNbPoints,oArrPlaneDef)); \
} \
void  TIECATICciFiberMeshOperator##classe::SetPropogationType( const PropogationType iType )  \
{ \
   ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetPropogationType(iType ); \
} \



/* Macro used to link an implementation with an interface */
#define TIE_CATICciFiberMeshOperator(classe) \
 \
 \
declare_TIE_CATICciFiberMeshOperator(classe) \
 \
 \
CATMetaClass * __stdcall TIECATICciFiberMeshOperator##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATICciFiberMeshOperator,"CATICciFiberMeshOperator",CATICciFiberMeshOperator::MetaObject(),classe::MetaObject(),TIE); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATICciFiberMeshOperator(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIECreation(CATICciFiberMeshOperator, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATICciFiberMeshOperator##classe(classe::MetaObject(),CATICciFiberMeshOperator::MetaObject(),(void *)CreateTIECATICciFiberMeshOperator##classe)



/* Macro used to link an implementation with an interface */
/* This TIE is chained on the implementation object */
#define TIEchain_CATICciFiberMeshOperator(classe) \
 \
 \
declare_TIE_CATICciFiberMeshOperator(classe) \
 \
 \
CATMetaClass * __stdcall TIECATICciFiberMeshOperator##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATICciFiberMeshOperator,"CATICciFiberMeshOperator",CATICciFiberMeshOperator::MetaObject(),classe::MetaObject(),TIEchain); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATICciFiberMeshOperator(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIEchainCreation(CATICciFiberMeshOperator, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATICciFiberMeshOperator##classe(classe::MetaObject(),CATICciFiberMeshOperator::MetaObject(),(void *)CreateTIECATICciFiberMeshOperator##classe)


/* Macro to switch between BOA and TIE at build time */ 
#ifdef CATSYS_BOA_IS_TIE
#define BOA_CATICciFiberMeshOperator(classe) TIE_CATICciFiberMeshOperator(classe)
#else
#define BOA_CATICciFiberMeshOperator(classe) CATImplementBOA(CATICciFiberMeshOperator, classe)
#endif

#endif
