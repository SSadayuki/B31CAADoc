#ifndef __TIE_CATIMfgCustomizeCSOFilter
#define __TIE_CATIMfgCustomizeCSOFilter

#include <string.h>
#include "CATBaseUnknown.h"
#include "CATMetaClass.h"
#include "CATMacForTie.h"
#include "CATIMfgCustomizeCSOFilter.h"
#include "JS0DSPA.h"


#ifdef _WINDOWS_SOURCE
#define Exported __declspec(dllexport)
#define Imported __declspec(dllimport)
#else
#define Exported 
#define Imported 
#endif


/* To link an implementation with the interface CATIMfgCustomizeCSOFilter */
#define declare_TIE_CATIMfgCustomizeCSOFilter(classe) \
 \
 \
class TIECATIMfgCustomizeCSOFilter##classe : public CATIMfgCustomizeCSOFilter \
{ \
   private: \
      CATDeclareCommonTIEMembers \
   public: \
      CATDeclareTIEMethods(CATIMfgCustomizeCSOFilter, classe) \
      CATDeclareIUnknownMethodsForCATBaseUnknownTIE \
      CATDeclareIDispatchMethodsForCATBaseUnknownTIE \
      CATDeclareCATBaseUnknownMethodsForTIE \
      virtual HRESULT CommandIsAvailable (const char * iHeaderID) ; \
};



#define ENVTIEdeclare_CATIMfgCustomizeCSOFilter(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
virtual HRESULT CommandIsAvailable (const char * iHeaderID) ; \


#define ENVTIEdefine_CATIMfgCustomizeCSOFilter(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
HRESULT  ENVTIEName::CommandIsAvailable (const char * iHeaderID)  \
{ \
return (ENVTIECALL(CATIMfgCustomizeCSOFilter,ENVTIETypeLetter,ENVTIELetter)CommandIsAvailable (iHeaderID)); \
} \


/* Name of the TIE class */
#define class_TIE_CATIMfgCustomizeCSOFilter(classe)    TIECATIMfgCustomizeCSOFilter##classe


/* Common methods inside a TIE */
#define common_TIE_CATIMfgCustomizeCSOFilter(classe) \
 \
 \
/* Static initialization */ \
CATDefineCommonTIEMembers(CATIMfgCustomizeCSOFilter, classe) \
 \
 \
CATImplementTIEMethods(CATIMfgCustomizeCSOFilter, classe) \
CATImplementIUnknownMethodsForCATBaseUnknownTIE(CATIMfgCustomizeCSOFilter, classe, 1) \
CATImplementIDispatchMethodsForCATBaseUnknownTIE(CATIMfgCustomizeCSOFilter, classe) \
CATImplementCATBaseUnknownMethodsForTIE(CATIMfgCustomizeCSOFilter, classe) \
 \
HRESULT  TIECATIMfgCustomizeCSOFilter##classe::CommandIsAvailable (const char * iHeaderID)  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->CommandIsAvailable (iHeaderID)); \
} \



/* Macro used to link an implementation with an interface */
#define TIE_CATIMfgCustomizeCSOFilter(classe) \
 \
 \
declare_TIE_CATIMfgCustomizeCSOFilter(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIMfgCustomizeCSOFilter##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIMfgCustomizeCSOFilter,"CATIMfgCustomizeCSOFilter",CATIMfgCustomizeCSOFilter::MetaObject(),classe::MetaObject(),TIE); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIMfgCustomizeCSOFilter(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIECreation(CATIMfgCustomizeCSOFilter, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIMfgCustomizeCSOFilter##classe(classe::MetaObject(),CATIMfgCustomizeCSOFilter::MetaObject(),(void *)CreateTIECATIMfgCustomizeCSOFilter##classe)



/* Macro used to link an implementation with an interface */
/* This TIE is chained on the implementation object */
#define TIEchain_CATIMfgCustomizeCSOFilter(classe) \
 \
 \
declare_TIE_CATIMfgCustomizeCSOFilter(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIMfgCustomizeCSOFilter##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIMfgCustomizeCSOFilter,"CATIMfgCustomizeCSOFilter",CATIMfgCustomizeCSOFilter::MetaObject(),classe::MetaObject(),TIEchain); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIMfgCustomizeCSOFilter(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIEchainCreation(CATIMfgCustomizeCSOFilter, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIMfgCustomizeCSOFilter##classe(classe::MetaObject(),CATIMfgCustomizeCSOFilter::MetaObject(),(void *)CreateTIECATIMfgCustomizeCSOFilter##classe)


/* Macro to switch between BOA and TIE at build time */ 
#ifdef CATSYS_BOA_IS_TIE
#define BOA_CATIMfgCustomizeCSOFilter(classe) TIE_CATIMfgCustomizeCSOFilter(classe)
#else
#define BOA_CATIMfgCustomizeCSOFilter(classe) CATImplementBOA(CATIMfgCustomizeCSOFilter, classe)
#endif

#endif
