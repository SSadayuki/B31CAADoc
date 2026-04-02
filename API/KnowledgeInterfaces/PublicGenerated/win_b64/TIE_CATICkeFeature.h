#ifndef __TIE_CATICkeFeature
#define __TIE_CATICkeFeature

#include <string.h>
#include "CATBaseUnknown.h"
#include "CATMetaClass.h"
#include "CATMacForTie.h"
#include "CATICkeFeature.h"
#include "JS0DSPA.h"


#ifdef _WINDOWS_SOURCE
#define Exported __declspec(dllexport)
#define Imported __declspec(dllimport)
#else
#define Exported 
#define Imported 
#endif


/* To link an implementation with the interface CATICkeFeature */
#define declare_TIE_CATICkeFeature(classe) \
 \
 \
class TIECATICkeFeature##classe : public CATICkeFeature \
{ \
   private: \
      CATDeclareCommonTIEMembers \
   public: \
      CATDeclareTIEMethods(CATICkeFeature, classe) \
      CATDeclareIUnknownMethodsForCATBaseUnknownTIE \
      CATDeclareIDispatchMethodsForCATBaseUnknownTIE \
      CATDeclareCATBaseUnknownMethodsForTIE \
      virtual CATICkeType_var GetType    () const ; \
};



#define ENVTIEdeclare_CATICkeFeature(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
virtual CATICkeType_var GetType    () const ; \


#define ENVTIEdefine_CATICkeFeature(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
CATICkeType_var  ENVTIEName::GetType    () const  \
{ \
return (ENVTIECALL(CATICkeFeature,ENVTIETypeLetter,ENVTIELetter)GetType    ()); \
} \


/* Name of the TIE class */
#define class_TIE_CATICkeFeature(classe)    TIECATICkeFeature##classe


/* Common methods inside a TIE */
#define common_TIE_CATICkeFeature(classe) \
 \
 \
/* Static initialization */ \
CATDefineCommonTIEMembers(CATICkeFeature, classe) \
 \
 \
CATImplementTIEMethods(CATICkeFeature, classe) \
CATImplementIUnknownMethodsForCATBaseUnknownTIE(CATICkeFeature, classe, 1) \
CATImplementIDispatchMethodsForCATBaseUnknownTIE(CATICkeFeature, classe) \
CATImplementCATBaseUnknownMethodsForTIE(CATICkeFeature, classe) \
 \
CATICkeType_var  TIECATICkeFeature##classe::GetType    () const  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetType    ()); \
} \



/* Macro used to link an implementation with an interface */
#define TIE_CATICkeFeature(classe) \
 \
 \
declare_TIE_CATICkeFeature(classe) \
 \
 \
CATMetaClass * __stdcall TIECATICkeFeature##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATICkeFeature,"CATICkeFeature",CATICkeFeature::MetaObject(),classe::MetaObject(),TIE); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATICkeFeature(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIECreation(CATICkeFeature, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATICkeFeature##classe(classe::MetaObject(),CATICkeFeature::MetaObject(),(void *)CreateTIECATICkeFeature##classe)



/* Macro used to link an implementation with an interface */
/* This TIE is chained on the implementation object */
#define TIEchain_CATICkeFeature(classe) \
 \
 \
declare_TIE_CATICkeFeature(classe) \
 \
 \
CATMetaClass * __stdcall TIECATICkeFeature##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATICkeFeature,"CATICkeFeature",CATICkeFeature::MetaObject(),classe::MetaObject(),TIEchain); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATICkeFeature(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIEchainCreation(CATICkeFeature, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATICkeFeature##classe(classe::MetaObject(),CATICkeFeature::MetaObject(),(void *)CreateTIECATICkeFeature##classe)


/* Macro to switch between BOA and TIE at build time */ 
#ifdef CATSYS_BOA_IS_TIE
#define BOA_CATICkeFeature(classe) TIE_CATICkeFeature(classe)
#else
#define BOA_CATICkeFeature(classe) CATImplementBOA(CATICkeFeature, classe)
#endif

#endif
