#ifndef __TIE_CATIMfgGeometryTabPage
#define __TIE_CATIMfgGeometryTabPage

#include <string.h>
#include "CATBaseUnknown.h"
#include "CATMetaClass.h"
#include "CATMacForTie.h"
#include "CATIMfgGeometryTabPage.h"
#include "JS0DSPA.h"


#ifdef _WINDOWS_SOURCE
#define Exported __declspec(dllexport)
#define Imported __declspec(dllimport)
#else
#define Exported 
#define Imported 
#endif


/* To link an implementation with the interface CATIMfgGeometryTabPage */
#define declare_TIE_CATIMfgGeometryTabPage(classe) \
 \
 \
class TIECATIMfgGeometryTabPage##classe : public CATIMfgGeometryTabPage \
{ \
   private: \
      CATDeclareCommonTIEMembers \
   public: \
      CATDeclareTIEMethods(CATIMfgGeometryTabPage, classe) \
      CATDeclareIUnknownMethodsForCATBaseUnknownTIE \
      CATDeclareIDispatchMethodsForCATBaseUnknownTIE \
      CATDeclareCATBaseUnknownMethodsForTIE \
      virtual HRESULT IsGeometryTabPageAvailable(int &oIsAvailable) ; \
};



#define ENVTIEdeclare_CATIMfgGeometryTabPage(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
virtual HRESULT IsGeometryTabPageAvailable(int &oIsAvailable) ; \


#define ENVTIEdefine_CATIMfgGeometryTabPage(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
HRESULT  ENVTIEName::IsGeometryTabPageAvailable(int &oIsAvailable)  \
{ \
return (ENVTIECALL(CATIMfgGeometryTabPage,ENVTIETypeLetter,ENVTIELetter)IsGeometryTabPageAvailable(oIsAvailable)); \
} \


/* Name of the TIE class */
#define class_TIE_CATIMfgGeometryTabPage(classe)    TIECATIMfgGeometryTabPage##classe


/* Common methods inside a TIE */
#define common_TIE_CATIMfgGeometryTabPage(classe) \
 \
 \
/* Static initialization */ \
CATDefineCommonTIEMembers(CATIMfgGeometryTabPage, classe) \
 \
 \
CATImplementTIEMethods(CATIMfgGeometryTabPage, classe) \
CATImplementIUnknownMethodsForCATBaseUnknownTIE(CATIMfgGeometryTabPage, classe, 1) \
CATImplementIDispatchMethodsForCATBaseUnknownTIE(CATIMfgGeometryTabPage, classe) \
CATImplementCATBaseUnknownMethodsForTIE(CATIMfgGeometryTabPage, classe) \
 \
HRESULT  TIECATIMfgGeometryTabPage##classe::IsGeometryTabPageAvailable(int &oIsAvailable)  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->IsGeometryTabPageAvailable(oIsAvailable)); \
} \



/* Macro used to link an implementation with an interface */
#define TIE_CATIMfgGeometryTabPage(classe) \
 \
 \
declare_TIE_CATIMfgGeometryTabPage(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIMfgGeometryTabPage##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIMfgGeometryTabPage,"CATIMfgGeometryTabPage",CATIMfgGeometryTabPage::MetaObject(),classe::MetaObject(),TIE); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIMfgGeometryTabPage(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIECreation(CATIMfgGeometryTabPage, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIMfgGeometryTabPage##classe(classe::MetaObject(),CATIMfgGeometryTabPage::MetaObject(),(void *)CreateTIECATIMfgGeometryTabPage##classe)



/* Macro used to link an implementation with an interface */
/* This TIE is chained on the implementation object */
#define TIEchain_CATIMfgGeometryTabPage(classe) \
 \
 \
declare_TIE_CATIMfgGeometryTabPage(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIMfgGeometryTabPage##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIMfgGeometryTabPage,"CATIMfgGeometryTabPage",CATIMfgGeometryTabPage::MetaObject(),classe::MetaObject(),TIEchain); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIMfgGeometryTabPage(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIEchainCreation(CATIMfgGeometryTabPage, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIMfgGeometryTabPage##classe(classe::MetaObject(),CATIMfgGeometryTabPage::MetaObject(),(void *)CreateTIECATIMfgGeometryTabPage##classe)


/* Macro to switch between BOA and TIE at build time */ 
#ifdef CATSYS_BOA_IS_TIE
#define BOA_CATIMfgGeometryTabPage(classe) TIE_CATIMfgGeometryTabPage(classe)
#else
#define BOA_CATIMfgGeometryTabPage(classe) CATImplementBOA(CATIMfgGeometryTabPage, classe)
#endif

#endif
