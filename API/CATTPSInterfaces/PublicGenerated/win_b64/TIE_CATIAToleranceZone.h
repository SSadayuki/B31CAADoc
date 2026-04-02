#ifndef __TIE_CATIAToleranceZone
#define __TIE_CATIAToleranceZone

#include <string.h>
#include "CATBaseUnknown.h"
#include "CATMetaClass.h"
#include "CATMacForTie.h"
#include "CATIAToleranceZone.h"
#include "JS0DSPA.h"


#ifdef _WINDOWS_SOURCE
#define Exported __declspec(dllexport)
#define Imported __declspec(dllimport)
#else
#define Exported 
#define Imported 
#endif


/* To link an implementation with the interface CATIAToleranceZone */
#define declare_TIE_CATIAToleranceZone(classe) \
 \
 \
class TIECATIAToleranceZone##classe : public CATIAToleranceZone \
{ \
   private: \
      CATDeclareCommonTIEMembers \
   public: \
      CATDeclareTIEMethods(CATIAToleranceZone, classe) \
      CATDeclareIUnknownMethodsForCATBaseUnknownTIE \
      CATDeclareIDispatchMethodsForCATBaseUnknownTIE \
      CATDeclareCATBaseUnknownMethodsForTIE \
      virtual HRESULT __stdcall get_Value(double & oValue); \
      virtual HRESULT __stdcall put_Value(double iValue); \
      virtual HRESULT __stdcall get_Form(CATBSTR & oForm); \
      virtual HRESULT __stdcall put_Form(const CATBSTR & iForm); \
      virtual HRESULT  __stdcall get_Application(CATIAApplication *& oApplication); \
      virtual HRESULT  __stdcall get_Parent(CATBaseDispatch *& oParent); \
      virtual HRESULT  __stdcall get_Name(CATBSTR & oNameBSTR); \
      virtual HRESULT  __stdcall put_Name(const CATBSTR & iNameBSTR); \
      virtual HRESULT  __stdcall GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj); \
};



#define ENVTIEdeclare_CATIAToleranceZone(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
virtual HRESULT __stdcall get_Value(double & oValue); \
virtual HRESULT __stdcall put_Value(double iValue); \
virtual HRESULT __stdcall get_Form(CATBSTR & oForm); \
virtual HRESULT __stdcall put_Form(const CATBSTR & iForm); \
virtual HRESULT  __stdcall get_Application(CATIAApplication *& oApplication); \
virtual HRESULT  __stdcall get_Parent(CATBaseDispatch *& oParent); \
virtual HRESULT  __stdcall get_Name(CATBSTR & oNameBSTR); \
virtual HRESULT  __stdcall put_Name(const CATBSTR & iNameBSTR); \
virtual HRESULT  __stdcall GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj); \


#define ENVTIEdefine_CATIAToleranceZone(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
HRESULT __stdcall  ENVTIEName::get_Value(double & oValue) \
{ \
return (ENVTIECALL(CATIAToleranceZone,ENVTIETypeLetter,ENVTIELetter)get_Value(oValue)); \
} \
HRESULT __stdcall  ENVTIEName::put_Value(double iValue) \
{ \
return (ENVTIECALL(CATIAToleranceZone,ENVTIETypeLetter,ENVTIELetter)put_Value(iValue)); \
} \
HRESULT __stdcall  ENVTIEName::get_Form(CATBSTR & oForm) \
{ \
return (ENVTIECALL(CATIAToleranceZone,ENVTIETypeLetter,ENVTIELetter)get_Form(oForm)); \
} \
HRESULT __stdcall  ENVTIEName::put_Form(const CATBSTR & iForm) \
{ \
return (ENVTIECALL(CATIAToleranceZone,ENVTIETypeLetter,ENVTIELetter)put_Form(iForm)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Application(CATIAApplication *& oApplication) \
{ \
return (ENVTIECALL(CATIAToleranceZone,ENVTIETypeLetter,ENVTIELetter)get_Application(oApplication)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Parent(CATBaseDispatch *& oParent) \
{ \
return (ENVTIECALL(CATIAToleranceZone,ENVTIETypeLetter,ENVTIELetter)get_Parent(oParent)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Name(CATBSTR & oNameBSTR) \
{ \
return (ENVTIECALL(CATIAToleranceZone,ENVTIETypeLetter,ENVTIELetter)get_Name(oNameBSTR)); \
} \
HRESULT  __stdcall  ENVTIEName::put_Name(const CATBSTR & iNameBSTR) \
{ \
return (ENVTIECALL(CATIAToleranceZone,ENVTIETypeLetter,ENVTIELetter)put_Name(iNameBSTR)); \
} \
HRESULT  __stdcall  ENVTIEName::GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj) \
{ \
return (ENVTIECALL(CATIAToleranceZone,ENVTIETypeLetter,ENVTIELetter)GetItem(IDName,RealObj)); \
} \


/* Name of the TIE class */
#define class_TIE_CATIAToleranceZone(classe)    TIECATIAToleranceZone##classe


/* Common methods inside a TIE */
#define common_TIE_CATIAToleranceZone(classe) \
 \
 \
/* Static initialization */ \
CATDefineCommonTIEMembers(CATIAToleranceZone, classe) \
 \
 \
CATImplementTIEMethods(CATIAToleranceZone, classe) \
CATImplementIUnknownMethodsForCATBaseUnknownTIE(CATIAToleranceZone, classe, 2) \
CATImplementIDispatchMethodsForCATBaseUnknownTIE(CATIAToleranceZone, classe) \
CATImplementCATBaseUnknownMethodsForTIE(CATIAToleranceZone, classe) \
 \
HRESULT __stdcall  TIECATIAToleranceZone##classe::get_Value(double & oValue) \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Value(oValue)); \
} \
HRESULT __stdcall  TIECATIAToleranceZone##classe::put_Value(double iValue) \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_Value(iValue)); \
} \
HRESULT __stdcall  TIECATIAToleranceZone##classe::get_Form(CATBSTR & oForm) \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Form(oForm)); \
} \
HRESULT __stdcall  TIECATIAToleranceZone##classe::put_Form(const CATBSTR & iForm) \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_Form(iForm)); \
} \
HRESULT  __stdcall  TIECATIAToleranceZone##classe::get_Application(CATIAApplication *& oApplication) \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Application(oApplication)); \
} \
HRESULT  __stdcall  TIECATIAToleranceZone##classe::get_Parent(CATBaseDispatch *& oParent) \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Parent(oParent)); \
} \
HRESULT  __stdcall  TIECATIAToleranceZone##classe::get_Name(CATBSTR & oNameBSTR) \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Name(oNameBSTR)); \
} \
HRESULT  __stdcall  TIECATIAToleranceZone##classe::put_Name(const CATBSTR & iNameBSTR) \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_Name(iNameBSTR)); \
} \
HRESULT  __stdcall  TIECATIAToleranceZone##classe::GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj) \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetItem(IDName,RealObj)); \
} \



/* Macro used to link an implementation with an interface */
#define TIE_CATIAToleranceZone(classe) \
 \
 \
declare_TIE_CATIAToleranceZone(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIAToleranceZone##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIAToleranceZone,"CATIAToleranceZone",CATIAToleranceZone::MetaObject(),classe::MetaObject(),TIE); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIAToleranceZone(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIECreation(CATIAToleranceZone, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIAToleranceZone##classe(classe::MetaObject(),CATIAToleranceZone::MetaObject(),(void *)CreateTIECATIAToleranceZone##classe)



/* Macro used to link an implementation with an interface */
/* This TIE is chained on the implementation object */
#define TIEchain_CATIAToleranceZone(classe) \
 \
 \
declare_TIE_CATIAToleranceZone(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIAToleranceZone##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIAToleranceZone,"CATIAToleranceZone",CATIAToleranceZone::MetaObject(),classe::MetaObject(),TIEchain); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIAToleranceZone(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIEchainCreation(CATIAToleranceZone, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIAToleranceZone##classe(classe::MetaObject(),CATIAToleranceZone::MetaObject(),(void *)CreateTIECATIAToleranceZone##classe)


/* Macro to switch between BOA and TIE at build time */ 
#ifdef CATSYS_BOA_IS_TIE
#define BOA_CATIAToleranceZone(classe) TIE_CATIAToleranceZone(classe)
#else
#define BOA_CATIAToleranceZone(classe) CATImplementBOA(CATIAToleranceZone, classe)
#endif

#endif
