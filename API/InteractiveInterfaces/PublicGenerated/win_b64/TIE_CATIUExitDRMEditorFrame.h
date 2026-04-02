#ifndef __TIE_CATIUExitDRMEditorFrame
#define __TIE_CATIUExitDRMEditorFrame

#include <string.h>
#include "CATBaseUnknown.h"
#include "CATMetaClass.h"
#include "CATMacForTie.h"
#include "CATIUExitDRMEditorFrame.h"
#include "JS0DSPA.h"


#ifdef _WINDOWS_SOURCE
#define Exported __declspec(dllexport)
#define Imported __declspec(dllimport)
#else
#define Exported 
#define Imported 
#endif


/* To link an implementation with the interface CATIUExitDRMEditorFrame */
#define declare_TIE_CATIUExitDRMEditorFrame(classe) \
 \
 \
class TIECATIUExitDRMEditorFrame##classe : public CATIUExitDRMEditorFrame \
{ \
   private: \
      CATDeclareCommonTIEMembers \
   public: \
      CATDeclareTIEMethods(CATIUExitDRMEditorFrame, classe) \
      CATDeclareIUnknownMethodsForCATBaseUnknownTIE \
      CATDeclareIDispatchMethodsForCATBaseUnknownTIE \
      CATDeclareCATBaseUnknownMethodsForTIE \
      virtual HRESULT GetAuthorizations(void *& iDRMAuthorization, size_t& iDRMAuthorizationSize) ; \
};



#define ENVTIEdeclare_CATIUExitDRMEditorFrame(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
virtual HRESULT GetAuthorizations(void *& iDRMAuthorization, size_t& iDRMAuthorizationSize) ; \


#define ENVTIEdefine_CATIUExitDRMEditorFrame(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
HRESULT  ENVTIEName::GetAuthorizations(void *& iDRMAuthorization, size_t& iDRMAuthorizationSize)  \
{ \
return (ENVTIECALL(CATIUExitDRMEditorFrame,ENVTIETypeLetter,ENVTIELetter)GetAuthorizations(iDRMAuthorization,iDRMAuthorizationSize)); \
} \


/* Name of the TIE class */
#define class_TIE_CATIUExitDRMEditorFrame(classe)    TIECATIUExitDRMEditorFrame##classe


/* Common methods inside a TIE */
#define common_TIE_CATIUExitDRMEditorFrame(classe) \
 \
 \
/* Static initialization */ \
CATDefineCommonTIEMembers(CATIUExitDRMEditorFrame, classe) \
 \
 \
CATImplementTIEMethods(CATIUExitDRMEditorFrame, classe) \
CATImplementIUnknownMethodsForCATBaseUnknownTIE(CATIUExitDRMEditorFrame, classe, 1) \
CATImplementIDispatchMethodsForCATBaseUnknownTIE(CATIUExitDRMEditorFrame, classe) \
CATImplementCATBaseUnknownMethodsForTIE(CATIUExitDRMEditorFrame, classe) \
 \
HRESULT  TIECATIUExitDRMEditorFrame##classe::GetAuthorizations(void *& iDRMAuthorization, size_t& iDRMAuthorizationSize)  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetAuthorizations(iDRMAuthorization,iDRMAuthorizationSize)); \
} \



/* Macro used to link an implementation with an interface */
#define TIE_CATIUExitDRMEditorFrame(classe) \
 \
 \
declare_TIE_CATIUExitDRMEditorFrame(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIUExitDRMEditorFrame##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIUExitDRMEditorFrame,"CATIUExitDRMEditorFrame",CATIUExitDRMEditorFrame::MetaObject(),classe::MetaObject(),TIE); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIUExitDRMEditorFrame(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIECreation(CATIUExitDRMEditorFrame, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIUExitDRMEditorFrame##classe(classe::MetaObject(),CATIUExitDRMEditorFrame::MetaObject(),(void *)CreateTIECATIUExitDRMEditorFrame##classe)



/* Macro used to link an implementation with an interface */
/* This TIE is chained on the implementation object */
#define TIEchain_CATIUExitDRMEditorFrame(classe) \
 \
 \
declare_TIE_CATIUExitDRMEditorFrame(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIUExitDRMEditorFrame##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIUExitDRMEditorFrame,"CATIUExitDRMEditorFrame",CATIUExitDRMEditorFrame::MetaObject(),classe::MetaObject(),TIEchain); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIUExitDRMEditorFrame(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIEchainCreation(CATIUExitDRMEditorFrame, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIUExitDRMEditorFrame##classe(classe::MetaObject(),CATIUExitDRMEditorFrame::MetaObject(),(void *)CreateTIECATIUExitDRMEditorFrame##classe)


/* Macro to switch between BOA and TIE at build time */ 
#ifdef CATSYS_BOA_IS_TIE
#define BOA_CATIUExitDRMEditorFrame(classe) TIE_CATIUExitDRMEditorFrame(classe)
#else
#define BOA_CATIUExitDRMEditorFrame(classe) CATImplementBOA(CATIUExitDRMEditorFrame, classe)
#endif

#endif
