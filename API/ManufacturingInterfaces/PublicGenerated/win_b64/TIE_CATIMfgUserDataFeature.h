#ifndef __TIE_CATIMfgUserDataFeature
#define __TIE_CATIMfgUserDataFeature

#include <string.h>
#include "CATBaseUnknown.h"
#include "CATMetaClass.h"
#include "CATMacForTie.h"
#include "CATIMfgUserDataFeature.h"
#include "JS0DSPA.h"


#ifdef _WINDOWS_SOURCE
#define Exported __declspec(dllexport)
#define Imported __declspec(dllimport)
#else
#define Exported 
#define Imported 
#endif


/* To link an implementation with the interface CATIMfgUserDataFeature */
#define declare_TIE_CATIMfgUserDataFeature(classe) \
 \
 \
class TIECATIMfgUserDataFeature##classe : public CATIMfgUserDataFeature \
{ \
   private: \
      CATDeclareCommonTIEMembers \
   public: \
      CATDeclareTIEMethods(CATIMfgUserDataFeature, classe) \
      CATDeclareIUnknownMethodsForCATBaseUnknownTIE \
      CATDeclareIDispatchMethodsForCATBaseUnknownTIE \
      CATDeclareCATBaseUnknownMethodsForTIE \
      virtual HRESULT GetEditor (CATDialog* iFather, CATDlgFrame*& oEditor) ; \
      virtual HRESULT GetNLSDescription (CATUnicodeString &oNLSDescription) ; \
};



#define ENVTIEdeclare_CATIMfgUserDataFeature(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
virtual HRESULT GetEditor (CATDialog* iFather, CATDlgFrame*& oEditor) ; \
virtual HRESULT GetNLSDescription (CATUnicodeString &oNLSDescription) ; \


#define ENVTIEdefine_CATIMfgUserDataFeature(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
HRESULT  ENVTIEName::GetEditor (CATDialog* iFather, CATDlgFrame*& oEditor)  \
{ \
return (ENVTIECALL(CATIMfgUserDataFeature,ENVTIETypeLetter,ENVTIELetter)GetEditor (iFather,oEditor)); \
} \
HRESULT  ENVTIEName::GetNLSDescription (CATUnicodeString &oNLSDescription)  \
{ \
return (ENVTIECALL(CATIMfgUserDataFeature,ENVTIETypeLetter,ENVTIELetter)GetNLSDescription (oNLSDescription)); \
} \


/* Name of the TIE class */
#define class_TIE_CATIMfgUserDataFeature(classe)    TIECATIMfgUserDataFeature##classe


/* Common methods inside a TIE */
#define common_TIE_CATIMfgUserDataFeature(classe) \
 \
 \
/* Static initialization */ \
CATDefineCommonTIEMembers(CATIMfgUserDataFeature, classe) \
 \
 \
CATImplementTIEMethods(CATIMfgUserDataFeature, classe) \
CATImplementIUnknownMethodsForCATBaseUnknownTIE(CATIMfgUserDataFeature, classe, 1) \
CATImplementIDispatchMethodsForCATBaseUnknownTIE(CATIMfgUserDataFeature, classe) \
CATImplementCATBaseUnknownMethodsForTIE(CATIMfgUserDataFeature, classe) \
 \
HRESULT  TIECATIMfgUserDataFeature##classe::GetEditor (CATDialog* iFather, CATDlgFrame*& oEditor)  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetEditor (iFather,oEditor)); \
} \
HRESULT  TIECATIMfgUserDataFeature##classe::GetNLSDescription (CATUnicodeString &oNLSDescription)  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetNLSDescription (oNLSDescription)); \
} \



/* Macro used to link an implementation with an interface */
#define TIE_CATIMfgUserDataFeature(classe) \
 \
 \
declare_TIE_CATIMfgUserDataFeature(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIMfgUserDataFeature##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIMfgUserDataFeature,"CATIMfgUserDataFeature",CATIMfgUserDataFeature::MetaObject(),classe::MetaObject(),TIE); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIMfgUserDataFeature(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIECreation(CATIMfgUserDataFeature, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIMfgUserDataFeature##classe(classe::MetaObject(),CATIMfgUserDataFeature::MetaObject(),(void *)CreateTIECATIMfgUserDataFeature##classe)



/* Macro used to link an implementation with an interface */
/* This TIE is chained on the implementation object */
#define TIEchain_CATIMfgUserDataFeature(classe) \
 \
 \
declare_TIE_CATIMfgUserDataFeature(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIMfgUserDataFeature##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIMfgUserDataFeature,"CATIMfgUserDataFeature",CATIMfgUserDataFeature::MetaObject(),classe::MetaObject(),TIEchain); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIMfgUserDataFeature(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIEchainCreation(CATIMfgUserDataFeature, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIMfgUserDataFeature##classe(classe::MetaObject(),CATIMfgUserDataFeature::MetaObject(),(void *)CreateTIECATIMfgUserDataFeature##classe)


/* Macro to switch between BOA and TIE at build time */ 
#ifdef CATSYS_BOA_IS_TIE
#define BOA_CATIMfgUserDataFeature(classe) TIE_CATIMfgUserDataFeature(classe)
#else
#define BOA_CATIMfgUserDataFeature(classe) CATImplementBOA(CATIMfgUserDataFeature, classe)
#endif

#endif
