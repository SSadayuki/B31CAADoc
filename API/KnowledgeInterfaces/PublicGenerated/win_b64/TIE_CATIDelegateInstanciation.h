#ifndef __TIE_CATIDelegateInstanciation
#define __TIE_CATIDelegateInstanciation

#include <string.h>
#include "CATBaseUnknown.h"
#include "CATMetaClass.h"
#include "CATMacForTie.h"
#include "CATIDelegateInstanciation.h"
#include "JS0DSPA.h"


#ifdef _WINDOWS_SOURCE
#define Exported __declspec(dllexport)
#define Imported __declspec(dllimport)
#else
#define Exported 
#define Imported 
#endif


/* To link an implementation with the interface CATIDelegateInstanciation */
#define declare_TIE_CATIDelegateInstanciation(classe) \
 \
 \
class TIECATIDelegateInstanciation##classe : public CATIDelegateInstanciation \
{ \
   private: \
      CATDeclareCommonTIEMembers \
   public: \
      CATDeclareTIEMethods(CATIDelegateInstanciation, classe) \
      CATDeclareIUnknownMethodsForCATBaseUnknownTIE \
      CATDeclareIDispatchMethodsForCATBaseUnknownTIE \
      CATDeclareCATBaseUnknownMethodsForTIE \
      virtual HRESULT Instanciate( const CATIInstance_var& iOwner, const CATUnicodeString& iKey, const CATUnicodeString& typeName, CATIInstance_var& oInstanciated,const CATInstanciationContext *iContext ) ; \
};



#define ENVTIEdeclare_CATIDelegateInstanciation(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
virtual HRESULT Instanciate( const CATIInstance_var& iOwner, const CATUnicodeString& iKey, const CATUnicodeString& typeName, CATIInstance_var& oInstanciated,const CATInstanciationContext *iContext ) ; \


#define ENVTIEdefine_CATIDelegateInstanciation(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
HRESULT  ENVTIEName::Instanciate( const CATIInstance_var& iOwner, const CATUnicodeString& iKey, const CATUnicodeString& typeName, CATIInstance_var& oInstanciated,const CATInstanciationContext *iContext )  \
{ \
return (ENVTIECALL(CATIDelegateInstanciation,ENVTIETypeLetter,ENVTIELetter)Instanciate(iOwner,iKey,typeName,oInstanciated,iContext )); \
} \


/* Name of the TIE class */
#define class_TIE_CATIDelegateInstanciation(classe)    TIECATIDelegateInstanciation##classe


/* Common methods inside a TIE */
#define common_TIE_CATIDelegateInstanciation(classe) \
 \
 \
/* Static initialization */ \
CATDefineCommonTIEMembers(CATIDelegateInstanciation, classe) \
 \
 \
CATImplementTIEMethods(CATIDelegateInstanciation, classe) \
CATImplementIUnknownMethodsForCATBaseUnknownTIE(CATIDelegateInstanciation, classe, 1) \
CATImplementIDispatchMethodsForCATBaseUnknownTIE(CATIDelegateInstanciation, classe) \
CATImplementCATBaseUnknownMethodsForTIE(CATIDelegateInstanciation, classe) \
 \
HRESULT  TIECATIDelegateInstanciation##classe::Instanciate( const CATIInstance_var& iOwner, const CATUnicodeString& iKey, const CATUnicodeString& typeName, CATIInstance_var& oInstanciated,const CATInstanciationContext *iContext )  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->Instanciate(iOwner,iKey,typeName,oInstanciated,iContext )); \
} \



/* Macro used to link an implementation with an interface */
#define TIE_CATIDelegateInstanciation(classe) \
 \
 \
declare_TIE_CATIDelegateInstanciation(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIDelegateInstanciation##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIDelegateInstanciation,"CATIDelegateInstanciation",CATIDelegateInstanciation::MetaObject(),classe::MetaObject(),TIE); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIDelegateInstanciation(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIECreation(CATIDelegateInstanciation, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIDelegateInstanciation##classe(classe::MetaObject(),CATIDelegateInstanciation::MetaObject(),(void *)CreateTIECATIDelegateInstanciation##classe)



/* Macro used to link an implementation with an interface */
/* This TIE is chained on the implementation object */
#define TIEchain_CATIDelegateInstanciation(classe) \
 \
 \
declare_TIE_CATIDelegateInstanciation(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIDelegateInstanciation##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIDelegateInstanciation,"CATIDelegateInstanciation",CATIDelegateInstanciation::MetaObject(),classe::MetaObject(),TIEchain); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIDelegateInstanciation(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIEchainCreation(CATIDelegateInstanciation, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIDelegateInstanciation##classe(classe::MetaObject(),CATIDelegateInstanciation::MetaObject(),(void *)CreateTIECATIDelegateInstanciation##classe)


/* Macro to switch between BOA and TIE at build time */ 
#ifdef CATSYS_BOA_IS_TIE
#define BOA_CATIDelegateInstanciation(classe) TIE_CATIDelegateInstanciation(classe)
#else
#define BOA_CATIDelegateInstanciation(classe) CATImplementBOA(CATIDelegateInstanciation, classe)
#endif

#endif
