#ifndef __TIE_CATIAProjectedToleranceZone
#define __TIE_CATIAProjectedToleranceZone

#include <string.h>
#include "CATBaseUnknown.h"
#include "CATMetaClass.h"
#include "CATMacForTie.h"
#include "CATIAProjectedToleranceZone.h"
#include "JS0DSPA.h"


#ifdef _WINDOWS_SOURCE
#define Exported __declspec(dllexport)
#define Imported __declspec(dllimport)
#else
#define Exported 
#define Imported 
#endif


/* To link an implementation with the interface CATIAProjectedToleranceZone */
#define declare_TIE_CATIAProjectedToleranceZone(classe) \
 \
 \
class TIECATIAProjectedToleranceZone##classe : public CATIAProjectedToleranceZone \
{ \
   private: \
      CATDeclareCommonTIEMembers \
   public: \
      CATDeclareTIEMethods(CATIAProjectedToleranceZone, classe) \
      CATDeclareIUnknownMethodsForCATBaseUnknownTIE \
      CATDeclareIDispatchMethodsForCATBaseUnknownTIE \
      CATDeclareCATBaseUnknownMethodsForTIE \
      virtual HRESULT __stdcall get_Position(double & oPosition); \
      virtual HRESULT __stdcall get_Length(double & oLength); \
      virtual HRESULT __stdcall GetProjectedTolZoneReference(CATSafeArrayVariant & opReference); \
      virtual HRESULT  __stdcall get_Application(CATIAApplication *& oApplication); \
      virtual HRESULT  __stdcall get_Parent(CATBaseDispatch *& oParent); \
      virtual HRESULT  __stdcall get_Name(CATBSTR & oNameBSTR); \
      virtual HRESULT  __stdcall put_Name(const CATBSTR & iNameBSTR); \
      virtual HRESULT  __stdcall GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj); \
};



#define ENVTIEdeclare_CATIAProjectedToleranceZone(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
virtual HRESULT __stdcall get_Position(double & oPosition); \
virtual HRESULT __stdcall get_Length(double & oLength); \
virtual HRESULT __stdcall GetProjectedTolZoneReference(CATSafeArrayVariant & opReference); \
virtual HRESULT  __stdcall get_Application(CATIAApplication *& oApplication); \
virtual HRESULT  __stdcall get_Parent(CATBaseDispatch *& oParent); \
virtual HRESULT  __stdcall get_Name(CATBSTR & oNameBSTR); \
virtual HRESULT  __stdcall put_Name(const CATBSTR & iNameBSTR); \
virtual HRESULT  __stdcall GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj); \


#define ENVTIEdefine_CATIAProjectedToleranceZone(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
HRESULT __stdcall  ENVTIEName::get_Position(double & oPosition) \
{ \
return (ENVTIECALL(CATIAProjectedToleranceZone,ENVTIETypeLetter,ENVTIELetter)get_Position(oPosition)); \
} \
HRESULT __stdcall  ENVTIEName::get_Length(double & oLength) \
{ \
return (ENVTIECALL(CATIAProjectedToleranceZone,ENVTIETypeLetter,ENVTIELetter)get_Length(oLength)); \
} \
HRESULT __stdcall  ENVTIEName::GetProjectedTolZoneReference(CATSafeArrayVariant & opReference) \
{ \
return (ENVTIECALL(CATIAProjectedToleranceZone,ENVTIETypeLetter,ENVTIELetter)GetProjectedTolZoneReference(opReference)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Application(CATIAApplication *& oApplication) \
{ \
return (ENVTIECALL(CATIAProjectedToleranceZone,ENVTIETypeLetter,ENVTIELetter)get_Application(oApplication)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Parent(CATBaseDispatch *& oParent) \
{ \
return (ENVTIECALL(CATIAProjectedToleranceZone,ENVTIETypeLetter,ENVTIELetter)get_Parent(oParent)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Name(CATBSTR & oNameBSTR) \
{ \
return (ENVTIECALL(CATIAProjectedToleranceZone,ENVTIETypeLetter,ENVTIELetter)get_Name(oNameBSTR)); \
} \
HRESULT  __stdcall  ENVTIEName::put_Name(const CATBSTR & iNameBSTR) \
{ \
return (ENVTIECALL(CATIAProjectedToleranceZone,ENVTIETypeLetter,ENVTIELetter)put_Name(iNameBSTR)); \
} \
HRESULT  __stdcall  ENVTIEName::GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj) \
{ \
return (ENVTIECALL(CATIAProjectedToleranceZone,ENVTIETypeLetter,ENVTIELetter)GetItem(IDName,RealObj)); \
} \


/* Name of the TIE class */
#define class_TIE_CATIAProjectedToleranceZone(classe)    TIECATIAProjectedToleranceZone##classe


/* Common methods inside a TIE */
#define common_TIE_CATIAProjectedToleranceZone(classe) \
 \
 \
/* Static initialization */ \
CATDefineCommonTIEMembers(CATIAProjectedToleranceZone, classe) \
 \
 \
CATImplementTIEMethods(CATIAProjectedToleranceZone, classe) \
CATImplementIUnknownMethodsForCATBaseUnknownTIE(CATIAProjectedToleranceZone, classe, 2) \
CATImplementIDispatchMethodsForCATBaseUnknownTIE(CATIAProjectedToleranceZone, classe) \
CATImplementCATBaseUnknownMethodsForTIE(CATIAProjectedToleranceZone, classe) \
 \
HRESULT __stdcall  TIECATIAProjectedToleranceZone##classe::get_Position(double & oPosition) \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Position(oPosition)); \
} \
HRESULT __stdcall  TIECATIAProjectedToleranceZone##classe::get_Length(double & oLength) \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Length(oLength)); \
} \
HRESULT __stdcall  TIECATIAProjectedToleranceZone##classe::GetProjectedTolZoneReference(CATSafeArrayVariant & opReference) \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetProjectedTolZoneReference(opReference)); \
} \
HRESULT  __stdcall  TIECATIAProjectedToleranceZone##classe::get_Application(CATIAApplication *& oApplication) \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Application(oApplication)); \
} \
HRESULT  __stdcall  TIECATIAProjectedToleranceZone##classe::get_Parent(CATBaseDispatch *& oParent) \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Parent(oParent)); \
} \
HRESULT  __stdcall  TIECATIAProjectedToleranceZone##classe::get_Name(CATBSTR & oNameBSTR) \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Name(oNameBSTR)); \
} \
HRESULT  __stdcall  TIECATIAProjectedToleranceZone##classe::put_Name(const CATBSTR & iNameBSTR) \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_Name(iNameBSTR)); \
} \
HRESULT  __stdcall  TIECATIAProjectedToleranceZone##classe::GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj) \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetItem(IDName,RealObj)); \
} \



/* Macro used to link an implementation with an interface */
#define TIE_CATIAProjectedToleranceZone(classe) \
 \
 \
declare_TIE_CATIAProjectedToleranceZone(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIAProjectedToleranceZone##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIAProjectedToleranceZone,"CATIAProjectedToleranceZone",CATIAProjectedToleranceZone::MetaObject(),classe::MetaObject(),TIE); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIAProjectedToleranceZone(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIECreation(CATIAProjectedToleranceZone, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIAProjectedToleranceZone##classe(classe::MetaObject(),CATIAProjectedToleranceZone::MetaObject(),(void *)CreateTIECATIAProjectedToleranceZone##classe)



/* Macro used to link an implementation with an interface */
/* This TIE is chained on the implementation object */
#define TIEchain_CATIAProjectedToleranceZone(classe) \
 \
 \
declare_TIE_CATIAProjectedToleranceZone(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIAProjectedToleranceZone##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIAProjectedToleranceZone,"CATIAProjectedToleranceZone",CATIAProjectedToleranceZone::MetaObject(),classe::MetaObject(),TIEchain); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIAProjectedToleranceZone(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIEchainCreation(CATIAProjectedToleranceZone, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIAProjectedToleranceZone##classe(classe::MetaObject(),CATIAProjectedToleranceZone::MetaObject(),(void *)CreateTIECATIAProjectedToleranceZone##classe)


/* Macro to switch between BOA and TIE at build time */ 
#ifdef CATSYS_BOA_IS_TIE
#define BOA_CATIAProjectedToleranceZone(classe) TIE_CATIAProjectedToleranceZone(classe)
#else
#define BOA_CATIAProjectedToleranceZone(classe) CATImplementBOA(CATIAProjectedToleranceZone, classe)
#endif

#endif
