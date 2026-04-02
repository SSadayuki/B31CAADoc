#ifndef __TIE_CATIEdit
#define __TIE_CATIEdit

#include <string.h>
#include "CATBaseUnknown.h"
#include "CATMetaClass.h"
#include "CATMacForTie.h"
#include "CATIEdit.h"
#include "JS0DSPA.h"


#ifdef _WINDOWS_SOURCE
#define Exported __declspec(dllexport)
#define Imported __declspec(dllimport)
#else
#define Exported 
#define Imported 
#endif


/* To link an implementation with the interface CATIEdit */
#define declare_TIE_CATIEdit(classe) \
 \
 \
class TIECATIEdit##classe : public CATIEdit \
{ \
   private: \
      CATDeclareCommonTIEMembers \
   public: \
      CATDeclareTIEMethods(CATIEdit, classe) \
      CATDeclareIUnknownMethodsForCATBaseUnknownTIE \
      CATDeclareIDispatchMethodsForCATBaseUnknownTIE \
      CATDeclareCATBaseUnknownMethodsForTIE \
      virtual CATCommand  * Activate (CATPathElement * iPath) ; \
      virtual CATDlgFrame * GetInPanelEditor () ; \
      virtual CATDlgFrame * GetPanelItem (CATDialog * iParent, const CATString & iTitle) ; \
};



#define ENVTIEdeclare_CATIEdit(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
virtual CATCommand  * Activate (CATPathElement * iPath) ; \
virtual CATDlgFrame * GetInPanelEditor () ; \
virtual CATDlgFrame * GetPanelItem (CATDialog * iParent, const CATString & iTitle) ; \


#define ENVTIEdefine_CATIEdit(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
CATCommand  *  ENVTIEName::Activate (CATPathElement * iPath)  \
{ \
return (ENVTIECALL(CATIEdit,ENVTIETypeLetter,ENVTIELetter)Activate (iPath)); \
} \
CATDlgFrame *  ENVTIEName::GetInPanelEditor ()  \
{ \
return (ENVTIECALL(CATIEdit,ENVTIETypeLetter,ENVTIELetter)GetInPanelEditor ()); \
} \
CATDlgFrame *  ENVTIEName::GetPanelItem (CATDialog * iParent, const CATString & iTitle)  \
{ \
return (ENVTIECALL(CATIEdit,ENVTIETypeLetter,ENVTIELetter)GetPanelItem (iParent,iTitle)); \
} \


/* Name of the TIE class */
#define class_TIE_CATIEdit(classe)    TIECATIEdit##classe


/* Common methods inside a TIE */
#define common_TIE_CATIEdit(classe) \
 \
 \
/* Static initialization */ \
CATDefineCommonTIEMembers(CATIEdit, classe) \
 \
 \
CATImplementTIEMethods(CATIEdit, classe) \
CATImplementIUnknownMethodsForCATBaseUnknownTIE(CATIEdit, classe, 1) \
CATImplementIDispatchMethodsForCATBaseUnknownTIE(CATIEdit, classe) \
CATImplementCATBaseUnknownMethodsForTIE(CATIEdit, classe) \
 \
CATCommand  *  TIECATIEdit##classe::Activate (CATPathElement * iPath)  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->Activate (iPath)); \
} \
CATDlgFrame *  TIECATIEdit##classe::GetInPanelEditor ()  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetInPanelEditor ()); \
} \
CATDlgFrame *  TIECATIEdit##classe::GetPanelItem (CATDialog * iParent, const CATString & iTitle)  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetPanelItem (iParent,iTitle)); \
} \



/* Macro used to link an implementation with an interface */
#define TIE_CATIEdit(classe) \
 \
 \
declare_TIE_CATIEdit(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIEdit##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIEdit,"CATIEdit",CATIEdit::MetaObject(),classe::MetaObject(),TIE); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIEdit(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIECreation(CATIEdit, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIEdit##classe(classe::MetaObject(),CATIEdit::MetaObject(),(void *)CreateTIECATIEdit##classe)



/* Macro used to link an implementation with an interface */
/* This TIE is chained on the implementation object */
#define TIEchain_CATIEdit(classe) \
 \
 \
declare_TIE_CATIEdit(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIEdit##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIEdit,"CATIEdit",CATIEdit::MetaObject(),classe::MetaObject(),TIEchain); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIEdit(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIEchainCreation(CATIEdit, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIEdit##classe(classe::MetaObject(),CATIEdit::MetaObject(),(void *)CreateTIECATIEdit##classe)


/* Macro to switch between BOA and TIE at build time */ 
#ifdef CATSYS_BOA_IS_TIE
#define BOA_CATIEdit(classe) TIE_CATIEdit(classe)
#else
#define BOA_CATIEdit(classe) CATImplementBOA(CATIEdit, classe)
#endif

#endif
