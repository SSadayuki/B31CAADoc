#ifndef __TIE_CATIGSMPlaneBetween
#define __TIE_CATIGSMPlaneBetween

#include <string.h>
#include "CATBaseUnknown.h"
#include "CATMetaClass.h"
#include "CATMacForTie.h"
#include "CATIGSMPlaneBetween.h"
#include "JS0DSPA.h"


#ifdef _WINDOWS_SOURCE
#define Exported __declspec(dllexport)
#define Imported __declspec(dllimport)
#else
#define Exported 
#define Imported 
#endif


/* To link an implementation with the interface CATIGSMPlaneBetween */
#define declare_TIE_CATIGSMPlaneBetween(classe) \
 \
 \
class TIECATIGSMPlaneBetween##classe : public CATIGSMPlaneBetween \
{ \
   private: \
      CATDeclareCommonTIEMembers \
   public: \
      CATDeclareTIEMethods(CATIGSMPlaneBetween, classe) \
      CATDeclareIUnknownMethodsForCATBaseUnknownTIE \
      CATDeclareIDispatchMethodsForCATBaseUnknownTIE \
      CATDeclareCATBaseUnknownMethodsForTIE \
      virtual HRESULT GetFirstElement(CATISpecObject_var& oElem1) ; \
      virtual HRESULT SetFirstElement(const CATISpecObject_var& iElem1) ; \
      virtual HRESULT GetSecondElement(CATISpecObject_var& oElem2) ; \
      virtual HRESULT SetSecondElement(const CATISpecObject_var& iElem2) ; \
      virtual HRESULT GetRatio(CATICkeParm_var& oRatio) ; \
      virtual HRESULT SetRatio(const CATICkeParm_var& iRatio) ; \
      virtual HRESULT GetOrientation(CATGSMOrientation& oOrientation) ; \
      virtual HRESULT SetOrientation(const CATGSMOrientation& iOrientation) ; \
};



#define ENVTIEdeclare_CATIGSMPlaneBetween(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
virtual HRESULT GetFirstElement(CATISpecObject_var& oElem1) ; \
virtual HRESULT SetFirstElement(const CATISpecObject_var& iElem1) ; \
virtual HRESULT GetSecondElement(CATISpecObject_var& oElem2) ; \
virtual HRESULT SetSecondElement(const CATISpecObject_var& iElem2) ; \
virtual HRESULT GetRatio(CATICkeParm_var& oRatio) ; \
virtual HRESULT SetRatio(const CATICkeParm_var& iRatio) ; \
virtual HRESULT GetOrientation(CATGSMOrientation& oOrientation) ; \
virtual HRESULT SetOrientation(const CATGSMOrientation& iOrientation) ; \


#define ENVTIEdefine_CATIGSMPlaneBetween(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
HRESULT  ENVTIEName::GetFirstElement(CATISpecObject_var& oElem1)  \
{ \
return (ENVTIECALL(CATIGSMPlaneBetween,ENVTIETypeLetter,ENVTIELetter)GetFirstElement(oElem1)); \
} \
HRESULT  ENVTIEName::SetFirstElement(const CATISpecObject_var& iElem1)  \
{ \
return (ENVTIECALL(CATIGSMPlaneBetween,ENVTIETypeLetter,ENVTIELetter)SetFirstElement(iElem1)); \
} \
HRESULT  ENVTIEName::GetSecondElement(CATISpecObject_var& oElem2)  \
{ \
return (ENVTIECALL(CATIGSMPlaneBetween,ENVTIETypeLetter,ENVTIELetter)GetSecondElement(oElem2)); \
} \
HRESULT  ENVTIEName::SetSecondElement(const CATISpecObject_var& iElem2)  \
{ \
return (ENVTIECALL(CATIGSMPlaneBetween,ENVTIETypeLetter,ENVTIELetter)SetSecondElement(iElem2)); \
} \
HRESULT  ENVTIEName::GetRatio(CATICkeParm_var& oRatio)  \
{ \
return (ENVTIECALL(CATIGSMPlaneBetween,ENVTIETypeLetter,ENVTIELetter)GetRatio(oRatio)); \
} \
HRESULT  ENVTIEName::SetRatio(const CATICkeParm_var& iRatio)  \
{ \
return (ENVTIECALL(CATIGSMPlaneBetween,ENVTIETypeLetter,ENVTIELetter)SetRatio(iRatio)); \
} \
HRESULT  ENVTIEName::GetOrientation(CATGSMOrientation& oOrientation)  \
{ \
return (ENVTIECALL(CATIGSMPlaneBetween,ENVTIETypeLetter,ENVTIELetter)GetOrientation(oOrientation)); \
} \
HRESULT  ENVTIEName::SetOrientation(const CATGSMOrientation& iOrientation)  \
{ \
return (ENVTIECALL(CATIGSMPlaneBetween,ENVTIETypeLetter,ENVTIELetter)SetOrientation(iOrientation)); \
} \


/* Name of the TIE class */
#define class_TIE_CATIGSMPlaneBetween(classe)    TIECATIGSMPlaneBetween##classe


/* Common methods inside a TIE */
#define common_TIE_CATIGSMPlaneBetween(classe) \
 \
 \
/* Static initialization */ \
CATDefineCommonTIEMembers(CATIGSMPlaneBetween, classe) \
 \
 \
CATImplementTIEMethods(CATIGSMPlaneBetween, classe) \
CATImplementIUnknownMethodsForCATBaseUnknownTIE(CATIGSMPlaneBetween, classe, 1) \
CATImplementIDispatchMethodsForCATBaseUnknownTIE(CATIGSMPlaneBetween, classe) \
CATImplementCATBaseUnknownMethodsForTIE(CATIGSMPlaneBetween, classe) \
 \
HRESULT  TIECATIGSMPlaneBetween##classe::GetFirstElement(CATISpecObject_var& oElem1)  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetFirstElement(oElem1)); \
} \
HRESULT  TIECATIGSMPlaneBetween##classe::SetFirstElement(const CATISpecObject_var& iElem1)  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetFirstElement(iElem1)); \
} \
HRESULT  TIECATIGSMPlaneBetween##classe::GetSecondElement(CATISpecObject_var& oElem2)  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetSecondElement(oElem2)); \
} \
HRESULT  TIECATIGSMPlaneBetween##classe::SetSecondElement(const CATISpecObject_var& iElem2)  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetSecondElement(iElem2)); \
} \
HRESULT  TIECATIGSMPlaneBetween##classe::GetRatio(CATICkeParm_var& oRatio)  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetRatio(oRatio)); \
} \
HRESULT  TIECATIGSMPlaneBetween##classe::SetRatio(const CATICkeParm_var& iRatio)  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetRatio(iRatio)); \
} \
HRESULT  TIECATIGSMPlaneBetween##classe::GetOrientation(CATGSMOrientation& oOrientation)  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetOrientation(oOrientation)); \
} \
HRESULT  TIECATIGSMPlaneBetween##classe::SetOrientation(const CATGSMOrientation& iOrientation)  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetOrientation(iOrientation)); \
} \



/* Macro used to link an implementation with an interface */
#define TIE_CATIGSMPlaneBetween(classe) \
 \
 \
declare_TIE_CATIGSMPlaneBetween(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIGSMPlaneBetween##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIGSMPlaneBetween,"CATIGSMPlaneBetween",CATIGSMPlaneBetween::MetaObject(),classe::MetaObject(),TIE); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIGSMPlaneBetween(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIECreation(CATIGSMPlaneBetween, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIGSMPlaneBetween##classe(classe::MetaObject(),CATIGSMPlaneBetween::MetaObject(),(void *)CreateTIECATIGSMPlaneBetween##classe)



/* Macro used to link an implementation with an interface */
/* This TIE is chained on the implementation object */
#define TIEchain_CATIGSMPlaneBetween(classe) \
 \
 \
declare_TIE_CATIGSMPlaneBetween(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIGSMPlaneBetween##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIGSMPlaneBetween,"CATIGSMPlaneBetween",CATIGSMPlaneBetween::MetaObject(),classe::MetaObject(),TIEchain); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIGSMPlaneBetween(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIEchainCreation(CATIGSMPlaneBetween, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIGSMPlaneBetween##classe(classe::MetaObject(),CATIGSMPlaneBetween::MetaObject(),(void *)CreateTIECATIGSMPlaneBetween##classe)


/* Macro to switch between BOA and TIE at build time */ 
#ifdef CATSYS_BOA_IS_TIE
#define BOA_CATIGSMPlaneBetween(classe) TIE_CATIGSMPlaneBetween(classe)
#else
#define BOA_CATIGSMPlaneBetween(classe) CATImplementBOA(CATIGSMPlaneBetween, classe)
#endif

#endif
