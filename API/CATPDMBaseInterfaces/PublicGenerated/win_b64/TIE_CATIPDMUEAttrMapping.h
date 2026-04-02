#ifndef __TIE_CATIPDMUEAttrMapping
#define __TIE_CATIPDMUEAttrMapping

#include <string.h>
#include "CATBaseUnknown.h"
#include "CATMetaClass.h"
#include "CATMacForTie.h"
#include "CATIPDMUEAttrMapping.h"
#include "JS0DSPA.h"


#ifdef _WINDOWS_SOURCE
#define Exported __declspec(dllexport)
#define Imported __declspec(dllimport)
#else
#define Exported 
#define Imported 
#endif


/* To link an implementation with the interface CATIPDMUEAttrMapping */
#define declare_TIE_CATIPDMUEAttrMapping(classe) \
 \
 \
class TIECATIPDMUEAttrMapping##classe : public CATIPDMUEAttrMapping \
{ \
   private: \
      CATDeclareCommonTIEMembers \
   public: \
      CATDeclareTIEMethods(CATIPDMUEAttrMapping, classe) \
      CATDeclareIUnknownMethodsForCATBaseUnknownTIE \
      CATDeclareIDispatchMethodsForCATBaseUnknownTIE \
      CATDeclareCATBaseUnknownMethodsForTIE \
      virtual HRESULT DefineAttrValueFromCXEntity(CATIAttrMappingInfo*    ipIAttrMappingInfo, CATIAttrMappingAction*  ipIAttrMappingAction)  ; \
      virtual HRESULT DefineAttrValueFromDBEntity(CATIAttrMappingInfo*    ipIAttrMappingInfo, CATIAttrMappingAction*  ipIAttrMappingAction)  ; \
};



#define ENVTIEdeclare_CATIPDMUEAttrMapping(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
virtual HRESULT DefineAttrValueFromCXEntity(CATIAttrMappingInfo*    ipIAttrMappingInfo, CATIAttrMappingAction*  ipIAttrMappingAction)  ; \
virtual HRESULT DefineAttrValueFromDBEntity(CATIAttrMappingInfo*    ipIAttrMappingInfo, CATIAttrMappingAction*  ipIAttrMappingAction)  ; \


#define ENVTIEdefine_CATIPDMUEAttrMapping(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
HRESULT  ENVTIEName::DefineAttrValueFromCXEntity(CATIAttrMappingInfo*    ipIAttrMappingInfo, CATIAttrMappingAction*  ipIAttrMappingAction)   \
{ \
return (ENVTIECALL(CATIPDMUEAttrMapping,ENVTIETypeLetter,ENVTIELetter)DefineAttrValueFromCXEntity(ipIAttrMappingInfo,ipIAttrMappingAction)); \
} \
HRESULT  ENVTIEName::DefineAttrValueFromDBEntity(CATIAttrMappingInfo*    ipIAttrMappingInfo, CATIAttrMappingAction*  ipIAttrMappingAction)   \
{ \
return (ENVTIECALL(CATIPDMUEAttrMapping,ENVTIETypeLetter,ENVTIELetter)DefineAttrValueFromDBEntity(ipIAttrMappingInfo,ipIAttrMappingAction)); \
} \


/* Name of the TIE class */
#define class_TIE_CATIPDMUEAttrMapping(classe)    TIECATIPDMUEAttrMapping##classe


/* Common methods inside a TIE */
#define common_TIE_CATIPDMUEAttrMapping(classe) \
 \
 \
/* Static initialization */ \
CATDefineCommonTIEMembers(CATIPDMUEAttrMapping, classe) \
 \
 \
CATImplementTIEMethods(CATIPDMUEAttrMapping, classe) \
CATImplementIUnknownMethodsForCATBaseUnknownTIE(CATIPDMUEAttrMapping, classe, 1) \
CATImplementIDispatchMethodsForCATBaseUnknownTIE(CATIPDMUEAttrMapping, classe) \
CATImplementCATBaseUnknownMethodsForTIE(CATIPDMUEAttrMapping, classe) \
 \
HRESULT  TIECATIPDMUEAttrMapping##classe::DefineAttrValueFromCXEntity(CATIAttrMappingInfo*    ipIAttrMappingInfo, CATIAttrMappingAction*  ipIAttrMappingAction)   \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->DefineAttrValueFromCXEntity(ipIAttrMappingInfo,ipIAttrMappingAction)); \
} \
HRESULT  TIECATIPDMUEAttrMapping##classe::DefineAttrValueFromDBEntity(CATIAttrMappingInfo*    ipIAttrMappingInfo, CATIAttrMappingAction*  ipIAttrMappingAction)   \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->DefineAttrValueFromDBEntity(ipIAttrMappingInfo,ipIAttrMappingAction)); \
} \



/* Macro used to link an implementation with an interface */
#define TIE_CATIPDMUEAttrMapping(classe) \
 \
 \
declare_TIE_CATIPDMUEAttrMapping(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIPDMUEAttrMapping##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIPDMUEAttrMapping,"CATIPDMUEAttrMapping",CATIPDMUEAttrMapping::MetaObject(),classe::MetaObject(),TIE); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIPDMUEAttrMapping(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIECreation(CATIPDMUEAttrMapping, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIPDMUEAttrMapping##classe(classe::MetaObject(),CATIPDMUEAttrMapping::MetaObject(),(void *)CreateTIECATIPDMUEAttrMapping##classe)



/* Macro used to link an implementation with an interface */
/* This TIE is chained on the implementation object */
#define TIEchain_CATIPDMUEAttrMapping(classe) \
 \
 \
declare_TIE_CATIPDMUEAttrMapping(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIPDMUEAttrMapping##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIPDMUEAttrMapping,"CATIPDMUEAttrMapping",CATIPDMUEAttrMapping::MetaObject(),classe::MetaObject(),TIEchain); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIPDMUEAttrMapping(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIEchainCreation(CATIPDMUEAttrMapping, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIPDMUEAttrMapping##classe(classe::MetaObject(),CATIPDMUEAttrMapping::MetaObject(),(void *)CreateTIECATIPDMUEAttrMapping##classe)


/* Macro to switch between BOA and TIE at build time */ 
#ifdef CATSYS_BOA_IS_TIE
#define BOA_CATIPDMUEAttrMapping(classe) TIE_CATIPDMUEAttrMapping(classe)
#else
#define BOA_CATIPDMUEAttrMapping(classe) CATImplementBOA(CATIPDMUEAttrMapping, classe)
#endif

#endif
