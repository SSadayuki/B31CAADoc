#ifndef __TIE_CATIMfgUserReverseMachiningConditions
#define __TIE_CATIMfgUserReverseMachiningConditions

#include <string.h>
#include "CATBaseUnknown.h"
#include "CATMetaClass.h"
#include "CATMacForTie.h"
#include "CATIMfgUserReverseMachiningConditions.h"
#include "JS0DSPA.h"


#ifdef _WINDOWS_SOURCE
#define Exported __declspec(dllexport)
#define Imported __declspec(dllimport)
#else
#define Exported 
#define Imported 
#endif


/* To link an implementation with the interface CATIMfgUserReverseMachiningConditions */
#define declare_TIE_CATIMfgUserReverseMachiningConditions(classe) \
 \
 \
class TIECATIMfgUserReverseMachiningConditions##classe : public CATIMfgUserReverseMachiningConditions \
{ \
   private: \
      CATDeclareCommonTIEMembers \
   public: \
      CATDeclareTIEMethods(CATIMfgUserReverseMachiningConditions, classe) \
      CATDeclareIUnknownMethodsForCATBaseUnknownTIE \
      CATDeclareIDispatchMethodsForCATBaseUnknownTIE \
      CATDeclareCATBaseUnknownMethodsForTIE \
      virtual HRESULT ReverseMachiningConditions() ; \
};



#define ENVTIEdeclare_CATIMfgUserReverseMachiningConditions(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
virtual HRESULT ReverseMachiningConditions() ; \


#define ENVTIEdefine_CATIMfgUserReverseMachiningConditions(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
HRESULT  ENVTIEName::ReverseMachiningConditions()  \
{ \
return (ENVTIECALL(CATIMfgUserReverseMachiningConditions,ENVTIETypeLetter,ENVTIELetter)ReverseMachiningConditions()); \
} \


/* Name of the TIE class */
#define class_TIE_CATIMfgUserReverseMachiningConditions(classe)    TIECATIMfgUserReverseMachiningConditions##classe


/* Common methods inside a TIE */
#define common_TIE_CATIMfgUserReverseMachiningConditions(classe) \
 \
 \
/* Static initialization */ \
CATDefineCommonTIEMembers(CATIMfgUserReverseMachiningConditions, classe) \
 \
 \
CATImplementTIEMethods(CATIMfgUserReverseMachiningConditions, classe) \
CATImplementIUnknownMethodsForCATBaseUnknownTIE(CATIMfgUserReverseMachiningConditions, classe, 1) \
CATImplementIDispatchMethodsForCATBaseUnknownTIE(CATIMfgUserReverseMachiningConditions, classe) \
CATImplementCATBaseUnknownMethodsForTIE(CATIMfgUserReverseMachiningConditions, classe) \
 \
HRESULT  TIECATIMfgUserReverseMachiningConditions##classe::ReverseMachiningConditions()  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->ReverseMachiningConditions()); \
} \



/* Macro used to link an implementation with an interface */
#define TIE_CATIMfgUserReverseMachiningConditions(classe) \
 \
 \
declare_TIE_CATIMfgUserReverseMachiningConditions(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIMfgUserReverseMachiningConditions##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIMfgUserReverseMachiningConditions,"CATIMfgUserReverseMachiningConditions",CATIMfgUserReverseMachiningConditions::MetaObject(),classe::MetaObject(),TIE); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIMfgUserReverseMachiningConditions(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIECreation(CATIMfgUserReverseMachiningConditions, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIMfgUserReverseMachiningConditions##classe(classe::MetaObject(),CATIMfgUserReverseMachiningConditions::MetaObject(),(void *)CreateTIECATIMfgUserReverseMachiningConditions##classe)



/* Macro used to link an implementation with an interface */
/* This TIE is chained on the implementation object */
#define TIEchain_CATIMfgUserReverseMachiningConditions(classe) \
 \
 \
declare_TIE_CATIMfgUserReverseMachiningConditions(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIMfgUserReverseMachiningConditions##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIMfgUserReverseMachiningConditions,"CATIMfgUserReverseMachiningConditions",CATIMfgUserReverseMachiningConditions::MetaObject(),classe::MetaObject(),TIEchain); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIMfgUserReverseMachiningConditions(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIEchainCreation(CATIMfgUserReverseMachiningConditions, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIMfgUserReverseMachiningConditions##classe(classe::MetaObject(),CATIMfgUserReverseMachiningConditions::MetaObject(),(void *)CreateTIECATIMfgUserReverseMachiningConditions##classe)


/* Macro to switch between BOA and TIE at build time */ 
#ifdef CATSYS_BOA_IS_TIE
#define BOA_CATIMfgUserReverseMachiningConditions(classe) TIE_CATIMfgUserReverseMachiningConditions(classe)
#else
#define BOA_CATIMfgUserReverseMachiningConditions(classe) CATImplementBOA(CATIMfgUserReverseMachiningConditions, classe)
#endif

#endif
