#ifndef __TIE_CATIMfgApply
#define __TIE_CATIMfgApply

#include <string.h>
#include "CATBaseUnknown.h"
#include "CATMetaClass.h"
#include "CATMacForTie.h"
#include "CATIMfgApply.h"
#include "JS0DSPA.h"


#ifdef _WINDOWS_SOURCE
#define Exported __declspec(dllexport)
#define Imported __declspec(dllimport)
#else
#define Exported 
#define Imported 
#endif


/* To link an implementation with the interface CATIMfgApply */
#define declare_TIE_CATIMfgApply(classe) \
 \
 \
class TIECATIMfgApply##classe : public CATIMfgApply \
{ \
   private: \
      CATDeclareCommonTIEMembers \
   public: \
      CATDeclareTIEMethods(CATIMfgApply, classe) \
      CATDeclareIUnknownMethodsForCATBaseUnknownTIE \
      CATDeclareIDispatchMethodsForCATBaseUnknownTIE \
      CATDeclareCATBaseUnknownMethodsForTIE \
      virtual HRESULT CheckParameter() ; \
      virtual CATBaseUnknown_var ComputeMachiningDomain() ; \
};



#define ENVTIEdeclare_CATIMfgApply(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
virtual HRESULT CheckParameter() ; \
virtual CATBaseUnknown_var ComputeMachiningDomain() ; \


#define ENVTIEdefine_CATIMfgApply(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
HRESULT  ENVTIEName::CheckParameter()  \
{ \
return (ENVTIECALL(CATIMfgApply,ENVTIETypeLetter,ENVTIELetter)CheckParameter()); \
} \
CATBaseUnknown_var  ENVTIEName::ComputeMachiningDomain()  \
{ \
return (ENVTIECALL(CATIMfgApply,ENVTIETypeLetter,ENVTIELetter)ComputeMachiningDomain()); \
} \


/* Name of the TIE class */
#define class_TIE_CATIMfgApply(classe)    TIECATIMfgApply##classe


/* Common methods inside a TIE */
#define common_TIE_CATIMfgApply(classe) \
 \
 \
/* Static initialization */ \
CATDefineCommonTIEMembers(CATIMfgApply, classe) \
 \
 \
CATImplementTIEMethods(CATIMfgApply, classe) \
CATImplementIUnknownMethodsForCATBaseUnknownTIE(CATIMfgApply, classe, 1) \
CATImplementIDispatchMethodsForCATBaseUnknownTIE(CATIMfgApply, classe) \
CATImplementCATBaseUnknownMethodsForTIE(CATIMfgApply, classe) \
 \
HRESULT  TIECATIMfgApply##classe::CheckParameter()  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->CheckParameter()); \
} \
CATBaseUnknown_var  TIECATIMfgApply##classe::ComputeMachiningDomain()  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->ComputeMachiningDomain()); \
} \



/* Macro used to link an implementation with an interface */
#define TIE_CATIMfgApply(classe) \
 \
 \
declare_TIE_CATIMfgApply(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIMfgApply##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIMfgApply,"CATIMfgApply",CATIMfgApply::MetaObject(),classe::MetaObject(),TIE); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIMfgApply(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIECreation(CATIMfgApply, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIMfgApply##classe(classe::MetaObject(),CATIMfgApply::MetaObject(),(void *)CreateTIECATIMfgApply##classe)



/* Macro used to link an implementation with an interface */
/* This TIE is chained on the implementation object */
#define TIEchain_CATIMfgApply(classe) \
 \
 \
declare_TIE_CATIMfgApply(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIMfgApply##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIMfgApply,"CATIMfgApply",CATIMfgApply::MetaObject(),classe::MetaObject(),TIEchain); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIMfgApply(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIEchainCreation(CATIMfgApply, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIMfgApply##classe(classe::MetaObject(),CATIMfgApply::MetaObject(),(void *)CreateTIECATIMfgApply##classe)


/* Macro to switch between BOA and TIE at build time */ 
#ifdef CATSYS_BOA_IS_TIE
#define BOA_CATIMfgApply(classe) TIE_CATIMfgApply(classe)
#else
#define BOA_CATIMfgApply(classe) CATImplementBOA(CATIMfgApply, classe)
#endif

#endif
