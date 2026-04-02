#ifndef __TIE_CATISchAppScalingRule
#define __TIE_CATISchAppScalingRule

#include <string.h>
#include "CATBaseUnknown.h"
#include "CATMetaClass.h"
#include "CATMacForTie.h"
#include "CATISchAppScalingRule.h"
#include "JS0DSPA.h"


#ifdef _WINDOWS_SOURCE
#define Exported __declspec(dllexport)
#define Imported __declspec(dllimport)
#else
#define Exported 
#define Imported 
#endif


/* To link an implementation with the interface CATISchAppScalingRule */
#define declare_TIE_CATISchAppScalingRule(classe) \
 \
 \
class TIECATISchAppScalingRule##classe : public CATISchAppScalingRule \
{ \
   private: \
      CATDeclareCommonTIEMembers \
      CATDeclareNotCATBaseUnknownTIEMembers \
   public: \
      CATDeclareTIEMethods(CATISchAppScalingRule, classe) \
      CATDeclareIUnknownMethodsForNotCATBaseUnknownTIE \
      CATDeclareCATBaseUnknownMethodsForTIE \
      virtual HRESULT AppGetScalingPriority (int *oPriority) ; \
};



#define ENVTIEdeclare_CATISchAppScalingRule(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
virtual HRESULT AppGetScalingPriority (int *oPriority) ; \


#define ENVTIEdefine_CATISchAppScalingRule(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
HRESULT  ENVTIEName::AppGetScalingPriority (int *oPriority)  \
{ \
return (ENVTIECALL(CATISchAppScalingRule,ENVTIETypeLetter,ENVTIELetter)AppGetScalingPriority (oPriority)); \
} \


/* Name of the TIE class */
#define class_TIE_CATISchAppScalingRule(classe)    TIECATISchAppScalingRule##classe


/* Common methods inside a TIE */
#define common_TIE_CATISchAppScalingRule(classe) \
 \
 \
/* Static initialization */ \
CATDefineCommonTIEMembers(CATISchAppScalingRule, classe) \
 \
 \
CATImplementNotCATBaseUnknownTIEMethods(CATISchAppScalingRule, classe) \
CATImplementIUnknownMethodsForNotCATBaseUnknownTIE(CATISchAppScalingRule, classe, 0) \
CATImplementCATBaseUnknownMethodsForTIE(CATISchAppScalingRule, classe) \
 \
HRESULT  TIECATISchAppScalingRule##classe::AppGetScalingPriority (int *oPriority)  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->AppGetScalingPriority (oPriority)); \
} \



/* Macro used to link an implementation with an interface */
#define TIE_CATISchAppScalingRule(classe) \
 \
 \
declare_TIE_CATISchAppScalingRule(classe) \
 \
 \
CATMetaClass * __stdcall TIECATISchAppScalingRule##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATISchAppScalingRule,"CATISchAppScalingRule",NULL,classe::MetaObject(),TIE); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATISchAppScalingRule(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIECreation(CATISchAppScalingRule, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATISchAppScalingRule##classe(classe::MetaObject(),TIECATISchAppScalingRule##classe::MetaObject(),(void *)CreateTIECATISchAppScalingRule##classe)



/* Macro used to link an implementation with an interface */
/* This TIE is chained on the implementation object */
#define TIEchain_CATISchAppScalingRule(classe) \
 \
 \
declare_TIE_CATISchAppScalingRule(classe) \
 \
 \
CATMetaClass * __stdcall TIECATISchAppScalingRule##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATISchAppScalingRule,"CATISchAppScalingRule",NULL,classe::MetaObject(),TIEchain); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATISchAppScalingRule(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIEchainCreation(CATISchAppScalingRule, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATISchAppScalingRule##classe(classe::MetaObject(),TIECATISchAppScalingRule##classe::MetaObject(),(void *)CreateTIECATISchAppScalingRule##classe)


/* Macro to switch between BOA and TIE at build time */ 
#ifdef CATSYS_BOA_IS_TIE
#define BOA_CATISchAppScalingRule(classe) TIE_CATISchAppScalingRule(classe)
#else
#define BOA_CATISchAppScalingRule(classe) CATImplementBOA(CATISchAppScalingRule, classe)
#endif

#endif
