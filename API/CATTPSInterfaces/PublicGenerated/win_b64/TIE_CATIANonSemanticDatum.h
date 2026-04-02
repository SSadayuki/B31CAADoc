#ifndef __TIE_CATIANonSemanticDatum
#define __TIE_CATIANonSemanticDatum

#include <string.h>
#include "CATBaseUnknown.h"
#include "CATMetaClass.h"
#include "CATMacForTie.h"
#include "CATIANonSemanticDatum.h"
#include "JS0DSPA.h"


#ifdef _WINDOWS_SOURCE
#define Exported __declspec(dllexport)
#define Imported __declspec(dllimport)
#else
#define Exported 
#define Imported 
#endif


/* To link an implementation with the interface CATIANonSemanticDatum */
#define declare_TIE_CATIANonSemanticDatum(classe) \
 \
 \
class TIECATIANonSemanticDatum##classe : public CATIANonSemanticDatum \
{ \
   private: \
      CATDeclareCommonTIEMembers \
   public: \
      CATDeclareTIEMethods(CATIANonSemanticDatum, classe) \
      CATDeclareIUnknownMethodsForCATBaseUnknownTIE \
      CATDeclareIDispatchMethodsForCATBaseUnknownTIE \
      CATDeclareCATBaseUnknownMethodsForTIE \
      virtual HRESULT __stdcall get_Label(CATBSTR & oLabel); \
      virtual HRESULT __stdcall put_Label(const CATBSTR & iLabel); \
      virtual HRESULT  __stdcall get_Application(CATIAApplication *& oApplication); \
      virtual HRESULT  __stdcall get_Parent(CATBaseDispatch *& oParent); \
      virtual HRESULT  __stdcall get_Name(CATBSTR & oNameBSTR); \
      virtual HRESULT  __stdcall put_Name(const CATBSTR & iNameBSTR); \
      virtual HRESULT  __stdcall GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj); \
};



#define ENVTIEdeclare_CATIANonSemanticDatum(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
virtual HRESULT __stdcall get_Label(CATBSTR & oLabel); \
virtual HRESULT __stdcall put_Label(const CATBSTR & iLabel); \
virtual HRESULT  __stdcall get_Application(CATIAApplication *& oApplication); \
virtual HRESULT  __stdcall get_Parent(CATBaseDispatch *& oParent); \
virtual HRESULT  __stdcall get_Name(CATBSTR & oNameBSTR); \
virtual HRESULT  __stdcall put_Name(const CATBSTR & iNameBSTR); \
virtual HRESULT  __stdcall GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj); \


#define ENVTIEdefine_CATIANonSemanticDatum(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
HRESULT __stdcall  ENVTIEName::get_Label(CATBSTR & oLabel) \
{ \
return (ENVTIECALL(CATIANonSemanticDatum,ENVTIETypeLetter,ENVTIELetter)get_Label(oLabel)); \
} \
HRESULT __stdcall  ENVTIEName::put_Label(const CATBSTR & iLabel) \
{ \
return (ENVTIECALL(CATIANonSemanticDatum,ENVTIETypeLetter,ENVTIELetter)put_Label(iLabel)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Application(CATIAApplication *& oApplication) \
{ \
return (ENVTIECALL(CATIANonSemanticDatum,ENVTIETypeLetter,ENVTIELetter)get_Application(oApplication)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Parent(CATBaseDispatch *& oParent) \
{ \
return (ENVTIECALL(CATIANonSemanticDatum,ENVTIETypeLetter,ENVTIELetter)get_Parent(oParent)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Name(CATBSTR & oNameBSTR) \
{ \
return (ENVTIECALL(CATIANonSemanticDatum,ENVTIETypeLetter,ENVTIELetter)get_Name(oNameBSTR)); \
} \
HRESULT  __stdcall  ENVTIEName::put_Name(const CATBSTR & iNameBSTR) \
{ \
return (ENVTIECALL(CATIANonSemanticDatum,ENVTIETypeLetter,ENVTIELetter)put_Name(iNameBSTR)); \
} \
HRESULT  __stdcall  ENVTIEName::GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj) \
{ \
return (ENVTIECALL(CATIANonSemanticDatum,ENVTIETypeLetter,ENVTIELetter)GetItem(IDName,RealObj)); \
} \


/* Name of the TIE class */
#define class_TIE_CATIANonSemanticDatum(classe)    TIECATIANonSemanticDatum##classe


/* Common methods inside a TIE */
#define common_TIE_CATIANonSemanticDatum(classe) \
 \
 \
/* Static initialization */ \
CATDefineCommonTIEMembers(CATIANonSemanticDatum, classe) \
 \
 \
CATImplementTIEMethods(CATIANonSemanticDatum, classe) \
CATImplementIUnknownMethodsForCATBaseUnknownTIE(CATIANonSemanticDatum, classe, 2) \
CATImplementIDispatchMethodsForCATBaseUnknownTIE(CATIANonSemanticDatum, classe) \
CATImplementCATBaseUnknownMethodsForTIE(CATIANonSemanticDatum, classe) \
 \
HRESULT __stdcall  TIECATIANonSemanticDatum##classe::get_Label(CATBSTR & oLabel) \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Label(oLabel)); \
} \
HRESULT __stdcall  TIECATIANonSemanticDatum##classe::put_Label(const CATBSTR & iLabel) \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_Label(iLabel)); \
} \
HRESULT  __stdcall  TIECATIANonSemanticDatum##classe::get_Application(CATIAApplication *& oApplication) \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Application(oApplication)); \
} \
HRESULT  __stdcall  TIECATIANonSemanticDatum##classe::get_Parent(CATBaseDispatch *& oParent) \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Parent(oParent)); \
} \
HRESULT  __stdcall  TIECATIANonSemanticDatum##classe::get_Name(CATBSTR & oNameBSTR) \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Name(oNameBSTR)); \
} \
HRESULT  __stdcall  TIECATIANonSemanticDatum##classe::put_Name(const CATBSTR & iNameBSTR) \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_Name(iNameBSTR)); \
} \
HRESULT  __stdcall  TIECATIANonSemanticDatum##classe::GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj) \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetItem(IDName,RealObj)); \
} \



/* Macro used to link an implementation with an interface */
#define TIE_CATIANonSemanticDatum(classe) \
 \
 \
declare_TIE_CATIANonSemanticDatum(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIANonSemanticDatum##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIANonSemanticDatum,"CATIANonSemanticDatum",CATIANonSemanticDatum::MetaObject(),classe::MetaObject(),TIE); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIANonSemanticDatum(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIECreation(CATIANonSemanticDatum, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIANonSemanticDatum##classe(classe::MetaObject(),CATIANonSemanticDatum::MetaObject(),(void *)CreateTIECATIANonSemanticDatum##classe)



/* Macro used to link an implementation with an interface */
/* This TIE is chained on the implementation object */
#define TIEchain_CATIANonSemanticDatum(classe) \
 \
 \
declare_TIE_CATIANonSemanticDatum(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIANonSemanticDatum##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIANonSemanticDatum,"CATIANonSemanticDatum",CATIANonSemanticDatum::MetaObject(),classe::MetaObject(),TIEchain); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIANonSemanticDatum(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIEchainCreation(CATIANonSemanticDatum, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIANonSemanticDatum##classe(classe::MetaObject(),CATIANonSemanticDatum::MetaObject(),(void *)CreateTIECATIANonSemanticDatum##classe)


/* Macro to switch between BOA and TIE at build time */ 
#ifdef CATSYS_BOA_IS_TIE
#define BOA_CATIANonSemanticDatum(classe) TIE_CATIANonSemanticDatum(classe)
#else
#define BOA_CATIANonSemanticDatum(classe) CATImplementBOA(CATIANonSemanticDatum, classe)
#endif

#endif
