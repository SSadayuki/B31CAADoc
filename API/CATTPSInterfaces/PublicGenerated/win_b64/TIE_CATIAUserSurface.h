#ifndef __TIE_CATIAUserSurface
#define __TIE_CATIAUserSurface

#include <string.h>
#include "CATBaseUnknown.h"
#include "CATMetaClass.h"
#include "CATMacForTie.h"
#include "CATIAUserSurface.h"
#include "JS0DSPA.h"


#ifdef _WINDOWS_SOURCE
#define Exported __declspec(dllexport)
#define Imported __declspec(dllimport)
#else
#define Exported 
#define Imported 
#endif


/* To link an implementation with the interface CATIAUserSurface */
#define declare_TIE_CATIAUserSurface(classe) \
 \
 \
class TIECATIAUserSurface##classe : public CATIAUserSurface \
{ \
   private: \
      CATDeclareCommonTIEMembers \
   public: \
      CATDeclareTIEMethods(CATIAUserSurface, classe) \
      CATDeclareIUnknownMethodsForCATBaseUnknownTIE \
      CATDeclareIDispatchMethodsForCATBaseUnknownTIE \
      CATDeclareCATBaseUnknownMethodsForTIE \
      virtual HRESULT __stdcall AddReference(CATIAReference * iSupport); \
      virtual HRESULT __stdcall AddReferenceInAProductCtx(CATIAProduct * iProdInst, CATIAReference * iSupport); \
      virtual HRESULT __stdcall AddUserSurface(CATIAUserSurface * iUserSurf); \
      virtual HRESULT  __stdcall get_Application(CATIAApplication *& oApplication); \
      virtual HRESULT  __stdcall get_Parent(CATBaseDispatch *& oParent); \
      virtual HRESULT  __stdcall get_Name(CATBSTR & oNameBSTR); \
      virtual HRESULT  __stdcall put_Name(const CATBSTR & iNameBSTR); \
      virtual HRESULT  __stdcall GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj); \
};



#define ENVTIEdeclare_CATIAUserSurface(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
virtual HRESULT __stdcall AddReference(CATIAReference * iSupport); \
virtual HRESULT __stdcall AddReferenceInAProductCtx(CATIAProduct * iProdInst, CATIAReference * iSupport); \
virtual HRESULT __stdcall AddUserSurface(CATIAUserSurface * iUserSurf); \
virtual HRESULT  __stdcall get_Application(CATIAApplication *& oApplication); \
virtual HRESULT  __stdcall get_Parent(CATBaseDispatch *& oParent); \
virtual HRESULT  __stdcall get_Name(CATBSTR & oNameBSTR); \
virtual HRESULT  __stdcall put_Name(const CATBSTR & iNameBSTR); \
virtual HRESULT  __stdcall GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj); \


#define ENVTIEdefine_CATIAUserSurface(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
HRESULT __stdcall  ENVTIEName::AddReference(CATIAReference * iSupport) \
{ \
return (ENVTIECALL(CATIAUserSurface,ENVTIETypeLetter,ENVTIELetter)AddReference(iSupport)); \
} \
HRESULT __stdcall  ENVTIEName::AddReferenceInAProductCtx(CATIAProduct * iProdInst, CATIAReference * iSupport) \
{ \
return (ENVTIECALL(CATIAUserSurface,ENVTIETypeLetter,ENVTIELetter)AddReferenceInAProductCtx(iProdInst,iSupport)); \
} \
HRESULT __stdcall  ENVTIEName::AddUserSurface(CATIAUserSurface * iUserSurf) \
{ \
return (ENVTIECALL(CATIAUserSurface,ENVTIETypeLetter,ENVTIELetter)AddUserSurface(iUserSurf)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Application(CATIAApplication *& oApplication) \
{ \
return (ENVTIECALL(CATIAUserSurface,ENVTIETypeLetter,ENVTIELetter)get_Application(oApplication)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Parent(CATBaseDispatch *& oParent) \
{ \
return (ENVTIECALL(CATIAUserSurface,ENVTIETypeLetter,ENVTIELetter)get_Parent(oParent)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Name(CATBSTR & oNameBSTR) \
{ \
return (ENVTIECALL(CATIAUserSurface,ENVTIETypeLetter,ENVTIELetter)get_Name(oNameBSTR)); \
} \
HRESULT  __stdcall  ENVTIEName::put_Name(const CATBSTR & iNameBSTR) \
{ \
return (ENVTIECALL(CATIAUserSurface,ENVTIETypeLetter,ENVTIELetter)put_Name(iNameBSTR)); \
} \
HRESULT  __stdcall  ENVTIEName::GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj) \
{ \
return (ENVTIECALL(CATIAUserSurface,ENVTIETypeLetter,ENVTIELetter)GetItem(IDName,RealObj)); \
} \


/* Name of the TIE class */
#define class_TIE_CATIAUserSurface(classe)    TIECATIAUserSurface##classe


/* Common methods inside a TIE */
#define common_TIE_CATIAUserSurface(classe) \
 \
 \
/* Static initialization */ \
CATDefineCommonTIEMembers(CATIAUserSurface, classe) \
 \
 \
CATImplementTIEMethods(CATIAUserSurface, classe) \
CATImplementIUnknownMethodsForCATBaseUnknownTIE(CATIAUserSurface, classe, 2) \
CATImplementIDispatchMethodsForCATBaseUnknownTIE(CATIAUserSurface, classe) \
CATImplementCATBaseUnknownMethodsForTIE(CATIAUserSurface, classe) \
 \
HRESULT __stdcall  TIECATIAUserSurface##classe::AddReference(CATIAReference * iSupport) \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->AddReference(iSupport)); \
} \
HRESULT __stdcall  TIECATIAUserSurface##classe::AddReferenceInAProductCtx(CATIAProduct * iProdInst, CATIAReference * iSupport) \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->AddReferenceInAProductCtx(iProdInst,iSupport)); \
} \
HRESULT __stdcall  TIECATIAUserSurface##classe::AddUserSurface(CATIAUserSurface * iUserSurf) \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->AddUserSurface(iUserSurf)); \
} \
HRESULT  __stdcall  TIECATIAUserSurface##classe::get_Application(CATIAApplication *& oApplication) \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Application(oApplication)); \
} \
HRESULT  __stdcall  TIECATIAUserSurface##classe::get_Parent(CATBaseDispatch *& oParent) \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Parent(oParent)); \
} \
HRESULT  __stdcall  TIECATIAUserSurface##classe::get_Name(CATBSTR & oNameBSTR) \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Name(oNameBSTR)); \
} \
HRESULT  __stdcall  TIECATIAUserSurface##classe::put_Name(const CATBSTR & iNameBSTR) \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_Name(iNameBSTR)); \
} \
HRESULT  __stdcall  TIECATIAUserSurface##classe::GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj) \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetItem(IDName,RealObj)); \
} \



/* Macro used to link an implementation with an interface */
#define TIE_CATIAUserSurface(classe) \
 \
 \
declare_TIE_CATIAUserSurface(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIAUserSurface##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIAUserSurface,"CATIAUserSurface",CATIAUserSurface::MetaObject(),classe::MetaObject(),TIE); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIAUserSurface(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIECreation(CATIAUserSurface, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIAUserSurface##classe(classe::MetaObject(),CATIAUserSurface::MetaObject(),(void *)CreateTIECATIAUserSurface##classe)



/* Macro used to link an implementation with an interface */
/* This TIE is chained on the implementation object */
#define TIEchain_CATIAUserSurface(classe) \
 \
 \
declare_TIE_CATIAUserSurface(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIAUserSurface##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIAUserSurface,"CATIAUserSurface",CATIAUserSurface::MetaObject(),classe::MetaObject(),TIEchain); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIAUserSurface(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIEchainCreation(CATIAUserSurface, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIAUserSurface##classe(classe::MetaObject(),CATIAUserSurface::MetaObject(),(void *)CreateTIECATIAUserSurface##classe)


/* Macro to switch between BOA and TIE at build time */ 
#ifdef CATSYS_BOA_IS_TIE
#define BOA_CATIAUserSurface(classe) TIE_CATIAUserSurface(classe)
#else
#define BOA_CATIAUserSurface(classe) CATImplementBOA(CATIAUserSurface, classe)
#endif

#endif
