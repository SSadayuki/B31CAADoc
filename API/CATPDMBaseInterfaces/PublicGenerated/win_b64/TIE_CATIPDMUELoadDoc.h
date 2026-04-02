#ifndef __TIE_CATIPDMUELoadDoc
#define __TIE_CATIPDMUELoadDoc

#include <string.h>
#include "CATBaseUnknown.h"
#include "CATMetaClass.h"
#include "CATMacForTie.h"
#include "CATIPDMUELoadDoc.h"
#include "JS0DSPA.h"


#ifdef _WINDOWS_SOURCE
#define Exported __declspec(dllexport)
#define Imported __declspec(dllimport)
#else
#define Exported 
#define Imported 
#endif


/* To link an implementation with the interface CATIPDMUELoadDoc */
#define declare_TIE_CATIPDMUELoadDoc(classe) \
 \
 \
class TIECATIPDMUELoadDoc##classe : public CATIPDMUELoadDoc \
{ \
   private: \
      CATDeclareCommonTIEMembers \
   public: \
      CATDeclareTIEMethods(CATIPDMUELoadDoc, classe) \
      CATDeclareIUnknownMethodsForCATBaseUnknownTIE \
      CATDeclareIDispatchMethodsForCATBaseUnknownTIE \
      CATDeclareCATBaseUnknownMethodsForTIE \
      virtual HRESULT OnLoad (CATDocument * iDoc) ; \
};



#define ENVTIEdeclare_CATIPDMUELoadDoc(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
virtual HRESULT OnLoad (CATDocument * iDoc) ; \


#define ENVTIEdefine_CATIPDMUELoadDoc(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
HRESULT  ENVTIEName::OnLoad (CATDocument * iDoc)  \
{ \
return (ENVTIECALL(CATIPDMUELoadDoc,ENVTIETypeLetter,ENVTIELetter)OnLoad (iDoc)); \
} \


/* Name of the TIE class */
#define class_TIE_CATIPDMUELoadDoc(classe)    TIECATIPDMUELoadDoc##classe


/* Common methods inside a TIE */
#define common_TIE_CATIPDMUELoadDoc(classe) \
 \
 \
/* Static initialization */ \
CATDefineCommonTIEMembers(CATIPDMUELoadDoc, classe) \
 \
 \
CATImplementTIEMethods(CATIPDMUELoadDoc, classe) \
CATImplementIUnknownMethodsForCATBaseUnknownTIE(CATIPDMUELoadDoc, classe, 1) \
CATImplementIDispatchMethodsForCATBaseUnknownTIE(CATIPDMUELoadDoc, classe) \
CATImplementCATBaseUnknownMethodsForTIE(CATIPDMUELoadDoc, classe) \
 \
HRESULT  TIECATIPDMUELoadDoc##classe::OnLoad (CATDocument * iDoc)  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->OnLoad (iDoc)); \
} \



/* Macro used to link an implementation with an interface */
#define TIE_CATIPDMUELoadDoc(classe) \
 \
 \
declare_TIE_CATIPDMUELoadDoc(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIPDMUELoadDoc##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIPDMUELoadDoc,"CATIPDMUELoadDoc",CATIPDMUELoadDoc::MetaObject(),classe::MetaObject(),TIE); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIPDMUELoadDoc(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIECreation(CATIPDMUELoadDoc, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIPDMUELoadDoc##classe(classe::MetaObject(),CATIPDMUELoadDoc::MetaObject(),(void *)CreateTIECATIPDMUELoadDoc##classe)



/* Macro used to link an implementation with an interface */
/* This TIE is chained on the implementation object */
#define TIEchain_CATIPDMUELoadDoc(classe) \
 \
 \
declare_TIE_CATIPDMUELoadDoc(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIPDMUELoadDoc##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIPDMUELoadDoc,"CATIPDMUELoadDoc",CATIPDMUELoadDoc::MetaObject(),classe::MetaObject(),TIEchain); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIPDMUELoadDoc(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIEchainCreation(CATIPDMUELoadDoc, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIPDMUELoadDoc##classe(classe::MetaObject(),CATIPDMUELoadDoc::MetaObject(),(void *)CreateTIECATIPDMUELoadDoc##classe)


/* Macro to switch between BOA and TIE at build time */ 
#ifdef CATSYS_BOA_IS_TIE
#define BOA_CATIPDMUELoadDoc(classe) TIE_CATIPDMUELoadDoc(classe)
#else
#define BOA_CATIPDMUELoadDoc(classe) CATImplementBOA(CATIPDMUELoadDoc, classe)
#endif

#endif
