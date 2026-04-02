#ifndef __TIE_CATISamCCPFilter
#define __TIE_CATISamCCPFilter

#include <string.h>
#include "CATBaseUnknown.h"
#include "CATMetaClass.h"
#include "CATMacForTie.h"
#include "CATISamCCPFilter.h"
#include "JS0DSPA.h"


#ifdef _WINDOWS_SOURCE
#define Exported __declspec(dllexport)
#define Imported __declspec(dllimport)
#else
#define Exported 
#define Imported 
#endif


/* To link an implementation with the interface CATISamCCPFilter */
#define declare_TIE_CATISamCCPFilter(classe) \
 \
 \
class TIECATISamCCPFilter##classe : public CATISamCCPFilter \
{ \
   private: \
      CATDeclareCommonTIEMembers \
   public: \
      CATDeclareTIEMethods(CATISamCCPFilter, classe) \
      CATDeclareIUnknownMethodsForCATBaseUnknownTIE \
      CATDeclareIDispatchMethodsForCATBaseUnknownTIE \
      CATDeclareCATBaseUnknownMethodsForTIE \
      virtual int IsFeatureAvailable(const char * &iHeaderID) ; \
};



#define ENVTIEdeclare_CATISamCCPFilter(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
virtual int IsFeatureAvailable(const char * &iHeaderID) ; \


#define ENVTIEdefine_CATISamCCPFilter(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
int  ENVTIEName::IsFeatureAvailable(const char * &iHeaderID)  \
{ \
return (ENVTIECALL(CATISamCCPFilter,ENVTIETypeLetter,ENVTIELetter)IsFeatureAvailable(iHeaderID)); \
} \


/* Name of the TIE class */
#define class_TIE_CATISamCCPFilter(classe)    TIECATISamCCPFilter##classe


/* Common methods inside a TIE */
#define common_TIE_CATISamCCPFilter(classe) \
 \
 \
/* Static initialization */ \
CATDefineCommonTIEMembers(CATISamCCPFilter, classe) \
 \
 \
CATImplementTIEMethods(CATISamCCPFilter, classe) \
CATImplementIUnknownMethodsForCATBaseUnknownTIE(CATISamCCPFilter, classe, 1) \
CATImplementIDispatchMethodsForCATBaseUnknownTIE(CATISamCCPFilter, classe) \
CATImplementCATBaseUnknownMethodsForTIE(CATISamCCPFilter, classe) \
 \
int  TIECATISamCCPFilter##classe::IsFeatureAvailable(const char * &iHeaderID)  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->IsFeatureAvailable(iHeaderID)); \
} \



/* Macro used to link an implementation with an interface */
#define TIE_CATISamCCPFilter(classe) \
 \
 \
declare_TIE_CATISamCCPFilter(classe) \
 \
 \
CATMetaClass * __stdcall TIECATISamCCPFilter##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATISamCCPFilter,"CATISamCCPFilter",CATISamCCPFilter::MetaObject(),classe::MetaObject(),TIE); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATISamCCPFilter(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIECreation(CATISamCCPFilter, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATISamCCPFilter##classe(classe::MetaObject(),CATISamCCPFilter::MetaObject(),(void *)CreateTIECATISamCCPFilter##classe)



/* Macro used to link an implementation with an interface */
/* This TIE is chained on the implementation object */
#define TIEchain_CATISamCCPFilter(classe) \
 \
 \
declare_TIE_CATISamCCPFilter(classe) \
 \
 \
CATMetaClass * __stdcall TIECATISamCCPFilter##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATISamCCPFilter,"CATISamCCPFilter",CATISamCCPFilter::MetaObject(),classe::MetaObject(),TIEchain); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATISamCCPFilter(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIEchainCreation(CATISamCCPFilter, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATISamCCPFilter##classe(classe::MetaObject(),CATISamCCPFilter::MetaObject(),(void *)CreateTIECATISamCCPFilter##classe)


/* Macro to switch between BOA and TIE at build time */ 
#ifdef CATSYS_BOA_IS_TIE
#define BOA_CATISamCCPFilter(classe) TIE_CATISamCCPFilter(classe)
#else
#define BOA_CATISamCCPFilter(classe) CATImplementBOA(CATISamCCPFilter, classe)
#endif

#endif
