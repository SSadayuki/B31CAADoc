#ifndef __TIE_CATIAGeomCompareServices
#define __TIE_CATIAGeomCompareServices

#include <string.h>
#include "CATBaseUnknown.h"
#include "CATMetaClass.h"
#include "CATMacForTie.h"
#include "CATIAGeomCompareServices.h"
#include "JS0DSPA.h"


#ifdef _WINDOWS_SOURCE
#define Exported __declspec(dllexport)
#define Imported __declspec(dllimport)
#else
#define Exported 
#define Imported 
#endif


/* To link an implementation with the interface CATIAGeomCompareServices */
#define declare_TIE_CATIAGeomCompareServices(classe) \
 \
 \
class TIECATIAGeomCompareServices##classe : public CATIAGeomCompareServices \
{ \
   private: \
      CATDeclareCommonTIEMembers \
   public: \
      CATDeclareTIEMethods(CATIAGeomCompareServices, classe) \
      CATDeclareIUnknownMethodsForCATBaseUnknownTIE \
      CATDeclareIDispatchMethodsForCATBaseUnknownTIE \
      CATDeclareCATBaseUnknownMethodsForTIE \
      virtual HRESULT __stdcall GenerateComparisonReport(CATIAPart * iInputPart); \
      virtual HRESULT  __stdcall get_Application(CATIAApplication *& oApplication); \
      virtual HRESULT  __stdcall get_Parent(CATBaseDispatch *& oParent); \
      virtual HRESULT  __stdcall get_Name(CATBSTR & oNameBSTR); \
      virtual HRESULT  __stdcall put_Name(const CATBSTR & iNameBSTR); \
      virtual HRESULT  __stdcall GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj); \
};



#define ENVTIEdeclare_CATIAGeomCompareServices(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
virtual HRESULT __stdcall GenerateComparisonReport(CATIAPart * iInputPart); \
virtual HRESULT  __stdcall get_Application(CATIAApplication *& oApplication); \
virtual HRESULT  __stdcall get_Parent(CATBaseDispatch *& oParent); \
virtual HRESULT  __stdcall get_Name(CATBSTR & oNameBSTR); \
virtual HRESULT  __stdcall put_Name(const CATBSTR & iNameBSTR); \
virtual HRESULT  __stdcall GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj); \


#define ENVTIEdefine_CATIAGeomCompareServices(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
HRESULT __stdcall  ENVTIEName::GenerateComparisonReport(CATIAPart * iInputPart) \
{ \
return (ENVTIECALL(CATIAGeomCompareServices,ENVTIETypeLetter,ENVTIELetter)GenerateComparisonReport(iInputPart)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Application(CATIAApplication *& oApplication) \
{ \
return (ENVTIECALL(CATIAGeomCompareServices,ENVTIETypeLetter,ENVTIELetter)get_Application(oApplication)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Parent(CATBaseDispatch *& oParent) \
{ \
return (ENVTIECALL(CATIAGeomCompareServices,ENVTIETypeLetter,ENVTIELetter)get_Parent(oParent)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Name(CATBSTR & oNameBSTR) \
{ \
return (ENVTIECALL(CATIAGeomCompareServices,ENVTIETypeLetter,ENVTIELetter)get_Name(oNameBSTR)); \
} \
HRESULT  __stdcall  ENVTIEName::put_Name(const CATBSTR & iNameBSTR) \
{ \
return (ENVTIECALL(CATIAGeomCompareServices,ENVTIETypeLetter,ENVTIELetter)put_Name(iNameBSTR)); \
} \
HRESULT  __stdcall  ENVTIEName::GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj) \
{ \
return (ENVTIECALL(CATIAGeomCompareServices,ENVTIETypeLetter,ENVTIELetter)GetItem(IDName,RealObj)); \
} \


/* Name of the TIE class */
#define class_TIE_CATIAGeomCompareServices(classe)    TIECATIAGeomCompareServices##classe


/* Common methods inside a TIE */
#define common_TIE_CATIAGeomCompareServices(classe) \
 \
 \
/* Static initialization */ \
CATDefineCommonTIEMembers(CATIAGeomCompareServices, classe) \
 \
 \
CATImplementTIEMethods(CATIAGeomCompareServices, classe) \
CATImplementIUnknownMethodsForCATBaseUnknownTIE(CATIAGeomCompareServices, classe, 2) \
CATImplementIDispatchMethodsForCATBaseUnknownTIE(CATIAGeomCompareServices, classe) \
CATImplementCATBaseUnknownMethodsForTIE(CATIAGeomCompareServices, classe) \
 \
HRESULT __stdcall  TIECATIAGeomCompareServices##classe::GenerateComparisonReport(CATIAPart * iInputPart) \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GenerateComparisonReport(iInputPart)); \
} \
HRESULT  __stdcall  TIECATIAGeomCompareServices##classe::get_Application(CATIAApplication *& oApplication) \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Application(oApplication)); \
} \
HRESULT  __stdcall  TIECATIAGeomCompareServices##classe::get_Parent(CATBaseDispatch *& oParent) \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Parent(oParent)); \
} \
HRESULT  __stdcall  TIECATIAGeomCompareServices##classe::get_Name(CATBSTR & oNameBSTR) \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Name(oNameBSTR)); \
} \
HRESULT  __stdcall  TIECATIAGeomCompareServices##classe::put_Name(const CATBSTR & iNameBSTR) \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_Name(iNameBSTR)); \
} \
HRESULT  __stdcall  TIECATIAGeomCompareServices##classe::GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj) \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetItem(IDName,RealObj)); \
} \



/* Macro used to link an implementation with an interface */
#define TIE_CATIAGeomCompareServices(classe) \
 \
 \
declare_TIE_CATIAGeomCompareServices(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIAGeomCompareServices##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIAGeomCompareServices,"CATIAGeomCompareServices",CATIAGeomCompareServices::MetaObject(),classe::MetaObject(),TIE); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIAGeomCompareServices(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIECreation(CATIAGeomCompareServices, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIAGeomCompareServices##classe(classe::MetaObject(),CATIAGeomCompareServices::MetaObject(),(void *)CreateTIECATIAGeomCompareServices##classe)



/* Macro used to link an implementation with an interface */
/* This TIE is chained on the implementation object */
#define TIEchain_CATIAGeomCompareServices(classe) \
 \
 \
declare_TIE_CATIAGeomCompareServices(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIAGeomCompareServices##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIAGeomCompareServices,"CATIAGeomCompareServices",CATIAGeomCompareServices::MetaObject(),classe::MetaObject(),TIEchain); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIAGeomCompareServices(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIEchainCreation(CATIAGeomCompareServices, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIAGeomCompareServices##classe(classe::MetaObject(),CATIAGeomCompareServices::MetaObject(),(void *)CreateTIECATIAGeomCompareServices##classe)


/* Macro to switch between BOA and TIE at build time */ 
#ifdef CATSYS_BOA_IS_TIE
#define BOA_CATIAGeomCompareServices(classe) TIE_CATIAGeomCompareServices(classe)
#else
#define BOA_CATIAGeomCompareServices(classe) CATImplementBOA(CATIAGeomCompareServices, classe)
#endif

#endif
