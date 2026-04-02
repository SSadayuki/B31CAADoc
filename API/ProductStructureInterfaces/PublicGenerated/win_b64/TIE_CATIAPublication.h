#ifndef __TIE_CATIAPublication
#define __TIE_CATIAPublication

#include <string.h>
#include "CATBaseUnknown.h"
#include "CATMetaClass.h"
#include "CATMacForTie.h"
#include "CATIAPublication.h"
#include "JS0DSPA.h"


#ifdef _WINDOWS_SOURCE
#define Exported __declspec(dllexport)
#define Imported __declspec(dllimport)
#else
#define Exported 
#define Imported 
#endif


/* To link an implementation with the interface CATIAPublication */
#define declare_TIE_CATIAPublication(classe) \
 \
 \
class TIECATIAPublication##classe : public CATIAPublication \
{ \
   private: \
      CATDeclareCommonTIEMembers \
   public: \
      CATDeclareTIEMethods(CATIAPublication, classe) \
      CATDeclareIUnknownMethodsForCATBaseUnknownTIE \
      CATDeclareIDispatchMethodsForCATBaseUnknownTIE \
      CATDeclareCATBaseUnknownMethodsForTIE \
      virtual HRESULT __stdcall get_Next(CATVariant *& oDirect); \
      virtual HRESULT __stdcall put_Next(const CATVariant & iRelayed); \
      virtual HRESULT __stdcall get_Valuation(CATBaseDispatch *& oRef); \
      virtual HRESULT __stdcall put_Valuation(CATBaseDispatch * iRef); \
      virtual HRESULT __stdcall put_Relay(CATIAPublication * iPub); \
      virtual HRESULT  __stdcall get_Application(CATIAApplication *& oApplication); \
      virtual HRESULT  __stdcall get_Parent(CATBaseDispatch *& oParent); \
      virtual HRESULT  __stdcall get_Name(CATBSTR & oNameBSTR); \
      virtual HRESULT  __stdcall put_Name(const CATBSTR & iNameBSTR); \
      virtual HRESULT  __stdcall GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj); \
};



#define ENVTIEdeclare_CATIAPublication(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
virtual HRESULT __stdcall get_Next(CATVariant *& oDirect); \
virtual HRESULT __stdcall put_Next(const CATVariant & iRelayed); \
virtual HRESULT __stdcall get_Valuation(CATBaseDispatch *& oRef); \
virtual HRESULT __stdcall put_Valuation(CATBaseDispatch * iRef); \
virtual HRESULT __stdcall put_Relay(CATIAPublication * iPub); \
virtual HRESULT  __stdcall get_Application(CATIAApplication *& oApplication); \
virtual HRESULT  __stdcall get_Parent(CATBaseDispatch *& oParent); \
virtual HRESULT  __stdcall get_Name(CATBSTR & oNameBSTR); \
virtual HRESULT  __stdcall put_Name(const CATBSTR & iNameBSTR); \
virtual HRESULT  __stdcall GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj); \


#define ENVTIEdefine_CATIAPublication(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
HRESULT __stdcall  ENVTIEName::get_Next(CATVariant *& oDirect) \
{ \
return (ENVTIECALL(CATIAPublication,ENVTIETypeLetter,ENVTIELetter)get_Next(oDirect)); \
} \
HRESULT __stdcall  ENVTIEName::put_Next(const CATVariant & iRelayed) \
{ \
return (ENVTIECALL(CATIAPublication,ENVTIETypeLetter,ENVTIELetter)put_Next(iRelayed)); \
} \
HRESULT __stdcall  ENVTIEName::get_Valuation(CATBaseDispatch *& oRef) \
{ \
return (ENVTIECALL(CATIAPublication,ENVTIETypeLetter,ENVTIELetter)get_Valuation(oRef)); \
} \
HRESULT __stdcall  ENVTIEName::put_Valuation(CATBaseDispatch * iRef) \
{ \
return (ENVTIECALL(CATIAPublication,ENVTIETypeLetter,ENVTIELetter)put_Valuation(iRef)); \
} \
HRESULT __stdcall  ENVTIEName::put_Relay(CATIAPublication * iPub) \
{ \
return (ENVTIECALL(CATIAPublication,ENVTIETypeLetter,ENVTIELetter)put_Relay(iPub)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Application(CATIAApplication *& oApplication) \
{ \
return (ENVTIECALL(CATIAPublication,ENVTIETypeLetter,ENVTIELetter)get_Application(oApplication)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Parent(CATBaseDispatch *& oParent) \
{ \
return (ENVTIECALL(CATIAPublication,ENVTIETypeLetter,ENVTIELetter)get_Parent(oParent)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Name(CATBSTR & oNameBSTR) \
{ \
return (ENVTIECALL(CATIAPublication,ENVTIETypeLetter,ENVTIELetter)get_Name(oNameBSTR)); \
} \
HRESULT  __stdcall  ENVTIEName::put_Name(const CATBSTR & iNameBSTR) \
{ \
return (ENVTIECALL(CATIAPublication,ENVTIETypeLetter,ENVTIELetter)put_Name(iNameBSTR)); \
} \
HRESULT  __stdcall  ENVTIEName::GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj) \
{ \
return (ENVTIECALL(CATIAPublication,ENVTIETypeLetter,ENVTIELetter)GetItem(IDName,RealObj)); \
} \


/* Name of the TIE class */
#define class_TIE_CATIAPublication(classe)    TIECATIAPublication##classe


/* Common methods inside a TIE */
#define common_TIE_CATIAPublication(classe) \
 \
 \
/* Static initialization */ \
CATDefineCommonTIEMembers(CATIAPublication, classe) \
 \
 \
CATImplementTIEMethods(CATIAPublication, classe) \
CATImplementIUnknownMethodsForCATBaseUnknownTIE(CATIAPublication, classe, 2) \
CATImplementIDispatchMethodsForCATBaseUnknownTIE(CATIAPublication, classe) \
CATImplementCATBaseUnknownMethodsForTIE(CATIAPublication, classe) \
 \
HRESULT __stdcall  TIECATIAPublication##classe::get_Next(CATVariant *& oDirect) \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Next(oDirect)); \
} \
HRESULT __stdcall  TIECATIAPublication##classe::put_Next(const CATVariant & iRelayed) \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_Next(iRelayed)); \
} \
HRESULT __stdcall  TIECATIAPublication##classe::get_Valuation(CATBaseDispatch *& oRef) \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Valuation(oRef)); \
} \
HRESULT __stdcall  TIECATIAPublication##classe::put_Valuation(CATBaseDispatch * iRef) \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_Valuation(iRef)); \
} \
HRESULT __stdcall  TIECATIAPublication##classe::put_Relay(CATIAPublication * iPub) \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_Relay(iPub)); \
} \
HRESULT  __stdcall  TIECATIAPublication##classe::get_Application(CATIAApplication *& oApplication) \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Application(oApplication)); \
} \
HRESULT  __stdcall  TIECATIAPublication##classe::get_Parent(CATBaseDispatch *& oParent) \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Parent(oParent)); \
} \
HRESULT  __stdcall  TIECATIAPublication##classe::get_Name(CATBSTR & oNameBSTR) \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Name(oNameBSTR)); \
} \
HRESULT  __stdcall  TIECATIAPublication##classe::put_Name(const CATBSTR & iNameBSTR) \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_Name(iNameBSTR)); \
} \
HRESULT  __stdcall  TIECATIAPublication##classe::GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj) \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetItem(IDName,RealObj)); \
} \



/* Macro used to link an implementation with an interface */
#define TIE_CATIAPublication(classe) \
 \
 \
declare_TIE_CATIAPublication(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIAPublication##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIAPublication,"CATIAPublication",CATIAPublication::MetaObject(),classe::MetaObject(),TIE); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIAPublication(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIECreation(CATIAPublication, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIAPublication##classe(classe::MetaObject(),CATIAPublication::MetaObject(),(void *)CreateTIECATIAPublication##classe)



/* Macro used to link an implementation with an interface */
/* This TIE is chained on the implementation object */
#define TIEchain_CATIAPublication(classe) \
 \
 \
declare_TIE_CATIAPublication(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIAPublication##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIAPublication,"CATIAPublication",CATIAPublication::MetaObject(),classe::MetaObject(),TIEchain); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIAPublication(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIEchainCreation(CATIAPublication, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIAPublication##classe(classe::MetaObject(),CATIAPublication::MetaObject(),(void *)CreateTIECATIAPublication##classe)


/* Macro to switch between BOA and TIE at build time */ 
#ifdef CATSYS_BOA_IS_TIE
#define BOA_CATIAPublication(classe) TIE_CATIAPublication(classe)
#else
#define BOA_CATIAPublication(classe) CATImplementBOA(CATIAPublication, classe)
#endif

#endif
