#ifndef __TIE_CATIAPCBComponent
#define __TIE_CATIAPCBComponent

#include <string.h>
#include "CATBaseUnknown.h"
#include "CATMetaClass.h"
#include "CATMacForTie.h"
#include "CATExitJournal.h"
#include "CATIAPCBComponent.h"
#include "JS0DSPA.h"


#ifdef _WINDOWS_SOURCE
#define Exported __declspec(dllexport)
#define Imported __declspec(dllimport)
#else
#define Exported 
#define Imported 
#endif


/* To link an implementation with the interface CATIAPCBComponent */
#define declare_TIE_CATIAPCBComponent(classe) \
 \
 \
class TIECATIAPCBComponent##classe : public CATIAPCBComponent \
{ \
   private: \
      CATDeclareCommonTIEMembers \
   public: \
      CATDeclareTIEMethods(CATIAPCBComponent, classe) \
      CATDeclareIUnknownMethodsForCATBaseUnknownTIE \
      CATDeclareIDispatchMethodsForCATBaseUnknownTIE \
      CATDeclareCATBaseUnknownMethodsForTIE \
      virtual HRESULT __stdcall get_PackageNumber(CATBSTR *& oPackage); \
      virtual HRESULT __stdcall put_PackageNumber(const CATBSTR & iPackage); \
      virtual HRESULT __stdcall get_RESISTANCE(CATBSTR *& oResistance); \
      virtual HRESULT __stdcall put_RESISTANCE(const CATBSTR & iResistance); \
      virtual HRESULT __stdcall get_POWER_MAX(CATBSTR *& oPwmax); \
      virtual HRESULT __stdcall put_POWER_MAX(const CATBSTR & iPwmax); \
      virtual HRESULT __stdcall get_POWEROPR(CATBSTR *& oPoweropr); \
      virtual HRESULT __stdcall put_POWEROPR(const CATBSTR & iPoweropr); \
      virtual HRESULT __stdcall get_CAPACITANCE(CATBSTR *& oCapacitance); \
      virtual HRESULT __stdcall put_CAPACITANCE(const CATBSTR & iCapacitance); \
      virtual HRESULT __stdcall get_TOLERANCE(CATBSTR *& oTolerance); \
      virtual HRESULT __stdcall put_TOLERANCE(const CATBSTR & iTolerance); \
      virtual HRESULT __stdcall get_THETA_JB(CATBSTR *& oThetajb); \
      virtual HRESULT __stdcall put_THETA_JB(const CATBSTR & iThetajb); \
      virtual HRESULT __stdcall get_THETA_JC(CATBSTR *& oThetajc); \
      virtual HRESULT __stdcall put_THETA_JC(const CATBSTR & iThetajc); \
      virtual HRESULT __stdcall get_THERM_COND(CATBSTR *& oThetacond); \
      virtual HRESULT __stdcall put_THERM_COND(const CATBSTR & iThetacond); \
      virtual HRESULT  __stdcall get_Application(CATIAApplication *& oApplication); \
      virtual HRESULT  __stdcall get_Parent(CATBaseDispatch *& oParent); \
      virtual HRESULT  __stdcall get_Name(CATBSTR & oNameBSTR); \
      virtual HRESULT  __stdcall put_Name(const CATBSTR & iNameBSTR); \
      virtual HRESULT  __stdcall GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj); \
};



#define ENVTIEdeclare_CATIAPCBComponent(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
virtual HRESULT __stdcall get_PackageNumber(CATBSTR *& oPackage); \
virtual HRESULT __stdcall put_PackageNumber(const CATBSTR & iPackage); \
virtual HRESULT __stdcall get_RESISTANCE(CATBSTR *& oResistance); \
virtual HRESULT __stdcall put_RESISTANCE(const CATBSTR & iResistance); \
virtual HRESULT __stdcall get_POWER_MAX(CATBSTR *& oPwmax); \
virtual HRESULT __stdcall put_POWER_MAX(const CATBSTR & iPwmax); \
virtual HRESULT __stdcall get_POWEROPR(CATBSTR *& oPoweropr); \
virtual HRESULT __stdcall put_POWEROPR(const CATBSTR & iPoweropr); \
virtual HRESULT __stdcall get_CAPACITANCE(CATBSTR *& oCapacitance); \
virtual HRESULT __stdcall put_CAPACITANCE(const CATBSTR & iCapacitance); \
virtual HRESULT __stdcall get_TOLERANCE(CATBSTR *& oTolerance); \
virtual HRESULT __stdcall put_TOLERANCE(const CATBSTR & iTolerance); \
virtual HRESULT __stdcall get_THETA_JB(CATBSTR *& oThetajb); \
virtual HRESULT __stdcall put_THETA_JB(const CATBSTR & iThetajb); \
virtual HRESULT __stdcall get_THETA_JC(CATBSTR *& oThetajc); \
virtual HRESULT __stdcall put_THETA_JC(const CATBSTR & iThetajc); \
virtual HRESULT __stdcall get_THERM_COND(CATBSTR *& oThetacond); \
virtual HRESULT __stdcall put_THERM_COND(const CATBSTR & iThetacond); \
virtual HRESULT  __stdcall get_Application(CATIAApplication *& oApplication); \
virtual HRESULT  __stdcall get_Parent(CATBaseDispatch *& oParent); \
virtual HRESULT  __stdcall get_Name(CATBSTR & oNameBSTR); \
virtual HRESULT  __stdcall put_Name(const CATBSTR & iNameBSTR); \
virtual HRESULT  __stdcall GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj); \


#define ENVTIEdefine_CATIAPCBComponent(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
HRESULT __stdcall  ENVTIEName::get_PackageNumber(CATBSTR *& oPackage) \
{ \
return (ENVTIECALL(CATIAPCBComponent,ENVTIETypeLetter,ENVTIELetter)get_PackageNumber(oPackage)); \
} \
HRESULT __stdcall  ENVTIEName::put_PackageNumber(const CATBSTR & iPackage) \
{ \
return (ENVTIECALL(CATIAPCBComponent,ENVTIETypeLetter,ENVTIELetter)put_PackageNumber(iPackage)); \
} \
HRESULT __stdcall  ENVTIEName::get_RESISTANCE(CATBSTR *& oResistance) \
{ \
return (ENVTIECALL(CATIAPCBComponent,ENVTIETypeLetter,ENVTIELetter)get_RESISTANCE(oResistance)); \
} \
HRESULT __stdcall  ENVTIEName::put_RESISTANCE(const CATBSTR & iResistance) \
{ \
return (ENVTIECALL(CATIAPCBComponent,ENVTIETypeLetter,ENVTIELetter)put_RESISTANCE(iResistance)); \
} \
HRESULT __stdcall  ENVTIEName::get_POWER_MAX(CATBSTR *& oPwmax) \
{ \
return (ENVTIECALL(CATIAPCBComponent,ENVTIETypeLetter,ENVTIELetter)get_POWER_MAX(oPwmax)); \
} \
HRESULT __stdcall  ENVTIEName::put_POWER_MAX(const CATBSTR & iPwmax) \
{ \
return (ENVTIECALL(CATIAPCBComponent,ENVTIETypeLetter,ENVTIELetter)put_POWER_MAX(iPwmax)); \
} \
HRESULT __stdcall  ENVTIEName::get_POWEROPR(CATBSTR *& oPoweropr) \
{ \
return (ENVTIECALL(CATIAPCBComponent,ENVTIETypeLetter,ENVTIELetter)get_POWEROPR(oPoweropr)); \
} \
HRESULT __stdcall  ENVTIEName::put_POWEROPR(const CATBSTR & iPoweropr) \
{ \
return (ENVTIECALL(CATIAPCBComponent,ENVTIETypeLetter,ENVTIELetter)put_POWEROPR(iPoweropr)); \
} \
HRESULT __stdcall  ENVTIEName::get_CAPACITANCE(CATBSTR *& oCapacitance) \
{ \
return (ENVTIECALL(CATIAPCBComponent,ENVTIETypeLetter,ENVTIELetter)get_CAPACITANCE(oCapacitance)); \
} \
HRESULT __stdcall  ENVTIEName::put_CAPACITANCE(const CATBSTR & iCapacitance) \
{ \
return (ENVTIECALL(CATIAPCBComponent,ENVTIETypeLetter,ENVTIELetter)put_CAPACITANCE(iCapacitance)); \
} \
HRESULT __stdcall  ENVTIEName::get_TOLERANCE(CATBSTR *& oTolerance) \
{ \
return (ENVTIECALL(CATIAPCBComponent,ENVTIETypeLetter,ENVTIELetter)get_TOLERANCE(oTolerance)); \
} \
HRESULT __stdcall  ENVTIEName::put_TOLERANCE(const CATBSTR & iTolerance) \
{ \
return (ENVTIECALL(CATIAPCBComponent,ENVTIETypeLetter,ENVTIELetter)put_TOLERANCE(iTolerance)); \
} \
HRESULT __stdcall  ENVTIEName::get_THETA_JB(CATBSTR *& oThetajb) \
{ \
return (ENVTIECALL(CATIAPCBComponent,ENVTIETypeLetter,ENVTIELetter)get_THETA_JB(oThetajb)); \
} \
HRESULT __stdcall  ENVTIEName::put_THETA_JB(const CATBSTR & iThetajb) \
{ \
return (ENVTIECALL(CATIAPCBComponent,ENVTIETypeLetter,ENVTIELetter)put_THETA_JB(iThetajb)); \
} \
HRESULT __stdcall  ENVTIEName::get_THETA_JC(CATBSTR *& oThetajc) \
{ \
return (ENVTIECALL(CATIAPCBComponent,ENVTIETypeLetter,ENVTIELetter)get_THETA_JC(oThetajc)); \
} \
HRESULT __stdcall  ENVTIEName::put_THETA_JC(const CATBSTR & iThetajc) \
{ \
return (ENVTIECALL(CATIAPCBComponent,ENVTIETypeLetter,ENVTIELetter)put_THETA_JC(iThetajc)); \
} \
HRESULT __stdcall  ENVTIEName::get_THERM_COND(CATBSTR *& oThetacond) \
{ \
return (ENVTIECALL(CATIAPCBComponent,ENVTIETypeLetter,ENVTIELetter)get_THERM_COND(oThetacond)); \
} \
HRESULT __stdcall  ENVTIEName::put_THERM_COND(const CATBSTR & iThetacond) \
{ \
return (ENVTIECALL(CATIAPCBComponent,ENVTIETypeLetter,ENVTIELetter)put_THERM_COND(iThetacond)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Application(CATIAApplication *& oApplication) \
{ \
return (ENVTIECALL(CATIAPCBComponent,ENVTIETypeLetter,ENVTIELetter)get_Application(oApplication)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Parent(CATBaseDispatch *& oParent) \
{ \
return (ENVTIECALL(CATIAPCBComponent,ENVTIETypeLetter,ENVTIELetter)get_Parent(oParent)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Name(CATBSTR & oNameBSTR) \
{ \
return (ENVTIECALL(CATIAPCBComponent,ENVTIETypeLetter,ENVTIELetter)get_Name(oNameBSTR)); \
} \
HRESULT  __stdcall  ENVTIEName::put_Name(const CATBSTR & iNameBSTR) \
{ \
return (ENVTIECALL(CATIAPCBComponent,ENVTIETypeLetter,ENVTIELetter)put_Name(iNameBSTR)); \
} \
HRESULT  __stdcall  ENVTIEName::GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj) \
{ \
return (ENVTIECALL(CATIAPCBComponent,ENVTIETypeLetter,ENVTIELetter)GetItem(IDName,RealObj)); \
} \


/* Name of the TIE class */
#define class_TIE_CATIAPCBComponent(classe)    TIECATIAPCBComponent##classe


/* Common methods inside a TIE */
#define common_TIE_CATIAPCBComponent(classe) \
 \
 \
/* Static initialization */ \
CATDefineCommonTIEMembers(CATIAPCBComponent, classe) \
 \
 \
CATImplementTIEMethods(CATIAPCBComponent, classe) \
CATImplementIUnknownMethodsForCATBaseUnknownTIE(CATIAPCBComponent, classe, 2) \
CATImplementIDispatchMethodsForCATBaseUnknownTIE(CATIAPCBComponent, classe) \
CATImplementCATBaseUnknownMethodsForTIE(CATIAPCBComponent, classe) \
 \
HRESULT __stdcall  TIECATIAPCBComponent##classe::get_PackageNumber(CATBSTR *& oPackage) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,1,&_Trac2,&oPackage); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_PackageNumber(oPackage); \
   ExitAfterCall(this,1,_Trac2,&_ret_arg,&oPackage); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAPCBComponent##classe::put_PackageNumber(const CATBSTR & iPackage) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,2,&_Trac2,&iPackage); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_PackageNumber(iPackage); \
   ExitAfterCall(this,2,_Trac2,&_ret_arg,&iPackage); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAPCBComponent##classe::get_RESISTANCE(CATBSTR *& oResistance) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,3,&_Trac2,&oResistance); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_RESISTANCE(oResistance); \
   ExitAfterCall(this,3,_Trac2,&_ret_arg,&oResistance); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAPCBComponent##classe::put_RESISTANCE(const CATBSTR & iResistance) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,4,&_Trac2,&iResistance); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_RESISTANCE(iResistance); \
   ExitAfterCall(this,4,_Trac2,&_ret_arg,&iResistance); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAPCBComponent##classe::get_POWER_MAX(CATBSTR *& oPwmax) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,5,&_Trac2,&oPwmax); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_POWER_MAX(oPwmax); \
   ExitAfterCall(this,5,_Trac2,&_ret_arg,&oPwmax); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAPCBComponent##classe::put_POWER_MAX(const CATBSTR & iPwmax) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,6,&_Trac2,&iPwmax); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_POWER_MAX(iPwmax); \
   ExitAfterCall(this,6,_Trac2,&_ret_arg,&iPwmax); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAPCBComponent##classe::get_POWEROPR(CATBSTR *& oPoweropr) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,7,&_Trac2,&oPoweropr); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_POWEROPR(oPoweropr); \
   ExitAfterCall(this,7,_Trac2,&_ret_arg,&oPoweropr); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAPCBComponent##classe::put_POWEROPR(const CATBSTR & iPoweropr) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,8,&_Trac2,&iPoweropr); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_POWEROPR(iPoweropr); \
   ExitAfterCall(this,8,_Trac2,&_ret_arg,&iPoweropr); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAPCBComponent##classe::get_CAPACITANCE(CATBSTR *& oCapacitance) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,9,&_Trac2,&oCapacitance); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_CAPACITANCE(oCapacitance); \
   ExitAfterCall(this,9,_Trac2,&_ret_arg,&oCapacitance); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAPCBComponent##classe::put_CAPACITANCE(const CATBSTR & iCapacitance) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,10,&_Trac2,&iCapacitance); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_CAPACITANCE(iCapacitance); \
   ExitAfterCall(this,10,_Trac2,&_ret_arg,&iCapacitance); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAPCBComponent##classe::get_TOLERANCE(CATBSTR *& oTolerance) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,11,&_Trac2,&oTolerance); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_TOLERANCE(oTolerance); \
   ExitAfterCall(this,11,_Trac2,&_ret_arg,&oTolerance); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAPCBComponent##classe::put_TOLERANCE(const CATBSTR & iTolerance) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,12,&_Trac2,&iTolerance); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_TOLERANCE(iTolerance); \
   ExitAfterCall(this,12,_Trac2,&_ret_arg,&iTolerance); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAPCBComponent##classe::get_THETA_JB(CATBSTR *& oThetajb) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,13,&_Trac2,&oThetajb); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_THETA_JB(oThetajb); \
   ExitAfterCall(this,13,_Trac2,&_ret_arg,&oThetajb); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAPCBComponent##classe::put_THETA_JB(const CATBSTR & iThetajb) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,14,&_Trac2,&iThetajb); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_THETA_JB(iThetajb); \
   ExitAfterCall(this,14,_Trac2,&_ret_arg,&iThetajb); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAPCBComponent##classe::get_THETA_JC(CATBSTR *& oThetajc) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,15,&_Trac2,&oThetajc); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_THETA_JC(oThetajc); \
   ExitAfterCall(this,15,_Trac2,&_ret_arg,&oThetajc); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAPCBComponent##classe::put_THETA_JC(const CATBSTR & iThetajc) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,16,&_Trac2,&iThetajc); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_THETA_JC(iThetajc); \
   ExitAfterCall(this,16,_Trac2,&_ret_arg,&iThetajc); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAPCBComponent##classe::get_THERM_COND(CATBSTR *& oThetacond) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,17,&_Trac2,&oThetacond); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_THERM_COND(oThetacond); \
   ExitAfterCall(this,17,_Trac2,&_ret_arg,&oThetacond); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAPCBComponent##classe::put_THERM_COND(const CATBSTR & iThetacond) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,18,&_Trac2,&iThetacond); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_THERM_COND(iThetacond); \
   ExitAfterCall(this,18,_Trac2,&_ret_arg,&iThetacond); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAPCBComponent##classe::get_Application(CATIAApplication *& oApplication) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,19,&_Trac2,&oApplication); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Application(oApplication); \
   ExitAfterCall(this,19,_Trac2,&_ret_arg,&oApplication); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAPCBComponent##classe::get_Parent(CATBaseDispatch *& oParent) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,20,&_Trac2,&oParent); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Parent(oParent); \
   ExitAfterCall(this,20,_Trac2,&_ret_arg,&oParent); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAPCBComponent##classe::get_Name(CATBSTR & oNameBSTR) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,21,&_Trac2,&oNameBSTR); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Name(oNameBSTR); \
   ExitAfterCall(this,21,_Trac2,&_ret_arg,&oNameBSTR); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAPCBComponent##classe::put_Name(const CATBSTR & iNameBSTR) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,22,&_Trac2,&iNameBSTR); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_Name(iNameBSTR); \
   ExitAfterCall(this,22,_Trac2,&_ret_arg,&iNameBSTR); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAPCBComponent##classe::GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,23,&_Trac2,&IDName,&RealObj); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetItem(IDName,RealObj); \
   ExitAfterCall(this,23,_Trac2,&_ret_arg,&IDName,&RealObj); \
   return(_ret_arg); \
} \



/* Macro used to link an implementation with an interface */
#define TIE_CATIAPCBComponent(classe) \
 \
 \
declare_TIE_CATIAPCBComponent(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIAPCBComponent##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIAPCBComponent,"CATIAPCBComponent",CATIAPCBComponent::MetaObject(),classe::MetaObject(),TIE); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIAPCBComponent(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIECreation(CATIAPCBComponent, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIAPCBComponent##classe(classe::MetaObject(),CATIAPCBComponent::MetaObject(),(void *)CreateTIECATIAPCBComponent##classe)



/* Macro used to link an implementation with an interface */
/* This TIE is chained on the implementation object */
#define TIEchain_CATIAPCBComponent(classe) \
 \
 \
declare_TIE_CATIAPCBComponent(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIAPCBComponent##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIAPCBComponent,"CATIAPCBComponent",CATIAPCBComponent::MetaObject(),classe::MetaObject(),TIEchain); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIAPCBComponent(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIEchainCreation(CATIAPCBComponent, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIAPCBComponent##classe(classe::MetaObject(),CATIAPCBComponent::MetaObject(),(void *)CreateTIECATIAPCBComponent##classe)


/* Macro to switch between BOA and TIE at build time */ 
#ifdef CATSYS_BOA_IS_TIE
#define BOA_CATIAPCBComponent(classe) TIE_CATIAPCBComponent(classe)
#else
#define BOA_CATIAPCBComponent(classe) CATImplementBOA(CATIAPCBComponent, classe)
#endif

#endif
