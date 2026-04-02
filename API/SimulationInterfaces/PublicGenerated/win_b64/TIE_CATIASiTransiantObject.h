#ifndef __TIE_CATIASiTransiantObject
#define __TIE_CATIASiTransiantObject

#include <string.h>
#include "CATBaseUnknown.h"
#include "CATMetaClass.h"
#include "CATMacForTie.h"
#include "CATIASiTransiantObject.h"
#include "JS0DSPA.h"


#ifdef _WINDOWS_SOURCE
#define Exported __declspec(dllexport)
#define Imported __declspec(dllimport)
#else
#define Exported 
#define Imported 
#endif


/* To link an implementation with the interface CATIASiTransiantObject */
#define declare_TIE_CATIASiTransiantObject(classe) \
 \
 \
class TIECATIASiTransiantObject##classe : public CATIASiTransiantObject \
{ \
   private: \
      CATDeclareCommonTIEMembers \
   public: \
      CATDeclareTIEMethods(CATIASiTransiantObject, classe) \
      CATDeclareIUnknownMethodsForCATBaseUnknownTIE \
      CATDeclareIDispatchMethodsForCATBaseUnknownTIE \
      CATDeclareCATBaseUnknownMethodsForTIE \
      virtual HRESULT __stdcall set_TransiantMode(CATLONG iTransiantMode); \
      virtual HRESULT __stdcall get_TransiantMode(CATLONG & iTransiantMode); \
      virtual HRESULT __stdcall apply_Immediate_Storage(); \
      virtual HRESULT __stdcall clean_Transiant(); \
      virtual HRESULT  __stdcall get_Application(CATIAApplication *& oApplication); \
      virtual HRESULT  __stdcall get_Parent(CATBaseDispatch *& oParent); \
      virtual HRESULT  __stdcall get_Name(CATBSTR & oNameBSTR); \
      virtual HRESULT  __stdcall put_Name(const CATBSTR & iNameBSTR); \
      virtual HRESULT  __stdcall GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj); \
};



#define ENVTIEdeclare_CATIASiTransiantObject(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
virtual HRESULT __stdcall set_TransiantMode(CATLONG iTransiantMode); \
virtual HRESULT __stdcall get_TransiantMode(CATLONG & iTransiantMode); \
virtual HRESULT __stdcall apply_Immediate_Storage(); \
virtual HRESULT __stdcall clean_Transiant(); \
virtual HRESULT  __stdcall get_Application(CATIAApplication *& oApplication); \
virtual HRESULT  __stdcall get_Parent(CATBaseDispatch *& oParent); \
virtual HRESULT  __stdcall get_Name(CATBSTR & oNameBSTR); \
virtual HRESULT  __stdcall put_Name(const CATBSTR & iNameBSTR); \
virtual HRESULT  __stdcall GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj); \


#define ENVTIEdefine_CATIASiTransiantObject(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
HRESULT __stdcall  ENVTIEName::set_TransiantMode(CATLONG iTransiantMode) \
{ \
return (ENVTIECALL(CATIASiTransiantObject,ENVTIETypeLetter,ENVTIELetter)set_TransiantMode(iTransiantMode)); \
} \
HRESULT __stdcall  ENVTIEName::get_TransiantMode(CATLONG & iTransiantMode) \
{ \
return (ENVTIECALL(CATIASiTransiantObject,ENVTIETypeLetter,ENVTIELetter)get_TransiantMode(iTransiantMode)); \
} \
HRESULT __stdcall  ENVTIEName::apply_Immediate_Storage() \
{ \
return (ENVTIECALL(CATIASiTransiantObject,ENVTIETypeLetter,ENVTIELetter)apply_Immediate_Storage()); \
} \
HRESULT __stdcall  ENVTIEName::clean_Transiant() \
{ \
return (ENVTIECALL(CATIASiTransiantObject,ENVTIETypeLetter,ENVTIELetter)clean_Transiant()); \
} \
HRESULT  __stdcall  ENVTIEName::get_Application(CATIAApplication *& oApplication) \
{ \
return (ENVTIECALL(CATIASiTransiantObject,ENVTIETypeLetter,ENVTIELetter)get_Application(oApplication)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Parent(CATBaseDispatch *& oParent) \
{ \
return (ENVTIECALL(CATIASiTransiantObject,ENVTIETypeLetter,ENVTIELetter)get_Parent(oParent)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Name(CATBSTR & oNameBSTR) \
{ \
return (ENVTIECALL(CATIASiTransiantObject,ENVTIETypeLetter,ENVTIELetter)get_Name(oNameBSTR)); \
} \
HRESULT  __stdcall  ENVTIEName::put_Name(const CATBSTR & iNameBSTR) \
{ \
return (ENVTIECALL(CATIASiTransiantObject,ENVTIETypeLetter,ENVTIELetter)put_Name(iNameBSTR)); \
} \
HRESULT  __stdcall  ENVTIEName::GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj) \
{ \
return (ENVTIECALL(CATIASiTransiantObject,ENVTIETypeLetter,ENVTIELetter)GetItem(IDName,RealObj)); \
} \


/* Name of the TIE class */
#define class_TIE_CATIASiTransiantObject(classe)    TIECATIASiTransiantObject##classe


/* Common methods inside a TIE */
#define common_TIE_CATIASiTransiantObject(classe) \
 \
 \
/* Static initialization */ \
CATDefineCommonTIEMembers(CATIASiTransiantObject, classe) \
 \
 \
CATImplementTIEMethods(CATIASiTransiantObject, classe) \
CATImplementIUnknownMethodsForCATBaseUnknownTIE(CATIASiTransiantObject, classe, 2) \
CATImplementIDispatchMethodsForCATBaseUnknownTIE(CATIASiTransiantObject, classe) \
CATImplementCATBaseUnknownMethodsForTIE(CATIASiTransiantObject, classe) \
 \
HRESULT __stdcall  TIECATIASiTransiantObject##classe::set_TransiantMode(CATLONG iTransiantMode) \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->set_TransiantMode(iTransiantMode)); \
} \
HRESULT __stdcall  TIECATIASiTransiantObject##classe::get_TransiantMode(CATLONG & iTransiantMode) \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_TransiantMode(iTransiantMode)); \
} \
HRESULT __stdcall  TIECATIASiTransiantObject##classe::apply_Immediate_Storage() \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->apply_Immediate_Storage()); \
} \
HRESULT __stdcall  TIECATIASiTransiantObject##classe::clean_Transiant() \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->clean_Transiant()); \
} \
HRESULT  __stdcall  TIECATIASiTransiantObject##classe::get_Application(CATIAApplication *& oApplication) \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Application(oApplication)); \
} \
HRESULT  __stdcall  TIECATIASiTransiantObject##classe::get_Parent(CATBaseDispatch *& oParent) \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Parent(oParent)); \
} \
HRESULT  __stdcall  TIECATIASiTransiantObject##classe::get_Name(CATBSTR & oNameBSTR) \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Name(oNameBSTR)); \
} \
HRESULT  __stdcall  TIECATIASiTransiantObject##classe::put_Name(const CATBSTR & iNameBSTR) \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_Name(iNameBSTR)); \
} \
HRESULT  __stdcall  TIECATIASiTransiantObject##classe::GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj) \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetItem(IDName,RealObj)); \
} \



/* Macro used to link an implementation with an interface */
#define TIE_CATIASiTransiantObject(classe) \
 \
 \
declare_TIE_CATIASiTransiantObject(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIASiTransiantObject##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIASiTransiantObject,"CATIASiTransiantObject",CATIASiTransiantObject::MetaObject(),classe::MetaObject(),TIE); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIASiTransiantObject(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIECreation(CATIASiTransiantObject, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIASiTransiantObject##classe(classe::MetaObject(),CATIASiTransiantObject::MetaObject(),(void *)CreateTIECATIASiTransiantObject##classe)



/* Macro used to link an implementation with an interface */
/* This TIE is chained on the implementation object */
#define TIEchain_CATIASiTransiantObject(classe) \
 \
 \
declare_TIE_CATIASiTransiantObject(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIASiTransiantObject##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIASiTransiantObject,"CATIASiTransiantObject",CATIASiTransiantObject::MetaObject(),classe::MetaObject(),TIEchain); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIASiTransiantObject(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIEchainCreation(CATIASiTransiantObject, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIASiTransiantObject##classe(classe::MetaObject(),CATIASiTransiantObject::MetaObject(),(void *)CreateTIECATIASiTransiantObject##classe)


/* Macro to switch between BOA and TIE at build time */ 
#ifdef CATSYS_BOA_IS_TIE
#define BOA_CATIASiTransiantObject(classe) TIE_CATIASiTransiantObject(classe)
#else
#define BOA_CATIASiTransiantObject(classe) CATImplementBOA(CATIASiTransiantObject, classe)
#endif

#endif
