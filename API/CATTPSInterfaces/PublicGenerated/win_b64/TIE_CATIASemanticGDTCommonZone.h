#ifndef __TIE_CATIASemanticGDTCommonZone
#define __TIE_CATIASemanticGDTCommonZone

#include <string.h>
#include "CATBaseUnknown.h"
#include "CATMetaClass.h"
#include "CATMacForTie.h"
#include "CATIASemanticGDTCommonZone.h"
#include "JS0DSPA.h"


#ifdef _WINDOWS_SOURCE
#define Exported __declspec(dllexport)
#define Imported __declspec(dllimport)
#else
#define Exported 
#define Imported 
#endif


/* To link an implementation with the interface CATIASemanticGDTCommonZone */
#define declare_TIE_CATIASemanticGDTCommonZone(classe) \
 \
 \
class TIECATIASemanticGDTCommonZone##classe : public CATIASemanticGDTCommonZone \
{ \
   private: \
      CATDeclareCommonTIEMembers \
   public: \
      CATDeclareTIEMethods(CATIASemanticGDTCommonZone, classe) \
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



#define ENVTIEdeclare_CATIASemanticGDTCommonZone(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
virtual HRESULT __stdcall get_Modifier(CATBSTR & oModifier); \
virtual HRESULT  __stdcall get_Application(CATIAApplication *& oApplication); \
virtual HRESULT  __stdcall get_Parent(CATBaseDispatch *& oParent); \
virtual HRESULT  __stdcall get_Name(CATBSTR & oNameBSTR); \
virtual HRESULT  __stdcall put_Name(const CATBSTR & iNameBSTR); \
virtual HRESULT  __stdcall GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj); \


#define ENVTIEdefine_CATIASemanticGDTCommonZone(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
HRESULT __stdcall  ENVTIEName::get_Modifier(CATBSTR & oModifier) \
{ \
return (ENVTIECALL(CATIASemanticGDTCommonZone,ENVTIETypeLetter,ENVTIELetter)get_Modifier(oModifier)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Application(CATIAApplication *& oApplication) \
{ \
return (ENVTIECALL(CATIASemanticGDTCommonZone,ENVTIETypeLetter,ENVTIELetter)get_Application(oApplication)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Parent(CATBaseDispatch *& oParent) \
{ \
return (ENVTIECALL(CATIASemanticGDTCommonZone,ENVTIETypeLetter,ENVTIELetter)get_Parent(oParent)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Name(CATBSTR & oNameBSTR) \
{ \
return (ENVTIECALL(CATIASemanticGDTCommonZone,ENVTIETypeLetter,ENVTIELetter)get_Name(oNameBSTR)); \
} \
HRESULT  __stdcall  ENVTIEName::put_Name(const CATBSTR & iNameBSTR) \
{ \
return (ENVTIECALL(CATIASemanticGDTCommonZone,ENVTIETypeLetter,ENVTIELetter)put_Name(iNameBSTR)); \
} \
HRESULT  __stdcall  ENVTIEName::GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj) \
{ \
return (ENVTIECALL(CATIASemanticGDTCommonZone,ENVTIETypeLetter,ENVTIELetter)GetItem(IDName,RealObj)); \
} \


/* Name of the TIE class */
#define class_TIE_CATIASemanticGDTCommonZone(classe)    TIECATIASemanticGDTCommonZone##classe


/* Common methods inside a TIE */
#define common_TIE_CATIASemanticGDTCommonZone(classe) \
 \
 \
/* Static initialization */ \
CATDefineCommonTIEMembers(CATIASemanticGDTCommonZone, classe) \
 \
 \
CATImplementTIEMethods(CATIASemanticGDTCommonZone, classe) \
CATImplementIUnknownMethodsForCATBaseUnknownTIE(CATIASemanticGDTCommonZone, classe, 2) \
CATImplementIDispatchMethodsForCATBaseUnknownTIE(CATIASemanticGDTCommonZone, classe) \
CATImplementCATBaseUnknownMethodsForTIE(CATIASemanticGDTCommonZone, classe) \
 \
HRESULT __stdcall  TIECATIASemanticGDTCommonZone##classe::get_Modifier(CATBSTR & oModifier) \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Modifier(oModifier)); \
} \
HRESULT  __stdcall  TIECATIASemanticGDTCommonZone##classe::get_Application(CATIAApplication *& oApplication) \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Application(oApplication)); \
} \
HRESULT  __stdcall  TIECATIASemanticGDTCommonZone##classe::get_Parent(CATBaseDispatch *& oParent) \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Parent(oParent)); \
} \
HRESULT  __stdcall  TIECATIASemanticGDTCommonZone##classe::get_Name(CATBSTR & oNameBSTR) \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Name(oNameBSTR)); \
} \
HRESULT  __stdcall  TIECATIASemanticGDTCommonZone##classe::put_Name(const CATBSTR & iNameBSTR) \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_Name(iNameBSTR)); \
} \
HRESULT  __stdcall  TIECATIASemanticGDTCommonZone##classe::GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj) \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetItem(IDName,RealObj)); \
} \



/* Macro used to link an implementation with an interface */
#define TIE_CATIASemanticGDTCommonZone(classe) \
 \
 \
declare_TIE_CATIASemanticGDTCommonZone(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIASemanticGDTCommonZone##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIASemanticGDTCommonZone,"CATIASemanticGDTCommonZone",CATIASemanticGDTCommonZone::MetaObject(),classe::MetaObject(),TIE); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIASemanticGDTCommonZone(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIECreation(CATIASemanticGDTCommonZone, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIASemanticGDTCommonZone##classe(classe::MetaObject(),CATIASemanticGDTCommonZone::MetaObject(),(void *)CreateTIECATIASemanticGDTCommonZone##classe)



/* Macro used to link an implementation with an interface */
/* This TIE is chained on the implementation object */
#define TIEchain_CATIASemanticGDTCommonZone(classe) \
 \
 \
declare_TIE_CATIASemanticGDTCommonZone(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIASemanticGDTCommonZone##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIASemanticGDTCommonZone,"CATIASemanticGDTCommonZone",CATIASemanticGDTCommonZone::MetaObject(),classe::MetaObject(),TIEchain); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIASemanticGDTCommonZone(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIEchainCreation(CATIASemanticGDTCommonZone, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIASemanticGDTCommonZone##classe(classe::MetaObject(),CATIASemanticGDTCommonZone::MetaObject(),(void *)CreateTIECATIASemanticGDTCommonZone##classe)


/* Macro to switch between BOA and TIE at build time */ 
#ifdef CATSYS_BOA_IS_TIE
#define BOA_CATIASemanticGDTCommonZone(classe) TIE_CATIASemanticGDTCommonZone(classe)
#else
#define BOA_CATIASemanticGDTCommonZone(classe) CATImplementBOA(CATIASemanticGDTCommonZone, classe)
#endif

#endif
