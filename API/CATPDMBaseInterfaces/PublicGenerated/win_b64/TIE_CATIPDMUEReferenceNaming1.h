#ifndef __TIE_CATIPDMUEReferenceNaming1
#define __TIE_CATIPDMUEReferenceNaming1

#include <string.h>
#include "CATBaseUnknown.h"
#include "CATMetaClass.h"
#include "CATMacForTie.h"
#include "CATIPDMUEReferenceNaming1.h"
#include "JS0DSPA.h"


#ifdef _WINDOWS_SOURCE
#define Exported __declspec(dllexport)
#define Imported __declspec(dllimport)
#else
#define Exported 
#define Imported 
#endif


/* To link an implementation with the interface CATIPDMUEReferenceNaming1 */
#define declare_TIE_CATIPDMUEReferenceNaming1(classe) \
 \
 \
class TIECATIPDMUEReferenceNaming1##classe : public CATIPDMUEReferenceNaming1 \
{ \
   private: \
      CATDeclareCommonTIEMembers \
   public: \
      CATDeclareTIEMethods(CATIPDMUEReferenceNaming1, classe) \
      CATDeclareIUnknownMethodsForCATBaseUnknownTIE \
      CATDeclareIDispatchMethodsForCATBaseUnknownTIE \
      CATDeclareCATBaseUnknownMethodsForTIE \
      virtual HRESULT ComputeReferenceName (CATIPDMReferenceNamingInfo* ipInfo, CATUnicodeString & oReferenceName) ; \
};



#define ENVTIEdeclare_CATIPDMUEReferenceNaming1(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
virtual HRESULT ComputeReferenceName (CATIPDMReferenceNamingInfo* ipInfo, CATUnicodeString & oReferenceName) ; \


#define ENVTIEdefine_CATIPDMUEReferenceNaming1(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
HRESULT  ENVTIEName::ComputeReferenceName (CATIPDMReferenceNamingInfo* ipInfo, CATUnicodeString & oReferenceName)  \
{ \
return (ENVTIECALL(CATIPDMUEReferenceNaming1,ENVTIETypeLetter,ENVTIELetter)ComputeReferenceName (ipInfo,oReferenceName)); \
} \


/* Name of the TIE class */
#define class_TIE_CATIPDMUEReferenceNaming1(classe)    TIECATIPDMUEReferenceNaming1##classe


/* Common methods inside a TIE */
#define common_TIE_CATIPDMUEReferenceNaming1(classe) \
 \
 \
/* Static initialization */ \
CATDefineCommonTIEMembers(CATIPDMUEReferenceNaming1, classe) \
 \
 \
CATImplementTIEMethods(CATIPDMUEReferenceNaming1, classe) \
CATImplementIUnknownMethodsForCATBaseUnknownTIE(CATIPDMUEReferenceNaming1, classe, 1) \
CATImplementIDispatchMethodsForCATBaseUnknownTIE(CATIPDMUEReferenceNaming1, classe) \
CATImplementCATBaseUnknownMethodsForTIE(CATIPDMUEReferenceNaming1, classe) \
 \
HRESULT  TIECATIPDMUEReferenceNaming1##classe::ComputeReferenceName (CATIPDMReferenceNamingInfo* ipInfo, CATUnicodeString & oReferenceName)  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->ComputeReferenceName (ipInfo,oReferenceName)); \
} \



/* Macro used to link an implementation with an interface */
#define TIE_CATIPDMUEReferenceNaming1(classe) \
 \
 \
declare_TIE_CATIPDMUEReferenceNaming1(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIPDMUEReferenceNaming1##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIPDMUEReferenceNaming1,"CATIPDMUEReferenceNaming1",CATIPDMUEReferenceNaming1::MetaObject(),classe::MetaObject(),TIE); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIPDMUEReferenceNaming1(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIECreation(CATIPDMUEReferenceNaming1, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIPDMUEReferenceNaming1##classe(classe::MetaObject(),CATIPDMUEReferenceNaming1::MetaObject(),(void *)CreateTIECATIPDMUEReferenceNaming1##classe)



/* Macro used to link an implementation with an interface */
/* This TIE is chained on the implementation object */
#define TIEchain_CATIPDMUEReferenceNaming1(classe) \
 \
 \
declare_TIE_CATIPDMUEReferenceNaming1(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIPDMUEReferenceNaming1##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIPDMUEReferenceNaming1,"CATIPDMUEReferenceNaming1",CATIPDMUEReferenceNaming1::MetaObject(),classe::MetaObject(),TIEchain); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIPDMUEReferenceNaming1(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIEchainCreation(CATIPDMUEReferenceNaming1, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIPDMUEReferenceNaming1##classe(classe::MetaObject(),CATIPDMUEReferenceNaming1::MetaObject(),(void *)CreateTIECATIPDMUEReferenceNaming1##classe)


/* Macro to switch between BOA and TIE at build time */ 
#ifdef CATSYS_BOA_IS_TIE
#define BOA_CATIPDMUEReferenceNaming1(classe) TIE_CATIPDMUEReferenceNaming1(classe)
#else
#define BOA_CATIPDMUEReferenceNaming1(classe) CATImplementBOA(CATIPDMUEReferenceNaming1, classe)
#endif

#endif
