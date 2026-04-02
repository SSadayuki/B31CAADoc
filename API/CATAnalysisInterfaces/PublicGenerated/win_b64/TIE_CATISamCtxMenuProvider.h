#ifndef __TIE_CATISamCtxMenuProvider
#define __TIE_CATISamCtxMenuProvider

#include <string.h>
#include "CATBaseUnknown.h"
#include "CATMetaClass.h"
#include "CATMacForTie.h"
#include "CATISamCtxMenuProvider.h"
#include "JS0DSPA.h"


#ifdef _WINDOWS_SOURCE
#define Exported __declspec(dllexport)
#define Imported __declspec(dllimport)
#else
#define Exported 
#define Imported 
#endif


/* To link an implementation with the interface CATISamCtxMenuProvider */
#define declare_TIE_CATISamCtxMenuProvider(classe) \
 \
 \
class TIECATISamCtxMenuProvider##classe : public CATISamCtxMenuProvider \
{ \
   private: \
      CATDeclareCommonTIEMembers \
   public: \
      CATDeclareTIEMethods(CATISamCtxMenuProvider, classe) \
      CATDeclareIUnknownMethodsForCATBaseUnknownTIE \
      CATDeclareIDispatchMethodsForCATBaseUnknownTIE \
      CATDeclareCATBaseUnknownMethodsForTIE \
      virtual HRESULT GetContextualMenu(CATBaseUnknown * iObj, CATCmdContainer* &ioCtxMenu) ; \
      virtual CATBoolean IsPermanent() ; \
};



#define ENVTIEdeclare_CATISamCtxMenuProvider(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
virtual HRESULT GetContextualMenu(CATBaseUnknown * iObj, CATCmdContainer* &ioCtxMenu) ; \
virtual CATBoolean IsPermanent() ; \


#define ENVTIEdefine_CATISamCtxMenuProvider(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
HRESULT  ENVTIEName::GetContextualMenu(CATBaseUnknown * iObj, CATCmdContainer* &ioCtxMenu)  \
{ \
return (ENVTIECALL(CATISamCtxMenuProvider,ENVTIETypeLetter,ENVTIELetter)GetContextualMenu(iObj,ioCtxMenu)); \
} \
CATBoolean  ENVTIEName::IsPermanent()  \
{ \
return (ENVTIECALL(CATISamCtxMenuProvider,ENVTIETypeLetter,ENVTIELetter)IsPermanent()); \
} \


/* Name of the TIE class */
#define class_TIE_CATISamCtxMenuProvider(classe)    TIECATISamCtxMenuProvider##classe


/* Common methods inside a TIE */
#define common_TIE_CATISamCtxMenuProvider(classe) \
 \
 \
/* Static initialization */ \
CATDefineCommonTIEMembers(CATISamCtxMenuProvider, classe) \
 \
 \
CATImplementTIEMethods(CATISamCtxMenuProvider, classe) \
CATImplementIUnknownMethodsForCATBaseUnknownTIE(CATISamCtxMenuProvider, classe, 1) \
CATImplementIDispatchMethodsForCATBaseUnknownTIE(CATISamCtxMenuProvider, classe) \
CATImplementCATBaseUnknownMethodsForTIE(CATISamCtxMenuProvider, classe) \
 \
HRESULT  TIECATISamCtxMenuProvider##classe::GetContextualMenu(CATBaseUnknown * iObj, CATCmdContainer* &ioCtxMenu)  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetContextualMenu(iObj,ioCtxMenu)); \
} \
CATBoolean  TIECATISamCtxMenuProvider##classe::IsPermanent()  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->IsPermanent()); \
} \



/* Macro used to link an implementation with an interface */
#define TIE_CATISamCtxMenuProvider(classe) \
 \
 \
declare_TIE_CATISamCtxMenuProvider(classe) \
 \
 \
CATMetaClass * __stdcall TIECATISamCtxMenuProvider##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATISamCtxMenuProvider,"CATISamCtxMenuProvider",CATISamCtxMenuProvider::MetaObject(),classe::MetaObject(),TIE); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATISamCtxMenuProvider(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIECreation(CATISamCtxMenuProvider, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATISamCtxMenuProvider##classe(classe::MetaObject(),CATISamCtxMenuProvider::MetaObject(),(void *)CreateTIECATISamCtxMenuProvider##classe)



/* Macro used to link an implementation with an interface */
/* This TIE is chained on the implementation object */
#define TIEchain_CATISamCtxMenuProvider(classe) \
 \
 \
declare_TIE_CATISamCtxMenuProvider(classe) \
 \
 \
CATMetaClass * __stdcall TIECATISamCtxMenuProvider##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATISamCtxMenuProvider,"CATISamCtxMenuProvider",CATISamCtxMenuProvider::MetaObject(),classe::MetaObject(),TIEchain); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATISamCtxMenuProvider(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIEchainCreation(CATISamCtxMenuProvider, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATISamCtxMenuProvider##classe(classe::MetaObject(),CATISamCtxMenuProvider::MetaObject(),(void *)CreateTIECATISamCtxMenuProvider##classe)


/* Macro to switch between BOA and TIE at build time */ 
#ifdef CATSYS_BOA_IS_TIE
#define BOA_CATISamCtxMenuProvider(classe) TIE_CATISamCtxMenuProvider(classe)
#else
#define BOA_CATISamCtxMenuProvider(classe) CATImplementBOA(CATISamCtxMenuProvider, classe)
#endif

#endif
