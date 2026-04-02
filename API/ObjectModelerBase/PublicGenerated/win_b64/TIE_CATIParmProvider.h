#ifndef __TIE_CATIParmProvider
#define __TIE_CATIParmProvider

#include <string.h>
#include "CATBaseUnknown.h"
#include "CATMetaClass.h"
#include "CATMacForTie.h"
#include "CATIParmProvider.h"
#include "JS0DSPA.h"


#ifdef _WINDOWS_SOURCE
#define Exported __declspec(dllexport)
#define Imported __declspec(dllimport)
#else
#define Exported 
#define Imported 
#endif


/* To link an implementation with the interface CATIParmProvider */
#define declare_TIE_CATIParmProvider(classe) \
 \
 \
class TIECATIParmProvider##classe : public CATIParmProvider \
{ \
   private: \
      CATDeclareCommonTIEMembers \
   public: \
      CATDeclareTIEMethods(CATIParmProvider, classe) \
      CATDeclareIUnknownMethodsForCATBaseUnknownTIE \
      CATDeclareIDispatchMethodsForCATBaseUnknownTIE \
      CATDeclareCATBaseUnknownMethodsForTIE \
      virtual HRESULT GetDirectChildren(CATClassId intfName, CATListValCATBaseUnknown_var* oList,CATBaseUnknown* iObj); \
};



#define ENVTIEdeclare_CATIParmProvider(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
virtual HRESULT GetDirectChildren(CATClassId intfName, CATListValCATBaseUnknown_var* oList,CATBaseUnknown* iObj); \


#define ENVTIEdefine_CATIParmProvider(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
HRESULT  ENVTIEName::GetDirectChildren(CATClassId intfName, CATListValCATBaseUnknown_var* oList,CATBaseUnknown* iObj) \
{ \
return (ENVTIECALL(CATIParmProvider,ENVTIETypeLetter,ENVTIELetter)GetDirectChildren(intfName,oList,iObj)); \
} \


/* Name of the TIE class */
#define class_TIE_CATIParmProvider(classe)    TIECATIParmProvider##classe


/* Common methods inside a TIE */
#define common_TIE_CATIParmProvider(classe) \
 \
 \
/* Static initialization */ \
CATDefineCommonTIEMembers(CATIParmProvider, classe) \
 \
 \
CATImplementTIEMethods(CATIParmProvider, classe) \
CATImplementIUnknownMethodsForCATBaseUnknownTIE(CATIParmProvider, classe, 1) \
CATImplementIDispatchMethodsForCATBaseUnknownTIE(CATIParmProvider, classe) \
CATImplementCATBaseUnknownMethodsForTIE(CATIParmProvider, classe) \
 \
HRESULT  TIECATIParmProvider##classe::GetDirectChildren(CATClassId intfName, CATListValCATBaseUnknown_var* oList,CATBaseUnknown* iObj) \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetDirectChildren(intfName,oList,iObj)); \
} \



/* Macro used to link an implementation with an interface */
#define TIE_CATIParmProvider(classe) \
 \
 \
declare_TIE_CATIParmProvider(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIParmProvider##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIParmProvider,"CATIParmProvider",CATIParmProvider::MetaObject(),classe::MetaObject(),TIE); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIParmProvider(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIECreation(CATIParmProvider, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIParmProvider##classe(classe::MetaObject(),CATIParmProvider::MetaObject(),(void *)CreateTIECATIParmProvider##classe)



/* Macro used to link an implementation with an interface */
/* This TIE is chained on the implementation object */
#define TIEchain_CATIParmProvider(classe) \
 \
 \
declare_TIE_CATIParmProvider(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIParmProvider##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIParmProvider,"CATIParmProvider",CATIParmProvider::MetaObject(),classe::MetaObject(),TIEchain); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIParmProvider(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIEchainCreation(CATIParmProvider, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIParmProvider##classe(classe::MetaObject(),CATIParmProvider::MetaObject(),(void *)CreateTIECATIParmProvider##classe)


/* Macro to switch between BOA and TIE at build time */ 
#ifdef CATSYS_BOA_IS_TIE
#define BOA_CATIParmProvider(classe) TIE_CATIParmProvider(classe)
#else
#define BOA_CATIParmProvider(classe) CATImplementBOA(CATIParmProvider, classe)
#endif

#endif
