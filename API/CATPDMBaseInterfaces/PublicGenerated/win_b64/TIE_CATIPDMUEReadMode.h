#ifndef __TIE_CATIPDMUEReadMode
#define __TIE_CATIPDMUEReadMode

#include <string.h>
#include "CATBaseUnknown.h"
#include "CATMetaClass.h"
#include "CATMacForTie.h"
#include "CATIPDMUEReadMode.h"
#include "JS0DSPA.h"


#ifdef _WINDOWS_SOURCE
#define Exported __declspec(dllexport)
#define Imported __declspec(dllimport)
#else
#define Exported 
#define Imported 
#endif


/* To link an implementation with the interface CATIPDMUEReadMode */
#define declare_TIE_CATIPDMUEReadMode(classe) \
 \
 \
class TIECATIPDMUEReadMode##classe : public CATIPDMUEReadMode \
{ \
   private: \
      CATDeclareCommonTIEMembers \
   public: \
      CATDeclareTIEMethods(CATIPDMUEReadMode, classe) \
      CATDeclareIUnknownMethodsForCATBaseUnknownTIE \
      CATDeclareIDispatchMethodsForCATBaseUnknownTIE \
      CATDeclareCATBaseUnknownMethodsForTIE \
      virtual HRESULT IsToSetReadOnly(const CATUnicodeString& iCoid, const CATUnicodeString& iCompid, const CATUnicodeString& iCaenv, const CATUnicodeString& iCatab, const CATUnicodeString& iServer, CATBoolean& oIsToSetReadOnly); \
};



#define ENVTIEdeclare_CATIPDMUEReadMode(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
virtual HRESULT IsToSetReadOnly(const CATUnicodeString& iCoid, const CATUnicodeString& iCompid, const CATUnicodeString& iCaenv, const CATUnicodeString& iCatab, const CATUnicodeString& iServer, CATBoolean& oIsToSetReadOnly); \


#define ENVTIEdefine_CATIPDMUEReadMode(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
HRESULT  ENVTIEName::IsToSetReadOnly(const CATUnicodeString& iCoid, const CATUnicodeString& iCompid, const CATUnicodeString& iCaenv, const CATUnicodeString& iCatab, const CATUnicodeString& iServer, CATBoolean& oIsToSetReadOnly) \
{ \
return (ENVTIECALL(CATIPDMUEReadMode,ENVTIETypeLetter,ENVTIELetter)IsToSetReadOnly(iCoid,iCompid,iCaenv,iCatab,iServer,oIsToSetReadOnly)); \
} \


/* Name of the TIE class */
#define class_TIE_CATIPDMUEReadMode(classe)    TIECATIPDMUEReadMode##classe


/* Common methods inside a TIE */
#define common_TIE_CATIPDMUEReadMode(classe) \
 \
 \
/* Static initialization */ \
CATDefineCommonTIEMembers(CATIPDMUEReadMode, classe) \
 \
 \
CATImplementTIEMethods(CATIPDMUEReadMode, classe) \
CATImplementIUnknownMethodsForCATBaseUnknownTIE(CATIPDMUEReadMode, classe, 1) \
CATImplementIDispatchMethodsForCATBaseUnknownTIE(CATIPDMUEReadMode, classe) \
CATImplementCATBaseUnknownMethodsForTIE(CATIPDMUEReadMode, classe) \
 \
HRESULT  TIECATIPDMUEReadMode##classe::IsToSetReadOnly(const CATUnicodeString& iCoid, const CATUnicodeString& iCompid, const CATUnicodeString& iCaenv, const CATUnicodeString& iCatab, const CATUnicodeString& iServer, CATBoolean& oIsToSetReadOnly) \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->IsToSetReadOnly(iCoid,iCompid,iCaenv,iCatab,iServer,oIsToSetReadOnly)); \
} \



/* Macro used to link an implementation with an interface */
#define TIE_CATIPDMUEReadMode(classe) \
 \
 \
declare_TIE_CATIPDMUEReadMode(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIPDMUEReadMode##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIPDMUEReadMode,"CATIPDMUEReadMode",CATIPDMUEReadMode::MetaObject(),classe::MetaObject(),TIE); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIPDMUEReadMode(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIECreation(CATIPDMUEReadMode, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIPDMUEReadMode##classe(classe::MetaObject(),CATIPDMUEReadMode::MetaObject(),(void *)CreateTIECATIPDMUEReadMode##classe)



/* Macro used to link an implementation with an interface */
/* This TIE is chained on the implementation object */
#define TIEchain_CATIPDMUEReadMode(classe) \
 \
 \
declare_TIE_CATIPDMUEReadMode(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIPDMUEReadMode##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIPDMUEReadMode,"CATIPDMUEReadMode",CATIPDMUEReadMode::MetaObject(),classe::MetaObject(),TIEchain); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIPDMUEReadMode(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIEchainCreation(CATIPDMUEReadMode, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIPDMUEReadMode##classe(classe::MetaObject(),CATIPDMUEReadMode::MetaObject(),(void *)CreateTIECATIPDMUEReadMode##classe)


/* Macro to switch between BOA and TIE at build time */ 
#ifdef CATSYS_BOA_IS_TIE
#define BOA_CATIPDMUEReadMode(classe) TIE_CATIPDMUEReadMode(classe)
#else
#define BOA_CATIPDMUEReadMode(classe) CATImplementBOA(CATIPDMUEReadMode, classe)
#endif

#endif
