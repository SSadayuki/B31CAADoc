#ifndef __TIE_CATIPDMSaveInfo
#define __TIE_CATIPDMSaveInfo

#include <string.h>
#include "CATBaseUnknown.h"
#include "CATMetaClass.h"
#include "CATMacForTie.h"
#include "CATIPDMSaveInfo.h"
#include "JS0DSPA.h"


#ifdef _WINDOWS_SOURCE
#define Exported __declspec(dllexport)
#define Imported __declspec(dllimport)
#else
#define Exported 
#define Imported 
#endif


/* To link an implementation with the interface CATIPDMSaveInfo */
#define declare_TIE_CATIPDMSaveInfo(classe) \
 \
 \
class TIECATIPDMSaveInfo##classe : public CATIPDMSaveInfo \
{ \
   private: \
      CATDeclareCommonTIEMembers \
   public: \
      CATDeclareTIEMethods(CATIPDMSaveInfo, classe) \
      CATDeclareIUnknownMethodsForCATBaseUnknownTIE \
      CATDeclareIDispatchMethodsForCATBaseUnknownTIE \
      CATDeclareCATBaseUnknownMethodsForTIE \
      virtual HRESULT GetDocEnvironmentType(CATDocument* iDoc, CATUnicodeString& oEnvType) ; \
      virtual HRESULT DocumentExistInPDM(CATUnicodeString& iDocName) ; \
      virtual HRESULT GetModificationStatus(CATDocument* iDocToSave, ModifStatus& oStatus) ; \
};



#define ENVTIEdeclare_CATIPDMSaveInfo(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
virtual HRESULT GetDocEnvironmentType(CATDocument* iDoc, CATUnicodeString& oEnvType) ; \
virtual HRESULT DocumentExistInPDM(CATUnicodeString& iDocName) ; \
virtual HRESULT GetModificationStatus(CATDocument* iDocToSave, ModifStatus& oStatus) ; \


#define ENVTIEdefine_CATIPDMSaveInfo(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
HRESULT  ENVTIEName::GetDocEnvironmentType(CATDocument* iDoc, CATUnicodeString& oEnvType)  \
{ \
return (ENVTIECALL(CATIPDMSaveInfo,ENVTIETypeLetter,ENVTIELetter)GetDocEnvironmentType(iDoc,oEnvType)); \
} \
HRESULT  ENVTIEName::DocumentExistInPDM(CATUnicodeString& iDocName)  \
{ \
return (ENVTIECALL(CATIPDMSaveInfo,ENVTIETypeLetter,ENVTIELetter)DocumentExistInPDM(iDocName)); \
} \
HRESULT  ENVTIEName::GetModificationStatus(CATDocument* iDocToSave, ModifStatus& oStatus)  \
{ \
return (ENVTIECALL(CATIPDMSaveInfo,ENVTIETypeLetter,ENVTIELetter)GetModificationStatus(iDocToSave,oStatus)); \
} \


/* Name of the TIE class */
#define class_TIE_CATIPDMSaveInfo(classe)    TIECATIPDMSaveInfo##classe


/* Common methods inside a TIE */
#define common_TIE_CATIPDMSaveInfo(classe) \
 \
 \
/* Static initialization */ \
CATDefineCommonTIEMembers(CATIPDMSaveInfo, classe) \
 \
 \
CATImplementTIEMethods(CATIPDMSaveInfo, classe) \
CATImplementIUnknownMethodsForCATBaseUnknownTIE(CATIPDMSaveInfo, classe, 1) \
CATImplementIDispatchMethodsForCATBaseUnknownTIE(CATIPDMSaveInfo, classe) \
CATImplementCATBaseUnknownMethodsForTIE(CATIPDMSaveInfo, classe) \
 \
HRESULT  TIECATIPDMSaveInfo##classe::GetDocEnvironmentType(CATDocument* iDoc, CATUnicodeString& oEnvType)  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetDocEnvironmentType(iDoc,oEnvType)); \
} \
HRESULT  TIECATIPDMSaveInfo##classe::DocumentExistInPDM(CATUnicodeString& iDocName)  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->DocumentExistInPDM(iDocName)); \
} \
HRESULT  TIECATIPDMSaveInfo##classe::GetModificationStatus(CATDocument* iDocToSave, ModifStatus& oStatus)  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetModificationStatus(iDocToSave,oStatus)); \
} \



/* Macro used to link an implementation with an interface */
#define TIE_CATIPDMSaveInfo(classe) \
 \
 \
declare_TIE_CATIPDMSaveInfo(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIPDMSaveInfo##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIPDMSaveInfo,"CATIPDMSaveInfo",CATIPDMSaveInfo::MetaObject(),classe::MetaObject(),TIE); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIPDMSaveInfo(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIECreation(CATIPDMSaveInfo, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIPDMSaveInfo##classe(classe::MetaObject(),CATIPDMSaveInfo::MetaObject(),(void *)CreateTIECATIPDMSaveInfo##classe)



/* Macro used to link an implementation with an interface */
/* This TIE is chained on the implementation object */
#define TIEchain_CATIPDMSaveInfo(classe) \
 \
 \
declare_TIE_CATIPDMSaveInfo(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIPDMSaveInfo##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIPDMSaveInfo,"CATIPDMSaveInfo",CATIPDMSaveInfo::MetaObject(),classe::MetaObject(),TIEchain); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIPDMSaveInfo(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIEchainCreation(CATIPDMSaveInfo, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIPDMSaveInfo##classe(classe::MetaObject(),CATIPDMSaveInfo::MetaObject(),(void *)CreateTIECATIPDMSaveInfo##classe)


/* Macro to switch between BOA and TIE at build time */ 
#ifdef CATSYS_BOA_IS_TIE
#define BOA_CATIPDMSaveInfo(classe) TIE_CATIPDMSaveInfo(classe)
#else
#define BOA_CATIPDMSaveInfo(classe) CATImplementBOA(CATIPDMSaveInfo, classe)
#endif

#endif
