#ifndef __TIE_CATIMfgCustomizeSearchToolPanel
#define __TIE_CATIMfgCustomizeSearchToolPanel

#include <string.h>
#include "CATBaseUnknown.h"
#include "CATMetaClass.h"
#include "CATMacForTie.h"
#include "CATIMfgCustomizeSearchToolPanel.h"
#include "JS0DSPA.h"


#ifdef _WINDOWS_SOURCE
#define Exported __declspec(dllexport)
#define Imported __declspec(dllimport)
#else
#define Exported 
#define Imported 
#endif


/* To link an implementation with the interface CATIMfgCustomizeSearchToolPanel */
#define declare_TIE_CATIMfgCustomizeSearchToolPanel(classe) \
 \
 \
class TIECATIMfgCustomizeSearchToolPanel##classe : public CATIMfgCustomizeSearchToolPanel \
{ \
   private: \
      CATDeclareCommonTIEMembers \
   public: \
      CATDeclareTIEMethods(CATIMfgCustomizeSearchToolPanel, classe) \
      CATDeclareIUnknownMethodsForCATBaseUnknownTIE \
      CATDeclareIDispatchMethodsForCATBaseUnknownTIE \
      CATDeclareCATBaseUnknownMethodsForTIE \
      virtual HRESULT BuildSubTypeButtons (CATDialog* iFather, CATUnicodeString& iMainToolType, CATDlgFrame*& oFrame) ; \
      virtual HRESULT BuildConstraintsFrame (CATDialog* iFather, CATUnicodeString& iMainToolType, CATDlgFrame*& oFrame) ; \
      virtual HRESULT UpdateFrames (CATUnicodeString& iNewMainToolType) ; \
      virtual HRESULT GetContextualMenuTitles (CATListOfCATUnicodeString& oContextualMenuTitles, CATIMfgResourceQuery::MfgResourceQueryType iResourceType) ; \
      virtual HRESULT ActivateContextualMenu (CATUnicodeString& iActivatedCommand, CATListOfCATUnicodeString& iAuthorizedResourceTypes, CATListOfInt& iSelectedLines, CATIMfgResourceQuery::MfgResourceQueryType iResourceType) ; \
      virtual HRESULT AddAdditionalConstraints () ; \
};



#define ENVTIEdeclare_CATIMfgCustomizeSearchToolPanel(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
virtual HRESULT BuildSubTypeButtons (CATDialog* iFather, CATUnicodeString& iMainToolType, CATDlgFrame*& oFrame) ; \
virtual HRESULT BuildConstraintsFrame (CATDialog* iFather, CATUnicodeString& iMainToolType, CATDlgFrame*& oFrame) ; \
virtual HRESULT UpdateFrames (CATUnicodeString& iNewMainToolType) ; \
virtual HRESULT GetContextualMenuTitles (CATListOfCATUnicodeString& oContextualMenuTitles, CATIMfgResourceQuery::MfgResourceQueryType iResourceType) ; \
virtual HRESULT ActivateContextualMenu (CATUnicodeString& iActivatedCommand, CATListOfCATUnicodeString& iAuthorizedResourceTypes, CATListOfInt& iSelectedLines, CATIMfgResourceQuery::MfgResourceQueryType iResourceType) ; \
virtual HRESULT AddAdditionalConstraints () ; \


#define ENVTIEdefine_CATIMfgCustomizeSearchToolPanel(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
HRESULT  ENVTIEName::BuildSubTypeButtons (CATDialog* iFather, CATUnicodeString& iMainToolType, CATDlgFrame*& oFrame)  \
{ \
return (ENVTIECALL(CATIMfgCustomizeSearchToolPanel,ENVTIETypeLetter,ENVTIELetter)BuildSubTypeButtons (iFather,iMainToolType,oFrame)); \
} \
HRESULT  ENVTIEName::BuildConstraintsFrame (CATDialog* iFather, CATUnicodeString& iMainToolType, CATDlgFrame*& oFrame)  \
{ \
return (ENVTIECALL(CATIMfgCustomizeSearchToolPanel,ENVTIETypeLetter,ENVTIELetter)BuildConstraintsFrame (iFather,iMainToolType,oFrame)); \
} \
HRESULT  ENVTIEName::UpdateFrames (CATUnicodeString& iNewMainToolType)  \
{ \
return (ENVTIECALL(CATIMfgCustomizeSearchToolPanel,ENVTIETypeLetter,ENVTIELetter)UpdateFrames (iNewMainToolType)); \
} \
HRESULT  ENVTIEName::GetContextualMenuTitles (CATListOfCATUnicodeString& oContextualMenuTitles, CATIMfgResourceQuery::MfgResourceQueryType iResourceType)  \
{ \
return (ENVTIECALL(CATIMfgCustomizeSearchToolPanel,ENVTIETypeLetter,ENVTIELetter)GetContextualMenuTitles (oContextualMenuTitles,iResourceType)); \
} \
HRESULT  ENVTIEName::ActivateContextualMenu (CATUnicodeString& iActivatedCommand, CATListOfCATUnicodeString& iAuthorizedResourceTypes, CATListOfInt& iSelectedLines, CATIMfgResourceQuery::MfgResourceQueryType iResourceType)  \
{ \
return (ENVTIECALL(CATIMfgCustomizeSearchToolPanel,ENVTIETypeLetter,ENVTIELetter)ActivateContextualMenu (iActivatedCommand,iAuthorizedResourceTypes,iSelectedLines,iResourceType)); \
} \
HRESULT  ENVTIEName::AddAdditionalConstraints ()  \
{ \
return (ENVTIECALL(CATIMfgCustomizeSearchToolPanel,ENVTIETypeLetter,ENVTIELetter)AddAdditionalConstraints ()); \
} \


/* Name of the TIE class */
#define class_TIE_CATIMfgCustomizeSearchToolPanel(classe)    TIECATIMfgCustomizeSearchToolPanel##classe


/* Common methods inside a TIE */
#define common_TIE_CATIMfgCustomizeSearchToolPanel(classe) \
 \
 \
/* Static initialization */ \
CATDefineCommonTIEMembers(CATIMfgCustomizeSearchToolPanel, classe) \
 \
 \
CATImplementTIEMethods(CATIMfgCustomizeSearchToolPanel, classe) \
CATImplementIUnknownMethodsForCATBaseUnknownTIE(CATIMfgCustomizeSearchToolPanel, classe, 1) \
CATImplementIDispatchMethodsForCATBaseUnknownTIE(CATIMfgCustomizeSearchToolPanel, classe) \
CATImplementCATBaseUnknownMethodsForTIE(CATIMfgCustomizeSearchToolPanel, classe) \
 \
HRESULT  TIECATIMfgCustomizeSearchToolPanel##classe::BuildSubTypeButtons (CATDialog* iFather, CATUnicodeString& iMainToolType, CATDlgFrame*& oFrame)  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->BuildSubTypeButtons (iFather,iMainToolType,oFrame)); \
} \
HRESULT  TIECATIMfgCustomizeSearchToolPanel##classe::BuildConstraintsFrame (CATDialog* iFather, CATUnicodeString& iMainToolType, CATDlgFrame*& oFrame)  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->BuildConstraintsFrame (iFather,iMainToolType,oFrame)); \
} \
HRESULT  TIECATIMfgCustomizeSearchToolPanel##classe::UpdateFrames (CATUnicodeString& iNewMainToolType)  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->UpdateFrames (iNewMainToolType)); \
} \
HRESULT  TIECATIMfgCustomizeSearchToolPanel##classe::GetContextualMenuTitles (CATListOfCATUnicodeString& oContextualMenuTitles, CATIMfgResourceQuery::MfgResourceQueryType iResourceType)  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetContextualMenuTitles (oContextualMenuTitles,iResourceType)); \
} \
HRESULT  TIECATIMfgCustomizeSearchToolPanel##classe::ActivateContextualMenu (CATUnicodeString& iActivatedCommand, CATListOfCATUnicodeString& iAuthorizedResourceTypes, CATListOfInt& iSelectedLines, CATIMfgResourceQuery::MfgResourceQueryType iResourceType)  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->ActivateContextualMenu (iActivatedCommand,iAuthorizedResourceTypes,iSelectedLines,iResourceType)); \
} \
HRESULT  TIECATIMfgCustomizeSearchToolPanel##classe::AddAdditionalConstraints ()  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->AddAdditionalConstraints ()); \
} \



/* Macro used to link an implementation with an interface */
#define TIE_CATIMfgCustomizeSearchToolPanel(classe) \
 \
 \
declare_TIE_CATIMfgCustomizeSearchToolPanel(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIMfgCustomizeSearchToolPanel##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIMfgCustomizeSearchToolPanel,"CATIMfgCustomizeSearchToolPanel",CATIMfgCustomizeSearchToolPanel::MetaObject(),classe::MetaObject(),TIE); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIMfgCustomizeSearchToolPanel(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIECreation(CATIMfgCustomizeSearchToolPanel, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIMfgCustomizeSearchToolPanel##classe(classe::MetaObject(),CATIMfgCustomizeSearchToolPanel::MetaObject(),(void *)CreateTIECATIMfgCustomizeSearchToolPanel##classe)



/* Macro used to link an implementation with an interface */
/* This TIE is chained on the implementation object */
#define TIEchain_CATIMfgCustomizeSearchToolPanel(classe) \
 \
 \
declare_TIE_CATIMfgCustomizeSearchToolPanel(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIMfgCustomizeSearchToolPanel##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIMfgCustomizeSearchToolPanel,"CATIMfgCustomizeSearchToolPanel",CATIMfgCustomizeSearchToolPanel::MetaObject(),classe::MetaObject(),TIEchain); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIMfgCustomizeSearchToolPanel(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIEchainCreation(CATIMfgCustomizeSearchToolPanel, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIMfgCustomizeSearchToolPanel##classe(classe::MetaObject(),CATIMfgCustomizeSearchToolPanel::MetaObject(),(void *)CreateTIECATIMfgCustomizeSearchToolPanel##classe)


/* Macro to switch between BOA and TIE at build time */ 
#ifdef CATSYS_BOA_IS_TIE
#define BOA_CATIMfgCustomizeSearchToolPanel(classe) TIE_CATIMfgCustomizeSearchToolPanel(classe)
#else
#define BOA_CATIMfgCustomizeSearchToolPanel(classe) CATImplementBOA(CATIMfgCustomizeSearchToolPanel, classe)
#endif

#endif
