#ifndef __TIE_CATIPDMSaveUERevisionVersion
#define __TIE_CATIPDMSaveUERevisionVersion

#include <string.h>
#include "CATBaseUnknown.h"
#include "CATMetaClass.h"
#include "CATMacForTie.h"
#include "CATIPDMSaveUERevisionVersion.h"
#include "JS0DSPA.h"


#ifdef _WINDOWS_SOURCE
#define Exported __declspec(dllexport)
#define Imported __declspec(dllimport)
#else
#define Exported 
#define Imported 
#endif


/* To link an implementation with the interface CATIPDMSaveUERevisionVersion */
#define declare_TIE_CATIPDMSaveUERevisionVersion(classe) \
 \
 \
class TIECATIPDMSaveUERevisionVersion##classe : public CATIPDMSaveUERevisionVersion \
{ \
   private: \
      CATDeclareCommonTIEMembers \
   public: \
      CATDeclareTIEMethods(CATIPDMSaveUERevisionVersion, classe) \
      CATDeclareIUnknownMethodsForCATBaseUnknownTIE \
      CATDeclareIDispatchMethodsForCATBaseUnknownTIE \
      CATDeclareCATBaseUnknownMethodsForTIE \
      virtual HRESULT OnRevisionVersionAll( const CATListPtrCATDocument *iDocsToRevisionAll, CATIPDMSaveInfo *ipInfo, CATIPDMSaveAction *ipAction, CATListOfInt & oDocsToRevision) ; \
};



#define ENVTIEdeclare_CATIPDMSaveUERevisionVersion(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
virtual HRESULT OnRevisionVersionAll( const CATListPtrCATDocument *iDocsToRevisionAll, CATIPDMSaveInfo *ipInfo, CATIPDMSaveAction *ipAction, CATListOfInt & oDocsToRevision) ; \


#define ENVTIEdefine_CATIPDMSaveUERevisionVersion(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
HRESULT  ENVTIEName::OnRevisionVersionAll( const CATListPtrCATDocument *iDocsToRevisionAll, CATIPDMSaveInfo *ipInfo, CATIPDMSaveAction *ipAction, CATListOfInt & oDocsToRevision)  \
{ \
return (ENVTIECALL(CATIPDMSaveUERevisionVersion,ENVTIETypeLetter,ENVTIELetter)OnRevisionVersionAll(iDocsToRevisionAll,ipInfo,ipAction,oDocsToRevision)); \
} \


/* Name of the TIE class */
#define class_TIE_CATIPDMSaveUERevisionVersion(classe)    TIECATIPDMSaveUERevisionVersion##classe


/* Common methods inside a TIE */
#define common_TIE_CATIPDMSaveUERevisionVersion(classe) \
 \
 \
/* Static initialization */ \
CATDefineCommonTIEMembers(CATIPDMSaveUERevisionVersion, classe) \
 \
 \
CATImplementTIEMethods(CATIPDMSaveUERevisionVersion, classe) \
CATImplementIUnknownMethodsForCATBaseUnknownTIE(CATIPDMSaveUERevisionVersion, classe, 1) \
CATImplementIDispatchMethodsForCATBaseUnknownTIE(CATIPDMSaveUERevisionVersion, classe) \
CATImplementCATBaseUnknownMethodsForTIE(CATIPDMSaveUERevisionVersion, classe) \
 \
HRESULT  TIECATIPDMSaveUERevisionVersion##classe::OnRevisionVersionAll( const CATListPtrCATDocument *iDocsToRevisionAll, CATIPDMSaveInfo *ipInfo, CATIPDMSaveAction *ipAction, CATListOfInt & oDocsToRevision)  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->OnRevisionVersionAll(iDocsToRevisionAll,ipInfo,ipAction,oDocsToRevision)); \
} \



/* Macro used to link an implementation with an interface */
#define TIE_CATIPDMSaveUERevisionVersion(classe) \
 \
 \
declare_TIE_CATIPDMSaveUERevisionVersion(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIPDMSaveUERevisionVersion##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIPDMSaveUERevisionVersion,"CATIPDMSaveUERevisionVersion",CATIPDMSaveUERevisionVersion::MetaObject(),classe::MetaObject(),TIE); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIPDMSaveUERevisionVersion(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIECreation(CATIPDMSaveUERevisionVersion, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIPDMSaveUERevisionVersion##classe(classe::MetaObject(),CATIPDMSaveUERevisionVersion::MetaObject(),(void *)CreateTIECATIPDMSaveUERevisionVersion##classe)



/* Macro used to link an implementation with an interface */
/* This TIE is chained on the implementation object */
#define TIEchain_CATIPDMSaveUERevisionVersion(classe) \
 \
 \
declare_TIE_CATIPDMSaveUERevisionVersion(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIPDMSaveUERevisionVersion##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIPDMSaveUERevisionVersion,"CATIPDMSaveUERevisionVersion",CATIPDMSaveUERevisionVersion::MetaObject(),classe::MetaObject(),TIEchain); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIPDMSaveUERevisionVersion(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIEchainCreation(CATIPDMSaveUERevisionVersion, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIPDMSaveUERevisionVersion##classe(classe::MetaObject(),CATIPDMSaveUERevisionVersion::MetaObject(),(void *)CreateTIECATIPDMSaveUERevisionVersion##classe)


/* Macro to switch between BOA and TIE at build time */ 
#ifdef CATSYS_BOA_IS_TIE
#define BOA_CATIPDMSaveUERevisionVersion(classe) TIE_CATIPDMSaveUERevisionVersion(classe)
#else
#define BOA_CATIPDMSaveUERevisionVersion(classe) CATImplementBOA(CATIPDMSaveUERevisionVersion, classe)
#endif

#endif
