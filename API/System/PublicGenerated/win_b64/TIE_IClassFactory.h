#ifndef __TIE_IClassFactory
#define __TIE_IClassFactory

#include <string.h>
#include "CATBaseUnknown.h"
#include "CATMetaClass.h"
#include "CATMacForTie.h"
#include "IClassFactory.h"
#include "JS0DSPA.h"


#ifdef _WINDOWS_SOURCE
#define Exported __declspec(dllexport)
#define Imported __declspec(dllimport)
#else
#define Exported 
#define Imported 
#endif


/* To link an implementation with the interface IClassFactory */
#define declare_TIE_IClassFactory(classe) \
 \
 \
class TIEIClassFactory##classe : public IClassFactory \
{ \
   private: \
      CATDeclareCommonTIEMembers \
      CATDeclareNotCATBaseUnknownTIEMembers \
   public: \
      CATDeclareTIEMethods(IClassFactory, classe) \
      CATDeclareIUnknownMethodsForNotCATBaseUnknownTIE \
      CATDeclareCATBaseUnknownMethodsForTIE \
      virtual  HRESULT STDMETHODCALLTYPE CreateInstance( IUnknown *pUnkOuter, const IID & riid, void **ppvObject) ; \
      virtual  HRESULT STDMETHODCALLTYPE LockServer( BOOL fLock) ; \
};



#define ENVTIEdeclare_IClassFactory(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
virtual  HRESULT STDMETHODCALLTYPE CreateInstance( IUnknown *pUnkOuter, const IID & riid, void **ppvObject) ; \
virtual  HRESULT STDMETHODCALLTYPE LockServer( BOOL fLock) ; \


#define ENVTIEdefine_IClassFactory(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
HRESULT STDMETHODCALLTYPE  ENVTIEName::CreateInstance( IUnknown *pUnkOuter, const IID & riid, void **ppvObject)  \
{ \
return (ENVTIECALL(IClassFactory,ENVTIETypeLetter,ENVTIELetter)CreateInstance(pUnkOuter,riid,ppvObject)); \
} \
HRESULT STDMETHODCALLTYPE  ENVTIEName::LockServer( BOOL fLock)  \
{ \
return (ENVTIECALL(IClassFactory,ENVTIETypeLetter,ENVTIELetter)LockServer(fLock)); \
} \


/* Name of the TIE class */
#define class_TIE_IClassFactory(classe)    TIEIClassFactory##classe


/* Common methods inside a TIE */
#define common_TIE_IClassFactory(classe) \
 \
 \
/* Static initialization */ \
CATDefineCommonTIEMembers(IClassFactory, classe) \
 \
 \
CATImplementNotCATBaseUnknownTIEMethods(IClassFactory, classe) \
CATImplementIUnknownMethodsForNotCATBaseUnknownTIE(IClassFactory, classe, 0) \
CATImplementCATBaseUnknownMethodsForTIE(IClassFactory, classe) \
 \
HRESULT STDMETHODCALLTYPE  TIEIClassFactory##classe::CreateInstance( IUnknown *pUnkOuter, const IID & riid, void **ppvObject)  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->CreateInstance(pUnkOuter,riid,ppvObject)); \
} \
HRESULT STDMETHODCALLTYPE  TIEIClassFactory##classe::LockServer( BOOL fLock)  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->LockServer(fLock)); \
} \



/* Macro used to link an implementation with an interface */
#define TIE_IClassFactory(classe) \
 \
 \
declare_TIE_IClassFactory(classe) \
 \
 \
CATMetaClass * __stdcall TIEIClassFactory##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_IClassFactory,"IClassFactory",NULL,classe::MetaObject(),TIE); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_IClassFactory(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIECreation(IClassFactory, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicIClassFactory##classe(classe::MetaObject(),TIEIClassFactory##classe::MetaObject(),(void *)CreateTIEIClassFactory##classe)



/* Macro used to link an implementation with an interface */
/* This TIE is chained on the implementation object */
#define TIEchain_IClassFactory(classe) \
 \
 \
declare_TIE_IClassFactory(classe) \
 \
 \
CATMetaClass * __stdcall TIEIClassFactory##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_IClassFactory,"IClassFactory",NULL,classe::MetaObject(),TIEchain); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_IClassFactory(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIEchainCreation(IClassFactory, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicIClassFactory##classe(classe::MetaObject(),TIEIClassFactory##classe::MetaObject(),(void *)CreateTIEIClassFactory##classe)


/* Macro to switch between BOA and TIE at build time */ 
#ifdef CATSYS_BOA_IS_TIE
#define BOA_IClassFactory(classe) TIE_IClassFactory(classe)
#else
#define BOA_IClassFactory(classe) CATImplementBOA(IClassFactory, classe)
#endif

#endif
