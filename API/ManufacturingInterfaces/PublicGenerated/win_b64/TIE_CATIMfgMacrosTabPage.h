#ifndef __TIE_CATIMfgMacrosTabPage
#define __TIE_CATIMfgMacrosTabPage

#include <string.h>
#include "CATBaseUnknown.h"
#include "CATMetaClass.h"
#include "CATMacForTie.h"
#include "CATIMfgMacrosTabPage.h"
#include "JS0DSPA.h"


#ifdef _WINDOWS_SOURCE
#define Exported __declspec(dllexport)
#define Imported __declspec(dllimport)
#else
#define Exported 
#define Imported 
#endif


/* To link an implementation with the interface CATIMfgMacrosTabPage */
#define declare_TIE_CATIMfgMacrosTabPage(classe) \
 \
 \
class TIECATIMfgMacrosTabPage##classe : public CATIMfgMacrosTabPage \
{ \
   private: \
      CATDeclareCommonTIEMembers \
   public: \
      CATDeclareTIEMethods(CATIMfgMacrosTabPage, classe) \
      CATDeclareIUnknownMethodsForCATBaseUnknownTIE \
      CATDeclareIDispatchMethodsForCATBaseUnknownTIE \
      CATDeclareCATBaseUnknownMethodsForTIE \
      virtual HRESULT IsMacrosTabPageAvailable(int &oIsAvailable) ; \
};



#define ENVTIEdeclare_CATIMfgMacrosTabPage(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
virtual HRESULT IsMacrosTabPageAvailable(int &oIsAvailable) ; \


#define ENVTIEdefine_CATIMfgMacrosTabPage(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
HRESULT  ENVTIEName::IsMacrosTabPageAvailable(int &oIsAvailable)  \
{ \
return (ENVTIECALL(CATIMfgMacrosTabPage,ENVTIETypeLetter,ENVTIELetter)IsMacrosTabPageAvailable(oIsAvailable)); \
} \


/* Name of the TIE class */
#define class_TIE_CATIMfgMacrosTabPage(classe)    TIECATIMfgMacrosTabPage##classe


/* Common methods inside a TIE */
#define common_TIE_CATIMfgMacrosTabPage(classe) \
 \
 \
/* Static initialization */ \
CATDefineCommonTIEMembers(CATIMfgMacrosTabPage, classe) \
 \
 \
CATImplementTIEMethods(CATIMfgMacrosTabPage, classe) \
CATImplementIUnknownMethodsForCATBaseUnknownTIE(CATIMfgMacrosTabPage, classe, 1) \
CATImplementIDispatchMethodsForCATBaseUnknownTIE(CATIMfgMacrosTabPage, classe) \
CATImplementCATBaseUnknownMethodsForTIE(CATIMfgMacrosTabPage, classe) \
 \
HRESULT  TIECATIMfgMacrosTabPage##classe::IsMacrosTabPageAvailable(int &oIsAvailable)  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->IsMacrosTabPageAvailable(oIsAvailable)); \
} \



/* Macro used to link an implementation with an interface */
#define TIE_CATIMfgMacrosTabPage(classe) \
 \
 \
declare_TIE_CATIMfgMacrosTabPage(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIMfgMacrosTabPage##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIMfgMacrosTabPage,"CATIMfgMacrosTabPage",CATIMfgMacrosTabPage::MetaObject(),classe::MetaObject(),TIE); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIMfgMacrosTabPage(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIECreation(CATIMfgMacrosTabPage, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIMfgMacrosTabPage##classe(classe::MetaObject(),CATIMfgMacrosTabPage::MetaObject(),(void *)CreateTIECATIMfgMacrosTabPage##classe)



/* Macro used to link an implementation with an interface */
/* This TIE is chained on the implementation object */
#define TIEchain_CATIMfgMacrosTabPage(classe) \
 \
 \
declare_TIE_CATIMfgMacrosTabPage(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIMfgMacrosTabPage##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIMfgMacrosTabPage,"CATIMfgMacrosTabPage",CATIMfgMacrosTabPage::MetaObject(),classe::MetaObject(),TIEchain); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIMfgMacrosTabPage(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIEchainCreation(CATIMfgMacrosTabPage, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIMfgMacrosTabPage##classe(classe::MetaObject(),CATIMfgMacrosTabPage::MetaObject(),(void *)CreateTIECATIMfgMacrosTabPage##classe)


/* Macro to switch between BOA and TIE at build time */ 
#ifdef CATSYS_BOA_IS_TIE
#define BOA_CATIMfgMacrosTabPage(classe) TIE_CATIMfgMacrosTabPage(classe)
#else
#define BOA_CATIMfgMacrosTabPage(classe) CATImplementBOA(CATIMfgMacrosTabPage, classe)
#endif

#endif
