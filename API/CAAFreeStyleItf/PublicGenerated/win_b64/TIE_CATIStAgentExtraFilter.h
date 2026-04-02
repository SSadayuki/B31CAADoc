#ifndef __TIE_CATIStAgentExtraFilter
#define __TIE_CATIStAgentExtraFilter

#include <string.h>
#include "CATBaseUnknown.h"
#include "CATMetaClass.h"
#include "CATMacForTie.h"
#include "CATIStAgentExtraFilter.h"
#include "JS0DSPA.h"


#ifdef _WINDOWS_SOURCE
#define Exported __declspec(dllexport)
#define Imported __declspec(dllimport)
#else
#define Exported 
#define Imported 
#endif


/* To link an implementation with the interface CATIStAgentExtraFilter */
#define declare_TIE_CATIStAgentExtraFilter(classe) \
 \
 \
class TIECATIStAgentExtraFilter##classe : public CATIStAgentExtraFilter \
{ \
   private: \
      CATDeclareCommonTIEMembers \
   public: \
      CATDeclareTIEMethods(CATIStAgentExtraFilter, classe) \
      CATDeclareIUnknownMethodsForCATBaseUnknownTIE \
      CATDeclareIDispatchMethodsForCATBaseUnknownTIE \
      CATDeclareCATBaseUnknownMethodsForTIE \
      virtual HRESULT PreCheckPath(CATPathElement * iPath, CATPathElement *& oPath) ; \
      virtual HRESULT ExtraCheckPath(CATPathElement * iPath, CATPathElement *& oPath) ; \
};



#define ENVTIEdeclare_CATIStAgentExtraFilter(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
virtual HRESULT PreCheckPath(CATPathElement * iPath, CATPathElement *& oPath) ; \
virtual HRESULT ExtraCheckPath(CATPathElement * iPath, CATPathElement *& oPath) ; \


#define ENVTIEdefine_CATIStAgentExtraFilter(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
HRESULT  ENVTIEName::PreCheckPath(CATPathElement * iPath, CATPathElement *& oPath)  \
{ \
return (ENVTIECALL(CATIStAgentExtraFilter,ENVTIETypeLetter,ENVTIELetter)PreCheckPath(iPath,oPath)); \
} \
HRESULT  ENVTIEName::ExtraCheckPath(CATPathElement * iPath, CATPathElement *& oPath)  \
{ \
return (ENVTIECALL(CATIStAgentExtraFilter,ENVTIETypeLetter,ENVTIELetter)ExtraCheckPath(iPath,oPath)); \
} \


/* Name of the TIE class */
#define class_TIE_CATIStAgentExtraFilter(classe)    TIECATIStAgentExtraFilter##classe


/* Common methods inside a TIE */
#define common_TIE_CATIStAgentExtraFilter(classe) \
 \
 \
/* Static initialization */ \
CATDefineCommonTIEMembers(CATIStAgentExtraFilter, classe) \
 \
 \
CATImplementTIEMethods(CATIStAgentExtraFilter, classe) \
CATImplementIUnknownMethodsForCATBaseUnknownTIE(CATIStAgentExtraFilter, classe, 1) \
CATImplementIDispatchMethodsForCATBaseUnknownTIE(CATIStAgentExtraFilter, classe) \
CATImplementCATBaseUnknownMethodsForTIE(CATIStAgentExtraFilter, classe) \
 \
HRESULT  TIECATIStAgentExtraFilter##classe::PreCheckPath(CATPathElement * iPath, CATPathElement *& oPath)  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->PreCheckPath(iPath,oPath)); \
} \
HRESULT  TIECATIStAgentExtraFilter##classe::ExtraCheckPath(CATPathElement * iPath, CATPathElement *& oPath)  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->ExtraCheckPath(iPath,oPath)); \
} \



/* Macro used to link an implementation with an interface */
#define TIE_CATIStAgentExtraFilter(classe) \
 \
 \
declare_TIE_CATIStAgentExtraFilter(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIStAgentExtraFilter##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIStAgentExtraFilter,"CATIStAgentExtraFilter",CATIStAgentExtraFilter::MetaObject(),classe::MetaObject(),TIE); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIStAgentExtraFilter(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIECreation(CATIStAgentExtraFilter, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIStAgentExtraFilter##classe(classe::MetaObject(),CATIStAgentExtraFilter::MetaObject(),(void *)CreateTIECATIStAgentExtraFilter##classe)



/* Macro used to link an implementation with an interface */
/* This TIE is chained on the implementation object */
#define TIEchain_CATIStAgentExtraFilter(classe) \
 \
 \
declare_TIE_CATIStAgentExtraFilter(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIStAgentExtraFilter##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIStAgentExtraFilter,"CATIStAgentExtraFilter",CATIStAgentExtraFilter::MetaObject(),classe::MetaObject(),TIEchain); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIStAgentExtraFilter(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIEchainCreation(CATIStAgentExtraFilter, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIStAgentExtraFilter##classe(classe::MetaObject(),CATIStAgentExtraFilter::MetaObject(),(void *)CreateTIECATIStAgentExtraFilter##classe)


/* Macro to switch between BOA and TIE at build time */ 
#ifdef CATSYS_BOA_IS_TIE
#define BOA_CATIStAgentExtraFilter(classe) TIE_CATIStAgentExtraFilter(classe)
#else
#define BOA_CATIStAgentExtraFilter(classe) CATImplementBOA(CATIStAgentExtraFilter, classe)
#endif

#endif
