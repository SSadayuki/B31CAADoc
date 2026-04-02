#ifndef __TIE_CATIMfgMacroEditorActivity
#define __TIE_CATIMfgMacroEditorActivity

#include <string.h>
#include "CATBaseUnknown.h"
#include "CATMetaClass.h"
#include "CATMacForTie.h"
#include "CATIMfgMacroEditorActivity.h"
#include "JS0DSPA.h"


#ifdef _WINDOWS_SOURCE
#define Exported __declspec(dllexport)
#define Imported __declspec(dllimport)
#else
#define Exported 
#define Imported 
#endif


/* To link an implementation with the interface CATIMfgMacroEditorActivity */
#define declare_TIE_CATIMfgMacroEditorActivity(classe) \
 \
 \
class TIECATIMfgMacroEditorActivity##classe : public CATIMfgMacroEditorActivity \
{ \
   private: \
      CATDeclareCommonTIEMembers \
   public: \
      CATDeclareTIEMethods(CATIMfgMacroEditorActivity, classe) \
      CATDeclareIUnknownMethodsForCATBaseUnknownTIE \
      CATDeclareIDispatchMethodsForCATBaseUnknownTIE \
      CATDeclareCATBaseUnknownMethodsForTIE \
      virtual HRESULT GetMainPanelEditor(CATDialog *iFather, CATDlgFrame*& oFrame, CATDlgStyle iStyle=0) ; \
};



#define ENVTIEdeclare_CATIMfgMacroEditorActivity(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
virtual HRESULT GetMainPanelEditor(CATDialog *iFather, CATDlgFrame*& oFrame, CATDlgStyle iStyle=0) ; \


#define ENVTIEdefine_CATIMfgMacroEditorActivity(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
HRESULT  ENVTIEName::GetMainPanelEditor(CATDialog *iFather, CATDlgFrame*& oFrame, CATDlgStyle iStyle)  \
{ \
return (ENVTIECALL(CATIMfgMacroEditorActivity,ENVTIETypeLetter,ENVTIELetter)GetMainPanelEditor(iFather,oFrame,iStyle)); \
} \


/* Name of the TIE class */
#define class_TIE_CATIMfgMacroEditorActivity(classe)    TIECATIMfgMacroEditorActivity##classe


/* Common methods inside a TIE */
#define common_TIE_CATIMfgMacroEditorActivity(classe) \
 \
 \
/* Static initialization */ \
CATDefineCommonTIEMembers(CATIMfgMacroEditorActivity, classe) \
 \
 \
CATImplementTIEMethods(CATIMfgMacroEditorActivity, classe) \
CATImplementIUnknownMethodsForCATBaseUnknownTIE(CATIMfgMacroEditorActivity, classe, 1) \
CATImplementIDispatchMethodsForCATBaseUnknownTIE(CATIMfgMacroEditorActivity, classe) \
CATImplementCATBaseUnknownMethodsForTIE(CATIMfgMacroEditorActivity, classe) \
 \
HRESULT  TIECATIMfgMacroEditorActivity##classe::GetMainPanelEditor(CATDialog *iFather, CATDlgFrame*& oFrame, CATDlgStyle iStyle)  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetMainPanelEditor(iFather,oFrame,iStyle)); \
} \



/* Macro used to link an implementation with an interface */
#define TIE_CATIMfgMacroEditorActivity(classe) \
 \
 \
declare_TIE_CATIMfgMacroEditorActivity(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIMfgMacroEditorActivity##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIMfgMacroEditorActivity,"CATIMfgMacroEditorActivity",CATIMfgMacroEditorActivity::MetaObject(),classe::MetaObject(),TIE); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIMfgMacroEditorActivity(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIECreation(CATIMfgMacroEditorActivity, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIMfgMacroEditorActivity##classe(classe::MetaObject(),CATIMfgMacroEditorActivity::MetaObject(),(void *)CreateTIECATIMfgMacroEditorActivity##classe)



/* Macro used to link an implementation with an interface */
/* This TIE is chained on the implementation object */
#define TIEchain_CATIMfgMacroEditorActivity(classe) \
 \
 \
declare_TIE_CATIMfgMacroEditorActivity(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIMfgMacroEditorActivity##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIMfgMacroEditorActivity,"CATIMfgMacroEditorActivity",CATIMfgMacroEditorActivity::MetaObject(),classe::MetaObject(),TIEchain); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIMfgMacroEditorActivity(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIEchainCreation(CATIMfgMacroEditorActivity, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIMfgMacroEditorActivity##classe(classe::MetaObject(),CATIMfgMacroEditorActivity::MetaObject(),(void *)CreateTIECATIMfgMacroEditorActivity##classe)


/* Macro to switch between BOA and TIE at build time */ 
#ifdef CATSYS_BOA_IS_TIE
#define BOA_CATIMfgMacroEditorActivity(classe) TIE_CATIMfgMacroEditorActivity(classe)
#else
#define BOA_CATIMfgMacroEditorActivity(classe) CATImplementBOA(CATIMfgMacroEditorActivity, classe)
#endif

#endif
