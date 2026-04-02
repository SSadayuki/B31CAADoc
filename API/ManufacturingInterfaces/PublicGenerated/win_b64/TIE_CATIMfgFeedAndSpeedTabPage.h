#ifndef __TIE_CATIMfgFeedAndSpeedTabPage
#define __TIE_CATIMfgFeedAndSpeedTabPage

#include <string.h>
#include "CATBaseUnknown.h"
#include "CATMetaClass.h"
#include "CATMacForTie.h"
#include "CATIMfgFeedAndSpeedTabPage.h"
#include "JS0DSPA.h"


#ifdef _WINDOWS_SOURCE
#define Exported __declspec(dllexport)
#define Imported __declspec(dllimport)
#else
#define Exported 
#define Imported 
#endif


/* To link an implementation with the interface CATIMfgFeedAndSpeedTabPage */
#define declare_TIE_CATIMfgFeedAndSpeedTabPage(classe) \
 \
 \
class TIECATIMfgFeedAndSpeedTabPage##classe : public CATIMfgFeedAndSpeedTabPage \
{ \
   private: \
      CATDeclareCommonTIEMembers \
   public: \
      CATDeclareTIEMethods(CATIMfgFeedAndSpeedTabPage, classe) \
      CATDeclareIUnknownMethodsForCATBaseUnknownTIE \
      CATDeclareIDispatchMethodsForCATBaseUnknownTIE \
      CATDeclareCATBaseUnknownMethodsForTIE \
      virtual HRESULT IsFeedRateTabPageAvailable(int &oIsAvailable) ; \
};



#define ENVTIEdeclare_CATIMfgFeedAndSpeedTabPage(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
virtual HRESULT IsFeedRateTabPageAvailable(int &oIsAvailable) ; \


#define ENVTIEdefine_CATIMfgFeedAndSpeedTabPage(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
HRESULT  ENVTIEName::IsFeedRateTabPageAvailable(int &oIsAvailable)  \
{ \
return (ENVTIECALL(CATIMfgFeedAndSpeedTabPage,ENVTIETypeLetter,ENVTIELetter)IsFeedRateTabPageAvailable(oIsAvailable)); \
} \


/* Name of the TIE class */
#define class_TIE_CATIMfgFeedAndSpeedTabPage(classe)    TIECATIMfgFeedAndSpeedTabPage##classe


/* Common methods inside a TIE */
#define common_TIE_CATIMfgFeedAndSpeedTabPage(classe) \
 \
 \
/* Static initialization */ \
CATDefineCommonTIEMembers(CATIMfgFeedAndSpeedTabPage, classe) \
 \
 \
CATImplementTIEMethods(CATIMfgFeedAndSpeedTabPage, classe) \
CATImplementIUnknownMethodsForCATBaseUnknownTIE(CATIMfgFeedAndSpeedTabPage, classe, 1) \
CATImplementIDispatchMethodsForCATBaseUnknownTIE(CATIMfgFeedAndSpeedTabPage, classe) \
CATImplementCATBaseUnknownMethodsForTIE(CATIMfgFeedAndSpeedTabPage, classe) \
 \
HRESULT  TIECATIMfgFeedAndSpeedTabPage##classe::IsFeedRateTabPageAvailable(int &oIsAvailable)  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->IsFeedRateTabPageAvailable(oIsAvailable)); \
} \



/* Macro used to link an implementation with an interface */
#define TIE_CATIMfgFeedAndSpeedTabPage(classe) \
 \
 \
declare_TIE_CATIMfgFeedAndSpeedTabPage(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIMfgFeedAndSpeedTabPage##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIMfgFeedAndSpeedTabPage,"CATIMfgFeedAndSpeedTabPage",CATIMfgFeedAndSpeedTabPage::MetaObject(),classe::MetaObject(),TIE); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIMfgFeedAndSpeedTabPage(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIECreation(CATIMfgFeedAndSpeedTabPage, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIMfgFeedAndSpeedTabPage##classe(classe::MetaObject(),CATIMfgFeedAndSpeedTabPage::MetaObject(),(void *)CreateTIECATIMfgFeedAndSpeedTabPage##classe)



/* Macro used to link an implementation with an interface */
/* This TIE is chained on the implementation object */
#define TIEchain_CATIMfgFeedAndSpeedTabPage(classe) \
 \
 \
declare_TIE_CATIMfgFeedAndSpeedTabPage(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIMfgFeedAndSpeedTabPage##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIMfgFeedAndSpeedTabPage,"CATIMfgFeedAndSpeedTabPage",CATIMfgFeedAndSpeedTabPage::MetaObject(),classe::MetaObject(),TIEchain); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIMfgFeedAndSpeedTabPage(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIEchainCreation(CATIMfgFeedAndSpeedTabPage, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIMfgFeedAndSpeedTabPage##classe(classe::MetaObject(),CATIMfgFeedAndSpeedTabPage::MetaObject(),(void *)CreateTIECATIMfgFeedAndSpeedTabPage##classe)


/* Macro to switch between BOA and TIE at build time */ 
#ifdef CATSYS_BOA_IS_TIE
#define BOA_CATIMfgFeedAndSpeedTabPage(classe) TIE_CATIMfgFeedAndSpeedTabPage(classe)
#else
#define BOA_CATIMfgFeedAndSpeedTabPage(classe) CATImplementBOA(CATIMfgFeedAndSpeedTabPage, classe)
#endif

#endif
