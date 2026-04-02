#ifndef __TIE_CATIADefaultAnnotation
#define __TIE_CATIADefaultAnnotation

#include <string.h>
#include "CATBaseUnknown.h"
#include "CATMetaClass.h"
#include "CATMacForTie.h"
#include "CATIADefaultAnnotation.h"
#include "JS0DSPA.h"


#ifdef _WINDOWS_SOURCE
#define Exported __declspec(dllexport)
#define Imported __declspec(dllimport)
#else
#define Exported 
#define Imported 
#endif


/* To link an implementation with the interface CATIADefaultAnnotation */
#define declare_TIE_CATIADefaultAnnotation(classe) \
 \
 \
class TIECATIADefaultAnnotation##classe : public CATIADefaultAnnotation \
{ \
   private: \
      CATDeclareCommonTIEMembers \
   public: \
      CATDeclareTIEMethods(CATIADefaultAnnotation, classe) \
      CATDeclareIUnknownMethodsForCATBaseUnknownTIE \
      CATDeclareIDispatchMethodsForCATBaseUnknownTIE \
      CATDeclareCATBaseUnknownMethodsForTIE \
      virtual HRESULT __stdcall get_LinkWiGeomType(CATBSTR & oLinkWiGeom); \
      virtual HRESULT __stdcall get_SearchAlgoType(CATBSTR & oAlgo); \
      virtual HRESULT __stdcall IsInAutomaticSearchMode(CAT_VARIANT_BOOL & oIsAutoMode); \
      virtual HRESULT  __stdcall get_Application(CATIAApplication *& oApplication); \
      virtual HRESULT  __stdcall get_Parent(CATBaseDispatch *& oParent); \
      virtual HRESULT  __stdcall get_Name(CATBSTR & oNameBSTR); \
      virtual HRESULT  __stdcall put_Name(const CATBSTR & iNameBSTR); \
      virtual HRESULT  __stdcall GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj); \
};



#define ENVTIEdeclare_CATIADefaultAnnotation(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
virtual HRESULT __stdcall get_LinkWiGeomType(CATBSTR & oLinkWiGeom); \
virtual HRESULT __stdcall get_SearchAlgoType(CATBSTR & oAlgo); \
virtual HRESULT __stdcall IsInAutomaticSearchMode(CAT_VARIANT_BOOL & oIsAutoMode); \
virtual HRESULT  __stdcall get_Application(CATIAApplication *& oApplication); \
virtual HRESULT  __stdcall get_Parent(CATBaseDispatch *& oParent); \
virtual HRESULT  __stdcall get_Name(CATBSTR & oNameBSTR); \
virtual HRESULT  __stdcall put_Name(const CATBSTR & iNameBSTR); \
virtual HRESULT  __stdcall GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj); \


#define ENVTIEdefine_CATIADefaultAnnotation(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
HRESULT __stdcall  ENVTIEName::get_LinkWiGeomType(CATBSTR & oLinkWiGeom) \
{ \
return (ENVTIECALL(CATIADefaultAnnotation,ENVTIETypeLetter,ENVTIELetter)get_LinkWiGeomType(oLinkWiGeom)); \
} \
HRESULT __stdcall  ENVTIEName::get_SearchAlgoType(CATBSTR & oAlgo) \
{ \
return (ENVTIECALL(CATIADefaultAnnotation,ENVTIETypeLetter,ENVTIELetter)get_SearchAlgoType(oAlgo)); \
} \
HRESULT __stdcall  ENVTIEName::IsInAutomaticSearchMode(CAT_VARIANT_BOOL & oIsAutoMode) \
{ \
return (ENVTIECALL(CATIADefaultAnnotation,ENVTIETypeLetter,ENVTIELetter)IsInAutomaticSearchMode(oIsAutoMode)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Application(CATIAApplication *& oApplication) \
{ \
return (ENVTIECALL(CATIADefaultAnnotation,ENVTIETypeLetter,ENVTIELetter)get_Application(oApplication)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Parent(CATBaseDispatch *& oParent) \
{ \
return (ENVTIECALL(CATIADefaultAnnotation,ENVTIETypeLetter,ENVTIELetter)get_Parent(oParent)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Name(CATBSTR & oNameBSTR) \
{ \
return (ENVTIECALL(CATIADefaultAnnotation,ENVTIETypeLetter,ENVTIELetter)get_Name(oNameBSTR)); \
} \
HRESULT  __stdcall  ENVTIEName::put_Name(const CATBSTR & iNameBSTR) \
{ \
return (ENVTIECALL(CATIADefaultAnnotation,ENVTIETypeLetter,ENVTIELetter)put_Name(iNameBSTR)); \
} \
HRESULT  __stdcall  ENVTIEName::GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj) \
{ \
return (ENVTIECALL(CATIADefaultAnnotation,ENVTIETypeLetter,ENVTIELetter)GetItem(IDName,RealObj)); \
} \


/* Name of the TIE class */
#define class_TIE_CATIADefaultAnnotation(classe)    TIECATIADefaultAnnotation##classe


/* Common methods inside a TIE */
#define common_TIE_CATIADefaultAnnotation(classe) \
 \
 \
/* Static initialization */ \
CATDefineCommonTIEMembers(CATIADefaultAnnotation, classe) \
 \
 \
CATImplementTIEMethods(CATIADefaultAnnotation, classe) \
CATImplementIUnknownMethodsForCATBaseUnknownTIE(CATIADefaultAnnotation, classe, 2) \
CATImplementIDispatchMethodsForCATBaseUnknownTIE(CATIADefaultAnnotation, classe) \
CATImplementCATBaseUnknownMethodsForTIE(CATIADefaultAnnotation, classe) \
 \
HRESULT __stdcall  TIECATIADefaultAnnotation##classe::get_LinkWiGeomType(CATBSTR & oLinkWiGeom) \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_LinkWiGeomType(oLinkWiGeom)); \
} \
HRESULT __stdcall  TIECATIADefaultAnnotation##classe::get_SearchAlgoType(CATBSTR & oAlgo) \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_SearchAlgoType(oAlgo)); \
} \
HRESULT __stdcall  TIECATIADefaultAnnotation##classe::IsInAutomaticSearchMode(CAT_VARIANT_BOOL & oIsAutoMode) \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->IsInAutomaticSearchMode(oIsAutoMode)); \
} \
HRESULT  __stdcall  TIECATIADefaultAnnotation##classe::get_Application(CATIAApplication *& oApplication) \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Application(oApplication)); \
} \
HRESULT  __stdcall  TIECATIADefaultAnnotation##classe::get_Parent(CATBaseDispatch *& oParent) \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Parent(oParent)); \
} \
HRESULT  __stdcall  TIECATIADefaultAnnotation##classe::get_Name(CATBSTR & oNameBSTR) \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Name(oNameBSTR)); \
} \
HRESULT  __stdcall  TIECATIADefaultAnnotation##classe::put_Name(const CATBSTR & iNameBSTR) \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_Name(iNameBSTR)); \
} \
HRESULT  __stdcall  TIECATIADefaultAnnotation##classe::GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj) \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetItem(IDName,RealObj)); \
} \



/* Macro used to link an implementation with an interface */
#define TIE_CATIADefaultAnnotation(classe) \
 \
 \
declare_TIE_CATIADefaultAnnotation(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIADefaultAnnotation##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIADefaultAnnotation,"CATIADefaultAnnotation",CATIADefaultAnnotation::MetaObject(),classe::MetaObject(),TIE); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIADefaultAnnotation(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIECreation(CATIADefaultAnnotation, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIADefaultAnnotation##classe(classe::MetaObject(),CATIADefaultAnnotation::MetaObject(),(void *)CreateTIECATIADefaultAnnotation##classe)



/* Macro used to link an implementation with an interface */
/* This TIE is chained on the implementation object */
#define TIEchain_CATIADefaultAnnotation(classe) \
 \
 \
declare_TIE_CATIADefaultAnnotation(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIADefaultAnnotation##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIADefaultAnnotation,"CATIADefaultAnnotation",CATIADefaultAnnotation::MetaObject(),classe::MetaObject(),TIEchain); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIADefaultAnnotation(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIEchainCreation(CATIADefaultAnnotation, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIADefaultAnnotation##classe(classe::MetaObject(),CATIADefaultAnnotation::MetaObject(),(void *)CreateTIECATIADefaultAnnotation##classe)


/* Macro to switch between BOA and TIE at build time */ 
#ifdef CATSYS_BOA_IS_TIE
#define BOA_CATIADefaultAnnotation(classe) TIE_CATIADefaultAnnotation(classe)
#else
#define BOA_CATIADefaultAnnotation(classe) CATImplementBOA(CATIADefaultAnnotation, classe)
#endif

#endif
