#ifndef __TIE_CATIPDMUESaveProcess
#define __TIE_CATIPDMUESaveProcess

#include <string.h>
#include "CATBaseUnknown.h"
#include "CATMetaClass.h"
#include "CATMacForTie.h"
#include "CATIPDMUESaveProcess.h"
#include "JS0DSPA.h"


#ifdef _WINDOWS_SOURCE
#define Exported __declspec(dllexport)
#define Imported __declspec(dllimport)
#else
#define Exported 
#define Imported 
#endif


/* To link an implementation with the interface CATIPDMUESaveProcess */
#define declare_TIE_CATIPDMUESaveProcess(classe) \
 \
 \
class TIECATIPDMUESaveProcess##classe : public CATIPDMUESaveProcess \
{ \
   private: \
      CATDeclareCommonTIEMembers \
   public: \
      CATDeclareTIEMethods(CATIPDMUESaveProcess, classe) \
      CATDeclareIUnknownMethodsForCATBaseUnknownTIE \
      CATDeclareIDispatchMethodsForCATBaseUnknownTIE \
      CATDeclareCATBaseUnknownMethodsForTIE \
      virtual HRESULT BeforeSaveDialog(CATListPtrCATDocument* iDocsToSave, CATIPDMSaveInfo *ipInfo, CATIPDMSaveAction *ipAction) ; \
      virtual HRESULT OnOK(CATListPtrCATDocument* iDocsToSave, int onOKNumber, CATIPDMSaveInfo *ipInfo, CATIPDMSaveAction *ipAction) ; \
      virtual HRESULT BeforeStartingSave(CATListPtrCATDocument* iDocsToSave, CATIPDMSaveInfo *ipInfo, CATIPDMSaveAction *ipAction) ; \
      virtual HRESULT OnSaveSucceeded(CATListPtrCATDocument* iDocsToSave, CATIPDMSaveInfo *ipInfo, CATIPDMSaveAction *ipAction) ; \
      virtual HRESULT OnSaveFailed(CATListPtrCATDocument* iDocsToSave, CATIPDMSaveInfo *ipInfo, CATIPDMSaveAction *ipAction) ; \
      virtual HRESULT BeforeCommit (CATListPtrCATDocument* iDocsToSave, CATIPDMSaveInfo* ipInfo, CATIPDMSaveAction* ipAction) ; \
      virtual HRESULT BeforeRollback (CATListPtrCATDocument* iDocsToSave, CATIPDMSaveInfo* ipInfo, CATIPDMSaveAction* ipAction) ; \
};



#define ENVTIEdeclare_CATIPDMUESaveProcess(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
virtual HRESULT BeforeSaveDialog(CATListPtrCATDocument* iDocsToSave, CATIPDMSaveInfo *ipInfo, CATIPDMSaveAction *ipAction) ; \
virtual HRESULT OnOK(CATListPtrCATDocument* iDocsToSave, int onOKNumber, CATIPDMSaveInfo *ipInfo, CATIPDMSaveAction *ipAction) ; \
virtual HRESULT BeforeStartingSave(CATListPtrCATDocument* iDocsToSave, CATIPDMSaveInfo *ipInfo, CATIPDMSaveAction *ipAction) ; \
virtual HRESULT OnSaveSucceeded(CATListPtrCATDocument* iDocsToSave, CATIPDMSaveInfo *ipInfo, CATIPDMSaveAction *ipAction) ; \
virtual HRESULT OnSaveFailed(CATListPtrCATDocument* iDocsToSave, CATIPDMSaveInfo *ipInfo, CATIPDMSaveAction *ipAction) ; \
virtual HRESULT BeforeCommit (CATListPtrCATDocument* iDocsToSave, CATIPDMSaveInfo* ipInfo, CATIPDMSaveAction* ipAction) ; \
virtual HRESULT BeforeRollback (CATListPtrCATDocument* iDocsToSave, CATIPDMSaveInfo* ipInfo, CATIPDMSaveAction* ipAction) ; \


#define ENVTIEdefine_CATIPDMUESaveProcess(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
HRESULT  ENVTIEName::BeforeSaveDialog(CATListPtrCATDocument* iDocsToSave, CATIPDMSaveInfo *ipInfo, CATIPDMSaveAction *ipAction)  \
{ \
return (ENVTIECALL(CATIPDMUESaveProcess,ENVTIETypeLetter,ENVTIELetter)BeforeSaveDialog(iDocsToSave,ipInfo,ipAction)); \
} \
HRESULT  ENVTIEName::OnOK(CATListPtrCATDocument* iDocsToSave, int onOKNumber, CATIPDMSaveInfo *ipInfo, CATIPDMSaveAction *ipAction)  \
{ \
return (ENVTIECALL(CATIPDMUESaveProcess,ENVTIETypeLetter,ENVTIELetter)OnOK(iDocsToSave,onOKNumber,ipInfo,ipAction)); \
} \
HRESULT  ENVTIEName::BeforeStartingSave(CATListPtrCATDocument* iDocsToSave, CATIPDMSaveInfo *ipInfo, CATIPDMSaveAction *ipAction)  \
{ \
return (ENVTIECALL(CATIPDMUESaveProcess,ENVTIETypeLetter,ENVTIELetter)BeforeStartingSave(iDocsToSave,ipInfo,ipAction)); \
} \
HRESULT  ENVTIEName::OnSaveSucceeded(CATListPtrCATDocument* iDocsToSave, CATIPDMSaveInfo *ipInfo, CATIPDMSaveAction *ipAction)  \
{ \
return (ENVTIECALL(CATIPDMUESaveProcess,ENVTIETypeLetter,ENVTIELetter)OnSaveSucceeded(iDocsToSave,ipInfo,ipAction)); \
} \
HRESULT  ENVTIEName::OnSaveFailed(CATListPtrCATDocument* iDocsToSave, CATIPDMSaveInfo *ipInfo, CATIPDMSaveAction *ipAction)  \
{ \
return (ENVTIECALL(CATIPDMUESaveProcess,ENVTIETypeLetter,ENVTIELetter)OnSaveFailed(iDocsToSave,ipInfo,ipAction)); \
} \
HRESULT  ENVTIEName::BeforeCommit (CATListPtrCATDocument* iDocsToSave, CATIPDMSaveInfo* ipInfo, CATIPDMSaveAction* ipAction)  \
{ \
return (ENVTIECALL(CATIPDMUESaveProcess,ENVTIETypeLetter,ENVTIELetter)BeforeCommit (iDocsToSave,ipInfo,ipAction)); \
} \
HRESULT  ENVTIEName::BeforeRollback (CATListPtrCATDocument* iDocsToSave, CATIPDMSaveInfo* ipInfo, CATIPDMSaveAction* ipAction)  \
{ \
return (ENVTIECALL(CATIPDMUESaveProcess,ENVTIETypeLetter,ENVTIELetter)BeforeRollback (iDocsToSave,ipInfo,ipAction)); \
} \


/* Name of the TIE class */
#define class_TIE_CATIPDMUESaveProcess(classe)    TIECATIPDMUESaveProcess##classe


/* Common methods inside a TIE */
#define common_TIE_CATIPDMUESaveProcess(classe) \
 \
 \
/* Static initialization */ \
CATDefineCommonTIEMembers(CATIPDMUESaveProcess, classe) \
 \
 \
CATImplementTIEMethods(CATIPDMUESaveProcess, classe) \
CATImplementIUnknownMethodsForCATBaseUnknownTIE(CATIPDMUESaveProcess, classe, 1) \
CATImplementIDispatchMethodsForCATBaseUnknownTIE(CATIPDMUESaveProcess, classe) \
CATImplementCATBaseUnknownMethodsForTIE(CATIPDMUESaveProcess, classe) \
 \
HRESULT  TIECATIPDMUESaveProcess##classe::BeforeSaveDialog(CATListPtrCATDocument* iDocsToSave, CATIPDMSaveInfo *ipInfo, CATIPDMSaveAction *ipAction)  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->BeforeSaveDialog(iDocsToSave,ipInfo,ipAction)); \
} \
HRESULT  TIECATIPDMUESaveProcess##classe::OnOK(CATListPtrCATDocument* iDocsToSave, int onOKNumber, CATIPDMSaveInfo *ipInfo, CATIPDMSaveAction *ipAction)  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->OnOK(iDocsToSave,onOKNumber,ipInfo,ipAction)); \
} \
HRESULT  TIECATIPDMUESaveProcess##classe::BeforeStartingSave(CATListPtrCATDocument* iDocsToSave, CATIPDMSaveInfo *ipInfo, CATIPDMSaveAction *ipAction)  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->BeforeStartingSave(iDocsToSave,ipInfo,ipAction)); \
} \
HRESULT  TIECATIPDMUESaveProcess##classe::OnSaveSucceeded(CATListPtrCATDocument* iDocsToSave, CATIPDMSaveInfo *ipInfo, CATIPDMSaveAction *ipAction)  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->OnSaveSucceeded(iDocsToSave,ipInfo,ipAction)); \
} \
HRESULT  TIECATIPDMUESaveProcess##classe::OnSaveFailed(CATListPtrCATDocument* iDocsToSave, CATIPDMSaveInfo *ipInfo, CATIPDMSaveAction *ipAction)  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->OnSaveFailed(iDocsToSave,ipInfo,ipAction)); \
} \
HRESULT  TIECATIPDMUESaveProcess##classe::BeforeCommit (CATListPtrCATDocument* iDocsToSave, CATIPDMSaveInfo* ipInfo, CATIPDMSaveAction* ipAction)  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->BeforeCommit (iDocsToSave,ipInfo,ipAction)); \
} \
HRESULT  TIECATIPDMUESaveProcess##classe::BeforeRollback (CATListPtrCATDocument* iDocsToSave, CATIPDMSaveInfo* ipInfo, CATIPDMSaveAction* ipAction)  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->BeforeRollback (iDocsToSave,ipInfo,ipAction)); \
} \



/* Macro used to link an implementation with an interface */
#define TIE_CATIPDMUESaveProcess(classe) \
 \
 \
declare_TIE_CATIPDMUESaveProcess(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIPDMUESaveProcess##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIPDMUESaveProcess,"CATIPDMUESaveProcess",CATIPDMUESaveProcess::MetaObject(),classe::MetaObject(),TIE); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIPDMUESaveProcess(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIECreation(CATIPDMUESaveProcess, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIPDMUESaveProcess##classe(classe::MetaObject(),CATIPDMUESaveProcess::MetaObject(),(void *)CreateTIECATIPDMUESaveProcess##classe)



/* Macro used to link an implementation with an interface */
/* This TIE is chained on the implementation object */
#define TIEchain_CATIPDMUESaveProcess(classe) \
 \
 \
declare_TIE_CATIPDMUESaveProcess(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIPDMUESaveProcess##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIPDMUESaveProcess,"CATIPDMUESaveProcess",CATIPDMUESaveProcess::MetaObject(),classe::MetaObject(),TIEchain); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIPDMUESaveProcess(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIEchainCreation(CATIPDMUESaveProcess, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIPDMUESaveProcess##classe(classe::MetaObject(),CATIPDMUESaveProcess::MetaObject(),(void *)CreateTIECATIPDMUESaveProcess##classe)


/* Macro to switch between BOA and TIE at build time */ 
#ifdef CATSYS_BOA_IS_TIE
#define BOA_CATIPDMUESaveProcess(classe) TIE_CATIPDMUESaveProcess(classe)
#else
#define BOA_CATIPDMUESaveProcess(classe) CATImplementBOA(CATIPDMUESaveProcess, classe)
#endif

#endif
