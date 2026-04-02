#ifndef __TIE_CATISchAppGroup
#define __TIE_CATISchAppGroup

#include <string.h>
#include "CATBaseUnknown.h"
#include "CATMetaClass.h"
#include "CATMacForTie.h"
#include "CATISchAppGroup.h"
#include "JS0DSPA.h"


#ifdef _WINDOWS_SOURCE
#define Exported __declspec(dllexport)
#define Imported __declspec(dllimport)
#else
#define Exported 
#define Imported 
#endif


/* To link an implementation with the interface CATISchAppGroup */
#define declare_TIE_CATISchAppGroup(classe) \
 \
 \
class TIECATISchAppGroup##classe : public CATISchAppGroup \
{ \
   private: \
      CATDeclareCommonTIEMembers \
      CATDeclareNotCATBaseUnknownTIEMembers \
   public: \
      CATDeclareTIEMethods(CATISchAppGroup, classe) \
      CATDeclareIUnknownMethodsForNotCATBaseUnknownTIE \
      CATDeclareCATBaseUnknownMethodsForTIE \
      virtual HRESULT ListZones (const char *iClassType, CATIUnknownList **oLZones) ; \
};



#define ENVTIEdeclare_CATISchAppGroup(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
virtual HRESULT ListZones (const char *iClassType, CATIUnknownList **oLZones) ; \


#define ENVTIEdefine_CATISchAppGroup(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
HRESULT  ENVTIEName::ListZones (const char *iClassType, CATIUnknownList **oLZones)  \
{ \
return (ENVTIECALL(CATISchAppGroup,ENVTIETypeLetter,ENVTIELetter)ListZones (iClassType,oLZones)); \
} \


/* Name of the TIE class */
#define class_TIE_CATISchAppGroup(classe)    TIECATISchAppGroup##classe


/* Common methods inside a TIE */
#define common_TIE_CATISchAppGroup(classe) \
 \
 \
/* Static initialization */ \
CATDefineCommonTIEMembers(CATISchAppGroup, classe) \
 \
 \
CATImplementNotCATBaseUnknownTIEMethods(CATISchAppGroup, classe) \
CATImplementIUnknownMethodsForNotCATBaseUnknownTIE(CATISchAppGroup, classe, 0) \
CATImplementCATBaseUnknownMethodsForTIE(CATISchAppGroup, classe) \
 \
HRESULT  TIECATISchAppGroup##classe::ListZones (const char *iClassType, CATIUnknownList **oLZones)  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->ListZones (iClassType,oLZones)); \
} \



/* Macro used to link an implementation with an interface */
#define TIE_CATISchAppGroup(classe) \
 \
 \
declare_TIE_CATISchAppGroup(classe) \
 \
 \
CATMetaClass * __stdcall TIECATISchAppGroup##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATISchAppGroup,"CATISchAppGroup",NULL,classe::MetaObject(),TIE); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATISchAppGroup(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIECreation(CATISchAppGroup, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATISchAppGroup##classe(classe::MetaObject(),TIECATISchAppGroup##classe::MetaObject(),(void *)CreateTIECATISchAppGroup##classe)



/* Macro used to link an implementation with an interface */
/* This TIE is chained on the implementation object */
#define TIEchain_CATISchAppGroup(classe) \
 \
 \
declare_TIE_CATISchAppGroup(classe) \
 \
 \
CATMetaClass * __stdcall TIECATISchAppGroup##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATISchAppGroup,"CATISchAppGroup",NULL,classe::MetaObject(),TIEchain); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATISchAppGroup(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIEchainCreation(CATISchAppGroup, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATISchAppGroup##classe(classe::MetaObject(),TIECATISchAppGroup##classe::MetaObject(),(void *)CreateTIECATISchAppGroup##classe)


/* Macro to switch between BOA and TIE at build time */ 
#ifdef CATSYS_BOA_IS_TIE
#define BOA_CATISchAppGroup(classe) TIE_CATISchAppGroup(classe)
#else
#define BOA_CATISchAppGroup(classe) CATImplementBOA(CATISchAppGroup, classe)
#endif

#endif
