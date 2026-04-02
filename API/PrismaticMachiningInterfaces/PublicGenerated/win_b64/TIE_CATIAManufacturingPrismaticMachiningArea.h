#ifndef __TIE_CATIAManufacturingPrismaticMachiningArea
#define __TIE_CATIAManufacturingPrismaticMachiningArea

#include <string.h>
#include "CATBaseUnknown.h"
#include "CATMetaClass.h"
#include "CATMacForTie.h"
#include "CATExitJournal.h"
#include "CATIAManufacturingPrismaticMachiningArea.h"
#include "JS0DSPA.h"


#ifdef _WINDOWS_SOURCE
#define Exported __declspec(dllexport)
#define Imported __declspec(dllimport)
#else
#define Exported 
#define Imported 
#endif


/* To link an implementation with the interface CATIAManufacturingPrismaticMachiningArea */
#define declare_TIE_CATIAManufacturingPrismaticMachiningArea(classe) \
 \
 \
class TIECATIAManufacturingPrismaticMachiningArea##classe : public CATIAManufacturingPrismaticMachiningArea \
{ \
   private: \
      CATDeclareCommonTIEMembers \
   public: \
      CATDeclareTIEMethods(CATIAManufacturingPrismaticMachiningArea, classe) \
      CATDeclareIUnknownMethodsForCATBaseUnknownTIE \
      CATDeclareIDispatchMethodsForCATBaseUnknownTIE \
      CATDeclareCATBaseUnknownMethodsForTIE \
      virtual HRESULT __stdcall get_Type(CATBSTR & oType); \
      virtual HRESULT __stdcall put_Type(const CATBSTR & iType); \
      virtual HRESULT __stdcall get_BottomType(CATBSTR & oBottomType); \
      virtual HRESULT __stdcall put_BottomType(const CATBSTR & iBottomType); \
      virtual HRESULT __stdcall get_TopType(CATBSTR & oTopType); \
      virtual HRESULT __stdcall put_TopType(const CATBSTR & iTopType); \
      virtual HRESULT __stdcall get_IslandsCount(CATLONG & oNumberOfIsland); \
      virtual HRESULT __stdcall get_ContoursCount(CATLONG & oNumberOfContour); \
      virtual HRESULT __stdcall SetGeometry(const CATBSTR & iGeometryType, CATIABase * iReference, CATIABase * iProduct, short iPosition); \
      virtual HRESULT __stdcall RemoveAllGeometry(const CATBSTR & iGeometryType); \
      virtual HRESULT __stdcall SetGeometries(const CATBSTR & iGeometryType, short iMode, CATLONG iGeometryNumber, CATIABase * iReference, CATIABase * iProduct, short iPosition); \
      virtual HRESULT __stdcall GetContourSide(CATLONG iContourNumber, short & oSide); \
      virtual HRESULT __stdcall SetContourSide(CATLONG iContourNumber, short iSide); \
      virtual HRESULT __stdcall GetGeometriesAquisitionMode(const CATBSTR & iGeometryType, CATLONG iGeometryNumber, short & oMode); \
      virtual HRESULT __stdcall IsContourClosed(CATLONG iContourNumber, short & oIsClosed); \
      virtual HRESULT __stdcall SetOpenContourSide(CATLONG iContourNumber, CATIABase * iPoint); \
      virtual HRESULT __stdcall SetClosedContourSide(CATLONG iContourNumber, const CATBSTR & iSide); \
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



#define ENVTIEdeclare_CATIAManufacturingPrismaticMachiningArea(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
virtual HRESULT __stdcall get_Type(CATBSTR & oType); \
virtual HRESULT __stdcall put_Type(const CATBSTR & iType); \
virtual HRESULT __stdcall get_BottomType(CATBSTR & oBottomType); \
virtual HRESULT __stdcall put_BottomType(const CATBSTR & iBottomType); \
virtual HRESULT __stdcall get_TopType(CATBSTR & oTopType); \
virtual HRESULT __stdcall put_TopType(const CATBSTR & iTopType); \
virtual HRESULT __stdcall get_IslandsCount(CATLONG & oNumberOfIsland); \
virtual HRESULT __stdcall get_ContoursCount(CATLONG & oNumberOfContour); \
virtual HRESULT __stdcall SetGeometry(const CATBSTR & iGeometryType, CATIABase * iReference, CATIABase * iProduct, short iPosition); \
virtual HRESULT __stdcall RemoveAllGeometry(const CATBSTR & iGeometryType); \
virtual HRESULT __stdcall SetGeometries(const CATBSTR & iGeometryType, short iMode, CATLONG iGeometryNumber, CATIABase * iReference, CATIABase * iProduct, short iPosition); \
virtual HRESULT __stdcall GetContourSide(CATLONG iContourNumber, short & oSide); \
virtual HRESULT __stdcall SetContourSide(CATLONG iContourNumber, short iSide); \
virtual HRESULT __stdcall GetGeometriesAquisitionMode(const CATBSTR & iGeometryType, CATLONG iGeometryNumber, short & oMode); \
virtual HRESULT __stdcall IsContourClosed(CATLONG iContourNumber, short & oIsClosed); \
virtual HRESULT __stdcall SetOpenContourSide(CATLONG iContourNumber, CATIABase * iPoint); \
virtual HRESULT __stdcall SetClosedContourSide(CATLONG iContourNumber, const CATBSTR & iSide); \
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


#define ENVTIEdefine_CATIAManufacturingPrismaticMachiningArea(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
HRESULT __stdcall  ENVTIEName::get_Type(CATBSTR & oType) \
{ \
return (ENVTIECALL(CATIAManufacturingPrismaticMachiningArea,ENVTIETypeLetter,ENVTIELetter)get_Type(oType)); \
} \
HRESULT __stdcall  ENVTIEName::put_Type(const CATBSTR & iType) \
{ \
return (ENVTIECALL(CATIAManufacturingPrismaticMachiningArea,ENVTIETypeLetter,ENVTIELetter)put_Type(iType)); \
} \
HRESULT __stdcall  ENVTIEName::get_BottomType(CATBSTR & oBottomType) \
{ \
return (ENVTIECALL(CATIAManufacturingPrismaticMachiningArea,ENVTIETypeLetter,ENVTIELetter)get_BottomType(oBottomType)); \
} \
HRESULT __stdcall  ENVTIEName::put_BottomType(const CATBSTR & iBottomType) \
{ \
return (ENVTIECALL(CATIAManufacturingPrismaticMachiningArea,ENVTIETypeLetter,ENVTIELetter)put_BottomType(iBottomType)); \
} \
HRESULT __stdcall  ENVTIEName::get_TopType(CATBSTR & oTopType) \
{ \
return (ENVTIECALL(CATIAManufacturingPrismaticMachiningArea,ENVTIETypeLetter,ENVTIELetter)get_TopType(oTopType)); \
} \
HRESULT __stdcall  ENVTIEName::put_TopType(const CATBSTR & iTopType) \
{ \
return (ENVTIECALL(CATIAManufacturingPrismaticMachiningArea,ENVTIETypeLetter,ENVTIELetter)put_TopType(iTopType)); \
} \
HRESULT __stdcall  ENVTIEName::get_IslandsCount(CATLONG & oNumberOfIsland) \
{ \
return (ENVTIECALL(CATIAManufacturingPrismaticMachiningArea,ENVTIETypeLetter,ENVTIELetter)get_IslandsCount(oNumberOfIsland)); \
} \
HRESULT __stdcall  ENVTIEName::get_ContoursCount(CATLONG & oNumberOfContour) \
{ \
return (ENVTIECALL(CATIAManufacturingPrismaticMachiningArea,ENVTIETypeLetter,ENVTIELetter)get_ContoursCount(oNumberOfContour)); \
} \
HRESULT __stdcall  ENVTIEName::SetGeometry(const CATBSTR & iGeometryType, CATIABase * iReference, CATIABase * iProduct, short iPosition) \
{ \
return (ENVTIECALL(CATIAManufacturingPrismaticMachiningArea,ENVTIETypeLetter,ENVTIELetter)SetGeometry(iGeometryType,iReference,iProduct,iPosition)); \
} \
HRESULT __stdcall  ENVTIEName::RemoveAllGeometry(const CATBSTR & iGeometryType) \
{ \
return (ENVTIECALL(CATIAManufacturingPrismaticMachiningArea,ENVTIETypeLetter,ENVTIELetter)RemoveAllGeometry(iGeometryType)); \
} \
HRESULT __stdcall  ENVTIEName::SetGeometries(const CATBSTR & iGeometryType, short iMode, CATLONG iGeometryNumber, CATIABase * iReference, CATIABase * iProduct, short iPosition) \
{ \
return (ENVTIECALL(CATIAManufacturingPrismaticMachiningArea,ENVTIETypeLetter,ENVTIELetter)SetGeometries(iGeometryType,iMode,iGeometryNumber,iReference,iProduct,iPosition)); \
} \
HRESULT __stdcall  ENVTIEName::GetContourSide(CATLONG iContourNumber, short & oSide) \
{ \
return (ENVTIECALL(CATIAManufacturingPrismaticMachiningArea,ENVTIETypeLetter,ENVTIELetter)GetContourSide(iContourNumber,oSide)); \
} \
HRESULT __stdcall  ENVTIEName::SetContourSide(CATLONG iContourNumber, short iSide) \
{ \
return (ENVTIECALL(CATIAManufacturingPrismaticMachiningArea,ENVTIETypeLetter,ENVTIELetter)SetContourSide(iContourNumber,iSide)); \
} \
HRESULT __stdcall  ENVTIEName::GetGeometriesAquisitionMode(const CATBSTR & iGeometryType, CATLONG iGeometryNumber, short & oMode) \
{ \
return (ENVTIECALL(CATIAManufacturingPrismaticMachiningArea,ENVTIETypeLetter,ENVTIELetter)GetGeometriesAquisitionMode(iGeometryType,iGeometryNumber,oMode)); \
} \
HRESULT __stdcall  ENVTIEName::IsContourClosed(CATLONG iContourNumber, short & oIsClosed) \
{ \
return (ENVTIECALL(CATIAManufacturingPrismaticMachiningArea,ENVTIETypeLetter,ENVTIELetter)IsContourClosed(iContourNumber,oIsClosed)); \
} \
HRESULT __stdcall  ENVTIEName::SetOpenContourSide(CATLONG iContourNumber, CATIABase * iPoint) \
{ \
return (ENVTIECALL(CATIAManufacturingPrismaticMachiningArea,ENVTIETypeLetter,ENVTIELetter)SetOpenContourSide(iContourNumber,iPoint)); \
} \
HRESULT __stdcall  ENVTIEName::SetClosedContourSide(CATLONG iContourNumber, const CATBSTR & iSide) \
{ \
return (ENVTIECALL(CATIAManufacturingPrismaticMachiningArea,ENVTIETypeLetter,ENVTIELetter)SetClosedContourSide(iContourNumber,iSide)); \
} \
HRESULT __stdcall  ENVTIEName::get_Freezed(CAT_VARIANT_BOOL & oFreezed) \
{ \
return (ENVTIECALL(CATIAManufacturingPrismaticMachiningArea,ENVTIETypeLetter,ENVTIELetter)get_Freezed(oFreezed)); \
} \
HRESULT __stdcall  ENVTIEName::put_Freezed(CAT_VARIANT_BOOL iFreezed) \
{ \
return (ENVTIECALL(CATIAManufacturingPrismaticMachiningArea,ENVTIETypeLetter,ENVTIELetter)put_Freezed(iFreezed)); \
} \
HRESULT __stdcall  ENVTIEName::get_VisibleInMfgView(CAT_VARIANT_BOOL & oVisibleInMfgView) \
{ \
return (ENVTIECALL(CATIAManufacturingPrismaticMachiningArea,ENVTIETypeLetter,ENVTIELetter)get_VisibleInMfgView(oVisibleInMfgView)); \
} \
HRESULT __stdcall  ENVTIEName::put_VisibleInMfgView(CAT_VARIANT_BOOL iVisibleInMfgView) \
{ \
return (ENVTIECALL(CATIAManufacturingPrismaticMachiningArea,ENVTIETypeLetter,ENVTIELetter)put_VisibleInMfgView(iVisibleInMfgView)); \
} \
HRESULT __stdcall  ENVTIEName::MachinableGeometryCount(CATLONG & oMachinableGeometryCount) \
{ \
return (ENVTIECALL(CATIAManufacturingPrismaticMachiningArea,ENVTIETypeLetter,ENVTIELetter)MachinableGeometryCount(oMachinableGeometryCount)); \
} \
HRESULT __stdcall  ENVTIEName::ListMachinableGeometry(CATSafeArrayVariant & oListOfMachinableGeometry) \
{ \
return (ENVTIECALL(CATIAManufacturingPrismaticMachiningArea,ENVTIETypeLetter,ENVTIELetter)ListMachinableGeometry(oListOfMachinableGeometry)); \
} \
HRESULT __stdcall  ENVTIEName::AddMachinableGeometry(CATIAManufacturingMachinableFeat * iMachinableGeometry) \
{ \
return (ENVTIECALL(CATIAManufacturingPrismaticMachiningArea,ENVTIETypeLetter,ENVTIELetter)AddMachinableGeometry(iMachinableGeometry)); \
} \
HRESULT __stdcall  ENVTIEName::RemoveMachinableGeometry(CATIAManufacturingMachinableFeat * iMachinableGeometry) \
{ \
return (ENVTIECALL(CATIAManufacturingPrismaticMachiningArea,ENVTIETypeLetter,ENVTIELetter)RemoveMachinableGeometry(iMachinableGeometry)); \
} \
HRESULT __stdcall  ENVTIEName::ManufacturingActivityConnectedCount(CATLONG & oManufacturingActivityConnectedCount) \
{ \
return (ENVTIECALL(CATIAManufacturingPrismaticMachiningArea,ENVTIETypeLetter,ENVTIELetter)ManufacturingActivityConnectedCount(oManufacturingActivityConnectedCount)); \
} \
HRESULT __stdcall  ENVTIEName::ListManufacturingActivityConnected(CATSafeArrayVariant & oListOfManufacturingActivityConnected) \
{ \
return (ENVTIECALL(CATIAManufacturingPrismaticMachiningArea,ENVTIETypeLetter,ENVTIELetter)ListManufacturingActivityConnected(oListOfManufacturingActivityConnected)); \
} \
HRESULT __stdcall  ENVTIEName::get_FeatType(CATBSTR & oFeatType) \
{ \
return (ENVTIECALL(CATIAManufacturingPrismaticMachiningArea,ENVTIETypeLetter,ENVTIELetter)get_FeatType(oFeatType)); \
} \
HRESULT __stdcall  ENVTIEName::put_FeatType(const CATBSTR & iFeatType) \
{ \
return (ENVTIECALL(CATIAManufacturingPrismaticMachiningArea,ENVTIETypeLetter,ENVTIELetter)put_FeatType(iFeatType)); \
} \
HRESULT __stdcall  ENVTIEName::get_FeatRemark(CATBSTR & oFeatRemark) \
{ \
return (ENVTIECALL(CATIAManufacturingPrismaticMachiningArea,ENVTIETypeLetter,ENVTIELetter)get_FeatRemark(oFeatRemark)); \
} \
HRESULT __stdcall  ENVTIEName::put_FeatRemark(const CATBSTR & iFeatRemark) \
{ \
return (ENVTIECALL(CATIAManufacturingPrismaticMachiningArea,ENVTIETypeLetter,ENVTIELetter)put_FeatRemark(iFeatRemark)); \
} \
HRESULT __stdcall  ENVTIEName::GetAGeometricAttribute(const CATBSTR & iAttribut, CATIAParameter *& oAttributCke) \
{ \
return (ENVTIECALL(CATIAManufacturingPrismaticMachiningArea,ENVTIETypeLetter,ENVTIELetter)GetAGeometricAttribute(iAttribut,oAttributCke)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Application(CATIAApplication *& oApplication) \
{ \
return (ENVTIECALL(CATIAManufacturingPrismaticMachiningArea,ENVTIETypeLetter,ENVTIELetter)get_Application(oApplication)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Parent(CATBaseDispatch *& oParent) \
{ \
return (ENVTIECALL(CATIAManufacturingPrismaticMachiningArea,ENVTIETypeLetter,ENVTIELetter)get_Parent(oParent)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Name(CATBSTR & oNameBSTR) \
{ \
return (ENVTIECALL(CATIAManufacturingPrismaticMachiningArea,ENVTIETypeLetter,ENVTIELetter)get_Name(oNameBSTR)); \
} \
HRESULT  __stdcall  ENVTIEName::put_Name(const CATBSTR & iNameBSTR) \
{ \
return (ENVTIECALL(CATIAManufacturingPrismaticMachiningArea,ENVTIETypeLetter,ENVTIELetter)put_Name(iNameBSTR)); \
} \
HRESULT  __stdcall  ENVTIEName::GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj) \
{ \
return (ENVTIECALL(CATIAManufacturingPrismaticMachiningArea,ENVTIETypeLetter,ENVTIELetter)GetItem(IDName,RealObj)); \
} \


/* Name of the TIE class */
#define class_TIE_CATIAManufacturingPrismaticMachiningArea(classe)    TIECATIAManufacturingPrismaticMachiningArea##classe


/* Common methods inside a TIE */
#define common_TIE_CATIAManufacturingPrismaticMachiningArea(classe) \
 \
 \
/* Static initialization */ \
CATDefineCommonTIEMembers(CATIAManufacturingPrismaticMachiningArea, classe) \
 \
 \
CATImplementTIEMethods(CATIAManufacturingPrismaticMachiningArea, classe) \
CATImplementIUnknownMethodsForCATBaseUnknownTIE(CATIAManufacturingPrismaticMachiningArea, classe, 2) \
CATImplementIDispatchMethodsForCATBaseUnknownTIE(CATIAManufacturingPrismaticMachiningArea, classe) \
CATImplementCATBaseUnknownMethodsForTIE(CATIAManufacturingPrismaticMachiningArea, classe) \
 \
HRESULT __stdcall  TIECATIAManufacturingPrismaticMachiningArea##classe::get_Type(CATBSTR & oType) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,1,&_Trac2,&oType); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Type(oType); \
   ExitAfterCall(this,1,_Trac2,&_ret_arg,&oType); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAManufacturingPrismaticMachiningArea##classe::put_Type(const CATBSTR & iType) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,2,&_Trac2,&iType); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_Type(iType); \
   ExitAfterCall(this,2,_Trac2,&_ret_arg,&iType); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAManufacturingPrismaticMachiningArea##classe::get_BottomType(CATBSTR & oBottomType) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,3,&_Trac2,&oBottomType); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_BottomType(oBottomType); \
   ExitAfterCall(this,3,_Trac2,&_ret_arg,&oBottomType); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAManufacturingPrismaticMachiningArea##classe::put_BottomType(const CATBSTR & iBottomType) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,4,&_Trac2,&iBottomType); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_BottomType(iBottomType); \
   ExitAfterCall(this,4,_Trac2,&_ret_arg,&iBottomType); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAManufacturingPrismaticMachiningArea##classe::get_TopType(CATBSTR & oTopType) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,5,&_Trac2,&oTopType); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_TopType(oTopType); \
   ExitAfterCall(this,5,_Trac2,&_ret_arg,&oTopType); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAManufacturingPrismaticMachiningArea##classe::put_TopType(const CATBSTR & iTopType) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,6,&_Trac2,&iTopType); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_TopType(iTopType); \
   ExitAfterCall(this,6,_Trac2,&_ret_arg,&iTopType); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAManufacturingPrismaticMachiningArea##classe::get_IslandsCount(CATLONG & oNumberOfIsland) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,7,&_Trac2,&oNumberOfIsland); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_IslandsCount(oNumberOfIsland); \
   ExitAfterCall(this,7,_Trac2,&_ret_arg,&oNumberOfIsland); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAManufacturingPrismaticMachiningArea##classe::get_ContoursCount(CATLONG & oNumberOfContour) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,8,&_Trac2,&oNumberOfContour); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_ContoursCount(oNumberOfContour); \
   ExitAfterCall(this,8,_Trac2,&_ret_arg,&oNumberOfContour); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAManufacturingPrismaticMachiningArea##classe::SetGeometry(const CATBSTR & iGeometryType, CATIABase * iReference, CATIABase * iProduct, short iPosition) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,9,&_Trac2,&iGeometryType,&iReference,&iProduct,&iPosition); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetGeometry(iGeometryType,iReference,iProduct,iPosition); \
   ExitAfterCall(this,9,_Trac2,&_ret_arg,&iGeometryType,&iReference,&iProduct,&iPosition); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAManufacturingPrismaticMachiningArea##classe::RemoveAllGeometry(const CATBSTR & iGeometryType) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,10,&_Trac2,&iGeometryType); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->RemoveAllGeometry(iGeometryType); \
   ExitAfterCall(this,10,_Trac2,&_ret_arg,&iGeometryType); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAManufacturingPrismaticMachiningArea##classe::SetGeometries(const CATBSTR & iGeometryType, short iMode, CATLONG iGeometryNumber, CATIABase * iReference, CATIABase * iProduct, short iPosition) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,11,&_Trac2,&iGeometryType,&iMode,&iGeometryNumber,&iReference,&iProduct,&iPosition); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetGeometries(iGeometryType,iMode,iGeometryNumber,iReference,iProduct,iPosition); \
   ExitAfterCall(this,11,_Trac2,&_ret_arg,&iGeometryType,&iMode,&iGeometryNumber,&iReference,&iProduct,&iPosition); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAManufacturingPrismaticMachiningArea##classe::GetContourSide(CATLONG iContourNumber, short & oSide) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,12,&_Trac2,&iContourNumber,&oSide); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetContourSide(iContourNumber,oSide); \
   ExitAfterCall(this,12,_Trac2,&_ret_arg,&iContourNumber,&oSide); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAManufacturingPrismaticMachiningArea##classe::SetContourSide(CATLONG iContourNumber, short iSide) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,13,&_Trac2,&iContourNumber,&iSide); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetContourSide(iContourNumber,iSide); \
   ExitAfterCall(this,13,_Trac2,&_ret_arg,&iContourNumber,&iSide); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAManufacturingPrismaticMachiningArea##classe::GetGeometriesAquisitionMode(const CATBSTR & iGeometryType, CATLONG iGeometryNumber, short & oMode) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,14,&_Trac2,&iGeometryType,&iGeometryNumber,&oMode); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetGeometriesAquisitionMode(iGeometryType,iGeometryNumber,oMode); \
   ExitAfterCall(this,14,_Trac2,&_ret_arg,&iGeometryType,&iGeometryNumber,&oMode); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAManufacturingPrismaticMachiningArea##classe::IsContourClosed(CATLONG iContourNumber, short & oIsClosed) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,15,&_Trac2,&iContourNumber,&oIsClosed); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->IsContourClosed(iContourNumber,oIsClosed); \
   ExitAfterCall(this,15,_Trac2,&_ret_arg,&iContourNumber,&oIsClosed); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAManufacturingPrismaticMachiningArea##classe::SetOpenContourSide(CATLONG iContourNumber, CATIABase * iPoint) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,16,&_Trac2,&iContourNumber,&iPoint); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetOpenContourSide(iContourNumber,iPoint); \
   ExitAfterCall(this,16,_Trac2,&_ret_arg,&iContourNumber,&iPoint); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAManufacturingPrismaticMachiningArea##classe::SetClosedContourSide(CATLONG iContourNumber, const CATBSTR & iSide) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,17,&_Trac2,&iContourNumber,&iSide); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetClosedContourSide(iContourNumber,iSide); \
   ExitAfterCall(this,17,_Trac2,&_ret_arg,&iContourNumber,&iSide); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAManufacturingPrismaticMachiningArea##classe::get_Freezed(CAT_VARIANT_BOOL & oFreezed) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,18,&_Trac2,&oFreezed); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Freezed(oFreezed); \
   ExitAfterCall(this,18,_Trac2,&_ret_arg,&oFreezed); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAManufacturingPrismaticMachiningArea##classe::put_Freezed(CAT_VARIANT_BOOL iFreezed) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,19,&_Trac2,&iFreezed); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_Freezed(iFreezed); \
   ExitAfterCall(this,19,_Trac2,&_ret_arg,&iFreezed); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAManufacturingPrismaticMachiningArea##classe::get_VisibleInMfgView(CAT_VARIANT_BOOL & oVisibleInMfgView) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,20,&_Trac2,&oVisibleInMfgView); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_VisibleInMfgView(oVisibleInMfgView); \
   ExitAfterCall(this,20,_Trac2,&_ret_arg,&oVisibleInMfgView); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAManufacturingPrismaticMachiningArea##classe::put_VisibleInMfgView(CAT_VARIANT_BOOL iVisibleInMfgView) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,21,&_Trac2,&iVisibleInMfgView); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_VisibleInMfgView(iVisibleInMfgView); \
   ExitAfterCall(this,21,_Trac2,&_ret_arg,&iVisibleInMfgView); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAManufacturingPrismaticMachiningArea##classe::MachinableGeometryCount(CATLONG & oMachinableGeometryCount) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,22,&_Trac2,&oMachinableGeometryCount); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->MachinableGeometryCount(oMachinableGeometryCount); \
   ExitAfterCall(this,22,_Trac2,&_ret_arg,&oMachinableGeometryCount); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAManufacturingPrismaticMachiningArea##classe::ListMachinableGeometry(CATSafeArrayVariant & oListOfMachinableGeometry) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,23,&_Trac2,&oListOfMachinableGeometry); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->ListMachinableGeometry(oListOfMachinableGeometry); \
   ExitAfterCall(this,23,_Trac2,&_ret_arg,&oListOfMachinableGeometry); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAManufacturingPrismaticMachiningArea##classe::AddMachinableGeometry(CATIAManufacturingMachinableFeat * iMachinableGeometry) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,24,&_Trac2,&iMachinableGeometry); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->AddMachinableGeometry(iMachinableGeometry); \
   ExitAfterCall(this,24,_Trac2,&_ret_arg,&iMachinableGeometry); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAManufacturingPrismaticMachiningArea##classe::RemoveMachinableGeometry(CATIAManufacturingMachinableFeat * iMachinableGeometry) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,25,&_Trac2,&iMachinableGeometry); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->RemoveMachinableGeometry(iMachinableGeometry); \
   ExitAfterCall(this,25,_Trac2,&_ret_arg,&iMachinableGeometry); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAManufacturingPrismaticMachiningArea##classe::ManufacturingActivityConnectedCount(CATLONG & oManufacturingActivityConnectedCount) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,26,&_Trac2,&oManufacturingActivityConnectedCount); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->ManufacturingActivityConnectedCount(oManufacturingActivityConnectedCount); \
   ExitAfterCall(this,26,_Trac2,&_ret_arg,&oManufacturingActivityConnectedCount); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAManufacturingPrismaticMachiningArea##classe::ListManufacturingActivityConnected(CATSafeArrayVariant & oListOfManufacturingActivityConnected) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,27,&_Trac2,&oListOfManufacturingActivityConnected); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->ListManufacturingActivityConnected(oListOfManufacturingActivityConnected); \
   ExitAfterCall(this,27,_Trac2,&_ret_arg,&oListOfManufacturingActivityConnected); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAManufacturingPrismaticMachiningArea##classe::get_FeatType(CATBSTR & oFeatType) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,28,&_Trac2,&oFeatType); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_FeatType(oFeatType); \
   ExitAfterCall(this,28,_Trac2,&_ret_arg,&oFeatType); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAManufacturingPrismaticMachiningArea##classe::put_FeatType(const CATBSTR & iFeatType) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,29,&_Trac2,&iFeatType); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_FeatType(iFeatType); \
   ExitAfterCall(this,29,_Trac2,&_ret_arg,&iFeatType); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAManufacturingPrismaticMachiningArea##classe::get_FeatRemark(CATBSTR & oFeatRemark) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,30,&_Trac2,&oFeatRemark); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_FeatRemark(oFeatRemark); \
   ExitAfterCall(this,30,_Trac2,&_ret_arg,&oFeatRemark); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAManufacturingPrismaticMachiningArea##classe::put_FeatRemark(const CATBSTR & iFeatRemark) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,31,&_Trac2,&iFeatRemark); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_FeatRemark(iFeatRemark); \
   ExitAfterCall(this,31,_Trac2,&_ret_arg,&iFeatRemark); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAManufacturingPrismaticMachiningArea##classe::GetAGeometricAttribute(const CATBSTR & iAttribut, CATIAParameter *& oAttributCke) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,32,&_Trac2,&iAttribut,&oAttributCke); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetAGeometricAttribute(iAttribut,oAttributCke); \
   ExitAfterCall(this,32,_Trac2,&_ret_arg,&iAttribut,&oAttributCke); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAManufacturingPrismaticMachiningArea##classe::get_Application(CATIAApplication *& oApplication) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,33,&_Trac2,&oApplication); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Application(oApplication); \
   ExitAfterCall(this,33,_Trac2,&_ret_arg,&oApplication); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAManufacturingPrismaticMachiningArea##classe::get_Parent(CATBaseDispatch *& oParent) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,34,&_Trac2,&oParent); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Parent(oParent); \
   ExitAfterCall(this,34,_Trac2,&_ret_arg,&oParent); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAManufacturingPrismaticMachiningArea##classe::get_Name(CATBSTR & oNameBSTR) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,35,&_Trac2,&oNameBSTR); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Name(oNameBSTR); \
   ExitAfterCall(this,35,_Trac2,&_ret_arg,&oNameBSTR); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAManufacturingPrismaticMachiningArea##classe::put_Name(const CATBSTR & iNameBSTR) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,36,&_Trac2,&iNameBSTR); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_Name(iNameBSTR); \
   ExitAfterCall(this,36,_Trac2,&_ret_arg,&iNameBSTR); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAManufacturingPrismaticMachiningArea##classe::GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,37,&_Trac2,&IDName,&RealObj); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetItem(IDName,RealObj); \
   ExitAfterCall(this,37,_Trac2,&_ret_arg,&IDName,&RealObj); \
   return(_ret_arg); \
} \



/* Macro used to link an implementation with an interface */
#define TIE_CATIAManufacturingPrismaticMachiningArea(classe) \
 \
 \
declare_TIE_CATIAManufacturingPrismaticMachiningArea(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIAManufacturingPrismaticMachiningArea##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIAManufacturingPrismaticMachiningArea,"CATIAManufacturingPrismaticMachiningArea",CATIAManufacturingPrismaticMachiningArea::MetaObject(),classe::MetaObject(),TIE); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIAManufacturingPrismaticMachiningArea(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIECreation(CATIAManufacturingPrismaticMachiningArea, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIAManufacturingPrismaticMachiningArea##classe(classe::MetaObject(),CATIAManufacturingPrismaticMachiningArea::MetaObject(),(void *)CreateTIECATIAManufacturingPrismaticMachiningArea##classe)



/* Macro used to link an implementation with an interface */
/* This TIE is chained on the implementation object */
#define TIEchain_CATIAManufacturingPrismaticMachiningArea(classe) \
 \
 \
declare_TIE_CATIAManufacturingPrismaticMachiningArea(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIAManufacturingPrismaticMachiningArea##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIAManufacturingPrismaticMachiningArea,"CATIAManufacturingPrismaticMachiningArea",CATIAManufacturingPrismaticMachiningArea::MetaObject(),classe::MetaObject(),TIEchain); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIAManufacturingPrismaticMachiningArea(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIEchainCreation(CATIAManufacturingPrismaticMachiningArea, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIAManufacturingPrismaticMachiningArea##classe(classe::MetaObject(),CATIAManufacturingPrismaticMachiningArea::MetaObject(),(void *)CreateTIECATIAManufacturingPrismaticMachiningArea##classe)


/* Macro to switch between BOA and TIE at build time */ 
#ifdef CATSYS_BOA_IS_TIE
#define BOA_CATIAManufacturingPrismaticMachiningArea(classe) TIE_CATIAManufacturingPrismaticMachiningArea(classe)
#else
#define BOA_CATIAManufacturingPrismaticMachiningArea(classe) CATImplementBOA(CATIAManufacturingPrismaticMachiningArea, classe)
#endif

#endif
