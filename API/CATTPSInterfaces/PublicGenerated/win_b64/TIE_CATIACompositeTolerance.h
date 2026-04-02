#ifndef __TIE_CATIACompositeTolerance
#define __TIE_CATIACompositeTolerance

#include <string.h>
#include "CATBaseUnknown.h"
#include "CATMetaClass.h"
#include "CATMacForTie.h"
#include "CATIACompositeTolerance.h"
#include "JS0DSPA.h"


#ifdef _WINDOWS_SOURCE
#define Exported __declspec(dllexport)
#define Imported __declspec(dllimport)
#else
#define Exported 
#define Imported 
#endif


/* To link an implementation with the interface CATIACompositeTolerance */
#define declare_TIE_CATIACompositeTolerance(classe) \
 \
 \
class TIECATIACompositeTolerance##classe : public CATIACompositeTolerance \
{ \
   private: \
      CATDeclareCommonTIEMembers \
   public: \
      CATDeclareTIEMethods(CATIACompositeTolerance, classe) \
      CATDeclareIUnknownMethodsForCATBaseUnknownTIE \
      CATDeclareIDispatchMethodsForCATBaseUnknownTIE \
      CATDeclareCATBaseUnknownMethodsForTIE \
      virtual HRESULT __stdcall get_Value(double & oValue); \
      virtual HRESULT __stdcall get_BoxCount(double & oBoxCount); \
      virtual HRESULT  __stdcall get_Application(CATIAApplication *& oApplication); \
      virtual HRESULT  __stdcall get_Parent(CATBaseDispatch *& oParent); \
      virtual HRESULT  __stdcall get_Name(CATBSTR & oNameBSTR); \
      virtual HRESULT  __stdcall put_Name(const CATBSTR & iNameBSTR); \
      virtual HRESULT  __stdcall GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj); \
};



#define ENVTIEdeclare_CATIACompositeTolerance(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
virtual HRESULT __stdcall get_Value(double & oValue); \
virtual HRESULT __stdcall get_BoxCount(double & oBoxCount); \
virtual HRESULT  __stdcall get_Application(CATIAApplication *& oApplication); \
virtual HRESULT  __stdcall get_Parent(CATBaseDispatch *& oParent); \
virtual HRESULT  __stdcall get_Name(CATBSTR & oNameBSTR); \
virtual HRESULT  __stdcall put_Name(const CATBSTR & iNameBSTR); \
virtual HRESULT  __stdcall GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj); \


#define ENVTIEdefine_CATIACompositeTolerance(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
HRESULT __stdcall  ENVTIEName::get_Value(double & oValue) \
{ \
return (ENVTIECALL(CATIACompositeTolerance,ENVTIETypeLetter,ENVTIELetter)get_Value(oValue)); \
} \
HRESULT __stdcall  ENVTIEName::get_BoxCount(double & oBoxCount) \
{ \
return (ENVTIECALL(CATIACompositeTolerance,ENVTIETypeLetter,ENVTIELetter)get_BoxCount(oBoxCount)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Application(CATIAApplication *& oApplication) \
{ \
return (ENVTIECALL(CATIACompositeTolerance,ENVTIETypeLetter,ENVTIELetter)get_Application(oApplication)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Parent(CATBaseDispatch *& oParent) \
{ \
return (ENVTIECALL(CATIACompositeTolerance,ENVTIETypeLetter,ENVTIELetter)get_Parent(oParent)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Name(CATBSTR & oNameBSTR) \
{ \
return (ENVTIECALL(CATIACompositeTolerance,ENVTIETypeLetter,ENVTIELetter)get_Name(oNameBSTR)); \
} \
HRESULT  __stdcall  ENVTIEName::put_Name(const CATBSTR & iNameBSTR) \
{ \
return (ENVTIECALL(CATIACompositeTolerance,ENVTIETypeLetter,ENVTIELetter)put_Name(iNameBSTR)); \
} \
HRESULT  __stdcall  ENVTIEName::GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj) \
{ \
return (ENVTIECALL(CATIACompositeTolerance,ENVTIETypeLetter,ENVTIELetter)GetItem(IDName,RealObj)); \
} \


/* Name of the TIE class */
#define class_TIE_CATIACompositeTolerance(classe)    TIECATIACompositeTolerance##classe


/* Common methods inside a TIE */
#define common_TIE_CATIACompositeTolerance(classe) \
 \
 \
/* Static initialization */ \
CATDefineCommonTIEMembers(CATIACompositeTolerance, classe) \
 \
 \
CATImplementTIEMethods(CATIACompositeTolerance, classe) \
CATImplementIUnknownMethodsForCATBaseUnknownTIE(CATIACompositeTolerance, classe, 2) \
CATImplementIDispatchMethodsForCATBaseUnknownTIE(CATIACompositeTolerance, classe) \
CATImplementCATBaseUnknownMethodsForTIE(CATIACompositeTolerance, classe) \
 \
HRESULT __stdcall  TIECATIACompositeTolerance##classe::get_Value(double & oValue) \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Value(oValue)); \
} \
HRESULT __stdcall  TIECATIACompositeTolerance##classe::get_BoxCount(double & oBoxCount) \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_BoxCount(oBoxCount)); \
} \
HRESULT  __stdcall  TIECATIACompositeTolerance##classe::get_Application(CATIAApplication *& oApplication) \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Application(oApplication)); \
} \
HRESULT  __stdcall  TIECATIACompositeTolerance##classe::get_Parent(CATBaseDispatch *& oParent) \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Parent(oParent)); \
} \
HRESULT  __stdcall  TIECATIACompositeTolerance##classe::get_Name(CATBSTR & oNameBSTR) \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Name(oNameBSTR)); \
} \
HRESULT  __stdcall  TIECATIACompositeTolerance##classe::put_Name(const CATBSTR & iNameBSTR) \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_Name(iNameBSTR)); \
} \
HRESULT  __stdcall  TIECATIACompositeTolerance##classe::GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj) \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetItem(IDName,RealObj)); \
} \



/* Macro used to link an implementation with an interface */
#define TIE_CATIACompositeTolerance(classe) \
 \
 \
declare_TIE_CATIACompositeTolerance(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIACompositeTolerance##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIACompositeTolerance,"CATIACompositeTolerance",CATIACompositeTolerance::MetaObject(),classe::MetaObject(),TIE); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIACompositeTolerance(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIECreation(CATIACompositeTolerance, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIACompositeTolerance##classe(classe::MetaObject(),CATIACompositeTolerance::MetaObject(),(void *)CreateTIECATIACompositeTolerance##classe)



/* Macro used to link an implementation with an interface */
/* This TIE is chained on the implementation object */
#define TIEchain_CATIACompositeTolerance(classe) \
 \
 \
declare_TIE_CATIACompositeTolerance(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIACompositeTolerance##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIACompositeTolerance,"CATIACompositeTolerance",CATIACompositeTolerance::MetaObject(),classe::MetaObject(),TIEchain); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIACompositeTolerance(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIEchainCreation(CATIACompositeTolerance, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIACompositeTolerance##classe(classe::MetaObject(),CATIACompositeTolerance::MetaObject(),(void *)CreateTIECATIACompositeTolerance##classe)


/* Macro to switch between BOA and TIE at build time */ 
#ifdef CATSYS_BOA_IS_TIE
#define BOA_CATIACompositeTolerance(classe) TIE_CATIACompositeTolerance(classe)
#else
#define BOA_CATIACompositeTolerance(classe) CATImplementBOA(CATIACompositeTolerance, classe)
#endif

#endif
