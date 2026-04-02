#ifndef __TIE_CATIMfgGeometryActivity
#define __TIE_CATIMfgGeometryActivity

#include <string.h>
#include "CATBaseUnknown.h"
#include "CATMetaClass.h"
#include "CATMacForTie.h"
#include "CATIMfgGeometryActivity.h"
#include "JS0DSPA.h"


#ifdef _WINDOWS_SOURCE
#define Exported __declspec(dllexport)
#define Imported __declspec(dllimport)
#else
#define Exported 
#define Imported 
#endif


/* To link an implementation with the interface CATIMfgGeometryActivity */
#define declare_TIE_CATIMfgGeometryActivity(classe) \
 \
 \
class TIECATIMfgGeometryActivity##classe : public CATIMfgGeometryActivity \
{ \
   private: \
      CATDeclareCommonTIEMembers \
   public: \
      CATDeclareTIEMethods(CATIMfgGeometryActivity, classe) \
      CATDeclareIUnknownMethodsForCATBaseUnknownTIE \
      CATDeclareIDispatchMethodsForCATBaseUnknownTIE \
      CATDeclareCATBaseUnknownMethodsForTIE \
      virtual HRESULT GetMainPanelEditor(CATDialog *iFather, CATDlgFrame*& oFrame, CATDlgStyle iStyle=0) ; \
};



#define ENVTIEdeclare_CATIMfgGeometryActivity(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
virtual HRESULT GetMainPanelEditor(CATDialog *iFather, CATDlgFrame*& oFrame, CATDlgStyle iStyle=0) ; \


#define ENVTIEdefine_CATIMfgGeometryActivity(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
HRESULT  ENVTIEName::GetMainPanelEditor(CATDialog *iFather, CATDlgFrame*& oFrame, CATDlgStyle iStyle)  \
{ \
return (ENVTIECALL(CATIMfgGeometryActivity,ENVTIETypeLetter,ENVTIELetter)GetMainPanelEditor(iFather,oFrame,iStyle)); \
} \


/* Name of the TIE class */
#define class_TIE_CATIMfgGeometryActivity(classe)    TIECATIMfgGeometryActivity##classe


/* Common methods inside a TIE */
#define common_TIE_CATIMfgGeometryActivity(classe) \
 \
 \
/* Static initialization */ \
CATDefineCommonTIEMembers(CATIMfgGeometryActivity, classe) \
 \
 \
CATImplementTIEMethods(CATIMfgGeometryActivity, classe) \
CATImplementIUnknownMethodsForCATBaseUnknownTIE(CATIMfgGeometryActivity, classe, 1) \
CATImplementIDispatchMethodsForCATBaseUnknownTIE(CATIMfgGeometryActivity, classe) \
CATImplementCATBaseUnknownMethodsForTIE(CATIMfgGeometryActivity, classe) \
 \
HRESULT  TIECATIMfgGeometryActivity##classe::GetMainPanelEditor(CATDialog *iFather, CATDlgFrame*& oFrame, CATDlgStyle iStyle)  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetMainPanelEditor(iFather,oFrame,iStyle)); \
} \



/* Macro used to link an implementation with an interface */
#define TIE_CATIMfgGeometryActivity(classe) \
 \
 \
declare_TIE_CATIMfgGeometryActivity(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIMfgGeometryActivity##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIMfgGeometryActivity,"CATIMfgGeometryActivity",CATIMfgGeometryActivity::MetaObject(),classe::MetaObject(),TIE); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIMfgGeometryActivity(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIECreation(CATIMfgGeometryActivity, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIMfgGeometryActivity##classe(classe::MetaObject(),CATIMfgGeometryActivity::MetaObject(),(void *)CreateTIECATIMfgGeometryActivity##classe)



/* Macro used to link an implementation with an interface */
/* This TIE is chained on the implementation object */
#define TIEchain_CATIMfgGeometryActivity(classe) \
 \
 \
declare_TIE_CATIMfgGeometryActivity(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIMfgGeometryActivity##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIMfgGeometryActivity,"CATIMfgGeometryActivity",CATIMfgGeometryActivity::MetaObject(),classe::MetaObject(),TIEchain); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIMfgGeometryActivity(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIEchainCreation(CATIMfgGeometryActivity, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIMfgGeometryActivity##classe(classe::MetaObject(),CATIMfgGeometryActivity::MetaObject(),(void *)CreateTIECATIMfgGeometryActivity##classe)


/* Macro to switch between BOA and TIE at build time */ 
#ifdef CATSYS_BOA_IS_TIE
#define BOA_CATIMfgGeometryActivity(classe) TIE_CATIMfgGeometryActivity(classe)
#else
#define BOA_CATIMfgGeometryActivity(classe) CATImplementBOA(CATIMfgGeometryActivity, classe)
#endif

#endif
