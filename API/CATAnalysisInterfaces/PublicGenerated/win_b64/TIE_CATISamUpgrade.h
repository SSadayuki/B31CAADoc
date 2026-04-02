#ifndef __TIE_CATISamUpgrade
#define __TIE_CATISamUpgrade

#include <string.h>
#include "CATBaseUnknown.h"
#include "CATMetaClass.h"
#include "CATMacForTie.h"
#include "CATISamUpgrade.h"
#include "JS0DSPA.h"


#ifdef _WINDOWS_SOURCE
#define Exported __declspec(dllexport)
#define Imported __declspec(dllimport)
#else
#define Exported 
#define Imported 
#endif


/* To link an implementation with the interface CATISamUpgrade */
#define declare_TIE_CATISamUpgrade(classe) \
 \
 \
class TIECATISamUpgrade##classe : public CATISamUpgrade \
{ \
   private: \
      CATDeclareCommonTIEMembers \
   public: \
      CATDeclareTIEMethods(CATISamUpgrade, classe) \
      CATDeclareIUnknownMethodsForCATBaseUnknownTIE \
      CATDeclareIDispatchMethodsForCATBaseUnknownTIE \
      CATDeclareCATBaseUnknownMethodsForTIE \
      virtual CATBoolean NeedToUpgrade () ; \
      virtual HRESULT Upgrade () ; \
};



#define ENVTIEdeclare_CATISamUpgrade(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
virtual CATBoolean NeedToUpgrade () ; \
virtual HRESULT Upgrade () ; \


#define ENVTIEdefine_CATISamUpgrade(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
CATBoolean  ENVTIEName::NeedToUpgrade ()  \
{ \
return (ENVTIECALL(CATISamUpgrade,ENVTIETypeLetter,ENVTIELetter)NeedToUpgrade ()); \
} \
HRESULT  ENVTIEName::Upgrade ()  \
{ \
return (ENVTIECALL(CATISamUpgrade,ENVTIETypeLetter,ENVTIELetter)Upgrade ()); \
} \


/* Name of the TIE class */
#define class_TIE_CATISamUpgrade(classe)    TIECATISamUpgrade##classe


/* Common methods inside a TIE */
#define common_TIE_CATISamUpgrade(classe) \
 \
 \
/* Static initialization */ \
CATDefineCommonTIEMembers(CATISamUpgrade, classe) \
 \
 \
CATImplementTIEMethods(CATISamUpgrade, classe) \
CATImplementIUnknownMethodsForCATBaseUnknownTIE(CATISamUpgrade, classe, 1) \
CATImplementIDispatchMethodsForCATBaseUnknownTIE(CATISamUpgrade, classe) \
CATImplementCATBaseUnknownMethodsForTIE(CATISamUpgrade, classe) \
 \
CATBoolean  TIECATISamUpgrade##classe::NeedToUpgrade ()  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->NeedToUpgrade ()); \
} \
HRESULT  TIECATISamUpgrade##classe::Upgrade ()  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->Upgrade ()); \
} \



/* Macro used to link an implementation with an interface */
#define TIE_CATISamUpgrade(classe) \
 \
 \
declare_TIE_CATISamUpgrade(classe) \
 \
 \
CATMetaClass * __stdcall TIECATISamUpgrade##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATISamUpgrade,"CATISamUpgrade",CATISamUpgrade::MetaObject(),classe::MetaObject(),TIE); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATISamUpgrade(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIECreation(CATISamUpgrade, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATISamUpgrade##classe(classe::MetaObject(),CATISamUpgrade::MetaObject(),(void *)CreateTIECATISamUpgrade##classe)



/* Macro used to link an implementation with an interface */
/* This TIE is chained on the implementation object */
#define TIEchain_CATISamUpgrade(classe) \
 \
 \
declare_TIE_CATISamUpgrade(classe) \
 \
 \
CATMetaClass * __stdcall TIECATISamUpgrade##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATISamUpgrade,"CATISamUpgrade",CATISamUpgrade::MetaObject(),classe::MetaObject(),TIEchain); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATISamUpgrade(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIEchainCreation(CATISamUpgrade, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATISamUpgrade##classe(classe::MetaObject(),CATISamUpgrade::MetaObject(),(void *)CreateTIECATISamUpgrade##classe)


/* Macro to switch between BOA and TIE at build time */ 
#ifdef CATSYS_BOA_IS_TIE
#define BOA_CATISamUpgrade(classe) TIE_CATISamUpgrade(classe)
#else
#define BOA_CATISamUpgrade(classe) CATImplementBOA(CATISamUpgrade, classe)
#endif

#endif
