#ifndef __TIE_CATIAGenerativeViewBehavior
#define __TIE_CATIAGenerativeViewBehavior

#include <string.h>
#include "CATBaseUnknown.h"
#include "CATMetaClass.h"
#include "CATMacForTie.h"
#include "CATExitJournal.h"
#include "CATIAGenerativeViewBehavior.h"
#include "JS0DSPA.h"


#ifdef _WINDOWS_SOURCE
#define Exported __declspec(dllexport)
#define Imported __declspec(dllimport)
#else
#define Exported 
#define Imported 
#endif


/* To link an implementation with the interface CATIAGenerativeViewBehavior */
#define declare_TIE_CATIAGenerativeViewBehavior(classe) \
 \
 \
class TIECATIAGenerativeViewBehavior##classe : public CATIAGenerativeViewBehavior \
{ \
   private: \
      CATDeclareCommonTIEMembers \
   public: \
      CATDeclareTIEMethods(CATIAGenerativeViewBehavior, classe) \
      CATDeclareIUnknownMethodsForCATBaseUnknownTIE \
      CATDeclareIDispatchMethodsForCATBaseUnknownTIE \
      CATDeclareCATBaseUnknownMethodsForTIE \
      virtual HRESULT __stdcall get_Document(CATIABase *& oDocument); \
      virtual HRESULT __stdcall put_Document(CATIABase * iDocument); \
      virtual HRESULT __stdcall get_HiddenLineMode(CatHiddenLineMode & oMode); \
      virtual HRESULT __stdcall put_HiddenLineMode(CatHiddenLineMode iMode); \
      virtual HRESULT __stdcall get_FilletRepresentation(CatFilletRepresentation & oRep); \
      virtual HRESULT __stdcall put_FilletRepresentation(CatFilletRepresentation iRep); \
      virtual HRESULT __stdcall SetProjectionPlane(double iX1, double iY1, double iZ1, double iX2, double iY2, double iZ2); \
      virtual HRESULT __stdcall GetProjectionPlane(double & oX1, double & oY1, double & oZ1, double & oX2, double & oY2, double & oZ2); \
      virtual HRESULT __stdcall GetProjectionPlaneNormal(double & oXNormal, double & oYNormal, double & oZNormal); \
      virtual HRESULT __stdcall DefineFrontView(double iX1, double iY1, double iZ1, double iX2, double iY2, double iZ2); \
      virtual HRESULT __stdcall DefineIsometricView(double iX1, double iY1, double iZ1, double iX2, double iY2, double iZ2); \
      virtual HRESULT __stdcall DefineProjectionView(CATIAGenerativeViewBehavior * iParentViewGenerativeBehavior, CatProjViewType iType); \
      virtual HRESULT __stdcall DefineSectionView(const CATSafeArrayVariant & iProfile, const CATBSTR & iSectionType, const CATBSTR & iProfileType, short iSideToDraw, CATIAGenerativeViewBehavior * iParentViewGenerativeBehavior); \
      virtual HRESULT __stdcall DefineCircularDetailView(double iXCenter, double iYCenter, double iRadius, CATIAGenerativeViewBehavior * iParentViewGenerativeBehavior); \
      virtual HRESULT __stdcall DefinePolygonalDetailView(const CATSafeArrayVariant & iProfile, CATIAGenerativeViewBehavior * iParentViewGenerativeBehavior); \
      virtual HRESULT __stdcall DefineAuxiliaryView(double iXStartPoint, double iYStartPoint, double iXEndPoint, double YEndPoint, short iSideToDraw, CATIAGenerativeViewBehavior * iParentViewGenerativeBehavior); \
      virtual HRESULT __stdcall DefineUnfoldedView(double iX1, double iY1, double iZ1, double iX2, double iY2, double iZ2); \
      virtual HRESULT __stdcall DefineBrokenView(const CATSafeArrayVariant & iBrokenLinesExtremities, double iXDirection, double iYDirection); \
      virtual HRESULT __stdcall DefineBox3DView(CATIABase * iBoxableObject); \
      virtual HRESULT __stdcall UnBreak(); \
      virtual HRESULT __stdcall UnClip(); \
      virtual HRESULT __stdcall UnBreakout(); \
      virtual HRESULT __stdcall UnBreakoutNum(short iBreakoutNumber); \
      virtual HRESULT __stdcall ApplyBreakoutTo(CATIAGenerativeViewBehavior * iParentView); \
      virtual HRESULT __stdcall get_ParentView(CATIADrawingView *& oParentView); \
      virtual HRESULT __stdcall Update(); \
      virtual HRESULT __stdcall ForceUpdate(); \
      virtual HRESULT __stdcall SetAxisSysteme(CATIABase * iProduct, CATIABase * iAxisSysteme); \
      virtual HRESULT __stdcall GetAxisSysteme(CATIABase *& oProduct, CATIABase *& oAxisSysteme); \
      virtual HRESULT __stdcall DefineBreakout(const CATSafeArrayVariant & iProfil, const CATSafeArrayVariant & iPlane1, const CATSafeArrayVariant & iPlane2); \
      virtual HRESULT __stdcall DefineCircularClippingView(double XCenter, double YCenter, double Radius); \
      virtual HRESULT __stdcall DefineCircularExactClippingView(double XCenter, double YCenter, double Radius); \
      virtual HRESULT __stdcall DefinePolygonalClippingView(const CATSafeArrayVariant & profil); \
      virtual HRESULT __stdcall DefinePolygonalExactClippingView(const CATSafeArrayVariant & profil); \
      virtual HRESULT __stdcall DefineStandAloneSection(const CATSafeArrayVariant & profil, const CATBSTR & type_of_section, const CATBSTR & type_of_profile, const CATSafeArrayVariant & iPlane, short iSide); \
      virtual HRESULT __stdcall get_ColorInheritanceMode(Cat3DColorInheritanceMode & oMode); \
      virtual HRESULT __stdcall put_ColorInheritanceMode(Cat3DColorInheritanceMode iMode); \
      virtual HRESULT __stdcall get_PointsProjectionMode(CatPointsProjectionMode & oMode); \
      virtual HRESULT __stdcall put_PointsProjectionMode(CatPointsProjectionMode iMode); \
      virtual HRESULT __stdcall get_PointsSymbol(short & oSymbol); \
      virtual HRESULT __stdcall put_PointsSymbol(short iSymbol); \
      virtual HRESULT __stdcall DefineTPSSectionView(const CATSafeArrayVariant & iProfile, const CATBSTR & iSectionType, const CATBSTR & iProfileType, short iSideToDraw, CATIAGenerativeViewBehavior * iParentViewGenerativeBehavior); \
      virtual HRESULT __stdcall get_RepresentationMode(CatRepresentationMode & oMode); \
      virtual HRESULT __stdcall put_RepresentationMode(CatRepresentationMode iMode); \
      virtual HRESULT __stdcall SetGPSName(const CATBSTR & iGPSName); \
      virtual HRESULT __stdcall GetGPSName(CATBSTR & ioGPSName); \
      virtual HRESULT __stdcall get_ImageViewMode(CatImageViewMode & oMode); \
      virtual HRESULT __stdcall put_ImageViewMode(CatImageViewMode iMode); \
      virtual HRESULT __stdcall get_LimitBoundingBox(double & oMode); \
      virtual HRESULT __stdcall put_LimitBoundingBox(double iMode); \
};



#define ENVTIEdeclare_CATIAGenerativeViewBehavior(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
virtual HRESULT __stdcall get_Document(CATIABase *& oDocument); \
virtual HRESULT __stdcall put_Document(CATIABase * iDocument); \
virtual HRESULT __stdcall get_HiddenLineMode(CatHiddenLineMode & oMode); \
virtual HRESULT __stdcall put_HiddenLineMode(CatHiddenLineMode iMode); \
virtual HRESULT __stdcall get_FilletRepresentation(CatFilletRepresentation & oRep); \
virtual HRESULT __stdcall put_FilletRepresentation(CatFilletRepresentation iRep); \
virtual HRESULT __stdcall SetProjectionPlane(double iX1, double iY1, double iZ1, double iX2, double iY2, double iZ2); \
virtual HRESULT __stdcall GetProjectionPlane(double & oX1, double & oY1, double & oZ1, double & oX2, double & oY2, double & oZ2); \
virtual HRESULT __stdcall GetProjectionPlaneNormal(double & oXNormal, double & oYNormal, double & oZNormal); \
virtual HRESULT __stdcall DefineFrontView(double iX1, double iY1, double iZ1, double iX2, double iY2, double iZ2); \
virtual HRESULT __stdcall DefineIsometricView(double iX1, double iY1, double iZ1, double iX2, double iY2, double iZ2); \
virtual HRESULT __stdcall DefineProjectionView(CATIAGenerativeViewBehavior * iParentViewGenerativeBehavior, CatProjViewType iType); \
virtual HRESULT __stdcall DefineSectionView(const CATSafeArrayVariant & iProfile, const CATBSTR & iSectionType, const CATBSTR & iProfileType, short iSideToDraw, CATIAGenerativeViewBehavior * iParentViewGenerativeBehavior); \
virtual HRESULT __stdcall DefineCircularDetailView(double iXCenter, double iYCenter, double iRadius, CATIAGenerativeViewBehavior * iParentViewGenerativeBehavior); \
virtual HRESULT __stdcall DefinePolygonalDetailView(const CATSafeArrayVariant & iProfile, CATIAGenerativeViewBehavior * iParentViewGenerativeBehavior); \
virtual HRESULT __stdcall DefineAuxiliaryView(double iXStartPoint, double iYStartPoint, double iXEndPoint, double YEndPoint, short iSideToDraw, CATIAGenerativeViewBehavior * iParentViewGenerativeBehavior); \
virtual HRESULT __stdcall DefineUnfoldedView(double iX1, double iY1, double iZ1, double iX2, double iY2, double iZ2); \
virtual HRESULT __stdcall DefineBrokenView(const CATSafeArrayVariant & iBrokenLinesExtremities, double iXDirection, double iYDirection); \
virtual HRESULT __stdcall DefineBox3DView(CATIABase * iBoxableObject); \
virtual HRESULT __stdcall UnBreak(); \
virtual HRESULT __stdcall UnClip(); \
virtual HRESULT __stdcall UnBreakout(); \
virtual HRESULT __stdcall UnBreakoutNum(short iBreakoutNumber); \
virtual HRESULT __stdcall ApplyBreakoutTo(CATIAGenerativeViewBehavior * iParentView); \
virtual HRESULT __stdcall get_ParentView(CATIADrawingView *& oParentView); \
virtual HRESULT __stdcall Update(); \
virtual HRESULT __stdcall ForceUpdate(); \
virtual HRESULT __stdcall SetAxisSysteme(CATIABase * iProduct, CATIABase * iAxisSysteme); \
virtual HRESULT __stdcall GetAxisSysteme(CATIABase *& oProduct, CATIABase *& oAxisSysteme); \
virtual HRESULT __stdcall DefineBreakout(const CATSafeArrayVariant & iProfil, const CATSafeArrayVariant & iPlane1, const CATSafeArrayVariant & iPlane2); \
virtual HRESULT __stdcall DefineCircularClippingView(double XCenter, double YCenter, double Radius); \
virtual HRESULT __stdcall DefineCircularExactClippingView(double XCenter, double YCenter, double Radius); \
virtual HRESULT __stdcall DefinePolygonalClippingView(const CATSafeArrayVariant & profil); \
virtual HRESULT __stdcall DefinePolygonalExactClippingView(const CATSafeArrayVariant & profil); \
virtual HRESULT __stdcall DefineStandAloneSection(const CATSafeArrayVariant & profil, const CATBSTR & type_of_section, const CATBSTR & type_of_profile, const CATSafeArrayVariant & iPlane, short iSide); \
virtual HRESULT __stdcall get_ColorInheritanceMode(Cat3DColorInheritanceMode & oMode); \
virtual HRESULT __stdcall put_ColorInheritanceMode(Cat3DColorInheritanceMode iMode); \
virtual HRESULT __stdcall get_PointsProjectionMode(CatPointsProjectionMode & oMode); \
virtual HRESULT __stdcall put_PointsProjectionMode(CatPointsProjectionMode iMode); \
virtual HRESULT __stdcall get_PointsSymbol(short & oSymbol); \
virtual HRESULT __stdcall put_PointsSymbol(short iSymbol); \
virtual HRESULT __stdcall DefineTPSSectionView(const CATSafeArrayVariant & iProfile, const CATBSTR & iSectionType, const CATBSTR & iProfileType, short iSideToDraw, CATIAGenerativeViewBehavior * iParentViewGenerativeBehavior); \
virtual HRESULT __stdcall get_RepresentationMode(CatRepresentationMode & oMode); \
virtual HRESULT __stdcall put_RepresentationMode(CatRepresentationMode iMode); \
virtual HRESULT __stdcall SetGPSName(const CATBSTR & iGPSName); \
virtual HRESULT __stdcall GetGPSName(CATBSTR & ioGPSName); \
virtual HRESULT __stdcall get_ImageViewMode(CatImageViewMode & oMode); \
virtual HRESULT __stdcall put_ImageViewMode(CatImageViewMode iMode); \
virtual HRESULT __stdcall get_LimitBoundingBox(double & oMode); \
virtual HRESULT __stdcall put_LimitBoundingBox(double iMode); \


#define ENVTIEdefine_CATIAGenerativeViewBehavior(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
HRESULT __stdcall  ENVTIEName::get_Document(CATIABase *& oDocument) \
{ \
return (ENVTIECALL(CATIAGenerativeViewBehavior,ENVTIETypeLetter,ENVTIELetter)get_Document(oDocument)); \
} \
HRESULT __stdcall  ENVTIEName::put_Document(CATIABase * iDocument) \
{ \
return (ENVTIECALL(CATIAGenerativeViewBehavior,ENVTIETypeLetter,ENVTIELetter)put_Document(iDocument)); \
} \
HRESULT __stdcall  ENVTIEName::get_HiddenLineMode(CatHiddenLineMode & oMode) \
{ \
return (ENVTIECALL(CATIAGenerativeViewBehavior,ENVTIETypeLetter,ENVTIELetter)get_HiddenLineMode(oMode)); \
} \
HRESULT __stdcall  ENVTIEName::put_HiddenLineMode(CatHiddenLineMode iMode) \
{ \
return (ENVTIECALL(CATIAGenerativeViewBehavior,ENVTIETypeLetter,ENVTIELetter)put_HiddenLineMode(iMode)); \
} \
HRESULT __stdcall  ENVTIEName::get_FilletRepresentation(CatFilletRepresentation & oRep) \
{ \
return (ENVTIECALL(CATIAGenerativeViewBehavior,ENVTIETypeLetter,ENVTIELetter)get_FilletRepresentation(oRep)); \
} \
HRESULT __stdcall  ENVTIEName::put_FilletRepresentation(CatFilletRepresentation iRep) \
{ \
return (ENVTIECALL(CATIAGenerativeViewBehavior,ENVTIETypeLetter,ENVTIELetter)put_FilletRepresentation(iRep)); \
} \
HRESULT __stdcall  ENVTIEName::SetProjectionPlane(double iX1, double iY1, double iZ1, double iX2, double iY2, double iZ2) \
{ \
return (ENVTIECALL(CATIAGenerativeViewBehavior,ENVTIETypeLetter,ENVTIELetter)SetProjectionPlane(iX1,iY1,iZ1,iX2,iY2,iZ2)); \
} \
HRESULT __stdcall  ENVTIEName::GetProjectionPlane(double & oX1, double & oY1, double & oZ1, double & oX2, double & oY2, double & oZ2) \
{ \
return (ENVTIECALL(CATIAGenerativeViewBehavior,ENVTIETypeLetter,ENVTIELetter)GetProjectionPlane(oX1,oY1,oZ1,oX2,oY2,oZ2)); \
} \
HRESULT __stdcall  ENVTIEName::GetProjectionPlaneNormal(double & oXNormal, double & oYNormal, double & oZNormal) \
{ \
return (ENVTIECALL(CATIAGenerativeViewBehavior,ENVTIETypeLetter,ENVTIELetter)GetProjectionPlaneNormal(oXNormal,oYNormal,oZNormal)); \
} \
HRESULT __stdcall  ENVTIEName::DefineFrontView(double iX1, double iY1, double iZ1, double iX2, double iY2, double iZ2) \
{ \
return (ENVTIECALL(CATIAGenerativeViewBehavior,ENVTIETypeLetter,ENVTIELetter)DefineFrontView(iX1,iY1,iZ1,iX2,iY2,iZ2)); \
} \
HRESULT __stdcall  ENVTIEName::DefineIsometricView(double iX1, double iY1, double iZ1, double iX2, double iY2, double iZ2) \
{ \
return (ENVTIECALL(CATIAGenerativeViewBehavior,ENVTIETypeLetter,ENVTIELetter)DefineIsometricView(iX1,iY1,iZ1,iX2,iY2,iZ2)); \
} \
HRESULT __stdcall  ENVTIEName::DefineProjectionView(CATIAGenerativeViewBehavior * iParentViewGenerativeBehavior, CatProjViewType iType) \
{ \
return (ENVTIECALL(CATIAGenerativeViewBehavior,ENVTIETypeLetter,ENVTIELetter)DefineProjectionView(iParentViewGenerativeBehavior,iType)); \
} \
HRESULT __stdcall  ENVTIEName::DefineSectionView(const CATSafeArrayVariant & iProfile, const CATBSTR & iSectionType, const CATBSTR & iProfileType, short iSideToDraw, CATIAGenerativeViewBehavior * iParentViewGenerativeBehavior) \
{ \
return (ENVTIECALL(CATIAGenerativeViewBehavior,ENVTIETypeLetter,ENVTIELetter)DefineSectionView(iProfile,iSectionType,iProfileType,iSideToDraw,iParentViewGenerativeBehavior)); \
} \
HRESULT __stdcall  ENVTIEName::DefineCircularDetailView(double iXCenter, double iYCenter, double iRadius, CATIAGenerativeViewBehavior * iParentViewGenerativeBehavior) \
{ \
return (ENVTIECALL(CATIAGenerativeViewBehavior,ENVTIETypeLetter,ENVTIELetter)DefineCircularDetailView(iXCenter,iYCenter,iRadius,iParentViewGenerativeBehavior)); \
} \
HRESULT __stdcall  ENVTIEName::DefinePolygonalDetailView(const CATSafeArrayVariant & iProfile, CATIAGenerativeViewBehavior * iParentViewGenerativeBehavior) \
{ \
return (ENVTIECALL(CATIAGenerativeViewBehavior,ENVTIETypeLetter,ENVTIELetter)DefinePolygonalDetailView(iProfile,iParentViewGenerativeBehavior)); \
} \
HRESULT __stdcall  ENVTIEName::DefineAuxiliaryView(double iXStartPoint, double iYStartPoint, double iXEndPoint, double YEndPoint, short iSideToDraw, CATIAGenerativeViewBehavior * iParentViewGenerativeBehavior) \
{ \
return (ENVTIECALL(CATIAGenerativeViewBehavior,ENVTIETypeLetter,ENVTIELetter)DefineAuxiliaryView(iXStartPoint,iYStartPoint,iXEndPoint,YEndPoint,iSideToDraw,iParentViewGenerativeBehavior)); \
} \
HRESULT __stdcall  ENVTIEName::DefineUnfoldedView(double iX1, double iY1, double iZ1, double iX2, double iY2, double iZ2) \
{ \
return (ENVTIECALL(CATIAGenerativeViewBehavior,ENVTIETypeLetter,ENVTIELetter)DefineUnfoldedView(iX1,iY1,iZ1,iX2,iY2,iZ2)); \
} \
HRESULT __stdcall  ENVTIEName::DefineBrokenView(const CATSafeArrayVariant & iBrokenLinesExtremities, double iXDirection, double iYDirection) \
{ \
return (ENVTIECALL(CATIAGenerativeViewBehavior,ENVTIETypeLetter,ENVTIELetter)DefineBrokenView(iBrokenLinesExtremities,iXDirection,iYDirection)); \
} \
HRESULT __stdcall  ENVTIEName::DefineBox3DView(CATIABase * iBoxableObject) \
{ \
return (ENVTIECALL(CATIAGenerativeViewBehavior,ENVTIETypeLetter,ENVTIELetter)DefineBox3DView(iBoxableObject)); \
} \
HRESULT __stdcall  ENVTIEName::UnBreak() \
{ \
return (ENVTIECALL(CATIAGenerativeViewBehavior,ENVTIETypeLetter,ENVTIELetter)UnBreak()); \
} \
HRESULT __stdcall  ENVTIEName::UnClip() \
{ \
return (ENVTIECALL(CATIAGenerativeViewBehavior,ENVTIETypeLetter,ENVTIELetter)UnClip()); \
} \
HRESULT __stdcall  ENVTIEName::UnBreakout() \
{ \
return (ENVTIECALL(CATIAGenerativeViewBehavior,ENVTIETypeLetter,ENVTIELetter)UnBreakout()); \
} \
HRESULT __stdcall  ENVTIEName::UnBreakoutNum(short iBreakoutNumber) \
{ \
return (ENVTIECALL(CATIAGenerativeViewBehavior,ENVTIETypeLetter,ENVTIELetter)UnBreakoutNum(iBreakoutNumber)); \
} \
HRESULT __stdcall  ENVTIEName::ApplyBreakoutTo(CATIAGenerativeViewBehavior * iParentView) \
{ \
return (ENVTIECALL(CATIAGenerativeViewBehavior,ENVTIETypeLetter,ENVTIELetter)ApplyBreakoutTo(iParentView)); \
} \
HRESULT __stdcall  ENVTIEName::get_ParentView(CATIADrawingView *& oParentView) \
{ \
return (ENVTIECALL(CATIAGenerativeViewBehavior,ENVTIETypeLetter,ENVTIELetter)get_ParentView(oParentView)); \
} \
HRESULT __stdcall  ENVTIEName::Update() \
{ \
return (ENVTIECALL(CATIAGenerativeViewBehavior,ENVTIETypeLetter,ENVTIELetter)Update()); \
} \
HRESULT __stdcall  ENVTIEName::ForceUpdate() \
{ \
return (ENVTIECALL(CATIAGenerativeViewBehavior,ENVTIETypeLetter,ENVTIELetter)ForceUpdate()); \
} \
HRESULT __stdcall  ENVTIEName::SetAxisSysteme(CATIABase * iProduct, CATIABase * iAxisSysteme) \
{ \
return (ENVTIECALL(CATIAGenerativeViewBehavior,ENVTIETypeLetter,ENVTIELetter)SetAxisSysteme(iProduct,iAxisSysteme)); \
} \
HRESULT __stdcall  ENVTIEName::GetAxisSysteme(CATIABase *& oProduct, CATIABase *& oAxisSysteme) \
{ \
return (ENVTIECALL(CATIAGenerativeViewBehavior,ENVTIETypeLetter,ENVTIELetter)GetAxisSysteme(oProduct,oAxisSysteme)); \
} \
HRESULT __stdcall  ENVTIEName::DefineBreakout(const CATSafeArrayVariant & iProfil, const CATSafeArrayVariant & iPlane1, const CATSafeArrayVariant & iPlane2) \
{ \
return (ENVTIECALL(CATIAGenerativeViewBehavior,ENVTIETypeLetter,ENVTIELetter)DefineBreakout(iProfil,iPlane1,iPlane2)); \
} \
HRESULT __stdcall  ENVTIEName::DefineCircularClippingView(double XCenter, double YCenter, double Radius) \
{ \
return (ENVTIECALL(CATIAGenerativeViewBehavior,ENVTIETypeLetter,ENVTIELetter)DefineCircularClippingView(XCenter,YCenter,Radius)); \
} \
HRESULT __stdcall  ENVTIEName::DefineCircularExactClippingView(double XCenter, double YCenter, double Radius) \
{ \
return (ENVTIECALL(CATIAGenerativeViewBehavior,ENVTIETypeLetter,ENVTIELetter)DefineCircularExactClippingView(XCenter,YCenter,Radius)); \
} \
HRESULT __stdcall  ENVTIEName::DefinePolygonalClippingView(const CATSafeArrayVariant & profil) \
{ \
return (ENVTIECALL(CATIAGenerativeViewBehavior,ENVTIETypeLetter,ENVTIELetter)DefinePolygonalClippingView(profil)); \
} \
HRESULT __stdcall  ENVTIEName::DefinePolygonalExactClippingView(const CATSafeArrayVariant & profil) \
{ \
return (ENVTIECALL(CATIAGenerativeViewBehavior,ENVTIETypeLetter,ENVTIELetter)DefinePolygonalExactClippingView(profil)); \
} \
HRESULT __stdcall  ENVTIEName::DefineStandAloneSection(const CATSafeArrayVariant & profil, const CATBSTR & type_of_section, const CATBSTR & type_of_profile, const CATSafeArrayVariant & iPlane, short iSide) \
{ \
return (ENVTIECALL(CATIAGenerativeViewBehavior,ENVTIETypeLetter,ENVTIELetter)DefineStandAloneSection(profil,type_of_section,type_of_profile,iPlane,iSide)); \
} \
HRESULT __stdcall  ENVTIEName::get_ColorInheritanceMode(Cat3DColorInheritanceMode & oMode) \
{ \
return (ENVTIECALL(CATIAGenerativeViewBehavior,ENVTIETypeLetter,ENVTIELetter)get_ColorInheritanceMode(oMode)); \
} \
HRESULT __stdcall  ENVTIEName::put_ColorInheritanceMode(Cat3DColorInheritanceMode iMode) \
{ \
return (ENVTIECALL(CATIAGenerativeViewBehavior,ENVTIETypeLetter,ENVTIELetter)put_ColorInheritanceMode(iMode)); \
} \
HRESULT __stdcall  ENVTIEName::get_PointsProjectionMode(CatPointsProjectionMode & oMode) \
{ \
return (ENVTIECALL(CATIAGenerativeViewBehavior,ENVTIETypeLetter,ENVTIELetter)get_PointsProjectionMode(oMode)); \
} \
HRESULT __stdcall  ENVTIEName::put_PointsProjectionMode(CatPointsProjectionMode iMode) \
{ \
return (ENVTIECALL(CATIAGenerativeViewBehavior,ENVTIETypeLetter,ENVTIELetter)put_PointsProjectionMode(iMode)); \
} \
HRESULT __stdcall  ENVTIEName::get_PointsSymbol(short & oSymbol) \
{ \
return (ENVTIECALL(CATIAGenerativeViewBehavior,ENVTIETypeLetter,ENVTIELetter)get_PointsSymbol(oSymbol)); \
} \
HRESULT __stdcall  ENVTIEName::put_PointsSymbol(short iSymbol) \
{ \
return (ENVTIECALL(CATIAGenerativeViewBehavior,ENVTIETypeLetter,ENVTIELetter)put_PointsSymbol(iSymbol)); \
} \
HRESULT __stdcall  ENVTIEName::DefineTPSSectionView(const CATSafeArrayVariant & iProfile, const CATBSTR & iSectionType, const CATBSTR & iProfileType, short iSideToDraw, CATIAGenerativeViewBehavior * iParentViewGenerativeBehavior) \
{ \
return (ENVTIECALL(CATIAGenerativeViewBehavior,ENVTIETypeLetter,ENVTIELetter)DefineTPSSectionView(iProfile,iSectionType,iProfileType,iSideToDraw,iParentViewGenerativeBehavior)); \
} \
HRESULT __stdcall  ENVTIEName::get_RepresentationMode(CatRepresentationMode & oMode) \
{ \
return (ENVTIECALL(CATIAGenerativeViewBehavior,ENVTIETypeLetter,ENVTIELetter)get_RepresentationMode(oMode)); \
} \
HRESULT __stdcall  ENVTIEName::put_RepresentationMode(CatRepresentationMode iMode) \
{ \
return (ENVTIECALL(CATIAGenerativeViewBehavior,ENVTIETypeLetter,ENVTIELetter)put_RepresentationMode(iMode)); \
} \
HRESULT __stdcall  ENVTIEName::SetGPSName(const CATBSTR & iGPSName) \
{ \
return (ENVTIECALL(CATIAGenerativeViewBehavior,ENVTIETypeLetter,ENVTIELetter)SetGPSName(iGPSName)); \
} \
HRESULT __stdcall  ENVTIEName::GetGPSName(CATBSTR & ioGPSName) \
{ \
return (ENVTIECALL(CATIAGenerativeViewBehavior,ENVTIETypeLetter,ENVTIELetter)GetGPSName(ioGPSName)); \
} \
HRESULT __stdcall  ENVTIEName::get_ImageViewMode(CatImageViewMode & oMode) \
{ \
return (ENVTIECALL(CATIAGenerativeViewBehavior,ENVTIETypeLetter,ENVTIELetter)get_ImageViewMode(oMode)); \
} \
HRESULT __stdcall  ENVTIEName::put_ImageViewMode(CatImageViewMode iMode) \
{ \
return (ENVTIECALL(CATIAGenerativeViewBehavior,ENVTIETypeLetter,ENVTIELetter)put_ImageViewMode(iMode)); \
} \
HRESULT __stdcall  ENVTIEName::get_LimitBoundingBox(double & oMode) \
{ \
return (ENVTIECALL(CATIAGenerativeViewBehavior,ENVTIETypeLetter,ENVTIELetter)get_LimitBoundingBox(oMode)); \
} \
HRESULT __stdcall  ENVTIEName::put_LimitBoundingBox(double iMode) \
{ \
return (ENVTIECALL(CATIAGenerativeViewBehavior,ENVTIETypeLetter,ENVTIELetter)put_LimitBoundingBox(iMode)); \
} \


/* Name of the TIE class */
#define class_TIE_CATIAGenerativeViewBehavior(classe)    TIECATIAGenerativeViewBehavior##classe


/* Common methods inside a TIE */
#define common_TIE_CATIAGenerativeViewBehavior(classe) \
 \
 \
/* Static initialization */ \
CATDefineCommonTIEMembers(CATIAGenerativeViewBehavior, classe) \
 \
 \
CATImplementTIEMethods(CATIAGenerativeViewBehavior, classe) \
CATImplementIUnknownMethodsForCATBaseUnknownTIE(CATIAGenerativeViewBehavior, classe, 2) \
CATImplementIDispatchMethodsForCATBaseUnknownTIE(CATIAGenerativeViewBehavior, classe) \
CATImplementCATBaseUnknownMethodsForTIE(CATIAGenerativeViewBehavior, classe) \
 \
HRESULT __stdcall  TIECATIAGenerativeViewBehavior##classe::get_Document(CATIABase *& oDocument) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,1,&_Trac2,&oDocument); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Document(oDocument); \
   ExitAfterCall(this,1,_Trac2,&_ret_arg,&oDocument); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAGenerativeViewBehavior##classe::put_Document(CATIABase * iDocument) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,2,&_Trac2,&iDocument); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_Document(iDocument); \
   ExitAfterCall(this,2,_Trac2,&_ret_arg,&iDocument); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAGenerativeViewBehavior##classe::get_HiddenLineMode(CatHiddenLineMode & oMode) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,3,&_Trac2,&oMode); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_HiddenLineMode(oMode); \
   ExitAfterCall(this,3,_Trac2,&_ret_arg,&oMode); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAGenerativeViewBehavior##classe::put_HiddenLineMode(CatHiddenLineMode iMode) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,4,&_Trac2,&iMode); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_HiddenLineMode(iMode); \
   ExitAfterCall(this,4,_Trac2,&_ret_arg,&iMode); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAGenerativeViewBehavior##classe::get_FilletRepresentation(CatFilletRepresentation & oRep) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,5,&_Trac2,&oRep); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_FilletRepresentation(oRep); \
   ExitAfterCall(this,5,_Trac2,&_ret_arg,&oRep); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAGenerativeViewBehavior##classe::put_FilletRepresentation(CatFilletRepresentation iRep) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,6,&_Trac2,&iRep); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_FilletRepresentation(iRep); \
   ExitAfterCall(this,6,_Trac2,&_ret_arg,&iRep); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAGenerativeViewBehavior##classe::SetProjectionPlane(double iX1, double iY1, double iZ1, double iX2, double iY2, double iZ2) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,7,&_Trac2,&iX1,&iY1,&iZ1,&iX2,&iY2,&iZ2); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetProjectionPlane(iX1,iY1,iZ1,iX2,iY2,iZ2); \
   ExitAfterCall(this,7,_Trac2,&_ret_arg,&iX1,&iY1,&iZ1,&iX2,&iY2,&iZ2); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAGenerativeViewBehavior##classe::GetProjectionPlane(double & oX1, double & oY1, double & oZ1, double & oX2, double & oY2, double & oZ2) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,8,&_Trac2,&oX1,&oY1,&oZ1,&oX2,&oY2,&oZ2); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetProjectionPlane(oX1,oY1,oZ1,oX2,oY2,oZ2); \
   ExitAfterCall(this,8,_Trac2,&_ret_arg,&oX1,&oY1,&oZ1,&oX2,&oY2,&oZ2); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAGenerativeViewBehavior##classe::GetProjectionPlaneNormal(double & oXNormal, double & oYNormal, double & oZNormal) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,9,&_Trac2,&oXNormal,&oYNormal,&oZNormal); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetProjectionPlaneNormal(oXNormal,oYNormal,oZNormal); \
   ExitAfterCall(this,9,_Trac2,&_ret_arg,&oXNormal,&oYNormal,&oZNormal); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAGenerativeViewBehavior##classe::DefineFrontView(double iX1, double iY1, double iZ1, double iX2, double iY2, double iZ2) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,10,&_Trac2,&iX1,&iY1,&iZ1,&iX2,&iY2,&iZ2); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->DefineFrontView(iX1,iY1,iZ1,iX2,iY2,iZ2); \
   ExitAfterCall(this,10,_Trac2,&_ret_arg,&iX1,&iY1,&iZ1,&iX2,&iY2,&iZ2); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAGenerativeViewBehavior##classe::DefineIsometricView(double iX1, double iY1, double iZ1, double iX2, double iY2, double iZ2) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,11,&_Trac2,&iX1,&iY1,&iZ1,&iX2,&iY2,&iZ2); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->DefineIsometricView(iX1,iY1,iZ1,iX2,iY2,iZ2); \
   ExitAfterCall(this,11,_Trac2,&_ret_arg,&iX1,&iY1,&iZ1,&iX2,&iY2,&iZ2); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAGenerativeViewBehavior##classe::DefineProjectionView(CATIAGenerativeViewBehavior * iParentViewGenerativeBehavior, CatProjViewType iType) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,12,&_Trac2,&iParentViewGenerativeBehavior,&iType); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->DefineProjectionView(iParentViewGenerativeBehavior,iType); \
   ExitAfterCall(this,12,_Trac2,&_ret_arg,&iParentViewGenerativeBehavior,&iType); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAGenerativeViewBehavior##classe::DefineSectionView(const CATSafeArrayVariant & iProfile, const CATBSTR & iSectionType, const CATBSTR & iProfileType, short iSideToDraw, CATIAGenerativeViewBehavior * iParentViewGenerativeBehavior) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,13,&_Trac2,&iProfile,&iSectionType,&iProfileType,&iSideToDraw,&iParentViewGenerativeBehavior); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->DefineSectionView(iProfile,iSectionType,iProfileType,iSideToDraw,iParentViewGenerativeBehavior); \
   ExitAfterCall(this,13,_Trac2,&_ret_arg,&iProfile,&iSectionType,&iProfileType,&iSideToDraw,&iParentViewGenerativeBehavior); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAGenerativeViewBehavior##classe::DefineCircularDetailView(double iXCenter, double iYCenter, double iRadius, CATIAGenerativeViewBehavior * iParentViewGenerativeBehavior) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,14,&_Trac2,&iXCenter,&iYCenter,&iRadius,&iParentViewGenerativeBehavior); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->DefineCircularDetailView(iXCenter,iYCenter,iRadius,iParentViewGenerativeBehavior); \
   ExitAfterCall(this,14,_Trac2,&_ret_arg,&iXCenter,&iYCenter,&iRadius,&iParentViewGenerativeBehavior); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAGenerativeViewBehavior##classe::DefinePolygonalDetailView(const CATSafeArrayVariant & iProfile, CATIAGenerativeViewBehavior * iParentViewGenerativeBehavior) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,15,&_Trac2,&iProfile,&iParentViewGenerativeBehavior); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->DefinePolygonalDetailView(iProfile,iParentViewGenerativeBehavior); \
   ExitAfterCall(this,15,_Trac2,&_ret_arg,&iProfile,&iParentViewGenerativeBehavior); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAGenerativeViewBehavior##classe::DefineAuxiliaryView(double iXStartPoint, double iYStartPoint, double iXEndPoint, double YEndPoint, short iSideToDraw, CATIAGenerativeViewBehavior * iParentViewGenerativeBehavior) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,16,&_Trac2,&iXStartPoint,&iYStartPoint,&iXEndPoint,&YEndPoint,&iSideToDraw,&iParentViewGenerativeBehavior); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->DefineAuxiliaryView(iXStartPoint,iYStartPoint,iXEndPoint,YEndPoint,iSideToDraw,iParentViewGenerativeBehavior); \
   ExitAfterCall(this,16,_Trac2,&_ret_arg,&iXStartPoint,&iYStartPoint,&iXEndPoint,&YEndPoint,&iSideToDraw,&iParentViewGenerativeBehavior); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAGenerativeViewBehavior##classe::DefineUnfoldedView(double iX1, double iY1, double iZ1, double iX2, double iY2, double iZ2) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,17,&_Trac2,&iX1,&iY1,&iZ1,&iX2,&iY2,&iZ2); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->DefineUnfoldedView(iX1,iY1,iZ1,iX2,iY2,iZ2); \
   ExitAfterCall(this,17,_Trac2,&_ret_arg,&iX1,&iY1,&iZ1,&iX2,&iY2,&iZ2); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAGenerativeViewBehavior##classe::DefineBrokenView(const CATSafeArrayVariant & iBrokenLinesExtremities, double iXDirection, double iYDirection) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,18,&_Trac2,&iBrokenLinesExtremities,&iXDirection,&iYDirection); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->DefineBrokenView(iBrokenLinesExtremities,iXDirection,iYDirection); \
   ExitAfterCall(this,18,_Trac2,&_ret_arg,&iBrokenLinesExtremities,&iXDirection,&iYDirection); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAGenerativeViewBehavior##classe::DefineBox3DView(CATIABase * iBoxableObject) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,19,&_Trac2,&iBoxableObject); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->DefineBox3DView(iBoxableObject); \
   ExitAfterCall(this,19,_Trac2,&_ret_arg,&iBoxableObject); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAGenerativeViewBehavior##classe::UnBreak() \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,20,&_Trac2); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->UnBreak(); \
   ExitAfterCall(this,20,_Trac2,&_ret_arg); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAGenerativeViewBehavior##classe::UnClip() \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,21,&_Trac2); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->UnClip(); \
   ExitAfterCall(this,21,_Trac2,&_ret_arg); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAGenerativeViewBehavior##classe::UnBreakout() \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,22,&_Trac2); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->UnBreakout(); \
   ExitAfterCall(this,22,_Trac2,&_ret_arg); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAGenerativeViewBehavior##classe::UnBreakoutNum(short iBreakoutNumber) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,23,&_Trac2,&iBreakoutNumber); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->UnBreakoutNum(iBreakoutNumber); \
   ExitAfterCall(this,23,_Trac2,&_ret_arg,&iBreakoutNumber); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAGenerativeViewBehavior##classe::ApplyBreakoutTo(CATIAGenerativeViewBehavior * iParentView) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,24,&_Trac2,&iParentView); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->ApplyBreakoutTo(iParentView); \
   ExitAfterCall(this,24,_Trac2,&_ret_arg,&iParentView); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAGenerativeViewBehavior##classe::get_ParentView(CATIADrawingView *& oParentView) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,25,&_Trac2,&oParentView); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_ParentView(oParentView); \
   ExitAfterCall(this,25,_Trac2,&_ret_arg,&oParentView); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAGenerativeViewBehavior##classe::Update() \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,26,&_Trac2); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->Update(); \
   ExitAfterCall(this,26,_Trac2,&_ret_arg); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAGenerativeViewBehavior##classe::ForceUpdate() \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,27,&_Trac2); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->ForceUpdate(); \
   ExitAfterCall(this,27,_Trac2,&_ret_arg); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAGenerativeViewBehavior##classe::SetAxisSysteme(CATIABase * iProduct, CATIABase * iAxisSysteme) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,28,&_Trac2,&iProduct,&iAxisSysteme); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetAxisSysteme(iProduct,iAxisSysteme); \
   ExitAfterCall(this,28,_Trac2,&_ret_arg,&iProduct,&iAxisSysteme); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAGenerativeViewBehavior##classe::GetAxisSysteme(CATIABase *& oProduct, CATIABase *& oAxisSysteme) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,29,&_Trac2,&oProduct,&oAxisSysteme); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetAxisSysteme(oProduct,oAxisSysteme); \
   ExitAfterCall(this,29,_Trac2,&_ret_arg,&oProduct,&oAxisSysteme); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAGenerativeViewBehavior##classe::DefineBreakout(const CATSafeArrayVariant & iProfil, const CATSafeArrayVariant & iPlane1, const CATSafeArrayVariant & iPlane2) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,30,&_Trac2,&iProfil,&iPlane1,&iPlane2); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->DefineBreakout(iProfil,iPlane1,iPlane2); \
   ExitAfterCall(this,30,_Trac2,&_ret_arg,&iProfil,&iPlane1,&iPlane2); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAGenerativeViewBehavior##classe::DefineCircularClippingView(double XCenter, double YCenter, double Radius) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,31,&_Trac2,&XCenter,&YCenter,&Radius); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->DefineCircularClippingView(XCenter,YCenter,Radius); \
   ExitAfterCall(this,31,_Trac2,&_ret_arg,&XCenter,&YCenter,&Radius); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAGenerativeViewBehavior##classe::DefineCircularExactClippingView(double XCenter, double YCenter, double Radius) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,32,&_Trac2,&XCenter,&YCenter,&Radius); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->DefineCircularExactClippingView(XCenter,YCenter,Radius); \
   ExitAfterCall(this,32,_Trac2,&_ret_arg,&XCenter,&YCenter,&Radius); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAGenerativeViewBehavior##classe::DefinePolygonalClippingView(const CATSafeArrayVariant & profil) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,33,&_Trac2,&profil); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->DefinePolygonalClippingView(profil); \
   ExitAfterCall(this,33,_Trac2,&_ret_arg,&profil); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAGenerativeViewBehavior##classe::DefinePolygonalExactClippingView(const CATSafeArrayVariant & profil) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,34,&_Trac2,&profil); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->DefinePolygonalExactClippingView(profil); \
   ExitAfterCall(this,34,_Trac2,&_ret_arg,&profil); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAGenerativeViewBehavior##classe::DefineStandAloneSection(const CATSafeArrayVariant & profil, const CATBSTR & type_of_section, const CATBSTR & type_of_profile, const CATSafeArrayVariant & iPlane, short iSide) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,35,&_Trac2,&profil,&type_of_section,&type_of_profile,&iPlane,&iSide); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->DefineStandAloneSection(profil,type_of_section,type_of_profile,iPlane,iSide); \
   ExitAfterCall(this,35,_Trac2,&_ret_arg,&profil,&type_of_section,&type_of_profile,&iPlane,&iSide); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAGenerativeViewBehavior##classe::get_ColorInheritanceMode(Cat3DColorInheritanceMode & oMode) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,36,&_Trac2,&oMode); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_ColorInheritanceMode(oMode); \
   ExitAfterCall(this,36,_Trac2,&_ret_arg,&oMode); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAGenerativeViewBehavior##classe::put_ColorInheritanceMode(Cat3DColorInheritanceMode iMode) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,37,&_Trac2,&iMode); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_ColorInheritanceMode(iMode); \
   ExitAfterCall(this,37,_Trac2,&_ret_arg,&iMode); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAGenerativeViewBehavior##classe::get_PointsProjectionMode(CatPointsProjectionMode & oMode) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,38,&_Trac2,&oMode); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_PointsProjectionMode(oMode); \
   ExitAfterCall(this,38,_Trac2,&_ret_arg,&oMode); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAGenerativeViewBehavior##classe::put_PointsProjectionMode(CatPointsProjectionMode iMode) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,39,&_Trac2,&iMode); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_PointsProjectionMode(iMode); \
   ExitAfterCall(this,39,_Trac2,&_ret_arg,&iMode); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAGenerativeViewBehavior##classe::get_PointsSymbol(short & oSymbol) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,40,&_Trac2,&oSymbol); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_PointsSymbol(oSymbol); \
   ExitAfterCall(this,40,_Trac2,&_ret_arg,&oSymbol); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAGenerativeViewBehavior##classe::put_PointsSymbol(short iSymbol) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,41,&_Trac2,&iSymbol); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_PointsSymbol(iSymbol); \
   ExitAfterCall(this,41,_Trac2,&_ret_arg,&iSymbol); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAGenerativeViewBehavior##classe::DefineTPSSectionView(const CATSafeArrayVariant & iProfile, const CATBSTR & iSectionType, const CATBSTR & iProfileType, short iSideToDraw, CATIAGenerativeViewBehavior * iParentViewGenerativeBehavior) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,42,&_Trac2,&iProfile,&iSectionType,&iProfileType,&iSideToDraw,&iParentViewGenerativeBehavior); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->DefineTPSSectionView(iProfile,iSectionType,iProfileType,iSideToDraw,iParentViewGenerativeBehavior); \
   ExitAfterCall(this,42,_Trac2,&_ret_arg,&iProfile,&iSectionType,&iProfileType,&iSideToDraw,&iParentViewGenerativeBehavior); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAGenerativeViewBehavior##classe::get_RepresentationMode(CatRepresentationMode & oMode) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,43,&_Trac2,&oMode); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_RepresentationMode(oMode); \
   ExitAfterCall(this,43,_Trac2,&_ret_arg,&oMode); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAGenerativeViewBehavior##classe::put_RepresentationMode(CatRepresentationMode iMode) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,44,&_Trac2,&iMode); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_RepresentationMode(iMode); \
   ExitAfterCall(this,44,_Trac2,&_ret_arg,&iMode); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAGenerativeViewBehavior##classe::SetGPSName(const CATBSTR & iGPSName) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,45,&_Trac2,&iGPSName); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetGPSName(iGPSName); \
   ExitAfterCall(this,45,_Trac2,&_ret_arg,&iGPSName); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAGenerativeViewBehavior##classe::GetGPSName(CATBSTR & ioGPSName) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,46,&_Trac2,&ioGPSName); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetGPSName(ioGPSName); \
   ExitAfterCall(this,46,_Trac2,&_ret_arg,&ioGPSName); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAGenerativeViewBehavior##classe::get_ImageViewMode(CatImageViewMode & oMode) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,47,&_Trac2,&oMode); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_ImageViewMode(oMode); \
   ExitAfterCall(this,47,_Trac2,&_ret_arg,&oMode); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAGenerativeViewBehavior##classe::put_ImageViewMode(CatImageViewMode iMode) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,48,&_Trac2,&iMode); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_ImageViewMode(iMode); \
   ExitAfterCall(this,48,_Trac2,&_ret_arg,&iMode); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAGenerativeViewBehavior##classe::get_LimitBoundingBox(double & oMode) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,49,&_Trac2,&oMode); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_LimitBoundingBox(oMode); \
   ExitAfterCall(this,49,_Trac2,&_ret_arg,&oMode); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAGenerativeViewBehavior##classe::put_LimitBoundingBox(double iMode) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,50,&_Trac2,&iMode); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_LimitBoundingBox(iMode); \
   ExitAfterCall(this,50,_Trac2,&_ret_arg,&iMode); \
   return(_ret_arg); \
} \



/* Macro used to link an implementation with an interface */
#define TIE_CATIAGenerativeViewBehavior(classe) \
 \
 \
declare_TIE_CATIAGenerativeViewBehavior(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIAGenerativeViewBehavior##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIAGenerativeViewBehavior,"CATIAGenerativeViewBehavior",CATIAGenerativeViewBehavior::MetaObject(),classe::MetaObject(),TIE); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIAGenerativeViewBehavior(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIECreation(CATIAGenerativeViewBehavior, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIAGenerativeViewBehavior##classe(classe::MetaObject(),CATIAGenerativeViewBehavior::MetaObject(),(void *)CreateTIECATIAGenerativeViewBehavior##classe)



/* Macro used to link an implementation with an interface */
/* This TIE is chained on the implementation object */
#define TIEchain_CATIAGenerativeViewBehavior(classe) \
 \
 \
declare_TIE_CATIAGenerativeViewBehavior(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIAGenerativeViewBehavior##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIAGenerativeViewBehavior,"CATIAGenerativeViewBehavior",CATIAGenerativeViewBehavior::MetaObject(),classe::MetaObject(),TIEchain); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIAGenerativeViewBehavior(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIEchainCreation(CATIAGenerativeViewBehavior, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIAGenerativeViewBehavior##classe(classe::MetaObject(),CATIAGenerativeViewBehavior::MetaObject(),(void *)CreateTIECATIAGenerativeViewBehavior##classe)


/* Macro to switch between BOA and TIE at build time */ 
#ifdef CATSYS_BOA_IS_TIE
#define BOA_CATIAGenerativeViewBehavior(classe) TIE_CATIAGenerativeViewBehavior(classe)
#else
#define BOA_CATIAGenerativeViewBehavior(classe) CATImplementBOA(CATIAGenerativeViewBehavior, classe)
#endif

#endif
