#ifndef __TIE_CATIAGenerativeViewLinks
#define __TIE_CATIAGenerativeViewLinks

#include <string.h>
#include "CATBaseUnknown.h"
#include "CATMetaClass.h"
#include "CATMacForTie.h"
#include "CATExitJournal.h"
#include "CATIAGenerativeViewLinks.h"
#include "JS0DSPA.h"


#ifdef _WINDOWS_SOURCE
#define Exported __declspec(dllexport)
#define Imported __declspec(dllimport)
#else
#define Exported 
#define Imported 
#endif


/* To link an implementation with the interface CATIAGenerativeViewLinks */
#define declare_TIE_CATIAGenerativeViewLinks(classe) \
 \
 \
class TIECATIAGenerativeViewLinks##classe : public CATIAGenerativeViewLinks \
{ \
   private: \
      CATDeclareCommonTIEMembers \
   public: \
      CATDeclareTIEMethods(CATIAGenerativeViewLinks, classe) \
      CATDeclareIUnknownMethodsForCATBaseUnknownTIE \
      CATDeclareIDispatchMethodsForCATBaseUnknownTIE \
      CATDeclareCATBaseUnknownMethodsForTIE \
      virtual HRESULT __stdcall AddLink(CATIABase * iLink); \
      virtual HRESULT __stdcall FirstLink(CATIABase *& oLink); \
      virtual HRESULT __stdcall NextLink(CATIABase *& oLink); \
      virtual HRESULT __stdcall RemoveAllLinks(); \
      virtual HRESULT __stdcall CopyLinksTo(CATIAGenerativeViewLinks * iLinks); \
};



#define ENVTIEdeclare_CATIAGenerativeViewLinks(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
virtual HRESULT __stdcall AddLink(CATIABase * iLink); \
virtual HRESULT __stdcall FirstLink(CATIABase *& oLink); \
virtual HRESULT __stdcall NextLink(CATIABase *& oLink); \
virtual HRESULT __stdcall RemoveAllLinks(); \
virtual HRESULT __stdcall CopyLinksTo(CATIAGenerativeViewLinks * iLinks); \


#define ENVTIEdefine_CATIAGenerativeViewLinks(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
HRESULT __stdcall  ENVTIEName::AddLink(CATIABase * iLink) \
{ \
return (ENVTIECALL(CATIAGenerativeViewLinks,ENVTIETypeLetter,ENVTIELetter)AddLink(iLink)); \
} \
HRESULT __stdcall  ENVTIEName::FirstLink(CATIABase *& oLink) \
{ \
return (ENVTIECALL(CATIAGenerativeViewLinks,ENVTIETypeLetter,ENVTIELetter)FirstLink(oLink)); \
} \
HRESULT __stdcall  ENVTIEName::NextLink(CATIABase *& oLink) \
{ \
return (ENVTIECALL(CATIAGenerativeViewLinks,ENVTIETypeLetter,ENVTIELetter)NextLink(oLink)); \
} \
HRESULT __stdcall  ENVTIEName::RemoveAllLinks() \
{ \
return (ENVTIECALL(CATIAGenerativeViewLinks,ENVTIETypeLetter,ENVTIELetter)RemoveAllLinks()); \
} \
HRESULT __stdcall  ENVTIEName::CopyLinksTo(CATIAGenerativeViewLinks * iLinks) \
{ \
return (ENVTIECALL(CATIAGenerativeViewLinks,ENVTIETypeLetter,ENVTIELetter)CopyLinksTo(iLinks)); \
} \


/* Name of the TIE class */
#define class_TIE_CATIAGenerativeViewLinks(classe)    TIECATIAGenerativeViewLinks##classe


/* Common methods inside a TIE */
#define common_TIE_CATIAGenerativeViewLinks(classe) \
 \
 \
/* Static initialization */ \
CATDefineCommonTIEMembers(CATIAGenerativeViewLinks, classe) \
 \
 \
CATImplementTIEMethods(CATIAGenerativeViewLinks, classe) \
CATImplementIUnknownMethodsForCATBaseUnknownTIE(CATIAGenerativeViewLinks, classe, 2) \
CATImplementIDispatchMethodsForCATBaseUnknownTIE(CATIAGenerativeViewLinks, classe) \
CATImplementCATBaseUnknownMethodsForTIE(CATIAGenerativeViewLinks, classe) \
 \
HRESULT __stdcall  TIECATIAGenerativeViewLinks##classe::AddLink(CATIABase * iLink) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,1,&_Trac2,&iLink); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->AddLink(iLink); \
   ExitAfterCall(this,1,_Trac2,&_ret_arg,&iLink); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAGenerativeViewLinks##classe::FirstLink(CATIABase *& oLink) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,2,&_Trac2,&oLink); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->FirstLink(oLink); \
   ExitAfterCall(this,2,_Trac2,&_ret_arg,&oLink); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAGenerativeViewLinks##classe::NextLink(CATIABase *& oLink) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,3,&_Trac2,&oLink); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->NextLink(oLink); \
   ExitAfterCall(this,3,_Trac2,&_ret_arg,&oLink); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAGenerativeViewLinks##classe::RemoveAllLinks() \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,4,&_Trac2); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->RemoveAllLinks(); \
   ExitAfterCall(this,4,_Trac2,&_ret_arg); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAGenerativeViewLinks##classe::CopyLinksTo(CATIAGenerativeViewLinks * iLinks) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,5,&_Trac2,&iLinks); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->CopyLinksTo(iLinks); \
   ExitAfterCall(this,5,_Trac2,&_ret_arg,&iLinks); \
   return(_ret_arg); \
} \



/* Macro used to link an implementation with an interface */
#define TIE_CATIAGenerativeViewLinks(classe) \
 \
 \
declare_TIE_CATIAGenerativeViewLinks(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIAGenerativeViewLinks##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIAGenerativeViewLinks,"CATIAGenerativeViewLinks",CATIAGenerativeViewLinks::MetaObject(),classe::MetaObject(),TIE); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIAGenerativeViewLinks(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIECreation(CATIAGenerativeViewLinks, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIAGenerativeViewLinks##classe(classe::MetaObject(),CATIAGenerativeViewLinks::MetaObject(),(void *)CreateTIECATIAGenerativeViewLinks##classe)



/* Macro used to link an implementation with an interface */
/* This TIE is chained on the implementation object */
#define TIEchain_CATIAGenerativeViewLinks(classe) \
 \
 \
declare_TIE_CATIAGenerativeViewLinks(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIAGenerativeViewLinks##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIAGenerativeViewLinks,"CATIAGenerativeViewLinks",CATIAGenerativeViewLinks::MetaObject(),classe::MetaObject(),TIEchain); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIAGenerativeViewLinks(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIEchainCreation(CATIAGenerativeViewLinks, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIAGenerativeViewLinks##classe(classe::MetaObject(),CATIAGenerativeViewLinks::MetaObject(),(void *)CreateTIECATIAGenerativeViewLinks##classe)


/* Macro to switch between BOA and TIE at build time */ 
#ifdef CATSYS_BOA_IS_TIE
#define BOA_CATIAGenerativeViewLinks(classe) TIE_CATIAGenerativeViewLinks(classe)
#else
#define BOA_CATIAGenerativeViewLinks(classe) CATImplementBOA(CATIAGenerativeViewLinks, classe)
#endif

#endif
