#ifndef __TIE_CATIReplacable
#define __TIE_CATIReplacable

#include <string.h>
#include "CATBaseUnknown.h"
#include "CATMetaClass.h"
#include "CATMacForTie.h"
#include "CATIReplacable.h"
#include "JS0DSPA.h"


#ifdef _WINDOWS_SOURCE
#define Exported __declspec(dllexport)
#define Imported __declspec(dllimport)
#else
#define Exported 
#define Imported 
#endif


/* To link an implementation with the interface CATIReplacable */
#define declare_TIE_CATIReplacable(classe) \
 \
 \
class TIECATIReplacable##classe : public CATIReplacable \
{ \
   private: \
      CATDeclareCommonTIEMembers \
   public: \
      CATDeclareTIEMethods(CATIReplacable, classe) \
      CATDeclareIUnknownMethodsForCATBaseUnknownTIE \
      CATDeclareIDispatchMethodsForCATBaseUnknownTIE \
      CATDeclareCATBaseUnknownMethodsForTIE \
      virtual HRESULT AllowReplace(const CATUnicodeString& iRole, const CATBaseUnknown_var& iToReplace, int& oAnswer) ; \
};



#define ENVTIEdeclare_CATIReplacable(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
virtual HRESULT AllowReplace(const CATUnicodeString& iRole, const CATBaseUnknown_var& iToReplace, int& oAnswer) ; \


#define ENVTIEdefine_CATIReplacable(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
HRESULT  ENVTIEName::AllowReplace(const CATUnicodeString& iRole, const CATBaseUnknown_var& iToReplace, int& oAnswer)  \
{ \
return (ENVTIECALL(CATIReplacable,ENVTIETypeLetter,ENVTIELetter)AllowReplace(iRole,iToReplace,oAnswer)); \
} \


/* Name of the TIE class */
#define class_TIE_CATIReplacable(classe)    TIECATIReplacable##classe


/* Common methods inside a TIE */
#define common_TIE_CATIReplacable(classe) \
 \
 \
/* Static initialization */ \
CATDefineCommonTIEMembers(CATIReplacable, classe) \
 \
 \
CATImplementTIEMethods(CATIReplacable, classe) \
CATImplementIUnknownMethodsForCATBaseUnknownTIE(CATIReplacable, classe, 1) \
CATImplementIDispatchMethodsForCATBaseUnknownTIE(CATIReplacable, classe) \
CATImplementCATBaseUnknownMethodsForTIE(CATIReplacable, classe) \
 \
HRESULT  TIECATIReplacable##classe::AllowReplace(const CATUnicodeString& iRole, const CATBaseUnknown_var& iToReplace, int& oAnswer)  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->AllowReplace(iRole,iToReplace,oAnswer)); \
} \



/* Macro used to link an implementation with an interface */
#define TIE_CATIReplacable(classe) \
 \
 \
declare_TIE_CATIReplacable(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIReplacable##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIReplacable,"CATIReplacable",CATIReplacable::MetaObject(),classe::MetaObject(),TIE); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIReplacable(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIECreation(CATIReplacable, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIReplacable##classe(classe::MetaObject(),CATIReplacable::MetaObject(),(void *)CreateTIECATIReplacable##classe)



/* Macro used to link an implementation with an interface */
/* This TIE is chained on the implementation object */
#define TIEchain_CATIReplacable(classe) \
 \
 \
declare_TIE_CATIReplacable(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIReplacable##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIReplacable,"CATIReplacable",CATIReplacable::MetaObject(),classe::MetaObject(),TIEchain); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIReplacable(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIEchainCreation(CATIReplacable, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIReplacable##classe(classe::MetaObject(),CATIReplacable::MetaObject(),(void *)CreateTIECATIReplacable##classe)


/* Macro to switch between BOA and TIE at build time */ 
#ifdef CATSYS_BOA_IS_TIE
#define BOA_CATIReplacable(classe) TIE_CATIReplacable(classe)
#else
#define BOA_CATIReplacable(classe) CATImplementBOA(CATIReplacable, classe)
#endif

#endif
