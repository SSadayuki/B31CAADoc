#ifndef __TIE_CATIMfgUserEditorActivity
#define __TIE_CATIMfgUserEditorActivity

#include <string.h>
#include "CATBaseUnknown.h"
#include "CATMetaClass.h"
#include "CATMacForTie.h"
#include "CATIMfgUserEditorActivity.h"
#include "JS0DSPA.h"


#ifdef _WINDOWS_SOURCE
#define Exported __declspec(dllexport)
#define Imported __declspec(dllimport)
#else
#define Exported 
#define Imported 
#endif


/* To link an implementation with the interface CATIMfgUserEditorActivity */
#define declare_TIE_CATIMfgUserEditorActivity(classe) \
 \
 \
class TIECATIMfgUserEditorActivity##classe : public CATIMfgUserEditorActivity \
{ \
   private: \
      CATDeclareCommonTIEMembers \
   public: \
      CATDeclareTIEMethods(CATIMfgUserEditorActivity, classe) \
      CATDeclareIUnknownMethodsForCATBaseUnknownTIE \
      CATDeclareIDispatchMethodsForCATBaseUnknownTIE \
      CATDeclareCATBaseUnknownMethodsForTIE \
      virtual HRESULT GetMainPanelEditor(CATDialog *iFather, CATDlgFrame*& oFrame, CATDlgStyle iStyle=0) ; \
};



#define ENVTIEdeclare_CATIMfgUserEditorActivity(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
virtual HRESULT GetMainPanelEditor(CATDialog *iFather, CATDlgFrame*& oFrame, CATDlgStyle iStyle=0) ; \


#define ENVTIEdefine_CATIMfgUserEditorActivity(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
HRESULT  ENVTIEName::GetMainPanelEditor(CATDialog *iFather, CATDlgFrame*& oFrame, CATDlgStyle iStyle)  \
{ \
return (ENVTIECALL(CATIMfgUserEditorActivity,ENVTIETypeLetter,ENVTIELetter)GetMainPanelEditor(iFather,oFrame,iStyle)); \
} \


/* Name of the TIE class */
#define class_TIE_CATIMfgUserEditorActivity(classe)    TIECATIMfgUserEditorActivity##classe


/* Common methods inside a TIE */
#define common_TIE_CATIMfgUserEditorActivity(classe) \
 \
 \
/* Static initialization */ \
CATDefineCommonTIEMembers(CATIMfgUserEditorActivity, classe) \
 \
 \
CATImplementTIEMethods(CATIMfgUserEditorActivity, classe) \
CATImplementIUnknownMethodsForCATBaseUnknownTIE(CATIMfgUserEditorActivity, classe, 1) \
CATImplementIDispatchMethodsForCATBaseUnknownTIE(CATIMfgUserEditorActivity, classe) \
CATImplementCATBaseUnknownMethodsForTIE(CATIMfgUserEditorActivity, classe) \
 \
HRESULT  TIECATIMfgUserEditorActivity##classe::GetMainPanelEditor(CATDialog *iFather, CATDlgFrame*& oFrame, CATDlgStyle iStyle)  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetMainPanelEditor(iFather,oFrame,iStyle)); \
} \



/* Macro used to link an implementation with an interface */
#define TIE_CATIMfgUserEditorActivity(classe) \
 \
 \
declare_TIE_CATIMfgUserEditorActivity(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIMfgUserEditorActivity##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIMfgUserEditorActivity,"CATIMfgUserEditorActivity",CATIMfgUserEditorActivity::MetaObject(),classe::MetaObject(),TIE); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIMfgUserEditorActivity(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIECreation(CATIMfgUserEditorActivity, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIMfgUserEditorActivity##classe(classe::MetaObject(),CATIMfgUserEditorActivity::MetaObject(),(void *)CreateTIECATIMfgUserEditorActivity##classe)



/* Macro used to link an implementation with an interface */
/* This TIE is chained on the implementation object */
#define TIEchain_CATIMfgUserEditorActivity(classe) \
 \
 \
declare_TIE_CATIMfgUserEditorActivity(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIMfgUserEditorActivity##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIMfgUserEditorActivity,"CATIMfgUserEditorActivity",CATIMfgUserEditorActivity::MetaObject(),classe::MetaObject(),TIEchain); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIMfgUserEditorActivity(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIEchainCreation(CATIMfgUserEditorActivity, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIMfgUserEditorActivity##classe(classe::MetaObject(),CATIMfgUserEditorActivity::MetaObject(),(void *)CreateTIECATIMfgUserEditorActivity##classe)


/* Macro to switch between BOA and TIE at build time */ 
#ifdef CATSYS_BOA_IS_TIE
#define BOA_CATIMfgUserEditorActivity(classe) TIE_CATIMfgUserEditorActivity(classe)
#else
#define BOA_CATIMfgUserEditorActivity(classe) CATImplementBOA(CATIMfgUserEditorActivity, classe)
#endif

#endif
