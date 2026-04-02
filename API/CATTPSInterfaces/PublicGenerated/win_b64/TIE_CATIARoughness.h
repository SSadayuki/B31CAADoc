#ifndef __TIE_CATIARoughness
#define __TIE_CATIARoughness

#include <string.h>
#include "CATBaseUnknown.h"
#include "CATMetaClass.h"
#include "CATMacForTie.h"
#include "CATIARoughness.h"
#include "JS0DSPA.h"


#ifdef _WINDOWS_SOURCE
#define Exported __declspec(dllexport)
#define Imported __declspec(dllimport)
#else
#define Exported 
#define Imported 
#endif


/* To link an implementation with the interface CATIARoughness */
#define declare_TIE_CATIARoughness(classe) \
 \
 \
class TIECATIARoughness##classe : public CATIARoughness \
{ \
   private: \
      CATDeclareCommonTIEMembers \
   public: \
      CATDeclareTIEMethods(CATIARoughness, classe) \
      CATDeclareIUnknownMethodsForCATBaseUnknownTIE \
      CATDeclareIDispatchMethodsForCATBaseUnknownTIE \
      CATDeclareCATBaseUnknownMethodsForTIE \
      virtual HRESULT __stdcall get_Obtention(short & oObtention); \
      virtual HRESULT __stdcall put_Obtention(short iObtention); \
      virtual HRESULT __stdcall get_Applicability(short & oApplicability); \
      virtual HRESULT __stdcall put_Applicability(short iApplicability); \
      virtual HRESULT __stdcall Field(short iIndex, CATBSTR & oField); \
      virtual HRESULT __stdcall SetField(short iIndex, const CATBSTR & iField); \
      virtual HRESULT __stdcall TPSParallelOnScreen(CATIATPSParallelOnScreen *& oTPSParallelOnScreen); \
      virtual HRESULT  __stdcall get_Application(CATIAApplication *& oApplication); \
      virtual HRESULT  __stdcall get_Parent(CATBaseDispatch *& oParent); \
      virtual HRESULT  __stdcall get_Name(CATBSTR & oNameBSTR); \
      virtual HRESULT  __stdcall put_Name(const CATBSTR & iNameBSTR); \
      virtual HRESULT  __stdcall GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj); \
};



#define ENVTIEdeclare_CATIARoughness(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
virtual HRESULT __stdcall get_Obtention(short & oObtention); \
virtual HRESULT __stdcall put_Obtention(short iObtention); \
virtual HRESULT __stdcall get_Applicability(short & oApplicability); \
virtual HRESULT __stdcall put_Applicability(short iApplicability); \
virtual HRESULT __stdcall Field(short iIndex, CATBSTR & oField); \
virtual HRESULT __stdcall SetField(short iIndex, const CATBSTR & iField); \
virtual HRESULT __stdcall TPSParallelOnScreen(CATIATPSParallelOnScreen *& oTPSParallelOnScreen); \
virtual HRESULT  __stdcall get_Application(CATIAApplication *& oApplication); \
virtual HRESULT  __stdcall get_Parent(CATBaseDispatch *& oParent); \
virtual HRESULT  __stdcall get_Name(CATBSTR & oNameBSTR); \
virtual HRESULT  __stdcall put_Name(const CATBSTR & iNameBSTR); \
virtual HRESULT  __stdcall GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj); \


#define ENVTIEdefine_CATIARoughness(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
HRESULT __stdcall  ENVTIEName::get_Obtention(short & oObtention) \
{ \
return (ENVTIECALL(CATIARoughness,ENVTIETypeLetter,ENVTIELetter)get_Obtention(oObtention)); \
} \
HRESULT __stdcall  ENVTIEName::put_Obtention(short iObtention) \
{ \
return (ENVTIECALL(CATIARoughness,ENVTIETypeLetter,ENVTIELetter)put_Obtention(iObtention)); \
} \
HRESULT __stdcall  ENVTIEName::get_Applicability(short & oApplicability) \
{ \
return (ENVTIECALL(CATIARoughness,ENVTIETypeLetter,ENVTIELetter)get_Applicability(oApplicability)); \
} \
HRESULT __stdcall  ENVTIEName::put_Applicability(short iApplicability) \
{ \
return (ENVTIECALL(CATIARoughness,ENVTIETypeLetter,ENVTIELetter)put_Applicability(iApplicability)); \
} \
HRESULT __stdcall  ENVTIEName::Field(short iIndex, CATBSTR & oField) \
{ \
return (ENVTIECALL(CATIARoughness,ENVTIETypeLetter,ENVTIELetter)Field(iIndex,oField)); \
} \
HRESULT __stdcall  ENVTIEName::SetField(short iIndex, const CATBSTR & iField) \
{ \
return (ENVTIECALL(CATIARoughness,ENVTIETypeLetter,ENVTIELetter)SetField(iIndex,iField)); \
} \
HRESULT __stdcall  ENVTIEName::TPSParallelOnScreen(CATIATPSParallelOnScreen *& oTPSParallelOnScreen) \
{ \
return (ENVTIECALL(CATIARoughness,ENVTIETypeLetter,ENVTIELetter)TPSParallelOnScreen(oTPSParallelOnScreen)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Application(CATIAApplication *& oApplication) \
{ \
return (ENVTIECALL(CATIARoughness,ENVTIETypeLetter,ENVTIELetter)get_Application(oApplication)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Parent(CATBaseDispatch *& oParent) \
{ \
return (ENVTIECALL(CATIARoughness,ENVTIETypeLetter,ENVTIELetter)get_Parent(oParent)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Name(CATBSTR & oNameBSTR) \
{ \
return (ENVTIECALL(CATIARoughness,ENVTIETypeLetter,ENVTIELetter)get_Name(oNameBSTR)); \
} \
HRESULT  __stdcall  ENVTIEName::put_Name(const CATBSTR & iNameBSTR) \
{ \
return (ENVTIECALL(CATIARoughness,ENVTIETypeLetter,ENVTIELetter)put_Name(iNameBSTR)); \
} \
HRESULT  __stdcall  ENVTIEName::GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj) \
{ \
return (ENVTIECALL(CATIARoughness,ENVTIETypeLetter,ENVTIELetter)GetItem(IDName,RealObj)); \
} \


/* Name of the TIE class */
#define class_TIE_CATIARoughness(classe)    TIECATIARoughness##classe


/* Common methods inside a TIE */
#define common_TIE_CATIARoughness(classe) \
 \
 \
/* Static initialization */ \
CATDefineCommonTIEMembers(CATIARoughness, classe) \
 \
 \
CATImplementTIEMethods(CATIARoughness, classe) \
CATImplementIUnknownMethodsForCATBaseUnknownTIE(CATIARoughness, classe, 2) \
CATImplementIDispatchMethodsForCATBaseUnknownTIE(CATIARoughness, classe) \
CATImplementCATBaseUnknownMethodsForTIE(CATIARoughness, classe) \
 \
HRESULT __stdcall  TIECATIARoughness##classe::get_Obtention(short & oObtention) \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Obtention(oObtention)); \
} \
HRESULT __stdcall  TIECATIARoughness##classe::put_Obtention(short iObtention) \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_Obtention(iObtention)); \
} \
HRESULT __stdcall  TIECATIARoughness##classe::get_Applicability(short & oApplicability) \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Applicability(oApplicability)); \
} \
HRESULT __stdcall  TIECATIARoughness##classe::put_Applicability(short iApplicability) \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_Applicability(iApplicability)); \
} \
HRESULT __stdcall  TIECATIARoughness##classe::Field(short iIndex, CATBSTR & oField) \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->Field(iIndex,oField)); \
} \
HRESULT __stdcall  TIECATIARoughness##classe::SetField(short iIndex, const CATBSTR & iField) \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetField(iIndex,iField)); \
} \
HRESULT __stdcall  TIECATIARoughness##classe::TPSParallelOnScreen(CATIATPSParallelOnScreen *& oTPSParallelOnScreen) \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->TPSParallelOnScreen(oTPSParallelOnScreen)); \
} \
HRESULT  __stdcall  TIECATIARoughness##classe::get_Application(CATIAApplication *& oApplication) \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Application(oApplication)); \
} \
HRESULT  __stdcall  TIECATIARoughness##classe::get_Parent(CATBaseDispatch *& oParent) \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Parent(oParent)); \
} \
HRESULT  __stdcall  TIECATIARoughness##classe::get_Name(CATBSTR & oNameBSTR) \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Name(oNameBSTR)); \
} \
HRESULT  __stdcall  TIECATIARoughness##classe::put_Name(const CATBSTR & iNameBSTR) \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_Name(iNameBSTR)); \
} \
HRESULT  __stdcall  TIECATIARoughness##classe::GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj) \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetItem(IDName,RealObj)); \
} \



/* Macro used to link an implementation with an interface */
#define TIE_CATIARoughness(classe) \
 \
 \
declare_TIE_CATIARoughness(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIARoughness##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIARoughness,"CATIARoughness",CATIARoughness::MetaObject(),classe::MetaObject(),TIE); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIARoughness(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIECreation(CATIARoughness, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIARoughness##classe(classe::MetaObject(),CATIARoughness::MetaObject(),(void *)CreateTIECATIARoughness##classe)



/* Macro used to link an implementation with an interface */
/* This TIE is chained on the implementation object */
#define TIEchain_CATIARoughness(classe) \
 \
 \
declare_TIE_CATIARoughness(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIARoughness##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIARoughness,"CATIARoughness",CATIARoughness::MetaObject(),classe::MetaObject(),TIEchain); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIARoughness(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIEchainCreation(CATIARoughness, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIARoughness##classe(classe::MetaObject(),CATIARoughness::MetaObject(),(void *)CreateTIECATIARoughness##classe)


/* Macro to switch between BOA and TIE at build time */ 
#ifdef CATSYS_BOA_IS_TIE
#define BOA_CATIARoughness(classe) TIE_CATIARoughness(classe)
#else
#define BOA_CATIARoughness(classe) CATImplementBOA(CATIARoughness, classe)
#endif

#endif
