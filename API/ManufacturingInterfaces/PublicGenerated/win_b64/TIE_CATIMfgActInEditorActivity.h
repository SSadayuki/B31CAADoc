#ifndef __TIE_CATIMfgActInEditorActivity
#define __TIE_CATIMfgActInEditorActivity

#include <string.h>
#include "CATBaseUnknown.h"
#include "CATMetaClass.h"
#include "CATMacForTie.h"
#include "CATIMfgActInEditorActivity.h"
#include "JS0DSPA.h"


#ifdef _WINDOWS_SOURCE
#define Exported __declspec(dllexport)
#define Imported __declspec(dllimport)
#else
#define Exported 
#define Imported 
#endif


/* To link an implementation with the interface CATIMfgActInEditorActivity */
#define declare_TIE_CATIMfgActInEditorActivity(classe) \
 \
 \
class TIECATIMfgActInEditorActivity##classe : public CATIMfgActInEditorActivity \
{ \
   private: \
      CATDeclareCommonTIEMembers \
   public: \
      CATDeclareTIEMethods(CATIMfgActInEditorActivity, classe) \
      CATDeclareIUnknownMethodsForCATBaseUnknownTIE \
      CATDeclareIDispatchMethodsForCATBaseUnknownTIE \
      CATDeclareCATBaseUnknownMethodsForTIE \
      virtual HRESULT OnCancelButton () ; \
};



#define ENVTIEdeclare_CATIMfgActInEditorActivity(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
virtual HRESULT OnCancelButton () ; \


#define ENVTIEdefine_CATIMfgActInEditorActivity(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
HRESULT  ENVTIEName::OnCancelButton ()  \
{ \
return (ENVTIECALL(CATIMfgActInEditorActivity,ENVTIETypeLetter,ENVTIELetter)OnCancelButton ()); \
} \


/* Name of the TIE class */
#define class_TIE_CATIMfgActInEditorActivity(classe)    TIECATIMfgActInEditorActivity##classe


/* Common methods inside a TIE */
#define common_TIE_CATIMfgActInEditorActivity(classe) \
 \
 \
/* Static initialization */ \
CATDefineCommonTIEMembers(CATIMfgActInEditorActivity, classe) \
 \
 \
CATImplementTIEMethods(CATIMfgActInEditorActivity, classe) \
CATImplementIUnknownMethodsForCATBaseUnknownTIE(CATIMfgActInEditorActivity, classe, 1) \
CATImplementIDispatchMethodsForCATBaseUnknownTIE(CATIMfgActInEditorActivity, classe) \
CATImplementCATBaseUnknownMethodsForTIE(CATIMfgActInEditorActivity, classe) \
 \
HRESULT  TIECATIMfgActInEditorActivity##classe::OnCancelButton ()  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->OnCancelButton ()); \
} \



/* Macro used to link an implementation with an interface */
#define TIE_CATIMfgActInEditorActivity(classe) \
 \
 \
declare_TIE_CATIMfgActInEditorActivity(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIMfgActInEditorActivity##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIMfgActInEditorActivity,"CATIMfgActInEditorActivity",CATIMfgActInEditorActivity::MetaObject(),classe::MetaObject(),TIE); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIMfgActInEditorActivity(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIECreation(CATIMfgActInEditorActivity, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIMfgActInEditorActivity##classe(classe::MetaObject(),CATIMfgActInEditorActivity::MetaObject(),(void *)CreateTIECATIMfgActInEditorActivity##classe)



/* Macro used to link an implementation with an interface */
/* This TIE is chained on the implementation object */
#define TIEchain_CATIMfgActInEditorActivity(classe) \
 \
 \
declare_TIE_CATIMfgActInEditorActivity(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIMfgActInEditorActivity##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIMfgActInEditorActivity,"CATIMfgActInEditorActivity",CATIMfgActInEditorActivity::MetaObject(),classe::MetaObject(),TIEchain); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIMfgActInEditorActivity(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIEchainCreation(CATIMfgActInEditorActivity, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIMfgActInEditorActivity##classe(classe::MetaObject(),CATIMfgActInEditorActivity::MetaObject(),(void *)CreateTIECATIMfgActInEditorActivity##classe)


/* Macro to switch between BOA and TIE at build time */ 
#ifdef CATSYS_BOA_IS_TIE
#define BOA_CATIMfgActInEditorActivity(classe) TIE_CATIMfgActInEditorActivity(classe)
#else
#define BOA_CATIMfgActInEditorActivity(classe) CATImplementBOA(CATIMfgActInEditorActivity, classe)
#endif

#endif
