#ifndef __TIE_CATIBatchGridUI
#define __TIE_CATIBatchGridUI

#include <string.h>
#include "CATBaseUnknown.h"
#include "CATMetaClass.h"
#include "CATMacForTie.h"
#include "CATIBatchGridUI.h"
#include "JS0DSPA.h"


#ifdef _WINDOWS_SOURCE
#define Exported __declspec(dllexport)
#define Imported __declspec(dllimport)
#else
#define Exported 
#define Imported 
#endif


/* To link an implementation with the interface CATIBatchGridUI */
#define declare_TIE_CATIBatchGridUI(classe) \
 \
 \
class TIECATIBatchGridUI##classe : public CATIBatchGridUI \
{ \
   private: \
      CATDeclareCommonTIEMembers \
   public: \
      CATDeclareTIEMethods(CATIBatchGridUI, classe) \
      CATDeclareIUnknownMethodsForCATBaseUnknownTIE \
      CATDeclareIDispatchMethodsForCATBaseUnknownTIE \
      CATDeclareCATBaseUnknownMethodsForTIE \
      virtual HRESULT  LaunchOptionGUI(CATUnicodeString& BatchToolName, CATDlgDialog* father) ; \
      virtual HRESULT  GetResourceName(CATUnicodeString& name) ; \
};



#define ENVTIEdeclare_CATIBatchGridUI(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
virtual HRESULT  LaunchOptionGUI(CATUnicodeString& BatchToolName, CATDlgDialog* father) ; \
virtual HRESULT  GetResourceName(CATUnicodeString& name) ; \


#define ENVTIEdefine_CATIBatchGridUI(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
HRESULT   ENVTIEName::LaunchOptionGUI(CATUnicodeString& BatchToolName, CATDlgDialog* father)  \
{ \
return (ENVTIECALL(CATIBatchGridUI,ENVTIETypeLetter,ENVTIELetter)LaunchOptionGUI(BatchToolName,father)); \
} \
HRESULT   ENVTIEName::GetResourceName(CATUnicodeString& name)  \
{ \
return (ENVTIECALL(CATIBatchGridUI,ENVTIETypeLetter,ENVTIELetter)GetResourceName(name)); \
} \


/* Name of the TIE class */
#define class_TIE_CATIBatchGridUI(classe)    TIECATIBatchGridUI##classe


/* Common methods inside a TIE */
#define common_TIE_CATIBatchGridUI(classe) \
 \
 \
/* Static initialization */ \
CATDefineCommonTIEMembers(CATIBatchGridUI, classe) \
 \
 \
CATImplementTIEMethods(CATIBatchGridUI, classe) \
CATImplementIUnknownMethodsForCATBaseUnknownTIE(CATIBatchGridUI, classe, 1) \
CATImplementIDispatchMethodsForCATBaseUnknownTIE(CATIBatchGridUI, classe) \
CATImplementCATBaseUnknownMethodsForTIE(CATIBatchGridUI, classe) \
 \
HRESULT   TIECATIBatchGridUI##classe::LaunchOptionGUI(CATUnicodeString& BatchToolName, CATDlgDialog* father)  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->LaunchOptionGUI(BatchToolName,father)); \
} \
HRESULT   TIECATIBatchGridUI##classe::GetResourceName(CATUnicodeString& name)  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetResourceName(name)); \
} \



/* Macro used to link an implementation with an interface */
#define TIE_CATIBatchGridUI(classe) \
 \
 \
declare_TIE_CATIBatchGridUI(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIBatchGridUI##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIBatchGridUI,"CATIBatchGridUI",CATIBatchGridUI::MetaObject(),classe::MetaObject(),TIE); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIBatchGridUI(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIECreation(CATIBatchGridUI, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIBatchGridUI##classe(classe::MetaObject(),CATIBatchGridUI::MetaObject(),(void *)CreateTIECATIBatchGridUI##classe)



/* Macro used to link an implementation with an interface */
/* This TIE is chained on the implementation object */
#define TIEchain_CATIBatchGridUI(classe) \
 \
 \
declare_TIE_CATIBatchGridUI(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIBatchGridUI##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIBatchGridUI,"CATIBatchGridUI",CATIBatchGridUI::MetaObject(),classe::MetaObject(),TIEchain); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIBatchGridUI(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIEchainCreation(CATIBatchGridUI, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIBatchGridUI##classe(classe::MetaObject(),CATIBatchGridUI::MetaObject(),(void *)CreateTIECATIBatchGridUI##classe)


/* Macro to switch between BOA and TIE at build time */ 
#ifdef CATSYS_BOA_IS_TIE
#define BOA_CATIBatchGridUI(classe) TIE_CATIBatchGridUI(classe)
#else
#define BOA_CATIBatchGridUI(classe) CATImplementBOA(CATIBatchGridUI, classe)
#endif

#endif
