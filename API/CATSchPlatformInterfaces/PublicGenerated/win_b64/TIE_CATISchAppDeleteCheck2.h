#ifndef __TIE_CATISchAppDeleteCheck2
#define __TIE_CATISchAppDeleteCheck2

#include <string.h>
#include "CATBaseUnknown.h"
#include "CATMetaClass.h"
#include "CATMacForTie.h"
#include "CATISchAppDeleteCheck2.h"
#include "JS0DSPA.h"


#ifdef _WINDOWS_SOURCE
#define Exported __declspec(dllexport)
#define Imported __declspec(dllimport)
#else
#define Exported 
#define Imported 
#endif


/* To link an implementation with the interface CATISchAppDeleteCheck2 */
#define declare_TIE_CATISchAppDeleteCheck2(classe) \
 \
 \
class TIECATISchAppDeleteCheck2##classe : public CATISchAppDeleteCheck2 \
{ \
   private: \
      CATDeclareCommonTIEMembers \
      CATDeclareNotCATBaseUnknownTIEMembers \
   public: \
      CATDeclareTIEMethods(CATISchAppDeleteCheck2, classe) \
      CATDeclareIUnknownMethodsForNotCATBaseUnknownTIE \
      CATDeclareCATBaseUnknownMethodsForTIE \
      virtual HRESULT AppOkToDelete(CATBoolean *oOk) ; \
      virtual HRESULT AppOkToDeleteWithMessage (CATBoolean *oOk, CATUnicodeString &oUCaption, CATUnicodeString &oUMessage) ; \
};



#define ENVTIEdeclare_CATISchAppDeleteCheck2(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
virtual HRESULT AppOkToDelete(CATBoolean *oOk) ; \
virtual HRESULT AppOkToDeleteWithMessage (CATBoolean *oOk, CATUnicodeString &oUCaption, CATUnicodeString &oUMessage) ; \


#define ENVTIEdefine_CATISchAppDeleteCheck2(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
HRESULT  ENVTIEName::AppOkToDelete(CATBoolean *oOk)  \
{ \
return (ENVTIECALL(CATISchAppDeleteCheck2,ENVTIETypeLetter,ENVTIELetter)AppOkToDelete(oOk)); \
} \
HRESULT  ENVTIEName::AppOkToDeleteWithMessage (CATBoolean *oOk, CATUnicodeString &oUCaption, CATUnicodeString &oUMessage)  \
{ \
return (ENVTIECALL(CATISchAppDeleteCheck2,ENVTIETypeLetter,ENVTIELetter)AppOkToDeleteWithMessage (oOk,oUCaption,oUMessage)); \
} \


/* Name of the TIE class */
#define class_TIE_CATISchAppDeleteCheck2(classe)    TIECATISchAppDeleteCheck2##classe


/* Common methods inside a TIE */
#define common_TIE_CATISchAppDeleteCheck2(classe) \
 \
 \
/* Static initialization */ \
CATDefineCommonTIEMembers(CATISchAppDeleteCheck2, classe) \
 \
 \
CATImplementNotCATBaseUnknownTIEMethods(CATISchAppDeleteCheck2, classe) \
CATImplementIUnknownMethodsForNotCATBaseUnknownTIE(CATISchAppDeleteCheck2, classe, 0) \
CATImplementCATBaseUnknownMethodsForTIE(CATISchAppDeleteCheck2, classe) \
 \
HRESULT  TIECATISchAppDeleteCheck2##classe::AppOkToDelete(CATBoolean *oOk)  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->AppOkToDelete(oOk)); \
} \
HRESULT  TIECATISchAppDeleteCheck2##classe::AppOkToDeleteWithMessage (CATBoolean *oOk, CATUnicodeString &oUCaption, CATUnicodeString &oUMessage)  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->AppOkToDeleteWithMessage (oOk,oUCaption,oUMessage)); \
} \



/* Macro used to link an implementation with an interface */
#define TIE_CATISchAppDeleteCheck2(classe) \
 \
 \
declare_TIE_CATISchAppDeleteCheck2(classe) \
 \
 \
CATMetaClass * __stdcall TIECATISchAppDeleteCheck2##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATISchAppDeleteCheck2,"CATISchAppDeleteCheck2",NULL,classe::MetaObject(),TIE); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATISchAppDeleteCheck2(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIECreation(CATISchAppDeleteCheck2, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATISchAppDeleteCheck2##classe(classe::MetaObject(),TIECATISchAppDeleteCheck2##classe::MetaObject(),(void *)CreateTIECATISchAppDeleteCheck2##classe)



/* Macro used to link an implementation with an interface */
/* This TIE is chained on the implementation object */
#define TIEchain_CATISchAppDeleteCheck2(classe) \
 \
 \
declare_TIE_CATISchAppDeleteCheck2(classe) \
 \
 \
CATMetaClass * __stdcall TIECATISchAppDeleteCheck2##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATISchAppDeleteCheck2,"CATISchAppDeleteCheck2",NULL,classe::MetaObject(),TIEchain); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATISchAppDeleteCheck2(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIEchainCreation(CATISchAppDeleteCheck2, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATISchAppDeleteCheck2##classe(classe::MetaObject(),TIECATISchAppDeleteCheck2##classe::MetaObject(),(void *)CreateTIECATISchAppDeleteCheck2##classe)


/* Macro to switch between BOA and TIE at build time */ 
#ifdef CATSYS_BOA_IS_TIE
#define BOA_CATISchAppDeleteCheck2(classe) TIE_CATISchAppDeleteCheck2(classe)
#else
#define BOA_CATISchAppDeleteCheck2(classe) CATImplementBOA(CATISchAppDeleteCheck2, classe)
#endif

#endif
