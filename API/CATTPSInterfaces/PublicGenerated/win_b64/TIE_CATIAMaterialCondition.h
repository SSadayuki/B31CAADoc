#ifndef __TIE_CATIAMaterialCondition
#define __TIE_CATIAMaterialCondition

#include <string.h>
#include "CATBaseUnknown.h"
#include "CATMetaClass.h"
#include "CATMacForTie.h"
#include "CATIAMaterialCondition.h"
#include "JS0DSPA.h"


#ifdef _WINDOWS_SOURCE
#define Exported __declspec(dllexport)
#define Imported __declspec(dllimport)
#else
#define Exported 
#define Imported 
#endif


/* To link an implementation with the interface CATIAMaterialCondition */
#define declare_TIE_CATIAMaterialCondition(classe) \
 \
 \
class TIECATIAMaterialCondition##classe : public CATIAMaterialCondition \
{ \
   private: \
      CATDeclareCommonTIEMembers \
   public: \
      CATDeclareTIEMethods(CATIAMaterialCondition, classe) \
      CATDeclareIUnknownMethodsForCATBaseUnknownTIE \
      CATDeclareIDispatchMethodsForCATBaseUnknownTIE \
      CATDeclareCATBaseUnknownMethodsForTIE \
      virtual HRESULT __stdcall get_Modifier(CATBSTR & oModifier); \
      virtual HRESULT  __stdcall get_Application(CATIAApplication *& oApplication); \
      virtual HRESULT  __stdcall get_Parent(CATBaseDispatch *& oParent); \
      virtual HRESULT  __stdcall get_Name(CATBSTR & oNameBSTR); \
      virtual HRESULT  __stdcall put_Name(const CATBSTR & iNameBSTR); \
      virtual HRESULT  __stdcall GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj); \
};



#define ENVTIEdeclare_CATIAMaterialCondition(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
virtual HRESULT __stdcall get_Modifier(CATBSTR & oModifier); \
virtual HRESULT  __stdcall get_Application(CATIAApplication *& oApplication); \
virtual HRESULT  __stdcall get_Parent(CATBaseDispatch *& oParent); \
virtual HRESULT  __stdcall get_Name(CATBSTR & oNameBSTR); \
virtual HRESULT  __stdcall put_Name(const CATBSTR & iNameBSTR); \
virtual HRESULT  __stdcall GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj); \


#define ENVTIEdefine_CATIAMaterialCondition(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
HRESULT __stdcall  ENVTIEName::get_Modifier(CATBSTR & oModifier) \
{ \
return (ENVTIECALL(CATIAMaterialCondition,ENVTIETypeLetter,ENVTIELetter)get_Modifier(oModifier)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Application(CATIAApplication *& oApplication) \
{ \
return (ENVTIECALL(CATIAMaterialCondition,ENVTIETypeLetter,ENVTIELetter)get_Application(oApplication)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Parent(CATBaseDispatch *& oParent) \
{ \
return (ENVTIECALL(CATIAMaterialCondition,ENVTIETypeLetter,ENVTIELetter)get_Parent(oParent)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Name(CATBSTR & oNameBSTR) \
{ \
return (ENVTIECALL(CATIAMaterialCondition,ENVTIETypeLetter,ENVTIELetter)get_Name(oNameBSTR)); \
} \
HRESULT  __stdcall  ENVTIEName::put_Name(const CATBSTR & iNameBSTR) \
{ \
return (ENVTIECALL(CATIAMaterialCondition,ENVTIETypeLetter,ENVTIELetter)put_Name(iNameBSTR)); \
} \
HRESULT  __stdcall  ENVTIEName::GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj) \
{ \
return (ENVTIECALL(CATIAMaterialCondition,ENVTIETypeLetter,ENVTIELetter)GetItem(IDName,RealObj)); \
} \


/* Name of the TIE class */
#define class_TIE_CATIAMaterialCondition(classe)    TIECATIAMaterialCondition##classe


/* Common methods inside a TIE */
#define common_TIE_CATIAMaterialCondition(classe) \
 \
 \
/* Static initialization */ \
CATDefineCommonTIEMembers(CATIAMaterialCondition, classe) \
 \
 \
CATImplementTIEMethods(CATIAMaterialCondition, classe) \
CATImplementIUnknownMethodsForCATBaseUnknownTIE(CATIAMaterialCondition, classe, 2) \
CATImplementIDispatchMethodsForCATBaseUnknownTIE(CATIAMaterialCondition, classe) \
CATImplementCATBaseUnknownMethodsForTIE(CATIAMaterialCondition, classe) \
 \
HRESULT __stdcall  TIECATIAMaterialCondition##classe::get_Modifier(CATBSTR & oModifier) \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Modifier(oModifier)); \
} \
HRESULT  __stdcall  TIECATIAMaterialCondition##classe::get_Application(CATIAApplication *& oApplication) \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Application(oApplication)); \
} \
HRESULT  __stdcall  TIECATIAMaterialCondition##classe::get_Parent(CATBaseDispatch *& oParent) \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Parent(oParent)); \
} \
HRESULT  __stdcall  TIECATIAMaterialCondition##classe::get_Name(CATBSTR & oNameBSTR) \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Name(oNameBSTR)); \
} \
HRESULT  __stdcall  TIECATIAMaterialCondition##classe::put_Name(const CATBSTR & iNameBSTR) \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_Name(iNameBSTR)); \
} \
HRESULT  __stdcall  TIECATIAMaterialCondition##classe::GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj) \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetItem(IDName,RealObj)); \
} \



/* Macro used to link an implementation with an interface */
#define TIE_CATIAMaterialCondition(classe) \
 \
 \
declare_TIE_CATIAMaterialCondition(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIAMaterialCondition##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIAMaterialCondition,"CATIAMaterialCondition",CATIAMaterialCondition::MetaObject(),classe::MetaObject(),TIE); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIAMaterialCondition(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIECreation(CATIAMaterialCondition, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIAMaterialCondition##classe(classe::MetaObject(),CATIAMaterialCondition::MetaObject(),(void *)CreateTIECATIAMaterialCondition##classe)



/* Macro used to link an implementation with an interface */
/* This TIE is chained on the implementation object */
#define TIEchain_CATIAMaterialCondition(classe) \
 \
 \
declare_TIE_CATIAMaterialCondition(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIAMaterialCondition##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIAMaterialCondition,"CATIAMaterialCondition",CATIAMaterialCondition::MetaObject(),classe::MetaObject(),TIEchain); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIAMaterialCondition(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIEchainCreation(CATIAMaterialCondition, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIAMaterialCondition##classe(classe::MetaObject(),CATIAMaterialCondition::MetaObject(),(void *)CreateTIECATIAMaterialCondition##classe)


/* Macro to switch between BOA and TIE at build time */ 
#ifdef CATSYS_BOA_IS_TIE
#define BOA_CATIAMaterialCondition(classe) TIE_CATIAMaterialCondition(classe)
#else
#define BOA_CATIAMaterialCondition(classe) CATImplementBOA(CATIAMaterialCondition, classe)
#endif

#endif
