#ifndef __TIE_CATIInputDescription
#define __TIE_CATIInputDescription

#include <string.h>
#include "CATBaseUnknown.h"
#include "CATMetaClass.h"
#include "CATMacForTie.h"
#include "CATIInputDescription.h"
#include "JS0DSPA.h"


#ifdef _WINDOWS_SOURCE
#define Exported __declspec(dllexport)
#define Imported __declspec(dllimport)
#else
#define Exported 
#define Imported 
#endif


/* To link an implementation with the interface CATIInputDescription */
#define declare_TIE_CATIInputDescription(classe) \
 \
 \
class TIECATIInputDescription##classe : public CATIInputDescription \
{ \
   private: \
      CATDeclareCommonTIEMembers \
   public: \
      CATDeclareTIEMethods(CATIInputDescription, classe) \
      CATDeclareIUnknownMethodsForCATBaseUnknownTIE \
      CATDeclareIDispatchMethodsForCATBaseUnknownTIE \
      CATDeclareCATBaseUnknownMethodsForTIE \
      virtual HRESULT GetListOfModifiedFeatures(CATListValCATBaseUnknown_var& ioListOfModifiedFeatures ) ; \
      virtual HRESULT GetMainInput(CATBaseUnknown_var& oMainInput) ; \
      virtual HRESULT GetFeatureType(CATIInputDescription::FeatureType& ioFeatureType) ; \
      virtual HRESULT GetListOfDimensioningFeatures(CATListValCATBaseUnknown_var& ioListOfDimensioningFeatures) ; \
};



#define ENVTIEdeclare_CATIInputDescription(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
virtual HRESULT GetListOfModifiedFeatures(CATListValCATBaseUnknown_var& ioListOfModifiedFeatures ) ; \
virtual HRESULT GetMainInput(CATBaseUnknown_var& oMainInput) ; \
virtual HRESULT GetFeatureType(CATIInputDescription::FeatureType& ioFeatureType) ; \
virtual HRESULT GetListOfDimensioningFeatures(CATListValCATBaseUnknown_var& ioListOfDimensioningFeatures) ; \


#define ENVTIEdefine_CATIInputDescription(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
HRESULT  ENVTIEName::GetListOfModifiedFeatures(CATListValCATBaseUnknown_var& ioListOfModifiedFeatures )  \
{ \
return (ENVTIECALL(CATIInputDescription,ENVTIETypeLetter,ENVTIELetter)GetListOfModifiedFeatures(ioListOfModifiedFeatures )); \
} \
HRESULT  ENVTIEName::GetMainInput(CATBaseUnknown_var& oMainInput)  \
{ \
return (ENVTIECALL(CATIInputDescription,ENVTIETypeLetter,ENVTIELetter)GetMainInput(oMainInput)); \
} \
HRESULT  ENVTIEName::GetFeatureType(CATIInputDescription::FeatureType& ioFeatureType)  \
{ \
return (ENVTIECALL(CATIInputDescription,ENVTIETypeLetter,ENVTIELetter)GetFeatureType(ioFeatureType)); \
} \
HRESULT  ENVTIEName::GetListOfDimensioningFeatures(CATListValCATBaseUnknown_var& ioListOfDimensioningFeatures)  \
{ \
return (ENVTIECALL(CATIInputDescription,ENVTIETypeLetter,ENVTIELetter)GetListOfDimensioningFeatures(ioListOfDimensioningFeatures)); \
} \


/* Name of the TIE class */
#define class_TIE_CATIInputDescription(classe)    TIECATIInputDescription##classe


/* Common methods inside a TIE */
#define common_TIE_CATIInputDescription(classe) \
 \
 \
/* Static initialization */ \
CATDefineCommonTIEMembers(CATIInputDescription, classe) \
 \
 \
CATImplementTIEMethods(CATIInputDescription, classe) \
CATImplementIUnknownMethodsForCATBaseUnknownTIE(CATIInputDescription, classe, 1) \
CATImplementIDispatchMethodsForCATBaseUnknownTIE(CATIInputDescription, classe) \
CATImplementCATBaseUnknownMethodsForTIE(CATIInputDescription, classe) \
 \
HRESULT  TIECATIInputDescription##classe::GetListOfModifiedFeatures(CATListValCATBaseUnknown_var& ioListOfModifiedFeatures )  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetListOfModifiedFeatures(ioListOfModifiedFeatures )); \
} \
HRESULT  TIECATIInputDescription##classe::GetMainInput(CATBaseUnknown_var& oMainInput)  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetMainInput(oMainInput)); \
} \
HRESULT  TIECATIInputDescription##classe::GetFeatureType(CATIInputDescription::FeatureType& ioFeatureType)  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetFeatureType(ioFeatureType)); \
} \
HRESULT  TIECATIInputDescription##classe::GetListOfDimensioningFeatures(CATListValCATBaseUnknown_var& ioListOfDimensioningFeatures)  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetListOfDimensioningFeatures(ioListOfDimensioningFeatures)); \
} \



/* Macro used to link an implementation with an interface */
#define TIE_CATIInputDescription(classe) \
 \
 \
declare_TIE_CATIInputDescription(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIInputDescription##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIInputDescription,"CATIInputDescription",CATIInputDescription::MetaObject(),classe::MetaObject(),TIE); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIInputDescription(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIECreation(CATIInputDescription, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIInputDescription##classe(classe::MetaObject(),CATIInputDescription::MetaObject(),(void *)CreateTIECATIInputDescription##classe)



/* Macro used to link an implementation with an interface */
/* This TIE is chained on the implementation object */
#define TIEchain_CATIInputDescription(classe) \
 \
 \
declare_TIE_CATIInputDescription(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIInputDescription##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIInputDescription,"CATIInputDescription",CATIInputDescription::MetaObject(),classe::MetaObject(),TIEchain); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIInputDescription(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIEchainCreation(CATIInputDescription, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIInputDescription##classe(classe::MetaObject(),CATIInputDescription::MetaObject(),(void *)CreateTIECATIInputDescription##classe)


/* Macro to switch between BOA and TIE at build time */ 
#ifdef CATSYS_BOA_IS_TIE
#define BOA_CATIInputDescription(classe) TIE_CATIInputDescription(classe)
#else
#define BOA_CATIInputDescription(classe) CATImplementBOA(CATIInputDescription, classe)
#endif

#endif
