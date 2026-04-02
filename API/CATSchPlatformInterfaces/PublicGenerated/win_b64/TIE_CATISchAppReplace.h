#ifndef __TIE_CATISchAppReplace
#define __TIE_CATISchAppReplace

#include <string.h>
#include "CATBaseUnknown.h"
#include "CATMetaClass.h"
#include "CATMacForTie.h"
#include "CATISchAppReplace.h"
#include "JS0DSPA.h"


#ifdef _WINDOWS_SOURCE
#define Exported __declspec(dllexport)
#define Imported __declspec(dllimport)
#else
#define Exported 
#define Imported 
#endif


/* To link an implementation with the interface CATISchAppReplace */
#define declare_TIE_CATISchAppReplace(classe) \
 \
 \
class TIECATISchAppReplace##classe : public CATISchAppReplace \
{ \
   private: \
      CATDeclareCommonTIEMembers \
      CATDeclareNotCATBaseUnknownTIEMembers \
   public: \
      CATDeclareTIEMethods(CATISchAppReplace, classe) \
      CATDeclareIUnknownMethodsForNotCATBaseUnknownTIE \
      CATDeclareCATBaseUnknownMethodsForTIE \
      virtual HRESULT AppOKToReplace (const IUnknown *iSchObjectToBeReplacedByThis, CATBoolean *oBYes) ; \
      virtual HRESULT AppPostReplaceProcess (const IUnknown *iSchObjectToBeReplacedByThis) ; \
};



#define ENVTIEdeclare_CATISchAppReplace(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
virtual HRESULT AppOKToReplace (const IUnknown *iSchObjectToBeReplacedByThis, CATBoolean *oBYes) ; \
virtual HRESULT AppPostReplaceProcess (const IUnknown *iSchObjectToBeReplacedByThis) ; \


#define ENVTIEdefine_CATISchAppReplace(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
HRESULT  ENVTIEName::AppOKToReplace (const IUnknown *iSchObjectToBeReplacedByThis, CATBoolean *oBYes)  \
{ \
return (ENVTIECALL(CATISchAppReplace,ENVTIETypeLetter,ENVTIELetter)AppOKToReplace (iSchObjectToBeReplacedByThis,oBYes)); \
} \
HRESULT  ENVTIEName::AppPostReplaceProcess (const IUnknown *iSchObjectToBeReplacedByThis)  \
{ \
return (ENVTIECALL(CATISchAppReplace,ENVTIETypeLetter,ENVTIELetter)AppPostReplaceProcess (iSchObjectToBeReplacedByThis)); \
} \


/* Name of the TIE class */
#define class_TIE_CATISchAppReplace(classe)    TIECATISchAppReplace##classe


/* Common methods inside a TIE */
#define common_TIE_CATISchAppReplace(classe) \
 \
 \
/* Static initialization */ \
CATDefineCommonTIEMembers(CATISchAppReplace, classe) \
 \
 \
CATImplementNotCATBaseUnknownTIEMethods(CATISchAppReplace, classe) \
CATImplementIUnknownMethodsForNotCATBaseUnknownTIE(CATISchAppReplace, classe, 0) \
CATImplementCATBaseUnknownMethodsForTIE(CATISchAppReplace, classe) \
 \
HRESULT  TIECATISchAppReplace##classe::AppOKToReplace (const IUnknown *iSchObjectToBeReplacedByThis, CATBoolean *oBYes)  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->AppOKToReplace (iSchObjectToBeReplacedByThis,oBYes)); \
} \
HRESULT  TIECATISchAppReplace##classe::AppPostReplaceProcess (const IUnknown *iSchObjectToBeReplacedByThis)  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->AppPostReplaceProcess (iSchObjectToBeReplacedByThis)); \
} \



/* Macro used to link an implementation with an interface */
#define TIE_CATISchAppReplace(classe) \
 \
 \
declare_TIE_CATISchAppReplace(classe) \
 \
 \
CATMetaClass * __stdcall TIECATISchAppReplace##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATISchAppReplace,"CATISchAppReplace",NULL,classe::MetaObject(),TIE); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATISchAppReplace(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIECreation(CATISchAppReplace, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATISchAppReplace##classe(classe::MetaObject(),TIECATISchAppReplace##classe::MetaObject(),(void *)CreateTIECATISchAppReplace##classe)



/* Macro used to link an implementation with an interface */
/* This TIE is chained on the implementation object */
#define TIEchain_CATISchAppReplace(classe) \
 \
 \
declare_TIE_CATISchAppReplace(classe) \
 \
 \
CATMetaClass * __stdcall TIECATISchAppReplace##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATISchAppReplace,"CATISchAppReplace",NULL,classe::MetaObject(),TIEchain); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATISchAppReplace(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIEchainCreation(CATISchAppReplace, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATISchAppReplace##classe(classe::MetaObject(),TIECATISchAppReplace##classe::MetaObject(),(void *)CreateTIECATISchAppReplace##classe)


/* Macro to switch between BOA and TIE at build time */ 
#ifdef CATSYS_BOA_IS_TIE
#define BOA_CATISchAppReplace(classe) TIE_CATISchAppReplace(classe)
#else
#define BOA_CATISchAppReplace(classe) CATImplementBOA(CATISchAppReplace, classe)
#endif

#endif
