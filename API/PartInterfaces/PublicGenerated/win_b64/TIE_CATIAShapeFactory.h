#ifndef __TIE_CATIAShapeFactory
#define __TIE_CATIAShapeFactory

#include <string.h>
#include "CATBaseUnknown.h"
#include "CATMetaClass.h"
#include "CATMacForTie.h"
#include "CATExitJournal.h"
#include "CATIAShapeFactory.h"
#include "JS0DSPA.h"


#ifdef _WINDOWS_SOURCE
#define Exported __declspec(dllexport)
#define Imported __declspec(dllimport)
#else
#define Exported 
#define Imported 
#endif


/* To link an implementation with the interface CATIAShapeFactory */
#define declare_TIE_CATIAShapeFactory(classe) \
 \
 \
class TIECATIAShapeFactory##classe : public CATIAShapeFactory \
{ \
   private: \
      CATDeclareCommonTIEMembers \
   public: \
      CATDeclareTIEMethods(CATIAShapeFactory, classe) \
      CATDeclareIUnknownMethodsForCATBaseUnknownTIE \
      CATDeclareIDispatchMethodsForCATBaseUnknownTIE \
      CATDeclareCATBaseUnknownMethodsForTIE \
      virtual HRESULT __stdcall AddNewPad(CATIASketch * iSketch, double iHeight, CATIAPad *& oNewPad); \
      virtual HRESULT __stdcall AddNewPocket(CATIASketch * iSketch, double iHeight, CATIAPocket *& oNewPocket); \
      virtual HRESULT __stdcall AddNewPadFromRef(CATIAReference * iProfileElt, double iHeight, CATIAPad *& oNewPad); \
      virtual HRESULT __stdcall AddNewPocketFromRef(CATIAReference * iProfileElt, double iHeight, CATIAPocket *& oNewPocket); \
      virtual HRESULT __stdcall AddNewHole(CATIAReference * iSupport, double iDepth, CATIAHole *& oNewHole); \
      virtual HRESULT __stdcall AddNewHoleFromPoint(double iX, double iY, double iZ, CATIAReference * iSupport, double iDepth, CATIAHole *& oNewHole); \
      virtual HRESULT __stdcall AddNewHoleFromRefPoint(CATIAReference * iOrigin, CATIAReference * iSupport, double iDepth, CATIAHole *& oNewHole); \
      virtual HRESULT __stdcall AddNewHoleWithConstraint(double iX, double iY, double iZ, CATIAReference * iEdge, CATIAReference * iSupport, double iDepth, CATIAHole *& oNewHole); \
      virtual HRESULT __stdcall AddNewHoleWith2Constraints(double iX, double iY, double iZ, CATIAReference * iEdge1, CATIAReference * iEdge2, CATIAReference * iSupport, double iDepth, CATIAHole *& oNewHole); \
      virtual HRESULT __stdcall AddNewHoleFromSketch(CATIASketch * iSketch, double iDepth, CATIAHole *& oNewHole); \
      virtual HRESULT __stdcall AddNewShaft(CATIASketch * iSketch, CATIAShaft *& oNewShaft); \
      virtual HRESULT __stdcall AddNewGroove(CATIASketch * iSketch, CATIAGroove *& oNewGroove); \
      virtual HRESULT __stdcall AddNewShaftFromRef(CATIAReference * iProfileElt, CATIAShaft *& oNewShaft); \
      virtual HRESULT __stdcall AddNewGrooveFromRef(CATIAReference * iProfileElt, CATIAGroove *& oNewGroove); \
      virtual HRESULT __stdcall AddNewThreadWithRef(CATIAReference * iLateralFace, CATIAReference * iLimitFace, CATIAThread *& oNewThread); \
      virtual HRESULT __stdcall AddNewThreadWithOutRef(CATIAThread *& oNewThread); \
      virtual HRESULT __stdcall AddNewRib(CATIASketch * iSketch, CATIASketch * iCenterCurve, CATIARib *& oNewRib); \
      virtual HRESULT __stdcall AddNewRibFromRef(CATIAReference * iProfile, CATIAReference * iCenterCurve, CATIARib *& oNewRib); \
      virtual HRESULT __stdcall AddNewSlot(CATIASketch * iSketch, CATIASketch * iCenterCurve, CATIASlot *& oNewSlot); \
      virtual HRESULT __stdcall AddNewSlotFromRef(CATIAReference * iProfile, CATIAReference * iCenterCurve, CATIASlot *& oNewSlot); \
      virtual HRESULT __stdcall AddNewStiffener(CATIASketch * iSketch, CATIAStiffener *& oNewStifffener); \
      virtual HRESULT __stdcall AddNewStiffenerFromRef(CATIAReference * iProfileElt, CATIAStiffener *& oNewStiffener); \
      virtual HRESULT __stdcall AddNewScaling(CATIAReference * iScalingReference, double iFactor, CATIAScaling *& oNewScaling); \
      virtual HRESULT __stdcall AddNewFaceFillet(CATIAReference * iF1, CATIAReference * iF2, double iRadius, CATIAFaceFillet *& oNewFillet); \
      virtual HRESULT __stdcall AddNewEdgeFilletWithConstantRadius(CATIAReference * iEdgeToFillet, CatFilletEdgePropagation iPropagMode, double iRadius, CATIAConstRadEdgeFillet *& oNewFillet); \
      virtual HRESULT __stdcall AddNewEdgeFilletWithVaryingRadius(CATIAReference * iEdgeToFillet, CatFilletEdgePropagation iPropagMode, CatFilletVariation iVariationMode, double iDefaultRadius, CATIAVarRadEdgeFillet *& oNewFillet); \
      virtual HRESULT __stdcall AddNewTritangentFillet(CATIAReference * iF1, CATIAReference * iF2, CATIAReference * iRemovedFace, CATIATritangentFillet *& oNewFillet); \
      virtual HRESULT __stdcall AddNewDraft(CATIAReference * iFaceToDraft, CATIAReference * iNeutral, CatDraftNeutralPropagationMode iNeutralMode, CATIAReference * iParting, double iDirX, double iDirY, double iDirZ, CatDraftMode iMode, double iAngle, CatDraftMultiselectionMode iMultiselectionMode, CATIADraft *& oNewDraft); \
      virtual HRESULT __stdcall AddNewVolumicDraft(CATIAReference * iFaceToDraft, CATIAReference * iNeutral, CatDraftNeutralPropagationMode iNeutralMode, CATIAReference * iParting, double iDirX, double iDirY, double iDirZ, CatDraftMode iMode, double iAngle, CatDraftMultiselectionMode iMultiselectionMode, CATLONG iType, CATIAReference * iVolumeSupport, CATIADraft *& oNewDraft); \
      virtual HRESULT __stdcall AddNewShell(CATIAReference * iFaceToRemove, double iInternalThickness, double iExternalThickness, CATIAShell *& oNewShell); \
      virtual HRESULT __stdcall AddNewThickness(CATIAReference * iFaceToThicken, double iOffset, CATIAThickness *& oNewThickness); \
      virtual HRESULT __stdcall AddNewChamfer(CATIAReference * iObjectToChamfer, CatChamferPropagation iPropagation, CatChamferMode iMode, CatChamferOrientation iOrientation, double iLength1, double iLength2OrAngle, CATIAChamfer *& oNewChamfer); \
      virtual HRESULT __stdcall AddNewMirror(CATIAReference * iMirroringElement, CATIAMirror *& oNewMirror); \
      virtual HRESULT __stdcall AddNewRectPattern(CATIABase * iShapeToCopy, CATLONG iNbOfCopiesInDir1, CATLONG iNbOfCopiesInDir2, double iStepInDir1, double iStepInDir2, CATLONG iShapeToCopyPositionAlongDir1, CATLONG iShapeToCopyPositionAlongDir2, CATIAReference * iDir1, CATIAReference * iDir2, CAT_VARIANT_BOOL iIsReversedDir1, CAT_VARIANT_BOOL iIsReversedDir2, double iRotationAngle, CATIARectPattern *& oNewRectPattern); \
      virtual HRESULT __stdcall AddNewGSDRectPattern(CATIABase * iShapeToCopy, CATLONG iNbOfCopiesInDir1, CATLONG iNbOfCopiesInDir2, double iStepInDir1, double iStepInDir2, CATLONG iShapeToCopyPositionAlongDir1, CATLONG iShapeToCopyPositionAlongDir2, CATIAReference * iDir1, CATIAReference * iDir2, CAT_VARIANT_BOOL iIsReversedDir1, CAT_VARIANT_BOOL iIsReversedDir2, double iRotationAngle, double iType, CATIARectPattern *& oNewRectPattern); \
      virtual HRESULT __stdcall AddNewSurfacicRectPattern(CATIABase * iShapeToCopy, CATLONG iNbOfCopiesInDir1, CATLONG iNbOfCopiesInDir2, double iStepInDir1, double iStepInDir2, CATLONG iShapeToCopyPositionAlongDir1, CATLONG iShapeToCopyPositionAlongDir2, CATIAReference * iDir1, CATIAReference * iDir2, CAT_VARIANT_BOOL iIsReversedDir1, CAT_VARIANT_BOOL iIsReversedDir2, double iRotationAngle, CATIARectPattern *& oNewRectPattern); \
      virtual HRESULT __stdcall AddNewCircPattern(CATIABase * iShapeToCopy, CATLONG iNbOfCopiesInRadialDir, CATLONG iNbOfCopiesInAngularDir, double iStepInRadialDir, double iStepInAngularDir, CATLONG iShapeToCopyPositionAlongRadialDir, CATLONG iShapeToCopyPositionAlongAngularDir, CATIAReference * iRotationCenter, CATIAReference * iRotationAxis, CAT_VARIANT_BOOL iIsReversedRotationAxis, double iRotationAngle, CAT_VARIANT_BOOL iIsRadiusAligned, CATIACircPattern *& oNewCircPattern); \
      virtual HRESULT __stdcall AddNewGSDCircPattern(CATIABase * iShapeToCopy, CATLONG iNbOfCopiesInRadialDir, CATLONG iNbOfCopiesInAngularDir, double iStepInRadialDir, double iStepInAngularDir, CATLONG iShapeToCopyPositionAlongRadialDir, CATLONG iShapeToCopyPositionAlongAngularDir, CATIAReference * iRotationCenter, CATIAReference * iRotationAxis, CAT_VARIANT_BOOL iIsReversedRotationAxis, double iRotationAngle, CAT_VARIANT_BOOL iIsRadiusAligned, CAT_VARIANT_BOOL iCompleteCrown, double iType, CATIACircPattern *& oNewCircPattern); \
      virtual HRESULT __stdcall AddNewSurfacicCircPattern(CATIABase * iShapeToCopy, CATLONG iNbOfCopiesInRadialDir, CATLONG iNbOfCopiesInAngularDir, double iStepInRadialDir, double iStepInAngularDir, CATLONG iShapeToCopyPositionAlongRadialDir, CATLONG iShapeToCopyPositionAlongAngularDir, CATIAReference * iRotationCenter, CATIAReference * iRotationAxis, CAT_VARIANT_BOOL iIsReversedRotationAxis, double iRotationAngle, CAT_VARIANT_BOOL iIsRadiusAligned, CAT_VARIANT_BOOL iCompleteCrown, CATIACircPattern *& oNewCircPattern); \
      virtual HRESULT __stdcall AddNewUserPattern(CATIABase * iShapeToCopy, CATLONG iNbOfCopies, CATIAUserPattern *& oNewUserPattern); \
      virtual HRESULT __stdcall AddNewSurfacicUserPattern(CATIABase * iShapeToCopy, CATLONG iNbOfCopies, CATIAUserPattern *& oNewUserPattern); \
      virtual HRESULT __stdcall AddNewRectPatternofList(CATIABase * iShapeToCopy, CATLONG iNbOfCopiesInDir1, CATLONG iNbOfCopiesInDir2, double iStepInDir1, double iStepInDir2, CATLONG iShapeToCopyPositionAlongDir1, CATLONG iShapeToCopyPositionAlongDir2, CATIAReference * iDir1, CATIAReference * iDir2, CAT_VARIANT_BOOL iIsReversedDir1, CAT_VARIANT_BOOL iIsReversedDir2, double iRotationAngle, CATIARectPattern *& oNewRectPattern); \
      virtual HRESULT __stdcall AddNewCircPatternofList(CATIABase * iShapeToCopy, CATLONG iNbOfCopiesInRadialDir, CATLONG iNbOfCopiesInAngularDir, double iStepInRadialDir, double iStepInAngularDir, CATLONG iShapeToCopyPositionAlongRadialDir, CATLONG iShapeToCopyPositionAlongAngularDir, CATIAReference * iRotationCenter, CATIAReference * iRotationAxis, CAT_VARIANT_BOOL iIsReversedRotationAxis, double iRotationAngle, CAT_VARIANT_BOOL iIsRadiusAligned, CATIACircPattern *& oNewCircPattern); \
      virtual HRESULT __stdcall AddNewUserPatternofList(CATIABase * iShapeToCopy, CATLONG iNbOfCopies, CATIAUserPattern *& oNewUserPattern); \
      virtual HRESULT __stdcall AddNewAssemble(CATIABody * iBodyToAssemble, CATIAAssemble *& oNewAssemble); \
      virtual HRESULT __stdcall AddNewAdd(CATIABody * iBodyToAdd, CATIAAdd *& oNewAdd); \
      virtual HRESULT __stdcall AddNewRemove(CATIABody * iBodyToRemove, CATIARemove *& oNewRemove); \
      virtual HRESULT __stdcall AddNewIntersect(CATIABody * iBodyToIntersect, CATIAIntersect *& oNewIntersect); \
      virtual HRESULT __stdcall AddNewTrim(CATIABody * iBodyToTrim, CATIATrim *& oNewTrim); \
      virtual HRESULT __stdcall AddNewSplit(CATIAReference * iSplittingElement, CatSplitSide iSplitSide, CATIASplit *& oNewSplit); \
      virtual HRESULT __stdcall AddNewSewSurface(CATIAReference * iSewingElement, CatSplitSide iSewingSide, CATIASewing *& oNewSewing); \
      virtual HRESULT __stdcall AddNewCloseSurface(CATIAReference * iCloseElement, CATIACloseSurface *& oNewClose); \
      virtual HRESULT __stdcall AddNewThickSurface(CATIAReference * iOffsetElement, CATLONG iIsensOffset, double iTopOffset, double iBotOffset, CATIAThickSurface *& oNewOffset); \
      virtual HRESULT __stdcall AddNewLoft(CATIABase *& oNewLoft); \
      virtual HRESULT __stdcall AddNewRemovedLoft(CATIABase *& oNewRemovedLoft); \
      virtual HRESULT __stdcall AddNewBlend(CATIABase *& oNewBlend); \
      virtual HRESULT __stdcall AddNewRemovedBlend(CATIABase *& oNewRemovedBlend); \
      virtual HRESULT __stdcall AddNewSymmetry2(CATIAReference * iReference, CATIABase *& oSymmetry); \
      virtual HRESULT __stdcall AddNewTranslate2(double iDistance, CATIABase *& oSymmetry); \
      virtual HRESULT __stdcall AddNewScaling2(CATIAReference * iScalingReference, double iFactor, CATIABase *& oNewScaling); \
      virtual HRESULT __stdcall AddNewRotate2(CATIAReference * iAxis, double iAngle, CATIABase *& oRotate); \
      virtual HRESULT __stdcall AddNewSolidCombine(CATIAReference * iProfileEltFirst, CATIAReference * iProfileEltSecond, CATIASolidCombine *& oNewSolidCombine); \
      virtual HRESULT __stdcall AddNewRemoveFace(CATIAReference * iKeepFaces, CATIAReference * iRemoveFaces, CATIARemoveFace *& oNewRemoveFace); \
      virtual HRESULT __stdcall AddNewReplaceFace(CATIAReference * iSplitPlane, CATIAReference * iRemoveFace, CatSplitSide iSplittingSide, CATIAReplaceFace *& oNewReplaceFace); \
      virtual HRESULT __stdcall AddNewVolumeAdd(CATIAReference * iBody1, CATIAReference * iBody2, double iType, CATIAAdd *& oNewAdd); \
      virtual HRESULT __stdcall AddNewVolumeRemove(CATIAReference * iBody1, CATIAReference * iBody2, double iType, CATIARemove *& oNewRemove); \
      virtual HRESULT __stdcall AddNewVolumeIntersect(CATIAReference * iBody1, CATIAReference * iBody2, double iType, CATIAIntersect *& oNewIntersect); \
      virtual HRESULT __stdcall AddNewVolumeSewSurface(CATLONG iType, CATIAReference * iSupportVolume, CATIAReference * iSewingElement, CatSplitSide iSewingSide, CATIASewing *& oNewSewing); \
      virtual HRESULT __stdcall AddNewVolumeShell(CATIAReference * iFaceToRemove, double iInternalThickness, double iExternalThickness, CATIAReference * iVolumeSupport, CATIAShell *& oNewShell); \
      virtual HRESULT __stdcall AddNewVolumeTrim(CATIAReference * iSupportVolume, CATIAReference * iCuttingVolume, CATIATrim *& oNewTrim); \
      virtual HRESULT __stdcall AddNewVolumeCloseSurface(CATIAReference * iCloseElement, CATIACloseSurface *& oNewClose); \
      virtual HRESULT __stdcall AddNewVolumeThickSurface(CATIAReference * iOffsetElement, CATLONG iIsensOffset, double iTopOffset, double iBotOffset, CATIAThickSurface *& oNewOffset); \
      virtual HRESULT __stdcall AddNewSolidFaceFillet(CATIAReference * iF1, CATIAReference * iF2, double iRadius, CATIAFaceFillet *& oNewFillet); \
      virtual HRESULT __stdcall AddNewSolidEdgeFilletWithConstantRadius(CATIAReference * iEdgeToFillet, CatFilletEdgePropagation iPropagMode, double iRadius, CATIAConstRadEdgeFillet *& oNewFillet); \
      virtual HRESULT __stdcall AddNewSolidEdgeFilletWithVaryingRadius(CATIAReference * iEdgeToFillet, CatFilletEdgePropagation iPropagMode, CatFilletVariation iVariationMode, double iDefaultRadius, CATIAVarRadEdgeFillet *& oNewFillet); \
      virtual HRESULT __stdcall AddNewSolidTritangentFillet(CATIAReference * iF1, CATIAReference * iF2, CATIAReference * iRemovedFace, CATIATritangentFillet *& oNewFillet); \
      virtual HRESULT __stdcall AddNewSurfaceFaceFillet(CATIAReference * iF1, CATIAReference * iF2, double iRadius, CATIAFaceFillet *& oNewFillet); \
      virtual HRESULT __stdcall AddNewSurfaceEdgeFilletWithConstantRadius(CATIAReference * iEdgeToFillet, CatFilletEdgePropagation iPropagMode, double iRadius, CATIAConstRadEdgeFillet *& oNewFillet); \
      virtual HRESULT __stdcall AddNewSurfaceEdgeFilletWithVaryingRadius(CATIAReference * iEdgeToFillet, CatFilletEdgePropagation iPropagMode, CatFilletVariation iVariationMode, double iDefaultRadius, CATIAVarRadEdgeFillet *& oNewFillet); \
      virtual HRESULT __stdcall AddNewSurfaceTritangentFillet(CATIAReference * iF1, CATIAReference * iF2, CATIAReference * iRemovedFace, CATIATritangentFillet *& oNewFillet); \
      virtual HRESULT __stdcall AddNewVolumeThickness(CATIAReference * iFaceToThicken, double iOffset, CATLONG iType, CATIAReference * iVolumeSupport, CATIAThickness *& oNewThickness); \
      virtual HRESULT __stdcall AddNewAutoFillet(double iFilletRadius, double iRoundRadius, CATIAAutoFillet *& oNewFillet); \
      virtual HRESULT __stdcall AddNewAxisToAxis2(CATIAReference * iReference, CATIAReference * iTarget, CATIABase *& oAxisToAxis); \
      virtual HRESULT __stdcall AddNewAffinity2(double XRatio, double YRatio, double ZRatio, CATIABase *& oAffinity); \
      virtual HRESULT __stdcall AddNewAutoDraft(double iDraftAngle, CATIAAutoDraft *& oNewDraft); \
      virtual HRESULT __stdcall AddNewSurfacicAutoFillet(double iFilletRadius, CATIAAutoFillet *& oNewFillet); \
      virtual HRESULT __stdcall AddNewSurfacicSewSurface(CATLONG iType, CATIAReference * iSupportSurface, CATIAReference * iSewingElement, CatSplitSide iSewingSide, CATIASewing *& oNewSewing); \
      virtual HRESULT __stdcall AddNewDefeaturing(CATIADefeaturing *& oNewDefeaturing); \
      virtual HRESULT  __stdcall get_Application(CATIAApplication *& oApplication); \
      virtual HRESULT  __stdcall get_Parent(CATBaseDispatch *& oParent); \
      virtual HRESULT  __stdcall get_Name(CATBSTR & oNameBSTR); \
      virtual HRESULT  __stdcall put_Name(const CATBSTR & iNameBSTR); \
      virtual HRESULT  __stdcall GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj); \
};



#define ENVTIEdeclare_CATIAShapeFactory(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
virtual HRESULT __stdcall AddNewPad(CATIASketch * iSketch, double iHeight, CATIAPad *& oNewPad); \
virtual HRESULT __stdcall AddNewPocket(CATIASketch * iSketch, double iHeight, CATIAPocket *& oNewPocket); \
virtual HRESULT __stdcall AddNewPadFromRef(CATIAReference * iProfileElt, double iHeight, CATIAPad *& oNewPad); \
virtual HRESULT __stdcall AddNewPocketFromRef(CATIAReference * iProfileElt, double iHeight, CATIAPocket *& oNewPocket); \
virtual HRESULT __stdcall AddNewHole(CATIAReference * iSupport, double iDepth, CATIAHole *& oNewHole); \
virtual HRESULT __stdcall AddNewHoleFromPoint(double iX, double iY, double iZ, CATIAReference * iSupport, double iDepth, CATIAHole *& oNewHole); \
virtual HRESULT __stdcall AddNewHoleFromRefPoint(CATIAReference * iOrigin, CATIAReference * iSupport, double iDepth, CATIAHole *& oNewHole); \
virtual HRESULT __stdcall AddNewHoleWithConstraint(double iX, double iY, double iZ, CATIAReference * iEdge, CATIAReference * iSupport, double iDepth, CATIAHole *& oNewHole); \
virtual HRESULT __stdcall AddNewHoleWith2Constraints(double iX, double iY, double iZ, CATIAReference * iEdge1, CATIAReference * iEdge2, CATIAReference * iSupport, double iDepth, CATIAHole *& oNewHole); \
virtual HRESULT __stdcall AddNewHoleFromSketch(CATIASketch * iSketch, double iDepth, CATIAHole *& oNewHole); \
virtual HRESULT __stdcall AddNewShaft(CATIASketch * iSketch, CATIAShaft *& oNewShaft); \
virtual HRESULT __stdcall AddNewGroove(CATIASketch * iSketch, CATIAGroove *& oNewGroove); \
virtual HRESULT __stdcall AddNewShaftFromRef(CATIAReference * iProfileElt, CATIAShaft *& oNewShaft); \
virtual HRESULT __stdcall AddNewGrooveFromRef(CATIAReference * iProfileElt, CATIAGroove *& oNewGroove); \
virtual HRESULT __stdcall AddNewThreadWithRef(CATIAReference * iLateralFace, CATIAReference * iLimitFace, CATIAThread *& oNewThread); \
virtual HRESULT __stdcall AddNewThreadWithOutRef(CATIAThread *& oNewThread); \
virtual HRESULT __stdcall AddNewRib(CATIASketch * iSketch, CATIASketch * iCenterCurve, CATIARib *& oNewRib); \
virtual HRESULT __stdcall AddNewRibFromRef(CATIAReference * iProfile, CATIAReference * iCenterCurve, CATIARib *& oNewRib); \
virtual HRESULT __stdcall AddNewSlot(CATIASketch * iSketch, CATIASketch * iCenterCurve, CATIASlot *& oNewSlot); \
virtual HRESULT __stdcall AddNewSlotFromRef(CATIAReference * iProfile, CATIAReference * iCenterCurve, CATIASlot *& oNewSlot); \
virtual HRESULT __stdcall AddNewStiffener(CATIASketch * iSketch, CATIAStiffener *& oNewStifffener); \
virtual HRESULT __stdcall AddNewStiffenerFromRef(CATIAReference * iProfileElt, CATIAStiffener *& oNewStiffener); \
virtual HRESULT __stdcall AddNewScaling(CATIAReference * iScalingReference, double iFactor, CATIAScaling *& oNewScaling); \
virtual HRESULT __stdcall AddNewFaceFillet(CATIAReference * iF1, CATIAReference * iF2, double iRadius, CATIAFaceFillet *& oNewFillet); \
virtual HRESULT __stdcall AddNewEdgeFilletWithConstantRadius(CATIAReference * iEdgeToFillet, CatFilletEdgePropagation iPropagMode, double iRadius, CATIAConstRadEdgeFillet *& oNewFillet); \
virtual HRESULT __stdcall AddNewEdgeFilletWithVaryingRadius(CATIAReference * iEdgeToFillet, CatFilletEdgePropagation iPropagMode, CatFilletVariation iVariationMode, double iDefaultRadius, CATIAVarRadEdgeFillet *& oNewFillet); \
virtual HRESULT __stdcall AddNewTritangentFillet(CATIAReference * iF1, CATIAReference * iF2, CATIAReference * iRemovedFace, CATIATritangentFillet *& oNewFillet); \
virtual HRESULT __stdcall AddNewDraft(CATIAReference * iFaceToDraft, CATIAReference * iNeutral, CatDraftNeutralPropagationMode iNeutralMode, CATIAReference * iParting, double iDirX, double iDirY, double iDirZ, CatDraftMode iMode, double iAngle, CatDraftMultiselectionMode iMultiselectionMode, CATIADraft *& oNewDraft); \
virtual HRESULT __stdcall AddNewVolumicDraft(CATIAReference * iFaceToDraft, CATIAReference * iNeutral, CatDraftNeutralPropagationMode iNeutralMode, CATIAReference * iParting, double iDirX, double iDirY, double iDirZ, CatDraftMode iMode, double iAngle, CatDraftMultiselectionMode iMultiselectionMode, CATLONG iType, CATIAReference * iVolumeSupport, CATIADraft *& oNewDraft); \
virtual HRESULT __stdcall AddNewShell(CATIAReference * iFaceToRemove, double iInternalThickness, double iExternalThickness, CATIAShell *& oNewShell); \
virtual HRESULT __stdcall AddNewThickness(CATIAReference * iFaceToThicken, double iOffset, CATIAThickness *& oNewThickness); \
virtual HRESULT __stdcall AddNewChamfer(CATIAReference * iObjectToChamfer, CatChamferPropagation iPropagation, CatChamferMode iMode, CatChamferOrientation iOrientation, double iLength1, double iLength2OrAngle, CATIAChamfer *& oNewChamfer); \
virtual HRESULT __stdcall AddNewMirror(CATIAReference * iMirroringElement, CATIAMirror *& oNewMirror); \
virtual HRESULT __stdcall AddNewRectPattern(CATIABase * iShapeToCopy, CATLONG iNbOfCopiesInDir1, CATLONG iNbOfCopiesInDir2, double iStepInDir1, double iStepInDir2, CATLONG iShapeToCopyPositionAlongDir1, CATLONG iShapeToCopyPositionAlongDir2, CATIAReference * iDir1, CATIAReference * iDir2, CAT_VARIANT_BOOL iIsReversedDir1, CAT_VARIANT_BOOL iIsReversedDir2, double iRotationAngle, CATIARectPattern *& oNewRectPattern); \
virtual HRESULT __stdcall AddNewGSDRectPattern(CATIABase * iShapeToCopy, CATLONG iNbOfCopiesInDir1, CATLONG iNbOfCopiesInDir2, double iStepInDir1, double iStepInDir2, CATLONG iShapeToCopyPositionAlongDir1, CATLONG iShapeToCopyPositionAlongDir2, CATIAReference * iDir1, CATIAReference * iDir2, CAT_VARIANT_BOOL iIsReversedDir1, CAT_VARIANT_BOOL iIsReversedDir2, double iRotationAngle, double iType, CATIARectPattern *& oNewRectPattern); \
virtual HRESULT __stdcall AddNewSurfacicRectPattern(CATIABase * iShapeToCopy, CATLONG iNbOfCopiesInDir1, CATLONG iNbOfCopiesInDir2, double iStepInDir1, double iStepInDir2, CATLONG iShapeToCopyPositionAlongDir1, CATLONG iShapeToCopyPositionAlongDir2, CATIAReference * iDir1, CATIAReference * iDir2, CAT_VARIANT_BOOL iIsReversedDir1, CAT_VARIANT_BOOL iIsReversedDir2, double iRotationAngle, CATIARectPattern *& oNewRectPattern); \
virtual HRESULT __stdcall AddNewCircPattern(CATIABase * iShapeToCopy, CATLONG iNbOfCopiesInRadialDir, CATLONG iNbOfCopiesInAngularDir, double iStepInRadialDir, double iStepInAngularDir, CATLONG iShapeToCopyPositionAlongRadialDir, CATLONG iShapeToCopyPositionAlongAngularDir, CATIAReference * iRotationCenter, CATIAReference * iRotationAxis, CAT_VARIANT_BOOL iIsReversedRotationAxis, double iRotationAngle, CAT_VARIANT_BOOL iIsRadiusAligned, CATIACircPattern *& oNewCircPattern); \
virtual HRESULT __stdcall AddNewGSDCircPattern(CATIABase * iShapeToCopy, CATLONG iNbOfCopiesInRadialDir, CATLONG iNbOfCopiesInAngularDir, double iStepInRadialDir, double iStepInAngularDir, CATLONG iShapeToCopyPositionAlongRadialDir, CATLONG iShapeToCopyPositionAlongAngularDir, CATIAReference * iRotationCenter, CATIAReference * iRotationAxis, CAT_VARIANT_BOOL iIsReversedRotationAxis, double iRotationAngle, CAT_VARIANT_BOOL iIsRadiusAligned, CAT_VARIANT_BOOL iCompleteCrown, double iType, CATIACircPattern *& oNewCircPattern); \
virtual HRESULT __stdcall AddNewSurfacicCircPattern(CATIABase * iShapeToCopy, CATLONG iNbOfCopiesInRadialDir, CATLONG iNbOfCopiesInAngularDir, double iStepInRadialDir, double iStepInAngularDir, CATLONG iShapeToCopyPositionAlongRadialDir, CATLONG iShapeToCopyPositionAlongAngularDir, CATIAReference * iRotationCenter, CATIAReference * iRotationAxis, CAT_VARIANT_BOOL iIsReversedRotationAxis, double iRotationAngle, CAT_VARIANT_BOOL iIsRadiusAligned, CAT_VARIANT_BOOL iCompleteCrown, CATIACircPattern *& oNewCircPattern); \
virtual HRESULT __stdcall AddNewUserPattern(CATIABase * iShapeToCopy, CATLONG iNbOfCopies, CATIAUserPattern *& oNewUserPattern); \
virtual HRESULT __stdcall AddNewSurfacicUserPattern(CATIABase * iShapeToCopy, CATLONG iNbOfCopies, CATIAUserPattern *& oNewUserPattern); \
virtual HRESULT __stdcall AddNewRectPatternofList(CATIABase * iShapeToCopy, CATLONG iNbOfCopiesInDir1, CATLONG iNbOfCopiesInDir2, double iStepInDir1, double iStepInDir2, CATLONG iShapeToCopyPositionAlongDir1, CATLONG iShapeToCopyPositionAlongDir2, CATIAReference * iDir1, CATIAReference * iDir2, CAT_VARIANT_BOOL iIsReversedDir1, CAT_VARIANT_BOOL iIsReversedDir2, double iRotationAngle, CATIARectPattern *& oNewRectPattern); \
virtual HRESULT __stdcall AddNewCircPatternofList(CATIABase * iShapeToCopy, CATLONG iNbOfCopiesInRadialDir, CATLONG iNbOfCopiesInAngularDir, double iStepInRadialDir, double iStepInAngularDir, CATLONG iShapeToCopyPositionAlongRadialDir, CATLONG iShapeToCopyPositionAlongAngularDir, CATIAReference * iRotationCenter, CATIAReference * iRotationAxis, CAT_VARIANT_BOOL iIsReversedRotationAxis, double iRotationAngle, CAT_VARIANT_BOOL iIsRadiusAligned, CATIACircPattern *& oNewCircPattern); \
virtual HRESULT __stdcall AddNewUserPatternofList(CATIABase * iShapeToCopy, CATLONG iNbOfCopies, CATIAUserPattern *& oNewUserPattern); \
virtual HRESULT __stdcall AddNewAssemble(CATIABody * iBodyToAssemble, CATIAAssemble *& oNewAssemble); \
virtual HRESULT __stdcall AddNewAdd(CATIABody * iBodyToAdd, CATIAAdd *& oNewAdd); \
virtual HRESULT __stdcall AddNewRemove(CATIABody * iBodyToRemove, CATIARemove *& oNewRemove); \
virtual HRESULT __stdcall AddNewIntersect(CATIABody * iBodyToIntersect, CATIAIntersect *& oNewIntersect); \
virtual HRESULT __stdcall AddNewTrim(CATIABody * iBodyToTrim, CATIATrim *& oNewTrim); \
virtual HRESULT __stdcall AddNewSplit(CATIAReference * iSplittingElement, CatSplitSide iSplitSide, CATIASplit *& oNewSplit); \
virtual HRESULT __stdcall AddNewSewSurface(CATIAReference * iSewingElement, CatSplitSide iSewingSide, CATIASewing *& oNewSewing); \
virtual HRESULT __stdcall AddNewCloseSurface(CATIAReference * iCloseElement, CATIACloseSurface *& oNewClose); \
virtual HRESULT __stdcall AddNewThickSurface(CATIAReference * iOffsetElement, CATLONG iIsensOffset, double iTopOffset, double iBotOffset, CATIAThickSurface *& oNewOffset); \
virtual HRESULT __stdcall AddNewLoft(CATIABase *& oNewLoft); \
virtual HRESULT __stdcall AddNewRemovedLoft(CATIABase *& oNewRemovedLoft); \
virtual HRESULT __stdcall AddNewBlend(CATIABase *& oNewBlend); \
virtual HRESULT __stdcall AddNewRemovedBlend(CATIABase *& oNewRemovedBlend); \
virtual HRESULT __stdcall AddNewSymmetry2(CATIAReference * iReference, CATIABase *& oSymmetry); \
virtual HRESULT __stdcall AddNewTranslate2(double iDistance, CATIABase *& oSymmetry); \
virtual HRESULT __stdcall AddNewScaling2(CATIAReference * iScalingReference, double iFactor, CATIABase *& oNewScaling); \
virtual HRESULT __stdcall AddNewRotate2(CATIAReference * iAxis, double iAngle, CATIABase *& oRotate); \
virtual HRESULT __stdcall AddNewSolidCombine(CATIAReference * iProfileEltFirst, CATIAReference * iProfileEltSecond, CATIASolidCombine *& oNewSolidCombine); \
virtual HRESULT __stdcall AddNewRemoveFace(CATIAReference * iKeepFaces, CATIAReference * iRemoveFaces, CATIARemoveFace *& oNewRemoveFace); \
virtual HRESULT __stdcall AddNewReplaceFace(CATIAReference * iSplitPlane, CATIAReference * iRemoveFace, CatSplitSide iSplittingSide, CATIAReplaceFace *& oNewReplaceFace); \
virtual HRESULT __stdcall AddNewVolumeAdd(CATIAReference * iBody1, CATIAReference * iBody2, double iType, CATIAAdd *& oNewAdd); \
virtual HRESULT __stdcall AddNewVolumeRemove(CATIAReference * iBody1, CATIAReference * iBody2, double iType, CATIARemove *& oNewRemove); \
virtual HRESULT __stdcall AddNewVolumeIntersect(CATIAReference * iBody1, CATIAReference * iBody2, double iType, CATIAIntersect *& oNewIntersect); \
virtual HRESULT __stdcall AddNewVolumeSewSurface(CATLONG iType, CATIAReference * iSupportVolume, CATIAReference * iSewingElement, CatSplitSide iSewingSide, CATIASewing *& oNewSewing); \
virtual HRESULT __stdcall AddNewVolumeShell(CATIAReference * iFaceToRemove, double iInternalThickness, double iExternalThickness, CATIAReference * iVolumeSupport, CATIAShell *& oNewShell); \
virtual HRESULT __stdcall AddNewVolumeTrim(CATIAReference * iSupportVolume, CATIAReference * iCuttingVolume, CATIATrim *& oNewTrim); \
virtual HRESULT __stdcall AddNewVolumeCloseSurface(CATIAReference * iCloseElement, CATIACloseSurface *& oNewClose); \
virtual HRESULT __stdcall AddNewVolumeThickSurface(CATIAReference * iOffsetElement, CATLONG iIsensOffset, double iTopOffset, double iBotOffset, CATIAThickSurface *& oNewOffset); \
virtual HRESULT __stdcall AddNewSolidFaceFillet(CATIAReference * iF1, CATIAReference * iF2, double iRadius, CATIAFaceFillet *& oNewFillet); \
virtual HRESULT __stdcall AddNewSolidEdgeFilletWithConstantRadius(CATIAReference * iEdgeToFillet, CatFilletEdgePropagation iPropagMode, double iRadius, CATIAConstRadEdgeFillet *& oNewFillet); \
virtual HRESULT __stdcall AddNewSolidEdgeFilletWithVaryingRadius(CATIAReference * iEdgeToFillet, CatFilletEdgePropagation iPropagMode, CatFilletVariation iVariationMode, double iDefaultRadius, CATIAVarRadEdgeFillet *& oNewFillet); \
virtual HRESULT __stdcall AddNewSolidTritangentFillet(CATIAReference * iF1, CATIAReference * iF2, CATIAReference * iRemovedFace, CATIATritangentFillet *& oNewFillet); \
virtual HRESULT __stdcall AddNewSurfaceFaceFillet(CATIAReference * iF1, CATIAReference * iF2, double iRadius, CATIAFaceFillet *& oNewFillet); \
virtual HRESULT __stdcall AddNewSurfaceEdgeFilletWithConstantRadius(CATIAReference * iEdgeToFillet, CatFilletEdgePropagation iPropagMode, double iRadius, CATIAConstRadEdgeFillet *& oNewFillet); \
virtual HRESULT __stdcall AddNewSurfaceEdgeFilletWithVaryingRadius(CATIAReference * iEdgeToFillet, CatFilletEdgePropagation iPropagMode, CatFilletVariation iVariationMode, double iDefaultRadius, CATIAVarRadEdgeFillet *& oNewFillet); \
virtual HRESULT __stdcall AddNewSurfaceTritangentFillet(CATIAReference * iF1, CATIAReference * iF2, CATIAReference * iRemovedFace, CATIATritangentFillet *& oNewFillet); \
virtual HRESULT __stdcall AddNewVolumeThickness(CATIAReference * iFaceToThicken, double iOffset, CATLONG iType, CATIAReference * iVolumeSupport, CATIAThickness *& oNewThickness); \
virtual HRESULT __stdcall AddNewAutoFillet(double iFilletRadius, double iRoundRadius, CATIAAutoFillet *& oNewFillet); \
virtual HRESULT __stdcall AddNewAxisToAxis2(CATIAReference * iReference, CATIAReference * iTarget, CATIABase *& oAxisToAxis); \
virtual HRESULT __stdcall AddNewAffinity2(double XRatio, double YRatio, double ZRatio, CATIABase *& oAffinity); \
virtual HRESULT __stdcall AddNewAutoDraft(double iDraftAngle, CATIAAutoDraft *& oNewDraft); \
virtual HRESULT __stdcall AddNewSurfacicAutoFillet(double iFilletRadius, CATIAAutoFillet *& oNewFillet); \
virtual HRESULT __stdcall AddNewSurfacicSewSurface(CATLONG iType, CATIAReference * iSupportSurface, CATIAReference * iSewingElement, CatSplitSide iSewingSide, CATIASewing *& oNewSewing); \
virtual HRESULT __stdcall AddNewDefeaturing(CATIADefeaturing *& oNewDefeaturing); \
virtual HRESULT  __stdcall get_Application(CATIAApplication *& oApplication); \
virtual HRESULT  __stdcall get_Parent(CATBaseDispatch *& oParent); \
virtual HRESULT  __stdcall get_Name(CATBSTR & oNameBSTR); \
virtual HRESULT  __stdcall put_Name(const CATBSTR & iNameBSTR); \
virtual HRESULT  __stdcall GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj); \


#define ENVTIEdefine_CATIAShapeFactory(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
HRESULT __stdcall  ENVTIEName::AddNewPad(CATIASketch * iSketch, double iHeight, CATIAPad *& oNewPad) \
{ \
return (ENVTIECALL(CATIAShapeFactory,ENVTIETypeLetter,ENVTIELetter)AddNewPad(iSketch,iHeight,oNewPad)); \
} \
HRESULT __stdcall  ENVTIEName::AddNewPocket(CATIASketch * iSketch, double iHeight, CATIAPocket *& oNewPocket) \
{ \
return (ENVTIECALL(CATIAShapeFactory,ENVTIETypeLetter,ENVTIELetter)AddNewPocket(iSketch,iHeight,oNewPocket)); \
} \
HRESULT __stdcall  ENVTIEName::AddNewPadFromRef(CATIAReference * iProfileElt, double iHeight, CATIAPad *& oNewPad) \
{ \
return (ENVTIECALL(CATIAShapeFactory,ENVTIETypeLetter,ENVTIELetter)AddNewPadFromRef(iProfileElt,iHeight,oNewPad)); \
} \
HRESULT __stdcall  ENVTIEName::AddNewPocketFromRef(CATIAReference * iProfileElt, double iHeight, CATIAPocket *& oNewPocket) \
{ \
return (ENVTIECALL(CATIAShapeFactory,ENVTIETypeLetter,ENVTIELetter)AddNewPocketFromRef(iProfileElt,iHeight,oNewPocket)); \
} \
HRESULT __stdcall  ENVTIEName::AddNewHole(CATIAReference * iSupport, double iDepth, CATIAHole *& oNewHole) \
{ \
return (ENVTIECALL(CATIAShapeFactory,ENVTIETypeLetter,ENVTIELetter)AddNewHole(iSupport,iDepth,oNewHole)); \
} \
HRESULT __stdcall  ENVTIEName::AddNewHoleFromPoint(double iX, double iY, double iZ, CATIAReference * iSupport, double iDepth, CATIAHole *& oNewHole) \
{ \
return (ENVTIECALL(CATIAShapeFactory,ENVTIETypeLetter,ENVTIELetter)AddNewHoleFromPoint(iX,iY,iZ,iSupport,iDepth,oNewHole)); \
} \
HRESULT __stdcall  ENVTIEName::AddNewHoleFromRefPoint(CATIAReference * iOrigin, CATIAReference * iSupport, double iDepth, CATIAHole *& oNewHole) \
{ \
return (ENVTIECALL(CATIAShapeFactory,ENVTIETypeLetter,ENVTIELetter)AddNewHoleFromRefPoint(iOrigin,iSupport,iDepth,oNewHole)); \
} \
HRESULT __stdcall  ENVTIEName::AddNewHoleWithConstraint(double iX, double iY, double iZ, CATIAReference * iEdge, CATIAReference * iSupport, double iDepth, CATIAHole *& oNewHole) \
{ \
return (ENVTIECALL(CATIAShapeFactory,ENVTIETypeLetter,ENVTIELetter)AddNewHoleWithConstraint(iX,iY,iZ,iEdge,iSupport,iDepth,oNewHole)); \
} \
HRESULT __stdcall  ENVTIEName::AddNewHoleWith2Constraints(double iX, double iY, double iZ, CATIAReference * iEdge1, CATIAReference * iEdge2, CATIAReference * iSupport, double iDepth, CATIAHole *& oNewHole) \
{ \
return (ENVTIECALL(CATIAShapeFactory,ENVTIETypeLetter,ENVTIELetter)AddNewHoleWith2Constraints(iX,iY,iZ,iEdge1,iEdge2,iSupport,iDepth,oNewHole)); \
} \
HRESULT __stdcall  ENVTIEName::AddNewHoleFromSketch(CATIASketch * iSketch, double iDepth, CATIAHole *& oNewHole) \
{ \
return (ENVTIECALL(CATIAShapeFactory,ENVTIETypeLetter,ENVTIELetter)AddNewHoleFromSketch(iSketch,iDepth,oNewHole)); \
} \
HRESULT __stdcall  ENVTIEName::AddNewShaft(CATIASketch * iSketch, CATIAShaft *& oNewShaft) \
{ \
return (ENVTIECALL(CATIAShapeFactory,ENVTIETypeLetter,ENVTIELetter)AddNewShaft(iSketch,oNewShaft)); \
} \
HRESULT __stdcall  ENVTIEName::AddNewGroove(CATIASketch * iSketch, CATIAGroove *& oNewGroove) \
{ \
return (ENVTIECALL(CATIAShapeFactory,ENVTIETypeLetter,ENVTIELetter)AddNewGroove(iSketch,oNewGroove)); \
} \
HRESULT __stdcall  ENVTIEName::AddNewShaftFromRef(CATIAReference * iProfileElt, CATIAShaft *& oNewShaft) \
{ \
return (ENVTIECALL(CATIAShapeFactory,ENVTIETypeLetter,ENVTIELetter)AddNewShaftFromRef(iProfileElt,oNewShaft)); \
} \
HRESULT __stdcall  ENVTIEName::AddNewGrooveFromRef(CATIAReference * iProfileElt, CATIAGroove *& oNewGroove) \
{ \
return (ENVTIECALL(CATIAShapeFactory,ENVTIETypeLetter,ENVTIELetter)AddNewGrooveFromRef(iProfileElt,oNewGroove)); \
} \
HRESULT __stdcall  ENVTIEName::AddNewThreadWithRef(CATIAReference * iLateralFace, CATIAReference * iLimitFace, CATIAThread *& oNewThread) \
{ \
return (ENVTIECALL(CATIAShapeFactory,ENVTIETypeLetter,ENVTIELetter)AddNewThreadWithRef(iLateralFace,iLimitFace,oNewThread)); \
} \
HRESULT __stdcall  ENVTIEName::AddNewThreadWithOutRef(CATIAThread *& oNewThread) \
{ \
return (ENVTIECALL(CATIAShapeFactory,ENVTIETypeLetter,ENVTIELetter)AddNewThreadWithOutRef(oNewThread)); \
} \
HRESULT __stdcall  ENVTIEName::AddNewRib(CATIASketch * iSketch, CATIASketch * iCenterCurve, CATIARib *& oNewRib) \
{ \
return (ENVTIECALL(CATIAShapeFactory,ENVTIETypeLetter,ENVTIELetter)AddNewRib(iSketch,iCenterCurve,oNewRib)); \
} \
HRESULT __stdcall  ENVTIEName::AddNewRibFromRef(CATIAReference * iProfile, CATIAReference * iCenterCurve, CATIARib *& oNewRib) \
{ \
return (ENVTIECALL(CATIAShapeFactory,ENVTIETypeLetter,ENVTIELetter)AddNewRibFromRef(iProfile,iCenterCurve,oNewRib)); \
} \
HRESULT __stdcall  ENVTIEName::AddNewSlot(CATIASketch * iSketch, CATIASketch * iCenterCurve, CATIASlot *& oNewSlot) \
{ \
return (ENVTIECALL(CATIAShapeFactory,ENVTIETypeLetter,ENVTIELetter)AddNewSlot(iSketch,iCenterCurve,oNewSlot)); \
} \
HRESULT __stdcall  ENVTIEName::AddNewSlotFromRef(CATIAReference * iProfile, CATIAReference * iCenterCurve, CATIASlot *& oNewSlot) \
{ \
return (ENVTIECALL(CATIAShapeFactory,ENVTIETypeLetter,ENVTIELetter)AddNewSlotFromRef(iProfile,iCenterCurve,oNewSlot)); \
} \
HRESULT __stdcall  ENVTIEName::AddNewStiffener(CATIASketch * iSketch, CATIAStiffener *& oNewStifffener) \
{ \
return (ENVTIECALL(CATIAShapeFactory,ENVTIETypeLetter,ENVTIELetter)AddNewStiffener(iSketch,oNewStifffener)); \
} \
HRESULT __stdcall  ENVTIEName::AddNewStiffenerFromRef(CATIAReference * iProfileElt, CATIAStiffener *& oNewStiffener) \
{ \
return (ENVTIECALL(CATIAShapeFactory,ENVTIETypeLetter,ENVTIELetter)AddNewStiffenerFromRef(iProfileElt,oNewStiffener)); \
} \
HRESULT __stdcall  ENVTIEName::AddNewScaling(CATIAReference * iScalingReference, double iFactor, CATIAScaling *& oNewScaling) \
{ \
return (ENVTIECALL(CATIAShapeFactory,ENVTIETypeLetter,ENVTIELetter)AddNewScaling(iScalingReference,iFactor,oNewScaling)); \
} \
HRESULT __stdcall  ENVTIEName::AddNewFaceFillet(CATIAReference * iF1, CATIAReference * iF2, double iRadius, CATIAFaceFillet *& oNewFillet) \
{ \
return (ENVTIECALL(CATIAShapeFactory,ENVTIETypeLetter,ENVTIELetter)AddNewFaceFillet(iF1,iF2,iRadius,oNewFillet)); \
} \
HRESULT __stdcall  ENVTIEName::AddNewEdgeFilletWithConstantRadius(CATIAReference * iEdgeToFillet, CatFilletEdgePropagation iPropagMode, double iRadius, CATIAConstRadEdgeFillet *& oNewFillet) \
{ \
return (ENVTIECALL(CATIAShapeFactory,ENVTIETypeLetter,ENVTIELetter)AddNewEdgeFilletWithConstantRadius(iEdgeToFillet,iPropagMode,iRadius,oNewFillet)); \
} \
HRESULT __stdcall  ENVTIEName::AddNewEdgeFilletWithVaryingRadius(CATIAReference * iEdgeToFillet, CatFilletEdgePropagation iPropagMode, CatFilletVariation iVariationMode, double iDefaultRadius, CATIAVarRadEdgeFillet *& oNewFillet) \
{ \
return (ENVTIECALL(CATIAShapeFactory,ENVTIETypeLetter,ENVTIELetter)AddNewEdgeFilletWithVaryingRadius(iEdgeToFillet,iPropagMode,iVariationMode,iDefaultRadius,oNewFillet)); \
} \
HRESULT __stdcall  ENVTIEName::AddNewTritangentFillet(CATIAReference * iF1, CATIAReference * iF2, CATIAReference * iRemovedFace, CATIATritangentFillet *& oNewFillet) \
{ \
return (ENVTIECALL(CATIAShapeFactory,ENVTIETypeLetter,ENVTIELetter)AddNewTritangentFillet(iF1,iF2,iRemovedFace,oNewFillet)); \
} \
HRESULT __stdcall  ENVTIEName::AddNewDraft(CATIAReference * iFaceToDraft, CATIAReference * iNeutral, CatDraftNeutralPropagationMode iNeutralMode, CATIAReference * iParting, double iDirX, double iDirY, double iDirZ, CatDraftMode iMode, double iAngle, CatDraftMultiselectionMode iMultiselectionMode, CATIADraft *& oNewDraft) \
{ \
return (ENVTIECALL(CATIAShapeFactory,ENVTIETypeLetter,ENVTIELetter)AddNewDraft(iFaceToDraft,iNeutral,iNeutralMode,iParting,iDirX,iDirY,iDirZ,iMode,iAngle,iMultiselectionMode,oNewDraft)); \
} \
HRESULT __stdcall  ENVTIEName::AddNewVolumicDraft(CATIAReference * iFaceToDraft, CATIAReference * iNeutral, CatDraftNeutralPropagationMode iNeutralMode, CATIAReference * iParting, double iDirX, double iDirY, double iDirZ, CatDraftMode iMode, double iAngle, CatDraftMultiselectionMode iMultiselectionMode, CATLONG iType, CATIAReference * iVolumeSupport, CATIADraft *& oNewDraft) \
{ \
return (ENVTIECALL(CATIAShapeFactory,ENVTIETypeLetter,ENVTIELetter)AddNewVolumicDraft(iFaceToDraft,iNeutral,iNeutralMode,iParting,iDirX,iDirY,iDirZ,iMode,iAngle,iMultiselectionMode,iType,iVolumeSupport,oNewDraft)); \
} \
HRESULT __stdcall  ENVTIEName::AddNewShell(CATIAReference * iFaceToRemove, double iInternalThickness, double iExternalThickness, CATIAShell *& oNewShell) \
{ \
return (ENVTIECALL(CATIAShapeFactory,ENVTIETypeLetter,ENVTIELetter)AddNewShell(iFaceToRemove,iInternalThickness,iExternalThickness,oNewShell)); \
} \
HRESULT __stdcall  ENVTIEName::AddNewThickness(CATIAReference * iFaceToThicken, double iOffset, CATIAThickness *& oNewThickness) \
{ \
return (ENVTIECALL(CATIAShapeFactory,ENVTIETypeLetter,ENVTIELetter)AddNewThickness(iFaceToThicken,iOffset,oNewThickness)); \
} \
HRESULT __stdcall  ENVTIEName::AddNewChamfer(CATIAReference * iObjectToChamfer, CatChamferPropagation iPropagation, CatChamferMode iMode, CatChamferOrientation iOrientation, double iLength1, double iLength2OrAngle, CATIAChamfer *& oNewChamfer) \
{ \
return (ENVTIECALL(CATIAShapeFactory,ENVTIETypeLetter,ENVTIELetter)AddNewChamfer(iObjectToChamfer,iPropagation,iMode,iOrientation,iLength1,iLength2OrAngle,oNewChamfer)); \
} \
HRESULT __stdcall  ENVTIEName::AddNewMirror(CATIAReference * iMirroringElement, CATIAMirror *& oNewMirror) \
{ \
return (ENVTIECALL(CATIAShapeFactory,ENVTIETypeLetter,ENVTIELetter)AddNewMirror(iMirroringElement,oNewMirror)); \
} \
HRESULT __stdcall  ENVTIEName::AddNewRectPattern(CATIABase * iShapeToCopy, CATLONG iNbOfCopiesInDir1, CATLONG iNbOfCopiesInDir2, double iStepInDir1, double iStepInDir2, CATLONG iShapeToCopyPositionAlongDir1, CATLONG iShapeToCopyPositionAlongDir2, CATIAReference * iDir1, CATIAReference * iDir2, CAT_VARIANT_BOOL iIsReversedDir1, CAT_VARIANT_BOOL iIsReversedDir2, double iRotationAngle, CATIARectPattern *& oNewRectPattern) \
{ \
return (ENVTIECALL(CATIAShapeFactory,ENVTIETypeLetter,ENVTIELetter)AddNewRectPattern(iShapeToCopy,iNbOfCopiesInDir1,iNbOfCopiesInDir2,iStepInDir1,iStepInDir2,iShapeToCopyPositionAlongDir1,iShapeToCopyPositionAlongDir2,iDir1,iDir2,iIsReversedDir1,iIsReversedDir2,iRotationAngle,oNewRectPattern)); \
} \
HRESULT __stdcall  ENVTIEName::AddNewGSDRectPattern(CATIABase * iShapeToCopy, CATLONG iNbOfCopiesInDir1, CATLONG iNbOfCopiesInDir2, double iStepInDir1, double iStepInDir2, CATLONG iShapeToCopyPositionAlongDir1, CATLONG iShapeToCopyPositionAlongDir2, CATIAReference * iDir1, CATIAReference * iDir2, CAT_VARIANT_BOOL iIsReversedDir1, CAT_VARIANT_BOOL iIsReversedDir2, double iRotationAngle, double iType, CATIARectPattern *& oNewRectPattern) \
{ \
return (ENVTIECALL(CATIAShapeFactory,ENVTIETypeLetter,ENVTIELetter)AddNewGSDRectPattern(iShapeToCopy,iNbOfCopiesInDir1,iNbOfCopiesInDir2,iStepInDir1,iStepInDir2,iShapeToCopyPositionAlongDir1,iShapeToCopyPositionAlongDir2,iDir1,iDir2,iIsReversedDir1,iIsReversedDir2,iRotationAngle,iType,oNewRectPattern)); \
} \
HRESULT __stdcall  ENVTIEName::AddNewSurfacicRectPattern(CATIABase * iShapeToCopy, CATLONG iNbOfCopiesInDir1, CATLONG iNbOfCopiesInDir2, double iStepInDir1, double iStepInDir2, CATLONG iShapeToCopyPositionAlongDir1, CATLONG iShapeToCopyPositionAlongDir2, CATIAReference * iDir1, CATIAReference * iDir2, CAT_VARIANT_BOOL iIsReversedDir1, CAT_VARIANT_BOOL iIsReversedDir2, double iRotationAngle, CATIARectPattern *& oNewRectPattern) \
{ \
return (ENVTIECALL(CATIAShapeFactory,ENVTIETypeLetter,ENVTIELetter)AddNewSurfacicRectPattern(iShapeToCopy,iNbOfCopiesInDir1,iNbOfCopiesInDir2,iStepInDir1,iStepInDir2,iShapeToCopyPositionAlongDir1,iShapeToCopyPositionAlongDir2,iDir1,iDir2,iIsReversedDir1,iIsReversedDir2,iRotationAngle,oNewRectPattern)); \
} \
HRESULT __stdcall  ENVTIEName::AddNewCircPattern(CATIABase * iShapeToCopy, CATLONG iNbOfCopiesInRadialDir, CATLONG iNbOfCopiesInAngularDir, double iStepInRadialDir, double iStepInAngularDir, CATLONG iShapeToCopyPositionAlongRadialDir, CATLONG iShapeToCopyPositionAlongAngularDir, CATIAReference * iRotationCenter, CATIAReference * iRotationAxis, CAT_VARIANT_BOOL iIsReversedRotationAxis, double iRotationAngle, CAT_VARIANT_BOOL iIsRadiusAligned, CATIACircPattern *& oNewCircPattern) \
{ \
return (ENVTIECALL(CATIAShapeFactory,ENVTIETypeLetter,ENVTIELetter)AddNewCircPattern(iShapeToCopy,iNbOfCopiesInRadialDir,iNbOfCopiesInAngularDir,iStepInRadialDir,iStepInAngularDir,iShapeToCopyPositionAlongRadialDir,iShapeToCopyPositionAlongAngularDir,iRotationCenter,iRotationAxis,iIsReversedRotationAxis,iRotationAngle,iIsRadiusAligned,oNewCircPattern)); \
} \
HRESULT __stdcall  ENVTIEName::AddNewGSDCircPattern(CATIABase * iShapeToCopy, CATLONG iNbOfCopiesInRadialDir, CATLONG iNbOfCopiesInAngularDir, double iStepInRadialDir, double iStepInAngularDir, CATLONG iShapeToCopyPositionAlongRadialDir, CATLONG iShapeToCopyPositionAlongAngularDir, CATIAReference * iRotationCenter, CATIAReference * iRotationAxis, CAT_VARIANT_BOOL iIsReversedRotationAxis, double iRotationAngle, CAT_VARIANT_BOOL iIsRadiusAligned, CAT_VARIANT_BOOL iCompleteCrown, double iType, CATIACircPattern *& oNewCircPattern) \
{ \
return (ENVTIECALL(CATIAShapeFactory,ENVTIETypeLetter,ENVTIELetter)AddNewGSDCircPattern(iShapeToCopy,iNbOfCopiesInRadialDir,iNbOfCopiesInAngularDir,iStepInRadialDir,iStepInAngularDir,iShapeToCopyPositionAlongRadialDir,iShapeToCopyPositionAlongAngularDir,iRotationCenter,iRotationAxis,iIsReversedRotationAxis,iRotationAngle,iIsRadiusAligned,iCompleteCrown,iType,oNewCircPattern)); \
} \
HRESULT __stdcall  ENVTIEName::AddNewSurfacicCircPattern(CATIABase * iShapeToCopy, CATLONG iNbOfCopiesInRadialDir, CATLONG iNbOfCopiesInAngularDir, double iStepInRadialDir, double iStepInAngularDir, CATLONG iShapeToCopyPositionAlongRadialDir, CATLONG iShapeToCopyPositionAlongAngularDir, CATIAReference * iRotationCenter, CATIAReference * iRotationAxis, CAT_VARIANT_BOOL iIsReversedRotationAxis, double iRotationAngle, CAT_VARIANT_BOOL iIsRadiusAligned, CAT_VARIANT_BOOL iCompleteCrown, CATIACircPattern *& oNewCircPattern) \
{ \
return (ENVTIECALL(CATIAShapeFactory,ENVTIETypeLetter,ENVTIELetter)AddNewSurfacicCircPattern(iShapeToCopy,iNbOfCopiesInRadialDir,iNbOfCopiesInAngularDir,iStepInRadialDir,iStepInAngularDir,iShapeToCopyPositionAlongRadialDir,iShapeToCopyPositionAlongAngularDir,iRotationCenter,iRotationAxis,iIsReversedRotationAxis,iRotationAngle,iIsRadiusAligned,iCompleteCrown,oNewCircPattern)); \
} \
HRESULT __stdcall  ENVTIEName::AddNewUserPattern(CATIABase * iShapeToCopy, CATLONG iNbOfCopies, CATIAUserPattern *& oNewUserPattern) \
{ \
return (ENVTIECALL(CATIAShapeFactory,ENVTIETypeLetter,ENVTIELetter)AddNewUserPattern(iShapeToCopy,iNbOfCopies,oNewUserPattern)); \
} \
HRESULT __stdcall  ENVTIEName::AddNewSurfacicUserPattern(CATIABase * iShapeToCopy, CATLONG iNbOfCopies, CATIAUserPattern *& oNewUserPattern) \
{ \
return (ENVTIECALL(CATIAShapeFactory,ENVTIETypeLetter,ENVTIELetter)AddNewSurfacicUserPattern(iShapeToCopy,iNbOfCopies,oNewUserPattern)); \
} \
HRESULT __stdcall  ENVTIEName::AddNewRectPatternofList(CATIABase * iShapeToCopy, CATLONG iNbOfCopiesInDir1, CATLONG iNbOfCopiesInDir2, double iStepInDir1, double iStepInDir2, CATLONG iShapeToCopyPositionAlongDir1, CATLONG iShapeToCopyPositionAlongDir2, CATIAReference * iDir1, CATIAReference * iDir2, CAT_VARIANT_BOOL iIsReversedDir1, CAT_VARIANT_BOOL iIsReversedDir2, double iRotationAngle, CATIARectPattern *& oNewRectPattern) \
{ \
return (ENVTIECALL(CATIAShapeFactory,ENVTIETypeLetter,ENVTIELetter)AddNewRectPatternofList(iShapeToCopy,iNbOfCopiesInDir1,iNbOfCopiesInDir2,iStepInDir1,iStepInDir2,iShapeToCopyPositionAlongDir1,iShapeToCopyPositionAlongDir2,iDir1,iDir2,iIsReversedDir1,iIsReversedDir2,iRotationAngle,oNewRectPattern)); \
} \
HRESULT __stdcall  ENVTIEName::AddNewCircPatternofList(CATIABase * iShapeToCopy, CATLONG iNbOfCopiesInRadialDir, CATLONG iNbOfCopiesInAngularDir, double iStepInRadialDir, double iStepInAngularDir, CATLONG iShapeToCopyPositionAlongRadialDir, CATLONG iShapeToCopyPositionAlongAngularDir, CATIAReference * iRotationCenter, CATIAReference * iRotationAxis, CAT_VARIANT_BOOL iIsReversedRotationAxis, double iRotationAngle, CAT_VARIANT_BOOL iIsRadiusAligned, CATIACircPattern *& oNewCircPattern) \
{ \
return (ENVTIECALL(CATIAShapeFactory,ENVTIETypeLetter,ENVTIELetter)AddNewCircPatternofList(iShapeToCopy,iNbOfCopiesInRadialDir,iNbOfCopiesInAngularDir,iStepInRadialDir,iStepInAngularDir,iShapeToCopyPositionAlongRadialDir,iShapeToCopyPositionAlongAngularDir,iRotationCenter,iRotationAxis,iIsReversedRotationAxis,iRotationAngle,iIsRadiusAligned,oNewCircPattern)); \
} \
HRESULT __stdcall  ENVTIEName::AddNewUserPatternofList(CATIABase * iShapeToCopy, CATLONG iNbOfCopies, CATIAUserPattern *& oNewUserPattern) \
{ \
return (ENVTIECALL(CATIAShapeFactory,ENVTIETypeLetter,ENVTIELetter)AddNewUserPatternofList(iShapeToCopy,iNbOfCopies,oNewUserPattern)); \
} \
HRESULT __stdcall  ENVTIEName::AddNewAssemble(CATIABody * iBodyToAssemble, CATIAAssemble *& oNewAssemble) \
{ \
return (ENVTIECALL(CATIAShapeFactory,ENVTIETypeLetter,ENVTIELetter)AddNewAssemble(iBodyToAssemble,oNewAssemble)); \
} \
HRESULT __stdcall  ENVTIEName::AddNewAdd(CATIABody * iBodyToAdd, CATIAAdd *& oNewAdd) \
{ \
return (ENVTIECALL(CATIAShapeFactory,ENVTIETypeLetter,ENVTIELetter)AddNewAdd(iBodyToAdd,oNewAdd)); \
} \
HRESULT __stdcall  ENVTIEName::AddNewRemove(CATIABody * iBodyToRemove, CATIARemove *& oNewRemove) \
{ \
return (ENVTIECALL(CATIAShapeFactory,ENVTIETypeLetter,ENVTIELetter)AddNewRemove(iBodyToRemove,oNewRemove)); \
} \
HRESULT __stdcall  ENVTIEName::AddNewIntersect(CATIABody * iBodyToIntersect, CATIAIntersect *& oNewIntersect) \
{ \
return (ENVTIECALL(CATIAShapeFactory,ENVTIETypeLetter,ENVTIELetter)AddNewIntersect(iBodyToIntersect,oNewIntersect)); \
} \
HRESULT __stdcall  ENVTIEName::AddNewTrim(CATIABody * iBodyToTrim, CATIATrim *& oNewTrim) \
{ \
return (ENVTIECALL(CATIAShapeFactory,ENVTIETypeLetter,ENVTIELetter)AddNewTrim(iBodyToTrim,oNewTrim)); \
} \
HRESULT __stdcall  ENVTIEName::AddNewSplit(CATIAReference * iSplittingElement, CatSplitSide iSplitSide, CATIASplit *& oNewSplit) \
{ \
return (ENVTIECALL(CATIAShapeFactory,ENVTIETypeLetter,ENVTIELetter)AddNewSplit(iSplittingElement,iSplitSide,oNewSplit)); \
} \
HRESULT __stdcall  ENVTIEName::AddNewSewSurface(CATIAReference * iSewingElement, CatSplitSide iSewingSide, CATIASewing *& oNewSewing) \
{ \
return (ENVTIECALL(CATIAShapeFactory,ENVTIETypeLetter,ENVTIELetter)AddNewSewSurface(iSewingElement,iSewingSide,oNewSewing)); \
} \
HRESULT __stdcall  ENVTIEName::AddNewCloseSurface(CATIAReference * iCloseElement, CATIACloseSurface *& oNewClose) \
{ \
return (ENVTIECALL(CATIAShapeFactory,ENVTIETypeLetter,ENVTIELetter)AddNewCloseSurface(iCloseElement,oNewClose)); \
} \
HRESULT __stdcall  ENVTIEName::AddNewThickSurface(CATIAReference * iOffsetElement, CATLONG iIsensOffset, double iTopOffset, double iBotOffset, CATIAThickSurface *& oNewOffset) \
{ \
return (ENVTIECALL(CATIAShapeFactory,ENVTIETypeLetter,ENVTIELetter)AddNewThickSurface(iOffsetElement,iIsensOffset,iTopOffset,iBotOffset,oNewOffset)); \
} \
HRESULT __stdcall  ENVTIEName::AddNewLoft(CATIABase *& oNewLoft) \
{ \
return (ENVTIECALL(CATIAShapeFactory,ENVTIETypeLetter,ENVTIELetter)AddNewLoft(oNewLoft)); \
} \
HRESULT __stdcall  ENVTIEName::AddNewRemovedLoft(CATIABase *& oNewRemovedLoft) \
{ \
return (ENVTIECALL(CATIAShapeFactory,ENVTIETypeLetter,ENVTIELetter)AddNewRemovedLoft(oNewRemovedLoft)); \
} \
HRESULT __stdcall  ENVTIEName::AddNewBlend(CATIABase *& oNewBlend) \
{ \
return (ENVTIECALL(CATIAShapeFactory,ENVTIETypeLetter,ENVTIELetter)AddNewBlend(oNewBlend)); \
} \
HRESULT __stdcall  ENVTIEName::AddNewRemovedBlend(CATIABase *& oNewRemovedBlend) \
{ \
return (ENVTIECALL(CATIAShapeFactory,ENVTIETypeLetter,ENVTIELetter)AddNewRemovedBlend(oNewRemovedBlend)); \
} \
HRESULT __stdcall  ENVTIEName::AddNewSymmetry2(CATIAReference * iReference, CATIABase *& oSymmetry) \
{ \
return (ENVTIECALL(CATIAShapeFactory,ENVTIETypeLetter,ENVTIELetter)AddNewSymmetry2(iReference,oSymmetry)); \
} \
HRESULT __stdcall  ENVTIEName::AddNewTranslate2(double iDistance, CATIABase *& oSymmetry) \
{ \
return (ENVTIECALL(CATIAShapeFactory,ENVTIETypeLetter,ENVTIELetter)AddNewTranslate2(iDistance,oSymmetry)); \
} \
HRESULT __stdcall  ENVTIEName::AddNewScaling2(CATIAReference * iScalingReference, double iFactor, CATIABase *& oNewScaling) \
{ \
return (ENVTIECALL(CATIAShapeFactory,ENVTIETypeLetter,ENVTIELetter)AddNewScaling2(iScalingReference,iFactor,oNewScaling)); \
} \
HRESULT __stdcall  ENVTIEName::AddNewRotate2(CATIAReference * iAxis, double iAngle, CATIABase *& oRotate) \
{ \
return (ENVTIECALL(CATIAShapeFactory,ENVTIETypeLetter,ENVTIELetter)AddNewRotate2(iAxis,iAngle,oRotate)); \
} \
HRESULT __stdcall  ENVTIEName::AddNewSolidCombine(CATIAReference * iProfileEltFirst, CATIAReference * iProfileEltSecond, CATIASolidCombine *& oNewSolidCombine) \
{ \
return (ENVTIECALL(CATIAShapeFactory,ENVTIETypeLetter,ENVTIELetter)AddNewSolidCombine(iProfileEltFirst,iProfileEltSecond,oNewSolidCombine)); \
} \
HRESULT __stdcall  ENVTIEName::AddNewRemoveFace(CATIAReference * iKeepFaces, CATIAReference * iRemoveFaces, CATIARemoveFace *& oNewRemoveFace) \
{ \
return (ENVTIECALL(CATIAShapeFactory,ENVTIETypeLetter,ENVTIELetter)AddNewRemoveFace(iKeepFaces,iRemoveFaces,oNewRemoveFace)); \
} \
HRESULT __stdcall  ENVTIEName::AddNewReplaceFace(CATIAReference * iSplitPlane, CATIAReference * iRemoveFace, CatSplitSide iSplittingSide, CATIAReplaceFace *& oNewReplaceFace) \
{ \
return (ENVTIECALL(CATIAShapeFactory,ENVTIETypeLetter,ENVTIELetter)AddNewReplaceFace(iSplitPlane,iRemoveFace,iSplittingSide,oNewReplaceFace)); \
} \
HRESULT __stdcall  ENVTIEName::AddNewVolumeAdd(CATIAReference * iBody1, CATIAReference * iBody2, double iType, CATIAAdd *& oNewAdd) \
{ \
return (ENVTIECALL(CATIAShapeFactory,ENVTIETypeLetter,ENVTIELetter)AddNewVolumeAdd(iBody1,iBody2,iType,oNewAdd)); \
} \
HRESULT __stdcall  ENVTIEName::AddNewVolumeRemove(CATIAReference * iBody1, CATIAReference * iBody2, double iType, CATIARemove *& oNewRemove) \
{ \
return (ENVTIECALL(CATIAShapeFactory,ENVTIETypeLetter,ENVTIELetter)AddNewVolumeRemove(iBody1,iBody2,iType,oNewRemove)); \
} \
HRESULT __stdcall  ENVTIEName::AddNewVolumeIntersect(CATIAReference * iBody1, CATIAReference * iBody2, double iType, CATIAIntersect *& oNewIntersect) \
{ \
return (ENVTIECALL(CATIAShapeFactory,ENVTIETypeLetter,ENVTIELetter)AddNewVolumeIntersect(iBody1,iBody2,iType,oNewIntersect)); \
} \
HRESULT __stdcall  ENVTIEName::AddNewVolumeSewSurface(CATLONG iType, CATIAReference * iSupportVolume, CATIAReference * iSewingElement, CatSplitSide iSewingSide, CATIASewing *& oNewSewing) \
{ \
return (ENVTIECALL(CATIAShapeFactory,ENVTIETypeLetter,ENVTIELetter)AddNewVolumeSewSurface(iType,iSupportVolume,iSewingElement,iSewingSide,oNewSewing)); \
} \
HRESULT __stdcall  ENVTIEName::AddNewVolumeShell(CATIAReference * iFaceToRemove, double iInternalThickness, double iExternalThickness, CATIAReference * iVolumeSupport, CATIAShell *& oNewShell) \
{ \
return (ENVTIECALL(CATIAShapeFactory,ENVTIETypeLetter,ENVTIELetter)AddNewVolumeShell(iFaceToRemove,iInternalThickness,iExternalThickness,iVolumeSupport,oNewShell)); \
} \
HRESULT __stdcall  ENVTIEName::AddNewVolumeTrim(CATIAReference * iSupportVolume, CATIAReference * iCuttingVolume, CATIATrim *& oNewTrim) \
{ \
return (ENVTIECALL(CATIAShapeFactory,ENVTIETypeLetter,ENVTIELetter)AddNewVolumeTrim(iSupportVolume,iCuttingVolume,oNewTrim)); \
} \
HRESULT __stdcall  ENVTIEName::AddNewVolumeCloseSurface(CATIAReference * iCloseElement, CATIACloseSurface *& oNewClose) \
{ \
return (ENVTIECALL(CATIAShapeFactory,ENVTIETypeLetter,ENVTIELetter)AddNewVolumeCloseSurface(iCloseElement,oNewClose)); \
} \
HRESULT __stdcall  ENVTIEName::AddNewVolumeThickSurface(CATIAReference * iOffsetElement, CATLONG iIsensOffset, double iTopOffset, double iBotOffset, CATIAThickSurface *& oNewOffset) \
{ \
return (ENVTIECALL(CATIAShapeFactory,ENVTIETypeLetter,ENVTIELetter)AddNewVolumeThickSurface(iOffsetElement,iIsensOffset,iTopOffset,iBotOffset,oNewOffset)); \
} \
HRESULT __stdcall  ENVTIEName::AddNewSolidFaceFillet(CATIAReference * iF1, CATIAReference * iF2, double iRadius, CATIAFaceFillet *& oNewFillet) \
{ \
return (ENVTIECALL(CATIAShapeFactory,ENVTIETypeLetter,ENVTIELetter)AddNewSolidFaceFillet(iF1,iF2,iRadius,oNewFillet)); \
} \
HRESULT __stdcall  ENVTIEName::AddNewSolidEdgeFilletWithConstantRadius(CATIAReference * iEdgeToFillet, CatFilletEdgePropagation iPropagMode, double iRadius, CATIAConstRadEdgeFillet *& oNewFillet) \
{ \
return (ENVTIECALL(CATIAShapeFactory,ENVTIETypeLetter,ENVTIELetter)AddNewSolidEdgeFilletWithConstantRadius(iEdgeToFillet,iPropagMode,iRadius,oNewFillet)); \
} \
HRESULT __stdcall  ENVTIEName::AddNewSolidEdgeFilletWithVaryingRadius(CATIAReference * iEdgeToFillet, CatFilletEdgePropagation iPropagMode, CatFilletVariation iVariationMode, double iDefaultRadius, CATIAVarRadEdgeFillet *& oNewFillet) \
{ \
return (ENVTIECALL(CATIAShapeFactory,ENVTIETypeLetter,ENVTIELetter)AddNewSolidEdgeFilletWithVaryingRadius(iEdgeToFillet,iPropagMode,iVariationMode,iDefaultRadius,oNewFillet)); \
} \
HRESULT __stdcall  ENVTIEName::AddNewSolidTritangentFillet(CATIAReference * iF1, CATIAReference * iF2, CATIAReference * iRemovedFace, CATIATritangentFillet *& oNewFillet) \
{ \
return (ENVTIECALL(CATIAShapeFactory,ENVTIETypeLetter,ENVTIELetter)AddNewSolidTritangentFillet(iF1,iF2,iRemovedFace,oNewFillet)); \
} \
HRESULT __stdcall  ENVTIEName::AddNewSurfaceFaceFillet(CATIAReference * iF1, CATIAReference * iF2, double iRadius, CATIAFaceFillet *& oNewFillet) \
{ \
return (ENVTIECALL(CATIAShapeFactory,ENVTIETypeLetter,ENVTIELetter)AddNewSurfaceFaceFillet(iF1,iF2,iRadius,oNewFillet)); \
} \
HRESULT __stdcall  ENVTIEName::AddNewSurfaceEdgeFilletWithConstantRadius(CATIAReference * iEdgeToFillet, CatFilletEdgePropagation iPropagMode, double iRadius, CATIAConstRadEdgeFillet *& oNewFillet) \
{ \
return (ENVTIECALL(CATIAShapeFactory,ENVTIETypeLetter,ENVTIELetter)AddNewSurfaceEdgeFilletWithConstantRadius(iEdgeToFillet,iPropagMode,iRadius,oNewFillet)); \
} \
HRESULT __stdcall  ENVTIEName::AddNewSurfaceEdgeFilletWithVaryingRadius(CATIAReference * iEdgeToFillet, CatFilletEdgePropagation iPropagMode, CatFilletVariation iVariationMode, double iDefaultRadius, CATIAVarRadEdgeFillet *& oNewFillet) \
{ \
return (ENVTIECALL(CATIAShapeFactory,ENVTIETypeLetter,ENVTIELetter)AddNewSurfaceEdgeFilletWithVaryingRadius(iEdgeToFillet,iPropagMode,iVariationMode,iDefaultRadius,oNewFillet)); \
} \
HRESULT __stdcall  ENVTIEName::AddNewSurfaceTritangentFillet(CATIAReference * iF1, CATIAReference * iF2, CATIAReference * iRemovedFace, CATIATritangentFillet *& oNewFillet) \
{ \
return (ENVTIECALL(CATIAShapeFactory,ENVTIETypeLetter,ENVTIELetter)AddNewSurfaceTritangentFillet(iF1,iF2,iRemovedFace,oNewFillet)); \
} \
HRESULT __stdcall  ENVTIEName::AddNewVolumeThickness(CATIAReference * iFaceToThicken, double iOffset, CATLONG iType, CATIAReference * iVolumeSupport, CATIAThickness *& oNewThickness) \
{ \
return (ENVTIECALL(CATIAShapeFactory,ENVTIETypeLetter,ENVTIELetter)AddNewVolumeThickness(iFaceToThicken,iOffset,iType,iVolumeSupport,oNewThickness)); \
} \
HRESULT __stdcall  ENVTIEName::AddNewAutoFillet(double iFilletRadius, double iRoundRadius, CATIAAutoFillet *& oNewFillet) \
{ \
return (ENVTIECALL(CATIAShapeFactory,ENVTIETypeLetter,ENVTIELetter)AddNewAutoFillet(iFilletRadius,iRoundRadius,oNewFillet)); \
} \
HRESULT __stdcall  ENVTIEName::AddNewAxisToAxis2(CATIAReference * iReference, CATIAReference * iTarget, CATIABase *& oAxisToAxis) \
{ \
return (ENVTIECALL(CATIAShapeFactory,ENVTIETypeLetter,ENVTIELetter)AddNewAxisToAxis2(iReference,iTarget,oAxisToAxis)); \
} \
HRESULT __stdcall  ENVTIEName::AddNewAffinity2(double XRatio, double YRatio, double ZRatio, CATIABase *& oAffinity) \
{ \
return (ENVTIECALL(CATIAShapeFactory,ENVTIETypeLetter,ENVTIELetter)AddNewAffinity2(XRatio,YRatio,ZRatio,oAffinity)); \
} \
HRESULT __stdcall  ENVTIEName::AddNewAutoDraft(double iDraftAngle, CATIAAutoDraft *& oNewDraft) \
{ \
return (ENVTIECALL(CATIAShapeFactory,ENVTIETypeLetter,ENVTIELetter)AddNewAutoDraft(iDraftAngle,oNewDraft)); \
} \
HRESULT __stdcall  ENVTIEName::AddNewSurfacicAutoFillet(double iFilletRadius, CATIAAutoFillet *& oNewFillet) \
{ \
return (ENVTIECALL(CATIAShapeFactory,ENVTIETypeLetter,ENVTIELetter)AddNewSurfacicAutoFillet(iFilletRadius,oNewFillet)); \
} \
HRESULT __stdcall  ENVTIEName::AddNewSurfacicSewSurface(CATLONG iType, CATIAReference * iSupportSurface, CATIAReference * iSewingElement, CatSplitSide iSewingSide, CATIASewing *& oNewSewing) \
{ \
return (ENVTIECALL(CATIAShapeFactory,ENVTIETypeLetter,ENVTIELetter)AddNewSurfacicSewSurface(iType,iSupportSurface,iSewingElement,iSewingSide,oNewSewing)); \
} \
HRESULT __stdcall  ENVTIEName::AddNewDefeaturing(CATIADefeaturing *& oNewDefeaturing) \
{ \
return (ENVTIECALL(CATIAShapeFactory,ENVTIETypeLetter,ENVTIELetter)AddNewDefeaturing(oNewDefeaturing)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Application(CATIAApplication *& oApplication) \
{ \
return (ENVTIECALL(CATIAShapeFactory,ENVTIETypeLetter,ENVTIELetter)get_Application(oApplication)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Parent(CATBaseDispatch *& oParent) \
{ \
return (ENVTIECALL(CATIAShapeFactory,ENVTIETypeLetter,ENVTIELetter)get_Parent(oParent)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Name(CATBSTR & oNameBSTR) \
{ \
return (ENVTIECALL(CATIAShapeFactory,ENVTIETypeLetter,ENVTIELetter)get_Name(oNameBSTR)); \
} \
HRESULT  __stdcall  ENVTIEName::put_Name(const CATBSTR & iNameBSTR) \
{ \
return (ENVTIECALL(CATIAShapeFactory,ENVTIETypeLetter,ENVTIELetter)put_Name(iNameBSTR)); \
} \
HRESULT  __stdcall  ENVTIEName::GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj) \
{ \
return (ENVTIECALL(CATIAShapeFactory,ENVTIETypeLetter,ENVTIELetter)GetItem(IDName,RealObj)); \
} \


/* Name of the TIE class */
#define class_TIE_CATIAShapeFactory(classe)    TIECATIAShapeFactory##classe


/* Common methods inside a TIE */
#define common_TIE_CATIAShapeFactory(classe) \
 \
 \
/* Static initialization */ \
CATDefineCommonTIEMembers(CATIAShapeFactory, classe) \
 \
 \
CATImplementTIEMethods(CATIAShapeFactory, classe) \
CATImplementIUnknownMethodsForCATBaseUnknownTIE(CATIAShapeFactory, classe, 2) \
CATImplementIDispatchMethodsForCATBaseUnknownTIE(CATIAShapeFactory, classe) \
CATImplementCATBaseUnknownMethodsForTIE(CATIAShapeFactory, classe) \
 \
HRESULT __stdcall  TIECATIAShapeFactory##classe::AddNewPad(CATIASketch * iSketch, double iHeight, CATIAPad *& oNewPad) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,1,&_Trac2,&iSketch,&iHeight,&oNewPad); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->AddNewPad(iSketch,iHeight,oNewPad); \
   ExitAfterCall(this,1,_Trac2,&_ret_arg,&iSketch,&iHeight,&oNewPad); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAShapeFactory##classe::AddNewPocket(CATIASketch * iSketch, double iHeight, CATIAPocket *& oNewPocket) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,2,&_Trac2,&iSketch,&iHeight,&oNewPocket); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->AddNewPocket(iSketch,iHeight,oNewPocket); \
   ExitAfterCall(this,2,_Trac2,&_ret_arg,&iSketch,&iHeight,&oNewPocket); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAShapeFactory##classe::AddNewPadFromRef(CATIAReference * iProfileElt, double iHeight, CATIAPad *& oNewPad) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,3,&_Trac2,&iProfileElt,&iHeight,&oNewPad); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->AddNewPadFromRef(iProfileElt,iHeight,oNewPad); \
   ExitAfterCall(this,3,_Trac2,&_ret_arg,&iProfileElt,&iHeight,&oNewPad); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAShapeFactory##classe::AddNewPocketFromRef(CATIAReference * iProfileElt, double iHeight, CATIAPocket *& oNewPocket) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,4,&_Trac2,&iProfileElt,&iHeight,&oNewPocket); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->AddNewPocketFromRef(iProfileElt,iHeight,oNewPocket); \
   ExitAfterCall(this,4,_Trac2,&_ret_arg,&iProfileElt,&iHeight,&oNewPocket); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAShapeFactory##classe::AddNewHole(CATIAReference * iSupport, double iDepth, CATIAHole *& oNewHole) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,5,&_Trac2,&iSupport,&iDepth,&oNewHole); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->AddNewHole(iSupport,iDepth,oNewHole); \
   ExitAfterCall(this,5,_Trac2,&_ret_arg,&iSupport,&iDepth,&oNewHole); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAShapeFactory##classe::AddNewHoleFromPoint(double iX, double iY, double iZ, CATIAReference * iSupport, double iDepth, CATIAHole *& oNewHole) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,6,&_Trac2,&iX,&iY,&iZ,&iSupport,&iDepth,&oNewHole); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->AddNewHoleFromPoint(iX,iY,iZ,iSupport,iDepth,oNewHole); \
   ExitAfterCall(this,6,_Trac2,&_ret_arg,&iX,&iY,&iZ,&iSupport,&iDepth,&oNewHole); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAShapeFactory##classe::AddNewHoleFromRefPoint(CATIAReference * iOrigin, CATIAReference * iSupport, double iDepth, CATIAHole *& oNewHole) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,7,&_Trac2,&iOrigin,&iSupport,&iDepth,&oNewHole); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->AddNewHoleFromRefPoint(iOrigin,iSupport,iDepth,oNewHole); \
   ExitAfterCall(this,7,_Trac2,&_ret_arg,&iOrigin,&iSupport,&iDepth,&oNewHole); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAShapeFactory##classe::AddNewHoleWithConstraint(double iX, double iY, double iZ, CATIAReference * iEdge, CATIAReference * iSupport, double iDepth, CATIAHole *& oNewHole) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,8,&_Trac2,&iX,&iY,&iZ,&iEdge,&iSupport,&iDepth,&oNewHole); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->AddNewHoleWithConstraint(iX,iY,iZ,iEdge,iSupport,iDepth,oNewHole); \
   ExitAfterCall(this,8,_Trac2,&_ret_arg,&iX,&iY,&iZ,&iEdge,&iSupport,&iDepth,&oNewHole); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAShapeFactory##classe::AddNewHoleWith2Constraints(double iX, double iY, double iZ, CATIAReference * iEdge1, CATIAReference * iEdge2, CATIAReference * iSupport, double iDepth, CATIAHole *& oNewHole) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,9,&_Trac2,&iX,&iY,&iZ,&iEdge1,&iEdge2,&iSupport,&iDepth,&oNewHole); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->AddNewHoleWith2Constraints(iX,iY,iZ,iEdge1,iEdge2,iSupport,iDepth,oNewHole); \
   ExitAfterCall(this,9,_Trac2,&_ret_arg,&iX,&iY,&iZ,&iEdge1,&iEdge2,&iSupport,&iDepth,&oNewHole); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAShapeFactory##classe::AddNewHoleFromSketch(CATIASketch * iSketch, double iDepth, CATIAHole *& oNewHole) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,10,&_Trac2,&iSketch,&iDepth,&oNewHole); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->AddNewHoleFromSketch(iSketch,iDepth,oNewHole); \
   ExitAfterCall(this,10,_Trac2,&_ret_arg,&iSketch,&iDepth,&oNewHole); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAShapeFactory##classe::AddNewShaft(CATIASketch * iSketch, CATIAShaft *& oNewShaft) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,11,&_Trac2,&iSketch,&oNewShaft); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->AddNewShaft(iSketch,oNewShaft); \
   ExitAfterCall(this,11,_Trac2,&_ret_arg,&iSketch,&oNewShaft); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAShapeFactory##classe::AddNewGroove(CATIASketch * iSketch, CATIAGroove *& oNewGroove) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,12,&_Trac2,&iSketch,&oNewGroove); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->AddNewGroove(iSketch,oNewGroove); \
   ExitAfterCall(this,12,_Trac2,&_ret_arg,&iSketch,&oNewGroove); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAShapeFactory##classe::AddNewShaftFromRef(CATIAReference * iProfileElt, CATIAShaft *& oNewShaft) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,13,&_Trac2,&iProfileElt,&oNewShaft); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->AddNewShaftFromRef(iProfileElt,oNewShaft); \
   ExitAfterCall(this,13,_Trac2,&_ret_arg,&iProfileElt,&oNewShaft); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAShapeFactory##classe::AddNewGrooveFromRef(CATIAReference * iProfileElt, CATIAGroove *& oNewGroove) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,14,&_Trac2,&iProfileElt,&oNewGroove); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->AddNewGrooveFromRef(iProfileElt,oNewGroove); \
   ExitAfterCall(this,14,_Trac2,&_ret_arg,&iProfileElt,&oNewGroove); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAShapeFactory##classe::AddNewThreadWithRef(CATIAReference * iLateralFace, CATIAReference * iLimitFace, CATIAThread *& oNewThread) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,15,&_Trac2,&iLateralFace,&iLimitFace,&oNewThread); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->AddNewThreadWithRef(iLateralFace,iLimitFace,oNewThread); \
   ExitAfterCall(this,15,_Trac2,&_ret_arg,&iLateralFace,&iLimitFace,&oNewThread); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAShapeFactory##classe::AddNewThreadWithOutRef(CATIAThread *& oNewThread) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,16,&_Trac2,&oNewThread); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->AddNewThreadWithOutRef(oNewThread); \
   ExitAfterCall(this,16,_Trac2,&_ret_arg,&oNewThread); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAShapeFactory##classe::AddNewRib(CATIASketch * iSketch, CATIASketch * iCenterCurve, CATIARib *& oNewRib) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,17,&_Trac2,&iSketch,&iCenterCurve,&oNewRib); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->AddNewRib(iSketch,iCenterCurve,oNewRib); \
   ExitAfterCall(this,17,_Trac2,&_ret_arg,&iSketch,&iCenterCurve,&oNewRib); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAShapeFactory##classe::AddNewRibFromRef(CATIAReference * iProfile, CATIAReference * iCenterCurve, CATIARib *& oNewRib) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,18,&_Trac2,&iProfile,&iCenterCurve,&oNewRib); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->AddNewRibFromRef(iProfile,iCenterCurve,oNewRib); \
   ExitAfterCall(this,18,_Trac2,&_ret_arg,&iProfile,&iCenterCurve,&oNewRib); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAShapeFactory##classe::AddNewSlot(CATIASketch * iSketch, CATIASketch * iCenterCurve, CATIASlot *& oNewSlot) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,19,&_Trac2,&iSketch,&iCenterCurve,&oNewSlot); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->AddNewSlot(iSketch,iCenterCurve,oNewSlot); \
   ExitAfterCall(this,19,_Trac2,&_ret_arg,&iSketch,&iCenterCurve,&oNewSlot); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAShapeFactory##classe::AddNewSlotFromRef(CATIAReference * iProfile, CATIAReference * iCenterCurve, CATIASlot *& oNewSlot) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,20,&_Trac2,&iProfile,&iCenterCurve,&oNewSlot); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->AddNewSlotFromRef(iProfile,iCenterCurve,oNewSlot); \
   ExitAfterCall(this,20,_Trac2,&_ret_arg,&iProfile,&iCenterCurve,&oNewSlot); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAShapeFactory##classe::AddNewStiffener(CATIASketch * iSketch, CATIAStiffener *& oNewStifffener) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,21,&_Trac2,&iSketch,&oNewStifffener); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->AddNewStiffener(iSketch,oNewStifffener); \
   ExitAfterCall(this,21,_Trac2,&_ret_arg,&iSketch,&oNewStifffener); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAShapeFactory##classe::AddNewStiffenerFromRef(CATIAReference * iProfileElt, CATIAStiffener *& oNewStiffener) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,22,&_Trac2,&iProfileElt,&oNewStiffener); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->AddNewStiffenerFromRef(iProfileElt,oNewStiffener); \
   ExitAfterCall(this,22,_Trac2,&_ret_arg,&iProfileElt,&oNewStiffener); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAShapeFactory##classe::AddNewScaling(CATIAReference * iScalingReference, double iFactor, CATIAScaling *& oNewScaling) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,23,&_Trac2,&iScalingReference,&iFactor,&oNewScaling); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->AddNewScaling(iScalingReference,iFactor,oNewScaling); \
   ExitAfterCall(this,23,_Trac2,&_ret_arg,&iScalingReference,&iFactor,&oNewScaling); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAShapeFactory##classe::AddNewFaceFillet(CATIAReference * iF1, CATIAReference * iF2, double iRadius, CATIAFaceFillet *& oNewFillet) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,24,&_Trac2,&iF1,&iF2,&iRadius,&oNewFillet); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->AddNewFaceFillet(iF1,iF2,iRadius,oNewFillet); \
   ExitAfterCall(this,24,_Trac2,&_ret_arg,&iF1,&iF2,&iRadius,&oNewFillet); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAShapeFactory##classe::AddNewEdgeFilletWithConstantRadius(CATIAReference * iEdgeToFillet, CatFilletEdgePropagation iPropagMode, double iRadius, CATIAConstRadEdgeFillet *& oNewFillet) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,25,&_Trac2,&iEdgeToFillet,&iPropagMode,&iRadius,&oNewFillet); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->AddNewEdgeFilletWithConstantRadius(iEdgeToFillet,iPropagMode,iRadius,oNewFillet); \
   ExitAfterCall(this,25,_Trac2,&_ret_arg,&iEdgeToFillet,&iPropagMode,&iRadius,&oNewFillet); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAShapeFactory##classe::AddNewEdgeFilletWithVaryingRadius(CATIAReference * iEdgeToFillet, CatFilletEdgePropagation iPropagMode, CatFilletVariation iVariationMode, double iDefaultRadius, CATIAVarRadEdgeFillet *& oNewFillet) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,26,&_Trac2,&iEdgeToFillet,&iPropagMode,&iVariationMode,&iDefaultRadius,&oNewFillet); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->AddNewEdgeFilletWithVaryingRadius(iEdgeToFillet,iPropagMode,iVariationMode,iDefaultRadius,oNewFillet); \
   ExitAfterCall(this,26,_Trac2,&_ret_arg,&iEdgeToFillet,&iPropagMode,&iVariationMode,&iDefaultRadius,&oNewFillet); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAShapeFactory##classe::AddNewTritangentFillet(CATIAReference * iF1, CATIAReference * iF2, CATIAReference * iRemovedFace, CATIATritangentFillet *& oNewFillet) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,27,&_Trac2,&iF1,&iF2,&iRemovedFace,&oNewFillet); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->AddNewTritangentFillet(iF1,iF2,iRemovedFace,oNewFillet); \
   ExitAfterCall(this,27,_Trac2,&_ret_arg,&iF1,&iF2,&iRemovedFace,&oNewFillet); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAShapeFactory##classe::AddNewDraft(CATIAReference * iFaceToDraft, CATIAReference * iNeutral, CatDraftNeutralPropagationMode iNeutralMode, CATIAReference * iParting, double iDirX, double iDirY, double iDirZ, CatDraftMode iMode, double iAngle, CatDraftMultiselectionMode iMultiselectionMode, CATIADraft *& oNewDraft) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,28,&_Trac2,&iFaceToDraft,&iNeutral,&iNeutralMode,&iParting,&iDirX,&iDirY,&iDirZ,&iMode,&iAngle,&iMultiselectionMode,&oNewDraft); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->AddNewDraft(iFaceToDraft,iNeutral,iNeutralMode,iParting,iDirX,iDirY,iDirZ,iMode,iAngle,iMultiselectionMode,oNewDraft); \
   ExitAfterCall(this,28,_Trac2,&_ret_arg,&iFaceToDraft,&iNeutral,&iNeutralMode,&iParting,&iDirX,&iDirY,&iDirZ,&iMode,&iAngle,&iMultiselectionMode,&oNewDraft); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAShapeFactory##classe::AddNewVolumicDraft(CATIAReference * iFaceToDraft, CATIAReference * iNeutral, CatDraftNeutralPropagationMode iNeutralMode, CATIAReference * iParting, double iDirX, double iDirY, double iDirZ, CatDraftMode iMode, double iAngle, CatDraftMultiselectionMode iMultiselectionMode, CATLONG iType, CATIAReference * iVolumeSupport, CATIADraft *& oNewDraft) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,29,&_Trac2,&iFaceToDraft,&iNeutral,&iNeutralMode,&iParting,&iDirX,&iDirY,&iDirZ,&iMode,&iAngle,&iMultiselectionMode,&iType,&iVolumeSupport,&oNewDraft); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->AddNewVolumicDraft(iFaceToDraft,iNeutral,iNeutralMode,iParting,iDirX,iDirY,iDirZ,iMode,iAngle,iMultiselectionMode,iType,iVolumeSupport,oNewDraft); \
   ExitAfterCall(this,29,_Trac2,&_ret_arg,&iFaceToDraft,&iNeutral,&iNeutralMode,&iParting,&iDirX,&iDirY,&iDirZ,&iMode,&iAngle,&iMultiselectionMode,&iType,&iVolumeSupport,&oNewDraft); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAShapeFactory##classe::AddNewShell(CATIAReference * iFaceToRemove, double iInternalThickness, double iExternalThickness, CATIAShell *& oNewShell) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,30,&_Trac2,&iFaceToRemove,&iInternalThickness,&iExternalThickness,&oNewShell); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->AddNewShell(iFaceToRemove,iInternalThickness,iExternalThickness,oNewShell); \
   ExitAfterCall(this,30,_Trac2,&_ret_arg,&iFaceToRemove,&iInternalThickness,&iExternalThickness,&oNewShell); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAShapeFactory##classe::AddNewThickness(CATIAReference * iFaceToThicken, double iOffset, CATIAThickness *& oNewThickness) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,31,&_Trac2,&iFaceToThicken,&iOffset,&oNewThickness); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->AddNewThickness(iFaceToThicken,iOffset,oNewThickness); \
   ExitAfterCall(this,31,_Trac2,&_ret_arg,&iFaceToThicken,&iOffset,&oNewThickness); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAShapeFactory##classe::AddNewChamfer(CATIAReference * iObjectToChamfer, CatChamferPropagation iPropagation, CatChamferMode iMode, CatChamferOrientation iOrientation, double iLength1, double iLength2OrAngle, CATIAChamfer *& oNewChamfer) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,32,&_Trac2,&iObjectToChamfer,&iPropagation,&iMode,&iOrientation,&iLength1,&iLength2OrAngle,&oNewChamfer); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->AddNewChamfer(iObjectToChamfer,iPropagation,iMode,iOrientation,iLength1,iLength2OrAngle,oNewChamfer); \
   ExitAfterCall(this,32,_Trac2,&_ret_arg,&iObjectToChamfer,&iPropagation,&iMode,&iOrientation,&iLength1,&iLength2OrAngle,&oNewChamfer); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAShapeFactory##classe::AddNewMirror(CATIAReference * iMirroringElement, CATIAMirror *& oNewMirror) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,33,&_Trac2,&iMirroringElement,&oNewMirror); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->AddNewMirror(iMirroringElement,oNewMirror); \
   ExitAfterCall(this,33,_Trac2,&_ret_arg,&iMirroringElement,&oNewMirror); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAShapeFactory##classe::AddNewRectPattern(CATIABase * iShapeToCopy, CATLONG iNbOfCopiesInDir1, CATLONG iNbOfCopiesInDir2, double iStepInDir1, double iStepInDir2, CATLONG iShapeToCopyPositionAlongDir1, CATLONG iShapeToCopyPositionAlongDir2, CATIAReference * iDir1, CATIAReference * iDir2, CAT_VARIANT_BOOL iIsReversedDir1, CAT_VARIANT_BOOL iIsReversedDir2, double iRotationAngle, CATIARectPattern *& oNewRectPattern) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,34,&_Trac2,&iShapeToCopy,&iNbOfCopiesInDir1,&iNbOfCopiesInDir2,&iStepInDir1,&iStepInDir2,&iShapeToCopyPositionAlongDir1,&iShapeToCopyPositionAlongDir2,&iDir1,&iDir2,&iIsReversedDir1,&iIsReversedDir2,&iRotationAngle,&oNewRectPattern); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->AddNewRectPattern(iShapeToCopy,iNbOfCopiesInDir1,iNbOfCopiesInDir2,iStepInDir1,iStepInDir2,iShapeToCopyPositionAlongDir1,iShapeToCopyPositionAlongDir2,iDir1,iDir2,iIsReversedDir1,iIsReversedDir2,iRotationAngle,oNewRectPattern); \
   ExitAfterCall(this,34,_Trac2,&_ret_arg,&iShapeToCopy,&iNbOfCopiesInDir1,&iNbOfCopiesInDir2,&iStepInDir1,&iStepInDir2,&iShapeToCopyPositionAlongDir1,&iShapeToCopyPositionAlongDir2,&iDir1,&iDir2,&iIsReversedDir1,&iIsReversedDir2,&iRotationAngle,&oNewRectPattern); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAShapeFactory##classe::AddNewGSDRectPattern(CATIABase * iShapeToCopy, CATLONG iNbOfCopiesInDir1, CATLONG iNbOfCopiesInDir2, double iStepInDir1, double iStepInDir2, CATLONG iShapeToCopyPositionAlongDir1, CATLONG iShapeToCopyPositionAlongDir2, CATIAReference * iDir1, CATIAReference * iDir2, CAT_VARIANT_BOOL iIsReversedDir1, CAT_VARIANT_BOOL iIsReversedDir2, double iRotationAngle, double iType, CATIARectPattern *& oNewRectPattern) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,35,&_Trac2,&iShapeToCopy,&iNbOfCopiesInDir1,&iNbOfCopiesInDir2,&iStepInDir1,&iStepInDir2,&iShapeToCopyPositionAlongDir1,&iShapeToCopyPositionAlongDir2,&iDir1,&iDir2,&iIsReversedDir1,&iIsReversedDir2,&iRotationAngle,&iType,&oNewRectPattern); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->AddNewGSDRectPattern(iShapeToCopy,iNbOfCopiesInDir1,iNbOfCopiesInDir2,iStepInDir1,iStepInDir2,iShapeToCopyPositionAlongDir1,iShapeToCopyPositionAlongDir2,iDir1,iDir2,iIsReversedDir1,iIsReversedDir2,iRotationAngle,iType,oNewRectPattern); \
   ExitAfterCall(this,35,_Trac2,&_ret_arg,&iShapeToCopy,&iNbOfCopiesInDir1,&iNbOfCopiesInDir2,&iStepInDir1,&iStepInDir2,&iShapeToCopyPositionAlongDir1,&iShapeToCopyPositionAlongDir2,&iDir1,&iDir2,&iIsReversedDir1,&iIsReversedDir2,&iRotationAngle,&iType,&oNewRectPattern); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAShapeFactory##classe::AddNewSurfacicRectPattern(CATIABase * iShapeToCopy, CATLONG iNbOfCopiesInDir1, CATLONG iNbOfCopiesInDir2, double iStepInDir1, double iStepInDir2, CATLONG iShapeToCopyPositionAlongDir1, CATLONG iShapeToCopyPositionAlongDir2, CATIAReference * iDir1, CATIAReference * iDir2, CAT_VARIANT_BOOL iIsReversedDir1, CAT_VARIANT_BOOL iIsReversedDir2, double iRotationAngle, CATIARectPattern *& oNewRectPattern) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,36,&_Trac2,&iShapeToCopy,&iNbOfCopiesInDir1,&iNbOfCopiesInDir2,&iStepInDir1,&iStepInDir2,&iShapeToCopyPositionAlongDir1,&iShapeToCopyPositionAlongDir2,&iDir1,&iDir2,&iIsReversedDir1,&iIsReversedDir2,&iRotationAngle,&oNewRectPattern); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->AddNewSurfacicRectPattern(iShapeToCopy,iNbOfCopiesInDir1,iNbOfCopiesInDir2,iStepInDir1,iStepInDir2,iShapeToCopyPositionAlongDir1,iShapeToCopyPositionAlongDir2,iDir1,iDir2,iIsReversedDir1,iIsReversedDir2,iRotationAngle,oNewRectPattern); \
   ExitAfterCall(this,36,_Trac2,&_ret_arg,&iShapeToCopy,&iNbOfCopiesInDir1,&iNbOfCopiesInDir2,&iStepInDir1,&iStepInDir2,&iShapeToCopyPositionAlongDir1,&iShapeToCopyPositionAlongDir2,&iDir1,&iDir2,&iIsReversedDir1,&iIsReversedDir2,&iRotationAngle,&oNewRectPattern); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAShapeFactory##classe::AddNewCircPattern(CATIABase * iShapeToCopy, CATLONG iNbOfCopiesInRadialDir, CATLONG iNbOfCopiesInAngularDir, double iStepInRadialDir, double iStepInAngularDir, CATLONG iShapeToCopyPositionAlongRadialDir, CATLONG iShapeToCopyPositionAlongAngularDir, CATIAReference * iRotationCenter, CATIAReference * iRotationAxis, CAT_VARIANT_BOOL iIsReversedRotationAxis, double iRotationAngle, CAT_VARIANT_BOOL iIsRadiusAligned, CATIACircPattern *& oNewCircPattern) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,37,&_Trac2,&iShapeToCopy,&iNbOfCopiesInRadialDir,&iNbOfCopiesInAngularDir,&iStepInRadialDir,&iStepInAngularDir,&iShapeToCopyPositionAlongRadialDir,&iShapeToCopyPositionAlongAngularDir,&iRotationCenter,&iRotationAxis,&iIsReversedRotationAxis,&iRotationAngle,&iIsRadiusAligned,&oNewCircPattern); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->AddNewCircPattern(iShapeToCopy,iNbOfCopiesInRadialDir,iNbOfCopiesInAngularDir,iStepInRadialDir,iStepInAngularDir,iShapeToCopyPositionAlongRadialDir,iShapeToCopyPositionAlongAngularDir,iRotationCenter,iRotationAxis,iIsReversedRotationAxis,iRotationAngle,iIsRadiusAligned,oNewCircPattern); \
   ExitAfterCall(this,37,_Trac2,&_ret_arg,&iShapeToCopy,&iNbOfCopiesInRadialDir,&iNbOfCopiesInAngularDir,&iStepInRadialDir,&iStepInAngularDir,&iShapeToCopyPositionAlongRadialDir,&iShapeToCopyPositionAlongAngularDir,&iRotationCenter,&iRotationAxis,&iIsReversedRotationAxis,&iRotationAngle,&iIsRadiusAligned,&oNewCircPattern); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAShapeFactory##classe::AddNewGSDCircPattern(CATIABase * iShapeToCopy, CATLONG iNbOfCopiesInRadialDir, CATLONG iNbOfCopiesInAngularDir, double iStepInRadialDir, double iStepInAngularDir, CATLONG iShapeToCopyPositionAlongRadialDir, CATLONG iShapeToCopyPositionAlongAngularDir, CATIAReference * iRotationCenter, CATIAReference * iRotationAxis, CAT_VARIANT_BOOL iIsReversedRotationAxis, double iRotationAngle, CAT_VARIANT_BOOL iIsRadiusAligned, CAT_VARIANT_BOOL iCompleteCrown, double iType, CATIACircPattern *& oNewCircPattern) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,38,&_Trac2,&iShapeToCopy,&iNbOfCopiesInRadialDir,&iNbOfCopiesInAngularDir,&iStepInRadialDir,&iStepInAngularDir,&iShapeToCopyPositionAlongRadialDir,&iShapeToCopyPositionAlongAngularDir,&iRotationCenter,&iRotationAxis,&iIsReversedRotationAxis,&iRotationAngle,&iIsRadiusAligned,&iCompleteCrown,&iType,&oNewCircPattern); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->AddNewGSDCircPattern(iShapeToCopy,iNbOfCopiesInRadialDir,iNbOfCopiesInAngularDir,iStepInRadialDir,iStepInAngularDir,iShapeToCopyPositionAlongRadialDir,iShapeToCopyPositionAlongAngularDir,iRotationCenter,iRotationAxis,iIsReversedRotationAxis,iRotationAngle,iIsRadiusAligned,iCompleteCrown,iType,oNewCircPattern); \
   ExitAfterCall(this,38,_Trac2,&_ret_arg,&iShapeToCopy,&iNbOfCopiesInRadialDir,&iNbOfCopiesInAngularDir,&iStepInRadialDir,&iStepInAngularDir,&iShapeToCopyPositionAlongRadialDir,&iShapeToCopyPositionAlongAngularDir,&iRotationCenter,&iRotationAxis,&iIsReversedRotationAxis,&iRotationAngle,&iIsRadiusAligned,&iCompleteCrown,&iType,&oNewCircPattern); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAShapeFactory##classe::AddNewSurfacicCircPattern(CATIABase * iShapeToCopy, CATLONG iNbOfCopiesInRadialDir, CATLONG iNbOfCopiesInAngularDir, double iStepInRadialDir, double iStepInAngularDir, CATLONG iShapeToCopyPositionAlongRadialDir, CATLONG iShapeToCopyPositionAlongAngularDir, CATIAReference * iRotationCenter, CATIAReference * iRotationAxis, CAT_VARIANT_BOOL iIsReversedRotationAxis, double iRotationAngle, CAT_VARIANT_BOOL iIsRadiusAligned, CAT_VARIANT_BOOL iCompleteCrown, CATIACircPattern *& oNewCircPattern) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,39,&_Trac2,&iShapeToCopy,&iNbOfCopiesInRadialDir,&iNbOfCopiesInAngularDir,&iStepInRadialDir,&iStepInAngularDir,&iShapeToCopyPositionAlongRadialDir,&iShapeToCopyPositionAlongAngularDir,&iRotationCenter,&iRotationAxis,&iIsReversedRotationAxis,&iRotationAngle,&iIsRadiusAligned,&iCompleteCrown,&oNewCircPattern); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->AddNewSurfacicCircPattern(iShapeToCopy,iNbOfCopiesInRadialDir,iNbOfCopiesInAngularDir,iStepInRadialDir,iStepInAngularDir,iShapeToCopyPositionAlongRadialDir,iShapeToCopyPositionAlongAngularDir,iRotationCenter,iRotationAxis,iIsReversedRotationAxis,iRotationAngle,iIsRadiusAligned,iCompleteCrown,oNewCircPattern); \
   ExitAfterCall(this,39,_Trac2,&_ret_arg,&iShapeToCopy,&iNbOfCopiesInRadialDir,&iNbOfCopiesInAngularDir,&iStepInRadialDir,&iStepInAngularDir,&iShapeToCopyPositionAlongRadialDir,&iShapeToCopyPositionAlongAngularDir,&iRotationCenter,&iRotationAxis,&iIsReversedRotationAxis,&iRotationAngle,&iIsRadiusAligned,&iCompleteCrown,&oNewCircPattern); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAShapeFactory##classe::AddNewUserPattern(CATIABase * iShapeToCopy, CATLONG iNbOfCopies, CATIAUserPattern *& oNewUserPattern) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,40,&_Trac2,&iShapeToCopy,&iNbOfCopies,&oNewUserPattern); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->AddNewUserPattern(iShapeToCopy,iNbOfCopies,oNewUserPattern); \
   ExitAfterCall(this,40,_Trac2,&_ret_arg,&iShapeToCopy,&iNbOfCopies,&oNewUserPattern); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAShapeFactory##classe::AddNewSurfacicUserPattern(CATIABase * iShapeToCopy, CATLONG iNbOfCopies, CATIAUserPattern *& oNewUserPattern) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,41,&_Trac2,&iShapeToCopy,&iNbOfCopies,&oNewUserPattern); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->AddNewSurfacicUserPattern(iShapeToCopy,iNbOfCopies,oNewUserPattern); \
   ExitAfterCall(this,41,_Trac2,&_ret_arg,&iShapeToCopy,&iNbOfCopies,&oNewUserPattern); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAShapeFactory##classe::AddNewRectPatternofList(CATIABase * iShapeToCopy, CATLONG iNbOfCopiesInDir1, CATLONG iNbOfCopiesInDir2, double iStepInDir1, double iStepInDir2, CATLONG iShapeToCopyPositionAlongDir1, CATLONG iShapeToCopyPositionAlongDir2, CATIAReference * iDir1, CATIAReference * iDir2, CAT_VARIANT_BOOL iIsReversedDir1, CAT_VARIANT_BOOL iIsReversedDir2, double iRotationAngle, CATIARectPattern *& oNewRectPattern) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,42,&_Trac2,&iShapeToCopy,&iNbOfCopiesInDir1,&iNbOfCopiesInDir2,&iStepInDir1,&iStepInDir2,&iShapeToCopyPositionAlongDir1,&iShapeToCopyPositionAlongDir2,&iDir1,&iDir2,&iIsReversedDir1,&iIsReversedDir2,&iRotationAngle,&oNewRectPattern); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->AddNewRectPatternofList(iShapeToCopy,iNbOfCopiesInDir1,iNbOfCopiesInDir2,iStepInDir1,iStepInDir2,iShapeToCopyPositionAlongDir1,iShapeToCopyPositionAlongDir2,iDir1,iDir2,iIsReversedDir1,iIsReversedDir2,iRotationAngle,oNewRectPattern); \
   ExitAfterCall(this,42,_Trac2,&_ret_arg,&iShapeToCopy,&iNbOfCopiesInDir1,&iNbOfCopiesInDir2,&iStepInDir1,&iStepInDir2,&iShapeToCopyPositionAlongDir1,&iShapeToCopyPositionAlongDir2,&iDir1,&iDir2,&iIsReversedDir1,&iIsReversedDir2,&iRotationAngle,&oNewRectPattern); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAShapeFactory##classe::AddNewCircPatternofList(CATIABase * iShapeToCopy, CATLONG iNbOfCopiesInRadialDir, CATLONG iNbOfCopiesInAngularDir, double iStepInRadialDir, double iStepInAngularDir, CATLONG iShapeToCopyPositionAlongRadialDir, CATLONG iShapeToCopyPositionAlongAngularDir, CATIAReference * iRotationCenter, CATIAReference * iRotationAxis, CAT_VARIANT_BOOL iIsReversedRotationAxis, double iRotationAngle, CAT_VARIANT_BOOL iIsRadiusAligned, CATIACircPattern *& oNewCircPattern) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,43,&_Trac2,&iShapeToCopy,&iNbOfCopiesInRadialDir,&iNbOfCopiesInAngularDir,&iStepInRadialDir,&iStepInAngularDir,&iShapeToCopyPositionAlongRadialDir,&iShapeToCopyPositionAlongAngularDir,&iRotationCenter,&iRotationAxis,&iIsReversedRotationAxis,&iRotationAngle,&iIsRadiusAligned,&oNewCircPattern); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->AddNewCircPatternofList(iShapeToCopy,iNbOfCopiesInRadialDir,iNbOfCopiesInAngularDir,iStepInRadialDir,iStepInAngularDir,iShapeToCopyPositionAlongRadialDir,iShapeToCopyPositionAlongAngularDir,iRotationCenter,iRotationAxis,iIsReversedRotationAxis,iRotationAngle,iIsRadiusAligned,oNewCircPattern); \
   ExitAfterCall(this,43,_Trac2,&_ret_arg,&iShapeToCopy,&iNbOfCopiesInRadialDir,&iNbOfCopiesInAngularDir,&iStepInRadialDir,&iStepInAngularDir,&iShapeToCopyPositionAlongRadialDir,&iShapeToCopyPositionAlongAngularDir,&iRotationCenter,&iRotationAxis,&iIsReversedRotationAxis,&iRotationAngle,&iIsRadiusAligned,&oNewCircPattern); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAShapeFactory##classe::AddNewUserPatternofList(CATIABase * iShapeToCopy, CATLONG iNbOfCopies, CATIAUserPattern *& oNewUserPattern) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,44,&_Trac2,&iShapeToCopy,&iNbOfCopies,&oNewUserPattern); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->AddNewUserPatternofList(iShapeToCopy,iNbOfCopies,oNewUserPattern); \
   ExitAfterCall(this,44,_Trac2,&_ret_arg,&iShapeToCopy,&iNbOfCopies,&oNewUserPattern); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAShapeFactory##classe::AddNewAssemble(CATIABody * iBodyToAssemble, CATIAAssemble *& oNewAssemble) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,45,&_Trac2,&iBodyToAssemble,&oNewAssemble); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->AddNewAssemble(iBodyToAssemble,oNewAssemble); \
   ExitAfterCall(this,45,_Trac2,&_ret_arg,&iBodyToAssemble,&oNewAssemble); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAShapeFactory##classe::AddNewAdd(CATIABody * iBodyToAdd, CATIAAdd *& oNewAdd) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,46,&_Trac2,&iBodyToAdd,&oNewAdd); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->AddNewAdd(iBodyToAdd,oNewAdd); \
   ExitAfterCall(this,46,_Trac2,&_ret_arg,&iBodyToAdd,&oNewAdd); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAShapeFactory##classe::AddNewRemove(CATIABody * iBodyToRemove, CATIARemove *& oNewRemove) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,47,&_Trac2,&iBodyToRemove,&oNewRemove); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->AddNewRemove(iBodyToRemove,oNewRemove); \
   ExitAfterCall(this,47,_Trac2,&_ret_arg,&iBodyToRemove,&oNewRemove); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAShapeFactory##classe::AddNewIntersect(CATIABody * iBodyToIntersect, CATIAIntersect *& oNewIntersect) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,48,&_Trac2,&iBodyToIntersect,&oNewIntersect); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->AddNewIntersect(iBodyToIntersect,oNewIntersect); \
   ExitAfterCall(this,48,_Trac2,&_ret_arg,&iBodyToIntersect,&oNewIntersect); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAShapeFactory##classe::AddNewTrim(CATIABody * iBodyToTrim, CATIATrim *& oNewTrim) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,49,&_Trac2,&iBodyToTrim,&oNewTrim); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->AddNewTrim(iBodyToTrim,oNewTrim); \
   ExitAfterCall(this,49,_Trac2,&_ret_arg,&iBodyToTrim,&oNewTrim); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAShapeFactory##classe::AddNewSplit(CATIAReference * iSplittingElement, CatSplitSide iSplitSide, CATIASplit *& oNewSplit) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,50,&_Trac2,&iSplittingElement,&iSplitSide,&oNewSplit); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->AddNewSplit(iSplittingElement,iSplitSide,oNewSplit); \
   ExitAfterCall(this,50,_Trac2,&_ret_arg,&iSplittingElement,&iSplitSide,&oNewSplit); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAShapeFactory##classe::AddNewSewSurface(CATIAReference * iSewingElement, CatSplitSide iSewingSide, CATIASewing *& oNewSewing) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,51,&_Trac2,&iSewingElement,&iSewingSide,&oNewSewing); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->AddNewSewSurface(iSewingElement,iSewingSide,oNewSewing); \
   ExitAfterCall(this,51,_Trac2,&_ret_arg,&iSewingElement,&iSewingSide,&oNewSewing); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAShapeFactory##classe::AddNewCloseSurface(CATIAReference * iCloseElement, CATIACloseSurface *& oNewClose) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,52,&_Trac2,&iCloseElement,&oNewClose); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->AddNewCloseSurface(iCloseElement,oNewClose); \
   ExitAfterCall(this,52,_Trac2,&_ret_arg,&iCloseElement,&oNewClose); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAShapeFactory##classe::AddNewThickSurface(CATIAReference * iOffsetElement, CATLONG iIsensOffset, double iTopOffset, double iBotOffset, CATIAThickSurface *& oNewOffset) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,53,&_Trac2,&iOffsetElement,&iIsensOffset,&iTopOffset,&iBotOffset,&oNewOffset); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->AddNewThickSurface(iOffsetElement,iIsensOffset,iTopOffset,iBotOffset,oNewOffset); \
   ExitAfterCall(this,53,_Trac2,&_ret_arg,&iOffsetElement,&iIsensOffset,&iTopOffset,&iBotOffset,&oNewOffset); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAShapeFactory##classe::AddNewLoft(CATIABase *& oNewLoft) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,54,&_Trac2,&oNewLoft); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->AddNewLoft(oNewLoft); \
   ExitAfterCall(this,54,_Trac2,&_ret_arg,&oNewLoft); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAShapeFactory##classe::AddNewRemovedLoft(CATIABase *& oNewRemovedLoft) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,55,&_Trac2,&oNewRemovedLoft); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->AddNewRemovedLoft(oNewRemovedLoft); \
   ExitAfterCall(this,55,_Trac2,&_ret_arg,&oNewRemovedLoft); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAShapeFactory##classe::AddNewBlend(CATIABase *& oNewBlend) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,56,&_Trac2,&oNewBlend); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->AddNewBlend(oNewBlend); \
   ExitAfterCall(this,56,_Trac2,&_ret_arg,&oNewBlend); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAShapeFactory##classe::AddNewRemovedBlend(CATIABase *& oNewRemovedBlend) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,57,&_Trac2,&oNewRemovedBlend); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->AddNewRemovedBlend(oNewRemovedBlend); \
   ExitAfterCall(this,57,_Trac2,&_ret_arg,&oNewRemovedBlend); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAShapeFactory##classe::AddNewSymmetry2(CATIAReference * iReference, CATIABase *& oSymmetry) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,58,&_Trac2,&iReference,&oSymmetry); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->AddNewSymmetry2(iReference,oSymmetry); \
   ExitAfterCall(this,58,_Trac2,&_ret_arg,&iReference,&oSymmetry); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAShapeFactory##classe::AddNewTranslate2(double iDistance, CATIABase *& oSymmetry) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,59,&_Trac2,&iDistance,&oSymmetry); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->AddNewTranslate2(iDistance,oSymmetry); \
   ExitAfterCall(this,59,_Trac2,&_ret_arg,&iDistance,&oSymmetry); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAShapeFactory##classe::AddNewScaling2(CATIAReference * iScalingReference, double iFactor, CATIABase *& oNewScaling) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,60,&_Trac2,&iScalingReference,&iFactor,&oNewScaling); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->AddNewScaling2(iScalingReference,iFactor,oNewScaling); \
   ExitAfterCall(this,60,_Trac2,&_ret_arg,&iScalingReference,&iFactor,&oNewScaling); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAShapeFactory##classe::AddNewRotate2(CATIAReference * iAxis, double iAngle, CATIABase *& oRotate) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,61,&_Trac2,&iAxis,&iAngle,&oRotate); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->AddNewRotate2(iAxis,iAngle,oRotate); \
   ExitAfterCall(this,61,_Trac2,&_ret_arg,&iAxis,&iAngle,&oRotate); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAShapeFactory##classe::AddNewSolidCombine(CATIAReference * iProfileEltFirst, CATIAReference * iProfileEltSecond, CATIASolidCombine *& oNewSolidCombine) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,62,&_Trac2,&iProfileEltFirst,&iProfileEltSecond,&oNewSolidCombine); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->AddNewSolidCombine(iProfileEltFirst,iProfileEltSecond,oNewSolidCombine); \
   ExitAfterCall(this,62,_Trac2,&_ret_arg,&iProfileEltFirst,&iProfileEltSecond,&oNewSolidCombine); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAShapeFactory##classe::AddNewRemoveFace(CATIAReference * iKeepFaces, CATIAReference * iRemoveFaces, CATIARemoveFace *& oNewRemoveFace) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,63,&_Trac2,&iKeepFaces,&iRemoveFaces,&oNewRemoveFace); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->AddNewRemoveFace(iKeepFaces,iRemoveFaces,oNewRemoveFace); \
   ExitAfterCall(this,63,_Trac2,&_ret_arg,&iKeepFaces,&iRemoveFaces,&oNewRemoveFace); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAShapeFactory##classe::AddNewReplaceFace(CATIAReference * iSplitPlane, CATIAReference * iRemoveFace, CatSplitSide iSplittingSide, CATIAReplaceFace *& oNewReplaceFace) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,64,&_Trac2,&iSplitPlane,&iRemoveFace,&iSplittingSide,&oNewReplaceFace); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->AddNewReplaceFace(iSplitPlane,iRemoveFace,iSplittingSide,oNewReplaceFace); \
   ExitAfterCall(this,64,_Trac2,&_ret_arg,&iSplitPlane,&iRemoveFace,&iSplittingSide,&oNewReplaceFace); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAShapeFactory##classe::AddNewVolumeAdd(CATIAReference * iBody1, CATIAReference * iBody2, double iType, CATIAAdd *& oNewAdd) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,65,&_Trac2,&iBody1,&iBody2,&iType,&oNewAdd); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->AddNewVolumeAdd(iBody1,iBody2,iType,oNewAdd); \
   ExitAfterCall(this,65,_Trac2,&_ret_arg,&iBody1,&iBody2,&iType,&oNewAdd); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAShapeFactory##classe::AddNewVolumeRemove(CATIAReference * iBody1, CATIAReference * iBody2, double iType, CATIARemove *& oNewRemove) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,66,&_Trac2,&iBody1,&iBody2,&iType,&oNewRemove); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->AddNewVolumeRemove(iBody1,iBody2,iType,oNewRemove); \
   ExitAfterCall(this,66,_Trac2,&_ret_arg,&iBody1,&iBody2,&iType,&oNewRemove); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAShapeFactory##classe::AddNewVolumeIntersect(CATIAReference * iBody1, CATIAReference * iBody2, double iType, CATIAIntersect *& oNewIntersect) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,67,&_Trac2,&iBody1,&iBody2,&iType,&oNewIntersect); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->AddNewVolumeIntersect(iBody1,iBody2,iType,oNewIntersect); \
   ExitAfterCall(this,67,_Trac2,&_ret_arg,&iBody1,&iBody2,&iType,&oNewIntersect); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAShapeFactory##classe::AddNewVolumeSewSurface(CATLONG iType, CATIAReference * iSupportVolume, CATIAReference * iSewingElement, CatSplitSide iSewingSide, CATIASewing *& oNewSewing) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,68,&_Trac2,&iType,&iSupportVolume,&iSewingElement,&iSewingSide,&oNewSewing); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->AddNewVolumeSewSurface(iType,iSupportVolume,iSewingElement,iSewingSide,oNewSewing); \
   ExitAfterCall(this,68,_Trac2,&_ret_arg,&iType,&iSupportVolume,&iSewingElement,&iSewingSide,&oNewSewing); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAShapeFactory##classe::AddNewVolumeShell(CATIAReference * iFaceToRemove, double iInternalThickness, double iExternalThickness, CATIAReference * iVolumeSupport, CATIAShell *& oNewShell) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,69,&_Trac2,&iFaceToRemove,&iInternalThickness,&iExternalThickness,&iVolumeSupport,&oNewShell); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->AddNewVolumeShell(iFaceToRemove,iInternalThickness,iExternalThickness,iVolumeSupport,oNewShell); \
   ExitAfterCall(this,69,_Trac2,&_ret_arg,&iFaceToRemove,&iInternalThickness,&iExternalThickness,&iVolumeSupport,&oNewShell); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAShapeFactory##classe::AddNewVolumeTrim(CATIAReference * iSupportVolume, CATIAReference * iCuttingVolume, CATIATrim *& oNewTrim) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,70,&_Trac2,&iSupportVolume,&iCuttingVolume,&oNewTrim); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->AddNewVolumeTrim(iSupportVolume,iCuttingVolume,oNewTrim); \
   ExitAfterCall(this,70,_Trac2,&_ret_arg,&iSupportVolume,&iCuttingVolume,&oNewTrim); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAShapeFactory##classe::AddNewVolumeCloseSurface(CATIAReference * iCloseElement, CATIACloseSurface *& oNewClose) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,71,&_Trac2,&iCloseElement,&oNewClose); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->AddNewVolumeCloseSurface(iCloseElement,oNewClose); \
   ExitAfterCall(this,71,_Trac2,&_ret_arg,&iCloseElement,&oNewClose); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAShapeFactory##classe::AddNewVolumeThickSurface(CATIAReference * iOffsetElement, CATLONG iIsensOffset, double iTopOffset, double iBotOffset, CATIAThickSurface *& oNewOffset) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,72,&_Trac2,&iOffsetElement,&iIsensOffset,&iTopOffset,&iBotOffset,&oNewOffset); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->AddNewVolumeThickSurface(iOffsetElement,iIsensOffset,iTopOffset,iBotOffset,oNewOffset); \
   ExitAfterCall(this,72,_Trac2,&_ret_arg,&iOffsetElement,&iIsensOffset,&iTopOffset,&iBotOffset,&oNewOffset); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAShapeFactory##classe::AddNewSolidFaceFillet(CATIAReference * iF1, CATIAReference * iF2, double iRadius, CATIAFaceFillet *& oNewFillet) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,73,&_Trac2,&iF1,&iF2,&iRadius,&oNewFillet); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->AddNewSolidFaceFillet(iF1,iF2,iRadius,oNewFillet); \
   ExitAfterCall(this,73,_Trac2,&_ret_arg,&iF1,&iF2,&iRadius,&oNewFillet); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAShapeFactory##classe::AddNewSolidEdgeFilletWithConstantRadius(CATIAReference * iEdgeToFillet, CatFilletEdgePropagation iPropagMode, double iRadius, CATIAConstRadEdgeFillet *& oNewFillet) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,74,&_Trac2,&iEdgeToFillet,&iPropagMode,&iRadius,&oNewFillet); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->AddNewSolidEdgeFilletWithConstantRadius(iEdgeToFillet,iPropagMode,iRadius,oNewFillet); \
   ExitAfterCall(this,74,_Trac2,&_ret_arg,&iEdgeToFillet,&iPropagMode,&iRadius,&oNewFillet); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAShapeFactory##classe::AddNewSolidEdgeFilletWithVaryingRadius(CATIAReference * iEdgeToFillet, CatFilletEdgePropagation iPropagMode, CatFilletVariation iVariationMode, double iDefaultRadius, CATIAVarRadEdgeFillet *& oNewFillet) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,75,&_Trac2,&iEdgeToFillet,&iPropagMode,&iVariationMode,&iDefaultRadius,&oNewFillet); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->AddNewSolidEdgeFilletWithVaryingRadius(iEdgeToFillet,iPropagMode,iVariationMode,iDefaultRadius,oNewFillet); \
   ExitAfterCall(this,75,_Trac2,&_ret_arg,&iEdgeToFillet,&iPropagMode,&iVariationMode,&iDefaultRadius,&oNewFillet); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAShapeFactory##classe::AddNewSolidTritangentFillet(CATIAReference * iF1, CATIAReference * iF2, CATIAReference * iRemovedFace, CATIATritangentFillet *& oNewFillet) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,76,&_Trac2,&iF1,&iF2,&iRemovedFace,&oNewFillet); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->AddNewSolidTritangentFillet(iF1,iF2,iRemovedFace,oNewFillet); \
   ExitAfterCall(this,76,_Trac2,&_ret_arg,&iF1,&iF2,&iRemovedFace,&oNewFillet); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAShapeFactory##classe::AddNewSurfaceFaceFillet(CATIAReference * iF1, CATIAReference * iF2, double iRadius, CATIAFaceFillet *& oNewFillet) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,77,&_Trac2,&iF1,&iF2,&iRadius,&oNewFillet); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->AddNewSurfaceFaceFillet(iF1,iF2,iRadius,oNewFillet); \
   ExitAfterCall(this,77,_Trac2,&_ret_arg,&iF1,&iF2,&iRadius,&oNewFillet); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAShapeFactory##classe::AddNewSurfaceEdgeFilletWithConstantRadius(CATIAReference * iEdgeToFillet, CatFilletEdgePropagation iPropagMode, double iRadius, CATIAConstRadEdgeFillet *& oNewFillet) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,78,&_Trac2,&iEdgeToFillet,&iPropagMode,&iRadius,&oNewFillet); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->AddNewSurfaceEdgeFilletWithConstantRadius(iEdgeToFillet,iPropagMode,iRadius,oNewFillet); \
   ExitAfterCall(this,78,_Trac2,&_ret_arg,&iEdgeToFillet,&iPropagMode,&iRadius,&oNewFillet); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAShapeFactory##classe::AddNewSurfaceEdgeFilletWithVaryingRadius(CATIAReference * iEdgeToFillet, CatFilletEdgePropagation iPropagMode, CatFilletVariation iVariationMode, double iDefaultRadius, CATIAVarRadEdgeFillet *& oNewFillet) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,79,&_Trac2,&iEdgeToFillet,&iPropagMode,&iVariationMode,&iDefaultRadius,&oNewFillet); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->AddNewSurfaceEdgeFilletWithVaryingRadius(iEdgeToFillet,iPropagMode,iVariationMode,iDefaultRadius,oNewFillet); \
   ExitAfterCall(this,79,_Trac2,&_ret_arg,&iEdgeToFillet,&iPropagMode,&iVariationMode,&iDefaultRadius,&oNewFillet); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAShapeFactory##classe::AddNewSurfaceTritangentFillet(CATIAReference * iF1, CATIAReference * iF2, CATIAReference * iRemovedFace, CATIATritangentFillet *& oNewFillet) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,80,&_Trac2,&iF1,&iF2,&iRemovedFace,&oNewFillet); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->AddNewSurfaceTritangentFillet(iF1,iF2,iRemovedFace,oNewFillet); \
   ExitAfterCall(this,80,_Trac2,&_ret_arg,&iF1,&iF2,&iRemovedFace,&oNewFillet); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAShapeFactory##classe::AddNewVolumeThickness(CATIAReference * iFaceToThicken, double iOffset, CATLONG iType, CATIAReference * iVolumeSupport, CATIAThickness *& oNewThickness) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,81,&_Trac2,&iFaceToThicken,&iOffset,&iType,&iVolumeSupport,&oNewThickness); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->AddNewVolumeThickness(iFaceToThicken,iOffset,iType,iVolumeSupport,oNewThickness); \
   ExitAfterCall(this,81,_Trac2,&_ret_arg,&iFaceToThicken,&iOffset,&iType,&iVolumeSupport,&oNewThickness); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAShapeFactory##classe::AddNewAutoFillet(double iFilletRadius, double iRoundRadius, CATIAAutoFillet *& oNewFillet) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,82,&_Trac2,&iFilletRadius,&iRoundRadius,&oNewFillet); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->AddNewAutoFillet(iFilletRadius,iRoundRadius,oNewFillet); \
   ExitAfterCall(this,82,_Trac2,&_ret_arg,&iFilletRadius,&iRoundRadius,&oNewFillet); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAShapeFactory##classe::AddNewAxisToAxis2(CATIAReference * iReference, CATIAReference * iTarget, CATIABase *& oAxisToAxis) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,83,&_Trac2,&iReference,&iTarget,&oAxisToAxis); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->AddNewAxisToAxis2(iReference,iTarget,oAxisToAxis); \
   ExitAfterCall(this,83,_Trac2,&_ret_arg,&iReference,&iTarget,&oAxisToAxis); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAShapeFactory##classe::AddNewAffinity2(double XRatio, double YRatio, double ZRatio, CATIABase *& oAffinity) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,84,&_Trac2,&XRatio,&YRatio,&ZRatio,&oAffinity); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->AddNewAffinity2(XRatio,YRatio,ZRatio,oAffinity); \
   ExitAfterCall(this,84,_Trac2,&_ret_arg,&XRatio,&YRatio,&ZRatio,&oAffinity); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAShapeFactory##classe::AddNewAutoDraft(double iDraftAngle, CATIAAutoDraft *& oNewDraft) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,85,&_Trac2,&iDraftAngle,&oNewDraft); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->AddNewAutoDraft(iDraftAngle,oNewDraft); \
   ExitAfterCall(this,85,_Trac2,&_ret_arg,&iDraftAngle,&oNewDraft); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAShapeFactory##classe::AddNewSurfacicAutoFillet(double iFilletRadius, CATIAAutoFillet *& oNewFillet) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,86,&_Trac2,&iFilletRadius,&oNewFillet); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->AddNewSurfacicAutoFillet(iFilletRadius,oNewFillet); \
   ExitAfterCall(this,86,_Trac2,&_ret_arg,&iFilletRadius,&oNewFillet); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAShapeFactory##classe::AddNewSurfacicSewSurface(CATLONG iType, CATIAReference * iSupportSurface, CATIAReference * iSewingElement, CatSplitSide iSewingSide, CATIASewing *& oNewSewing) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,87,&_Trac2,&iType,&iSupportSurface,&iSewingElement,&iSewingSide,&oNewSewing); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->AddNewSurfacicSewSurface(iType,iSupportSurface,iSewingElement,iSewingSide,oNewSewing); \
   ExitAfterCall(this,87,_Trac2,&_ret_arg,&iType,&iSupportSurface,&iSewingElement,&iSewingSide,&oNewSewing); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAShapeFactory##classe::AddNewDefeaturing(CATIADefeaturing *& oNewDefeaturing) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,88,&_Trac2,&oNewDefeaturing); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->AddNewDefeaturing(oNewDefeaturing); \
   ExitAfterCall(this,88,_Trac2,&_ret_arg,&oNewDefeaturing); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAShapeFactory##classe::get_Application(CATIAApplication *& oApplication) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,89,&_Trac2,&oApplication); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Application(oApplication); \
   ExitAfterCall(this,89,_Trac2,&_ret_arg,&oApplication); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAShapeFactory##classe::get_Parent(CATBaseDispatch *& oParent) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,90,&_Trac2,&oParent); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Parent(oParent); \
   ExitAfterCall(this,90,_Trac2,&_ret_arg,&oParent); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAShapeFactory##classe::get_Name(CATBSTR & oNameBSTR) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,91,&_Trac2,&oNameBSTR); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Name(oNameBSTR); \
   ExitAfterCall(this,91,_Trac2,&_ret_arg,&oNameBSTR); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAShapeFactory##classe::put_Name(const CATBSTR & iNameBSTR) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,92,&_Trac2,&iNameBSTR); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_Name(iNameBSTR); \
   ExitAfterCall(this,92,_Trac2,&_ret_arg,&iNameBSTR); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAShapeFactory##classe::GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,93,&_Trac2,&IDName,&RealObj); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetItem(IDName,RealObj); \
   ExitAfterCall(this,93,_Trac2,&_ret_arg,&IDName,&RealObj); \
   return(_ret_arg); \
} \



/* Macro used to link an implementation with an interface */
#define TIE_CATIAShapeFactory(classe) \
 \
 \
declare_TIE_CATIAShapeFactory(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIAShapeFactory##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIAShapeFactory,"CATIAShapeFactory",CATIAShapeFactory::MetaObject(),classe::MetaObject(),TIE); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIAShapeFactory(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIECreation(CATIAShapeFactory, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIAShapeFactory##classe(classe::MetaObject(),CATIAShapeFactory::MetaObject(),(void *)CreateTIECATIAShapeFactory##classe)



/* Macro used to link an implementation with an interface */
/* This TIE is chained on the implementation object */
#define TIEchain_CATIAShapeFactory(classe) \
 \
 \
declare_TIE_CATIAShapeFactory(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIAShapeFactory##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIAShapeFactory,"CATIAShapeFactory",CATIAShapeFactory::MetaObject(),classe::MetaObject(),TIEchain); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIAShapeFactory(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIEchainCreation(CATIAShapeFactory, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIAShapeFactory##classe(classe::MetaObject(),CATIAShapeFactory::MetaObject(),(void *)CreateTIECATIAShapeFactory##classe)


/* Macro to switch between BOA and TIE at build time */ 
#ifdef CATSYS_BOA_IS_TIE
#define BOA_CATIAShapeFactory(classe) TIE_CATIAShapeFactory(classe)
#else
#define BOA_CATIAShapeFactory(classe) CATImplementBOA(CATIAShapeFactory, classe)
#endif

#endif
