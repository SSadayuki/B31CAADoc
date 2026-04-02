#ifndef __TIE_CATIAfrUIActivation
#define __TIE_CATIAfrUIActivation

#include <string.h>
#include "CATBaseUnknown.h"
#include "CATMetaClass.h"
#include "CATMacForTie.h"
#include "CATIAfrUIActivation.h"
#include "JS0DSPA.h"


#ifdef _WINDOWS_SOURCE
#define Exported __declspec(dllexport)
#define Imported __declspec(dllimport)
#else
#define Exported 
#define Imported 
#endif


/* To link an implementation with the interface CATIAfrUIActivation */
#define declare_TIE_CATIAfrUIActivation(classe) \
 \
 \
class TIECATIAfrUIActivation##classe : public CATIAfrUIActivation \
{ \
   private: \
      CATDeclareCommonTIEMembers \
   public: \
      CATDeclareTIEMethods(CATIAfrUIActivation, classe) \
      CATDeclareIUnknownMethodsForCATBaseUnknownTIE \
      CATDeclareIDispatchMethodsForCATBaseUnknownTIE \
      CATDeclareCATBaseUnknownMethodsForTIE \
      virtual HRESULT UIActivation () ; \
      virtual HRESULT UIDeactivation () ; \
};



#define ENVTIEdeclare_CATIAfrUIActivation(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
virtual HRESULT UIActivation () ; \
virtual HRESULT UIDeactivation () ; \


#define ENVTIEdefine_CATIAfrUIActivation(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
HRESULT  ENVTIEName::UIActivation ()  \
{ \
return (ENVTIECALL(CATIAfrUIActivation,ENVTIETypeLetter,ENVTIELetter)UIActivation ()); \
} \
HRESULT  ENVTIEName::UIDeactivation ()  \
{ \
return (ENVTIECALL(CATIAfrUIActivation,ENVTIETypeLetter,ENVTIELetter)UIDeactivation ()); \
} \


/* Name of the TIE class */
#define class_TIE_CATIAfrUIActivation(classe)    TIECATIAfrUIActivation##classe


/* Common methods inside a TIE */
#define common_TIE_CATIAfrUIActivation(classe) \
 \
 \
/* Static initialization */ \
CATDefineCommonTIEMembers(CATIAfrUIActivation, classe) \
 \
 \
CATImplementTIEMethods(CATIAfrUIActivation, classe) \
CATImplementIUnknownMethodsForCATBaseUnknownTIE(CATIAfrUIActivation, classe, 1) \
CATImplementIDispatchMethodsForCATBaseUnknownTIE(CATIAfrUIActivation, classe) \
CATImplementCATBaseUnknownMethodsForTIE(CATIAfrUIActivation, classe) \
 \
HRESULT  TIECATIAfrUIActivation##classe::UIActivation ()  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->UIActivation ()); \
} \
HRESULT  TIECATIAfrUIActivation##classe::UIDeactivation ()  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->UIDeactivation ()); \
} \



/* Macro used to link an implementation with an interface */
#define TIE_CATIAfrUIActivation(classe) \
 \
 \
declare_TIE_CATIAfrUIActivation(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIAfrUIActivation##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIAfrUIActivation,"CATIAfrUIActivation",CATIAfrUIActivation::MetaObject(),classe::MetaObject(),TIE); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIAfrUIActivation(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIECreation(CATIAfrUIActivation, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIAfrUIActivation##classe(classe::MetaObject(),CATIAfrUIActivation::MetaObject(),(void *)CreateTIECATIAfrUIActivation##classe)



/* Macro used to link an implementation with an interface */
/* This TIE is chained on the implementation object */
#define TIEchain_CATIAfrUIActivation(classe) \
 \
 \
declare_TIE_CATIAfrUIActivation(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIAfrUIActivation##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIAfrUIActivation,"CATIAfrUIActivation",CATIAfrUIActivation::MetaObject(),classe::MetaObject(),TIEchain); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIAfrUIActivation(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIEchainCreation(CATIAfrUIActivation, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIAfrUIActivation##classe(classe::MetaObject(),CATIAfrUIActivation::MetaObject(),(void *)CreateTIECATIAfrUIActivation##classe)


/* Macro to switch between BOA and TIE at build time */ 
#ifdef CATSYS_BOA_IS_TIE
#define BOA_CATIAfrUIActivation(classe) TIE_CATIAfrUIActivation(classe)
#else
#define BOA_CATIAfrUIActivation(classe) CATImplementBOA(CATIAfrUIActivation, classe)
#endif

#endif
