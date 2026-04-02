#ifndef __TIE_CATIMSHOperator
#define __TIE_CATIMSHOperator

#include <string.h>
#include "CATBaseUnknown.h"
#include "CATMetaClass.h"
#include "CATMacForTie.h"
#include "CATIMSHOperator.h"
#include "JS0DSPA.h"


#ifdef _WINDOWS_SOURCE
#define Exported __declspec(dllexport)
#define Imported __declspec(dllimport)
#else
#define Exported 
#define Imported 
#endif


/* To link an implementation with the interface CATIMSHOperator */
#define declare_TIE_CATIMSHOperator(classe) \
 \
 \
class TIECATIMSHOperator##classe : public CATIMSHOperator \
{ \
   private: \
      CATDeclareCommonTIEMembers \
   public: \
      CATDeclareTIEMethods(CATIMSHOperator, classe) \
      CATDeclareIUnknownMethodsForCATBaseUnknownTIE \
      CATDeclareIDispatchMethodsForCATBaseUnknownTIE \
      CATDeclareCATBaseUnknownMethodsForTIE \
      virtual HRESULT Operate ( CATIMSHMeshPart * iMeshPart ) ; \
};



#define ENVTIEdeclare_CATIMSHOperator(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
virtual HRESULT Operate ( CATIMSHMeshPart * iMeshPart ) ; \


#define ENVTIEdefine_CATIMSHOperator(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
HRESULT  ENVTIEName::Operate ( CATIMSHMeshPart * iMeshPart )  \
{ \
return (ENVTIECALL(CATIMSHOperator,ENVTIETypeLetter,ENVTIELetter)Operate (iMeshPart )); \
} \


/* Name of the TIE class */
#define class_TIE_CATIMSHOperator(classe)    TIECATIMSHOperator##classe


/* Common methods inside a TIE */
#define common_TIE_CATIMSHOperator(classe) \
 \
 \
/* Static initialization */ \
CATDefineCommonTIEMembers(CATIMSHOperator, classe) \
 \
 \
CATImplementTIEMethods(CATIMSHOperator, classe) \
CATImplementIUnknownMethodsForCATBaseUnknownTIE(CATIMSHOperator, classe, 1) \
CATImplementIDispatchMethodsForCATBaseUnknownTIE(CATIMSHOperator, classe) \
CATImplementCATBaseUnknownMethodsForTIE(CATIMSHOperator, classe) \
 \
HRESULT  TIECATIMSHOperator##classe::Operate ( CATIMSHMeshPart * iMeshPart )  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->Operate (iMeshPart )); \
} \



/* Macro used to link an implementation with an interface */
#define TIE_CATIMSHOperator(classe) \
 \
 \
declare_TIE_CATIMSHOperator(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIMSHOperator##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIMSHOperator,"CATIMSHOperator",CATIMSHOperator::MetaObject(),classe::MetaObject(),TIE); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIMSHOperator(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIECreation(CATIMSHOperator, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIMSHOperator##classe(classe::MetaObject(),CATIMSHOperator::MetaObject(),(void *)CreateTIECATIMSHOperator##classe)



/* Macro used to link an implementation with an interface */
/* This TIE is chained on the implementation object */
#define TIEchain_CATIMSHOperator(classe) \
 \
 \
declare_TIE_CATIMSHOperator(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIMSHOperator##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIMSHOperator,"CATIMSHOperator",CATIMSHOperator::MetaObject(),classe::MetaObject(),TIEchain); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIMSHOperator(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIEchainCreation(CATIMSHOperator, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIMSHOperator##classe(classe::MetaObject(),CATIMSHOperator::MetaObject(),(void *)CreateTIECATIMSHOperator##classe)


/* Macro to switch between BOA and TIE at build time */ 
#ifdef CATSYS_BOA_IS_TIE
#define BOA_CATIMSHOperator(classe) TIE_CATIMSHOperator(classe)
#else
#define BOA_CATIMSHOperator(classe) CATImplementBOA(CATIMSHOperator, classe)
#endif

#endif
