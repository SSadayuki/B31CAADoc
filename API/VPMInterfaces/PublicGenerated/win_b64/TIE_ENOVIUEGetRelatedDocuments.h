#ifndef __TIE_ENOVIUEGetRelatedDocuments
#define __TIE_ENOVIUEGetRelatedDocuments

#include <string.h>
#include "CATBaseUnknown.h"
#include "CATMetaClass.h"
#include "CATMacForTie.h"
#include "ENOVIUEGetRelatedDocuments.h"
#include "JS0DSPA.h"


#ifdef _WINDOWS_SOURCE
#define Exported __declspec(dllexport)
#define Imported __declspec(dllimport)
#else
#define Exported 
#define Imported 
#endif


/* To link an implementation with the interface ENOVIUEGetRelatedDocuments */
#define declare_TIE_ENOVIUEGetRelatedDocuments(classe) \
 \
 \
class TIEENOVIUEGetRelatedDocuments##classe : public ENOVIUEGetRelatedDocuments \
{ \
   private: \
      CATDeclareCommonTIEMembers \
   public: \
      CATDeclareTIEMethods(ENOVIUEGetRelatedDocuments, classe) \
      CATDeclareIUnknownMethodsForCATBaseUnknownTIE \
      CATDeclareIDispatchMethodsForCATBaseUnknownTIE \
      CATDeclareCATBaseUnknownMethodsForTIE \
      virtual HRESULT Select(const CATListValCATBaseUnknown_var& iListInObs, CATListValCATBaseUnknown_var& iListOutObs); \
};



#define ENVTIEdeclare_ENOVIUEGetRelatedDocuments(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
virtual HRESULT Select(const CATListValCATBaseUnknown_var& iListInObs, CATListValCATBaseUnknown_var& iListOutObs); \


#define ENVTIEdefine_ENOVIUEGetRelatedDocuments(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
HRESULT  ENVTIEName::Select(const CATListValCATBaseUnknown_var& iListInObs, CATListValCATBaseUnknown_var& iListOutObs) \
{ \
return (ENVTIECALL(ENOVIUEGetRelatedDocuments,ENVTIETypeLetter,ENVTIELetter)Select(iListInObs,iListOutObs)); \
} \


/* Name of the TIE class */
#define class_TIE_ENOVIUEGetRelatedDocuments(classe)    TIEENOVIUEGetRelatedDocuments##classe


/* Common methods inside a TIE */
#define common_TIE_ENOVIUEGetRelatedDocuments(classe) \
 \
 \
/* Static initialization */ \
CATDefineCommonTIEMembers(ENOVIUEGetRelatedDocuments, classe) \
 \
 \
CATImplementTIEMethods(ENOVIUEGetRelatedDocuments, classe) \
CATImplementIUnknownMethodsForCATBaseUnknownTIE(ENOVIUEGetRelatedDocuments, classe, 1) \
CATImplementIDispatchMethodsForCATBaseUnknownTIE(ENOVIUEGetRelatedDocuments, classe) \
CATImplementCATBaseUnknownMethodsForTIE(ENOVIUEGetRelatedDocuments, classe) \
 \
HRESULT  TIEENOVIUEGetRelatedDocuments##classe::Select(const CATListValCATBaseUnknown_var& iListInObs, CATListValCATBaseUnknown_var& iListOutObs) \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->Select(iListInObs,iListOutObs)); \
} \



/* Macro used to link an implementation with an interface */
#define TIE_ENOVIUEGetRelatedDocuments(classe) \
 \
 \
declare_TIE_ENOVIUEGetRelatedDocuments(classe) \
 \
 \
CATMetaClass * __stdcall TIEENOVIUEGetRelatedDocuments##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_ENOVIUEGetRelatedDocuments,"ENOVIUEGetRelatedDocuments",ENOVIUEGetRelatedDocuments::MetaObject(),classe::MetaObject(),TIE); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_ENOVIUEGetRelatedDocuments(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIECreation(ENOVIUEGetRelatedDocuments, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicENOVIUEGetRelatedDocuments##classe(classe::MetaObject(),ENOVIUEGetRelatedDocuments::MetaObject(),(void *)CreateTIEENOVIUEGetRelatedDocuments##classe)



/* Macro used to link an implementation with an interface */
/* This TIE is chained on the implementation object */
#define TIEchain_ENOVIUEGetRelatedDocuments(classe) \
 \
 \
declare_TIE_ENOVIUEGetRelatedDocuments(classe) \
 \
 \
CATMetaClass * __stdcall TIEENOVIUEGetRelatedDocuments##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_ENOVIUEGetRelatedDocuments,"ENOVIUEGetRelatedDocuments",ENOVIUEGetRelatedDocuments::MetaObject(),classe::MetaObject(),TIEchain); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_ENOVIUEGetRelatedDocuments(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIEchainCreation(ENOVIUEGetRelatedDocuments, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicENOVIUEGetRelatedDocuments##classe(classe::MetaObject(),ENOVIUEGetRelatedDocuments::MetaObject(),(void *)CreateTIEENOVIUEGetRelatedDocuments##classe)


/* Macro to switch between BOA and TIE at build time */ 
#ifdef CATSYS_BOA_IS_TIE
#define BOA_ENOVIUEGetRelatedDocuments(classe) TIE_ENOVIUEGetRelatedDocuments(classe)
#else
#define BOA_ENOVIUEGetRelatedDocuments(classe) CATImplementBOA(ENOVIUEGetRelatedDocuments, classe)
#endif

#endif
