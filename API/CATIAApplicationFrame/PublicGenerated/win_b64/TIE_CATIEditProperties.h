#ifndef __TIE_CATIEditProperties
#define __TIE_CATIEditProperties

#include <string.h>
#include "CATBaseUnknown.h"
#include "CATMetaClass.h"
#include "CATMacForTie.h"
#include "CATIEditProperties.h"
#include "JS0DSPA.h"


#ifdef _WINDOWS_SOURCE
#define Exported __declspec(dllexport)
#define Imported __declspec(dllimport)
#else
#define Exported 
#define Imported 
#endif


/* To link an implementation with the interface CATIEditProperties */
#define declare_TIE_CATIEditProperties(classe) \
 \
 \
class TIECATIEditProperties##classe : public CATIEditProperties \
{ \
   private: \
      CATDeclareCommonTIEMembers \
   public: \
      CATDeclareTIEMethods(CATIEditProperties, classe) \
      CATDeclareIUnknownMethodsForCATBaseUnknownTIE \
      CATDeclareIDispatchMethodsForCATBaseUnknownTIE \
      CATDeclareCATBaseUnknownMethodsForTIE \
      virtual void ExtractFromSelection ( CATListValCATBaseUnknown_var& oExtract, const CATListValCATBaseUnknown_var * iSelection =0 ) ; \
      virtual void BuildEditor( CATEditorPage * iMyPage ) ; \
      virtual void SetPropertyValue ( CATListValCATBaseUnknown_var& iExtract, ModeReadWrite iMode ) ; \
      virtual void CommitModification( CATListValCATBaseUnknown_var& iExtract ) ; \
      virtual void CancelModification( CATListValCATBaseUnknown_var& iExtract ) ; \
      virtual HRESULT OKToRepaintOnCommit(int& oStatus) ; \
      virtual void CloseWindowFromEditor() ; \
      virtual CATUnicodeString  GetEditorTitle() ; \
      virtual void SetEditorSize(int & ioSize ) ; \
      virtual CATCommandGlobalUndo * GetUndoFromEditor() ; \
};



#define ENVTIEdeclare_CATIEditProperties(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
virtual void ExtractFromSelection ( CATListValCATBaseUnknown_var& oExtract, const CATListValCATBaseUnknown_var * iSelection =0 ) ; \
virtual void BuildEditor( CATEditorPage * iMyPage ) ; \
virtual void SetPropertyValue ( CATListValCATBaseUnknown_var& iExtract, ModeReadWrite iMode ) ; \
virtual void CommitModification( CATListValCATBaseUnknown_var& iExtract ) ; \
virtual void CancelModification( CATListValCATBaseUnknown_var& iExtract ) ; \
virtual HRESULT OKToRepaintOnCommit(int& oStatus) ; \
virtual void CloseWindowFromEditor() ; \
virtual CATUnicodeString  GetEditorTitle() ; \
virtual void SetEditorSize(int & ioSize ) ; \
virtual CATCommandGlobalUndo * GetUndoFromEditor() ; \


#define ENVTIEdefine_CATIEditProperties(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
void  ENVTIEName::ExtractFromSelection ( CATListValCATBaseUnknown_var& oExtract, const CATListValCATBaseUnknown_var * iSelection )  \
{ \
 (ENVTIECALL(CATIEditProperties,ENVTIETypeLetter,ENVTIELetter)ExtractFromSelection (oExtract,iSelection )); \
} \
void  ENVTIEName::BuildEditor( CATEditorPage * iMyPage )  \
{ \
 (ENVTIECALL(CATIEditProperties,ENVTIETypeLetter,ENVTIELetter)BuildEditor(iMyPage )); \
} \
void  ENVTIEName::SetPropertyValue ( CATListValCATBaseUnknown_var& iExtract, ModeReadWrite iMode )  \
{ \
 (ENVTIECALL(CATIEditProperties,ENVTIETypeLetter,ENVTIELetter)SetPropertyValue (iExtract,iMode )); \
} \
void  ENVTIEName::CommitModification( CATListValCATBaseUnknown_var& iExtract )  \
{ \
 (ENVTIECALL(CATIEditProperties,ENVTIETypeLetter,ENVTIELetter)CommitModification(iExtract )); \
} \
void  ENVTIEName::CancelModification( CATListValCATBaseUnknown_var& iExtract )  \
{ \
 (ENVTIECALL(CATIEditProperties,ENVTIETypeLetter,ENVTIELetter)CancelModification(iExtract )); \
} \
HRESULT  ENVTIEName::OKToRepaintOnCommit(int& oStatus)  \
{ \
return (ENVTIECALL(CATIEditProperties,ENVTIETypeLetter,ENVTIELetter)OKToRepaintOnCommit(oStatus)); \
} \
void  ENVTIEName::CloseWindowFromEditor()  \
{ \
 (ENVTIECALL(CATIEditProperties,ENVTIETypeLetter,ENVTIELetter)CloseWindowFromEditor()); \
} \
CATUnicodeString   ENVTIEName::GetEditorTitle()  \
{ \
return (ENVTIECALL(CATIEditProperties,ENVTIETypeLetter,ENVTIELetter)GetEditorTitle()); \
} \
void  ENVTIEName::SetEditorSize(int & ioSize )  \
{ \
 (ENVTIECALL(CATIEditProperties,ENVTIETypeLetter,ENVTIELetter)SetEditorSize(ioSize )); \
} \
CATCommandGlobalUndo *  ENVTIEName::GetUndoFromEditor()  \
{ \
return (ENVTIECALL(CATIEditProperties,ENVTIETypeLetter,ENVTIELetter)GetUndoFromEditor()); \
} \


/* Name of the TIE class */
#define class_TIE_CATIEditProperties(classe)    TIECATIEditProperties##classe


/* Common methods inside a TIE */
#define common_TIE_CATIEditProperties(classe) \
 \
 \
/* Static initialization */ \
CATDefineCommonTIEMembers(CATIEditProperties, classe) \
 \
 \
CATImplementTIEMethods(CATIEditProperties, classe) \
CATImplementIUnknownMethodsForCATBaseUnknownTIE(CATIEditProperties, classe, 1) \
CATImplementIDispatchMethodsForCATBaseUnknownTIE(CATIEditProperties, classe) \
CATImplementCATBaseUnknownMethodsForTIE(CATIEditProperties, classe) \
 \
void  TIECATIEditProperties##classe::ExtractFromSelection ( CATListValCATBaseUnknown_var& oExtract, const CATListValCATBaseUnknown_var * iSelection )  \
{ \
   ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->ExtractFromSelection (oExtract,iSelection ); \
} \
void  TIECATIEditProperties##classe::BuildEditor( CATEditorPage * iMyPage )  \
{ \
   ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->BuildEditor(iMyPage ); \
} \
void  TIECATIEditProperties##classe::SetPropertyValue ( CATListValCATBaseUnknown_var& iExtract, ModeReadWrite iMode )  \
{ \
   ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetPropertyValue (iExtract,iMode ); \
} \
void  TIECATIEditProperties##classe::CommitModification( CATListValCATBaseUnknown_var& iExtract )  \
{ \
   ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->CommitModification(iExtract ); \
} \
void  TIECATIEditProperties##classe::CancelModification( CATListValCATBaseUnknown_var& iExtract )  \
{ \
   ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->CancelModification(iExtract ); \
} \
HRESULT  TIECATIEditProperties##classe::OKToRepaintOnCommit(int& oStatus)  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->OKToRepaintOnCommit(oStatus)); \
} \
void  TIECATIEditProperties##classe::CloseWindowFromEditor()  \
{ \
   ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->CloseWindowFromEditor(); \
} \
CATUnicodeString   TIECATIEditProperties##classe::GetEditorTitle()  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetEditorTitle()); \
} \
void  TIECATIEditProperties##classe::SetEditorSize(int & ioSize )  \
{ \
   ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetEditorSize(ioSize ); \
} \
CATCommandGlobalUndo *  TIECATIEditProperties##classe::GetUndoFromEditor()  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetUndoFromEditor()); \
} \



/* Macro used to link an implementation with an interface */
#define TIE_CATIEditProperties(classe) \
 \
 \
declare_TIE_CATIEditProperties(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIEditProperties##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIEditProperties,"CATIEditProperties",CATIEditProperties::MetaObject(),classe::MetaObject(),TIE); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIEditProperties(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIECreation(CATIEditProperties, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIEditProperties##classe(classe::MetaObject(),CATIEditProperties::MetaObject(),(void *)CreateTIECATIEditProperties##classe)



/* Macro used to link an implementation with an interface */
/* This TIE is chained on the implementation object */
#define TIEchain_CATIEditProperties(classe) \
 \
 \
declare_TIE_CATIEditProperties(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIEditProperties##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIEditProperties,"CATIEditProperties",CATIEditProperties::MetaObject(),classe::MetaObject(),TIEchain); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIEditProperties(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIEchainCreation(CATIEditProperties, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIEditProperties##classe(classe::MetaObject(),CATIEditProperties::MetaObject(),(void *)CreateTIECATIEditProperties##classe)


/* Macro to switch between BOA and TIE at build time */ 
#ifdef CATSYS_BOA_IS_TIE
#define BOA_CATIEditProperties(classe) TIE_CATIEditProperties(classe)
#else
#define BOA_CATIEditProperties(classe) CATImplementBOA(CATIEditProperties, classe)
#endif

#endif
