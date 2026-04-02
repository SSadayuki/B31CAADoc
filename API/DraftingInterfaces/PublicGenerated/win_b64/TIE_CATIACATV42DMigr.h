#ifndef __TIE_CATIACATV42DMigr
#define __TIE_CATIACATV42DMigr

#include <string.h>
#include "CATBaseUnknown.h"
#include "CATMetaClass.h"
#include "CATMacForTie.h"
#include "CATIACATV42DMigr.h"
#include "JS0DSPA.h"


#ifdef _WINDOWS_SOURCE
#define Exported __declspec(dllexport)
#define Imported __declspec(dllimport)
#else
#define Exported 
#define Imported 
#endif


/* To link an implementation with the interface CATIACATV42DMigr */
#define declare_TIE_CATIACATV42DMigr(classe) \
 \
 \
class TIECATIACATV42DMigr##classe : public CATIACATV42DMigr \
{ \
   private: \
      CATDeclareCommonTIEMembers \
   public: \
      CATDeclareTIEMethods(CATIACATV42DMigr, classe) \
      CATDeclareIUnknownMethodsForCATBaseUnknownTIE \
      CATDeclareIDispatchMethodsForCATBaseUnknownTIE \
      CATDeclareCATBaseUnknownMethodsForTIE \
      virtual HRESULT __stdcall put_Ref3D(CATIABase * iBase); \
      virtual HRESULT  __stdcall get_Application(CATIAApplication *& oApplication); \
      virtual HRESULT  __stdcall get_Parent(CATBaseDispatch *& oParent); \
      virtual HRESULT  __stdcall get_Name(CATBSTR & oNameBSTR); \
      virtual HRESULT  __stdcall put_Name(const CATBSTR & iNameBSTR); \
      virtual HRESULT  __stdcall GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj); \
};



#define ENVTIEdeclare_CATIACATV42DMigr(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
virtual HRESULT __stdcall put_Ref3D(CATIABase * iBase); \
virtual HRESULT  __stdcall get_Application(CATIAApplication *& oApplication); \
virtual HRESULT  __stdcall get_Parent(CATBaseDispatch *& oParent); \
virtual HRESULT  __stdcall get_Name(CATBSTR & oNameBSTR); \
virtual HRESULT  __stdcall put_Name(const CATBSTR & iNameBSTR); \
virtual HRESULT  __stdcall GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj); \


#define ENVTIEdefine_CATIACATV42DMigr(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
HRESULT __stdcall  ENVTIEName::put_Ref3D(CATIABase * iBase) \
{ \
return (ENVTIECALL(CATIACATV42DMigr,ENVTIETypeLetter,ENVTIELetter)put_Ref3D(iBase)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Application(CATIAApplication *& oApplication) \
{ \
return (ENVTIECALL(CATIACATV42DMigr,ENVTIETypeLetter,ENVTIELetter)get_Application(oApplication)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Parent(CATBaseDispatch *& oParent) \
{ \
return (ENVTIECALL(CATIACATV42DMigr,ENVTIETypeLetter,ENVTIELetter)get_Parent(oParent)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Name(CATBSTR & oNameBSTR) \
{ \
return (ENVTIECALL(CATIACATV42DMigr,ENVTIETypeLetter,ENVTIELetter)get_Name(oNameBSTR)); \
} \
HRESULT  __stdcall  ENVTIEName::put_Name(const CATBSTR & iNameBSTR) \
{ \
return (ENVTIECALL(CATIACATV42DMigr,ENVTIETypeLetter,ENVTIELetter)put_Name(iNameBSTR)); \
} \
HRESULT  __stdcall  ENVTIEName::GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj) \
{ \
return (ENVTIECALL(CATIACATV42DMigr,ENVTIETypeLetter,ENVTIELetter)GetItem(IDName,RealObj)); \
} \


/* Name of the TIE class */
#define class_TIE_CATIACATV42DMigr(classe)    TIECATIACATV42DMigr##classe


/* Common methods inside a TIE */
#define common_TIE_CATIACATV42DMigr(classe) \
 \
 \
/* Static initialization */ \
CATDefineCommonTIEMembers(CATIACATV42DMigr, classe) \
 \
 \
CATImplementTIEMethods(CATIACATV42DMigr, classe) \
CATImplementIUnknownMethodsForCATBaseUnknownTIE(CATIACATV42DMigr, classe, 2) \
CATImplementIDispatchMethodsForCATBaseUnknownTIE(CATIACATV42DMigr, classe) \
CATImplementCATBaseUnknownMethodsForTIE(CATIACATV42DMigr, classe) \
 \
HRESULT __stdcall  TIECATIACATV42DMigr##classe::put_Ref3D(CATIABase * iBase) \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_Ref3D(iBase)); \
} \
HRESULT  __stdcall  TIECATIACATV42DMigr##classe::get_Application(CATIAApplication *& oApplication) \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Application(oApplication)); \
} \
HRESULT  __stdcall  TIECATIACATV42DMigr##classe::get_Parent(CATBaseDispatch *& oParent) \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Parent(oParent)); \
} \
HRESULT  __stdcall  TIECATIACATV42DMigr##classe::get_Name(CATBSTR & oNameBSTR) \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Name(oNameBSTR)); \
} \
HRESULT  __stdcall  TIECATIACATV42DMigr##classe::put_Name(const CATBSTR & iNameBSTR) \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_Name(iNameBSTR)); \
} \
HRESULT  __stdcall  TIECATIACATV42DMigr##classe::GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj) \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetItem(IDName,RealObj)); \
} \



/* Macro used to link an implementation with an interface */
#define TIE_CATIACATV42DMigr(classe) \
 \
 \
declare_TIE_CATIACATV42DMigr(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIACATV42DMigr##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIACATV42DMigr,"CATIACATV42DMigr",CATIACATV42DMigr::MetaObject(),classe::MetaObject(),TIE); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIACATV42DMigr(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIECreation(CATIACATV42DMigr, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIACATV42DMigr##classe(classe::MetaObject(),CATIACATV42DMigr::MetaObject(),(void *)CreateTIECATIACATV42DMigr##classe)



/* Macro used to link an implementation with an interface */
/* This TIE is chained on the implementation object */
#define TIEchain_CATIACATV42DMigr(classe) \
 \
 \
declare_TIE_CATIACATV42DMigr(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIACATV42DMigr##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIACATV42DMigr,"CATIACATV42DMigr",CATIACATV42DMigr::MetaObject(),classe::MetaObject(),TIEchain); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIACATV42DMigr(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIEchainCreation(CATIACATV42DMigr, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIACATV42DMigr##classe(classe::MetaObject(),CATIACATV42DMigr::MetaObject(),(void *)CreateTIECATIACATV42DMigr##classe)


/* Macro to switch between BOA and TIE at build time */ 
#ifdef CATSYS_BOA_IS_TIE
#define BOA_CATIACATV42DMigr(classe) TIE_CATIACATV42DMigr(classe)
#else
#define BOA_CATIACATV42DMigr(classe) CATImplementBOA(CATIACATV42DMigr, classe)
#endif

#endif
