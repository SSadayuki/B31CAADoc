#ifndef __TIE_CATICciCompositesParametersMSS
#define __TIE_CATICciCompositesParametersMSS

#include <string.h>
#include "CATBaseUnknown.h"
#include "CATMetaClass.h"
#include "CATMacForTie.h"
#include "CATICciCompositesParametersMSS.h"
#include "JS0DSPA.h"


#ifdef _WINDOWS_SOURCE
#define Exported __declspec(dllexport)
#define Imported __declspec(dllimport)
#else
#define Exported 
#define Imported 
#endif


/* To link an implementation with the interface CATICciCompositesParametersMSS */
#define declare_TIE_CATICciCompositesParametersMSS(classe) \
 \
 \
class TIECATICciCompositesParametersMSS##classe : public CATICciCompositesParametersMSS \
{ \
   private: \
      CATDeclareCommonTIEMembers \
   public: \
      CATDeclareTIEMethods(CATICciCompositesParametersMSS, classe) \
      CATDeclareIUnknownMethodsForCATBaseUnknownTIE \
      CATDeclareIDispatchMethodsForCATBaseUnknownTIE \
      CATDeclareCATBaseUnknownMethodsForTIE \
      virtual HRESULT RemovesMasterStackingSequence() ; \
};



#define ENVTIEdeclare_CATICciCompositesParametersMSS(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
virtual HRESULT RemovesMasterStackingSequence() ; \


#define ENVTIEdefine_CATICciCompositesParametersMSS(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
HRESULT  ENVTIEName::RemovesMasterStackingSequence()  \
{ \
return (ENVTIECALL(CATICciCompositesParametersMSS,ENVTIETypeLetter,ENVTIELetter)RemovesMasterStackingSequence()); \
} \


/* Name of the TIE class */
#define class_TIE_CATICciCompositesParametersMSS(classe)    TIECATICciCompositesParametersMSS##classe


/* Common methods inside a TIE */
#define common_TIE_CATICciCompositesParametersMSS(classe) \
 \
 \
/* Static initialization */ \
CATDefineCommonTIEMembers(CATICciCompositesParametersMSS, classe) \
 \
 \
CATImplementTIEMethods(CATICciCompositesParametersMSS, classe) \
CATImplementIUnknownMethodsForCATBaseUnknownTIE(CATICciCompositesParametersMSS, classe, 1) \
CATImplementIDispatchMethodsForCATBaseUnknownTIE(CATICciCompositesParametersMSS, classe) \
CATImplementCATBaseUnknownMethodsForTIE(CATICciCompositesParametersMSS, classe) \
 \
HRESULT  TIECATICciCompositesParametersMSS##classe::RemovesMasterStackingSequence()  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->RemovesMasterStackingSequence()); \
} \



/* Macro used to link an implementation with an interface */
#define TIE_CATICciCompositesParametersMSS(classe) \
 \
 \
declare_TIE_CATICciCompositesParametersMSS(classe) \
 \
 \
CATMetaClass * __stdcall TIECATICciCompositesParametersMSS##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATICciCompositesParametersMSS,"CATICciCompositesParametersMSS",CATICciCompositesParametersMSS::MetaObject(),classe::MetaObject(),TIE); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATICciCompositesParametersMSS(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIECreation(CATICciCompositesParametersMSS, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATICciCompositesParametersMSS##classe(classe::MetaObject(),CATICciCompositesParametersMSS::MetaObject(),(void *)CreateTIECATICciCompositesParametersMSS##classe)



/* Macro used to link an implementation with an interface */
/* This TIE is chained on the implementation object */
#define TIEchain_CATICciCompositesParametersMSS(classe) \
 \
 \
declare_TIE_CATICciCompositesParametersMSS(classe) \
 \
 \
CATMetaClass * __stdcall TIECATICciCompositesParametersMSS##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATICciCompositesParametersMSS,"CATICciCompositesParametersMSS",CATICciCompositesParametersMSS::MetaObject(),classe::MetaObject(),TIEchain); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATICciCompositesParametersMSS(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIEchainCreation(CATICciCompositesParametersMSS, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATICciCompositesParametersMSS##classe(classe::MetaObject(),CATICciCompositesParametersMSS::MetaObject(),(void *)CreateTIECATICciCompositesParametersMSS##classe)


/* Macro to switch between BOA and TIE at build time */ 
#ifdef CATSYS_BOA_IS_TIE
#define BOA_CATICciCompositesParametersMSS(classe) TIE_CATICciCompositesParametersMSS(classe)
#else
#define BOA_CATICciCompositesParametersMSS(classe) CATImplementBOA(CATICciCompositesParametersMSS, classe)
#endif

#endif
