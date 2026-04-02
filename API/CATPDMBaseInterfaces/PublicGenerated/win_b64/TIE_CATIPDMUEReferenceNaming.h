#ifndef __TIE_CATIPDMUEReferenceNaming
#define __TIE_CATIPDMUEReferenceNaming

#include <string.h>
#include "CATBaseUnknown.h"
#include "CATMetaClass.h"
#include "CATMacForTie.h"
#include "CATIPDMUEReferenceNaming.h"
#include "JS0DSPA.h"


#ifdef _WINDOWS_SOURCE
#define Exported __declspec(dllexport)
#define Imported __declspec(dllimport)
#else
#define Exported 
#define Imported 
#endif


/* To link an implementation with the interface CATIPDMUEReferenceNaming */
#define declare_TIE_CATIPDMUEReferenceNaming(classe) \
 \
 \
class TIECATIPDMUEReferenceNaming##classe : public CATIPDMUEReferenceNaming \
{ \
   private: \
      CATDeclareCommonTIEMembers \
   public: \
      CATDeclareTIEMethods(CATIPDMUEReferenceNaming, classe) \
      CATDeclareIUnknownMethodsForCATBaseUnknownTIE \
      CATDeclareIDispatchMethodsForCATBaseUnknownTIE \
      CATDeclareCATBaseUnknownMethodsForTIE \
      virtual HRESULT ComputeReferenceName (CATUnicodeString & oReferenceName) ; \
};



#define ENVTIEdeclare_CATIPDMUEReferenceNaming(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
virtual HRESULT ComputeReferenceName (CATUnicodeString & oReferenceName) ; \


#define ENVTIEdefine_CATIPDMUEReferenceNaming(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
HRESULT  ENVTIEName::ComputeReferenceName (CATUnicodeString & oReferenceName)  \
{ \
return (ENVTIECALL(CATIPDMUEReferenceNaming,ENVTIETypeLetter,ENVTIELetter)ComputeReferenceName (oReferenceName)); \
} \


/* Name of the TIE class */
#define class_TIE_CATIPDMUEReferenceNaming(classe)    TIECATIPDMUEReferenceNaming##classe


/* Common methods inside a TIE */
#define common_TIE_CATIPDMUEReferenceNaming(classe) \
 \
 \
/* Static initialization */ \
CATDefineCommonTIEMembers(CATIPDMUEReferenceNaming, classe) \
 \
 \
CATImplementTIEMethods(CATIPDMUEReferenceNaming, classe) \
CATImplementIUnknownMethodsForCATBaseUnknownTIE(CATIPDMUEReferenceNaming, classe, 1) \
CATImplementIDispatchMethodsForCATBaseUnknownTIE(CATIPDMUEReferenceNaming, classe) \
CATImplementCATBaseUnknownMethodsForTIE(CATIPDMUEReferenceNaming, classe) \
 \
HRESULT  TIECATIPDMUEReferenceNaming##classe::ComputeReferenceName (CATUnicodeString & oReferenceName)  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->ComputeReferenceName (oReferenceName)); \
} \



/* Macro used to link an implementation with an interface */
#define TIE_CATIPDMUEReferenceNaming(classe) \
 \
 \
declare_TIE_CATIPDMUEReferenceNaming(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIPDMUEReferenceNaming##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIPDMUEReferenceNaming,"CATIPDMUEReferenceNaming",CATIPDMUEReferenceNaming::MetaObject(),classe::MetaObject(),TIE); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIPDMUEReferenceNaming(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIECreation(CATIPDMUEReferenceNaming, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIPDMUEReferenceNaming##classe(classe::MetaObject(),CATIPDMUEReferenceNaming::MetaObject(),(void *)CreateTIECATIPDMUEReferenceNaming##classe)



/* Macro used to link an implementation with an interface */
/* This TIE is chained on the implementation object */
#define TIEchain_CATIPDMUEReferenceNaming(classe) \
 \
 \
declare_TIE_CATIPDMUEReferenceNaming(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIPDMUEReferenceNaming##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIPDMUEReferenceNaming,"CATIPDMUEReferenceNaming",CATIPDMUEReferenceNaming::MetaObject(),classe::MetaObject(),TIEchain); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIPDMUEReferenceNaming(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIEchainCreation(CATIPDMUEReferenceNaming, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIPDMUEReferenceNaming##classe(classe::MetaObject(),CATIPDMUEReferenceNaming::MetaObject(),(void *)CreateTIECATIPDMUEReferenceNaming##classe)


/* Macro to switch between BOA and TIE at build time */ 
#ifdef CATSYS_BOA_IS_TIE
#define BOA_CATIPDMUEReferenceNaming(classe) TIE_CATIPDMUEReferenceNaming(classe)
#else
#define BOA_CATIPDMUEReferenceNaming(classe) CATImplementBOA(CATIPDMUEReferenceNaming, classe)
#endif

#endif
