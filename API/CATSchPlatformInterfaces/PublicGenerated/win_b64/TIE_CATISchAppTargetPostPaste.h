#ifndef __TIE_CATISchAppTargetPostPaste
#define __TIE_CATISchAppTargetPostPaste

#include <string.h>
#include "CATBaseUnknown.h"
#include "CATMetaClass.h"
#include "CATMacForTie.h"
#include "CATISchAppTargetPostPaste.h"
#include "JS0DSPA.h"


#ifdef _WINDOWS_SOURCE
#define Exported __declspec(dllexport)
#define Imported __declspec(dllimport)
#else
#define Exported 
#define Imported 
#endif


/* To link an implementation with the interface CATISchAppTargetPostPaste */
#define declare_TIE_CATISchAppTargetPostPaste(classe) \
 \
 \
class TIECATISchAppTargetPostPaste##classe : public CATISchAppTargetPostPaste \
{ \
   private: \
      CATDeclareCommonTIEMembers \
      CATDeclareNotCATBaseUnknownTIEMembers \
   public: \
      CATDeclareTIEMethods(CATISchAppTargetPostPaste, classe) \
      CATDeclareIUnknownMethodsForNotCATBaseUnknownTIE \
      CATDeclareCATBaseUnknownMethodsForTIE \
      virtual HRESULT AppCopyGroupAndAddMembers (const CATIUnknownList *iLGroupToCopy) ; \
      virtual HRESULT AppCopyGroupByNameAndAddMembers ( const CATICStringList *iLGroupNameToCopy, const CATICStringList *iLGroupType) ; \
};



#define ENVTIEdeclare_CATISchAppTargetPostPaste(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
virtual HRESULT AppCopyGroupAndAddMembers (const CATIUnknownList *iLGroupToCopy) ; \
virtual HRESULT AppCopyGroupByNameAndAddMembers ( const CATICStringList *iLGroupNameToCopy, const CATICStringList *iLGroupType) ; \


#define ENVTIEdefine_CATISchAppTargetPostPaste(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
HRESULT  ENVTIEName::AppCopyGroupAndAddMembers (const CATIUnknownList *iLGroupToCopy)  \
{ \
return (ENVTIECALL(CATISchAppTargetPostPaste,ENVTIETypeLetter,ENVTIELetter)AppCopyGroupAndAddMembers (iLGroupToCopy)); \
} \
HRESULT  ENVTIEName::AppCopyGroupByNameAndAddMembers ( const CATICStringList *iLGroupNameToCopy, const CATICStringList *iLGroupType)  \
{ \
return (ENVTIECALL(CATISchAppTargetPostPaste,ENVTIETypeLetter,ENVTIELetter)AppCopyGroupByNameAndAddMembers (iLGroupNameToCopy,iLGroupType)); \
} \


/* Name of the TIE class */
#define class_TIE_CATISchAppTargetPostPaste(classe)    TIECATISchAppTargetPostPaste##classe


/* Common methods inside a TIE */
#define common_TIE_CATISchAppTargetPostPaste(classe) \
 \
 \
/* Static initialization */ \
CATDefineCommonTIEMembers(CATISchAppTargetPostPaste, classe) \
 \
 \
CATImplementNotCATBaseUnknownTIEMethods(CATISchAppTargetPostPaste, classe) \
CATImplementIUnknownMethodsForNotCATBaseUnknownTIE(CATISchAppTargetPostPaste, classe, 0) \
CATImplementCATBaseUnknownMethodsForTIE(CATISchAppTargetPostPaste, classe) \
 \
HRESULT  TIECATISchAppTargetPostPaste##classe::AppCopyGroupAndAddMembers (const CATIUnknownList *iLGroupToCopy)  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->AppCopyGroupAndAddMembers (iLGroupToCopy)); \
} \
HRESULT  TIECATISchAppTargetPostPaste##classe::AppCopyGroupByNameAndAddMembers ( const CATICStringList *iLGroupNameToCopy, const CATICStringList *iLGroupType)  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->AppCopyGroupByNameAndAddMembers (iLGroupNameToCopy,iLGroupType)); \
} \



/* Macro used to link an implementation with an interface */
#define TIE_CATISchAppTargetPostPaste(classe) \
 \
 \
declare_TIE_CATISchAppTargetPostPaste(classe) \
 \
 \
CATMetaClass * __stdcall TIECATISchAppTargetPostPaste##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATISchAppTargetPostPaste,"CATISchAppTargetPostPaste",NULL,classe::MetaObject(),TIE); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATISchAppTargetPostPaste(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIECreation(CATISchAppTargetPostPaste, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATISchAppTargetPostPaste##classe(classe::MetaObject(),TIECATISchAppTargetPostPaste##classe::MetaObject(),(void *)CreateTIECATISchAppTargetPostPaste##classe)



/* Macro used to link an implementation with an interface */
/* This TIE is chained on the implementation object */
#define TIEchain_CATISchAppTargetPostPaste(classe) \
 \
 \
declare_TIE_CATISchAppTargetPostPaste(classe) \
 \
 \
CATMetaClass * __stdcall TIECATISchAppTargetPostPaste##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATISchAppTargetPostPaste,"CATISchAppTargetPostPaste",NULL,classe::MetaObject(),TIEchain); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATISchAppTargetPostPaste(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIEchainCreation(CATISchAppTargetPostPaste, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATISchAppTargetPostPaste##classe(classe::MetaObject(),TIECATISchAppTargetPostPaste##classe::MetaObject(),(void *)CreateTIECATISchAppTargetPostPaste##classe)


/* Macro to switch between BOA and TIE at build time */ 
#ifdef CATSYS_BOA_IS_TIE
#define BOA_CATISchAppTargetPostPaste(classe) TIE_CATISchAppTargetPostPaste(classe)
#else
#define BOA_CATISchAppTargetPostPaste(classe) CATImplementBOA(CATISchAppTargetPostPaste, classe)
#endif

#endif
