#ifndef __TIE_CATICCPable
#define __TIE_CATICCPable

#include <string.h>
#include "CATBaseUnknown.h"
#include "CATMetaClass.h"
#include "CATMacForTie.h"
#include "CATICCPable.h"
#include "JS0DSPA.h"


#ifdef _WINDOWS_SOURCE
#define Exported __declspec(dllexport)
#define Imported __declspec(dllimport)
#else
#define Exported 
#define Imported 
#endif


/* To link an implementation with the interface CATICCPable */
#define declare_TIE_CATICCPable(classe) \
 \
 \
class TIECATICCPable##classe : public CATICCPable \
{ \
   private: \
      CATDeclareCommonTIEMembers \
   public: \
      CATDeclareTIEMethods(CATICCPable, classe) \
      CATDeclareIUnknownMethodsForCATBaseUnknownTIE \
      CATDeclareIDispatchMethodsForCATBaseUnknownTIE \
      CATDeclareCATBaseUnknownMethodsForTIE \
      virtual HRESULT CanBeDeleted(const CATListValCATBaseUnknown_var& iContext, int& oAnswer, CATUnicodeString& oMessage); \
      virtual HRESULT CanBeCopied (const CATListValCATBaseUnknown_var& iContext, int& oAnswer, CATUnicodeString& oMessage); \
};



#define ENVTIEdeclare_CATICCPable(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
virtual HRESULT CanBeDeleted(const CATListValCATBaseUnknown_var& iContext, int& oAnswer, CATUnicodeString& oMessage); \
virtual HRESULT CanBeCopied (const CATListValCATBaseUnknown_var& iContext, int& oAnswer, CATUnicodeString& oMessage); \


#define ENVTIEdefine_CATICCPable(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
HRESULT  ENVTIEName::CanBeDeleted(const CATListValCATBaseUnknown_var& iContext, int& oAnswer, CATUnicodeString& oMessage) \
{ \
return (ENVTIECALL(CATICCPable,ENVTIETypeLetter,ENVTIELetter)CanBeDeleted(iContext,oAnswer,oMessage)); \
} \
HRESULT  ENVTIEName::CanBeCopied (const CATListValCATBaseUnknown_var& iContext, int& oAnswer, CATUnicodeString& oMessage) \
{ \
return (ENVTIECALL(CATICCPable,ENVTIETypeLetter,ENVTIELetter)CanBeCopied (iContext,oAnswer,oMessage)); \
} \


/* Name of the TIE class */
#define class_TIE_CATICCPable(classe)    TIECATICCPable##classe


/* Common methods inside a TIE */
#define common_TIE_CATICCPable(classe) \
 \
 \
/* Static initialization */ \
CATDefineCommonTIEMembers(CATICCPable, classe) \
 \
 \
CATImplementTIEMethods(CATICCPable, classe) \
CATImplementIUnknownMethodsForCATBaseUnknownTIE(CATICCPable, classe, 1) \
CATImplementIDispatchMethodsForCATBaseUnknownTIE(CATICCPable, classe) \
CATImplementCATBaseUnknownMethodsForTIE(CATICCPable, classe) \
 \
HRESULT  TIECATICCPable##classe::CanBeDeleted(const CATListValCATBaseUnknown_var& iContext, int& oAnswer, CATUnicodeString& oMessage) \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->CanBeDeleted(iContext,oAnswer,oMessage)); \
} \
HRESULT  TIECATICCPable##classe::CanBeCopied (const CATListValCATBaseUnknown_var& iContext, int& oAnswer, CATUnicodeString& oMessage) \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->CanBeCopied (iContext,oAnswer,oMessage)); \
} \



/* Macro used to link an implementation with an interface */
#define TIE_CATICCPable(classe) \
 \
 \
declare_TIE_CATICCPable(classe) \
 \
 \
CATMetaClass * __stdcall TIECATICCPable##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATICCPable,"CATICCPable",CATICCPable::MetaObject(),classe::MetaObject(),TIE); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATICCPable(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIECreation(CATICCPable, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATICCPable##classe(classe::MetaObject(),CATICCPable::MetaObject(),(void *)CreateTIECATICCPable##classe)



/* Macro used to link an implementation with an interface */
/* This TIE is chained on the implementation object */
#define TIEchain_CATICCPable(classe) \
 \
 \
declare_TIE_CATICCPable(classe) \
 \
 \
CATMetaClass * __stdcall TIECATICCPable##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATICCPable,"CATICCPable",CATICCPable::MetaObject(),classe::MetaObject(),TIEchain); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATICCPable(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIEchainCreation(CATICCPable, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATICCPable##classe(classe::MetaObject(),CATICCPable::MetaObject(),(void *)CreateTIECATICCPable##classe)


/* Macro to switch between BOA and TIE at build time */ 
#ifdef CATSYS_BOA_IS_TIE
#define BOA_CATICCPable(classe) TIE_CATICCPable(classe)
#else
#define BOA_CATICCPable(classe) CATImplementBOA(CATICCPable, classe)
#endif

#endif
