#ifndef __TIE_CATIAMedianFeature
#define __TIE_CATIAMedianFeature

#include <string.h>
#include "CATBaseUnknown.h"
#include "CATMetaClass.h"
#include "CATMacForTie.h"
#include "CATIAMedianFeature.h"
#include "JS0DSPA.h"


#ifdef _WINDOWS_SOURCE
#define Exported __declspec(dllexport)
#define Imported __declspec(dllimport)
#else
#define Exported 
#define Imported 
#endif


/* To link an implementation with the interface CATIAMedianFeature */
#define declare_TIE_CATIAMedianFeature(classe) \
 \
 \
class TIECATIAMedianFeature##classe : public CATIAMedianFeature \
{ \
   private: \
      CATDeclareCommonTIEMembers \
   public: \
      CATDeclareTIEMethods(CATIAMedianFeature, classe) \
      CATDeclareIUnknownMethodsForCATBaseUnknownTIE \
      CATDeclareIDispatchMethodsForCATBaseUnknownTIE \
      CATDeclareCATBaseUnknownMethodsForTIE \
      virtual HRESULT __stdcall get_Modifier(CATBSTR & oModifier); \
      virtual HRESULT  __stdcall get_Application(CATIAApplication *& oApplication); \
      virtual HRESULT  __stdcall get_Parent(CATBaseDispatch *& oParent); \
      virtual HRESULT  __stdcall get_Name(CATBSTR & oNameBSTR); \
      virtual HRESULT  __stdcall put_Name(const CATBSTR & iNameBSTR); \
      virtual HRESULT  __stdcall GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj); \
};



#define ENVTIEdeclare_CATIAMedianFeature(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
virtual HRESULT __stdcall get_Modifier(CATBSTR & oModifier); \
virtual HRESULT  __stdcall get_Application(CATIAApplication *& oApplication); \
virtual HRESULT  __stdcall get_Parent(CATBaseDispatch *& oParent); \
virtual HRESULT  __stdcall get_Name(CATBSTR & oNameBSTR); \
virtual HRESULT  __stdcall put_Name(const CATBSTR & iNameBSTR); \
virtual HRESULT  __stdcall GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj); \


#define ENVTIEdefine_CATIAMedianFeature(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
HRESULT __stdcall  ENVTIEName::get_Modifier(CATBSTR & oModifier) \
{ \
return (ENVTIECALL(CATIAMedianFeature,ENVTIETypeLetter,ENVTIELetter)get_Modifier(oModifier)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Application(CATIAApplication *& oApplication) \
{ \
return (ENVTIECALL(CATIAMedianFeature,ENVTIETypeLetter,ENVTIELetter)get_Application(oApplication)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Parent(CATBaseDispatch *& oParent) \
{ \
return (ENVTIECALL(CATIAMedianFeature,ENVTIETypeLetter,ENVTIELetter)get_Parent(oParent)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Name(CATBSTR & oNameBSTR) \
{ \
return (ENVTIECALL(CATIAMedianFeature,ENVTIETypeLetter,ENVTIELetter)get_Name(oNameBSTR)); \
} \
HRESULT  __stdcall  ENVTIEName::put_Name(const CATBSTR & iNameBSTR) \
{ \
return (ENVTIECALL(CATIAMedianFeature,ENVTIETypeLetter,ENVTIELetter)put_Name(iNameBSTR)); \
} \
HRESULT  __stdcall  ENVTIEName::GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj) \
{ \
return (ENVTIECALL(CATIAMedianFeature,ENVTIETypeLetter,ENVTIELetter)GetItem(IDName,RealObj)); \
} \


/* Name of the TIE class */
#define class_TIE_CATIAMedianFeature(classe)    TIECATIAMedianFeature##classe


/* Common methods inside a TIE */
#define common_TIE_CATIAMedianFeature(classe) \
 \
 \
/* Static initialization */ \
CATDefineCommonTIEMembers(CATIAMedianFeature, classe) \
 \
 \
CATImplementTIEMethods(CATIAMedianFeature, classe) \
CATImplementIUnknownMethodsForCATBaseUnknownTIE(CATIAMedianFeature, classe, 2) \
CATImplementIDispatchMethodsForCATBaseUnknownTIE(CATIAMedianFeature, classe) \
CATImplementCATBaseUnknownMethodsForTIE(CATIAMedianFeature, classe) \
 \
HRESULT __stdcall  TIECATIAMedianFeature##classe::get_Modifier(CATBSTR & oModifier) \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Modifier(oModifier)); \
} \
HRESULT  __stdcall  TIECATIAMedianFeature##classe::get_Application(CATIAApplication *& oApplication) \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Application(oApplication)); \
} \
HRESULT  __stdcall  TIECATIAMedianFeature##classe::get_Parent(CATBaseDispatch *& oParent) \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Parent(oParent)); \
} \
HRESULT  __stdcall  TIECATIAMedianFeature##classe::get_Name(CATBSTR & oNameBSTR) \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Name(oNameBSTR)); \
} \
HRESULT  __stdcall  TIECATIAMedianFeature##classe::put_Name(const CATBSTR & iNameBSTR) \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_Name(iNameBSTR)); \
} \
HRESULT  __stdcall  TIECATIAMedianFeature##classe::GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj) \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetItem(IDName,RealObj)); \
} \



/* Macro used to link an implementation with an interface */
#define TIE_CATIAMedianFeature(classe) \
 \
 \
declare_TIE_CATIAMedianFeature(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIAMedianFeature##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIAMedianFeature,"CATIAMedianFeature",CATIAMedianFeature::MetaObject(),classe::MetaObject(),TIE); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIAMedianFeature(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIECreation(CATIAMedianFeature, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIAMedianFeature##classe(classe::MetaObject(),CATIAMedianFeature::MetaObject(),(void *)CreateTIECATIAMedianFeature##classe)



/* Macro used to link an implementation with an interface */
/* This TIE is chained on the implementation object */
#define TIEchain_CATIAMedianFeature(classe) \
 \
 \
declare_TIE_CATIAMedianFeature(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIAMedianFeature##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIAMedianFeature,"CATIAMedianFeature",CATIAMedianFeature::MetaObject(),classe::MetaObject(),TIEchain); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIAMedianFeature(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIEchainCreation(CATIAMedianFeature, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIAMedianFeature##classe(classe::MetaObject(),CATIAMedianFeature::MetaObject(),(void *)CreateTIECATIAMedianFeature##classe)


/* Macro to switch between BOA and TIE at build time */ 
#ifdef CATSYS_BOA_IS_TIE
#define BOA_CATIAMedianFeature(classe) TIE_CATIAMedianFeature(classe)
#else
#define BOA_CATIAMedianFeature(classe) CATImplementBOA(CATIAMedianFeature, classe)
#endif

#endif
