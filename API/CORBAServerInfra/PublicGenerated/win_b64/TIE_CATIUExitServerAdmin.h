#ifndef __TIE_CATIUExitServerAdmin
#define __TIE_CATIUExitServerAdmin

#include <string.h>
#include "CATBaseUnknown.h"
#include "CATMetaClass.h"
#include "CATMacForTie.h"
#include "CATIUExitServerAdmin.h"
#include "JS0DSPA.h"


#ifdef _WINDOWS_SOURCE
#define Exported __declspec(dllexport)
#define Imported __declspec(dllimport)
#else
#define Exported 
#define Imported 
#endif


/* To link an implementation with the interface CATIUExitServerAdmin */
#define declare_TIE_CATIUExitServerAdmin(classe) \
 \
 \
class TIECATIUExitServerAdmin##classe : public CATIUExitServerAdmin \
{ \
   private: \
      CATDeclareCommonTIEMembers \
      CATDeclareNotCATBaseUnknownTIEMembers \
   public: \
      CATDeclareTIEMethods(CATIUExitServerAdmin, classe) \
      CATDeclareIUnknownMethodsForNotCATBaseUnknownTIE \
      CATDeclareCATBaseUnknownMethodsForTIE \
      virtual HRESULT getApplicationInfo ( const char *iUser, const char *iApplication, CATSystem iSystem, const char *iAttribute, char **oValue , CATErr *oReason, const char *iUserCredential = 0 ); \
};



#define ENVTIEdeclare_CATIUExitServerAdmin(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
virtual HRESULT getApplicationInfo ( const char *iUser, const char *iApplication, CATSystem iSystem, const char *iAttribute, char **oValue , CATErr *oReason, const char *iUserCredential = 0 ); \


#define ENVTIEdefine_CATIUExitServerAdmin(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
HRESULT  ENVTIEName::getApplicationInfo ( const char *iUser, const char *iApplication, CATSystem iSystem, const char *iAttribute, char **oValue , CATErr *oReason, const char *iUserCredential ) \
{ \
return (ENVTIECALL(CATIUExitServerAdmin,ENVTIETypeLetter,ENVTIELetter)getApplicationInfo (iUser,iApplication,iSystem,iAttribute,oValue ,oReason,iUserCredential )); \
} \


/* Name of the TIE class */
#define class_TIE_CATIUExitServerAdmin(classe)    TIECATIUExitServerAdmin##classe


/* Common methods inside a TIE */
#define common_TIE_CATIUExitServerAdmin(classe) \
 \
 \
/* Static initialization */ \
CATDefineCommonTIEMembers(CATIUExitServerAdmin, classe) \
 \
 \
CATImplementNotCATBaseUnknownTIEMethods(CATIUExitServerAdmin, classe) \
CATImplementIUnknownMethodsForNotCATBaseUnknownTIE(CATIUExitServerAdmin, classe, 0) \
CATImplementCATBaseUnknownMethodsForTIE(CATIUExitServerAdmin, classe) \
 \
HRESULT  TIECATIUExitServerAdmin##classe::getApplicationInfo ( const char *iUser, const char *iApplication, CATSystem iSystem, const char *iAttribute, char **oValue , CATErr *oReason, const char *iUserCredential ) \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->getApplicationInfo (iUser,iApplication,iSystem,iAttribute,oValue ,oReason,iUserCredential )); \
} \



/* Macro used to link an implementation with an interface */
#define TIE_CATIUExitServerAdmin(classe) \
 \
 \
declare_TIE_CATIUExitServerAdmin(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIUExitServerAdmin##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIUExitServerAdmin,"CATIUExitServerAdmin",NULL,classe::MetaObject(),TIE); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIUExitServerAdmin(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIECreation(CATIUExitServerAdmin, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIUExitServerAdmin##classe(classe::MetaObject(),TIECATIUExitServerAdmin##classe::MetaObject(),(void *)CreateTIECATIUExitServerAdmin##classe)



/* Macro used to link an implementation with an interface */
/* This TIE is chained on the implementation object */
#define TIEchain_CATIUExitServerAdmin(classe) \
 \
 \
declare_TIE_CATIUExitServerAdmin(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIUExitServerAdmin##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIUExitServerAdmin,"CATIUExitServerAdmin",NULL,classe::MetaObject(),TIEchain); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIUExitServerAdmin(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIEchainCreation(CATIUExitServerAdmin, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIUExitServerAdmin##classe(classe::MetaObject(),TIECATIUExitServerAdmin##classe::MetaObject(),(void *)CreateTIECATIUExitServerAdmin##classe)


/* Macro to switch between BOA and TIE at build time */ 
#ifdef CATSYS_BOA_IS_TIE
#define BOA_CATIUExitServerAdmin(classe) TIE_CATIUExitServerAdmin(classe)
#else
#define BOA_CATIUExitServerAdmin(classe) CATImplementBOA(CATIUExitServerAdmin, classe)
#endif

#endif
