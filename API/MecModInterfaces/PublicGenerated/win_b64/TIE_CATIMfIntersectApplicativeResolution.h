#ifndef __TIE_CATIMfIntersectApplicativeResolution
#define __TIE_CATIMfIntersectApplicativeResolution

#include <string.h>
#include "CATBaseUnknown.h"
#include "CATMetaClass.h"
#include "CATMacForTie.h"
#include "CATIMfIntersectApplicativeResolution.h"
#include "JS0DSPA.h"


#ifdef _WINDOWS_SOURCE
#define Exported __declspec(dllexport)
#define Imported __declspec(dllimport)
#else
#define Exported 
#define Imported 
#endif


/* To link an implementation with the interface CATIMfIntersectApplicativeResolution */
#define declare_TIE_CATIMfIntersectApplicativeResolution(classe) \
 \
 \
class TIECATIMfIntersectApplicativeResolution##classe : public CATIMfIntersectApplicativeResolution \
{ \
   private: \
      CATDeclareCommonTIEMembers \
   public: \
      CATDeclareTIEMethods(CATIMfIntersectApplicativeResolution, classe) \
      CATDeclareIUnknownMethodsForCATBaseUnknownTIE \
      CATDeclareIDispatchMethodsForCATBaseUnknownTIE \
      CATDeclareCATBaseUnknownMethodsForTIE \
      virtual HRESULT GetResolutionEdges ( CATListValCATISpecObject_var& iFirstOperands, CATListValCATISpecObject_var& iSecondOperands, CATISpecObject_var& iResolveFeature, CATListValCATBaseUnknown_var & oEdges ) ; \
};



#define ENVTIEdeclare_CATIMfIntersectApplicativeResolution(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
virtual HRESULT GetResolutionEdges ( CATListValCATISpecObject_var& iFirstOperands, CATListValCATISpecObject_var& iSecondOperands, CATISpecObject_var& iResolveFeature, CATListValCATBaseUnknown_var & oEdges ) ; \


#define ENVTIEdefine_CATIMfIntersectApplicativeResolution(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
HRESULT  ENVTIEName::GetResolutionEdges ( CATListValCATISpecObject_var& iFirstOperands, CATListValCATISpecObject_var& iSecondOperands, CATISpecObject_var& iResolveFeature, CATListValCATBaseUnknown_var & oEdges )  \
{ \
return (ENVTIECALL(CATIMfIntersectApplicativeResolution,ENVTIETypeLetter,ENVTIELetter)GetResolutionEdges (iFirstOperands,iSecondOperands,iResolveFeature,oEdges )); \
} \


/* Name of the TIE class */
#define class_TIE_CATIMfIntersectApplicativeResolution(classe)    TIECATIMfIntersectApplicativeResolution##classe


/* Common methods inside a TIE */
#define common_TIE_CATIMfIntersectApplicativeResolution(classe) \
 \
 \
/* Static initialization */ \
CATDefineCommonTIEMembers(CATIMfIntersectApplicativeResolution, classe) \
 \
 \
CATImplementTIEMethods(CATIMfIntersectApplicativeResolution, classe) \
CATImplementIUnknownMethodsForCATBaseUnknownTIE(CATIMfIntersectApplicativeResolution, classe, 1) \
CATImplementIDispatchMethodsForCATBaseUnknownTIE(CATIMfIntersectApplicativeResolution, classe) \
CATImplementCATBaseUnknownMethodsForTIE(CATIMfIntersectApplicativeResolution, classe) \
 \
HRESULT  TIECATIMfIntersectApplicativeResolution##classe::GetResolutionEdges ( CATListValCATISpecObject_var& iFirstOperands, CATListValCATISpecObject_var& iSecondOperands, CATISpecObject_var& iResolveFeature, CATListValCATBaseUnknown_var & oEdges )  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetResolutionEdges (iFirstOperands,iSecondOperands,iResolveFeature,oEdges )); \
} \



/* Macro used to link an implementation with an interface */
#define TIE_CATIMfIntersectApplicativeResolution(classe) \
 \
 \
declare_TIE_CATIMfIntersectApplicativeResolution(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIMfIntersectApplicativeResolution##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIMfIntersectApplicativeResolution,"CATIMfIntersectApplicativeResolution",CATIMfIntersectApplicativeResolution::MetaObject(),classe::MetaObject(),TIE); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIMfIntersectApplicativeResolution(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIECreation(CATIMfIntersectApplicativeResolution, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIMfIntersectApplicativeResolution##classe(classe::MetaObject(),CATIMfIntersectApplicativeResolution::MetaObject(),(void *)CreateTIECATIMfIntersectApplicativeResolution##classe)



/* Macro used to link an implementation with an interface */
/* This TIE is chained on the implementation object */
#define TIEchain_CATIMfIntersectApplicativeResolution(classe) \
 \
 \
declare_TIE_CATIMfIntersectApplicativeResolution(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIMfIntersectApplicativeResolution##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIMfIntersectApplicativeResolution,"CATIMfIntersectApplicativeResolution",CATIMfIntersectApplicativeResolution::MetaObject(),classe::MetaObject(),TIEchain); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIMfIntersectApplicativeResolution(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIEchainCreation(CATIMfIntersectApplicativeResolution, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIMfIntersectApplicativeResolution##classe(classe::MetaObject(),CATIMfIntersectApplicativeResolution::MetaObject(),(void *)CreateTIECATIMfIntersectApplicativeResolution##classe)


/* Macro to switch between BOA and TIE at build time */ 
#ifdef CATSYS_BOA_IS_TIE
#define BOA_CATIMfIntersectApplicativeResolution(classe) TIE_CATIMfIntersectApplicativeResolution(classe)
#else
#define BOA_CATIMfIntersectApplicativeResolution(classe) CATImplementBOA(CATIMfIntersectApplicativeResolution, classe)
#endif

#endif
