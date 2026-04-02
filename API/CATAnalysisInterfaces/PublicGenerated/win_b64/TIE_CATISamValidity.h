#ifndef __TIE_CATISamValidity
#define __TIE_CATISamValidity

#include <string.h>
#include "CATBaseUnknown.h"
#include "CATMetaClass.h"
#include "CATMacForTie.h"
#include "CATISamValidity.h"
#include "JS0DSPA.h"


#ifdef _WINDOWS_SOURCE
#define Exported __declspec(dllexport)
#define Imported __declspec(dllimport)
#else
#define Exported 
#define Imported 
#endif


/* To link an implementation with the interface CATISamValidity */
#define declare_TIE_CATISamValidity(classe) \
 \
 \
class TIECATISamValidity##classe : public CATISamValidity \
{ \
   private: \
      CATDeclareCommonTIEMembers \
   public: \
      CATDeclareTIEMethods(CATISamValidity, classe) \
      CATDeclareIUnknownMethodsForCATBaseUnknownTIE \
      CATDeclareIDispatchMethodsForCATBaseUnknownTIE \
      CATDeclareCATBaseUnknownMethodsForTIE \
      virtual HRESULT GetValidityStatus (const int iContext,int& oValidityStatus) ; \
};



#define ENVTIEdeclare_CATISamValidity(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
virtual HRESULT GetValidityStatus (const int iContext,int& oValidityStatus) ; \


#define ENVTIEdefine_CATISamValidity(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
HRESULT  ENVTIEName::GetValidityStatus (const int iContext,int& oValidityStatus)  \
{ \
return (ENVTIECALL(CATISamValidity,ENVTIETypeLetter,ENVTIELetter)GetValidityStatus (iContext,oValidityStatus)); \
} \


/* Name of the TIE class */
#define class_TIE_CATISamValidity(classe)    TIECATISamValidity##classe


/* Common methods inside a TIE */
#define common_TIE_CATISamValidity(classe) \
 \
 \
/* Static initialization */ \
CATDefineCommonTIEMembers(CATISamValidity, classe) \
 \
 \
CATImplementTIEMethods(CATISamValidity, classe) \
CATImplementIUnknownMethodsForCATBaseUnknownTIE(CATISamValidity, classe, 1) \
CATImplementIDispatchMethodsForCATBaseUnknownTIE(CATISamValidity, classe) \
CATImplementCATBaseUnknownMethodsForTIE(CATISamValidity, classe) \
 \
HRESULT  TIECATISamValidity##classe::GetValidityStatus (const int iContext,int& oValidityStatus)  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetValidityStatus (iContext,oValidityStatus)); \
} \



/* Macro used to link an implementation with an interface */
#define TIE_CATISamValidity(classe) \
 \
 \
declare_TIE_CATISamValidity(classe) \
 \
 \
CATMetaClass * __stdcall TIECATISamValidity##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATISamValidity,"CATISamValidity",CATISamValidity::MetaObject(),classe::MetaObject(),TIE); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATISamValidity(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIECreation(CATISamValidity, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATISamValidity##classe(classe::MetaObject(),CATISamValidity::MetaObject(),(void *)CreateTIECATISamValidity##classe)



/* Macro used to link an implementation with an interface */
/* This TIE is chained on the implementation object */
#define TIEchain_CATISamValidity(classe) \
 \
 \
declare_TIE_CATISamValidity(classe) \
 \
 \
CATMetaClass * __stdcall TIECATISamValidity##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATISamValidity,"CATISamValidity",CATISamValidity::MetaObject(),classe::MetaObject(),TIEchain); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATISamValidity(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIEchainCreation(CATISamValidity, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATISamValidity##classe(classe::MetaObject(),CATISamValidity::MetaObject(),(void *)CreateTIECATISamValidity##classe)


/* Macro to switch between BOA and TIE at build time */ 
#ifdef CATSYS_BOA_IS_TIE
#define BOA_CATISamValidity(classe) TIE_CATISamValidity(classe)
#else
#define BOA_CATISamValidity(classe) CATImplementBOA(CATISamValidity, classe)
#endif

#endif
