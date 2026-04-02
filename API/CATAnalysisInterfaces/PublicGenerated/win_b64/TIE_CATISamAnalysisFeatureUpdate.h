#ifndef __TIE_CATISamAnalysisFeatureUpdate
#define __TIE_CATISamAnalysisFeatureUpdate

#include <string.h>
#include "CATBaseUnknown.h"
#include "CATMetaClass.h"
#include "CATMacForTie.h"
#include "CATISamAnalysisFeatureUpdate.h"
#include "JS0DSPA.h"


#ifdef _WINDOWS_SOURCE
#define Exported __declspec(dllexport)
#define Imported __declspec(dllimport)
#else
#define Exported 
#define Imported 
#endif


/* To link an implementation with the interface CATISamAnalysisFeatureUpdate */
#define declare_TIE_CATISamAnalysisFeatureUpdate(classe) \
 \
 \
class TIECATISamAnalysisFeatureUpdate##classe : public CATISamAnalysisFeatureUpdate \
{ \
   private: \
      CATDeclareCommonTIEMembers \
   public: \
      CATDeclareTIEMethods(CATISamAnalysisFeatureUpdate, classe) \
      CATDeclareIUnknownMethodsForCATBaseUnknownTIE \
      CATDeclareIDispatchMethodsForCATBaseUnknownTIE \
      CATDeclareCATBaseUnknownMethodsForTIE \
      virtual HRESULT Update(CATSamUpdateAction iTypeAction) ; \
      virtual void IsUpToDate(CATBoolean& ioflag) const ; \
      virtual void	SetNoUpToDate() ; \
};



#define ENVTIEdeclare_CATISamAnalysisFeatureUpdate(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
virtual HRESULT Update(CATSamUpdateAction iTypeAction) ; \
virtual void IsUpToDate(CATBoolean& ioflag) const ; \
virtual void	SetNoUpToDate() ; \


#define ENVTIEdefine_CATISamAnalysisFeatureUpdate(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
HRESULT  ENVTIEName::Update(CATSamUpdateAction iTypeAction)  \
{ \
return (ENVTIECALL(CATISamAnalysisFeatureUpdate,ENVTIETypeLetter,ENVTIELetter)Update(iTypeAction)); \
} \
void  ENVTIEName::IsUpToDate(CATBoolean& ioflag) const  \
{ \
 (ENVTIECALL(CATISamAnalysisFeatureUpdate,ENVTIETypeLetter,ENVTIELetter)IsUpToDate(ioflag)); \
} \
void	 ENVTIEName::SetNoUpToDate()  \
{ \
 (ENVTIECALL(CATISamAnalysisFeatureUpdate,ENVTIETypeLetter,ENVTIELetter)SetNoUpToDate()); \
} \


/* Name of the TIE class */
#define class_TIE_CATISamAnalysisFeatureUpdate(classe)    TIECATISamAnalysisFeatureUpdate##classe


/* Common methods inside a TIE */
#define common_TIE_CATISamAnalysisFeatureUpdate(classe) \
 \
 \
/* Static initialization */ \
CATDefineCommonTIEMembers(CATISamAnalysisFeatureUpdate, classe) \
 \
 \
CATImplementTIEMethods(CATISamAnalysisFeatureUpdate, classe) \
CATImplementIUnknownMethodsForCATBaseUnknownTIE(CATISamAnalysisFeatureUpdate, classe, 1) \
CATImplementIDispatchMethodsForCATBaseUnknownTIE(CATISamAnalysisFeatureUpdate, classe) \
CATImplementCATBaseUnknownMethodsForTIE(CATISamAnalysisFeatureUpdate, classe) \
 \
HRESULT  TIECATISamAnalysisFeatureUpdate##classe::Update(CATSamUpdateAction iTypeAction)  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->Update(iTypeAction)); \
} \
void  TIECATISamAnalysisFeatureUpdate##classe::IsUpToDate(CATBoolean& ioflag) const  \
{ \
   ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->IsUpToDate(ioflag); \
} \
void	 TIECATISamAnalysisFeatureUpdate##classe::SetNoUpToDate()  \
{ \
   ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetNoUpToDate(); \
} \



/* Macro used to link an implementation with an interface */
#define TIE_CATISamAnalysisFeatureUpdate(classe) \
 \
 \
declare_TIE_CATISamAnalysisFeatureUpdate(classe) \
 \
 \
CATMetaClass * __stdcall TIECATISamAnalysisFeatureUpdate##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATISamAnalysisFeatureUpdate,"CATISamAnalysisFeatureUpdate",CATISamAnalysisFeatureUpdate::MetaObject(),classe::MetaObject(),TIE); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATISamAnalysisFeatureUpdate(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIECreation(CATISamAnalysisFeatureUpdate, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATISamAnalysisFeatureUpdate##classe(classe::MetaObject(),CATISamAnalysisFeatureUpdate::MetaObject(),(void *)CreateTIECATISamAnalysisFeatureUpdate##classe)



/* Macro used to link an implementation with an interface */
/* This TIE is chained on the implementation object */
#define TIEchain_CATISamAnalysisFeatureUpdate(classe) \
 \
 \
declare_TIE_CATISamAnalysisFeatureUpdate(classe) \
 \
 \
CATMetaClass * __stdcall TIECATISamAnalysisFeatureUpdate##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATISamAnalysisFeatureUpdate,"CATISamAnalysisFeatureUpdate",CATISamAnalysisFeatureUpdate::MetaObject(),classe::MetaObject(),TIEchain); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATISamAnalysisFeatureUpdate(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIEchainCreation(CATISamAnalysisFeatureUpdate, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATISamAnalysisFeatureUpdate##classe(classe::MetaObject(),CATISamAnalysisFeatureUpdate::MetaObject(),(void *)CreateTIECATISamAnalysisFeatureUpdate##classe)


/* Macro to switch between BOA and TIE at build time */ 
#ifdef CATSYS_BOA_IS_TIE
#define BOA_CATISamAnalysisFeatureUpdate(classe) TIE_CATISamAnalysisFeatureUpdate(classe)
#else
#define BOA_CATISamAnalysisFeatureUpdate(classe) CATImplementBOA(CATISamAnalysisFeatureUpdate, classe)
#endif

#endif
