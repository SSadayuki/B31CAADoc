#ifndef __TIE_CATISamAnalysisTransition
#define __TIE_CATISamAnalysisTransition

#include <string.h>
#include "CATBaseUnknown.h"
#include "CATMetaClass.h"
#include "CATMacForTie.h"
#include "CATISamAnalysisTransition.h"
#include "JS0DSPA.h"


#ifdef _WINDOWS_SOURCE
#define Exported __declspec(dllexport)
#define Imported __declspec(dllimport)
#else
#define Exported 
#define Imported 
#endif


/* To link an implementation with the interface CATISamAnalysisTransition */
#define declare_TIE_CATISamAnalysisTransition(classe) \
 \
 \
class TIECATISamAnalysisTransition##classe : public CATISamAnalysisTransition \
{ \
   private: \
      CATDeclareCommonTIEMembers \
   public: \
      CATDeclareTIEMethods(CATISamAnalysisTransition, classe) \
      CATDeclareIUnknownMethodsForCATBaseUnknownTIE \
      CATDeclareIDispatchMethodsForCATBaseUnknownTIE \
      CATDeclareCATBaseUnknownMethodsForTIE \
      virtual HRESULT ExecuteTransition(const CATDocument* iDocument) ; \
};



#define ENVTIEdeclare_CATISamAnalysisTransition(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
virtual HRESULT ExecuteTransition(const CATDocument* iDocument) ; \


#define ENVTIEdefine_CATISamAnalysisTransition(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
HRESULT  ENVTIEName::ExecuteTransition(const CATDocument* iDocument)  \
{ \
return (ENVTIECALL(CATISamAnalysisTransition,ENVTIETypeLetter,ENVTIELetter)ExecuteTransition(iDocument)); \
} \


/* Name of the TIE class */
#define class_TIE_CATISamAnalysisTransition(classe)    TIECATISamAnalysisTransition##classe


/* Common methods inside a TIE */
#define common_TIE_CATISamAnalysisTransition(classe) \
 \
 \
/* Static initialization */ \
CATDefineCommonTIEMembers(CATISamAnalysisTransition, classe) \
 \
 \
CATImplementTIEMethods(CATISamAnalysisTransition, classe) \
CATImplementIUnknownMethodsForCATBaseUnknownTIE(CATISamAnalysisTransition, classe, 1) \
CATImplementIDispatchMethodsForCATBaseUnknownTIE(CATISamAnalysisTransition, classe) \
CATImplementCATBaseUnknownMethodsForTIE(CATISamAnalysisTransition, classe) \
 \
HRESULT  TIECATISamAnalysisTransition##classe::ExecuteTransition(const CATDocument* iDocument)  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->ExecuteTransition(iDocument)); \
} \



/* Macro used to link an implementation with an interface */
#define TIE_CATISamAnalysisTransition(classe) \
 \
 \
declare_TIE_CATISamAnalysisTransition(classe) \
 \
 \
CATMetaClass * __stdcall TIECATISamAnalysisTransition##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATISamAnalysisTransition,"CATISamAnalysisTransition",CATISamAnalysisTransition::MetaObject(),classe::MetaObject(),TIE); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATISamAnalysisTransition(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIECreation(CATISamAnalysisTransition, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATISamAnalysisTransition##classe(classe::MetaObject(),CATISamAnalysisTransition::MetaObject(),(void *)CreateTIECATISamAnalysisTransition##classe)



/* Macro used to link an implementation with an interface */
/* This TIE is chained on the implementation object */
#define TIEchain_CATISamAnalysisTransition(classe) \
 \
 \
declare_TIE_CATISamAnalysisTransition(classe) \
 \
 \
CATMetaClass * __stdcall TIECATISamAnalysisTransition##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATISamAnalysisTransition,"CATISamAnalysisTransition",CATISamAnalysisTransition::MetaObject(),classe::MetaObject(),TIEchain); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATISamAnalysisTransition(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIEchainCreation(CATISamAnalysisTransition, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATISamAnalysisTransition##classe(classe::MetaObject(),CATISamAnalysisTransition::MetaObject(),(void *)CreateTIECATISamAnalysisTransition##classe)


/* Macro to switch between BOA and TIE at build time */ 
#ifdef CATSYS_BOA_IS_TIE
#define BOA_CATISamAnalysisTransition(classe) TIE_CATISamAnalysisTransition(classe)
#else
#define BOA_CATISamAnalysisTransition(classe) CATImplementBOA(CATISamAnalysisTransition, classe)
#endif

#endif
