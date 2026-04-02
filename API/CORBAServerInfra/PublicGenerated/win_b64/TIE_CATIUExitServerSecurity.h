#ifndef __TIE_CATIUExitServerSecurity
#define __TIE_CATIUExitServerSecurity

#include <string.h>
#include "CATBaseUnknown.h"
#include "CATMetaClass.h"
#include "CATMacForTie.h"
#include "CATIUExitServerSecurity.h"
#include "JS0DSPA.h"


#ifdef _WINDOWS_SOURCE
#define Exported __declspec(dllexport)
#define Imported __declspec(dllimport)
#else
#define Exported 
#define Imported 
#endif


/* To link an implementation with the interface CATIUExitServerSecurity */
#define declare_TIE_CATIUExitServerSecurity(classe) \
 \
 \
class TIECATIUExitServerSecurity##classe : public CATIUExitServerSecurity \
{ \
   private: \
      CATDeclareCommonTIEMembers \
      CATDeclareNotCATBaseUnknownTIEMembers \
   public: \
      CATDeclareTIEMethods(CATIUExitServerSecurity, classe) \
      CATDeclareIUnknownMethodsForNotCATBaseUnknownTIE \
      CATDeclareCATBaseUnknownMethodsForTIE \
      virtual HRESULT authenticate ( const char *iUser, char **oUserCredential, const char *iUserPassword, CATErr *oReason  ); \
      virtual HRESULT check ( const char *iUser, const char *iUserCredential, const char *iInfo, CATErr *oReason); \
      virtual HRESULT isAuthorised ( const char *iUserCredential, const char *iApplication, CATErr *oReason  ); \
};



#define ENVTIEdeclare_CATIUExitServerSecurity(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
virtual HRESULT authenticate ( const char *iUser, char **oUserCredential, const char *iUserPassword, CATErr *oReason  ); \
virtual HRESULT check ( const char *iUser, const char *iUserCredential, const char *iInfo, CATErr *oReason); \
virtual HRESULT isAuthorised ( const char *iUserCredential, const char *iApplication, CATErr *oReason  ); \


#define ENVTIEdefine_CATIUExitServerSecurity(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
HRESULT  ENVTIEName::authenticate ( const char *iUser, char **oUserCredential, const char *iUserPassword, CATErr *oReason  ) \
{ \
return (ENVTIECALL(CATIUExitServerSecurity,ENVTIETypeLetter,ENVTIELetter)authenticate (iUser,oUserCredential,iUserPassword,oReason  )); \
} \
HRESULT  ENVTIEName::check ( const char *iUser, const char *iUserCredential, const char *iInfo, CATErr *oReason) \
{ \
return (ENVTIECALL(CATIUExitServerSecurity,ENVTIETypeLetter,ENVTIELetter)check (iUser,iUserCredential,iInfo,oReason)); \
} \
HRESULT  ENVTIEName::isAuthorised ( const char *iUserCredential, const char *iApplication, CATErr *oReason  ) \
{ \
return (ENVTIECALL(CATIUExitServerSecurity,ENVTIETypeLetter,ENVTIELetter)isAuthorised (iUserCredential,iApplication,oReason  )); \
} \


/* Name of the TIE class */
#define class_TIE_CATIUExitServerSecurity(classe)    TIECATIUExitServerSecurity##classe


/* Common methods inside a TIE */
#define common_TIE_CATIUExitServerSecurity(classe) \
 \
 \
/* Static initialization */ \
CATDefineCommonTIEMembers(CATIUExitServerSecurity, classe) \
 \
 \
CATImplementNotCATBaseUnknownTIEMethods(CATIUExitServerSecurity, classe) \
CATImplementIUnknownMethodsForNotCATBaseUnknownTIE(CATIUExitServerSecurity, classe, 0) \
CATImplementCATBaseUnknownMethodsForTIE(CATIUExitServerSecurity, classe) \
 \
HRESULT  TIECATIUExitServerSecurity##classe::authenticate ( const char *iUser, char **oUserCredential, const char *iUserPassword, CATErr *oReason  ) \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->authenticate (iUser,oUserCredential,iUserPassword,oReason  )); \
} \
HRESULT  TIECATIUExitServerSecurity##classe::check ( const char *iUser, const char *iUserCredential, const char *iInfo, CATErr *oReason) \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->check (iUser,iUserCredential,iInfo,oReason)); \
} \
HRESULT  TIECATIUExitServerSecurity##classe::isAuthorised ( const char *iUserCredential, const char *iApplication, CATErr *oReason  ) \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->isAuthorised (iUserCredential,iApplication,oReason  )); \
} \



/* Macro used to link an implementation with an interface */
#define TIE_CATIUExitServerSecurity(classe) \
 \
 \
declare_TIE_CATIUExitServerSecurity(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIUExitServerSecurity##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIUExitServerSecurity,"CATIUExitServerSecurity",NULL,classe::MetaObject(),TIE); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIUExitServerSecurity(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIECreation(CATIUExitServerSecurity, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIUExitServerSecurity##classe(classe::MetaObject(),TIECATIUExitServerSecurity##classe::MetaObject(),(void *)CreateTIECATIUExitServerSecurity##classe)



/* Macro used to link an implementation with an interface */
/* This TIE is chained on the implementation object */
#define TIEchain_CATIUExitServerSecurity(classe) \
 \
 \
declare_TIE_CATIUExitServerSecurity(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIUExitServerSecurity##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIUExitServerSecurity,"CATIUExitServerSecurity",NULL,classe::MetaObject(),TIEchain); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIUExitServerSecurity(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIEchainCreation(CATIUExitServerSecurity, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIUExitServerSecurity##classe(classe::MetaObject(),TIECATIUExitServerSecurity##classe::MetaObject(),(void *)CreateTIECATIUExitServerSecurity##classe)


/* Macro to switch between BOA and TIE at build time */ 
#ifdef CATSYS_BOA_IS_TIE
#define BOA_CATIUExitServerSecurity(classe) TIE_CATIUExitServerSecurity(classe)
#else
#define BOA_CATIUExitServerSecurity(classe) CATImplementBOA(CATIUExitServerSecurity, classe)
#endif

#endif
