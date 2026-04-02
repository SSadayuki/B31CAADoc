#ifndef __TIE_SWKIALineOfSight
#define __TIE_SWKIALineOfSight

#include <string.h>
#include "CATBaseUnknown.h"
#include "CATMetaClass.h"
#include "CATMacForTie.h"
#include "CATExitJournal.h"
#include "SWKIALineOfSight.h"
#include "JS0DSPA.h"


#ifdef _WINDOWS_SOURCE
#define Exported __declspec(dllexport)
#define Imported __declspec(dllimport)
#else
#define Exported 
#define Imported 
#endif


/* To link an implementation with the interface SWKIALineOfSight */
#define declare_TIE_SWKIALineOfSight(classe) \
 \
 \
class TIESWKIALineOfSight##classe : public SWKIALineOfSight \
{ \
   private: \
      CATDeclareCommonTIEMembers \
   public: \
      CATDeclareTIEMethods(SWKIALineOfSight, classe) \
      CATDeclareIUnknownMethodsForCATBaseUnknownTIE \
      CATDeclareIDispatchMethodsForCATBaseUnknownTIE \
      CATDeclareCATBaseUnknownMethodsForTIE \
      virtual HRESULT __stdcall get_NbDOFs(CATLONG & poNbDOFs); \
      virtual HRESULT __stdcall GetDOF(CATLONG piDOFNumber, SWKIADOF *& poDOF); \
      virtual HRESULT __stdcall get_Length(double & poLength); \
      virtual HRESULT __stdcall SetPosition(const CATSafeArrayVariant & piNewPosition); \
      virtual HRESULT __stdcall ApplyPosition(const CATSafeArrayVariant & piPositionIncrement); \
      virtual HRESULT __stdcall get_FullName(CATBSTR & pioFullName); \
      virtual HRESULT __stdcall GetGlobalPosition(CATSafeArrayVariant & poGlobalPosition); \
      virtual HRESULT __stdcall get_PositionX(double & poPositionX); \
      virtual HRESULT __stdcall get_PositionY(double & poPositionY); \
      virtual HRESULT __stdcall get_PositionZ(double & poPositionZ); \
      virtual HRESULT __stdcall get_Manikin(SWKIAManikin *& poManikin); \
      virtual HRESULT __stdcall get_RefreshDisplay(CAT_VARIANT_BOOL & poRefreshIsEnabled); \
      virtual HRESULT __stdcall put_RefreshDisplay(CAT_VARIANT_BOOL piRefreshIsEnabled); \
      virtual HRESULT __stdcall Refresh3D(); \
      virtual HRESULT  __stdcall get_Application(CATIAApplication *& oApplication); \
      virtual HRESULT  __stdcall get_Parent(CATBaseDispatch *& oParent); \
      virtual HRESULT  __stdcall get_Name(CATBSTR & oNameBSTR); \
      virtual HRESULT  __stdcall put_Name(const CATBSTR & iNameBSTR); \
      virtual HRESULT  __stdcall GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj); \
};



#define ENVTIEdeclare_SWKIALineOfSight(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
virtual HRESULT __stdcall get_NbDOFs(CATLONG & poNbDOFs); \
virtual HRESULT __stdcall GetDOF(CATLONG piDOFNumber, SWKIADOF *& poDOF); \
virtual HRESULT __stdcall get_Length(double & poLength); \
virtual HRESULT __stdcall SetPosition(const CATSafeArrayVariant & piNewPosition); \
virtual HRESULT __stdcall ApplyPosition(const CATSafeArrayVariant & piPositionIncrement); \
virtual HRESULT __stdcall get_FullName(CATBSTR & pioFullName); \
virtual HRESULT __stdcall GetGlobalPosition(CATSafeArrayVariant & poGlobalPosition); \
virtual HRESULT __stdcall get_PositionX(double & poPositionX); \
virtual HRESULT __stdcall get_PositionY(double & poPositionY); \
virtual HRESULT __stdcall get_PositionZ(double & poPositionZ); \
virtual HRESULT __stdcall get_Manikin(SWKIAManikin *& poManikin); \
virtual HRESULT __stdcall get_RefreshDisplay(CAT_VARIANT_BOOL & poRefreshIsEnabled); \
virtual HRESULT __stdcall put_RefreshDisplay(CAT_VARIANT_BOOL piRefreshIsEnabled); \
virtual HRESULT __stdcall Refresh3D(); \
virtual HRESULT  __stdcall get_Application(CATIAApplication *& oApplication); \
virtual HRESULT  __stdcall get_Parent(CATBaseDispatch *& oParent); \
virtual HRESULT  __stdcall get_Name(CATBSTR & oNameBSTR); \
virtual HRESULT  __stdcall put_Name(const CATBSTR & iNameBSTR); \
virtual HRESULT  __stdcall GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj); \


#define ENVTIEdefine_SWKIALineOfSight(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
HRESULT __stdcall  ENVTIEName::get_NbDOFs(CATLONG & poNbDOFs) \
{ \
return (ENVTIECALL(SWKIALineOfSight,ENVTIETypeLetter,ENVTIELetter)get_NbDOFs(poNbDOFs)); \
} \
HRESULT __stdcall  ENVTIEName::GetDOF(CATLONG piDOFNumber, SWKIADOF *& poDOF) \
{ \
return (ENVTIECALL(SWKIALineOfSight,ENVTIETypeLetter,ENVTIELetter)GetDOF(piDOFNumber,poDOF)); \
} \
HRESULT __stdcall  ENVTIEName::get_Length(double & poLength) \
{ \
return (ENVTIECALL(SWKIALineOfSight,ENVTIETypeLetter,ENVTIELetter)get_Length(poLength)); \
} \
HRESULT __stdcall  ENVTIEName::SetPosition(const CATSafeArrayVariant & piNewPosition) \
{ \
return (ENVTIECALL(SWKIALineOfSight,ENVTIETypeLetter,ENVTIELetter)SetPosition(piNewPosition)); \
} \
HRESULT __stdcall  ENVTIEName::ApplyPosition(const CATSafeArrayVariant & piPositionIncrement) \
{ \
return (ENVTIECALL(SWKIALineOfSight,ENVTIETypeLetter,ENVTIELetter)ApplyPosition(piPositionIncrement)); \
} \
HRESULT __stdcall  ENVTIEName::get_FullName(CATBSTR & pioFullName) \
{ \
return (ENVTIECALL(SWKIALineOfSight,ENVTIETypeLetter,ENVTIELetter)get_FullName(pioFullName)); \
} \
HRESULT __stdcall  ENVTIEName::GetGlobalPosition(CATSafeArrayVariant & poGlobalPosition) \
{ \
return (ENVTIECALL(SWKIALineOfSight,ENVTIETypeLetter,ENVTIELetter)GetGlobalPosition(poGlobalPosition)); \
} \
HRESULT __stdcall  ENVTIEName::get_PositionX(double & poPositionX) \
{ \
return (ENVTIECALL(SWKIALineOfSight,ENVTIETypeLetter,ENVTIELetter)get_PositionX(poPositionX)); \
} \
HRESULT __stdcall  ENVTIEName::get_PositionY(double & poPositionY) \
{ \
return (ENVTIECALL(SWKIALineOfSight,ENVTIETypeLetter,ENVTIELetter)get_PositionY(poPositionY)); \
} \
HRESULT __stdcall  ENVTIEName::get_PositionZ(double & poPositionZ) \
{ \
return (ENVTIECALL(SWKIALineOfSight,ENVTIETypeLetter,ENVTIELetter)get_PositionZ(poPositionZ)); \
} \
HRESULT __stdcall  ENVTIEName::get_Manikin(SWKIAManikin *& poManikin) \
{ \
return (ENVTIECALL(SWKIALineOfSight,ENVTIETypeLetter,ENVTIELetter)get_Manikin(poManikin)); \
} \
HRESULT __stdcall  ENVTIEName::get_RefreshDisplay(CAT_VARIANT_BOOL & poRefreshIsEnabled) \
{ \
return (ENVTIECALL(SWKIALineOfSight,ENVTIETypeLetter,ENVTIELetter)get_RefreshDisplay(poRefreshIsEnabled)); \
} \
HRESULT __stdcall  ENVTIEName::put_RefreshDisplay(CAT_VARIANT_BOOL piRefreshIsEnabled) \
{ \
return (ENVTIECALL(SWKIALineOfSight,ENVTIETypeLetter,ENVTIELetter)put_RefreshDisplay(piRefreshIsEnabled)); \
} \
HRESULT __stdcall  ENVTIEName::Refresh3D() \
{ \
return (ENVTIECALL(SWKIALineOfSight,ENVTIETypeLetter,ENVTIELetter)Refresh3D()); \
} \
HRESULT  __stdcall  ENVTIEName::get_Application(CATIAApplication *& oApplication) \
{ \
return (ENVTIECALL(SWKIALineOfSight,ENVTIETypeLetter,ENVTIELetter)get_Application(oApplication)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Parent(CATBaseDispatch *& oParent) \
{ \
return (ENVTIECALL(SWKIALineOfSight,ENVTIETypeLetter,ENVTIELetter)get_Parent(oParent)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Name(CATBSTR & oNameBSTR) \
{ \
return (ENVTIECALL(SWKIALineOfSight,ENVTIETypeLetter,ENVTIELetter)get_Name(oNameBSTR)); \
} \
HRESULT  __stdcall  ENVTIEName::put_Name(const CATBSTR & iNameBSTR) \
{ \
return (ENVTIECALL(SWKIALineOfSight,ENVTIETypeLetter,ENVTIELetter)put_Name(iNameBSTR)); \
} \
HRESULT  __stdcall  ENVTIEName::GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj) \
{ \
return (ENVTIECALL(SWKIALineOfSight,ENVTIETypeLetter,ENVTIELetter)GetItem(IDName,RealObj)); \
} \


/* Name of the TIE class */
#define class_TIE_SWKIALineOfSight(classe)    TIESWKIALineOfSight##classe


/* Common methods inside a TIE */
#define common_TIE_SWKIALineOfSight(classe) \
 \
 \
/* Static initialization */ \
CATDefineCommonTIEMembers(SWKIALineOfSight, classe) \
 \
 \
CATImplementTIEMethods(SWKIALineOfSight, classe) \
CATImplementIUnknownMethodsForCATBaseUnknownTIE(SWKIALineOfSight, classe, 2) \
CATImplementIDispatchMethodsForCATBaseUnknownTIE(SWKIALineOfSight, classe) \
CATImplementCATBaseUnknownMethodsForTIE(SWKIALineOfSight, classe) \
 \
HRESULT __stdcall  TIESWKIALineOfSight##classe::get_NbDOFs(CATLONG & poNbDOFs) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,1,&_Trac2,&poNbDOFs); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_NbDOFs(poNbDOFs); \
   ExitAfterCall(this,1,_Trac2,&_ret_arg,&poNbDOFs); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIESWKIALineOfSight##classe::GetDOF(CATLONG piDOFNumber, SWKIADOF *& poDOF) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,2,&_Trac2,&piDOFNumber,&poDOF); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetDOF(piDOFNumber,poDOF); \
   ExitAfterCall(this,2,_Trac2,&_ret_arg,&piDOFNumber,&poDOF); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIESWKIALineOfSight##classe::get_Length(double & poLength) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,3,&_Trac2,&poLength); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Length(poLength); \
   ExitAfterCall(this,3,_Trac2,&_ret_arg,&poLength); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIESWKIALineOfSight##classe::SetPosition(const CATSafeArrayVariant & piNewPosition) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,4,&_Trac2,&piNewPosition); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetPosition(piNewPosition); \
   ExitAfterCall(this,4,_Trac2,&_ret_arg,&piNewPosition); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIESWKIALineOfSight##classe::ApplyPosition(const CATSafeArrayVariant & piPositionIncrement) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,5,&_Trac2,&piPositionIncrement); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->ApplyPosition(piPositionIncrement); \
   ExitAfterCall(this,5,_Trac2,&_ret_arg,&piPositionIncrement); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIESWKIALineOfSight##classe::get_FullName(CATBSTR & pioFullName) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,6,&_Trac2,&pioFullName); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_FullName(pioFullName); \
   ExitAfterCall(this,6,_Trac2,&_ret_arg,&pioFullName); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIESWKIALineOfSight##classe::GetGlobalPosition(CATSafeArrayVariant & poGlobalPosition) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,7,&_Trac2,&poGlobalPosition); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetGlobalPosition(poGlobalPosition); \
   ExitAfterCall(this,7,_Trac2,&_ret_arg,&poGlobalPosition); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIESWKIALineOfSight##classe::get_PositionX(double & poPositionX) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,8,&_Trac2,&poPositionX); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_PositionX(poPositionX); \
   ExitAfterCall(this,8,_Trac2,&_ret_arg,&poPositionX); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIESWKIALineOfSight##classe::get_PositionY(double & poPositionY) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,9,&_Trac2,&poPositionY); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_PositionY(poPositionY); \
   ExitAfterCall(this,9,_Trac2,&_ret_arg,&poPositionY); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIESWKIALineOfSight##classe::get_PositionZ(double & poPositionZ) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,10,&_Trac2,&poPositionZ); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_PositionZ(poPositionZ); \
   ExitAfterCall(this,10,_Trac2,&_ret_arg,&poPositionZ); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIESWKIALineOfSight##classe::get_Manikin(SWKIAManikin *& poManikin) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,11,&_Trac2,&poManikin); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Manikin(poManikin); \
   ExitAfterCall(this,11,_Trac2,&_ret_arg,&poManikin); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIESWKIALineOfSight##classe::get_RefreshDisplay(CAT_VARIANT_BOOL & poRefreshIsEnabled) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,12,&_Trac2,&poRefreshIsEnabled); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_RefreshDisplay(poRefreshIsEnabled); \
   ExitAfterCall(this,12,_Trac2,&_ret_arg,&poRefreshIsEnabled); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIESWKIALineOfSight##classe::put_RefreshDisplay(CAT_VARIANT_BOOL piRefreshIsEnabled) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,13,&_Trac2,&piRefreshIsEnabled); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_RefreshDisplay(piRefreshIsEnabled); \
   ExitAfterCall(this,13,_Trac2,&_ret_arg,&piRefreshIsEnabled); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIESWKIALineOfSight##classe::Refresh3D() \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,14,&_Trac2); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->Refresh3D(); \
   ExitAfterCall(this,14,_Trac2,&_ret_arg); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIESWKIALineOfSight##classe::get_Application(CATIAApplication *& oApplication) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,15,&_Trac2,&oApplication); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Application(oApplication); \
   ExitAfterCall(this,15,_Trac2,&_ret_arg,&oApplication); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIESWKIALineOfSight##classe::get_Parent(CATBaseDispatch *& oParent) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,16,&_Trac2,&oParent); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Parent(oParent); \
   ExitAfterCall(this,16,_Trac2,&_ret_arg,&oParent); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIESWKIALineOfSight##classe::get_Name(CATBSTR & oNameBSTR) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,17,&_Trac2,&oNameBSTR); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Name(oNameBSTR); \
   ExitAfterCall(this,17,_Trac2,&_ret_arg,&oNameBSTR); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIESWKIALineOfSight##classe::put_Name(const CATBSTR & iNameBSTR) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,18,&_Trac2,&iNameBSTR); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_Name(iNameBSTR); \
   ExitAfterCall(this,18,_Trac2,&_ret_arg,&iNameBSTR); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIESWKIALineOfSight##classe::GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,19,&_Trac2,&IDName,&RealObj); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetItem(IDName,RealObj); \
   ExitAfterCall(this,19,_Trac2,&_ret_arg,&IDName,&RealObj); \
   return(_ret_arg); \
} \



/* Macro used to link an implementation with an interface */
#define TIE_SWKIALineOfSight(classe) \
 \
 \
declare_TIE_SWKIALineOfSight(classe) \
 \
 \
CATMetaClass * __stdcall TIESWKIALineOfSight##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_SWKIALineOfSight,"SWKIALineOfSight",SWKIALineOfSight::MetaObject(),classe::MetaObject(),TIE); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_SWKIALineOfSight(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIECreation(SWKIALineOfSight, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicSWKIALineOfSight##classe(classe::MetaObject(),SWKIALineOfSight::MetaObject(),(void *)CreateTIESWKIALineOfSight##classe)



/* Macro used to link an implementation with an interface */
/* This TIE is chained on the implementation object */
#define TIEchain_SWKIALineOfSight(classe) \
 \
 \
declare_TIE_SWKIALineOfSight(classe) \
 \
 \
CATMetaClass * __stdcall TIESWKIALineOfSight##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_SWKIALineOfSight,"SWKIALineOfSight",SWKIALineOfSight::MetaObject(),classe::MetaObject(),TIEchain); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_SWKIALineOfSight(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIEchainCreation(SWKIALineOfSight, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicSWKIALineOfSight##classe(classe::MetaObject(),SWKIALineOfSight::MetaObject(),(void *)CreateTIESWKIALineOfSight##classe)


/* Macro to switch between BOA and TIE at build time */ 
#ifdef CATSYS_BOA_IS_TIE
#define BOA_SWKIALineOfSight(classe) TIE_SWKIALineOfSight(classe)
#else
#define BOA_SWKIALineOfSight(classe) CATImplementBOA(SWKIALineOfSight, classe)
#endif

#endif
