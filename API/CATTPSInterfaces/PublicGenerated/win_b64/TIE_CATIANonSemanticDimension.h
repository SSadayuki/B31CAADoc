#ifndef __TIE_CATIANonSemanticDimension
#define __TIE_CATIANonSemanticDimension

#include <string.h>
#include "CATBaseUnknown.h"
#include "CATMetaClass.h"
#include "CATMacForTie.h"
#include "CATIANonSemanticDimension.h"
#include "JS0DSPA.h"


#ifdef _WINDOWS_SOURCE
#define Exported __declspec(dllexport)
#define Imported __declspec(dllimport)
#else
#define Exported 
#define Imported 
#endif


/* To link an implementation with the interface CATIANonSemanticDimension */
#define declare_TIE_CATIANonSemanticDimension(classe) \
 \
 \
class TIECATIANonSemanticDimension##classe : public CATIANonSemanticDimension \
{ \
   private: \
      CATDeclareCommonTIEMembers \
   public: \
      CATDeclareTIEMethods(CATIANonSemanticDimension, classe) \
      CATDeclareIUnknownMethodsForCATBaseUnknownTIE \
      CATDeclareIDispatchMethodsForCATBaseUnknownTIE \
      CATDeclareCATBaseUnknownMethodsForTIE \
      virtual HRESULT __stdcall Get2dAnnot(CATIADrawingDimension *& oDim); \
      virtual HRESULT __stdcall HasDimensionLimit(CAT_VARIANT_BOOL & oHasDimLim); \
      virtual HRESULT __stdcall DimensionLimit(CATIADimensionLimit *& oDimLim); \
      virtual HRESULT  __stdcall get_Application(CATIAApplication *& oApplication); \
      virtual HRESULT  __stdcall get_Parent(CATBaseDispatch *& oParent); \
      virtual HRESULT  __stdcall get_Name(CATBSTR & oNameBSTR); \
      virtual HRESULT  __stdcall put_Name(const CATBSTR & iNameBSTR); \
      virtual HRESULT  __stdcall GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj); \
};



#define ENVTIEdeclare_CATIANonSemanticDimension(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
virtual HRESULT __stdcall Get2dAnnot(CATIADrawingDimension *& oDim); \
virtual HRESULT __stdcall HasDimensionLimit(CAT_VARIANT_BOOL & oHasDimLim); \
virtual HRESULT __stdcall DimensionLimit(CATIADimensionLimit *& oDimLim); \
virtual HRESULT  __stdcall get_Application(CATIAApplication *& oApplication); \
virtual HRESULT  __stdcall get_Parent(CATBaseDispatch *& oParent); \
virtual HRESULT  __stdcall get_Name(CATBSTR & oNameBSTR); \
virtual HRESULT  __stdcall put_Name(const CATBSTR & iNameBSTR); \
virtual HRESULT  __stdcall GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj); \


#define ENVTIEdefine_CATIANonSemanticDimension(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
HRESULT __stdcall  ENVTIEName::Get2dAnnot(CATIADrawingDimension *& oDim) \
{ \
return (ENVTIECALL(CATIANonSemanticDimension,ENVTIETypeLetter,ENVTIELetter)Get2dAnnot(oDim)); \
} \
HRESULT __stdcall  ENVTIEName::HasDimensionLimit(CAT_VARIANT_BOOL & oHasDimLim) \
{ \
return (ENVTIECALL(CATIANonSemanticDimension,ENVTIETypeLetter,ENVTIELetter)HasDimensionLimit(oHasDimLim)); \
} \
HRESULT __stdcall  ENVTIEName::DimensionLimit(CATIADimensionLimit *& oDimLim) \
{ \
return (ENVTIECALL(CATIANonSemanticDimension,ENVTIETypeLetter,ENVTIELetter)DimensionLimit(oDimLim)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Application(CATIAApplication *& oApplication) \
{ \
return (ENVTIECALL(CATIANonSemanticDimension,ENVTIETypeLetter,ENVTIELetter)get_Application(oApplication)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Parent(CATBaseDispatch *& oParent) \
{ \
return (ENVTIECALL(CATIANonSemanticDimension,ENVTIETypeLetter,ENVTIELetter)get_Parent(oParent)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Name(CATBSTR & oNameBSTR) \
{ \
return (ENVTIECALL(CATIANonSemanticDimension,ENVTIETypeLetter,ENVTIELetter)get_Name(oNameBSTR)); \
} \
HRESULT  __stdcall  ENVTIEName::put_Name(const CATBSTR & iNameBSTR) \
{ \
return (ENVTIECALL(CATIANonSemanticDimension,ENVTIETypeLetter,ENVTIELetter)put_Name(iNameBSTR)); \
} \
HRESULT  __stdcall  ENVTIEName::GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj) \
{ \
return (ENVTIECALL(CATIANonSemanticDimension,ENVTIETypeLetter,ENVTIELetter)GetItem(IDName,RealObj)); \
} \


/* Name of the TIE class */
#define class_TIE_CATIANonSemanticDimension(classe)    TIECATIANonSemanticDimension##classe


/* Common methods inside a TIE */
#define common_TIE_CATIANonSemanticDimension(classe) \
 \
 \
/* Static initialization */ \
CATDefineCommonTIEMembers(CATIANonSemanticDimension, classe) \
 \
 \
CATImplementTIEMethods(CATIANonSemanticDimension, classe) \
CATImplementIUnknownMethodsForCATBaseUnknownTIE(CATIANonSemanticDimension, classe, 2) \
CATImplementIDispatchMethodsForCATBaseUnknownTIE(CATIANonSemanticDimension, classe) \
CATImplementCATBaseUnknownMethodsForTIE(CATIANonSemanticDimension, classe) \
 \
HRESULT __stdcall  TIECATIANonSemanticDimension##classe::Get2dAnnot(CATIADrawingDimension *& oDim) \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->Get2dAnnot(oDim)); \
} \
HRESULT __stdcall  TIECATIANonSemanticDimension##classe::HasDimensionLimit(CAT_VARIANT_BOOL & oHasDimLim) \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->HasDimensionLimit(oHasDimLim)); \
} \
HRESULT __stdcall  TIECATIANonSemanticDimension##classe::DimensionLimit(CATIADimensionLimit *& oDimLim) \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->DimensionLimit(oDimLim)); \
} \
HRESULT  __stdcall  TIECATIANonSemanticDimension##classe::get_Application(CATIAApplication *& oApplication) \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Application(oApplication)); \
} \
HRESULT  __stdcall  TIECATIANonSemanticDimension##classe::get_Parent(CATBaseDispatch *& oParent) \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Parent(oParent)); \
} \
HRESULT  __stdcall  TIECATIANonSemanticDimension##classe::get_Name(CATBSTR & oNameBSTR) \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Name(oNameBSTR)); \
} \
HRESULT  __stdcall  TIECATIANonSemanticDimension##classe::put_Name(const CATBSTR & iNameBSTR) \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_Name(iNameBSTR)); \
} \
HRESULT  __stdcall  TIECATIANonSemanticDimension##classe::GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj) \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetItem(IDName,RealObj)); \
} \



/* Macro used to link an implementation with an interface */
#define TIE_CATIANonSemanticDimension(classe) \
 \
 \
declare_TIE_CATIANonSemanticDimension(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIANonSemanticDimension##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIANonSemanticDimension,"CATIANonSemanticDimension",CATIANonSemanticDimension::MetaObject(),classe::MetaObject(),TIE); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIANonSemanticDimension(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIECreation(CATIANonSemanticDimension, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIANonSemanticDimension##classe(classe::MetaObject(),CATIANonSemanticDimension::MetaObject(),(void *)CreateTIECATIANonSemanticDimension##classe)



/* Macro used to link an implementation with an interface */
/* This TIE is chained on the implementation object */
#define TIEchain_CATIANonSemanticDimension(classe) \
 \
 \
declare_TIE_CATIANonSemanticDimension(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIANonSemanticDimension##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIANonSemanticDimension,"CATIANonSemanticDimension",CATIANonSemanticDimension::MetaObject(),classe::MetaObject(),TIEchain); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIANonSemanticDimension(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIEchainCreation(CATIANonSemanticDimension, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIANonSemanticDimension##classe(classe::MetaObject(),CATIANonSemanticDimension::MetaObject(),(void *)CreateTIECATIANonSemanticDimension##classe)


/* Macro to switch between BOA and TIE at build time */ 
#ifdef CATSYS_BOA_IS_TIE
#define BOA_CATIANonSemanticDimension(classe) TIE_CATIANonSemanticDimension(classe)
#else
#define BOA_CATIANonSemanticDimension(classe) CATImplementBOA(CATIANonSemanticDimension, classe)
#endif

#endif
