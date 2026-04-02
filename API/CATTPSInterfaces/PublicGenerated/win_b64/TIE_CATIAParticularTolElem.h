#ifndef __TIE_CATIAParticularTolElem
#define __TIE_CATIAParticularTolElem

#include <string.h>
#include "CATBaseUnknown.h"
#include "CATMetaClass.h"
#include "CATMacForTie.h"
#include "CATIAParticularTolElem.h"
#include "JS0DSPA.h"


#ifdef _WINDOWS_SOURCE
#define Exported __declspec(dllexport)
#define Imported __declspec(dllimport)
#else
#define Exported 
#define Imported 
#endif


/* To link an implementation with the interface CATIAParticularTolElem */
#define declare_TIE_CATIAParticularTolElem(classe) \
 \
 \
class TIECATIAParticularTolElem##classe : public CATIAParticularTolElem \
{ \
   private: \
      CATDeclareCommonTIEMembers \
   public: \
      CATDeclareTIEMethods(CATIAParticularTolElem, classe) \
      CATDeclareIUnknownMethodsForCATBaseUnknownTIE \
      CATDeclareIDispatchMethodsForCATBaseUnknownTIE \
      CATDeclareCATBaseUnknownMethodsForTIE \
      virtual HRESULT __stdcall get_ParticularGeometry(CATBSTR & oPartGeom); \
      virtual HRESULT  __stdcall get_Application(CATIAApplication *& oApplication); \
      virtual HRESULT  __stdcall get_Parent(CATBaseDispatch *& oParent); \
      virtual HRESULT  __stdcall get_Name(CATBSTR & oNameBSTR); \
      virtual HRESULT  __stdcall put_Name(const CATBSTR & iNameBSTR); \
      virtual HRESULT  __stdcall GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj); \
};



#define ENVTIEdeclare_CATIAParticularTolElem(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
virtual HRESULT __stdcall get_ParticularGeometry(CATBSTR & oPartGeom); \
virtual HRESULT  __stdcall get_Application(CATIAApplication *& oApplication); \
virtual HRESULT  __stdcall get_Parent(CATBaseDispatch *& oParent); \
virtual HRESULT  __stdcall get_Name(CATBSTR & oNameBSTR); \
virtual HRESULT  __stdcall put_Name(const CATBSTR & iNameBSTR); \
virtual HRESULT  __stdcall GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj); \


#define ENVTIEdefine_CATIAParticularTolElem(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
HRESULT __stdcall  ENVTIEName::get_ParticularGeometry(CATBSTR & oPartGeom) \
{ \
return (ENVTIECALL(CATIAParticularTolElem,ENVTIETypeLetter,ENVTIELetter)get_ParticularGeometry(oPartGeom)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Application(CATIAApplication *& oApplication) \
{ \
return (ENVTIECALL(CATIAParticularTolElem,ENVTIETypeLetter,ENVTIELetter)get_Application(oApplication)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Parent(CATBaseDispatch *& oParent) \
{ \
return (ENVTIECALL(CATIAParticularTolElem,ENVTIETypeLetter,ENVTIELetter)get_Parent(oParent)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Name(CATBSTR & oNameBSTR) \
{ \
return (ENVTIECALL(CATIAParticularTolElem,ENVTIETypeLetter,ENVTIELetter)get_Name(oNameBSTR)); \
} \
HRESULT  __stdcall  ENVTIEName::put_Name(const CATBSTR & iNameBSTR) \
{ \
return (ENVTIECALL(CATIAParticularTolElem,ENVTIETypeLetter,ENVTIELetter)put_Name(iNameBSTR)); \
} \
HRESULT  __stdcall  ENVTIEName::GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj) \
{ \
return (ENVTIECALL(CATIAParticularTolElem,ENVTIETypeLetter,ENVTIELetter)GetItem(IDName,RealObj)); \
} \


/* Name of the TIE class */
#define class_TIE_CATIAParticularTolElem(classe)    TIECATIAParticularTolElem##classe


/* Common methods inside a TIE */
#define common_TIE_CATIAParticularTolElem(classe) \
 \
 \
/* Static initialization */ \
CATDefineCommonTIEMembers(CATIAParticularTolElem, classe) \
 \
 \
CATImplementTIEMethods(CATIAParticularTolElem, classe) \
CATImplementIUnknownMethodsForCATBaseUnknownTIE(CATIAParticularTolElem, classe, 2) \
CATImplementIDispatchMethodsForCATBaseUnknownTIE(CATIAParticularTolElem, classe) \
CATImplementCATBaseUnknownMethodsForTIE(CATIAParticularTolElem, classe) \
 \
HRESULT __stdcall  TIECATIAParticularTolElem##classe::get_ParticularGeometry(CATBSTR & oPartGeom) \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_ParticularGeometry(oPartGeom)); \
} \
HRESULT  __stdcall  TIECATIAParticularTolElem##classe::get_Application(CATIAApplication *& oApplication) \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Application(oApplication)); \
} \
HRESULT  __stdcall  TIECATIAParticularTolElem##classe::get_Parent(CATBaseDispatch *& oParent) \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Parent(oParent)); \
} \
HRESULT  __stdcall  TIECATIAParticularTolElem##classe::get_Name(CATBSTR & oNameBSTR) \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Name(oNameBSTR)); \
} \
HRESULT  __stdcall  TIECATIAParticularTolElem##classe::put_Name(const CATBSTR & iNameBSTR) \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_Name(iNameBSTR)); \
} \
HRESULT  __stdcall  TIECATIAParticularTolElem##classe::GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj) \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetItem(IDName,RealObj)); \
} \



/* Macro used to link an implementation with an interface */
#define TIE_CATIAParticularTolElem(classe) \
 \
 \
declare_TIE_CATIAParticularTolElem(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIAParticularTolElem##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIAParticularTolElem,"CATIAParticularTolElem",CATIAParticularTolElem::MetaObject(),classe::MetaObject(),TIE); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIAParticularTolElem(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIECreation(CATIAParticularTolElem, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIAParticularTolElem##classe(classe::MetaObject(),CATIAParticularTolElem::MetaObject(),(void *)CreateTIECATIAParticularTolElem##classe)



/* Macro used to link an implementation with an interface */
/* This TIE is chained on the implementation object */
#define TIEchain_CATIAParticularTolElem(classe) \
 \
 \
declare_TIE_CATIAParticularTolElem(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIAParticularTolElem##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIAParticularTolElem,"CATIAParticularTolElem",CATIAParticularTolElem::MetaObject(),classe::MetaObject(),TIEchain); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIAParticularTolElem(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIEchainCreation(CATIAParticularTolElem, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIAParticularTolElem##classe(classe::MetaObject(),CATIAParticularTolElem::MetaObject(),(void *)CreateTIECATIAParticularTolElem##classe)


/* Macro to switch between BOA and TIE at build time */ 
#ifdef CATSYS_BOA_IS_TIE
#define BOA_CATIAParticularTolElem(classe) TIE_CATIAParticularTolElem(classe)
#else
#define BOA_CATIAParticularTolElem(classe) CATImplementBOA(CATIAParticularTolElem, classe)
#endif

#endif
