#ifndef __TIE_CATIAAnalyze
#define __TIE_CATIAAnalyze

#include <string.h>
#include "CATBaseUnknown.h"
#include "CATMetaClass.h"
#include "CATMacForTie.h"
#include "CATExitJournal.h"
#include "CATIAAnalyze.h"
#include "JS0DSPA.h"


#ifdef _WINDOWS_SOURCE
#define Exported __declspec(dllexport)
#define Imported __declspec(dllimport)
#else
#define Exported 
#define Imported 
#endif


/* To link an implementation with the interface CATIAAnalyze */
#define declare_TIE_CATIAAnalyze(classe) \
 \
 \
class TIECATIAAnalyze##classe : public CATIAAnalyze \
{ \
   private: \
      CATDeclareCommonTIEMembers \
   public: \
      CATDeclareTIEMethods(CATIAAnalyze, classe) \
      CATDeclareIUnknownMethodsForCATBaseUnknownTIE \
      CATDeclareIDispatchMethodsForCATBaseUnknownTIE \
      CATDeclareCATBaseUnknownMethodsForTIE \
      virtual HRESULT __stdcall get_Mass(double & oMass); \
      virtual HRESULT __stdcall get_Volume(double & oVolume); \
      virtual HRESULT __stdcall get_WetArea(double & oWetArea); \
      virtual HRESULT __stdcall GetGravityCenter(CATSafeArrayVariant & oGravityCenterCoordinatesArray); \
      virtual HRESULT __stdcall GetInertia(CATSafeArrayVariant & oInertiaMatrixArray); \
      virtual HRESULT  __stdcall get_Application(CATIAApplication *& oApplication); \
      virtual HRESULT  __stdcall get_Parent(CATBaseDispatch *& oParent); \
      virtual HRESULT  __stdcall get_Name(CATBSTR & oNameBSTR); \
      virtual HRESULT  __stdcall put_Name(const CATBSTR & iNameBSTR); \
      virtual HRESULT  __stdcall GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj); \
};



#define ENVTIEdeclare_CATIAAnalyze(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
virtual HRESULT __stdcall get_Mass(double & oMass); \
virtual HRESULT __stdcall get_Volume(double & oVolume); \
virtual HRESULT __stdcall get_WetArea(double & oWetArea); \
virtual HRESULT __stdcall GetGravityCenter(CATSafeArrayVariant & oGravityCenterCoordinatesArray); \
virtual HRESULT __stdcall GetInertia(CATSafeArrayVariant & oInertiaMatrixArray); \
virtual HRESULT  __stdcall get_Application(CATIAApplication *& oApplication); \
virtual HRESULT  __stdcall get_Parent(CATBaseDispatch *& oParent); \
virtual HRESULT  __stdcall get_Name(CATBSTR & oNameBSTR); \
virtual HRESULT  __stdcall put_Name(const CATBSTR & iNameBSTR); \
virtual HRESULT  __stdcall GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj); \


#define ENVTIEdefine_CATIAAnalyze(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
HRESULT __stdcall  ENVTIEName::get_Mass(double & oMass) \
{ \
return (ENVTIECALL(CATIAAnalyze,ENVTIETypeLetter,ENVTIELetter)get_Mass(oMass)); \
} \
HRESULT __stdcall  ENVTIEName::get_Volume(double & oVolume) \
{ \
return (ENVTIECALL(CATIAAnalyze,ENVTIETypeLetter,ENVTIELetter)get_Volume(oVolume)); \
} \
HRESULT __stdcall  ENVTIEName::get_WetArea(double & oWetArea) \
{ \
return (ENVTIECALL(CATIAAnalyze,ENVTIETypeLetter,ENVTIELetter)get_WetArea(oWetArea)); \
} \
HRESULT __stdcall  ENVTIEName::GetGravityCenter(CATSafeArrayVariant & oGravityCenterCoordinatesArray) \
{ \
return (ENVTIECALL(CATIAAnalyze,ENVTIETypeLetter,ENVTIELetter)GetGravityCenter(oGravityCenterCoordinatesArray)); \
} \
HRESULT __stdcall  ENVTIEName::GetInertia(CATSafeArrayVariant & oInertiaMatrixArray) \
{ \
return (ENVTIECALL(CATIAAnalyze,ENVTIETypeLetter,ENVTIELetter)GetInertia(oInertiaMatrixArray)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Application(CATIAApplication *& oApplication) \
{ \
return (ENVTIECALL(CATIAAnalyze,ENVTIETypeLetter,ENVTIELetter)get_Application(oApplication)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Parent(CATBaseDispatch *& oParent) \
{ \
return (ENVTIECALL(CATIAAnalyze,ENVTIETypeLetter,ENVTIELetter)get_Parent(oParent)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Name(CATBSTR & oNameBSTR) \
{ \
return (ENVTIECALL(CATIAAnalyze,ENVTIETypeLetter,ENVTIELetter)get_Name(oNameBSTR)); \
} \
HRESULT  __stdcall  ENVTIEName::put_Name(const CATBSTR & iNameBSTR) \
{ \
return (ENVTIECALL(CATIAAnalyze,ENVTIETypeLetter,ENVTIELetter)put_Name(iNameBSTR)); \
} \
HRESULT  __stdcall  ENVTIEName::GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj) \
{ \
return (ENVTIECALL(CATIAAnalyze,ENVTIETypeLetter,ENVTIELetter)GetItem(IDName,RealObj)); \
} \


/* Name of the TIE class */
#define class_TIE_CATIAAnalyze(classe)    TIECATIAAnalyze##classe


/* Common methods inside a TIE */
#define common_TIE_CATIAAnalyze(classe) \
 \
 \
/* Static initialization */ \
CATDefineCommonTIEMembers(CATIAAnalyze, classe) \
 \
 \
CATImplementTIEMethods(CATIAAnalyze, classe) \
CATImplementIUnknownMethodsForCATBaseUnknownTIE(CATIAAnalyze, classe, 2) \
CATImplementIDispatchMethodsForCATBaseUnknownTIE(CATIAAnalyze, classe) \
CATImplementCATBaseUnknownMethodsForTIE(CATIAAnalyze, classe) \
 \
HRESULT __stdcall  TIECATIAAnalyze##classe::get_Mass(double & oMass) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,1,&_Trac2,&oMass); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Mass(oMass); \
   ExitAfterCall(this,1,_Trac2,&_ret_arg,&oMass); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAAnalyze##classe::get_Volume(double & oVolume) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,2,&_Trac2,&oVolume); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Volume(oVolume); \
   ExitAfterCall(this,2,_Trac2,&_ret_arg,&oVolume); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAAnalyze##classe::get_WetArea(double & oWetArea) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,3,&_Trac2,&oWetArea); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_WetArea(oWetArea); \
   ExitAfterCall(this,3,_Trac2,&_ret_arg,&oWetArea); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAAnalyze##classe::GetGravityCenter(CATSafeArrayVariant & oGravityCenterCoordinatesArray) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,4,&_Trac2,&oGravityCenterCoordinatesArray); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetGravityCenter(oGravityCenterCoordinatesArray); \
   ExitAfterCall(this,4,_Trac2,&_ret_arg,&oGravityCenterCoordinatesArray); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAAnalyze##classe::GetInertia(CATSafeArrayVariant & oInertiaMatrixArray) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,5,&_Trac2,&oInertiaMatrixArray); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetInertia(oInertiaMatrixArray); \
   ExitAfterCall(this,5,_Trac2,&_ret_arg,&oInertiaMatrixArray); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAAnalyze##classe::get_Application(CATIAApplication *& oApplication) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,6,&_Trac2,&oApplication); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Application(oApplication); \
   ExitAfterCall(this,6,_Trac2,&_ret_arg,&oApplication); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAAnalyze##classe::get_Parent(CATBaseDispatch *& oParent) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,7,&_Trac2,&oParent); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Parent(oParent); \
   ExitAfterCall(this,7,_Trac2,&_ret_arg,&oParent); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAAnalyze##classe::get_Name(CATBSTR & oNameBSTR) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,8,&_Trac2,&oNameBSTR); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Name(oNameBSTR); \
   ExitAfterCall(this,8,_Trac2,&_ret_arg,&oNameBSTR); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAAnalyze##classe::put_Name(const CATBSTR & iNameBSTR) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,9,&_Trac2,&iNameBSTR); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_Name(iNameBSTR); \
   ExitAfterCall(this,9,_Trac2,&_ret_arg,&iNameBSTR); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAAnalyze##classe::GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,10,&_Trac2,&IDName,&RealObj); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetItem(IDName,RealObj); \
   ExitAfterCall(this,10,_Trac2,&_ret_arg,&IDName,&RealObj); \
   return(_ret_arg); \
} \



/* Macro used to link an implementation with an interface */
#define TIE_CATIAAnalyze(classe) \
 \
 \
declare_TIE_CATIAAnalyze(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIAAnalyze##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIAAnalyze,"CATIAAnalyze",CATIAAnalyze::MetaObject(),classe::MetaObject(),TIE); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIAAnalyze(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIECreation(CATIAAnalyze, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIAAnalyze##classe(classe::MetaObject(),CATIAAnalyze::MetaObject(),(void *)CreateTIECATIAAnalyze##classe)



/* Macro used to link an implementation with an interface */
/* This TIE is chained on the implementation object */
#define TIEchain_CATIAAnalyze(classe) \
 \
 \
declare_TIE_CATIAAnalyze(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIAAnalyze##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIAAnalyze,"CATIAAnalyze",CATIAAnalyze::MetaObject(),classe::MetaObject(),TIEchain); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIAAnalyze(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIEchainCreation(CATIAAnalyze, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIAAnalyze##classe(classe::MetaObject(),CATIAAnalyze::MetaObject(),(void *)CreateTIECATIAAnalyze##classe)


/* Macro to switch between BOA and TIE at build time */ 
#ifdef CATSYS_BOA_IS_TIE
#define BOA_CATIAAnalyze(classe) TIE_CATIAAnalyze(classe)
#else
#define BOA_CATIAAnalyze(classe) CATImplementBOA(CATIAAnalyze, classe)
#endif

#endif
