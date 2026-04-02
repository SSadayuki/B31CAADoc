#ifndef __TIE_CATIAVPMUEVersionning
#define __TIE_CATIAVPMUEVersionning

#include <string.h>
#include "CATBaseUnknown.h"
#include "CATMetaClass.h"
#include "CATMacForTie.h"
#include "CATIAVPMUEVersionning.h"
#include "JS0DSPA.h"


#ifdef _WINDOWS_SOURCE
#define Exported __declspec(dllexport)
#define Imported __declspec(dllimport)
#else
#define Exported 
#define Imported 
#endif


/* To link an implementation with the interface CATIAVPMUEVersionning */
#define declare_TIE_CATIAVPMUEVersionning(classe) \
 \
 \
class TIECATIAVPMUEVersionning##classe : public CATIAVPMUEVersionning \
{ \
   private: \
      CATDeclareCommonTIEMembers \
   public: \
      CATDeclareTIEMethods(CATIAVPMUEVersionning, classe) \
      CATDeclareIUnknownMethodsForCATBaseUnknownTIE \
      CATDeclareIDispatchMethodsForCATBaseUnknownTIE \
      CATDeclareCATBaseUnknownMethodsForTIE \
      virtual HRESULT GetNewVersion(long iPrevVersionNumber, const CATBSTR & iPrevVersionValue, CATBSTR & oVersionValue); \
      virtual HRESULT GetNewVersion(long iPrevVersionNumber, const CATUnicodeString & iPrevVersionValue, CATUnicodeString & oVersionValue); \
      virtual HRESULT GetPreferedVersion(CATIAVPMObjectVersion *& oVersion); \
};



#define ENVTIEdeclare_CATIAVPMUEVersionning(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
virtual HRESULT GetNewVersion(long iPrevVersionNumber, const CATBSTR & iPrevVersionValue, CATBSTR & oVersionValue); \
virtual HRESULT GetNewVersion(long iPrevVersionNumber, const CATUnicodeString & iPrevVersionValue, CATUnicodeString & oVersionValue); \
virtual HRESULT GetPreferedVersion(CATIAVPMObjectVersion *& oVersion); \


#define ENVTIEdefine_CATIAVPMUEVersionning(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
HRESULT  ENVTIEName::GetNewVersion(long iPrevVersionNumber, const CATBSTR & iPrevVersionValue, CATBSTR & oVersionValue) \
{ \
return (ENVTIECALL(CATIAVPMUEVersionning,ENVTIETypeLetter,ENVTIELetter)GetNewVersion(iPrevVersionNumber,iPrevVersionValue,oVersionValue)); \
} \
HRESULT  ENVTIEName::GetNewVersion(long iPrevVersionNumber, const CATUnicodeString & iPrevVersionValue, CATUnicodeString & oVersionValue) \
{ \
return (ENVTIECALL(CATIAVPMUEVersionning,ENVTIETypeLetter,ENVTIELetter)GetNewVersion(iPrevVersionNumber,iPrevVersionValue,oVersionValue)); \
} \
HRESULT  ENVTIEName::GetPreferedVersion(CATIAVPMObjectVersion *& oVersion) \
{ \
return (ENVTIECALL(CATIAVPMUEVersionning,ENVTIETypeLetter,ENVTIELetter)GetPreferedVersion(oVersion)); \
} \


/* Name of the TIE class */
#define class_TIE_CATIAVPMUEVersionning(classe)    TIECATIAVPMUEVersionning##classe


/* Common methods inside a TIE */
#define common_TIE_CATIAVPMUEVersionning(classe) \
 \
 \
/* Static initialization */ \
CATDefineCommonTIEMembers(CATIAVPMUEVersionning, classe) \
 \
 \
CATImplementTIEMethods(CATIAVPMUEVersionning, classe) \
CATImplementIUnknownMethodsForCATBaseUnknownTIE(CATIAVPMUEVersionning, classe, 1) \
CATImplementIDispatchMethodsForCATBaseUnknownTIE(CATIAVPMUEVersionning, classe) \
CATImplementCATBaseUnknownMethodsForTIE(CATIAVPMUEVersionning, classe) \
 \
HRESULT  TIECATIAVPMUEVersionning##classe::GetNewVersion(long iPrevVersionNumber, const CATBSTR & iPrevVersionValue, CATBSTR & oVersionValue) \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetNewVersion(iPrevVersionNumber,iPrevVersionValue,oVersionValue)); \
} \
HRESULT  TIECATIAVPMUEVersionning##classe::GetNewVersion(long iPrevVersionNumber, const CATUnicodeString & iPrevVersionValue, CATUnicodeString & oVersionValue) \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetNewVersion(iPrevVersionNumber,iPrevVersionValue,oVersionValue)); \
} \
HRESULT  TIECATIAVPMUEVersionning##classe::GetPreferedVersion(CATIAVPMObjectVersion *& oVersion) \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetPreferedVersion(oVersion)); \
} \



/* Macro used to link an implementation with an interface */
#define TIE_CATIAVPMUEVersionning(classe) \
 \
 \
declare_TIE_CATIAVPMUEVersionning(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIAVPMUEVersionning##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIAVPMUEVersionning,"CATIAVPMUEVersionning",CATIAVPMUEVersionning::MetaObject(),classe::MetaObject(),TIE); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIAVPMUEVersionning(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIECreation(CATIAVPMUEVersionning, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIAVPMUEVersionning##classe(classe::MetaObject(),CATIAVPMUEVersionning::MetaObject(),(void *)CreateTIECATIAVPMUEVersionning##classe)



/* Macro used to link an implementation with an interface */
/* This TIE is chained on the implementation object */
#define TIEchain_CATIAVPMUEVersionning(classe) \
 \
 \
declare_TIE_CATIAVPMUEVersionning(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIAVPMUEVersionning##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIAVPMUEVersionning,"CATIAVPMUEVersionning",CATIAVPMUEVersionning::MetaObject(),classe::MetaObject(),TIEchain); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIAVPMUEVersionning(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIEchainCreation(CATIAVPMUEVersionning, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIAVPMUEVersionning##classe(classe::MetaObject(),CATIAVPMUEVersionning::MetaObject(),(void *)CreateTIECATIAVPMUEVersionning##classe)


/* Macro to switch between BOA and TIE at build time */ 
#ifdef CATSYS_BOA_IS_TIE
#define BOA_CATIAVPMUEVersionning(classe) TIE_CATIAVPMUEVersionning(classe)
#else
#define BOA_CATIAVPMUEVersionning(classe) CATImplementBOA(CATIAVPMUEVersionning, classe)
#endif

#endif
