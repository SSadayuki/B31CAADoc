#ifndef __TIE_CATIAInertia
#define __TIE_CATIAInertia

#include <string.h>
#include "CATBaseUnknown.h"
#include "CATMetaClass.h"
#include "CATMacForTie.h"
#include "CATExitJournal.h"
#include "CATIAInertia.h"
#include "JS0DSPA.h"


#ifdef _WINDOWS_SOURCE
#define Exported __declspec(dllexport)
#define Imported __declspec(dllimport)
#else
#define Exported 
#define Imported 
#endif


/* To link an implementation with the interface CATIAInertia */
#define declare_TIE_CATIAInertia(classe) \
 \
 \
class TIECATIAInertia##classe : public CATIAInertia \
{ \
   private: \
      CATDeclareCommonTIEMembers \
   public: \
      CATDeclareTIEMethods(CATIAInertia, classe) \
      CATDeclareIUnknownMethodsForCATBaseUnknownTIE \
      CATDeclareIDispatchMethodsForCATBaseUnknownTIE \
      CATDeclareCATBaseUnknownMethodsForTIE \
      virtual HRESULT __stdcall get_Object(CATBaseDispatch *& oObject); \
      virtual HRESULT __stdcall get_Density(double & oDensity); \
      virtual HRESULT __stdcall put_Density(double iDensity); \
      virtual HRESULT __stdcall get_Mass(double & oMass); \
      virtual HRESULT __stdcall GetCOGPosition(CATSafeArrayVariant & oCoordinates); \
      virtual HRESULT __stdcall GetInertiaMatrix(CATSafeArrayVariant & oMatrix); \
      virtual HRESULT __stdcall GetPrincipalAxes(CATSafeArrayVariant & oComponents); \
      virtual HRESULT __stdcall GetPrincipalMoments(CATSafeArrayVariant & oValues); \
      virtual HRESULT __stdcall get_GranularityMode(CATLONG & oGranularity); \
      virtual HRESULT __stdcall put_GranularityMode(CATLONG iGranularity); \
      virtual HRESULT  __stdcall get_Application(CATIAApplication *& oApplication); \
      virtual HRESULT  __stdcall get_Parent(CATBaseDispatch *& oParent); \
      virtual HRESULT  __stdcall get_Name(CATBSTR & oNameBSTR); \
      virtual HRESULT  __stdcall put_Name(const CATBSTR & iNameBSTR); \
      virtual HRESULT  __stdcall GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj); \
};



#define ENVTIEdeclare_CATIAInertia(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
virtual HRESULT __stdcall get_Object(CATBaseDispatch *& oObject); \
virtual HRESULT __stdcall get_Density(double & oDensity); \
virtual HRESULT __stdcall put_Density(double iDensity); \
virtual HRESULT __stdcall get_Mass(double & oMass); \
virtual HRESULT __stdcall GetCOGPosition(CATSafeArrayVariant & oCoordinates); \
virtual HRESULT __stdcall GetInertiaMatrix(CATSafeArrayVariant & oMatrix); \
virtual HRESULT __stdcall GetPrincipalAxes(CATSafeArrayVariant & oComponents); \
virtual HRESULT __stdcall GetPrincipalMoments(CATSafeArrayVariant & oValues); \
virtual HRESULT __stdcall get_GranularityMode(CATLONG & oGranularity); \
virtual HRESULT __stdcall put_GranularityMode(CATLONG iGranularity); \
virtual HRESULT  __stdcall get_Application(CATIAApplication *& oApplication); \
virtual HRESULT  __stdcall get_Parent(CATBaseDispatch *& oParent); \
virtual HRESULT  __stdcall get_Name(CATBSTR & oNameBSTR); \
virtual HRESULT  __stdcall put_Name(const CATBSTR & iNameBSTR); \
virtual HRESULT  __stdcall GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj); \


#define ENVTIEdefine_CATIAInertia(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
HRESULT __stdcall  ENVTIEName::get_Object(CATBaseDispatch *& oObject) \
{ \
return (ENVTIECALL(CATIAInertia,ENVTIETypeLetter,ENVTIELetter)get_Object(oObject)); \
} \
HRESULT __stdcall  ENVTIEName::get_Density(double & oDensity) \
{ \
return (ENVTIECALL(CATIAInertia,ENVTIETypeLetter,ENVTIELetter)get_Density(oDensity)); \
} \
HRESULT __stdcall  ENVTIEName::put_Density(double iDensity) \
{ \
return (ENVTIECALL(CATIAInertia,ENVTIETypeLetter,ENVTIELetter)put_Density(iDensity)); \
} \
HRESULT __stdcall  ENVTIEName::get_Mass(double & oMass) \
{ \
return (ENVTIECALL(CATIAInertia,ENVTIETypeLetter,ENVTIELetter)get_Mass(oMass)); \
} \
HRESULT __stdcall  ENVTIEName::GetCOGPosition(CATSafeArrayVariant & oCoordinates) \
{ \
return (ENVTIECALL(CATIAInertia,ENVTIETypeLetter,ENVTIELetter)GetCOGPosition(oCoordinates)); \
} \
HRESULT __stdcall  ENVTIEName::GetInertiaMatrix(CATSafeArrayVariant & oMatrix) \
{ \
return (ENVTIECALL(CATIAInertia,ENVTIETypeLetter,ENVTIELetter)GetInertiaMatrix(oMatrix)); \
} \
HRESULT __stdcall  ENVTIEName::GetPrincipalAxes(CATSafeArrayVariant & oComponents) \
{ \
return (ENVTIECALL(CATIAInertia,ENVTIETypeLetter,ENVTIELetter)GetPrincipalAxes(oComponents)); \
} \
HRESULT __stdcall  ENVTIEName::GetPrincipalMoments(CATSafeArrayVariant & oValues) \
{ \
return (ENVTIECALL(CATIAInertia,ENVTIETypeLetter,ENVTIELetter)GetPrincipalMoments(oValues)); \
} \
HRESULT __stdcall  ENVTIEName::get_GranularityMode(CATLONG & oGranularity) \
{ \
return (ENVTIECALL(CATIAInertia,ENVTIETypeLetter,ENVTIELetter)get_GranularityMode(oGranularity)); \
} \
HRESULT __stdcall  ENVTIEName::put_GranularityMode(CATLONG iGranularity) \
{ \
return (ENVTIECALL(CATIAInertia,ENVTIETypeLetter,ENVTIELetter)put_GranularityMode(iGranularity)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Application(CATIAApplication *& oApplication) \
{ \
return (ENVTIECALL(CATIAInertia,ENVTIETypeLetter,ENVTIELetter)get_Application(oApplication)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Parent(CATBaseDispatch *& oParent) \
{ \
return (ENVTIECALL(CATIAInertia,ENVTIETypeLetter,ENVTIELetter)get_Parent(oParent)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Name(CATBSTR & oNameBSTR) \
{ \
return (ENVTIECALL(CATIAInertia,ENVTIETypeLetter,ENVTIELetter)get_Name(oNameBSTR)); \
} \
HRESULT  __stdcall  ENVTIEName::put_Name(const CATBSTR & iNameBSTR) \
{ \
return (ENVTIECALL(CATIAInertia,ENVTIETypeLetter,ENVTIELetter)put_Name(iNameBSTR)); \
} \
HRESULT  __stdcall  ENVTIEName::GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj) \
{ \
return (ENVTIECALL(CATIAInertia,ENVTIETypeLetter,ENVTIELetter)GetItem(IDName,RealObj)); \
} \


/* Name of the TIE class */
#define class_TIE_CATIAInertia(classe)    TIECATIAInertia##classe


/* Common methods inside a TIE */
#define common_TIE_CATIAInertia(classe) \
 \
 \
/* Static initialization */ \
CATDefineCommonTIEMembers(CATIAInertia, classe) \
 \
 \
CATImplementTIEMethods(CATIAInertia, classe) \
CATImplementIUnknownMethodsForCATBaseUnknownTIE(CATIAInertia, classe, 2) \
CATImplementIDispatchMethodsForCATBaseUnknownTIE(CATIAInertia, classe) \
CATImplementCATBaseUnknownMethodsForTIE(CATIAInertia, classe) \
 \
HRESULT __stdcall  TIECATIAInertia##classe::get_Object(CATBaseDispatch *& oObject) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,1,&_Trac2,&oObject); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Object(oObject); \
   ExitAfterCall(this,1,_Trac2,&_ret_arg,&oObject); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAInertia##classe::get_Density(double & oDensity) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,2,&_Trac2,&oDensity); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Density(oDensity); \
   ExitAfterCall(this,2,_Trac2,&_ret_arg,&oDensity); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAInertia##classe::put_Density(double iDensity) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,3,&_Trac2,&iDensity); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_Density(iDensity); \
   ExitAfterCall(this,3,_Trac2,&_ret_arg,&iDensity); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAInertia##classe::get_Mass(double & oMass) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,4,&_Trac2,&oMass); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Mass(oMass); \
   ExitAfterCall(this,4,_Trac2,&_ret_arg,&oMass); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAInertia##classe::GetCOGPosition(CATSafeArrayVariant & oCoordinates) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,5,&_Trac2,&oCoordinates); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetCOGPosition(oCoordinates); \
   ExitAfterCall(this,5,_Trac2,&_ret_arg,&oCoordinates); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAInertia##classe::GetInertiaMatrix(CATSafeArrayVariant & oMatrix) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,6,&_Trac2,&oMatrix); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetInertiaMatrix(oMatrix); \
   ExitAfterCall(this,6,_Trac2,&_ret_arg,&oMatrix); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAInertia##classe::GetPrincipalAxes(CATSafeArrayVariant & oComponents) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,7,&_Trac2,&oComponents); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetPrincipalAxes(oComponents); \
   ExitAfterCall(this,7,_Trac2,&_ret_arg,&oComponents); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAInertia##classe::GetPrincipalMoments(CATSafeArrayVariant & oValues) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,8,&_Trac2,&oValues); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetPrincipalMoments(oValues); \
   ExitAfterCall(this,8,_Trac2,&_ret_arg,&oValues); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAInertia##classe::get_GranularityMode(CATLONG & oGranularity) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,9,&_Trac2,&oGranularity); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_GranularityMode(oGranularity); \
   ExitAfterCall(this,9,_Trac2,&_ret_arg,&oGranularity); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAInertia##classe::put_GranularityMode(CATLONG iGranularity) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,10,&_Trac2,&iGranularity); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_GranularityMode(iGranularity); \
   ExitAfterCall(this,10,_Trac2,&_ret_arg,&iGranularity); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAInertia##classe::get_Application(CATIAApplication *& oApplication) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,11,&_Trac2,&oApplication); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Application(oApplication); \
   ExitAfterCall(this,11,_Trac2,&_ret_arg,&oApplication); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAInertia##classe::get_Parent(CATBaseDispatch *& oParent) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,12,&_Trac2,&oParent); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Parent(oParent); \
   ExitAfterCall(this,12,_Trac2,&_ret_arg,&oParent); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAInertia##classe::get_Name(CATBSTR & oNameBSTR) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,13,&_Trac2,&oNameBSTR); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Name(oNameBSTR); \
   ExitAfterCall(this,13,_Trac2,&_ret_arg,&oNameBSTR); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAInertia##classe::put_Name(const CATBSTR & iNameBSTR) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,14,&_Trac2,&iNameBSTR); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_Name(iNameBSTR); \
   ExitAfterCall(this,14,_Trac2,&_ret_arg,&iNameBSTR); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAInertia##classe::GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,15,&_Trac2,&IDName,&RealObj); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetItem(IDName,RealObj); \
   ExitAfterCall(this,15,_Trac2,&_ret_arg,&IDName,&RealObj); \
   return(_ret_arg); \
} \



/* Macro used to link an implementation with an interface */
#define TIE_CATIAInertia(classe) \
 \
 \
declare_TIE_CATIAInertia(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIAInertia##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIAInertia,"CATIAInertia",CATIAInertia::MetaObject(),classe::MetaObject(),TIE); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIAInertia(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIECreation(CATIAInertia, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIAInertia##classe(classe::MetaObject(),CATIAInertia::MetaObject(),(void *)CreateTIECATIAInertia##classe)



/* Macro used to link an implementation with an interface */
/* This TIE is chained on the implementation object */
#define TIEchain_CATIAInertia(classe) \
 \
 \
declare_TIE_CATIAInertia(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIAInertia##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIAInertia,"CATIAInertia",CATIAInertia::MetaObject(),classe::MetaObject(),TIEchain); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIAInertia(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIEchainCreation(CATIAInertia, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIAInertia##classe(classe::MetaObject(),CATIAInertia::MetaObject(),(void *)CreateTIECATIAInertia##classe)


/* Macro to switch between BOA and TIE at build time */ 
#ifdef CATSYS_BOA_IS_TIE
#define BOA_CATIAInertia(classe) TIE_CATIAInertia(classe)
#else
#define BOA_CATIAInertia(classe) CATImplementBOA(CATIAInertia, classe)
#endif

#endif
