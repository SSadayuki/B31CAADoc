#ifndef __TIE_CATIAShiftedProfileTolerance
#define __TIE_CATIAShiftedProfileTolerance

#include <string.h>
#include "CATBaseUnknown.h"
#include "CATMetaClass.h"
#include "CATMacForTie.h"
#include "CATIAShiftedProfileTolerance.h"
#include "JS0DSPA.h"


#ifdef _WINDOWS_SOURCE
#define Exported __declspec(dllexport)
#define Imported __declspec(dllimport)
#else
#define Exported 
#define Imported 
#endif


/* To link an implementation with the interface CATIAShiftedProfileTolerance */
#define declare_TIE_CATIAShiftedProfileTolerance(classe) \
 \
 \
class TIECATIAShiftedProfileTolerance##classe : public CATIAShiftedProfileTolerance \
{ \
   private: \
      CATDeclareCommonTIEMembers \
   public: \
      CATDeclareTIEMethods(CATIAShiftedProfileTolerance, classe) \
      CATDeclareIUnknownMethodsForCATBaseUnknownTIE \
      CATDeclareIDispatchMethodsForCATBaseUnknownTIE \
      CATDeclareCATBaseUnknownMethodsForTIE \
      virtual HRESULT __stdcall get_ShiftValue(double & oValue); \
      virtual HRESULT __stdcall put_ShiftValue(double iValue); \
      virtual HRESULT __stdcall GetShiftSide(CATSafeArrayVariant & opPoint); \
      virtual HRESULT __stdcall GetShiftDirection(CATSafeArrayVariant & opDirection); \
      virtual HRESULT  __stdcall get_Application(CATIAApplication *& oApplication); \
      virtual HRESULT  __stdcall get_Parent(CATBaseDispatch *& oParent); \
      virtual HRESULT  __stdcall get_Name(CATBSTR & oNameBSTR); \
      virtual HRESULT  __stdcall put_Name(const CATBSTR & iNameBSTR); \
      virtual HRESULT  __stdcall GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj); \
};



#define ENVTIEdeclare_CATIAShiftedProfileTolerance(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
virtual HRESULT __stdcall get_ShiftValue(double & oValue); \
virtual HRESULT __stdcall put_ShiftValue(double iValue); \
virtual HRESULT __stdcall GetShiftSide(CATSafeArrayVariant & opPoint); \
virtual HRESULT __stdcall GetShiftDirection(CATSafeArrayVariant & opDirection); \
virtual HRESULT  __stdcall get_Application(CATIAApplication *& oApplication); \
virtual HRESULT  __stdcall get_Parent(CATBaseDispatch *& oParent); \
virtual HRESULT  __stdcall get_Name(CATBSTR & oNameBSTR); \
virtual HRESULT  __stdcall put_Name(const CATBSTR & iNameBSTR); \
virtual HRESULT  __stdcall GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj); \


#define ENVTIEdefine_CATIAShiftedProfileTolerance(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
HRESULT __stdcall  ENVTIEName::get_ShiftValue(double & oValue) \
{ \
return (ENVTIECALL(CATIAShiftedProfileTolerance,ENVTIETypeLetter,ENVTIELetter)get_ShiftValue(oValue)); \
} \
HRESULT __stdcall  ENVTIEName::put_ShiftValue(double iValue) \
{ \
return (ENVTIECALL(CATIAShiftedProfileTolerance,ENVTIETypeLetter,ENVTIELetter)put_ShiftValue(iValue)); \
} \
HRESULT __stdcall  ENVTIEName::GetShiftSide(CATSafeArrayVariant & opPoint) \
{ \
return (ENVTIECALL(CATIAShiftedProfileTolerance,ENVTIETypeLetter,ENVTIELetter)GetShiftSide(opPoint)); \
} \
HRESULT __stdcall  ENVTIEName::GetShiftDirection(CATSafeArrayVariant & opDirection) \
{ \
return (ENVTIECALL(CATIAShiftedProfileTolerance,ENVTIETypeLetter,ENVTIELetter)GetShiftDirection(opDirection)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Application(CATIAApplication *& oApplication) \
{ \
return (ENVTIECALL(CATIAShiftedProfileTolerance,ENVTIETypeLetter,ENVTIELetter)get_Application(oApplication)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Parent(CATBaseDispatch *& oParent) \
{ \
return (ENVTIECALL(CATIAShiftedProfileTolerance,ENVTIETypeLetter,ENVTIELetter)get_Parent(oParent)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Name(CATBSTR & oNameBSTR) \
{ \
return (ENVTIECALL(CATIAShiftedProfileTolerance,ENVTIETypeLetter,ENVTIELetter)get_Name(oNameBSTR)); \
} \
HRESULT  __stdcall  ENVTIEName::put_Name(const CATBSTR & iNameBSTR) \
{ \
return (ENVTIECALL(CATIAShiftedProfileTolerance,ENVTIETypeLetter,ENVTIELetter)put_Name(iNameBSTR)); \
} \
HRESULT  __stdcall  ENVTIEName::GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj) \
{ \
return (ENVTIECALL(CATIAShiftedProfileTolerance,ENVTIETypeLetter,ENVTIELetter)GetItem(IDName,RealObj)); \
} \


/* Name of the TIE class */
#define class_TIE_CATIAShiftedProfileTolerance(classe)    TIECATIAShiftedProfileTolerance##classe


/* Common methods inside a TIE */
#define common_TIE_CATIAShiftedProfileTolerance(classe) \
 \
 \
/* Static initialization */ \
CATDefineCommonTIEMembers(CATIAShiftedProfileTolerance, classe) \
 \
 \
CATImplementTIEMethods(CATIAShiftedProfileTolerance, classe) \
CATImplementIUnknownMethodsForCATBaseUnknownTIE(CATIAShiftedProfileTolerance, classe, 2) \
CATImplementIDispatchMethodsForCATBaseUnknownTIE(CATIAShiftedProfileTolerance, classe) \
CATImplementCATBaseUnknownMethodsForTIE(CATIAShiftedProfileTolerance, classe) \
 \
HRESULT __stdcall  TIECATIAShiftedProfileTolerance##classe::get_ShiftValue(double & oValue) \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_ShiftValue(oValue)); \
} \
HRESULT __stdcall  TIECATIAShiftedProfileTolerance##classe::put_ShiftValue(double iValue) \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_ShiftValue(iValue)); \
} \
HRESULT __stdcall  TIECATIAShiftedProfileTolerance##classe::GetShiftSide(CATSafeArrayVariant & opPoint) \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetShiftSide(opPoint)); \
} \
HRESULT __stdcall  TIECATIAShiftedProfileTolerance##classe::GetShiftDirection(CATSafeArrayVariant & opDirection) \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetShiftDirection(opDirection)); \
} \
HRESULT  __stdcall  TIECATIAShiftedProfileTolerance##classe::get_Application(CATIAApplication *& oApplication) \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Application(oApplication)); \
} \
HRESULT  __stdcall  TIECATIAShiftedProfileTolerance##classe::get_Parent(CATBaseDispatch *& oParent) \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Parent(oParent)); \
} \
HRESULT  __stdcall  TIECATIAShiftedProfileTolerance##classe::get_Name(CATBSTR & oNameBSTR) \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Name(oNameBSTR)); \
} \
HRESULT  __stdcall  TIECATIAShiftedProfileTolerance##classe::put_Name(const CATBSTR & iNameBSTR) \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_Name(iNameBSTR)); \
} \
HRESULT  __stdcall  TIECATIAShiftedProfileTolerance##classe::GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj) \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetItem(IDName,RealObj)); \
} \



/* Macro used to link an implementation with an interface */
#define TIE_CATIAShiftedProfileTolerance(classe) \
 \
 \
declare_TIE_CATIAShiftedProfileTolerance(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIAShiftedProfileTolerance##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIAShiftedProfileTolerance,"CATIAShiftedProfileTolerance",CATIAShiftedProfileTolerance::MetaObject(),classe::MetaObject(),TIE); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIAShiftedProfileTolerance(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIECreation(CATIAShiftedProfileTolerance, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIAShiftedProfileTolerance##classe(classe::MetaObject(),CATIAShiftedProfileTolerance::MetaObject(),(void *)CreateTIECATIAShiftedProfileTolerance##classe)



/* Macro used to link an implementation with an interface */
/* This TIE is chained on the implementation object */
#define TIEchain_CATIAShiftedProfileTolerance(classe) \
 \
 \
declare_TIE_CATIAShiftedProfileTolerance(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIAShiftedProfileTolerance##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIAShiftedProfileTolerance,"CATIAShiftedProfileTolerance",CATIAShiftedProfileTolerance::MetaObject(),classe::MetaObject(),TIEchain); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIAShiftedProfileTolerance(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIEchainCreation(CATIAShiftedProfileTolerance, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIAShiftedProfileTolerance##classe(classe::MetaObject(),CATIAShiftedProfileTolerance::MetaObject(),(void *)CreateTIECATIAShiftedProfileTolerance##classe)


/* Macro to switch between BOA and TIE at build time */ 
#ifdef CATSYS_BOA_IS_TIE
#define BOA_CATIAShiftedProfileTolerance(classe) TIE_CATIAShiftedProfileTolerance(classe)
#else
#define BOA_CATIAShiftedProfileTolerance(classe) CATImplementBOA(CATIAShiftedProfileTolerance, classe)
#endif

#endif
