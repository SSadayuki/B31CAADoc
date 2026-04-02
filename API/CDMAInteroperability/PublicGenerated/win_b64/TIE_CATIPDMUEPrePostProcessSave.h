#ifndef __TIE_CATIPDMUEPrePostProcessSave
#define __TIE_CATIPDMUEPrePostProcessSave

#include <string.h>
#include "CATBaseUnknown.h"
#include "CATMetaClass.h"
#include "CATMacForTie.h"
#include "CATIPDMUEPrePostProcessSave.h"
#include "JS0DSPA.h"


#ifdef _WINDOWS_SOURCE
#define Exported __declspec(dllexport)
#define Imported __declspec(dllimport)
#else
#define Exported 
#define Imported 
#endif


/* To link an implementation with the interface CATIPDMUEPrePostProcessSave */
#define declare_TIE_CATIPDMUEPrePostProcessSave(classe) \
 \
 \
class TIECATIPDMUEPrePostProcessSave##classe : public CATIPDMUEPrePostProcessSave \
{ \
   private: \
      CATDeclareCommonTIEMembers \
   public: \
      CATDeclareTIEMethods(CATIPDMUEPrePostProcessSave, classe) \
      CATDeclareIUnknownMethodsForCATBaseUnknownTIE \
      CATDeclareIDispatchMethodsForCATBaseUnknownTIE \
      CATDeclareCATBaseUnknownMethodsForTIE \
      virtual HRESULT PreProcess (CATListPtrCATDocument * iListOfDocumentsToSave, CATListPtrCATDocument *& oListOfForbiddenDocuments); \
      virtual HRESULT PostProcess (CATListPtrCATDocument * iListOfSavedDocuments); \
};



#define ENVTIEdeclare_CATIPDMUEPrePostProcessSave(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
virtual HRESULT PreProcess (CATListPtrCATDocument * iListOfDocumentsToSave, CATListPtrCATDocument *& oListOfForbiddenDocuments); \
virtual HRESULT PostProcess (CATListPtrCATDocument * iListOfSavedDocuments); \


#define ENVTIEdefine_CATIPDMUEPrePostProcessSave(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
HRESULT  ENVTIEName::PreProcess (CATListPtrCATDocument * iListOfDocumentsToSave, CATListPtrCATDocument *& oListOfForbiddenDocuments) \
{ \
return (ENVTIECALL(CATIPDMUEPrePostProcessSave,ENVTIETypeLetter,ENVTIELetter)PreProcess (iListOfDocumentsToSave,oListOfForbiddenDocuments)); \
} \
HRESULT  ENVTIEName::PostProcess (CATListPtrCATDocument * iListOfSavedDocuments) \
{ \
return (ENVTIECALL(CATIPDMUEPrePostProcessSave,ENVTIETypeLetter,ENVTIELetter)PostProcess (iListOfSavedDocuments)); \
} \


/* Name of the TIE class */
#define class_TIE_CATIPDMUEPrePostProcessSave(classe)    TIECATIPDMUEPrePostProcessSave##classe


/* Common methods inside a TIE */
#define common_TIE_CATIPDMUEPrePostProcessSave(classe) \
 \
 \
/* Static initialization */ \
CATDefineCommonTIEMembers(CATIPDMUEPrePostProcessSave, classe) \
 \
 \
CATImplementTIEMethods(CATIPDMUEPrePostProcessSave, classe) \
CATImplementIUnknownMethodsForCATBaseUnknownTIE(CATIPDMUEPrePostProcessSave, classe, 1) \
CATImplementIDispatchMethodsForCATBaseUnknownTIE(CATIPDMUEPrePostProcessSave, classe) \
CATImplementCATBaseUnknownMethodsForTIE(CATIPDMUEPrePostProcessSave, classe) \
 \
HRESULT  TIECATIPDMUEPrePostProcessSave##classe::PreProcess (CATListPtrCATDocument * iListOfDocumentsToSave, CATListPtrCATDocument *& oListOfForbiddenDocuments) \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->PreProcess (iListOfDocumentsToSave,oListOfForbiddenDocuments)); \
} \
HRESULT  TIECATIPDMUEPrePostProcessSave##classe::PostProcess (CATListPtrCATDocument * iListOfSavedDocuments) \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->PostProcess (iListOfSavedDocuments)); \
} \



/* Macro used to link an implementation with an interface */
#define TIE_CATIPDMUEPrePostProcessSave(classe) \
 \
 \
declare_TIE_CATIPDMUEPrePostProcessSave(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIPDMUEPrePostProcessSave##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIPDMUEPrePostProcessSave,"CATIPDMUEPrePostProcessSave",CATIPDMUEPrePostProcessSave::MetaObject(),classe::MetaObject(),TIE); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIPDMUEPrePostProcessSave(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIECreation(CATIPDMUEPrePostProcessSave, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIPDMUEPrePostProcessSave##classe(classe::MetaObject(),CATIPDMUEPrePostProcessSave::MetaObject(),(void *)CreateTIECATIPDMUEPrePostProcessSave##classe)



/* Macro used to link an implementation with an interface */
/* This TIE is chained on the implementation object */
#define TIEchain_CATIPDMUEPrePostProcessSave(classe) \
 \
 \
declare_TIE_CATIPDMUEPrePostProcessSave(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIPDMUEPrePostProcessSave##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIPDMUEPrePostProcessSave,"CATIPDMUEPrePostProcessSave",CATIPDMUEPrePostProcessSave::MetaObject(),classe::MetaObject(),TIEchain); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIPDMUEPrePostProcessSave(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIEchainCreation(CATIPDMUEPrePostProcessSave, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIPDMUEPrePostProcessSave##classe(classe::MetaObject(),CATIPDMUEPrePostProcessSave::MetaObject(),(void *)CreateTIECATIPDMUEPrePostProcessSave##classe)


/* Macro to switch between BOA and TIE at build time */ 
#ifdef CATSYS_BOA_IS_TIE
#define BOA_CATIPDMUEPrePostProcessSave(classe) TIE_CATIPDMUEPrePostProcessSave(classe)
#else
#define BOA_CATIPDMUEPrePostProcessSave(classe) CATImplementBOA(CATIPDMUEPrePostProcessSave, classe)
#endif

#endif
