#ifndef __TIE_CATIPDMUESave
#define __TIE_CATIPDMUESave

#include <string.h>
#include "CATBaseUnknown.h"
#include "CATMetaClass.h"
#include "CATMacForTie.h"
#include "CATIPDMUESave.h"
#include "JS0DSPA.h"


#ifdef _WINDOWS_SOURCE
#define Exported __declspec(dllexport)
#define Imported __declspec(dllimport)
#else
#define Exported 
#define Imported 
#endif


/* To link an implementation with the interface CATIPDMUESave */
#define declare_TIE_CATIPDMUESave(classe) \
 \
 \
class TIECATIPDMUESave##classe : public CATIPDMUESave \
{ \
   private: \
      CATDeclareCommonTIEMembers \
   public: \
      CATDeclareTIEMethods(CATIPDMUESave, classe) \
      CATDeclareIUnknownMethodsForCATBaseUnknownTIE \
      CATDeclareIDispatchMethodsForCATBaseUnknownTIE \
      CATDeclareCATBaseUnknownMethodsForTIE \
      virtual HRESULT OnSave (CATDocument * iDoc, HRESULT *oGranted); \
};



#define ENVTIEdeclare_CATIPDMUESave(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
virtual HRESULT OnSave (CATDocument * iDoc, HRESULT *oGranted); \


#define ENVTIEdefine_CATIPDMUESave(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
HRESULT  ENVTIEName::OnSave (CATDocument * iDoc, HRESULT *oGranted) \
{ \
return (ENVTIECALL(CATIPDMUESave,ENVTIETypeLetter,ENVTIELetter)OnSave (iDoc,oGranted)); \
} \


/* Name of the TIE class */
#define class_TIE_CATIPDMUESave(classe)    TIECATIPDMUESave##classe


/* Common methods inside a TIE */
#define common_TIE_CATIPDMUESave(classe) \
 \
 \
/* Static initialization */ \
CATDefineCommonTIEMembers(CATIPDMUESave, classe) \
 \
 \
CATImplementTIEMethods(CATIPDMUESave, classe) \
CATImplementIUnknownMethodsForCATBaseUnknownTIE(CATIPDMUESave, classe, 1) \
CATImplementIDispatchMethodsForCATBaseUnknownTIE(CATIPDMUESave, classe) \
CATImplementCATBaseUnknownMethodsForTIE(CATIPDMUESave, classe) \
 \
HRESULT  TIECATIPDMUESave##classe::OnSave (CATDocument * iDoc, HRESULT *oGranted) \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->OnSave (iDoc,oGranted)); \
} \



/* Macro used to link an implementation with an interface */
#define TIE_CATIPDMUESave(classe) \
 \
 \
declare_TIE_CATIPDMUESave(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIPDMUESave##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIPDMUESave,"CATIPDMUESave",CATIPDMUESave::MetaObject(),classe::MetaObject(),TIE); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIPDMUESave(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIECreation(CATIPDMUESave, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIPDMUESave##classe(classe::MetaObject(),CATIPDMUESave::MetaObject(),(void *)CreateTIECATIPDMUESave##classe)



/* Macro used to link an implementation with an interface */
/* This TIE is chained on the implementation object */
#define TIEchain_CATIPDMUESave(classe) \
 \
 \
declare_TIE_CATIPDMUESave(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIPDMUESave##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIPDMUESave,"CATIPDMUESave",CATIPDMUESave::MetaObject(),classe::MetaObject(),TIEchain); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIPDMUESave(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIEchainCreation(CATIPDMUESave, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIPDMUESave##classe(classe::MetaObject(),CATIPDMUESave::MetaObject(),(void *)CreateTIECATIPDMUESave##classe)


/* Macro to switch between BOA and TIE at build time */ 
#ifdef CATSYS_BOA_IS_TIE
#define BOA_CATIPDMUESave(classe) TIE_CATIPDMUESave(classe)
#else
#define BOA_CATIPDMUESave(classe) CATImplementBOA(CATIPDMUESave, classe)
#endif

#endif
