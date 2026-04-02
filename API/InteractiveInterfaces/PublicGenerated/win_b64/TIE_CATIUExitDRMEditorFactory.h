#ifndef __TIE_CATIUExitDRMEditorFactory
#define __TIE_CATIUExitDRMEditorFactory

#include <string.h>
#include "CATBaseUnknown.h"
#include "CATMetaClass.h"
#include "CATMacForTie.h"
#include "CATIUExitDRMEditorFactory.h"
#include "JS0DSPA.h"


#ifdef _WINDOWS_SOURCE
#define Exported __declspec(dllexport)
#define Imported __declspec(dllimport)
#else
#define Exported 
#define Imported 
#endif


/* To link an implementation with the interface CATIUExitDRMEditorFactory */
#define declare_TIE_CATIUExitDRMEditorFactory(classe) \
 \
 \
class TIECATIUExitDRMEditorFactory##classe : public CATIUExitDRMEditorFactory \
{ \
   private: \
      CATDeclareCommonTIEMembers \
   public: \
      CATDeclareTIEMethods(CATIUExitDRMEditorFactory, classe) \
      CATDeclareIUnknownMethodsForCATBaseUnknownTIE \
      CATDeclareIDispatchMethodsForCATBaseUnknownTIE \
      CATDeclareCATBaseUnknownMethodsForTIE \
      virtual HRESULT BuildAboutFrame(CATDlgFrame *iParentFrame) ; \
      virtual HRESULT BuildEditRightFrame(CATDlgFrame *iParentFrame, const void *iDRMAuthorization, size_t iDRMAuthorizationSize, CATDlgFrame **oCreatedFrame) ; \
      virtual HRESULT FillAdditionalInformationFrame(CATDlgFrame *iParentFrame, CATBaseUnknown *iCurrentDoc ) ; \
      virtual HRESULT IsAbletoShow(int iFrameDescriptor, CATBoolean& iIsAble) ; \
};



#define ENVTIEdeclare_CATIUExitDRMEditorFactory(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
virtual HRESULT BuildAboutFrame(CATDlgFrame *iParentFrame) ; \
virtual HRESULT BuildEditRightFrame(CATDlgFrame *iParentFrame, const void *iDRMAuthorization, size_t iDRMAuthorizationSize, CATDlgFrame **oCreatedFrame) ; \
virtual HRESULT FillAdditionalInformationFrame(CATDlgFrame *iParentFrame, CATBaseUnknown *iCurrentDoc ) ; \
virtual HRESULT IsAbletoShow(int iFrameDescriptor, CATBoolean& iIsAble) ; \


#define ENVTIEdefine_CATIUExitDRMEditorFactory(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
HRESULT  ENVTIEName::BuildAboutFrame(CATDlgFrame *iParentFrame)  \
{ \
return (ENVTIECALL(CATIUExitDRMEditorFactory,ENVTIETypeLetter,ENVTIELetter)BuildAboutFrame(iParentFrame)); \
} \
HRESULT  ENVTIEName::BuildEditRightFrame(CATDlgFrame *iParentFrame, const void *iDRMAuthorization, size_t iDRMAuthorizationSize, CATDlgFrame **oCreatedFrame)  \
{ \
return (ENVTIECALL(CATIUExitDRMEditorFactory,ENVTIETypeLetter,ENVTIELetter)BuildEditRightFrame(iParentFrame,iDRMAuthorization,iDRMAuthorizationSize,oCreatedFrame)); \
} \
HRESULT  ENVTIEName::FillAdditionalInformationFrame(CATDlgFrame *iParentFrame, CATBaseUnknown *iCurrentDoc )  \
{ \
return (ENVTIECALL(CATIUExitDRMEditorFactory,ENVTIETypeLetter,ENVTIELetter)FillAdditionalInformationFrame(iParentFrame,iCurrentDoc )); \
} \
HRESULT  ENVTIEName::IsAbletoShow(int iFrameDescriptor, CATBoolean& iIsAble)  \
{ \
return (ENVTIECALL(CATIUExitDRMEditorFactory,ENVTIETypeLetter,ENVTIELetter)IsAbletoShow(iFrameDescriptor,iIsAble)); \
} \


/* Name of the TIE class */
#define class_TIE_CATIUExitDRMEditorFactory(classe)    TIECATIUExitDRMEditorFactory##classe


/* Common methods inside a TIE */
#define common_TIE_CATIUExitDRMEditorFactory(classe) \
 \
 \
/* Static initialization */ \
CATDefineCommonTIEMembers(CATIUExitDRMEditorFactory, classe) \
 \
 \
CATImplementTIEMethods(CATIUExitDRMEditorFactory, classe) \
CATImplementIUnknownMethodsForCATBaseUnknownTIE(CATIUExitDRMEditorFactory, classe, 1) \
CATImplementIDispatchMethodsForCATBaseUnknownTIE(CATIUExitDRMEditorFactory, classe) \
CATImplementCATBaseUnknownMethodsForTIE(CATIUExitDRMEditorFactory, classe) \
 \
HRESULT  TIECATIUExitDRMEditorFactory##classe::BuildAboutFrame(CATDlgFrame *iParentFrame)  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->BuildAboutFrame(iParentFrame)); \
} \
HRESULT  TIECATIUExitDRMEditorFactory##classe::BuildEditRightFrame(CATDlgFrame *iParentFrame, const void *iDRMAuthorization, size_t iDRMAuthorizationSize, CATDlgFrame **oCreatedFrame)  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->BuildEditRightFrame(iParentFrame,iDRMAuthorization,iDRMAuthorizationSize,oCreatedFrame)); \
} \
HRESULT  TIECATIUExitDRMEditorFactory##classe::FillAdditionalInformationFrame(CATDlgFrame *iParentFrame, CATBaseUnknown *iCurrentDoc )  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->FillAdditionalInformationFrame(iParentFrame,iCurrentDoc )); \
} \
HRESULT  TIECATIUExitDRMEditorFactory##classe::IsAbletoShow(int iFrameDescriptor, CATBoolean& iIsAble)  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->IsAbletoShow(iFrameDescriptor,iIsAble)); \
} \



/* Macro used to link an implementation with an interface */
#define TIE_CATIUExitDRMEditorFactory(classe) \
 \
 \
declare_TIE_CATIUExitDRMEditorFactory(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIUExitDRMEditorFactory##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIUExitDRMEditorFactory,"CATIUExitDRMEditorFactory",CATIUExitDRMEditorFactory::MetaObject(),classe::MetaObject(),TIE); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIUExitDRMEditorFactory(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIECreation(CATIUExitDRMEditorFactory, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIUExitDRMEditorFactory##classe(classe::MetaObject(),CATIUExitDRMEditorFactory::MetaObject(),(void *)CreateTIECATIUExitDRMEditorFactory##classe)



/* Macro used to link an implementation with an interface */
/* This TIE is chained on the implementation object */
#define TIEchain_CATIUExitDRMEditorFactory(classe) \
 \
 \
declare_TIE_CATIUExitDRMEditorFactory(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIUExitDRMEditorFactory##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIUExitDRMEditorFactory,"CATIUExitDRMEditorFactory",CATIUExitDRMEditorFactory::MetaObject(),classe::MetaObject(),TIEchain); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIUExitDRMEditorFactory(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIEchainCreation(CATIUExitDRMEditorFactory, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIUExitDRMEditorFactory##classe(classe::MetaObject(),CATIUExitDRMEditorFactory::MetaObject(),(void *)CreateTIECATIUExitDRMEditorFactory##classe)


/* Macro to switch between BOA and TIE at build time */ 
#ifdef CATSYS_BOA_IS_TIE
#define BOA_CATIUExitDRMEditorFactory(classe) TIE_CATIUExitDRMEditorFactory(classe)
#else
#define BOA_CATIUExitDRMEditorFactory(classe) CATImplementBOA(CATIUExitDRMEditorFactory, classe)
#endif

#endif
