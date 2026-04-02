#ifndef __TIE_CATIMfgComputeToolPathCustom
#define __TIE_CATIMfgComputeToolPathCustom

#include <string.h>
#include "CATBaseUnknown.h"
#include "CATMetaClass.h"
#include "CATMacForTie.h"
#include "CATIMfgComputeToolPathCustom.h"
#include "JS0DSPA.h"


#ifdef _WINDOWS_SOURCE
#define Exported __declspec(dllexport)
#define Imported __declspec(dllimport)
#else
#define Exported 
#define Imported 
#endif


/* To link an implementation with the interface CATIMfgComputeToolPathCustom */
#define declare_TIE_CATIMfgComputeToolPathCustom(classe) \
 \
 \
class TIECATIMfgComputeToolPathCustom##classe : public CATIMfgComputeToolPathCustom \
{ \
   private: \
      CATDeclareCommonTIEMembers \
   public: \
      CATDeclareTIEMethods(CATIMfgComputeToolPathCustom, classe) \
      CATDeclareIUnknownMethodsForCATBaseUnknownTIE \
      CATDeclareIDispatchMethodsForCATBaseUnknownTIE \
      CATDeclareCATBaseUnknownMethodsForTIE \
      virtual HRESULT  ComputeToolPath  (const CATIContainer_var& iContainer,CATIMfgToolPath_var& oTP) ; \
};



#define ENVTIEdeclare_CATIMfgComputeToolPathCustom(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
virtual HRESULT  ComputeToolPath  (const CATIContainer_var& iContainer,CATIMfgToolPath_var& oTP) ; \


#define ENVTIEdefine_CATIMfgComputeToolPathCustom(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
HRESULT   ENVTIEName::ComputeToolPath  (const CATIContainer_var& iContainer,CATIMfgToolPath_var& oTP)  \
{ \
return (ENVTIECALL(CATIMfgComputeToolPathCustom,ENVTIETypeLetter,ENVTIELetter)ComputeToolPath  (iContainer,oTP)); \
} \


/* Name of the TIE class */
#define class_TIE_CATIMfgComputeToolPathCustom(classe)    TIECATIMfgComputeToolPathCustom##classe


/* Common methods inside a TIE */
#define common_TIE_CATIMfgComputeToolPathCustom(classe) \
 \
 \
/* Static initialization */ \
CATDefineCommonTIEMembers(CATIMfgComputeToolPathCustom, classe) \
 \
 \
CATImplementTIEMethods(CATIMfgComputeToolPathCustom, classe) \
CATImplementIUnknownMethodsForCATBaseUnknownTIE(CATIMfgComputeToolPathCustom, classe, 1) \
CATImplementIDispatchMethodsForCATBaseUnknownTIE(CATIMfgComputeToolPathCustom, classe) \
CATImplementCATBaseUnknownMethodsForTIE(CATIMfgComputeToolPathCustom, classe) \
 \
HRESULT   TIECATIMfgComputeToolPathCustom##classe::ComputeToolPath  (const CATIContainer_var& iContainer,CATIMfgToolPath_var& oTP)  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->ComputeToolPath  (iContainer,oTP)); \
} \



/* Macro used to link an implementation with an interface */
#define TIE_CATIMfgComputeToolPathCustom(classe) \
 \
 \
declare_TIE_CATIMfgComputeToolPathCustom(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIMfgComputeToolPathCustom##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIMfgComputeToolPathCustom,"CATIMfgComputeToolPathCustom",CATIMfgComputeToolPathCustom::MetaObject(),classe::MetaObject(),TIE); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIMfgComputeToolPathCustom(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIECreation(CATIMfgComputeToolPathCustom, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIMfgComputeToolPathCustom##classe(classe::MetaObject(),CATIMfgComputeToolPathCustom::MetaObject(),(void *)CreateTIECATIMfgComputeToolPathCustom##classe)



/* Macro used to link an implementation with an interface */
/* This TIE is chained on the implementation object */
#define TIEchain_CATIMfgComputeToolPathCustom(classe) \
 \
 \
declare_TIE_CATIMfgComputeToolPathCustom(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIMfgComputeToolPathCustom##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIMfgComputeToolPathCustom,"CATIMfgComputeToolPathCustom",CATIMfgComputeToolPathCustom::MetaObject(),classe::MetaObject(),TIEchain); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIMfgComputeToolPathCustom(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIEchainCreation(CATIMfgComputeToolPathCustom, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIMfgComputeToolPathCustom##classe(classe::MetaObject(),CATIMfgComputeToolPathCustom::MetaObject(),(void *)CreateTIECATIMfgComputeToolPathCustom##classe)


/* Macro to switch between BOA and TIE at build time */ 
#ifdef CATSYS_BOA_IS_TIE
#define BOA_CATIMfgComputeToolPathCustom(classe) TIE_CATIMfgComputeToolPathCustom(classe)
#else
#define BOA_CATIMfgComputeToolPathCustom(classe) CATImplementBOA(CATIMfgComputeToolPathCustom, classe)
#endif

#endif
