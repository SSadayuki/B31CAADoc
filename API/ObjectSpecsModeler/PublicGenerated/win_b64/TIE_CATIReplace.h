#ifndef __TIE_CATIReplace
#define __TIE_CATIReplace

#include <string.h>
#include "CATBaseUnknown.h"
#include "CATMetaClass.h"
#include "CATMacForTie.h"
#include "CATIReplace.h"
#include "JS0DSPA.h"


#ifdef _WINDOWS_SOURCE
#define Exported __declspec(dllexport)
#define Imported __declspec(dllimport)
#else
#define Exported 
#define Imported 
#endif


/* To link an implementation with the interface CATIReplace */
#define declare_TIE_CATIReplace(classe) \
 \
 \
class TIECATIReplace##classe : public CATIReplace \
{ \
   private: \
      CATDeclareCommonTIEMembers \
   public: \
      CATDeclareTIEMethods(CATIReplace, classe) \
      CATDeclareIUnknownMethodsForCATBaseUnknownTIE \
      CATDeclareIDispatchMethodsForCATBaseUnknownTIE \
      CATDeclareCATBaseUnknownMethodsForTIE \
      virtual HRESULT IsElementValidForReplace(const CATUnicodeString& iName,const CATBaseUnknown_var& iElement,CATUnicodeString& oMessage, int& oElementValidity, const CATBaseUnknown_var& iOldValue=((CATBaseUnknown*)0)); \
      virtual HRESULT Replace(const CATUnicodeString& iName,CATBaseUnknown_var& iElement, const CATBaseUnknown_var& old_value=((CATBaseUnknown*)0) ); \
};



#define ENVTIEdeclare_CATIReplace(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
virtual HRESULT IsElementValidForReplace(const CATUnicodeString& iName,const CATBaseUnknown_var& iElement,CATUnicodeString& oMessage, int& oElementValidity, const CATBaseUnknown_var& iOldValue=((CATBaseUnknown*)0)); \
virtual HRESULT Replace(const CATUnicodeString& iName,CATBaseUnknown_var& iElement, const CATBaseUnknown_var& old_value=((CATBaseUnknown*)0) ); \


#define ENVTIEdefine_CATIReplace(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
HRESULT  ENVTIEName::IsElementValidForReplace(const CATUnicodeString& iName,const CATBaseUnknown_var& iElement,CATUnicodeString& oMessage, int& oElementValidity, const CATBaseUnknown_var& iOldValue) \
{ \
return (ENVTIECALL(CATIReplace,ENVTIETypeLetter,ENVTIELetter)IsElementValidForReplace(iName,iElement,oMessage,oElementValidity,iOldValue)); \
} \
HRESULT  ENVTIEName::Replace(const CATUnicodeString& iName,CATBaseUnknown_var& iElement, const CATBaseUnknown_var& old_value) \
{ \
return (ENVTIECALL(CATIReplace,ENVTIETypeLetter,ENVTIELetter)Replace(iName,iElement,old_value)); \
} \


/* Name of the TIE class */
#define class_TIE_CATIReplace(classe)    TIECATIReplace##classe


/* Common methods inside a TIE */
#define common_TIE_CATIReplace(classe) \
 \
 \
/* Static initialization */ \
CATDefineCommonTIEMembers(CATIReplace, classe) \
 \
 \
CATImplementTIEMethods(CATIReplace, classe) \
CATImplementIUnknownMethodsForCATBaseUnknownTIE(CATIReplace, classe, 1) \
CATImplementIDispatchMethodsForCATBaseUnknownTIE(CATIReplace, classe) \
CATImplementCATBaseUnknownMethodsForTIE(CATIReplace, classe) \
 \
HRESULT  TIECATIReplace##classe::IsElementValidForReplace(const CATUnicodeString& iName,const CATBaseUnknown_var& iElement,CATUnicodeString& oMessage, int& oElementValidity, const CATBaseUnknown_var& iOldValue) \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->IsElementValidForReplace(iName,iElement,oMessage,oElementValidity,iOldValue)); \
} \
HRESULT  TIECATIReplace##classe::Replace(const CATUnicodeString& iName,CATBaseUnknown_var& iElement, const CATBaseUnknown_var& old_value) \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->Replace(iName,iElement,old_value)); \
} \



/* Macro used to link an implementation with an interface */
#define TIE_CATIReplace(classe) \
 \
 \
declare_TIE_CATIReplace(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIReplace##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIReplace,"CATIReplace",CATIReplace::MetaObject(),classe::MetaObject(),TIE); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIReplace(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIECreation(CATIReplace, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIReplace##classe(classe::MetaObject(),CATIReplace::MetaObject(),(void *)CreateTIECATIReplace##classe)



/* Macro used to link an implementation with an interface */
/* This TIE is chained on the implementation object */
#define TIEchain_CATIReplace(classe) \
 \
 \
declare_TIE_CATIReplace(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIReplace##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIReplace,"CATIReplace",CATIReplace::MetaObject(),classe::MetaObject(),TIEchain); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIReplace(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIEchainCreation(CATIReplace, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIReplace##classe(classe::MetaObject(),CATIReplace::MetaObject(),(void *)CreateTIECATIReplace##classe)


/* Macro to switch between BOA and TIE at build time */ 
#ifdef CATSYS_BOA_IS_TIE
#define BOA_CATIReplace(classe) TIE_CATIReplace(classe)
#else
#define BOA_CATIReplace(classe) CATImplementBOA(CATIReplace, classe)
#endif

#endif
