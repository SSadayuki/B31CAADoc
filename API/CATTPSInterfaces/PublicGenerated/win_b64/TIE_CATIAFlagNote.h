#ifndef __TIE_CATIAFlagNote
#define __TIE_CATIAFlagNote

#include <string.h>
#include "CATBaseUnknown.h"
#include "CATMetaClass.h"
#include "CATMacForTie.h"
#include "CATIAFlagNote.h"
#include "JS0DSPA.h"


#ifdef _WINDOWS_SOURCE
#define Exported __declspec(dllexport)
#define Imported __declspec(dllimport)
#else
#define Exported 
#define Imported 
#endif


/* To link an implementation with the interface CATIAFlagNote */
#define declare_TIE_CATIAFlagNote(classe) \
 \
 \
class TIECATIAFlagNote##classe : public CATIAFlagNote \
{ \
   private: \
      CATDeclareCommonTIEMembers \
   public: \
      CATDeclareTIEMethods(CATIAFlagNote, classe) \
      CATDeclareIUnknownMethodsForCATBaseUnknownTIE \
      CATDeclareIDispatchMethodsForCATBaseUnknownTIE \
      CATDeclareCATBaseUnknownMethodsForTIE \
      virtual HRESULT __stdcall get_Text(CATBSTR & oText); \
      virtual HRESULT __stdcall put_Text(const CATBSTR & iText); \
      virtual HRESULT __stdcall get_FlagNoteText(CATBSTR & oFlagText); \
      virtual HRESULT __stdcall put_FlagNoteText(const CATBSTR & iText); \
      virtual HRESULT __stdcall URL(const CATVariant & iIndex, CATBSTR & oUrl); \
      virtual HRESULT __stdcall AddURL(const CATBSTR & iUrl); \
      virtual HRESULT __stdcall RemoveURL(const CATVariant & iIndex); \
      virtual HRESULT __stdcall ModifyURL(CATBSTR & iUrl, const CATVariant & iIndex); \
      virtual HRESULT __stdcall GetNbrURL(CATVariant *& oNumberOfURL); \
      virtual HRESULT __stdcall GetNbrURL2(CATLONG & oNumberOfURL); \
      virtual HRESULT __stdcall TPSParallelOnScreen(CATIATPSParallelOnScreen *& oTPSParallelOnScreen); \
      virtual HRESULT  __stdcall get_Application(CATIAApplication *& oApplication); \
      virtual HRESULT  __stdcall get_Parent(CATBaseDispatch *& oParent); \
      virtual HRESULT  __stdcall get_Name(CATBSTR & oNameBSTR); \
      virtual HRESULT  __stdcall put_Name(const CATBSTR & iNameBSTR); \
      virtual HRESULT  __stdcall GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj); \
};



#define ENVTIEdeclare_CATIAFlagNote(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
virtual HRESULT __stdcall get_Text(CATBSTR & oText); \
virtual HRESULT __stdcall put_Text(const CATBSTR & iText); \
virtual HRESULT __stdcall get_FlagNoteText(CATBSTR & oFlagText); \
virtual HRESULT __stdcall put_FlagNoteText(const CATBSTR & iText); \
virtual HRESULT __stdcall URL(const CATVariant & iIndex, CATBSTR & oUrl); \
virtual HRESULT __stdcall AddURL(const CATBSTR & iUrl); \
virtual HRESULT __stdcall RemoveURL(const CATVariant & iIndex); \
virtual HRESULT __stdcall ModifyURL(CATBSTR & iUrl, const CATVariant & iIndex); \
virtual HRESULT __stdcall GetNbrURL(CATVariant *& oNumberOfURL); \
virtual HRESULT __stdcall GetNbrURL2(CATLONG & oNumberOfURL); \
virtual HRESULT __stdcall TPSParallelOnScreen(CATIATPSParallelOnScreen *& oTPSParallelOnScreen); \
virtual HRESULT  __stdcall get_Application(CATIAApplication *& oApplication); \
virtual HRESULT  __stdcall get_Parent(CATBaseDispatch *& oParent); \
virtual HRESULT  __stdcall get_Name(CATBSTR & oNameBSTR); \
virtual HRESULT  __stdcall put_Name(const CATBSTR & iNameBSTR); \
virtual HRESULT  __stdcall GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj); \


#define ENVTIEdefine_CATIAFlagNote(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
HRESULT __stdcall  ENVTIEName::get_Text(CATBSTR & oText) \
{ \
return (ENVTIECALL(CATIAFlagNote,ENVTIETypeLetter,ENVTIELetter)get_Text(oText)); \
} \
HRESULT __stdcall  ENVTIEName::put_Text(const CATBSTR & iText) \
{ \
return (ENVTIECALL(CATIAFlagNote,ENVTIETypeLetter,ENVTIELetter)put_Text(iText)); \
} \
HRESULT __stdcall  ENVTIEName::get_FlagNoteText(CATBSTR & oFlagText) \
{ \
return (ENVTIECALL(CATIAFlagNote,ENVTIETypeLetter,ENVTIELetter)get_FlagNoteText(oFlagText)); \
} \
HRESULT __stdcall  ENVTIEName::put_FlagNoteText(const CATBSTR & iText) \
{ \
return (ENVTIECALL(CATIAFlagNote,ENVTIETypeLetter,ENVTIELetter)put_FlagNoteText(iText)); \
} \
HRESULT __stdcall  ENVTIEName::URL(const CATVariant & iIndex, CATBSTR & oUrl) \
{ \
return (ENVTIECALL(CATIAFlagNote,ENVTIETypeLetter,ENVTIELetter)URL(iIndex,oUrl)); \
} \
HRESULT __stdcall  ENVTIEName::AddURL(const CATBSTR & iUrl) \
{ \
return (ENVTIECALL(CATIAFlagNote,ENVTIETypeLetter,ENVTIELetter)AddURL(iUrl)); \
} \
HRESULT __stdcall  ENVTIEName::RemoveURL(const CATVariant & iIndex) \
{ \
return (ENVTIECALL(CATIAFlagNote,ENVTIETypeLetter,ENVTIELetter)RemoveURL(iIndex)); \
} \
HRESULT __stdcall  ENVTIEName::ModifyURL(CATBSTR & iUrl, const CATVariant & iIndex) \
{ \
return (ENVTIECALL(CATIAFlagNote,ENVTIETypeLetter,ENVTIELetter)ModifyURL(iUrl,iIndex)); \
} \
HRESULT __stdcall  ENVTIEName::GetNbrURL(CATVariant *& oNumberOfURL) \
{ \
return (ENVTIECALL(CATIAFlagNote,ENVTIETypeLetter,ENVTIELetter)GetNbrURL(oNumberOfURL)); \
} \
HRESULT __stdcall  ENVTIEName::GetNbrURL2(CATLONG & oNumberOfURL) \
{ \
return (ENVTIECALL(CATIAFlagNote,ENVTIETypeLetter,ENVTIELetter)GetNbrURL2(oNumberOfURL)); \
} \
HRESULT __stdcall  ENVTIEName::TPSParallelOnScreen(CATIATPSParallelOnScreen *& oTPSParallelOnScreen) \
{ \
return (ENVTIECALL(CATIAFlagNote,ENVTIETypeLetter,ENVTIELetter)TPSParallelOnScreen(oTPSParallelOnScreen)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Application(CATIAApplication *& oApplication) \
{ \
return (ENVTIECALL(CATIAFlagNote,ENVTIETypeLetter,ENVTIELetter)get_Application(oApplication)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Parent(CATBaseDispatch *& oParent) \
{ \
return (ENVTIECALL(CATIAFlagNote,ENVTIETypeLetter,ENVTIELetter)get_Parent(oParent)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Name(CATBSTR & oNameBSTR) \
{ \
return (ENVTIECALL(CATIAFlagNote,ENVTIETypeLetter,ENVTIELetter)get_Name(oNameBSTR)); \
} \
HRESULT  __stdcall  ENVTIEName::put_Name(const CATBSTR & iNameBSTR) \
{ \
return (ENVTIECALL(CATIAFlagNote,ENVTIETypeLetter,ENVTIELetter)put_Name(iNameBSTR)); \
} \
HRESULT  __stdcall  ENVTIEName::GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj) \
{ \
return (ENVTIECALL(CATIAFlagNote,ENVTIETypeLetter,ENVTIELetter)GetItem(IDName,RealObj)); \
} \


/* Name of the TIE class */
#define class_TIE_CATIAFlagNote(classe)    TIECATIAFlagNote##classe


/* Common methods inside a TIE */
#define common_TIE_CATIAFlagNote(classe) \
 \
 \
/* Static initialization */ \
CATDefineCommonTIEMembers(CATIAFlagNote, classe) \
 \
 \
CATImplementTIEMethods(CATIAFlagNote, classe) \
CATImplementIUnknownMethodsForCATBaseUnknownTIE(CATIAFlagNote, classe, 2) \
CATImplementIDispatchMethodsForCATBaseUnknownTIE(CATIAFlagNote, classe) \
CATImplementCATBaseUnknownMethodsForTIE(CATIAFlagNote, classe) \
 \
HRESULT __stdcall  TIECATIAFlagNote##classe::get_Text(CATBSTR & oText) \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Text(oText)); \
} \
HRESULT __stdcall  TIECATIAFlagNote##classe::put_Text(const CATBSTR & iText) \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_Text(iText)); \
} \
HRESULT __stdcall  TIECATIAFlagNote##classe::get_FlagNoteText(CATBSTR & oFlagText) \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_FlagNoteText(oFlagText)); \
} \
HRESULT __stdcall  TIECATIAFlagNote##classe::put_FlagNoteText(const CATBSTR & iText) \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_FlagNoteText(iText)); \
} \
HRESULT __stdcall  TIECATIAFlagNote##classe::URL(const CATVariant & iIndex, CATBSTR & oUrl) \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->URL(iIndex,oUrl)); \
} \
HRESULT __stdcall  TIECATIAFlagNote##classe::AddURL(const CATBSTR & iUrl) \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->AddURL(iUrl)); \
} \
HRESULT __stdcall  TIECATIAFlagNote##classe::RemoveURL(const CATVariant & iIndex) \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->RemoveURL(iIndex)); \
} \
HRESULT __stdcall  TIECATIAFlagNote##classe::ModifyURL(CATBSTR & iUrl, const CATVariant & iIndex) \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->ModifyURL(iUrl,iIndex)); \
} \
HRESULT __stdcall  TIECATIAFlagNote##classe::GetNbrURL(CATVariant *& oNumberOfURL) \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetNbrURL(oNumberOfURL)); \
} \
HRESULT __stdcall  TIECATIAFlagNote##classe::GetNbrURL2(CATLONG & oNumberOfURL) \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetNbrURL2(oNumberOfURL)); \
} \
HRESULT __stdcall  TIECATIAFlagNote##classe::TPSParallelOnScreen(CATIATPSParallelOnScreen *& oTPSParallelOnScreen) \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->TPSParallelOnScreen(oTPSParallelOnScreen)); \
} \
HRESULT  __stdcall  TIECATIAFlagNote##classe::get_Application(CATIAApplication *& oApplication) \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Application(oApplication)); \
} \
HRESULT  __stdcall  TIECATIAFlagNote##classe::get_Parent(CATBaseDispatch *& oParent) \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Parent(oParent)); \
} \
HRESULT  __stdcall  TIECATIAFlagNote##classe::get_Name(CATBSTR & oNameBSTR) \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Name(oNameBSTR)); \
} \
HRESULT  __stdcall  TIECATIAFlagNote##classe::put_Name(const CATBSTR & iNameBSTR) \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_Name(iNameBSTR)); \
} \
HRESULT  __stdcall  TIECATIAFlagNote##classe::GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj) \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetItem(IDName,RealObj)); \
} \



/* Macro used to link an implementation with an interface */
#define TIE_CATIAFlagNote(classe) \
 \
 \
declare_TIE_CATIAFlagNote(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIAFlagNote##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIAFlagNote,"CATIAFlagNote",CATIAFlagNote::MetaObject(),classe::MetaObject(),TIE); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIAFlagNote(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIECreation(CATIAFlagNote, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIAFlagNote##classe(classe::MetaObject(),CATIAFlagNote::MetaObject(),(void *)CreateTIECATIAFlagNote##classe)



/* Macro used to link an implementation with an interface */
/* This TIE is chained on the implementation object */
#define TIEchain_CATIAFlagNote(classe) \
 \
 \
declare_TIE_CATIAFlagNote(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIAFlagNote##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIAFlagNote,"CATIAFlagNote",CATIAFlagNote::MetaObject(),classe::MetaObject(),TIEchain); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIAFlagNote(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIEchainCreation(CATIAFlagNote, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIAFlagNote##classe(classe::MetaObject(),CATIAFlagNote::MetaObject(),(void *)CreateTIECATIAFlagNote##classe)


/* Macro to switch between BOA and TIE at build time */ 
#ifdef CATSYS_BOA_IS_TIE
#define BOA_CATIAFlagNote(classe) TIE_CATIAFlagNote(classe)
#else
#define BOA_CATIAFlagNote(classe) CATImplementBOA(CATIAFlagNote, classe)
#endif

#endif
