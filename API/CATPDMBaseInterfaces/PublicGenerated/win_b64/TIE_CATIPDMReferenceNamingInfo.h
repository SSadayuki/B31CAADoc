#ifndef __TIE_CATIPDMReferenceNamingInfo
#define __TIE_CATIPDMReferenceNamingInfo

#include <string.h>
#include "CATBaseUnknown.h"
#include "CATMetaClass.h"
#include "CATMacForTie.h"
#include "CATIPDMReferenceNamingInfo.h"
#include "JS0DSPA.h"


#ifdef _WINDOWS_SOURCE
#define Exported __declspec(dllexport)
#define Imported __declspec(dllimport)
#else
#define Exported 
#define Imported 
#endif


/* To link an implementation with the interface CATIPDMReferenceNamingInfo */
#define declare_TIE_CATIPDMReferenceNamingInfo(classe) \
 \
 \
class TIECATIPDMReferenceNamingInfo##classe : public CATIPDMReferenceNamingInfo \
{ \
   private: \
      CATDeclareCommonTIEMembers \
   public: \
      CATDeclareTIEMethods(CATIPDMReferenceNamingInfo, classe) \
      CATDeclareIUnknownMethodsForCATBaseUnknownTIE \
      CATDeclareIDispatchMethodsForCATBaseUnknownTIE \
      CATDeclareCATBaseUnknownMethodsForTIE \
      virtual HRESULT RunServerCode (const CATUnicodeString& iServerLateType,const CATVariant& iInput, CATVariant& oOutput ) ; \
};



#define ENVTIEdeclare_CATIPDMReferenceNamingInfo(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
virtual HRESULT RunServerCode (const CATUnicodeString& iServerLateType,const CATVariant& iInput, CATVariant& oOutput ) ; \


#define ENVTIEdefine_CATIPDMReferenceNamingInfo(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
HRESULT  ENVTIEName::RunServerCode (const CATUnicodeString& iServerLateType,const CATVariant& iInput, CATVariant& oOutput )  \
{ \
return (ENVTIECALL(CATIPDMReferenceNamingInfo,ENVTIETypeLetter,ENVTIELetter)RunServerCode (iServerLateType,iInput,oOutput )); \
} \


/* Name of the TIE class */
#define class_TIE_CATIPDMReferenceNamingInfo(classe)    TIECATIPDMReferenceNamingInfo##classe


/* Common methods inside a TIE */
#define common_TIE_CATIPDMReferenceNamingInfo(classe) \
 \
 \
/* Static initialization */ \
CATDefineCommonTIEMembers(CATIPDMReferenceNamingInfo, classe) \
 \
 \
CATImplementTIEMethods(CATIPDMReferenceNamingInfo, classe) \
CATImplementIUnknownMethodsForCATBaseUnknownTIE(CATIPDMReferenceNamingInfo, classe, 1) \
CATImplementIDispatchMethodsForCATBaseUnknownTIE(CATIPDMReferenceNamingInfo, classe) \
CATImplementCATBaseUnknownMethodsForTIE(CATIPDMReferenceNamingInfo, classe) \
 \
HRESULT  TIECATIPDMReferenceNamingInfo##classe::RunServerCode (const CATUnicodeString& iServerLateType,const CATVariant& iInput, CATVariant& oOutput )  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->RunServerCode (iServerLateType,iInput,oOutput )); \
} \



/* Macro used to link an implementation with an interface */
#define TIE_CATIPDMReferenceNamingInfo(classe) \
 \
 \
declare_TIE_CATIPDMReferenceNamingInfo(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIPDMReferenceNamingInfo##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIPDMReferenceNamingInfo,"CATIPDMReferenceNamingInfo",CATIPDMReferenceNamingInfo::MetaObject(),classe::MetaObject(),TIE); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIPDMReferenceNamingInfo(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIECreation(CATIPDMReferenceNamingInfo, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIPDMReferenceNamingInfo##classe(classe::MetaObject(),CATIPDMReferenceNamingInfo::MetaObject(),(void *)CreateTIECATIPDMReferenceNamingInfo##classe)



/* Macro used to link an implementation with an interface */
/* This TIE is chained on the implementation object */
#define TIEchain_CATIPDMReferenceNamingInfo(classe) \
 \
 \
declare_TIE_CATIPDMReferenceNamingInfo(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIPDMReferenceNamingInfo##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIPDMReferenceNamingInfo,"CATIPDMReferenceNamingInfo",CATIPDMReferenceNamingInfo::MetaObject(),classe::MetaObject(),TIEchain); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIPDMReferenceNamingInfo(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIEchainCreation(CATIPDMReferenceNamingInfo, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIPDMReferenceNamingInfo##classe(classe::MetaObject(),CATIPDMReferenceNamingInfo::MetaObject(),(void *)CreateTIECATIPDMReferenceNamingInfo##classe)


/* Macro to switch between BOA and TIE at build time */ 
#ifdef CATSYS_BOA_IS_TIE
#define BOA_CATIPDMReferenceNamingInfo(classe) TIE_CATIPDMReferenceNamingInfo(classe)
#else
#define BOA_CATIPDMReferenceNamingInfo(classe) CATImplementBOA(CATIPDMReferenceNamingInfo, classe)
#endif

#endif
