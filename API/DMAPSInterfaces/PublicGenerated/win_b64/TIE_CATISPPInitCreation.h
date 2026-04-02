#ifndef __TIE_CATISPPInitCreation
#define __TIE_CATISPPInitCreation

#include <string.h>
#include "CATBaseUnknown.h"
#include "CATMetaClass.h"
#include "CATMacForTie.h"
#include "CATISPPInitCreation.h"
#include "JS0DSPA.h"


#ifdef _WINDOWS_SOURCE
#define Exported __declspec(dllexport)
#define Imported __declspec(dllimport)
#else
#define Exported 
#define Imported 
#endif


/* To link an implementation with the interface CATISPPInitCreation */
#define declare_TIE_CATISPPInitCreation(classe) \
 \
 \
class TIECATISPPInitCreation##classe : public CATISPPInitCreation \
{ \
   private: \
      CATDeclareCommonTIEMembers \
   public: \
      CATDeclareTIEMethods(CATISPPInitCreation, classe) \
      CATDeclareIUnknownMethodsForCATBaseUnknownTIE \
      CATDeclareIDispatchMethodsForCATBaseUnknownTIE \
      CATDeclareCATBaseUnknownMethodsForTIE \
      virtual void InitCreation() ; \
};



#define ENVTIEdeclare_CATISPPInitCreation(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
virtual void InitCreation() ; \


#define ENVTIEdefine_CATISPPInitCreation(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
void  ENVTIEName::InitCreation()  \
{ \
 (ENVTIECALL(CATISPPInitCreation,ENVTIETypeLetter,ENVTIELetter)InitCreation()); \
} \


/* Name of the TIE class */
#define class_TIE_CATISPPInitCreation(classe)    TIECATISPPInitCreation##classe


/* Common methods inside a TIE */
#define common_TIE_CATISPPInitCreation(classe) \
 \
 \
/* Static initialization */ \
CATDefineCommonTIEMembers(CATISPPInitCreation, classe) \
 \
 \
CATImplementTIEMethods(CATISPPInitCreation, classe) \
CATImplementIUnknownMethodsForCATBaseUnknownTIE(CATISPPInitCreation, classe, 1) \
CATImplementIDispatchMethodsForCATBaseUnknownTIE(CATISPPInitCreation, classe) \
CATImplementCATBaseUnknownMethodsForTIE(CATISPPInitCreation, classe) \
 \
void  TIECATISPPInitCreation##classe::InitCreation()  \
{ \
   ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->InitCreation(); \
} \



/* Macro used to link an implementation with an interface */
#define TIE_CATISPPInitCreation(classe) \
 \
 \
declare_TIE_CATISPPInitCreation(classe) \
 \
 \
CATMetaClass * __stdcall TIECATISPPInitCreation##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATISPPInitCreation,"CATISPPInitCreation",CATISPPInitCreation::MetaObject(),classe::MetaObject(),TIE); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATISPPInitCreation(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIECreation(CATISPPInitCreation, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATISPPInitCreation##classe(classe::MetaObject(),CATISPPInitCreation::MetaObject(),(void *)CreateTIECATISPPInitCreation##classe)



/* Macro used to link an implementation with an interface */
/* This TIE is chained on the implementation object */
#define TIEchain_CATISPPInitCreation(classe) \
 \
 \
declare_TIE_CATISPPInitCreation(classe) \
 \
 \
CATMetaClass * __stdcall TIECATISPPInitCreation##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATISPPInitCreation,"CATISPPInitCreation",CATISPPInitCreation::MetaObject(),classe::MetaObject(),TIEchain); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATISPPInitCreation(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIEchainCreation(CATISPPInitCreation, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATISPPInitCreation##classe(classe::MetaObject(),CATISPPInitCreation::MetaObject(),(void *)CreateTIECATISPPInitCreation##classe)


/* Macro to switch between BOA and TIE at build time */ 
#ifdef CATSYS_BOA_IS_TIE
#define BOA_CATISPPInitCreation(classe) TIE_CATISPPInitCreation(classe)
#else
#define BOA_CATISPPInitCreation(classe) CATImplementBOA(CATISPPInitCreation, classe)
#endif

#endif
