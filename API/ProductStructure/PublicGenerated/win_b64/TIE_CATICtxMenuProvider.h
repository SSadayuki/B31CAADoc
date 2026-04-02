#ifndef __TIE_CATICtxMenuProvider
#define __TIE_CATICtxMenuProvider

#include <string.h>
#include "CATBaseUnknown.h"
#include "CATMetaClass.h"
#include "CATMacForTie.h"
#include "CATICtxMenuProvider.h"
#include "JS0DSPA.h"


#ifdef _WINDOWS_SOURCE
#define Exported __declspec(dllexport)
#define Imported __declspec(dllimport)
#else
#define Exported 
#define Imported 
#endif


/* To link an implementation with the interface CATICtxMenuProvider */
#define declare_TIE_CATICtxMenuProvider(classe) \
 \
 \
class TIECATICtxMenuProvider##classe : public CATICtxMenuProvider \
{ \
   private: \
      CATDeclareCommonTIEMembers \
   public: \
      CATDeclareTIEMethods(CATICtxMenuProvider, classe) \
      CATDeclareIUnknownMethodsForCATBaseUnknownTIE \
      CATDeclareIDispatchMethodsForCATBaseUnknownTIE \
      CATDeclareCATBaseUnknownMethodsForTIE \
      virtual HRESULT GetContextualMenu(CATBaseUnknown * iObj, CATCmdContainer* oCtxMenu) ; \
};



#define ENVTIEdeclare_CATICtxMenuProvider(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
virtual HRESULT GetContextualMenu(CATBaseUnknown * iObj, CATCmdContainer* oCtxMenu) ; \


#define ENVTIEdefine_CATICtxMenuProvider(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
HRESULT  ENVTIEName::GetContextualMenu(CATBaseUnknown * iObj, CATCmdContainer* oCtxMenu)  \
{ \
return (ENVTIECALL(CATICtxMenuProvider,ENVTIETypeLetter,ENVTIELetter)GetContextualMenu(iObj,oCtxMenu)); \
} \


/* Name of the TIE class */
#define class_TIE_CATICtxMenuProvider(classe)    TIECATICtxMenuProvider##classe


/* Common methods inside a TIE */
#define common_TIE_CATICtxMenuProvider(classe) \
 \
 \
/* Static initialization */ \
CATDefineCommonTIEMembers(CATICtxMenuProvider, classe) \
 \
 \
CATImplementTIEMethods(CATICtxMenuProvider, classe) \
CATImplementIUnknownMethodsForCATBaseUnknownTIE(CATICtxMenuProvider, classe, 1) \
CATImplementIDispatchMethodsForCATBaseUnknownTIE(CATICtxMenuProvider, classe) \
CATImplementCATBaseUnknownMethodsForTIE(CATICtxMenuProvider, classe) \
 \
HRESULT  TIECATICtxMenuProvider##classe::GetContextualMenu(CATBaseUnknown * iObj, CATCmdContainer* oCtxMenu)  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetContextualMenu(iObj,oCtxMenu)); \
} \



/* Macro used to link an implementation with an interface */
#define TIE_CATICtxMenuProvider(classe) \
 \
 \
declare_TIE_CATICtxMenuProvider(classe) \
 \
 \
CATMetaClass * __stdcall TIECATICtxMenuProvider##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATICtxMenuProvider,"CATICtxMenuProvider",CATICtxMenuProvider::MetaObject(),classe::MetaObject(),TIE); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATICtxMenuProvider(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIECreation(CATICtxMenuProvider, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATICtxMenuProvider##classe(classe::MetaObject(),CATICtxMenuProvider::MetaObject(),(void *)CreateTIECATICtxMenuProvider##classe)



/* Macro used to link an implementation with an interface */
/* This TIE is chained on the implementation object */
#define TIEchain_CATICtxMenuProvider(classe) \
 \
 \
declare_TIE_CATICtxMenuProvider(classe) \
 \
 \
CATMetaClass * __stdcall TIECATICtxMenuProvider##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATICtxMenuProvider,"CATICtxMenuProvider",CATICtxMenuProvider::MetaObject(),classe::MetaObject(),TIEchain); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATICtxMenuProvider(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIEchainCreation(CATICtxMenuProvider, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATICtxMenuProvider##classe(classe::MetaObject(),CATICtxMenuProvider::MetaObject(),(void *)CreateTIECATICtxMenuProvider##classe)


/* Macro to switch between BOA and TIE at build time */ 
#ifdef CATSYS_BOA_IS_TIE
#define BOA_CATICtxMenuProvider(classe) TIE_CATICtxMenuProvider(classe)
#else
#define BOA_CATICtxMenuProvider(classe) CATImplementBOA(CATICtxMenuProvider, classe)
#endif

#endif
