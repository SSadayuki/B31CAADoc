#ifndef __TIE_CATIPDMUEResId
#define __TIE_CATIPDMUEResId

#include <string.h>
#include "CATBaseUnknown.h"
#include "CATMetaClass.h"
#include "CATMacForTie.h"
#include "CATIPDMUEResId.h"
#include "JS0DSPA.h"


#ifdef _WINDOWS_SOURCE
#define Exported __declspec(dllexport)
#define Imported __declspec(dllimport)
#else
#define Exported 
#define Imported 
#endif


/* To link an implementation with the interface CATIPDMUEResId */
#define declare_TIE_CATIPDMUEResId(classe) \
 \
 \
class TIECATIPDMUEResId##classe : public CATIPDMUEResId \
{ \
   private: \
      CATDeclareCommonTIEMembers \
   public: \
      CATDeclareTIEMethods(CATIPDMUEResId, classe) \
      CATDeclareIUnknownMethodsForCATBaseUnknownTIE \
      CATDeclareIDispatchMethodsForCATBaseUnknownTIE \
      CATDeclareCATBaseUnknownMethodsForTIE \
      virtual CATDbBinary CreateId(); \
};



#define ENVTIEdeclare_CATIPDMUEResId(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
virtual CATDbBinary CreateId(); \


#define ENVTIEdefine_CATIPDMUEResId(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
CATDbBinary  ENVTIEName::CreateId() \
{ \
return (ENVTIECALL(CATIPDMUEResId,ENVTIETypeLetter,ENVTIELetter)CreateId()); \
} \


/* Name of the TIE class */
#define class_TIE_CATIPDMUEResId(classe)    TIECATIPDMUEResId##classe


/* Common methods inside a TIE */
#define common_TIE_CATIPDMUEResId(classe) \
 \
 \
/* Static initialization */ \
CATDefineCommonTIEMembers(CATIPDMUEResId, classe) \
 \
 \
CATImplementTIEMethods(CATIPDMUEResId, classe) \
CATImplementIUnknownMethodsForCATBaseUnknownTIE(CATIPDMUEResId, classe, 1) \
CATImplementIDispatchMethodsForCATBaseUnknownTIE(CATIPDMUEResId, classe) \
CATImplementCATBaseUnknownMethodsForTIE(CATIPDMUEResId, classe) \
 \
CATDbBinary  TIECATIPDMUEResId##classe::CreateId() \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->CreateId()); \
} \



/* Macro used to link an implementation with an interface */
#define TIE_CATIPDMUEResId(classe) \
 \
 \
declare_TIE_CATIPDMUEResId(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIPDMUEResId##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIPDMUEResId,"CATIPDMUEResId",CATIPDMUEResId::MetaObject(),classe::MetaObject(),TIE); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIPDMUEResId(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIECreation(CATIPDMUEResId, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIPDMUEResId##classe(classe::MetaObject(),CATIPDMUEResId::MetaObject(),(void *)CreateTIECATIPDMUEResId##classe)



/* Macro used to link an implementation with an interface */
/* This TIE is chained on the implementation object */
#define TIEchain_CATIPDMUEResId(classe) \
 \
 \
declare_TIE_CATIPDMUEResId(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIPDMUEResId##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIPDMUEResId,"CATIPDMUEResId",CATIPDMUEResId::MetaObject(),classe::MetaObject(),TIEchain); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIPDMUEResId(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIEchainCreation(CATIPDMUEResId, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIPDMUEResId##classe(classe::MetaObject(),CATIPDMUEResId::MetaObject(),(void *)CreateTIECATIPDMUEResId##classe)


/* Macro to switch between BOA and TIE at build time */ 
#ifdef CATSYS_BOA_IS_TIE
#define BOA_CATIPDMUEResId(classe) TIE_CATIPDMUEResId(classe)
#else
#define BOA_CATIPDMUEResId(classe) CATImplementBOA(CATIPDMUEResId, classe)
#endif

#endif
