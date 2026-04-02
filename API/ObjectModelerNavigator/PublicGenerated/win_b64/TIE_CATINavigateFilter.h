#ifndef __TIE_CATINavigateFilter
#define __TIE_CATINavigateFilter

#include <string.h>
#include "CATBaseUnknown.h"
#include "CATMetaClass.h"
#include "CATMacForTie.h"
#include "CATINavigateFilter.h"
#include "JS0DSPA.h"


#ifdef _WINDOWS_SOURCE
#define Exported __declspec(dllexport)
#define Imported __declspec(dllimport)
#else
#define Exported 
#define Imported 
#endif


/* To link an implementation with the interface CATINavigateFilter */
#define declare_TIE_CATINavigateFilter(classe) \
 \
 \
class TIECATINavigateFilter##classe : public CATINavigateFilter \
{ \
   private: \
      CATDeclareCommonTIEMembers \
   public: \
      CATDeclareTIEMethods(CATINavigateFilter, classe) \
      CATDeclareIUnknownMethodsForCATBaseUnknownTIE \
      CATDeclareIDispatchMethodsForCATBaseUnknownTIE \
      CATDeclareCATBaseUnknownMethodsForTIE \
      virtual CATBoolean IsShown( CATINavigateObject* iFather) ; \
};



#define ENVTIEdeclare_CATINavigateFilter(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
virtual CATBoolean IsShown( CATINavigateObject* iFather) ; \


#define ENVTIEdefine_CATINavigateFilter(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
CATBoolean  ENVTIEName::IsShown( CATINavigateObject* iFather)  \
{ \
return (ENVTIECALL(CATINavigateFilter,ENVTIETypeLetter,ENVTIELetter)IsShown(iFather)); \
} \


/* Name of the TIE class */
#define class_TIE_CATINavigateFilter(classe)    TIECATINavigateFilter##classe


/* Common methods inside a TIE */
#define common_TIE_CATINavigateFilter(classe) \
 \
 \
/* Static initialization */ \
CATDefineCommonTIEMembers(CATINavigateFilter, classe) \
 \
 \
CATImplementTIEMethods(CATINavigateFilter, classe) \
CATImplementIUnknownMethodsForCATBaseUnknownTIE(CATINavigateFilter, classe, 1) \
CATImplementIDispatchMethodsForCATBaseUnknownTIE(CATINavigateFilter, classe) \
CATImplementCATBaseUnknownMethodsForTIE(CATINavigateFilter, classe) \
 \
CATBoolean  TIECATINavigateFilter##classe::IsShown( CATINavigateObject* iFather)  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->IsShown(iFather)); \
} \



/* Macro used to link an implementation with an interface */
#define TIE_CATINavigateFilter(classe) \
 \
 \
declare_TIE_CATINavigateFilter(classe) \
 \
 \
CATMetaClass * __stdcall TIECATINavigateFilter##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATINavigateFilter,"CATINavigateFilter",CATINavigateFilter::MetaObject(),classe::MetaObject(),TIE); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATINavigateFilter(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIECreation(CATINavigateFilter, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATINavigateFilter##classe(classe::MetaObject(),CATINavigateFilter::MetaObject(),(void *)CreateTIECATINavigateFilter##classe)



/* Macro used to link an implementation with an interface */
/* This TIE is chained on the implementation object */
#define TIEchain_CATINavigateFilter(classe) \
 \
 \
declare_TIE_CATINavigateFilter(classe) \
 \
 \
CATMetaClass * __stdcall TIECATINavigateFilter##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATINavigateFilter,"CATINavigateFilter",CATINavigateFilter::MetaObject(),classe::MetaObject(),TIEchain); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATINavigateFilter(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIEchainCreation(CATINavigateFilter, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATINavigateFilter##classe(classe::MetaObject(),CATINavigateFilter::MetaObject(),(void *)CreateTIECATINavigateFilter##classe)


/* Macro to switch between BOA and TIE at build time */ 
#ifdef CATSYS_BOA_IS_TIE
#define BOA_CATINavigateFilter(classe) TIE_CATINavigateFilter(classe)
#else
#define BOA_CATINavigateFilter(classe) CATImplementBOA(CATINavigateFilter, classe)
#endif

#endif
