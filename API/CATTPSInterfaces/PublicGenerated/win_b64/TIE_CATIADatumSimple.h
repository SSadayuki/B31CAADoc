#ifndef __TIE_CATIADatumSimple
#define __TIE_CATIADatumSimple

#include <string.h>
#include "CATBaseUnknown.h"
#include "CATMetaClass.h"
#include "CATMacForTie.h"
#include "CATIADatumSimple.h"
#include "JS0DSPA.h"


#ifdef _WINDOWS_SOURCE
#define Exported __declspec(dllexport)
#define Imported __declspec(dllimport)
#else
#define Exported 
#define Imported 
#endif


/* To link an implementation with the interface CATIADatumSimple */
#define declare_TIE_CATIADatumSimple(classe) \
 \
 \
class TIECATIADatumSimple##classe : public CATIADatumSimple \
{ \
   private: \
      CATDeclareCommonTIEMembers \
   public: \
      CATDeclareTIEMethods(CATIADatumSimple, classe) \
      CATDeclareIUnknownMethodsForCATBaseUnknownTIE \
      CATDeclareIDispatchMethodsForCATBaseUnknownTIE \
      CATDeclareCATBaseUnknownMethodsForTIE \
      virtual HRESULT __stdcall get_Label(CATBSTR & oLabel); \
      virtual HRESULT __stdcall put_Label(const CATBSTR & iLabel); \
      virtual HRESULT __stdcall get_Targets(CATIAAnnotations *& oTargets); \
      virtual HRESULT  __stdcall get_Application(CATIAApplication *& oApplication); \
      virtual HRESULT  __stdcall get_Parent(CATBaseDispatch *& oParent); \
      virtual HRESULT  __stdcall get_Name(CATBSTR & oNameBSTR); \
      virtual HRESULT  __stdcall put_Name(const CATBSTR & iNameBSTR); \
      virtual HRESULT  __stdcall GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj); \
};



#define ENVTIEdeclare_CATIADatumSimple(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
virtual HRESULT __stdcall get_Label(CATBSTR & oLabel); \
virtual HRESULT __stdcall put_Label(const CATBSTR & iLabel); \
virtual HRESULT __stdcall get_Targets(CATIAAnnotations *& oTargets); \
virtual HRESULT  __stdcall get_Application(CATIAApplication *& oApplication); \
virtual HRESULT  __stdcall get_Parent(CATBaseDispatch *& oParent); \
virtual HRESULT  __stdcall get_Name(CATBSTR & oNameBSTR); \
virtual HRESULT  __stdcall put_Name(const CATBSTR & iNameBSTR); \
virtual HRESULT  __stdcall GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj); \


#define ENVTIEdefine_CATIADatumSimple(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
HRESULT __stdcall  ENVTIEName::get_Label(CATBSTR & oLabel) \
{ \
return (ENVTIECALL(CATIADatumSimple,ENVTIETypeLetter,ENVTIELetter)get_Label(oLabel)); \
} \
HRESULT __stdcall  ENVTIEName::put_Label(const CATBSTR & iLabel) \
{ \
return (ENVTIECALL(CATIADatumSimple,ENVTIETypeLetter,ENVTIELetter)put_Label(iLabel)); \
} \
HRESULT __stdcall  ENVTIEName::get_Targets(CATIAAnnotations *& oTargets) \
{ \
return (ENVTIECALL(CATIADatumSimple,ENVTIETypeLetter,ENVTIELetter)get_Targets(oTargets)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Application(CATIAApplication *& oApplication) \
{ \
return (ENVTIECALL(CATIADatumSimple,ENVTIETypeLetter,ENVTIELetter)get_Application(oApplication)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Parent(CATBaseDispatch *& oParent) \
{ \
return (ENVTIECALL(CATIADatumSimple,ENVTIETypeLetter,ENVTIELetter)get_Parent(oParent)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Name(CATBSTR & oNameBSTR) \
{ \
return (ENVTIECALL(CATIADatumSimple,ENVTIETypeLetter,ENVTIELetter)get_Name(oNameBSTR)); \
} \
HRESULT  __stdcall  ENVTIEName::put_Name(const CATBSTR & iNameBSTR) \
{ \
return (ENVTIECALL(CATIADatumSimple,ENVTIETypeLetter,ENVTIELetter)put_Name(iNameBSTR)); \
} \
HRESULT  __stdcall  ENVTIEName::GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj) \
{ \
return (ENVTIECALL(CATIADatumSimple,ENVTIETypeLetter,ENVTIELetter)GetItem(IDName,RealObj)); \
} \


/* Name of the TIE class */
#define class_TIE_CATIADatumSimple(classe)    TIECATIADatumSimple##classe


/* Common methods inside a TIE */
#define common_TIE_CATIADatumSimple(classe) \
 \
 \
/* Static initialization */ \
CATDefineCommonTIEMembers(CATIADatumSimple, classe) \
 \
 \
CATImplementTIEMethods(CATIADatumSimple, classe) \
CATImplementIUnknownMethodsForCATBaseUnknownTIE(CATIADatumSimple, classe, 2) \
CATImplementIDispatchMethodsForCATBaseUnknownTIE(CATIADatumSimple, classe) \
CATImplementCATBaseUnknownMethodsForTIE(CATIADatumSimple, classe) \
 \
HRESULT __stdcall  TIECATIADatumSimple##classe::get_Label(CATBSTR & oLabel) \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Label(oLabel)); \
} \
HRESULT __stdcall  TIECATIADatumSimple##classe::put_Label(const CATBSTR & iLabel) \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_Label(iLabel)); \
} \
HRESULT __stdcall  TIECATIADatumSimple##classe::get_Targets(CATIAAnnotations *& oTargets) \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Targets(oTargets)); \
} \
HRESULT  __stdcall  TIECATIADatumSimple##classe::get_Application(CATIAApplication *& oApplication) \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Application(oApplication)); \
} \
HRESULT  __stdcall  TIECATIADatumSimple##classe::get_Parent(CATBaseDispatch *& oParent) \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Parent(oParent)); \
} \
HRESULT  __stdcall  TIECATIADatumSimple##classe::get_Name(CATBSTR & oNameBSTR) \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Name(oNameBSTR)); \
} \
HRESULT  __stdcall  TIECATIADatumSimple##classe::put_Name(const CATBSTR & iNameBSTR) \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_Name(iNameBSTR)); \
} \
HRESULT  __stdcall  TIECATIADatumSimple##classe::GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj) \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetItem(IDName,RealObj)); \
} \



/* Macro used to link an implementation with an interface */
#define TIE_CATIADatumSimple(classe) \
 \
 \
declare_TIE_CATIADatumSimple(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIADatumSimple##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIADatumSimple,"CATIADatumSimple",CATIADatumSimple::MetaObject(),classe::MetaObject(),TIE); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIADatumSimple(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIECreation(CATIADatumSimple, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIADatumSimple##classe(classe::MetaObject(),CATIADatumSimple::MetaObject(),(void *)CreateTIECATIADatumSimple##classe)



/* Macro used to link an implementation with an interface */
/* This TIE is chained on the implementation object */
#define TIEchain_CATIADatumSimple(classe) \
 \
 \
declare_TIE_CATIADatumSimple(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIADatumSimple##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIADatumSimple,"CATIADatumSimple",CATIADatumSimple::MetaObject(),classe::MetaObject(),TIEchain); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIADatumSimple(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIEchainCreation(CATIADatumSimple, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIADatumSimple##classe(classe::MetaObject(),CATIADatumSimple::MetaObject(),(void *)CreateTIECATIADatumSimple##classe)


/* Macro to switch between BOA and TIE at build time */ 
#ifdef CATSYS_BOA_IS_TIE
#define BOA_CATIADatumSimple(classe) TIE_CATIADatumSimple(classe)
#else
#define BOA_CATIADatumSimple(classe) CATImplementBOA(CATIADatumSimple, classe)
#endif

#endif
