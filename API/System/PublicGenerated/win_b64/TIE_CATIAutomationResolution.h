#ifndef __TIE_CATIAutomationResolution
#define __TIE_CATIAutomationResolution

#include <string.h>
#include "CATBaseUnknown.h"
#include "CATMetaClass.h"
#include "CATMacForTie.h"
#include "CATIAutomationResolution.h"
#include "JS0DSPA.h"


#ifdef _WINDOWS_SOURCE
#define Exported __declspec(dllexport)
#define Imported __declspec(dllimport)
#else
#define Exported 
#define Imported 
#endif


/* To link an implementation with the interface CATIAutomationResolution */
#define declare_TIE_CATIAutomationResolution(classe) \
 \
 \
class TIECATIAutomationResolution##classe : public CATIAutomationResolution \
{ \
   private: \
      CATDeclareCommonTIEMembers \
   public: \
      CATDeclareTIEMethods(CATIAutomationResolution, classe) \
      CATDeclareIUnknownMethodsForCATBaseUnknownTIE \
      CATDeclareIDispatchMethodsForCATBaseUnknownTIE \
      CATDeclareCATBaseUnknownMethodsForTIE \
      virtual HRESULT GetResolution(CATIScriptMethodCall *& oResolution, CATBaseDispatch * iObjectToResolve) ; \
};



#define ENVTIEdeclare_CATIAutomationResolution(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
virtual HRESULT GetResolution(CATIScriptMethodCall *& oResolution, CATBaseDispatch * iObjectToResolve) ; \


#define ENVTIEdefine_CATIAutomationResolution(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
HRESULT  ENVTIEName::GetResolution(CATIScriptMethodCall *& oResolution, CATBaseDispatch * iObjectToResolve)  \
{ \
return (ENVTIECALL(CATIAutomationResolution,ENVTIETypeLetter,ENVTIELetter)GetResolution(oResolution,iObjectToResolve)); \
} \


/* Name of the TIE class */
#define class_TIE_CATIAutomationResolution(classe)    TIECATIAutomationResolution##classe


/* Common methods inside a TIE */
#define common_TIE_CATIAutomationResolution(classe) \
 \
 \
/* Static initialization */ \
CATDefineCommonTIEMembers(CATIAutomationResolution, classe) \
 \
 \
CATImplementTIEMethods(CATIAutomationResolution, classe) \
CATImplementIUnknownMethodsForCATBaseUnknownTIE(CATIAutomationResolution, classe, 1) \
CATImplementIDispatchMethodsForCATBaseUnknownTIE(CATIAutomationResolution, classe) \
CATImplementCATBaseUnknownMethodsForTIE(CATIAutomationResolution, classe) \
 \
HRESULT  TIECATIAutomationResolution##classe::GetResolution(CATIScriptMethodCall *& oResolution, CATBaseDispatch * iObjectToResolve)  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetResolution(oResolution,iObjectToResolve)); \
} \



/* Macro used to link an implementation with an interface */
#define TIE_CATIAutomationResolution(classe) \
 \
 \
declare_TIE_CATIAutomationResolution(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIAutomationResolution##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIAutomationResolution,"CATIAutomationResolution",CATIAutomationResolution::MetaObject(),classe::MetaObject(),TIE); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIAutomationResolution(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIECreation(CATIAutomationResolution, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIAutomationResolution##classe(classe::MetaObject(),CATIAutomationResolution::MetaObject(),(void *)CreateTIECATIAutomationResolution##classe)



/* Macro used to link an implementation with an interface */
/* This TIE is chained on the implementation object */
#define TIEchain_CATIAutomationResolution(classe) \
 \
 \
declare_TIE_CATIAutomationResolution(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIAutomationResolution##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIAutomationResolution,"CATIAutomationResolution",CATIAutomationResolution::MetaObject(),classe::MetaObject(),TIEchain); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIAutomationResolution(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIEchainCreation(CATIAutomationResolution, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIAutomationResolution##classe(classe::MetaObject(),CATIAutomationResolution::MetaObject(),(void *)CreateTIECATIAutomationResolution##classe)


/* Macro to switch between BOA and TIE at build time */ 
#ifdef CATSYS_BOA_IS_TIE
#define BOA_CATIAutomationResolution(classe) TIE_CATIAutomationResolution(classe)
#else
#define BOA_CATIAutomationResolution(classe) CATImplementBOA(CATIAutomationResolution, classe)
#endif

#endif
