#ifndef __TIE_ENOVIUENotifyChanges
#define __TIE_ENOVIUENotifyChanges

#include <string.h>
#include "CATBaseUnknown.h"
#include "CATMetaClass.h"
#include "CATMacForTie.h"
#include "ENOVIUENotifyChanges.h"
#include "JS0DSPA.h"


#ifdef _WINDOWS_SOURCE
#define Exported __declspec(dllexport)
#define Imported __declspec(dllimport)
#else
#define Exported 
#define Imported 
#endif


/* To link an implementation with the interface ENOVIUENotifyChanges */
#define declare_TIE_ENOVIUENotifyChanges(classe) \
 \
 \
class TIEENOVIUENotifyChanges##classe : public ENOVIUENotifyChanges \
{ \
   private: \
      CATDeclareCommonTIEMembers \
   public: \
      CATDeclareTIEMethods(ENOVIUENotifyChanges, classe) \
      CATDeclareIUnknownMethodsForCATBaseUnknownTIE \
      CATDeclareIDispatchMethodsForCATBaseUnknownTIE \
      CATDeclareCATBaseUnknownMethodsForTIE \
      virtual HRESULT NotifyChanges(); \
};



#define ENVTIEdeclare_ENOVIUENotifyChanges(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
virtual HRESULT NotifyChanges(); \


#define ENVTIEdefine_ENOVIUENotifyChanges(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
HRESULT  ENVTIEName::NotifyChanges() \
{ \
return (ENVTIECALL(ENOVIUENotifyChanges,ENVTIETypeLetter,ENVTIELetter)NotifyChanges()); \
} \


/* Name of the TIE class */
#define class_TIE_ENOVIUENotifyChanges(classe)    TIEENOVIUENotifyChanges##classe


/* Common methods inside a TIE */
#define common_TIE_ENOVIUENotifyChanges(classe) \
 \
 \
/* Static initialization */ \
CATDefineCommonTIEMembers(ENOVIUENotifyChanges, classe) \
 \
 \
CATImplementTIEMethods(ENOVIUENotifyChanges, classe) \
CATImplementIUnknownMethodsForCATBaseUnknownTIE(ENOVIUENotifyChanges, classe, 1) \
CATImplementIDispatchMethodsForCATBaseUnknownTIE(ENOVIUENotifyChanges, classe) \
CATImplementCATBaseUnknownMethodsForTIE(ENOVIUENotifyChanges, classe) \
 \
HRESULT  TIEENOVIUENotifyChanges##classe::NotifyChanges() \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->NotifyChanges()); \
} \



/* Macro used to link an implementation with an interface */
#define TIE_ENOVIUENotifyChanges(classe) \
 \
 \
declare_TIE_ENOVIUENotifyChanges(classe) \
 \
 \
CATMetaClass * __stdcall TIEENOVIUENotifyChanges##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_ENOVIUENotifyChanges,"ENOVIUENotifyChanges",ENOVIUENotifyChanges::MetaObject(),classe::MetaObject(),TIE); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_ENOVIUENotifyChanges(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIECreation(ENOVIUENotifyChanges, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicENOVIUENotifyChanges##classe(classe::MetaObject(),ENOVIUENotifyChanges::MetaObject(),(void *)CreateTIEENOVIUENotifyChanges##classe)



/* Macro used to link an implementation with an interface */
/* This TIE is chained on the implementation object */
#define TIEchain_ENOVIUENotifyChanges(classe) \
 \
 \
declare_TIE_ENOVIUENotifyChanges(classe) \
 \
 \
CATMetaClass * __stdcall TIEENOVIUENotifyChanges##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_ENOVIUENotifyChanges,"ENOVIUENotifyChanges",ENOVIUENotifyChanges::MetaObject(),classe::MetaObject(),TIEchain); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_ENOVIUENotifyChanges(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIEchainCreation(ENOVIUENotifyChanges, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicENOVIUENotifyChanges##classe(classe::MetaObject(),ENOVIUENotifyChanges::MetaObject(),(void *)CreateTIEENOVIUENotifyChanges##classe)


/* Macro to switch between BOA and TIE at build time */ 
#ifdef CATSYS_BOA_IS_TIE
#define BOA_ENOVIUENotifyChanges(classe) TIE_ENOVIUENotifyChanges(classe)
#else
#define BOA_ENOVIUENotifyChanges(classe) CATImplementBOA(ENOVIUENotifyChanges, classe)
#endif

#endif
