#ifndef __TIE_CATICatalogSynchronize
#define __TIE_CATICatalogSynchronize

#include <string.h>
#include "CATBaseUnknown.h"
#include "CATMetaClass.h"
#include "CATMacForTie.h"
#include "CATICatalogSynchronize.h"
#include "JS0DSPA.h"


#ifdef _WINDOWS_SOURCE
#define Exported __declspec(dllexport)
#define Imported __declspec(dllimport)
#else
#define Exported 
#define Imported 
#endif


/* To link an implementation with the interface CATICatalogSynchronize */
#define declare_TIE_CATICatalogSynchronize(classe) \
 \
 \
class TIECATICatalogSynchronize##classe : public CATICatalogSynchronize \
{ \
   private: \
      CATDeclareCommonTIEMembers \
   public: \
      CATDeclareTIEMethods(CATICatalogSynchronize, classe) \
      CATDeclareIUnknownMethodsForCATBaseUnknownTIE \
      CATDeclareIDispatchMethodsForCATBaseUnknownTIE \
      CATDeclareCATBaseUnknownMethodsForTIE \
      virtual HRESULT GetAlias(CATUnicodeString& oAlias) ; \
      virtual HRESULT GetEmbeddedPreview(CATPixelImage** oImage) ; \
      virtual HRESULT GetKeywordValue(const CATUnicodeString& iKeywordName, int& oKeyWordValue) ; \
      virtual HRESULT GetKeywordValue(const CATUnicodeString& iKeywordName, const CATICkeType* iKeywordType, double& oKeyWordValue) ; \
      virtual HRESULT GetKeywordValue(const CATUnicodeString& iKeywordName, CATCke::Boolean & oKeyWordValue) ; \
      virtual HRESULT GetKeywordValue(const CATUnicodeString& iKeywordName, CATUnicodeString& oKeyWordValue) ; \
};



#define ENVTIEdeclare_CATICatalogSynchronize(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
virtual HRESULT GetAlias(CATUnicodeString& oAlias) ; \
virtual HRESULT GetEmbeddedPreview(CATPixelImage** oImage) ; \
virtual HRESULT GetKeywordValue(const CATUnicodeString& iKeywordName, int& oKeyWordValue) ; \
virtual HRESULT GetKeywordValue(const CATUnicodeString& iKeywordName, const CATICkeType* iKeywordType, double& oKeyWordValue) ; \
virtual HRESULT GetKeywordValue(const CATUnicodeString& iKeywordName, CATCke::Boolean & oKeyWordValue) ; \
virtual HRESULT GetKeywordValue(const CATUnicodeString& iKeywordName, CATUnicodeString& oKeyWordValue) ; \


#define ENVTIEdefine_CATICatalogSynchronize(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
HRESULT  ENVTIEName::GetAlias(CATUnicodeString& oAlias)  \
{ \
return (ENVTIECALL(CATICatalogSynchronize,ENVTIETypeLetter,ENVTIELetter)GetAlias(oAlias)); \
} \
HRESULT  ENVTIEName::GetEmbeddedPreview(CATPixelImage** oImage)  \
{ \
return (ENVTIECALL(CATICatalogSynchronize,ENVTIETypeLetter,ENVTIELetter)GetEmbeddedPreview(oImage)); \
} \
HRESULT  ENVTIEName::GetKeywordValue(const CATUnicodeString& iKeywordName, int& oKeyWordValue)  \
{ \
return (ENVTIECALL(CATICatalogSynchronize,ENVTIETypeLetter,ENVTIELetter)GetKeywordValue(iKeywordName,oKeyWordValue)); \
} \
HRESULT  ENVTIEName::GetKeywordValue(const CATUnicodeString& iKeywordName, const CATICkeType* iKeywordType, double& oKeyWordValue)  \
{ \
return (ENVTIECALL(CATICatalogSynchronize,ENVTIETypeLetter,ENVTIELetter)GetKeywordValue(iKeywordName,iKeywordType,oKeyWordValue)); \
} \
HRESULT  ENVTIEName::GetKeywordValue(const CATUnicodeString& iKeywordName, CATCke::Boolean & oKeyWordValue)  \
{ \
return (ENVTIECALL(CATICatalogSynchronize,ENVTIETypeLetter,ENVTIELetter)GetKeywordValue(iKeywordName,oKeyWordValue)); \
} \
HRESULT  ENVTIEName::GetKeywordValue(const CATUnicodeString& iKeywordName, CATUnicodeString& oKeyWordValue)  \
{ \
return (ENVTIECALL(CATICatalogSynchronize,ENVTIETypeLetter,ENVTIELetter)GetKeywordValue(iKeywordName,oKeyWordValue)); \
} \


/* Name of the TIE class */
#define class_TIE_CATICatalogSynchronize(classe)    TIECATICatalogSynchronize##classe


/* Common methods inside a TIE */
#define common_TIE_CATICatalogSynchronize(classe) \
 \
 \
/* Static initialization */ \
CATDefineCommonTIEMembers(CATICatalogSynchronize, classe) \
 \
 \
CATImplementTIEMethods(CATICatalogSynchronize, classe) \
CATImplementIUnknownMethodsForCATBaseUnknownTIE(CATICatalogSynchronize, classe, 1) \
CATImplementIDispatchMethodsForCATBaseUnknownTIE(CATICatalogSynchronize, classe) \
CATImplementCATBaseUnknownMethodsForTIE(CATICatalogSynchronize, classe) \
 \
HRESULT  TIECATICatalogSynchronize##classe::GetAlias(CATUnicodeString& oAlias)  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetAlias(oAlias)); \
} \
HRESULT  TIECATICatalogSynchronize##classe::GetEmbeddedPreview(CATPixelImage** oImage)  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetEmbeddedPreview(oImage)); \
} \
HRESULT  TIECATICatalogSynchronize##classe::GetKeywordValue(const CATUnicodeString& iKeywordName, int& oKeyWordValue)  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetKeywordValue(iKeywordName,oKeyWordValue)); \
} \
HRESULT  TIECATICatalogSynchronize##classe::GetKeywordValue(const CATUnicodeString& iKeywordName, const CATICkeType* iKeywordType, double& oKeyWordValue)  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetKeywordValue(iKeywordName,iKeywordType,oKeyWordValue)); \
} \
HRESULT  TIECATICatalogSynchronize##classe::GetKeywordValue(const CATUnicodeString& iKeywordName, CATCke::Boolean & oKeyWordValue)  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetKeywordValue(iKeywordName,oKeyWordValue)); \
} \
HRESULT  TIECATICatalogSynchronize##classe::GetKeywordValue(const CATUnicodeString& iKeywordName, CATUnicodeString& oKeyWordValue)  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetKeywordValue(iKeywordName,oKeyWordValue)); \
} \



/* Macro used to link an implementation with an interface */
#define TIE_CATICatalogSynchronize(classe) \
 \
 \
declare_TIE_CATICatalogSynchronize(classe) \
 \
 \
CATMetaClass * __stdcall TIECATICatalogSynchronize##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATICatalogSynchronize,"CATICatalogSynchronize",CATICatalogSynchronize::MetaObject(),classe::MetaObject(),TIE); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATICatalogSynchronize(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIECreation(CATICatalogSynchronize, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATICatalogSynchronize##classe(classe::MetaObject(),CATICatalogSynchronize::MetaObject(),(void *)CreateTIECATICatalogSynchronize##classe)



/* Macro used to link an implementation with an interface */
/* This TIE is chained on the implementation object */
#define TIEchain_CATICatalogSynchronize(classe) \
 \
 \
declare_TIE_CATICatalogSynchronize(classe) \
 \
 \
CATMetaClass * __stdcall TIECATICatalogSynchronize##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATICatalogSynchronize,"CATICatalogSynchronize",CATICatalogSynchronize::MetaObject(),classe::MetaObject(),TIEchain); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATICatalogSynchronize(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIEchainCreation(CATICatalogSynchronize, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATICatalogSynchronize##classe(classe::MetaObject(),CATICatalogSynchronize::MetaObject(),(void *)CreateTIECATICatalogSynchronize##classe)


/* Macro to switch between BOA and TIE at build time */ 
#ifdef CATSYS_BOA_IS_TIE
#define BOA_CATICatalogSynchronize(classe) TIE_CATICatalogSynchronize(classe)
#else
#define BOA_CATICatalogSynchronize(classe) CATImplementBOA(CATICatalogSynchronize, classe)
#endif

#endif
