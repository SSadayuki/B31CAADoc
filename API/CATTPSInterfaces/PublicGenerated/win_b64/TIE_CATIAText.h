#ifndef __TIE_CATIAText
#define __TIE_CATIAText

#include <string.h>
#include "CATBaseUnknown.h"
#include "CATMetaClass.h"
#include "CATMacForTie.h"
#include "CATIAText.h"
#include "JS0DSPA.h"


#ifdef _WINDOWS_SOURCE
#define Exported __declspec(dllexport)
#define Imported __declspec(dllimport)
#else
#define Exported 
#define Imported 
#endif


/* To link an implementation with the interface CATIAText */
#define declare_TIE_CATIAText(classe) \
 \
 \
class TIECATIAText##classe : public CATIAText \
{ \
   private: \
      CATDeclareCommonTIEMembers \
   public: \
      CATDeclareTIEMethods(CATIAText, classe) \
      CATDeclareIUnknownMethodsForCATBaseUnknownTIE \
      CATDeclareIDispatchMethodsForCATBaseUnknownTIE \
      CATDeclareCATBaseUnknownMethodsForTIE \
      virtual HRESULT __stdcall get_Text(CATBSTR & oText); \
      virtual HRESULT __stdcall put_Text(const CATBSTR & iText); \
      virtual HRESULT __stdcall Get2dAnnot(CATIADrawingText *& oText); \
      virtual HRESULT __stdcall TPSParallelOnScreen(CATIATPSParallelOnScreen *& oTPSParallelOnScreen); \
      virtual HRESULT  __stdcall get_Application(CATIAApplication *& oApplication); \
      virtual HRESULT  __stdcall get_Parent(CATBaseDispatch *& oParent); \
      virtual HRESULT  __stdcall get_Name(CATBSTR & oNameBSTR); \
      virtual HRESULT  __stdcall put_Name(const CATBSTR & iNameBSTR); \
      virtual HRESULT  __stdcall GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj); \
};



#define ENVTIEdeclare_CATIAText(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
virtual HRESULT __stdcall get_Text(CATBSTR & oText); \
virtual HRESULT __stdcall put_Text(const CATBSTR & iText); \
virtual HRESULT __stdcall Get2dAnnot(CATIADrawingText *& oText); \
virtual HRESULT __stdcall TPSParallelOnScreen(CATIATPSParallelOnScreen *& oTPSParallelOnScreen); \
virtual HRESULT  __stdcall get_Application(CATIAApplication *& oApplication); \
virtual HRESULT  __stdcall get_Parent(CATBaseDispatch *& oParent); \
virtual HRESULT  __stdcall get_Name(CATBSTR & oNameBSTR); \
virtual HRESULT  __stdcall put_Name(const CATBSTR & iNameBSTR); \
virtual HRESULT  __stdcall GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj); \


#define ENVTIEdefine_CATIAText(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
HRESULT __stdcall  ENVTIEName::get_Text(CATBSTR & oText) \
{ \
return (ENVTIECALL(CATIAText,ENVTIETypeLetter,ENVTIELetter)get_Text(oText)); \
} \
HRESULT __stdcall  ENVTIEName::put_Text(const CATBSTR & iText) \
{ \
return (ENVTIECALL(CATIAText,ENVTIETypeLetter,ENVTIELetter)put_Text(iText)); \
} \
HRESULT __stdcall  ENVTIEName::Get2dAnnot(CATIADrawingText *& oText) \
{ \
return (ENVTIECALL(CATIAText,ENVTIETypeLetter,ENVTIELetter)Get2dAnnot(oText)); \
} \
HRESULT __stdcall  ENVTIEName::TPSParallelOnScreen(CATIATPSParallelOnScreen *& oTPSParallelOnScreen) \
{ \
return (ENVTIECALL(CATIAText,ENVTIETypeLetter,ENVTIELetter)TPSParallelOnScreen(oTPSParallelOnScreen)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Application(CATIAApplication *& oApplication) \
{ \
return (ENVTIECALL(CATIAText,ENVTIETypeLetter,ENVTIELetter)get_Application(oApplication)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Parent(CATBaseDispatch *& oParent) \
{ \
return (ENVTIECALL(CATIAText,ENVTIETypeLetter,ENVTIELetter)get_Parent(oParent)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Name(CATBSTR & oNameBSTR) \
{ \
return (ENVTIECALL(CATIAText,ENVTIETypeLetter,ENVTIELetter)get_Name(oNameBSTR)); \
} \
HRESULT  __stdcall  ENVTIEName::put_Name(const CATBSTR & iNameBSTR) \
{ \
return (ENVTIECALL(CATIAText,ENVTIETypeLetter,ENVTIELetter)put_Name(iNameBSTR)); \
} \
HRESULT  __stdcall  ENVTIEName::GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj) \
{ \
return (ENVTIECALL(CATIAText,ENVTIETypeLetter,ENVTIELetter)GetItem(IDName,RealObj)); \
} \


/* Name of the TIE class */
#define class_TIE_CATIAText(classe)    TIECATIAText##classe


/* Common methods inside a TIE */
#define common_TIE_CATIAText(classe) \
 \
 \
/* Static initialization */ \
CATDefineCommonTIEMembers(CATIAText, classe) \
 \
 \
CATImplementTIEMethods(CATIAText, classe) \
CATImplementIUnknownMethodsForCATBaseUnknownTIE(CATIAText, classe, 2) \
CATImplementIDispatchMethodsForCATBaseUnknownTIE(CATIAText, classe) \
CATImplementCATBaseUnknownMethodsForTIE(CATIAText, classe) \
 \
HRESULT __stdcall  TIECATIAText##classe::get_Text(CATBSTR & oText) \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Text(oText)); \
} \
HRESULT __stdcall  TIECATIAText##classe::put_Text(const CATBSTR & iText) \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_Text(iText)); \
} \
HRESULT __stdcall  TIECATIAText##classe::Get2dAnnot(CATIADrawingText *& oText) \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->Get2dAnnot(oText)); \
} \
HRESULT __stdcall  TIECATIAText##classe::TPSParallelOnScreen(CATIATPSParallelOnScreen *& oTPSParallelOnScreen) \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->TPSParallelOnScreen(oTPSParallelOnScreen)); \
} \
HRESULT  __stdcall  TIECATIAText##classe::get_Application(CATIAApplication *& oApplication) \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Application(oApplication)); \
} \
HRESULT  __stdcall  TIECATIAText##classe::get_Parent(CATBaseDispatch *& oParent) \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Parent(oParent)); \
} \
HRESULT  __stdcall  TIECATIAText##classe::get_Name(CATBSTR & oNameBSTR) \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Name(oNameBSTR)); \
} \
HRESULT  __stdcall  TIECATIAText##classe::put_Name(const CATBSTR & iNameBSTR) \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_Name(iNameBSTR)); \
} \
HRESULT  __stdcall  TIECATIAText##classe::GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj) \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetItem(IDName,RealObj)); \
} \



/* Macro used to link an implementation with an interface */
#define TIE_CATIAText(classe) \
 \
 \
declare_TIE_CATIAText(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIAText##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIAText,"CATIAText",CATIAText::MetaObject(),classe::MetaObject(),TIE); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIAText(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIECreation(CATIAText, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIAText##classe(classe::MetaObject(),CATIAText::MetaObject(),(void *)CreateTIECATIAText##classe)



/* Macro used to link an implementation with an interface */
/* This TIE is chained on the implementation object */
#define TIEchain_CATIAText(classe) \
 \
 \
declare_TIE_CATIAText(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIAText##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIAText,"CATIAText",CATIAText::MetaObject(),classe::MetaObject(),TIEchain); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIAText(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIEchainCreation(CATIAText, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIAText##classe(classe::MetaObject(),CATIAText::MetaObject(),(void *)CreateTIECATIAText##classe)


/* Macro to switch between BOA and TIE at build time */ 
#ifdef CATSYS_BOA_IS_TIE
#define BOA_CATIAText(classe) TIE_CATIAText(classe)
#else
#define BOA_CATIAText(classe) CATImplementBOA(CATIAText, classe)
#endif

#endif
