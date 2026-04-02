#ifndef __TIE_CATIATangentPlane
#define __TIE_CATIATangentPlane

#include <string.h>
#include "CATBaseUnknown.h"
#include "CATMetaClass.h"
#include "CATMacForTie.h"
#include "CATIATangentPlane.h"
#include "JS0DSPA.h"


#ifdef _WINDOWS_SOURCE
#define Exported __declspec(dllexport)
#define Imported __declspec(dllimport)
#else
#define Exported 
#define Imported 
#endif


/* To link an implementation with the interface CATIATangentPlane */
#define declare_TIE_CATIATangentPlane(classe) \
 \
 \
class TIECATIATangentPlane##classe : public CATIATangentPlane \
{ \
   private: \
      CATDeclareCommonTIEMembers \
   public: \
      CATDeclareTIEMethods(CATIATangentPlane, classe) \
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



#define ENVTIEdeclare_CATIATangentPlane(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
virtual HRESULT __stdcall get_Modifier(CATBSTR & oModifier); \
virtual HRESULT __stdcall put_Modifier(const CATBSTR & iModifier); \
virtual HRESULT  __stdcall get_Application(CATIAApplication *& oApplication); \
virtual HRESULT  __stdcall get_Parent(CATBaseDispatch *& oParent); \
virtual HRESULT  __stdcall get_Name(CATBSTR & oNameBSTR); \
virtual HRESULT  __stdcall put_Name(const CATBSTR & iNameBSTR); \
virtual HRESULT  __stdcall GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj); \


#define ENVTIEdefine_CATIATangentPlane(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
HRESULT __stdcall  ENVTIEName::get_Modifier(CATBSTR & oModifier) \
{ \
return (ENVTIECALL(CATIATangentPlane,ENVTIETypeLetter,ENVTIELetter)get_Modifier(oModifier)); \
} \
HRESULT __stdcall  ENVTIEName::put_Modifier(const CATBSTR & iModifier) \
{ \
return (ENVTIECALL(CATIATangentPlane,ENVTIETypeLetter,ENVTIELetter)put_Modifier(iModifier)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Application(CATIAApplication *& oApplication) \
{ \
return (ENVTIECALL(CATIATangentPlane,ENVTIETypeLetter,ENVTIELetter)get_Application(oApplication)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Parent(CATBaseDispatch *& oParent) \
{ \
return (ENVTIECALL(CATIATangentPlane,ENVTIETypeLetter,ENVTIELetter)get_Parent(oParent)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Name(CATBSTR & oNameBSTR) \
{ \
return (ENVTIECALL(CATIATangentPlane,ENVTIETypeLetter,ENVTIELetter)get_Name(oNameBSTR)); \
} \
HRESULT  __stdcall  ENVTIEName::put_Name(const CATBSTR & iNameBSTR) \
{ \
return (ENVTIECALL(CATIATangentPlane,ENVTIETypeLetter,ENVTIELetter)put_Name(iNameBSTR)); \
} \
HRESULT  __stdcall  ENVTIEName::GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj) \
{ \
return (ENVTIECALL(CATIATangentPlane,ENVTIETypeLetter,ENVTIELetter)GetItem(IDName,RealObj)); \
} \


/* Name of the TIE class */
#define class_TIE_CATIATangentPlane(classe)    TIECATIATangentPlane##classe


/* Common methods inside a TIE */
#define common_TIE_CATIATangentPlane(classe) \
 \
 \
/* Static initialization */ \
CATDefineCommonTIEMembers(CATIATangentPlane, classe) \
 \
 \
CATImplementTIEMethods(CATIATangentPlane, classe) \
CATImplementIUnknownMethodsForCATBaseUnknownTIE(CATIATangentPlane, classe, 2) \
CATImplementIDispatchMethodsForCATBaseUnknownTIE(CATIATangentPlane, classe) \
CATImplementCATBaseUnknownMethodsForTIE(CATIATangentPlane, classe) \
 \
HRESULT __stdcall  TIECATIATangentPlane##classe::get_Modifier(CATBSTR & oModifier) \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Modifier(oModifier)); \
} \
HRESULT __stdcall  TIECATIATangentPlane##classe::put_Modifier(const CATBSTR & iModifier) \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_Modifier(iModifier)); \
} \
HRESULT  __stdcall  TIECATIATangentPlane##classe::get_Application(CATIAApplication *& oApplication) \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Application(oApplication)); \
} \
HRESULT  __stdcall  TIECATIATangentPlane##classe::get_Parent(CATBaseDispatch *& oParent) \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Parent(oParent)); \
} \
HRESULT  __stdcall  TIECATIATangentPlane##classe::get_Name(CATBSTR & oNameBSTR) \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Name(oNameBSTR)); \
} \
HRESULT  __stdcall  TIECATIATangentPlane##classe::put_Name(const CATBSTR & iNameBSTR) \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_Name(iNameBSTR)); \
} \
HRESULT  __stdcall  TIECATIATangentPlane##classe::GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj) \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetItem(IDName,RealObj)); \
} \



/* Macro used to link an implementation with an interface */
#define TIE_CATIATangentPlane(classe) \
 \
 \
declare_TIE_CATIATangentPlane(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIATangentPlane##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIATangentPlane,"CATIATangentPlane",CATIATangentPlane::MetaObject(),classe::MetaObject(),TIE); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIATangentPlane(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIECreation(CATIATangentPlane, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIATangentPlane##classe(classe::MetaObject(),CATIATangentPlane::MetaObject(),(void *)CreateTIECATIATangentPlane##classe)



/* Macro used to link an implementation with an interface */
/* This TIE is chained on the implementation object */
#define TIEchain_CATIATangentPlane(classe) \
 \
 \
declare_TIE_CATIATangentPlane(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIATangentPlane##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIATangentPlane,"CATIATangentPlane",CATIATangentPlane::MetaObject(),classe::MetaObject(),TIEchain); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIATangentPlane(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIEchainCreation(CATIATangentPlane, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIATangentPlane##classe(classe::MetaObject(),CATIATangentPlane::MetaObject(),(void *)CreateTIECATIATangentPlane##classe)


/* Macro to switch between BOA and TIE at build time */ 
#ifdef CATSYS_BOA_IS_TIE
#define BOA_CATIATangentPlane(classe) TIE_CATIATangentPlane(classe)
#else
#define BOA_CATIATangentPlane(classe) CATImplementBOA(CATIATangentPlane, classe)
#endif

#endif
