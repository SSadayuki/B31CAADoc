#ifndef __TIE_CATIANonSemanticDatumTarget
#define __TIE_CATIANonSemanticDatumTarget

#include <string.h>
#include "CATBaseUnknown.h"
#include "CATMetaClass.h"
#include "CATMacForTie.h"
#include "CATIANonSemanticDatumTarget.h"
#include "JS0DSPA.h"


#ifdef _WINDOWS_SOURCE
#define Exported __declspec(dllexport)
#define Imported __declspec(dllimport)
#else
#define Exported 
#define Imported 
#endif


/* To link an implementation with the interface CATIANonSemanticDatumTarget */
#define declare_TIE_CATIANonSemanticDatumTarget(classe) \
 \
 \
class TIECATIANonSemanticDatumTarget##classe : public CATIANonSemanticDatumTarget \
{ \
   private: \
      CATDeclareCommonTIEMembers \
   public: \
      CATDeclareTIEMethods(CATIANonSemanticDatumTarget, classe) \
      CATDeclareIUnknownMethodsForCATBaseUnknownTIE \
      CATDeclareIDispatchMethodsForCATBaseUnknownTIE \
      CATDeclareCATBaseUnknownMethodsForTIE \
      virtual HRESULT __stdcall get_UpLabel(CATBSTR & oUpLabel); \
      virtual HRESULT __stdcall put_UpLabel(const CATBSTR & iUpLabel); \
      virtual HRESULT __stdcall get_LowLabel(CATBSTR & oLowLabel); \
      virtual HRESULT __stdcall put_LowLabel(const CATBSTR & iLowLabel); \
      virtual HRESULT __stdcall get_TypeSpecifier(CATBSTR & oSpecName); \
      virtual HRESULT __stdcall put_TypeSpecifier(const CATBSTR & iSpecName); \
      virtual HRESULT  __stdcall get_Application(CATIAApplication *& oApplication); \
      virtual HRESULT  __stdcall get_Parent(CATBaseDispatch *& oParent); \
      virtual HRESULT  __stdcall get_Name(CATBSTR & oNameBSTR); \
      virtual HRESULT  __stdcall put_Name(const CATBSTR & iNameBSTR); \
      virtual HRESULT  __stdcall GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj); \
};



#define ENVTIEdeclare_CATIANonSemanticDatumTarget(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
virtual HRESULT __stdcall get_UpLabel(CATBSTR & oUpLabel); \
virtual HRESULT __stdcall put_UpLabel(const CATBSTR & iUpLabel); \
virtual HRESULT __stdcall get_LowLabel(CATBSTR & oLowLabel); \
virtual HRESULT __stdcall put_LowLabel(const CATBSTR & iLowLabel); \
virtual HRESULT __stdcall get_TypeSpecifier(CATBSTR & oSpecName); \
virtual HRESULT __stdcall put_TypeSpecifier(const CATBSTR & iSpecName); \
virtual HRESULT  __stdcall get_Application(CATIAApplication *& oApplication); \
virtual HRESULT  __stdcall get_Parent(CATBaseDispatch *& oParent); \
virtual HRESULT  __stdcall get_Name(CATBSTR & oNameBSTR); \
virtual HRESULT  __stdcall put_Name(const CATBSTR & iNameBSTR); \
virtual HRESULT  __stdcall GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj); \


#define ENVTIEdefine_CATIANonSemanticDatumTarget(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
HRESULT __stdcall  ENVTIEName::get_UpLabel(CATBSTR & oUpLabel) \
{ \
return (ENVTIECALL(CATIANonSemanticDatumTarget,ENVTIETypeLetter,ENVTIELetter)get_UpLabel(oUpLabel)); \
} \
HRESULT __stdcall  ENVTIEName::put_UpLabel(const CATBSTR & iUpLabel) \
{ \
return (ENVTIECALL(CATIANonSemanticDatumTarget,ENVTIETypeLetter,ENVTIELetter)put_UpLabel(iUpLabel)); \
} \
HRESULT __stdcall  ENVTIEName::get_LowLabel(CATBSTR & oLowLabel) \
{ \
return (ENVTIECALL(CATIANonSemanticDatumTarget,ENVTIETypeLetter,ENVTIELetter)get_LowLabel(oLowLabel)); \
} \
HRESULT __stdcall  ENVTIEName::put_LowLabel(const CATBSTR & iLowLabel) \
{ \
return (ENVTIECALL(CATIANonSemanticDatumTarget,ENVTIETypeLetter,ENVTIELetter)put_LowLabel(iLowLabel)); \
} \
HRESULT __stdcall  ENVTIEName::get_TypeSpecifier(CATBSTR & oSpecName) \
{ \
return (ENVTIECALL(CATIANonSemanticDatumTarget,ENVTIETypeLetter,ENVTIELetter)get_TypeSpecifier(oSpecName)); \
} \
HRESULT __stdcall  ENVTIEName::put_TypeSpecifier(const CATBSTR & iSpecName) \
{ \
return (ENVTIECALL(CATIANonSemanticDatumTarget,ENVTIETypeLetter,ENVTIELetter)put_TypeSpecifier(iSpecName)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Application(CATIAApplication *& oApplication) \
{ \
return (ENVTIECALL(CATIANonSemanticDatumTarget,ENVTIETypeLetter,ENVTIELetter)get_Application(oApplication)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Parent(CATBaseDispatch *& oParent) \
{ \
return (ENVTIECALL(CATIANonSemanticDatumTarget,ENVTIETypeLetter,ENVTIELetter)get_Parent(oParent)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Name(CATBSTR & oNameBSTR) \
{ \
return (ENVTIECALL(CATIANonSemanticDatumTarget,ENVTIETypeLetter,ENVTIELetter)get_Name(oNameBSTR)); \
} \
HRESULT  __stdcall  ENVTIEName::put_Name(const CATBSTR & iNameBSTR) \
{ \
return (ENVTIECALL(CATIANonSemanticDatumTarget,ENVTIETypeLetter,ENVTIELetter)put_Name(iNameBSTR)); \
} \
HRESULT  __stdcall  ENVTIEName::GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj) \
{ \
return (ENVTIECALL(CATIANonSemanticDatumTarget,ENVTIETypeLetter,ENVTIELetter)GetItem(IDName,RealObj)); \
} \


/* Name of the TIE class */
#define class_TIE_CATIANonSemanticDatumTarget(classe)    TIECATIANonSemanticDatumTarget##classe


/* Common methods inside a TIE */
#define common_TIE_CATIANonSemanticDatumTarget(classe) \
 \
 \
/* Static initialization */ \
CATDefineCommonTIEMembers(CATIANonSemanticDatumTarget, classe) \
 \
 \
CATImplementTIEMethods(CATIANonSemanticDatumTarget, classe) \
CATImplementIUnknownMethodsForCATBaseUnknownTIE(CATIANonSemanticDatumTarget, classe, 2) \
CATImplementIDispatchMethodsForCATBaseUnknownTIE(CATIANonSemanticDatumTarget, classe) \
CATImplementCATBaseUnknownMethodsForTIE(CATIANonSemanticDatumTarget, classe) \
 \
HRESULT __stdcall  TIECATIANonSemanticDatumTarget##classe::get_UpLabel(CATBSTR & oUpLabel) \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_UpLabel(oUpLabel)); \
} \
HRESULT __stdcall  TIECATIANonSemanticDatumTarget##classe::put_UpLabel(const CATBSTR & iUpLabel) \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_UpLabel(iUpLabel)); \
} \
HRESULT __stdcall  TIECATIANonSemanticDatumTarget##classe::get_LowLabel(CATBSTR & oLowLabel) \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_LowLabel(oLowLabel)); \
} \
HRESULT __stdcall  TIECATIANonSemanticDatumTarget##classe::put_LowLabel(const CATBSTR & iLowLabel) \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_LowLabel(iLowLabel)); \
} \
HRESULT __stdcall  TIECATIANonSemanticDatumTarget##classe::get_TypeSpecifier(CATBSTR & oSpecName) \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_TypeSpecifier(oSpecName)); \
} \
HRESULT __stdcall  TIECATIANonSemanticDatumTarget##classe::put_TypeSpecifier(const CATBSTR & iSpecName) \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_TypeSpecifier(iSpecName)); \
} \
HRESULT  __stdcall  TIECATIANonSemanticDatumTarget##classe::get_Application(CATIAApplication *& oApplication) \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Application(oApplication)); \
} \
HRESULT  __stdcall  TIECATIANonSemanticDatumTarget##classe::get_Parent(CATBaseDispatch *& oParent) \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Parent(oParent)); \
} \
HRESULT  __stdcall  TIECATIANonSemanticDatumTarget##classe::get_Name(CATBSTR & oNameBSTR) \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Name(oNameBSTR)); \
} \
HRESULT  __stdcall  TIECATIANonSemanticDatumTarget##classe::put_Name(const CATBSTR & iNameBSTR) \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_Name(iNameBSTR)); \
} \
HRESULT  __stdcall  TIECATIANonSemanticDatumTarget##classe::GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj) \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetItem(IDName,RealObj)); \
} \



/* Macro used to link an implementation with an interface */
#define TIE_CATIANonSemanticDatumTarget(classe) \
 \
 \
declare_TIE_CATIANonSemanticDatumTarget(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIANonSemanticDatumTarget##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIANonSemanticDatumTarget,"CATIANonSemanticDatumTarget",CATIANonSemanticDatumTarget::MetaObject(),classe::MetaObject(),TIE); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIANonSemanticDatumTarget(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIECreation(CATIANonSemanticDatumTarget, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIANonSemanticDatumTarget##classe(classe::MetaObject(),CATIANonSemanticDatumTarget::MetaObject(),(void *)CreateTIECATIANonSemanticDatumTarget##classe)



/* Macro used to link an implementation with an interface */
/* This TIE is chained on the implementation object */
#define TIEchain_CATIANonSemanticDatumTarget(classe) \
 \
 \
declare_TIE_CATIANonSemanticDatumTarget(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIANonSemanticDatumTarget##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIANonSemanticDatumTarget,"CATIANonSemanticDatumTarget",CATIANonSemanticDatumTarget::MetaObject(),classe::MetaObject(),TIEchain); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIANonSemanticDatumTarget(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIEchainCreation(CATIANonSemanticDatumTarget, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIANonSemanticDatumTarget##classe(classe::MetaObject(),CATIANonSemanticDatumTarget::MetaObject(),(void *)CreateTIECATIANonSemanticDatumTarget##classe)


/* Macro to switch between BOA and TIE at build time */ 
#ifdef CATSYS_BOA_IS_TIE
#define BOA_CATIANonSemanticDatumTarget(classe) TIE_CATIANonSemanticDatumTarget(classe)
#else
#define BOA_CATIANonSemanticDatumTarget(classe) CATImplementBOA(CATIANonSemanticDatumTarget, classe)
#endif

#endif
