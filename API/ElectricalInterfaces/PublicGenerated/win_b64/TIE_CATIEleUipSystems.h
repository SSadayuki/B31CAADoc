#ifndef __TIE_CATIEleUipSystems
#define __TIE_CATIEleUipSystems

#include <string.h>
#include "CATBaseUnknown.h"
#include "CATMetaClass.h"
#include "CATMacForTie.h"
#include "CATIEleUipSystems.h"
#include "JS0DSPA.h"


#ifdef _WINDOWS_SOURCE
#define Exported __declspec(dllexport)
#define Imported __declspec(dllimport)
#else
#define Exported 
#define Imported 
#endif


/* To link an implementation with the interface CATIEleUipSystems */
#define declare_TIE_CATIEleUipSystems(classe) \
 \
 \
class TIECATIEleUipSystems##classe : public CATIEleUipSystems \
{ \
   private: \
      CATDeclareCommonTIEMembers \
   public: \
      CATDeclareTIEMethods(CATIEleUipSystems, classe) \
      CATDeclareIUnknownMethodsForCATBaseUnknownTIE \
      CATDeclareIDispatchMethodsForCATBaseUnknownTIE \
      CATDeclareCATBaseUnknownMethodsForTIE \
      virtual HRESULT ListSystems(CATListValCATUnicodeString *&oListOfSystems) ; \
};



#define ENVTIEdeclare_CATIEleUipSystems(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
virtual HRESULT ListSystems(CATListValCATUnicodeString *&oListOfSystems) ; \


#define ENVTIEdefine_CATIEleUipSystems(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
HRESULT  ENVTIEName::ListSystems(CATListValCATUnicodeString *&oListOfSystems)  \
{ \
return (ENVTIECALL(CATIEleUipSystems,ENVTIETypeLetter,ENVTIELetter)ListSystems(oListOfSystems)); \
} \


/* Name of the TIE class */
#define class_TIE_CATIEleUipSystems(classe)    TIECATIEleUipSystems##classe


/* Common methods inside a TIE */
#define common_TIE_CATIEleUipSystems(classe) \
 \
 \
/* Static initialization */ \
CATDefineCommonTIEMembers(CATIEleUipSystems, classe) \
 \
 \
CATImplementTIEMethods(CATIEleUipSystems, classe) \
CATImplementIUnknownMethodsForCATBaseUnknownTIE(CATIEleUipSystems, classe, 1) \
CATImplementIDispatchMethodsForCATBaseUnknownTIE(CATIEleUipSystems, classe) \
CATImplementCATBaseUnknownMethodsForTIE(CATIEleUipSystems, classe) \
 \
HRESULT  TIECATIEleUipSystems##classe::ListSystems(CATListValCATUnicodeString *&oListOfSystems)  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->ListSystems(oListOfSystems)); \
} \



/* Macro used to link an implementation with an interface */
#define TIE_CATIEleUipSystems(classe) \
 \
 \
declare_TIE_CATIEleUipSystems(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIEleUipSystems##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIEleUipSystems,"CATIEleUipSystems",CATIEleUipSystems::MetaObject(),classe::MetaObject(),TIE); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIEleUipSystems(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIECreation(CATIEleUipSystems, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIEleUipSystems##classe(classe::MetaObject(),CATIEleUipSystems::MetaObject(),(void *)CreateTIECATIEleUipSystems##classe)



/* Macro used to link an implementation with an interface */
/* This TIE is chained on the implementation object */
#define TIEchain_CATIEleUipSystems(classe) \
 \
 \
declare_TIE_CATIEleUipSystems(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIEleUipSystems##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIEleUipSystems,"CATIEleUipSystems",CATIEleUipSystems::MetaObject(),classe::MetaObject(),TIEchain); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIEleUipSystems(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIEchainCreation(CATIEleUipSystems, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIEleUipSystems##classe(classe::MetaObject(),CATIEleUipSystems::MetaObject(),(void *)CreateTIECATIEleUipSystems##classe)


/* Macro to switch between BOA and TIE at build time */ 
#ifdef CATSYS_BOA_IS_TIE
#define BOA_CATIEleUipSystems(classe) TIE_CATIEleUipSystems(classe)
#else
#define BOA_CATIEleUipSystems(classe) CATImplementBOA(CATIEleUipSystems, classe)
#endif

#endif
