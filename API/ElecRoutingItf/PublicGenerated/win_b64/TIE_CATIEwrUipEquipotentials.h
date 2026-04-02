#ifndef __TIE_CATIEwrUipEquipotentials
#define __TIE_CATIEwrUipEquipotentials

#include <string.h>
#include "CATBaseUnknown.h"
#include "CATMetaClass.h"
#include "CATMacForTie.h"
#include "CATIEwrUipEquipotentials.h"
#include "JS0DSPA.h"


#ifdef _WINDOWS_SOURCE
#define Exported __declspec(dllexport)
#define Imported __declspec(dllimport)
#else
#define Exported 
#define Imported 
#endif


/* To link an implementation with the interface CATIEwrUipEquipotentials */
#define declare_TIE_CATIEwrUipEquipotentials(classe) \
 \
 \
class TIECATIEwrUipEquipotentials##classe : public CATIEwrUipEquipotentials \
{ \
   private: \
      CATDeclareCommonTIEMembers \
   public: \
      CATDeclareTIEMethods(CATIEwrUipEquipotentials, classe) \
      CATDeclareIUnknownMethodsForCATBaseUnknownTIE \
      CATDeclareIDispatchMethodsForCATBaseUnknownTIE \
      CATDeclareCATBaseUnknownMethodsForTIE \
      virtual HRESULT ListEquipotentials(const CATListValCATUnicodeString *iListOfSystems, CATLONG32 &oEquipotentialsCount, CATEwrEquipotential *&oListOfEquipotentials) ; \
};



#define ENVTIEdeclare_CATIEwrUipEquipotentials(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
virtual HRESULT ListEquipotentials(const CATListValCATUnicodeString *iListOfSystems, CATLONG32 &oEquipotentialsCount, CATEwrEquipotential *&oListOfEquipotentials) ; \


#define ENVTIEdefine_CATIEwrUipEquipotentials(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
HRESULT  ENVTIEName::ListEquipotentials(const CATListValCATUnicodeString *iListOfSystems, CATLONG32 &oEquipotentialsCount, CATEwrEquipotential *&oListOfEquipotentials)  \
{ \
return (ENVTIECALL(CATIEwrUipEquipotentials,ENVTIETypeLetter,ENVTIELetter)ListEquipotentials(iListOfSystems,oEquipotentialsCount,oListOfEquipotentials)); \
} \


/* Name of the TIE class */
#define class_TIE_CATIEwrUipEquipotentials(classe)    TIECATIEwrUipEquipotentials##classe


/* Common methods inside a TIE */
#define common_TIE_CATIEwrUipEquipotentials(classe) \
 \
 \
/* Static initialization */ \
CATDefineCommonTIEMembers(CATIEwrUipEquipotentials, classe) \
 \
 \
CATImplementTIEMethods(CATIEwrUipEquipotentials, classe) \
CATImplementIUnknownMethodsForCATBaseUnknownTIE(CATIEwrUipEquipotentials, classe, 1) \
CATImplementIDispatchMethodsForCATBaseUnknownTIE(CATIEwrUipEquipotentials, classe) \
CATImplementCATBaseUnknownMethodsForTIE(CATIEwrUipEquipotentials, classe) \
 \
HRESULT  TIECATIEwrUipEquipotentials##classe::ListEquipotentials(const CATListValCATUnicodeString *iListOfSystems, CATLONG32 &oEquipotentialsCount, CATEwrEquipotential *&oListOfEquipotentials)  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->ListEquipotentials(iListOfSystems,oEquipotentialsCount,oListOfEquipotentials)); \
} \



/* Macro used to link an implementation with an interface */
#define TIE_CATIEwrUipEquipotentials(classe) \
 \
 \
declare_TIE_CATIEwrUipEquipotentials(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIEwrUipEquipotentials##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIEwrUipEquipotentials,"CATIEwrUipEquipotentials",CATIEwrUipEquipotentials::MetaObject(),classe::MetaObject(),TIE); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIEwrUipEquipotentials(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIECreation(CATIEwrUipEquipotentials, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIEwrUipEquipotentials##classe(classe::MetaObject(),CATIEwrUipEquipotentials::MetaObject(),(void *)CreateTIECATIEwrUipEquipotentials##classe)



/* Macro used to link an implementation with an interface */
/* This TIE is chained on the implementation object */
#define TIEchain_CATIEwrUipEquipotentials(classe) \
 \
 \
declare_TIE_CATIEwrUipEquipotentials(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIEwrUipEquipotentials##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIEwrUipEquipotentials,"CATIEwrUipEquipotentials",CATIEwrUipEquipotentials::MetaObject(),classe::MetaObject(),TIEchain); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIEwrUipEquipotentials(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIEchainCreation(CATIEwrUipEquipotentials, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIEwrUipEquipotentials##classe(classe::MetaObject(),CATIEwrUipEquipotentials::MetaObject(),(void *)CreateTIECATIEwrUipEquipotentials##classe)


/* Macro to switch between BOA and TIE at build time */ 
#ifdef CATSYS_BOA_IS_TIE
#define BOA_CATIEwrUipEquipotentials(classe) TIE_CATIEwrUipEquipotentials(classe)
#else
#define BOA_CATIEwrUipEquipotentials(classe) CATImplementBOA(CATIEwrUipEquipotentials, classe)
#endif

#endif
