#ifndef __TIE_CATISchAppCntrDocLink
#define __TIE_CATISchAppCntrDocLink

#include <string.h>
#include "CATBaseUnknown.h"
#include "CATMetaClass.h"
#include "CATMacForTie.h"
#include "CATISchAppCntrDocLink.h"
#include "JS0DSPA.h"


#ifdef _WINDOWS_SOURCE
#define Exported __declspec(dllexport)
#define Imported __declspec(dllimport)
#else
#define Exported 
#define Imported 
#endif


/* To link an implementation with the interface CATISchAppCntrDocLink */
#define declare_TIE_CATISchAppCntrDocLink(classe) \
 \
 \
class TIECATISchAppCntrDocLink##classe : public CATISchAppCntrDocLink \
{ \
   private: \
      CATDeclareCommonTIEMembers \
      CATDeclareNotCATBaseUnknownTIEMembers \
   public: \
      CATDeclareTIEMethods(CATISchAppCntrDocLink, classe) \
      CATDeclareIUnknownMethodsForNotCATBaseUnknownTIE \
      CATDeclareCATBaseUnknownMethodsForTIE \
      virtual HRESULT AppLink (const CATISchAppConnector *iSchConnector) ; \
      virtual HRESULT AppUnLink (const int iUnpublish = 0) ; \
      virtual HRESULT AppGetLink (CATIUnknownList **oLCntrs, CATICStringList **oLDocumentNames, char **oPublicationName) ; \
      virtual HRESULT AppIsLinkable (const CATISchAppConnector *iSchConnector, CATBoolean *oBYes) ; \
      virtual HRESULT AppLinkInit (const char *iPublicationName = 0) ; \
      virtual HRESULT AppGetLink2 (CATIUnknownList **oLCntrs, CATListOfCATUnicodeString &oLDocumentNames, CATUnicodeString &oPublicationName) ; \
      virtual HRESULT AppLinkInit2 (CATUnicodeString *iPublicationName = 0) ; \
      virtual HRESULT AppGetLinkedDocs (CATUnicodeString          &oPublicationName, CATListOfCATUnicodeString &oLDocumentName, CATListOfCATUnicodeString &oLDocumentUuid, CATListOfInt              &oLOpenStatus, CATListPtrIUnknown        &oLCntr) ; \
      virtual HRESULT AppOpenLinkedDoc (const CATUnicodeString  &iDocumentName, const CATUnicodeString  &iDocumentUuid, CATDocument            *&oDocument) ; \
};



#define ENVTIEdeclare_CATISchAppCntrDocLink(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
virtual HRESULT AppLink (const CATISchAppConnector *iSchConnector) ; \
virtual HRESULT AppUnLink (const int iUnpublish = 0) ; \
virtual HRESULT AppGetLink (CATIUnknownList **oLCntrs, CATICStringList **oLDocumentNames, char **oPublicationName) ; \
virtual HRESULT AppIsLinkable (const CATISchAppConnector *iSchConnector, CATBoolean *oBYes) ; \
virtual HRESULT AppLinkInit (const char *iPublicationName = 0) ; \
virtual HRESULT AppGetLink2 (CATIUnknownList **oLCntrs, CATListOfCATUnicodeString &oLDocumentNames, CATUnicodeString &oPublicationName) ; \
virtual HRESULT AppLinkInit2 (CATUnicodeString *iPublicationName = 0) ; \
virtual HRESULT AppGetLinkedDocs (CATUnicodeString          &oPublicationName, CATListOfCATUnicodeString &oLDocumentName, CATListOfCATUnicodeString &oLDocumentUuid, CATListOfInt              &oLOpenStatus, CATListPtrIUnknown        &oLCntr) ; \
virtual HRESULT AppOpenLinkedDoc (const CATUnicodeString  &iDocumentName, const CATUnicodeString  &iDocumentUuid, CATDocument            *&oDocument) ; \


#define ENVTIEdefine_CATISchAppCntrDocLink(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
HRESULT  ENVTIEName::AppLink (const CATISchAppConnector *iSchConnector)  \
{ \
return (ENVTIECALL(CATISchAppCntrDocLink,ENVTIETypeLetter,ENVTIELetter)AppLink (iSchConnector)); \
} \
HRESULT  ENVTIEName::AppUnLink (const int iUnpublish )  \
{ \
return (ENVTIECALL(CATISchAppCntrDocLink,ENVTIETypeLetter,ENVTIELetter)AppUnLink (iUnpublish )); \
} \
HRESULT  ENVTIEName::AppGetLink (CATIUnknownList **oLCntrs, CATICStringList **oLDocumentNames, char **oPublicationName)  \
{ \
return (ENVTIECALL(CATISchAppCntrDocLink,ENVTIETypeLetter,ENVTIELetter)AppGetLink (oLCntrs,oLDocumentNames,oPublicationName)); \
} \
HRESULT  ENVTIEName::AppIsLinkable (const CATISchAppConnector *iSchConnector, CATBoolean *oBYes)  \
{ \
return (ENVTIECALL(CATISchAppCntrDocLink,ENVTIETypeLetter,ENVTIELetter)AppIsLinkable (iSchConnector,oBYes)); \
} \
HRESULT  ENVTIEName::AppLinkInit (const char *iPublicationName )  \
{ \
return (ENVTIECALL(CATISchAppCntrDocLink,ENVTIETypeLetter,ENVTIELetter)AppLinkInit (iPublicationName )); \
} \
HRESULT  ENVTIEName::AppGetLink2 (CATIUnknownList **oLCntrs, CATListOfCATUnicodeString &oLDocumentNames, CATUnicodeString &oPublicationName)  \
{ \
return (ENVTIECALL(CATISchAppCntrDocLink,ENVTIETypeLetter,ENVTIELetter)AppGetLink2 (oLCntrs,oLDocumentNames,oPublicationName)); \
} \
HRESULT  ENVTIEName::AppLinkInit2 (CATUnicodeString *iPublicationName )  \
{ \
return (ENVTIECALL(CATISchAppCntrDocLink,ENVTIETypeLetter,ENVTIELetter)AppLinkInit2 (iPublicationName )); \
} \
HRESULT  ENVTIEName::AppGetLinkedDocs (CATUnicodeString          &oPublicationName, CATListOfCATUnicodeString &oLDocumentName, CATListOfCATUnicodeString &oLDocumentUuid, CATListOfInt              &oLOpenStatus, CATListPtrIUnknown        &oLCntr)  \
{ \
return (ENVTIECALL(CATISchAppCntrDocLink,ENVTIETypeLetter,ENVTIELetter)AppGetLinkedDocs (oPublicationName,oLDocumentName,oLDocumentUuid,oLOpenStatus,oLCntr)); \
} \
HRESULT  ENVTIEName::AppOpenLinkedDoc (const CATUnicodeString  &iDocumentName, const CATUnicodeString  &iDocumentUuid, CATDocument            *&oDocument)  \
{ \
return (ENVTIECALL(CATISchAppCntrDocLink,ENVTIETypeLetter,ENVTIELetter)AppOpenLinkedDoc (iDocumentName,iDocumentUuid,oDocument)); \
} \


/* Name of the TIE class */
#define class_TIE_CATISchAppCntrDocLink(classe)    TIECATISchAppCntrDocLink##classe


/* Common methods inside a TIE */
#define common_TIE_CATISchAppCntrDocLink(classe) \
 \
 \
/* Static initialization */ \
CATDefineCommonTIEMembers(CATISchAppCntrDocLink, classe) \
 \
 \
CATImplementNotCATBaseUnknownTIEMethods(CATISchAppCntrDocLink, classe) \
CATImplementIUnknownMethodsForNotCATBaseUnknownTIE(CATISchAppCntrDocLink, classe, 0) \
CATImplementCATBaseUnknownMethodsForTIE(CATISchAppCntrDocLink, classe) \
 \
HRESULT  TIECATISchAppCntrDocLink##classe::AppLink (const CATISchAppConnector *iSchConnector)  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->AppLink (iSchConnector)); \
} \
HRESULT  TIECATISchAppCntrDocLink##classe::AppUnLink (const int iUnpublish )  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->AppUnLink (iUnpublish )); \
} \
HRESULT  TIECATISchAppCntrDocLink##classe::AppGetLink (CATIUnknownList **oLCntrs, CATICStringList **oLDocumentNames, char **oPublicationName)  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->AppGetLink (oLCntrs,oLDocumentNames,oPublicationName)); \
} \
HRESULT  TIECATISchAppCntrDocLink##classe::AppIsLinkable (const CATISchAppConnector *iSchConnector, CATBoolean *oBYes)  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->AppIsLinkable (iSchConnector,oBYes)); \
} \
HRESULT  TIECATISchAppCntrDocLink##classe::AppLinkInit (const char *iPublicationName )  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->AppLinkInit (iPublicationName )); \
} \
HRESULT  TIECATISchAppCntrDocLink##classe::AppGetLink2 (CATIUnknownList **oLCntrs, CATListOfCATUnicodeString &oLDocumentNames, CATUnicodeString &oPublicationName)  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->AppGetLink2 (oLCntrs,oLDocumentNames,oPublicationName)); \
} \
HRESULT  TIECATISchAppCntrDocLink##classe::AppLinkInit2 (CATUnicodeString *iPublicationName )  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->AppLinkInit2 (iPublicationName )); \
} \
HRESULT  TIECATISchAppCntrDocLink##classe::AppGetLinkedDocs (CATUnicodeString          &oPublicationName, CATListOfCATUnicodeString &oLDocumentName, CATListOfCATUnicodeString &oLDocumentUuid, CATListOfInt              &oLOpenStatus, CATListPtrIUnknown        &oLCntr)  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->AppGetLinkedDocs (oPublicationName,oLDocumentName,oLDocumentUuid,oLOpenStatus,oLCntr)); \
} \
HRESULT  TIECATISchAppCntrDocLink##classe::AppOpenLinkedDoc (const CATUnicodeString  &iDocumentName, const CATUnicodeString  &iDocumentUuid, CATDocument            *&oDocument)  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->AppOpenLinkedDoc (iDocumentName,iDocumentUuid,oDocument)); \
} \



/* Macro used to link an implementation with an interface */
#define TIE_CATISchAppCntrDocLink(classe) \
 \
 \
declare_TIE_CATISchAppCntrDocLink(classe) \
 \
 \
CATMetaClass * __stdcall TIECATISchAppCntrDocLink##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATISchAppCntrDocLink,"CATISchAppCntrDocLink",NULL,classe::MetaObject(),TIE); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATISchAppCntrDocLink(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIECreation(CATISchAppCntrDocLink, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATISchAppCntrDocLink##classe(classe::MetaObject(),TIECATISchAppCntrDocLink##classe::MetaObject(),(void *)CreateTIECATISchAppCntrDocLink##classe)



/* Macro used to link an implementation with an interface */
/* This TIE is chained on the implementation object */
#define TIEchain_CATISchAppCntrDocLink(classe) \
 \
 \
declare_TIE_CATISchAppCntrDocLink(classe) \
 \
 \
CATMetaClass * __stdcall TIECATISchAppCntrDocLink##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATISchAppCntrDocLink,"CATISchAppCntrDocLink",NULL,classe::MetaObject(),TIEchain); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATISchAppCntrDocLink(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIEchainCreation(CATISchAppCntrDocLink, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATISchAppCntrDocLink##classe(classe::MetaObject(),TIECATISchAppCntrDocLink##classe::MetaObject(),(void *)CreateTIECATISchAppCntrDocLink##classe)


/* Macro to switch between BOA and TIE at build time */ 
#ifdef CATSYS_BOA_IS_TIE
#define BOA_CATISchAppCntrDocLink(classe) TIE_CATISchAppCntrDocLink(classe)
#else
#define BOA_CATISchAppCntrDocLink(classe) CATImplementBOA(CATISchAppCntrDocLink, classe)
#endif

#endif
