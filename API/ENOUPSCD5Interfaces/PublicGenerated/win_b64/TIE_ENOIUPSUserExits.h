#ifndef __TIE_ENOIUPSUserExits
#define __TIE_ENOIUPSUserExits

#include <string.h>
#include "CATBaseUnknown.h"
#include "CATMetaClass.h"
#include "CATMacForTie.h"
#include "ENOIUPSUserExits.h"
#include "JS0DSPA.h"


#ifdef _WINDOWS_SOURCE
#define Exported __declspec(dllexport)
#define Imported __declspec(dllimport)
#else
#define Exported 
#define Imported 
#endif


/* To link an implementation with the interface ENOIUPSUserExits */
#define declare_TIE_ENOIUPSUserExits(classe) \
 \
 \
class TIEENOIUPSUserExits##classe : public ENOIUPSUserExits \
{ \
   private: \
      CATDeclareCommonTIEMembers \
   public: \
      CATDeclareTIEMethods(ENOIUPSUserExits, classe) \
      CATDeclareIUnknownMethodsForCATBaseUnknownTIE \
      CATDeclareIDispatchMethodsForCATBaseUnknownTIE \
      CATDeclareCATBaseUnknownMethodsForTIE \
      virtual HRESULT ConnectPre() ; \
      virtual void ConnectPost() ; \
      virtual HRESULT SaveStartPre() ; \
      virtual HRESULT SaveScopePost( const CATListValCATUnicodeString &ilType, const CATListValCATUnicodeString &ilName, const CATListValCATUnicodeString &ilRevision, const CATListValCATUnicodeString &ilFullPath, CATListOfInt                     &iolIncluded ) ; \
      virtual HRESULT SaveFinalPre( const CATListValCATUnicodeString &ilType, const CATListValCATUnicodeString &ilName, const CATListValCATUnicodeString &ilRevision, const CATListValCATUnicodeString &ilFullPath ) ; \
      virtual HRESULT OpenDownloadPre( const CATListValCATUnicodeString &ilType, const CATListValCATUnicodeString &ilName, const CATListValCATUnicodeString &ilRevision ) ; \
      virtual HRESULT OpenDownloadPost( const CATListValCATUnicodeString &ilType, const CATListValCATUnicodeString &ilName, const CATListValCATUnicodeString &ilRevision, const CATListValCATUnicodeString &ilFullPath ) ; \
      virtual void OpenPost( const CATListValCATUnicodeString &ilType, const CATListValCATUnicodeString &ilName, const CATListValCATUnicodeString &ilRevision ) ; \
};



#define ENVTIEdeclare_ENOIUPSUserExits(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
virtual HRESULT ConnectPre() ; \
virtual void ConnectPost() ; \
virtual HRESULT SaveStartPre() ; \
virtual HRESULT SaveScopePost( const CATListValCATUnicodeString &ilType, const CATListValCATUnicodeString &ilName, const CATListValCATUnicodeString &ilRevision, const CATListValCATUnicodeString &ilFullPath, CATListOfInt                     &iolIncluded ) ; \
virtual HRESULT SaveFinalPre( const CATListValCATUnicodeString &ilType, const CATListValCATUnicodeString &ilName, const CATListValCATUnicodeString &ilRevision, const CATListValCATUnicodeString &ilFullPath ) ; \
virtual HRESULT OpenDownloadPre( const CATListValCATUnicodeString &ilType, const CATListValCATUnicodeString &ilName, const CATListValCATUnicodeString &ilRevision ) ; \
virtual HRESULT OpenDownloadPost( const CATListValCATUnicodeString &ilType, const CATListValCATUnicodeString &ilName, const CATListValCATUnicodeString &ilRevision, const CATListValCATUnicodeString &ilFullPath ) ; \
virtual void OpenPost( const CATListValCATUnicodeString &ilType, const CATListValCATUnicodeString &ilName, const CATListValCATUnicodeString &ilRevision ) ; \


#define ENVTIEdefine_ENOIUPSUserExits(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
HRESULT  ENVTIEName::ConnectPre()  \
{ \
return (ENVTIECALL(ENOIUPSUserExits,ENVTIETypeLetter,ENVTIELetter)ConnectPre()); \
} \
void  ENVTIEName::ConnectPost()  \
{ \
 (ENVTIECALL(ENOIUPSUserExits,ENVTIETypeLetter,ENVTIELetter)ConnectPost()); \
} \
HRESULT  ENVTIEName::SaveStartPre()  \
{ \
return (ENVTIECALL(ENOIUPSUserExits,ENVTIETypeLetter,ENVTIELetter)SaveStartPre()); \
} \
HRESULT  ENVTIEName::SaveScopePost( const CATListValCATUnicodeString &ilType, const CATListValCATUnicodeString &ilName, const CATListValCATUnicodeString &ilRevision, const CATListValCATUnicodeString &ilFullPath, CATListOfInt                     &iolIncluded )  \
{ \
return (ENVTIECALL(ENOIUPSUserExits,ENVTIETypeLetter,ENVTIELetter)SaveScopePost(ilType,ilName,ilRevision,ilFullPath,iolIncluded )); \
} \
HRESULT  ENVTIEName::SaveFinalPre( const CATListValCATUnicodeString &ilType, const CATListValCATUnicodeString &ilName, const CATListValCATUnicodeString &ilRevision, const CATListValCATUnicodeString &ilFullPath )  \
{ \
return (ENVTIECALL(ENOIUPSUserExits,ENVTIETypeLetter,ENVTIELetter)SaveFinalPre(ilType,ilName,ilRevision,ilFullPath )); \
} \
HRESULT  ENVTIEName::OpenDownloadPre( const CATListValCATUnicodeString &ilType, const CATListValCATUnicodeString &ilName, const CATListValCATUnicodeString &ilRevision )  \
{ \
return (ENVTIECALL(ENOIUPSUserExits,ENVTIETypeLetter,ENVTIELetter)OpenDownloadPre(ilType,ilName,ilRevision )); \
} \
HRESULT  ENVTIEName::OpenDownloadPost( const CATListValCATUnicodeString &ilType, const CATListValCATUnicodeString &ilName, const CATListValCATUnicodeString &ilRevision, const CATListValCATUnicodeString &ilFullPath )  \
{ \
return (ENVTIECALL(ENOIUPSUserExits,ENVTIETypeLetter,ENVTIELetter)OpenDownloadPost(ilType,ilName,ilRevision,ilFullPath )); \
} \
void  ENVTIEName::OpenPost( const CATListValCATUnicodeString &ilType, const CATListValCATUnicodeString &ilName, const CATListValCATUnicodeString &ilRevision )  \
{ \
 (ENVTIECALL(ENOIUPSUserExits,ENVTIETypeLetter,ENVTIELetter)OpenPost(ilType,ilName,ilRevision )); \
} \


/* Name of the TIE class */
#define class_TIE_ENOIUPSUserExits(classe)    TIEENOIUPSUserExits##classe


/* Common methods inside a TIE */
#define common_TIE_ENOIUPSUserExits(classe) \
 \
 \
/* Static initialization */ \
CATDefineCommonTIEMembers(ENOIUPSUserExits, classe) \
 \
 \
CATImplementTIEMethods(ENOIUPSUserExits, classe) \
CATImplementIUnknownMethodsForCATBaseUnknownTIE(ENOIUPSUserExits, classe, 1) \
CATImplementIDispatchMethodsForCATBaseUnknownTIE(ENOIUPSUserExits, classe) \
CATImplementCATBaseUnknownMethodsForTIE(ENOIUPSUserExits, classe) \
 \
HRESULT  TIEENOIUPSUserExits##classe::ConnectPre()  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->ConnectPre()); \
} \
void  TIEENOIUPSUserExits##classe::ConnectPost()  \
{ \
   ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->ConnectPost(); \
} \
HRESULT  TIEENOIUPSUserExits##classe::SaveStartPre()  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SaveStartPre()); \
} \
HRESULT  TIEENOIUPSUserExits##classe::SaveScopePost( const CATListValCATUnicodeString &ilType, const CATListValCATUnicodeString &ilName, const CATListValCATUnicodeString &ilRevision, const CATListValCATUnicodeString &ilFullPath, CATListOfInt                     &iolIncluded )  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SaveScopePost(ilType,ilName,ilRevision,ilFullPath,iolIncluded )); \
} \
HRESULT  TIEENOIUPSUserExits##classe::SaveFinalPre( const CATListValCATUnicodeString &ilType, const CATListValCATUnicodeString &ilName, const CATListValCATUnicodeString &ilRevision, const CATListValCATUnicodeString &ilFullPath )  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SaveFinalPre(ilType,ilName,ilRevision,ilFullPath )); \
} \
HRESULT  TIEENOIUPSUserExits##classe::OpenDownloadPre( const CATListValCATUnicodeString &ilType, const CATListValCATUnicodeString &ilName, const CATListValCATUnicodeString &ilRevision )  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->OpenDownloadPre(ilType,ilName,ilRevision )); \
} \
HRESULT  TIEENOIUPSUserExits##classe::OpenDownloadPost( const CATListValCATUnicodeString &ilType, const CATListValCATUnicodeString &ilName, const CATListValCATUnicodeString &ilRevision, const CATListValCATUnicodeString &ilFullPath )  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->OpenDownloadPost(ilType,ilName,ilRevision,ilFullPath )); \
} \
void  TIEENOIUPSUserExits##classe::OpenPost( const CATListValCATUnicodeString &ilType, const CATListValCATUnicodeString &ilName, const CATListValCATUnicodeString &ilRevision )  \
{ \
   ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->OpenPost(ilType,ilName,ilRevision ); \
} \



/* Macro used to link an implementation with an interface */
#define TIE_ENOIUPSUserExits(classe) \
 \
 \
declare_TIE_ENOIUPSUserExits(classe) \
 \
 \
CATMetaClass * __stdcall TIEENOIUPSUserExits##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_ENOIUPSUserExits,"ENOIUPSUserExits",ENOIUPSUserExits::MetaObject(),classe::MetaObject(),TIE); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_ENOIUPSUserExits(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIECreation(ENOIUPSUserExits, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicENOIUPSUserExits##classe(classe::MetaObject(),ENOIUPSUserExits::MetaObject(),(void *)CreateTIEENOIUPSUserExits##classe)



/* Macro used to link an implementation with an interface */
/* This TIE is chained on the implementation object */
#define TIEchain_ENOIUPSUserExits(classe) \
 \
 \
declare_TIE_ENOIUPSUserExits(classe) \
 \
 \
CATMetaClass * __stdcall TIEENOIUPSUserExits##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_ENOIUPSUserExits,"ENOIUPSUserExits",ENOIUPSUserExits::MetaObject(),classe::MetaObject(),TIEchain); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_ENOIUPSUserExits(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIEchainCreation(ENOIUPSUserExits, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicENOIUPSUserExits##classe(classe::MetaObject(),ENOIUPSUserExits::MetaObject(),(void *)CreateTIEENOIUPSUserExits##classe)


/* Macro to switch between BOA and TIE at build time */ 
#ifdef CATSYS_BOA_IS_TIE
#define BOA_ENOIUPSUserExits(classe) TIE_ENOIUPSUserExits(classe)
#else
#define BOA_ENOIUPSUserExits(classe) CATImplementBOA(ENOIUPSUserExits, classe)
#endif

#endif
