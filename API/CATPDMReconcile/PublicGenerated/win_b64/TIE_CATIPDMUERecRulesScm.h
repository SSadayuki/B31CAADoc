#ifndef __TIE_CATIPDMUERecRulesScm
#define __TIE_CATIPDMUERecRulesScm

#include <string.h>
#include "CATBaseUnknown.h"
#include "CATMetaClass.h"
#include "CATMacForTie.h"
#include "CATIPDMUERecRulesScm.h"
#include "JS0DSPA.h"


#ifdef _WINDOWS_SOURCE
#define Exported __declspec(dllexport)
#define Imported __declspec(dllimport)
#else
#define Exported 
#define Imported 
#endif


/* To link an implementation with the interface CATIPDMUERecRulesScm */
#define declare_TIE_CATIPDMUERecRulesScm(classe) \
 \
 \
class TIECATIPDMUERecRulesScm##classe : public CATIPDMUERecRulesScm \
{ \
   private: \
      CATDeclareCommonTIEMembers \
   public: \
      CATDeclareTIEMethods(CATIPDMUERecRulesScm, classe) \
      CATDeclareIUnknownMethodsForCATBaseUnknownTIE \
      CATDeclareIDispatchMethodsForCATBaseUnknownTIE \
      CATDeclareCATBaseUnknownMethodsForTIE \
      virtual HRESULT IsRuleValid( CATScmObject *iRecObj , int iRule, CATBoolean &oResult ); \
};



#define ENVTIEdeclare_CATIPDMUERecRulesScm(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
virtual HRESULT IsRuleValid( CATScmObject *iRecObj , int iRule, CATBoolean &oResult ); \


#define ENVTIEdefine_CATIPDMUERecRulesScm(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
HRESULT  ENVTIEName::IsRuleValid( CATScmObject *iRecObj , int iRule, CATBoolean &oResult ) \
{ \
return (ENVTIECALL(CATIPDMUERecRulesScm,ENVTIETypeLetter,ENVTIELetter)IsRuleValid(iRecObj ,iRule,oResult )); \
} \


/* Name of the TIE class */
#define class_TIE_CATIPDMUERecRulesScm(classe)    TIECATIPDMUERecRulesScm##classe


/* Common methods inside a TIE */
#define common_TIE_CATIPDMUERecRulesScm(classe) \
 \
 \
/* Static initialization */ \
CATDefineCommonTIEMembers(CATIPDMUERecRulesScm, classe) \
 \
 \
CATImplementTIEMethods(CATIPDMUERecRulesScm, classe) \
CATImplementIUnknownMethodsForCATBaseUnknownTIE(CATIPDMUERecRulesScm, classe, 1) \
CATImplementIDispatchMethodsForCATBaseUnknownTIE(CATIPDMUERecRulesScm, classe) \
CATImplementCATBaseUnknownMethodsForTIE(CATIPDMUERecRulesScm, classe) \
 \
HRESULT  TIECATIPDMUERecRulesScm##classe::IsRuleValid( CATScmObject *iRecObj , int iRule, CATBoolean &oResult ) \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->IsRuleValid(iRecObj ,iRule,oResult )); \
} \



/* Macro used to link an implementation with an interface */
#define TIE_CATIPDMUERecRulesScm(classe) \
 \
 \
declare_TIE_CATIPDMUERecRulesScm(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIPDMUERecRulesScm##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIPDMUERecRulesScm,"CATIPDMUERecRulesScm",CATIPDMUERecRulesScm::MetaObject(),classe::MetaObject(),TIE); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIPDMUERecRulesScm(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIECreation(CATIPDMUERecRulesScm, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIPDMUERecRulesScm##classe(classe::MetaObject(),CATIPDMUERecRulesScm::MetaObject(),(void *)CreateTIECATIPDMUERecRulesScm##classe)



/* Macro used to link an implementation with an interface */
/* This TIE is chained on the implementation object */
#define TIEchain_CATIPDMUERecRulesScm(classe) \
 \
 \
declare_TIE_CATIPDMUERecRulesScm(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIPDMUERecRulesScm##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIPDMUERecRulesScm,"CATIPDMUERecRulesScm",CATIPDMUERecRulesScm::MetaObject(),classe::MetaObject(),TIEchain); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIPDMUERecRulesScm(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIEchainCreation(CATIPDMUERecRulesScm, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIPDMUERecRulesScm##classe(classe::MetaObject(),CATIPDMUERecRulesScm::MetaObject(),(void *)CreateTIECATIPDMUERecRulesScm##classe)


/* Macro to switch between BOA and TIE at build time */ 
#ifdef CATSYS_BOA_IS_TIE
#define BOA_CATIPDMUERecRulesScm(classe) TIE_CATIPDMUERecRulesScm(classe)
#else
#define BOA_CATIPDMUERecRulesScm(classe) CATImplementBOA(CATIPDMUERecRulesScm, classe)
#endif

#endif
