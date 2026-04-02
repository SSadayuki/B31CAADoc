#ifndef __TIE_CATIReplaceUI
#define __TIE_CATIReplaceUI

#include <string.h>
#include "CATBaseUnknown.h"
#include "CATMetaClass.h"
#include "CATMacForTie.h"
#include "CATIReplaceUI.h"
#include "JS0DSPA.h"


#ifdef _WINDOWS_SOURCE
#define Exported __declspec(dllexport)
#define Imported __declspec(dllimport)
#else
#define Exported 
#define Imported 
#endif


/* To link an implementation with the interface CATIReplaceUI */
#define declare_TIE_CATIReplaceUI(classe) \
 \
 \
class TIECATIReplaceUI##classe : public CATIReplaceUI \
{ \
   private: \
      CATDeclareCommonTIEMembers \
   public: \
      CATDeclareTIEMethods(CATIReplaceUI, classe) \
      CATDeclareIUnknownMethodsForCATBaseUnknownTIE \
      CATDeclareIDispatchMethodsForCATBaseUnknownTIE \
      CATDeclareCATBaseUnknownMethodsForTIE \
      virtual HRESULT FindValidElementForReplace(const CATUnicodeString& iRole, const CATPathElement* iSelection, const CATBaseUnknown* iOldValue, CATBaseUnknown*& oFoundElement); \
};



#define ENVTIEdeclare_CATIReplaceUI(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
virtual HRESULT FindValidElementForReplace(const CATUnicodeString& iRole, const CATPathElement* iSelection, const CATBaseUnknown* iOldValue, CATBaseUnknown*& oFoundElement); \


#define ENVTIEdefine_CATIReplaceUI(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
HRESULT  ENVTIEName::FindValidElementForReplace(const CATUnicodeString& iRole, const CATPathElement* iSelection, const CATBaseUnknown* iOldValue, CATBaseUnknown*& oFoundElement) \
{ \
return (ENVTIECALL(CATIReplaceUI,ENVTIETypeLetter,ENVTIELetter)FindValidElementForReplace(iRole,iSelection,iOldValue,oFoundElement)); \
} \


/* Name of the TIE class */
#define class_TIE_CATIReplaceUI(classe)    TIECATIReplaceUI##classe


/* Common methods inside a TIE */
#define common_TIE_CATIReplaceUI(classe) \
 \
 \
/* Static initialization */ \
CATDefineCommonTIEMembers(CATIReplaceUI, classe) \
 \
 \
CATImplementTIEMethods(CATIReplaceUI, classe) \
CATImplementIUnknownMethodsForCATBaseUnknownTIE(CATIReplaceUI, classe, 1) \
CATImplementIDispatchMethodsForCATBaseUnknownTIE(CATIReplaceUI, classe) \
CATImplementCATBaseUnknownMethodsForTIE(CATIReplaceUI, classe) \
 \
HRESULT  TIECATIReplaceUI##classe::FindValidElementForReplace(const CATUnicodeString& iRole, const CATPathElement* iSelection, const CATBaseUnknown* iOldValue, CATBaseUnknown*& oFoundElement) \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->FindValidElementForReplace(iRole,iSelection,iOldValue,oFoundElement)); \
} \



/* Macro used to link an implementation with an interface */
#define TIE_CATIReplaceUI(classe) \
 \
 \
declare_TIE_CATIReplaceUI(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIReplaceUI##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIReplaceUI,"CATIReplaceUI",CATIReplaceUI::MetaObject(),classe::MetaObject(),TIE); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIReplaceUI(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIECreation(CATIReplaceUI, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIReplaceUI##classe(classe::MetaObject(),CATIReplaceUI::MetaObject(),(void *)CreateTIECATIReplaceUI##classe)



/* Macro used to link an implementation with an interface */
/* This TIE is chained on the implementation object */
#define TIEchain_CATIReplaceUI(classe) \
 \
 \
declare_TIE_CATIReplaceUI(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIReplaceUI##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIReplaceUI,"CATIReplaceUI",CATIReplaceUI::MetaObject(),classe::MetaObject(),TIEchain); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIReplaceUI(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIEchainCreation(CATIReplaceUI, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIReplaceUI##classe(classe::MetaObject(),CATIReplaceUI::MetaObject(),(void *)CreateTIECATIReplaceUI##classe)


/* Macro to switch between BOA and TIE at build time */ 
#ifdef CATSYS_BOA_IS_TIE
#define BOA_CATIReplaceUI(classe) TIE_CATIReplaceUI(classe)
#else
#define BOA_CATIReplaceUI(classe) CATImplementBOA(CATIReplaceUI, classe)
#endif

#endif
