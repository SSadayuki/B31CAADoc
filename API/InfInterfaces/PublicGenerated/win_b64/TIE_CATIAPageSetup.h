#ifndef __TIE_CATIAPageSetup
#define __TIE_CATIAPageSetup

#include <string.h>
#include "CATBaseUnknown.h"
#include "CATMetaClass.h"
#include "CATMacForTie.h"
#include "CATExitJournal.h"
#include "CATIAPageSetup.h"
#include "JS0DSPA.h"


#ifdef _WINDOWS_SOURCE
#define Exported __declspec(dllexport)
#define Imported __declspec(dllimport)
#else
#define Exported 
#define Imported 
#endif


/* To link an implementation with the interface CATIAPageSetup */
#define declare_TIE_CATIAPageSetup(classe) \
 \
 \
class TIECATIAPageSetup##classe : public CATIAPageSetup \
{ \
   private: \
      CATDeclareCommonTIEMembers \
   public: \
      CATDeclareTIEMethods(CATIAPageSetup, classe) \
      CATDeclareIUnknownMethodsForCATBaseUnknownTIE \
      CATDeclareIDispatchMethodsForCATBaseUnknownTIE \
      CATDeclareCATBaseUnknownMethodsForTIE \
      virtual HRESULT __stdcall get_PaperSize(CatPaperSize & oPaperSize); \
      virtual HRESULT __stdcall put_PaperSize(CatPaperSize iPaperSize); \
      virtual HRESULT __stdcall get_PaperWidth(float & oPaperWidth); \
      virtual HRESULT __stdcall put_PaperWidth(float iPaperWidth); \
      virtual HRESULT __stdcall get_PaperHeight(float & oPaperHeight); \
      virtual HRESULT __stdcall put_PaperHeight(float iPaperHeight); \
      virtual HRESULT __stdcall get_Orientation(CatPaperOrientation & orientation); \
      virtual HRESULT __stdcall put_Orientation(CatPaperOrientation orientation); \
      virtual HRESULT __stdcall get_BottomMargin(float & oBottomMargin); \
      virtual HRESULT __stdcall put_BottomMargin(float iBottomMargin); \
      virtual HRESULT __stdcall get_TopMargin(float & oTopMargin); \
      virtual HRESULT __stdcall put_TopMargin(float iTopMargin); \
      virtual HRESULT __stdcall get_LeftMargin(float & oLeftMargin); \
      virtual HRESULT __stdcall put_LeftMargin(float iLeftMargin); \
      virtual HRESULT __stdcall get_RightMargin(float & oRightMargin); \
      virtual HRESULT __stdcall put_RightMargin(float iRightMargin); \
      virtual HRESULT __stdcall get_MaximumSize(CAT_VARIANT_BOOL & oMaxSize); \
      virtual HRESULT __stdcall put_MaximumSize(CAT_VARIANT_BOOL iMaxSize); \
      virtual HRESULT __stdcall get_Left(float & oLeft); \
      virtual HRESULT __stdcall put_Left(float iLeft); \
      virtual HRESULT __stdcall get_Bottom(float & oBottom); \
      virtual HRESULT __stdcall put_Bottom(float iBottom); \
      virtual HRESULT __stdcall get_Zoom(float & oZoom); \
      virtual HRESULT __stdcall put_Zoom(float iZoom); \
      virtual HRESULT __stdcall get_Rotation(CatImageRotation & oRotation); \
      virtual HRESULT __stdcall put_Rotation(CatImageRotation iRotation); \
      virtual HRESULT __stdcall get_Banner(CATBSTR & oBanner); \
      virtual HRESULT __stdcall put_Banner(const CATBSTR & iBanner); \
      virtual HRESULT __stdcall get_BannerPosition(CatBannerPosition & oBannerPosition); \
      virtual HRESULT __stdcall put_BannerPosition(CatBannerPosition iBannerPosition); \
      virtual HRESULT __stdcall get_Logo(CATBSTR & oLogo); \
      virtual HRESULT __stdcall put_Logo(const CATBSTR & iLogo); \
      virtual HRESULT __stdcall get_Quality(CatPrintQuality & oQuality); \
      virtual HRESULT __stdcall put_Quality(CatPrintQuality iQuality); \
      virtual HRESULT __stdcall get_Scaling1To1(CAT_VARIANT_BOOL & oScaling1To1); \
      virtual HRESULT __stdcall put_Scaling1To1(CAT_VARIANT_BOOL iScaling1To1); \
      virtual HRESULT __stdcall get_Color(CatPrintColor & oColor); \
      virtual HRESULT __stdcall put_Color(CatPrintColor iColor); \
      virtual HRESULT __stdcall get_UseImageSize(CAT_VARIANT_BOOL & oUseImageSize); \
      virtual HRESULT __stdcall put_UseImageSize(CAT_VARIANT_BOOL iUseImageSize); \
      virtual HRESULT __stdcall get_Dpi(float & oDpi); \
      virtual HRESULT __stdcall put_Dpi(float iDpi); \
      virtual HRESULT __stdcall get_PrintRenderingMode(CatPrintRenderingMode & oRenderingMode); \
      virtual HRESULT __stdcall put_PrintRenderingMode(CatPrintRenderingMode iRenderingMode); \
      virtual HRESULT __stdcall get_TextBlanking(CAT_VARIANT_BOOL & oTextBlanking); \
      virtual HRESULT __stdcall put_TextBlanking(CAT_VARIANT_BOOL iTextBlanking); \
      virtual HRESULT __stdcall get_WhiteVectorsInBlack(CAT_VARIANT_BOOL & oWhiteVectorsInBlack); \
      virtual HRESULT __stdcall put_WhiteVectorsInBlack(CAT_VARIANT_BOOL iWhiteVectorsInBlack); \
      virtual HRESULT __stdcall get_BannerSize(float & oBannerSize); \
      virtual HRESULT __stdcall put_BannerSize(float iBannerSize); \
      virtual HRESULT __stdcall get_LineWidthSpecification(CatPrintLineSpecification & oLineWidthSpecification); \
      virtual HRESULT __stdcall put_LineWidthSpecification(CatPrintLineSpecification iLineWidthSpecification); \
      virtual HRESULT __stdcall get_LineTypeSpecification(CatPrintLineSpecification & oLineTypeSpecification); \
      virtual HRESULT __stdcall put_LineTypeSpecification(CatPrintLineSpecification iLineTypeSpecification); \
      virtual HRESULT __stdcall get_LineCap(CatPrintLineCap & oLineCap); \
      virtual HRESULT __stdcall put_LineCap(CatPrintLineCap iLineCap); \
      virtual HRESULT __stdcall get_TextScaling(CAT_VARIANT_BOOL & oTextScaling); \
      virtual HRESULT __stdcall put_TextScaling(CAT_VARIANT_BOOL iTextScaling); \
      virtual HRESULT __stdcall get_LineTypeOverlappingCheck(CAT_VARIANT_BOOL & oLineTypeOverlappingCheck); \
      virtual HRESULT __stdcall put_LineTypeOverlappingCheck(CAT_VARIANT_BOOL iLineTypeOverlappingCheck); \
      virtual HRESULT __stdcall get_Use3DAccuracy(CAT_VARIANT_BOOL & oUse3DAccuracy); \
      virtual HRESULT __stdcall put_Use3DAccuracy(CAT_VARIANT_BOOL iUse3DAccuracy); \
      virtual HRESULT __stdcall get_Gamma(float & oGamma); \
      virtual HRESULT __stdcall put_Gamma(float iGamma); \
      virtual HRESULT __stdcall get_LogoVisibility(CAT_VARIANT_BOOL & oLogoVisibility); \
      virtual HRESULT __stdcall put_LogoVisibility(CAT_VARIANT_BOOL iLogoVisibility); \
      virtual HRESULT  __stdcall get_Application(CATIAApplication *& oApplication); \
      virtual HRESULT  __stdcall get_Parent(CATBaseDispatch *& oParent); \
      virtual HRESULT  __stdcall get_Name(CATBSTR & oNameBSTR); \
      virtual HRESULT  __stdcall put_Name(const CATBSTR & iNameBSTR); \
      virtual HRESULT  __stdcall GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj); \
};



#define ENVTIEdeclare_CATIAPageSetup(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
virtual HRESULT __stdcall get_PaperSize(CatPaperSize & oPaperSize); \
virtual HRESULT __stdcall put_PaperSize(CatPaperSize iPaperSize); \
virtual HRESULT __stdcall get_PaperWidth(float & oPaperWidth); \
virtual HRESULT __stdcall put_PaperWidth(float iPaperWidth); \
virtual HRESULT __stdcall get_PaperHeight(float & oPaperHeight); \
virtual HRESULT __stdcall put_PaperHeight(float iPaperHeight); \
virtual HRESULT __stdcall get_Orientation(CatPaperOrientation & orientation); \
virtual HRESULT __stdcall put_Orientation(CatPaperOrientation orientation); \
virtual HRESULT __stdcall get_BottomMargin(float & oBottomMargin); \
virtual HRESULT __stdcall put_BottomMargin(float iBottomMargin); \
virtual HRESULT __stdcall get_TopMargin(float & oTopMargin); \
virtual HRESULT __stdcall put_TopMargin(float iTopMargin); \
virtual HRESULT __stdcall get_LeftMargin(float & oLeftMargin); \
virtual HRESULT __stdcall put_LeftMargin(float iLeftMargin); \
virtual HRESULT __stdcall get_RightMargin(float & oRightMargin); \
virtual HRESULT __stdcall put_RightMargin(float iRightMargin); \
virtual HRESULT __stdcall get_MaximumSize(CAT_VARIANT_BOOL & oMaxSize); \
virtual HRESULT __stdcall put_MaximumSize(CAT_VARIANT_BOOL iMaxSize); \
virtual HRESULT __stdcall get_Left(float & oLeft); \
virtual HRESULT __stdcall put_Left(float iLeft); \
virtual HRESULT __stdcall get_Bottom(float & oBottom); \
virtual HRESULT __stdcall put_Bottom(float iBottom); \
virtual HRESULT __stdcall get_Zoom(float & oZoom); \
virtual HRESULT __stdcall put_Zoom(float iZoom); \
virtual HRESULT __stdcall get_Rotation(CatImageRotation & oRotation); \
virtual HRESULT __stdcall put_Rotation(CatImageRotation iRotation); \
virtual HRESULT __stdcall get_Banner(CATBSTR & oBanner); \
virtual HRESULT __stdcall put_Banner(const CATBSTR & iBanner); \
virtual HRESULT __stdcall get_BannerPosition(CatBannerPosition & oBannerPosition); \
virtual HRESULT __stdcall put_BannerPosition(CatBannerPosition iBannerPosition); \
virtual HRESULT __stdcall get_Logo(CATBSTR & oLogo); \
virtual HRESULT __stdcall put_Logo(const CATBSTR & iLogo); \
virtual HRESULT __stdcall get_Quality(CatPrintQuality & oQuality); \
virtual HRESULT __stdcall put_Quality(CatPrintQuality iQuality); \
virtual HRESULT __stdcall get_Scaling1To1(CAT_VARIANT_BOOL & oScaling1To1); \
virtual HRESULT __stdcall put_Scaling1To1(CAT_VARIANT_BOOL iScaling1To1); \
virtual HRESULT __stdcall get_Color(CatPrintColor & oColor); \
virtual HRESULT __stdcall put_Color(CatPrintColor iColor); \
virtual HRESULT __stdcall get_UseImageSize(CAT_VARIANT_BOOL & oUseImageSize); \
virtual HRESULT __stdcall put_UseImageSize(CAT_VARIANT_BOOL iUseImageSize); \
virtual HRESULT __stdcall get_Dpi(float & oDpi); \
virtual HRESULT __stdcall put_Dpi(float iDpi); \
virtual HRESULT __stdcall get_PrintRenderingMode(CatPrintRenderingMode & oRenderingMode); \
virtual HRESULT __stdcall put_PrintRenderingMode(CatPrintRenderingMode iRenderingMode); \
virtual HRESULT __stdcall get_TextBlanking(CAT_VARIANT_BOOL & oTextBlanking); \
virtual HRESULT __stdcall put_TextBlanking(CAT_VARIANT_BOOL iTextBlanking); \
virtual HRESULT __stdcall get_WhiteVectorsInBlack(CAT_VARIANT_BOOL & oWhiteVectorsInBlack); \
virtual HRESULT __stdcall put_WhiteVectorsInBlack(CAT_VARIANT_BOOL iWhiteVectorsInBlack); \
virtual HRESULT __stdcall get_BannerSize(float & oBannerSize); \
virtual HRESULT __stdcall put_BannerSize(float iBannerSize); \
virtual HRESULT __stdcall get_LineWidthSpecification(CatPrintLineSpecification & oLineWidthSpecification); \
virtual HRESULT __stdcall put_LineWidthSpecification(CatPrintLineSpecification iLineWidthSpecification); \
virtual HRESULT __stdcall get_LineTypeSpecification(CatPrintLineSpecification & oLineTypeSpecification); \
virtual HRESULT __stdcall put_LineTypeSpecification(CatPrintLineSpecification iLineTypeSpecification); \
virtual HRESULT __stdcall get_LineCap(CatPrintLineCap & oLineCap); \
virtual HRESULT __stdcall put_LineCap(CatPrintLineCap iLineCap); \
virtual HRESULT __stdcall get_TextScaling(CAT_VARIANT_BOOL & oTextScaling); \
virtual HRESULT __stdcall put_TextScaling(CAT_VARIANT_BOOL iTextScaling); \
virtual HRESULT __stdcall get_LineTypeOverlappingCheck(CAT_VARIANT_BOOL & oLineTypeOverlappingCheck); \
virtual HRESULT __stdcall put_LineTypeOverlappingCheck(CAT_VARIANT_BOOL iLineTypeOverlappingCheck); \
virtual HRESULT __stdcall get_Use3DAccuracy(CAT_VARIANT_BOOL & oUse3DAccuracy); \
virtual HRESULT __stdcall put_Use3DAccuracy(CAT_VARIANT_BOOL iUse3DAccuracy); \
virtual HRESULT __stdcall get_Gamma(float & oGamma); \
virtual HRESULT __stdcall put_Gamma(float iGamma); \
virtual HRESULT __stdcall get_LogoVisibility(CAT_VARIANT_BOOL & oLogoVisibility); \
virtual HRESULT __stdcall put_LogoVisibility(CAT_VARIANT_BOOL iLogoVisibility); \
virtual HRESULT  __stdcall get_Application(CATIAApplication *& oApplication); \
virtual HRESULT  __stdcall get_Parent(CATBaseDispatch *& oParent); \
virtual HRESULT  __stdcall get_Name(CATBSTR & oNameBSTR); \
virtual HRESULT  __stdcall put_Name(const CATBSTR & iNameBSTR); \
virtual HRESULT  __stdcall GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj); \


#define ENVTIEdefine_CATIAPageSetup(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
HRESULT __stdcall  ENVTIEName::get_PaperSize(CatPaperSize & oPaperSize) \
{ \
return (ENVTIECALL(CATIAPageSetup,ENVTIETypeLetter,ENVTIELetter)get_PaperSize(oPaperSize)); \
} \
HRESULT __stdcall  ENVTIEName::put_PaperSize(CatPaperSize iPaperSize) \
{ \
return (ENVTIECALL(CATIAPageSetup,ENVTIETypeLetter,ENVTIELetter)put_PaperSize(iPaperSize)); \
} \
HRESULT __stdcall  ENVTIEName::get_PaperWidth(float & oPaperWidth) \
{ \
return (ENVTIECALL(CATIAPageSetup,ENVTIETypeLetter,ENVTIELetter)get_PaperWidth(oPaperWidth)); \
} \
HRESULT __stdcall  ENVTIEName::put_PaperWidth(float iPaperWidth) \
{ \
return (ENVTIECALL(CATIAPageSetup,ENVTIETypeLetter,ENVTIELetter)put_PaperWidth(iPaperWidth)); \
} \
HRESULT __stdcall  ENVTIEName::get_PaperHeight(float & oPaperHeight) \
{ \
return (ENVTIECALL(CATIAPageSetup,ENVTIETypeLetter,ENVTIELetter)get_PaperHeight(oPaperHeight)); \
} \
HRESULT __stdcall  ENVTIEName::put_PaperHeight(float iPaperHeight) \
{ \
return (ENVTIECALL(CATIAPageSetup,ENVTIETypeLetter,ENVTIELetter)put_PaperHeight(iPaperHeight)); \
} \
HRESULT __stdcall  ENVTIEName::get_Orientation(CatPaperOrientation & orientation) \
{ \
return (ENVTIECALL(CATIAPageSetup,ENVTIETypeLetter,ENVTIELetter)get_Orientation(orientation)); \
} \
HRESULT __stdcall  ENVTIEName::put_Orientation(CatPaperOrientation orientation) \
{ \
return (ENVTIECALL(CATIAPageSetup,ENVTIETypeLetter,ENVTIELetter)put_Orientation(orientation)); \
} \
HRESULT __stdcall  ENVTIEName::get_BottomMargin(float & oBottomMargin) \
{ \
return (ENVTIECALL(CATIAPageSetup,ENVTIETypeLetter,ENVTIELetter)get_BottomMargin(oBottomMargin)); \
} \
HRESULT __stdcall  ENVTIEName::put_BottomMargin(float iBottomMargin) \
{ \
return (ENVTIECALL(CATIAPageSetup,ENVTIETypeLetter,ENVTIELetter)put_BottomMargin(iBottomMargin)); \
} \
HRESULT __stdcall  ENVTIEName::get_TopMargin(float & oTopMargin) \
{ \
return (ENVTIECALL(CATIAPageSetup,ENVTIETypeLetter,ENVTIELetter)get_TopMargin(oTopMargin)); \
} \
HRESULT __stdcall  ENVTIEName::put_TopMargin(float iTopMargin) \
{ \
return (ENVTIECALL(CATIAPageSetup,ENVTIETypeLetter,ENVTIELetter)put_TopMargin(iTopMargin)); \
} \
HRESULT __stdcall  ENVTIEName::get_LeftMargin(float & oLeftMargin) \
{ \
return (ENVTIECALL(CATIAPageSetup,ENVTIETypeLetter,ENVTIELetter)get_LeftMargin(oLeftMargin)); \
} \
HRESULT __stdcall  ENVTIEName::put_LeftMargin(float iLeftMargin) \
{ \
return (ENVTIECALL(CATIAPageSetup,ENVTIETypeLetter,ENVTIELetter)put_LeftMargin(iLeftMargin)); \
} \
HRESULT __stdcall  ENVTIEName::get_RightMargin(float & oRightMargin) \
{ \
return (ENVTIECALL(CATIAPageSetup,ENVTIETypeLetter,ENVTIELetter)get_RightMargin(oRightMargin)); \
} \
HRESULT __stdcall  ENVTIEName::put_RightMargin(float iRightMargin) \
{ \
return (ENVTIECALL(CATIAPageSetup,ENVTIETypeLetter,ENVTIELetter)put_RightMargin(iRightMargin)); \
} \
HRESULT __stdcall  ENVTIEName::get_MaximumSize(CAT_VARIANT_BOOL & oMaxSize) \
{ \
return (ENVTIECALL(CATIAPageSetup,ENVTIETypeLetter,ENVTIELetter)get_MaximumSize(oMaxSize)); \
} \
HRESULT __stdcall  ENVTIEName::put_MaximumSize(CAT_VARIANT_BOOL iMaxSize) \
{ \
return (ENVTIECALL(CATIAPageSetup,ENVTIETypeLetter,ENVTIELetter)put_MaximumSize(iMaxSize)); \
} \
HRESULT __stdcall  ENVTIEName::get_Left(float & oLeft) \
{ \
return (ENVTIECALL(CATIAPageSetup,ENVTIETypeLetter,ENVTIELetter)get_Left(oLeft)); \
} \
HRESULT __stdcall  ENVTIEName::put_Left(float iLeft) \
{ \
return (ENVTIECALL(CATIAPageSetup,ENVTIETypeLetter,ENVTIELetter)put_Left(iLeft)); \
} \
HRESULT __stdcall  ENVTIEName::get_Bottom(float & oBottom) \
{ \
return (ENVTIECALL(CATIAPageSetup,ENVTIETypeLetter,ENVTIELetter)get_Bottom(oBottom)); \
} \
HRESULT __stdcall  ENVTIEName::put_Bottom(float iBottom) \
{ \
return (ENVTIECALL(CATIAPageSetup,ENVTIETypeLetter,ENVTIELetter)put_Bottom(iBottom)); \
} \
HRESULT __stdcall  ENVTIEName::get_Zoom(float & oZoom) \
{ \
return (ENVTIECALL(CATIAPageSetup,ENVTIETypeLetter,ENVTIELetter)get_Zoom(oZoom)); \
} \
HRESULT __stdcall  ENVTIEName::put_Zoom(float iZoom) \
{ \
return (ENVTIECALL(CATIAPageSetup,ENVTIETypeLetter,ENVTIELetter)put_Zoom(iZoom)); \
} \
HRESULT __stdcall  ENVTIEName::get_Rotation(CatImageRotation & oRotation) \
{ \
return (ENVTIECALL(CATIAPageSetup,ENVTIETypeLetter,ENVTIELetter)get_Rotation(oRotation)); \
} \
HRESULT __stdcall  ENVTIEName::put_Rotation(CatImageRotation iRotation) \
{ \
return (ENVTIECALL(CATIAPageSetup,ENVTIETypeLetter,ENVTIELetter)put_Rotation(iRotation)); \
} \
HRESULT __stdcall  ENVTIEName::get_Banner(CATBSTR & oBanner) \
{ \
return (ENVTIECALL(CATIAPageSetup,ENVTIETypeLetter,ENVTIELetter)get_Banner(oBanner)); \
} \
HRESULT __stdcall  ENVTIEName::put_Banner(const CATBSTR & iBanner) \
{ \
return (ENVTIECALL(CATIAPageSetup,ENVTIETypeLetter,ENVTIELetter)put_Banner(iBanner)); \
} \
HRESULT __stdcall  ENVTIEName::get_BannerPosition(CatBannerPosition & oBannerPosition) \
{ \
return (ENVTIECALL(CATIAPageSetup,ENVTIETypeLetter,ENVTIELetter)get_BannerPosition(oBannerPosition)); \
} \
HRESULT __stdcall  ENVTIEName::put_BannerPosition(CatBannerPosition iBannerPosition) \
{ \
return (ENVTIECALL(CATIAPageSetup,ENVTIETypeLetter,ENVTIELetter)put_BannerPosition(iBannerPosition)); \
} \
HRESULT __stdcall  ENVTIEName::get_Logo(CATBSTR & oLogo) \
{ \
return (ENVTIECALL(CATIAPageSetup,ENVTIETypeLetter,ENVTIELetter)get_Logo(oLogo)); \
} \
HRESULT __stdcall  ENVTIEName::put_Logo(const CATBSTR & iLogo) \
{ \
return (ENVTIECALL(CATIAPageSetup,ENVTIETypeLetter,ENVTIELetter)put_Logo(iLogo)); \
} \
HRESULT __stdcall  ENVTIEName::get_Quality(CatPrintQuality & oQuality) \
{ \
return (ENVTIECALL(CATIAPageSetup,ENVTIETypeLetter,ENVTIELetter)get_Quality(oQuality)); \
} \
HRESULT __stdcall  ENVTIEName::put_Quality(CatPrintQuality iQuality) \
{ \
return (ENVTIECALL(CATIAPageSetup,ENVTIETypeLetter,ENVTIELetter)put_Quality(iQuality)); \
} \
HRESULT __stdcall  ENVTIEName::get_Scaling1To1(CAT_VARIANT_BOOL & oScaling1To1) \
{ \
return (ENVTIECALL(CATIAPageSetup,ENVTIETypeLetter,ENVTIELetter)get_Scaling1To1(oScaling1To1)); \
} \
HRESULT __stdcall  ENVTIEName::put_Scaling1To1(CAT_VARIANT_BOOL iScaling1To1) \
{ \
return (ENVTIECALL(CATIAPageSetup,ENVTIETypeLetter,ENVTIELetter)put_Scaling1To1(iScaling1To1)); \
} \
HRESULT __stdcall  ENVTIEName::get_Color(CatPrintColor & oColor) \
{ \
return (ENVTIECALL(CATIAPageSetup,ENVTIETypeLetter,ENVTIELetter)get_Color(oColor)); \
} \
HRESULT __stdcall  ENVTIEName::put_Color(CatPrintColor iColor) \
{ \
return (ENVTIECALL(CATIAPageSetup,ENVTIETypeLetter,ENVTIELetter)put_Color(iColor)); \
} \
HRESULT __stdcall  ENVTIEName::get_UseImageSize(CAT_VARIANT_BOOL & oUseImageSize) \
{ \
return (ENVTIECALL(CATIAPageSetup,ENVTIETypeLetter,ENVTIELetter)get_UseImageSize(oUseImageSize)); \
} \
HRESULT __stdcall  ENVTIEName::put_UseImageSize(CAT_VARIANT_BOOL iUseImageSize) \
{ \
return (ENVTIECALL(CATIAPageSetup,ENVTIETypeLetter,ENVTIELetter)put_UseImageSize(iUseImageSize)); \
} \
HRESULT __stdcall  ENVTIEName::get_Dpi(float & oDpi) \
{ \
return (ENVTIECALL(CATIAPageSetup,ENVTIETypeLetter,ENVTIELetter)get_Dpi(oDpi)); \
} \
HRESULT __stdcall  ENVTIEName::put_Dpi(float iDpi) \
{ \
return (ENVTIECALL(CATIAPageSetup,ENVTIETypeLetter,ENVTIELetter)put_Dpi(iDpi)); \
} \
HRESULT __stdcall  ENVTIEName::get_PrintRenderingMode(CatPrintRenderingMode & oRenderingMode) \
{ \
return (ENVTIECALL(CATIAPageSetup,ENVTIETypeLetter,ENVTIELetter)get_PrintRenderingMode(oRenderingMode)); \
} \
HRESULT __stdcall  ENVTIEName::put_PrintRenderingMode(CatPrintRenderingMode iRenderingMode) \
{ \
return (ENVTIECALL(CATIAPageSetup,ENVTIETypeLetter,ENVTIELetter)put_PrintRenderingMode(iRenderingMode)); \
} \
HRESULT __stdcall  ENVTIEName::get_TextBlanking(CAT_VARIANT_BOOL & oTextBlanking) \
{ \
return (ENVTIECALL(CATIAPageSetup,ENVTIETypeLetter,ENVTIELetter)get_TextBlanking(oTextBlanking)); \
} \
HRESULT __stdcall  ENVTIEName::put_TextBlanking(CAT_VARIANT_BOOL iTextBlanking) \
{ \
return (ENVTIECALL(CATIAPageSetup,ENVTIETypeLetter,ENVTIELetter)put_TextBlanking(iTextBlanking)); \
} \
HRESULT __stdcall  ENVTIEName::get_WhiteVectorsInBlack(CAT_VARIANT_BOOL & oWhiteVectorsInBlack) \
{ \
return (ENVTIECALL(CATIAPageSetup,ENVTIETypeLetter,ENVTIELetter)get_WhiteVectorsInBlack(oWhiteVectorsInBlack)); \
} \
HRESULT __stdcall  ENVTIEName::put_WhiteVectorsInBlack(CAT_VARIANT_BOOL iWhiteVectorsInBlack) \
{ \
return (ENVTIECALL(CATIAPageSetup,ENVTIETypeLetter,ENVTIELetter)put_WhiteVectorsInBlack(iWhiteVectorsInBlack)); \
} \
HRESULT __stdcall  ENVTIEName::get_BannerSize(float & oBannerSize) \
{ \
return (ENVTIECALL(CATIAPageSetup,ENVTIETypeLetter,ENVTIELetter)get_BannerSize(oBannerSize)); \
} \
HRESULT __stdcall  ENVTIEName::put_BannerSize(float iBannerSize) \
{ \
return (ENVTIECALL(CATIAPageSetup,ENVTIETypeLetter,ENVTIELetter)put_BannerSize(iBannerSize)); \
} \
HRESULT __stdcall  ENVTIEName::get_LineWidthSpecification(CatPrintLineSpecification & oLineWidthSpecification) \
{ \
return (ENVTIECALL(CATIAPageSetup,ENVTIETypeLetter,ENVTIELetter)get_LineWidthSpecification(oLineWidthSpecification)); \
} \
HRESULT __stdcall  ENVTIEName::put_LineWidthSpecification(CatPrintLineSpecification iLineWidthSpecification) \
{ \
return (ENVTIECALL(CATIAPageSetup,ENVTIETypeLetter,ENVTIELetter)put_LineWidthSpecification(iLineWidthSpecification)); \
} \
HRESULT __stdcall  ENVTIEName::get_LineTypeSpecification(CatPrintLineSpecification & oLineTypeSpecification) \
{ \
return (ENVTIECALL(CATIAPageSetup,ENVTIETypeLetter,ENVTIELetter)get_LineTypeSpecification(oLineTypeSpecification)); \
} \
HRESULT __stdcall  ENVTIEName::put_LineTypeSpecification(CatPrintLineSpecification iLineTypeSpecification) \
{ \
return (ENVTIECALL(CATIAPageSetup,ENVTIETypeLetter,ENVTIELetter)put_LineTypeSpecification(iLineTypeSpecification)); \
} \
HRESULT __stdcall  ENVTIEName::get_LineCap(CatPrintLineCap & oLineCap) \
{ \
return (ENVTIECALL(CATIAPageSetup,ENVTIETypeLetter,ENVTIELetter)get_LineCap(oLineCap)); \
} \
HRESULT __stdcall  ENVTIEName::put_LineCap(CatPrintLineCap iLineCap) \
{ \
return (ENVTIECALL(CATIAPageSetup,ENVTIETypeLetter,ENVTIELetter)put_LineCap(iLineCap)); \
} \
HRESULT __stdcall  ENVTIEName::get_TextScaling(CAT_VARIANT_BOOL & oTextScaling) \
{ \
return (ENVTIECALL(CATIAPageSetup,ENVTIETypeLetter,ENVTIELetter)get_TextScaling(oTextScaling)); \
} \
HRESULT __stdcall  ENVTIEName::put_TextScaling(CAT_VARIANT_BOOL iTextScaling) \
{ \
return (ENVTIECALL(CATIAPageSetup,ENVTIETypeLetter,ENVTIELetter)put_TextScaling(iTextScaling)); \
} \
HRESULT __stdcall  ENVTIEName::get_LineTypeOverlappingCheck(CAT_VARIANT_BOOL & oLineTypeOverlappingCheck) \
{ \
return (ENVTIECALL(CATIAPageSetup,ENVTIETypeLetter,ENVTIELetter)get_LineTypeOverlappingCheck(oLineTypeOverlappingCheck)); \
} \
HRESULT __stdcall  ENVTIEName::put_LineTypeOverlappingCheck(CAT_VARIANT_BOOL iLineTypeOverlappingCheck) \
{ \
return (ENVTIECALL(CATIAPageSetup,ENVTIETypeLetter,ENVTIELetter)put_LineTypeOverlappingCheck(iLineTypeOverlappingCheck)); \
} \
HRESULT __stdcall  ENVTIEName::get_Use3DAccuracy(CAT_VARIANT_BOOL & oUse3DAccuracy) \
{ \
return (ENVTIECALL(CATIAPageSetup,ENVTIETypeLetter,ENVTIELetter)get_Use3DAccuracy(oUse3DAccuracy)); \
} \
HRESULT __stdcall  ENVTIEName::put_Use3DAccuracy(CAT_VARIANT_BOOL iUse3DAccuracy) \
{ \
return (ENVTIECALL(CATIAPageSetup,ENVTIETypeLetter,ENVTIELetter)put_Use3DAccuracy(iUse3DAccuracy)); \
} \
HRESULT __stdcall  ENVTIEName::get_Gamma(float & oGamma) \
{ \
return (ENVTIECALL(CATIAPageSetup,ENVTIETypeLetter,ENVTIELetter)get_Gamma(oGamma)); \
} \
HRESULT __stdcall  ENVTIEName::put_Gamma(float iGamma) \
{ \
return (ENVTIECALL(CATIAPageSetup,ENVTIETypeLetter,ENVTIELetter)put_Gamma(iGamma)); \
} \
HRESULT __stdcall  ENVTIEName::get_LogoVisibility(CAT_VARIANT_BOOL & oLogoVisibility) \
{ \
return (ENVTIECALL(CATIAPageSetup,ENVTIETypeLetter,ENVTIELetter)get_LogoVisibility(oLogoVisibility)); \
} \
HRESULT __stdcall  ENVTIEName::put_LogoVisibility(CAT_VARIANT_BOOL iLogoVisibility) \
{ \
return (ENVTIECALL(CATIAPageSetup,ENVTIETypeLetter,ENVTIELetter)put_LogoVisibility(iLogoVisibility)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Application(CATIAApplication *& oApplication) \
{ \
return (ENVTIECALL(CATIAPageSetup,ENVTIETypeLetter,ENVTIELetter)get_Application(oApplication)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Parent(CATBaseDispatch *& oParent) \
{ \
return (ENVTIECALL(CATIAPageSetup,ENVTIETypeLetter,ENVTIELetter)get_Parent(oParent)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Name(CATBSTR & oNameBSTR) \
{ \
return (ENVTIECALL(CATIAPageSetup,ENVTIETypeLetter,ENVTIELetter)get_Name(oNameBSTR)); \
} \
HRESULT  __stdcall  ENVTIEName::put_Name(const CATBSTR & iNameBSTR) \
{ \
return (ENVTIECALL(CATIAPageSetup,ENVTIETypeLetter,ENVTIELetter)put_Name(iNameBSTR)); \
} \
HRESULT  __stdcall  ENVTIEName::GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj) \
{ \
return (ENVTIECALL(CATIAPageSetup,ENVTIETypeLetter,ENVTIELetter)GetItem(IDName,RealObj)); \
} \


/* Name of the TIE class */
#define class_TIE_CATIAPageSetup(classe)    TIECATIAPageSetup##classe


/* Common methods inside a TIE */
#define common_TIE_CATIAPageSetup(classe) \
 \
 \
/* Static initialization */ \
CATDefineCommonTIEMembers(CATIAPageSetup, classe) \
 \
 \
CATImplementTIEMethods(CATIAPageSetup, classe) \
CATImplementIUnknownMethodsForCATBaseUnknownTIE(CATIAPageSetup, classe, 2) \
CATImplementIDispatchMethodsForCATBaseUnknownTIE(CATIAPageSetup, classe) \
CATImplementCATBaseUnknownMethodsForTIE(CATIAPageSetup, classe) \
 \
HRESULT __stdcall  TIECATIAPageSetup##classe::get_PaperSize(CatPaperSize & oPaperSize) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,1,&_Trac2,&oPaperSize); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_PaperSize(oPaperSize); \
   ExitAfterCall(this,1,_Trac2,&_ret_arg,&oPaperSize); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAPageSetup##classe::put_PaperSize(CatPaperSize iPaperSize) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,2,&_Trac2,&iPaperSize); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_PaperSize(iPaperSize); \
   ExitAfterCall(this,2,_Trac2,&_ret_arg,&iPaperSize); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAPageSetup##classe::get_PaperWidth(float & oPaperWidth) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,3,&_Trac2,&oPaperWidth); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_PaperWidth(oPaperWidth); \
   ExitAfterCall(this,3,_Trac2,&_ret_arg,&oPaperWidth); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAPageSetup##classe::put_PaperWidth(float iPaperWidth) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,4,&_Trac2,&iPaperWidth); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_PaperWidth(iPaperWidth); \
   ExitAfterCall(this,4,_Trac2,&_ret_arg,&iPaperWidth); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAPageSetup##classe::get_PaperHeight(float & oPaperHeight) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,5,&_Trac2,&oPaperHeight); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_PaperHeight(oPaperHeight); \
   ExitAfterCall(this,5,_Trac2,&_ret_arg,&oPaperHeight); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAPageSetup##classe::put_PaperHeight(float iPaperHeight) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,6,&_Trac2,&iPaperHeight); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_PaperHeight(iPaperHeight); \
   ExitAfterCall(this,6,_Trac2,&_ret_arg,&iPaperHeight); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAPageSetup##classe::get_Orientation(CatPaperOrientation & orientation) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,7,&_Trac2,&orientation); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Orientation(orientation); \
   ExitAfterCall(this,7,_Trac2,&_ret_arg,&orientation); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAPageSetup##classe::put_Orientation(CatPaperOrientation orientation) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,8,&_Trac2,&orientation); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_Orientation(orientation); \
   ExitAfterCall(this,8,_Trac2,&_ret_arg,&orientation); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAPageSetup##classe::get_BottomMargin(float & oBottomMargin) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,9,&_Trac2,&oBottomMargin); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_BottomMargin(oBottomMargin); \
   ExitAfterCall(this,9,_Trac2,&_ret_arg,&oBottomMargin); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAPageSetup##classe::put_BottomMargin(float iBottomMargin) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,10,&_Trac2,&iBottomMargin); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_BottomMargin(iBottomMargin); \
   ExitAfterCall(this,10,_Trac2,&_ret_arg,&iBottomMargin); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAPageSetup##classe::get_TopMargin(float & oTopMargin) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,11,&_Trac2,&oTopMargin); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_TopMargin(oTopMargin); \
   ExitAfterCall(this,11,_Trac2,&_ret_arg,&oTopMargin); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAPageSetup##classe::put_TopMargin(float iTopMargin) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,12,&_Trac2,&iTopMargin); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_TopMargin(iTopMargin); \
   ExitAfterCall(this,12,_Trac2,&_ret_arg,&iTopMargin); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAPageSetup##classe::get_LeftMargin(float & oLeftMargin) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,13,&_Trac2,&oLeftMargin); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_LeftMargin(oLeftMargin); \
   ExitAfterCall(this,13,_Trac2,&_ret_arg,&oLeftMargin); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAPageSetup##classe::put_LeftMargin(float iLeftMargin) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,14,&_Trac2,&iLeftMargin); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_LeftMargin(iLeftMargin); \
   ExitAfterCall(this,14,_Trac2,&_ret_arg,&iLeftMargin); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAPageSetup##classe::get_RightMargin(float & oRightMargin) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,15,&_Trac2,&oRightMargin); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_RightMargin(oRightMargin); \
   ExitAfterCall(this,15,_Trac2,&_ret_arg,&oRightMargin); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAPageSetup##classe::put_RightMargin(float iRightMargin) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,16,&_Trac2,&iRightMargin); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_RightMargin(iRightMargin); \
   ExitAfterCall(this,16,_Trac2,&_ret_arg,&iRightMargin); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAPageSetup##classe::get_MaximumSize(CAT_VARIANT_BOOL & oMaxSize) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,17,&_Trac2,&oMaxSize); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_MaximumSize(oMaxSize); \
   ExitAfterCall(this,17,_Trac2,&_ret_arg,&oMaxSize); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAPageSetup##classe::put_MaximumSize(CAT_VARIANT_BOOL iMaxSize) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,18,&_Trac2,&iMaxSize); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_MaximumSize(iMaxSize); \
   ExitAfterCall(this,18,_Trac2,&_ret_arg,&iMaxSize); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAPageSetup##classe::get_Left(float & oLeft) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,19,&_Trac2,&oLeft); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Left(oLeft); \
   ExitAfterCall(this,19,_Trac2,&_ret_arg,&oLeft); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAPageSetup##classe::put_Left(float iLeft) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,20,&_Trac2,&iLeft); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_Left(iLeft); \
   ExitAfterCall(this,20,_Trac2,&_ret_arg,&iLeft); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAPageSetup##classe::get_Bottom(float & oBottom) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,21,&_Trac2,&oBottom); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Bottom(oBottom); \
   ExitAfterCall(this,21,_Trac2,&_ret_arg,&oBottom); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAPageSetup##classe::put_Bottom(float iBottom) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,22,&_Trac2,&iBottom); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_Bottom(iBottom); \
   ExitAfterCall(this,22,_Trac2,&_ret_arg,&iBottom); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAPageSetup##classe::get_Zoom(float & oZoom) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,23,&_Trac2,&oZoom); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Zoom(oZoom); \
   ExitAfterCall(this,23,_Trac2,&_ret_arg,&oZoom); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAPageSetup##classe::put_Zoom(float iZoom) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,24,&_Trac2,&iZoom); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_Zoom(iZoom); \
   ExitAfterCall(this,24,_Trac2,&_ret_arg,&iZoom); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAPageSetup##classe::get_Rotation(CatImageRotation & oRotation) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,25,&_Trac2,&oRotation); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Rotation(oRotation); \
   ExitAfterCall(this,25,_Trac2,&_ret_arg,&oRotation); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAPageSetup##classe::put_Rotation(CatImageRotation iRotation) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,26,&_Trac2,&iRotation); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_Rotation(iRotation); \
   ExitAfterCall(this,26,_Trac2,&_ret_arg,&iRotation); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAPageSetup##classe::get_Banner(CATBSTR & oBanner) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,27,&_Trac2,&oBanner); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Banner(oBanner); \
   ExitAfterCall(this,27,_Trac2,&_ret_arg,&oBanner); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAPageSetup##classe::put_Banner(const CATBSTR & iBanner) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,28,&_Trac2,&iBanner); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_Banner(iBanner); \
   ExitAfterCall(this,28,_Trac2,&_ret_arg,&iBanner); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAPageSetup##classe::get_BannerPosition(CatBannerPosition & oBannerPosition) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,29,&_Trac2,&oBannerPosition); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_BannerPosition(oBannerPosition); \
   ExitAfterCall(this,29,_Trac2,&_ret_arg,&oBannerPosition); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAPageSetup##classe::put_BannerPosition(CatBannerPosition iBannerPosition) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,30,&_Trac2,&iBannerPosition); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_BannerPosition(iBannerPosition); \
   ExitAfterCall(this,30,_Trac2,&_ret_arg,&iBannerPosition); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAPageSetup##classe::get_Logo(CATBSTR & oLogo) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,31,&_Trac2,&oLogo); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Logo(oLogo); \
   ExitAfterCall(this,31,_Trac2,&_ret_arg,&oLogo); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAPageSetup##classe::put_Logo(const CATBSTR & iLogo) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,32,&_Trac2,&iLogo); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_Logo(iLogo); \
   ExitAfterCall(this,32,_Trac2,&_ret_arg,&iLogo); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAPageSetup##classe::get_Quality(CatPrintQuality & oQuality) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,33,&_Trac2,&oQuality); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Quality(oQuality); \
   ExitAfterCall(this,33,_Trac2,&_ret_arg,&oQuality); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAPageSetup##classe::put_Quality(CatPrintQuality iQuality) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,34,&_Trac2,&iQuality); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_Quality(iQuality); \
   ExitAfterCall(this,34,_Trac2,&_ret_arg,&iQuality); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAPageSetup##classe::get_Scaling1To1(CAT_VARIANT_BOOL & oScaling1To1) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,35,&_Trac2,&oScaling1To1); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Scaling1To1(oScaling1To1); \
   ExitAfterCall(this,35,_Trac2,&_ret_arg,&oScaling1To1); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAPageSetup##classe::put_Scaling1To1(CAT_VARIANT_BOOL iScaling1To1) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,36,&_Trac2,&iScaling1To1); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_Scaling1To1(iScaling1To1); \
   ExitAfterCall(this,36,_Trac2,&_ret_arg,&iScaling1To1); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAPageSetup##classe::get_Color(CatPrintColor & oColor) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,37,&_Trac2,&oColor); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Color(oColor); \
   ExitAfterCall(this,37,_Trac2,&_ret_arg,&oColor); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAPageSetup##classe::put_Color(CatPrintColor iColor) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,38,&_Trac2,&iColor); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_Color(iColor); \
   ExitAfterCall(this,38,_Trac2,&_ret_arg,&iColor); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAPageSetup##classe::get_UseImageSize(CAT_VARIANT_BOOL & oUseImageSize) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,39,&_Trac2,&oUseImageSize); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_UseImageSize(oUseImageSize); \
   ExitAfterCall(this,39,_Trac2,&_ret_arg,&oUseImageSize); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAPageSetup##classe::put_UseImageSize(CAT_VARIANT_BOOL iUseImageSize) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,40,&_Trac2,&iUseImageSize); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_UseImageSize(iUseImageSize); \
   ExitAfterCall(this,40,_Trac2,&_ret_arg,&iUseImageSize); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAPageSetup##classe::get_Dpi(float & oDpi) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,41,&_Trac2,&oDpi); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Dpi(oDpi); \
   ExitAfterCall(this,41,_Trac2,&_ret_arg,&oDpi); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAPageSetup##classe::put_Dpi(float iDpi) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,42,&_Trac2,&iDpi); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_Dpi(iDpi); \
   ExitAfterCall(this,42,_Trac2,&_ret_arg,&iDpi); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAPageSetup##classe::get_PrintRenderingMode(CatPrintRenderingMode & oRenderingMode) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,43,&_Trac2,&oRenderingMode); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_PrintRenderingMode(oRenderingMode); \
   ExitAfterCall(this,43,_Trac2,&_ret_arg,&oRenderingMode); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAPageSetup##classe::put_PrintRenderingMode(CatPrintRenderingMode iRenderingMode) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,44,&_Trac2,&iRenderingMode); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_PrintRenderingMode(iRenderingMode); \
   ExitAfterCall(this,44,_Trac2,&_ret_arg,&iRenderingMode); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAPageSetup##classe::get_TextBlanking(CAT_VARIANT_BOOL & oTextBlanking) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,45,&_Trac2,&oTextBlanking); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_TextBlanking(oTextBlanking); \
   ExitAfterCall(this,45,_Trac2,&_ret_arg,&oTextBlanking); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAPageSetup##classe::put_TextBlanking(CAT_VARIANT_BOOL iTextBlanking) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,46,&_Trac2,&iTextBlanking); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_TextBlanking(iTextBlanking); \
   ExitAfterCall(this,46,_Trac2,&_ret_arg,&iTextBlanking); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAPageSetup##classe::get_WhiteVectorsInBlack(CAT_VARIANT_BOOL & oWhiteVectorsInBlack) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,47,&_Trac2,&oWhiteVectorsInBlack); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_WhiteVectorsInBlack(oWhiteVectorsInBlack); \
   ExitAfterCall(this,47,_Trac2,&_ret_arg,&oWhiteVectorsInBlack); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAPageSetup##classe::put_WhiteVectorsInBlack(CAT_VARIANT_BOOL iWhiteVectorsInBlack) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,48,&_Trac2,&iWhiteVectorsInBlack); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_WhiteVectorsInBlack(iWhiteVectorsInBlack); \
   ExitAfterCall(this,48,_Trac2,&_ret_arg,&iWhiteVectorsInBlack); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAPageSetup##classe::get_BannerSize(float & oBannerSize) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,49,&_Trac2,&oBannerSize); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_BannerSize(oBannerSize); \
   ExitAfterCall(this,49,_Trac2,&_ret_arg,&oBannerSize); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAPageSetup##classe::put_BannerSize(float iBannerSize) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,50,&_Trac2,&iBannerSize); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_BannerSize(iBannerSize); \
   ExitAfterCall(this,50,_Trac2,&_ret_arg,&iBannerSize); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAPageSetup##classe::get_LineWidthSpecification(CatPrintLineSpecification & oLineWidthSpecification) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,51,&_Trac2,&oLineWidthSpecification); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_LineWidthSpecification(oLineWidthSpecification); \
   ExitAfterCall(this,51,_Trac2,&_ret_arg,&oLineWidthSpecification); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAPageSetup##classe::put_LineWidthSpecification(CatPrintLineSpecification iLineWidthSpecification) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,52,&_Trac2,&iLineWidthSpecification); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_LineWidthSpecification(iLineWidthSpecification); \
   ExitAfterCall(this,52,_Trac2,&_ret_arg,&iLineWidthSpecification); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAPageSetup##classe::get_LineTypeSpecification(CatPrintLineSpecification & oLineTypeSpecification) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,53,&_Trac2,&oLineTypeSpecification); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_LineTypeSpecification(oLineTypeSpecification); \
   ExitAfterCall(this,53,_Trac2,&_ret_arg,&oLineTypeSpecification); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAPageSetup##classe::put_LineTypeSpecification(CatPrintLineSpecification iLineTypeSpecification) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,54,&_Trac2,&iLineTypeSpecification); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_LineTypeSpecification(iLineTypeSpecification); \
   ExitAfterCall(this,54,_Trac2,&_ret_arg,&iLineTypeSpecification); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAPageSetup##classe::get_LineCap(CatPrintLineCap & oLineCap) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,55,&_Trac2,&oLineCap); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_LineCap(oLineCap); \
   ExitAfterCall(this,55,_Trac2,&_ret_arg,&oLineCap); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAPageSetup##classe::put_LineCap(CatPrintLineCap iLineCap) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,56,&_Trac2,&iLineCap); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_LineCap(iLineCap); \
   ExitAfterCall(this,56,_Trac2,&_ret_arg,&iLineCap); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAPageSetup##classe::get_TextScaling(CAT_VARIANT_BOOL & oTextScaling) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,57,&_Trac2,&oTextScaling); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_TextScaling(oTextScaling); \
   ExitAfterCall(this,57,_Trac2,&_ret_arg,&oTextScaling); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAPageSetup##classe::put_TextScaling(CAT_VARIANT_BOOL iTextScaling) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,58,&_Trac2,&iTextScaling); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_TextScaling(iTextScaling); \
   ExitAfterCall(this,58,_Trac2,&_ret_arg,&iTextScaling); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAPageSetup##classe::get_LineTypeOverlappingCheck(CAT_VARIANT_BOOL & oLineTypeOverlappingCheck) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,59,&_Trac2,&oLineTypeOverlappingCheck); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_LineTypeOverlappingCheck(oLineTypeOverlappingCheck); \
   ExitAfterCall(this,59,_Trac2,&_ret_arg,&oLineTypeOverlappingCheck); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAPageSetup##classe::put_LineTypeOverlappingCheck(CAT_VARIANT_BOOL iLineTypeOverlappingCheck) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,60,&_Trac2,&iLineTypeOverlappingCheck); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_LineTypeOverlappingCheck(iLineTypeOverlappingCheck); \
   ExitAfterCall(this,60,_Trac2,&_ret_arg,&iLineTypeOverlappingCheck); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAPageSetup##classe::get_Use3DAccuracy(CAT_VARIANT_BOOL & oUse3DAccuracy) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,61,&_Trac2,&oUse3DAccuracy); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Use3DAccuracy(oUse3DAccuracy); \
   ExitAfterCall(this,61,_Trac2,&_ret_arg,&oUse3DAccuracy); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAPageSetup##classe::put_Use3DAccuracy(CAT_VARIANT_BOOL iUse3DAccuracy) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,62,&_Trac2,&iUse3DAccuracy); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_Use3DAccuracy(iUse3DAccuracy); \
   ExitAfterCall(this,62,_Trac2,&_ret_arg,&iUse3DAccuracy); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAPageSetup##classe::get_Gamma(float & oGamma) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,63,&_Trac2,&oGamma); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Gamma(oGamma); \
   ExitAfterCall(this,63,_Trac2,&_ret_arg,&oGamma); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAPageSetup##classe::put_Gamma(float iGamma) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,64,&_Trac2,&iGamma); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_Gamma(iGamma); \
   ExitAfterCall(this,64,_Trac2,&_ret_arg,&iGamma); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAPageSetup##classe::get_LogoVisibility(CAT_VARIANT_BOOL & oLogoVisibility) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,65,&_Trac2,&oLogoVisibility); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_LogoVisibility(oLogoVisibility); \
   ExitAfterCall(this,65,_Trac2,&_ret_arg,&oLogoVisibility); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAPageSetup##classe::put_LogoVisibility(CAT_VARIANT_BOOL iLogoVisibility) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,66,&_Trac2,&iLogoVisibility); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_LogoVisibility(iLogoVisibility); \
   ExitAfterCall(this,66,_Trac2,&_ret_arg,&iLogoVisibility); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAPageSetup##classe::get_Application(CATIAApplication *& oApplication) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,67,&_Trac2,&oApplication); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Application(oApplication); \
   ExitAfterCall(this,67,_Trac2,&_ret_arg,&oApplication); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAPageSetup##classe::get_Parent(CATBaseDispatch *& oParent) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,68,&_Trac2,&oParent); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Parent(oParent); \
   ExitAfterCall(this,68,_Trac2,&_ret_arg,&oParent); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAPageSetup##classe::get_Name(CATBSTR & oNameBSTR) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,69,&_Trac2,&oNameBSTR); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Name(oNameBSTR); \
   ExitAfterCall(this,69,_Trac2,&_ret_arg,&oNameBSTR); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAPageSetup##classe::put_Name(const CATBSTR & iNameBSTR) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,70,&_Trac2,&iNameBSTR); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_Name(iNameBSTR); \
   ExitAfterCall(this,70,_Trac2,&_ret_arg,&iNameBSTR); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAPageSetup##classe::GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,71,&_Trac2,&IDName,&RealObj); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetItem(IDName,RealObj); \
   ExitAfterCall(this,71,_Trac2,&_ret_arg,&IDName,&RealObj); \
   return(_ret_arg); \
} \



/* Macro used to link an implementation with an interface */
#define TIE_CATIAPageSetup(classe) \
 \
 \
declare_TIE_CATIAPageSetup(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIAPageSetup##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIAPageSetup,"CATIAPageSetup",CATIAPageSetup::MetaObject(),classe::MetaObject(),TIE); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIAPageSetup(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIECreation(CATIAPageSetup, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIAPageSetup##classe(classe::MetaObject(),CATIAPageSetup::MetaObject(),(void *)CreateTIECATIAPageSetup##classe)



/* Macro used to link an implementation with an interface */
/* This TIE is chained on the implementation object */
#define TIEchain_CATIAPageSetup(classe) \
 \
 \
declare_TIE_CATIAPageSetup(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIAPageSetup##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIAPageSetup,"CATIAPageSetup",CATIAPageSetup::MetaObject(),classe::MetaObject(),TIEchain); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIAPageSetup(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIEchainCreation(CATIAPageSetup, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIAPageSetup##classe(classe::MetaObject(),CATIAPageSetup::MetaObject(),(void *)CreateTIECATIAPageSetup##classe)


/* Macro to switch between BOA and TIE at build time */ 
#ifdef CATSYS_BOA_IS_TIE
#define BOA_CATIAPageSetup(classe) TIE_CATIAPageSetup(classe)
#else
#define BOA_CATIAPageSetup(classe) CATImplementBOA(CATIAPageSetup, classe)
#endif

#endif
