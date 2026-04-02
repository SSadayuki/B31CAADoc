#ifndef __TIE_CATISamEnumManager
#define __TIE_CATISamEnumManager

#include <string.h>
#include "CATBaseUnknown.h"
#include "CATMetaClass.h"
#include "CATMacForTie.h"
#include "CATISamEnumManager.h"
#include "JS0DSPA.h"


#ifdef _WINDOWS_SOURCE
#define Exported __declspec(dllexport)
#define Imported __declspec(dllimport)
#else
#define Exported 
#define Imported 
#endif


/* To link an implementation with the interface CATISamEnumManager */
#define declare_TIE_CATISamEnumManager(classe) \
 \
 \
class TIECATISamEnumManager##classe : public CATISamEnumManager \
{ \
   private: \
      CATDeclareCommonTIEMembers \
   public: \
      CATDeclareTIEMethods(CATISamEnumManager, classe) \
      CATDeclareIUnknownMethodsForCATBaseUnknownTIE \
      CATDeclareIDispatchMethodsForCATBaseUnknownTIE \
      CATDeclareCATBaseUnknownMethodsForTIE \
      virtual HRESULT GetMode(CATSamSelectionMode & oMode) ; \
      virtual HRESULT GetList(CATListValCATUnicodeString & oList) ; \
      virtual HRESULT GetSelected(CATUnicodeString & oString, int & oIndex)  ; \
      virtual HRESULT SetSelected(int iIndex)  ; \
      virtual HRESULT GetResult(const CATUnicodeString & iString, CATListValCATUnicodeString & oFeatureName, CATListValCATUnicodeString & oFeatureType, CATListValCATBaseUnknown_var& oListOfCATICkeType) ; \
};



#define ENVTIEdeclare_CATISamEnumManager(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
virtual HRESULT GetMode(CATSamSelectionMode & oMode) ; \
virtual HRESULT GetList(CATListValCATUnicodeString & oList) ; \
virtual HRESULT GetSelected(CATUnicodeString & oString, int & oIndex)  ; \
virtual HRESULT SetSelected(int iIndex)  ; \
virtual HRESULT GetResult(const CATUnicodeString & iString, CATListValCATUnicodeString & oFeatureName, CATListValCATUnicodeString & oFeatureType, CATListValCATBaseUnknown_var& oListOfCATICkeType) ; \


#define ENVTIEdefine_CATISamEnumManager(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
HRESULT  ENVTIEName::GetMode(CATSamSelectionMode & oMode)  \
{ \
return (ENVTIECALL(CATISamEnumManager,ENVTIETypeLetter,ENVTIELetter)GetMode(oMode)); \
} \
HRESULT  ENVTIEName::GetList(CATListValCATUnicodeString & oList)  \
{ \
return (ENVTIECALL(CATISamEnumManager,ENVTIETypeLetter,ENVTIELetter)GetList(oList)); \
} \
HRESULT  ENVTIEName::GetSelected(CATUnicodeString & oString, int & oIndex)   \
{ \
return (ENVTIECALL(CATISamEnumManager,ENVTIETypeLetter,ENVTIELetter)GetSelected(oString,oIndex)); \
} \
HRESULT  ENVTIEName::SetSelected(int iIndex)   \
{ \
return (ENVTIECALL(CATISamEnumManager,ENVTIETypeLetter,ENVTIELetter)SetSelected(iIndex)); \
} \
HRESULT  ENVTIEName::GetResult(const CATUnicodeString & iString, CATListValCATUnicodeString & oFeatureName, CATListValCATUnicodeString & oFeatureType, CATListValCATBaseUnknown_var& oListOfCATICkeType)  \
{ \
return (ENVTIECALL(CATISamEnumManager,ENVTIETypeLetter,ENVTIELetter)GetResult(iString,oFeatureName,oFeatureType,oListOfCATICkeType)); \
} \


/* Name of the TIE class */
#define class_TIE_CATISamEnumManager(classe)    TIECATISamEnumManager##classe


/* Common methods inside a TIE */
#define common_TIE_CATISamEnumManager(classe) \
 \
 \
/* Static initialization */ \
CATDefineCommonTIEMembers(CATISamEnumManager, classe) \
 \
 \
CATImplementTIEMethods(CATISamEnumManager, classe) \
CATImplementIUnknownMethodsForCATBaseUnknownTIE(CATISamEnumManager, classe, 1) \
CATImplementIDispatchMethodsForCATBaseUnknownTIE(CATISamEnumManager, classe) \
CATImplementCATBaseUnknownMethodsForTIE(CATISamEnumManager, classe) \
 \
HRESULT  TIECATISamEnumManager##classe::GetMode(CATSamSelectionMode & oMode)  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetMode(oMode)); \
} \
HRESULT  TIECATISamEnumManager##classe::GetList(CATListValCATUnicodeString & oList)  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetList(oList)); \
} \
HRESULT  TIECATISamEnumManager##classe::GetSelected(CATUnicodeString & oString, int & oIndex)   \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetSelected(oString,oIndex)); \
} \
HRESULT  TIECATISamEnumManager##classe::SetSelected(int iIndex)   \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetSelected(iIndex)); \
} \
HRESULT  TIECATISamEnumManager##classe::GetResult(const CATUnicodeString & iString, CATListValCATUnicodeString & oFeatureName, CATListValCATUnicodeString & oFeatureType, CATListValCATBaseUnknown_var& oListOfCATICkeType)  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetResult(iString,oFeatureName,oFeatureType,oListOfCATICkeType)); \
} \



/* Macro used to link an implementation with an interface */
#define TIE_CATISamEnumManager(classe) \
 \
 \
declare_TIE_CATISamEnumManager(classe) \
 \
 \
CATMetaClass * __stdcall TIECATISamEnumManager##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATISamEnumManager,"CATISamEnumManager",CATISamEnumManager::MetaObject(),classe::MetaObject(),TIE); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATISamEnumManager(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIECreation(CATISamEnumManager, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATISamEnumManager##classe(classe::MetaObject(),CATISamEnumManager::MetaObject(),(void *)CreateTIECATISamEnumManager##classe)



/* Macro used to link an implementation with an interface */
/* This TIE is chained on the implementation object */
#define TIEchain_CATISamEnumManager(classe) \
 \
 \
declare_TIE_CATISamEnumManager(classe) \
 \
 \
CATMetaClass * __stdcall TIECATISamEnumManager##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATISamEnumManager,"CATISamEnumManager",CATISamEnumManager::MetaObject(),classe::MetaObject(),TIEchain); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATISamEnumManager(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIEchainCreation(CATISamEnumManager, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATISamEnumManager##classe(classe::MetaObject(),CATISamEnumManager::MetaObject(),(void *)CreateTIECATISamEnumManager##classe)


/* Macro to switch between BOA and TIE at build time */ 
#ifdef CATSYS_BOA_IS_TIE
#define BOA_CATISamEnumManager(classe) TIE_CATISamEnumManager(classe)
#else
#define BOA_CATISamEnumManager(classe) CATImplementBOA(CATISamEnumManager, classe)
#endif

#endif
