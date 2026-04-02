#ifndef __TIE_CATIAAnnotationSetTransformIntoAssemblySet
#define __TIE_CATIAAnnotationSetTransformIntoAssemblySet

#include <string.h>
#include "CATBaseUnknown.h"
#include "CATMetaClass.h"
#include "CATMacForTie.h"
#include "CATIAAnnotationSetTransformIntoAssemblySet.h"
#include "JS0DSPA.h"


#ifdef _WINDOWS_SOURCE
#define Exported __declspec(dllexport)
#define Imported __declspec(dllimport)
#else
#define Exported 
#define Imported 
#endif


/* To link an implementation with the interface CATIAAnnotationSetTransformIntoAssemblySet */
#define declare_TIE_CATIAAnnotationSetTransformIntoAssemblySet(classe) \
 \
 \
class TIECATIAAnnotationSetTransformIntoAssemblySet##classe : public CATIAAnnotationSetTransformIntoAssemblySet \
{ \
   private: \
      CATDeclareCommonTIEMembers \
   public: \
      CATDeclareTIEMethods(CATIAAnnotationSetTransformIntoAssemblySet, classe) \
      CATDeclareIUnknownMethodsForCATBaseUnknownTIE \
      CATDeclareIDispatchMethodsForCATBaseUnknownTIE \
      CATDeclareCATBaseUnknownMethodsForTIE \
      virtual HRESULT __stdcall Transform(const CATBSTR & iAssemblyannotationSetName); \
      virtual HRESULT  __stdcall get_Application(CATIAApplication *& oApplication); \
      virtual HRESULT  __stdcall get_Parent(CATBaseDispatch *& oParent); \
      virtual HRESULT  __stdcall get_Name(CATBSTR & oNameBSTR); \
      virtual HRESULT  __stdcall put_Name(const CATBSTR & iNameBSTR); \
      virtual HRESULT  __stdcall GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj); \
};



#define ENVTIEdeclare_CATIAAnnotationSetTransformIntoAssemblySet(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
virtual HRESULT __stdcall Transform(const CATBSTR & iAssemblyannotationSetName); \
virtual HRESULT  __stdcall get_Application(CATIAApplication *& oApplication); \
virtual HRESULT  __stdcall get_Parent(CATBaseDispatch *& oParent); \
virtual HRESULT  __stdcall get_Name(CATBSTR & oNameBSTR); \
virtual HRESULT  __stdcall put_Name(const CATBSTR & iNameBSTR); \
virtual HRESULT  __stdcall GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj); \


#define ENVTIEdefine_CATIAAnnotationSetTransformIntoAssemblySet(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
HRESULT __stdcall  ENVTIEName::Transform(const CATBSTR & iAssemblyannotationSetName) \
{ \
return (ENVTIECALL(CATIAAnnotationSetTransformIntoAssemblySet,ENVTIETypeLetter,ENVTIELetter)Transform(iAssemblyannotationSetName)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Application(CATIAApplication *& oApplication) \
{ \
return (ENVTIECALL(CATIAAnnotationSetTransformIntoAssemblySet,ENVTIETypeLetter,ENVTIELetter)get_Application(oApplication)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Parent(CATBaseDispatch *& oParent) \
{ \
return (ENVTIECALL(CATIAAnnotationSetTransformIntoAssemblySet,ENVTIETypeLetter,ENVTIELetter)get_Parent(oParent)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Name(CATBSTR & oNameBSTR) \
{ \
return (ENVTIECALL(CATIAAnnotationSetTransformIntoAssemblySet,ENVTIETypeLetter,ENVTIELetter)get_Name(oNameBSTR)); \
} \
HRESULT  __stdcall  ENVTIEName::put_Name(const CATBSTR & iNameBSTR) \
{ \
return (ENVTIECALL(CATIAAnnotationSetTransformIntoAssemblySet,ENVTIETypeLetter,ENVTIELetter)put_Name(iNameBSTR)); \
} \
HRESULT  __stdcall  ENVTIEName::GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj) \
{ \
return (ENVTIECALL(CATIAAnnotationSetTransformIntoAssemblySet,ENVTIETypeLetter,ENVTIELetter)GetItem(IDName,RealObj)); \
} \


/* Name of the TIE class */
#define class_TIE_CATIAAnnotationSetTransformIntoAssemblySet(classe)    TIECATIAAnnotationSetTransformIntoAssemblySet##classe


/* Common methods inside a TIE */
#define common_TIE_CATIAAnnotationSetTransformIntoAssemblySet(classe) \
 \
 \
/* Static initialization */ \
CATDefineCommonTIEMembers(CATIAAnnotationSetTransformIntoAssemblySet, classe) \
 \
 \
CATImplementTIEMethods(CATIAAnnotationSetTransformIntoAssemblySet, classe) \
CATImplementIUnknownMethodsForCATBaseUnknownTIE(CATIAAnnotationSetTransformIntoAssemblySet, classe, 2) \
CATImplementIDispatchMethodsForCATBaseUnknownTIE(CATIAAnnotationSetTransformIntoAssemblySet, classe) \
CATImplementCATBaseUnknownMethodsForTIE(CATIAAnnotationSetTransformIntoAssemblySet, classe) \
 \
HRESULT __stdcall  TIECATIAAnnotationSetTransformIntoAssemblySet##classe::Transform(const CATBSTR & iAssemblyannotationSetName) \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->Transform(iAssemblyannotationSetName)); \
} \
HRESULT  __stdcall  TIECATIAAnnotationSetTransformIntoAssemblySet##classe::get_Application(CATIAApplication *& oApplication) \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Application(oApplication)); \
} \
HRESULT  __stdcall  TIECATIAAnnotationSetTransformIntoAssemblySet##classe::get_Parent(CATBaseDispatch *& oParent) \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Parent(oParent)); \
} \
HRESULT  __stdcall  TIECATIAAnnotationSetTransformIntoAssemblySet##classe::get_Name(CATBSTR & oNameBSTR) \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Name(oNameBSTR)); \
} \
HRESULT  __stdcall  TIECATIAAnnotationSetTransformIntoAssemblySet##classe::put_Name(const CATBSTR & iNameBSTR) \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_Name(iNameBSTR)); \
} \
HRESULT  __stdcall  TIECATIAAnnotationSetTransformIntoAssemblySet##classe::GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj) \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetItem(IDName,RealObj)); \
} \



/* Macro used to link an implementation with an interface */
#define TIE_CATIAAnnotationSetTransformIntoAssemblySet(classe) \
 \
 \
declare_TIE_CATIAAnnotationSetTransformIntoAssemblySet(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIAAnnotationSetTransformIntoAssemblySet##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIAAnnotationSetTransformIntoAssemblySet,"CATIAAnnotationSetTransformIntoAssemblySet",CATIAAnnotationSetTransformIntoAssemblySet::MetaObject(),classe::MetaObject(),TIE); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIAAnnotationSetTransformIntoAssemblySet(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIECreation(CATIAAnnotationSetTransformIntoAssemblySet, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIAAnnotationSetTransformIntoAssemblySet##classe(classe::MetaObject(),CATIAAnnotationSetTransformIntoAssemblySet::MetaObject(),(void *)CreateTIECATIAAnnotationSetTransformIntoAssemblySet##classe)



/* Macro used to link an implementation with an interface */
/* This TIE is chained on the implementation object */
#define TIEchain_CATIAAnnotationSetTransformIntoAssemblySet(classe) \
 \
 \
declare_TIE_CATIAAnnotationSetTransformIntoAssemblySet(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIAAnnotationSetTransformIntoAssemblySet##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIAAnnotationSetTransformIntoAssemblySet,"CATIAAnnotationSetTransformIntoAssemblySet",CATIAAnnotationSetTransformIntoAssemblySet::MetaObject(),classe::MetaObject(),TIEchain); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIAAnnotationSetTransformIntoAssemblySet(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIEchainCreation(CATIAAnnotationSetTransformIntoAssemblySet, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIAAnnotationSetTransformIntoAssemblySet##classe(classe::MetaObject(),CATIAAnnotationSetTransformIntoAssemblySet::MetaObject(),(void *)CreateTIECATIAAnnotationSetTransformIntoAssemblySet##classe)


/* Macro to switch between BOA and TIE at build time */ 
#ifdef CATSYS_BOA_IS_TIE
#define BOA_CATIAAnnotationSetTransformIntoAssemblySet(classe) TIE_CATIAAnnotationSetTransformIntoAssemblySet(classe)
#else
#define BOA_CATIAAnnotationSetTransformIntoAssemblySet(classe) CATImplementBOA(CATIAAnnotationSetTransformIntoAssemblySet, classe)
#endif

#endif
