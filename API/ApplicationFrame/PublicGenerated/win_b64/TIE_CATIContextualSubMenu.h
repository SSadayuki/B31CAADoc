#ifndef __TIE_CATIContextualSubMenu
#define __TIE_CATIContextualSubMenu

#include <string.h>
#include "CATBaseUnknown.h"
#include "CATMetaClass.h"
#include "CATMacForTie.h"
#include "CATIContextualSubMenu.h"
#include "JS0DSPA.h"


#ifdef _WINDOWS_SOURCE
#define Exported __declspec(dllexport)
#define Imported __declspec(dllimport)
#else
#define Exported 
#define Imported 
#endif


/* To link an implementation with the interface CATIContextualSubMenu */
#define declare_TIE_CATIContextualSubMenu(classe) \
 \
 \
class TIECATIContextualSubMenu##classe : public CATIContextualSubMenu \
{ \
   private: \
      CATDeclareCommonTIEMembers \
   public: \
      CATDeclareTIEMethods(CATIContextualSubMenu, classe) \
      CATDeclareIUnknownMethodsForCATBaseUnknownTIE \
      CATDeclareIDispatchMethodsForCATBaseUnknownTIE \
      CATDeclareCATBaseUnknownMethodsForTIE \
      virtual CATCmdAccess * GetContextualSubMenu () ; \
};



#define ENVTIEdeclare_CATIContextualSubMenu(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
virtual CATCmdAccess * GetContextualSubMenu () ; \


#define ENVTIEdefine_CATIContextualSubMenu(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
CATCmdAccess *  ENVTIEName::GetContextualSubMenu ()  \
{ \
return (ENVTIECALL(CATIContextualSubMenu,ENVTIETypeLetter,ENVTIELetter)GetContextualSubMenu ()); \
} \


/* Name of the TIE class */
#define class_TIE_CATIContextualSubMenu(classe)    TIECATIContextualSubMenu##classe


/* Common methods inside a TIE */
#define common_TIE_CATIContextualSubMenu(classe) \
 \
 \
/* Static initialization */ \
CATDefineCommonTIEMembers(CATIContextualSubMenu, classe) \
 \
 \
CATImplementTIEMethods(CATIContextualSubMenu, classe) \
CATImplementIUnknownMethodsForCATBaseUnknownTIE(CATIContextualSubMenu, classe, 1) \
CATImplementIDispatchMethodsForCATBaseUnknownTIE(CATIContextualSubMenu, classe) \
CATImplementCATBaseUnknownMethodsForTIE(CATIContextualSubMenu, classe) \
 \
CATCmdAccess *  TIECATIContextualSubMenu##classe::GetContextualSubMenu ()  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetContextualSubMenu ()); \
} \



/* Macro used to link an implementation with an interface */
#define TIE_CATIContextualSubMenu(classe) \
 \
 \
declare_TIE_CATIContextualSubMenu(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIContextualSubMenu##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIContextualSubMenu,"CATIContextualSubMenu",CATIContextualSubMenu::MetaObject(),classe::MetaObject(),TIE); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIContextualSubMenu(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIECreation(CATIContextualSubMenu, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIContextualSubMenu##classe(classe::MetaObject(),CATIContextualSubMenu::MetaObject(),(void *)CreateTIECATIContextualSubMenu##classe)



/* Macro used to link an implementation with an interface */
/* This TIE is chained on the implementation object */
#define TIEchain_CATIContextualSubMenu(classe) \
 \
 \
declare_TIE_CATIContextualSubMenu(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIContextualSubMenu##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIContextualSubMenu,"CATIContextualSubMenu",CATIContextualSubMenu::MetaObject(),classe::MetaObject(),TIEchain); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIContextualSubMenu(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIEchainCreation(CATIContextualSubMenu, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIContextualSubMenu##classe(classe::MetaObject(),CATIContextualSubMenu::MetaObject(),(void *)CreateTIECATIContextualSubMenu##classe)


/* Macro to switch between BOA and TIE at build time */ 
#ifdef CATSYS_BOA_IS_TIE
#define BOA_CATIContextualSubMenu(classe) TIE_CATIContextualSubMenu(classe)
#else
#define BOA_CATIContextualSubMenu(classe) CATImplementBOA(CATIContextualSubMenu, classe)
#endif

#endif
