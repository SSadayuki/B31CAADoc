#ifndef __TIE_CATISamExplicitation
#define __TIE_CATISamExplicitation

#include <string.h>
#include "CATBaseUnknown.h"
#include "CATMetaClass.h"
#include "CATMacForTie.h"
#include "CATISamExplicitation.h"
#include "JS0DSPA.h"


#ifdef _WINDOWS_SOURCE
#define Exported __declspec(dllexport)
#define Imported __declspec(dllimport)
#else
#define Exported 
#define Imported 
#endif


/* To link an implementation with the interface CATISamExplicitation */
#define declare_TIE_CATISamExplicitation(classe) \
 \
 \
class TIECATISamExplicitation##classe : public CATISamExplicitation \
{ \
   private: \
      CATDeclareCommonTIEMembers \
   public: \
      CATDeclareTIEMethods(CATISamExplicitation, classe) \
      CATDeclareIUnknownMethodsForCATBaseUnknownTIE \
      CATDeclareIDispatchMethodsForCATBaseUnknownTIE \
      CATDeclareCATBaseUnknownMethodsForTIE \
      virtual HRESULT TranslateToFieldModel(CATISpecObject*			  iFeatToTranslate, CATISamAnalysisModel*		  iFEMModel, CATAnalysisExplicitListUsr& iOldExplObjects, CATAnalysisExplicitListUsr& oNewExplObjects) ; \
};



#define ENVTIEdeclare_CATISamExplicitation(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
virtual HRESULT TranslateToFieldModel(CATISpecObject*			  iFeatToTranslate, CATISamAnalysisModel*		  iFEMModel, CATAnalysisExplicitListUsr& iOldExplObjects, CATAnalysisExplicitListUsr& oNewExplObjects) ; \


#define ENVTIEdefine_CATISamExplicitation(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
HRESULT  ENVTIEName::TranslateToFieldModel(CATISpecObject*			  iFeatToTranslate, CATISamAnalysisModel*		  iFEMModel, CATAnalysisExplicitListUsr& iOldExplObjects, CATAnalysisExplicitListUsr& oNewExplObjects)  \
{ \
return (ENVTIECALL(CATISamExplicitation,ENVTIETypeLetter,ENVTIELetter)TranslateToFieldModel(iFeatToTranslate,iFEMModel,iOldExplObjects,oNewExplObjects)); \
} \


/* Name of the TIE class */
#define class_TIE_CATISamExplicitation(classe)    TIECATISamExplicitation##classe


/* Common methods inside a TIE */
#define common_TIE_CATISamExplicitation(classe) \
 \
 \
/* Static initialization */ \
CATDefineCommonTIEMembers(CATISamExplicitation, classe) \
 \
 \
CATImplementTIEMethods(CATISamExplicitation, classe) \
CATImplementIUnknownMethodsForCATBaseUnknownTIE(CATISamExplicitation, classe, 1) \
CATImplementIDispatchMethodsForCATBaseUnknownTIE(CATISamExplicitation, classe) \
CATImplementCATBaseUnknownMethodsForTIE(CATISamExplicitation, classe) \
 \
HRESULT  TIECATISamExplicitation##classe::TranslateToFieldModel(CATISpecObject*			  iFeatToTranslate, CATISamAnalysisModel*		  iFEMModel, CATAnalysisExplicitListUsr& iOldExplObjects, CATAnalysisExplicitListUsr& oNewExplObjects)  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->TranslateToFieldModel(iFeatToTranslate,iFEMModel,iOldExplObjects,oNewExplObjects)); \
} \



/* Macro used to link an implementation with an interface */
#define TIE_CATISamExplicitation(classe) \
 \
 \
declare_TIE_CATISamExplicitation(classe) \
 \
 \
CATMetaClass * __stdcall TIECATISamExplicitation##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATISamExplicitation,"CATISamExplicitation",CATISamExplicitation::MetaObject(),classe::MetaObject(),TIE); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATISamExplicitation(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIECreation(CATISamExplicitation, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATISamExplicitation##classe(classe::MetaObject(),CATISamExplicitation::MetaObject(),(void *)CreateTIECATISamExplicitation##classe)



/* Macro used to link an implementation with an interface */
/* This TIE is chained on the implementation object */
#define TIEchain_CATISamExplicitation(classe) \
 \
 \
declare_TIE_CATISamExplicitation(classe) \
 \
 \
CATMetaClass * __stdcall TIECATISamExplicitation##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATISamExplicitation,"CATISamExplicitation",CATISamExplicitation::MetaObject(),classe::MetaObject(),TIEchain); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATISamExplicitation(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIEchainCreation(CATISamExplicitation, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATISamExplicitation##classe(classe::MetaObject(),CATISamExplicitation::MetaObject(),(void *)CreateTIECATISamExplicitation##classe)


/* Macro to switch between BOA and TIE at build time */ 
#ifdef CATSYS_BOA_IS_TIE
#define BOA_CATISamExplicitation(classe) TIE_CATISamExplicitation(classe)
#else
#define BOA_CATISamExplicitation(classe) CATImplementBOA(CATISamExplicitation, classe)
#endif

#endif
