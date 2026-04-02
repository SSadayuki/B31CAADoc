#ifndef __TIE_CATIDftViewEditor
#define __TIE_CATIDftViewEditor

#include <string.h>
#include "CATBaseUnknown.h"
#include "CATMetaClass.h"
#include "CATMacForTie.h"
#include "CATIDftViewEditor.h"
#include "JS0DSPA.h"


#ifdef _WINDOWS_SOURCE
#define Exported __declspec(dllexport)
#define Imported __declspec(dllimport)
#else
#define Exported 
#define Imported 
#endif


/* To link an implementation with the interface CATIDftViewEditor */
#define declare_TIE_CATIDftViewEditor(classe) \
 \
 \
class TIECATIDftViewEditor##classe : public CATIDftViewEditor \
{ \
   private: \
      CATDeclareCommonTIEMembers \
   public: \
      CATDeclareTIEMethods(CATIDftViewEditor, classe) \
      CATDeclareIUnknownMethodsForCATBaseUnknownTIE \
      CATDeclareIDispatchMethodsForCATBaseUnknownTIE \
      CATDeclareCATBaseUnknownMethodsForTIE \
      virtual HRESULT GetEditorContext(IID & oIID); \
};



#define ENVTIEdeclare_CATIDftViewEditor(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
virtual HRESULT GetEditorContext(IID & oIID); \


#define ENVTIEdefine_CATIDftViewEditor(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
HRESULT  ENVTIEName::GetEditorContext(IID & oIID) \
{ \
return (ENVTIECALL(CATIDftViewEditor,ENVTIETypeLetter,ENVTIELetter)GetEditorContext(oIID)); \
} \


/* Name of the TIE class */
#define class_TIE_CATIDftViewEditor(classe)    TIECATIDftViewEditor##classe


/* Common methods inside a TIE */
#define common_TIE_CATIDftViewEditor(classe) \
 \
 \
/* Static initialization */ \
CATDefineCommonTIEMembers(CATIDftViewEditor, classe) \
 \
 \
CATImplementTIEMethods(CATIDftViewEditor, classe) \
CATImplementIUnknownMethodsForCATBaseUnknownTIE(CATIDftViewEditor, classe, 1) \
CATImplementIDispatchMethodsForCATBaseUnknownTIE(CATIDftViewEditor, classe) \
CATImplementCATBaseUnknownMethodsForTIE(CATIDftViewEditor, classe) \
 \
HRESULT  TIECATIDftViewEditor##classe::GetEditorContext(IID & oIID) \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetEditorContext(oIID)); \
} \



/* Macro used to link an implementation with an interface */
#define TIE_CATIDftViewEditor(classe) \
 \
 \
declare_TIE_CATIDftViewEditor(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIDftViewEditor##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIDftViewEditor,"CATIDftViewEditor",CATIDftViewEditor::MetaObject(),classe::MetaObject(),TIE); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIDftViewEditor(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIECreation(CATIDftViewEditor, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIDftViewEditor##classe(classe::MetaObject(),CATIDftViewEditor::MetaObject(),(void *)CreateTIECATIDftViewEditor##classe)



/* Macro used to link an implementation with an interface */
/* This TIE is chained on the implementation object */
#define TIEchain_CATIDftViewEditor(classe) \
 \
 \
declare_TIE_CATIDftViewEditor(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIDftViewEditor##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIDftViewEditor,"CATIDftViewEditor",CATIDftViewEditor::MetaObject(),classe::MetaObject(),TIEchain); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIDftViewEditor(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIEchainCreation(CATIDftViewEditor, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIDftViewEditor##classe(classe::MetaObject(),CATIDftViewEditor::MetaObject(),(void *)CreateTIECATIDftViewEditor##classe)


/* Macro to switch between BOA and TIE at build time */ 
#ifdef CATSYS_BOA_IS_TIE
#define BOA_CATIDftViewEditor(classe) TIE_CATIDftViewEditor(classe)
#else
#define BOA_CATIDftViewEditor(classe) CATImplementBOA(CATIDftViewEditor, classe)
#endif

#endif
