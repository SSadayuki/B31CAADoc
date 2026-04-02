#ifndef __TIE_CATIUserExitLoginTracker
#define __TIE_CATIUserExitLoginTracker

#include <string.h>
#include "CATBaseUnknown.h"
#include "CATMetaClass.h"
#include "CATMacForTie.h"
#include "CATIUserExitLoginTracker.h"
#include "JS0DSPA.h"


#ifdef _WINDOWS_SOURCE
#define Exported __declspec(dllexport)
#define Imported __declspec(dllimport)
#else
#define Exported 
#define Imported 
#endif


/* To link an implementation with the interface CATIUserExitLoginTracker */
#define declare_TIE_CATIUserExitLoginTracker(classe) \
 \
 \
class TIECATIUserExitLoginTracker##classe : public CATIUserExitLoginTracker \
{ \
   private: \
      CATDeclareCommonTIEMembers \
      CATDeclareNotCATBaseUnknownTIEMembers \
   public: \
      CATDeclareTIEMethods(CATIUserExitLoginTracker, classe) \
      CATDeclareIUnknownMethodsForNotCATBaseUnknownTIE \
      CATDeclareCATBaseUnknownMethodsForTIE \
      virtual void UETrackUserAuthentication( const CATUnicodeString & iUserID, ENOVLoginError err_code ) ; \
      virtual void UETrackUserLogin( const CATUnicodeString & iUserID, const CATUnicodeString & iUserRole, ENOVLoginError err_code ) ; \
      virtual void UEBuildLoginMessage( const CATUnicodeString & iUserID, const CATUnicodeString & iUserRole, ENOVLoginError err_code, CATUnicodeString & oOutMessage) ; \
};



#define ENVTIEdeclare_CATIUserExitLoginTracker(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
virtual void UETrackUserAuthentication( const CATUnicodeString & iUserID, ENOVLoginError err_code ) ; \
virtual void UETrackUserLogin( const CATUnicodeString & iUserID, const CATUnicodeString & iUserRole, ENOVLoginError err_code ) ; \
virtual void UEBuildLoginMessage( const CATUnicodeString & iUserID, const CATUnicodeString & iUserRole, ENOVLoginError err_code, CATUnicodeString & oOutMessage) ; \


#define ENVTIEdefine_CATIUserExitLoginTracker(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
void  ENVTIEName::UETrackUserAuthentication( const CATUnicodeString & iUserID, ENOVLoginError err_code )  \
{ \
 (ENVTIECALL(CATIUserExitLoginTracker,ENVTIETypeLetter,ENVTIELetter)UETrackUserAuthentication(iUserID,err_code )); \
} \
void  ENVTIEName::UETrackUserLogin( const CATUnicodeString & iUserID, const CATUnicodeString & iUserRole, ENOVLoginError err_code )  \
{ \
 (ENVTIECALL(CATIUserExitLoginTracker,ENVTIETypeLetter,ENVTIELetter)UETrackUserLogin(iUserID,iUserRole,err_code )); \
} \
void  ENVTIEName::UEBuildLoginMessage( const CATUnicodeString & iUserID, const CATUnicodeString & iUserRole, ENOVLoginError err_code, CATUnicodeString & oOutMessage)  \
{ \
 (ENVTIECALL(CATIUserExitLoginTracker,ENVTIETypeLetter,ENVTIELetter)UEBuildLoginMessage(iUserID,iUserRole,err_code,oOutMessage)); \
} \


/* Name of the TIE class */
#define class_TIE_CATIUserExitLoginTracker(classe)    TIECATIUserExitLoginTracker##classe


/* Common methods inside a TIE */
#define common_TIE_CATIUserExitLoginTracker(classe) \
 \
 \
/* Static initialization */ \
CATDefineCommonTIEMembers(CATIUserExitLoginTracker, classe) \
 \
 \
CATImplementNotCATBaseUnknownTIEMethods(CATIUserExitLoginTracker, classe) \
CATImplementIUnknownMethodsForNotCATBaseUnknownTIE(CATIUserExitLoginTracker, classe, 0) \
CATImplementCATBaseUnknownMethodsForTIE(CATIUserExitLoginTracker, classe) \
 \
void  TIECATIUserExitLoginTracker##classe::UETrackUserAuthentication( const CATUnicodeString & iUserID, ENOVLoginError err_code )  \
{ \
   ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->UETrackUserAuthentication(iUserID,err_code ); \
} \
void  TIECATIUserExitLoginTracker##classe::UETrackUserLogin( const CATUnicodeString & iUserID, const CATUnicodeString & iUserRole, ENOVLoginError err_code )  \
{ \
   ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->UETrackUserLogin(iUserID,iUserRole,err_code ); \
} \
void  TIECATIUserExitLoginTracker##classe::UEBuildLoginMessage( const CATUnicodeString & iUserID, const CATUnicodeString & iUserRole, ENOVLoginError err_code, CATUnicodeString & oOutMessage)  \
{ \
   ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->UEBuildLoginMessage(iUserID,iUserRole,err_code,oOutMessage); \
} \



/* Macro used to link an implementation with an interface */
#define TIE_CATIUserExitLoginTracker(classe) \
 \
 \
declare_TIE_CATIUserExitLoginTracker(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIUserExitLoginTracker##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIUserExitLoginTracker,"CATIUserExitLoginTracker",NULL,classe::MetaObject(),TIE); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIUserExitLoginTracker(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIECreation(CATIUserExitLoginTracker, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIUserExitLoginTracker##classe(classe::MetaObject(),TIECATIUserExitLoginTracker##classe::MetaObject(),(void *)CreateTIECATIUserExitLoginTracker##classe)



/* Macro used to link an implementation with an interface */
/* This TIE is chained on the implementation object */
#define TIEchain_CATIUserExitLoginTracker(classe) \
 \
 \
declare_TIE_CATIUserExitLoginTracker(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIUserExitLoginTracker##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIUserExitLoginTracker,"CATIUserExitLoginTracker",NULL,classe::MetaObject(),TIEchain); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIUserExitLoginTracker(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIEchainCreation(CATIUserExitLoginTracker, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIUserExitLoginTracker##classe(classe::MetaObject(),TIECATIUserExitLoginTracker##classe::MetaObject(),(void *)CreateTIECATIUserExitLoginTracker##classe)


/* Macro to switch between BOA and TIE at build time */ 
#ifdef CATSYS_BOA_IS_TIE
#define BOA_CATIUserExitLoginTracker(classe) TIE_CATIUserExitLoginTracker(classe)
#else
#define BOA_CATIUserExitLoginTracker(classe) CATImplementBOA(CATIUserExitLoginTracker, classe)
#endif

#endif
