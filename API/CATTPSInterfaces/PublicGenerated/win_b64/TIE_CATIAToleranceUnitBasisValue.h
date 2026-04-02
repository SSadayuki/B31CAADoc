#ifndef __TIE_CATIAToleranceUnitBasisValue
#define __TIE_CATIAToleranceUnitBasisValue

#include <string.h>
#include "CATBaseUnknown.h"
#include "CATMetaClass.h"
#include "CATMacForTie.h"
#include "CATIAToleranceUnitBasisValue.h"
#include "JS0DSPA.h"


#ifdef _WINDOWS_SOURCE
#define Exported __declspec(dllexport)
#define Imported __declspec(dllimport)
#else
#define Exported 
#define Imported 
#endif


/* To link an implementation with the interface CATIAToleranceUnitBasisValue */
#define declare_TIE_CATIAToleranceUnitBasisValue(classe) \
 \
 \
class TIECATIAToleranceUnitBasisValue##classe : public CATIAToleranceUnitBasisValue \
{ \
   private: \
      CATDeclareCommonTIEMembers \
   public: \
      CATDeclareTIEMethods(CATIAToleranceUnitBasisValue, classe) \
      CATDeclareIUnknownMethodsForCATBaseUnknownTIE \
      CATDeclareIDispatchMethodsForCATBaseUnknownTIE \
      CATDeclareCATBaseUnknownMethodsForTIE \
      virtual HRESULT __stdcall Values(double & oValue1, double & oValue2); \
      virtual HRESULT __stdcall SetValues(double iValue1, double iValue2); \
      virtual HRESULT  __stdcall get_Application(CATIAApplication *& oApplication); \
      virtual HRESULT  __stdcall get_Parent(CATBaseDispatch *& oParent); \
      virtual HRESULT  __stdcall get_Name(CATBSTR & oNameBSTR); \
      virtual HRESULT  __stdcall put_Name(const CATBSTR & iNameBSTR); \
      virtual HRESULT  __stdcall GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj); \
};



#define ENVTIEdeclare_CATIAToleranceUnitBasisValue(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
virtual HRESULT __stdcall Values(double & oValue1, double & oValue2); \
virtual HRESULT __stdcall SetValues(double iValue1, double iValue2); \
virtual HRESULT  __stdcall get_Application(CATIAApplication *& oApplication); \
virtual HRESULT  __stdcall get_Parent(CATBaseDispatch *& oParent); \
virtual HRESULT  __stdcall get_Name(CATBSTR & oNameBSTR); \
virtual HRESULT  __stdcall put_Name(const CATBSTR & iNameBSTR); \
virtual HRESULT  __stdcall GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj); \


#define ENVTIEdefine_CATIAToleranceUnitBasisValue(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
HRESULT __stdcall  ENVTIEName::Values(double & oValue1, double & oValue2) \
{ \
return (ENVTIECALL(CATIAToleranceUnitBasisValue,ENVTIETypeLetter,ENVTIELetter)Values(oValue1,oValue2)); \
} \
HRESULT __stdcall  ENVTIEName::SetValues(double iValue1, double iValue2) \
{ \
return (ENVTIECALL(CATIAToleranceUnitBasisValue,ENVTIETypeLetter,ENVTIELetter)SetValues(iValue1,iValue2)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Application(CATIAApplication *& oApplication) \
{ \
return (ENVTIECALL(CATIAToleranceUnitBasisValue,ENVTIETypeLetter,ENVTIELetter)get_Application(oApplication)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Parent(CATBaseDispatch *& oParent) \
{ \
return (ENVTIECALL(CATIAToleranceUnitBasisValue,ENVTIETypeLetter,ENVTIELetter)get_Parent(oParent)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Name(CATBSTR & oNameBSTR) \
{ \
return (ENVTIECALL(CATIAToleranceUnitBasisValue,ENVTIETypeLetter,ENVTIELetter)get_Name(oNameBSTR)); \
} \
HRESULT  __stdcall  ENVTIEName::put_Name(const CATBSTR & iNameBSTR) \
{ \
return (ENVTIECALL(CATIAToleranceUnitBasisValue,ENVTIETypeLetter,ENVTIELetter)put_Name(iNameBSTR)); \
} \
HRESULT  __stdcall  ENVTIEName::GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj) \
{ \
return (ENVTIECALL(CATIAToleranceUnitBasisValue,ENVTIETypeLetter,ENVTIELetter)GetItem(IDName,RealObj)); \
} \


/* Name of the TIE class */
#define class_TIE_CATIAToleranceUnitBasisValue(classe)    TIECATIAToleranceUnitBasisValue##classe


/* Common methods inside a TIE */
#define common_TIE_CATIAToleranceUnitBasisValue(classe) \
 \
 \
/* Static initialization */ \
CATDefineCommonTIEMembers(CATIAToleranceUnitBasisValue, classe) \
 \
 \
CATImplementTIEMethods(CATIAToleranceUnitBasisValue, classe) \
CATImplementIUnknownMethodsForCATBaseUnknownTIE(CATIAToleranceUnitBasisValue, classe, 2) \
CATImplementIDispatchMethodsForCATBaseUnknownTIE(CATIAToleranceUnitBasisValue, classe) \
CATImplementCATBaseUnknownMethodsForTIE(CATIAToleranceUnitBasisValue, classe) \
 \
HRESULT __stdcall  TIECATIAToleranceUnitBasisValue##classe::Values(double & oValue1, double & oValue2) \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->Values(oValue1,oValue2)); \
} \
HRESULT __stdcall  TIECATIAToleranceUnitBasisValue##classe::SetValues(double iValue1, double iValue2) \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetValues(iValue1,iValue2)); \
} \
HRESULT  __stdcall  TIECATIAToleranceUnitBasisValue##classe::get_Application(CATIAApplication *& oApplication) \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Application(oApplication)); \
} \
HRESULT  __stdcall  TIECATIAToleranceUnitBasisValue##classe::get_Parent(CATBaseDispatch *& oParent) \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Parent(oParent)); \
} \
HRESULT  __stdcall  TIECATIAToleranceUnitBasisValue##classe::get_Name(CATBSTR & oNameBSTR) \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Name(oNameBSTR)); \
} \
HRESULT  __stdcall  TIECATIAToleranceUnitBasisValue##classe::put_Name(const CATBSTR & iNameBSTR) \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_Name(iNameBSTR)); \
} \
HRESULT  __stdcall  TIECATIAToleranceUnitBasisValue##classe::GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj) \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetItem(IDName,RealObj)); \
} \



/* Macro used to link an implementation with an interface */
#define TIE_CATIAToleranceUnitBasisValue(classe) \
 \
 \
declare_TIE_CATIAToleranceUnitBasisValue(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIAToleranceUnitBasisValue##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIAToleranceUnitBasisValue,"CATIAToleranceUnitBasisValue",CATIAToleranceUnitBasisValue::MetaObject(),classe::MetaObject(),TIE); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIAToleranceUnitBasisValue(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIECreation(CATIAToleranceUnitBasisValue, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIAToleranceUnitBasisValue##classe(classe::MetaObject(),CATIAToleranceUnitBasisValue::MetaObject(),(void *)CreateTIECATIAToleranceUnitBasisValue##classe)



/* Macro used to link an implementation with an interface */
/* This TIE is chained on the implementation object */
#define TIEchain_CATIAToleranceUnitBasisValue(classe) \
 \
 \
declare_TIE_CATIAToleranceUnitBasisValue(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIAToleranceUnitBasisValue##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIAToleranceUnitBasisValue,"CATIAToleranceUnitBasisValue",CATIAToleranceUnitBasisValue::MetaObject(),classe::MetaObject(),TIEchain); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIAToleranceUnitBasisValue(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIEchainCreation(CATIAToleranceUnitBasisValue, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIAToleranceUnitBasisValue##classe(classe::MetaObject(),CATIAToleranceUnitBasisValue::MetaObject(),(void *)CreateTIECATIAToleranceUnitBasisValue##classe)


/* Macro to switch between BOA and TIE at build time */ 
#ifdef CATSYS_BOA_IS_TIE
#define BOA_CATIAToleranceUnitBasisValue(classe) TIE_CATIAToleranceUnitBasisValue(classe)
#else
#define BOA_CATIAToleranceUnitBasisValue(classe) CATImplementBOA(CATIAToleranceUnitBasisValue, classe)
#endif

#endif
