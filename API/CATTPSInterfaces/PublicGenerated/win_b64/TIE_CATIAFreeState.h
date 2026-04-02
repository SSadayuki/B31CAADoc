#ifndef __TIE_CATIAFreeState
#define __TIE_CATIAFreeState

#include <string.h>
#include "CATBaseUnknown.h"
#include "CATMetaClass.h"
#include "CATMacForTie.h"
#include "CATIAFreeState.h"
#include "JS0DSPA.h"


#ifdef _WINDOWS_SOURCE
#define Exported __declspec(dllexport)
#define Imported __declspec(dllimport)
#else
#define Exported 
#define Imported 
#endif


/* To link an implementation with the interface CATIAFreeState */
#define declare_TIE_CATIAFreeState(classe) \
 \
 \
class TIECATIAFreeState##classe : public CATIAFreeState \
{ \
   private: \
      CATDeclareCommonTIEMembers \
   public: \
      CATDeclareTIEMethods(CATIAFreeState, classe) \
      CATDeclareIUnknownMethodsForCATBaseUnknownTIE \
      CATDeclareIDispatchMethodsForCATBaseUnknownTIE \
      CATDeclareCATBaseUnknownMethodsForTIE \
      virtual HRESULT __stdcall get_Modifier(CATBSTR & oModifier); \
      virtual HRESULT __stdcall put_Modifier(const CATBSTR & iModifier); \
      virtual HRESULT  __stdcall get_Application(CATIAApplication *& oApplication); \
      virtual HRESULT  __stdcall get_Parent(CATBaseDispatch *& oParent); \
      virtual HRESULT  __stdcall get_Name(CATBSTR & oNameBSTR); \
      virtual HRESULT  __stdcall put_Name(const CATBSTR & iNameBSTR); \
      virtual HRESULT  __stdcall GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj); \
};



#define ENVTIEdeclare_CATIAFreeState(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
virtual HRESULT __stdcall get_Modifier(CATBSTR & oModifier); \
virtual HRESULT __stdcall put_Modifier(const CATBSTR & iModifier); \
virtual HRESULT  __stdcall get_Application(CATIAApplication *& oApplication); \
virtual HRESULT  __stdcall get_Parent(CATBaseDispatch *& oParent); \
virtual HRESULT  __stdcall get_Name(CATBSTR & oNameBSTR); \
virtual HRESULT  __stdcall put_Name(const CATBSTR & iNameBSTR); \
virtual HRESULT  __stdcall GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj); \


#define ENVTIEdefine_CATIAFreeState(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
HRESULT __stdcall  ENVTIEName::get_Modifier(CATBSTR & oModifier) \
{ \
return (ENVTIECALL(CATIAFreeState,ENVTIETypeLetter,ENVTIELetter)get_Modifier(oModifier)); \
} \
HRESULT __stdcall  ENVTIEName::put_Modifier(const CATBSTR & iModifier) \
{ \
return (ENVTIECALL(CATIAFreeState,ENVTIETypeLetter,ENVTIELetter)put_Modifier(iModifier)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Application(CATIAApplication *& oApplication) \
{ \
return (ENVTIECALL(CATIAFreeState,ENVTIETypeLetter,ENVTIELetter)get_Application(oApplication)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Parent(CATBaseDispatch *& oParent) \
{ \
return (ENVTIECALL(CATIAFreeState,ENVTIETypeLetter,ENVTIELetter)get_Parent(oParent)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Name(CATBSTR & oNameBSTR) \
{ \
return (ENVTIECALL(CATIAFreeState,ENVTIETypeLetter,ENVTIELetter)get_Name(oNameBSTR)); \
} \
HRESULT  __stdcall  ENVTIEName::put_Name(const CATBSTR & iNameBSTR) \
{ \
return (ENVTIECALL(CATIAFreeState,ENVTIETypeLetter,ENVTIELetter)put_Name(iNameBSTR)); \
} \
HRESULT  __stdcall  ENVTIEName::GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj) \
{ \
return (ENVTIECALL(CATIAFreeState,ENVTIETypeLetter,ENVTIELetter)GetItem(IDName,RealObj)); \
} \


/* Name of the TIE class */
#define class_TIE_CATIAFreeState(classe)    TIECATIAFreeState##classe


/* Common methods inside a TIE */
#define common_TIE_CATIAFreeState(classe) \
 \
 \
/* Static initialization */ \
CATDefineCommonTIEMembers(CATIAFreeState, classe) \
 \
 \
CATImplementTIEMethods(CATIAFreeState, classe) \
CATImplementIUnknownMethodsForCATBaseUnknownTIE(CATIAFreeState, classe, 2) \
CATImplementIDispatchMethodsForCATBaseUnknownTIE(CATIAFreeState, classe) \
CATImplementCATBaseUnknownMethodsForTIE(CATIAFreeState, classe) \
 \
HRESULT __stdcall  TIECATIAFreeState##classe::get_Modifier(CATBSTR & oModifier) \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Modifier(oModifier)); \
} \
HRESULT __stdcall  TIECATIAFreeState##classe::put_Modifier(const CATBSTR & iModifier) \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_Modifier(iModifier)); \
} \
HRESULT  __stdcall  TIECATIAFreeState##classe::get_Application(CATIAApplication *& oApplication) \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Application(oApplication)); \
} \
HRESULT  __stdcall  TIECATIAFreeState##classe::get_Parent(CATBaseDispatch *& oParent) \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Parent(oParent)); \
} \
HRESULT  __stdcall  TIECATIAFreeState##classe::get_Name(CATBSTR & oNameBSTR) \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Name(oNameBSTR)); \
} \
HRESULT  __stdcall  TIECATIAFreeState##classe::put_Name(const CATBSTR & iNameBSTR) \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_Name(iNameBSTR)); \
} \
HRESULT  __stdcall  TIECATIAFreeState##classe::GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj) \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetItem(IDName,RealObj)); \
} \



/* Macro used to link an implementation with an interface */
#define TIE_CATIAFreeState(classe) \
 \
 \
declare_TIE_CATIAFreeState(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIAFreeState##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIAFreeState,"CATIAFreeState",CATIAFreeState::MetaObject(),classe::MetaObject(),TIE); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIAFreeState(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIECreation(CATIAFreeState, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIAFreeState##classe(classe::MetaObject(),CATIAFreeState::MetaObject(),(void *)CreateTIECATIAFreeState##classe)



/* Macro used to link an implementation with an interface */
/* This TIE is chained on the implementation object */
#define TIEchain_CATIAFreeState(classe) \
 \
 \
declare_TIE_CATIAFreeState(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIAFreeState##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIAFreeState,"CATIAFreeState",CATIAFreeState::MetaObject(),classe::MetaObject(),TIEchain); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIAFreeState(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIEchainCreation(CATIAFreeState, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIAFreeState##classe(classe::MetaObject(),CATIAFreeState::MetaObject(),(void *)CreateTIECATIAFreeState##classe)


/* Macro to switch between BOA and TIE at build time */ 
#ifdef CATSYS_BOA_IS_TIE
#define BOA_CATIAFreeState(classe) TIE_CATIAFreeState(classe)
#else
#define BOA_CATIAFreeState(classe) CATImplementBOA(CATIAFreeState, classe)
#endif

#endif
