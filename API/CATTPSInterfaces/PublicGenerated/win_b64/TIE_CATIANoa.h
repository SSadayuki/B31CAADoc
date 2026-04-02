#ifndef __TIE_CATIANoa
#define __TIE_CATIANoa

#include <string.h>
#include "CATBaseUnknown.h"
#include "CATMetaClass.h"
#include "CATMacForTie.h"
#include "CATIANoa.h"
#include "JS0DSPA.h"


#ifdef _WINDOWS_SOURCE
#define Exported __declspec(dllexport)
#define Imported __declspec(dllimport)
#else
#define Exported 
#define Imported 
#endif


/* To link an implementation with the interface CATIANoa */
#define declare_TIE_CATIANoa(classe) \
 \
 \
class TIECATIANoa##classe : public CATIANoa \
{ \
   private: \
      CATDeclareCommonTIEMembers \
   public: \
      CATDeclareTIEMethods(CATIANoa, classe) \
      CATDeclareIUnknownMethodsForCATBaseUnknownTIE \
      CATDeclareIDispatchMethodsForCATBaseUnknownTIE \
      CATDeclareCATBaseUnknownMethodsForTIE \
      virtual HRESULT __stdcall get_Text(CATBSTR & oText); \
      virtual HRESULT __stdcall put_Text(const CATBSTR & iText); \
      virtual HRESULT __stdcall get_FlagText(CATBSTR & oText); \
      virtual HRESULT __stdcall put_FlagText(const CATBSTR & iText); \
      virtual HRESULT __stdcall URL(const CATVariant & iIndex, CATBSTR & oUrl); \
      virtual HRESULT __stdcall AddURL(const CATBSTR & iUrl); \
      virtual HRESULT __stdcall RemoveURL(const CATVariant & iIndex); \
      virtual HRESULT __stdcall ModifyURL(CATBSTR & iUrl, const CATVariant & iIndex); \
      virtual HRESULT __stdcall GetNbrURL(CATVariant *& oNumberOfURL); \
      virtual HRESULT __stdcall GetNbrURL2(CATLONG & oNumberOfURL); \
      virtual HRESULT __stdcall GetModifiableTextsCount(CATLONG & oCount); \
      virtual HRESULT __stdcall GetModifiableText(const CATVariant & iIndex, CATIABase *& oText); \
      virtual HRESULT __stdcall GetDitto(CATIADrawingComponent *& oDitto); \
      virtual HRESULT __stdcall TPSParallelOnScreen(CATIATPSParallelOnScreen *& oTPSParallelOnScreen); \
      virtual HRESULT  __stdcall get_Application(CATIAApplication *& oApplication); \
      virtual HRESULT  __stdcall get_Parent(CATBaseDispatch *& oParent); \
      virtual HRESULT  __stdcall get_Name(CATBSTR & oNameBSTR); \
      virtual HRESULT  __stdcall put_Name(const CATBSTR & iNameBSTR); \
      virtual HRESULT  __stdcall GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj); \
};



#define ENVTIEdeclare_CATIANoa(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
virtual HRESULT __stdcall get_Text(CATBSTR & oText); \
virtual HRESULT __stdcall put_Text(const CATBSTR & iText); \
virtual HRESULT __stdcall get_FlagText(CATBSTR & oText); \
virtual HRESULT __stdcall put_FlagText(const CATBSTR & iText); \
virtual HRESULT __stdcall URL(const CATVariant & iIndex, CATBSTR & oUrl); \
virtual HRESULT __stdcall AddURL(const CATBSTR & iUrl); \
virtual HRESULT __stdcall RemoveURL(const CATVariant & iIndex); \
virtual HRESULT __stdcall ModifyURL(CATBSTR & iUrl, const CATVariant & iIndex); \
virtual HRESULT __stdcall GetNbrURL(CATVariant *& oNumberOfURL); \
virtual HRESULT __stdcall GetNbrURL2(CATLONG & oNumberOfURL); \
virtual HRESULT __stdcall GetModifiableTextsCount(CATLONG & oCount); \
virtual HRESULT __stdcall GetModifiableText(const CATVariant & iIndex, CATIABase *& oText); \
virtual HRESULT __stdcall GetDitto(CATIADrawingComponent *& oDitto); \
virtual HRESULT __stdcall TPSParallelOnScreen(CATIATPSParallelOnScreen *& oTPSParallelOnScreen); \
virtual HRESULT  __stdcall get_Application(CATIAApplication *& oApplication); \
virtual HRESULT  __stdcall get_Parent(CATBaseDispatch *& oParent); \
virtual HRESULT  __stdcall get_Name(CATBSTR & oNameBSTR); \
virtual HRESULT  __stdcall put_Name(const CATBSTR & iNameBSTR); \
virtual HRESULT  __stdcall GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj); \


#define ENVTIEdefine_CATIANoa(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
HRESULT __stdcall  ENVTIEName::get_Text(CATBSTR & oText) \
{ \
return (ENVTIECALL(CATIANoa,ENVTIETypeLetter,ENVTIELetter)get_Text(oText)); \
} \
HRESULT __stdcall  ENVTIEName::put_Text(const CATBSTR & iText) \
{ \
return (ENVTIECALL(CATIANoa,ENVTIETypeLetter,ENVTIELetter)put_Text(iText)); \
} \
HRESULT __stdcall  ENVTIEName::get_FlagText(CATBSTR & oText) \
{ \
return (ENVTIECALL(CATIANoa,ENVTIETypeLetter,ENVTIELetter)get_FlagText(oText)); \
} \
HRESULT __stdcall  ENVTIEName::put_FlagText(const CATBSTR & iText) \
{ \
return (ENVTIECALL(CATIANoa,ENVTIETypeLetter,ENVTIELetter)put_FlagText(iText)); \
} \
HRESULT __stdcall  ENVTIEName::URL(const CATVariant & iIndex, CATBSTR & oUrl) \
{ \
return (ENVTIECALL(CATIANoa,ENVTIETypeLetter,ENVTIELetter)URL(iIndex,oUrl)); \
} \
HRESULT __stdcall  ENVTIEName::AddURL(const CATBSTR & iUrl) \
{ \
return (ENVTIECALL(CATIANoa,ENVTIETypeLetter,ENVTIELetter)AddURL(iUrl)); \
} \
HRESULT __stdcall  ENVTIEName::RemoveURL(const CATVariant & iIndex) \
{ \
return (ENVTIECALL(CATIANoa,ENVTIETypeLetter,ENVTIELetter)RemoveURL(iIndex)); \
} \
HRESULT __stdcall  ENVTIEName::ModifyURL(CATBSTR & iUrl, const CATVariant & iIndex) \
{ \
return (ENVTIECALL(CATIANoa,ENVTIETypeLetter,ENVTIELetter)ModifyURL(iUrl,iIndex)); \
} \
HRESULT __stdcall  ENVTIEName::GetNbrURL(CATVariant *& oNumberOfURL) \
{ \
return (ENVTIECALL(CATIANoa,ENVTIETypeLetter,ENVTIELetter)GetNbrURL(oNumberOfURL)); \
} \
HRESULT __stdcall  ENVTIEName::GetNbrURL2(CATLONG & oNumberOfURL) \
{ \
return (ENVTIECALL(CATIANoa,ENVTIETypeLetter,ENVTIELetter)GetNbrURL2(oNumberOfURL)); \
} \
HRESULT __stdcall  ENVTIEName::GetModifiableTextsCount(CATLONG & oCount) \
{ \
return (ENVTIECALL(CATIANoa,ENVTIETypeLetter,ENVTIELetter)GetModifiableTextsCount(oCount)); \
} \
HRESULT __stdcall  ENVTIEName::GetModifiableText(const CATVariant & iIndex, CATIABase *& oText) \
{ \
return (ENVTIECALL(CATIANoa,ENVTIETypeLetter,ENVTIELetter)GetModifiableText(iIndex,oText)); \
} \
HRESULT __stdcall  ENVTIEName::GetDitto(CATIADrawingComponent *& oDitto) \
{ \
return (ENVTIECALL(CATIANoa,ENVTIETypeLetter,ENVTIELetter)GetDitto(oDitto)); \
} \
HRESULT __stdcall  ENVTIEName::TPSParallelOnScreen(CATIATPSParallelOnScreen *& oTPSParallelOnScreen) \
{ \
return (ENVTIECALL(CATIANoa,ENVTIETypeLetter,ENVTIELetter)TPSParallelOnScreen(oTPSParallelOnScreen)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Application(CATIAApplication *& oApplication) \
{ \
return (ENVTIECALL(CATIANoa,ENVTIETypeLetter,ENVTIELetter)get_Application(oApplication)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Parent(CATBaseDispatch *& oParent) \
{ \
return (ENVTIECALL(CATIANoa,ENVTIETypeLetter,ENVTIELetter)get_Parent(oParent)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Name(CATBSTR & oNameBSTR) \
{ \
return (ENVTIECALL(CATIANoa,ENVTIETypeLetter,ENVTIELetter)get_Name(oNameBSTR)); \
} \
HRESULT  __stdcall  ENVTIEName::put_Name(const CATBSTR & iNameBSTR) \
{ \
return (ENVTIECALL(CATIANoa,ENVTIETypeLetter,ENVTIELetter)put_Name(iNameBSTR)); \
} \
HRESULT  __stdcall  ENVTIEName::GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj) \
{ \
return (ENVTIECALL(CATIANoa,ENVTIETypeLetter,ENVTIELetter)GetItem(IDName,RealObj)); \
} \


/* Name of the TIE class */
#define class_TIE_CATIANoa(classe)    TIECATIANoa##classe


/* Common methods inside a TIE */
#define common_TIE_CATIANoa(classe) \
 \
 \
/* Static initialization */ \
CATDefineCommonTIEMembers(CATIANoa, classe) \
 \
 \
CATImplementTIEMethods(CATIANoa, classe) \
CATImplementIUnknownMethodsForCATBaseUnknownTIE(CATIANoa, classe, 2) \
CATImplementIDispatchMethodsForCATBaseUnknownTIE(CATIANoa, classe) \
CATImplementCATBaseUnknownMethodsForTIE(CATIANoa, classe) \
 \
HRESULT __stdcall  TIECATIANoa##classe::get_Text(CATBSTR & oText) \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Text(oText)); \
} \
HRESULT __stdcall  TIECATIANoa##classe::put_Text(const CATBSTR & iText) \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_Text(iText)); \
} \
HRESULT __stdcall  TIECATIANoa##classe::get_FlagText(CATBSTR & oText) \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_FlagText(oText)); \
} \
HRESULT __stdcall  TIECATIANoa##classe::put_FlagText(const CATBSTR & iText) \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_FlagText(iText)); \
} \
HRESULT __stdcall  TIECATIANoa##classe::URL(const CATVariant & iIndex, CATBSTR & oUrl) \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->URL(iIndex,oUrl)); \
} \
HRESULT __stdcall  TIECATIANoa##classe::AddURL(const CATBSTR & iUrl) \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->AddURL(iUrl)); \
} \
HRESULT __stdcall  TIECATIANoa##classe::RemoveURL(const CATVariant & iIndex) \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->RemoveURL(iIndex)); \
} \
HRESULT __stdcall  TIECATIANoa##classe::ModifyURL(CATBSTR & iUrl, const CATVariant & iIndex) \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->ModifyURL(iUrl,iIndex)); \
} \
HRESULT __stdcall  TIECATIANoa##classe::GetNbrURL(CATVariant *& oNumberOfURL) \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetNbrURL(oNumberOfURL)); \
} \
HRESULT __stdcall  TIECATIANoa##classe::GetNbrURL2(CATLONG & oNumberOfURL) \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetNbrURL2(oNumberOfURL)); \
} \
HRESULT __stdcall  TIECATIANoa##classe::GetModifiableTextsCount(CATLONG & oCount) \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetModifiableTextsCount(oCount)); \
} \
HRESULT __stdcall  TIECATIANoa##classe::GetModifiableText(const CATVariant & iIndex, CATIABase *& oText) \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetModifiableText(iIndex,oText)); \
} \
HRESULT __stdcall  TIECATIANoa##classe::GetDitto(CATIADrawingComponent *& oDitto) \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetDitto(oDitto)); \
} \
HRESULT __stdcall  TIECATIANoa##classe::TPSParallelOnScreen(CATIATPSParallelOnScreen *& oTPSParallelOnScreen) \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->TPSParallelOnScreen(oTPSParallelOnScreen)); \
} \
HRESULT  __stdcall  TIECATIANoa##classe::get_Application(CATIAApplication *& oApplication) \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Application(oApplication)); \
} \
HRESULT  __stdcall  TIECATIANoa##classe::get_Parent(CATBaseDispatch *& oParent) \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Parent(oParent)); \
} \
HRESULT  __stdcall  TIECATIANoa##classe::get_Name(CATBSTR & oNameBSTR) \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Name(oNameBSTR)); \
} \
HRESULT  __stdcall  TIECATIANoa##classe::put_Name(const CATBSTR & iNameBSTR) \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_Name(iNameBSTR)); \
} \
HRESULT  __stdcall  TIECATIANoa##classe::GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj) \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetItem(IDName,RealObj)); \
} \



/* Macro used to link an implementation with an interface */
#define TIE_CATIANoa(classe) \
 \
 \
declare_TIE_CATIANoa(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIANoa##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIANoa,"CATIANoa",CATIANoa::MetaObject(),classe::MetaObject(),TIE); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIANoa(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIECreation(CATIANoa, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIANoa##classe(classe::MetaObject(),CATIANoa::MetaObject(),(void *)CreateTIECATIANoa##classe)



/* Macro used to link an implementation with an interface */
/* This TIE is chained on the implementation object */
#define TIEchain_CATIANoa(classe) \
 \
 \
declare_TIE_CATIANoa(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIANoa##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIANoa,"CATIANoa",CATIANoa::MetaObject(),classe::MetaObject(),TIEchain); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIANoa(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIEchainCreation(CATIANoa, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIANoa##classe(classe::MetaObject(),CATIANoa::MetaObject(),(void *)CreateTIECATIANoa##classe)


/* Macro to switch between BOA and TIE at build time */ 
#ifdef CATSYS_BOA_IS_TIE
#define BOA_CATIANoa(classe) TIE_CATIANoa(classe)
#else
#define BOA_CATIANoa(classe) CATImplementBOA(CATIANoa, classe)
#endif

#endif
