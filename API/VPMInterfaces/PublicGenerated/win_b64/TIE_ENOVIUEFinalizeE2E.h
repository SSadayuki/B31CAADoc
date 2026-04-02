#ifndef __TIE_ENOVIUEFinalizeE2E
#define __TIE_ENOVIUEFinalizeE2E

#include <string.h>
#include "CATBaseUnknown.h"
#include "CATMetaClass.h"
#include "CATMacForTie.h"
#include "ENOVIUEFinalizeE2E.h"
#include "JS0DSPA.h"


#ifdef _WINDOWS_SOURCE
#define Exported __declspec(dllexport)
#define Imported __declspec(dllimport)
#else
#define Exported 
#define Imported 
#endif


/* To link an implementation with the interface ENOVIUEFinalizeE2E */
#define declare_TIE_ENOVIUEFinalizeE2E(classe) \
 \
 \
class TIEENOVIUEFinalizeE2E##classe : public ENOVIUEFinalizeE2E \
{ \
   private: \
      CATDeclareCommonTIEMembers \
   public: \
      CATDeclareTIEMethods(ENOVIUEFinalizeE2E, classe) \
      CATDeclareIUnknownMethodsForCATBaseUnknownTIE \
      CATDeclareIDispatchMethodsForCATBaseUnknownTIE \
      CATDeclareCATBaseUnknownMethodsForTIE \
      virtual HRESULT Run(const CATListValCATBaseUnknown_var& iListObs); \
};



#define ENVTIEdeclare_ENOVIUEFinalizeE2E(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
virtual HRESULT Run(const CATListValCATBaseUnknown_var& iListObs); \


#define ENVTIEdefine_ENOVIUEFinalizeE2E(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
HRESULT  ENVTIEName::Run(const CATListValCATBaseUnknown_var& iListObs) \
{ \
return (ENVTIECALL(ENOVIUEFinalizeE2E,ENVTIETypeLetter,ENVTIELetter)Run(iListObs)); \
} \


/* Name of the TIE class */
#define class_TIE_ENOVIUEFinalizeE2E(classe)    TIEENOVIUEFinalizeE2E##classe


/* Common methods inside a TIE */
#define common_TIE_ENOVIUEFinalizeE2E(classe) \
 \
 \
/* Static initialization */ \
CATDefineCommonTIEMembers(ENOVIUEFinalizeE2E, classe) \
 \
 \
CATImplementTIEMethods(ENOVIUEFinalizeE2E, classe) \
CATImplementIUnknownMethodsForCATBaseUnknownTIE(ENOVIUEFinalizeE2E, classe, 1) \
CATImplementIDispatchMethodsForCATBaseUnknownTIE(ENOVIUEFinalizeE2E, classe) \
CATImplementCATBaseUnknownMethodsForTIE(ENOVIUEFinalizeE2E, classe) \
 \
HRESULT  TIEENOVIUEFinalizeE2E##classe::Run(const CATListValCATBaseUnknown_var& iListObs) \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->Run(iListObs)); \
} \



/* Macro used to link an implementation with an interface */
#define TIE_ENOVIUEFinalizeE2E(classe) \
 \
 \
declare_TIE_ENOVIUEFinalizeE2E(classe) \
 \
 \
CATMetaClass * __stdcall TIEENOVIUEFinalizeE2E##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_ENOVIUEFinalizeE2E,"ENOVIUEFinalizeE2E",ENOVIUEFinalizeE2E::MetaObject(),classe::MetaObject(),TIE); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_ENOVIUEFinalizeE2E(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIECreation(ENOVIUEFinalizeE2E, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicENOVIUEFinalizeE2E##classe(classe::MetaObject(),ENOVIUEFinalizeE2E::MetaObject(),(void *)CreateTIEENOVIUEFinalizeE2E##classe)



/* Macro used to link an implementation with an interface */
/* This TIE is chained on the implementation object */
#define TIEchain_ENOVIUEFinalizeE2E(classe) \
 \
 \
declare_TIE_ENOVIUEFinalizeE2E(classe) \
 \
 \
CATMetaClass * __stdcall TIEENOVIUEFinalizeE2E##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_ENOVIUEFinalizeE2E,"ENOVIUEFinalizeE2E",ENOVIUEFinalizeE2E::MetaObject(),classe::MetaObject(),TIEchain); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_ENOVIUEFinalizeE2E(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIEchainCreation(ENOVIUEFinalizeE2E, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicENOVIUEFinalizeE2E##classe(classe::MetaObject(),ENOVIUEFinalizeE2E::MetaObject(),(void *)CreateTIEENOVIUEFinalizeE2E##classe)


/* Macro to switch between BOA and TIE at build time */ 
#ifdef CATSYS_BOA_IS_TIE
#define BOA_ENOVIUEFinalizeE2E(classe) TIE_ENOVIUEFinalizeE2E(classe)
#else
#define BOA_ENOVIUEFinalizeE2E(classe) CATImplementBOA(ENOVIUEFinalizeE2E, classe)
#endif

#endif
