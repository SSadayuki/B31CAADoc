#ifndef __TIE_CATISchAppObjectFactory2
#define __TIE_CATISchAppObjectFactory2

#include <string.h>
#include "CATBaseUnknown.h"
#include "CATMetaClass.h"
#include "CATMacForTie.h"
#include "CATISchAppObjectFactory2.h"
#include "JS0DSPA.h"


#ifdef _WINDOWS_SOURCE
#define Exported __declspec(dllexport)
#define Imported __declspec(dllimport)
#else
#define Exported 
#define Imported 
#endif


/* To link an implementation with the interface CATISchAppObjectFactory2 */
#define declare_TIE_CATISchAppObjectFactory2(classe) \
 \
 \
class TIECATISchAppObjectFactory2##classe : public CATISchAppObjectFactory2 \
{ \
   private: \
      CATDeclareCommonTIEMembers \
      CATDeclareNotCATBaseUnknownTIEMembers \
   public: \
      CATDeclareTIEMethods(CATISchAppObjectFactory2, classe) \
      CATDeclareIUnknownMethodsForNotCATBaseUnknownTIE \
      CATDeclareCATBaseUnknownMethodsForTIE \
      virtual HRESULT AppCreateRouteWithInfo(const char *iAppRouteClassType, IUnknown *iAppInfo, IUnknown **oAppRoute) ; \
      virtual HRESULT AppCreateCompRef (const char *iAppCompClassType, const CATDocument *iDoc, IUnknown **oAppComp) ; \
      virtual HRESULT AppCreateRoute (const char *iAppRouteClassType, const CATDocument *iDoc, const char *iLogLineID, IUnknown **oAppRoute) ; \
      virtual HRESULT AppCreateRouteFromRef (CATISchAppRoute *iRouteReference, const CATDocument *iDoc, const char *iLogLineID, IUnknown **oAppRoute) ; \
      virtual HRESULT AppCreateGroup (const char *iAppGroupClassType, const CATDocument *iDoc, IUnknown **oAppGroup) ; \
      virtual HRESULT AppCreateZone (const char *iAppZoneClassType, const CATDocument *iDoc, IUnknown **oAppZone) ; \
      virtual HRESULT AppCreateConnection (const char *iAppCntnClassType, const CATDocument *iDoc, IUnknown **oAppConnection) ; \
      virtual HRESULT AppCreateRoute2 (const char *iAppRouteClassType, const CATDocument *iDoc, const CATUnicodeString *iLogLineID, IUnknown **oAppRoute) ; \
      virtual HRESULT AppCreateRouteFromRef2 (CATISchAppRoute *iRouteReference, const CATDocument *iDoc, const CATUnicodeString *iLogLineID, IUnknown **oAppRoute) ; \
};



#define ENVTIEdeclare_CATISchAppObjectFactory2(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
virtual HRESULT AppCreateRouteWithInfo(const char *iAppRouteClassType, IUnknown *iAppInfo, IUnknown **oAppRoute) ; \
virtual HRESULT AppCreateCompRef (const char *iAppCompClassType, const CATDocument *iDoc, IUnknown **oAppComp) ; \
virtual HRESULT AppCreateRoute (const char *iAppRouteClassType, const CATDocument *iDoc, const char *iLogLineID, IUnknown **oAppRoute) ; \
virtual HRESULT AppCreateRouteFromRef (CATISchAppRoute *iRouteReference, const CATDocument *iDoc, const char *iLogLineID, IUnknown **oAppRoute) ; \
virtual HRESULT AppCreateGroup (const char *iAppGroupClassType, const CATDocument *iDoc, IUnknown **oAppGroup) ; \
virtual HRESULT AppCreateZone (const char *iAppZoneClassType, const CATDocument *iDoc, IUnknown **oAppZone) ; \
virtual HRESULT AppCreateConnection (const char *iAppCntnClassType, const CATDocument *iDoc, IUnknown **oAppConnection) ; \
virtual HRESULT AppCreateRoute2 (const char *iAppRouteClassType, const CATDocument *iDoc, const CATUnicodeString *iLogLineID, IUnknown **oAppRoute) ; \
virtual HRESULT AppCreateRouteFromRef2 (CATISchAppRoute *iRouteReference, const CATDocument *iDoc, const CATUnicodeString *iLogLineID, IUnknown **oAppRoute) ; \


#define ENVTIEdefine_CATISchAppObjectFactory2(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
HRESULT  ENVTIEName::AppCreateRouteWithInfo(const char *iAppRouteClassType, IUnknown *iAppInfo, IUnknown **oAppRoute)  \
{ \
return (ENVTIECALL(CATISchAppObjectFactory2,ENVTIETypeLetter,ENVTIELetter)AppCreateRouteWithInfo(iAppRouteClassType,iAppInfo,oAppRoute)); \
} \
HRESULT  ENVTIEName::AppCreateCompRef (const char *iAppCompClassType, const CATDocument *iDoc, IUnknown **oAppComp)  \
{ \
return (ENVTIECALL(CATISchAppObjectFactory2,ENVTIETypeLetter,ENVTIELetter)AppCreateCompRef (iAppCompClassType,iDoc,oAppComp)); \
} \
HRESULT  ENVTIEName::AppCreateRoute (const char *iAppRouteClassType, const CATDocument *iDoc, const char *iLogLineID, IUnknown **oAppRoute)  \
{ \
return (ENVTIECALL(CATISchAppObjectFactory2,ENVTIETypeLetter,ENVTIELetter)AppCreateRoute (iAppRouteClassType,iDoc,iLogLineID,oAppRoute)); \
} \
HRESULT  ENVTIEName::AppCreateRouteFromRef (CATISchAppRoute *iRouteReference, const CATDocument *iDoc, const char *iLogLineID, IUnknown **oAppRoute)  \
{ \
return (ENVTIECALL(CATISchAppObjectFactory2,ENVTIETypeLetter,ENVTIELetter)AppCreateRouteFromRef (iRouteReference,iDoc,iLogLineID,oAppRoute)); \
} \
HRESULT  ENVTIEName::AppCreateGroup (const char *iAppGroupClassType, const CATDocument *iDoc, IUnknown **oAppGroup)  \
{ \
return (ENVTIECALL(CATISchAppObjectFactory2,ENVTIETypeLetter,ENVTIELetter)AppCreateGroup (iAppGroupClassType,iDoc,oAppGroup)); \
} \
HRESULT  ENVTIEName::AppCreateZone (const char *iAppZoneClassType, const CATDocument *iDoc, IUnknown **oAppZone)  \
{ \
return (ENVTIECALL(CATISchAppObjectFactory2,ENVTIETypeLetter,ENVTIELetter)AppCreateZone (iAppZoneClassType,iDoc,oAppZone)); \
} \
HRESULT  ENVTIEName::AppCreateConnection (const char *iAppCntnClassType, const CATDocument *iDoc, IUnknown **oAppConnection)  \
{ \
return (ENVTIECALL(CATISchAppObjectFactory2,ENVTIETypeLetter,ENVTIELetter)AppCreateConnection (iAppCntnClassType,iDoc,oAppConnection)); \
} \
HRESULT  ENVTIEName::AppCreateRoute2 (const char *iAppRouteClassType, const CATDocument *iDoc, const CATUnicodeString *iLogLineID, IUnknown **oAppRoute)  \
{ \
return (ENVTIECALL(CATISchAppObjectFactory2,ENVTIETypeLetter,ENVTIELetter)AppCreateRoute2 (iAppRouteClassType,iDoc,iLogLineID,oAppRoute)); \
} \
HRESULT  ENVTIEName::AppCreateRouteFromRef2 (CATISchAppRoute *iRouteReference, const CATDocument *iDoc, const CATUnicodeString *iLogLineID, IUnknown **oAppRoute)  \
{ \
return (ENVTIECALL(CATISchAppObjectFactory2,ENVTIETypeLetter,ENVTIELetter)AppCreateRouteFromRef2 (iRouteReference,iDoc,iLogLineID,oAppRoute)); \
} \


/* Name of the TIE class */
#define class_TIE_CATISchAppObjectFactory2(classe)    TIECATISchAppObjectFactory2##classe


/* Common methods inside a TIE */
#define common_TIE_CATISchAppObjectFactory2(classe) \
 \
 \
/* Static initialization */ \
CATDefineCommonTIEMembers(CATISchAppObjectFactory2, classe) \
 \
 \
CATImplementNotCATBaseUnknownTIEMethods(CATISchAppObjectFactory2, classe) \
CATImplementIUnknownMethodsForNotCATBaseUnknownTIE(CATISchAppObjectFactory2, classe, 0) \
CATImplementCATBaseUnknownMethodsForTIE(CATISchAppObjectFactory2, classe) \
 \
HRESULT  TIECATISchAppObjectFactory2##classe::AppCreateRouteWithInfo(const char *iAppRouteClassType, IUnknown *iAppInfo, IUnknown **oAppRoute)  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->AppCreateRouteWithInfo(iAppRouteClassType,iAppInfo,oAppRoute)); \
} \
HRESULT  TIECATISchAppObjectFactory2##classe::AppCreateCompRef (const char *iAppCompClassType, const CATDocument *iDoc, IUnknown **oAppComp)  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->AppCreateCompRef (iAppCompClassType,iDoc,oAppComp)); \
} \
HRESULT  TIECATISchAppObjectFactory2##classe::AppCreateRoute (const char *iAppRouteClassType, const CATDocument *iDoc, const char *iLogLineID, IUnknown **oAppRoute)  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->AppCreateRoute (iAppRouteClassType,iDoc,iLogLineID,oAppRoute)); \
} \
HRESULT  TIECATISchAppObjectFactory2##classe::AppCreateRouteFromRef (CATISchAppRoute *iRouteReference, const CATDocument *iDoc, const char *iLogLineID, IUnknown **oAppRoute)  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->AppCreateRouteFromRef (iRouteReference,iDoc,iLogLineID,oAppRoute)); \
} \
HRESULT  TIECATISchAppObjectFactory2##classe::AppCreateGroup (const char *iAppGroupClassType, const CATDocument *iDoc, IUnknown **oAppGroup)  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->AppCreateGroup (iAppGroupClassType,iDoc,oAppGroup)); \
} \
HRESULT  TIECATISchAppObjectFactory2##classe::AppCreateZone (const char *iAppZoneClassType, const CATDocument *iDoc, IUnknown **oAppZone)  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->AppCreateZone (iAppZoneClassType,iDoc,oAppZone)); \
} \
HRESULT  TIECATISchAppObjectFactory2##classe::AppCreateConnection (const char *iAppCntnClassType, const CATDocument *iDoc, IUnknown **oAppConnection)  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->AppCreateConnection (iAppCntnClassType,iDoc,oAppConnection)); \
} \
HRESULT  TIECATISchAppObjectFactory2##classe::AppCreateRoute2 (const char *iAppRouteClassType, const CATDocument *iDoc, const CATUnicodeString *iLogLineID, IUnknown **oAppRoute)  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->AppCreateRoute2 (iAppRouteClassType,iDoc,iLogLineID,oAppRoute)); \
} \
HRESULT  TIECATISchAppObjectFactory2##classe::AppCreateRouteFromRef2 (CATISchAppRoute *iRouteReference, const CATDocument *iDoc, const CATUnicodeString *iLogLineID, IUnknown **oAppRoute)  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->AppCreateRouteFromRef2 (iRouteReference,iDoc,iLogLineID,oAppRoute)); \
} \



/* Macro used to link an implementation with an interface */
#define TIE_CATISchAppObjectFactory2(classe) \
 \
 \
declare_TIE_CATISchAppObjectFactory2(classe) \
 \
 \
CATMetaClass * __stdcall TIECATISchAppObjectFactory2##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATISchAppObjectFactory2,"CATISchAppObjectFactory2",NULL,classe::MetaObject(),TIE); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATISchAppObjectFactory2(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIECreation(CATISchAppObjectFactory2, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATISchAppObjectFactory2##classe(classe::MetaObject(),TIECATISchAppObjectFactory2##classe::MetaObject(),(void *)CreateTIECATISchAppObjectFactory2##classe)



/* Macro used to link an implementation with an interface */
/* This TIE is chained on the implementation object */
#define TIEchain_CATISchAppObjectFactory2(classe) \
 \
 \
declare_TIE_CATISchAppObjectFactory2(classe) \
 \
 \
CATMetaClass * __stdcall TIECATISchAppObjectFactory2##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATISchAppObjectFactory2,"CATISchAppObjectFactory2",NULL,classe::MetaObject(),TIEchain); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATISchAppObjectFactory2(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIEchainCreation(CATISchAppObjectFactory2, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATISchAppObjectFactory2##classe(classe::MetaObject(),TIECATISchAppObjectFactory2##classe::MetaObject(),(void *)CreateTIECATISchAppObjectFactory2##classe)


/* Macro to switch between BOA and TIE at build time */ 
#ifdef CATSYS_BOA_IS_TIE
#define BOA_CATISchAppObjectFactory2(classe) TIE_CATISchAppObjectFactory2(classe)
#else
#define BOA_CATISchAppObjectFactory2(classe) CATImplementBOA(CATISchAppObjectFactory2, classe)
#endif

#endif
