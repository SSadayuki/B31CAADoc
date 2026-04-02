#ifndef __TIE_CATIATolerancePerUnitBasisRestrictiveValue
#define __TIE_CATIATolerancePerUnitBasisRestrictiveValue

#include <string.h>
#include "CATBaseUnknown.h"
#include "CATMetaClass.h"
#include "CATMacForTie.h"
#include "CATIATolerancePerUnitBasisRestrictiveValue.h"
#include "JS0DSPA.h"


#ifdef _WINDOWS_SOURCE
#define Exported __declspec(dllexport)
#define Imported __declspec(dllimport)
#else
#define Exported 
#define Imported 
#endif


/* To link an implementation with the interface CATIATolerancePerUnitBasisRestrictiveValue */
#define declare_TIE_CATIATolerancePerUnitBasisRestrictiveValue(classe) \
 \
 \
class TIECATIATolerancePerUnitBasisRestrictiveValue##classe : public CATIATolerancePerUnitBasisRestrictiveValue \
{ \
   private: \
      CATDeclareCommonTIEMembers \
   public: \
      CATDeclareTIEMethods(CATIATolerancePerUnitBasisRestrictiveValue, classe) \
      CATDeclareIUnknownMethodsForCATBaseUnknownTIE \
      CATDeclareIDispatchMethodsForCATBaseUnknownTIE \
      CATDeclareCATBaseUnknownMethodsForTIE \
      virtual HRESULT __stdcall get_Value(double & oValue); \
      virtual HRESULT __stdcall put_Value(double iValue); \
      virtual HRESULT  __stdcall get_Application(CATIAApplication *& oApplication); \
      virtual HRESULT  __stdcall get_Parent(CATBaseDispatch *& oParent); \
      virtual HRESULT  __stdcall get_Name(CATBSTR & oNameBSTR); \
      virtual HRESULT  __stdcall put_Name(const CATBSTR & iNameBSTR); \
      virtual HRESULT  __stdcall GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj); \
};



#define ENVTIEdeclare_CATIATolerancePerUnitBasisRestrictiveValue(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
virtual HRESULT __stdcall get_Value(double & oValue); \
virtual HRESULT __stdcall put_Value(double iValue); \
virtual HRESULT  __stdcall get_Application(CATIAApplication *& oApplication); \
virtual HRESULT  __stdcall get_Parent(CATBaseDispatch *& oParent); \
virtual HRESULT  __stdcall get_Name(CATBSTR & oNameBSTR); \
virtual HRESULT  __stdcall put_Name(const CATBSTR & iNameBSTR); \
virtual HRESULT  __stdcall GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj); \


#define ENVTIEdefine_CATIATolerancePerUnitBasisRestrictiveValue(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
HRESULT __stdcall  ENVTIEName::get_Value(double & oValue) \
{ \
return (ENVTIECALL(CATIATolerancePerUnitBasisRestrictiveValue,ENVTIETypeLetter,ENVTIELetter)get_Value(oValue)); \
} \
HRESULT __stdcall  ENVTIEName::put_Value(double iValue) \
{ \
return (ENVTIECALL(CATIATolerancePerUnitBasisRestrictiveValue,ENVTIETypeLetter,ENVTIELetter)put_Value(iValue)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Application(CATIAApplication *& oApplication) \
{ \
return (ENVTIECALL(CATIATolerancePerUnitBasisRestrictiveValue,ENVTIETypeLetter,ENVTIELetter)get_Application(oApplication)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Parent(CATBaseDispatch *& oParent) \
{ \
return (ENVTIECALL(CATIATolerancePerUnitBasisRestrictiveValue,ENVTIETypeLetter,ENVTIELetter)get_Parent(oParent)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Name(CATBSTR & oNameBSTR) \
{ \
return (ENVTIECALL(CATIATolerancePerUnitBasisRestrictiveValue,ENVTIETypeLetter,ENVTIELetter)get_Name(oNameBSTR)); \
} \
HRESULT  __stdcall  ENVTIEName::put_Name(const CATBSTR & iNameBSTR) \
{ \
return (ENVTIECALL(CATIATolerancePerUnitBasisRestrictiveValue,ENVTIETypeLetter,ENVTIELetter)put_Name(iNameBSTR)); \
} \
HRESULT  __stdcall  ENVTIEName::GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj) \
{ \
return (ENVTIECALL(CATIATolerancePerUnitBasisRestrictiveValue,ENVTIETypeLetter,ENVTIELetter)GetItem(IDName,RealObj)); \
} \


/* Name of the TIE class */
#define class_TIE_CATIATolerancePerUnitBasisRestrictiveValue(classe)    TIECATIATolerancePerUnitBasisRestrictiveValue##classe


/* Common methods inside a TIE */
#define common_TIE_CATIATolerancePerUnitBasisRestrictiveValue(classe) \
 \
 \
/* Static initialization */ \
CATDefineCommonTIEMembers(CATIATolerancePerUnitBasisRestrictiveValue, classe) \
 \
 \
CATImplementTIEMethods(CATIATolerancePerUnitBasisRestrictiveValue, classe) \
CATImplementIUnknownMethodsForCATBaseUnknownTIE(CATIATolerancePerUnitBasisRestrictiveValue, classe, 2) \
CATImplementIDispatchMethodsForCATBaseUnknownTIE(CATIATolerancePerUnitBasisRestrictiveValue, classe) \
CATImplementCATBaseUnknownMethodsForTIE(CATIATolerancePerUnitBasisRestrictiveValue, classe) \
 \
HRESULT __stdcall  TIECATIATolerancePerUnitBasisRestrictiveValue##classe::get_Value(double & oValue) \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Value(oValue)); \
} \
HRESULT __stdcall  TIECATIATolerancePerUnitBasisRestrictiveValue##classe::put_Value(double iValue) \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_Value(iValue)); \
} \
HRESULT  __stdcall  TIECATIATolerancePerUnitBasisRestrictiveValue##classe::get_Application(CATIAApplication *& oApplication) \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Application(oApplication)); \
} \
HRESULT  __stdcall  TIECATIATolerancePerUnitBasisRestrictiveValue##classe::get_Parent(CATBaseDispatch *& oParent) \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Parent(oParent)); \
} \
HRESULT  __stdcall  TIECATIATolerancePerUnitBasisRestrictiveValue##classe::get_Name(CATBSTR & oNameBSTR) \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Name(oNameBSTR)); \
} \
HRESULT  __stdcall  TIECATIATolerancePerUnitBasisRestrictiveValue##classe::put_Name(const CATBSTR & iNameBSTR) \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_Name(iNameBSTR)); \
} \
HRESULT  __stdcall  TIECATIATolerancePerUnitBasisRestrictiveValue##classe::GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj) \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetItem(IDName,RealObj)); \
} \



/* Macro used to link an implementation with an interface */
#define TIE_CATIATolerancePerUnitBasisRestrictiveValue(classe) \
 \
 \
declare_TIE_CATIATolerancePerUnitBasisRestrictiveValue(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIATolerancePerUnitBasisRestrictiveValue##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIATolerancePerUnitBasisRestrictiveValue,"CATIATolerancePerUnitBasisRestrictiveValue",CATIATolerancePerUnitBasisRestrictiveValue::MetaObject(),classe::MetaObject(),TIE); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIATolerancePerUnitBasisRestrictiveValue(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIECreation(CATIATolerancePerUnitBasisRestrictiveValue, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIATolerancePerUnitBasisRestrictiveValue##classe(classe::MetaObject(),CATIATolerancePerUnitBasisRestrictiveValue::MetaObject(),(void *)CreateTIECATIATolerancePerUnitBasisRestrictiveValue##classe)



/* Macro used to link an implementation with an interface */
/* This TIE is chained on the implementation object */
#define TIEchain_CATIATolerancePerUnitBasisRestrictiveValue(classe) \
 \
 \
declare_TIE_CATIATolerancePerUnitBasisRestrictiveValue(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIATolerancePerUnitBasisRestrictiveValue##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIATolerancePerUnitBasisRestrictiveValue,"CATIATolerancePerUnitBasisRestrictiveValue",CATIATolerancePerUnitBasisRestrictiveValue::MetaObject(),classe::MetaObject(),TIEchain); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIATolerancePerUnitBasisRestrictiveValue(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIEchainCreation(CATIATolerancePerUnitBasisRestrictiveValue, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIATolerancePerUnitBasisRestrictiveValue##classe(classe::MetaObject(),CATIATolerancePerUnitBasisRestrictiveValue::MetaObject(),(void *)CreateTIECATIATolerancePerUnitBasisRestrictiveValue##classe)


/* Macro to switch between BOA and TIE at build time */ 
#ifdef CATSYS_BOA_IS_TIE
#define BOA_CATIATolerancePerUnitBasisRestrictiveValue(classe) TIE_CATIATolerancePerUnitBasisRestrictiveValue(classe)
#else
#define BOA_CATIATolerancePerUnitBasisRestrictiveValue(classe) CATImplementBOA(CATIATolerancePerUnitBasisRestrictiveValue, classe)
#endif

#endif
