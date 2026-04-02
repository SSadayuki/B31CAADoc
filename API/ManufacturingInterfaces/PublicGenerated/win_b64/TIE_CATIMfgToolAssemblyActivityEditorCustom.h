#ifndef __TIE_CATIMfgToolAssemblyActivityEditorCustom
#define __TIE_CATIMfgToolAssemblyActivityEditorCustom

#include <string.h>
#include "CATBaseUnknown.h"
#include "CATMetaClass.h"
#include "CATMacForTie.h"
#include "CATIMfgToolAssemblyActivityEditorCustom.h"
#include "JS0DSPA.h"


#ifdef _WINDOWS_SOURCE
#define Exported __declspec(dllexport)
#define Imported __declspec(dllimport)
#else
#define Exported 
#define Imported 
#endif


/* To link an implementation with the interface CATIMfgToolAssemblyActivityEditorCustom */
#define declare_TIE_CATIMfgToolAssemblyActivityEditorCustom(classe) \
 \
 \
class TIECATIMfgToolAssemblyActivityEditorCustom##classe : public CATIMfgToolAssemblyActivityEditorCustom \
{ \
   private: \
      CATDeclareCommonTIEMembers \
   public: \
      CATDeclareTIEMethods(CATIMfgToolAssemblyActivityEditorCustom, classe) \
      CATDeclareIUnknownMethodsForCATBaseUnknownTIE \
      CATDeclareIDispatchMethodsForCATBaseUnknownTIE \
      CATDeclareCATBaseUnknownMethodsForTIE \
      virtual CATDlgFrame* GetViewerPanelEditor(CATDialog* iFather, const CATBaseUnknown_var& iMachiningOperation, CATDlgStyle iStyle = (1 << 19)) ; \
      virtual CATDlgFrame* GetMorePanelEditor(CATDialog* iFather, const CATBaseUnknown_var& iMachiningOperation, CATDlgStyle iStyle = (1 << 19)) ; \
};



#define ENVTIEdeclare_CATIMfgToolAssemblyActivityEditorCustom(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
virtual CATDlgFrame* GetViewerPanelEditor(CATDialog* iFather, const CATBaseUnknown_var& iMachiningOperation, CATDlgStyle iStyle = (1 << 19)) ; \
virtual CATDlgFrame* GetMorePanelEditor(CATDialog* iFather, const CATBaseUnknown_var& iMachiningOperation, CATDlgStyle iStyle = (1 << 19)) ; \


#define ENVTIEdefine_CATIMfgToolAssemblyActivityEditorCustom(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
CATDlgFrame*  ENVTIEName::GetViewerPanelEditor(CATDialog* iFather, const CATBaseUnknown_var& iMachiningOperation, CATDlgStyle iStyle )  \
{ \
return (ENVTIECALL(CATIMfgToolAssemblyActivityEditorCustom,ENVTIETypeLetter,ENVTIELetter)GetViewerPanelEditor(iFather,iMachiningOperation,iStyle )); \
} \
CATDlgFrame*  ENVTIEName::GetMorePanelEditor(CATDialog* iFather, const CATBaseUnknown_var& iMachiningOperation, CATDlgStyle iStyle )  \
{ \
return (ENVTIECALL(CATIMfgToolAssemblyActivityEditorCustom,ENVTIETypeLetter,ENVTIELetter)GetMorePanelEditor(iFather,iMachiningOperation,iStyle )); \
} \


/* Name of the TIE class */
#define class_TIE_CATIMfgToolAssemblyActivityEditorCustom(classe)    TIECATIMfgToolAssemblyActivityEditorCustom##classe


/* Common methods inside a TIE */
#define common_TIE_CATIMfgToolAssemblyActivityEditorCustom(classe) \
 \
 \
/* Static initialization */ \
CATDefineCommonTIEMembers(CATIMfgToolAssemblyActivityEditorCustom, classe) \
 \
 \
CATImplementTIEMethods(CATIMfgToolAssemblyActivityEditorCustom, classe) \
CATImplementIUnknownMethodsForCATBaseUnknownTIE(CATIMfgToolAssemblyActivityEditorCustom, classe, 1) \
CATImplementIDispatchMethodsForCATBaseUnknownTIE(CATIMfgToolAssemblyActivityEditorCustom, classe) \
CATImplementCATBaseUnknownMethodsForTIE(CATIMfgToolAssemblyActivityEditorCustom, classe) \
 \
CATDlgFrame*  TIECATIMfgToolAssemblyActivityEditorCustom##classe::GetViewerPanelEditor(CATDialog* iFather, const CATBaseUnknown_var& iMachiningOperation, CATDlgStyle iStyle )  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetViewerPanelEditor(iFather,iMachiningOperation,iStyle )); \
} \
CATDlgFrame*  TIECATIMfgToolAssemblyActivityEditorCustom##classe::GetMorePanelEditor(CATDialog* iFather, const CATBaseUnknown_var& iMachiningOperation, CATDlgStyle iStyle )  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetMorePanelEditor(iFather,iMachiningOperation,iStyle )); \
} \



/* Macro used to link an implementation with an interface */
#define TIE_CATIMfgToolAssemblyActivityEditorCustom(classe) \
 \
 \
declare_TIE_CATIMfgToolAssemblyActivityEditorCustom(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIMfgToolAssemblyActivityEditorCustom##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIMfgToolAssemblyActivityEditorCustom,"CATIMfgToolAssemblyActivityEditorCustom",CATIMfgToolAssemblyActivityEditorCustom::MetaObject(),classe::MetaObject(),TIE); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIMfgToolAssemblyActivityEditorCustom(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIECreation(CATIMfgToolAssemblyActivityEditorCustom, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIMfgToolAssemblyActivityEditorCustom##classe(classe::MetaObject(),CATIMfgToolAssemblyActivityEditorCustom::MetaObject(),(void *)CreateTIECATIMfgToolAssemblyActivityEditorCustom##classe)



/* Macro used to link an implementation with an interface */
/* This TIE is chained on the implementation object */
#define TIEchain_CATIMfgToolAssemblyActivityEditorCustom(classe) \
 \
 \
declare_TIE_CATIMfgToolAssemblyActivityEditorCustom(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIMfgToolAssemblyActivityEditorCustom##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIMfgToolAssemblyActivityEditorCustom,"CATIMfgToolAssemblyActivityEditorCustom",CATIMfgToolAssemblyActivityEditorCustom::MetaObject(),classe::MetaObject(),TIEchain); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIMfgToolAssemblyActivityEditorCustom(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIEchainCreation(CATIMfgToolAssemblyActivityEditorCustom, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIMfgToolAssemblyActivityEditorCustom##classe(classe::MetaObject(),CATIMfgToolAssemblyActivityEditorCustom::MetaObject(),(void *)CreateTIECATIMfgToolAssemblyActivityEditorCustom##classe)


/* Macro to switch between BOA and TIE at build time */ 
#ifdef CATSYS_BOA_IS_TIE
#define BOA_CATIMfgToolAssemblyActivityEditorCustom(classe) TIE_CATIMfgToolAssemblyActivityEditorCustom(classe)
#else
#define BOA_CATIMfgToolAssemblyActivityEditorCustom(classe) CATImplementBOA(CATIMfgToolAssemblyActivityEditorCustom, classe)
#endif

#endif
