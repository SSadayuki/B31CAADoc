#ifndef __TIE_CATIDocumentEdit
#define __TIE_CATIDocumentEdit

#include <string.h>
#include "CATBaseUnknown.h"
#include "CATMetaClass.h"
#include "CATMacForTie.h"
#include "CATIDocumentEdit.h"
#include "JS0DSPA.h"


#ifdef _WINDOWS_SOURCE
#define Exported __declspec(dllexport)
#define Imported __declspec(dllimport)
#else
#define Exported 
#define Imported 
#endif


/* To link an implementation with the interface CATIDocumentEdit */
#define declare_TIE_CATIDocumentEdit(classe) \
 \
 \
class TIECATIDocumentEdit##classe : public CATIDocumentEdit \
{ \
   private: \
      CATDeclareCommonTIEMembers \
   public: \
      CATDeclareTIEMethods(CATIDocumentEdit, classe) \
      CATDeclareIUnknownMethodsForCATBaseUnknownTIE \
      CATDeclareIDispatchMethodsForCATBaseUnknownTIE \
      CATDeclareCATBaseUnknownMethodsForTIE \
      virtual void  Activate () ; \
      virtual void  Deactivate () ; \
      virtual CATFrmWindow * CreateDefaultWindow (CATFrmEditor * iEditor) ; \
      virtual void * MemoryDraw (unsigned short iFormat, int iWidth, int iHeight) ; \
      virtual CATPathElement GetActiveObject () ; \
};



#define ENVTIEdeclare_CATIDocumentEdit(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
virtual void  Activate () ; \
virtual void  Deactivate () ; \
virtual CATFrmWindow * CreateDefaultWindow (CATFrmEditor * iEditor) ; \
virtual void * MemoryDraw (unsigned short iFormat, int iWidth, int iHeight) ; \
virtual CATPathElement GetActiveObject () ; \


#define ENVTIEdefine_CATIDocumentEdit(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
void   ENVTIEName::Activate ()  \
{ \
 (ENVTIECALL(CATIDocumentEdit,ENVTIETypeLetter,ENVTIELetter)Activate ()); \
} \
void   ENVTIEName::Deactivate ()  \
{ \
 (ENVTIECALL(CATIDocumentEdit,ENVTIETypeLetter,ENVTIELetter)Deactivate ()); \
} \
CATFrmWindow *  ENVTIEName::CreateDefaultWindow (CATFrmEditor * iEditor)  \
{ \
return (ENVTIECALL(CATIDocumentEdit,ENVTIETypeLetter,ENVTIELetter)CreateDefaultWindow (iEditor)); \
} \
void *  ENVTIEName::MemoryDraw (unsigned short iFormat, int iWidth, int iHeight)  \
{ \
return (ENVTIECALL(CATIDocumentEdit,ENVTIETypeLetter,ENVTIELetter)MemoryDraw (iFormat,iWidth,iHeight)); \
} \
CATPathElement  ENVTIEName::GetActiveObject ()  \
{ \
return (ENVTIECALL(CATIDocumentEdit,ENVTIETypeLetter,ENVTIELetter)GetActiveObject ()); \
} \


/* Name of the TIE class */
#define class_TIE_CATIDocumentEdit(classe)    TIECATIDocumentEdit##classe


/* Common methods inside a TIE */
#define common_TIE_CATIDocumentEdit(classe) \
 \
 \
/* Static initialization */ \
CATDefineCommonTIEMembers(CATIDocumentEdit, classe) \
 \
 \
CATImplementTIEMethods(CATIDocumentEdit, classe) \
CATImplementIUnknownMethodsForCATBaseUnknownTIE(CATIDocumentEdit, classe, 1) \
CATImplementIDispatchMethodsForCATBaseUnknownTIE(CATIDocumentEdit, classe) \
CATImplementCATBaseUnknownMethodsForTIE(CATIDocumentEdit, classe) \
 \
void   TIECATIDocumentEdit##classe::Activate ()  \
{ \
   ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->Activate (); \
} \
void   TIECATIDocumentEdit##classe::Deactivate ()  \
{ \
   ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->Deactivate (); \
} \
CATFrmWindow *  TIECATIDocumentEdit##classe::CreateDefaultWindow (CATFrmEditor * iEditor)  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->CreateDefaultWindow (iEditor)); \
} \
void *  TIECATIDocumentEdit##classe::MemoryDraw (unsigned short iFormat, int iWidth, int iHeight)  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->MemoryDraw (iFormat,iWidth,iHeight)); \
} \
CATPathElement  TIECATIDocumentEdit##classe::GetActiveObject ()  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetActiveObject ()); \
} \



/* Macro used to link an implementation with an interface */
#define TIE_CATIDocumentEdit(classe) \
 \
 \
declare_TIE_CATIDocumentEdit(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIDocumentEdit##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIDocumentEdit,"CATIDocumentEdit",CATIDocumentEdit::MetaObject(),classe::MetaObject(),TIE); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIDocumentEdit(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIECreation(CATIDocumentEdit, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIDocumentEdit##classe(classe::MetaObject(),CATIDocumentEdit::MetaObject(),(void *)CreateTIECATIDocumentEdit##classe)



/* Macro used to link an implementation with an interface */
/* This TIE is chained on the implementation object */
#define TIEchain_CATIDocumentEdit(classe) \
 \
 \
declare_TIE_CATIDocumentEdit(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIDocumentEdit##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIDocumentEdit,"CATIDocumentEdit",CATIDocumentEdit::MetaObject(),classe::MetaObject(),TIEchain); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIDocumentEdit(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIEchainCreation(CATIDocumentEdit, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIDocumentEdit##classe(classe::MetaObject(),CATIDocumentEdit::MetaObject(),(void *)CreateTIECATIDocumentEdit##classe)


/* Macro to switch between BOA and TIE at build time */ 
#ifdef CATSYS_BOA_IS_TIE
#define BOA_CATIDocumentEdit(classe) TIE_CATIDocumentEdit(classe)
#else
#define BOA_CATIDocumentEdit(classe) CATImplementBOA(CATIDocumentEdit, classe)
#endif

#endif
