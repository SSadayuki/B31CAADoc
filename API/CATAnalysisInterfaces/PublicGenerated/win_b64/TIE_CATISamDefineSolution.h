#ifndef __TIE_CATISamDefineSolution
#define __TIE_CATISamDefineSolution

#include <string.h>
#include "CATBaseUnknown.h"
#include "CATMetaClass.h"
#include "CATMacForTie.h"
#include "CATISamDefineSolution.h"
#include "JS0DSPA.h"


#ifdef _WINDOWS_SOURCE
#define Exported __declspec(dllexport)
#define Imported __declspec(dllimport)
#else
#define Exported 
#define Imported 
#endif


/* To link an implementation with the interface CATISamDefineSolution */
#define declare_TIE_CATISamDefineSolution(classe) \
 \
 \
class TIECATISamDefineSolution##classe : public CATISamDefineSolution \
{ \
   private: \
      CATDeclareCommonTIEMembers \
   public: \
      CATDeclareTIEMethods(CATISamDefineSolution, classe) \
      CATDeclareIUnknownMethodsForCATBaseUnknownTIE \
      CATDeclareIDispatchMethodsForCATBaseUnknownTIE \
      CATDeclareCATBaseUnknownMethodsForTIE \
      virtual HRESULT GetSetsForDefinition(int &oNbDefineSets, CATSamDefineSet * &oDefineSets) ; \
      virtual int DefineDefaultSensors(const CATBoolean iCreateSensor, const CATISamAnalysisSet* iNewSolution) ; \
};



#define ENVTIEdeclare_CATISamDefineSolution(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
virtual HRESULT GetSetsForDefinition(int &oNbDefineSets, CATSamDefineSet * &oDefineSets) ; \
virtual int DefineDefaultSensors(const CATBoolean iCreateSensor, const CATISamAnalysisSet* iNewSolution) ; \


#define ENVTIEdefine_CATISamDefineSolution(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
HRESULT  ENVTIEName::GetSetsForDefinition(int &oNbDefineSets, CATSamDefineSet * &oDefineSets)  \
{ \
return (ENVTIECALL(CATISamDefineSolution,ENVTIETypeLetter,ENVTIELetter)GetSetsForDefinition(oNbDefineSets,oDefineSets)); \
} \
int  ENVTIEName::DefineDefaultSensors(const CATBoolean iCreateSensor, const CATISamAnalysisSet* iNewSolution)  \
{ \
return (ENVTIECALL(CATISamDefineSolution,ENVTIETypeLetter,ENVTIELetter)DefineDefaultSensors(iCreateSensor,iNewSolution)); \
} \


/* Name of the TIE class */
#define class_TIE_CATISamDefineSolution(classe)    TIECATISamDefineSolution##classe


/* Common methods inside a TIE */
#define common_TIE_CATISamDefineSolution(classe) \
 \
 \
/* Static initialization */ \
CATDefineCommonTIEMembers(CATISamDefineSolution, classe) \
 \
 \
CATImplementTIEMethods(CATISamDefineSolution, classe) \
CATImplementIUnknownMethodsForCATBaseUnknownTIE(CATISamDefineSolution, classe, 1) \
CATImplementIDispatchMethodsForCATBaseUnknownTIE(CATISamDefineSolution, classe) \
CATImplementCATBaseUnknownMethodsForTIE(CATISamDefineSolution, classe) \
 \
HRESULT  TIECATISamDefineSolution##classe::GetSetsForDefinition(int &oNbDefineSets, CATSamDefineSet * &oDefineSets)  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetSetsForDefinition(oNbDefineSets,oDefineSets)); \
} \
int  TIECATISamDefineSolution##classe::DefineDefaultSensors(const CATBoolean iCreateSensor, const CATISamAnalysisSet* iNewSolution)  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->DefineDefaultSensors(iCreateSensor,iNewSolution)); \
} \



/* Macro used to link an implementation with an interface */
#define TIE_CATISamDefineSolution(classe) \
 \
 \
declare_TIE_CATISamDefineSolution(classe) \
 \
 \
CATMetaClass * __stdcall TIECATISamDefineSolution##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATISamDefineSolution,"CATISamDefineSolution",CATISamDefineSolution::MetaObject(),classe::MetaObject(),TIE); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATISamDefineSolution(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIECreation(CATISamDefineSolution, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATISamDefineSolution##classe(classe::MetaObject(),CATISamDefineSolution::MetaObject(),(void *)CreateTIECATISamDefineSolution##classe)



/* Macro used to link an implementation with an interface */
/* This TIE is chained on the implementation object */
#define TIEchain_CATISamDefineSolution(classe) \
 \
 \
declare_TIE_CATISamDefineSolution(classe) \
 \
 \
CATMetaClass * __stdcall TIECATISamDefineSolution##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATISamDefineSolution,"CATISamDefineSolution",CATISamDefineSolution::MetaObject(),classe::MetaObject(),TIEchain); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATISamDefineSolution(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIEchainCreation(CATISamDefineSolution, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATISamDefineSolution##classe(classe::MetaObject(),CATISamDefineSolution::MetaObject(),(void *)CreateTIECATISamDefineSolution##classe)


/* Macro to switch between BOA and TIE at build time */ 
#ifdef CATSYS_BOA_IS_TIE
#define BOA_CATISamDefineSolution(classe) TIE_CATISamDefineSolution(classe)
#else
#define BOA_CATISamDefineSolution(classe) CATImplementBOA(CATISamDefineSolution, classe)
#endif

#endif
