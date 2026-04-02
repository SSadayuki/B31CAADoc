#ifndef __TIE_CATIAManufacturingSurfaceMachiningArea
#define __TIE_CATIAManufacturingSurfaceMachiningArea

#include <string.h>
#include "CATBaseUnknown.h"
#include "CATMetaClass.h"
#include "CATMacForTie.h"
#include "CATExitJournal.h"
#include "CATIAManufacturingSurfaceMachiningArea.h"
#include "JS0DSPA.h"


#ifdef _WINDOWS_SOURCE
#define Exported __declspec(dllexport)
#define Imported __declspec(dllimport)
#else
#define Exported 
#define Imported 
#endif


/* To link an implementation with the interface CATIAManufacturingSurfaceMachiningArea */
#define declare_TIE_CATIAManufacturingSurfaceMachiningArea(classe) \
 \
 \
class TIECATIAManufacturingSurfaceMachiningArea##classe : public CATIAManufacturingSurfaceMachiningArea \
{ \
   private: \
      CATDeclareCommonTIEMembers \
   public: \
      CATDeclareTIEMethods(CATIAManufacturingSurfaceMachiningArea, classe) \
      CATDeclareIUnknownMethodsForCATBaseUnknownTIE \
      CATDeclareIDispatchMethodsForCATBaseUnknownTIE \
      CATDeclareCATBaseUnknownMethodsForTIE \
      virtual HRESULT __stdcall SetNCGeometry(const CATBSTR & iGeometryType, CATIABase * iNCGeometry); \
      virtual HRESULT __stdcall RemoveNCGeometry(const CATBSTR & iGeometryType); \
      virtual HRESULT __stdcall get_Freezed(CAT_VARIANT_BOOL & oFreezed); \
      virtual HRESULT __stdcall put_Freezed(CAT_VARIANT_BOOL iFreezed); \
      virtual HRESULT __stdcall get_VisibleInMfgView(CAT_VARIANT_BOOL & oVisibleInMfgView); \
      virtual HRESULT __stdcall put_VisibleInMfgView(CAT_VARIANT_BOOL iVisibleInMfgView); \
      virtual HRESULT __stdcall MachinableGeometryCount(CATLONG & oMachinableGeometryCount); \
      virtual HRESULT __stdcall ListMachinableGeometry(CATSafeArrayVariant & oListOfMachinableGeometry); \
      virtual HRESULT __stdcall AddMachinableGeometry(CATIAManufacturingMachinableFeat * iMachinableGeometry); \
      virtual HRESULT __stdcall RemoveMachinableGeometry(CATIAManufacturingMachinableFeat * iMachinableGeometry); \
      virtual HRESULT __stdcall ManufacturingActivityConnectedCount(CATLONG & oManufacturingActivityConnectedCount); \
      virtual HRESULT __stdcall ListManufacturingActivityConnected(CATSafeArrayVariant & oListOfManufacturingActivityConnected); \
      virtual HRESULT __stdcall get_FeatType(CATBSTR & oFeatType); \
      virtual HRESULT __stdcall put_FeatType(const CATBSTR & iFeatType); \
      virtual HRESULT __stdcall get_FeatRemark(CATBSTR & oFeatRemark); \
      virtual HRESULT __stdcall put_FeatRemark(const CATBSTR & iFeatRemark); \
      virtual HRESULT __stdcall GetAGeometricAttribute(const CATBSTR & iAttribut, CATIAParameter *& oAttributCke); \
      virtual HRESULT  __stdcall get_Application(CATIAApplication *& oApplication); \
      virtual HRESULT  __stdcall get_Parent(CATBaseDispatch *& oParent); \
      virtual HRESULT  __stdcall get_Name(CATBSTR & oNameBSTR); \
      virtual HRESULT  __stdcall put_Name(const CATBSTR & iNameBSTR); \
      virtual HRESULT  __stdcall GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj); \
};



#define ENVTIEdeclare_CATIAManufacturingSurfaceMachiningArea(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
virtual HRESULT __stdcall SetNCGeometry(const CATBSTR & iGeometryType, CATIABase * iNCGeometry); \
virtual HRESULT __stdcall RemoveNCGeometry(const CATBSTR & iGeometryType); \
virtual HRESULT __stdcall get_Freezed(CAT_VARIANT_BOOL & oFreezed); \
virtual HRESULT __stdcall put_Freezed(CAT_VARIANT_BOOL iFreezed); \
virtual HRESULT __stdcall get_VisibleInMfgView(CAT_VARIANT_BOOL & oVisibleInMfgView); \
virtual HRESULT __stdcall put_VisibleInMfgView(CAT_VARIANT_BOOL iVisibleInMfgView); \
virtual HRESULT __stdcall MachinableGeometryCount(CATLONG & oMachinableGeometryCount); \
virtual HRESULT __stdcall ListMachinableGeometry(CATSafeArrayVariant & oListOfMachinableGeometry); \
virtual HRESULT __stdcall AddMachinableGeometry(CATIAManufacturingMachinableFeat * iMachinableGeometry); \
virtual HRESULT __stdcall RemoveMachinableGeometry(CATIAManufacturingMachinableFeat * iMachinableGeometry); \
virtual HRESULT __stdcall ManufacturingActivityConnectedCount(CATLONG & oManufacturingActivityConnectedCount); \
virtual HRESULT __stdcall ListManufacturingActivityConnected(CATSafeArrayVariant & oListOfManufacturingActivityConnected); \
virtual HRESULT __stdcall get_FeatType(CATBSTR & oFeatType); \
virtual HRESULT __stdcall put_FeatType(const CATBSTR & iFeatType); \
virtual HRESULT __stdcall get_FeatRemark(CATBSTR & oFeatRemark); \
virtual HRESULT __stdcall put_FeatRemark(const CATBSTR & iFeatRemark); \
virtual HRESULT __stdcall GetAGeometricAttribute(const CATBSTR & iAttribut, CATIAParameter *& oAttributCke); \
virtual HRESULT  __stdcall get_Application(CATIAApplication *& oApplication); \
virtual HRESULT  __stdcall get_Parent(CATBaseDispatch *& oParent); \
virtual HRESULT  __stdcall get_Name(CATBSTR & oNameBSTR); \
virtual HRESULT  __stdcall put_Name(const CATBSTR & iNameBSTR); \
virtual HRESULT  __stdcall GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj); \


#define ENVTIEdefine_CATIAManufacturingSurfaceMachiningArea(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
HRESULT __stdcall  ENVTIEName::SetNCGeometry(const CATBSTR & iGeometryType, CATIABase * iNCGeometry) \
{ \
return (ENVTIECALL(CATIAManufacturingSurfaceMachiningArea,ENVTIETypeLetter,ENVTIELetter)SetNCGeometry(iGeometryType,iNCGeometry)); \
} \
HRESULT __stdcall  ENVTIEName::RemoveNCGeometry(const CATBSTR & iGeometryType) \
{ \
return (ENVTIECALL(CATIAManufacturingSurfaceMachiningArea,ENVTIETypeLetter,ENVTIELetter)RemoveNCGeometry(iGeometryType)); \
} \
HRESULT __stdcall  ENVTIEName::get_Freezed(CAT_VARIANT_BOOL & oFreezed) \
{ \
return (ENVTIECALL(CATIAManufacturingSurfaceMachiningArea,ENVTIETypeLetter,ENVTIELetter)get_Freezed(oFreezed)); \
} \
HRESULT __stdcall  ENVTIEName::put_Freezed(CAT_VARIANT_BOOL iFreezed) \
{ \
return (ENVTIECALL(CATIAManufacturingSurfaceMachiningArea,ENVTIETypeLetter,ENVTIELetter)put_Freezed(iFreezed)); \
} \
HRESULT __stdcall  ENVTIEName::get_VisibleInMfgView(CAT_VARIANT_BOOL & oVisibleInMfgView) \
{ \
return (ENVTIECALL(CATIAManufacturingSurfaceMachiningArea,ENVTIETypeLetter,ENVTIELetter)get_VisibleInMfgView(oVisibleInMfgView)); \
} \
HRESULT __stdcall  ENVTIEName::put_VisibleInMfgView(CAT_VARIANT_BOOL iVisibleInMfgView) \
{ \
return (ENVTIECALL(CATIAManufacturingSurfaceMachiningArea,ENVTIETypeLetter,ENVTIELetter)put_VisibleInMfgView(iVisibleInMfgView)); \
} \
HRESULT __stdcall  ENVTIEName::MachinableGeometryCount(CATLONG & oMachinableGeometryCount) \
{ \
return (ENVTIECALL(CATIAManufacturingSurfaceMachiningArea,ENVTIETypeLetter,ENVTIELetter)MachinableGeometryCount(oMachinableGeometryCount)); \
} \
HRESULT __stdcall  ENVTIEName::ListMachinableGeometry(CATSafeArrayVariant & oListOfMachinableGeometry) \
{ \
return (ENVTIECALL(CATIAManufacturingSurfaceMachiningArea,ENVTIETypeLetter,ENVTIELetter)ListMachinableGeometry(oListOfMachinableGeometry)); \
} \
HRESULT __stdcall  ENVTIEName::AddMachinableGeometry(CATIAManufacturingMachinableFeat * iMachinableGeometry) \
{ \
return (ENVTIECALL(CATIAManufacturingSurfaceMachiningArea,ENVTIETypeLetter,ENVTIELetter)AddMachinableGeometry(iMachinableGeometry)); \
} \
HRESULT __stdcall  ENVTIEName::RemoveMachinableGeometry(CATIAManufacturingMachinableFeat * iMachinableGeometry) \
{ \
return (ENVTIECALL(CATIAManufacturingSurfaceMachiningArea,ENVTIETypeLetter,ENVTIELetter)RemoveMachinableGeometry(iMachinableGeometry)); \
} \
HRESULT __stdcall  ENVTIEName::ManufacturingActivityConnectedCount(CATLONG & oManufacturingActivityConnectedCount) \
{ \
return (ENVTIECALL(CATIAManufacturingSurfaceMachiningArea,ENVTIETypeLetter,ENVTIELetter)ManufacturingActivityConnectedCount(oManufacturingActivityConnectedCount)); \
} \
HRESULT __stdcall  ENVTIEName::ListManufacturingActivityConnected(CATSafeArrayVariant & oListOfManufacturingActivityConnected) \
{ \
return (ENVTIECALL(CATIAManufacturingSurfaceMachiningArea,ENVTIETypeLetter,ENVTIELetter)ListManufacturingActivityConnected(oListOfManufacturingActivityConnected)); \
} \
HRESULT __stdcall  ENVTIEName::get_FeatType(CATBSTR & oFeatType) \
{ \
return (ENVTIECALL(CATIAManufacturingSurfaceMachiningArea,ENVTIETypeLetter,ENVTIELetter)get_FeatType(oFeatType)); \
} \
HRESULT __stdcall  ENVTIEName::put_FeatType(const CATBSTR & iFeatType) \
{ \
return (ENVTIECALL(CATIAManufacturingSurfaceMachiningArea,ENVTIETypeLetter,ENVTIELetter)put_FeatType(iFeatType)); \
} \
HRESULT __stdcall  ENVTIEName::get_FeatRemark(CATBSTR & oFeatRemark) \
{ \
return (ENVTIECALL(CATIAManufacturingSurfaceMachiningArea,ENVTIETypeLetter,ENVTIELetter)get_FeatRemark(oFeatRemark)); \
} \
HRESULT __stdcall  ENVTIEName::put_FeatRemark(const CATBSTR & iFeatRemark) \
{ \
return (ENVTIECALL(CATIAManufacturingSurfaceMachiningArea,ENVTIETypeLetter,ENVTIELetter)put_FeatRemark(iFeatRemark)); \
} \
HRESULT __stdcall  ENVTIEName::GetAGeometricAttribute(const CATBSTR & iAttribut, CATIAParameter *& oAttributCke) \
{ \
return (ENVTIECALL(CATIAManufacturingSurfaceMachiningArea,ENVTIETypeLetter,ENVTIELetter)GetAGeometricAttribute(iAttribut,oAttributCke)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Application(CATIAApplication *& oApplication) \
{ \
return (ENVTIECALL(CATIAManufacturingSurfaceMachiningArea,ENVTIETypeLetter,ENVTIELetter)get_Application(oApplication)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Parent(CATBaseDispatch *& oParent) \
{ \
return (ENVTIECALL(CATIAManufacturingSurfaceMachiningArea,ENVTIETypeLetter,ENVTIELetter)get_Parent(oParent)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Name(CATBSTR & oNameBSTR) \
{ \
return (ENVTIECALL(CATIAManufacturingSurfaceMachiningArea,ENVTIETypeLetter,ENVTIELetter)get_Name(oNameBSTR)); \
} \
HRESULT  __stdcall  ENVTIEName::put_Name(const CATBSTR & iNameBSTR) \
{ \
return (ENVTIECALL(CATIAManufacturingSurfaceMachiningArea,ENVTIETypeLetter,ENVTIELetter)put_Name(iNameBSTR)); \
} \
HRESULT  __stdcall  ENVTIEName::GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj) \
{ \
return (ENVTIECALL(CATIAManufacturingSurfaceMachiningArea,ENVTIETypeLetter,ENVTIELetter)GetItem(IDName,RealObj)); \
} \


/* Name of the TIE class */
#define class_TIE_CATIAManufacturingSurfaceMachiningArea(classe)    TIECATIAManufacturingSurfaceMachiningArea##classe


/* Common methods inside a TIE */
#define common_TIE_CATIAManufacturingSurfaceMachiningArea(classe) \
 \
 \
/* Static initialization */ \
CATDefineCommonTIEMembers(CATIAManufacturingSurfaceMachiningArea, classe) \
 \
 \
CATImplementTIEMethods(CATIAManufacturingSurfaceMachiningArea, classe) \
CATImplementIUnknownMethodsForCATBaseUnknownTIE(CATIAManufacturingSurfaceMachiningArea, classe, 2) \
CATImplementIDispatchMethodsForCATBaseUnknownTIE(CATIAManufacturingSurfaceMachiningArea, classe) \
CATImplementCATBaseUnknownMethodsForTIE(CATIAManufacturingSurfaceMachiningArea, classe) \
 \
HRESULT __stdcall  TIECATIAManufacturingSurfaceMachiningArea##classe::SetNCGeometry(const CATBSTR & iGeometryType, CATIABase * iNCGeometry) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,1,&_Trac2,&iGeometryType,&iNCGeometry); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetNCGeometry(iGeometryType,iNCGeometry); \
   ExitAfterCall(this,1,_Trac2,&_ret_arg,&iGeometryType,&iNCGeometry); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAManufacturingSurfaceMachiningArea##classe::RemoveNCGeometry(const CATBSTR & iGeometryType) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,2,&_Trac2,&iGeometryType); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->RemoveNCGeometry(iGeometryType); \
   ExitAfterCall(this,2,_Trac2,&_ret_arg,&iGeometryType); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAManufacturingSurfaceMachiningArea##classe::get_Freezed(CAT_VARIANT_BOOL & oFreezed) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,3,&_Trac2,&oFreezed); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Freezed(oFreezed); \
   ExitAfterCall(this,3,_Trac2,&_ret_arg,&oFreezed); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAManufacturingSurfaceMachiningArea##classe::put_Freezed(CAT_VARIANT_BOOL iFreezed) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,4,&_Trac2,&iFreezed); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_Freezed(iFreezed); \
   ExitAfterCall(this,4,_Trac2,&_ret_arg,&iFreezed); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAManufacturingSurfaceMachiningArea##classe::get_VisibleInMfgView(CAT_VARIANT_BOOL & oVisibleInMfgView) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,5,&_Trac2,&oVisibleInMfgView); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_VisibleInMfgView(oVisibleInMfgView); \
   ExitAfterCall(this,5,_Trac2,&_ret_arg,&oVisibleInMfgView); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAManufacturingSurfaceMachiningArea##classe::put_VisibleInMfgView(CAT_VARIANT_BOOL iVisibleInMfgView) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,6,&_Trac2,&iVisibleInMfgView); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_VisibleInMfgView(iVisibleInMfgView); \
   ExitAfterCall(this,6,_Trac2,&_ret_arg,&iVisibleInMfgView); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAManufacturingSurfaceMachiningArea##classe::MachinableGeometryCount(CATLONG & oMachinableGeometryCount) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,7,&_Trac2,&oMachinableGeometryCount); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->MachinableGeometryCount(oMachinableGeometryCount); \
   ExitAfterCall(this,7,_Trac2,&_ret_arg,&oMachinableGeometryCount); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAManufacturingSurfaceMachiningArea##classe::ListMachinableGeometry(CATSafeArrayVariant & oListOfMachinableGeometry) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,8,&_Trac2,&oListOfMachinableGeometry); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->ListMachinableGeometry(oListOfMachinableGeometry); \
   ExitAfterCall(this,8,_Trac2,&_ret_arg,&oListOfMachinableGeometry); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAManufacturingSurfaceMachiningArea##classe::AddMachinableGeometry(CATIAManufacturingMachinableFeat * iMachinableGeometry) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,9,&_Trac2,&iMachinableGeometry); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->AddMachinableGeometry(iMachinableGeometry); \
   ExitAfterCall(this,9,_Trac2,&_ret_arg,&iMachinableGeometry); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAManufacturingSurfaceMachiningArea##classe::RemoveMachinableGeometry(CATIAManufacturingMachinableFeat * iMachinableGeometry) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,10,&_Trac2,&iMachinableGeometry); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->RemoveMachinableGeometry(iMachinableGeometry); \
   ExitAfterCall(this,10,_Trac2,&_ret_arg,&iMachinableGeometry); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAManufacturingSurfaceMachiningArea##classe::ManufacturingActivityConnectedCount(CATLONG & oManufacturingActivityConnectedCount) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,11,&_Trac2,&oManufacturingActivityConnectedCount); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->ManufacturingActivityConnectedCount(oManufacturingActivityConnectedCount); \
   ExitAfterCall(this,11,_Trac2,&_ret_arg,&oManufacturingActivityConnectedCount); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAManufacturingSurfaceMachiningArea##classe::ListManufacturingActivityConnected(CATSafeArrayVariant & oListOfManufacturingActivityConnected) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,12,&_Trac2,&oListOfManufacturingActivityConnected); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->ListManufacturingActivityConnected(oListOfManufacturingActivityConnected); \
   ExitAfterCall(this,12,_Trac2,&_ret_arg,&oListOfManufacturingActivityConnected); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAManufacturingSurfaceMachiningArea##classe::get_FeatType(CATBSTR & oFeatType) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,13,&_Trac2,&oFeatType); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_FeatType(oFeatType); \
   ExitAfterCall(this,13,_Trac2,&_ret_arg,&oFeatType); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAManufacturingSurfaceMachiningArea##classe::put_FeatType(const CATBSTR & iFeatType) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,14,&_Trac2,&iFeatType); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_FeatType(iFeatType); \
   ExitAfterCall(this,14,_Trac2,&_ret_arg,&iFeatType); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAManufacturingSurfaceMachiningArea##classe::get_FeatRemark(CATBSTR & oFeatRemark) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,15,&_Trac2,&oFeatRemark); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_FeatRemark(oFeatRemark); \
   ExitAfterCall(this,15,_Trac2,&_ret_arg,&oFeatRemark); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAManufacturingSurfaceMachiningArea##classe::put_FeatRemark(const CATBSTR & iFeatRemark) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,16,&_Trac2,&iFeatRemark); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_FeatRemark(iFeatRemark); \
   ExitAfterCall(this,16,_Trac2,&_ret_arg,&iFeatRemark); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAManufacturingSurfaceMachiningArea##classe::GetAGeometricAttribute(const CATBSTR & iAttribut, CATIAParameter *& oAttributCke) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,17,&_Trac2,&iAttribut,&oAttributCke); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetAGeometricAttribute(iAttribut,oAttributCke); \
   ExitAfterCall(this,17,_Trac2,&_ret_arg,&iAttribut,&oAttributCke); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAManufacturingSurfaceMachiningArea##classe::get_Application(CATIAApplication *& oApplication) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,18,&_Trac2,&oApplication); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Application(oApplication); \
   ExitAfterCall(this,18,_Trac2,&_ret_arg,&oApplication); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAManufacturingSurfaceMachiningArea##classe::get_Parent(CATBaseDispatch *& oParent) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,19,&_Trac2,&oParent); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Parent(oParent); \
   ExitAfterCall(this,19,_Trac2,&_ret_arg,&oParent); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAManufacturingSurfaceMachiningArea##classe::get_Name(CATBSTR & oNameBSTR) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,20,&_Trac2,&oNameBSTR); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Name(oNameBSTR); \
   ExitAfterCall(this,20,_Trac2,&_ret_arg,&oNameBSTR); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAManufacturingSurfaceMachiningArea##classe::put_Name(const CATBSTR & iNameBSTR) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,21,&_Trac2,&iNameBSTR); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_Name(iNameBSTR); \
   ExitAfterCall(this,21,_Trac2,&_ret_arg,&iNameBSTR); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAManufacturingSurfaceMachiningArea##classe::GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,22,&_Trac2,&IDName,&RealObj); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetItem(IDName,RealObj); \
   ExitAfterCall(this,22,_Trac2,&_ret_arg,&IDName,&RealObj); \
   return(_ret_arg); \
} \



/* Macro used to link an implementation with an interface */
#define TIE_CATIAManufacturingSurfaceMachiningArea(classe) \
 \
 \
declare_TIE_CATIAManufacturingSurfaceMachiningArea(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIAManufacturingSurfaceMachiningArea##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIAManufacturingSurfaceMachiningArea,"CATIAManufacturingSurfaceMachiningArea",CATIAManufacturingSurfaceMachiningArea::MetaObject(),classe::MetaObject(),TIE); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIAManufacturingSurfaceMachiningArea(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIECreation(CATIAManufacturingSurfaceMachiningArea, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIAManufacturingSurfaceMachiningArea##classe(classe::MetaObject(),CATIAManufacturingSurfaceMachiningArea::MetaObject(),(void *)CreateTIECATIAManufacturingSurfaceMachiningArea##classe)



/* Macro used to link an implementation with an interface */
/* This TIE is chained on the implementation object */
#define TIEchain_CATIAManufacturingSurfaceMachiningArea(classe) \
 \
 \
declare_TIE_CATIAManufacturingSurfaceMachiningArea(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIAManufacturingSurfaceMachiningArea##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIAManufacturingSurfaceMachiningArea,"CATIAManufacturingSurfaceMachiningArea",CATIAManufacturingSurfaceMachiningArea::MetaObject(),classe::MetaObject(),TIEchain); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIAManufacturingSurfaceMachiningArea(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIEchainCreation(CATIAManufacturingSurfaceMachiningArea, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIAManufacturingSurfaceMachiningArea##classe(classe::MetaObject(),CATIAManufacturingSurfaceMachiningArea::MetaObject(),(void *)CreateTIECATIAManufacturingSurfaceMachiningArea##classe)


/* Macro to switch between BOA and TIE at build time */ 
#ifdef CATSYS_BOA_IS_TIE
#define BOA_CATIAManufacturingSurfaceMachiningArea(classe) TIE_CATIAManufacturingSurfaceMachiningArea(classe)
#else
#define BOA_CATIAManufacturingSurfaceMachiningArea(classe) CATImplementBOA(CATIAManufacturingSurfaceMachiningArea, classe)
#endif

#endif
