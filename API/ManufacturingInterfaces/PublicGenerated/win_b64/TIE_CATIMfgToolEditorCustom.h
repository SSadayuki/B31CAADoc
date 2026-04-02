#ifndef __TIE_CATIMfgToolEditorCustom
#define __TIE_CATIMfgToolEditorCustom

#include <string.h>
#include "CATBaseUnknown.h"
#include "CATMetaClass.h"
#include "CATMacForTie.h"
#include "CATIMfgToolEditorCustom.h"
#include "JS0DSPA.h"


#ifdef _WINDOWS_SOURCE
#define Exported __declspec(dllexport)
#define Imported __declspec(dllimport)
#else
#define Exported 
#define Imported 
#endif


/* To link an implementation with the interface CATIMfgToolEditorCustom */
#define declare_TIE_CATIMfgToolEditorCustom(classe) \
 \
 \
class TIECATIMfgToolEditorCustom##classe : public CATIMfgToolEditorCustom \
{ \
   private: \
      CATDeclareCommonTIEMembers \
   public: \
      CATDeclareTIEMethods(CATIMfgToolEditorCustom, classe) \
      CATDeclareIUnknownMethodsForCATBaseUnknownTIE \
      CATDeclareIDispatchMethodsForCATBaseUnknownTIE \
      CATDeclareCATBaseUnknownMethodsForTIE \
      virtual CATDlgFrame* GetPanelEditor  (CATDialog          *iFather, CATDlgStyle         iStyle    = (1 << 19), const CATBoolean    iModeEdit = TRUE); \
      virtual CATDlgFrame* GetMorePanelEditor  (CATDialog         *iFather, CATDlgStyle        iStyle    = (1 << 19), const CATBoolean   iModeEdit = TRUE); \
      virtual CATDlgFrame* GetActivityEditor  (CATDialog                *iFather, CATDlgStyle               iStyle    = (1 << 19), const CATBoolean          iModeEdit = FALSE, const CATISpecObject_var &ihSpecAct = ((CATBaseUnknown*)0)); \
      virtual CATDlgFrame* GetGraphicEditor  (CATDialog         *iFather, CATDlgStyle        iStyle    = (1 << 19), const CATBoolean   iModeEdit = FALSE); \
      virtual void GenerateJPEGImageFromGraphicEditor (CATDialog              *iFather, const CATUnicodeString &iImagePathName=""); \
};



#define ENVTIEdeclare_CATIMfgToolEditorCustom(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
virtual CATDlgFrame* GetPanelEditor  (CATDialog          *iFather, CATDlgStyle         iStyle    = (1 << 19), const CATBoolean    iModeEdit = TRUE); \
virtual CATDlgFrame* GetMorePanelEditor  (CATDialog         *iFather, CATDlgStyle        iStyle    = (1 << 19), const CATBoolean   iModeEdit = TRUE); \
virtual CATDlgFrame* GetActivityEditor  (CATDialog                *iFather, CATDlgStyle               iStyle    = (1 << 19), const CATBoolean          iModeEdit = FALSE, const CATISpecObject_var &ihSpecAct = ((CATBaseUnknown*)0)); \
virtual CATDlgFrame* GetGraphicEditor  (CATDialog         *iFather, CATDlgStyle        iStyle    = (1 << 19), const CATBoolean   iModeEdit = FALSE); \
virtual void GenerateJPEGImageFromGraphicEditor (CATDialog              *iFather, const CATUnicodeString &iImagePathName=""); \


#define ENVTIEdefine_CATIMfgToolEditorCustom(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
CATDlgFrame*  ENVTIEName::GetPanelEditor  (CATDialog          *iFather, CATDlgStyle         iStyle    , const CATBoolean    iModeEdit ) \
{ \
return (ENVTIECALL(CATIMfgToolEditorCustom,ENVTIETypeLetter,ENVTIELetter)GetPanelEditor  (iFather,iStyle    ,iModeEdit )); \
} \
CATDlgFrame*  ENVTIEName::GetMorePanelEditor  (CATDialog         *iFather, CATDlgStyle        iStyle    , const CATBoolean   iModeEdit ) \
{ \
return (ENVTIECALL(CATIMfgToolEditorCustom,ENVTIETypeLetter,ENVTIELetter)GetMorePanelEditor  (iFather,iStyle    ,iModeEdit )); \
} \
CATDlgFrame*  ENVTIEName::GetActivityEditor  (CATDialog                *iFather, CATDlgStyle               iStyle    , const CATBoolean          iModeEdit , const CATISpecObject_var &ihSpecAct ) \
{ \
return (ENVTIECALL(CATIMfgToolEditorCustom,ENVTIETypeLetter,ENVTIELetter)GetActivityEditor  (iFather,iStyle    ,iModeEdit ,ihSpecAct )); \
} \
CATDlgFrame*  ENVTIEName::GetGraphicEditor  (CATDialog         *iFather, CATDlgStyle        iStyle    , const CATBoolean   iModeEdit ) \
{ \
return (ENVTIECALL(CATIMfgToolEditorCustom,ENVTIETypeLetter,ENVTIELetter)GetGraphicEditor  (iFather,iStyle    ,iModeEdit )); \
} \
void  ENVTIEName::GenerateJPEGImageFromGraphicEditor (CATDialog              *iFather, const CATUnicodeString &iImagePathName) \
{ \
 (ENVTIECALL(CATIMfgToolEditorCustom,ENVTIETypeLetter,ENVTIELetter)GenerateJPEGImageFromGraphicEditor (iFather,iImagePathName)); \
} \


/* Name of the TIE class */
#define class_TIE_CATIMfgToolEditorCustom(classe)    TIECATIMfgToolEditorCustom##classe


/* Common methods inside a TIE */
#define common_TIE_CATIMfgToolEditorCustom(classe) \
 \
 \
/* Static initialization */ \
CATDefineCommonTIEMembers(CATIMfgToolEditorCustom, classe) \
 \
 \
CATImplementTIEMethods(CATIMfgToolEditorCustom, classe) \
CATImplementIUnknownMethodsForCATBaseUnknownTIE(CATIMfgToolEditorCustom, classe, 1) \
CATImplementIDispatchMethodsForCATBaseUnknownTIE(CATIMfgToolEditorCustom, classe) \
CATImplementCATBaseUnknownMethodsForTIE(CATIMfgToolEditorCustom, classe) \
 \
CATDlgFrame*  TIECATIMfgToolEditorCustom##classe::GetPanelEditor  (CATDialog          *iFather, CATDlgStyle         iStyle    , const CATBoolean    iModeEdit ) \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetPanelEditor  (iFather,iStyle    ,iModeEdit )); \
} \
CATDlgFrame*  TIECATIMfgToolEditorCustom##classe::GetMorePanelEditor  (CATDialog         *iFather, CATDlgStyle        iStyle    , const CATBoolean   iModeEdit ) \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetMorePanelEditor  (iFather,iStyle    ,iModeEdit )); \
} \
CATDlgFrame*  TIECATIMfgToolEditorCustom##classe::GetActivityEditor  (CATDialog                *iFather, CATDlgStyle               iStyle    , const CATBoolean          iModeEdit , const CATISpecObject_var &ihSpecAct ) \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetActivityEditor  (iFather,iStyle    ,iModeEdit ,ihSpecAct )); \
} \
CATDlgFrame*  TIECATIMfgToolEditorCustom##classe::GetGraphicEditor  (CATDialog         *iFather, CATDlgStyle        iStyle    , const CATBoolean   iModeEdit ) \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetGraphicEditor  (iFather,iStyle    ,iModeEdit )); \
} \
void  TIECATIMfgToolEditorCustom##classe::GenerateJPEGImageFromGraphicEditor (CATDialog              *iFather, const CATUnicodeString &iImagePathName) \
{ \
   ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GenerateJPEGImageFromGraphicEditor (iFather,iImagePathName); \
} \



/* Macro used to link an implementation with an interface */
#define TIE_CATIMfgToolEditorCustom(classe) \
 \
 \
declare_TIE_CATIMfgToolEditorCustom(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIMfgToolEditorCustom##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIMfgToolEditorCustom,"CATIMfgToolEditorCustom",CATIMfgToolEditorCustom::MetaObject(),classe::MetaObject(),TIE); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIMfgToolEditorCustom(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIECreation(CATIMfgToolEditorCustom, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIMfgToolEditorCustom##classe(classe::MetaObject(),CATIMfgToolEditorCustom::MetaObject(),(void *)CreateTIECATIMfgToolEditorCustom##classe)



/* Macro used to link an implementation with an interface */
/* This TIE is chained on the implementation object */
#define TIEchain_CATIMfgToolEditorCustom(classe) \
 \
 \
declare_TIE_CATIMfgToolEditorCustom(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIMfgToolEditorCustom##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIMfgToolEditorCustom,"CATIMfgToolEditorCustom",CATIMfgToolEditorCustom::MetaObject(),classe::MetaObject(),TIEchain); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIMfgToolEditorCustom(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIEchainCreation(CATIMfgToolEditorCustom, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIMfgToolEditorCustom##classe(classe::MetaObject(),CATIMfgToolEditorCustom::MetaObject(),(void *)CreateTIECATIMfgToolEditorCustom##classe)


/* Macro to switch between BOA and TIE at build time */ 
#ifdef CATSYS_BOA_IS_TIE
#define BOA_CATIMfgToolEditorCustom(classe) TIE_CATIMfgToolEditorCustom(classe)
#else
#define BOA_CATIMfgToolEditorCustom(classe) CATImplementBOA(CATIMfgToolEditorCustom, classe)
#endif

#endif
