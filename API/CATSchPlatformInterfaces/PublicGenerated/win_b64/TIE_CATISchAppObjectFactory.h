#ifndef __TIE_CATISchAppObjectFactory
#define __TIE_CATISchAppObjectFactory

#include <string.h>
#include "CATBaseUnknown.h"
#include "CATMetaClass.h"
#include "CATMacForTie.h"
#include "CATISchAppObjectFactory.h"
#include "JS0DSPA.h"


#ifdef _WINDOWS_SOURCE
#define Exported __declspec(dllexport)
#define Imported __declspec(dllimport)
#else
#define Exported 
#define Imported 
#endif


/* To link an implementation with the interface CATISchAppObjectFactory */
#define declare_TIE_CATISchAppObjectFactory(classe) \
 \
 \
class TIECATISchAppObjectFactory##classe : public CATISchAppObjectFactory \
{ \
   private: \
      CATDeclareCommonTIEMembers \
      CATDeclareNotCATBaseUnknownTIEMembers \
   public: \
      CATDeclareTIEMethods(CATISchAppObjectFactory, classe) \
      CATDeclareIUnknownMethodsForNotCATBaseUnknownTIE \
      CATDeclareCATBaseUnknownMethodsForTIE \
      virtual HRESULT AppCreateCompRef (const char *iAppCompClassType, IUnknown **oAppComp) ; \
      virtual HRESULT AppCreateRoute (const char *iAppRouteClassType, IUnknown **oAppRoute, const char *iLogLineID=NULL) ; \
      virtual HRESULT AppCreateRouteFromRef (CATISchAppRoute *iRouteReference, IUnknown **oAppRoute, const char *iLogLineID=NULL) ; \
      virtual HRESULT AppCreateGroup (const char *iAppGroupClassType, IUnknown **oAppGroup) ; \
      virtual HRESULT AppCreateZone (const char *iAppZoneClassType, IUnknown **oAppZone) ; \
      virtual HRESULT AppCreateConnection (const char *iAppCntnClassType, IUnknown **oAppConnection) ; \
};



#define ENVTIEdeclare_CATISchAppObjectFactory(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
virtual HRESULT AppCreateCompRef (const char *iAppCompClassType, IUnknown **oAppComp) ; \
virtual HRESULT AppCreateRoute (const char *iAppRouteClassType, IUnknown **oAppRoute, const char *iLogLineID=NULL) ; \
virtual HRESULT AppCreateRouteFromRef (CATISchAppRoute *iRouteReference, IUnknown **oAppRoute, const char *iLogLineID=NULL) ; \
virtual HRESULT AppCreateGroup (const char *iAppGroupClassType, IUnknown **oAppGroup) ; \
virtual HRESULT AppCreateZone (const char *iAppZoneClassType, IUnknown **oAppZone) ; \
virtual HRESULT AppCreateConnection (const char *iAppCntnClassType, IUnknown **oAppConnection) ; \


#define ENVTIEdefine_CATISchAppObjectFactory(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
HRESULT  ENVTIEName::AppCreateCompRef (const char *iAppCompClassType, IUnknown **oAppComp)  \
{ \
return (ENVTIECALL(CATISchAppObjectFactory,ENVTIETypeLetter,ENVTIELetter)AppCreateCompRef (iAppCompClassType,oAppComp)); \
} \
HRESULT  ENVTIEName::AppCreateRoute (const char *iAppRouteClassType, IUnknown **oAppRoute, const char *iLogLineID)  \
{ \
return (ENVTIECALL(CATISchAppObjectFactory,ENVTIETypeLetter,ENVTIELetter)AppCreateRoute (iAppRouteClassType,oAppRoute,iLogLineID)); \
} \
HRESULT  ENVTIEName::AppCreateRouteFromRef (CATISchAppRoute *iRouteReference, IUnknown **oAppRoute, const char *iLogLineID)  \
{ \
return (ENVTIECALL(CATISchAppObjectFactory,ENVTIETypeLetter,ENVTIELetter)AppCreateRouteFromRef (iRouteReference,oAppRoute,iLogLineID)); \
} \
HRESULT  ENVTIEName::AppCreateGroup (const char *iAppGroupClassType, IUnknown **oAppGroup)  \
{ \
return (ENVTIECALL(CATISchAppObjectFactory,ENVTIETypeLetter,ENVTIELetter)AppCreateGroup (iAppGroupClassType,oAppGroup)); \
} \
HRESULT  ENVTIEName::AppCreateZone (const char *iAppZoneClassType, IUnknown **oAppZone)  \
{ \
return (ENVTIECALL(CATISchAppObjectFactory,ENVTIETypeLetter,ENVTIELetter)AppCreateZone (iAppZoneClassType,oAppZone)); \
} \
HRESULT  ENVTIEName::AppCreateConnection (const char *iAppCntnClassType, IUnknown **oAppConnection)  \
{ \
return (ENVTIECALL(CATISchAppObjectFactory,ENVTIETypeLetter,ENVTIELetter)AppCreateConnection (iAppCntnClassType,oAppConnection)); \
} \


/* Name of the TIE class */
#define class_TIE_CATISchAppObjectFactory(classe)    TIECATISchAppObjectFactory##classe


/* Common methods inside a TIE */
#define common_TIE_CATISchAppObjectFactory(classe) \
 \
 \
/* Static initialization */ \
CATDefineCommonTIEMembers(CATISchAppObjectFactory, classe) \
 \
 \
CATImplementNotCATBaseUnknownTIEMethods(CATISchAppObjectFactory, classe) \
CATImplementIUnknownMethodsForNotCATBaseUnknownTIE(CATISchAppObjectFactory, classe, 0) \
CATImplementCATBaseUnknownMethodsForTIE(CATISchAppObjectFactory, classe) \
 \
HRESULT  TIECATISchAppObjectFactory##classe::AppCreateCompRef (const char *iAppCompClassType, IUnknown **oAppComp)  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->AppCreateCompRef (iAppCompClassType,oAppComp)); \
} \
HRESULT  TIECATISchAppObjectFactory##classe::AppCreateRoute (const char *iAppRouteClassType, IUnknown **oAppRoute, const char *iLogLineID)  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->AppCreateRoute (iAppRouteClassType,oAppRoute,iLogLineID)); \
} \
HRESULT  TIECATISchAppObjectFactory##classe::AppCreateRouteFromRef (CATISchAppRoute *iRouteReference, IUnknown **oAppRoute, const char *iLogLineID)  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->AppCreateRouteFromRef (iRouteReference,oAppRoute,iLogLineID)); \
} \
HRESULT  TIECATISchAppObjectFactory##classe::AppCreateGroup (const char *iAppGroupClassType, IUnknown **oAppGroup)  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->AppCreateGroup (iAppGroupClassType,oAppGroup)); \
} \
HRESULT  TIECATISchAppObjectFactory##classe::AppCreateZone (const char *iAppZoneClassType, IUnknown **oAppZone)  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->AppCreateZone (iAppZoneClassType,oAppZone)); \
} \
HRESULT  TIECATISchAppObjectFactory##classe::AppCreateConnection (const char *iAppCntnClassType, IUnknown **oAppConnection)  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->AppCreateConnection (iAppCntnClassType,oAppConnection)); \
} \



/* Macro used to link an implementation with an interface */
#define TIE_CATISchAppObjectFactory(classe) \
 \
 \
declare_TIE_CATISchAppObjectFactory(classe) \
 \
 \
CATMetaClass * __stdcall TIECATISchAppObjectFactory##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATISchAppObjectFactory,"CATISchAppObjectFactory",NULL,classe::MetaObject(),TIE); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATISchAppObjectFactory(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIECreation(CATISchAppObjectFactory, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATISchAppObjectFactory##classe(classe::MetaObject(),TIECATISchAppObjectFactory##classe::MetaObject(),(void *)CreateTIECATISchAppObjectFactory##classe)



/* Macro used to link an implementation with an interface */
/* This TIE is chained on the implementation object */
#define TIEchain_CATISchAppObjectFactory(classe) \
 \
 \
declare_TIE_CATISchAppObjectFactory(classe) \
 \
 \
CATMetaClass * __stdcall TIECATISchAppObjectFactory##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATISchAppObjectFactory,"CATISchAppObjectFactory",NULL,classe::MetaObject(),TIEchain); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATISchAppObjectFactory(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIEchainCreation(CATISchAppObjectFactory, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATISchAppObjectFactory##classe(classe::MetaObject(),TIECATISchAppObjectFactory##classe::MetaObject(),(void *)CreateTIECATISchAppObjectFactory##classe)


/* Macro to switch between BOA and TIE at build time */ 
#ifdef CATSYS_BOA_IS_TIE
#define BOA_CATISchAppObjectFactory(classe) TIE_CATISchAppObjectFactory(classe)
#else
#define BOA_CATISchAppObjectFactory(classe) CATImplementBOA(CATISchAppObjectFactory, classe)
#endif

#endif
