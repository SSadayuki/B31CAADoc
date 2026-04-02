#ifndef __TIE_CATIVpmObjectLock
#define __TIE_CATIVpmObjectLock

#include <string.h>
#include "CATBaseUnknown.h"
#include "CATMetaClass.h"
#include "CATMacForTie.h"
#include "CATIVpmObjectLock.h"
#include "JS0DSPA.h"


#ifdef _WINDOWS_SOURCE
#define Exported __declspec(dllexport)
#define Imported __declspec(dllimport)
#else
#define Exported 
#define Imported 
#endif


/* To link an implementation with the interface CATIVpmObjectLock */
#define declare_TIE_CATIVpmObjectLock(classe) \
 \
 \
class TIECATIVpmObjectLock##classe : public CATIVpmObjectLock \
{ \
   private: \
      CATDeclareCommonTIEMembers \
   public: \
      CATDeclareTIEMethods(CATIVpmObjectLock, classe) \
      CATDeclareIUnknownMethodsForCATBaseUnknownTIE \
      CATDeclareIDispatchMethodsForCATBaseUnknownTIE \
      CATDeclareCATBaseUnknownMethodsForTIE \
      virtual HRESULT GetLockOwner (CATUnicodeString& oOwner )  ; \
      virtual HRESULT SetLock () ; \
      virtual HRESULT UnsetLock () ; \
      virtual HRESULT OverRideLock () ; \
      virtual HRESULT IsLocked ( ) ; \
};



#define ENVTIEdeclare_CATIVpmObjectLock(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
virtual HRESULT GetLockOwner (CATUnicodeString& oOwner )  ; \
virtual HRESULT SetLock () ; \
virtual HRESULT UnsetLock () ; \
virtual HRESULT OverRideLock () ; \
virtual HRESULT IsLocked ( ) ; \


#define ENVTIEdefine_CATIVpmObjectLock(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
HRESULT  ENVTIEName::GetLockOwner (CATUnicodeString& oOwner )   \
{ \
return (ENVTIECALL(CATIVpmObjectLock,ENVTIETypeLetter,ENVTIELetter)GetLockOwner (oOwner )); \
} \
HRESULT  ENVTIEName::SetLock ()  \
{ \
return (ENVTIECALL(CATIVpmObjectLock,ENVTIETypeLetter,ENVTIELetter)SetLock ()); \
} \
HRESULT  ENVTIEName::UnsetLock ()  \
{ \
return (ENVTIECALL(CATIVpmObjectLock,ENVTIETypeLetter,ENVTIELetter)UnsetLock ()); \
} \
HRESULT  ENVTIEName::OverRideLock ()  \
{ \
return (ENVTIECALL(CATIVpmObjectLock,ENVTIETypeLetter,ENVTIELetter)OverRideLock ()); \
} \
HRESULT  ENVTIEName::IsLocked ( )  \
{ \
return (ENVTIECALL(CATIVpmObjectLock,ENVTIETypeLetter,ENVTIELetter)IsLocked ()); \
} \


/* Name of the TIE class */
#define class_TIE_CATIVpmObjectLock(classe)    TIECATIVpmObjectLock##classe


/* Common methods inside a TIE */
#define common_TIE_CATIVpmObjectLock(classe) \
 \
 \
/* Static initialization */ \
CATDefineCommonTIEMembers(CATIVpmObjectLock, classe) \
 \
 \
CATImplementTIEMethods(CATIVpmObjectLock, classe) \
CATImplementIUnknownMethodsForCATBaseUnknownTIE(CATIVpmObjectLock, classe, 1) \
CATImplementIDispatchMethodsForCATBaseUnknownTIE(CATIVpmObjectLock, classe) \
CATImplementCATBaseUnknownMethodsForTIE(CATIVpmObjectLock, classe) \
 \
HRESULT  TIECATIVpmObjectLock##classe::GetLockOwner (CATUnicodeString& oOwner )   \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetLockOwner (oOwner )); \
} \
HRESULT  TIECATIVpmObjectLock##classe::SetLock ()  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetLock ()); \
} \
HRESULT  TIECATIVpmObjectLock##classe::UnsetLock ()  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->UnsetLock ()); \
} \
HRESULT  TIECATIVpmObjectLock##classe::OverRideLock ()  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->OverRideLock ()); \
} \
HRESULT  TIECATIVpmObjectLock##classe::IsLocked ( )  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->IsLocked ()); \
} \



/* Macro used to link an implementation with an interface */
#define TIE_CATIVpmObjectLock(classe) \
 \
 \
declare_TIE_CATIVpmObjectLock(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIVpmObjectLock##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIVpmObjectLock,"CATIVpmObjectLock",CATIVpmObjectLock::MetaObject(),classe::MetaObject(),TIE); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIVpmObjectLock(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIECreation(CATIVpmObjectLock, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIVpmObjectLock##classe(classe::MetaObject(),CATIVpmObjectLock::MetaObject(),(void *)CreateTIECATIVpmObjectLock##classe)



/* Macro used to link an implementation with an interface */
/* This TIE is chained on the implementation object */
#define TIEchain_CATIVpmObjectLock(classe) \
 \
 \
declare_TIE_CATIVpmObjectLock(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIVpmObjectLock##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIVpmObjectLock,"CATIVpmObjectLock",CATIVpmObjectLock::MetaObject(),classe::MetaObject(),TIEchain); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIVpmObjectLock(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIEchainCreation(CATIVpmObjectLock, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIVpmObjectLock##classe(classe::MetaObject(),CATIVpmObjectLock::MetaObject(),(void *)CreateTIECATIVpmObjectLock##classe)


/* Macro to switch between BOA and TIE at build time */ 
#ifdef CATSYS_BOA_IS_TIE
#define BOA_CATIVpmObjectLock(classe) TIE_CATIVpmObjectLock(classe)
#else
#define BOA_CATIVpmObjectLock(classe) CATImplementBOA(CATIVpmObjectLock, classe)
#endif

#endif
