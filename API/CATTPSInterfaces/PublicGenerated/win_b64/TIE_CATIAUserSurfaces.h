#ifndef __TIE_CATIAUserSurfaces
#define __TIE_CATIAUserSurfaces

#include <string.h>
#include "CATBaseUnknown.h"
#include "CATMetaClass.h"
#include "CATMacForTie.h"
#include "CATIAUserSurfaces.h"
#include "JS0DSPA.h"


#ifdef _WINDOWS_SOURCE
#define Exported __declspec(dllexport)
#define Imported __declspec(dllimport)
#else
#define Exported 
#define Imported 
#endif


/* To link an implementation with the interface CATIAUserSurfaces */
#define declare_TIE_CATIAUserSurfaces(classe) \
 \
 \
class TIECATIAUserSurfaces##classe : public CATIAUserSurfaces \
{ \
   private: \
      CATDeclareCommonTIEMembers \
   public: \
      CATDeclareTIEMethods(CATIAUserSurfaces, classe) \
      CATDeclareIUnknownMethodsForCATBaseUnknownTIE \
      CATDeclareIDispatchMethodsForCATBaseUnknownTIE \
      CATDeclareCATBaseUnknownMethodsForTIE \
      virtual HRESULT __stdcall Generate(CATIAReference * iSupport, CATIAUserSurface *& oUserSurf); \
      virtual HRESULT __stdcall GenerateInAProductCtx(CATIAProduct * iProduct, CATIAProduct * iProdInst, CATIAReference * iSupport, CATIAUserSurface *& oUserSurf); \
      virtual HRESULT __stdcall MakeUserSurfaceNode(CATIAUserSurface * iFirstUserSurf, CATIAUserSurface * iSecondUserSurf, CATIAUserSurface *& oNodeUserSurf); \
      virtual HRESULT __stdcall Item(const CATVariant & iIndex, CATIAUserSurface *& oUserSurf); \
      virtual HRESULT __stdcall MakeUserSurfaceNode2(const CATSafeArrayVariant & iListOfUserSurfaces, CATIAUserSurface *& oNodeUserSurf); \
      virtual HRESULT  __stdcall get_Application(CATIAApplication *& oApplication); \
      virtual HRESULT  __stdcall get_Parent(CATBaseDispatch *& oParent); \
      virtual HRESULT  __stdcall GetItem(const CATBSTR & iIDName, CATBaseDispatch *& oObject); \
      virtual HRESULT  __stdcall get_Name(CATBSTR & oName); \
      virtual HRESULT  __stdcall get_Count(CATLONG & oNbItems); \
      virtual HRESULT  __stdcall get__NewEnum(IUnknown *& oEnumIter); \
};



#define ENVTIEdeclare_CATIAUserSurfaces(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
virtual HRESULT __stdcall Generate(CATIAReference * iSupport, CATIAUserSurface *& oUserSurf); \
virtual HRESULT __stdcall GenerateInAProductCtx(CATIAProduct * iProduct, CATIAProduct * iProdInst, CATIAReference * iSupport, CATIAUserSurface *& oUserSurf); \
virtual HRESULT __stdcall MakeUserSurfaceNode(CATIAUserSurface * iFirstUserSurf, CATIAUserSurface * iSecondUserSurf, CATIAUserSurface *& oNodeUserSurf); \
virtual HRESULT __stdcall Item(const CATVariant & iIndex, CATIAUserSurface *& oUserSurf); \
virtual HRESULT __stdcall MakeUserSurfaceNode2(const CATSafeArrayVariant & iListOfUserSurfaces, CATIAUserSurface *& oNodeUserSurf); \
virtual HRESULT  __stdcall get_Application(CATIAApplication *& oApplication); \
virtual HRESULT  __stdcall get_Parent(CATBaseDispatch *& oParent); \
virtual HRESULT  __stdcall GetItem(const CATBSTR & iIDName, CATBaseDispatch *& oObject); \
virtual HRESULT  __stdcall get_Name(CATBSTR & oName); \
virtual HRESULT  __stdcall get_Count(CATLONG & oNbItems); \
virtual HRESULT  __stdcall get__NewEnum(IUnknown *& oEnumIter); \


#define ENVTIEdefine_CATIAUserSurfaces(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
HRESULT __stdcall  ENVTIEName::Generate(CATIAReference * iSupport, CATIAUserSurface *& oUserSurf) \
{ \
return (ENVTIECALL(CATIAUserSurfaces,ENVTIETypeLetter,ENVTIELetter)Generate(iSupport,oUserSurf)); \
} \
HRESULT __stdcall  ENVTIEName::GenerateInAProductCtx(CATIAProduct * iProduct, CATIAProduct * iProdInst, CATIAReference * iSupport, CATIAUserSurface *& oUserSurf) \
{ \
return (ENVTIECALL(CATIAUserSurfaces,ENVTIETypeLetter,ENVTIELetter)GenerateInAProductCtx(iProduct,iProdInst,iSupport,oUserSurf)); \
} \
HRESULT __stdcall  ENVTIEName::MakeUserSurfaceNode(CATIAUserSurface * iFirstUserSurf, CATIAUserSurface * iSecondUserSurf, CATIAUserSurface *& oNodeUserSurf) \
{ \
return (ENVTIECALL(CATIAUserSurfaces,ENVTIETypeLetter,ENVTIELetter)MakeUserSurfaceNode(iFirstUserSurf,iSecondUserSurf,oNodeUserSurf)); \
} \
HRESULT __stdcall  ENVTIEName::Item(const CATVariant & iIndex, CATIAUserSurface *& oUserSurf) \
{ \
return (ENVTIECALL(CATIAUserSurfaces,ENVTIETypeLetter,ENVTIELetter)Item(iIndex,oUserSurf)); \
} \
HRESULT __stdcall  ENVTIEName::MakeUserSurfaceNode2(const CATSafeArrayVariant & iListOfUserSurfaces, CATIAUserSurface *& oNodeUserSurf) \
{ \
return (ENVTIECALL(CATIAUserSurfaces,ENVTIETypeLetter,ENVTIELetter)MakeUserSurfaceNode2(iListOfUserSurfaces,oNodeUserSurf)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Application(CATIAApplication *& oApplication) \
{ \
return (ENVTIECALL(CATIAUserSurfaces,ENVTIETypeLetter,ENVTIELetter)get_Application(oApplication)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Parent(CATBaseDispatch *& oParent) \
{ \
return (ENVTIECALL(CATIAUserSurfaces,ENVTIETypeLetter,ENVTIELetter)get_Parent(oParent)); \
} \
HRESULT  __stdcall  ENVTIEName::GetItem(const CATBSTR & iIDName, CATBaseDispatch *& oObject) \
{ \
return (ENVTIECALL(CATIAUserSurfaces,ENVTIETypeLetter,ENVTIELetter)GetItem(iIDName,oObject)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Name(CATBSTR & oName) \
{ \
return (ENVTIECALL(CATIAUserSurfaces,ENVTIETypeLetter,ENVTIELetter)get_Name(oName)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Count(CATLONG & oNbItems) \
{ \
return (ENVTIECALL(CATIAUserSurfaces,ENVTIETypeLetter,ENVTIELetter)get_Count(oNbItems)); \
} \
HRESULT  __stdcall  ENVTIEName::get__NewEnum(IUnknown *& oEnumIter) \
{ \
return (ENVTIECALL(CATIAUserSurfaces,ENVTIETypeLetter,ENVTIELetter)get__NewEnum(oEnumIter)); \
} \


/* Name of the TIE class */
#define class_TIE_CATIAUserSurfaces(classe)    TIECATIAUserSurfaces##classe


/* Common methods inside a TIE */
#define common_TIE_CATIAUserSurfaces(classe) \
 \
 \
/* Static initialization */ \
CATDefineCommonTIEMembers(CATIAUserSurfaces, classe) \
 \
 \
CATImplementTIEMethods(CATIAUserSurfaces, classe) \
CATImplementIUnknownMethodsForCATBaseUnknownTIE(CATIAUserSurfaces, classe, 2) \
CATImplementIDispatchMethodsForCATBaseUnknownTIE(CATIAUserSurfaces, classe) \
CATImplementCATBaseUnknownMethodsForTIE(CATIAUserSurfaces, classe) \
 \
HRESULT __stdcall  TIECATIAUserSurfaces##classe::Generate(CATIAReference * iSupport, CATIAUserSurface *& oUserSurf) \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->Generate(iSupport,oUserSurf)); \
} \
HRESULT __stdcall  TIECATIAUserSurfaces##classe::GenerateInAProductCtx(CATIAProduct * iProduct, CATIAProduct * iProdInst, CATIAReference * iSupport, CATIAUserSurface *& oUserSurf) \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GenerateInAProductCtx(iProduct,iProdInst,iSupport,oUserSurf)); \
} \
HRESULT __stdcall  TIECATIAUserSurfaces##classe::MakeUserSurfaceNode(CATIAUserSurface * iFirstUserSurf, CATIAUserSurface * iSecondUserSurf, CATIAUserSurface *& oNodeUserSurf) \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->MakeUserSurfaceNode(iFirstUserSurf,iSecondUserSurf,oNodeUserSurf)); \
} \
HRESULT __stdcall  TIECATIAUserSurfaces##classe::Item(const CATVariant & iIndex, CATIAUserSurface *& oUserSurf) \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->Item(iIndex,oUserSurf)); \
} \
HRESULT __stdcall  TIECATIAUserSurfaces##classe::MakeUserSurfaceNode2(const CATSafeArrayVariant & iListOfUserSurfaces, CATIAUserSurface *& oNodeUserSurf) \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->MakeUserSurfaceNode2(iListOfUserSurfaces,oNodeUserSurf)); \
} \
HRESULT  __stdcall  TIECATIAUserSurfaces##classe::get_Application(CATIAApplication *& oApplication) \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Application(oApplication)); \
} \
HRESULT  __stdcall  TIECATIAUserSurfaces##classe::get_Parent(CATBaseDispatch *& oParent) \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Parent(oParent)); \
} \
HRESULT  __stdcall  TIECATIAUserSurfaces##classe::GetItem(const CATBSTR & iIDName, CATBaseDispatch *& oObject) \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetItem(iIDName,oObject)); \
} \
HRESULT  __stdcall  TIECATIAUserSurfaces##classe::get_Name(CATBSTR & oName) \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Name(oName)); \
} \
HRESULT  __stdcall  TIECATIAUserSurfaces##classe::get_Count(CATLONG & oNbItems) \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Count(oNbItems)); \
} \
HRESULT  __stdcall  TIECATIAUserSurfaces##classe::get__NewEnum(IUnknown *& oEnumIter) \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get__NewEnum(oEnumIter)); \
} \



/* Macro used to link an implementation with an interface */
#define TIE_CATIAUserSurfaces(classe) \
 \
 \
declare_TIE_CATIAUserSurfaces(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIAUserSurfaces##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIAUserSurfaces,"CATIAUserSurfaces",CATIAUserSurfaces::MetaObject(),classe::MetaObject(),TIE); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIAUserSurfaces(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIECreation(CATIAUserSurfaces, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIAUserSurfaces##classe(classe::MetaObject(),CATIAUserSurfaces::MetaObject(),(void *)CreateTIECATIAUserSurfaces##classe)



/* Macro used to link an implementation with an interface */
/* This TIE is chained on the implementation object */
#define TIEchain_CATIAUserSurfaces(classe) \
 \
 \
declare_TIE_CATIAUserSurfaces(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIAUserSurfaces##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIAUserSurfaces,"CATIAUserSurfaces",CATIAUserSurfaces::MetaObject(),classe::MetaObject(),TIEchain); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIAUserSurfaces(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIEchainCreation(CATIAUserSurfaces, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIAUserSurfaces##classe(classe::MetaObject(),CATIAUserSurfaces::MetaObject(),(void *)CreateTIECATIAUserSurfaces##classe)


/* Macro to switch between BOA and TIE at build time */ 
#ifdef CATSYS_BOA_IS_TIE
#define BOA_CATIAUserSurfaces(classe) TIE_CATIAUserSurfaces(classe)
#else
#define BOA_CATIAUserSurfaces(classe) CATImplementBOA(CATIAUserSurfaces, classe)
#endif

#endif
