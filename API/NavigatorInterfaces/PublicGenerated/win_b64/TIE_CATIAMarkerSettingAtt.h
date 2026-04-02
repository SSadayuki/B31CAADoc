#ifndef __TIE_CATIAMarkerSettingAtt
#define __TIE_CATIAMarkerSettingAtt

#include <string.h>
#include "CATBaseUnknown.h"
#include "CATMetaClass.h"
#include "CATMacForTie.h"
#include "CATExitJournal.h"
#include "CATIAMarkerSettingAtt.h"
#include "JS0DSPA.h"


#ifdef _WINDOWS_SOURCE
#define Exported __declspec(dllexport)
#define Imported __declspec(dllimport)
#else
#define Exported 
#define Imported 
#endif


/* To link an implementation with the interface CATIAMarkerSettingAtt */
#define declare_TIE_CATIAMarkerSettingAtt(classe) \
 \
 \
class TIECATIAMarkerSettingAtt##classe : public CATIAMarkerSettingAtt \
{ \
   private: \
      CATDeclareCommonTIEMembers \
   public: \
      CATDeclareTIEMethods(CATIAMarkerSettingAtt, classe) \
      CATDeclareIUnknownMethodsForCATBaseUnknownTIE \
      CATDeclareIDispatchMethodsForCATBaseUnknownTIE \
      CATDeclareCATBaseUnknownMethodsForTIE \
      virtual HRESULT __stdcall GetMarkerDefaultsColor(CATLONG & oRed, CATLONG & oGreen, CATLONG & oBlue); \
      virtual HRESULT __stdcall SetMarkerDefaultsColor(CATLONG iRed, CATLONG iGreen, CATLONG iBlue); \
      virtual HRESULT __stdcall GetMarkerDefaultsColorInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified); \
      virtual HRESULT __stdcall SetMarkerDefaultsColorLock(CAT_VARIANT_BOOL iLocked); \
      virtual HRESULT __stdcall get_MarkerDefaultsWeight(CATLONG & oValue); \
      virtual HRESULT __stdcall put_MarkerDefaultsWeight(CATLONG iValue); \
      virtual HRESULT __stdcall GetMarkerDefaultsWeightInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified); \
      virtual HRESULT __stdcall SetMarkerDefaultsWeightLock(CAT_VARIANT_BOOL iLocked); \
      virtual HRESULT __stdcall get_MarkerDefaultsDashed(CATLONG & oValue); \
      virtual HRESULT __stdcall put_MarkerDefaultsDashed(CATLONG iValue); \
      virtual HRESULT __stdcall GetMarkerDefaultsDashedInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified); \
      virtual HRESULT __stdcall SetMarkerDefaultsDashedLock(CAT_VARIANT_BOOL iLocked); \
      virtual HRESULT __stdcall get_Marker2DAutoNaming(CAT_VARIANT_BOOL & oIsActive); \
      virtual HRESULT __stdcall put_Marker2DAutoNaming(CAT_VARIANT_BOOL iIsActive); \
      virtual HRESULT __stdcall GetMarker2DAutoNamingInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified); \
      virtual HRESULT __stdcall SetMarker2DAutoNamingLock(CAT_VARIANT_BOOL iLocked); \
      virtual HRESULT __stdcall get_Marker3DAutoNaming(CAT_VARIANT_BOOL & oIsActive); \
      virtual HRESULT __stdcall put_Marker3DAutoNaming(CAT_VARIANT_BOOL iIsActive); \
      virtual HRESULT __stdcall GetMarker3DAutoNamingInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified); \
      virtual HRESULT __stdcall SetMarker3DAutoNamingLock(CAT_VARIANT_BOOL iLocked); \
      virtual HRESULT __stdcall GetMarkerTextColor2D(CATLONG & oRed, CATLONG & oGreen, CATLONG & oBlue); \
      virtual HRESULT __stdcall SetMarkerTextColor2D(CATLONG iRed, CATLONG iGreen, CATLONG iBlue); \
      virtual HRESULT __stdcall GetMarkerTextColor2DInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified); \
      virtual HRESULT __stdcall SetMarkerTextColor2DLock(CAT_VARIANT_BOOL iLocked); \
      virtual HRESULT __stdcall GetMarkerTextColor3D(CATLONG & oRed, CATLONG & oGreen, CATLONG & oBlue); \
      virtual HRESULT __stdcall SetMarkerTextColor3D(CATLONG iRed, CATLONG iGreen, CATLONG iBlue); \
      virtual HRESULT __stdcall GetMarkerTextColor3DInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified); \
      virtual HRESULT __stdcall SetMarkerTextColor3DLock(CAT_VARIANT_BOOL iLocked); \
      virtual HRESULT __stdcall get_MarkerTextWeight2D(CATLONG & oValue); \
      virtual HRESULT __stdcall put_MarkerTextWeight2D(CATLONG iValue); \
      virtual HRESULT __stdcall GetMarkerTextWeight2DInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified); \
      virtual HRESULT __stdcall SetMarkerTextWeight2DLock(CAT_VARIANT_BOOL iLocked); \
      virtual HRESULT __stdcall put_MarkerTextWeight3D(CATLONG iValue); \
      virtual HRESULT __stdcall get_MarkerTextWeight3D(CATLONG & oValue); \
      virtual HRESULT __stdcall GetMarkerTextWeight3DInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified); \
      virtual HRESULT __stdcall SetMarkerTextWeight3DLock(CAT_VARIANT_BOOL iLocked); \
      virtual HRESULT __stdcall get_MarkerTextDashed2D(CATLONG & oValue); \
      virtual HRESULT __stdcall put_MarkerTextDashed2D(CATLONG iValue); \
      virtual HRESULT __stdcall GetMarkerTextDashed2DInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified); \
      virtual HRESULT __stdcall SetMarkerTextDashed2DLock(CAT_VARIANT_BOOL iLocked); \
      virtual HRESULT __stdcall get_MarkerTextDashed3D(CATLONG & oValue); \
      virtual HRESULT __stdcall put_MarkerTextDashed3D(CATLONG iValue); \
      virtual HRESULT __stdcall GetMarkerTextDashed3DInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified); \
      virtual HRESULT __stdcall SetMarkerTextDashed3DLock(CAT_VARIANT_BOOL iLocked); \
      virtual HRESULT __stdcall get_MarkerTextDefaultsFont2D(CATBSTR & oValue); \
      virtual HRESULT __stdcall put_MarkerTextDefaultsFont2D(const CATBSTR & iValue); \
      virtual HRESULT __stdcall GetMarkerTextDefaultsFont2DInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified); \
      virtual HRESULT __stdcall SetMarkerTextDefaultsFont2DLock(CAT_VARIANT_BOOL iLocked); \
      virtual HRESULT __stdcall put_MarkerTextDefaultsFont3D(const CATBSTR & iValue); \
      virtual HRESULT __stdcall get_MarkerTextDefaultsFont3D(CATBSTR & oValue); \
      virtual HRESULT __stdcall GetMarkerTextDefaultsFont3DInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified); \
      virtual HRESULT __stdcall SetMarkerTextDefaultsFont3DLock(CAT_VARIANT_BOOL iLocked); \
      virtual HRESULT __stdcall get_MarkerTextDefaultsSize2D(CATLONG & oValue); \
      virtual HRESULT __stdcall put_MarkerTextDefaultsSize2D(CATLONG iValue); \
      virtual HRESULT __stdcall GetMarkerTextDefaultsSize2DInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified); \
      virtual HRESULT __stdcall SetMarkerTextDefaultsSize2DLock(CAT_VARIANT_BOOL iLocked); \
      virtual HRESULT __stdcall put_MarkerTextDefaultsSize3D(CATLONG iValue); \
      virtual HRESULT __stdcall get_MarkerTextDefaultsSize3D(CATLONG & oValue); \
      virtual HRESULT __stdcall GetMarkerTextDefaultsSize3DInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified); \
      virtual HRESULT __stdcall SetMarkerTextDefaultsSize3DLock(CAT_VARIANT_BOOL iLocked); \
      virtual HRESULT __stdcall Commit(); \
      virtual HRESULT __stdcall Rollback(); \
      virtual HRESULT __stdcall ResetToAdminValues(); \
      virtual HRESULT __stdcall ResetToAdminValuesByName(const CATSafeArrayVariant & iAttList); \
      virtual HRESULT __stdcall SaveRepository(); \
      virtual HRESULT  __stdcall get_Application(CATIAApplication *& oApplication); \
      virtual HRESULT  __stdcall get_Parent(CATBaseDispatch *& oParent); \
      virtual HRESULT  __stdcall get_Name(CATBSTR & oNameBSTR); \
      virtual HRESULT  __stdcall put_Name(const CATBSTR & iNameBSTR); \
      virtual HRESULT  __stdcall GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj); \
};



#define ENVTIEdeclare_CATIAMarkerSettingAtt(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
virtual HRESULT __stdcall GetMarkerDefaultsColor(CATLONG & oRed, CATLONG & oGreen, CATLONG & oBlue); \
virtual HRESULT __stdcall SetMarkerDefaultsColor(CATLONG iRed, CATLONG iGreen, CATLONG iBlue); \
virtual HRESULT __stdcall GetMarkerDefaultsColorInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified); \
virtual HRESULT __stdcall SetMarkerDefaultsColorLock(CAT_VARIANT_BOOL iLocked); \
virtual HRESULT __stdcall get_MarkerDefaultsWeight(CATLONG & oValue); \
virtual HRESULT __stdcall put_MarkerDefaultsWeight(CATLONG iValue); \
virtual HRESULT __stdcall GetMarkerDefaultsWeightInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified); \
virtual HRESULT __stdcall SetMarkerDefaultsWeightLock(CAT_VARIANT_BOOL iLocked); \
virtual HRESULT __stdcall get_MarkerDefaultsDashed(CATLONG & oValue); \
virtual HRESULT __stdcall put_MarkerDefaultsDashed(CATLONG iValue); \
virtual HRESULT __stdcall GetMarkerDefaultsDashedInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified); \
virtual HRESULT __stdcall SetMarkerDefaultsDashedLock(CAT_VARIANT_BOOL iLocked); \
virtual HRESULT __stdcall get_Marker2DAutoNaming(CAT_VARIANT_BOOL & oIsActive); \
virtual HRESULT __stdcall put_Marker2DAutoNaming(CAT_VARIANT_BOOL iIsActive); \
virtual HRESULT __stdcall GetMarker2DAutoNamingInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified); \
virtual HRESULT __stdcall SetMarker2DAutoNamingLock(CAT_VARIANT_BOOL iLocked); \
virtual HRESULT __stdcall get_Marker3DAutoNaming(CAT_VARIANT_BOOL & oIsActive); \
virtual HRESULT __stdcall put_Marker3DAutoNaming(CAT_VARIANT_BOOL iIsActive); \
virtual HRESULT __stdcall GetMarker3DAutoNamingInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified); \
virtual HRESULT __stdcall SetMarker3DAutoNamingLock(CAT_VARIANT_BOOL iLocked); \
virtual HRESULT __stdcall GetMarkerTextColor2D(CATLONG & oRed, CATLONG & oGreen, CATLONG & oBlue); \
virtual HRESULT __stdcall SetMarkerTextColor2D(CATLONG iRed, CATLONG iGreen, CATLONG iBlue); \
virtual HRESULT __stdcall GetMarkerTextColor2DInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified); \
virtual HRESULT __stdcall SetMarkerTextColor2DLock(CAT_VARIANT_BOOL iLocked); \
virtual HRESULT __stdcall GetMarkerTextColor3D(CATLONG & oRed, CATLONG & oGreen, CATLONG & oBlue); \
virtual HRESULT __stdcall SetMarkerTextColor3D(CATLONG iRed, CATLONG iGreen, CATLONG iBlue); \
virtual HRESULT __stdcall GetMarkerTextColor3DInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified); \
virtual HRESULT __stdcall SetMarkerTextColor3DLock(CAT_VARIANT_BOOL iLocked); \
virtual HRESULT __stdcall get_MarkerTextWeight2D(CATLONG & oValue); \
virtual HRESULT __stdcall put_MarkerTextWeight2D(CATLONG iValue); \
virtual HRESULT __stdcall GetMarkerTextWeight2DInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified); \
virtual HRESULT __stdcall SetMarkerTextWeight2DLock(CAT_VARIANT_BOOL iLocked); \
virtual HRESULT __stdcall put_MarkerTextWeight3D(CATLONG iValue); \
virtual HRESULT __stdcall get_MarkerTextWeight3D(CATLONG & oValue); \
virtual HRESULT __stdcall GetMarkerTextWeight3DInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified); \
virtual HRESULT __stdcall SetMarkerTextWeight3DLock(CAT_VARIANT_BOOL iLocked); \
virtual HRESULT __stdcall get_MarkerTextDashed2D(CATLONG & oValue); \
virtual HRESULT __stdcall put_MarkerTextDashed2D(CATLONG iValue); \
virtual HRESULT __stdcall GetMarkerTextDashed2DInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified); \
virtual HRESULT __stdcall SetMarkerTextDashed2DLock(CAT_VARIANT_BOOL iLocked); \
virtual HRESULT __stdcall get_MarkerTextDashed3D(CATLONG & oValue); \
virtual HRESULT __stdcall put_MarkerTextDashed3D(CATLONG iValue); \
virtual HRESULT __stdcall GetMarkerTextDashed3DInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified); \
virtual HRESULT __stdcall SetMarkerTextDashed3DLock(CAT_VARIANT_BOOL iLocked); \
virtual HRESULT __stdcall get_MarkerTextDefaultsFont2D(CATBSTR & oValue); \
virtual HRESULT __stdcall put_MarkerTextDefaultsFont2D(const CATBSTR & iValue); \
virtual HRESULT __stdcall GetMarkerTextDefaultsFont2DInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified); \
virtual HRESULT __stdcall SetMarkerTextDefaultsFont2DLock(CAT_VARIANT_BOOL iLocked); \
virtual HRESULT __stdcall put_MarkerTextDefaultsFont3D(const CATBSTR & iValue); \
virtual HRESULT __stdcall get_MarkerTextDefaultsFont3D(CATBSTR & oValue); \
virtual HRESULT __stdcall GetMarkerTextDefaultsFont3DInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified); \
virtual HRESULT __stdcall SetMarkerTextDefaultsFont3DLock(CAT_VARIANT_BOOL iLocked); \
virtual HRESULT __stdcall get_MarkerTextDefaultsSize2D(CATLONG & oValue); \
virtual HRESULT __stdcall put_MarkerTextDefaultsSize2D(CATLONG iValue); \
virtual HRESULT __stdcall GetMarkerTextDefaultsSize2DInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified); \
virtual HRESULT __stdcall SetMarkerTextDefaultsSize2DLock(CAT_VARIANT_BOOL iLocked); \
virtual HRESULT __stdcall put_MarkerTextDefaultsSize3D(CATLONG iValue); \
virtual HRESULT __stdcall get_MarkerTextDefaultsSize3D(CATLONG & oValue); \
virtual HRESULT __stdcall GetMarkerTextDefaultsSize3DInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified); \
virtual HRESULT __stdcall SetMarkerTextDefaultsSize3DLock(CAT_VARIANT_BOOL iLocked); \
virtual HRESULT __stdcall Commit(); \
virtual HRESULT __stdcall Rollback(); \
virtual HRESULT __stdcall ResetToAdminValues(); \
virtual HRESULT __stdcall ResetToAdminValuesByName(const CATSafeArrayVariant & iAttList); \
virtual HRESULT __stdcall SaveRepository(); \
virtual HRESULT  __stdcall get_Application(CATIAApplication *& oApplication); \
virtual HRESULT  __stdcall get_Parent(CATBaseDispatch *& oParent); \
virtual HRESULT  __stdcall get_Name(CATBSTR & oNameBSTR); \
virtual HRESULT  __stdcall put_Name(const CATBSTR & iNameBSTR); \
virtual HRESULT  __stdcall GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj); \


#define ENVTIEdefine_CATIAMarkerSettingAtt(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
HRESULT __stdcall  ENVTIEName::GetMarkerDefaultsColor(CATLONG & oRed, CATLONG & oGreen, CATLONG & oBlue) \
{ \
return (ENVTIECALL(CATIAMarkerSettingAtt,ENVTIETypeLetter,ENVTIELetter)GetMarkerDefaultsColor(oRed,oGreen,oBlue)); \
} \
HRESULT __stdcall  ENVTIEName::SetMarkerDefaultsColor(CATLONG iRed, CATLONG iGreen, CATLONG iBlue) \
{ \
return (ENVTIECALL(CATIAMarkerSettingAtt,ENVTIETypeLetter,ENVTIELetter)SetMarkerDefaultsColor(iRed,iGreen,iBlue)); \
} \
HRESULT __stdcall  ENVTIEName::GetMarkerDefaultsColorInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified) \
{ \
return (ENVTIECALL(CATIAMarkerSettingAtt,ENVTIETypeLetter,ENVTIELetter)GetMarkerDefaultsColorInfo(ioAdminLevel,ioLocked,oModified)); \
} \
HRESULT __stdcall  ENVTIEName::SetMarkerDefaultsColorLock(CAT_VARIANT_BOOL iLocked) \
{ \
return (ENVTIECALL(CATIAMarkerSettingAtt,ENVTIETypeLetter,ENVTIELetter)SetMarkerDefaultsColorLock(iLocked)); \
} \
HRESULT __stdcall  ENVTIEName::get_MarkerDefaultsWeight(CATLONG & oValue) \
{ \
return (ENVTIECALL(CATIAMarkerSettingAtt,ENVTIETypeLetter,ENVTIELetter)get_MarkerDefaultsWeight(oValue)); \
} \
HRESULT __stdcall  ENVTIEName::put_MarkerDefaultsWeight(CATLONG iValue) \
{ \
return (ENVTIECALL(CATIAMarkerSettingAtt,ENVTIETypeLetter,ENVTIELetter)put_MarkerDefaultsWeight(iValue)); \
} \
HRESULT __stdcall  ENVTIEName::GetMarkerDefaultsWeightInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified) \
{ \
return (ENVTIECALL(CATIAMarkerSettingAtt,ENVTIETypeLetter,ENVTIELetter)GetMarkerDefaultsWeightInfo(ioAdminLevel,ioLocked,oModified)); \
} \
HRESULT __stdcall  ENVTIEName::SetMarkerDefaultsWeightLock(CAT_VARIANT_BOOL iLocked) \
{ \
return (ENVTIECALL(CATIAMarkerSettingAtt,ENVTIETypeLetter,ENVTIELetter)SetMarkerDefaultsWeightLock(iLocked)); \
} \
HRESULT __stdcall  ENVTIEName::get_MarkerDefaultsDashed(CATLONG & oValue) \
{ \
return (ENVTIECALL(CATIAMarkerSettingAtt,ENVTIETypeLetter,ENVTIELetter)get_MarkerDefaultsDashed(oValue)); \
} \
HRESULT __stdcall  ENVTIEName::put_MarkerDefaultsDashed(CATLONG iValue) \
{ \
return (ENVTIECALL(CATIAMarkerSettingAtt,ENVTIETypeLetter,ENVTIELetter)put_MarkerDefaultsDashed(iValue)); \
} \
HRESULT __stdcall  ENVTIEName::GetMarkerDefaultsDashedInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified) \
{ \
return (ENVTIECALL(CATIAMarkerSettingAtt,ENVTIETypeLetter,ENVTIELetter)GetMarkerDefaultsDashedInfo(ioAdminLevel,ioLocked,oModified)); \
} \
HRESULT __stdcall  ENVTIEName::SetMarkerDefaultsDashedLock(CAT_VARIANT_BOOL iLocked) \
{ \
return (ENVTIECALL(CATIAMarkerSettingAtt,ENVTIETypeLetter,ENVTIELetter)SetMarkerDefaultsDashedLock(iLocked)); \
} \
HRESULT __stdcall  ENVTIEName::get_Marker2DAutoNaming(CAT_VARIANT_BOOL & oIsActive) \
{ \
return (ENVTIECALL(CATIAMarkerSettingAtt,ENVTIETypeLetter,ENVTIELetter)get_Marker2DAutoNaming(oIsActive)); \
} \
HRESULT __stdcall  ENVTIEName::put_Marker2DAutoNaming(CAT_VARIANT_BOOL iIsActive) \
{ \
return (ENVTIECALL(CATIAMarkerSettingAtt,ENVTIETypeLetter,ENVTIELetter)put_Marker2DAutoNaming(iIsActive)); \
} \
HRESULT __stdcall  ENVTIEName::GetMarker2DAutoNamingInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified) \
{ \
return (ENVTIECALL(CATIAMarkerSettingAtt,ENVTIETypeLetter,ENVTIELetter)GetMarker2DAutoNamingInfo(ioAdminLevel,ioLocked,oModified)); \
} \
HRESULT __stdcall  ENVTIEName::SetMarker2DAutoNamingLock(CAT_VARIANT_BOOL iLocked) \
{ \
return (ENVTIECALL(CATIAMarkerSettingAtt,ENVTIETypeLetter,ENVTIELetter)SetMarker2DAutoNamingLock(iLocked)); \
} \
HRESULT __stdcall  ENVTIEName::get_Marker3DAutoNaming(CAT_VARIANT_BOOL & oIsActive) \
{ \
return (ENVTIECALL(CATIAMarkerSettingAtt,ENVTIETypeLetter,ENVTIELetter)get_Marker3DAutoNaming(oIsActive)); \
} \
HRESULT __stdcall  ENVTIEName::put_Marker3DAutoNaming(CAT_VARIANT_BOOL iIsActive) \
{ \
return (ENVTIECALL(CATIAMarkerSettingAtt,ENVTIETypeLetter,ENVTIELetter)put_Marker3DAutoNaming(iIsActive)); \
} \
HRESULT __stdcall  ENVTIEName::GetMarker3DAutoNamingInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified) \
{ \
return (ENVTIECALL(CATIAMarkerSettingAtt,ENVTIETypeLetter,ENVTIELetter)GetMarker3DAutoNamingInfo(ioAdminLevel,ioLocked,oModified)); \
} \
HRESULT __stdcall  ENVTIEName::SetMarker3DAutoNamingLock(CAT_VARIANT_BOOL iLocked) \
{ \
return (ENVTIECALL(CATIAMarkerSettingAtt,ENVTIETypeLetter,ENVTIELetter)SetMarker3DAutoNamingLock(iLocked)); \
} \
HRESULT __stdcall  ENVTIEName::GetMarkerTextColor2D(CATLONG & oRed, CATLONG & oGreen, CATLONG & oBlue) \
{ \
return (ENVTIECALL(CATIAMarkerSettingAtt,ENVTIETypeLetter,ENVTIELetter)GetMarkerTextColor2D(oRed,oGreen,oBlue)); \
} \
HRESULT __stdcall  ENVTIEName::SetMarkerTextColor2D(CATLONG iRed, CATLONG iGreen, CATLONG iBlue) \
{ \
return (ENVTIECALL(CATIAMarkerSettingAtt,ENVTIETypeLetter,ENVTIELetter)SetMarkerTextColor2D(iRed,iGreen,iBlue)); \
} \
HRESULT __stdcall  ENVTIEName::GetMarkerTextColor2DInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified) \
{ \
return (ENVTIECALL(CATIAMarkerSettingAtt,ENVTIETypeLetter,ENVTIELetter)GetMarkerTextColor2DInfo(ioAdminLevel,ioLocked,oModified)); \
} \
HRESULT __stdcall  ENVTIEName::SetMarkerTextColor2DLock(CAT_VARIANT_BOOL iLocked) \
{ \
return (ENVTIECALL(CATIAMarkerSettingAtt,ENVTIETypeLetter,ENVTIELetter)SetMarkerTextColor2DLock(iLocked)); \
} \
HRESULT __stdcall  ENVTIEName::GetMarkerTextColor3D(CATLONG & oRed, CATLONG & oGreen, CATLONG & oBlue) \
{ \
return (ENVTIECALL(CATIAMarkerSettingAtt,ENVTIETypeLetter,ENVTIELetter)GetMarkerTextColor3D(oRed,oGreen,oBlue)); \
} \
HRESULT __stdcall  ENVTIEName::SetMarkerTextColor3D(CATLONG iRed, CATLONG iGreen, CATLONG iBlue) \
{ \
return (ENVTIECALL(CATIAMarkerSettingAtt,ENVTIETypeLetter,ENVTIELetter)SetMarkerTextColor3D(iRed,iGreen,iBlue)); \
} \
HRESULT __stdcall  ENVTIEName::GetMarkerTextColor3DInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified) \
{ \
return (ENVTIECALL(CATIAMarkerSettingAtt,ENVTIETypeLetter,ENVTIELetter)GetMarkerTextColor3DInfo(ioAdminLevel,ioLocked,oModified)); \
} \
HRESULT __stdcall  ENVTIEName::SetMarkerTextColor3DLock(CAT_VARIANT_BOOL iLocked) \
{ \
return (ENVTIECALL(CATIAMarkerSettingAtt,ENVTIETypeLetter,ENVTIELetter)SetMarkerTextColor3DLock(iLocked)); \
} \
HRESULT __stdcall  ENVTIEName::get_MarkerTextWeight2D(CATLONG & oValue) \
{ \
return (ENVTIECALL(CATIAMarkerSettingAtt,ENVTIETypeLetter,ENVTIELetter)get_MarkerTextWeight2D(oValue)); \
} \
HRESULT __stdcall  ENVTIEName::put_MarkerTextWeight2D(CATLONG iValue) \
{ \
return (ENVTIECALL(CATIAMarkerSettingAtt,ENVTIETypeLetter,ENVTIELetter)put_MarkerTextWeight2D(iValue)); \
} \
HRESULT __stdcall  ENVTIEName::GetMarkerTextWeight2DInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified) \
{ \
return (ENVTIECALL(CATIAMarkerSettingAtt,ENVTIETypeLetter,ENVTIELetter)GetMarkerTextWeight2DInfo(ioAdminLevel,ioLocked,oModified)); \
} \
HRESULT __stdcall  ENVTIEName::SetMarkerTextWeight2DLock(CAT_VARIANT_BOOL iLocked) \
{ \
return (ENVTIECALL(CATIAMarkerSettingAtt,ENVTIETypeLetter,ENVTIELetter)SetMarkerTextWeight2DLock(iLocked)); \
} \
HRESULT __stdcall  ENVTIEName::put_MarkerTextWeight3D(CATLONG iValue) \
{ \
return (ENVTIECALL(CATIAMarkerSettingAtt,ENVTIETypeLetter,ENVTIELetter)put_MarkerTextWeight3D(iValue)); \
} \
HRESULT __stdcall  ENVTIEName::get_MarkerTextWeight3D(CATLONG & oValue) \
{ \
return (ENVTIECALL(CATIAMarkerSettingAtt,ENVTIETypeLetter,ENVTIELetter)get_MarkerTextWeight3D(oValue)); \
} \
HRESULT __stdcall  ENVTIEName::GetMarkerTextWeight3DInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified) \
{ \
return (ENVTIECALL(CATIAMarkerSettingAtt,ENVTIETypeLetter,ENVTIELetter)GetMarkerTextWeight3DInfo(ioAdminLevel,ioLocked,oModified)); \
} \
HRESULT __stdcall  ENVTIEName::SetMarkerTextWeight3DLock(CAT_VARIANT_BOOL iLocked) \
{ \
return (ENVTIECALL(CATIAMarkerSettingAtt,ENVTIETypeLetter,ENVTIELetter)SetMarkerTextWeight3DLock(iLocked)); \
} \
HRESULT __stdcall  ENVTIEName::get_MarkerTextDashed2D(CATLONG & oValue) \
{ \
return (ENVTIECALL(CATIAMarkerSettingAtt,ENVTIETypeLetter,ENVTIELetter)get_MarkerTextDashed2D(oValue)); \
} \
HRESULT __stdcall  ENVTIEName::put_MarkerTextDashed2D(CATLONG iValue) \
{ \
return (ENVTIECALL(CATIAMarkerSettingAtt,ENVTIETypeLetter,ENVTIELetter)put_MarkerTextDashed2D(iValue)); \
} \
HRESULT __stdcall  ENVTIEName::GetMarkerTextDashed2DInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified) \
{ \
return (ENVTIECALL(CATIAMarkerSettingAtt,ENVTIETypeLetter,ENVTIELetter)GetMarkerTextDashed2DInfo(ioAdminLevel,ioLocked,oModified)); \
} \
HRESULT __stdcall  ENVTIEName::SetMarkerTextDashed2DLock(CAT_VARIANT_BOOL iLocked) \
{ \
return (ENVTIECALL(CATIAMarkerSettingAtt,ENVTIETypeLetter,ENVTIELetter)SetMarkerTextDashed2DLock(iLocked)); \
} \
HRESULT __stdcall  ENVTIEName::get_MarkerTextDashed3D(CATLONG & oValue) \
{ \
return (ENVTIECALL(CATIAMarkerSettingAtt,ENVTIETypeLetter,ENVTIELetter)get_MarkerTextDashed3D(oValue)); \
} \
HRESULT __stdcall  ENVTIEName::put_MarkerTextDashed3D(CATLONG iValue) \
{ \
return (ENVTIECALL(CATIAMarkerSettingAtt,ENVTIETypeLetter,ENVTIELetter)put_MarkerTextDashed3D(iValue)); \
} \
HRESULT __stdcall  ENVTIEName::GetMarkerTextDashed3DInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified) \
{ \
return (ENVTIECALL(CATIAMarkerSettingAtt,ENVTIETypeLetter,ENVTIELetter)GetMarkerTextDashed3DInfo(ioAdminLevel,ioLocked,oModified)); \
} \
HRESULT __stdcall  ENVTIEName::SetMarkerTextDashed3DLock(CAT_VARIANT_BOOL iLocked) \
{ \
return (ENVTIECALL(CATIAMarkerSettingAtt,ENVTIETypeLetter,ENVTIELetter)SetMarkerTextDashed3DLock(iLocked)); \
} \
HRESULT __stdcall  ENVTIEName::get_MarkerTextDefaultsFont2D(CATBSTR & oValue) \
{ \
return (ENVTIECALL(CATIAMarkerSettingAtt,ENVTIETypeLetter,ENVTIELetter)get_MarkerTextDefaultsFont2D(oValue)); \
} \
HRESULT __stdcall  ENVTIEName::put_MarkerTextDefaultsFont2D(const CATBSTR & iValue) \
{ \
return (ENVTIECALL(CATIAMarkerSettingAtt,ENVTIETypeLetter,ENVTIELetter)put_MarkerTextDefaultsFont2D(iValue)); \
} \
HRESULT __stdcall  ENVTIEName::GetMarkerTextDefaultsFont2DInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified) \
{ \
return (ENVTIECALL(CATIAMarkerSettingAtt,ENVTIETypeLetter,ENVTIELetter)GetMarkerTextDefaultsFont2DInfo(ioAdminLevel,ioLocked,oModified)); \
} \
HRESULT __stdcall  ENVTIEName::SetMarkerTextDefaultsFont2DLock(CAT_VARIANT_BOOL iLocked) \
{ \
return (ENVTIECALL(CATIAMarkerSettingAtt,ENVTIETypeLetter,ENVTIELetter)SetMarkerTextDefaultsFont2DLock(iLocked)); \
} \
HRESULT __stdcall  ENVTIEName::put_MarkerTextDefaultsFont3D(const CATBSTR & iValue) \
{ \
return (ENVTIECALL(CATIAMarkerSettingAtt,ENVTIETypeLetter,ENVTIELetter)put_MarkerTextDefaultsFont3D(iValue)); \
} \
HRESULT __stdcall  ENVTIEName::get_MarkerTextDefaultsFont3D(CATBSTR & oValue) \
{ \
return (ENVTIECALL(CATIAMarkerSettingAtt,ENVTIETypeLetter,ENVTIELetter)get_MarkerTextDefaultsFont3D(oValue)); \
} \
HRESULT __stdcall  ENVTIEName::GetMarkerTextDefaultsFont3DInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified) \
{ \
return (ENVTIECALL(CATIAMarkerSettingAtt,ENVTIETypeLetter,ENVTIELetter)GetMarkerTextDefaultsFont3DInfo(ioAdminLevel,ioLocked,oModified)); \
} \
HRESULT __stdcall  ENVTIEName::SetMarkerTextDefaultsFont3DLock(CAT_VARIANT_BOOL iLocked) \
{ \
return (ENVTIECALL(CATIAMarkerSettingAtt,ENVTIETypeLetter,ENVTIELetter)SetMarkerTextDefaultsFont3DLock(iLocked)); \
} \
HRESULT __stdcall  ENVTIEName::get_MarkerTextDefaultsSize2D(CATLONG & oValue) \
{ \
return (ENVTIECALL(CATIAMarkerSettingAtt,ENVTIETypeLetter,ENVTIELetter)get_MarkerTextDefaultsSize2D(oValue)); \
} \
HRESULT __stdcall  ENVTIEName::put_MarkerTextDefaultsSize2D(CATLONG iValue) \
{ \
return (ENVTIECALL(CATIAMarkerSettingAtt,ENVTIETypeLetter,ENVTIELetter)put_MarkerTextDefaultsSize2D(iValue)); \
} \
HRESULT __stdcall  ENVTIEName::GetMarkerTextDefaultsSize2DInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified) \
{ \
return (ENVTIECALL(CATIAMarkerSettingAtt,ENVTIETypeLetter,ENVTIELetter)GetMarkerTextDefaultsSize2DInfo(ioAdminLevel,ioLocked,oModified)); \
} \
HRESULT __stdcall  ENVTIEName::SetMarkerTextDefaultsSize2DLock(CAT_VARIANT_BOOL iLocked) \
{ \
return (ENVTIECALL(CATIAMarkerSettingAtt,ENVTIETypeLetter,ENVTIELetter)SetMarkerTextDefaultsSize2DLock(iLocked)); \
} \
HRESULT __stdcall  ENVTIEName::put_MarkerTextDefaultsSize3D(CATLONG iValue) \
{ \
return (ENVTIECALL(CATIAMarkerSettingAtt,ENVTIETypeLetter,ENVTIELetter)put_MarkerTextDefaultsSize3D(iValue)); \
} \
HRESULT __stdcall  ENVTIEName::get_MarkerTextDefaultsSize3D(CATLONG & oValue) \
{ \
return (ENVTIECALL(CATIAMarkerSettingAtt,ENVTIETypeLetter,ENVTIELetter)get_MarkerTextDefaultsSize3D(oValue)); \
} \
HRESULT __stdcall  ENVTIEName::GetMarkerTextDefaultsSize3DInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified) \
{ \
return (ENVTIECALL(CATIAMarkerSettingAtt,ENVTIETypeLetter,ENVTIELetter)GetMarkerTextDefaultsSize3DInfo(ioAdminLevel,ioLocked,oModified)); \
} \
HRESULT __stdcall  ENVTIEName::SetMarkerTextDefaultsSize3DLock(CAT_VARIANT_BOOL iLocked) \
{ \
return (ENVTIECALL(CATIAMarkerSettingAtt,ENVTIETypeLetter,ENVTIELetter)SetMarkerTextDefaultsSize3DLock(iLocked)); \
} \
HRESULT __stdcall  ENVTIEName::Commit() \
{ \
return (ENVTIECALL(CATIAMarkerSettingAtt,ENVTIETypeLetter,ENVTIELetter)Commit()); \
} \
HRESULT __stdcall  ENVTIEName::Rollback() \
{ \
return (ENVTIECALL(CATIAMarkerSettingAtt,ENVTIETypeLetter,ENVTIELetter)Rollback()); \
} \
HRESULT __stdcall  ENVTIEName::ResetToAdminValues() \
{ \
return (ENVTIECALL(CATIAMarkerSettingAtt,ENVTIETypeLetter,ENVTIELetter)ResetToAdminValues()); \
} \
HRESULT __stdcall  ENVTIEName::ResetToAdminValuesByName(const CATSafeArrayVariant & iAttList) \
{ \
return (ENVTIECALL(CATIAMarkerSettingAtt,ENVTIETypeLetter,ENVTIELetter)ResetToAdminValuesByName(iAttList)); \
} \
HRESULT __stdcall  ENVTIEName::SaveRepository() \
{ \
return (ENVTIECALL(CATIAMarkerSettingAtt,ENVTIETypeLetter,ENVTIELetter)SaveRepository()); \
} \
HRESULT  __stdcall  ENVTIEName::get_Application(CATIAApplication *& oApplication) \
{ \
return (ENVTIECALL(CATIAMarkerSettingAtt,ENVTIETypeLetter,ENVTIELetter)get_Application(oApplication)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Parent(CATBaseDispatch *& oParent) \
{ \
return (ENVTIECALL(CATIAMarkerSettingAtt,ENVTIETypeLetter,ENVTIELetter)get_Parent(oParent)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Name(CATBSTR & oNameBSTR) \
{ \
return (ENVTIECALL(CATIAMarkerSettingAtt,ENVTIETypeLetter,ENVTIELetter)get_Name(oNameBSTR)); \
} \
HRESULT  __stdcall  ENVTIEName::put_Name(const CATBSTR & iNameBSTR) \
{ \
return (ENVTIECALL(CATIAMarkerSettingAtt,ENVTIETypeLetter,ENVTIELetter)put_Name(iNameBSTR)); \
} \
HRESULT  __stdcall  ENVTIEName::GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj) \
{ \
return (ENVTIECALL(CATIAMarkerSettingAtt,ENVTIETypeLetter,ENVTIELetter)GetItem(IDName,RealObj)); \
} \


/* Name of the TIE class */
#define class_TIE_CATIAMarkerSettingAtt(classe)    TIECATIAMarkerSettingAtt##classe


/* Common methods inside a TIE */
#define common_TIE_CATIAMarkerSettingAtt(classe) \
 \
 \
/* Static initialization */ \
CATDefineCommonTIEMembers(CATIAMarkerSettingAtt, classe) \
 \
 \
CATImplementTIEMethods(CATIAMarkerSettingAtt, classe) \
CATImplementIUnknownMethodsForCATBaseUnknownTIE(CATIAMarkerSettingAtt, classe, 2) \
CATImplementIDispatchMethodsForCATBaseUnknownTIE(CATIAMarkerSettingAtt, classe) \
CATImplementCATBaseUnknownMethodsForTIE(CATIAMarkerSettingAtt, classe) \
 \
HRESULT __stdcall  TIECATIAMarkerSettingAtt##classe::GetMarkerDefaultsColor(CATLONG & oRed, CATLONG & oGreen, CATLONG & oBlue) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,1,&_Trac2,&oRed,&oGreen,&oBlue); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetMarkerDefaultsColor(oRed,oGreen,oBlue); \
   ExitAfterCall(this,1,_Trac2,&_ret_arg,&oRed,&oGreen,&oBlue); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAMarkerSettingAtt##classe::SetMarkerDefaultsColor(CATLONG iRed, CATLONG iGreen, CATLONG iBlue) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,2,&_Trac2,&iRed,&iGreen,&iBlue); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetMarkerDefaultsColor(iRed,iGreen,iBlue); \
   ExitAfterCall(this,2,_Trac2,&_ret_arg,&iRed,&iGreen,&iBlue); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAMarkerSettingAtt##classe::GetMarkerDefaultsColorInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,3,&_Trac2,&ioAdminLevel,&ioLocked,&oModified); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetMarkerDefaultsColorInfo(ioAdminLevel,ioLocked,oModified); \
   ExitAfterCall(this,3,_Trac2,&_ret_arg,&ioAdminLevel,&ioLocked,&oModified); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAMarkerSettingAtt##classe::SetMarkerDefaultsColorLock(CAT_VARIANT_BOOL iLocked) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,4,&_Trac2,&iLocked); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetMarkerDefaultsColorLock(iLocked); \
   ExitAfterCall(this,4,_Trac2,&_ret_arg,&iLocked); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAMarkerSettingAtt##classe::get_MarkerDefaultsWeight(CATLONG & oValue) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,5,&_Trac2,&oValue); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_MarkerDefaultsWeight(oValue); \
   ExitAfterCall(this,5,_Trac2,&_ret_arg,&oValue); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAMarkerSettingAtt##classe::put_MarkerDefaultsWeight(CATLONG iValue) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,6,&_Trac2,&iValue); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_MarkerDefaultsWeight(iValue); \
   ExitAfterCall(this,6,_Trac2,&_ret_arg,&iValue); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAMarkerSettingAtt##classe::GetMarkerDefaultsWeightInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,7,&_Trac2,&ioAdminLevel,&ioLocked,&oModified); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetMarkerDefaultsWeightInfo(ioAdminLevel,ioLocked,oModified); \
   ExitAfterCall(this,7,_Trac2,&_ret_arg,&ioAdminLevel,&ioLocked,&oModified); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAMarkerSettingAtt##classe::SetMarkerDefaultsWeightLock(CAT_VARIANT_BOOL iLocked) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,8,&_Trac2,&iLocked); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetMarkerDefaultsWeightLock(iLocked); \
   ExitAfterCall(this,8,_Trac2,&_ret_arg,&iLocked); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAMarkerSettingAtt##classe::get_MarkerDefaultsDashed(CATLONG & oValue) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,9,&_Trac2,&oValue); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_MarkerDefaultsDashed(oValue); \
   ExitAfterCall(this,9,_Trac2,&_ret_arg,&oValue); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAMarkerSettingAtt##classe::put_MarkerDefaultsDashed(CATLONG iValue) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,10,&_Trac2,&iValue); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_MarkerDefaultsDashed(iValue); \
   ExitAfterCall(this,10,_Trac2,&_ret_arg,&iValue); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAMarkerSettingAtt##classe::GetMarkerDefaultsDashedInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,11,&_Trac2,&ioAdminLevel,&ioLocked,&oModified); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetMarkerDefaultsDashedInfo(ioAdminLevel,ioLocked,oModified); \
   ExitAfterCall(this,11,_Trac2,&_ret_arg,&ioAdminLevel,&ioLocked,&oModified); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAMarkerSettingAtt##classe::SetMarkerDefaultsDashedLock(CAT_VARIANT_BOOL iLocked) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,12,&_Trac2,&iLocked); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetMarkerDefaultsDashedLock(iLocked); \
   ExitAfterCall(this,12,_Trac2,&_ret_arg,&iLocked); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAMarkerSettingAtt##classe::get_Marker2DAutoNaming(CAT_VARIANT_BOOL & oIsActive) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,13,&_Trac2,&oIsActive); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Marker2DAutoNaming(oIsActive); \
   ExitAfterCall(this,13,_Trac2,&_ret_arg,&oIsActive); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAMarkerSettingAtt##classe::put_Marker2DAutoNaming(CAT_VARIANT_BOOL iIsActive) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,14,&_Trac2,&iIsActive); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_Marker2DAutoNaming(iIsActive); \
   ExitAfterCall(this,14,_Trac2,&_ret_arg,&iIsActive); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAMarkerSettingAtt##classe::GetMarker2DAutoNamingInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,15,&_Trac2,&ioAdminLevel,&ioLocked,&oModified); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetMarker2DAutoNamingInfo(ioAdminLevel,ioLocked,oModified); \
   ExitAfterCall(this,15,_Trac2,&_ret_arg,&ioAdminLevel,&ioLocked,&oModified); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAMarkerSettingAtt##classe::SetMarker2DAutoNamingLock(CAT_VARIANT_BOOL iLocked) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,16,&_Trac2,&iLocked); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetMarker2DAutoNamingLock(iLocked); \
   ExitAfterCall(this,16,_Trac2,&_ret_arg,&iLocked); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAMarkerSettingAtt##classe::get_Marker3DAutoNaming(CAT_VARIANT_BOOL & oIsActive) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,17,&_Trac2,&oIsActive); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Marker3DAutoNaming(oIsActive); \
   ExitAfterCall(this,17,_Trac2,&_ret_arg,&oIsActive); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAMarkerSettingAtt##classe::put_Marker3DAutoNaming(CAT_VARIANT_BOOL iIsActive) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,18,&_Trac2,&iIsActive); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_Marker3DAutoNaming(iIsActive); \
   ExitAfterCall(this,18,_Trac2,&_ret_arg,&iIsActive); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAMarkerSettingAtt##classe::GetMarker3DAutoNamingInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,19,&_Trac2,&ioAdminLevel,&ioLocked,&oModified); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetMarker3DAutoNamingInfo(ioAdminLevel,ioLocked,oModified); \
   ExitAfterCall(this,19,_Trac2,&_ret_arg,&ioAdminLevel,&ioLocked,&oModified); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAMarkerSettingAtt##classe::SetMarker3DAutoNamingLock(CAT_VARIANT_BOOL iLocked) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,20,&_Trac2,&iLocked); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetMarker3DAutoNamingLock(iLocked); \
   ExitAfterCall(this,20,_Trac2,&_ret_arg,&iLocked); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAMarkerSettingAtt##classe::GetMarkerTextColor2D(CATLONG & oRed, CATLONG & oGreen, CATLONG & oBlue) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,21,&_Trac2,&oRed,&oGreen,&oBlue); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetMarkerTextColor2D(oRed,oGreen,oBlue); \
   ExitAfterCall(this,21,_Trac2,&_ret_arg,&oRed,&oGreen,&oBlue); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAMarkerSettingAtt##classe::SetMarkerTextColor2D(CATLONG iRed, CATLONG iGreen, CATLONG iBlue) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,22,&_Trac2,&iRed,&iGreen,&iBlue); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetMarkerTextColor2D(iRed,iGreen,iBlue); \
   ExitAfterCall(this,22,_Trac2,&_ret_arg,&iRed,&iGreen,&iBlue); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAMarkerSettingAtt##classe::GetMarkerTextColor2DInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,23,&_Trac2,&ioAdminLevel,&ioLocked,&oModified); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetMarkerTextColor2DInfo(ioAdminLevel,ioLocked,oModified); \
   ExitAfterCall(this,23,_Trac2,&_ret_arg,&ioAdminLevel,&ioLocked,&oModified); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAMarkerSettingAtt##classe::SetMarkerTextColor2DLock(CAT_VARIANT_BOOL iLocked) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,24,&_Trac2,&iLocked); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetMarkerTextColor2DLock(iLocked); \
   ExitAfterCall(this,24,_Trac2,&_ret_arg,&iLocked); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAMarkerSettingAtt##classe::GetMarkerTextColor3D(CATLONG & oRed, CATLONG & oGreen, CATLONG & oBlue) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,25,&_Trac2,&oRed,&oGreen,&oBlue); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetMarkerTextColor3D(oRed,oGreen,oBlue); \
   ExitAfterCall(this,25,_Trac2,&_ret_arg,&oRed,&oGreen,&oBlue); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAMarkerSettingAtt##classe::SetMarkerTextColor3D(CATLONG iRed, CATLONG iGreen, CATLONG iBlue) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,26,&_Trac2,&iRed,&iGreen,&iBlue); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetMarkerTextColor3D(iRed,iGreen,iBlue); \
   ExitAfterCall(this,26,_Trac2,&_ret_arg,&iRed,&iGreen,&iBlue); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAMarkerSettingAtt##classe::GetMarkerTextColor3DInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,27,&_Trac2,&ioAdminLevel,&ioLocked,&oModified); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetMarkerTextColor3DInfo(ioAdminLevel,ioLocked,oModified); \
   ExitAfterCall(this,27,_Trac2,&_ret_arg,&ioAdminLevel,&ioLocked,&oModified); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAMarkerSettingAtt##classe::SetMarkerTextColor3DLock(CAT_VARIANT_BOOL iLocked) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,28,&_Trac2,&iLocked); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetMarkerTextColor3DLock(iLocked); \
   ExitAfterCall(this,28,_Trac2,&_ret_arg,&iLocked); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAMarkerSettingAtt##classe::get_MarkerTextWeight2D(CATLONG & oValue) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,29,&_Trac2,&oValue); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_MarkerTextWeight2D(oValue); \
   ExitAfterCall(this,29,_Trac2,&_ret_arg,&oValue); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAMarkerSettingAtt##classe::put_MarkerTextWeight2D(CATLONG iValue) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,30,&_Trac2,&iValue); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_MarkerTextWeight2D(iValue); \
   ExitAfterCall(this,30,_Trac2,&_ret_arg,&iValue); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAMarkerSettingAtt##classe::GetMarkerTextWeight2DInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,31,&_Trac2,&ioAdminLevel,&ioLocked,&oModified); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetMarkerTextWeight2DInfo(ioAdminLevel,ioLocked,oModified); \
   ExitAfterCall(this,31,_Trac2,&_ret_arg,&ioAdminLevel,&ioLocked,&oModified); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAMarkerSettingAtt##classe::SetMarkerTextWeight2DLock(CAT_VARIANT_BOOL iLocked) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,32,&_Trac2,&iLocked); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetMarkerTextWeight2DLock(iLocked); \
   ExitAfterCall(this,32,_Trac2,&_ret_arg,&iLocked); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAMarkerSettingAtt##classe::put_MarkerTextWeight3D(CATLONG iValue) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,33,&_Trac2,&iValue); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_MarkerTextWeight3D(iValue); \
   ExitAfterCall(this,33,_Trac2,&_ret_arg,&iValue); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAMarkerSettingAtt##classe::get_MarkerTextWeight3D(CATLONG & oValue) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,34,&_Trac2,&oValue); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_MarkerTextWeight3D(oValue); \
   ExitAfterCall(this,34,_Trac2,&_ret_arg,&oValue); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAMarkerSettingAtt##classe::GetMarkerTextWeight3DInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,35,&_Trac2,&ioAdminLevel,&ioLocked,&oModified); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetMarkerTextWeight3DInfo(ioAdminLevel,ioLocked,oModified); \
   ExitAfterCall(this,35,_Trac2,&_ret_arg,&ioAdminLevel,&ioLocked,&oModified); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAMarkerSettingAtt##classe::SetMarkerTextWeight3DLock(CAT_VARIANT_BOOL iLocked) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,36,&_Trac2,&iLocked); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetMarkerTextWeight3DLock(iLocked); \
   ExitAfterCall(this,36,_Trac2,&_ret_arg,&iLocked); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAMarkerSettingAtt##classe::get_MarkerTextDashed2D(CATLONG & oValue) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,37,&_Trac2,&oValue); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_MarkerTextDashed2D(oValue); \
   ExitAfterCall(this,37,_Trac2,&_ret_arg,&oValue); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAMarkerSettingAtt##classe::put_MarkerTextDashed2D(CATLONG iValue) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,38,&_Trac2,&iValue); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_MarkerTextDashed2D(iValue); \
   ExitAfterCall(this,38,_Trac2,&_ret_arg,&iValue); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAMarkerSettingAtt##classe::GetMarkerTextDashed2DInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,39,&_Trac2,&ioAdminLevel,&ioLocked,&oModified); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetMarkerTextDashed2DInfo(ioAdminLevel,ioLocked,oModified); \
   ExitAfterCall(this,39,_Trac2,&_ret_arg,&ioAdminLevel,&ioLocked,&oModified); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAMarkerSettingAtt##classe::SetMarkerTextDashed2DLock(CAT_VARIANT_BOOL iLocked) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,40,&_Trac2,&iLocked); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetMarkerTextDashed2DLock(iLocked); \
   ExitAfterCall(this,40,_Trac2,&_ret_arg,&iLocked); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAMarkerSettingAtt##classe::get_MarkerTextDashed3D(CATLONG & oValue) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,41,&_Trac2,&oValue); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_MarkerTextDashed3D(oValue); \
   ExitAfterCall(this,41,_Trac2,&_ret_arg,&oValue); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAMarkerSettingAtt##classe::put_MarkerTextDashed3D(CATLONG iValue) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,42,&_Trac2,&iValue); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_MarkerTextDashed3D(iValue); \
   ExitAfterCall(this,42,_Trac2,&_ret_arg,&iValue); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAMarkerSettingAtt##classe::GetMarkerTextDashed3DInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,43,&_Trac2,&ioAdminLevel,&ioLocked,&oModified); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetMarkerTextDashed3DInfo(ioAdminLevel,ioLocked,oModified); \
   ExitAfterCall(this,43,_Trac2,&_ret_arg,&ioAdminLevel,&ioLocked,&oModified); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAMarkerSettingAtt##classe::SetMarkerTextDashed3DLock(CAT_VARIANT_BOOL iLocked) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,44,&_Trac2,&iLocked); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetMarkerTextDashed3DLock(iLocked); \
   ExitAfterCall(this,44,_Trac2,&_ret_arg,&iLocked); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAMarkerSettingAtt##classe::get_MarkerTextDefaultsFont2D(CATBSTR & oValue) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,45,&_Trac2,&oValue); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_MarkerTextDefaultsFont2D(oValue); \
   ExitAfterCall(this,45,_Trac2,&_ret_arg,&oValue); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAMarkerSettingAtt##classe::put_MarkerTextDefaultsFont2D(const CATBSTR & iValue) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,46,&_Trac2,&iValue); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_MarkerTextDefaultsFont2D(iValue); \
   ExitAfterCall(this,46,_Trac2,&_ret_arg,&iValue); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAMarkerSettingAtt##classe::GetMarkerTextDefaultsFont2DInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,47,&_Trac2,&ioAdminLevel,&ioLocked,&oModified); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetMarkerTextDefaultsFont2DInfo(ioAdminLevel,ioLocked,oModified); \
   ExitAfterCall(this,47,_Trac2,&_ret_arg,&ioAdminLevel,&ioLocked,&oModified); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAMarkerSettingAtt##classe::SetMarkerTextDefaultsFont2DLock(CAT_VARIANT_BOOL iLocked) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,48,&_Trac2,&iLocked); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetMarkerTextDefaultsFont2DLock(iLocked); \
   ExitAfterCall(this,48,_Trac2,&_ret_arg,&iLocked); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAMarkerSettingAtt##classe::put_MarkerTextDefaultsFont3D(const CATBSTR & iValue) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,49,&_Trac2,&iValue); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_MarkerTextDefaultsFont3D(iValue); \
   ExitAfterCall(this,49,_Trac2,&_ret_arg,&iValue); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAMarkerSettingAtt##classe::get_MarkerTextDefaultsFont3D(CATBSTR & oValue) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,50,&_Trac2,&oValue); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_MarkerTextDefaultsFont3D(oValue); \
   ExitAfterCall(this,50,_Trac2,&_ret_arg,&oValue); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAMarkerSettingAtt##classe::GetMarkerTextDefaultsFont3DInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,51,&_Trac2,&ioAdminLevel,&ioLocked,&oModified); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetMarkerTextDefaultsFont3DInfo(ioAdminLevel,ioLocked,oModified); \
   ExitAfterCall(this,51,_Trac2,&_ret_arg,&ioAdminLevel,&ioLocked,&oModified); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAMarkerSettingAtt##classe::SetMarkerTextDefaultsFont3DLock(CAT_VARIANT_BOOL iLocked) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,52,&_Trac2,&iLocked); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetMarkerTextDefaultsFont3DLock(iLocked); \
   ExitAfterCall(this,52,_Trac2,&_ret_arg,&iLocked); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAMarkerSettingAtt##classe::get_MarkerTextDefaultsSize2D(CATLONG & oValue) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,53,&_Trac2,&oValue); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_MarkerTextDefaultsSize2D(oValue); \
   ExitAfterCall(this,53,_Trac2,&_ret_arg,&oValue); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAMarkerSettingAtt##classe::put_MarkerTextDefaultsSize2D(CATLONG iValue) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,54,&_Trac2,&iValue); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_MarkerTextDefaultsSize2D(iValue); \
   ExitAfterCall(this,54,_Trac2,&_ret_arg,&iValue); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAMarkerSettingAtt##classe::GetMarkerTextDefaultsSize2DInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,55,&_Trac2,&ioAdminLevel,&ioLocked,&oModified); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetMarkerTextDefaultsSize2DInfo(ioAdminLevel,ioLocked,oModified); \
   ExitAfterCall(this,55,_Trac2,&_ret_arg,&ioAdminLevel,&ioLocked,&oModified); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAMarkerSettingAtt##classe::SetMarkerTextDefaultsSize2DLock(CAT_VARIANT_BOOL iLocked) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,56,&_Trac2,&iLocked); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetMarkerTextDefaultsSize2DLock(iLocked); \
   ExitAfterCall(this,56,_Trac2,&_ret_arg,&iLocked); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAMarkerSettingAtt##classe::put_MarkerTextDefaultsSize3D(CATLONG iValue) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,57,&_Trac2,&iValue); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_MarkerTextDefaultsSize3D(iValue); \
   ExitAfterCall(this,57,_Trac2,&_ret_arg,&iValue); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAMarkerSettingAtt##classe::get_MarkerTextDefaultsSize3D(CATLONG & oValue) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,58,&_Trac2,&oValue); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_MarkerTextDefaultsSize3D(oValue); \
   ExitAfterCall(this,58,_Trac2,&_ret_arg,&oValue); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAMarkerSettingAtt##classe::GetMarkerTextDefaultsSize3DInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,59,&_Trac2,&ioAdminLevel,&ioLocked,&oModified); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetMarkerTextDefaultsSize3DInfo(ioAdminLevel,ioLocked,oModified); \
   ExitAfterCall(this,59,_Trac2,&_ret_arg,&ioAdminLevel,&ioLocked,&oModified); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAMarkerSettingAtt##classe::SetMarkerTextDefaultsSize3DLock(CAT_VARIANT_BOOL iLocked) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,60,&_Trac2,&iLocked); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetMarkerTextDefaultsSize3DLock(iLocked); \
   ExitAfterCall(this,60,_Trac2,&_ret_arg,&iLocked); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAMarkerSettingAtt##classe::Commit() \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,61,&_Trac2); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->Commit(); \
   ExitAfterCall(this,61,_Trac2,&_ret_arg); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAMarkerSettingAtt##classe::Rollback() \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,62,&_Trac2); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->Rollback(); \
   ExitAfterCall(this,62,_Trac2,&_ret_arg); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAMarkerSettingAtt##classe::ResetToAdminValues() \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,63,&_Trac2); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->ResetToAdminValues(); \
   ExitAfterCall(this,63,_Trac2,&_ret_arg); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAMarkerSettingAtt##classe::ResetToAdminValuesByName(const CATSafeArrayVariant & iAttList) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,64,&_Trac2,&iAttList); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->ResetToAdminValuesByName(iAttList); \
   ExitAfterCall(this,64,_Trac2,&_ret_arg,&iAttList); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAMarkerSettingAtt##classe::SaveRepository() \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,65,&_Trac2); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SaveRepository(); \
   ExitAfterCall(this,65,_Trac2,&_ret_arg); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAMarkerSettingAtt##classe::get_Application(CATIAApplication *& oApplication) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,66,&_Trac2,&oApplication); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Application(oApplication); \
   ExitAfterCall(this,66,_Trac2,&_ret_arg,&oApplication); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAMarkerSettingAtt##classe::get_Parent(CATBaseDispatch *& oParent) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,67,&_Trac2,&oParent); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Parent(oParent); \
   ExitAfterCall(this,67,_Trac2,&_ret_arg,&oParent); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAMarkerSettingAtt##classe::get_Name(CATBSTR & oNameBSTR) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,68,&_Trac2,&oNameBSTR); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Name(oNameBSTR); \
   ExitAfterCall(this,68,_Trac2,&_ret_arg,&oNameBSTR); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAMarkerSettingAtt##classe::put_Name(const CATBSTR & iNameBSTR) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,69,&_Trac2,&iNameBSTR); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_Name(iNameBSTR); \
   ExitAfterCall(this,69,_Trac2,&_ret_arg,&iNameBSTR); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAMarkerSettingAtt##classe::GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,70,&_Trac2,&IDName,&RealObj); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetItem(IDName,RealObj); \
   ExitAfterCall(this,70,_Trac2,&_ret_arg,&IDName,&RealObj); \
   return(_ret_arg); \
} \



/* Macro used to link an implementation with an interface */
#define TIE_CATIAMarkerSettingAtt(classe) \
 \
 \
declare_TIE_CATIAMarkerSettingAtt(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIAMarkerSettingAtt##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIAMarkerSettingAtt,"CATIAMarkerSettingAtt",CATIAMarkerSettingAtt::MetaObject(),classe::MetaObject(),TIE); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIAMarkerSettingAtt(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIECreation(CATIAMarkerSettingAtt, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIAMarkerSettingAtt##classe(classe::MetaObject(),CATIAMarkerSettingAtt::MetaObject(),(void *)CreateTIECATIAMarkerSettingAtt##classe)



/* Macro used to link an implementation with an interface */
/* This TIE is chained on the implementation object */
#define TIEchain_CATIAMarkerSettingAtt(classe) \
 \
 \
declare_TIE_CATIAMarkerSettingAtt(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIAMarkerSettingAtt##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIAMarkerSettingAtt,"CATIAMarkerSettingAtt",CATIAMarkerSettingAtt::MetaObject(),classe::MetaObject(),TIEchain); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIAMarkerSettingAtt(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIEchainCreation(CATIAMarkerSettingAtt, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIAMarkerSettingAtt##classe(classe::MetaObject(),CATIAMarkerSettingAtt::MetaObject(),(void *)CreateTIECATIAMarkerSettingAtt##classe)


/* Macro to switch between BOA and TIE at build time */ 
#ifdef CATSYS_BOA_IS_TIE
#define BOA_CATIAMarkerSettingAtt(classe) TIE_CATIAMarkerSettingAtt(classe)
#else
#define BOA_CATIAMarkerSettingAtt(classe) CATImplementBOA(CATIAMarkerSettingAtt, classe)
#endif

#endif
