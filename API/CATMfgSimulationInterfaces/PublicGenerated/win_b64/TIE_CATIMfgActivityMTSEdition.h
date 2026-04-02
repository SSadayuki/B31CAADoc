#ifndef __TIE_CATIMfgActivityMTSEdition
#define __TIE_CATIMfgActivityMTSEdition

#include <string.h>
#include "CATBaseUnknown.h"
#include "CATMetaClass.h"
#include "CATMacForTie.h"
#include "CATIMfgActivityMTSEdition.h"
#include "JS0DSPA.h"


#ifdef _WINDOWS_SOURCE
#define Exported __declspec(dllexport)
#define Imported __declspec(dllimport)
#else
#define Exported 
#define Imported 
#endif


/* To link an implementation with the interface CATIMfgActivityMTSEdition */
#define declare_TIE_CATIMfgActivityMTSEdition(classe) \
 \
 \
class TIECATIMfgActivityMTSEdition##classe : public CATIMfgActivityMTSEdition \
{ \
   private: \
      CATDeclareCommonTIEMembers \
   public: \
      CATDeclareTIEMethods(CATIMfgActivityMTSEdition, classe) \
      CATDeclareIUnknownMethodsForCATBaseUnknownTIE \
      CATDeclareIDispatchMethodsForCATBaseUnknownTIE \
      CATDeclareCATBaseUnknownMethodsForTIE \
      virtual HRESULT IsMOLocked (boolean & oIsLocked) ; \
};



#define ENVTIEdeclare_CATIMfgActivityMTSEdition(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
virtual HRESULT IsMOLocked (boolean & oIsLocked) ; \


#define ENVTIEdefine_CATIMfgActivityMTSEdition(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
HRESULT  ENVTIEName::IsMOLocked (boolean & oIsLocked)  \
{ \
return (ENVTIECALL(CATIMfgActivityMTSEdition,ENVTIETypeLetter,ENVTIELetter)IsMOLocked (oIsLocked)); \
} \


/* Name of the TIE class */
#define class_TIE_CATIMfgActivityMTSEdition(classe)    TIECATIMfgActivityMTSEdition##classe


/* Common methods inside a TIE */
#define common_TIE_CATIMfgActivityMTSEdition(classe) \
 \
 \
/* Static initialization */ \
CATDefineCommonTIEMembers(CATIMfgActivityMTSEdition, classe) \
 \
 \
CATImplementTIEMethods(CATIMfgActivityMTSEdition, classe) \
CATImplementIUnknownMethodsForCATBaseUnknownTIE(CATIMfgActivityMTSEdition, classe, 1) \
CATImplementIDispatchMethodsForCATBaseUnknownTIE(CATIMfgActivityMTSEdition, classe) \
CATImplementCATBaseUnknownMethodsForTIE(CATIMfgActivityMTSEdition, classe) \
 \
HRESULT  TIECATIMfgActivityMTSEdition##classe::IsMOLocked (boolean & oIsLocked)  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->IsMOLocked (oIsLocked)); \
} \



/* Macro used to link an implementation with an interface */
#define TIE_CATIMfgActivityMTSEdition(classe) \
 \
 \
declare_TIE_CATIMfgActivityMTSEdition(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIMfgActivityMTSEdition##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIMfgActivityMTSEdition,"CATIMfgActivityMTSEdition",CATIMfgActivityMTSEdition::MetaObject(),classe::MetaObject(),TIE); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIMfgActivityMTSEdition(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIECreation(CATIMfgActivityMTSEdition, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIMfgActivityMTSEdition##classe(classe::MetaObject(),CATIMfgActivityMTSEdition::MetaObject(),(void *)CreateTIECATIMfgActivityMTSEdition##classe)



/* Macro used to link an implementation with an interface */
/* This TIE is chained on the implementation object */
#define TIEchain_CATIMfgActivityMTSEdition(classe) \
 \
 \
declare_TIE_CATIMfgActivityMTSEdition(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIMfgActivityMTSEdition##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIMfgActivityMTSEdition,"CATIMfgActivityMTSEdition",CATIMfgActivityMTSEdition::MetaObject(),classe::MetaObject(),TIEchain); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIMfgActivityMTSEdition(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIEchainCreation(CATIMfgActivityMTSEdition, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIMfgActivityMTSEdition##classe(classe::MetaObject(),CATIMfgActivityMTSEdition::MetaObject(),(void *)CreateTIECATIMfgActivityMTSEdition##classe)


/* Macro to switch between BOA and TIE at build time */ 
#ifdef CATSYS_BOA_IS_TIE
#define BOA_CATIMfgActivityMTSEdition(classe) TIE_CATIMfgActivityMTSEdition(classe)
#else
#define BOA_CATIMfgActivityMTSEdition(classe) CATImplementBOA(CATIMfgActivityMTSEdition, classe)
#endif

#endif
