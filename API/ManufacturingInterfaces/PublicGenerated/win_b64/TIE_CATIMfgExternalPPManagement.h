#ifndef __TIE_CATIMfgExternalPPManagement
#define __TIE_CATIMfgExternalPPManagement

#include <string.h>
#include "CATBaseUnknown.h"
#include "CATMetaClass.h"
#include "CATMacForTie.h"
#include "CATIMfgExternalPPManagement.h"
#include "JS0DSPA.h"


#ifdef _WINDOWS_SOURCE
#define Exported __declspec(dllexport)
#define Imported __declspec(dllimport)
#else
#define Exported 
#define Imported 
#endif


/* To link an implementation with the interface CATIMfgExternalPPManagement */
#define declare_TIE_CATIMfgExternalPPManagement(classe) \
 \
 \
class TIECATIMfgExternalPPManagement##classe : public CATIMfgExternalPPManagement \
{ \
   private: \
      CATDeclareCommonTIEMembers \
   public: \
      CATDeclareTIEMethods(CATIMfgExternalPPManagement, classe) \
      CATDeclareIUnknownMethodsForCATBaseUnknownTIE \
      CATDeclareIDispatchMethodsForCATBaseUnknownTIE \
      CATDeclareCATBaseUnknownMethodsForTIE \
      virtual HRESULT GetProviderNames ( CATUnicodeString& oNLSName     , CATString&        oKeywordName ) ; \
      virtual HRESULT GetListOfPPs ( CATListOfCATUnicodeString& oNLSList       , CATListOfCATString&        oKeywordPPList ) ; \
      virtual HRESULT RunHelp      ( CATString& iPPKeyword ) ; \
      virtual HRESULT RunPP        ( CATListOfCATUnicodeString& iPPParameters ) ; \
};



#define ENVTIEdeclare_CATIMfgExternalPPManagement(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
virtual HRESULT GetProviderNames ( CATUnicodeString& oNLSName     , CATString&        oKeywordName ) ; \
virtual HRESULT GetListOfPPs ( CATListOfCATUnicodeString& oNLSList       , CATListOfCATString&        oKeywordPPList ) ; \
virtual HRESULT RunHelp      ( CATString& iPPKeyword ) ; \
virtual HRESULT RunPP        ( CATListOfCATUnicodeString& iPPParameters ) ; \


#define ENVTIEdefine_CATIMfgExternalPPManagement(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
HRESULT  ENVTIEName::GetProviderNames ( CATUnicodeString& oNLSName     , CATString&        oKeywordName )  \
{ \
return (ENVTIECALL(CATIMfgExternalPPManagement,ENVTIETypeLetter,ENVTIELetter)GetProviderNames (oNLSName     ,oKeywordName )); \
} \
HRESULT  ENVTIEName::GetListOfPPs ( CATListOfCATUnicodeString& oNLSList       , CATListOfCATString&        oKeywordPPList )  \
{ \
return (ENVTIECALL(CATIMfgExternalPPManagement,ENVTIETypeLetter,ENVTIELetter)GetListOfPPs (oNLSList       ,oKeywordPPList )); \
} \
HRESULT  ENVTIEName::RunHelp      ( CATString& iPPKeyword )  \
{ \
return (ENVTIECALL(CATIMfgExternalPPManagement,ENVTIETypeLetter,ENVTIELetter)RunHelp      (iPPKeyword )); \
} \
HRESULT  ENVTIEName::RunPP        ( CATListOfCATUnicodeString& iPPParameters )  \
{ \
return (ENVTIECALL(CATIMfgExternalPPManagement,ENVTIETypeLetter,ENVTIELetter)RunPP        (iPPParameters )); \
} \


/* Name of the TIE class */
#define class_TIE_CATIMfgExternalPPManagement(classe)    TIECATIMfgExternalPPManagement##classe


/* Common methods inside a TIE */
#define common_TIE_CATIMfgExternalPPManagement(classe) \
 \
 \
/* Static initialization */ \
CATDefineCommonTIEMembers(CATIMfgExternalPPManagement, classe) \
 \
 \
CATImplementTIEMethods(CATIMfgExternalPPManagement, classe) \
CATImplementIUnknownMethodsForCATBaseUnknownTIE(CATIMfgExternalPPManagement, classe, 1) \
CATImplementIDispatchMethodsForCATBaseUnknownTIE(CATIMfgExternalPPManagement, classe) \
CATImplementCATBaseUnknownMethodsForTIE(CATIMfgExternalPPManagement, classe) \
 \
HRESULT  TIECATIMfgExternalPPManagement##classe::GetProviderNames ( CATUnicodeString& oNLSName     , CATString&        oKeywordName )  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetProviderNames (oNLSName     ,oKeywordName )); \
} \
HRESULT  TIECATIMfgExternalPPManagement##classe::GetListOfPPs ( CATListOfCATUnicodeString& oNLSList       , CATListOfCATString&        oKeywordPPList )  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetListOfPPs (oNLSList       ,oKeywordPPList )); \
} \
HRESULT  TIECATIMfgExternalPPManagement##classe::RunHelp      ( CATString& iPPKeyword )  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->RunHelp      (iPPKeyword )); \
} \
HRESULT  TIECATIMfgExternalPPManagement##classe::RunPP        ( CATListOfCATUnicodeString& iPPParameters )  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->RunPP        (iPPParameters )); \
} \



/* Macro used to link an implementation with an interface */
#define TIE_CATIMfgExternalPPManagement(classe) \
 \
 \
declare_TIE_CATIMfgExternalPPManagement(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIMfgExternalPPManagement##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIMfgExternalPPManagement,"CATIMfgExternalPPManagement",CATIMfgExternalPPManagement::MetaObject(),classe::MetaObject(),TIE); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIMfgExternalPPManagement(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIECreation(CATIMfgExternalPPManagement, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIMfgExternalPPManagement##classe(classe::MetaObject(),CATIMfgExternalPPManagement::MetaObject(),(void *)CreateTIECATIMfgExternalPPManagement##classe)



/* Macro used to link an implementation with an interface */
/* This TIE is chained on the implementation object */
#define TIEchain_CATIMfgExternalPPManagement(classe) \
 \
 \
declare_TIE_CATIMfgExternalPPManagement(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIMfgExternalPPManagement##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIMfgExternalPPManagement,"CATIMfgExternalPPManagement",CATIMfgExternalPPManagement::MetaObject(),classe::MetaObject(),TIEchain); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIMfgExternalPPManagement(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIEchainCreation(CATIMfgExternalPPManagement, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIMfgExternalPPManagement##classe(classe::MetaObject(),CATIMfgExternalPPManagement::MetaObject(),(void *)CreateTIECATIMfgExternalPPManagement##classe)


/* Macro to switch between BOA and TIE at build time */ 
#ifdef CATSYS_BOA_IS_TIE
#define BOA_CATIMfgExternalPPManagement(classe) TIE_CATIMfgExternalPPManagement(classe)
#else
#define BOA_CATIMfgExternalPPManagement(classe) CATImplementBOA(CATIMfgExternalPPManagement, classe)
#endif

#endif
