#ifndef __TIE_CATIPDMUEOnCancel
#define __TIE_CATIPDMUEOnCancel

#include <string.h>
#include "CATBaseUnknown.h"
#include "CATMetaClass.h"
#include "CATMacForTie.h"
#include "CATIPDMUEOnCancel.h"
#include "JS0DSPA.h"


#ifdef _WINDOWS_SOURCE
#define Exported __declspec(dllexport)
#define Imported __declspec(dllimport)
#else
#define Exported 
#define Imported 
#endif


/* To link an implementation with the interface CATIPDMUEOnCancel */
#define declare_TIE_CATIPDMUEOnCancel(classe) \
 \
 \
class TIECATIPDMUEOnCancel##classe : public CATIPDMUEOnCancel \
{ \
   private: \
      CATDeclareCommonTIEMembers \
   public: \
      CATDeclareTIEMethods(CATIPDMUEOnCancel, classe) \
      CATDeclareIUnknownMethodsForCATBaseUnknownTIE \
      CATDeclareIDispatchMethodsForCATBaseUnknownTIE \
      CATDeclareCATBaseUnknownMethodsForTIE \
      virtual HRESULT OnCancel(CATListPtrCATDocument* iDocsToSave, CATIPDMSaveInfo *ipInfo, CATIPDMSaveAction *ipAction) ; \
};



#define ENVTIEdeclare_CATIPDMUEOnCancel(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
virtual HRESULT OnCancel(CATListPtrCATDocument* iDocsToSave, CATIPDMSaveInfo *ipInfo, CATIPDMSaveAction *ipAction) ; \


#define ENVTIEdefine_CATIPDMUEOnCancel(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
HRESULT  ENVTIEName::OnCancel(CATListPtrCATDocument* iDocsToSave, CATIPDMSaveInfo *ipInfo, CATIPDMSaveAction *ipAction)  \
{ \
return (ENVTIECALL(CATIPDMUEOnCancel,ENVTIETypeLetter,ENVTIELetter)OnCancel(iDocsToSave,ipInfo,ipAction)); \
} \


/* Name of the TIE class */
#define class_TIE_CATIPDMUEOnCancel(classe)    TIECATIPDMUEOnCancel##classe


/* Common methods inside a TIE */
#define common_TIE_CATIPDMUEOnCancel(classe) \
 \
 \
/* Static initialization */ \
CATDefineCommonTIEMembers(CATIPDMUEOnCancel, classe) \
 \
 \
CATImplementTIEMethods(CATIPDMUEOnCancel, classe) \
CATImplementIUnknownMethodsForCATBaseUnknownTIE(CATIPDMUEOnCancel, classe, 1) \
CATImplementIDispatchMethodsForCATBaseUnknownTIE(CATIPDMUEOnCancel, classe) \
CATImplementCATBaseUnknownMethodsForTIE(CATIPDMUEOnCancel, classe) \
 \
HRESULT  TIECATIPDMUEOnCancel##classe::OnCancel(CATListPtrCATDocument* iDocsToSave, CATIPDMSaveInfo *ipInfo, CATIPDMSaveAction *ipAction)  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->OnCancel(iDocsToSave,ipInfo,ipAction)); \
} \



/* Macro used to link an implementation with an interface */
#define TIE_CATIPDMUEOnCancel(classe) \
 \
 \
declare_TIE_CATIPDMUEOnCancel(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIPDMUEOnCancel##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIPDMUEOnCancel,"CATIPDMUEOnCancel",CATIPDMUEOnCancel::MetaObject(),classe::MetaObject(),TIE); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIPDMUEOnCancel(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIECreation(CATIPDMUEOnCancel, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIPDMUEOnCancel##classe(classe::MetaObject(),CATIPDMUEOnCancel::MetaObject(),(void *)CreateTIECATIPDMUEOnCancel##classe)



/* Macro used to link an implementation with an interface */
/* This TIE is chained on the implementation object */
#define TIEchain_CATIPDMUEOnCancel(classe) \
 \
 \
declare_TIE_CATIPDMUEOnCancel(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIPDMUEOnCancel##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIPDMUEOnCancel,"CATIPDMUEOnCancel",CATIPDMUEOnCancel::MetaObject(),classe::MetaObject(),TIEchain); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIPDMUEOnCancel(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIEchainCreation(CATIPDMUEOnCancel, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIPDMUEOnCancel##classe(classe::MetaObject(),CATIPDMUEOnCancel::MetaObject(),(void *)CreateTIECATIPDMUEOnCancel##classe)


/* Macro to switch between BOA and TIE at build time */ 
#ifdef CATSYS_BOA_IS_TIE
#define BOA_CATIPDMUEOnCancel(classe) TIE_CATIPDMUEOnCancel(classe)
#else
#define BOA_CATIPDMUEOnCancel(classe) CATImplementBOA(CATIPDMUEOnCancel, classe)
#endif

#endif
