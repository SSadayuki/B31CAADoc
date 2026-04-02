#ifndef __TIE_CATIGSMUsePlaneBetween
#define __TIE_CATIGSMUsePlaneBetween

#include <string.h>
#include "CATBaseUnknown.h"
#include "CATMetaClass.h"
#include "CATMacForTie.h"
#include "CATIGSMUsePlaneBetween.h"
#include "JS0DSPA.h"


#ifdef _WINDOWS_SOURCE
#define Exported __declspec(dllexport)
#define Imported __declspec(dllimport)
#else
#define Exported 
#define Imported 
#endif


/* To link an implementation with the interface CATIGSMUsePlaneBetween */
#define declare_TIE_CATIGSMUsePlaneBetween(classe) \
 \
 \
class TIECATIGSMUsePlaneBetween##classe : public CATIGSMUsePlaneBetween \
{ \
   private: \
      CATDeclareCommonTIEMembers \
   public: \
      CATDeclareTIEMethods(CATIGSMUsePlaneBetween, classe) \
      CATDeclareIUnknownMethodsForCATBaseUnknownTIE \
      CATDeclareIDispatchMethodsForCATBaseUnknownTIE \
      CATDeclareCATBaseUnknownMethodsForTIE \
      virtual HRESULT GetFirstElement(CATIMmiMechanicalFeature_var& oElem1) ; \
      virtual HRESULT SetFirstElement(const CATIMmiMechanicalFeature_var& iElem1) ; \
      virtual HRESULT GetSecondElement(CATIMmiMechanicalFeature_var& oElem2) ; \
      virtual HRESULT SetSecondElement(const CATIMmiMechanicalFeature_var& iElem2) ; \
      virtual HRESULT GetRatio(CATICkeParm_var& oRatio) ; \
      virtual HRESULT SetRatio(const CATICkeParm_var& iRatio) ; \
      virtual HRESULT GetOrientation(CATGSMOrientation& oOrientation) ; \
      virtual HRESULT SetOrientation(const CATGSMOrientation& iOrientation) ; \
};



#define ENVTIEdeclare_CATIGSMUsePlaneBetween(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
virtual HRESULT GetFirstElement(CATIMmiMechanicalFeature_var& oElem1) ; \
virtual HRESULT SetFirstElement(const CATIMmiMechanicalFeature_var& iElem1) ; \
virtual HRESULT GetSecondElement(CATIMmiMechanicalFeature_var& oElem2) ; \
virtual HRESULT SetSecondElement(const CATIMmiMechanicalFeature_var& iElem2) ; \
virtual HRESULT GetRatio(CATICkeParm_var& oRatio) ; \
virtual HRESULT SetRatio(const CATICkeParm_var& iRatio) ; \
virtual HRESULT GetOrientation(CATGSMOrientation& oOrientation) ; \
virtual HRESULT SetOrientation(const CATGSMOrientation& iOrientation) ; \


#define ENVTIEdefine_CATIGSMUsePlaneBetween(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
HRESULT  ENVTIEName::GetFirstElement(CATIMmiMechanicalFeature_var& oElem1)  \
{ \
return (ENVTIECALL(CATIGSMUsePlaneBetween,ENVTIETypeLetter,ENVTIELetter)GetFirstElement(oElem1)); \
} \
HRESULT  ENVTIEName::SetFirstElement(const CATIMmiMechanicalFeature_var& iElem1)  \
{ \
return (ENVTIECALL(CATIGSMUsePlaneBetween,ENVTIETypeLetter,ENVTIELetter)SetFirstElement(iElem1)); \
} \
HRESULT  ENVTIEName::GetSecondElement(CATIMmiMechanicalFeature_var& oElem2)  \
{ \
return (ENVTIECALL(CATIGSMUsePlaneBetween,ENVTIETypeLetter,ENVTIELetter)GetSecondElement(oElem2)); \
} \
HRESULT  ENVTIEName::SetSecondElement(const CATIMmiMechanicalFeature_var& iElem2)  \
{ \
return (ENVTIECALL(CATIGSMUsePlaneBetween,ENVTIETypeLetter,ENVTIELetter)SetSecondElement(iElem2)); \
} \
HRESULT  ENVTIEName::GetRatio(CATICkeParm_var& oRatio)  \
{ \
return (ENVTIECALL(CATIGSMUsePlaneBetween,ENVTIETypeLetter,ENVTIELetter)GetRatio(oRatio)); \
} \
HRESULT  ENVTIEName::SetRatio(const CATICkeParm_var& iRatio)  \
{ \
return (ENVTIECALL(CATIGSMUsePlaneBetween,ENVTIETypeLetter,ENVTIELetter)SetRatio(iRatio)); \
} \
HRESULT  ENVTIEName::GetOrientation(CATGSMOrientation& oOrientation)  \
{ \
return (ENVTIECALL(CATIGSMUsePlaneBetween,ENVTIETypeLetter,ENVTIELetter)GetOrientation(oOrientation)); \
} \
HRESULT  ENVTIEName::SetOrientation(const CATGSMOrientation& iOrientation)  \
{ \
return (ENVTIECALL(CATIGSMUsePlaneBetween,ENVTIETypeLetter,ENVTIELetter)SetOrientation(iOrientation)); \
} \


/* Name of the TIE class */
#define class_TIE_CATIGSMUsePlaneBetween(classe)    TIECATIGSMUsePlaneBetween##classe


/* Common methods inside a TIE */
#define common_TIE_CATIGSMUsePlaneBetween(classe) \
 \
 \
/* Static initialization */ \
CATDefineCommonTIEMembers(CATIGSMUsePlaneBetween, classe) \
 \
 \
CATImplementTIEMethods(CATIGSMUsePlaneBetween, classe) \
CATImplementIUnknownMethodsForCATBaseUnknownTIE(CATIGSMUsePlaneBetween, classe, 1) \
CATImplementIDispatchMethodsForCATBaseUnknownTIE(CATIGSMUsePlaneBetween, classe) \
CATImplementCATBaseUnknownMethodsForTIE(CATIGSMUsePlaneBetween, classe) \
 \
HRESULT  TIECATIGSMUsePlaneBetween##classe::GetFirstElement(CATIMmiMechanicalFeature_var& oElem1)  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetFirstElement(oElem1)); \
} \
HRESULT  TIECATIGSMUsePlaneBetween##classe::SetFirstElement(const CATIMmiMechanicalFeature_var& iElem1)  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetFirstElement(iElem1)); \
} \
HRESULT  TIECATIGSMUsePlaneBetween##classe::GetSecondElement(CATIMmiMechanicalFeature_var& oElem2)  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetSecondElement(oElem2)); \
} \
HRESULT  TIECATIGSMUsePlaneBetween##classe::SetSecondElement(const CATIMmiMechanicalFeature_var& iElem2)  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetSecondElement(iElem2)); \
} \
HRESULT  TIECATIGSMUsePlaneBetween##classe::GetRatio(CATICkeParm_var& oRatio)  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetRatio(oRatio)); \
} \
HRESULT  TIECATIGSMUsePlaneBetween##classe::SetRatio(const CATICkeParm_var& iRatio)  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetRatio(iRatio)); \
} \
HRESULT  TIECATIGSMUsePlaneBetween##classe::GetOrientation(CATGSMOrientation& oOrientation)  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetOrientation(oOrientation)); \
} \
HRESULT  TIECATIGSMUsePlaneBetween##classe::SetOrientation(const CATGSMOrientation& iOrientation)  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetOrientation(iOrientation)); \
} \



/* Macro used to link an implementation with an interface */
#define TIE_CATIGSMUsePlaneBetween(classe) \
 \
 \
declare_TIE_CATIGSMUsePlaneBetween(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIGSMUsePlaneBetween##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIGSMUsePlaneBetween,"CATIGSMUsePlaneBetween",CATIGSMUsePlaneBetween::MetaObject(),classe::MetaObject(),TIE); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIGSMUsePlaneBetween(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIECreation(CATIGSMUsePlaneBetween, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIGSMUsePlaneBetween##classe(classe::MetaObject(),CATIGSMUsePlaneBetween::MetaObject(),(void *)CreateTIECATIGSMUsePlaneBetween##classe)



/* Macro used to link an implementation with an interface */
/* This TIE is chained on the implementation object */
#define TIEchain_CATIGSMUsePlaneBetween(classe) \
 \
 \
declare_TIE_CATIGSMUsePlaneBetween(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIGSMUsePlaneBetween##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIGSMUsePlaneBetween,"CATIGSMUsePlaneBetween",CATIGSMUsePlaneBetween::MetaObject(),classe::MetaObject(),TIEchain); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIGSMUsePlaneBetween(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIEchainCreation(CATIGSMUsePlaneBetween, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIGSMUsePlaneBetween##classe(classe::MetaObject(),CATIGSMUsePlaneBetween::MetaObject(),(void *)CreateTIECATIGSMUsePlaneBetween##classe)


/* Macro to switch between BOA and TIE at build time */ 
#ifdef CATSYS_BOA_IS_TIE
#define BOA_CATIGSMUsePlaneBetween(classe) TIE_CATIGSMUsePlaneBetween(classe)
#else
#define BOA_CATIGSMUsePlaneBetween(classe) CATImplementBOA(CATIGSMUsePlaneBetween, classe)
#endif

#endif
