#ifndef __TIE_CATIAAutoFillet
#define __TIE_CATIAAutoFillet

#include <string.h>
#include "CATBaseUnknown.h"
#include "CATMetaClass.h"
#include "CATMacForTie.h"
#include "CATExitJournal.h"
#include "CATIAAutoFillet.h"
#include "JS0DSPA.h"


#ifdef _WINDOWS_SOURCE
#define Exported __declspec(dllexport)
#define Imported __declspec(dllimport)
#else
#define Exported 
#define Imported 
#endif


/* To link an implementation with the interface CATIAAutoFillet */
#define declare_TIE_CATIAAutoFillet(classe) \
 \
 \
class TIECATIAAutoFillet##classe : public CATIAAutoFillet \
{ \
   private: \
      CATDeclareCommonTIEMembers \
   public: \
      CATDeclareTIEMethods(CATIAAutoFillet, classe) \
      CATDeclareIUnknownMethodsForCATBaseUnknownTIE \
      CATDeclareIDispatchMethodsForCATBaseUnknownTIE \
      CATDeclareCATBaseUnknownMethodsForTIE \
      virtual HRESULT __stdcall get_FilletRadius(CATIALength *& oRadius); \
      virtual HRESULT __stdcall get_RoundRadius(CATIALength *& oRadius); \
      virtual HRESULT __stdcall get_CurvatureRadius(CATIALength *& oRadius); \
      virtual HRESULT __stdcall get_FunctionalFaces(CATIAReferences *& oFaces); \
      virtual HRESULT __stdcall put_FunctionalFace(CATIAReference * iFace); \
      virtual HRESULT __stdcall get_SliversAndCracks(CATIAReferences *& oSlivers); \
      virtual HRESULT __stdcall put_SliversAndCrack(CATIAReference * iSlivers); \
      virtual HRESULT __stdcall get_PartingElement(CATIAReference *& oPartingElement); \
      virtual HRESULT __stdcall put_PartingElement(CATIAReference * iPartingElement); \
      virtual HRESULT __stdcall get_FacesToFillet(CATIAReferences *& oFaces); \
      virtual HRESULT __stdcall put_FacesToFillets(CATIAReference * iFace); \
      virtual HRESULT __stdcall get_RoundRadiusActivation(CAT_VARIANT_BOOL & oRoundRadActivation); \
      virtual HRESULT __stdcall put_RoundRadiusActivation(CAT_VARIANT_BOOL iRoundRadActivation); \
      virtual HRESULT __stdcall get_SupportSurface(CATIAReference *& oSupportSurface); \
      virtual HRESULT __stdcall put_SupportSurface(CATIAReference * iSupportSurface); \
      virtual HRESULT  __stdcall get_Application(CATIAApplication *& oApplication); \
      virtual HRESULT  __stdcall get_Parent(CATBaseDispatch *& oParent); \
      virtual HRESULT  __stdcall get_Name(CATBSTR & oNameBSTR); \
      virtual HRESULT  __stdcall put_Name(const CATBSTR & iNameBSTR); \
      virtual HRESULT  __stdcall GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj); \
};



#define ENVTIEdeclare_CATIAAutoFillet(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
virtual HRESULT __stdcall get_FilletRadius(CATIALength *& oRadius); \
virtual HRESULT __stdcall get_RoundRadius(CATIALength *& oRadius); \
virtual HRESULT __stdcall get_CurvatureRadius(CATIALength *& oRadius); \
virtual HRESULT __stdcall get_FunctionalFaces(CATIAReferences *& oFaces); \
virtual HRESULT __stdcall put_FunctionalFace(CATIAReference * iFace); \
virtual HRESULT __stdcall get_SliversAndCracks(CATIAReferences *& oSlivers); \
virtual HRESULT __stdcall put_SliversAndCrack(CATIAReference * iSlivers); \
virtual HRESULT __stdcall get_PartingElement(CATIAReference *& oPartingElement); \
virtual HRESULT __stdcall put_PartingElement(CATIAReference * iPartingElement); \
virtual HRESULT __stdcall get_FacesToFillet(CATIAReferences *& oFaces); \
virtual HRESULT __stdcall put_FacesToFillets(CATIAReference * iFace); \
virtual HRESULT __stdcall get_RoundRadiusActivation(CAT_VARIANT_BOOL & oRoundRadActivation); \
virtual HRESULT __stdcall put_RoundRadiusActivation(CAT_VARIANT_BOOL iRoundRadActivation); \
virtual HRESULT __stdcall get_SupportSurface(CATIAReference *& oSupportSurface); \
virtual HRESULT __stdcall put_SupportSurface(CATIAReference * iSupportSurface); \
virtual HRESULT  __stdcall get_Application(CATIAApplication *& oApplication); \
virtual HRESULT  __stdcall get_Parent(CATBaseDispatch *& oParent); \
virtual HRESULT  __stdcall get_Name(CATBSTR & oNameBSTR); \
virtual HRESULT  __stdcall put_Name(const CATBSTR & iNameBSTR); \
virtual HRESULT  __stdcall GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj); \


#define ENVTIEdefine_CATIAAutoFillet(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
HRESULT __stdcall  ENVTIEName::get_FilletRadius(CATIALength *& oRadius) \
{ \
return (ENVTIECALL(CATIAAutoFillet,ENVTIETypeLetter,ENVTIELetter)get_FilletRadius(oRadius)); \
} \
HRESULT __stdcall  ENVTIEName::get_RoundRadius(CATIALength *& oRadius) \
{ \
return (ENVTIECALL(CATIAAutoFillet,ENVTIETypeLetter,ENVTIELetter)get_RoundRadius(oRadius)); \
} \
HRESULT __stdcall  ENVTIEName::get_CurvatureRadius(CATIALength *& oRadius) \
{ \
return (ENVTIECALL(CATIAAutoFillet,ENVTIETypeLetter,ENVTIELetter)get_CurvatureRadius(oRadius)); \
} \
HRESULT __stdcall  ENVTIEName::get_FunctionalFaces(CATIAReferences *& oFaces) \
{ \
return (ENVTIECALL(CATIAAutoFillet,ENVTIETypeLetter,ENVTIELetter)get_FunctionalFaces(oFaces)); \
} \
HRESULT __stdcall  ENVTIEName::put_FunctionalFace(CATIAReference * iFace) \
{ \
return (ENVTIECALL(CATIAAutoFillet,ENVTIETypeLetter,ENVTIELetter)put_FunctionalFace(iFace)); \
} \
HRESULT __stdcall  ENVTIEName::get_SliversAndCracks(CATIAReferences *& oSlivers) \
{ \
return (ENVTIECALL(CATIAAutoFillet,ENVTIETypeLetter,ENVTIELetter)get_SliversAndCracks(oSlivers)); \
} \
HRESULT __stdcall  ENVTIEName::put_SliversAndCrack(CATIAReference * iSlivers) \
{ \
return (ENVTIECALL(CATIAAutoFillet,ENVTIETypeLetter,ENVTIELetter)put_SliversAndCrack(iSlivers)); \
} \
HRESULT __stdcall  ENVTIEName::get_PartingElement(CATIAReference *& oPartingElement) \
{ \
return (ENVTIECALL(CATIAAutoFillet,ENVTIETypeLetter,ENVTIELetter)get_PartingElement(oPartingElement)); \
} \
HRESULT __stdcall  ENVTIEName::put_PartingElement(CATIAReference * iPartingElement) \
{ \
return (ENVTIECALL(CATIAAutoFillet,ENVTIETypeLetter,ENVTIELetter)put_PartingElement(iPartingElement)); \
} \
HRESULT __stdcall  ENVTIEName::get_FacesToFillet(CATIAReferences *& oFaces) \
{ \
return (ENVTIECALL(CATIAAutoFillet,ENVTIETypeLetter,ENVTIELetter)get_FacesToFillet(oFaces)); \
} \
HRESULT __stdcall  ENVTIEName::put_FacesToFillets(CATIAReference * iFace) \
{ \
return (ENVTIECALL(CATIAAutoFillet,ENVTIETypeLetter,ENVTIELetter)put_FacesToFillets(iFace)); \
} \
HRESULT __stdcall  ENVTIEName::get_RoundRadiusActivation(CAT_VARIANT_BOOL & oRoundRadActivation) \
{ \
return (ENVTIECALL(CATIAAutoFillet,ENVTIETypeLetter,ENVTIELetter)get_RoundRadiusActivation(oRoundRadActivation)); \
} \
HRESULT __stdcall  ENVTIEName::put_RoundRadiusActivation(CAT_VARIANT_BOOL iRoundRadActivation) \
{ \
return (ENVTIECALL(CATIAAutoFillet,ENVTIETypeLetter,ENVTIELetter)put_RoundRadiusActivation(iRoundRadActivation)); \
} \
HRESULT __stdcall  ENVTIEName::get_SupportSurface(CATIAReference *& oSupportSurface) \
{ \
return (ENVTIECALL(CATIAAutoFillet,ENVTIETypeLetter,ENVTIELetter)get_SupportSurface(oSupportSurface)); \
} \
HRESULT __stdcall  ENVTIEName::put_SupportSurface(CATIAReference * iSupportSurface) \
{ \
return (ENVTIECALL(CATIAAutoFillet,ENVTIETypeLetter,ENVTIELetter)put_SupportSurface(iSupportSurface)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Application(CATIAApplication *& oApplication) \
{ \
return (ENVTIECALL(CATIAAutoFillet,ENVTIETypeLetter,ENVTIELetter)get_Application(oApplication)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Parent(CATBaseDispatch *& oParent) \
{ \
return (ENVTIECALL(CATIAAutoFillet,ENVTIETypeLetter,ENVTIELetter)get_Parent(oParent)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Name(CATBSTR & oNameBSTR) \
{ \
return (ENVTIECALL(CATIAAutoFillet,ENVTIETypeLetter,ENVTIELetter)get_Name(oNameBSTR)); \
} \
HRESULT  __stdcall  ENVTIEName::put_Name(const CATBSTR & iNameBSTR) \
{ \
return (ENVTIECALL(CATIAAutoFillet,ENVTIETypeLetter,ENVTIELetter)put_Name(iNameBSTR)); \
} \
HRESULT  __stdcall  ENVTIEName::GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj) \
{ \
return (ENVTIECALL(CATIAAutoFillet,ENVTIETypeLetter,ENVTIELetter)GetItem(IDName,RealObj)); \
} \


/* Name of the TIE class */
#define class_TIE_CATIAAutoFillet(classe)    TIECATIAAutoFillet##classe


/* Common methods inside a TIE */
#define common_TIE_CATIAAutoFillet(classe) \
 \
 \
/* Static initialization */ \
CATDefineCommonTIEMembers(CATIAAutoFillet, classe) \
 \
 \
CATImplementTIEMethods(CATIAAutoFillet, classe) \
CATImplementIUnknownMethodsForCATBaseUnknownTIE(CATIAAutoFillet, classe, 2) \
CATImplementIDispatchMethodsForCATBaseUnknownTIE(CATIAAutoFillet, classe) \
CATImplementCATBaseUnknownMethodsForTIE(CATIAAutoFillet, classe) \
 \
HRESULT __stdcall  TIECATIAAutoFillet##classe::get_FilletRadius(CATIALength *& oRadius) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,1,&_Trac2,&oRadius); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_FilletRadius(oRadius); \
   ExitAfterCall(this,1,_Trac2,&_ret_arg,&oRadius); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAAutoFillet##classe::get_RoundRadius(CATIALength *& oRadius) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,2,&_Trac2,&oRadius); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_RoundRadius(oRadius); \
   ExitAfterCall(this,2,_Trac2,&_ret_arg,&oRadius); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAAutoFillet##classe::get_CurvatureRadius(CATIALength *& oRadius) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,3,&_Trac2,&oRadius); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_CurvatureRadius(oRadius); \
   ExitAfterCall(this,3,_Trac2,&_ret_arg,&oRadius); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAAutoFillet##classe::get_FunctionalFaces(CATIAReferences *& oFaces) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,4,&_Trac2,&oFaces); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_FunctionalFaces(oFaces); \
   ExitAfterCall(this,4,_Trac2,&_ret_arg,&oFaces); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAAutoFillet##classe::put_FunctionalFace(CATIAReference * iFace) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,5,&_Trac2,&iFace); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_FunctionalFace(iFace); \
   ExitAfterCall(this,5,_Trac2,&_ret_arg,&iFace); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAAutoFillet##classe::get_SliversAndCracks(CATIAReferences *& oSlivers) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,6,&_Trac2,&oSlivers); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_SliversAndCracks(oSlivers); \
   ExitAfterCall(this,6,_Trac2,&_ret_arg,&oSlivers); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAAutoFillet##classe::put_SliversAndCrack(CATIAReference * iSlivers) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,7,&_Trac2,&iSlivers); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_SliversAndCrack(iSlivers); \
   ExitAfterCall(this,7,_Trac2,&_ret_arg,&iSlivers); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAAutoFillet##classe::get_PartingElement(CATIAReference *& oPartingElement) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,8,&_Trac2,&oPartingElement); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_PartingElement(oPartingElement); \
   ExitAfterCall(this,8,_Trac2,&_ret_arg,&oPartingElement); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAAutoFillet##classe::put_PartingElement(CATIAReference * iPartingElement) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,9,&_Trac2,&iPartingElement); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_PartingElement(iPartingElement); \
   ExitAfterCall(this,9,_Trac2,&_ret_arg,&iPartingElement); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAAutoFillet##classe::get_FacesToFillet(CATIAReferences *& oFaces) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,10,&_Trac2,&oFaces); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_FacesToFillet(oFaces); \
   ExitAfterCall(this,10,_Trac2,&_ret_arg,&oFaces); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAAutoFillet##classe::put_FacesToFillets(CATIAReference * iFace) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,11,&_Trac2,&iFace); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_FacesToFillets(iFace); \
   ExitAfterCall(this,11,_Trac2,&_ret_arg,&iFace); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAAutoFillet##classe::get_RoundRadiusActivation(CAT_VARIANT_BOOL & oRoundRadActivation) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,12,&_Trac2,&oRoundRadActivation); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_RoundRadiusActivation(oRoundRadActivation); \
   ExitAfterCall(this,12,_Trac2,&_ret_arg,&oRoundRadActivation); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAAutoFillet##classe::put_RoundRadiusActivation(CAT_VARIANT_BOOL iRoundRadActivation) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,13,&_Trac2,&iRoundRadActivation); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_RoundRadiusActivation(iRoundRadActivation); \
   ExitAfterCall(this,13,_Trac2,&_ret_arg,&iRoundRadActivation); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAAutoFillet##classe::get_SupportSurface(CATIAReference *& oSupportSurface) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,14,&_Trac2,&oSupportSurface); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_SupportSurface(oSupportSurface); \
   ExitAfterCall(this,14,_Trac2,&_ret_arg,&oSupportSurface); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAAutoFillet##classe::put_SupportSurface(CATIAReference * iSupportSurface) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,15,&_Trac2,&iSupportSurface); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_SupportSurface(iSupportSurface); \
   ExitAfterCall(this,15,_Trac2,&_ret_arg,&iSupportSurface); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAAutoFillet##classe::get_Application(CATIAApplication *& oApplication) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,16,&_Trac2,&oApplication); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Application(oApplication); \
   ExitAfterCall(this,16,_Trac2,&_ret_arg,&oApplication); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAAutoFillet##classe::get_Parent(CATBaseDispatch *& oParent) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,17,&_Trac2,&oParent); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Parent(oParent); \
   ExitAfterCall(this,17,_Trac2,&_ret_arg,&oParent); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAAutoFillet##classe::get_Name(CATBSTR & oNameBSTR) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,18,&_Trac2,&oNameBSTR); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Name(oNameBSTR); \
   ExitAfterCall(this,18,_Trac2,&_ret_arg,&oNameBSTR); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAAutoFillet##classe::put_Name(const CATBSTR & iNameBSTR) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,19,&_Trac2,&iNameBSTR); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_Name(iNameBSTR); \
   ExitAfterCall(this,19,_Trac2,&_ret_arg,&iNameBSTR); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAAutoFillet##classe::GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,20,&_Trac2,&IDName,&RealObj); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetItem(IDName,RealObj); \
   ExitAfterCall(this,20,_Trac2,&_ret_arg,&IDName,&RealObj); \
   return(_ret_arg); \
} \



/* Macro used to link an implementation with an interface */
#define TIE_CATIAAutoFillet(classe) \
 \
 \
declare_TIE_CATIAAutoFillet(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIAAutoFillet##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIAAutoFillet,"CATIAAutoFillet",CATIAAutoFillet::MetaObject(),classe::MetaObject(),TIE); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIAAutoFillet(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIECreation(CATIAAutoFillet, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIAAutoFillet##classe(classe::MetaObject(),CATIAAutoFillet::MetaObject(),(void *)CreateTIECATIAAutoFillet##classe)



/* Macro used to link an implementation with an interface */
/* This TIE is chained on the implementation object */
#define TIEchain_CATIAAutoFillet(classe) \
 \
 \
declare_TIE_CATIAAutoFillet(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIAAutoFillet##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIAAutoFillet,"CATIAAutoFillet",CATIAAutoFillet::MetaObject(),classe::MetaObject(),TIEchain); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIAAutoFillet(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIEchainCreation(CATIAAutoFillet, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIAAutoFillet##classe(classe::MetaObject(),CATIAAutoFillet::MetaObject(),(void *)CreateTIECATIAAutoFillet##classe)


/* Macro to switch between BOA and TIE at build time */ 
#ifdef CATSYS_BOA_IS_TIE
#define BOA_CATIAAutoFillet(classe) TIE_CATIAAutoFillet(classe)
#else
#define BOA_CATIAAutoFillet(classe) CATImplementBOA(CATIAAutoFillet, classe)
#endif

#endif
