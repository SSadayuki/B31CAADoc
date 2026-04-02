#ifndef __TIE_CATIAUnit
#define __TIE_CATIAUnit

#include <string.h>
#include "CATBaseUnknown.h"
#include "CATMetaClass.h"
#include "CATMacForTie.h"
#include "CATExitJournal.h"
#include "CATIAUnit.h"
#include "JS0DSPA.h"


#ifdef _WINDOWS_SOURCE
#define Exported __declspec(dllexport)
#define Imported __declspec(dllimport)
#else
#define Exported 
#define Imported 
#endif


/* To link an implementation with the interface CATIAUnit */
#define declare_TIE_CATIAUnit(classe) \
 \
 \
class TIECATIAUnit##classe : public CATIAUnit \
{ \
   private: \
      CATDeclareCommonTIEMembers \
   public: \
      CATDeclareTIEMethods(CATIAUnit, classe) \
      CATDeclareIUnknownMethodsForCATBaseUnknownTIE \
      CATDeclareIDispatchMethodsForCATBaseUnknownTIE \
      CATDeclareCATBaseUnknownMethodsForTIE \
      virtual HRESULT __stdcall get_Magnitude(CATBSTR & oMagnitude); \
      virtual HRESULT __stdcall get_Symbol(CATBSTR & oSymbol); \
      virtual HRESULT __stdcall ConvertToMKS(double iValueInThisUnit, double & oValueInMKS); \
      virtual HRESULT __stdcall ConvertFromMKS(double iValueInMKS, double & oValueInThisUnit); \
      virtual HRESULT __stdcall ConvertToStorageUnit(double iValueInThisUnit, double & oValueInStorageUnit); \
      virtual HRESULT __stdcall ConvertFromStorageUnit(double iValueInStorageUnit, double & oValueInThisUnit); \
      virtual HRESULT  __stdcall get_Application(CATIAApplication *& oApplication); \
      virtual HRESULT  __stdcall get_Parent(CATBaseDispatch *& oParent); \
      virtual HRESULT  __stdcall get_Name(CATBSTR & oNameBSTR); \
      virtual HRESULT  __stdcall put_Name(const CATBSTR & iNameBSTR); \
      virtual HRESULT  __stdcall GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj); \
};



#define ENVTIEdeclare_CATIAUnit(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
virtual HRESULT __stdcall get_Magnitude(CATBSTR & oMagnitude); \
virtual HRESULT __stdcall get_Symbol(CATBSTR & oSymbol); \
virtual HRESULT __stdcall ConvertToMKS(double iValueInThisUnit, double & oValueInMKS); \
virtual HRESULT __stdcall ConvertFromMKS(double iValueInMKS, double & oValueInThisUnit); \
virtual HRESULT __stdcall ConvertToStorageUnit(double iValueInThisUnit, double & oValueInStorageUnit); \
virtual HRESULT __stdcall ConvertFromStorageUnit(double iValueInStorageUnit, double & oValueInThisUnit); \
virtual HRESULT  __stdcall get_Application(CATIAApplication *& oApplication); \
virtual HRESULT  __stdcall get_Parent(CATBaseDispatch *& oParent); \
virtual HRESULT  __stdcall get_Name(CATBSTR & oNameBSTR); \
virtual HRESULT  __stdcall put_Name(const CATBSTR & iNameBSTR); \
virtual HRESULT  __stdcall GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj); \


#define ENVTIEdefine_CATIAUnit(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
HRESULT __stdcall  ENVTIEName::get_Magnitude(CATBSTR & oMagnitude) \
{ \
return (ENVTIECALL(CATIAUnit,ENVTIETypeLetter,ENVTIELetter)get_Magnitude(oMagnitude)); \
} \
HRESULT __stdcall  ENVTIEName::get_Symbol(CATBSTR & oSymbol) \
{ \
return (ENVTIECALL(CATIAUnit,ENVTIETypeLetter,ENVTIELetter)get_Symbol(oSymbol)); \
} \
HRESULT __stdcall  ENVTIEName::ConvertToMKS(double iValueInThisUnit, double & oValueInMKS) \
{ \
return (ENVTIECALL(CATIAUnit,ENVTIETypeLetter,ENVTIELetter)ConvertToMKS(iValueInThisUnit,oValueInMKS)); \
} \
HRESULT __stdcall  ENVTIEName::ConvertFromMKS(double iValueInMKS, double & oValueInThisUnit) \
{ \
return (ENVTIECALL(CATIAUnit,ENVTIETypeLetter,ENVTIELetter)ConvertFromMKS(iValueInMKS,oValueInThisUnit)); \
} \
HRESULT __stdcall  ENVTIEName::ConvertToStorageUnit(double iValueInThisUnit, double & oValueInStorageUnit) \
{ \
return (ENVTIECALL(CATIAUnit,ENVTIETypeLetter,ENVTIELetter)ConvertToStorageUnit(iValueInThisUnit,oValueInStorageUnit)); \
} \
HRESULT __stdcall  ENVTIEName::ConvertFromStorageUnit(double iValueInStorageUnit, double & oValueInThisUnit) \
{ \
return (ENVTIECALL(CATIAUnit,ENVTIETypeLetter,ENVTIELetter)ConvertFromStorageUnit(iValueInStorageUnit,oValueInThisUnit)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Application(CATIAApplication *& oApplication) \
{ \
return (ENVTIECALL(CATIAUnit,ENVTIETypeLetter,ENVTIELetter)get_Application(oApplication)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Parent(CATBaseDispatch *& oParent) \
{ \
return (ENVTIECALL(CATIAUnit,ENVTIETypeLetter,ENVTIELetter)get_Parent(oParent)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Name(CATBSTR & oNameBSTR) \
{ \
return (ENVTIECALL(CATIAUnit,ENVTIETypeLetter,ENVTIELetter)get_Name(oNameBSTR)); \
} \
HRESULT  __stdcall  ENVTIEName::put_Name(const CATBSTR & iNameBSTR) \
{ \
return (ENVTIECALL(CATIAUnit,ENVTIETypeLetter,ENVTIELetter)put_Name(iNameBSTR)); \
} \
HRESULT  __stdcall  ENVTIEName::GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj) \
{ \
return (ENVTIECALL(CATIAUnit,ENVTIETypeLetter,ENVTIELetter)GetItem(IDName,RealObj)); \
} \


/* Name of the TIE class */
#define class_TIE_CATIAUnit(classe)    TIECATIAUnit##classe


/* Common methods inside a TIE */
#define common_TIE_CATIAUnit(classe) \
 \
 \
/* Static initialization */ \
CATDefineCommonTIEMembers(CATIAUnit, classe) \
 \
 \
CATImplementTIEMethods(CATIAUnit, classe) \
CATImplementIUnknownMethodsForCATBaseUnknownTIE(CATIAUnit, classe, 2) \
CATImplementIDispatchMethodsForCATBaseUnknownTIE(CATIAUnit, classe) \
CATImplementCATBaseUnknownMethodsForTIE(CATIAUnit, classe) \
 \
HRESULT __stdcall  TIECATIAUnit##classe::get_Magnitude(CATBSTR & oMagnitude) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,1,&_Trac2,&oMagnitude); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Magnitude(oMagnitude); \
   ExitAfterCall(this,1,_Trac2,&_ret_arg,&oMagnitude); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAUnit##classe::get_Symbol(CATBSTR & oSymbol) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,2,&_Trac2,&oSymbol); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Symbol(oSymbol); \
   ExitAfterCall(this,2,_Trac2,&_ret_arg,&oSymbol); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAUnit##classe::ConvertToMKS(double iValueInThisUnit, double & oValueInMKS) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,3,&_Trac2,&iValueInThisUnit,&oValueInMKS); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->ConvertToMKS(iValueInThisUnit,oValueInMKS); \
   ExitAfterCall(this,3,_Trac2,&_ret_arg,&iValueInThisUnit,&oValueInMKS); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAUnit##classe::ConvertFromMKS(double iValueInMKS, double & oValueInThisUnit) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,4,&_Trac2,&iValueInMKS,&oValueInThisUnit); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->ConvertFromMKS(iValueInMKS,oValueInThisUnit); \
   ExitAfterCall(this,4,_Trac2,&_ret_arg,&iValueInMKS,&oValueInThisUnit); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAUnit##classe::ConvertToStorageUnit(double iValueInThisUnit, double & oValueInStorageUnit) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,5,&_Trac2,&iValueInThisUnit,&oValueInStorageUnit); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->ConvertToStorageUnit(iValueInThisUnit,oValueInStorageUnit); \
   ExitAfterCall(this,5,_Trac2,&_ret_arg,&iValueInThisUnit,&oValueInStorageUnit); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAUnit##classe::ConvertFromStorageUnit(double iValueInStorageUnit, double & oValueInThisUnit) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,6,&_Trac2,&iValueInStorageUnit,&oValueInThisUnit); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->ConvertFromStorageUnit(iValueInStorageUnit,oValueInThisUnit); \
   ExitAfterCall(this,6,_Trac2,&_ret_arg,&iValueInStorageUnit,&oValueInThisUnit); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAUnit##classe::get_Application(CATIAApplication *& oApplication) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,7,&_Trac2,&oApplication); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Application(oApplication); \
   ExitAfterCall(this,7,_Trac2,&_ret_arg,&oApplication); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAUnit##classe::get_Parent(CATBaseDispatch *& oParent) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,8,&_Trac2,&oParent); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Parent(oParent); \
   ExitAfterCall(this,8,_Trac2,&_ret_arg,&oParent); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAUnit##classe::get_Name(CATBSTR & oNameBSTR) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,9,&_Trac2,&oNameBSTR); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Name(oNameBSTR); \
   ExitAfterCall(this,9,_Trac2,&_ret_arg,&oNameBSTR); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAUnit##classe::put_Name(const CATBSTR & iNameBSTR) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,10,&_Trac2,&iNameBSTR); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_Name(iNameBSTR); \
   ExitAfterCall(this,10,_Trac2,&_ret_arg,&iNameBSTR); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAUnit##classe::GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,11,&_Trac2,&IDName,&RealObj); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetItem(IDName,RealObj); \
   ExitAfterCall(this,11,_Trac2,&_ret_arg,&IDName,&RealObj); \
   return(_ret_arg); \
} \



/* Macro used to link an implementation with an interface */
#define TIE_CATIAUnit(classe) \
 \
 \
declare_TIE_CATIAUnit(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIAUnit##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIAUnit,"CATIAUnit",CATIAUnit::MetaObject(),classe::MetaObject(),TIE); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIAUnit(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIECreation(CATIAUnit, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIAUnit##classe(classe::MetaObject(),CATIAUnit::MetaObject(),(void *)CreateTIECATIAUnit##classe)



/* Macro used to link an implementation with an interface */
/* This TIE is chained on the implementation object */
#define TIEchain_CATIAUnit(classe) \
 \
 \
declare_TIE_CATIAUnit(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIAUnit##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIAUnit,"CATIAUnit",CATIAUnit::MetaObject(),classe::MetaObject(),TIEchain); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIAUnit(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIEchainCreation(CATIAUnit, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIAUnit##classe(classe::MetaObject(),CATIAUnit::MetaObject(),(void *)CreateTIECATIAUnit##classe)


/* Macro to switch between BOA and TIE at build time */ 
#ifdef CATSYS_BOA_IS_TIE
#define BOA_CATIAUnit(classe) TIE_CATIAUnit(classe)
#else
#define BOA_CATIAUnit(classe) CATImplementBOA(CATIAUnit, classe)
#endif

#endif
