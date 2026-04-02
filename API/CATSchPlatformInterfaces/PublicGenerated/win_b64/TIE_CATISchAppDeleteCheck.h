#ifndef __TIE_CATISchAppDeleteCheck
#define __TIE_CATISchAppDeleteCheck

#include <string.h>
#include "CATBaseUnknown.h"
#include "CATMetaClass.h"
#include "CATMacForTie.h"
#include "CATISchAppDeleteCheck.h"
#include "JS0DSPA.h"


#ifdef _WINDOWS_SOURCE
#define Exported __declspec(dllexport)
#define Imported __declspec(dllimport)
#else
#define Exported 
#define Imported 
#endif


/* To link an implementation with the interface CATISchAppDeleteCheck */
#define declare_TIE_CATISchAppDeleteCheck(classe) \
 \
 \
class TIECATISchAppDeleteCheck##classe : public CATISchAppDeleteCheck \
{ \
   private: \
      CATDeclareCommonTIEMembers \
      CATDeclareNotCATBaseUnknownTIEMembers \
   public: \
      CATDeclareTIEMethods(CATISchAppDeleteCheck, classe) \
      CATDeclareIUnknownMethodsForNotCATBaseUnknownTIE \
      CATDeclareCATBaseUnknownMethodsForTIE \
      virtual HRESULT AppOkToDeleteWithoutWarning(CATBoolean *oOk) ; \
      virtual HRESULT AppGetDeleteWarning(CATUnicodeString *oCaption, CATUnicodeString *oMessage) ; \
};



#define ENVTIEdeclare_CATISchAppDeleteCheck(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
virtual HRESULT AppOkToDeleteWithoutWarning(CATBoolean *oOk) ; \
virtual HRESULT AppGetDeleteWarning(CATUnicodeString *oCaption, CATUnicodeString *oMessage) ; \


#define ENVTIEdefine_CATISchAppDeleteCheck(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
HRESULT  ENVTIEName::AppOkToDeleteWithoutWarning(CATBoolean *oOk)  \
{ \
return (ENVTIECALL(CATISchAppDeleteCheck,ENVTIETypeLetter,ENVTIELetter)AppOkToDeleteWithoutWarning(oOk)); \
} \
HRESULT  ENVTIEName::AppGetDeleteWarning(CATUnicodeString *oCaption, CATUnicodeString *oMessage)  \
{ \
return (ENVTIECALL(CATISchAppDeleteCheck,ENVTIETypeLetter,ENVTIELetter)AppGetDeleteWarning(oCaption,oMessage)); \
} \


/* Name of the TIE class */
#define class_TIE_CATISchAppDeleteCheck(classe)    TIECATISchAppDeleteCheck##classe


/* Common methods inside a TIE */
#define common_TIE_CATISchAppDeleteCheck(classe) \
 \
 \
/* Static initialization */ \
CATDefineCommonTIEMembers(CATISchAppDeleteCheck, classe) \
 \
 \
CATImplementNotCATBaseUnknownTIEMethods(CATISchAppDeleteCheck, classe) \
CATImplementIUnknownMethodsForNotCATBaseUnknownTIE(CATISchAppDeleteCheck, classe, 0) \
CATImplementCATBaseUnknownMethodsForTIE(CATISchAppDeleteCheck, classe) \
 \
HRESULT  TIECATISchAppDeleteCheck##classe::AppOkToDeleteWithoutWarning(CATBoolean *oOk)  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->AppOkToDeleteWithoutWarning(oOk)); \
} \
HRESULT  TIECATISchAppDeleteCheck##classe::AppGetDeleteWarning(CATUnicodeString *oCaption, CATUnicodeString *oMessage)  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->AppGetDeleteWarning(oCaption,oMessage)); \
} \



/* Macro used to link an implementation with an interface */
#define TIE_CATISchAppDeleteCheck(classe) \
 \
 \
declare_TIE_CATISchAppDeleteCheck(classe) \
 \
 \
CATMetaClass * __stdcall TIECATISchAppDeleteCheck##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATISchAppDeleteCheck,"CATISchAppDeleteCheck",NULL,classe::MetaObject(),TIE); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATISchAppDeleteCheck(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIECreation(CATISchAppDeleteCheck, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATISchAppDeleteCheck##classe(classe::MetaObject(),TIECATISchAppDeleteCheck##classe::MetaObject(),(void *)CreateTIECATISchAppDeleteCheck##classe)



/* Macro used to link an implementation with an interface */
/* This TIE is chained on the implementation object */
#define TIEchain_CATISchAppDeleteCheck(classe) \
 \
 \
declare_TIE_CATISchAppDeleteCheck(classe) \
 \
 \
CATMetaClass * __stdcall TIECATISchAppDeleteCheck##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATISchAppDeleteCheck,"CATISchAppDeleteCheck",NULL,classe::MetaObject(),TIEchain); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATISchAppDeleteCheck(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIEchainCreation(CATISchAppDeleteCheck, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATISchAppDeleteCheck##classe(classe::MetaObject(),TIECATISchAppDeleteCheck##classe::MetaObject(),(void *)CreateTIECATISchAppDeleteCheck##classe)


/* Macro to switch between BOA and TIE at build time */ 
#ifdef CATSYS_BOA_IS_TIE
#define BOA_CATISchAppDeleteCheck(classe) TIE_CATISchAppDeleteCheck(classe)
#else
#define BOA_CATISchAppDeleteCheck(classe) CATImplementBOA(CATISchAppDeleteCheck, classe)
#endif

#endif
