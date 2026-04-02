#ifndef __TIE_CATISamUpgradeContainer
#define __TIE_CATISamUpgradeContainer

#include <string.h>
#include "CATBaseUnknown.h"
#include "CATMetaClass.h"
#include "CATMacForTie.h"
#include "CATISamUpgradeContainer.h"
#include "JS0DSPA.h"


#ifdef _WINDOWS_SOURCE
#define Exported __declspec(dllexport)
#define Imported __declspec(dllimport)
#else
#define Exported 
#define Imported 
#endif


/* To link an implementation with the interface CATISamUpgradeContainer */
#define declare_TIE_CATISamUpgradeContainer(classe) \
 \
 \
class TIECATISamUpgradeContainer##classe : public CATISamUpgradeContainer \
{ \
   private: \
      CATDeclareCommonTIEMembers \
   public: \
      CATDeclareTIEMethods(CATISamUpgradeContainer, classe) \
      CATDeclareIUnknownMethodsForCATBaseUnknownTIE \
      CATDeclareIDispatchMethodsForCATBaseUnknownTIE \
      CATDeclareCATBaseUnknownMethodsForTIE \
      virtual CATUnicodeString GetClientId () ; \
      virtual CATBoolean NeedToUpgraded(int iRelease, int iServicePack) ; \
      virtual HRESULT UpgradeObject (const CATISpecObject* ipiInstance) ; \
};



#define ENVTIEdeclare_CATISamUpgradeContainer(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
virtual CATUnicodeString GetClientId () ; \
virtual CATBoolean NeedToUpgraded(int iRelease, int iServicePack) ; \
virtual HRESULT UpgradeObject (const CATISpecObject* ipiInstance) ; \


#define ENVTIEdefine_CATISamUpgradeContainer(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
CATUnicodeString  ENVTIEName::GetClientId ()  \
{ \
return (ENVTIECALL(CATISamUpgradeContainer,ENVTIETypeLetter,ENVTIELetter)GetClientId ()); \
} \
CATBoolean  ENVTIEName::NeedToUpgraded(int iRelease, int iServicePack)  \
{ \
return (ENVTIECALL(CATISamUpgradeContainer,ENVTIETypeLetter,ENVTIELetter)NeedToUpgraded(iRelease,iServicePack)); \
} \
HRESULT  ENVTIEName::UpgradeObject (const CATISpecObject* ipiInstance)  \
{ \
return (ENVTIECALL(CATISamUpgradeContainer,ENVTIETypeLetter,ENVTIELetter)UpgradeObject (ipiInstance)); \
} \


/* Name of the TIE class */
#define class_TIE_CATISamUpgradeContainer(classe)    TIECATISamUpgradeContainer##classe


/* Common methods inside a TIE */
#define common_TIE_CATISamUpgradeContainer(classe) \
 \
 \
/* Static initialization */ \
CATDefineCommonTIEMembers(CATISamUpgradeContainer, classe) \
 \
 \
CATImplementTIEMethods(CATISamUpgradeContainer, classe) \
CATImplementIUnknownMethodsForCATBaseUnknownTIE(CATISamUpgradeContainer, classe, 1) \
CATImplementIDispatchMethodsForCATBaseUnknownTIE(CATISamUpgradeContainer, classe) \
CATImplementCATBaseUnknownMethodsForTIE(CATISamUpgradeContainer, classe) \
 \
CATUnicodeString  TIECATISamUpgradeContainer##classe::GetClientId ()  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetClientId ()); \
} \
CATBoolean  TIECATISamUpgradeContainer##classe::NeedToUpgraded(int iRelease, int iServicePack)  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->NeedToUpgraded(iRelease,iServicePack)); \
} \
HRESULT  TIECATISamUpgradeContainer##classe::UpgradeObject (const CATISpecObject* ipiInstance)  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->UpgradeObject (ipiInstance)); \
} \



/* Macro used to link an implementation with an interface */
#define TIE_CATISamUpgradeContainer(classe) \
 \
 \
declare_TIE_CATISamUpgradeContainer(classe) \
 \
 \
CATMetaClass * __stdcall TIECATISamUpgradeContainer##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATISamUpgradeContainer,"CATISamUpgradeContainer",CATISamUpgradeContainer::MetaObject(),classe::MetaObject(),TIE); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATISamUpgradeContainer(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIECreation(CATISamUpgradeContainer, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATISamUpgradeContainer##classe(classe::MetaObject(),CATISamUpgradeContainer::MetaObject(),(void *)CreateTIECATISamUpgradeContainer##classe)



/* Macro used to link an implementation with an interface */
/* This TIE is chained on the implementation object */
#define TIEchain_CATISamUpgradeContainer(classe) \
 \
 \
declare_TIE_CATISamUpgradeContainer(classe) \
 \
 \
CATMetaClass * __stdcall TIECATISamUpgradeContainer##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATISamUpgradeContainer,"CATISamUpgradeContainer",CATISamUpgradeContainer::MetaObject(),classe::MetaObject(),TIEchain); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATISamUpgradeContainer(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIEchainCreation(CATISamUpgradeContainer, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATISamUpgradeContainer##classe(classe::MetaObject(),CATISamUpgradeContainer::MetaObject(),(void *)CreateTIECATISamUpgradeContainer##classe)


/* Macro to switch between BOA and TIE at build time */ 
#ifdef CATSYS_BOA_IS_TIE
#define BOA_CATISamUpgradeContainer(classe) TIE_CATISamUpgradeContainer(classe)
#else
#define BOA_CATISamUpgradeContainer(classe) CATImplementBOA(CATISamUpgradeContainer, classe)
#endif

#endif
