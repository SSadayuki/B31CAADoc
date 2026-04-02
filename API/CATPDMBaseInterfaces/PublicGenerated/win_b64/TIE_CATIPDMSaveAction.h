#ifndef __TIE_CATIPDMSaveAction
#define __TIE_CATIPDMSaveAction

#include <string.h>
#include "CATBaseUnknown.h"
#include "CATMetaClass.h"
#include "CATMacForTie.h"
#include "CATIPDMSaveAction.h"
#include "JS0DSPA.h"


#ifdef _WINDOWS_SOURCE
#define Exported __declspec(dllexport)
#define Imported __declspec(dllimport)
#else
#define Exported 
#define Imported 
#endif


/* To link an implementation with the interface CATIPDMSaveAction */
#define declare_TIE_CATIPDMSaveAction(classe) \
 \
 \
class TIECATIPDMSaveAction##classe : public CATIPDMSaveAction \
{ \
   private: \
      CATDeclareCommonTIEMembers \
   public: \
      CATDeclareTIEMethods(CATIPDMSaveAction, classe) \
      CATDeclareIUnknownMethodsForCATBaseUnknownTIE \
      CATDeclareIDispatchMethodsForCATBaseUnknownTIE \
      CATDeclareCATBaseUnknownMethodsForTIE \
      virtual HRESULT PostErrorMsg(CATUnicodeString &iMsg) ; \
      virtual HRESULT PostWarningMsg(CATUnicodeString &iMsg) ; \
};



#define ENVTIEdeclare_CATIPDMSaveAction(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
virtual HRESULT PostErrorMsg(CATUnicodeString &iMsg) ; \
virtual HRESULT PostWarningMsg(CATUnicodeString &iMsg) ; \


#define ENVTIEdefine_CATIPDMSaveAction(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
HRESULT  ENVTIEName::PostErrorMsg(CATUnicodeString &iMsg)  \
{ \
return (ENVTIECALL(CATIPDMSaveAction,ENVTIETypeLetter,ENVTIELetter)PostErrorMsg(iMsg)); \
} \
HRESULT  ENVTIEName::PostWarningMsg(CATUnicodeString &iMsg)  \
{ \
return (ENVTIECALL(CATIPDMSaveAction,ENVTIETypeLetter,ENVTIELetter)PostWarningMsg(iMsg)); \
} \


/* Name of the TIE class */
#define class_TIE_CATIPDMSaveAction(classe)    TIECATIPDMSaveAction##classe


/* Common methods inside a TIE */
#define common_TIE_CATIPDMSaveAction(classe) \
 \
 \
/* Static initialization */ \
CATDefineCommonTIEMembers(CATIPDMSaveAction, classe) \
 \
 \
CATImplementTIEMethods(CATIPDMSaveAction, classe) \
CATImplementIUnknownMethodsForCATBaseUnknownTIE(CATIPDMSaveAction, classe, 1) \
CATImplementIDispatchMethodsForCATBaseUnknownTIE(CATIPDMSaveAction, classe) \
CATImplementCATBaseUnknownMethodsForTIE(CATIPDMSaveAction, classe) \
 \
HRESULT  TIECATIPDMSaveAction##classe::PostErrorMsg(CATUnicodeString &iMsg)  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->PostErrorMsg(iMsg)); \
} \
HRESULT  TIECATIPDMSaveAction##classe::PostWarningMsg(CATUnicodeString &iMsg)  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->PostWarningMsg(iMsg)); \
} \



/* Macro used to link an implementation with an interface */
#define TIE_CATIPDMSaveAction(classe) \
 \
 \
declare_TIE_CATIPDMSaveAction(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIPDMSaveAction##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIPDMSaveAction,"CATIPDMSaveAction",CATIPDMSaveAction::MetaObject(),classe::MetaObject(),TIE); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIPDMSaveAction(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIECreation(CATIPDMSaveAction, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIPDMSaveAction##classe(classe::MetaObject(),CATIPDMSaveAction::MetaObject(),(void *)CreateTIECATIPDMSaveAction##classe)



/* Macro used to link an implementation with an interface */
/* This TIE is chained on the implementation object */
#define TIEchain_CATIPDMSaveAction(classe) \
 \
 \
declare_TIE_CATIPDMSaveAction(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIPDMSaveAction##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIPDMSaveAction,"CATIPDMSaveAction",CATIPDMSaveAction::MetaObject(),classe::MetaObject(),TIEchain); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIPDMSaveAction(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIEchainCreation(CATIPDMSaveAction, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIPDMSaveAction##classe(classe::MetaObject(),CATIPDMSaveAction::MetaObject(),(void *)CreateTIECATIPDMSaveAction##classe)


/* Macro to switch between BOA and TIE at build time */ 
#ifdef CATSYS_BOA_IS_TIE
#define BOA_CATIPDMSaveAction(classe) TIE_CATIPDMSaveAction(classe)
#else
#define BOA_CATIPDMSaveAction(classe) CATImplementBOA(CATIPDMSaveAction, classe)
#endif

#endif
