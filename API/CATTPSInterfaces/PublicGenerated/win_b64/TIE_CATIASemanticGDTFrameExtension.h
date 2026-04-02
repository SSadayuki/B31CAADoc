#ifndef __TIE_CATIASemanticGDTFrameExtension
#define __TIE_CATIASemanticGDTFrameExtension

#include <string.h>
#include "CATBaseUnknown.h"
#include "CATMetaClass.h"
#include "CATMacForTie.h"
#include "CATIASemanticGDTFrameExtension.h"
#include "JS0DSPA.h"


#ifdef _WINDOWS_SOURCE
#define Exported __declspec(dllexport)
#define Imported __declspec(dllimport)
#else
#define Exported 
#define Imported 
#endif


/* To link an implementation with the interface CATIASemanticGDTFrameExtension */
#define declare_TIE_CATIASemanticGDTFrameExtension(classe) \
 \
 \
class TIECATIASemanticGDTFrameExtension##classe : public CATIASemanticGDTFrameExtension \
{ \
   private: \
      CATDeclareCommonTIEMembers \
   public: \
      CATDeclareTIEMethods(CATIASemanticGDTFrameExtension, classe) \
      CATDeclareIUnknownMethodsForCATBaseUnknownTIE \
      CATDeclareIDispatchMethodsForCATBaseUnknownTIE \
      CATDeclareCATBaseUnknownMethodsForTIE \
      virtual HRESULT __stdcall get_Type(CATBSTR & oType); \
      virtual HRESULT __stdcall get_DirectionSpecification(CATBSTR & oDirSpec); \
      virtual HRESULT __stdcall DirectionReference(CATIADatumSimple *& oDatumFeature); \
      virtual HRESULT __stdcall Orientation(double & oOrientation); \
      virtual HRESULT  __stdcall get_Application(CATIAApplication *& oApplication); \
      virtual HRESULT  __stdcall get_Parent(CATBaseDispatch *& oParent); \
      virtual HRESULT  __stdcall get_Name(CATBSTR & oNameBSTR); \
      virtual HRESULT  __stdcall put_Name(const CATBSTR & iNameBSTR); \
      virtual HRESULT  __stdcall GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj); \
};



#define ENVTIEdeclare_CATIASemanticGDTFrameExtension(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
virtual HRESULT __stdcall get_Type(CATBSTR & oType); \
virtual HRESULT __stdcall get_DirectionSpecification(CATBSTR & oDirSpec); \
virtual HRESULT __stdcall DirectionReference(CATIADatumSimple *& oDatumFeature); \
virtual HRESULT __stdcall Orientation(double & oOrientation); \
virtual HRESULT  __stdcall get_Application(CATIAApplication *& oApplication); \
virtual HRESULT  __stdcall get_Parent(CATBaseDispatch *& oParent); \
virtual HRESULT  __stdcall get_Name(CATBSTR & oNameBSTR); \
virtual HRESULT  __stdcall put_Name(const CATBSTR & iNameBSTR); \
virtual HRESULT  __stdcall GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj); \


#define ENVTIEdefine_CATIASemanticGDTFrameExtension(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
HRESULT __stdcall  ENVTIEName::get_Type(CATBSTR & oType) \
{ \
return (ENVTIECALL(CATIASemanticGDTFrameExtension,ENVTIETypeLetter,ENVTIELetter)get_Type(oType)); \
} \
HRESULT __stdcall  ENVTIEName::get_DirectionSpecification(CATBSTR & oDirSpec) \
{ \
return (ENVTIECALL(CATIASemanticGDTFrameExtension,ENVTIETypeLetter,ENVTIELetter)get_DirectionSpecification(oDirSpec)); \
} \
HRESULT __stdcall  ENVTIEName::DirectionReference(CATIADatumSimple *& oDatumFeature) \
{ \
return (ENVTIECALL(CATIASemanticGDTFrameExtension,ENVTIETypeLetter,ENVTIELetter)DirectionReference(oDatumFeature)); \
} \
HRESULT __stdcall  ENVTIEName::Orientation(double & oOrientation) \
{ \
return (ENVTIECALL(CATIASemanticGDTFrameExtension,ENVTIETypeLetter,ENVTIELetter)Orientation(oOrientation)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Application(CATIAApplication *& oApplication) \
{ \
return (ENVTIECALL(CATIASemanticGDTFrameExtension,ENVTIETypeLetter,ENVTIELetter)get_Application(oApplication)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Parent(CATBaseDispatch *& oParent) \
{ \
return (ENVTIECALL(CATIASemanticGDTFrameExtension,ENVTIETypeLetter,ENVTIELetter)get_Parent(oParent)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Name(CATBSTR & oNameBSTR) \
{ \
return (ENVTIECALL(CATIASemanticGDTFrameExtension,ENVTIETypeLetter,ENVTIELetter)get_Name(oNameBSTR)); \
} \
HRESULT  __stdcall  ENVTIEName::put_Name(const CATBSTR & iNameBSTR) \
{ \
return (ENVTIECALL(CATIASemanticGDTFrameExtension,ENVTIETypeLetter,ENVTIELetter)put_Name(iNameBSTR)); \
} \
HRESULT  __stdcall  ENVTIEName::GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj) \
{ \
return (ENVTIECALL(CATIASemanticGDTFrameExtension,ENVTIETypeLetter,ENVTIELetter)GetItem(IDName,RealObj)); \
} \


/* Name of the TIE class */
#define class_TIE_CATIASemanticGDTFrameExtension(classe)    TIECATIASemanticGDTFrameExtension##classe


/* Common methods inside a TIE */
#define common_TIE_CATIASemanticGDTFrameExtension(classe) \
 \
 \
/* Static initialization */ \
CATDefineCommonTIEMembers(CATIASemanticGDTFrameExtension, classe) \
 \
 \
CATImplementTIEMethods(CATIASemanticGDTFrameExtension, classe) \
CATImplementIUnknownMethodsForCATBaseUnknownTIE(CATIASemanticGDTFrameExtension, classe, 2) \
CATImplementIDispatchMethodsForCATBaseUnknownTIE(CATIASemanticGDTFrameExtension, classe) \
CATImplementCATBaseUnknownMethodsForTIE(CATIASemanticGDTFrameExtension, classe) \
 \
HRESULT __stdcall  TIECATIASemanticGDTFrameExtension##classe::get_Type(CATBSTR & oType) \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Type(oType)); \
} \
HRESULT __stdcall  TIECATIASemanticGDTFrameExtension##classe::get_DirectionSpecification(CATBSTR & oDirSpec) \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_DirectionSpecification(oDirSpec)); \
} \
HRESULT __stdcall  TIECATIASemanticGDTFrameExtension##classe::DirectionReference(CATIADatumSimple *& oDatumFeature) \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->DirectionReference(oDatumFeature)); \
} \
HRESULT __stdcall  TIECATIASemanticGDTFrameExtension##classe::Orientation(double & oOrientation) \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->Orientation(oOrientation)); \
} \
HRESULT  __stdcall  TIECATIASemanticGDTFrameExtension##classe::get_Application(CATIAApplication *& oApplication) \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Application(oApplication)); \
} \
HRESULT  __stdcall  TIECATIASemanticGDTFrameExtension##classe::get_Parent(CATBaseDispatch *& oParent) \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Parent(oParent)); \
} \
HRESULT  __stdcall  TIECATIASemanticGDTFrameExtension##classe::get_Name(CATBSTR & oNameBSTR) \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Name(oNameBSTR)); \
} \
HRESULT  __stdcall  TIECATIASemanticGDTFrameExtension##classe::put_Name(const CATBSTR & iNameBSTR) \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_Name(iNameBSTR)); \
} \
HRESULT  __stdcall  TIECATIASemanticGDTFrameExtension##classe::GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj) \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetItem(IDName,RealObj)); \
} \



/* Macro used to link an implementation with an interface */
#define TIE_CATIASemanticGDTFrameExtension(classe) \
 \
 \
declare_TIE_CATIASemanticGDTFrameExtension(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIASemanticGDTFrameExtension##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIASemanticGDTFrameExtension,"CATIASemanticGDTFrameExtension",CATIASemanticGDTFrameExtension::MetaObject(),classe::MetaObject(),TIE); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIASemanticGDTFrameExtension(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIECreation(CATIASemanticGDTFrameExtension, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIASemanticGDTFrameExtension##classe(classe::MetaObject(),CATIASemanticGDTFrameExtension::MetaObject(),(void *)CreateTIECATIASemanticGDTFrameExtension##classe)



/* Macro used to link an implementation with an interface */
/* This TIE is chained on the implementation object */
#define TIEchain_CATIASemanticGDTFrameExtension(classe) \
 \
 \
declare_TIE_CATIASemanticGDTFrameExtension(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIASemanticGDTFrameExtension##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIASemanticGDTFrameExtension,"CATIASemanticGDTFrameExtension",CATIASemanticGDTFrameExtension::MetaObject(),classe::MetaObject(),TIEchain); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIASemanticGDTFrameExtension(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIEchainCreation(CATIASemanticGDTFrameExtension, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIASemanticGDTFrameExtension##classe(classe::MetaObject(),CATIASemanticGDTFrameExtension::MetaObject(),(void *)CreateTIECATIASemanticGDTFrameExtension##classe)


/* Macro to switch between BOA and TIE at build time */ 
#ifdef CATSYS_BOA_IS_TIE
#define BOA_CATIASemanticGDTFrameExtension(classe) TIE_CATIASemanticGDTFrameExtension(classe)
#else
#define BOA_CATIASemanticGDTFrameExtension(classe) CATImplementBOA(CATIASemanticGDTFrameExtension, classe)
#endif

#endif
