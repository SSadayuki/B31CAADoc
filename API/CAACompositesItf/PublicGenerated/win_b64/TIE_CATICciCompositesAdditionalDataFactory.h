#ifndef __TIE_CATICciCompositesAdditionalDataFactory
#define __TIE_CATICciCompositesAdditionalDataFactory

#include <string.h>
#include "CATBaseUnknown.h"
#include "CATMetaClass.h"
#include "CATMacForTie.h"
#include "CATICciCompositesAdditionalDataFactory.h"
#include "JS0DSPA.h"


#ifdef _WINDOWS_SOURCE
#define Exported __declspec(dllexport)
#define Imported __declspec(dllimport)
#else
#define Exported 
#define Imported 
#endif


/* To link an implementation with the interface CATICciCompositesAdditionalDataFactory */
#define declare_TIE_CATICciCompositesAdditionalDataFactory(classe) \
 \
 \
class TIECATICciCompositesAdditionalDataFactory##classe : public CATICciCompositesAdditionalDataFactory \
{ \
   private: \
      CATDeclareCommonTIEMembers \
   public: \
      CATDeclareTIEMethods(CATICciCompositesAdditionalDataFactory, classe) \
      CATDeclareIUnknownMethodsForCATBaseUnknownTIE \
      CATDeclareIDispatchMethodsForCATBaseUnknownTIE \
      CATDeclareCATBaseUnknownMethodsForTIE \
      virtual HRESULT CreateButtSpliceZone(CATICciButtSpliceZone_var & oButtSpliceZone) ; \
      virtual HRESULT CreateNoSpliceZone(CATICciNoSpliceZone_var & oNoSpliceZone) ; \
};



#define ENVTIEdeclare_CATICciCompositesAdditionalDataFactory(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
virtual HRESULT CreateButtSpliceZone(CATICciButtSpliceZone_var & oButtSpliceZone) ; \
virtual HRESULT CreateNoSpliceZone(CATICciNoSpliceZone_var & oNoSpliceZone) ; \


#define ENVTIEdefine_CATICciCompositesAdditionalDataFactory(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
HRESULT  ENVTIEName::CreateButtSpliceZone(CATICciButtSpliceZone_var & oButtSpliceZone)  \
{ \
return (ENVTIECALL(CATICciCompositesAdditionalDataFactory,ENVTIETypeLetter,ENVTIELetter)CreateButtSpliceZone(oButtSpliceZone)); \
} \
HRESULT  ENVTIEName::CreateNoSpliceZone(CATICciNoSpliceZone_var & oNoSpliceZone)  \
{ \
return (ENVTIECALL(CATICciCompositesAdditionalDataFactory,ENVTIETypeLetter,ENVTIELetter)CreateNoSpliceZone(oNoSpliceZone)); \
} \


/* Name of the TIE class */
#define class_TIE_CATICciCompositesAdditionalDataFactory(classe)    TIECATICciCompositesAdditionalDataFactory##classe


/* Common methods inside a TIE */
#define common_TIE_CATICciCompositesAdditionalDataFactory(classe) \
 \
 \
/* Static initialization */ \
CATDefineCommonTIEMembers(CATICciCompositesAdditionalDataFactory, classe) \
 \
 \
CATImplementTIEMethods(CATICciCompositesAdditionalDataFactory, classe) \
CATImplementIUnknownMethodsForCATBaseUnknownTIE(CATICciCompositesAdditionalDataFactory, classe, 1) \
CATImplementIDispatchMethodsForCATBaseUnknownTIE(CATICciCompositesAdditionalDataFactory, classe) \
CATImplementCATBaseUnknownMethodsForTIE(CATICciCompositesAdditionalDataFactory, classe) \
 \
HRESULT  TIECATICciCompositesAdditionalDataFactory##classe::CreateButtSpliceZone(CATICciButtSpliceZone_var & oButtSpliceZone)  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->CreateButtSpliceZone(oButtSpliceZone)); \
} \
HRESULT  TIECATICciCompositesAdditionalDataFactory##classe::CreateNoSpliceZone(CATICciNoSpliceZone_var & oNoSpliceZone)  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->CreateNoSpliceZone(oNoSpliceZone)); \
} \



/* Macro used to link an implementation with an interface */
#define TIE_CATICciCompositesAdditionalDataFactory(classe) \
 \
 \
declare_TIE_CATICciCompositesAdditionalDataFactory(classe) \
 \
 \
CATMetaClass * __stdcall TIECATICciCompositesAdditionalDataFactory##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATICciCompositesAdditionalDataFactory,"CATICciCompositesAdditionalDataFactory",CATICciCompositesAdditionalDataFactory::MetaObject(),classe::MetaObject(),TIE); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATICciCompositesAdditionalDataFactory(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIECreation(CATICciCompositesAdditionalDataFactory, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATICciCompositesAdditionalDataFactory##classe(classe::MetaObject(),CATICciCompositesAdditionalDataFactory::MetaObject(),(void *)CreateTIECATICciCompositesAdditionalDataFactory##classe)



/* Macro used to link an implementation with an interface */
/* This TIE is chained on the implementation object */
#define TIEchain_CATICciCompositesAdditionalDataFactory(classe) \
 \
 \
declare_TIE_CATICciCompositesAdditionalDataFactory(classe) \
 \
 \
CATMetaClass * __stdcall TIECATICciCompositesAdditionalDataFactory##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATICciCompositesAdditionalDataFactory,"CATICciCompositesAdditionalDataFactory",CATICciCompositesAdditionalDataFactory::MetaObject(),classe::MetaObject(),TIEchain); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATICciCompositesAdditionalDataFactory(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIEchainCreation(CATICciCompositesAdditionalDataFactory, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATICciCompositesAdditionalDataFactory##classe(classe::MetaObject(),CATICciCompositesAdditionalDataFactory::MetaObject(),(void *)CreateTIECATICciCompositesAdditionalDataFactory##classe)


/* Macro to switch between BOA and TIE at build time */ 
#ifdef CATSYS_BOA_IS_TIE
#define BOA_CATICciCompositesAdditionalDataFactory(classe) TIE_CATICciCompositesAdditionalDataFactory(classe)
#else
#define BOA_CATICciCompositesAdditionalDataFactory(classe) CATImplementBOA(CATICciCompositesAdditionalDataFactory, classe)
#endif

#endif
