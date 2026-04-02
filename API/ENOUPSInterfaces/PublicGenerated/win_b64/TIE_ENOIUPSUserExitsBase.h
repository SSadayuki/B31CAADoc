#ifndef __TIE_ENOIUPSUserExitsBase
#define __TIE_ENOIUPSUserExitsBase

#include <string.h>
#include "CATBaseUnknown.h"
#include "CATMetaClass.h"
#include "CATMacForTie.h"
#include "ENOIUPSUserExitsBase.h"
#include "JS0DSPA.h"


#ifdef _WINDOWS_SOURCE
#define Exported __declspec(dllexport)
#define Imported __declspec(dllimport)
#else
#define Exported 
#define Imported 
#endif


/* To link an implementation with the interface ENOIUPSUserExitsBase */
#define declare_TIE_ENOIUPSUserExitsBase(classe) \
 \
 \
class TIEENOIUPSUserExitsBase##classe : public ENOIUPSUserExitsBase \
{ \
   private: \
      CATDeclareCommonTIEMembers \
   public: \
      CATDeclareTIEMethods(ENOIUPSUserExitsBase, classe) \
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



#define ENVTIEdeclare_ENOIUPSUserExitsBase(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
virtual HRESULT ConnectPre() ; \
virtual void ConnectPost() ; \
virtual HRESULT SaveStartPre() ; \
virtual HRESULT SaveScopePost( const CATListValCATUnicodeString &ilType, const CATListValCATUnicodeString &ilName, const CATListValCATUnicodeString &ilRevision, const CATListValCATUnicodeString &ilFullPath, CATListOfInt                     &iolIncluded ) ; \
virtual HRESULT SaveFinalPre( const CATListValCATUnicodeString &ilType, const CATListValCATUnicodeString &ilName, const CATListValCATUnicodeString &ilRevision, const CATListValCATUnicodeString &ilFullPath ) ; \
virtual HRESULT OpenDownloadPre( const CATListValCATUnicodeString &ilType, const CATListValCATUnicodeString &ilName, const CATListValCATUnicodeString &ilRevision ) ; \
virtual HRESULT OpenDownloadPost( const CATListValCATUnicodeString &ilType, const CATListValCATUnicodeString &ilName, const CATListValCATUnicodeString &ilRevision, const CATListValCATUnicodeString &ilFullPath ) ; \
virtual void OpenPost( const CATListValCATUnicodeString &ilType, const CATListValCATUnicodeString &ilName, const CATListValCATUnicodeString &ilRevision ) ; \


#define ENVTIEdefine_ENOIUPSUserExitsBase(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
HRESULT  ENVTIEName::ConnectPre()  \
{ \
return (ENVTIECALL(ENOIUPSUserExitsBase,ENVTIETypeLetter,ENVTIELetter)ConnectPre()); \
} \
void  ENVTIEName::ConnectPost()  \
{ \
 (ENVTIECALL(ENOIUPSUserExitsBase,ENVTIETypeLetter,ENVTIELetter)ConnectPost()); \
} \
HRESULT  ENVTIEName::SaveStartPre()  \
{ \
return (ENVTIECALL(ENOIUPSUserExitsBase,ENVTIETypeLetter,ENVTIELetter)SaveStartPre()); \
} \
HRESULT  ENVTIEName::SaveScopePost( const CATListValCATUnicodeString &ilType, const CATListValCATUnicodeString &ilName, const CATListValCATUnicodeString &ilRevision, const CATListValCATUnicodeString &ilFullPath, CATListOfInt                     &iolIncluded )  \
{ \
return (ENVTIECALL(ENOIUPSUserExitsBase,ENVTIETypeLetter,ENVTIELetter)SaveScopePost(ilType,ilName,ilRevision,ilFullPath,iolIncluded )); \
} \
HRESULT  ENVTIEName::SaveFinalPre( const CATListValCATUnicodeString &ilType, const CATListValCATUnicodeString &ilName, const CATListValCATUnicodeString &ilRevision, const CATListValCATUnicodeString &ilFullPath )  \
{ \
return (ENVTIECALL(ENOIUPSUserExitsBase,ENVTIETypeLetter,ENVTIELetter)SaveFinalPre(ilType,ilName,ilRevision,ilFullPath )); \
} \
HRESULT  ENVTIEName::OpenDownloadPre( const CATListValCATUnicodeString &ilType, const CATListValCATUnicodeString &ilName, const CATListValCATUnicodeString &ilRevision )  \
{ \
return (ENVTIECALL(ENOIUPSUserExitsBase,ENVTIETypeLetter,ENVTIELetter)OpenDownloadPre(ilType,ilName,ilRevision )); \
} \
HRESULT  ENVTIEName::OpenDownloadPost( const CATListValCATUnicodeString &ilType, const CATListValCATUnicodeString &ilName, const CATListValCATUnicodeString &ilRevision, const CATListValCATUnicodeString &ilFullPath )  \
{ \
return (ENVTIECALL(ENOIUPSUserExitsBase,ENVTIETypeLetter,ENVTIELetter)OpenDownloadPost(ilType,ilName,ilRevision,ilFullPath )); \
} \
void  ENVTIEName::OpenPost( const CATListValCATUnicodeString &ilType, const CATListValCATUnicodeString &ilName, const CATListValCATUnicodeString &ilRevision )  \
{ \
 (ENVTIECALL(ENOIUPSUserExitsBase,ENVTIETypeLetter,ENVTIELetter)OpenPost(ilType,ilName,ilRevision )); \
} \


/* Name of the TIE class */
#define class_TIE_ENOIUPSUserExitsBase(classe)    TIEENOIUPSUserExitsBase##classe


/* Common methods inside a TIE */
#define common_TIE_ENOIUPSUserExitsBase(classe) \
 \
 \
/* Static initialization */ \
CATDefineCommonTIEMembers(ENOIUPSUserExitsBase, classe) \
 \
 \
CATImplementTIEMethods(ENOIUPSUserExitsBase, classe) \
CATImplementIUnknownMethodsForCATBaseUnknownTIE(ENOIUPSUserExitsBase, classe, 1) \
CATImplementIDispatchMethodsForCATBaseUnknownTIE(ENOIUPSUserExitsBase, classe) \
CATImplementCATBaseUnknownMethodsForTIE(ENOIUPSUserExitsBase, classe) \
 \
HRESULT  TIEENOIUPSUserExitsBase##classe::ConnectPre()  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->ConnectPre()); \
} \
void  TIEENOIUPSUserExitsBase##classe::ConnectPost()  \
{ \
   ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->ConnectPost(); \
} \
HRESULT  TIEENOIUPSUserExitsBase##classe::SaveStartPre()  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SaveStartPre()); \
} \
HRESULT  TIEENOIUPSUserExitsBase##classe::SaveScopePost( const CATListValCATUnicodeString &ilType, const CATListValCATUnicodeString &ilName, const CATListValCATUnicodeString &ilRevision, const CATListValCATUnicodeString &ilFullPath, CATListOfInt                     &iolIncluded )  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SaveScopePost(ilType,ilName,ilRevision,ilFullPath,iolIncluded )); \
} \
HRESULT  TIEENOIUPSUserExitsBase##classe::SaveFinalPre( const CATListValCATUnicodeString &ilType, const CATListValCATUnicodeString &ilName, const CATListValCATUnicodeString &ilRevision, const CATListValCATUnicodeString &ilFullPath )  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SaveFinalPre(ilType,ilName,ilRevision,ilFullPath )); \
} \
HRESULT  TIEENOIUPSUserExitsBase##classe::OpenDownloadPre( const CATListValCATUnicodeString &ilType, const CATListValCATUnicodeString &ilName, const CATListValCATUnicodeString &ilRevision )  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->OpenDownloadPre(ilType,ilName,ilRevision )); \
} \
HRESULT  TIEENOIUPSUserExitsBase##classe::OpenDownloadPost( const CATListValCATUnicodeString &ilType, const CATListValCATUnicodeString &ilName, const CATListValCATUnicodeString &ilRevision, const CATListValCATUnicodeString &ilFullPath )  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->OpenDownloadPost(ilType,ilName,ilRevision,ilFullPath )); \
} \
void  TIEENOIUPSUserExitsBase##classe::OpenPost( const CATListValCATUnicodeString &ilType, const CATListValCATUnicodeString &ilName, const CATListValCATUnicodeString &ilRevision )  \
{ \
   ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->OpenPost(ilType,ilName,ilRevision ); \
} \



/* Macro used to link an implementation with an interface */
#define TIE_ENOIUPSUserExitsBase(classe) \
 \
 \
declare_TIE_ENOIUPSUserExitsBase(classe) \
 \
 \
CATMetaClass * __stdcall TIEENOIUPSUserExitsBase##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_ENOIUPSUserExitsBase,"ENOIUPSUserExitsBase",ENOIUPSUserExitsBase::MetaObject(),classe::MetaObject(),TIE); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_ENOIUPSUserExitsBase(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIECreation(ENOIUPSUserExitsBase, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicENOIUPSUserExitsBase##classe(classe::MetaObject(),ENOIUPSUserExitsBase::MetaObject(),(void *)CreateTIEENOIUPSUserExitsBase##classe)



/* Macro used to link an implementation with an interface */
/* This TIE is chained on the implementation object */
#define TIEchain_ENOIUPSUserExitsBase(classe) \
 \
 \
declare_TIE_ENOIUPSUserExitsBase(classe) \
 \
 \
CATMetaClass * __stdcall TIEENOIUPSUserExitsBase##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_ENOIUPSUserExitsBase,"ENOIUPSUserExitsBase",ENOIUPSUserExitsBase::MetaObject(),classe::MetaObject(),TIEchain); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_ENOIUPSUserExitsBase(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIEchainCreation(ENOIUPSUserExitsBase, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicENOIUPSUserExitsBase##classe(classe::MetaObject(),ENOIUPSUserExitsBase::MetaObject(),(void *)CreateTIEENOIUPSUserExitsBase##classe)


/* Macro to switch between BOA and TIE at build time */ 
#ifdef CATSYS_BOA_IS_TIE
#define BOA_ENOIUPSUserExitsBase(classe) TIE_ENOIUPSUserExitsBase(classe)
#else
#define BOA_ENOIUPSUserExitsBase(classe) CATImplementBOA(ENOIUPSUserExitsBase, classe)
#endif

#endif
