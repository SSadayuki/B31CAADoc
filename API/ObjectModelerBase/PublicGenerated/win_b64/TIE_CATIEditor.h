#ifndef __TIE_CATIEditor
#define __TIE_CATIEditor

#include <string.h>
#include "CATBaseUnknown.h"
#include "CATMetaClass.h"
#include "CATMacForTie.h"
#include "CATIEditor.h"
#include "JS0DSPA.h"


#ifdef _WINDOWS_SOURCE
#define Exported __declspec(dllexport)
#define Imported __declspec(dllimport)
#else
#define Exported 
#define Imported 
#endif


/* To link an implementation with the interface CATIEditor */
#define declare_TIE_CATIEditor(classe) \
 \
 \
class TIECATIEditor##classe : public CATIEditor \
{ \
   private: \
      CATDeclareCommonTIEMembers \
   public: \
      CATDeclareTIEMethods(CATIEditor, classe) \
      CATDeclareIUnknownMethodsForCATBaseUnknownTIE \
      CATDeclareIDispatchMethodsForCATBaseUnknownTIE \
      CATDeclareCATBaseUnknownMethodsForTIE \
      virtual CATFrmEditor* GetEditor (); \
};



#define ENVTIEdeclare_CATIEditor(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
virtual CATFrmEditor* GetEditor (); \


#define ENVTIEdefine_CATIEditor(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
CATFrmEditor*  ENVTIEName::GetEditor () \
{ \
return (ENVTIECALL(CATIEditor,ENVTIETypeLetter,ENVTIELetter)GetEditor ()); \
} \


/* Name of the TIE class */
#define class_TIE_CATIEditor(classe)    TIECATIEditor##classe


/* Common methods inside a TIE */
#define common_TIE_CATIEditor(classe) \
 \
 \
/* Static initialization */ \
CATDefineCommonTIEMembers(CATIEditor, classe) \
 \
 \
CATImplementTIEMethods(CATIEditor, classe) \
CATImplementIUnknownMethodsForCATBaseUnknownTIE(CATIEditor, classe, 1) \
CATImplementIDispatchMethodsForCATBaseUnknownTIE(CATIEditor, classe) \
CATImplementCATBaseUnknownMethodsForTIE(CATIEditor, classe) \
 \
CATFrmEditor*  TIECATIEditor##classe::GetEditor () \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetEditor ()); \
} \



/* Macro used to link an implementation with an interface */
#define TIE_CATIEditor(classe) \
 \
 \
declare_TIE_CATIEditor(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIEditor##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIEditor,"CATIEditor",CATIEditor::MetaObject(),classe::MetaObject(),TIE); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIEditor(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIECreation(CATIEditor, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIEditor##classe(classe::MetaObject(),CATIEditor::MetaObject(),(void *)CreateTIECATIEditor##classe)



/* Macro used to link an implementation with an interface */
/* This TIE is chained on the implementation object */
#define TIEchain_CATIEditor(classe) \
 \
 \
declare_TIE_CATIEditor(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIEditor##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIEditor,"CATIEditor",CATIEditor::MetaObject(),classe::MetaObject(),TIEchain); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIEditor(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIEchainCreation(CATIEditor, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIEditor##classe(classe::MetaObject(),CATIEditor::MetaObject(),(void *)CreateTIECATIEditor##classe)


/* Macro to switch between BOA and TIE at build time */ 
#ifdef CATSYS_BOA_IS_TIE
#define BOA_CATIEditor(classe) TIE_CATIEditor(classe)
#else
#define BOA_CATIEditor(classe) CATImplementBOA(CATIEditor, classe)
#endif

#endif
