#ifndef __TIE_CATIADimensionLimit
#define __TIE_CATIADimensionLimit

#include <string.h>
#include "CATBaseUnknown.h"
#include "CATMetaClass.h"
#include "CATMacForTie.h"
#include "CATIADimensionLimit.h"
#include "JS0DSPA.h"


#ifdef _WINDOWS_SOURCE
#define Exported __declspec(dllexport)
#define Imported __declspec(dllimport)
#else
#define Exported 
#define Imported 
#endif


/* To link an implementation with the interface CATIADimensionLimit */
#define declare_TIE_CATIADimensionLimit(classe) \
 \
 \
class TIECATIADimensionLimit##classe : public CATIADimensionLimit \
{ \
   private: \
      CATDeclareCommonTIEMembers \
   public: \
      CATDeclareTIEMethods(CATIADimensionLimit, classe) \
      CATDeclareIUnknownMethodsForCATBaseUnknownTIE \
      CATDeclareIDispatchMethodsForCATBaseUnknownTIE \
      CATDeclareCATBaseUnknownMethodsForTIE \
      virtual HRESULT __stdcall get_DimensionLimitType(CATBSTR & oDimLimitType); \
      virtual HRESULT __stdcall put_DimensionLimitType(const CATBSTR & iDimLimitType); \
      virtual HRESULT __stdcall Limits(double & oBottom, double & oUp); \
      virtual HRESULT __stdcall PutLimits(double iBottom, double iUp); \
      virtual HRESULT __stdcall get_Modifier(CATBSTR & oModifier); \
      virtual HRESULT __stdcall put_Modifier(const CATBSTR & iModifier); \
      virtual HRESULT __stdcall get_TabulatedLimit(CATBSTR & oTabulatedLimit); \
      virtual HRESULT __stdcall put_TabulatedLimit(const CATBSTR & iTabulatedLimit); \
      virtual HRESULT __stdcall get_Nominalvalue(double & oNominalvalue); \
      virtual HRESULT __stdcall get_SymetricValue(CAT_VARIANT_BOOL & obSymetric); \
      virtual HRESULT __stdcall put_SymetricValue(CAT_VARIANT_BOOL ibSymetric); \
      virtual HRESULT  __stdcall get_Application(CATIAApplication *& oApplication); \
      virtual HRESULT  __stdcall get_Parent(CATBaseDispatch *& oParent); \
      virtual HRESULT  __stdcall get_Name(CATBSTR & oNameBSTR); \
      virtual HRESULT  __stdcall put_Name(const CATBSTR & iNameBSTR); \
      virtual HRESULT  __stdcall GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj); \
};



#define ENVTIEdeclare_CATIADimensionLimit(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
virtual HRESULT __stdcall get_DimensionLimitType(CATBSTR & oDimLimitType); \
virtual HRESULT __stdcall put_DimensionLimitType(const CATBSTR & iDimLimitType); \
virtual HRESULT __stdcall Limits(double & oBottom, double & oUp); \
virtual HRESULT __stdcall PutLimits(double iBottom, double iUp); \
virtual HRESULT __stdcall get_Modifier(CATBSTR & oModifier); \
virtual HRESULT __stdcall put_Modifier(const CATBSTR & iModifier); \
virtual HRESULT __stdcall get_TabulatedLimit(CATBSTR & oTabulatedLimit); \
virtual HRESULT __stdcall put_TabulatedLimit(const CATBSTR & iTabulatedLimit); \
virtual HRESULT __stdcall get_Nominalvalue(double & oNominalvalue); \
virtual HRESULT __stdcall get_SymetricValue(CAT_VARIANT_BOOL & obSymetric); \
virtual HRESULT __stdcall put_SymetricValue(CAT_VARIANT_BOOL ibSymetric); \
virtual HRESULT  __stdcall get_Application(CATIAApplication *& oApplication); \
virtual HRESULT  __stdcall get_Parent(CATBaseDispatch *& oParent); \
virtual HRESULT  __stdcall get_Name(CATBSTR & oNameBSTR); \
virtual HRESULT  __stdcall put_Name(const CATBSTR & iNameBSTR); \
virtual HRESULT  __stdcall GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj); \


#define ENVTIEdefine_CATIADimensionLimit(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
HRESULT __stdcall  ENVTIEName::get_DimensionLimitType(CATBSTR & oDimLimitType) \
{ \
return (ENVTIECALL(CATIADimensionLimit,ENVTIETypeLetter,ENVTIELetter)get_DimensionLimitType(oDimLimitType)); \
} \
HRESULT __stdcall  ENVTIEName::put_DimensionLimitType(const CATBSTR & iDimLimitType) \
{ \
return (ENVTIECALL(CATIADimensionLimit,ENVTIETypeLetter,ENVTIELetter)put_DimensionLimitType(iDimLimitType)); \
} \
HRESULT __stdcall  ENVTIEName::Limits(double & oBottom, double & oUp) \
{ \
return (ENVTIECALL(CATIADimensionLimit,ENVTIETypeLetter,ENVTIELetter)Limits(oBottom,oUp)); \
} \
HRESULT __stdcall  ENVTIEName::PutLimits(double iBottom, double iUp) \
{ \
return (ENVTIECALL(CATIADimensionLimit,ENVTIETypeLetter,ENVTIELetter)PutLimits(iBottom,iUp)); \
} \
HRESULT __stdcall  ENVTIEName::get_Modifier(CATBSTR & oModifier) \
{ \
return (ENVTIECALL(CATIADimensionLimit,ENVTIETypeLetter,ENVTIELetter)get_Modifier(oModifier)); \
} \
HRESULT __stdcall  ENVTIEName::put_Modifier(const CATBSTR & iModifier) \
{ \
return (ENVTIECALL(CATIADimensionLimit,ENVTIETypeLetter,ENVTIELetter)put_Modifier(iModifier)); \
} \
HRESULT __stdcall  ENVTIEName::get_TabulatedLimit(CATBSTR & oTabulatedLimit) \
{ \
return (ENVTIECALL(CATIADimensionLimit,ENVTIETypeLetter,ENVTIELetter)get_TabulatedLimit(oTabulatedLimit)); \
} \
HRESULT __stdcall  ENVTIEName::put_TabulatedLimit(const CATBSTR & iTabulatedLimit) \
{ \
return (ENVTIECALL(CATIADimensionLimit,ENVTIETypeLetter,ENVTIELetter)put_TabulatedLimit(iTabulatedLimit)); \
} \
HRESULT __stdcall  ENVTIEName::get_Nominalvalue(double & oNominalvalue) \
{ \
return (ENVTIECALL(CATIADimensionLimit,ENVTIETypeLetter,ENVTIELetter)get_Nominalvalue(oNominalvalue)); \
} \
HRESULT __stdcall  ENVTIEName::get_SymetricValue(CAT_VARIANT_BOOL & obSymetric) \
{ \
return (ENVTIECALL(CATIADimensionLimit,ENVTIETypeLetter,ENVTIELetter)get_SymetricValue(obSymetric)); \
} \
HRESULT __stdcall  ENVTIEName::put_SymetricValue(CAT_VARIANT_BOOL ibSymetric) \
{ \
return (ENVTIECALL(CATIADimensionLimit,ENVTIETypeLetter,ENVTIELetter)put_SymetricValue(ibSymetric)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Application(CATIAApplication *& oApplication) \
{ \
return (ENVTIECALL(CATIADimensionLimit,ENVTIETypeLetter,ENVTIELetter)get_Application(oApplication)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Parent(CATBaseDispatch *& oParent) \
{ \
return (ENVTIECALL(CATIADimensionLimit,ENVTIETypeLetter,ENVTIELetter)get_Parent(oParent)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Name(CATBSTR & oNameBSTR) \
{ \
return (ENVTIECALL(CATIADimensionLimit,ENVTIETypeLetter,ENVTIELetter)get_Name(oNameBSTR)); \
} \
HRESULT  __stdcall  ENVTIEName::put_Name(const CATBSTR & iNameBSTR) \
{ \
return (ENVTIECALL(CATIADimensionLimit,ENVTIETypeLetter,ENVTIELetter)put_Name(iNameBSTR)); \
} \
HRESULT  __stdcall  ENVTIEName::GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj) \
{ \
return (ENVTIECALL(CATIADimensionLimit,ENVTIETypeLetter,ENVTIELetter)GetItem(IDName,RealObj)); \
} \


/* Name of the TIE class */
#define class_TIE_CATIADimensionLimit(classe)    TIECATIADimensionLimit##classe


/* Common methods inside a TIE */
#define common_TIE_CATIADimensionLimit(classe) \
 \
 \
/* Static initialization */ \
CATDefineCommonTIEMembers(CATIADimensionLimit, classe) \
 \
 \
CATImplementTIEMethods(CATIADimensionLimit, classe) \
CATImplementIUnknownMethodsForCATBaseUnknownTIE(CATIADimensionLimit, classe, 2) \
CATImplementIDispatchMethodsForCATBaseUnknownTIE(CATIADimensionLimit, classe) \
CATImplementCATBaseUnknownMethodsForTIE(CATIADimensionLimit, classe) \
 \
HRESULT __stdcall  TIECATIADimensionLimit##classe::get_DimensionLimitType(CATBSTR & oDimLimitType) \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_DimensionLimitType(oDimLimitType)); \
} \
HRESULT __stdcall  TIECATIADimensionLimit##classe::put_DimensionLimitType(const CATBSTR & iDimLimitType) \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_DimensionLimitType(iDimLimitType)); \
} \
HRESULT __stdcall  TIECATIADimensionLimit##classe::Limits(double & oBottom, double & oUp) \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->Limits(oBottom,oUp)); \
} \
HRESULT __stdcall  TIECATIADimensionLimit##classe::PutLimits(double iBottom, double iUp) \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->PutLimits(iBottom,iUp)); \
} \
HRESULT __stdcall  TIECATIADimensionLimit##classe::get_Modifier(CATBSTR & oModifier) \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Modifier(oModifier)); \
} \
HRESULT __stdcall  TIECATIADimensionLimit##classe::put_Modifier(const CATBSTR & iModifier) \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_Modifier(iModifier)); \
} \
HRESULT __stdcall  TIECATIADimensionLimit##classe::get_TabulatedLimit(CATBSTR & oTabulatedLimit) \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_TabulatedLimit(oTabulatedLimit)); \
} \
HRESULT __stdcall  TIECATIADimensionLimit##classe::put_TabulatedLimit(const CATBSTR & iTabulatedLimit) \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_TabulatedLimit(iTabulatedLimit)); \
} \
HRESULT __stdcall  TIECATIADimensionLimit##classe::get_Nominalvalue(double & oNominalvalue) \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Nominalvalue(oNominalvalue)); \
} \
HRESULT __stdcall  TIECATIADimensionLimit##classe::get_SymetricValue(CAT_VARIANT_BOOL & obSymetric) \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_SymetricValue(obSymetric)); \
} \
HRESULT __stdcall  TIECATIADimensionLimit##classe::put_SymetricValue(CAT_VARIANT_BOOL ibSymetric) \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_SymetricValue(ibSymetric)); \
} \
HRESULT  __stdcall  TIECATIADimensionLimit##classe::get_Application(CATIAApplication *& oApplication) \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Application(oApplication)); \
} \
HRESULT  __stdcall  TIECATIADimensionLimit##classe::get_Parent(CATBaseDispatch *& oParent) \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Parent(oParent)); \
} \
HRESULT  __stdcall  TIECATIADimensionLimit##classe::get_Name(CATBSTR & oNameBSTR) \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Name(oNameBSTR)); \
} \
HRESULT  __stdcall  TIECATIADimensionLimit##classe::put_Name(const CATBSTR & iNameBSTR) \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_Name(iNameBSTR)); \
} \
HRESULT  __stdcall  TIECATIADimensionLimit##classe::GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj) \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetItem(IDName,RealObj)); \
} \



/* Macro used to link an implementation with an interface */
#define TIE_CATIADimensionLimit(classe) \
 \
 \
declare_TIE_CATIADimensionLimit(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIADimensionLimit##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIADimensionLimit,"CATIADimensionLimit",CATIADimensionLimit::MetaObject(),classe::MetaObject(),TIE); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIADimensionLimit(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIECreation(CATIADimensionLimit, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIADimensionLimit##classe(classe::MetaObject(),CATIADimensionLimit::MetaObject(),(void *)CreateTIECATIADimensionLimit##classe)



/* Macro used to link an implementation with an interface */
/* This TIE is chained on the implementation object */
#define TIEchain_CATIADimensionLimit(classe) \
 \
 \
declare_TIE_CATIADimensionLimit(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIADimensionLimit##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIADimensionLimit,"CATIADimensionLimit",CATIADimensionLimit::MetaObject(),classe::MetaObject(),TIEchain); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIADimensionLimit(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIEchainCreation(CATIADimensionLimit, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIADimensionLimit##classe(classe::MetaObject(),CATIADimensionLimit::MetaObject(),(void *)CreateTIECATIADimensionLimit##classe)


/* Macro to switch between BOA and TIE at build time */ 
#ifdef CATSYS_BOA_IS_TIE
#define BOA_CATIADimensionLimit(classe) TIE_CATIADimensionLimit(classe)
#else
#define BOA_CATIADimensionLimit(classe) CATImplementBOA(CATIADimensionLimit, classe)
#endif

#endif
