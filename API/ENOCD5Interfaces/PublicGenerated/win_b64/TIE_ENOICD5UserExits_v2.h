#ifndef __TIE_ENOICD5UserExits_v2
#define __TIE_ENOICD5UserExits_v2

#include <string.h>
#include "CATBaseUnknown.h"
#include "CATMetaClass.h"
#include "CATMacForTie.h"
#include "ENOICD5UserExits_v2.h"
#include "JS0DSPA.h"


#ifdef _WINDOWS_SOURCE
#define Exported __declspec(dllexport)
#define Imported __declspec(dllimport)
#else
#define Exported 
#define Imported 
#endif


/* To link an implementation with the interface ENOICD5UserExits_v2 */
#define declare_TIE_ENOICD5UserExits_v2(classe) \
 \
 \
class TIEENOICD5UserExits_v2##classe : public ENOICD5UserExits_v2 \
{ \
   private: \
      CATDeclareCommonTIEMembers \
   public: \
      CATDeclareTIEMethods(ENOICD5UserExits_v2, classe) \
      CATDeclareIUnknownMethodsForCATBaseUnknownTIE \
      CATDeclareIDispatchMethodsForCATBaseUnknownTIE \
      CATDeclareCATBaseUnknownMethodsForTIE \
      virtual HRESULT PostSelectFolder( CATBaseUnknown *& iV6Folder, CATUnicodeString & oOrganization, CATUnicodeString & oCollabSpace ) ; \
      virtual HRESULT ConnectPre() ; \
      virtual void ConnectPost() ; \
      virtual HRESULT SaveStartPre() ; \
      virtual HRESULT SaveScopePost( const CATListValCATUnicodeString &ilType, const CATListValCATUnicodeString &ilName, const CATListValCATUnicodeString &ilRevision, const CATListValCATUnicodeString &ilFullPath, CATListOfInt                     &iolIncluded ) ; \
      virtual HRESULT SaveFinalPre( const CATListValCATUnicodeString &ilType, const CATListValCATUnicodeString &ilName, const CATListValCATUnicodeString &ilRevision, const CATListValCATUnicodeString &ilFullPath ) ; \
      virtual HRESULT OpenDownloadPre( const CATListValCATUnicodeString &ilType, const CATListValCATUnicodeString &ilName, const CATListValCATUnicodeString &ilRevision ) ; \
      virtual HRESULT OpenDownloadPost( const CATListValCATUnicodeString &ilType, const CATListValCATUnicodeString &ilName, const CATListValCATUnicodeString &ilRevision, const CATListValCATUnicodeString &ilFullPath ) ; \
      virtual void OpenPost( const CATListValCATUnicodeString &ilType, const CATListValCATUnicodeString &ilName, const CATListValCATUnicodeString &ilRevision ) ; \
};



#define ENVTIEdeclare_ENOICD5UserExits_v2(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
virtual HRESULT PostSelectFolder( CATBaseUnknown *& iV6Folder, CATUnicodeString & oOrganization, CATUnicodeString & oCollabSpace ) ; \
virtual HRESULT ConnectPre() ; \
virtual void ConnectPost() ; \
virtual HRESULT SaveStartPre() ; \
virtual HRESULT SaveScopePost( const CATListValCATUnicodeString &ilType, const CATListValCATUnicodeString &ilName, const CATListValCATUnicodeString &ilRevision, const CATListValCATUnicodeString &ilFullPath, CATListOfInt                     &iolIncluded ) ; \
virtual HRESULT SaveFinalPre( const CATListValCATUnicodeString &ilType, const CATListValCATUnicodeString &ilName, const CATListValCATUnicodeString &ilRevision, const CATListValCATUnicodeString &ilFullPath ) ; \
virtual HRESULT OpenDownloadPre( const CATListValCATUnicodeString &ilType, const CATListValCATUnicodeString &ilName, const CATListValCATUnicodeString &ilRevision ) ; \
virtual HRESULT OpenDownloadPost( const CATListValCATUnicodeString &ilType, const CATListValCATUnicodeString &ilName, const CATListValCATUnicodeString &ilRevision, const CATListValCATUnicodeString &ilFullPath ) ; \
virtual void OpenPost( const CATListValCATUnicodeString &ilType, const CATListValCATUnicodeString &ilName, const CATListValCATUnicodeString &ilRevision ) ; \


#define ENVTIEdefine_ENOICD5UserExits_v2(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
HRESULT  ENVTIEName::PostSelectFolder( CATBaseUnknown *& iV6Folder, CATUnicodeString & oOrganization, CATUnicodeString & oCollabSpace )  \
{ \
return (ENVTIECALL(ENOICD5UserExits_v2,ENVTIETypeLetter,ENVTIELetter)PostSelectFolder(iV6Folder,oOrganization,oCollabSpace )); \
} \
HRESULT  ENVTIEName::ConnectPre()  \
{ \
return (ENVTIECALL(ENOICD5UserExits_v2,ENVTIETypeLetter,ENVTIELetter)ConnectPre()); \
} \
void  ENVTIEName::ConnectPost()  \
{ \
 (ENVTIECALL(ENOICD5UserExits_v2,ENVTIETypeLetter,ENVTIELetter)ConnectPost()); \
} \
HRESULT  ENVTIEName::SaveStartPre()  \
{ \
return (ENVTIECALL(ENOICD5UserExits_v2,ENVTIETypeLetter,ENVTIELetter)SaveStartPre()); \
} \
HRESULT  ENVTIEName::SaveScopePost( const CATListValCATUnicodeString &ilType, const CATListValCATUnicodeString &ilName, const CATListValCATUnicodeString &ilRevision, const CATListValCATUnicodeString &ilFullPath, CATListOfInt                     &iolIncluded )  \
{ \
return (ENVTIECALL(ENOICD5UserExits_v2,ENVTIETypeLetter,ENVTIELetter)SaveScopePost(ilType,ilName,ilRevision,ilFullPath,iolIncluded )); \
} \
HRESULT  ENVTIEName::SaveFinalPre( const CATListValCATUnicodeString &ilType, const CATListValCATUnicodeString &ilName, const CATListValCATUnicodeString &ilRevision, const CATListValCATUnicodeString &ilFullPath )  \
{ \
return (ENVTIECALL(ENOICD5UserExits_v2,ENVTIETypeLetter,ENVTIELetter)SaveFinalPre(ilType,ilName,ilRevision,ilFullPath )); \
} \
HRESULT  ENVTIEName::OpenDownloadPre( const CATListValCATUnicodeString &ilType, const CATListValCATUnicodeString &ilName, const CATListValCATUnicodeString &ilRevision )  \
{ \
return (ENVTIECALL(ENOICD5UserExits_v2,ENVTIETypeLetter,ENVTIELetter)OpenDownloadPre(ilType,ilName,ilRevision )); \
} \
HRESULT  ENVTIEName::OpenDownloadPost( const CATListValCATUnicodeString &ilType, const CATListValCATUnicodeString &ilName, const CATListValCATUnicodeString &ilRevision, const CATListValCATUnicodeString &ilFullPath )  \
{ \
return (ENVTIECALL(ENOICD5UserExits_v2,ENVTIETypeLetter,ENVTIELetter)OpenDownloadPost(ilType,ilName,ilRevision,ilFullPath )); \
} \
void  ENVTIEName::OpenPost( const CATListValCATUnicodeString &ilType, const CATListValCATUnicodeString &ilName, const CATListValCATUnicodeString &ilRevision )  \
{ \
 (ENVTIECALL(ENOICD5UserExits_v2,ENVTIETypeLetter,ENVTIELetter)OpenPost(ilType,ilName,ilRevision )); \
} \


/* Name of the TIE class */
#define class_TIE_ENOICD5UserExits_v2(classe)    TIEENOICD5UserExits_v2##classe


/* Common methods inside a TIE */
#define common_TIE_ENOICD5UserExits_v2(classe) \
 \
 \
/* Static initialization */ \
CATDefineCommonTIEMembers(ENOICD5UserExits_v2, classe) \
 \
 \
CATImplementTIEMethods(ENOICD5UserExits_v2, classe) \
CATImplementIUnknownMethodsForCATBaseUnknownTIE(ENOICD5UserExits_v2, classe, 1) \
CATImplementIDispatchMethodsForCATBaseUnknownTIE(ENOICD5UserExits_v2, classe) \
CATImplementCATBaseUnknownMethodsForTIE(ENOICD5UserExits_v2, classe) \
 \
HRESULT  TIEENOICD5UserExits_v2##classe::PostSelectFolder( CATBaseUnknown *& iV6Folder, CATUnicodeString & oOrganization, CATUnicodeString & oCollabSpace )  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->PostSelectFolder(iV6Folder,oOrganization,oCollabSpace )); \
} \
HRESULT  TIEENOICD5UserExits_v2##classe::ConnectPre()  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->ConnectPre()); \
} \
void  TIEENOICD5UserExits_v2##classe::ConnectPost()  \
{ \
   ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->ConnectPost(); \
} \
HRESULT  TIEENOICD5UserExits_v2##classe::SaveStartPre()  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SaveStartPre()); \
} \
HRESULT  TIEENOICD5UserExits_v2##classe::SaveScopePost( const CATListValCATUnicodeString &ilType, const CATListValCATUnicodeString &ilName, const CATListValCATUnicodeString &ilRevision, const CATListValCATUnicodeString &ilFullPath, CATListOfInt                     &iolIncluded )  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SaveScopePost(ilType,ilName,ilRevision,ilFullPath,iolIncluded )); \
} \
HRESULT  TIEENOICD5UserExits_v2##classe::SaveFinalPre( const CATListValCATUnicodeString &ilType, const CATListValCATUnicodeString &ilName, const CATListValCATUnicodeString &ilRevision, const CATListValCATUnicodeString &ilFullPath )  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SaveFinalPre(ilType,ilName,ilRevision,ilFullPath )); \
} \
HRESULT  TIEENOICD5UserExits_v2##classe::OpenDownloadPre( const CATListValCATUnicodeString &ilType, const CATListValCATUnicodeString &ilName, const CATListValCATUnicodeString &ilRevision )  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->OpenDownloadPre(ilType,ilName,ilRevision )); \
} \
HRESULT  TIEENOICD5UserExits_v2##classe::OpenDownloadPost( const CATListValCATUnicodeString &ilType, const CATListValCATUnicodeString &ilName, const CATListValCATUnicodeString &ilRevision, const CATListValCATUnicodeString &ilFullPath )  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->OpenDownloadPost(ilType,ilName,ilRevision,ilFullPath )); \
} \
void  TIEENOICD5UserExits_v2##classe::OpenPost( const CATListValCATUnicodeString &ilType, const CATListValCATUnicodeString &ilName, const CATListValCATUnicodeString &ilRevision )  \
{ \
   ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->OpenPost(ilType,ilName,ilRevision ); \
} \



/* Macro used to link an implementation with an interface */
#define TIE_ENOICD5UserExits_v2(classe) \
 \
 \
declare_TIE_ENOICD5UserExits_v2(classe) \
 \
 \
CATMetaClass * __stdcall TIEENOICD5UserExits_v2##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_ENOICD5UserExits_v2,"ENOICD5UserExits_v2",ENOICD5UserExits_v2::MetaObject(),classe::MetaObject(),TIE); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_ENOICD5UserExits_v2(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIECreation(ENOICD5UserExits_v2, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicENOICD5UserExits_v2##classe(classe::MetaObject(),ENOICD5UserExits_v2::MetaObject(),(void *)CreateTIEENOICD5UserExits_v2##classe)



/* Macro used to link an implementation with an interface */
/* This TIE is chained on the implementation object */
#define TIEchain_ENOICD5UserExits_v2(classe) \
 \
 \
declare_TIE_ENOICD5UserExits_v2(classe) \
 \
 \
CATMetaClass * __stdcall TIEENOICD5UserExits_v2##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_ENOICD5UserExits_v2,"ENOICD5UserExits_v2",ENOICD5UserExits_v2::MetaObject(),classe::MetaObject(),TIEchain); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_ENOICD5UserExits_v2(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIEchainCreation(ENOICD5UserExits_v2, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicENOICD5UserExits_v2##classe(classe::MetaObject(),ENOICD5UserExits_v2::MetaObject(),(void *)CreateTIEENOICD5UserExits_v2##classe)


/* Macro to switch between BOA and TIE at build time */ 
#ifdef CATSYS_BOA_IS_TIE
#define BOA_ENOICD5UserExits_v2(classe) TIE_ENOICD5UserExits_v2(classe)
#else
#define BOA_ENOICD5UserExits_v2(classe) CATImplementBOA(ENOICD5UserExits_v2, classe)
#endif

#endif
