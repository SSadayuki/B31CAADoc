#ifndef __TIE_CATIMfgMappingRulesBrowser
#define __TIE_CATIMfgMappingRulesBrowser

#include <string.h>
#include "CATBaseUnknown.h"
#include "CATMetaClass.h"
#include "CATMacForTie.h"
#include "CATIMfgMappingRulesBrowser.h"
#include "JS0DSPA.h"


#ifdef _WINDOWS_SOURCE
#define Exported __declspec(dllexport)
#define Imported __declspec(dllimport)
#else
#define Exported 
#define Imported 
#endif


/* To link an implementation with the interface CATIMfgMappingRulesBrowser */
#define declare_TIE_CATIMfgMappingRulesBrowser(classe) \
 \
 \
class TIECATIMfgMappingRulesBrowser##classe : public CATIMfgMappingRulesBrowser \
{ \
   private: \
      CATDeclareCommonTIEMembers \
   public: \
      CATDeclareTIEMethods(CATIMfgMappingRulesBrowser, classe) \
      CATDeclareIUnknownMethodsForCATBaseUnknownTIE \
      CATDeclareIDispatchMethodsForCATBaseUnknownTIE \
      CATDeclareCATBaseUnknownMethodsForTIE \
      virtual HRESULT GetMappingRules(const CATUnicodeString&    iActivity, CATListOfCATUnicodeString& oListMappingRules) ; \
      virtual HRESULT GetDefaultMappingRule(const CATUnicodeString& iActivity, CATUnicodeString&       oDefaultMappingRule) ; \
      virtual HRESULT GetIconName(const CATUnicodeString& iActivity, const CATUnicodeString& iMappingRule, CATString&              oIconName) ; \
      virtual HRESULT GetUmfFormula(const CATUnicodeString& iActivity, const CATUnicodeString& iMappingRule, const CATUnicodeString& iVariable, CATUnicodeString&       oFormula) ; \
      virtual HRESULT GetDesignFeatureInfos(CATListOfCATUnicodeString& oDesignFeatureInfos) ; \
      virtual HRESULT GetDesignFeatureName(CATUnicodeString& oDesignFeatureName) ; \
      virtual HRESULT GetMessageCatalogFile(CATString& oMsgCat) ; \
};



#define ENVTIEdeclare_CATIMfgMappingRulesBrowser(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
virtual HRESULT GetMappingRules(const CATUnicodeString&    iActivity, CATListOfCATUnicodeString& oListMappingRules) ; \
virtual HRESULT GetDefaultMappingRule(const CATUnicodeString& iActivity, CATUnicodeString&       oDefaultMappingRule) ; \
virtual HRESULT GetIconName(const CATUnicodeString& iActivity, const CATUnicodeString& iMappingRule, CATString&              oIconName) ; \
virtual HRESULT GetUmfFormula(const CATUnicodeString& iActivity, const CATUnicodeString& iMappingRule, const CATUnicodeString& iVariable, CATUnicodeString&       oFormula) ; \
virtual HRESULT GetDesignFeatureInfos(CATListOfCATUnicodeString& oDesignFeatureInfos) ; \
virtual HRESULT GetDesignFeatureName(CATUnicodeString& oDesignFeatureName) ; \
virtual HRESULT GetMessageCatalogFile(CATString& oMsgCat) ; \


#define ENVTIEdefine_CATIMfgMappingRulesBrowser(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
HRESULT  ENVTIEName::GetMappingRules(const CATUnicodeString&    iActivity, CATListOfCATUnicodeString& oListMappingRules)  \
{ \
return (ENVTIECALL(CATIMfgMappingRulesBrowser,ENVTIETypeLetter,ENVTIELetter)GetMappingRules(iActivity,oListMappingRules)); \
} \
HRESULT  ENVTIEName::GetDefaultMappingRule(const CATUnicodeString& iActivity, CATUnicodeString&       oDefaultMappingRule)  \
{ \
return (ENVTIECALL(CATIMfgMappingRulesBrowser,ENVTIETypeLetter,ENVTIELetter)GetDefaultMappingRule(iActivity,oDefaultMappingRule)); \
} \
HRESULT  ENVTIEName::GetIconName(const CATUnicodeString& iActivity, const CATUnicodeString& iMappingRule, CATString&              oIconName)  \
{ \
return (ENVTIECALL(CATIMfgMappingRulesBrowser,ENVTIETypeLetter,ENVTIELetter)GetIconName(iActivity,iMappingRule,oIconName)); \
} \
HRESULT  ENVTIEName::GetUmfFormula(const CATUnicodeString& iActivity, const CATUnicodeString& iMappingRule, const CATUnicodeString& iVariable, CATUnicodeString&       oFormula)  \
{ \
return (ENVTIECALL(CATIMfgMappingRulesBrowser,ENVTIETypeLetter,ENVTIELetter)GetUmfFormula(iActivity,iMappingRule,iVariable,oFormula)); \
} \
HRESULT  ENVTIEName::GetDesignFeatureInfos(CATListOfCATUnicodeString& oDesignFeatureInfos)  \
{ \
return (ENVTIECALL(CATIMfgMappingRulesBrowser,ENVTIETypeLetter,ENVTIELetter)GetDesignFeatureInfos(oDesignFeatureInfos)); \
} \
HRESULT  ENVTIEName::GetDesignFeatureName(CATUnicodeString& oDesignFeatureName)  \
{ \
return (ENVTIECALL(CATIMfgMappingRulesBrowser,ENVTIETypeLetter,ENVTIELetter)GetDesignFeatureName(oDesignFeatureName)); \
} \
HRESULT  ENVTIEName::GetMessageCatalogFile(CATString& oMsgCat)  \
{ \
return (ENVTIECALL(CATIMfgMappingRulesBrowser,ENVTIETypeLetter,ENVTIELetter)GetMessageCatalogFile(oMsgCat)); \
} \


/* Name of the TIE class */
#define class_TIE_CATIMfgMappingRulesBrowser(classe)    TIECATIMfgMappingRulesBrowser##classe


/* Common methods inside a TIE */
#define common_TIE_CATIMfgMappingRulesBrowser(classe) \
 \
 \
/* Static initialization */ \
CATDefineCommonTIEMembers(CATIMfgMappingRulesBrowser, classe) \
 \
 \
CATImplementTIEMethods(CATIMfgMappingRulesBrowser, classe) \
CATImplementIUnknownMethodsForCATBaseUnknownTIE(CATIMfgMappingRulesBrowser, classe, 1) \
CATImplementIDispatchMethodsForCATBaseUnknownTIE(CATIMfgMappingRulesBrowser, classe) \
CATImplementCATBaseUnknownMethodsForTIE(CATIMfgMappingRulesBrowser, classe) \
 \
HRESULT  TIECATIMfgMappingRulesBrowser##classe::GetMappingRules(const CATUnicodeString&    iActivity, CATListOfCATUnicodeString& oListMappingRules)  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetMappingRules(iActivity,oListMappingRules)); \
} \
HRESULT  TIECATIMfgMappingRulesBrowser##classe::GetDefaultMappingRule(const CATUnicodeString& iActivity, CATUnicodeString&       oDefaultMappingRule)  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetDefaultMappingRule(iActivity,oDefaultMappingRule)); \
} \
HRESULT  TIECATIMfgMappingRulesBrowser##classe::GetIconName(const CATUnicodeString& iActivity, const CATUnicodeString& iMappingRule, CATString&              oIconName)  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetIconName(iActivity,iMappingRule,oIconName)); \
} \
HRESULT  TIECATIMfgMappingRulesBrowser##classe::GetUmfFormula(const CATUnicodeString& iActivity, const CATUnicodeString& iMappingRule, const CATUnicodeString& iVariable, CATUnicodeString&       oFormula)  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetUmfFormula(iActivity,iMappingRule,iVariable,oFormula)); \
} \
HRESULT  TIECATIMfgMappingRulesBrowser##classe::GetDesignFeatureInfos(CATListOfCATUnicodeString& oDesignFeatureInfos)  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetDesignFeatureInfos(oDesignFeatureInfos)); \
} \
HRESULT  TIECATIMfgMappingRulesBrowser##classe::GetDesignFeatureName(CATUnicodeString& oDesignFeatureName)  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetDesignFeatureName(oDesignFeatureName)); \
} \
HRESULT  TIECATIMfgMappingRulesBrowser##classe::GetMessageCatalogFile(CATString& oMsgCat)  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetMessageCatalogFile(oMsgCat)); \
} \



/* Macro used to link an implementation with an interface */
#define TIE_CATIMfgMappingRulesBrowser(classe) \
 \
 \
declare_TIE_CATIMfgMappingRulesBrowser(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIMfgMappingRulesBrowser##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIMfgMappingRulesBrowser,"CATIMfgMappingRulesBrowser",CATIMfgMappingRulesBrowser::MetaObject(),classe::MetaObject(),TIE); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIMfgMappingRulesBrowser(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIECreation(CATIMfgMappingRulesBrowser, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIMfgMappingRulesBrowser##classe(classe::MetaObject(),CATIMfgMappingRulesBrowser::MetaObject(),(void *)CreateTIECATIMfgMappingRulesBrowser##classe)



/* Macro used to link an implementation with an interface */
/* This TIE is chained on the implementation object */
#define TIEchain_CATIMfgMappingRulesBrowser(classe) \
 \
 \
declare_TIE_CATIMfgMappingRulesBrowser(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIMfgMappingRulesBrowser##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIMfgMappingRulesBrowser,"CATIMfgMappingRulesBrowser",CATIMfgMappingRulesBrowser::MetaObject(),classe::MetaObject(),TIEchain); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIMfgMappingRulesBrowser(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIEchainCreation(CATIMfgMappingRulesBrowser, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIMfgMappingRulesBrowser##classe(classe::MetaObject(),CATIMfgMappingRulesBrowser::MetaObject(),(void *)CreateTIECATIMfgMappingRulesBrowser##classe)


/* Macro to switch between BOA and TIE at build time */ 
#ifdef CATSYS_BOA_IS_TIE
#define BOA_CATIMfgMappingRulesBrowser(classe) TIE_CATIMfgMappingRulesBrowser(classe)
#else
#define BOA_CATIMfgMappingRulesBrowser(classe) CATImplementBOA(CATIMfgMappingRulesBrowser, classe)
#endif

#endif
