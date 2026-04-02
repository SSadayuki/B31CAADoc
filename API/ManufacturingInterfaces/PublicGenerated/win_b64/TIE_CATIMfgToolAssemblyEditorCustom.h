#ifndef __TIE_CATIMfgToolAssemblyEditorCustom
#define __TIE_CATIMfgToolAssemblyEditorCustom

#include <string.h>
#include "CATBaseUnknown.h"
#include "CATMetaClass.h"
#include "CATMacForTie.h"
#include "CATIMfgToolAssemblyEditorCustom.h"
#include "JS0DSPA.h"


#ifdef _WINDOWS_SOURCE
#define Exported __declspec(dllexport)
#define Imported __declspec(dllimport)
#else
#define Exported 
#define Imported 
#endif


/* To link an implementation with the interface CATIMfgToolAssemblyEditorCustom */
#define declare_TIE_CATIMfgToolAssemblyEditorCustom(classe) \
 \
 \
class TIECATIMfgToolAssemblyEditorCustom##classe : public CATIMfgToolAssemblyEditorCustom \
{ \
   private: \
      CATDeclareCommonTIEMembers \
   public: \
      CATDeclareTIEMethods(CATIMfgToolAssemblyEditorCustom, classe) \
      CATDeclareIUnknownMethodsForCATBaseUnknownTIE \
      CATDeclareIDispatchMethodsForCATBaseUnknownTIE \
      CATDeclareCATBaseUnknownMethodsForTIE \
      virtual CATDlgFrame* GetViewerPanelEditor(CATDialog* iFather, CATDlgStyle iStyle = (1 << 19)) ; \
      virtual CATDlgFrame* GetMorePanelEditor(CATDialog* iFather, CATDlgStyle iStyle = (1 << 19)) ; \
};



#define ENVTIEdeclare_CATIMfgToolAssemblyEditorCustom(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
virtual CATDlgFrame* GetViewerPanelEditor(CATDialog* iFather, CATDlgStyle iStyle = (1 << 19)) ; \
virtual CATDlgFrame* GetMorePanelEditor(CATDialog* iFather, CATDlgStyle iStyle = (1 << 19)) ; \


#define ENVTIEdefine_CATIMfgToolAssemblyEditorCustom(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
CATDlgFrame*  ENVTIEName::GetViewerPanelEditor(CATDialog* iFather, CATDlgStyle iStyle )  \
{ \
return (ENVTIECALL(CATIMfgToolAssemblyEditorCustom,ENVTIETypeLetter,ENVTIELetter)GetViewerPanelEditor(iFather,iStyle )); \
} \
CATDlgFrame*  ENVTIEName::GetMorePanelEditor(CATDialog* iFather, CATDlgStyle iStyle )  \
{ \
return (ENVTIECALL(CATIMfgToolAssemblyEditorCustom,ENVTIETypeLetter,ENVTIELetter)GetMorePanelEditor(iFather,iStyle )); \
} \


/* Name of the TIE class */
#define class_TIE_CATIMfgToolAssemblyEditorCustom(classe)    TIECATIMfgToolAssemblyEditorCustom##classe


/* Common methods inside a TIE */
#define common_TIE_CATIMfgToolAssemblyEditorCustom(classe) \
 \
 \
/* Static initialization */ \
CATDefineCommonTIEMembers(CATIMfgToolAssemblyEditorCustom, classe) \
 \
 \
CATImplementTIEMethods(CATIMfgToolAssemblyEditorCustom, classe) \
CATImplementIUnknownMethodsForCATBaseUnknownTIE(CATIMfgToolAssemblyEditorCustom, classe, 1) \
CATImplementIDispatchMethodsForCATBaseUnknownTIE(CATIMfgToolAssemblyEditorCustom, classe) \
CATImplementCATBaseUnknownMethodsForTIE(CATIMfgToolAssemblyEditorCustom, classe) \
 \
CATDlgFrame*  TIECATIMfgToolAssemblyEditorCustom##classe::GetViewerPanelEditor(CATDialog* iFather, CATDlgStyle iStyle )  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetViewerPanelEditor(iFather,iStyle )); \
} \
CATDlgFrame*  TIECATIMfgToolAssemblyEditorCustom##classe::GetMorePanelEditor(CATDialog* iFather, CATDlgStyle iStyle )  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetMorePanelEditor(iFather,iStyle )); \
} \



/* Macro used to link an implementation with an interface */
#define TIE_CATIMfgToolAssemblyEditorCustom(classe) \
 \
 \
declare_TIE_CATIMfgToolAssemblyEditorCustom(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIMfgToolAssemblyEditorCustom##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIMfgToolAssemblyEditorCustom,"CATIMfgToolAssemblyEditorCustom",CATIMfgToolAssemblyEditorCustom::MetaObject(),classe::MetaObject(),TIE); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIMfgToolAssemblyEditorCustom(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIECreation(CATIMfgToolAssemblyEditorCustom, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIMfgToolAssemblyEditorCustom##classe(classe::MetaObject(),CATIMfgToolAssemblyEditorCustom::MetaObject(),(void *)CreateTIECATIMfgToolAssemblyEditorCustom##classe)



/* Macro used to link an implementation with an interface */
/* This TIE is chained on the implementation object */
#define TIEchain_CATIMfgToolAssemblyEditorCustom(classe) \
 \
 \
declare_TIE_CATIMfgToolAssemblyEditorCustom(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIMfgToolAssemblyEditorCustom##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIMfgToolAssemblyEditorCustom,"CATIMfgToolAssemblyEditorCustom",CATIMfgToolAssemblyEditorCustom::MetaObject(),classe::MetaObject(),TIEchain); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIMfgToolAssemblyEditorCustom(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIEchainCreation(CATIMfgToolAssemblyEditorCustom, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIMfgToolAssemblyEditorCustom##classe(classe::MetaObject(),CATIMfgToolAssemblyEditorCustom::MetaObject(),(void *)CreateTIECATIMfgToolAssemblyEditorCustom##classe)


/* Macro to switch between BOA and TIE at build time */ 
#ifdef CATSYS_BOA_IS_TIE
#define BOA_CATIMfgToolAssemblyEditorCustom(classe) TIE_CATIMfgToolAssemblyEditorCustom(classe)
#else
#define BOA_CATIMfgToolAssemblyEditorCustom(classe) CATImplementBOA(CATIMfgToolAssemblyEditorCustom, classe)
#endif

#endif
