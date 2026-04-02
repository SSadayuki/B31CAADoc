#ifndef __TIE_CATIMfgStrategyActivity
#define __TIE_CATIMfgStrategyActivity

#include <string.h>
#include "CATBaseUnknown.h"
#include "CATMetaClass.h"
#include "CATMacForTie.h"
#include "CATIMfgStrategyActivity.h"
#include "JS0DSPA.h"


#ifdef _WINDOWS_SOURCE
#define Exported __declspec(dllexport)
#define Imported __declspec(dllimport)
#else
#define Exported 
#define Imported 
#endif


/* To link an implementation with the interface CATIMfgStrategyActivity */
#define declare_TIE_CATIMfgStrategyActivity(classe) \
 \
 \
class TIECATIMfgStrategyActivity##classe : public CATIMfgStrategyActivity \
{ \
   private: \
      CATDeclareCommonTIEMembers \
   public: \
      CATDeclareTIEMethods(CATIMfgStrategyActivity, classe) \
      CATDeclareIUnknownMethodsForCATBaseUnknownTIE \
      CATDeclareIDispatchMethodsForCATBaseUnknownTIE \
      CATDeclareCATBaseUnknownMethodsForTIE \
      virtual HRESULT GetMainPanelEditor(CATDialog *iFather, CATDlgFrame*& oFrame, CATDlgStyle iStyle=0) ; \
};



#define ENVTIEdeclare_CATIMfgStrategyActivity(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
virtual HRESULT GetMainPanelEditor(CATDialog *iFather, CATDlgFrame*& oFrame, CATDlgStyle iStyle=0) ; \


#define ENVTIEdefine_CATIMfgStrategyActivity(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
HRESULT  ENVTIEName::GetMainPanelEditor(CATDialog *iFather, CATDlgFrame*& oFrame, CATDlgStyle iStyle)  \
{ \
return (ENVTIECALL(CATIMfgStrategyActivity,ENVTIETypeLetter,ENVTIELetter)GetMainPanelEditor(iFather,oFrame,iStyle)); \
} \


/* Name of the TIE class */
#define class_TIE_CATIMfgStrategyActivity(classe)    TIECATIMfgStrategyActivity##classe


/* Common methods inside a TIE */
#define common_TIE_CATIMfgStrategyActivity(classe) \
 \
 \
/* Static initialization */ \
CATDefineCommonTIEMembers(CATIMfgStrategyActivity, classe) \
 \
 \
CATImplementTIEMethods(CATIMfgStrategyActivity, classe) \
CATImplementIUnknownMethodsForCATBaseUnknownTIE(CATIMfgStrategyActivity, classe, 1) \
CATImplementIDispatchMethodsForCATBaseUnknownTIE(CATIMfgStrategyActivity, classe) \
CATImplementCATBaseUnknownMethodsForTIE(CATIMfgStrategyActivity, classe) \
 \
HRESULT  TIECATIMfgStrategyActivity##classe::GetMainPanelEditor(CATDialog *iFather, CATDlgFrame*& oFrame, CATDlgStyle iStyle)  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetMainPanelEditor(iFather,oFrame,iStyle)); \
} \



/* Macro used to link an implementation with an interface */
#define TIE_CATIMfgStrategyActivity(classe) \
 \
 \
declare_TIE_CATIMfgStrategyActivity(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIMfgStrategyActivity##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIMfgStrategyActivity,"CATIMfgStrategyActivity",CATIMfgStrategyActivity::MetaObject(),classe::MetaObject(),TIE); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIMfgStrategyActivity(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIECreation(CATIMfgStrategyActivity, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIMfgStrategyActivity##classe(classe::MetaObject(),CATIMfgStrategyActivity::MetaObject(),(void *)CreateTIECATIMfgStrategyActivity##classe)



/* Macro used to link an implementation with an interface */
/* This TIE is chained on the implementation object */
#define TIEchain_CATIMfgStrategyActivity(classe) \
 \
 \
declare_TIE_CATIMfgStrategyActivity(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIMfgStrategyActivity##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIMfgStrategyActivity,"CATIMfgStrategyActivity",CATIMfgStrategyActivity::MetaObject(),classe::MetaObject(),TIEchain); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIMfgStrategyActivity(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIEchainCreation(CATIMfgStrategyActivity, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIMfgStrategyActivity##classe(classe::MetaObject(),CATIMfgStrategyActivity::MetaObject(),(void *)CreateTIECATIMfgStrategyActivity##classe)


/* Macro to switch between BOA and TIE at build time */ 
#ifdef CATSYS_BOA_IS_TIE
#define BOA_CATIMfgStrategyActivity(classe) TIE_CATIMfgStrategyActivity(classe)
#else
#define BOA_CATIMfgStrategyActivity(classe) CATImplementBOA(CATIMfgStrategyActivity, classe)
#endif

#endif
