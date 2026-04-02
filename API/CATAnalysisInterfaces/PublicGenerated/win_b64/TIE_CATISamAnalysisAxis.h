#ifndef __TIE_CATISamAnalysisAxis
#define __TIE_CATISamAnalysisAxis

#include <string.h>
#include "CATBaseUnknown.h"
#include "CATMetaClass.h"
#include "CATMacForTie.h"
#include "CATISamAnalysisAxis.h"
#include "JS0DSPA.h"


#ifdef _WINDOWS_SOURCE
#define Exported __declspec(dllexport)
#define Imported __declspec(dllimport)
#else
#define Exported 
#define Imported 
#endif


/* To link an implementation with the interface CATISamAnalysisAxis */
#define declare_TIE_CATISamAnalysisAxis(classe) \
 \
 \
class TIECATISamAnalysisAxis##classe : public CATISamAnalysisAxis \
{ \
   private: \
      CATDeclareCommonTIEMembers \
   public: \
      CATDeclareTIEMethods(CATISamAnalysisAxis, classe) \
      CATDeclareIUnknownMethodsForCATBaseUnknownTIE \
      CATDeclareIDispatchMethodsForCATBaseUnknownTIE \
      CATDeclareCATBaseUnknownMethodsForTIE \
      virtual HRESULT GetMathAxis(CATMathAxis& oMathAxis) const	; \
      virtual HRESULT GetMKSMathAxis(CATMathAxis& oMathAxis) const	; \
};



#define ENVTIEdeclare_CATISamAnalysisAxis(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
virtual HRESULT GetMathAxis(CATMathAxis& oMathAxis) const	; \
virtual HRESULT GetMKSMathAxis(CATMathAxis& oMathAxis) const	; \


#define ENVTIEdefine_CATISamAnalysisAxis(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
HRESULT  ENVTIEName::GetMathAxis(CATMathAxis& oMathAxis) const	 \
{ \
return (ENVTIECALL(CATISamAnalysisAxis,ENVTIETypeLetter,ENVTIELetter)GetMathAxis(oMathAxis)); \
} \
HRESULT  ENVTIEName::GetMKSMathAxis(CATMathAxis& oMathAxis) const	 \
{ \
return (ENVTIECALL(CATISamAnalysisAxis,ENVTIETypeLetter,ENVTIELetter)GetMKSMathAxis(oMathAxis)); \
} \


/* Name of the TIE class */
#define class_TIE_CATISamAnalysisAxis(classe)    TIECATISamAnalysisAxis##classe


/* Common methods inside a TIE */
#define common_TIE_CATISamAnalysisAxis(classe) \
 \
 \
/* Static initialization */ \
CATDefineCommonTIEMembers(CATISamAnalysisAxis, classe) \
 \
 \
CATImplementTIEMethods(CATISamAnalysisAxis, classe) \
CATImplementIUnknownMethodsForCATBaseUnknownTIE(CATISamAnalysisAxis, classe, 1) \
CATImplementIDispatchMethodsForCATBaseUnknownTIE(CATISamAnalysisAxis, classe) \
CATImplementCATBaseUnknownMethodsForTIE(CATISamAnalysisAxis, classe) \
 \
HRESULT  TIECATISamAnalysisAxis##classe::GetMathAxis(CATMathAxis& oMathAxis) const	 \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetMathAxis(oMathAxis)); \
} \
HRESULT  TIECATISamAnalysisAxis##classe::GetMKSMathAxis(CATMathAxis& oMathAxis) const	 \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetMKSMathAxis(oMathAxis)); \
} \



/* Macro used to link an implementation with an interface */
#define TIE_CATISamAnalysisAxis(classe) \
 \
 \
declare_TIE_CATISamAnalysisAxis(classe) \
 \
 \
CATMetaClass * __stdcall TIECATISamAnalysisAxis##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATISamAnalysisAxis,"CATISamAnalysisAxis",CATISamAnalysisAxis::MetaObject(),classe::MetaObject(),TIE); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATISamAnalysisAxis(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIECreation(CATISamAnalysisAxis, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATISamAnalysisAxis##classe(classe::MetaObject(),CATISamAnalysisAxis::MetaObject(),(void *)CreateTIECATISamAnalysisAxis##classe)



/* Macro used to link an implementation with an interface */
/* This TIE is chained on the implementation object */
#define TIEchain_CATISamAnalysisAxis(classe) \
 \
 \
declare_TIE_CATISamAnalysisAxis(classe) \
 \
 \
CATMetaClass * __stdcall TIECATISamAnalysisAxis##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATISamAnalysisAxis,"CATISamAnalysisAxis",CATISamAnalysisAxis::MetaObject(),classe::MetaObject(),TIEchain); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATISamAnalysisAxis(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIEchainCreation(CATISamAnalysisAxis, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATISamAnalysisAxis##classe(classe::MetaObject(),CATISamAnalysisAxis::MetaObject(),(void *)CreateTIECATISamAnalysisAxis##classe)


/* Macro to switch between BOA and TIE at build time */ 
#ifdef CATSYS_BOA_IS_TIE
#define BOA_CATISamAnalysisAxis(classe) TIE_CATISamAnalysisAxis(classe)
#else
#define BOA_CATISamAnalysisAxis(classe) CATImplementBOA(CATISamAnalysisAxis, classe)
#endif

#endif
