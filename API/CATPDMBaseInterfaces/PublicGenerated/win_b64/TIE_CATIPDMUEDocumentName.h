#ifndef __TIE_CATIPDMUEDocumentName
#define __TIE_CATIPDMUEDocumentName

#include <string.h>
#include "CATBaseUnknown.h"
#include "CATMetaClass.h"
#include "CATMacForTie.h"
#include "CATIPDMUEDocumentName.h"
#include "JS0DSPA.h"


#ifdef _WINDOWS_SOURCE
#define Exported __declspec(dllexport)
#define Imported __declspec(dllimport)
#else
#define Exported 
#define Imported 
#endif


/* To link an implementation with the interface CATIPDMUEDocumentName */
#define declare_TIE_CATIPDMUEDocumentName(classe) \
 \
 \
class TIECATIPDMUEDocumentName##classe : public CATIPDMUEDocumentName \
{ \
   private: \
      CATDeclareCommonTIEMembers \
   public: \
      CATDeclareTIEMethods(CATIPDMUEDocumentName, classe) \
      CATDeclareIUnknownMethodsForCATBaseUnknownTIE \
      CATDeclareIDispatchMethodsForCATBaseUnknownTIE \
      CATDeclareCATBaseUnknownMethodsForTIE \
      virtual HRESULT ComputeDocumentName ( CATDocument *iDocument, CATUnicodeString &oDocumentName) ; \
      virtual HRESULT ComputeDocumentName ( CATUnicodeString &iDocumentDomain, CATUnicodeString &iDocumentV_ID, CATUnicodeString &iDocumentV_version, CATUnicodeString &iDocumentV_extension, CATUnicodeString &iPartV_ID, CATUnicodeString &iPartV_version, CATUnicodeString &oDocumentName) ; \
};



#define ENVTIEdeclare_CATIPDMUEDocumentName(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
virtual HRESULT ComputeDocumentName ( CATDocument *iDocument, CATUnicodeString &oDocumentName) ; \
virtual HRESULT ComputeDocumentName ( CATUnicodeString &iDocumentDomain, CATUnicodeString &iDocumentV_ID, CATUnicodeString &iDocumentV_version, CATUnicodeString &iDocumentV_extension, CATUnicodeString &iPartV_ID, CATUnicodeString &iPartV_version, CATUnicodeString &oDocumentName) ; \


#define ENVTIEdefine_CATIPDMUEDocumentName(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
HRESULT  ENVTIEName::ComputeDocumentName ( CATDocument *iDocument, CATUnicodeString &oDocumentName)  \
{ \
return (ENVTIECALL(CATIPDMUEDocumentName,ENVTIETypeLetter,ENVTIELetter)ComputeDocumentName (iDocument,oDocumentName)); \
} \
HRESULT  ENVTIEName::ComputeDocumentName ( CATUnicodeString &iDocumentDomain, CATUnicodeString &iDocumentV_ID, CATUnicodeString &iDocumentV_version, CATUnicodeString &iDocumentV_extension, CATUnicodeString &iPartV_ID, CATUnicodeString &iPartV_version, CATUnicodeString &oDocumentName)  \
{ \
return (ENVTIECALL(CATIPDMUEDocumentName,ENVTIETypeLetter,ENVTIELetter)ComputeDocumentName (iDocumentDomain,iDocumentV_ID,iDocumentV_version,iDocumentV_extension,iPartV_ID,iPartV_version,oDocumentName)); \
} \


/* Name of the TIE class */
#define class_TIE_CATIPDMUEDocumentName(classe)    TIECATIPDMUEDocumentName##classe


/* Common methods inside a TIE */
#define common_TIE_CATIPDMUEDocumentName(classe) \
 \
 \
/* Static initialization */ \
CATDefineCommonTIEMembers(CATIPDMUEDocumentName, classe) \
 \
 \
CATImplementTIEMethods(CATIPDMUEDocumentName, classe) \
CATImplementIUnknownMethodsForCATBaseUnknownTIE(CATIPDMUEDocumentName, classe, 1) \
CATImplementIDispatchMethodsForCATBaseUnknownTIE(CATIPDMUEDocumentName, classe) \
CATImplementCATBaseUnknownMethodsForTIE(CATIPDMUEDocumentName, classe) \
 \
HRESULT  TIECATIPDMUEDocumentName##classe::ComputeDocumentName ( CATDocument *iDocument, CATUnicodeString &oDocumentName)  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->ComputeDocumentName (iDocument,oDocumentName)); \
} \
HRESULT  TIECATIPDMUEDocumentName##classe::ComputeDocumentName ( CATUnicodeString &iDocumentDomain, CATUnicodeString &iDocumentV_ID, CATUnicodeString &iDocumentV_version, CATUnicodeString &iDocumentV_extension, CATUnicodeString &iPartV_ID, CATUnicodeString &iPartV_version, CATUnicodeString &oDocumentName)  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->ComputeDocumentName (iDocumentDomain,iDocumentV_ID,iDocumentV_version,iDocumentV_extension,iPartV_ID,iPartV_version,oDocumentName)); \
} \



/* Macro used to link an implementation with an interface */
#define TIE_CATIPDMUEDocumentName(classe) \
 \
 \
declare_TIE_CATIPDMUEDocumentName(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIPDMUEDocumentName##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIPDMUEDocumentName,"CATIPDMUEDocumentName",CATIPDMUEDocumentName::MetaObject(),classe::MetaObject(),TIE); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIPDMUEDocumentName(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIECreation(CATIPDMUEDocumentName, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIPDMUEDocumentName##classe(classe::MetaObject(),CATIPDMUEDocumentName::MetaObject(),(void *)CreateTIECATIPDMUEDocumentName##classe)



/* Macro used to link an implementation with an interface */
/* This TIE is chained on the implementation object */
#define TIEchain_CATIPDMUEDocumentName(classe) \
 \
 \
declare_TIE_CATIPDMUEDocumentName(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIPDMUEDocumentName##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIPDMUEDocumentName,"CATIPDMUEDocumentName",CATIPDMUEDocumentName::MetaObject(),classe::MetaObject(),TIEchain); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIPDMUEDocumentName(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIEchainCreation(CATIPDMUEDocumentName, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIPDMUEDocumentName##classe(classe::MetaObject(),CATIPDMUEDocumentName::MetaObject(),(void *)CreateTIECATIPDMUEDocumentName##classe)


/* Macro to switch between BOA and TIE at build time */ 
#ifdef CATSYS_BOA_IS_TIE
#define BOA_CATIPDMUEDocumentName(classe) TIE_CATIPDMUEDocumentName(classe)
#else
#define BOA_CATIPDMUEDocumentName(classe) CATImplementBOA(CATIPDMUEDocumentName, classe)
#endif

#endif
