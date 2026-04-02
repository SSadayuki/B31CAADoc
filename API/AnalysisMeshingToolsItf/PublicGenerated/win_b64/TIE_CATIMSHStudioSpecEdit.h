#ifndef __TIE_CATIMSHStudioSpecEdit
#define __TIE_CATIMSHStudioSpecEdit

#include <string.h>
#include "CATBaseUnknown.h"
#include "CATMetaClass.h"
#include "CATMacForTie.h"
#include "CATIMSHStudioSpecEdit.h"
#include "JS0DSPA.h"


#ifdef _WINDOWS_SOURCE
#define Exported __declspec(dllexport)
#define Imported __declspec(dllimport)
#else
#define Exported 
#define Imported 
#endif


/* To link an implementation with the interface CATIMSHStudioSpecEdit */
#define declare_TIE_CATIMSHStudioSpecEdit(classe) \
 \
 \
class TIECATIMSHStudioSpecEdit##classe : public CATIMSHStudioSpecEdit \
{ \
   private: \
      CATDeclareCommonTIEMembers \
   public: \
      CATDeclareTIEMethods(CATIMSHStudioSpecEdit, classe) \
      CATDeclareIUnknownMethodsForCATBaseUnknownTIE \
      CATDeclareIDispatchMethodsForCATBaseUnknownTIE \
      CATDeclareCATBaseUnknownMethodsForTIE \
      virtual HRESULT GetCatalog ( CATUnicodeString & Catalog ) ; \
      virtual HRESULT GetFrame ( CATDlgFrame * & Frame) ; \
      virtual HRESULT GetCommand ( CATStateCommand * & Command ) ; \
      virtual HRESULT BuildSpec ( int WithImpact, CATIMSHStudioSpec *& Spec) ; \
      virtual HRESULT SetWindow ( CATDlgDialog * Window ) ; \
      virtual HRESULT GetWindow ( CATDlgDialog *& Window ) ; \
      virtual HRESULT WriteSettings () ; \
};



#define ENVTIEdeclare_CATIMSHStudioSpecEdit(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
virtual HRESULT GetCatalog ( CATUnicodeString & Catalog ) ; \
virtual HRESULT GetFrame ( CATDlgFrame * & Frame) ; \
virtual HRESULT GetCommand ( CATStateCommand * & Command ) ; \
virtual HRESULT BuildSpec ( int WithImpact, CATIMSHStudioSpec *& Spec) ; \
virtual HRESULT SetWindow ( CATDlgDialog * Window ) ; \
virtual HRESULT GetWindow ( CATDlgDialog *& Window ) ; \
virtual HRESULT WriteSettings () ; \


#define ENVTIEdefine_CATIMSHStudioSpecEdit(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
HRESULT  ENVTIEName::GetCatalog ( CATUnicodeString & Catalog )  \
{ \
return (ENVTIECALL(CATIMSHStudioSpecEdit,ENVTIETypeLetter,ENVTIELetter)GetCatalog (Catalog )); \
} \
HRESULT  ENVTIEName::GetFrame ( CATDlgFrame * & Frame)  \
{ \
return (ENVTIECALL(CATIMSHStudioSpecEdit,ENVTIETypeLetter,ENVTIELetter)GetFrame (Frame)); \
} \
HRESULT  ENVTIEName::GetCommand ( CATStateCommand * & Command )  \
{ \
return (ENVTIECALL(CATIMSHStudioSpecEdit,ENVTIETypeLetter,ENVTIELetter)GetCommand (Command )); \
} \
HRESULT  ENVTIEName::BuildSpec ( int WithImpact, CATIMSHStudioSpec *& Spec)  \
{ \
return (ENVTIECALL(CATIMSHStudioSpecEdit,ENVTIETypeLetter,ENVTIELetter)BuildSpec (WithImpact,Spec)); \
} \
HRESULT  ENVTIEName::SetWindow ( CATDlgDialog * Window )  \
{ \
return (ENVTIECALL(CATIMSHStudioSpecEdit,ENVTIETypeLetter,ENVTIELetter)SetWindow (Window )); \
} \
HRESULT  ENVTIEName::GetWindow ( CATDlgDialog *& Window )  \
{ \
return (ENVTIECALL(CATIMSHStudioSpecEdit,ENVTIETypeLetter,ENVTIELetter)GetWindow (Window )); \
} \
HRESULT  ENVTIEName::WriteSettings ()  \
{ \
return (ENVTIECALL(CATIMSHStudioSpecEdit,ENVTIETypeLetter,ENVTIELetter)WriteSettings ()); \
} \


/* Name of the TIE class */
#define class_TIE_CATIMSHStudioSpecEdit(classe)    TIECATIMSHStudioSpecEdit##classe


/* Common methods inside a TIE */
#define common_TIE_CATIMSHStudioSpecEdit(classe) \
 \
 \
/* Static initialization */ \
CATDefineCommonTIEMembers(CATIMSHStudioSpecEdit, classe) \
 \
 \
CATImplementTIEMethods(CATIMSHStudioSpecEdit, classe) \
CATImplementIUnknownMethodsForCATBaseUnknownTIE(CATIMSHStudioSpecEdit, classe, 1) \
CATImplementIDispatchMethodsForCATBaseUnknownTIE(CATIMSHStudioSpecEdit, classe) \
CATImplementCATBaseUnknownMethodsForTIE(CATIMSHStudioSpecEdit, classe) \
 \
HRESULT  TIECATIMSHStudioSpecEdit##classe::GetCatalog ( CATUnicodeString & Catalog )  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetCatalog (Catalog )); \
} \
HRESULT  TIECATIMSHStudioSpecEdit##classe::GetFrame ( CATDlgFrame * & Frame)  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetFrame (Frame)); \
} \
HRESULT  TIECATIMSHStudioSpecEdit##classe::GetCommand ( CATStateCommand * & Command )  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetCommand (Command )); \
} \
HRESULT  TIECATIMSHStudioSpecEdit##classe::BuildSpec ( int WithImpact, CATIMSHStudioSpec *& Spec)  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->BuildSpec (WithImpact,Spec)); \
} \
HRESULT  TIECATIMSHStudioSpecEdit##classe::SetWindow ( CATDlgDialog * Window )  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetWindow (Window )); \
} \
HRESULT  TIECATIMSHStudioSpecEdit##classe::GetWindow ( CATDlgDialog *& Window )  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetWindow (Window )); \
} \
HRESULT  TIECATIMSHStudioSpecEdit##classe::WriteSettings ()  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->WriteSettings ()); \
} \



/* Macro used to link an implementation with an interface */
#define TIE_CATIMSHStudioSpecEdit(classe) \
 \
 \
declare_TIE_CATIMSHStudioSpecEdit(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIMSHStudioSpecEdit##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIMSHStudioSpecEdit,"CATIMSHStudioSpecEdit",CATIMSHStudioSpecEdit::MetaObject(),classe::MetaObject(),TIE); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIMSHStudioSpecEdit(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIECreation(CATIMSHStudioSpecEdit, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIMSHStudioSpecEdit##classe(classe::MetaObject(),CATIMSHStudioSpecEdit::MetaObject(),(void *)CreateTIECATIMSHStudioSpecEdit##classe)



/* Macro used to link an implementation with an interface */
/* This TIE is chained on the implementation object */
#define TIEchain_CATIMSHStudioSpecEdit(classe) \
 \
 \
declare_TIE_CATIMSHStudioSpecEdit(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIMSHStudioSpecEdit##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIMSHStudioSpecEdit,"CATIMSHStudioSpecEdit",CATIMSHStudioSpecEdit::MetaObject(),classe::MetaObject(),TIEchain); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIMSHStudioSpecEdit(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIEchainCreation(CATIMSHStudioSpecEdit, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIMSHStudioSpecEdit##classe(classe::MetaObject(),CATIMSHStudioSpecEdit::MetaObject(),(void *)CreateTIECATIMSHStudioSpecEdit##classe)


/* Macro to switch between BOA and TIE at build time */ 
#ifdef CATSYS_BOA_IS_TIE
#define BOA_CATIMSHStudioSpecEdit(classe) TIE_CATIMSHStudioSpecEdit(classe)
#else
#define BOA_CATIMSHStudioSpecEdit(classe) CATImplementBOA(CATIMSHStudioSpecEdit, classe)
#endif

#endif
