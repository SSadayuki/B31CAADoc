#ifndef __TIE_CATIAttrBehavior
#define __TIE_CATIAttrBehavior

#include <string.h>
#include "CATBaseUnknown.h"
#include "CATMetaClass.h"
#include "CATMacForTie.h"
#include "CATIAttrBehavior.h"
#include "JS0DSPA.h"


#ifdef _WINDOWS_SOURCE
#define Exported __declspec(dllexport)
#define Imported __declspec(dllimport)
#else
#define Exported 
#define Imported 
#endif


/* To link an implementation with the interface CATIAttrBehavior */
#define declare_TIE_CATIAttrBehavior(classe) \
 \
 \
class TIECATIAttrBehavior##classe : public CATIAttrBehavior \
{ \
   private: \
      CATDeclareCommonTIEMembers \
   public: \
      CATDeclareTIEMethods(CATIAttrBehavior, classe) \
      CATDeclareIUnknownMethodsForCATBaseUnknownTIE \
      CATDeclareIDispatchMethodsForCATBaseUnknownTIE \
      CATDeclareCATBaseUnknownMethodsForTIE \
      virtual HRESULT GetRequestedBehavior(const CATUnicodeString * iAttrName, CATBehaviorSpecs ** oBehavior ) ; \
};



#define ENVTIEdeclare_CATIAttrBehavior(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
virtual HRESULT GetRequestedBehavior(const CATUnicodeString * iAttrName, CATBehaviorSpecs ** oBehavior ) ; \


#define ENVTIEdefine_CATIAttrBehavior(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
HRESULT  ENVTIEName::GetRequestedBehavior(const CATUnicodeString * iAttrName, CATBehaviorSpecs ** oBehavior )  \
{ \
return (ENVTIECALL(CATIAttrBehavior,ENVTIETypeLetter,ENVTIELetter)GetRequestedBehavior(iAttrName,oBehavior )); \
} \


/* Name of the TIE class */
#define class_TIE_CATIAttrBehavior(classe)    TIECATIAttrBehavior##classe


/* Common methods inside a TIE */
#define common_TIE_CATIAttrBehavior(classe) \
 \
 \
/* Static initialization */ \
CATDefineCommonTIEMembers(CATIAttrBehavior, classe) \
 \
 \
CATImplementTIEMethods(CATIAttrBehavior, classe) \
CATImplementIUnknownMethodsForCATBaseUnknownTIE(CATIAttrBehavior, classe, 1) \
CATImplementIDispatchMethodsForCATBaseUnknownTIE(CATIAttrBehavior, classe) \
CATImplementCATBaseUnknownMethodsForTIE(CATIAttrBehavior, classe) \
 \
HRESULT  TIECATIAttrBehavior##classe::GetRequestedBehavior(const CATUnicodeString * iAttrName, CATBehaviorSpecs ** oBehavior )  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetRequestedBehavior(iAttrName,oBehavior )); \
} \



/* Macro used to link an implementation with an interface */
#define TIE_CATIAttrBehavior(classe) \
 \
 \
declare_TIE_CATIAttrBehavior(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIAttrBehavior##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIAttrBehavior,"CATIAttrBehavior",CATIAttrBehavior::MetaObject(),classe::MetaObject(),TIE); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIAttrBehavior(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIECreation(CATIAttrBehavior, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIAttrBehavior##classe(classe::MetaObject(),CATIAttrBehavior::MetaObject(),(void *)CreateTIECATIAttrBehavior##classe)



/* Macro used to link an implementation with an interface */
/* This TIE is chained on the implementation object */
#define TIEchain_CATIAttrBehavior(classe) \
 \
 \
declare_TIE_CATIAttrBehavior(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIAttrBehavior##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIAttrBehavior,"CATIAttrBehavior",CATIAttrBehavior::MetaObject(),classe::MetaObject(),TIEchain); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIAttrBehavior(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIEchainCreation(CATIAttrBehavior, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIAttrBehavior##classe(classe::MetaObject(),CATIAttrBehavior::MetaObject(),(void *)CreateTIECATIAttrBehavior##classe)


/* Macro to switch between BOA and TIE at build time */ 
#ifdef CATSYS_BOA_IS_TIE
#define BOA_CATIAttrBehavior(classe) TIE_CATIAttrBehavior(classe)
#else
#define BOA_CATIAttrBehavior(classe) CATImplementBOA(CATIAttrBehavior, classe)
#endif

#endif
