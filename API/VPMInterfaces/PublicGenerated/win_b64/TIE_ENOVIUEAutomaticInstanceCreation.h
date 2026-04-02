#ifndef __TIE_ENOVIUEAutomaticInstanceCreation
#define __TIE_ENOVIUEAutomaticInstanceCreation

#include <string.h>
#include "CATBaseUnknown.h"
#include "CATMetaClass.h"
#include "CATMacForTie.h"
#include "ENOVIUEAutomaticInstanceCreation.h"
#include "JS0DSPA.h"


#ifdef _WINDOWS_SOURCE
#define Exported __declspec(dllexport)
#define Imported __declspec(dllimport)
#else
#define Exported 
#define Imported 
#endif


/* To link an implementation with the interface ENOVIUEAutomaticInstanceCreation */
#define declare_TIE_ENOVIUEAutomaticInstanceCreation(classe) \
 \
 \
class TIEENOVIUEAutomaticInstanceCreation##classe : public ENOVIUEAutomaticInstanceCreation \
{ \
   private: \
      CATDeclareCommonTIEMembers \
   public: \
      CATDeclareTIEMethods(ENOVIUEAutomaticInstanceCreation, classe) \
      CATDeclareIUnknownMethodsForCATBaseUnknownTIE \
      CATDeclareIDispatchMethodsForCATBaseUnknownTIE \
      CATDeclareCATBaseUnknownMethodsForTIE \
      virtual HRESULT onAfterAutomaticCreation() ; \
};



#define ENVTIEdeclare_ENOVIUEAutomaticInstanceCreation(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
virtual HRESULT onAfterAutomaticCreation() ; \


#define ENVTIEdefine_ENOVIUEAutomaticInstanceCreation(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
HRESULT  ENVTIEName::onAfterAutomaticCreation()  \
{ \
return (ENVTIECALL(ENOVIUEAutomaticInstanceCreation,ENVTIETypeLetter,ENVTIELetter)onAfterAutomaticCreation()); \
} \


/* Name of the TIE class */
#define class_TIE_ENOVIUEAutomaticInstanceCreation(classe)    TIEENOVIUEAutomaticInstanceCreation##classe


/* Common methods inside a TIE */
#define common_TIE_ENOVIUEAutomaticInstanceCreation(classe) \
 \
 \
/* Static initialization */ \
CATDefineCommonTIEMembers(ENOVIUEAutomaticInstanceCreation, classe) \
 \
 \
CATImplementTIEMethods(ENOVIUEAutomaticInstanceCreation, classe) \
CATImplementIUnknownMethodsForCATBaseUnknownTIE(ENOVIUEAutomaticInstanceCreation, classe, 1) \
CATImplementIDispatchMethodsForCATBaseUnknownTIE(ENOVIUEAutomaticInstanceCreation, classe) \
CATImplementCATBaseUnknownMethodsForTIE(ENOVIUEAutomaticInstanceCreation, classe) \
 \
HRESULT  TIEENOVIUEAutomaticInstanceCreation##classe::onAfterAutomaticCreation()  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->onAfterAutomaticCreation()); \
} \



/* Macro used to link an implementation with an interface */
#define TIE_ENOVIUEAutomaticInstanceCreation(classe) \
 \
 \
declare_TIE_ENOVIUEAutomaticInstanceCreation(classe) \
 \
 \
CATMetaClass * __stdcall TIEENOVIUEAutomaticInstanceCreation##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_ENOVIUEAutomaticInstanceCreation,"ENOVIUEAutomaticInstanceCreation",ENOVIUEAutomaticInstanceCreation::MetaObject(),classe::MetaObject(),TIE); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_ENOVIUEAutomaticInstanceCreation(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIECreation(ENOVIUEAutomaticInstanceCreation, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicENOVIUEAutomaticInstanceCreation##classe(classe::MetaObject(),ENOVIUEAutomaticInstanceCreation::MetaObject(),(void *)CreateTIEENOVIUEAutomaticInstanceCreation##classe)



/* Macro used to link an implementation with an interface */
/* This TIE is chained on the implementation object */
#define TIEchain_ENOVIUEAutomaticInstanceCreation(classe) \
 \
 \
declare_TIE_ENOVIUEAutomaticInstanceCreation(classe) \
 \
 \
CATMetaClass * __stdcall TIEENOVIUEAutomaticInstanceCreation##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_ENOVIUEAutomaticInstanceCreation,"ENOVIUEAutomaticInstanceCreation",ENOVIUEAutomaticInstanceCreation::MetaObject(),classe::MetaObject(),TIEchain); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_ENOVIUEAutomaticInstanceCreation(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIEchainCreation(ENOVIUEAutomaticInstanceCreation, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicENOVIUEAutomaticInstanceCreation##classe(classe::MetaObject(),ENOVIUEAutomaticInstanceCreation::MetaObject(),(void *)CreateTIEENOVIUEAutomaticInstanceCreation##classe)


/* Macro to switch between BOA and TIE at build time */ 
#ifdef CATSYS_BOA_IS_TIE
#define BOA_ENOVIUEAutomaticInstanceCreation(classe) TIE_ENOVIUEAutomaticInstanceCreation(classe)
#else
#define BOA_ENOVIUEAutomaticInstanceCreation(classe) CATImplementBOA(ENOVIUEAutomaticInstanceCreation, classe)
#endif

#endif
