#ifndef __TIE_CATISchAppClass
#define __TIE_CATISchAppClass

#include <string.h>
#include "CATBaseUnknown.h"
#include "CATMetaClass.h"
#include "CATMacForTie.h"
#include "CATISchAppClass.h"
#include "JS0DSPA.h"


#ifdef _WINDOWS_SOURCE
#define Exported __declspec(dllexport)
#define Imported __declspec(dllimport)
#else
#define Exported 
#define Imported 
#endif


/* To link an implementation with the interface CATISchAppClass */
#define declare_TIE_CATISchAppClass(classe) \
 \
 \
class TIECATISchAppClass##classe : public CATISchAppClass \
{ \
   private: \
      CATDeclareCommonTIEMembers \
      CATDeclareNotCATBaseUnknownTIEMembers \
   public: \
      CATDeclareTIEMethods(CATISchAppClass, classe) \
      CATDeclareIUnknownMethodsForNotCATBaseUnknownTIE \
      CATDeclareCATBaseUnknownMethodsForTIE \
      virtual HRESULT AppGetComponentBaseClass (CATICStringList **oLBaseCompClasses) ; \
      virtual HRESULT AppGetRouteBaseClass (char **oRouteClassName) ; \
      virtual HRESULT AppGetGroupBaseClass (char **oGroupClassName) ; \
      virtual HRESULT AppGetZoneBaseClass (char **oZoneClassName) ; \
      virtual HRESULT AppListValidRouteTypes (CATICStringList **oLValidRouteTypes) ; \
};



#define ENVTIEdeclare_CATISchAppClass(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
virtual HRESULT AppGetComponentBaseClass (CATICStringList **oLBaseCompClasses) ; \
virtual HRESULT AppGetRouteBaseClass (char **oRouteClassName) ; \
virtual HRESULT AppGetGroupBaseClass (char **oGroupClassName) ; \
virtual HRESULT AppGetZoneBaseClass (char **oZoneClassName) ; \
virtual HRESULT AppListValidRouteTypes (CATICStringList **oLValidRouteTypes) ; \


#define ENVTIEdefine_CATISchAppClass(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
HRESULT  ENVTIEName::AppGetComponentBaseClass (CATICStringList **oLBaseCompClasses)  \
{ \
return (ENVTIECALL(CATISchAppClass,ENVTIETypeLetter,ENVTIELetter)AppGetComponentBaseClass (oLBaseCompClasses)); \
} \
HRESULT  ENVTIEName::AppGetRouteBaseClass (char **oRouteClassName)  \
{ \
return (ENVTIECALL(CATISchAppClass,ENVTIETypeLetter,ENVTIELetter)AppGetRouteBaseClass (oRouteClassName)); \
} \
HRESULT  ENVTIEName::AppGetGroupBaseClass (char **oGroupClassName)  \
{ \
return (ENVTIECALL(CATISchAppClass,ENVTIETypeLetter,ENVTIELetter)AppGetGroupBaseClass (oGroupClassName)); \
} \
HRESULT  ENVTIEName::AppGetZoneBaseClass (char **oZoneClassName)  \
{ \
return (ENVTIECALL(CATISchAppClass,ENVTIETypeLetter,ENVTIELetter)AppGetZoneBaseClass (oZoneClassName)); \
} \
HRESULT  ENVTIEName::AppListValidRouteTypes (CATICStringList **oLValidRouteTypes)  \
{ \
return (ENVTIECALL(CATISchAppClass,ENVTIETypeLetter,ENVTIELetter)AppListValidRouteTypes (oLValidRouteTypes)); \
} \


/* Name of the TIE class */
#define class_TIE_CATISchAppClass(classe)    TIECATISchAppClass##classe


/* Common methods inside a TIE */
#define common_TIE_CATISchAppClass(classe) \
 \
 \
/* Static initialization */ \
CATDefineCommonTIEMembers(CATISchAppClass, classe) \
 \
 \
CATImplementNotCATBaseUnknownTIEMethods(CATISchAppClass, classe) \
CATImplementIUnknownMethodsForNotCATBaseUnknownTIE(CATISchAppClass, classe, 0) \
CATImplementCATBaseUnknownMethodsForTIE(CATISchAppClass, classe) \
 \
HRESULT  TIECATISchAppClass##classe::AppGetComponentBaseClass (CATICStringList **oLBaseCompClasses)  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->AppGetComponentBaseClass (oLBaseCompClasses)); \
} \
HRESULT  TIECATISchAppClass##classe::AppGetRouteBaseClass (char **oRouteClassName)  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->AppGetRouteBaseClass (oRouteClassName)); \
} \
HRESULT  TIECATISchAppClass##classe::AppGetGroupBaseClass (char **oGroupClassName)  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->AppGetGroupBaseClass (oGroupClassName)); \
} \
HRESULT  TIECATISchAppClass##classe::AppGetZoneBaseClass (char **oZoneClassName)  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->AppGetZoneBaseClass (oZoneClassName)); \
} \
HRESULT  TIECATISchAppClass##classe::AppListValidRouteTypes (CATICStringList **oLValidRouteTypes)  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->AppListValidRouteTypes (oLValidRouteTypes)); \
} \



/* Macro used to link an implementation with an interface */
#define TIE_CATISchAppClass(classe) \
 \
 \
declare_TIE_CATISchAppClass(classe) \
 \
 \
CATMetaClass * __stdcall TIECATISchAppClass##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATISchAppClass,"CATISchAppClass",NULL,classe::MetaObject(),TIE); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATISchAppClass(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIECreation(CATISchAppClass, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATISchAppClass##classe(classe::MetaObject(),TIECATISchAppClass##classe::MetaObject(),(void *)CreateTIECATISchAppClass##classe)



/* Macro used to link an implementation with an interface */
/* This TIE is chained on the implementation object */
#define TIEchain_CATISchAppClass(classe) \
 \
 \
declare_TIE_CATISchAppClass(classe) \
 \
 \
CATMetaClass * __stdcall TIECATISchAppClass##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATISchAppClass,"CATISchAppClass",NULL,classe::MetaObject(),TIEchain); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATISchAppClass(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIEchainCreation(CATISchAppClass, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATISchAppClass##classe(classe::MetaObject(),TIECATISchAppClass##classe::MetaObject(),(void *)CreateTIECATISchAppClass##classe)


/* Macro to switch between BOA and TIE at build time */ 
#ifdef CATSYS_BOA_IS_TIE
#define BOA_CATISchAppClass(classe) TIE_CATISchAppClass(classe)
#else
#define BOA_CATISchAppClass(classe) CATImplementBOA(CATISchAppClass, classe)
#endif

#endif
