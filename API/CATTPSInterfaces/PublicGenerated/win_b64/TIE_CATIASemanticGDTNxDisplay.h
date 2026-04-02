#ifndef __TIE_CATIASemanticGDTNxDisplay
#define __TIE_CATIASemanticGDTNxDisplay

#include <string.h>
#include "CATBaseUnknown.h"
#include "CATMetaClass.h"
#include "CATMacForTie.h"
#include "CATIASemanticGDTNxDisplay.h"
#include "JS0DSPA.h"


#ifdef _WINDOWS_SOURCE
#define Exported __declspec(dllexport)
#define Imported __declspec(dllimport)
#else
#define Exported 
#define Imported 
#endif


/* To link an implementation with the interface CATIASemanticGDTNxDisplay */
#define declare_TIE_CATIASemanticGDTNxDisplay(classe) \
 \
 \
class TIECATIASemanticGDTNxDisplay##classe : public CATIASemanticGDTNxDisplay \
{ \
   private: \
      CATDeclareCommonTIEMembers \
   public: \
      CATDeclareTIEMethods(CATIASemanticGDTNxDisplay, classe) \
      CATDeclareIUnknownMethodsForCATBaseUnknownTIE \
      CATDeclareIDispatchMethodsForCATBaseUnknownTIE \
      CATDeclareCATBaseUnknownMethodsForTIE \
      virtual HRESULT __stdcall get_InstanceCount(CATLONG & oInstanceCount); \
      virtual HRESULT __stdcall IsASeparate(CAT_VARIANT_BOOL & oIsSeparate); \
      virtual HRESULT __stdcall IsACollection(CAT_VARIANT_BOOL & oIsColl); \
      virtual HRESULT __stdcall CommonZone(CATIASemanticGDTCommonZone *& oCommonZone); \
      virtual HRESULT  __stdcall get_Application(CATIAApplication *& oApplication); \
      virtual HRESULT  __stdcall get_Parent(CATBaseDispatch *& oParent); \
      virtual HRESULT  __stdcall get_Name(CATBSTR & oNameBSTR); \
      virtual HRESULT  __stdcall put_Name(const CATBSTR & iNameBSTR); \
      virtual HRESULT  __stdcall GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj); \
};



#define ENVTIEdeclare_CATIASemanticGDTNxDisplay(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
virtual HRESULT __stdcall get_InstanceCount(CATLONG & oInstanceCount); \
virtual HRESULT __stdcall IsASeparate(CAT_VARIANT_BOOL & oIsSeparate); \
virtual HRESULT __stdcall IsACollection(CAT_VARIANT_BOOL & oIsColl); \
virtual HRESULT __stdcall CommonZone(CATIASemanticGDTCommonZone *& oCommonZone); \
virtual HRESULT  __stdcall get_Application(CATIAApplication *& oApplication); \
virtual HRESULT  __stdcall get_Parent(CATBaseDispatch *& oParent); \
virtual HRESULT  __stdcall get_Name(CATBSTR & oNameBSTR); \
virtual HRESULT  __stdcall put_Name(const CATBSTR & iNameBSTR); \
virtual HRESULT  __stdcall GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj); \


#define ENVTIEdefine_CATIASemanticGDTNxDisplay(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
HRESULT __stdcall  ENVTIEName::get_InstanceCount(CATLONG & oInstanceCount) \
{ \
return (ENVTIECALL(CATIASemanticGDTNxDisplay,ENVTIETypeLetter,ENVTIELetter)get_InstanceCount(oInstanceCount)); \
} \
HRESULT __stdcall  ENVTIEName::IsASeparate(CAT_VARIANT_BOOL & oIsSeparate) \
{ \
return (ENVTIECALL(CATIASemanticGDTNxDisplay,ENVTIETypeLetter,ENVTIELetter)IsASeparate(oIsSeparate)); \
} \
HRESULT __stdcall  ENVTIEName::IsACollection(CAT_VARIANT_BOOL & oIsColl) \
{ \
return (ENVTIECALL(CATIASemanticGDTNxDisplay,ENVTIETypeLetter,ENVTIELetter)IsACollection(oIsColl)); \
} \
HRESULT __stdcall  ENVTIEName::CommonZone(CATIASemanticGDTCommonZone *& oCommonZone) \
{ \
return (ENVTIECALL(CATIASemanticGDTNxDisplay,ENVTIETypeLetter,ENVTIELetter)CommonZone(oCommonZone)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Application(CATIAApplication *& oApplication) \
{ \
return (ENVTIECALL(CATIASemanticGDTNxDisplay,ENVTIETypeLetter,ENVTIELetter)get_Application(oApplication)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Parent(CATBaseDispatch *& oParent) \
{ \
return (ENVTIECALL(CATIASemanticGDTNxDisplay,ENVTIETypeLetter,ENVTIELetter)get_Parent(oParent)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Name(CATBSTR & oNameBSTR) \
{ \
return (ENVTIECALL(CATIASemanticGDTNxDisplay,ENVTIETypeLetter,ENVTIELetter)get_Name(oNameBSTR)); \
} \
HRESULT  __stdcall  ENVTIEName::put_Name(const CATBSTR & iNameBSTR) \
{ \
return (ENVTIECALL(CATIASemanticGDTNxDisplay,ENVTIETypeLetter,ENVTIELetter)put_Name(iNameBSTR)); \
} \
HRESULT  __stdcall  ENVTIEName::GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj) \
{ \
return (ENVTIECALL(CATIASemanticGDTNxDisplay,ENVTIETypeLetter,ENVTIELetter)GetItem(IDName,RealObj)); \
} \


/* Name of the TIE class */
#define class_TIE_CATIASemanticGDTNxDisplay(classe)    TIECATIASemanticGDTNxDisplay##classe


/* Common methods inside a TIE */
#define common_TIE_CATIASemanticGDTNxDisplay(classe) \
 \
 \
/* Static initialization */ \
CATDefineCommonTIEMembers(CATIASemanticGDTNxDisplay, classe) \
 \
 \
CATImplementTIEMethods(CATIASemanticGDTNxDisplay, classe) \
CATImplementIUnknownMethodsForCATBaseUnknownTIE(CATIASemanticGDTNxDisplay, classe, 2) \
CATImplementIDispatchMethodsForCATBaseUnknownTIE(CATIASemanticGDTNxDisplay, classe) \
CATImplementCATBaseUnknownMethodsForTIE(CATIASemanticGDTNxDisplay, classe) \
 \
HRESULT __stdcall  TIECATIASemanticGDTNxDisplay##classe::get_InstanceCount(CATLONG & oInstanceCount) \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_InstanceCount(oInstanceCount)); \
} \
HRESULT __stdcall  TIECATIASemanticGDTNxDisplay##classe::IsASeparate(CAT_VARIANT_BOOL & oIsSeparate) \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->IsASeparate(oIsSeparate)); \
} \
HRESULT __stdcall  TIECATIASemanticGDTNxDisplay##classe::IsACollection(CAT_VARIANT_BOOL & oIsColl) \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->IsACollection(oIsColl)); \
} \
HRESULT __stdcall  TIECATIASemanticGDTNxDisplay##classe::CommonZone(CATIASemanticGDTCommonZone *& oCommonZone) \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->CommonZone(oCommonZone)); \
} \
HRESULT  __stdcall  TIECATIASemanticGDTNxDisplay##classe::get_Application(CATIAApplication *& oApplication) \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Application(oApplication)); \
} \
HRESULT  __stdcall  TIECATIASemanticGDTNxDisplay##classe::get_Parent(CATBaseDispatch *& oParent) \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Parent(oParent)); \
} \
HRESULT  __stdcall  TIECATIASemanticGDTNxDisplay##classe::get_Name(CATBSTR & oNameBSTR) \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Name(oNameBSTR)); \
} \
HRESULT  __stdcall  TIECATIASemanticGDTNxDisplay##classe::put_Name(const CATBSTR & iNameBSTR) \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_Name(iNameBSTR)); \
} \
HRESULT  __stdcall  TIECATIASemanticGDTNxDisplay##classe::GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj) \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetItem(IDName,RealObj)); \
} \



/* Macro used to link an implementation with an interface */
#define TIE_CATIASemanticGDTNxDisplay(classe) \
 \
 \
declare_TIE_CATIASemanticGDTNxDisplay(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIASemanticGDTNxDisplay##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIASemanticGDTNxDisplay,"CATIASemanticGDTNxDisplay",CATIASemanticGDTNxDisplay::MetaObject(),classe::MetaObject(),TIE); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIASemanticGDTNxDisplay(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIECreation(CATIASemanticGDTNxDisplay, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIASemanticGDTNxDisplay##classe(classe::MetaObject(),CATIASemanticGDTNxDisplay::MetaObject(),(void *)CreateTIECATIASemanticGDTNxDisplay##classe)



/* Macro used to link an implementation with an interface */
/* This TIE is chained on the implementation object */
#define TIEchain_CATIASemanticGDTNxDisplay(classe) \
 \
 \
declare_TIE_CATIASemanticGDTNxDisplay(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIASemanticGDTNxDisplay##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIASemanticGDTNxDisplay,"CATIASemanticGDTNxDisplay",CATIASemanticGDTNxDisplay::MetaObject(),classe::MetaObject(),TIEchain); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIASemanticGDTNxDisplay(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIEchainCreation(CATIASemanticGDTNxDisplay, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIASemanticGDTNxDisplay##classe(classe::MetaObject(),CATIASemanticGDTNxDisplay::MetaObject(),(void *)CreateTIECATIASemanticGDTNxDisplay##classe)


/* Macro to switch between BOA and TIE at build time */ 
#ifdef CATSYS_BOA_IS_TIE
#define BOA_CATIASemanticGDTNxDisplay(classe) TIE_CATIASemanticGDTNxDisplay(classe)
#else
#define BOA_CATIASemanticGDTNxDisplay(classe) CATImplementBOA(CATIASemanticGDTNxDisplay, classe)
#endif

#endif
