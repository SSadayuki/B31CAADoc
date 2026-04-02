#ifndef __TIE_CATISchAppSourcePostPaste
#define __TIE_CATISchAppSourcePostPaste

#include <string.h>
#include "CATBaseUnknown.h"
#include "CATMetaClass.h"
#include "CATMacForTie.h"
#include "CATISchAppSourcePostPaste.h"
#include "JS0DSPA.h"


#ifdef _WINDOWS_SOURCE
#define Exported __declspec(dllexport)
#define Imported __declspec(dllimport)
#else
#define Exported 
#define Imported 
#endif


/* To link an implementation with the interface CATISchAppSourcePostPaste */
#define declare_TIE_CATISchAppSourcePostPaste(classe) \
 \
 \
class TIECATISchAppSourcePostPaste##classe : public CATISchAppSourcePostPaste \
{ \
   private: \
      CATDeclareCommonTIEMembers \
      CATDeclareNotCATBaseUnknownTIEMembers \
   public: \
      CATDeclareTIEMethods(CATISchAppSourcePostPaste, classe) \
      CATDeclareIUnknownMethodsForNotCATBaseUnknownTIE \
      CATDeclareCATBaseUnknownMethodsForTIE \
      virtual HRESULT AppListSourceObjectGroups (CATIUnknownList **oListGroup) ; \
};



#define ENVTIEdeclare_CATISchAppSourcePostPaste(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
virtual HRESULT AppListSourceObjectGroups (CATIUnknownList **oListGroup) ; \


#define ENVTIEdefine_CATISchAppSourcePostPaste(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
HRESULT  ENVTIEName::AppListSourceObjectGroups (CATIUnknownList **oListGroup)  \
{ \
return (ENVTIECALL(CATISchAppSourcePostPaste,ENVTIETypeLetter,ENVTIELetter)AppListSourceObjectGroups (oListGroup)); \
} \


/* Name of the TIE class */
#define class_TIE_CATISchAppSourcePostPaste(classe)    TIECATISchAppSourcePostPaste##classe


/* Common methods inside a TIE */
#define common_TIE_CATISchAppSourcePostPaste(classe) \
 \
 \
/* Static initialization */ \
CATDefineCommonTIEMembers(CATISchAppSourcePostPaste, classe) \
 \
 \
CATImplementNotCATBaseUnknownTIEMethods(CATISchAppSourcePostPaste, classe) \
CATImplementIUnknownMethodsForNotCATBaseUnknownTIE(CATISchAppSourcePostPaste, classe, 0) \
CATImplementCATBaseUnknownMethodsForTIE(CATISchAppSourcePostPaste, classe) \
 \
HRESULT  TIECATISchAppSourcePostPaste##classe::AppListSourceObjectGroups (CATIUnknownList **oListGroup)  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->AppListSourceObjectGroups (oListGroup)); \
} \



/* Macro used to link an implementation with an interface */
#define TIE_CATISchAppSourcePostPaste(classe) \
 \
 \
declare_TIE_CATISchAppSourcePostPaste(classe) \
 \
 \
CATMetaClass * __stdcall TIECATISchAppSourcePostPaste##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATISchAppSourcePostPaste,"CATISchAppSourcePostPaste",NULL,classe::MetaObject(),TIE); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATISchAppSourcePostPaste(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIECreation(CATISchAppSourcePostPaste, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATISchAppSourcePostPaste##classe(classe::MetaObject(),TIECATISchAppSourcePostPaste##classe::MetaObject(),(void *)CreateTIECATISchAppSourcePostPaste##classe)



/* Macro used to link an implementation with an interface */
/* This TIE is chained on the implementation object */
#define TIEchain_CATISchAppSourcePostPaste(classe) \
 \
 \
declare_TIE_CATISchAppSourcePostPaste(classe) \
 \
 \
CATMetaClass * __stdcall TIECATISchAppSourcePostPaste##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATISchAppSourcePostPaste,"CATISchAppSourcePostPaste",NULL,classe::MetaObject(),TIEchain); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATISchAppSourcePostPaste(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIEchainCreation(CATISchAppSourcePostPaste, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATISchAppSourcePostPaste##classe(classe::MetaObject(),TIECATISchAppSourcePostPaste##classe::MetaObject(),(void *)CreateTIECATISchAppSourcePostPaste##classe)


/* Macro to switch between BOA and TIE at build time */ 
#ifdef CATSYS_BOA_IS_TIE
#define BOA_CATISchAppSourcePostPaste(classe) TIE_CATISchAppSourcePostPaste(classe)
#else
#define BOA_CATISchAppSourcePostPaste(classe) CATImplementBOA(CATISchAppSourcePostPaste, classe)
#endif

#endif
