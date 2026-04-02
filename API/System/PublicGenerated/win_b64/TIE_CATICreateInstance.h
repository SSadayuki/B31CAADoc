#ifndef __TIE_CATICreateInstance
#define __TIE_CATICreateInstance

#include <string.h>
#include "CATBaseUnknown.h"
#include "CATMetaClass.h"
#include "CATMacForTie.h"
#include "CATICreateInstance.h"
#include "JS0DSPA.h"


#ifdef _WINDOWS_SOURCE
#define Exported __declspec(dllexport)
#define Imported __declspec(dllimport)
#else
#define Exported 
#define Imported 
#endif


/* To link an implementation with the interface CATICreateInstance */
#define declare_TIE_CATICreateInstance(classe) \
 \
 \
class TIECATICreateInstance##classe : public CATICreateInstance \
{ \
   private: \
      CATDeclareCommonTIEMembers \
   public: \
      CATDeclareTIEMethods(CATICreateInstance, classe) \
      CATDeclareIUnknownMethodsForCATBaseUnknownTIE \
      CATDeclareIDispatchMethodsForCATBaseUnknownTIE \
      CATDeclareCATBaseUnknownMethodsForTIE \
      virtual HRESULT __stdcall CreateInstance(void **oPPV) ; \
};



#define ENVTIEdeclare_CATICreateInstance(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
virtual HRESULT __stdcall CreateInstance(void **oPPV) ; \


#define ENVTIEdefine_CATICreateInstance(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
HRESULT __stdcall  ENVTIEName::CreateInstance(void **oPPV)  \
{ \
return (ENVTIECALL(CATICreateInstance,ENVTIETypeLetter,ENVTIELetter)CreateInstance(oPPV)); \
} \


/* Name of the TIE class */
#define class_TIE_CATICreateInstance(classe)    TIECATICreateInstance##classe


/* Common methods inside a TIE */
#define common_TIE_CATICreateInstance(classe) \
 \
 \
/* Static initialization */ \
CATDefineCommonTIEMembers(CATICreateInstance, classe) \
 \
 \
CATImplementTIEMethods(CATICreateInstance, classe) \
CATImplementIUnknownMethodsForCATBaseUnknownTIE(CATICreateInstance, classe, 1) \
CATImplementIDispatchMethodsForCATBaseUnknownTIE(CATICreateInstance, classe) \
CATImplementCATBaseUnknownMethodsForTIE(CATICreateInstance, classe) \
 \
HRESULT __stdcall  TIECATICreateInstance##classe::CreateInstance(void **oPPV)  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->CreateInstance(oPPV)); \
} \



/* Macro used to link an implementation with an interface */
#define TIE_CATICreateInstance(classe) \
 \
 \
declare_TIE_CATICreateInstance(classe) \
 \
 \
CATMetaClass * __stdcall TIECATICreateInstance##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATICreateInstance,"CATICreateInstance",CATICreateInstance::MetaObject(),classe::MetaObject(),TIE); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATICreateInstance(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIECreation(CATICreateInstance, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATICreateInstance##classe(classe::MetaObject(),CATICreateInstance::MetaObject(),(void *)CreateTIECATICreateInstance##classe)



/* Macro used to link an implementation with an interface */
/* This TIE is chained on the implementation object */
#define TIEchain_CATICreateInstance(classe) \
 \
 \
declare_TIE_CATICreateInstance(classe) \
 \
 \
CATMetaClass * __stdcall TIECATICreateInstance##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATICreateInstance,"CATICreateInstance",CATICreateInstance::MetaObject(),classe::MetaObject(),TIEchain); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATICreateInstance(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIEchainCreation(CATICreateInstance, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATICreateInstance##classe(classe::MetaObject(),CATICreateInstance::MetaObject(),(void *)CreateTIECATICreateInstance##classe)


/* Macro to switch between BOA and TIE at build time */ 
#ifdef CATSYS_BOA_IS_TIE
#define BOA_CATICreateInstance(classe) TIE_CATICreateInstance(classe)
#else
#define BOA_CATICreateInstance(classe) CATImplementBOA(CATICreateInstance, classe)
#endif

#endif
