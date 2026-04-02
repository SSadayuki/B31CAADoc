#ifndef __TIE_CATIContextualMenu
#define __TIE_CATIContextualMenu

#include <string.h>
#include "CATBaseUnknown.h"
#include "CATMetaClass.h"
#include "CATMacForTie.h"
#include "CATIContextualMenu.h"
#include "JS0DSPA.h"


#ifdef _WINDOWS_SOURCE
#define Exported __declspec(dllexport)
#define Imported __declspec(dllimport)
#else
#define Exported 
#define Imported 
#endif


/* To link an implementation with the interface CATIContextualMenu */
#define declare_TIE_CATIContextualMenu(classe) \
 \
 \
class TIECATIContextualMenu##classe : public CATIContextualMenu \
{ \
   private: \
      CATDeclareCommonTIEMembers \
   public: \
      CATDeclareTIEMethods(CATIContextualMenu, classe) \
      CATDeclareIUnknownMethodsForCATBaseUnknownTIE \
      CATDeclareIDispatchMethodsForCATBaseUnknownTIE \
      CATDeclareCATBaseUnknownMethodsForTIE \
      virtual HRESULT GetContextualMenu(CATCmdContainer *& oMenu) ; \
};



#define ENVTIEdeclare_CATIContextualMenu(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
virtual HRESULT GetContextualMenu(CATCmdContainer *& oMenu) ; \


#define ENVTIEdefine_CATIContextualMenu(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
HRESULT  ENVTIEName::GetContextualMenu(CATCmdContainer *& oMenu)  \
{ \
return (ENVTIECALL(CATIContextualMenu,ENVTIETypeLetter,ENVTIELetter)GetContextualMenu(oMenu)); \
} \


/* Name of the TIE class */
#define class_TIE_CATIContextualMenu(classe)    TIECATIContextualMenu##classe


/* Common methods inside a TIE */
#define common_TIE_CATIContextualMenu(classe) \
 \
 \
/* Static initialization */ \
CATDefineCommonTIEMembers(CATIContextualMenu, classe) \
 \
 \
CATImplementTIEMethods(CATIContextualMenu, classe) \
CATImplementIUnknownMethodsForCATBaseUnknownTIE(CATIContextualMenu, classe, 1) \
CATImplementIDispatchMethodsForCATBaseUnknownTIE(CATIContextualMenu, classe) \
CATImplementCATBaseUnknownMethodsForTIE(CATIContextualMenu, classe) \
 \
HRESULT  TIECATIContextualMenu##classe::GetContextualMenu(CATCmdContainer *& oMenu)  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetContextualMenu(oMenu)); \
} \



/* Macro used to link an implementation with an interface */
#define TIE_CATIContextualMenu(classe) \
 \
 \
declare_TIE_CATIContextualMenu(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIContextualMenu##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIContextualMenu,"CATIContextualMenu",CATIContextualMenu::MetaObject(),classe::MetaObject(),TIE); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIContextualMenu(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIECreation(CATIContextualMenu, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIContextualMenu##classe(classe::MetaObject(),CATIContextualMenu::MetaObject(),(void *)CreateTIECATIContextualMenu##classe)



/* Macro used to link an implementation with an interface */
/* This TIE is chained on the implementation object */
#define TIEchain_CATIContextualMenu(classe) \
 \
 \
declare_TIE_CATIContextualMenu(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIContextualMenu##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIContextualMenu,"CATIContextualMenu",CATIContextualMenu::MetaObject(),classe::MetaObject(),TIEchain); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIContextualMenu(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIEchainCreation(CATIContextualMenu, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIContextualMenu##classe(classe::MetaObject(),CATIContextualMenu::MetaObject(),(void *)CreateTIECATIContextualMenu##classe)


/* Macro to switch between BOA and TIE at build time */ 
#ifdef CATSYS_BOA_IS_TIE
#define BOA_CATIContextualMenu(classe) TIE_CATIContextualMenu(classe)
#else
#define BOA_CATIContextualMenu(classe) CATImplementBOA(CATIContextualMenu, classe)
#endif

#endif
