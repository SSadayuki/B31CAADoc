#ifndef __TIE_CATIAStrObjectFactory
#define __TIE_CATIAStrObjectFactory

#include <string.h>
#include "CATBaseUnknown.h"
#include "CATMetaClass.h"
#include "CATMacForTie.h"
#include "CATExitJournal.h"
#include "CATIAStrObjectFactory.h"
#include "JS0DSPA.h"


#ifdef _WINDOWS_SOURCE
#define Exported __declspec(dllexport)
#define Imported __declspec(dllimport)
#else
#define Exported 
#define Imported 
#endif


/* To link an implementation with the interface CATIAStrObjectFactory */
#define declare_TIE_CATIAStrObjectFactory(classe) \
 \
 \
class TIECATIAStrObjectFactory##classe : public CATIAStrObjectFactory \
{ \
   private: \
      CATDeclareCommonTIEMembers \
   public: \
      CATDeclareTIEMethods(CATIAStrObjectFactory, classe) \
      CATDeclareIUnknownMethodsForCATBaseUnknownTIE \
      CATDeclareIDispatchMethodsForCATBaseUnknownTIE \
      CATDeclareCATBaseUnknownMethodsForTIE \
      virtual HRESULT __stdcall AddDefExtFromCoordinates(const CATSafeArrayVariant & iCoord, double iOffset, CATIABase *& oDefExtremity); \
      virtual HRESULT __stdcall AddDefExtFromReference(CATIAReference * iReference, double iOffset, CATIABase *& oDefExtremity); \
      virtual HRESULT __stdcall AddDefExtOnMember(CATIAStrMember * iMember, CatStrMemberExtremity iSide, double iDistance, double iOffset, CATIABase *& oDefExtremity); \
      virtual HRESULT __stdcall AddSection(CATIADocument * iPart, CATIAStrSection *& oSection); \
      virtual HRESULT __stdcall AddSectionFromCatalog(CATIADocument * iPart, const CATBSTR & iCatalogName, const CATBSTR & iFamilyName, const CATBSTR & iSectionName, CATIAStrSection *& oSection); \
      virtual HRESULT __stdcall AddMember(CATIAStrSection * iSection, const CATBSTR & iAnchorName, double iAngle, CATIABase * iDefExtr1, CATIABase * iDefExtr2, const CATBSTR & iType, CATIAStrMember *& oMember); \
      virtual HRESULT __stdcall AddMemberFromDir(CATIAStrSection * iSection, const CATBSTR & iAnchorName, double iAngle, CATIABase * iDefExtr1, CATIABase * iDefExtr2, CATIAReference * iDirection, CatStrPlaneMode iMode, const CATBSTR & iType, CATIAStrMember *& oMember); \
      virtual HRESULT __stdcall AddMemberFromMathDir(CATIAStrSection * iSection, const CATBSTR & iAnchorName, double iAngle, CATIABase * iDefExtr1, CATIABase * iDefExtr2, const CATSafeArrayVariant & iDirection, const CATBSTR & iType, CATIAStrMember *& oMember); \
      virtual HRESULT __stdcall AddMemberFromMathPlane(CATIAStrSection * iSection, const CATBSTR & iAnchorName, double iAngle, CATIABase * iDefExtr1, CATIABase * iDefExtr2, const CATSafeArrayVariant & iPlane, CatStrPlaneMode iPlaneMode, const CATBSTR & iType, CATIAStrMember *& oMember); \
      virtual HRESULT __stdcall AddDimMember(CATIAStrSection * iSection, const CATBSTR & iAnchorName, double iAngle, CATIABase * iDefExtr1, const CATSafeArrayVariant & iMathDirection, double iLength, const CATBSTR & iType, CATIAStrMember *& oMember); \
      virtual HRESULT __stdcall AddDimMemberPtPt(CATIAStrSection * iSection, const CATBSTR & iAnchorName, double iAngle, CATIABase * iDefExtr1, CATIABase * iDefExtr2, double iLength, const CATBSTR & iType, CATIAStrMember *& oMember); \
      virtual HRESULT __stdcall AddDimMemberWithSupport(CATIAStrSection * iSection, const CATBSTR & iAnchorName, double iAngle, CATIABase * iDefExtr1, CATIABase * iDefExtr2, CATIAReference * iDirection, CatStrPlaneMode iMode, CatStrMaterialOrientation iOrientation, double iLength, const CATBSTR & iType, CATIAStrMember *& oMember); \
      virtual HRESULT __stdcall AddDimMemberOnPlane(CATIAStrSection * iSection, const CATBSTR & iAnchorName, double iAngle, CATIABase * iDefExtr1, CATIABase * iDefExtr2, const CATSafeArrayVariant & iDirection, CatStrPlaneMode iMode, double iLength, const CATBSTR & iType, CATIAStrMember *& oMember); \
      virtual HRESULT __stdcall AddMemberOnSupport(CATIAStrSection * iSection, const CATBSTR & iAnchorName, double iAngle, CATIAReference * iSupport, CATIABase * iDefExtr1, CATIABase * iDefExtr2, const CATBSTR & iType, CATIAStrMember *& oMember); \
      virtual HRESULT __stdcall AddMemberOnSupportWithRef(CATIAStrSection * iSection, const CATBSTR & iAnchorName, CATIAReference * iSurfRef, double iAngle, CATIAReference * iSupport, CATIABase * iDefExtr1, CATIABase * iDefExtr2, const CATBSTR & iType, CATIAStrMember *& oMember); \
      virtual HRESULT __stdcall AddPlate(CATIAReference * iSupport, double iThickness, CatStrMaterialOrientation iOrientation, const CATSafeArrayVariant & iContour, double iOffset, const CATBSTR & iType, CATIAStrPlate *& oPlate); \
      virtual HRESULT __stdcall AddPlateOnSurface(double iThickness, CatStrMaterialOrientation iOrientation, CATIAReference * iSurface, double iOffset, const CATBSTR & iType, CATIAStrPlate *& oPlate); \
      virtual HRESULT __stdcall AddRectangularEndPlate(CATIAStrMember * iMember, CatStrMemberExtremity iSide, double iThickness, double iHeight, double iWidth, CatStrMaterialOrientation iOrientation, const CATBSTR & iType, CATIAStrPlate *& oPlate); \
      virtual HRESULT __stdcall ExtendProductAsFoundation(const CATBSTR & iClass, CATIAStrFoundation *& oFoundation); \
      virtual HRESULT  __stdcall get_Application(CATIAApplication *& oApplication); \
      virtual HRESULT  __stdcall get_Parent(CATBaseDispatch *& oParent); \
      virtual HRESULT  __stdcall get_Name(CATBSTR & oNameBSTR); \
      virtual HRESULT  __stdcall put_Name(const CATBSTR & iNameBSTR); \
      virtual HRESULT  __stdcall GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj); \
};



#define ENVTIEdeclare_CATIAStrObjectFactory(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
virtual HRESULT __stdcall AddDefExtFromCoordinates(const CATSafeArrayVariant & iCoord, double iOffset, CATIABase *& oDefExtremity); \
virtual HRESULT __stdcall AddDefExtFromReference(CATIAReference * iReference, double iOffset, CATIABase *& oDefExtremity); \
virtual HRESULT __stdcall AddDefExtOnMember(CATIAStrMember * iMember, CatStrMemberExtremity iSide, double iDistance, double iOffset, CATIABase *& oDefExtremity); \
virtual HRESULT __stdcall AddSection(CATIADocument * iPart, CATIAStrSection *& oSection); \
virtual HRESULT __stdcall AddSectionFromCatalog(CATIADocument * iPart, const CATBSTR & iCatalogName, const CATBSTR & iFamilyName, const CATBSTR & iSectionName, CATIAStrSection *& oSection); \
virtual HRESULT __stdcall AddMember(CATIAStrSection * iSection, const CATBSTR & iAnchorName, double iAngle, CATIABase * iDefExtr1, CATIABase * iDefExtr2, const CATBSTR & iType, CATIAStrMember *& oMember); \
virtual HRESULT __stdcall AddMemberFromDir(CATIAStrSection * iSection, const CATBSTR & iAnchorName, double iAngle, CATIABase * iDefExtr1, CATIABase * iDefExtr2, CATIAReference * iDirection, CatStrPlaneMode iMode, const CATBSTR & iType, CATIAStrMember *& oMember); \
virtual HRESULT __stdcall AddMemberFromMathDir(CATIAStrSection * iSection, const CATBSTR & iAnchorName, double iAngle, CATIABase * iDefExtr1, CATIABase * iDefExtr2, const CATSafeArrayVariant & iDirection, const CATBSTR & iType, CATIAStrMember *& oMember); \
virtual HRESULT __stdcall AddMemberFromMathPlane(CATIAStrSection * iSection, const CATBSTR & iAnchorName, double iAngle, CATIABase * iDefExtr1, CATIABase * iDefExtr2, const CATSafeArrayVariant & iPlane, CatStrPlaneMode iPlaneMode, const CATBSTR & iType, CATIAStrMember *& oMember); \
virtual HRESULT __stdcall AddDimMember(CATIAStrSection * iSection, const CATBSTR & iAnchorName, double iAngle, CATIABase * iDefExtr1, const CATSafeArrayVariant & iMathDirection, double iLength, const CATBSTR & iType, CATIAStrMember *& oMember); \
virtual HRESULT __stdcall AddDimMemberPtPt(CATIAStrSection * iSection, const CATBSTR & iAnchorName, double iAngle, CATIABase * iDefExtr1, CATIABase * iDefExtr2, double iLength, const CATBSTR & iType, CATIAStrMember *& oMember); \
virtual HRESULT __stdcall AddDimMemberWithSupport(CATIAStrSection * iSection, const CATBSTR & iAnchorName, double iAngle, CATIABase * iDefExtr1, CATIABase * iDefExtr2, CATIAReference * iDirection, CatStrPlaneMode iMode, CatStrMaterialOrientation iOrientation, double iLength, const CATBSTR & iType, CATIAStrMember *& oMember); \
virtual HRESULT __stdcall AddDimMemberOnPlane(CATIAStrSection * iSection, const CATBSTR & iAnchorName, double iAngle, CATIABase * iDefExtr1, CATIABase * iDefExtr2, const CATSafeArrayVariant & iDirection, CatStrPlaneMode iMode, double iLength, const CATBSTR & iType, CATIAStrMember *& oMember); \
virtual HRESULT __stdcall AddMemberOnSupport(CATIAStrSection * iSection, const CATBSTR & iAnchorName, double iAngle, CATIAReference * iSupport, CATIABase * iDefExtr1, CATIABase * iDefExtr2, const CATBSTR & iType, CATIAStrMember *& oMember); \
virtual HRESULT __stdcall AddMemberOnSupportWithRef(CATIAStrSection * iSection, const CATBSTR & iAnchorName, CATIAReference * iSurfRef, double iAngle, CATIAReference * iSupport, CATIABase * iDefExtr1, CATIABase * iDefExtr2, const CATBSTR & iType, CATIAStrMember *& oMember); \
virtual HRESULT __stdcall AddPlate(CATIAReference * iSupport, double iThickness, CatStrMaterialOrientation iOrientation, const CATSafeArrayVariant & iContour, double iOffset, const CATBSTR & iType, CATIAStrPlate *& oPlate); \
virtual HRESULT __stdcall AddPlateOnSurface(double iThickness, CatStrMaterialOrientation iOrientation, CATIAReference * iSurface, double iOffset, const CATBSTR & iType, CATIAStrPlate *& oPlate); \
virtual HRESULT __stdcall AddRectangularEndPlate(CATIAStrMember * iMember, CatStrMemberExtremity iSide, double iThickness, double iHeight, double iWidth, CatStrMaterialOrientation iOrientation, const CATBSTR & iType, CATIAStrPlate *& oPlate); \
virtual HRESULT __stdcall ExtendProductAsFoundation(const CATBSTR & iClass, CATIAStrFoundation *& oFoundation); \
virtual HRESULT  __stdcall get_Application(CATIAApplication *& oApplication); \
virtual HRESULT  __stdcall get_Parent(CATBaseDispatch *& oParent); \
virtual HRESULT  __stdcall get_Name(CATBSTR & oNameBSTR); \
virtual HRESULT  __stdcall put_Name(const CATBSTR & iNameBSTR); \
virtual HRESULT  __stdcall GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj); \


#define ENVTIEdefine_CATIAStrObjectFactory(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
HRESULT __stdcall  ENVTIEName::AddDefExtFromCoordinates(const CATSafeArrayVariant & iCoord, double iOffset, CATIABase *& oDefExtremity) \
{ \
return (ENVTIECALL(CATIAStrObjectFactory,ENVTIETypeLetter,ENVTIELetter)AddDefExtFromCoordinates(iCoord,iOffset,oDefExtremity)); \
} \
HRESULT __stdcall  ENVTIEName::AddDefExtFromReference(CATIAReference * iReference, double iOffset, CATIABase *& oDefExtremity) \
{ \
return (ENVTIECALL(CATIAStrObjectFactory,ENVTIETypeLetter,ENVTIELetter)AddDefExtFromReference(iReference,iOffset,oDefExtremity)); \
} \
HRESULT __stdcall  ENVTIEName::AddDefExtOnMember(CATIAStrMember * iMember, CatStrMemberExtremity iSide, double iDistance, double iOffset, CATIABase *& oDefExtremity) \
{ \
return (ENVTIECALL(CATIAStrObjectFactory,ENVTIETypeLetter,ENVTIELetter)AddDefExtOnMember(iMember,iSide,iDistance,iOffset,oDefExtremity)); \
} \
HRESULT __stdcall  ENVTIEName::AddSection(CATIADocument * iPart, CATIAStrSection *& oSection) \
{ \
return (ENVTIECALL(CATIAStrObjectFactory,ENVTIETypeLetter,ENVTIELetter)AddSection(iPart,oSection)); \
} \
HRESULT __stdcall  ENVTIEName::AddSectionFromCatalog(CATIADocument * iPart, const CATBSTR & iCatalogName, const CATBSTR & iFamilyName, const CATBSTR & iSectionName, CATIAStrSection *& oSection) \
{ \
return (ENVTIECALL(CATIAStrObjectFactory,ENVTIETypeLetter,ENVTIELetter)AddSectionFromCatalog(iPart,iCatalogName,iFamilyName,iSectionName,oSection)); \
} \
HRESULT __stdcall  ENVTIEName::AddMember(CATIAStrSection * iSection, const CATBSTR & iAnchorName, double iAngle, CATIABase * iDefExtr1, CATIABase * iDefExtr2, const CATBSTR & iType, CATIAStrMember *& oMember) \
{ \
return (ENVTIECALL(CATIAStrObjectFactory,ENVTIETypeLetter,ENVTIELetter)AddMember(iSection,iAnchorName,iAngle,iDefExtr1,iDefExtr2,iType,oMember)); \
} \
HRESULT __stdcall  ENVTIEName::AddMemberFromDir(CATIAStrSection * iSection, const CATBSTR & iAnchorName, double iAngle, CATIABase * iDefExtr1, CATIABase * iDefExtr2, CATIAReference * iDirection, CatStrPlaneMode iMode, const CATBSTR & iType, CATIAStrMember *& oMember) \
{ \
return (ENVTIECALL(CATIAStrObjectFactory,ENVTIETypeLetter,ENVTIELetter)AddMemberFromDir(iSection,iAnchorName,iAngle,iDefExtr1,iDefExtr2,iDirection,iMode,iType,oMember)); \
} \
HRESULT __stdcall  ENVTIEName::AddMemberFromMathDir(CATIAStrSection * iSection, const CATBSTR & iAnchorName, double iAngle, CATIABase * iDefExtr1, CATIABase * iDefExtr2, const CATSafeArrayVariant & iDirection, const CATBSTR & iType, CATIAStrMember *& oMember) \
{ \
return (ENVTIECALL(CATIAStrObjectFactory,ENVTIETypeLetter,ENVTIELetter)AddMemberFromMathDir(iSection,iAnchorName,iAngle,iDefExtr1,iDefExtr2,iDirection,iType,oMember)); \
} \
HRESULT __stdcall  ENVTIEName::AddMemberFromMathPlane(CATIAStrSection * iSection, const CATBSTR & iAnchorName, double iAngle, CATIABase * iDefExtr1, CATIABase * iDefExtr2, const CATSafeArrayVariant & iPlane, CatStrPlaneMode iPlaneMode, const CATBSTR & iType, CATIAStrMember *& oMember) \
{ \
return (ENVTIECALL(CATIAStrObjectFactory,ENVTIETypeLetter,ENVTIELetter)AddMemberFromMathPlane(iSection,iAnchorName,iAngle,iDefExtr1,iDefExtr2,iPlane,iPlaneMode,iType,oMember)); \
} \
HRESULT __stdcall  ENVTIEName::AddDimMember(CATIAStrSection * iSection, const CATBSTR & iAnchorName, double iAngle, CATIABase * iDefExtr1, const CATSafeArrayVariant & iMathDirection, double iLength, const CATBSTR & iType, CATIAStrMember *& oMember) \
{ \
return (ENVTIECALL(CATIAStrObjectFactory,ENVTIETypeLetter,ENVTIELetter)AddDimMember(iSection,iAnchorName,iAngle,iDefExtr1,iMathDirection,iLength,iType,oMember)); \
} \
HRESULT __stdcall  ENVTIEName::AddDimMemberPtPt(CATIAStrSection * iSection, const CATBSTR & iAnchorName, double iAngle, CATIABase * iDefExtr1, CATIABase * iDefExtr2, double iLength, const CATBSTR & iType, CATIAStrMember *& oMember) \
{ \
return (ENVTIECALL(CATIAStrObjectFactory,ENVTIETypeLetter,ENVTIELetter)AddDimMemberPtPt(iSection,iAnchorName,iAngle,iDefExtr1,iDefExtr2,iLength,iType,oMember)); \
} \
HRESULT __stdcall  ENVTIEName::AddDimMemberWithSupport(CATIAStrSection * iSection, const CATBSTR & iAnchorName, double iAngle, CATIABase * iDefExtr1, CATIABase * iDefExtr2, CATIAReference * iDirection, CatStrPlaneMode iMode, CatStrMaterialOrientation iOrientation, double iLength, const CATBSTR & iType, CATIAStrMember *& oMember) \
{ \
return (ENVTIECALL(CATIAStrObjectFactory,ENVTIETypeLetter,ENVTIELetter)AddDimMemberWithSupport(iSection,iAnchorName,iAngle,iDefExtr1,iDefExtr2,iDirection,iMode,iOrientation,iLength,iType,oMember)); \
} \
HRESULT __stdcall  ENVTIEName::AddDimMemberOnPlane(CATIAStrSection * iSection, const CATBSTR & iAnchorName, double iAngle, CATIABase * iDefExtr1, CATIABase * iDefExtr2, const CATSafeArrayVariant & iDirection, CatStrPlaneMode iMode, double iLength, const CATBSTR & iType, CATIAStrMember *& oMember) \
{ \
return (ENVTIECALL(CATIAStrObjectFactory,ENVTIETypeLetter,ENVTIELetter)AddDimMemberOnPlane(iSection,iAnchorName,iAngle,iDefExtr1,iDefExtr2,iDirection,iMode,iLength,iType,oMember)); \
} \
HRESULT __stdcall  ENVTIEName::AddMemberOnSupport(CATIAStrSection * iSection, const CATBSTR & iAnchorName, double iAngle, CATIAReference * iSupport, CATIABase * iDefExtr1, CATIABase * iDefExtr2, const CATBSTR & iType, CATIAStrMember *& oMember) \
{ \
return (ENVTIECALL(CATIAStrObjectFactory,ENVTIETypeLetter,ENVTIELetter)AddMemberOnSupport(iSection,iAnchorName,iAngle,iSupport,iDefExtr1,iDefExtr2,iType,oMember)); \
} \
HRESULT __stdcall  ENVTIEName::AddMemberOnSupportWithRef(CATIAStrSection * iSection, const CATBSTR & iAnchorName, CATIAReference * iSurfRef, double iAngle, CATIAReference * iSupport, CATIABase * iDefExtr1, CATIABase * iDefExtr2, const CATBSTR & iType, CATIAStrMember *& oMember) \
{ \
return (ENVTIECALL(CATIAStrObjectFactory,ENVTIETypeLetter,ENVTIELetter)AddMemberOnSupportWithRef(iSection,iAnchorName,iSurfRef,iAngle,iSupport,iDefExtr1,iDefExtr2,iType,oMember)); \
} \
HRESULT __stdcall  ENVTIEName::AddPlate(CATIAReference * iSupport, double iThickness, CatStrMaterialOrientation iOrientation, const CATSafeArrayVariant & iContour, double iOffset, const CATBSTR & iType, CATIAStrPlate *& oPlate) \
{ \
return (ENVTIECALL(CATIAStrObjectFactory,ENVTIETypeLetter,ENVTIELetter)AddPlate(iSupport,iThickness,iOrientation,iContour,iOffset,iType,oPlate)); \
} \
HRESULT __stdcall  ENVTIEName::AddPlateOnSurface(double iThickness, CatStrMaterialOrientation iOrientation, CATIAReference * iSurface, double iOffset, const CATBSTR & iType, CATIAStrPlate *& oPlate) \
{ \
return (ENVTIECALL(CATIAStrObjectFactory,ENVTIETypeLetter,ENVTIELetter)AddPlateOnSurface(iThickness,iOrientation,iSurface,iOffset,iType,oPlate)); \
} \
HRESULT __stdcall  ENVTIEName::AddRectangularEndPlate(CATIAStrMember * iMember, CatStrMemberExtremity iSide, double iThickness, double iHeight, double iWidth, CatStrMaterialOrientation iOrientation, const CATBSTR & iType, CATIAStrPlate *& oPlate) \
{ \
return (ENVTIECALL(CATIAStrObjectFactory,ENVTIETypeLetter,ENVTIELetter)AddRectangularEndPlate(iMember,iSide,iThickness,iHeight,iWidth,iOrientation,iType,oPlate)); \
} \
HRESULT __stdcall  ENVTIEName::ExtendProductAsFoundation(const CATBSTR & iClass, CATIAStrFoundation *& oFoundation) \
{ \
return (ENVTIECALL(CATIAStrObjectFactory,ENVTIETypeLetter,ENVTIELetter)ExtendProductAsFoundation(iClass,oFoundation)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Application(CATIAApplication *& oApplication) \
{ \
return (ENVTIECALL(CATIAStrObjectFactory,ENVTIETypeLetter,ENVTIELetter)get_Application(oApplication)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Parent(CATBaseDispatch *& oParent) \
{ \
return (ENVTIECALL(CATIAStrObjectFactory,ENVTIETypeLetter,ENVTIELetter)get_Parent(oParent)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Name(CATBSTR & oNameBSTR) \
{ \
return (ENVTIECALL(CATIAStrObjectFactory,ENVTIETypeLetter,ENVTIELetter)get_Name(oNameBSTR)); \
} \
HRESULT  __stdcall  ENVTIEName::put_Name(const CATBSTR & iNameBSTR) \
{ \
return (ENVTIECALL(CATIAStrObjectFactory,ENVTIETypeLetter,ENVTIELetter)put_Name(iNameBSTR)); \
} \
HRESULT  __stdcall  ENVTIEName::GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj) \
{ \
return (ENVTIECALL(CATIAStrObjectFactory,ENVTIETypeLetter,ENVTIELetter)GetItem(IDName,RealObj)); \
} \


/* Name of the TIE class */
#define class_TIE_CATIAStrObjectFactory(classe)    TIECATIAStrObjectFactory##classe


/* Common methods inside a TIE */
#define common_TIE_CATIAStrObjectFactory(classe) \
 \
 \
/* Static initialization */ \
CATDefineCommonTIEMembers(CATIAStrObjectFactory, classe) \
 \
 \
CATImplementTIEMethods(CATIAStrObjectFactory, classe) \
CATImplementIUnknownMethodsForCATBaseUnknownTIE(CATIAStrObjectFactory, classe, 2) \
CATImplementIDispatchMethodsForCATBaseUnknownTIE(CATIAStrObjectFactory, classe) \
CATImplementCATBaseUnknownMethodsForTIE(CATIAStrObjectFactory, classe) \
 \
HRESULT __stdcall  TIECATIAStrObjectFactory##classe::AddDefExtFromCoordinates(const CATSafeArrayVariant & iCoord, double iOffset, CATIABase *& oDefExtremity) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,1,&_Trac2,&iCoord,&iOffset,&oDefExtremity); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->AddDefExtFromCoordinates(iCoord,iOffset,oDefExtremity); \
   ExitAfterCall(this,1,_Trac2,&_ret_arg,&iCoord,&iOffset,&oDefExtremity); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAStrObjectFactory##classe::AddDefExtFromReference(CATIAReference * iReference, double iOffset, CATIABase *& oDefExtremity) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,2,&_Trac2,&iReference,&iOffset,&oDefExtremity); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->AddDefExtFromReference(iReference,iOffset,oDefExtremity); \
   ExitAfterCall(this,2,_Trac2,&_ret_arg,&iReference,&iOffset,&oDefExtremity); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAStrObjectFactory##classe::AddDefExtOnMember(CATIAStrMember * iMember, CatStrMemberExtremity iSide, double iDistance, double iOffset, CATIABase *& oDefExtremity) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,3,&_Trac2,&iMember,&iSide,&iDistance,&iOffset,&oDefExtremity); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->AddDefExtOnMember(iMember,iSide,iDistance,iOffset,oDefExtremity); \
   ExitAfterCall(this,3,_Trac2,&_ret_arg,&iMember,&iSide,&iDistance,&iOffset,&oDefExtremity); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAStrObjectFactory##classe::AddSection(CATIADocument * iPart, CATIAStrSection *& oSection) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,4,&_Trac2,&iPart,&oSection); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->AddSection(iPart,oSection); \
   ExitAfterCall(this,4,_Trac2,&_ret_arg,&iPart,&oSection); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAStrObjectFactory##classe::AddSectionFromCatalog(CATIADocument * iPart, const CATBSTR & iCatalogName, const CATBSTR & iFamilyName, const CATBSTR & iSectionName, CATIAStrSection *& oSection) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,5,&_Trac2,&iPart,&iCatalogName,&iFamilyName,&iSectionName,&oSection); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->AddSectionFromCatalog(iPart,iCatalogName,iFamilyName,iSectionName,oSection); \
   ExitAfterCall(this,5,_Trac2,&_ret_arg,&iPart,&iCatalogName,&iFamilyName,&iSectionName,&oSection); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAStrObjectFactory##classe::AddMember(CATIAStrSection * iSection, const CATBSTR & iAnchorName, double iAngle, CATIABase * iDefExtr1, CATIABase * iDefExtr2, const CATBSTR & iType, CATIAStrMember *& oMember) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,6,&_Trac2,&iSection,&iAnchorName,&iAngle,&iDefExtr1,&iDefExtr2,&iType,&oMember); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->AddMember(iSection,iAnchorName,iAngle,iDefExtr1,iDefExtr2,iType,oMember); \
   ExitAfterCall(this,6,_Trac2,&_ret_arg,&iSection,&iAnchorName,&iAngle,&iDefExtr1,&iDefExtr2,&iType,&oMember); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAStrObjectFactory##classe::AddMemberFromDir(CATIAStrSection * iSection, const CATBSTR & iAnchorName, double iAngle, CATIABase * iDefExtr1, CATIABase * iDefExtr2, CATIAReference * iDirection, CatStrPlaneMode iMode, const CATBSTR & iType, CATIAStrMember *& oMember) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,7,&_Trac2,&iSection,&iAnchorName,&iAngle,&iDefExtr1,&iDefExtr2,&iDirection,&iMode,&iType,&oMember); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->AddMemberFromDir(iSection,iAnchorName,iAngle,iDefExtr1,iDefExtr2,iDirection,iMode,iType,oMember); \
   ExitAfterCall(this,7,_Trac2,&_ret_arg,&iSection,&iAnchorName,&iAngle,&iDefExtr1,&iDefExtr2,&iDirection,&iMode,&iType,&oMember); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAStrObjectFactory##classe::AddMemberFromMathDir(CATIAStrSection * iSection, const CATBSTR & iAnchorName, double iAngle, CATIABase * iDefExtr1, CATIABase * iDefExtr2, const CATSafeArrayVariant & iDirection, const CATBSTR & iType, CATIAStrMember *& oMember) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,8,&_Trac2,&iSection,&iAnchorName,&iAngle,&iDefExtr1,&iDefExtr2,&iDirection,&iType,&oMember); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->AddMemberFromMathDir(iSection,iAnchorName,iAngle,iDefExtr1,iDefExtr2,iDirection,iType,oMember); \
   ExitAfterCall(this,8,_Trac2,&_ret_arg,&iSection,&iAnchorName,&iAngle,&iDefExtr1,&iDefExtr2,&iDirection,&iType,&oMember); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAStrObjectFactory##classe::AddMemberFromMathPlane(CATIAStrSection * iSection, const CATBSTR & iAnchorName, double iAngle, CATIABase * iDefExtr1, CATIABase * iDefExtr2, const CATSafeArrayVariant & iPlane, CatStrPlaneMode iPlaneMode, const CATBSTR & iType, CATIAStrMember *& oMember) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,9,&_Trac2,&iSection,&iAnchorName,&iAngle,&iDefExtr1,&iDefExtr2,&iPlane,&iPlaneMode,&iType,&oMember); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->AddMemberFromMathPlane(iSection,iAnchorName,iAngle,iDefExtr1,iDefExtr2,iPlane,iPlaneMode,iType,oMember); \
   ExitAfterCall(this,9,_Trac2,&_ret_arg,&iSection,&iAnchorName,&iAngle,&iDefExtr1,&iDefExtr2,&iPlane,&iPlaneMode,&iType,&oMember); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAStrObjectFactory##classe::AddDimMember(CATIAStrSection * iSection, const CATBSTR & iAnchorName, double iAngle, CATIABase * iDefExtr1, const CATSafeArrayVariant & iMathDirection, double iLength, const CATBSTR & iType, CATIAStrMember *& oMember) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,10,&_Trac2,&iSection,&iAnchorName,&iAngle,&iDefExtr1,&iMathDirection,&iLength,&iType,&oMember); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->AddDimMember(iSection,iAnchorName,iAngle,iDefExtr1,iMathDirection,iLength,iType,oMember); \
   ExitAfterCall(this,10,_Trac2,&_ret_arg,&iSection,&iAnchorName,&iAngle,&iDefExtr1,&iMathDirection,&iLength,&iType,&oMember); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAStrObjectFactory##classe::AddDimMemberPtPt(CATIAStrSection * iSection, const CATBSTR & iAnchorName, double iAngle, CATIABase * iDefExtr1, CATIABase * iDefExtr2, double iLength, const CATBSTR & iType, CATIAStrMember *& oMember) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,11,&_Trac2,&iSection,&iAnchorName,&iAngle,&iDefExtr1,&iDefExtr2,&iLength,&iType,&oMember); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->AddDimMemberPtPt(iSection,iAnchorName,iAngle,iDefExtr1,iDefExtr2,iLength,iType,oMember); \
   ExitAfterCall(this,11,_Trac2,&_ret_arg,&iSection,&iAnchorName,&iAngle,&iDefExtr1,&iDefExtr2,&iLength,&iType,&oMember); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAStrObjectFactory##classe::AddDimMemberWithSupport(CATIAStrSection * iSection, const CATBSTR & iAnchorName, double iAngle, CATIABase * iDefExtr1, CATIABase * iDefExtr2, CATIAReference * iDirection, CatStrPlaneMode iMode, CatStrMaterialOrientation iOrientation, double iLength, const CATBSTR & iType, CATIAStrMember *& oMember) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,12,&_Trac2,&iSection,&iAnchorName,&iAngle,&iDefExtr1,&iDefExtr2,&iDirection,&iMode,&iOrientation,&iLength,&iType,&oMember); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->AddDimMemberWithSupport(iSection,iAnchorName,iAngle,iDefExtr1,iDefExtr2,iDirection,iMode,iOrientation,iLength,iType,oMember); \
   ExitAfterCall(this,12,_Trac2,&_ret_arg,&iSection,&iAnchorName,&iAngle,&iDefExtr1,&iDefExtr2,&iDirection,&iMode,&iOrientation,&iLength,&iType,&oMember); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAStrObjectFactory##classe::AddDimMemberOnPlane(CATIAStrSection * iSection, const CATBSTR & iAnchorName, double iAngle, CATIABase * iDefExtr1, CATIABase * iDefExtr2, const CATSafeArrayVariant & iDirection, CatStrPlaneMode iMode, double iLength, const CATBSTR & iType, CATIAStrMember *& oMember) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,13,&_Trac2,&iSection,&iAnchorName,&iAngle,&iDefExtr1,&iDefExtr2,&iDirection,&iMode,&iLength,&iType,&oMember); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->AddDimMemberOnPlane(iSection,iAnchorName,iAngle,iDefExtr1,iDefExtr2,iDirection,iMode,iLength,iType,oMember); \
   ExitAfterCall(this,13,_Trac2,&_ret_arg,&iSection,&iAnchorName,&iAngle,&iDefExtr1,&iDefExtr2,&iDirection,&iMode,&iLength,&iType,&oMember); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAStrObjectFactory##classe::AddMemberOnSupport(CATIAStrSection * iSection, const CATBSTR & iAnchorName, double iAngle, CATIAReference * iSupport, CATIABase * iDefExtr1, CATIABase * iDefExtr2, const CATBSTR & iType, CATIAStrMember *& oMember) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,14,&_Trac2,&iSection,&iAnchorName,&iAngle,&iSupport,&iDefExtr1,&iDefExtr2,&iType,&oMember); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->AddMemberOnSupport(iSection,iAnchorName,iAngle,iSupport,iDefExtr1,iDefExtr2,iType,oMember); \
   ExitAfterCall(this,14,_Trac2,&_ret_arg,&iSection,&iAnchorName,&iAngle,&iSupport,&iDefExtr1,&iDefExtr2,&iType,&oMember); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAStrObjectFactory##classe::AddMemberOnSupportWithRef(CATIAStrSection * iSection, const CATBSTR & iAnchorName, CATIAReference * iSurfRef, double iAngle, CATIAReference * iSupport, CATIABase * iDefExtr1, CATIABase * iDefExtr2, const CATBSTR & iType, CATIAStrMember *& oMember) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,15,&_Trac2,&iSection,&iAnchorName,&iSurfRef,&iAngle,&iSupport,&iDefExtr1,&iDefExtr2,&iType,&oMember); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->AddMemberOnSupportWithRef(iSection,iAnchorName,iSurfRef,iAngle,iSupport,iDefExtr1,iDefExtr2,iType,oMember); \
   ExitAfterCall(this,15,_Trac2,&_ret_arg,&iSection,&iAnchorName,&iSurfRef,&iAngle,&iSupport,&iDefExtr1,&iDefExtr2,&iType,&oMember); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAStrObjectFactory##classe::AddPlate(CATIAReference * iSupport, double iThickness, CatStrMaterialOrientation iOrientation, const CATSafeArrayVariant & iContour, double iOffset, const CATBSTR & iType, CATIAStrPlate *& oPlate) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,16,&_Trac2,&iSupport,&iThickness,&iOrientation,&iContour,&iOffset,&iType,&oPlate); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->AddPlate(iSupport,iThickness,iOrientation,iContour,iOffset,iType,oPlate); \
   ExitAfterCall(this,16,_Trac2,&_ret_arg,&iSupport,&iThickness,&iOrientation,&iContour,&iOffset,&iType,&oPlate); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAStrObjectFactory##classe::AddPlateOnSurface(double iThickness, CatStrMaterialOrientation iOrientation, CATIAReference * iSurface, double iOffset, const CATBSTR & iType, CATIAStrPlate *& oPlate) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,17,&_Trac2,&iThickness,&iOrientation,&iSurface,&iOffset,&iType,&oPlate); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->AddPlateOnSurface(iThickness,iOrientation,iSurface,iOffset,iType,oPlate); \
   ExitAfterCall(this,17,_Trac2,&_ret_arg,&iThickness,&iOrientation,&iSurface,&iOffset,&iType,&oPlate); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAStrObjectFactory##classe::AddRectangularEndPlate(CATIAStrMember * iMember, CatStrMemberExtremity iSide, double iThickness, double iHeight, double iWidth, CatStrMaterialOrientation iOrientation, const CATBSTR & iType, CATIAStrPlate *& oPlate) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,18,&_Trac2,&iMember,&iSide,&iThickness,&iHeight,&iWidth,&iOrientation,&iType,&oPlate); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->AddRectangularEndPlate(iMember,iSide,iThickness,iHeight,iWidth,iOrientation,iType,oPlate); \
   ExitAfterCall(this,18,_Trac2,&_ret_arg,&iMember,&iSide,&iThickness,&iHeight,&iWidth,&iOrientation,&iType,&oPlate); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAStrObjectFactory##classe::ExtendProductAsFoundation(const CATBSTR & iClass, CATIAStrFoundation *& oFoundation) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,19,&_Trac2,&iClass,&oFoundation); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->ExtendProductAsFoundation(iClass,oFoundation); \
   ExitAfterCall(this,19,_Trac2,&_ret_arg,&iClass,&oFoundation); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAStrObjectFactory##classe::get_Application(CATIAApplication *& oApplication) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,20,&_Trac2,&oApplication); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Application(oApplication); \
   ExitAfterCall(this,20,_Trac2,&_ret_arg,&oApplication); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAStrObjectFactory##classe::get_Parent(CATBaseDispatch *& oParent) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,21,&_Trac2,&oParent); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Parent(oParent); \
   ExitAfterCall(this,21,_Trac2,&_ret_arg,&oParent); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAStrObjectFactory##classe::get_Name(CATBSTR & oNameBSTR) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,22,&_Trac2,&oNameBSTR); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Name(oNameBSTR); \
   ExitAfterCall(this,22,_Trac2,&_ret_arg,&oNameBSTR); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAStrObjectFactory##classe::put_Name(const CATBSTR & iNameBSTR) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,23,&_Trac2,&iNameBSTR); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_Name(iNameBSTR); \
   ExitAfterCall(this,23,_Trac2,&_ret_arg,&iNameBSTR); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAStrObjectFactory##classe::GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,24,&_Trac2,&IDName,&RealObj); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetItem(IDName,RealObj); \
   ExitAfterCall(this,24,_Trac2,&_ret_arg,&IDName,&RealObj); \
   return(_ret_arg); \
} \



/* Macro used to link an implementation with an interface */
#define TIE_CATIAStrObjectFactory(classe) \
 \
 \
declare_TIE_CATIAStrObjectFactory(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIAStrObjectFactory##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIAStrObjectFactory,"CATIAStrObjectFactory",CATIAStrObjectFactory::MetaObject(),classe::MetaObject(),TIE); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIAStrObjectFactory(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIECreation(CATIAStrObjectFactory, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIAStrObjectFactory##classe(classe::MetaObject(),CATIAStrObjectFactory::MetaObject(),(void *)CreateTIECATIAStrObjectFactory##classe)



/* Macro used to link an implementation with an interface */
/* This TIE is chained on the implementation object */
#define TIEchain_CATIAStrObjectFactory(classe) \
 \
 \
declare_TIE_CATIAStrObjectFactory(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIAStrObjectFactory##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIAStrObjectFactory,"CATIAStrObjectFactory",CATIAStrObjectFactory::MetaObject(),classe::MetaObject(),TIEchain); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIAStrObjectFactory(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIEchainCreation(CATIAStrObjectFactory, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIAStrObjectFactory##classe(classe::MetaObject(),CATIAStrObjectFactory::MetaObject(),(void *)CreateTIECATIAStrObjectFactory##classe)


/* Macro to switch between BOA and TIE at build time */ 
#ifdef CATSYS_BOA_IS_TIE
#define BOA_CATIAStrObjectFactory(classe) TIE_CATIAStrObjectFactory(classe)
#else
#define BOA_CATIAStrObjectFactory(classe) CATImplementBOA(CATIAStrObjectFactory, classe)
#endif

#endif
