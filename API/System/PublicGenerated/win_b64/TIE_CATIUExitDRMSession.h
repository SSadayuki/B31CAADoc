#ifndef __TIE_CATIUExitDRMSession
#define __TIE_CATIUExitDRMSession

#include <string.h>
#include "CATBaseUnknown.h"
#include "CATMetaClass.h"
#include "CATMacForTie.h"
#include "CATIUExitDRMSession.h"
#include "JS0DSPA.h"


#ifdef _WINDOWS_SOURCE
#define Exported __declspec(dllexport)
#define Imported __declspec(dllimport)
#else
#define Exported 
#define Imported 
#endif


/* To link an implementation with the interface CATIUExitDRMSession */
#define declare_TIE_CATIUExitDRMSession(classe) \
 \
 \
class TIECATIUExitDRMSession##classe : public CATIUExitDRMSession \
{ \
   private: \
      CATDeclareCommonTIEMembers \
      CATDeclareNotCATBaseUnknownTIEMembers \
   public: \
      CATDeclareTIEMethods(CATIUExitDRMSession, classe) \
      CATDeclareIUnknownMethodsForNotCATBaseUnknownTIE \
      CATDeclareCATBaseUnknownMethodsForTIE \
      virtual HRESULT DRMInitSession(); \
      virtual HRESULT DRMGetPolicy(DWORD iPolicy); \
      virtual HRESULT DRMCloseSession( ); \
      virtual HRESULT DRMGetProviderName(CATUnicodeString &oName); \
};



#define ENVTIEdeclare_CATIUExitDRMSession(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
virtual HRESULT DRMInitSession(); \
virtual HRESULT DRMGetPolicy(DWORD iPolicy); \
virtual HRESULT DRMCloseSession( ); \
virtual HRESULT DRMGetProviderName(CATUnicodeString &oName); \


#define ENVTIEdefine_CATIUExitDRMSession(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
HRESULT  ENVTIEName::DRMInitSession() \
{ \
return (ENVTIECALL(CATIUExitDRMSession,ENVTIETypeLetter,ENVTIELetter)DRMInitSession()); \
} \
HRESULT  ENVTIEName::DRMGetPolicy(DWORD iPolicy) \
{ \
return (ENVTIECALL(CATIUExitDRMSession,ENVTIETypeLetter,ENVTIELetter)DRMGetPolicy(iPolicy)); \
} \
HRESULT  ENVTIEName::DRMCloseSession( ) \
{ \
return (ENVTIECALL(CATIUExitDRMSession,ENVTIETypeLetter,ENVTIELetter)DRMCloseSession()); \
} \
HRESULT  ENVTIEName::DRMGetProviderName(CATUnicodeString &oName) \
{ \
return (ENVTIECALL(CATIUExitDRMSession,ENVTIETypeLetter,ENVTIELetter)DRMGetProviderName(oName)); \
} \


/* Name of the TIE class */
#define class_TIE_CATIUExitDRMSession(classe)    TIECATIUExitDRMSession##classe


/* Common methods inside a TIE */
#define common_TIE_CATIUExitDRMSession(classe) \
 \
 \
/* Static initialization */ \
CATDefineCommonTIEMembers(CATIUExitDRMSession, classe) \
 \
 \
CATImplementNotCATBaseUnknownTIEMethods(CATIUExitDRMSession, classe) \
CATImplementIUnknownMethodsForNotCATBaseUnknownTIE(CATIUExitDRMSession, classe, 0) \
CATImplementCATBaseUnknownMethodsForTIE(CATIUExitDRMSession, classe) \
 \
HRESULT  TIECATIUExitDRMSession##classe::DRMInitSession() \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->DRMInitSession()); \
} \
HRESULT  TIECATIUExitDRMSession##classe::DRMGetPolicy(DWORD iPolicy) \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->DRMGetPolicy(iPolicy)); \
} \
HRESULT  TIECATIUExitDRMSession##classe::DRMCloseSession( ) \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->DRMCloseSession()); \
} \
HRESULT  TIECATIUExitDRMSession##classe::DRMGetProviderName(CATUnicodeString &oName) \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->DRMGetProviderName(oName)); \
} \



/* Macro used to link an implementation with an interface */
#define TIE_CATIUExitDRMSession(classe) \
 \
 \
declare_TIE_CATIUExitDRMSession(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIUExitDRMSession##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIUExitDRMSession,"CATIUExitDRMSession",NULL,classe::MetaObject(),TIE); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIUExitDRMSession(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIECreation(CATIUExitDRMSession, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIUExitDRMSession##classe(classe::MetaObject(),TIECATIUExitDRMSession##classe::MetaObject(),(void *)CreateTIECATIUExitDRMSession##classe)



/* Macro used to link an implementation with an interface */
/* This TIE is chained on the implementation object */
#define TIEchain_CATIUExitDRMSession(classe) \
 \
 \
declare_TIE_CATIUExitDRMSession(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIUExitDRMSession##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIUExitDRMSession,"CATIUExitDRMSession",NULL,classe::MetaObject(),TIEchain); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIUExitDRMSession(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIEchainCreation(CATIUExitDRMSession, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIUExitDRMSession##classe(classe::MetaObject(),TIECATIUExitDRMSession##classe::MetaObject(),(void *)CreateTIECATIUExitDRMSession##classe)


/* Macro to switch between BOA and TIE at build time */ 
#ifdef CATSYS_BOA_IS_TIE
#define BOA_CATIUExitDRMSession(classe) TIE_CATIUExitDRMSession(classe)
#else
#define BOA_CATIUExitDRMSession(classe) CATImplementBOA(CATIUExitDRMSession, classe)
#endif

#endif
