#ifndef __TIE_CATICSOFilter
#define __TIE_CATICSOFilter

#include <string.h>
#include "CATBaseUnknown.h"
#include "CATMetaClass.h"
#include "CATMacForTie.h"
#include "CATICSOFilter.h"
#include "JS0DSPA.h"


#ifdef _WINDOWS_SOURCE
#define Exported __declspec(dllexport)
#define Imported __declspec(dllimport)
#else
#define Exported 
#define Imported 
#endif


/* To link an implementation with the interface CATICSOFilter */
#define declare_TIE_CATICSOFilter(classe) \
 \
 \
class TIECATICSOFilter##classe : public CATICSOFilter \
{ \
   private: \
      CATDeclareCommonTIEMembers \
   public: \
      CATDeclareTIEMethods(CATICSOFilter, classe) \
      CATDeclareIUnknownMethodsForCATBaseUnknownTIE \
      CATDeclareIDispatchMethodsForCATBaseUnknownTIE \
      CATDeclareCATBaseUnknownMethodsForTIE \
      virtual HRESULT CommandIsAvailable (const char * iHeaderID, const CATCSO * iCSO ) ; \
      virtual HRESULT AvailableElements (const char * iHeaderID, const CATCSO * iCSO, CATListValCATBaseUnknown_var ** ioAvailableElements ) ; \
};



#define ENVTIEdeclare_CATICSOFilter(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
virtual HRESULT CommandIsAvailable (const char * iHeaderID, const CATCSO * iCSO ) ; \
virtual HRESULT AvailableElements (const char * iHeaderID, const CATCSO * iCSO, CATListValCATBaseUnknown_var ** ioAvailableElements ) ; \


#define ENVTIEdefine_CATICSOFilter(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
HRESULT  ENVTIEName::CommandIsAvailable (const char * iHeaderID, const CATCSO * iCSO )  \
{ \
return (ENVTIECALL(CATICSOFilter,ENVTIETypeLetter,ENVTIELetter)CommandIsAvailable (iHeaderID,iCSO )); \
} \
HRESULT  ENVTIEName::AvailableElements (const char * iHeaderID, const CATCSO * iCSO, CATListValCATBaseUnknown_var ** ioAvailableElements )  \
{ \
return (ENVTIECALL(CATICSOFilter,ENVTIETypeLetter,ENVTIELetter)AvailableElements (iHeaderID,iCSO,ioAvailableElements )); \
} \


/* Name of the TIE class */
#define class_TIE_CATICSOFilter(classe)    TIECATICSOFilter##classe


/* Common methods inside a TIE */
#define common_TIE_CATICSOFilter(classe) \
 \
 \
/* Static initialization */ \
CATDefineCommonTIEMembers(CATICSOFilter, classe) \
 \
 \
CATImplementTIEMethods(CATICSOFilter, classe) \
CATImplementIUnknownMethodsForCATBaseUnknownTIE(CATICSOFilter, classe, 1) \
CATImplementIDispatchMethodsForCATBaseUnknownTIE(CATICSOFilter, classe) \
CATImplementCATBaseUnknownMethodsForTIE(CATICSOFilter, classe) \
 \
HRESULT  TIECATICSOFilter##classe::CommandIsAvailable (const char * iHeaderID, const CATCSO * iCSO )  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->CommandIsAvailable (iHeaderID,iCSO )); \
} \
HRESULT  TIECATICSOFilter##classe::AvailableElements (const char * iHeaderID, const CATCSO * iCSO, CATListValCATBaseUnknown_var ** ioAvailableElements )  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->AvailableElements (iHeaderID,iCSO,ioAvailableElements )); \
} \



/* Macro used to link an implementation with an interface */
#define TIE_CATICSOFilter(classe) \
 \
 \
declare_TIE_CATICSOFilter(classe) \
 \
 \
CATMetaClass * __stdcall TIECATICSOFilter##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATICSOFilter,"CATICSOFilter",CATICSOFilter::MetaObject(),classe::MetaObject(),TIE); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATICSOFilter(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIECreation(CATICSOFilter, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATICSOFilter##classe(classe::MetaObject(),CATICSOFilter::MetaObject(),(void *)CreateTIECATICSOFilter##classe)



/* Macro used to link an implementation with an interface */
/* This TIE is chained on the implementation object */
#define TIEchain_CATICSOFilter(classe) \
 \
 \
declare_TIE_CATICSOFilter(classe) \
 \
 \
CATMetaClass * __stdcall TIECATICSOFilter##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATICSOFilter,"CATICSOFilter",CATICSOFilter::MetaObject(),classe::MetaObject(),TIEchain); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATICSOFilter(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIEchainCreation(CATICSOFilter, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATICSOFilter##classe(classe::MetaObject(),CATICSOFilter::MetaObject(),(void *)CreateTIECATICSOFilter##classe)


/* Macro to switch between BOA and TIE at build time */ 
#ifdef CATSYS_BOA_IS_TIE
#define BOA_CATICSOFilter(classe) TIE_CATICSOFilter(classe)
#else
#define BOA_CATICSOFilter(classe) CATImplementBOA(CATICSOFilter, classe)
#endif

#endif
