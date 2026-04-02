#ifndef __TIE_CATIAHybridShapeFactory
#define __TIE_CATIAHybridShapeFactory

#include <string.h>
#include "CATBaseUnknown.h"
#include "CATMetaClass.h"
#include "CATMacForTie.h"
#include "CATExitJournal.h"
#include "CATIAHybridShapeFactory.h"
#include "JS0DSPA.h"


#ifdef _WINDOWS_SOURCE
#define Exported __declspec(dllexport)
#define Imported __declspec(dllimport)
#else
#define Exported 
#define Imported 
#endif


/* To link an implementation with the interface CATIAHybridShapeFactory */
#define declare_TIE_CATIAHybridShapeFactory(classe) \
 \
 \
class TIECATIAHybridShapeFactory##classe : public CATIAHybridShapeFactory \
{ \
   private: \
      CATDeclareCommonTIEMembers \
   public: \
      CATDeclareTIEMethods(CATIAHybridShapeFactory, classe) \
      CATDeclareIUnknownMethodsForCATBaseUnknownTIE \
      CATDeclareIDispatchMethodsForCATBaseUnknownTIE \
      CATDeclareCATBaseUnknownMethodsForTIE \
      virtual HRESULT __stdcall AddNewSpine(CATIAHybridShapeSpine *& oExt); \
      virtual HRESULT __stdcall AddNewAxisLine(CATIAReference * iElement, CATIAHybridShapeAxisLine *& oAxisLine); \
      virtual HRESULT __stdcall AddNewLawDistProj(CATIAReference * iReference, CATIAReference * iDefinition, CATIAHybridShapeLawDistProj *& oLaw); \
      virtual HRESULT __stdcall AddNewBlend(CATIAHybridShapeBlend *& oBlend); \
      virtual HRESULT __stdcall AddNewConic(CATIAReference * iSupport, CATIAReference * iStartingPoint, CATIAReference * iEndPoint, CATIAHybridShapeConic *& oConic); \
      virtual HRESULT __stdcall AddNewHelix(CATIAReference * iAxis, CAT_VARIANT_BOOL iInvertAxis, CATIAReference * iStartingPoint, double iPitch, double iHeight, CAT_VARIANT_BOOL iClockwiseRevolution, double iStartingAngle, double iTaperAngle, CAT_VARIANT_BOOL iTaperOutward, CATIAHybridShapeHelix *& oHelix); \
      virtual HRESULT __stdcall AddNewCombine(CATIAReference * iFirstCurve, CATIAReference * iSecondCurve, CATLONG iNearestSolutions, CATIAHybridShapeCombine *& oCombine); \
      virtual HRESULT __stdcall AddNewExtremum(CATIAReference * iObjet, CATIAHybridShapeDirection * iDir, CATLONG iMinMax, CATIAHybridShapeExtremum *& oExt); \
      virtual HRESULT __stdcall AddNewExtremumPolar(short iType, CATIAReference * ipIAContour, CATIAHybridShapeExtremumPolar *& opIAExtPolar); \
      virtual HRESULT __stdcall AddNewCircle2PointsRad(CATIAReference * iPoint1, CATIAReference * iPoint2, CATIAReference * iSupport, CAT_VARIANT_BOOL iGeodesic, double iRadius, CATLONG iOri, CATIAHybridShapeCircle2PointsRad *& oCircle); \
      virtual HRESULT __stdcall AddNewFilletBiTangent(CATIAReference * iElement1, CATIAReference * iElement2, double iRadius, CATLONG iOrientation1, CATLONG iOrientation2, CATLONG iSupportsTrimMode, CATLONG iRibbonRelimitationMode, CATIAHybridShapeFilletBiTangent *& oFillet); \
      virtual HRESULT __stdcall AddNewFilletTriTangent(CATIAReference * iElement1, CATIAReference * iElement2, CATIAReference * iRemoveElem, CATLONG iOrientation1, CATLONG iOrientation2, CATLONG iRemoveOrientation, CATLONG iSupportsTrimMode, CATLONG iRibbonRelimitationMode, CATIAHybridShapeFilletTriTangent *& oFillet); \
      virtual HRESULT __stdcall AddNewCircle3Points(CATIAReference * iPoint1, CATIAReference * iPoint2, CATIAReference * iPoint3, CATIAHybridShapeCircle3Points *& oCircle); \
      virtual HRESULT __stdcall AddNewCircleBitangentPoint(CATIAReference * iCurve1, CATIAReference * iCurve2, CATIAReference * iPoint, CATIAReference * iSupport, CATLONG iOri1, CATLONG iOri2, CATIAHybridShapeCircleBitangentPoint *& oCircle); \
      virtual HRESULT __stdcall AddNewCircleBitangentRadius(CATIAReference * iCurve1, CATIAReference * iCurve2, CATIAReference * iSupport, double iRadius, CATLONG iOri1, CATLONG iOri2, CATIAHybridShapeCircleBitangentRadius *& oCircle); \
      virtual HRESULT __stdcall AddNewCircleCtrPtWithAngles(CATIAReference * iCenter, CATIAReference * iCrossingPoint, CATIAReference * iSupport, CAT_VARIANT_BOOL iGeodesic, double iStartAngle, double iEndAngle, CATIAHybridShapeCircleCtrPt *& oCircle); \
      virtual HRESULT __stdcall AddNewCircleCtrPt(CATIAReference * iCenter, CATIAReference * iCrossingPoint, CATIAReference * iSupport, CAT_VARIANT_BOOL iGeodesic, CATIAHybridShapeCircleCtrPt *& oCircle); \
      virtual HRESULT __stdcall AddNewCircleCtrRadWithAngles(CATIAReference * iCenter, CATIAReference * iSupport, CAT_VARIANT_BOOL iGeodesic, double iRadius, double iStartAngle, double iEndAngle, CATIAHybridShapeCircleCtrRad *& oCircle); \
      virtual HRESULT __stdcall AddNewCircleCtrRad(CATIAReference * iCenter, CATIAReference * iSupport, CAT_VARIANT_BOOL iGeodesic, double iRadius, CATIAHybridShapeCircleCtrRad *& oCircle); \
      virtual HRESULT __stdcall AddNewCircleTritangent(CATIAReference * iCurve1, CATIAReference * iCurve2, CATIAReference * iCurve3, CATIAReference * iSupport, CATLONG iOri1, CATLONG iOri2, CATLONG iOri3, CATIAHybridShapeCircleTritangent *& oCircle); \
      virtual HRESULT __stdcall AddNewDevelop(CATLONG iMode, CATIAReference * iToDevelop, CATIAReference * iSupport, CATIAHybridShapeDevelop *& oExt); \
      virtual HRESULT __stdcall AddNewUnfold(CATIAHybridShapeUnfold *& oExt); \
      virtual HRESULT __stdcall AddNewSweepCircle(CATIAReference * iGuide1, CATIAHybridShapeSweepCircle *& oExt); \
      virtual HRESULT __stdcall AddNewSweepExplicit(CATIAReference * iProfile, CATIAReference * iGuide, CATIAHybridShapeSweepExplicit *& oExt); \
      virtual HRESULT __stdcall AddNewSweepLine(CATIAReference * iGuide1, CATIAHybridShapeSweepLine *& oExt); \
      virtual HRESULT __stdcall AddNewPositionTransfo(CATLONG iMode, CATIAHybridShapePositionTransfo *& oExt); \
      virtual HRESULT __stdcall AddNewLoft(CATIAHybridShapeLoft *& oExt); \
      virtual HRESULT __stdcall AddNewJoin(CATIAReference * Element1, CATIAReference * Element2, CATIAHybridShapeAssemble *& oExt); \
      virtual HRESULT __stdcall AddNewExtract(CATIAReference * Element, CATIAHybridShapeExtract *& oExt); \
      virtual HRESULT __stdcall AddNewExtractMulti(CATIAReference * Element, CATIAHybridShapeExtractMulti *& oExt); \
      virtual HRESULT __stdcall AddNewInverse(CATIAReference * Element, CATLONG Inverse, CATIAHybridShapeInverse *& oInv); \
      virtual HRESULT __stdcall AddNewNear(CATIAReference * MultiElement, CATIAReference * ReferenceElement, CATIAHybridShapeNear *& oNear); \
      virtual HRESULT __stdcall AddNewConnect(CATIAReference * iCurve1, CATIAReference * iPoint1, CATLONG iOrient1, CATLONG iContinuity1, double iTension1, CATIAReference * iCurve2, CATIAReference * iPoint2, CATLONG iOrient2, CATLONG iContinuity2, double iTension2, CAT_VARIANT_BOOL Trim, CATIAHybridShapeConnect *& oConnect); \
      virtual HRESULT __stdcall AddNewCurvePar(CATIAReference * Curve, CATIAReference * Support, double Distance, CAT_VARIANT_BOOL InvertDirection, CAT_VARIANT_BOOL Geodesic, CATIAHybridShapeCurvePar *& oCurvePar); \
      virtual HRESULT __stdcall AddNewCurveSmooth(CATIAReference * ipIACurve, CATIAHybridShapeCurveSmooth *& opIACurveSmooth); \
      virtual HRESULT __stdcall AddNewTranslate(CATIAReference * iElement, CATIAHybridShapeDirection * iDirection, double iDistance, CATIAHybridShapeTranslate *& oTranslate); \
      virtual HRESULT __stdcall AddNewEmptyTranslate(CATIAHybridShapeTranslate *& oTranslate); \
      virtual HRESULT __stdcall AddNewAffinity(CATIAReference * iElement, double iXRatio, double iYRatio, double iZRatio, CATIAHybridShapeAffinity *& oAffinity); \
      virtual HRESULT __stdcall AddNewHybridSplit(CATIAReference * iElement1, CATIAReference * iElement2, CATLONG iOrientation, CATIAHybridShapeSplit *& oSplit); \
      virtual HRESULT __stdcall AddNewHybridTrim(CATIAReference * iElement1, CATLONG iOrientation1, CATIAReference * iElement2, CATLONG iOrientation2, CATIAHybridShapeTrim *& oTrim); \
      virtual HRESULT __stdcall AddNewProject(CATIAReference * iElement, CATIAReference * iSupport, CATIAHybridShapeProject *& oProjection); \
      virtual HRESULT __stdcall AddNewCorner(CATIAReference * iElement1, CATIAReference * iElement2, CATIAReference * iSupport, double iRadius, CATLONG iOrientation1, CATLONG iOrientation2, CAT_VARIANT_BOOL iTrim, CATIAHybridShapeCorner *& oCorner); \
      virtual HRESULT __stdcall AddNew3DCorner(CATIAReference * iElement1, CATIAReference * iElement2, CATIAHybridShapeDirection * iDirection, double iRadius, CATLONG iOrientation1, CATLONG iOrientation2, CAT_VARIANT_BOOL iTrim, CATIAHybridShapeCorner *& oCorner); \
      virtual HRESULT __stdcall AddNewExtrapolUntil(CATIAReference * iBoundary, CATIAReference * iToExtrapol, CATIAReference * iUntil, CATIAHybridShapeExtrapol *& oExtrapol); \
      virtual HRESULT __stdcall AddNewExtrapolLength(CATIAReference * iBoundary, CATIAReference * iToExtrapol, double iLength, CATIAHybridShapeExtrapol *& oUntil); \
      virtual HRESULT __stdcall AddNewRotate(CATIAReference * iToRotate, CATIAReference * iAxis, double iAngle, CATIAHybridShapeRotate *& oRotate); \
      virtual HRESULT __stdcall AddNewEmptyRotate(CATIAHybridShapeRotate *& oRotate); \
      virtual HRESULT __stdcall AddNewIntersection(CATIAReference * iObject1, CATIAReference * iObject2, CATIAHybridShapeIntersection *& oIntersection); \
      virtual HRESULT __stdcall AddNewSymmetry(CATIAReference * iObject, CATIAReference * iReference, CATIAHybridShapeSymmetry *& oSymmetry); \
      virtual HRESULT __stdcall AddNewAxisToAxis(CATIAReference * iObject, CATIAReference * iReferenceAxis, CATIAReference * iTargetAxis, CATIAHybridShapeAxisToAxis *& oAxisToAxis); \
      virtual HRESULT __stdcall AddNewPointDatum(CATIAReference * iObject, CATIAHybridShapePointExplicit *& oPoint); \
      virtual HRESULT __stdcall AddNewLineDatum(CATIAReference * iObject, CATIAHybridShapeLineExplicit *& oLine); \
      virtual HRESULT __stdcall AddNewPlaneDatum(CATIAReference * iObject, CATIAHybridShapePlaneExplicit *& oPlane); \
      virtual HRESULT __stdcall AddNewCurveDatum(CATIAReference * iObject, CATIAHybridShapeCurveExplicit *& oCurve); \
      virtual HRESULT __stdcall AddNewCircleDatum(CATIAReference * iObject, CATIAHybridShapeCircleExplicit *& oCircle); \
      virtual HRESULT __stdcall AddNewSurfaceDatum(CATIAReference * iObject, CATIAHybridShapeSurfaceExplicit *& oSurface); \
      virtual HRESULT __stdcall AddNewVolumeDatum(CATIAReference * iObject, CATIAHybridShapeVolumeExplicit *& oVolume); \
      virtual HRESULT __stdcall DeleteObjectForDatum(CATIAReference * iObject); \
      virtual HRESULT __stdcall AddNewFill(CATIAHybridShapeFill *& oFill); \
      virtual HRESULT __stdcall AddNewSpline(CATIAHybridShapeSpline *& oSpline); \
      virtual HRESULT __stdcall AddNewSpiral(CATLONG iType, CATIAReference * iSupport, CATIAReference * iCenterPoint, CATIAHybridShapeDirection * iAxis, double iStartingRadius, CAT_VARIANT_BOOL iClockwiseRevolution, CATIAHybridShapeSpiral *& oSpiral); \
      virtual HRESULT __stdcall AddNewBoundary(CATIAReference * iInitialElement, CATIAReference * iSupport, CATLONG iTypedePropagation, CATIAHybridShapeBoundary *& oBoundary); \
      virtual HRESULT __stdcall AddNewBoundaryOfSurface(CATIAReference * Surface, CATIAHybridShapeBoundary *& oBoundary); \
      virtual HRESULT __stdcall AddNewPointCoord(double iX, double iY, double iZ, CATIAHybridShapePointCoord *& oPoint); \
      virtual HRESULT __stdcall AddNewPointCoordWithReference(double iX, double iY, double iZ, CATIAReference * iPt, CATIAHybridShapePointCoord *& oPoint); \
      virtual HRESULT __stdcall AddNewPointBetween(CATIAReference * iPoint1, CATIAReference * iPoint2, double iRatio, CATLONG iOrientation, CATIAHybridShapePointBetween *& oPoint); \
      virtual HRESULT __stdcall AddNewPointOnCurveWithReferenceFromDistance(CATIAReference * iCrv, CATIAReference * iPt, double iLong, CAT_VARIANT_BOOL iOrientation, CATIAHybridShapePointOnCurve *& oPoint); \
      virtual HRESULT __stdcall AddNewPointOnCurveFromDistance(CATIAReference * iCrv, double iLong, CAT_VARIANT_BOOL iOrientation, CATIAHybridShapePointOnCurve *& oPoint); \
      virtual HRESULT __stdcall AddNewPointOnCurveWithReferenceFromPercent(CATIAReference * iCrv, CATIAReference * iPt, double iLong, CAT_VARIANT_BOOL iOrientation, CATIAHybridShapePointOnCurve *& oPoint); \
      virtual HRESULT __stdcall AddNewPointOnCurveFromPercent(CATIAReference * iCrv, double iLong, CAT_VARIANT_BOOL iOrientation, CATIAHybridShapePointOnCurve *& oPoint); \
      virtual HRESULT __stdcall AddNewPointOnPlaneWithReference(CATIAReference * iPlane, CATIAReference * iPt, double iX, double iY, CATIAHybridShapePointOnPlane *& oPoint); \
      virtual HRESULT __stdcall AddNewPointOnPlane(CATIAReference * iPlane, double iX, double iY, CATIAHybridShapePointOnPlane *& oPoint); \
      virtual HRESULT __stdcall AddNewPointOnSurfaceWithReference(CATIAReference * iSurface, CATIAReference * iPt, CATIAHybridShapeDirection * iDirection, double iX, CATIAHybridShapePointOnSurface *& oPoint); \
      virtual HRESULT __stdcall AddNewPointOnSurface(CATIAReference * iSurface, CATIAHybridShapeDirection * iDirection, double iX, CATIAHybridShapePointOnSurface *& oPoint); \
      virtual HRESULT __stdcall AddNewPointCenter(CATIAReference * iCurve, CATIAHybridShapePointCenter *& oPoint); \
      virtual HRESULT __stdcall AddNewPointTangent(CATIAReference * iCurve, CATIAHybridShapeDirection * iDirection, CATIAHybridShapePointTangent *& oPoint); \
      virtual HRESULT __stdcall AddNewLinePtPt(CATIAReference * iPtOrigine, CATIAReference * iPtExtremite, CATIAHybridShapeLinePtPt *& oLine); \
      virtual HRESULT __stdcall AddNewLinePtPtOnSupport(CATIAReference * iPtOrigine, CATIAReference * iPtExtremite, CATIAReference * iSupport, CATIAHybridShapeLinePtPt *& oLine); \
      virtual HRESULT __stdcall AddNewLinePtPtExtended(CATIAReference * iPtOrigine, CATIAReference * iPtExtremite, double iBeginOffset, double iEndOffset, CATIAHybridShapeLinePtPt *& oLine); \
      virtual HRESULT __stdcall AddNewLinePtPtOnSupportExtended(CATIAReference * iPtOrigine, CATIAReference * iPtExtremite, CATIAReference * iSupport, double iBeginOffset, double iEndOffset, CATIAHybridShapeLinePtPt *& oLine); \
      virtual HRESULT __stdcall AddNewLinePtDir(CATIAReference * iPt, CATIAHybridShapeDirection * iDirection, double iBeginOffset, double iEndOffset, CAT_VARIANT_BOOL iOrientation, CATIAHybridShapeLinePtDir *& oLine); \
      virtual HRESULT __stdcall AddNewLinePtDirOnSupport(CATIAReference * iPt, CATIAHybridShapeDirection * iDirection, CATIAReference * iSupport, double iBeginOffset, double iEndOffset, CAT_VARIANT_BOOL iOrientation, CATIAHybridShapeLinePtDir *& oLine); \
      virtual HRESULT __stdcall AddNewLineAngle(CATIAReference * iCurve, CATIAReference * iSurface, CATIAReference * iPoint, CAT_VARIANT_BOOL iGeodesic, double iBeginOffset, double iEndOffset, double iAngle, CAT_VARIANT_BOOL iOrientation, CATIAHybridShapeLineAngle *& oLine); \
      virtual HRESULT __stdcall AddNewLineTangency(CATIAReference * iCurve, CATIAReference * iPoint, double iBeginOffset, double iEndOffset, CAT_VARIANT_BOOL iOrientation, CATIAHybridShapeLineTangency *& oLine); \
      virtual HRESULT __stdcall AddNewLineBiTangent(CATIAReference * iCurve1, CATIAReference * iElement2, CATIAReference * iSupport, CATIAHybridShapeLineBiTangent *& oLine); \
      virtual HRESULT __stdcall AddNewLineTangencyOnSupport(CATIAReference * iCurve, CATIAReference * iPoint, CATIAReference * iSupport, double iBeginOffset, double iEndOffset, CAT_VARIANT_BOOL iOrientation, CATIAHybridShapeLineTangency *& oLine); \
      virtual HRESULT __stdcall AddNewLineNormal(CATIAReference * iSurface, CATIAReference * iPoint, double iBeginOffset, double iEndOffset, CAT_VARIANT_BOOL iOrientation, CATIAHybridShapeLineNormal *& oLine); \
      virtual HRESULT __stdcall AddNewLineBisecting(CATIAReference * iLine1, CATIAReference * iLine2, double iBeginOffset, double iEndOffset, CAT_VARIANT_BOOL iOrientation, CATLONG SolutionNb, CATIAHybridShapeLineBisecting *& oLine); \
      virtual HRESULT __stdcall AddNewLineBisectingOnSupport(CATIAReference * iLine1, CATIAReference * iLine2, CATIAReference * iSurface, double iBeginOffset, double iEndOffset, CAT_VARIANT_BOOL iOrientation, CATLONG SolutionNb, CATIAHybridShapeLineBisecting *& oLine); \
      virtual HRESULT __stdcall AddNewLineBisectingWithPoint(CATIAReference * iLine1, CATIAReference * iLine2, CATIAReference * iRefPoint, double iBeginOffset, double iEndOffset, CAT_VARIANT_BOOL iOrientation, CATLONG SolutionNb, CATIAHybridShapeLineBisecting *& oLine); \
      virtual HRESULT __stdcall AddNewLineBisectingOnSupportWithPoint(CATIAReference * iLine1, CATIAReference * iLine2, CATIAReference * iRefPoint, CATIAReference * iSurface, double iBeginOffset, double iEndOffset, CAT_VARIANT_BOOL iOrientation, CATLONG SolutionNb, CATIAHybridShapeLineBisecting *& oLine); \
      virtual HRESULT __stdcall AddNewPlaneEquation(double iA_Coeff, double iB_Coeff, double iC_Coeff, double iD_Coeff, CATIAHybridShapePlaneEquation *& oPlane); \
      virtual HRESULT __stdcall AddNewPlane3Points(CATIAReference * iPt1, CATIAReference * iPt2, CATIAReference * iPt3, CATIAHybridShapePlane3Points *& oPlane); \
      virtual HRESULT __stdcall AddNewPlane2Lines(CATIAReference * iLn1, CATIAReference * iLn2, CATIAHybridShapePlane2Lines *& oPlane); \
      virtual HRESULT __stdcall AddNewPlane1Line1Pt(CATIAReference * iLn, CATIAReference * iPt, CATIAHybridShapePlane1Line1Pt *& oPlane); \
      virtual HRESULT __stdcall AddNewPlane1Curve(CATIAReference * iPlanarCurve, CATIAHybridShapePlane1Curve *& oPlane); \
      virtual HRESULT __stdcall AddNewPlaneTangent(CATIAReference * iSurface, CATIAReference * iPt, CATIAHybridShapePlaneTangent *& oPlane); \
      virtual HRESULT __stdcall AddNewPlaneNormal(CATIAReference * iCurve, CATIAReference * iPt, CATIAHybridShapePlaneNormal *& oPlane); \
      virtual HRESULT __stdcall AddNewPlaneOffset(CATIAReference * iPlane, double iOffset, CAT_VARIANT_BOOL iOrientation, CATIAHybridShapePlaneOffset *& oPlane); \
      virtual HRESULT __stdcall AddNewPlaneOffsetPt(CATIAReference * iPlane, CATIAReference * iPt, CATIAHybridShapePlaneOffsetPt *& oPlane); \
      virtual HRESULT __stdcall AddNewPlaneAngle(CATIAReference * iPlane, CATIAReference * iRevolAxis, double iAngle, CAT_VARIANT_BOOL iOrientation, CATIAHybridShapePlaneAngle *& oPlane); \
      virtual HRESULT __stdcall AddNewPlaneMean(CATSafeArrayVariant & iListOfPoints, CATLONG NbPoint, CATIAHybridShapePlaneMean *& oPlane); \
      virtual HRESULT __stdcall AddNewExtrude(CATIAReference * iObjectToExtrude, double iOffsetDebut, double iOffsetFin, CATIAHybridShapeDirection * iDirection, CATIAHybridShapeExtrude *& oExtrudeObject); \
      virtual HRESULT __stdcall AddNewCylinder(CATIAReference * iCenter, double iRadius, double iFirstLength, double iSecondLength, CATIAHybridShapeDirection * iDirection, CATIAHybridShapeCylinder *& oCylinderObject); \
      virtual HRESULT __stdcall AddNewRevol(CATIAReference * iObjectToExtrude, double iOffsetDebut, double iOffsetFin, CATIAReference * iAxis, CATIAHybridShapeRevol *& oRevolObject); \
      virtual HRESULT __stdcall AddNewDirection(CATIAReference * iElement, CATIAHybridShapeDirection *& oDirection); \
      virtual HRESULT __stdcall AddNewDirectionByCoord(double iX, double iY, double iZ, CATIAHybridShapeDirection *& oDirection); \
      virtual HRESULT __stdcall AddNewOffset(CATIAReference * iObjectToOffset, double iOffset, CAT_VARIANT_BOOL iOrientation, double iPrecision, CATIAHybridShapeOffset *& oOffsetObject); \
      virtual HRESULT __stdcall AddNewHybridScaling(CATIAReference * iElemToScale, CATIAReference * iCenter, double iRatio, CATIAHybridShapeScaling *& oScaling); \
      virtual HRESULT __stdcall AddNewHealing(CATIAReference * iBodyToheal, CATIAHybridShapeHealing *& oHealing); \
      virtual HRESULT __stdcall AddNewRollingOffset(CATIAHybridShapeRollingOffset *& oRollingOffset); \
      virtual HRESULT __stdcall AddNewReflectLine(CATIAReference * iSupport, CATIAHybridShapeDirection * iDir, double iAngle, CATLONG iOrientationSupport, CATLONG iOrientationDirection, CATIAHybridShapeReflectLine *& oReflectLine); \
      virtual HRESULT __stdcall AddNewReflectLineWithType(CATIAReference * iSupport, CATIAHybridShapeDirection * iDir, double iAngle, CATLONG iOrientationSupport, CATLONG iOrientationDirection, CATLONG iType, CATIAHybridShapeReflectLine *& oReflectLine); \
      virtual HRESULT __stdcall AddNewConicalReflectLineWithType(CATIAReference * iSupport, CATIAReference * iOrigin, double iAngle, CATLONG iOrientationSupport, CATLONG iType, CATIAHybridShapeReflectLine *& oReflectLine); \
      virtual HRESULT __stdcall AddNewSphere(CATIAReference * iCenter, CATIAReference * iAxis, double iRadius, double iBeginParallelAngle, double iEndParallelAngle, double iBeginMeridianAngle, double iEndMeridianAngle, CATIAHybridShapeSphere *& oSphereObject); \
      virtual HRESULT __stdcall AddNewBump(CATIAReference * iBodyToBump, CATIAHybridShapeBump *& oBump); \
      virtual HRESULT __stdcall AddNewWrapCurve(CATIAHybridShapeWrapCurve *& oWrapCurve); \
      virtual HRESULT __stdcall AddNewWrapSurface(CATIAReference * iBodyToDeform, CATIAHybridShapeWrapSurface *& oWrapSurface); \
      virtual HRESULT __stdcall AddNewPolyline(CATIAHybridShapePolyline *& oPolyline); \
      virtual HRESULT __stdcall AddNewSweepConic(CATIAReference * ipIAGuide1, CATIAHybridShapeSweepConic *& opIASweepConic); \
      virtual HRESULT __stdcall AddNewCircleCenterTangent(CATIAReference * iCenterElem, CATIAReference * iTangentCurve, CATIAReference * iSupport, double iRadius, CATIAHybridShapeCircleCenterTangent *& oCircle); \
      virtual HRESULT __stdcall AddNewCircleCenterAxis(CATIAReference * iAxis, CATIAReference * iPoint, double iValue, CAT_VARIANT_BOOL iProjection, CATIAHybridShapeCircleCenterAxis *& oCircle); \
      virtual HRESULT __stdcall AddNewCircleCenterAxisWithAngles(CATIAReference * iAxis, CATIAReference * iPoint, double iValue, CAT_VARIANT_BOOL iProjection, double iStartAngle, double iEndAngle, CATIAHybridShapeCircleCenterAxis *& oCircle); \
      virtual HRESULT __stdcall AddNew3DCurveOffset(CATIAReference * iCurveToOffset, CATIAHybridShapeDirection * iDirection, double iOffset, double iCornerRadius, double iCornerTension, CATIAHybridShape3DCurveOffset *& o3DCurveOffset); \
      virtual HRESULT __stdcall AddNewSection(CATIAHybridShapeSection *& oSection); \
      virtual HRESULT __stdcall AddNewIntegratedLaw(CATLONG iType, CATIAHybridShapeIntegratedLaw *& oLaw); \
      virtual HRESULT __stdcall AddNewDatums(CATIAReference * iElem, CATSafeArrayVariant *& oArrayOfDatum); \
      virtual HRESULT __stdcall GetGeometricalFeatureType(CATIAReference * iElem, short & oType); \
      virtual HRESULT __stdcall GSMVisibility(CATIAReference * iElem, CATLONG Show); \
      virtual HRESULT __stdcall ChangeFeatureName(CATIAReference * iElem, const CATBSTR & Name); \
      virtual HRESULT __stdcall AddNewTransfer(CATIAReference * iElementToTransfer, CATLONG iTypeOfTransfer, CATIAHybridShapeTransfer *& oExt); \
      virtual HRESULT __stdcall GSMGetObjectFromReference(CATIAReference * iElem, CATIAHybridShape *& oObjet); \
      virtual HRESULT __stdcall DuplicateGSMSpec(CATIAReference * iRef, CATIAHybridShape *& oDupSpec); \
      virtual HRESULT __stdcall SetReferenceElemForMultiple(CATIAReference * iSpec, CATIAReference * iNewRef); \
      virtual HRESULT __stdcall AddNewPointOnCurveWithReferenceAlongDirection(CATIAReference * iCrv, CATIAReference * iPt, double iLong, CAT_VARIANT_BOOL iOrientation, CATIAHybridShapeDirection * iDirection, CATIAHybridShapePointOnCurve *& oPoint); \
      virtual HRESULT __stdcall AddNewPointOnCurveAlongDirection(CATIAReference * iCrv, double iLong, CAT_VARIANT_BOOL iOrientation, CATIAHybridShapeDirection * iDirection, CATIAHybridShapePointOnCurve *& oPoint); \
      virtual HRESULT __stdcall AddNewMidSurface(CATIAReference * iSupport, CATLONG iCreationMode, double iThreshold, CATIAHybridShapeMidSurface *& oMidSurface); \
      virtual HRESULT __stdcall AddNewMidSurfaceWithAutoThreshold(CATIAReference * iSupport, CATLONG iCreationMode, double iThreshold, CATLONG iAutoThicknessThreshold, CATIAHybridShapeMidSurface *& oMidSurface); \
      virtual HRESULT  __stdcall get_Application(CATIAApplication *& oApplication); \
      virtual HRESULT  __stdcall get_Parent(CATBaseDispatch *& oParent); \
      virtual HRESULT  __stdcall get_Name(CATBSTR & oNameBSTR); \
      virtual HRESULT  __stdcall put_Name(const CATBSTR & iNameBSTR); \
      virtual HRESULT  __stdcall GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj); \
};



#define ENVTIEdeclare_CATIAHybridShapeFactory(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
virtual HRESULT __stdcall AddNewSpine(CATIAHybridShapeSpine *& oExt); \
virtual HRESULT __stdcall AddNewAxisLine(CATIAReference * iElement, CATIAHybridShapeAxisLine *& oAxisLine); \
virtual HRESULT __stdcall AddNewLawDistProj(CATIAReference * iReference, CATIAReference * iDefinition, CATIAHybridShapeLawDistProj *& oLaw); \
virtual HRESULT __stdcall AddNewBlend(CATIAHybridShapeBlend *& oBlend); \
virtual HRESULT __stdcall AddNewConic(CATIAReference * iSupport, CATIAReference * iStartingPoint, CATIAReference * iEndPoint, CATIAHybridShapeConic *& oConic); \
virtual HRESULT __stdcall AddNewHelix(CATIAReference * iAxis, CAT_VARIANT_BOOL iInvertAxis, CATIAReference * iStartingPoint, double iPitch, double iHeight, CAT_VARIANT_BOOL iClockwiseRevolution, double iStartingAngle, double iTaperAngle, CAT_VARIANT_BOOL iTaperOutward, CATIAHybridShapeHelix *& oHelix); \
virtual HRESULT __stdcall AddNewCombine(CATIAReference * iFirstCurve, CATIAReference * iSecondCurve, CATLONG iNearestSolutions, CATIAHybridShapeCombine *& oCombine); \
virtual HRESULT __stdcall AddNewExtremum(CATIAReference * iObjet, CATIAHybridShapeDirection * iDir, CATLONG iMinMax, CATIAHybridShapeExtremum *& oExt); \
virtual HRESULT __stdcall AddNewExtremumPolar(short iType, CATIAReference * ipIAContour, CATIAHybridShapeExtremumPolar *& opIAExtPolar); \
virtual HRESULT __stdcall AddNewCircle2PointsRad(CATIAReference * iPoint1, CATIAReference * iPoint2, CATIAReference * iSupport, CAT_VARIANT_BOOL iGeodesic, double iRadius, CATLONG iOri, CATIAHybridShapeCircle2PointsRad *& oCircle); \
virtual HRESULT __stdcall AddNewFilletBiTangent(CATIAReference * iElement1, CATIAReference * iElement2, double iRadius, CATLONG iOrientation1, CATLONG iOrientation2, CATLONG iSupportsTrimMode, CATLONG iRibbonRelimitationMode, CATIAHybridShapeFilletBiTangent *& oFillet); \
virtual HRESULT __stdcall AddNewFilletTriTangent(CATIAReference * iElement1, CATIAReference * iElement2, CATIAReference * iRemoveElem, CATLONG iOrientation1, CATLONG iOrientation2, CATLONG iRemoveOrientation, CATLONG iSupportsTrimMode, CATLONG iRibbonRelimitationMode, CATIAHybridShapeFilletTriTangent *& oFillet); \
virtual HRESULT __stdcall AddNewCircle3Points(CATIAReference * iPoint1, CATIAReference * iPoint2, CATIAReference * iPoint3, CATIAHybridShapeCircle3Points *& oCircle); \
virtual HRESULT __stdcall AddNewCircleBitangentPoint(CATIAReference * iCurve1, CATIAReference * iCurve2, CATIAReference * iPoint, CATIAReference * iSupport, CATLONG iOri1, CATLONG iOri2, CATIAHybridShapeCircleBitangentPoint *& oCircle); \
virtual HRESULT __stdcall AddNewCircleBitangentRadius(CATIAReference * iCurve1, CATIAReference * iCurve2, CATIAReference * iSupport, double iRadius, CATLONG iOri1, CATLONG iOri2, CATIAHybridShapeCircleBitangentRadius *& oCircle); \
virtual HRESULT __stdcall AddNewCircleCtrPtWithAngles(CATIAReference * iCenter, CATIAReference * iCrossingPoint, CATIAReference * iSupport, CAT_VARIANT_BOOL iGeodesic, double iStartAngle, double iEndAngle, CATIAHybridShapeCircleCtrPt *& oCircle); \
virtual HRESULT __stdcall AddNewCircleCtrPt(CATIAReference * iCenter, CATIAReference * iCrossingPoint, CATIAReference * iSupport, CAT_VARIANT_BOOL iGeodesic, CATIAHybridShapeCircleCtrPt *& oCircle); \
virtual HRESULT __stdcall AddNewCircleCtrRadWithAngles(CATIAReference * iCenter, CATIAReference * iSupport, CAT_VARIANT_BOOL iGeodesic, double iRadius, double iStartAngle, double iEndAngle, CATIAHybridShapeCircleCtrRad *& oCircle); \
virtual HRESULT __stdcall AddNewCircleCtrRad(CATIAReference * iCenter, CATIAReference * iSupport, CAT_VARIANT_BOOL iGeodesic, double iRadius, CATIAHybridShapeCircleCtrRad *& oCircle); \
virtual HRESULT __stdcall AddNewCircleTritangent(CATIAReference * iCurve1, CATIAReference * iCurve2, CATIAReference * iCurve3, CATIAReference * iSupport, CATLONG iOri1, CATLONG iOri2, CATLONG iOri3, CATIAHybridShapeCircleTritangent *& oCircle); \
virtual HRESULT __stdcall AddNewDevelop(CATLONG iMode, CATIAReference * iToDevelop, CATIAReference * iSupport, CATIAHybridShapeDevelop *& oExt); \
virtual HRESULT __stdcall AddNewUnfold(CATIAHybridShapeUnfold *& oExt); \
virtual HRESULT __stdcall AddNewSweepCircle(CATIAReference * iGuide1, CATIAHybridShapeSweepCircle *& oExt); \
virtual HRESULT __stdcall AddNewSweepExplicit(CATIAReference * iProfile, CATIAReference * iGuide, CATIAHybridShapeSweepExplicit *& oExt); \
virtual HRESULT __stdcall AddNewSweepLine(CATIAReference * iGuide1, CATIAHybridShapeSweepLine *& oExt); \
virtual HRESULT __stdcall AddNewPositionTransfo(CATLONG iMode, CATIAHybridShapePositionTransfo *& oExt); \
virtual HRESULT __stdcall AddNewLoft(CATIAHybridShapeLoft *& oExt); \
virtual HRESULT __stdcall AddNewJoin(CATIAReference * Element1, CATIAReference * Element2, CATIAHybridShapeAssemble *& oExt); \
virtual HRESULT __stdcall AddNewExtract(CATIAReference * Element, CATIAHybridShapeExtract *& oExt); \
virtual HRESULT __stdcall AddNewExtractMulti(CATIAReference * Element, CATIAHybridShapeExtractMulti *& oExt); \
virtual HRESULT __stdcall AddNewInverse(CATIAReference * Element, CATLONG Inverse, CATIAHybridShapeInverse *& oInv); \
virtual HRESULT __stdcall AddNewNear(CATIAReference * MultiElement, CATIAReference * ReferenceElement, CATIAHybridShapeNear *& oNear); \
virtual HRESULT __stdcall AddNewConnect(CATIAReference * iCurve1, CATIAReference * iPoint1, CATLONG iOrient1, CATLONG iContinuity1, double iTension1, CATIAReference * iCurve2, CATIAReference * iPoint2, CATLONG iOrient2, CATLONG iContinuity2, double iTension2, CAT_VARIANT_BOOL Trim, CATIAHybridShapeConnect *& oConnect); \
virtual HRESULT __stdcall AddNewCurvePar(CATIAReference * Curve, CATIAReference * Support, double Distance, CAT_VARIANT_BOOL InvertDirection, CAT_VARIANT_BOOL Geodesic, CATIAHybridShapeCurvePar *& oCurvePar); \
virtual HRESULT __stdcall AddNewCurveSmooth(CATIAReference * ipIACurve, CATIAHybridShapeCurveSmooth *& opIACurveSmooth); \
virtual HRESULT __stdcall AddNewTranslate(CATIAReference * iElement, CATIAHybridShapeDirection * iDirection, double iDistance, CATIAHybridShapeTranslate *& oTranslate); \
virtual HRESULT __stdcall AddNewEmptyTranslate(CATIAHybridShapeTranslate *& oTranslate); \
virtual HRESULT __stdcall AddNewAffinity(CATIAReference * iElement, double iXRatio, double iYRatio, double iZRatio, CATIAHybridShapeAffinity *& oAffinity); \
virtual HRESULT __stdcall AddNewHybridSplit(CATIAReference * iElement1, CATIAReference * iElement2, CATLONG iOrientation, CATIAHybridShapeSplit *& oSplit); \
virtual HRESULT __stdcall AddNewHybridTrim(CATIAReference * iElement1, CATLONG iOrientation1, CATIAReference * iElement2, CATLONG iOrientation2, CATIAHybridShapeTrim *& oTrim); \
virtual HRESULT __stdcall AddNewProject(CATIAReference * iElement, CATIAReference * iSupport, CATIAHybridShapeProject *& oProjection); \
virtual HRESULT __stdcall AddNewCorner(CATIAReference * iElement1, CATIAReference * iElement2, CATIAReference * iSupport, double iRadius, CATLONG iOrientation1, CATLONG iOrientation2, CAT_VARIANT_BOOL iTrim, CATIAHybridShapeCorner *& oCorner); \
virtual HRESULT __stdcall AddNew3DCorner(CATIAReference * iElement1, CATIAReference * iElement2, CATIAHybridShapeDirection * iDirection, double iRadius, CATLONG iOrientation1, CATLONG iOrientation2, CAT_VARIANT_BOOL iTrim, CATIAHybridShapeCorner *& oCorner); \
virtual HRESULT __stdcall AddNewExtrapolUntil(CATIAReference * iBoundary, CATIAReference * iToExtrapol, CATIAReference * iUntil, CATIAHybridShapeExtrapol *& oExtrapol); \
virtual HRESULT __stdcall AddNewExtrapolLength(CATIAReference * iBoundary, CATIAReference * iToExtrapol, double iLength, CATIAHybridShapeExtrapol *& oUntil); \
virtual HRESULT __stdcall AddNewRotate(CATIAReference * iToRotate, CATIAReference * iAxis, double iAngle, CATIAHybridShapeRotate *& oRotate); \
virtual HRESULT __stdcall AddNewEmptyRotate(CATIAHybridShapeRotate *& oRotate); \
virtual HRESULT __stdcall AddNewIntersection(CATIAReference * iObject1, CATIAReference * iObject2, CATIAHybridShapeIntersection *& oIntersection); \
virtual HRESULT __stdcall AddNewSymmetry(CATIAReference * iObject, CATIAReference * iReference, CATIAHybridShapeSymmetry *& oSymmetry); \
virtual HRESULT __stdcall AddNewAxisToAxis(CATIAReference * iObject, CATIAReference * iReferenceAxis, CATIAReference * iTargetAxis, CATIAHybridShapeAxisToAxis *& oAxisToAxis); \
virtual HRESULT __stdcall AddNewPointDatum(CATIAReference * iObject, CATIAHybridShapePointExplicit *& oPoint); \
virtual HRESULT __stdcall AddNewLineDatum(CATIAReference * iObject, CATIAHybridShapeLineExplicit *& oLine); \
virtual HRESULT __stdcall AddNewPlaneDatum(CATIAReference * iObject, CATIAHybridShapePlaneExplicit *& oPlane); \
virtual HRESULT __stdcall AddNewCurveDatum(CATIAReference * iObject, CATIAHybridShapeCurveExplicit *& oCurve); \
virtual HRESULT __stdcall AddNewCircleDatum(CATIAReference * iObject, CATIAHybridShapeCircleExplicit *& oCircle); \
virtual HRESULT __stdcall AddNewSurfaceDatum(CATIAReference * iObject, CATIAHybridShapeSurfaceExplicit *& oSurface); \
virtual HRESULT __stdcall AddNewVolumeDatum(CATIAReference * iObject, CATIAHybridShapeVolumeExplicit *& oVolume); \
virtual HRESULT __stdcall DeleteObjectForDatum(CATIAReference * iObject); \
virtual HRESULT __stdcall AddNewFill(CATIAHybridShapeFill *& oFill); \
virtual HRESULT __stdcall AddNewSpline(CATIAHybridShapeSpline *& oSpline); \
virtual HRESULT __stdcall AddNewSpiral(CATLONG iType, CATIAReference * iSupport, CATIAReference * iCenterPoint, CATIAHybridShapeDirection * iAxis, double iStartingRadius, CAT_VARIANT_BOOL iClockwiseRevolution, CATIAHybridShapeSpiral *& oSpiral); \
virtual HRESULT __stdcall AddNewBoundary(CATIAReference * iInitialElement, CATIAReference * iSupport, CATLONG iTypedePropagation, CATIAHybridShapeBoundary *& oBoundary); \
virtual HRESULT __stdcall AddNewBoundaryOfSurface(CATIAReference * Surface, CATIAHybridShapeBoundary *& oBoundary); \
virtual HRESULT __stdcall AddNewPointCoord(double iX, double iY, double iZ, CATIAHybridShapePointCoord *& oPoint); \
virtual HRESULT __stdcall AddNewPointCoordWithReference(double iX, double iY, double iZ, CATIAReference * iPt, CATIAHybridShapePointCoord *& oPoint); \
virtual HRESULT __stdcall AddNewPointBetween(CATIAReference * iPoint1, CATIAReference * iPoint2, double iRatio, CATLONG iOrientation, CATIAHybridShapePointBetween *& oPoint); \
virtual HRESULT __stdcall AddNewPointOnCurveWithReferenceFromDistance(CATIAReference * iCrv, CATIAReference * iPt, double iLong, CAT_VARIANT_BOOL iOrientation, CATIAHybridShapePointOnCurve *& oPoint); \
virtual HRESULT __stdcall AddNewPointOnCurveFromDistance(CATIAReference * iCrv, double iLong, CAT_VARIANT_BOOL iOrientation, CATIAHybridShapePointOnCurve *& oPoint); \
virtual HRESULT __stdcall AddNewPointOnCurveWithReferenceFromPercent(CATIAReference * iCrv, CATIAReference * iPt, double iLong, CAT_VARIANT_BOOL iOrientation, CATIAHybridShapePointOnCurve *& oPoint); \
virtual HRESULT __stdcall AddNewPointOnCurveFromPercent(CATIAReference * iCrv, double iLong, CAT_VARIANT_BOOL iOrientation, CATIAHybridShapePointOnCurve *& oPoint); \
virtual HRESULT __stdcall AddNewPointOnPlaneWithReference(CATIAReference * iPlane, CATIAReference * iPt, double iX, double iY, CATIAHybridShapePointOnPlane *& oPoint); \
virtual HRESULT __stdcall AddNewPointOnPlane(CATIAReference * iPlane, double iX, double iY, CATIAHybridShapePointOnPlane *& oPoint); \
virtual HRESULT __stdcall AddNewPointOnSurfaceWithReference(CATIAReference * iSurface, CATIAReference * iPt, CATIAHybridShapeDirection * iDirection, double iX, CATIAHybridShapePointOnSurface *& oPoint); \
virtual HRESULT __stdcall AddNewPointOnSurface(CATIAReference * iSurface, CATIAHybridShapeDirection * iDirection, double iX, CATIAHybridShapePointOnSurface *& oPoint); \
virtual HRESULT __stdcall AddNewPointCenter(CATIAReference * iCurve, CATIAHybridShapePointCenter *& oPoint); \
virtual HRESULT __stdcall AddNewPointTangent(CATIAReference * iCurve, CATIAHybridShapeDirection * iDirection, CATIAHybridShapePointTangent *& oPoint); \
virtual HRESULT __stdcall AddNewLinePtPt(CATIAReference * iPtOrigine, CATIAReference * iPtExtremite, CATIAHybridShapeLinePtPt *& oLine); \
virtual HRESULT __stdcall AddNewLinePtPtOnSupport(CATIAReference * iPtOrigine, CATIAReference * iPtExtremite, CATIAReference * iSupport, CATIAHybridShapeLinePtPt *& oLine); \
virtual HRESULT __stdcall AddNewLinePtPtExtended(CATIAReference * iPtOrigine, CATIAReference * iPtExtremite, double iBeginOffset, double iEndOffset, CATIAHybridShapeLinePtPt *& oLine); \
virtual HRESULT __stdcall AddNewLinePtPtOnSupportExtended(CATIAReference * iPtOrigine, CATIAReference * iPtExtremite, CATIAReference * iSupport, double iBeginOffset, double iEndOffset, CATIAHybridShapeLinePtPt *& oLine); \
virtual HRESULT __stdcall AddNewLinePtDir(CATIAReference * iPt, CATIAHybridShapeDirection * iDirection, double iBeginOffset, double iEndOffset, CAT_VARIANT_BOOL iOrientation, CATIAHybridShapeLinePtDir *& oLine); \
virtual HRESULT __stdcall AddNewLinePtDirOnSupport(CATIAReference * iPt, CATIAHybridShapeDirection * iDirection, CATIAReference * iSupport, double iBeginOffset, double iEndOffset, CAT_VARIANT_BOOL iOrientation, CATIAHybridShapeLinePtDir *& oLine); \
virtual HRESULT __stdcall AddNewLineAngle(CATIAReference * iCurve, CATIAReference * iSurface, CATIAReference * iPoint, CAT_VARIANT_BOOL iGeodesic, double iBeginOffset, double iEndOffset, double iAngle, CAT_VARIANT_BOOL iOrientation, CATIAHybridShapeLineAngle *& oLine); \
virtual HRESULT __stdcall AddNewLineTangency(CATIAReference * iCurve, CATIAReference * iPoint, double iBeginOffset, double iEndOffset, CAT_VARIANT_BOOL iOrientation, CATIAHybridShapeLineTangency *& oLine); \
virtual HRESULT __stdcall AddNewLineBiTangent(CATIAReference * iCurve1, CATIAReference * iElement2, CATIAReference * iSupport, CATIAHybridShapeLineBiTangent *& oLine); \
virtual HRESULT __stdcall AddNewLineTangencyOnSupport(CATIAReference * iCurve, CATIAReference * iPoint, CATIAReference * iSupport, double iBeginOffset, double iEndOffset, CAT_VARIANT_BOOL iOrientation, CATIAHybridShapeLineTangency *& oLine); \
virtual HRESULT __stdcall AddNewLineNormal(CATIAReference * iSurface, CATIAReference * iPoint, double iBeginOffset, double iEndOffset, CAT_VARIANT_BOOL iOrientation, CATIAHybridShapeLineNormal *& oLine); \
virtual HRESULT __stdcall AddNewLineBisecting(CATIAReference * iLine1, CATIAReference * iLine2, double iBeginOffset, double iEndOffset, CAT_VARIANT_BOOL iOrientation, CATLONG SolutionNb, CATIAHybridShapeLineBisecting *& oLine); \
virtual HRESULT __stdcall AddNewLineBisectingOnSupport(CATIAReference * iLine1, CATIAReference * iLine2, CATIAReference * iSurface, double iBeginOffset, double iEndOffset, CAT_VARIANT_BOOL iOrientation, CATLONG SolutionNb, CATIAHybridShapeLineBisecting *& oLine); \
virtual HRESULT __stdcall AddNewLineBisectingWithPoint(CATIAReference * iLine1, CATIAReference * iLine2, CATIAReference * iRefPoint, double iBeginOffset, double iEndOffset, CAT_VARIANT_BOOL iOrientation, CATLONG SolutionNb, CATIAHybridShapeLineBisecting *& oLine); \
virtual HRESULT __stdcall AddNewLineBisectingOnSupportWithPoint(CATIAReference * iLine1, CATIAReference * iLine2, CATIAReference * iRefPoint, CATIAReference * iSurface, double iBeginOffset, double iEndOffset, CAT_VARIANT_BOOL iOrientation, CATLONG SolutionNb, CATIAHybridShapeLineBisecting *& oLine); \
virtual HRESULT __stdcall AddNewPlaneEquation(double iA_Coeff, double iB_Coeff, double iC_Coeff, double iD_Coeff, CATIAHybridShapePlaneEquation *& oPlane); \
virtual HRESULT __stdcall AddNewPlane3Points(CATIAReference * iPt1, CATIAReference * iPt2, CATIAReference * iPt3, CATIAHybridShapePlane3Points *& oPlane); \
virtual HRESULT __stdcall AddNewPlane2Lines(CATIAReference * iLn1, CATIAReference * iLn2, CATIAHybridShapePlane2Lines *& oPlane); \
virtual HRESULT __stdcall AddNewPlane1Line1Pt(CATIAReference * iLn, CATIAReference * iPt, CATIAHybridShapePlane1Line1Pt *& oPlane); \
virtual HRESULT __stdcall AddNewPlane1Curve(CATIAReference * iPlanarCurve, CATIAHybridShapePlane1Curve *& oPlane); \
virtual HRESULT __stdcall AddNewPlaneTangent(CATIAReference * iSurface, CATIAReference * iPt, CATIAHybridShapePlaneTangent *& oPlane); \
virtual HRESULT __stdcall AddNewPlaneNormal(CATIAReference * iCurve, CATIAReference * iPt, CATIAHybridShapePlaneNormal *& oPlane); \
virtual HRESULT __stdcall AddNewPlaneOffset(CATIAReference * iPlane, double iOffset, CAT_VARIANT_BOOL iOrientation, CATIAHybridShapePlaneOffset *& oPlane); \
virtual HRESULT __stdcall AddNewPlaneOffsetPt(CATIAReference * iPlane, CATIAReference * iPt, CATIAHybridShapePlaneOffsetPt *& oPlane); \
virtual HRESULT __stdcall AddNewPlaneAngle(CATIAReference * iPlane, CATIAReference * iRevolAxis, double iAngle, CAT_VARIANT_BOOL iOrientation, CATIAHybridShapePlaneAngle *& oPlane); \
virtual HRESULT __stdcall AddNewPlaneMean(CATSafeArrayVariant & iListOfPoints, CATLONG NbPoint, CATIAHybridShapePlaneMean *& oPlane); \
virtual HRESULT __stdcall AddNewExtrude(CATIAReference * iObjectToExtrude, double iOffsetDebut, double iOffsetFin, CATIAHybridShapeDirection * iDirection, CATIAHybridShapeExtrude *& oExtrudeObject); \
virtual HRESULT __stdcall AddNewCylinder(CATIAReference * iCenter, double iRadius, double iFirstLength, double iSecondLength, CATIAHybridShapeDirection * iDirection, CATIAHybridShapeCylinder *& oCylinderObject); \
virtual HRESULT __stdcall AddNewRevol(CATIAReference * iObjectToExtrude, double iOffsetDebut, double iOffsetFin, CATIAReference * iAxis, CATIAHybridShapeRevol *& oRevolObject); \
virtual HRESULT __stdcall AddNewDirection(CATIAReference * iElement, CATIAHybridShapeDirection *& oDirection); \
virtual HRESULT __stdcall AddNewDirectionByCoord(double iX, double iY, double iZ, CATIAHybridShapeDirection *& oDirection); \
virtual HRESULT __stdcall AddNewOffset(CATIAReference * iObjectToOffset, double iOffset, CAT_VARIANT_BOOL iOrientation, double iPrecision, CATIAHybridShapeOffset *& oOffsetObject); \
virtual HRESULT __stdcall AddNewHybridScaling(CATIAReference * iElemToScale, CATIAReference * iCenter, double iRatio, CATIAHybridShapeScaling *& oScaling); \
virtual HRESULT __stdcall AddNewHealing(CATIAReference * iBodyToheal, CATIAHybridShapeHealing *& oHealing); \
virtual HRESULT __stdcall AddNewRollingOffset(CATIAHybridShapeRollingOffset *& oRollingOffset); \
virtual HRESULT __stdcall AddNewReflectLine(CATIAReference * iSupport, CATIAHybridShapeDirection * iDir, double iAngle, CATLONG iOrientationSupport, CATLONG iOrientationDirection, CATIAHybridShapeReflectLine *& oReflectLine); \
virtual HRESULT __stdcall AddNewReflectLineWithType(CATIAReference * iSupport, CATIAHybridShapeDirection * iDir, double iAngle, CATLONG iOrientationSupport, CATLONG iOrientationDirection, CATLONG iType, CATIAHybridShapeReflectLine *& oReflectLine); \
virtual HRESULT __stdcall AddNewConicalReflectLineWithType(CATIAReference * iSupport, CATIAReference * iOrigin, double iAngle, CATLONG iOrientationSupport, CATLONG iType, CATIAHybridShapeReflectLine *& oReflectLine); \
virtual HRESULT __stdcall AddNewSphere(CATIAReference * iCenter, CATIAReference * iAxis, double iRadius, double iBeginParallelAngle, double iEndParallelAngle, double iBeginMeridianAngle, double iEndMeridianAngle, CATIAHybridShapeSphere *& oSphereObject); \
virtual HRESULT __stdcall AddNewBump(CATIAReference * iBodyToBump, CATIAHybridShapeBump *& oBump); \
virtual HRESULT __stdcall AddNewWrapCurve(CATIAHybridShapeWrapCurve *& oWrapCurve); \
virtual HRESULT __stdcall AddNewWrapSurface(CATIAReference * iBodyToDeform, CATIAHybridShapeWrapSurface *& oWrapSurface); \
virtual HRESULT __stdcall AddNewPolyline(CATIAHybridShapePolyline *& oPolyline); \
virtual HRESULT __stdcall AddNewSweepConic(CATIAReference * ipIAGuide1, CATIAHybridShapeSweepConic *& opIASweepConic); \
virtual HRESULT __stdcall AddNewCircleCenterTangent(CATIAReference * iCenterElem, CATIAReference * iTangentCurve, CATIAReference * iSupport, double iRadius, CATIAHybridShapeCircleCenterTangent *& oCircle); \
virtual HRESULT __stdcall AddNewCircleCenterAxis(CATIAReference * iAxis, CATIAReference * iPoint, double iValue, CAT_VARIANT_BOOL iProjection, CATIAHybridShapeCircleCenterAxis *& oCircle); \
virtual HRESULT __stdcall AddNewCircleCenterAxisWithAngles(CATIAReference * iAxis, CATIAReference * iPoint, double iValue, CAT_VARIANT_BOOL iProjection, double iStartAngle, double iEndAngle, CATIAHybridShapeCircleCenterAxis *& oCircle); \
virtual HRESULT __stdcall AddNew3DCurveOffset(CATIAReference * iCurveToOffset, CATIAHybridShapeDirection * iDirection, double iOffset, double iCornerRadius, double iCornerTension, CATIAHybridShape3DCurveOffset *& o3DCurveOffset); \
virtual HRESULT __stdcall AddNewSection(CATIAHybridShapeSection *& oSection); \
virtual HRESULT __stdcall AddNewIntegratedLaw(CATLONG iType, CATIAHybridShapeIntegratedLaw *& oLaw); \
virtual HRESULT __stdcall AddNewDatums(CATIAReference * iElem, CATSafeArrayVariant *& oArrayOfDatum); \
virtual HRESULT __stdcall GetGeometricalFeatureType(CATIAReference * iElem, short & oType); \
virtual HRESULT __stdcall GSMVisibility(CATIAReference * iElem, CATLONG Show); \
virtual HRESULT __stdcall ChangeFeatureName(CATIAReference * iElem, const CATBSTR & Name); \
virtual HRESULT __stdcall AddNewTransfer(CATIAReference * iElementToTransfer, CATLONG iTypeOfTransfer, CATIAHybridShapeTransfer *& oExt); \
virtual HRESULT __stdcall GSMGetObjectFromReference(CATIAReference * iElem, CATIAHybridShape *& oObjet); \
virtual HRESULT __stdcall DuplicateGSMSpec(CATIAReference * iRef, CATIAHybridShape *& oDupSpec); \
virtual HRESULT __stdcall SetReferenceElemForMultiple(CATIAReference * iSpec, CATIAReference * iNewRef); \
virtual HRESULT __stdcall AddNewPointOnCurveWithReferenceAlongDirection(CATIAReference * iCrv, CATIAReference * iPt, double iLong, CAT_VARIANT_BOOL iOrientation, CATIAHybridShapeDirection * iDirection, CATIAHybridShapePointOnCurve *& oPoint); \
virtual HRESULT __stdcall AddNewPointOnCurveAlongDirection(CATIAReference * iCrv, double iLong, CAT_VARIANT_BOOL iOrientation, CATIAHybridShapeDirection * iDirection, CATIAHybridShapePointOnCurve *& oPoint); \
virtual HRESULT __stdcall AddNewMidSurface(CATIAReference * iSupport, CATLONG iCreationMode, double iThreshold, CATIAHybridShapeMidSurface *& oMidSurface); \
virtual HRESULT __stdcall AddNewMidSurfaceWithAutoThreshold(CATIAReference * iSupport, CATLONG iCreationMode, double iThreshold, CATLONG iAutoThicknessThreshold, CATIAHybridShapeMidSurface *& oMidSurface); \
virtual HRESULT  __stdcall get_Application(CATIAApplication *& oApplication); \
virtual HRESULT  __stdcall get_Parent(CATBaseDispatch *& oParent); \
virtual HRESULT  __stdcall get_Name(CATBSTR & oNameBSTR); \
virtual HRESULT  __stdcall put_Name(const CATBSTR & iNameBSTR); \
virtual HRESULT  __stdcall GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj); \


#define ENVTIEdefine_CATIAHybridShapeFactory(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
HRESULT __stdcall  ENVTIEName::AddNewSpine(CATIAHybridShapeSpine *& oExt) \
{ \
return (ENVTIECALL(CATIAHybridShapeFactory,ENVTIETypeLetter,ENVTIELetter)AddNewSpine(oExt)); \
} \
HRESULT __stdcall  ENVTIEName::AddNewAxisLine(CATIAReference * iElement, CATIAHybridShapeAxisLine *& oAxisLine) \
{ \
return (ENVTIECALL(CATIAHybridShapeFactory,ENVTIETypeLetter,ENVTIELetter)AddNewAxisLine(iElement,oAxisLine)); \
} \
HRESULT __stdcall  ENVTIEName::AddNewLawDistProj(CATIAReference * iReference, CATIAReference * iDefinition, CATIAHybridShapeLawDistProj *& oLaw) \
{ \
return (ENVTIECALL(CATIAHybridShapeFactory,ENVTIETypeLetter,ENVTIELetter)AddNewLawDistProj(iReference,iDefinition,oLaw)); \
} \
HRESULT __stdcall  ENVTIEName::AddNewBlend(CATIAHybridShapeBlend *& oBlend) \
{ \
return (ENVTIECALL(CATIAHybridShapeFactory,ENVTIETypeLetter,ENVTIELetter)AddNewBlend(oBlend)); \
} \
HRESULT __stdcall  ENVTIEName::AddNewConic(CATIAReference * iSupport, CATIAReference * iStartingPoint, CATIAReference * iEndPoint, CATIAHybridShapeConic *& oConic) \
{ \
return (ENVTIECALL(CATIAHybridShapeFactory,ENVTIETypeLetter,ENVTIELetter)AddNewConic(iSupport,iStartingPoint,iEndPoint,oConic)); \
} \
HRESULT __stdcall  ENVTIEName::AddNewHelix(CATIAReference * iAxis, CAT_VARIANT_BOOL iInvertAxis, CATIAReference * iStartingPoint, double iPitch, double iHeight, CAT_VARIANT_BOOL iClockwiseRevolution, double iStartingAngle, double iTaperAngle, CAT_VARIANT_BOOL iTaperOutward, CATIAHybridShapeHelix *& oHelix) \
{ \
return (ENVTIECALL(CATIAHybridShapeFactory,ENVTIETypeLetter,ENVTIELetter)AddNewHelix(iAxis,iInvertAxis,iStartingPoint,iPitch,iHeight,iClockwiseRevolution,iStartingAngle,iTaperAngle,iTaperOutward,oHelix)); \
} \
HRESULT __stdcall  ENVTIEName::AddNewCombine(CATIAReference * iFirstCurve, CATIAReference * iSecondCurve, CATLONG iNearestSolutions, CATIAHybridShapeCombine *& oCombine) \
{ \
return (ENVTIECALL(CATIAHybridShapeFactory,ENVTIETypeLetter,ENVTIELetter)AddNewCombine(iFirstCurve,iSecondCurve,iNearestSolutions,oCombine)); \
} \
HRESULT __stdcall  ENVTIEName::AddNewExtremum(CATIAReference * iObjet, CATIAHybridShapeDirection * iDir, CATLONG iMinMax, CATIAHybridShapeExtremum *& oExt) \
{ \
return (ENVTIECALL(CATIAHybridShapeFactory,ENVTIETypeLetter,ENVTIELetter)AddNewExtremum(iObjet,iDir,iMinMax,oExt)); \
} \
HRESULT __stdcall  ENVTIEName::AddNewExtremumPolar(short iType, CATIAReference * ipIAContour, CATIAHybridShapeExtremumPolar *& opIAExtPolar) \
{ \
return (ENVTIECALL(CATIAHybridShapeFactory,ENVTIETypeLetter,ENVTIELetter)AddNewExtremumPolar(iType,ipIAContour,opIAExtPolar)); \
} \
HRESULT __stdcall  ENVTIEName::AddNewCircle2PointsRad(CATIAReference * iPoint1, CATIAReference * iPoint2, CATIAReference * iSupport, CAT_VARIANT_BOOL iGeodesic, double iRadius, CATLONG iOri, CATIAHybridShapeCircle2PointsRad *& oCircle) \
{ \
return (ENVTIECALL(CATIAHybridShapeFactory,ENVTIETypeLetter,ENVTIELetter)AddNewCircle2PointsRad(iPoint1,iPoint2,iSupport,iGeodesic,iRadius,iOri,oCircle)); \
} \
HRESULT __stdcall  ENVTIEName::AddNewFilletBiTangent(CATIAReference * iElement1, CATIAReference * iElement2, double iRadius, CATLONG iOrientation1, CATLONG iOrientation2, CATLONG iSupportsTrimMode, CATLONG iRibbonRelimitationMode, CATIAHybridShapeFilletBiTangent *& oFillet) \
{ \
return (ENVTIECALL(CATIAHybridShapeFactory,ENVTIETypeLetter,ENVTIELetter)AddNewFilletBiTangent(iElement1,iElement2,iRadius,iOrientation1,iOrientation2,iSupportsTrimMode,iRibbonRelimitationMode,oFillet)); \
} \
HRESULT __stdcall  ENVTIEName::AddNewFilletTriTangent(CATIAReference * iElement1, CATIAReference * iElement2, CATIAReference * iRemoveElem, CATLONG iOrientation1, CATLONG iOrientation2, CATLONG iRemoveOrientation, CATLONG iSupportsTrimMode, CATLONG iRibbonRelimitationMode, CATIAHybridShapeFilletTriTangent *& oFillet) \
{ \
return (ENVTIECALL(CATIAHybridShapeFactory,ENVTIETypeLetter,ENVTIELetter)AddNewFilletTriTangent(iElement1,iElement2,iRemoveElem,iOrientation1,iOrientation2,iRemoveOrientation,iSupportsTrimMode,iRibbonRelimitationMode,oFillet)); \
} \
HRESULT __stdcall  ENVTIEName::AddNewCircle3Points(CATIAReference * iPoint1, CATIAReference * iPoint2, CATIAReference * iPoint3, CATIAHybridShapeCircle3Points *& oCircle) \
{ \
return (ENVTIECALL(CATIAHybridShapeFactory,ENVTIETypeLetter,ENVTIELetter)AddNewCircle3Points(iPoint1,iPoint2,iPoint3,oCircle)); \
} \
HRESULT __stdcall  ENVTIEName::AddNewCircleBitangentPoint(CATIAReference * iCurve1, CATIAReference * iCurve2, CATIAReference * iPoint, CATIAReference * iSupport, CATLONG iOri1, CATLONG iOri2, CATIAHybridShapeCircleBitangentPoint *& oCircle) \
{ \
return (ENVTIECALL(CATIAHybridShapeFactory,ENVTIETypeLetter,ENVTIELetter)AddNewCircleBitangentPoint(iCurve1,iCurve2,iPoint,iSupport,iOri1,iOri2,oCircle)); \
} \
HRESULT __stdcall  ENVTIEName::AddNewCircleBitangentRadius(CATIAReference * iCurve1, CATIAReference * iCurve2, CATIAReference * iSupport, double iRadius, CATLONG iOri1, CATLONG iOri2, CATIAHybridShapeCircleBitangentRadius *& oCircle) \
{ \
return (ENVTIECALL(CATIAHybridShapeFactory,ENVTIETypeLetter,ENVTIELetter)AddNewCircleBitangentRadius(iCurve1,iCurve2,iSupport,iRadius,iOri1,iOri2,oCircle)); \
} \
HRESULT __stdcall  ENVTIEName::AddNewCircleCtrPtWithAngles(CATIAReference * iCenter, CATIAReference * iCrossingPoint, CATIAReference * iSupport, CAT_VARIANT_BOOL iGeodesic, double iStartAngle, double iEndAngle, CATIAHybridShapeCircleCtrPt *& oCircle) \
{ \
return (ENVTIECALL(CATIAHybridShapeFactory,ENVTIETypeLetter,ENVTIELetter)AddNewCircleCtrPtWithAngles(iCenter,iCrossingPoint,iSupport,iGeodesic,iStartAngle,iEndAngle,oCircle)); \
} \
HRESULT __stdcall  ENVTIEName::AddNewCircleCtrPt(CATIAReference * iCenter, CATIAReference * iCrossingPoint, CATIAReference * iSupport, CAT_VARIANT_BOOL iGeodesic, CATIAHybridShapeCircleCtrPt *& oCircle) \
{ \
return (ENVTIECALL(CATIAHybridShapeFactory,ENVTIETypeLetter,ENVTIELetter)AddNewCircleCtrPt(iCenter,iCrossingPoint,iSupport,iGeodesic,oCircle)); \
} \
HRESULT __stdcall  ENVTIEName::AddNewCircleCtrRadWithAngles(CATIAReference * iCenter, CATIAReference * iSupport, CAT_VARIANT_BOOL iGeodesic, double iRadius, double iStartAngle, double iEndAngle, CATIAHybridShapeCircleCtrRad *& oCircle) \
{ \
return (ENVTIECALL(CATIAHybridShapeFactory,ENVTIETypeLetter,ENVTIELetter)AddNewCircleCtrRadWithAngles(iCenter,iSupport,iGeodesic,iRadius,iStartAngle,iEndAngle,oCircle)); \
} \
HRESULT __stdcall  ENVTIEName::AddNewCircleCtrRad(CATIAReference * iCenter, CATIAReference * iSupport, CAT_VARIANT_BOOL iGeodesic, double iRadius, CATIAHybridShapeCircleCtrRad *& oCircle) \
{ \
return (ENVTIECALL(CATIAHybridShapeFactory,ENVTIETypeLetter,ENVTIELetter)AddNewCircleCtrRad(iCenter,iSupport,iGeodesic,iRadius,oCircle)); \
} \
HRESULT __stdcall  ENVTIEName::AddNewCircleTritangent(CATIAReference * iCurve1, CATIAReference * iCurve2, CATIAReference * iCurve3, CATIAReference * iSupport, CATLONG iOri1, CATLONG iOri2, CATLONG iOri3, CATIAHybridShapeCircleTritangent *& oCircle) \
{ \
return (ENVTIECALL(CATIAHybridShapeFactory,ENVTIETypeLetter,ENVTIELetter)AddNewCircleTritangent(iCurve1,iCurve2,iCurve3,iSupport,iOri1,iOri2,iOri3,oCircle)); \
} \
HRESULT __stdcall  ENVTIEName::AddNewDevelop(CATLONG iMode, CATIAReference * iToDevelop, CATIAReference * iSupport, CATIAHybridShapeDevelop *& oExt) \
{ \
return (ENVTIECALL(CATIAHybridShapeFactory,ENVTIETypeLetter,ENVTIELetter)AddNewDevelop(iMode,iToDevelop,iSupport,oExt)); \
} \
HRESULT __stdcall  ENVTIEName::AddNewUnfold(CATIAHybridShapeUnfold *& oExt) \
{ \
return (ENVTIECALL(CATIAHybridShapeFactory,ENVTIETypeLetter,ENVTIELetter)AddNewUnfold(oExt)); \
} \
HRESULT __stdcall  ENVTIEName::AddNewSweepCircle(CATIAReference * iGuide1, CATIAHybridShapeSweepCircle *& oExt) \
{ \
return (ENVTIECALL(CATIAHybridShapeFactory,ENVTIETypeLetter,ENVTIELetter)AddNewSweepCircle(iGuide1,oExt)); \
} \
HRESULT __stdcall  ENVTIEName::AddNewSweepExplicit(CATIAReference * iProfile, CATIAReference * iGuide, CATIAHybridShapeSweepExplicit *& oExt) \
{ \
return (ENVTIECALL(CATIAHybridShapeFactory,ENVTIETypeLetter,ENVTIELetter)AddNewSweepExplicit(iProfile,iGuide,oExt)); \
} \
HRESULT __stdcall  ENVTIEName::AddNewSweepLine(CATIAReference * iGuide1, CATIAHybridShapeSweepLine *& oExt) \
{ \
return (ENVTIECALL(CATIAHybridShapeFactory,ENVTIETypeLetter,ENVTIELetter)AddNewSweepLine(iGuide1,oExt)); \
} \
HRESULT __stdcall  ENVTIEName::AddNewPositionTransfo(CATLONG iMode, CATIAHybridShapePositionTransfo *& oExt) \
{ \
return (ENVTIECALL(CATIAHybridShapeFactory,ENVTIETypeLetter,ENVTIELetter)AddNewPositionTransfo(iMode,oExt)); \
} \
HRESULT __stdcall  ENVTIEName::AddNewLoft(CATIAHybridShapeLoft *& oExt) \
{ \
return (ENVTIECALL(CATIAHybridShapeFactory,ENVTIETypeLetter,ENVTIELetter)AddNewLoft(oExt)); \
} \
HRESULT __stdcall  ENVTIEName::AddNewJoin(CATIAReference * Element1, CATIAReference * Element2, CATIAHybridShapeAssemble *& oExt) \
{ \
return (ENVTIECALL(CATIAHybridShapeFactory,ENVTIETypeLetter,ENVTIELetter)AddNewJoin(Element1,Element2,oExt)); \
} \
HRESULT __stdcall  ENVTIEName::AddNewExtract(CATIAReference * Element, CATIAHybridShapeExtract *& oExt) \
{ \
return (ENVTIECALL(CATIAHybridShapeFactory,ENVTIETypeLetter,ENVTIELetter)AddNewExtract(Element,oExt)); \
} \
HRESULT __stdcall  ENVTIEName::AddNewExtractMulti(CATIAReference * Element, CATIAHybridShapeExtractMulti *& oExt) \
{ \
return (ENVTIECALL(CATIAHybridShapeFactory,ENVTIETypeLetter,ENVTIELetter)AddNewExtractMulti(Element,oExt)); \
} \
HRESULT __stdcall  ENVTIEName::AddNewInverse(CATIAReference * Element, CATLONG Inverse, CATIAHybridShapeInverse *& oInv) \
{ \
return (ENVTIECALL(CATIAHybridShapeFactory,ENVTIETypeLetter,ENVTIELetter)AddNewInverse(Element,Inverse,oInv)); \
} \
HRESULT __stdcall  ENVTIEName::AddNewNear(CATIAReference * MultiElement, CATIAReference * ReferenceElement, CATIAHybridShapeNear *& oNear) \
{ \
return (ENVTIECALL(CATIAHybridShapeFactory,ENVTIETypeLetter,ENVTIELetter)AddNewNear(MultiElement,ReferenceElement,oNear)); \
} \
HRESULT __stdcall  ENVTIEName::AddNewConnect(CATIAReference * iCurve1, CATIAReference * iPoint1, CATLONG iOrient1, CATLONG iContinuity1, double iTension1, CATIAReference * iCurve2, CATIAReference * iPoint2, CATLONG iOrient2, CATLONG iContinuity2, double iTension2, CAT_VARIANT_BOOL Trim, CATIAHybridShapeConnect *& oConnect) \
{ \
return (ENVTIECALL(CATIAHybridShapeFactory,ENVTIETypeLetter,ENVTIELetter)AddNewConnect(iCurve1,iPoint1,iOrient1,iContinuity1,iTension1,iCurve2,iPoint2,iOrient2,iContinuity2,iTension2,Trim,oConnect)); \
} \
HRESULT __stdcall  ENVTIEName::AddNewCurvePar(CATIAReference * Curve, CATIAReference * Support, double Distance, CAT_VARIANT_BOOL InvertDirection, CAT_VARIANT_BOOL Geodesic, CATIAHybridShapeCurvePar *& oCurvePar) \
{ \
return (ENVTIECALL(CATIAHybridShapeFactory,ENVTIETypeLetter,ENVTIELetter)AddNewCurvePar(Curve,Support,Distance,InvertDirection,Geodesic,oCurvePar)); \
} \
HRESULT __stdcall  ENVTIEName::AddNewCurveSmooth(CATIAReference * ipIACurve, CATIAHybridShapeCurveSmooth *& opIACurveSmooth) \
{ \
return (ENVTIECALL(CATIAHybridShapeFactory,ENVTIETypeLetter,ENVTIELetter)AddNewCurveSmooth(ipIACurve,opIACurveSmooth)); \
} \
HRESULT __stdcall  ENVTIEName::AddNewTranslate(CATIAReference * iElement, CATIAHybridShapeDirection * iDirection, double iDistance, CATIAHybridShapeTranslate *& oTranslate) \
{ \
return (ENVTIECALL(CATIAHybridShapeFactory,ENVTIETypeLetter,ENVTIELetter)AddNewTranslate(iElement,iDirection,iDistance,oTranslate)); \
} \
HRESULT __stdcall  ENVTIEName::AddNewEmptyTranslate(CATIAHybridShapeTranslate *& oTranslate) \
{ \
return (ENVTIECALL(CATIAHybridShapeFactory,ENVTIETypeLetter,ENVTIELetter)AddNewEmptyTranslate(oTranslate)); \
} \
HRESULT __stdcall  ENVTIEName::AddNewAffinity(CATIAReference * iElement, double iXRatio, double iYRatio, double iZRatio, CATIAHybridShapeAffinity *& oAffinity) \
{ \
return (ENVTIECALL(CATIAHybridShapeFactory,ENVTIETypeLetter,ENVTIELetter)AddNewAffinity(iElement,iXRatio,iYRatio,iZRatio,oAffinity)); \
} \
HRESULT __stdcall  ENVTIEName::AddNewHybridSplit(CATIAReference * iElement1, CATIAReference * iElement2, CATLONG iOrientation, CATIAHybridShapeSplit *& oSplit) \
{ \
return (ENVTIECALL(CATIAHybridShapeFactory,ENVTIETypeLetter,ENVTIELetter)AddNewHybridSplit(iElement1,iElement2,iOrientation,oSplit)); \
} \
HRESULT __stdcall  ENVTIEName::AddNewHybridTrim(CATIAReference * iElement1, CATLONG iOrientation1, CATIAReference * iElement2, CATLONG iOrientation2, CATIAHybridShapeTrim *& oTrim) \
{ \
return (ENVTIECALL(CATIAHybridShapeFactory,ENVTIETypeLetter,ENVTIELetter)AddNewHybridTrim(iElement1,iOrientation1,iElement2,iOrientation2,oTrim)); \
} \
HRESULT __stdcall  ENVTIEName::AddNewProject(CATIAReference * iElement, CATIAReference * iSupport, CATIAHybridShapeProject *& oProjection) \
{ \
return (ENVTIECALL(CATIAHybridShapeFactory,ENVTIETypeLetter,ENVTIELetter)AddNewProject(iElement,iSupport,oProjection)); \
} \
HRESULT __stdcall  ENVTIEName::AddNewCorner(CATIAReference * iElement1, CATIAReference * iElement2, CATIAReference * iSupport, double iRadius, CATLONG iOrientation1, CATLONG iOrientation2, CAT_VARIANT_BOOL iTrim, CATIAHybridShapeCorner *& oCorner) \
{ \
return (ENVTIECALL(CATIAHybridShapeFactory,ENVTIETypeLetter,ENVTIELetter)AddNewCorner(iElement1,iElement2,iSupport,iRadius,iOrientation1,iOrientation2,iTrim,oCorner)); \
} \
HRESULT __stdcall  ENVTIEName::AddNew3DCorner(CATIAReference * iElement1, CATIAReference * iElement2, CATIAHybridShapeDirection * iDirection, double iRadius, CATLONG iOrientation1, CATLONG iOrientation2, CAT_VARIANT_BOOL iTrim, CATIAHybridShapeCorner *& oCorner) \
{ \
return (ENVTIECALL(CATIAHybridShapeFactory,ENVTIETypeLetter,ENVTIELetter)AddNew3DCorner(iElement1,iElement2,iDirection,iRadius,iOrientation1,iOrientation2,iTrim,oCorner)); \
} \
HRESULT __stdcall  ENVTIEName::AddNewExtrapolUntil(CATIAReference * iBoundary, CATIAReference * iToExtrapol, CATIAReference * iUntil, CATIAHybridShapeExtrapol *& oExtrapol) \
{ \
return (ENVTIECALL(CATIAHybridShapeFactory,ENVTIETypeLetter,ENVTIELetter)AddNewExtrapolUntil(iBoundary,iToExtrapol,iUntil,oExtrapol)); \
} \
HRESULT __stdcall  ENVTIEName::AddNewExtrapolLength(CATIAReference * iBoundary, CATIAReference * iToExtrapol, double iLength, CATIAHybridShapeExtrapol *& oUntil) \
{ \
return (ENVTIECALL(CATIAHybridShapeFactory,ENVTIETypeLetter,ENVTIELetter)AddNewExtrapolLength(iBoundary,iToExtrapol,iLength,oUntil)); \
} \
HRESULT __stdcall  ENVTIEName::AddNewRotate(CATIAReference * iToRotate, CATIAReference * iAxis, double iAngle, CATIAHybridShapeRotate *& oRotate) \
{ \
return (ENVTIECALL(CATIAHybridShapeFactory,ENVTIETypeLetter,ENVTIELetter)AddNewRotate(iToRotate,iAxis,iAngle,oRotate)); \
} \
HRESULT __stdcall  ENVTIEName::AddNewEmptyRotate(CATIAHybridShapeRotate *& oRotate) \
{ \
return (ENVTIECALL(CATIAHybridShapeFactory,ENVTIETypeLetter,ENVTIELetter)AddNewEmptyRotate(oRotate)); \
} \
HRESULT __stdcall  ENVTIEName::AddNewIntersection(CATIAReference * iObject1, CATIAReference * iObject2, CATIAHybridShapeIntersection *& oIntersection) \
{ \
return (ENVTIECALL(CATIAHybridShapeFactory,ENVTIETypeLetter,ENVTIELetter)AddNewIntersection(iObject1,iObject2,oIntersection)); \
} \
HRESULT __stdcall  ENVTIEName::AddNewSymmetry(CATIAReference * iObject, CATIAReference * iReference, CATIAHybridShapeSymmetry *& oSymmetry) \
{ \
return (ENVTIECALL(CATIAHybridShapeFactory,ENVTIETypeLetter,ENVTIELetter)AddNewSymmetry(iObject,iReference,oSymmetry)); \
} \
HRESULT __stdcall  ENVTIEName::AddNewAxisToAxis(CATIAReference * iObject, CATIAReference * iReferenceAxis, CATIAReference * iTargetAxis, CATIAHybridShapeAxisToAxis *& oAxisToAxis) \
{ \
return (ENVTIECALL(CATIAHybridShapeFactory,ENVTIETypeLetter,ENVTIELetter)AddNewAxisToAxis(iObject,iReferenceAxis,iTargetAxis,oAxisToAxis)); \
} \
HRESULT __stdcall  ENVTIEName::AddNewPointDatum(CATIAReference * iObject, CATIAHybridShapePointExplicit *& oPoint) \
{ \
return (ENVTIECALL(CATIAHybridShapeFactory,ENVTIETypeLetter,ENVTIELetter)AddNewPointDatum(iObject,oPoint)); \
} \
HRESULT __stdcall  ENVTIEName::AddNewLineDatum(CATIAReference * iObject, CATIAHybridShapeLineExplicit *& oLine) \
{ \
return (ENVTIECALL(CATIAHybridShapeFactory,ENVTIETypeLetter,ENVTIELetter)AddNewLineDatum(iObject,oLine)); \
} \
HRESULT __stdcall  ENVTIEName::AddNewPlaneDatum(CATIAReference * iObject, CATIAHybridShapePlaneExplicit *& oPlane) \
{ \
return (ENVTIECALL(CATIAHybridShapeFactory,ENVTIETypeLetter,ENVTIELetter)AddNewPlaneDatum(iObject,oPlane)); \
} \
HRESULT __stdcall  ENVTIEName::AddNewCurveDatum(CATIAReference * iObject, CATIAHybridShapeCurveExplicit *& oCurve) \
{ \
return (ENVTIECALL(CATIAHybridShapeFactory,ENVTIETypeLetter,ENVTIELetter)AddNewCurveDatum(iObject,oCurve)); \
} \
HRESULT __stdcall  ENVTIEName::AddNewCircleDatum(CATIAReference * iObject, CATIAHybridShapeCircleExplicit *& oCircle) \
{ \
return (ENVTIECALL(CATIAHybridShapeFactory,ENVTIETypeLetter,ENVTIELetter)AddNewCircleDatum(iObject,oCircle)); \
} \
HRESULT __stdcall  ENVTIEName::AddNewSurfaceDatum(CATIAReference * iObject, CATIAHybridShapeSurfaceExplicit *& oSurface) \
{ \
return (ENVTIECALL(CATIAHybridShapeFactory,ENVTIETypeLetter,ENVTIELetter)AddNewSurfaceDatum(iObject,oSurface)); \
} \
HRESULT __stdcall  ENVTIEName::AddNewVolumeDatum(CATIAReference * iObject, CATIAHybridShapeVolumeExplicit *& oVolume) \
{ \
return (ENVTIECALL(CATIAHybridShapeFactory,ENVTIETypeLetter,ENVTIELetter)AddNewVolumeDatum(iObject,oVolume)); \
} \
HRESULT __stdcall  ENVTIEName::DeleteObjectForDatum(CATIAReference * iObject) \
{ \
return (ENVTIECALL(CATIAHybridShapeFactory,ENVTIETypeLetter,ENVTIELetter)DeleteObjectForDatum(iObject)); \
} \
HRESULT __stdcall  ENVTIEName::AddNewFill(CATIAHybridShapeFill *& oFill) \
{ \
return (ENVTIECALL(CATIAHybridShapeFactory,ENVTIETypeLetter,ENVTIELetter)AddNewFill(oFill)); \
} \
HRESULT __stdcall  ENVTIEName::AddNewSpline(CATIAHybridShapeSpline *& oSpline) \
{ \
return (ENVTIECALL(CATIAHybridShapeFactory,ENVTIETypeLetter,ENVTIELetter)AddNewSpline(oSpline)); \
} \
HRESULT __stdcall  ENVTIEName::AddNewSpiral(CATLONG iType, CATIAReference * iSupport, CATIAReference * iCenterPoint, CATIAHybridShapeDirection * iAxis, double iStartingRadius, CAT_VARIANT_BOOL iClockwiseRevolution, CATIAHybridShapeSpiral *& oSpiral) \
{ \
return (ENVTIECALL(CATIAHybridShapeFactory,ENVTIETypeLetter,ENVTIELetter)AddNewSpiral(iType,iSupport,iCenterPoint,iAxis,iStartingRadius,iClockwiseRevolution,oSpiral)); \
} \
HRESULT __stdcall  ENVTIEName::AddNewBoundary(CATIAReference * iInitialElement, CATIAReference * iSupport, CATLONG iTypedePropagation, CATIAHybridShapeBoundary *& oBoundary) \
{ \
return (ENVTIECALL(CATIAHybridShapeFactory,ENVTIETypeLetter,ENVTIELetter)AddNewBoundary(iInitialElement,iSupport,iTypedePropagation,oBoundary)); \
} \
HRESULT __stdcall  ENVTIEName::AddNewBoundaryOfSurface(CATIAReference * Surface, CATIAHybridShapeBoundary *& oBoundary) \
{ \
return (ENVTIECALL(CATIAHybridShapeFactory,ENVTIETypeLetter,ENVTIELetter)AddNewBoundaryOfSurface(Surface,oBoundary)); \
} \
HRESULT __stdcall  ENVTIEName::AddNewPointCoord(double iX, double iY, double iZ, CATIAHybridShapePointCoord *& oPoint) \
{ \
return (ENVTIECALL(CATIAHybridShapeFactory,ENVTIETypeLetter,ENVTIELetter)AddNewPointCoord(iX,iY,iZ,oPoint)); \
} \
HRESULT __stdcall  ENVTIEName::AddNewPointCoordWithReference(double iX, double iY, double iZ, CATIAReference * iPt, CATIAHybridShapePointCoord *& oPoint) \
{ \
return (ENVTIECALL(CATIAHybridShapeFactory,ENVTIETypeLetter,ENVTIELetter)AddNewPointCoordWithReference(iX,iY,iZ,iPt,oPoint)); \
} \
HRESULT __stdcall  ENVTIEName::AddNewPointBetween(CATIAReference * iPoint1, CATIAReference * iPoint2, double iRatio, CATLONG iOrientation, CATIAHybridShapePointBetween *& oPoint) \
{ \
return (ENVTIECALL(CATIAHybridShapeFactory,ENVTIETypeLetter,ENVTIELetter)AddNewPointBetween(iPoint1,iPoint2,iRatio,iOrientation,oPoint)); \
} \
HRESULT __stdcall  ENVTIEName::AddNewPointOnCurveWithReferenceFromDistance(CATIAReference * iCrv, CATIAReference * iPt, double iLong, CAT_VARIANT_BOOL iOrientation, CATIAHybridShapePointOnCurve *& oPoint) \
{ \
return (ENVTIECALL(CATIAHybridShapeFactory,ENVTIETypeLetter,ENVTIELetter)AddNewPointOnCurveWithReferenceFromDistance(iCrv,iPt,iLong,iOrientation,oPoint)); \
} \
HRESULT __stdcall  ENVTIEName::AddNewPointOnCurveFromDistance(CATIAReference * iCrv, double iLong, CAT_VARIANT_BOOL iOrientation, CATIAHybridShapePointOnCurve *& oPoint) \
{ \
return (ENVTIECALL(CATIAHybridShapeFactory,ENVTIETypeLetter,ENVTIELetter)AddNewPointOnCurveFromDistance(iCrv,iLong,iOrientation,oPoint)); \
} \
HRESULT __stdcall  ENVTIEName::AddNewPointOnCurveWithReferenceFromPercent(CATIAReference * iCrv, CATIAReference * iPt, double iLong, CAT_VARIANT_BOOL iOrientation, CATIAHybridShapePointOnCurve *& oPoint) \
{ \
return (ENVTIECALL(CATIAHybridShapeFactory,ENVTIETypeLetter,ENVTIELetter)AddNewPointOnCurveWithReferenceFromPercent(iCrv,iPt,iLong,iOrientation,oPoint)); \
} \
HRESULT __stdcall  ENVTIEName::AddNewPointOnCurveFromPercent(CATIAReference * iCrv, double iLong, CAT_VARIANT_BOOL iOrientation, CATIAHybridShapePointOnCurve *& oPoint) \
{ \
return (ENVTIECALL(CATIAHybridShapeFactory,ENVTIETypeLetter,ENVTIELetter)AddNewPointOnCurveFromPercent(iCrv,iLong,iOrientation,oPoint)); \
} \
HRESULT __stdcall  ENVTIEName::AddNewPointOnPlaneWithReference(CATIAReference * iPlane, CATIAReference * iPt, double iX, double iY, CATIAHybridShapePointOnPlane *& oPoint) \
{ \
return (ENVTIECALL(CATIAHybridShapeFactory,ENVTIETypeLetter,ENVTIELetter)AddNewPointOnPlaneWithReference(iPlane,iPt,iX,iY,oPoint)); \
} \
HRESULT __stdcall  ENVTIEName::AddNewPointOnPlane(CATIAReference * iPlane, double iX, double iY, CATIAHybridShapePointOnPlane *& oPoint) \
{ \
return (ENVTIECALL(CATIAHybridShapeFactory,ENVTIETypeLetter,ENVTIELetter)AddNewPointOnPlane(iPlane,iX,iY,oPoint)); \
} \
HRESULT __stdcall  ENVTIEName::AddNewPointOnSurfaceWithReference(CATIAReference * iSurface, CATIAReference * iPt, CATIAHybridShapeDirection * iDirection, double iX, CATIAHybridShapePointOnSurface *& oPoint) \
{ \
return (ENVTIECALL(CATIAHybridShapeFactory,ENVTIETypeLetter,ENVTIELetter)AddNewPointOnSurfaceWithReference(iSurface,iPt,iDirection,iX,oPoint)); \
} \
HRESULT __stdcall  ENVTIEName::AddNewPointOnSurface(CATIAReference * iSurface, CATIAHybridShapeDirection * iDirection, double iX, CATIAHybridShapePointOnSurface *& oPoint) \
{ \
return (ENVTIECALL(CATIAHybridShapeFactory,ENVTIETypeLetter,ENVTIELetter)AddNewPointOnSurface(iSurface,iDirection,iX,oPoint)); \
} \
HRESULT __stdcall  ENVTIEName::AddNewPointCenter(CATIAReference * iCurve, CATIAHybridShapePointCenter *& oPoint) \
{ \
return (ENVTIECALL(CATIAHybridShapeFactory,ENVTIETypeLetter,ENVTIELetter)AddNewPointCenter(iCurve,oPoint)); \
} \
HRESULT __stdcall  ENVTIEName::AddNewPointTangent(CATIAReference * iCurve, CATIAHybridShapeDirection * iDirection, CATIAHybridShapePointTangent *& oPoint) \
{ \
return (ENVTIECALL(CATIAHybridShapeFactory,ENVTIETypeLetter,ENVTIELetter)AddNewPointTangent(iCurve,iDirection,oPoint)); \
} \
HRESULT __stdcall  ENVTIEName::AddNewLinePtPt(CATIAReference * iPtOrigine, CATIAReference * iPtExtremite, CATIAHybridShapeLinePtPt *& oLine) \
{ \
return (ENVTIECALL(CATIAHybridShapeFactory,ENVTIETypeLetter,ENVTIELetter)AddNewLinePtPt(iPtOrigine,iPtExtremite,oLine)); \
} \
HRESULT __stdcall  ENVTIEName::AddNewLinePtPtOnSupport(CATIAReference * iPtOrigine, CATIAReference * iPtExtremite, CATIAReference * iSupport, CATIAHybridShapeLinePtPt *& oLine) \
{ \
return (ENVTIECALL(CATIAHybridShapeFactory,ENVTIETypeLetter,ENVTIELetter)AddNewLinePtPtOnSupport(iPtOrigine,iPtExtremite,iSupport,oLine)); \
} \
HRESULT __stdcall  ENVTIEName::AddNewLinePtPtExtended(CATIAReference * iPtOrigine, CATIAReference * iPtExtremite, double iBeginOffset, double iEndOffset, CATIAHybridShapeLinePtPt *& oLine) \
{ \
return (ENVTIECALL(CATIAHybridShapeFactory,ENVTIETypeLetter,ENVTIELetter)AddNewLinePtPtExtended(iPtOrigine,iPtExtremite,iBeginOffset,iEndOffset,oLine)); \
} \
HRESULT __stdcall  ENVTIEName::AddNewLinePtPtOnSupportExtended(CATIAReference * iPtOrigine, CATIAReference * iPtExtremite, CATIAReference * iSupport, double iBeginOffset, double iEndOffset, CATIAHybridShapeLinePtPt *& oLine) \
{ \
return (ENVTIECALL(CATIAHybridShapeFactory,ENVTIETypeLetter,ENVTIELetter)AddNewLinePtPtOnSupportExtended(iPtOrigine,iPtExtremite,iSupport,iBeginOffset,iEndOffset,oLine)); \
} \
HRESULT __stdcall  ENVTIEName::AddNewLinePtDir(CATIAReference * iPt, CATIAHybridShapeDirection * iDirection, double iBeginOffset, double iEndOffset, CAT_VARIANT_BOOL iOrientation, CATIAHybridShapeLinePtDir *& oLine) \
{ \
return (ENVTIECALL(CATIAHybridShapeFactory,ENVTIETypeLetter,ENVTIELetter)AddNewLinePtDir(iPt,iDirection,iBeginOffset,iEndOffset,iOrientation,oLine)); \
} \
HRESULT __stdcall  ENVTIEName::AddNewLinePtDirOnSupport(CATIAReference * iPt, CATIAHybridShapeDirection * iDirection, CATIAReference * iSupport, double iBeginOffset, double iEndOffset, CAT_VARIANT_BOOL iOrientation, CATIAHybridShapeLinePtDir *& oLine) \
{ \
return (ENVTIECALL(CATIAHybridShapeFactory,ENVTIETypeLetter,ENVTIELetter)AddNewLinePtDirOnSupport(iPt,iDirection,iSupport,iBeginOffset,iEndOffset,iOrientation,oLine)); \
} \
HRESULT __stdcall  ENVTIEName::AddNewLineAngle(CATIAReference * iCurve, CATIAReference * iSurface, CATIAReference * iPoint, CAT_VARIANT_BOOL iGeodesic, double iBeginOffset, double iEndOffset, double iAngle, CAT_VARIANT_BOOL iOrientation, CATIAHybridShapeLineAngle *& oLine) \
{ \
return (ENVTIECALL(CATIAHybridShapeFactory,ENVTIETypeLetter,ENVTIELetter)AddNewLineAngle(iCurve,iSurface,iPoint,iGeodesic,iBeginOffset,iEndOffset,iAngle,iOrientation,oLine)); \
} \
HRESULT __stdcall  ENVTIEName::AddNewLineTangency(CATIAReference * iCurve, CATIAReference * iPoint, double iBeginOffset, double iEndOffset, CAT_VARIANT_BOOL iOrientation, CATIAHybridShapeLineTangency *& oLine) \
{ \
return (ENVTIECALL(CATIAHybridShapeFactory,ENVTIETypeLetter,ENVTIELetter)AddNewLineTangency(iCurve,iPoint,iBeginOffset,iEndOffset,iOrientation,oLine)); \
} \
HRESULT __stdcall  ENVTIEName::AddNewLineBiTangent(CATIAReference * iCurve1, CATIAReference * iElement2, CATIAReference * iSupport, CATIAHybridShapeLineBiTangent *& oLine) \
{ \
return (ENVTIECALL(CATIAHybridShapeFactory,ENVTIETypeLetter,ENVTIELetter)AddNewLineBiTangent(iCurve1,iElement2,iSupport,oLine)); \
} \
HRESULT __stdcall  ENVTIEName::AddNewLineTangencyOnSupport(CATIAReference * iCurve, CATIAReference * iPoint, CATIAReference * iSupport, double iBeginOffset, double iEndOffset, CAT_VARIANT_BOOL iOrientation, CATIAHybridShapeLineTangency *& oLine) \
{ \
return (ENVTIECALL(CATIAHybridShapeFactory,ENVTIETypeLetter,ENVTIELetter)AddNewLineTangencyOnSupport(iCurve,iPoint,iSupport,iBeginOffset,iEndOffset,iOrientation,oLine)); \
} \
HRESULT __stdcall  ENVTIEName::AddNewLineNormal(CATIAReference * iSurface, CATIAReference * iPoint, double iBeginOffset, double iEndOffset, CAT_VARIANT_BOOL iOrientation, CATIAHybridShapeLineNormal *& oLine) \
{ \
return (ENVTIECALL(CATIAHybridShapeFactory,ENVTIETypeLetter,ENVTIELetter)AddNewLineNormal(iSurface,iPoint,iBeginOffset,iEndOffset,iOrientation,oLine)); \
} \
HRESULT __stdcall  ENVTIEName::AddNewLineBisecting(CATIAReference * iLine1, CATIAReference * iLine2, double iBeginOffset, double iEndOffset, CAT_VARIANT_BOOL iOrientation, CATLONG SolutionNb, CATIAHybridShapeLineBisecting *& oLine) \
{ \
return (ENVTIECALL(CATIAHybridShapeFactory,ENVTIETypeLetter,ENVTIELetter)AddNewLineBisecting(iLine1,iLine2,iBeginOffset,iEndOffset,iOrientation,SolutionNb,oLine)); \
} \
HRESULT __stdcall  ENVTIEName::AddNewLineBisectingOnSupport(CATIAReference * iLine1, CATIAReference * iLine2, CATIAReference * iSurface, double iBeginOffset, double iEndOffset, CAT_VARIANT_BOOL iOrientation, CATLONG SolutionNb, CATIAHybridShapeLineBisecting *& oLine) \
{ \
return (ENVTIECALL(CATIAHybridShapeFactory,ENVTIETypeLetter,ENVTIELetter)AddNewLineBisectingOnSupport(iLine1,iLine2,iSurface,iBeginOffset,iEndOffset,iOrientation,SolutionNb,oLine)); \
} \
HRESULT __stdcall  ENVTIEName::AddNewLineBisectingWithPoint(CATIAReference * iLine1, CATIAReference * iLine2, CATIAReference * iRefPoint, double iBeginOffset, double iEndOffset, CAT_VARIANT_BOOL iOrientation, CATLONG SolutionNb, CATIAHybridShapeLineBisecting *& oLine) \
{ \
return (ENVTIECALL(CATIAHybridShapeFactory,ENVTIETypeLetter,ENVTIELetter)AddNewLineBisectingWithPoint(iLine1,iLine2,iRefPoint,iBeginOffset,iEndOffset,iOrientation,SolutionNb,oLine)); \
} \
HRESULT __stdcall  ENVTIEName::AddNewLineBisectingOnSupportWithPoint(CATIAReference * iLine1, CATIAReference * iLine2, CATIAReference * iRefPoint, CATIAReference * iSurface, double iBeginOffset, double iEndOffset, CAT_VARIANT_BOOL iOrientation, CATLONG SolutionNb, CATIAHybridShapeLineBisecting *& oLine) \
{ \
return (ENVTIECALL(CATIAHybridShapeFactory,ENVTIETypeLetter,ENVTIELetter)AddNewLineBisectingOnSupportWithPoint(iLine1,iLine2,iRefPoint,iSurface,iBeginOffset,iEndOffset,iOrientation,SolutionNb,oLine)); \
} \
HRESULT __stdcall  ENVTIEName::AddNewPlaneEquation(double iA_Coeff, double iB_Coeff, double iC_Coeff, double iD_Coeff, CATIAHybridShapePlaneEquation *& oPlane) \
{ \
return (ENVTIECALL(CATIAHybridShapeFactory,ENVTIETypeLetter,ENVTIELetter)AddNewPlaneEquation(iA_Coeff,iB_Coeff,iC_Coeff,iD_Coeff,oPlane)); \
} \
HRESULT __stdcall  ENVTIEName::AddNewPlane3Points(CATIAReference * iPt1, CATIAReference * iPt2, CATIAReference * iPt3, CATIAHybridShapePlane3Points *& oPlane) \
{ \
return (ENVTIECALL(CATIAHybridShapeFactory,ENVTIETypeLetter,ENVTIELetter)AddNewPlane3Points(iPt1,iPt2,iPt3,oPlane)); \
} \
HRESULT __stdcall  ENVTIEName::AddNewPlane2Lines(CATIAReference * iLn1, CATIAReference * iLn2, CATIAHybridShapePlane2Lines *& oPlane) \
{ \
return (ENVTIECALL(CATIAHybridShapeFactory,ENVTIETypeLetter,ENVTIELetter)AddNewPlane2Lines(iLn1,iLn2,oPlane)); \
} \
HRESULT __stdcall  ENVTIEName::AddNewPlane1Line1Pt(CATIAReference * iLn, CATIAReference * iPt, CATIAHybridShapePlane1Line1Pt *& oPlane) \
{ \
return (ENVTIECALL(CATIAHybridShapeFactory,ENVTIETypeLetter,ENVTIELetter)AddNewPlane1Line1Pt(iLn,iPt,oPlane)); \
} \
HRESULT __stdcall  ENVTIEName::AddNewPlane1Curve(CATIAReference * iPlanarCurve, CATIAHybridShapePlane1Curve *& oPlane) \
{ \
return (ENVTIECALL(CATIAHybridShapeFactory,ENVTIETypeLetter,ENVTIELetter)AddNewPlane1Curve(iPlanarCurve,oPlane)); \
} \
HRESULT __stdcall  ENVTIEName::AddNewPlaneTangent(CATIAReference * iSurface, CATIAReference * iPt, CATIAHybridShapePlaneTangent *& oPlane) \
{ \
return (ENVTIECALL(CATIAHybridShapeFactory,ENVTIETypeLetter,ENVTIELetter)AddNewPlaneTangent(iSurface,iPt,oPlane)); \
} \
HRESULT __stdcall  ENVTIEName::AddNewPlaneNormal(CATIAReference * iCurve, CATIAReference * iPt, CATIAHybridShapePlaneNormal *& oPlane) \
{ \
return (ENVTIECALL(CATIAHybridShapeFactory,ENVTIETypeLetter,ENVTIELetter)AddNewPlaneNormal(iCurve,iPt,oPlane)); \
} \
HRESULT __stdcall  ENVTIEName::AddNewPlaneOffset(CATIAReference * iPlane, double iOffset, CAT_VARIANT_BOOL iOrientation, CATIAHybridShapePlaneOffset *& oPlane) \
{ \
return (ENVTIECALL(CATIAHybridShapeFactory,ENVTIETypeLetter,ENVTIELetter)AddNewPlaneOffset(iPlane,iOffset,iOrientation,oPlane)); \
} \
HRESULT __stdcall  ENVTIEName::AddNewPlaneOffsetPt(CATIAReference * iPlane, CATIAReference * iPt, CATIAHybridShapePlaneOffsetPt *& oPlane) \
{ \
return (ENVTIECALL(CATIAHybridShapeFactory,ENVTIETypeLetter,ENVTIELetter)AddNewPlaneOffsetPt(iPlane,iPt,oPlane)); \
} \
HRESULT __stdcall  ENVTIEName::AddNewPlaneAngle(CATIAReference * iPlane, CATIAReference * iRevolAxis, double iAngle, CAT_VARIANT_BOOL iOrientation, CATIAHybridShapePlaneAngle *& oPlane) \
{ \
return (ENVTIECALL(CATIAHybridShapeFactory,ENVTIETypeLetter,ENVTIELetter)AddNewPlaneAngle(iPlane,iRevolAxis,iAngle,iOrientation,oPlane)); \
} \
HRESULT __stdcall  ENVTIEName::AddNewPlaneMean(CATSafeArrayVariant & iListOfPoints, CATLONG NbPoint, CATIAHybridShapePlaneMean *& oPlane) \
{ \
return (ENVTIECALL(CATIAHybridShapeFactory,ENVTIETypeLetter,ENVTIELetter)AddNewPlaneMean(iListOfPoints,NbPoint,oPlane)); \
} \
HRESULT __stdcall  ENVTIEName::AddNewExtrude(CATIAReference * iObjectToExtrude, double iOffsetDebut, double iOffsetFin, CATIAHybridShapeDirection * iDirection, CATIAHybridShapeExtrude *& oExtrudeObject) \
{ \
return (ENVTIECALL(CATIAHybridShapeFactory,ENVTIETypeLetter,ENVTIELetter)AddNewExtrude(iObjectToExtrude,iOffsetDebut,iOffsetFin,iDirection,oExtrudeObject)); \
} \
HRESULT __stdcall  ENVTIEName::AddNewCylinder(CATIAReference * iCenter, double iRadius, double iFirstLength, double iSecondLength, CATIAHybridShapeDirection * iDirection, CATIAHybridShapeCylinder *& oCylinderObject) \
{ \
return (ENVTIECALL(CATIAHybridShapeFactory,ENVTIETypeLetter,ENVTIELetter)AddNewCylinder(iCenter,iRadius,iFirstLength,iSecondLength,iDirection,oCylinderObject)); \
} \
HRESULT __stdcall  ENVTIEName::AddNewRevol(CATIAReference * iObjectToExtrude, double iOffsetDebut, double iOffsetFin, CATIAReference * iAxis, CATIAHybridShapeRevol *& oRevolObject) \
{ \
return (ENVTIECALL(CATIAHybridShapeFactory,ENVTIETypeLetter,ENVTIELetter)AddNewRevol(iObjectToExtrude,iOffsetDebut,iOffsetFin,iAxis,oRevolObject)); \
} \
HRESULT __stdcall  ENVTIEName::AddNewDirection(CATIAReference * iElement, CATIAHybridShapeDirection *& oDirection) \
{ \
return (ENVTIECALL(CATIAHybridShapeFactory,ENVTIETypeLetter,ENVTIELetter)AddNewDirection(iElement,oDirection)); \
} \
HRESULT __stdcall  ENVTIEName::AddNewDirectionByCoord(double iX, double iY, double iZ, CATIAHybridShapeDirection *& oDirection) \
{ \
return (ENVTIECALL(CATIAHybridShapeFactory,ENVTIETypeLetter,ENVTIELetter)AddNewDirectionByCoord(iX,iY,iZ,oDirection)); \
} \
HRESULT __stdcall  ENVTIEName::AddNewOffset(CATIAReference * iObjectToOffset, double iOffset, CAT_VARIANT_BOOL iOrientation, double iPrecision, CATIAHybridShapeOffset *& oOffsetObject) \
{ \
return (ENVTIECALL(CATIAHybridShapeFactory,ENVTIETypeLetter,ENVTIELetter)AddNewOffset(iObjectToOffset,iOffset,iOrientation,iPrecision,oOffsetObject)); \
} \
HRESULT __stdcall  ENVTIEName::AddNewHybridScaling(CATIAReference * iElemToScale, CATIAReference * iCenter, double iRatio, CATIAHybridShapeScaling *& oScaling) \
{ \
return (ENVTIECALL(CATIAHybridShapeFactory,ENVTIETypeLetter,ENVTIELetter)AddNewHybridScaling(iElemToScale,iCenter,iRatio,oScaling)); \
} \
HRESULT __stdcall  ENVTIEName::AddNewHealing(CATIAReference * iBodyToheal, CATIAHybridShapeHealing *& oHealing) \
{ \
return (ENVTIECALL(CATIAHybridShapeFactory,ENVTIETypeLetter,ENVTIELetter)AddNewHealing(iBodyToheal,oHealing)); \
} \
HRESULT __stdcall  ENVTIEName::AddNewRollingOffset(CATIAHybridShapeRollingOffset *& oRollingOffset) \
{ \
return (ENVTIECALL(CATIAHybridShapeFactory,ENVTIETypeLetter,ENVTIELetter)AddNewRollingOffset(oRollingOffset)); \
} \
HRESULT __stdcall  ENVTIEName::AddNewReflectLine(CATIAReference * iSupport, CATIAHybridShapeDirection * iDir, double iAngle, CATLONG iOrientationSupport, CATLONG iOrientationDirection, CATIAHybridShapeReflectLine *& oReflectLine) \
{ \
return (ENVTIECALL(CATIAHybridShapeFactory,ENVTIETypeLetter,ENVTIELetter)AddNewReflectLine(iSupport,iDir,iAngle,iOrientationSupport,iOrientationDirection,oReflectLine)); \
} \
HRESULT __stdcall  ENVTIEName::AddNewReflectLineWithType(CATIAReference * iSupport, CATIAHybridShapeDirection * iDir, double iAngle, CATLONG iOrientationSupport, CATLONG iOrientationDirection, CATLONG iType, CATIAHybridShapeReflectLine *& oReflectLine) \
{ \
return (ENVTIECALL(CATIAHybridShapeFactory,ENVTIETypeLetter,ENVTIELetter)AddNewReflectLineWithType(iSupport,iDir,iAngle,iOrientationSupport,iOrientationDirection,iType,oReflectLine)); \
} \
HRESULT __stdcall  ENVTIEName::AddNewConicalReflectLineWithType(CATIAReference * iSupport, CATIAReference * iOrigin, double iAngle, CATLONG iOrientationSupport, CATLONG iType, CATIAHybridShapeReflectLine *& oReflectLine) \
{ \
return (ENVTIECALL(CATIAHybridShapeFactory,ENVTIETypeLetter,ENVTIELetter)AddNewConicalReflectLineWithType(iSupport,iOrigin,iAngle,iOrientationSupport,iType,oReflectLine)); \
} \
HRESULT __stdcall  ENVTIEName::AddNewSphere(CATIAReference * iCenter, CATIAReference * iAxis, double iRadius, double iBeginParallelAngle, double iEndParallelAngle, double iBeginMeridianAngle, double iEndMeridianAngle, CATIAHybridShapeSphere *& oSphereObject) \
{ \
return (ENVTIECALL(CATIAHybridShapeFactory,ENVTIETypeLetter,ENVTIELetter)AddNewSphere(iCenter,iAxis,iRadius,iBeginParallelAngle,iEndParallelAngle,iBeginMeridianAngle,iEndMeridianAngle,oSphereObject)); \
} \
HRESULT __stdcall  ENVTIEName::AddNewBump(CATIAReference * iBodyToBump, CATIAHybridShapeBump *& oBump) \
{ \
return (ENVTIECALL(CATIAHybridShapeFactory,ENVTIETypeLetter,ENVTIELetter)AddNewBump(iBodyToBump,oBump)); \
} \
HRESULT __stdcall  ENVTIEName::AddNewWrapCurve(CATIAHybridShapeWrapCurve *& oWrapCurve) \
{ \
return (ENVTIECALL(CATIAHybridShapeFactory,ENVTIETypeLetter,ENVTIELetter)AddNewWrapCurve(oWrapCurve)); \
} \
HRESULT __stdcall  ENVTIEName::AddNewWrapSurface(CATIAReference * iBodyToDeform, CATIAHybridShapeWrapSurface *& oWrapSurface) \
{ \
return (ENVTIECALL(CATIAHybridShapeFactory,ENVTIETypeLetter,ENVTIELetter)AddNewWrapSurface(iBodyToDeform,oWrapSurface)); \
} \
HRESULT __stdcall  ENVTIEName::AddNewPolyline(CATIAHybridShapePolyline *& oPolyline) \
{ \
return (ENVTIECALL(CATIAHybridShapeFactory,ENVTIETypeLetter,ENVTIELetter)AddNewPolyline(oPolyline)); \
} \
HRESULT __stdcall  ENVTIEName::AddNewSweepConic(CATIAReference * ipIAGuide1, CATIAHybridShapeSweepConic *& opIASweepConic) \
{ \
return (ENVTIECALL(CATIAHybridShapeFactory,ENVTIETypeLetter,ENVTIELetter)AddNewSweepConic(ipIAGuide1,opIASweepConic)); \
} \
HRESULT __stdcall  ENVTIEName::AddNewCircleCenterTangent(CATIAReference * iCenterElem, CATIAReference * iTangentCurve, CATIAReference * iSupport, double iRadius, CATIAHybridShapeCircleCenterTangent *& oCircle) \
{ \
return (ENVTIECALL(CATIAHybridShapeFactory,ENVTIETypeLetter,ENVTIELetter)AddNewCircleCenterTangent(iCenterElem,iTangentCurve,iSupport,iRadius,oCircle)); \
} \
HRESULT __stdcall  ENVTIEName::AddNewCircleCenterAxis(CATIAReference * iAxis, CATIAReference * iPoint, double iValue, CAT_VARIANT_BOOL iProjection, CATIAHybridShapeCircleCenterAxis *& oCircle) \
{ \
return (ENVTIECALL(CATIAHybridShapeFactory,ENVTIETypeLetter,ENVTIELetter)AddNewCircleCenterAxis(iAxis,iPoint,iValue,iProjection,oCircle)); \
} \
HRESULT __stdcall  ENVTIEName::AddNewCircleCenterAxisWithAngles(CATIAReference * iAxis, CATIAReference * iPoint, double iValue, CAT_VARIANT_BOOL iProjection, double iStartAngle, double iEndAngle, CATIAHybridShapeCircleCenterAxis *& oCircle) \
{ \
return (ENVTIECALL(CATIAHybridShapeFactory,ENVTIETypeLetter,ENVTIELetter)AddNewCircleCenterAxisWithAngles(iAxis,iPoint,iValue,iProjection,iStartAngle,iEndAngle,oCircle)); \
} \
HRESULT __stdcall  ENVTIEName::AddNew3DCurveOffset(CATIAReference * iCurveToOffset, CATIAHybridShapeDirection * iDirection, double iOffset, double iCornerRadius, double iCornerTension, CATIAHybridShape3DCurveOffset *& o3DCurveOffset) \
{ \
return (ENVTIECALL(CATIAHybridShapeFactory,ENVTIETypeLetter,ENVTIELetter)AddNew3DCurveOffset(iCurveToOffset,iDirection,iOffset,iCornerRadius,iCornerTension,o3DCurveOffset)); \
} \
HRESULT __stdcall  ENVTIEName::AddNewSection(CATIAHybridShapeSection *& oSection) \
{ \
return (ENVTIECALL(CATIAHybridShapeFactory,ENVTIETypeLetter,ENVTIELetter)AddNewSection(oSection)); \
} \
HRESULT __stdcall  ENVTIEName::AddNewIntegratedLaw(CATLONG iType, CATIAHybridShapeIntegratedLaw *& oLaw) \
{ \
return (ENVTIECALL(CATIAHybridShapeFactory,ENVTIETypeLetter,ENVTIELetter)AddNewIntegratedLaw(iType,oLaw)); \
} \
HRESULT __stdcall  ENVTIEName::AddNewDatums(CATIAReference * iElem, CATSafeArrayVariant *& oArrayOfDatum) \
{ \
return (ENVTIECALL(CATIAHybridShapeFactory,ENVTIETypeLetter,ENVTIELetter)AddNewDatums(iElem,oArrayOfDatum)); \
} \
HRESULT __stdcall  ENVTIEName::GetGeometricalFeatureType(CATIAReference * iElem, short & oType) \
{ \
return (ENVTIECALL(CATIAHybridShapeFactory,ENVTIETypeLetter,ENVTIELetter)GetGeometricalFeatureType(iElem,oType)); \
} \
HRESULT __stdcall  ENVTIEName::GSMVisibility(CATIAReference * iElem, CATLONG Show) \
{ \
return (ENVTIECALL(CATIAHybridShapeFactory,ENVTIETypeLetter,ENVTIELetter)GSMVisibility(iElem,Show)); \
} \
HRESULT __stdcall  ENVTIEName::ChangeFeatureName(CATIAReference * iElem, const CATBSTR & Name) \
{ \
return (ENVTIECALL(CATIAHybridShapeFactory,ENVTIETypeLetter,ENVTIELetter)ChangeFeatureName(iElem,Name)); \
} \
HRESULT __stdcall  ENVTIEName::AddNewTransfer(CATIAReference * iElementToTransfer, CATLONG iTypeOfTransfer, CATIAHybridShapeTransfer *& oExt) \
{ \
return (ENVTIECALL(CATIAHybridShapeFactory,ENVTIETypeLetter,ENVTIELetter)AddNewTransfer(iElementToTransfer,iTypeOfTransfer,oExt)); \
} \
HRESULT __stdcall  ENVTIEName::GSMGetObjectFromReference(CATIAReference * iElem, CATIAHybridShape *& oObjet) \
{ \
return (ENVTIECALL(CATIAHybridShapeFactory,ENVTIETypeLetter,ENVTIELetter)GSMGetObjectFromReference(iElem,oObjet)); \
} \
HRESULT __stdcall  ENVTIEName::DuplicateGSMSpec(CATIAReference * iRef, CATIAHybridShape *& oDupSpec) \
{ \
return (ENVTIECALL(CATIAHybridShapeFactory,ENVTIETypeLetter,ENVTIELetter)DuplicateGSMSpec(iRef,oDupSpec)); \
} \
HRESULT __stdcall  ENVTIEName::SetReferenceElemForMultiple(CATIAReference * iSpec, CATIAReference * iNewRef) \
{ \
return (ENVTIECALL(CATIAHybridShapeFactory,ENVTIETypeLetter,ENVTIELetter)SetReferenceElemForMultiple(iSpec,iNewRef)); \
} \
HRESULT __stdcall  ENVTIEName::AddNewPointOnCurveWithReferenceAlongDirection(CATIAReference * iCrv, CATIAReference * iPt, double iLong, CAT_VARIANT_BOOL iOrientation, CATIAHybridShapeDirection * iDirection, CATIAHybridShapePointOnCurve *& oPoint) \
{ \
return (ENVTIECALL(CATIAHybridShapeFactory,ENVTIETypeLetter,ENVTIELetter)AddNewPointOnCurveWithReferenceAlongDirection(iCrv,iPt,iLong,iOrientation,iDirection,oPoint)); \
} \
HRESULT __stdcall  ENVTIEName::AddNewPointOnCurveAlongDirection(CATIAReference * iCrv, double iLong, CAT_VARIANT_BOOL iOrientation, CATIAHybridShapeDirection * iDirection, CATIAHybridShapePointOnCurve *& oPoint) \
{ \
return (ENVTIECALL(CATIAHybridShapeFactory,ENVTIETypeLetter,ENVTIELetter)AddNewPointOnCurveAlongDirection(iCrv,iLong,iOrientation,iDirection,oPoint)); \
} \
HRESULT __stdcall  ENVTIEName::AddNewMidSurface(CATIAReference * iSupport, CATLONG iCreationMode, double iThreshold, CATIAHybridShapeMidSurface *& oMidSurface) \
{ \
return (ENVTIECALL(CATIAHybridShapeFactory,ENVTIETypeLetter,ENVTIELetter)AddNewMidSurface(iSupport,iCreationMode,iThreshold,oMidSurface)); \
} \
HRESULT __stdcall  ENVTIEName::AddNewMidSurfaceWithAutoThreshold(CATIAReference * iSupport, CATLONG iCreationMode, double iThreshold, CATLONG iAutoThicknessThreshold, CATIAHybridShapeMidSurface *& oMidSurface) \
{ \
return (ENVTIECALL(CATIAHybridShapeFactory,ENVTIETypeLetter,ENVTIELetter)AddNewMidSurfaceWithAutoThreshold(iSupport,iCreationMode,iThreshold,iAutoThicknessThreshold,oMidSurface)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Application(CATIAApplication *& oApplication) \
{ \
return (ENVTIECALL(CATIAHybridShapeFactory,ENVTIETypeLetter,ENVTIELetter)get_Application(oApplication)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Parent(CATBaseDispatch *& oParent) \
{ \
return (ENVTIECALL(CATIAHybridShapeFactory,ENVTIETypeLetter,ENVTIELetter)get_Parent(oParent)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Name(CATBSTR & oNameBSTR) \
{ \
return (ENVTIECALL(CATIAHybridShapeFactory,ENVTIETypeLetter,ENVTIELetter)get_Name(oNameBSTR)); \
} \
HRESULT  __stdcall  ENVTIEName::put_Name(const CATBSTR & iNameBSTR) \
{ \
return (ENVTIECALL(CATIAHybridShapeFactory,ENVTIETypeLetter,ENVTIELetter)put_Name(iNameBSTR)); \
} \
HRESULT  __stdcall  ENVTIEName::GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj) \
{ \
return (ENVTIECALL(CATIAHybridShapeFactory,ENVTIETypeLetter,ENVTIELetter)GetItem(IDName,RealObj)); \
} \


/* Name of the TIE class */
#define class_TIE_CATIAHybridShapeFactory(classe)    TIECATIAHybridShapeFactory##classe


/* Common methods inside a TIE */
#define common_TIE_CATIAHybridShapeFactory(classe) \
 \
 \
/* Static initialization */ \
CATDefineCommonTIEMembers(CATIAHybridShapeFactory, classe) \
 \
 \
CATImplementTIEMethods(CATIAHybridShapeFactory, classe) \
CATImplementIUnknownMethodsForCATBaseUnknownTIE(CATIAHybridShapeFactory, classe, 2) \
CATImplementIDispatchMethodsForCATBaseUnknownTIE(CATIAHybridShapeFactory, classe) \
CATImplementCATBaseUnknownMethodsForTIE(CATIAHybridShapeFactory, classe) \
 \
HRESULT __stdcall  TIECATIAHybridShapeFactory##classe::AddNewSpine(CATIAHybridShapeSpine *& oExt) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,1,&_Trac2,&oExt); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->AddNewSpine(oExt); \
   ExitAfterCall(this,1,_Trac2,&_ret_arg,&oExt); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeFactory##classe::AddNewAxisLine(CATIAReference * iElement, CATIAHybridShapeAxisLine *& oAxisLine) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,2,&_Trac2,&iElement,&oAxisLine); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->AddNewAxisLine(iElement,oAxisLine); \
   ExitAfterCall(this,2,_Trac2,&_ret_arg,&iElement,&oAxisLine); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeFactory##classe::AddNewLawDistProj(CATIAReference * iReference, CATIAReference * iDefinition, CATIAHybridShapeLawDistProj *& oLaw) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,3,&_Trac2,&iReference,&iDefinition,&oLaw); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->AddNewLawDistProj(iReference,iDefinition,oLaw); \
   ExitAfterCall(this,3,_Trac2,&_ret_arg,&iReference,&iDefinition,&oLaw); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeFactory##classe::AddNewBlend(CATIAHybridShapeBlend *& oBlend) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,4,&_Trac2,&oBlend); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->AddNewBlend(oBlend); \
   ExitAfterCall(this,4,_Trac2,&_ret_arg,&oBlend); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeFactory##classe::AddNewConic(CATIAReference * iSupport, CATIAReference * iStartingPoint, CATIAReference * iEndPoint, CATIAHybridShapeConic *& oConic) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,5,&_Trac2,&iSupport,&iStartingPoint,&iEndPoint,&oConic); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->AddNewConic(iSupport,iStartingPoint,iEndPoint,oConic); \
   ExitAfterCall(this,5,_Trac2,&_ret_arg,&iSupport,&iStartingPoint,&iEndPoint,&oConic); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeFactory##classe::AddNewHelix(CATIAReference * iAxis, CAT_VARIANT_BOOL iInvertAxis, CATIAReference * iStartingPoint, double iPitch, double iHeight, CAT_VARIANT_BOOL iClockwiseRevolution, double iStartingAngle, double iTaperAngle, CAT_VARIANT_BOOL iTaperOutward, CATIAHybridShapeHelix *& oHelix) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,6,&_Trac2,&iAxis,&iInvertAxis,&iStartingPoint,&iPitch,&iHeight,&iClockwiseRevolution,&iStartingAngle,&iTaperAngle,&iTaperOutward,&oHelix); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->AddNewHelix(iAxis,iInvertAxis,iStartingPoint,iPitch,iHeight,iClockwiseRevolution,iStartingAngle,iTaperAngle,iTaperOutward,oHelix); \
   ExitAfterCall(this,6,_Trac2,&_ret_arg,&iAxis,&iInvertAxis,&iStartingPoint,&iPitch,&iHeight,&iClockwiseRevolution,&iStartingAngle,&iTaperAngle,&iTaperOutward,&oHelix); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeFactory##classe::AddNewCombine(CATIAReference * iFirstCurve, CATIAReference * iSecondCurve, CATLONG iNearestSolutions, CATIAHybridShapeCombine *& oCombine) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,7,&_Trac2,&iFirstCurve,&iSecondCurve,&iNearestSolutions,&oCombine); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->AddNewCombine(iFirstCurve,iSecondCurve,iNearestSolutions,oCombine); \
   ExitAfterCall(this,7,_Trac2,&_ret_arg,&iFirstCurve,&iSecondCurve,&iNearestSolutions,&oCombine); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeFactory##classe::AddNewExtremum(CATIAReference * iObjet, CATIAHybridShapeDirection * iDir, CATLONG iMinMax, CATIAHybridShapeExtremum *& oExt) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,8,&_Trac2,&iObjet,&iDir,&iMinMax,&oExt); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->AddNewExtremum(iObjet,iDir,iMinMax,oExt); \
   ExitAfterCall(this,8,_Trac2,&_ret_arg,&iObjet,&iDir,&iMinMax,&oExt); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeFactory##classe::AddNewExtremumPolar(short iType, CATIAReference * ipIAContour, CATIAHybridShapeExtremumPolar *& opIAExtPolar) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,9,&_Trac2,&iType,&ipIAContour,&opIAExtPolar); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->AddNewExtremumPolar(iType,ipIAContour,opIAExtPolar); \
   ExitAfterCall(this,9,_Trac2,&_ret_arg,&iType,&ipIAContour,&opIAExtPolar); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeFactory##classe::AddNewCircle2PointsRad(CATIAReference * iPoint1, CATIAReference * iPoint2, CATIAReference * iSupport, CAT_VARIANT_BOOL iGeodesic, double iRadius, CATLONG iOri, CATIAHybridShapeCircle2PointsRad *& oCircle) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,10,&_Trac2,&iPoint1,&iPoint2,&iSupport,&iGeodesic,&iRadius,&iOri,&oCircle); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->AddNewCircle2PointsRad(iPoint1,iPoint2,iSupport,iGeodesic,iRadius,iOri,oCircle); \
   ExitAfterCall(this,10,_Trac2,&_ret_arg,&iPoint1,&iPoint2,&iSupport,&iGeodesic,&iRadius,&iOri,&oCircle); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeFactory##classe::AddNewFilletBiTangent(CATIAReference * iElement1, CATIAReference * iElement2, double iRadius, CATLONG iOrientation1, CATLONG iOrientation2, CATLONG iSupportsTrimMode, CATLONG iRibbonRelimitationMode, CATIAHybridShapeFilletBiTangent *& oFillet) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,11,&_Trac2,&iElement1,&iElement2,&iRadius,&iOrientation1,&iOrientation2,&iSupportsTrimMode,&iRibbonRelimitationMode,&oFillet); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->AddNewFilletBiTangent(iElement1,iElement2,iRadius,iOrientation1,iOrientation2,iSupportsTrimMode,iRibbonRelimitationMode,oFillet); \
   ExitAfterCall(this,11,_Trac2,&_ret_arg,&iElement1,&iElement2,&iRadius,&iOrientation1,&iOrientation2,&iSupportsTrimMode,&iRibbonRelimitationMode,&oFillet); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeFactory##classe::AddNewFilletTriTangent(CATIAReference * iElement1, CATIAReference * iElement2, CATIAReference * iRemoveElem, CATLONG iOrientation1, CATLONG iOrientation2, CATLONG iRemoveOrientation, CATLONG iSupportsTrimMode, CATLONG iRibbonRelimitationMode, CATIAHybridShapeFilletTriTangent *& oFillet) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,12,&_Trac2,&iElement1,&iElement2,&iRemoveElem,&iOrientation1,&iOrientation2,&iRemoveOrientation,&iSupportsTrimMode,&iRibbonRelimitationMode,&oFillet); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->AddNewFilletTriTangent(iElement1,iElement2,iRemoveElem,iOrientation1,iOrientation2,iRemoveOrientation,iSupportsTrimMode,iRibbonRelimitationMode,oFillet); \
   ExitAfterCall(this,12,_Trac2,&_ret_arg,&iElement1,&iElement2,&iRemoveElem,&iOrientation1,&iOrientation2,&iRemoveOrientation,&iSupportsTrimMode,&iRibbonRelimitationMode,&oFillet); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeFactory##classe::AddNewCircle3Points(CATIAReference * iPoint1, CATIAReference * iPoint2, CATIAReference * iPoint3, CATIAHybridShapeCircle3Points *& oCircle) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,13,&_Trac2,&iPoint1,&iPoint2,&iPoint3,&oCircle); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->AddNewCircle3Points(iPoint1,iPoint2,iPoint3,oCircle); \
   ExitAfterCall(this,13,_Trac2,&_ret_arg,&iPoint1,&iPoint2,&iPoint3,&oCircle); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeFactory##classe::AddNewCircleBitangentPoint(CATIAReference * iCurve1, CATIAReference * iCurve2, CATIAReference * iPoint, CATIAReference * iSupport, CATLONG iOri1, CATLONG iOri2, CATIAHybridShapeCircleBitangentPoint *& oCircle) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,14,&_Trac2,&iCurve1,&iCurve2,&iPoint,&iSupport,&iOri1,&iOri2,&oCircle); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->AddNewCircleBitangentPoint(iCurve1,iCurve2,iPoint,iSupport,iOri1,iOri2,oCircle); \
   ExitAfterCall(this,14,_Trac2,&_ret_arg,&iCurve1,&iCurve2,&iPoint,&iSupport,&iOri1,&iOri2,&oCircle); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeFactory##classe::AddNewCircleBitangentRadius(CATIAReference * iCurve1, CATIAReference * iCurve2, CATIAReference * iSupport, double iRadius, CATLONG iOri1, CATLONG iOri2, CATIAHybridShapeCircleBitangentRadius *& oCircle) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,15,&_Trac2,&iCurve1,&iCurve2,&iSupport,&iRadius,&iOri1,&iOri2,&oCircle); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->AddNewCircleBitangentRadius(iCurve1,iCurve2,iSupport,iRadius,iOri1,iOri2,oCircle); \
   ExitAfterCall(this,15,_Trac2,&_ret_arg,&iCurve1,&iCurve2,&iSupport,&iRadius,&iOri1,&iOri2,&oCircle); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeFactory##classe::AddNewCircleCtrPtWithAngles(CATIAReference * iCenter, CATIAReference * iCrossingPoint, CATIAReference * iSupport, CAT_VARIANT_BOOL iGeodesic, double iStartAngle, double iEndAngle, CATIAHybridShapeCircleCtrPt *& oCircle) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,16,&_Trac2,&iCenter,&iCrossingPoint,&iSupport,&iGeodesic,&iStartAngle,&iEndAngle,&oCircle); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->AddNewCircleCtrPtWithAngles(iCenter,iCrossingPoint,iSupport,iGeodesic,iStartAngle,iEndAngle,oCircle); \
   ExitAfterCall(this,16,_Trac2,&_ret_arg,&iCenter,&iCrossingPoint,&iSupport,&iGeodesic,&iStartAngle,&iEndAngle,&oCircle); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeFactory##classe::AddNewCircleCtrPt(CATIAReference * iCenter, CATIAReference * iCrossingPoint, CATIAReference * iSupport, CAT_VARIANT_BOOL iGeodesic, CATIAHybridShapeCircleCtrPt *& oCircle) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,17,&_Trac2,&iCenter,&iCrossingPoint,&iSupport,&iGeodesic,&oCircle); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->AddNewCircleCtrPt(iCenter,iCrossingPoint,iSupport,iGeodesic,oCircle); \
   ExitAfterCall(this,17,_Trac2,&_ret_arg,&iCenter,&iCrossingPoint,&iSupport,&iGeodesic,&oCircle); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeFactory##classe::AddNewCircleCtrRadWithAngles(CATIAReference * iCenter, CATIAReference * iSupport, CAT_VARIANT_BOOL iGeodesic, double iRadius, double iStartAngle, double iEndAngle, CATIAHybridShapeCircleCtrRad *& oCircle) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,18,&_Trac2,&iCenter,&iSupport,&iGeodesic,&iRadius,&iStartAngle,&iEndAngle,&oCircle); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->AddNewCircleCtrRadWithAngles(iCenter,iSupport,iGeodesic,iRadius,iStartAngle,iEndAngle,oCircle); \
   ExitAfterCall(this,18,_Trac2,&_ret_arg,&iCenter,&iSupport,&iGeodesic,&iRadius,&iStartAngle,&iEndAngle,&oCircle); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeFactory##classe::AddNewCircleCtrRad(CATIAReference * iCenter, CATIAReference * iSupport, CAT_VARIANT_BOOL iGeodesic, double iRadius, CATIAHybridShapeCircleCtrRad *& oCircle) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,19,&_Trac2,&iCenter,&iSupport,&iGeodesic,&iRadius,&oCircle); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->AddNewCircleCtrRad(iCenter,iSupport,iGeodesic,iRadius,oCircle); \
   ExitAfterCall(this,19,_Trac2,&_ret_arg,&iCenter,&iSupport,&iGeodesic,&iRadius,&oCircle); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeFactory##classe::AddNewCircleTritangent(CATIAReference * iCurve1, CATIAReference * iCurve2, CATIAReference * iCurve3, CATIAReference * iSupport, CATLONG iOri1, CATLONG iOri2, CATLONG iOri3, CATIAHybridShapeCircleTritangent *& oCircle) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,20,&_Trac2,&iCurve1,&iCurve2,&iCurve3,&iSupport,&iOri1,&iOri2,&iOri3,&oCircle); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->AddNewCircleTritangent(iCurve1,iCurve2,iCurve3,iSupport,iOri1,iOri2,iOri3,oCircle); \
   ExitAfterCall(this,20,_Trac2,&_ret_arg,&iCurve1,&iCurve2,&iCurve3,&iSupport,&iOri1,&iOri2,&iOri3,&oCircle); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeFactory##classe::AddNewDevelop(CATLONG iMode, CATIAReference * iToDevelop, CATIAReference * iSupport, CATIAHybridShapeDevelop *& oExt) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,21,&_Trac2,&iMode,&iToDevelop,&iSupport,&oExt); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->AddNewDevelop(iMode,iToDevelop,iSupport,oExt); \
   ExitAfterCall(this,21,_Trac2,&_ret_arg,&iMode,&iToDevelop,&iSupport,&oExt); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeFactory##classe::AddNewUnfold(CATIAHybridShapeUnfold *& oExt) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,22,&_Trac2,&oExt); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->AddNewUnfold(oExt); \
   ExitAfterCall(this,22,_Trac2,&_ret_arg,&oExt); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeFactory##classe::AddNewSweepCircle(CATIAReference * iGuide1, CATIAHybridShapeSweepCircle *& oExt) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,23,&_Trac2,&iGuide1,&oExt); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->AddNewSweepCircle(iGuide1,oExt); \
   ExitAfterCall(this,23,_Trac2,&_ret_arg,&iGuide1,&oExt); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeFactory##classe::AddNewSweepExplicit(CATIAReference * iProfile, CATIAReference * iGuide, CATIAHybridShapeSweepExplicit *& oExt) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,24,&_Trac2,&iProfile,&iGuide,&oExt); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->AddNewSweepExplicit(iProfile,iGuide,oExt); \
   ExitAfterCall(this,24,_Trac2,&_ret_arg,&iProfile,&iGuide,&oExt); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeFactory##classe::AddNewSweepLine(CATIAReference * iGuide1, CATIAHybridShapeSweepLine *& oExt) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,25,&_Trac2,&iGuide1,&oExt); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->AddNewSweepLine(iGuide1,oExt); \
   ExitAfterCall(this,25,_Trac2,&_ret_arg,&iGuide1,&oExt); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeFactory##classe::AddNewPositionTransfo(CATLONG iMode, CATIAHybridShapePositionTransfo *& oExt) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,26,&_Trac2,&iMode,&oExt); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->AddNewPositionTransfo(iMode,oExt); \
   ExitAfterCall(this,26,_Trac2,&_ret_arg,&iMode,&oExt); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeFactory##classe::AddNewLoft(CATIAHybridShapeLoft *& oExt) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,27,&_Trac2,&oExt); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->AddNewLoft(oExt); \
   ExitAfterCall(this,27,_Trac2,&_ret_arg,&oExt); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeFactory##classe::AddNewJoin(CATIAReference * Element1, CATIAReference * Element2, CATIAHybridShapeAssemble *& oExt) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,28,&_Trac2,&Element1,&Element2,&oExt); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->AddNewJoin(Element1,Element2,oExt); \
   ExitAfterCall(this,28,_Trac2,&_ret_arg,&Element1,&Element2,&oExt); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeFactory##classe::AddNewExtract(CATIAReference * Element, CATIAHybridShapeExtract *& oExt) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,29,&_Trac2,&Element,&oExt); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->AddNewExtract(Element,oExt); \
   ExitAfterCall(this,29,_Trac2,&_ret_arg,&Element,&oExt); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeFactory##classe::AddNewExtractMulti(CATIAReference * Element, CATIAHybridShapeExtractMulti *& oExt) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,30,&_Trac2,&Element,&oExt); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->AddNewExtractMulti(Element,oExt); \
   ExitAfterCall(this,30,_Trac2,&_ret_arg,&Element,&oExt); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeFactory##classe::AddNewInverse(CATIAReference * Element, CATLONG Inverse, CATIAHybridShapeInverse *& oInv) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,31,&_Trac2,&Element,&Inverse,&oInv); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->AddNewInverse(Element,Inverse,oInv); \
   ExitAfterCall(this,31,_Trac2,&_ret_arg,&Element,&Inverse,&oInv); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeFactory##classe::AddNewNear(CATIAReference * MultiElement, CATIAReference * ReferenceElement, CATIAHybridShapeNear *& oNear) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,32,&_Trac2,&MultiElement,&ReferenceElement,&oNear); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->AddNewNear(MultiElement,ReferenceElement,oNear); \
   ExitAfterCall(this,32,_Trac2,&_ret_arg,&MultiElement,&ReferenceElement,&oNear); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeFactory##classe::AddNewConnect(CATIAReference * iCurve1, CATIAReference * iPoint1, CATLONG iOrient1, CATLONG iContinuity1, double iTension1, CATIAReference * iCurve2, CATIAReference * iPoint2, CATLONG iOrient2, CATLONG iContinuity2, double iTension2, CAT_VARIANT_BOOL Trim, CATIAHybridShapeConnect *& oConnect) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,33,&_Trac2,&iCurve1,&iPoint1,&iOrient1,&iContinuity1,&iTension1,&iCurve2,&iPoint2,&iOrient2,&iContinuity2,&iTension2,&Trim,&oConnect); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->AddNewConnect(iCurve1,iPoint1,iOrient1,iContinuity1,iTension1,iCurve2,iPoint2,iOrient2,iContinuity2,iTension2,Trim,oConnect); \
   ExitAfterCall(this,33,_Trac2,&_ret_arg,&iCurve1,&iPoint1,&iOrient1,&iContinuity1,&iTension1,&iCurve2,&iPoint2,&iOrient2,&iContinuity2,&iTension2,&Trim,&oConnect); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeFactory##classe::AddNewCurvePar(CATIAReference * Curve, CATIAReference * Support, double Distance, CAT_VARIANT_BOOL InvertDirection, CAT_VARIANT_BOOL Geodesic, CATIAHybridShapeCurvePar *& oCurvePar) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,34,&_Trac2,&Curve,&Support,&Distance,&InvertDirection,&Geodesic,&oCurvePar); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->AddNewCurvePar(Curve,Support,Distance,InvertDirection,Geodesic,oCurvePar); \
   ExitAfterCall(this,34,_Trac2,&_ret_arg,&Curve,&Support,&Distance,&InvertDirection,&Geodesic,&oCurvePar); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeFactory##classe::AddNewCurveSmooth(CATIAReference * ipIACurve, CATIAHybridShapeCurveSmooth *& opIACurveSmooth) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,35,&_Trac2,&ipIACurve,&opIACurveSmooth); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->AddNewCurveSmooth(ipIACurve,opIACurveSmooth); \
   ExitAfterCall(this,35,_Trac2,&_ret_arg,&ipIACurve,&opIACurveSmooth); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeFactory##classe::AddNewTranslate(CATIAReference * iElement, CATIAHybridShapeDirection * iDirection, double iDistance, CATIAHybridShapeTranslate *& oTranslate) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,36,&_Trac2,&iElement,&iDirection,&iDistance,&oTranslate); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->AddNewTranslate(iElement,iDirection,iDistance,oTranslate); \
   ExitAfterCall(this,36,_Trac2,&_ret_arg,&iElement,&iDirection,&iDistance,&oTranslate); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeFactory##classe::AddNewEmptyTranslate(CATIAHybridShapeTranslate *& oTranslate) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,37,&_Trac2,&oTranslate); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->AddNewEmptyTranslate(oTranslate); \
   ExitAfterCall(this,37,_Trac2,&_ret_arg,&oTranslate); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeFactory##classe::AddNewAffinity(CATIAReference * iElement, double iXRatio, double iYRatio, double iZRatio, CATIAHybridShapeAffinity *& oAffinity) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,38,&_Trac2,&iElement,&iXRatio,&iYRatio,&iZRatio,&oAffinity); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->AddNewAffinity(iElement,iXRatio,iYRatio,iZRatio,oAffinity); \
   ExitAfterCall(this,38,_Trac2,&_ret_arg,&iElement,&iXRatio,&iYRatio,&iZRatio,&oAffinity); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeFactory##classe::AddNewHybridSplit(CATIAReference * iElement1, CATIAReference * iElement2, CATLONG iOrientation, CATIAHybridShapeSplit *& oSplit) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,39,&_Trac2,&iElement1,&iElement2,&iOrientation,&oSplit); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->AddNewHybridSplit(iElement1,iElement2,iOrientation,oSplit); \
   ExitAfterCall(this,39,_Trac2,&_ret_arg,&iElement1,&iElement2,&iOrientation,&oSplit); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeFactory##classe::AddNewHybridTrim(CATIAReference * iElement1, CATLONG iOrientation1, CATIAReference * iElement2, CATLONG iOrientation2, CATIAHybridShapeTrim *& oTrim) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,40,&_Trac2,&iElement1,&iOrientation1,&iElement2,&iOrientation2,&oTrim); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->AddNewHybridTrim(iElement1,iOrientation1,iElement2,iOrientation2,oTrim); \
   ExitAfterCall(this,40,_Trac2,&_ret_arg,&iElement1,&iOrientation1,&iElement2,&iOrientation2,&oTrim); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeFactory##classe::AddNewProject(CATIAReference * iElement, CATIAReference * iSupport, CATIAHybridShapeProject *& oProjection) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,41,&_Trac2,&iElement,&iSupport,&oProjection); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->AddNewProject(iElement,iSupport,oProjection); \
   ExitAfterCall(this,41,_Trac2,&_ret_arg,&iElement,&iSupport,&oProjection); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeFactory##classe::AddNewCorner(CATIAReference * iElement1, CATIAReference * iElement2, CATIAReference * iSupport, double iRadius, CATLONG iOrientation1, CATLONG iOrientation2, CAT_VARIANT_BOOL iTrim, CATIAHybridShapeCorner *& oCorner) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,42,&_Trac2,&iElement1,&iElement2,&iSupport,&iRadius,&iOrientation1,&iOrientation2,&iTrim,&oCorner); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->AddNewCorner(iElement1,iElement2,iSupport,iRadius,iOrientation1,iOrientation2,iTrim,oCorner); \
   ExitAfterCall(this,42,_Trac2,&_ret_arg,&iElement1,&iElement2,&iSupport,&iRadius,&iOrientation1,&iOrientation2,&iTrim,&oCorner); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeFactory##classe::AddNew3DCorner(CATIAReference * iElement1, CATIAReference * iElement2, CATIAHybridShapeDirection * iDirection, double iRadius, CATLONG iOrientation1, CATLONG iOrientation2, CAT_VARIANT_BOOL iTrim, CATIAHybridShapeCorner *& oCorner) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,43,&_Trac2,&iElement1,&iElement2,&iDirection,&iRadius,&iOrientation1,&iOrientation2,&iTrim,&oCorner); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->AddNew3DCorner(iElement1,iElement2,iDirection,iRadius,iOrientation1,iOrientation2,iTrim,oCorner); \
   ExitAfterCall(this,43,_Trac2,&_ret_arg,&iElement1,&iElement2,&iDirection,&iRadius,&iOrientation1,&iOrientation2,&iTrim,&oCorner); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeFactory##classe::AddNewExtrapolUntil(CATIAReference * iBoundary, CATIAReference * iToExtrapol, CATIAReference * iUntil, CATIAHybridShapeExtrapol *& oExtrapol) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,44,&_Trac2,&iBoundary,&iToExtrapol,&iUntil,&oExtrapol); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->AddNewExtrapolUntil(iBoundary,iToExtrapol,iUntil,oExtrapol); \
   ExitAfterCall(this,44,_Trac2,&_ret_arg,&iBoundary,&iToExtrapol,&iUntil,&oExtrapol); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeFactory##classe::AddNewExtrapolLength(CATIAReference * iBoundary, CATIAReference * iToExtrapol, double iLength, CATIAHybridShapeExtrapol *& oUntil) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,45,&_Trac2,&iBoundary,&iToExtrapol,&iLength,&oUntil); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->AddNewExtrapolLength(iBoundary,iToExtrapol,iLength,oUntil); \
   ExitAfterCall(this,45,_Trac2,&_ret_arg,&iBoundary,&iToExtrapol,&iLength,&oUntil); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeFactory##classe::AddNewRotate(CATIAReference * iToRotate, CATIAReference * iAxis, double iAngle, CATIAHybridShapeRotate *& oRotate) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,46,&_Trac2,&iToRotate,&iAxis,&iAngle,&oRotate); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->AddNewRotate(iToRotate,iAxis,iAngle,oRotate); \
   ExitAfterCall(this,46,_Trac2,&_ret_arg,&iToRotate,&iAxis,&iAngle,&oRotate); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeFactory##classe::AddNewEmptyRotate(CATIAHybridShapeRotate *& oRotate) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,47,&_Trac2,&oRotate); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->AddNewEmptyRotate(oRotate); \
   ExitAfterCall(this,47,_Trac2,&_ret_arg,&oRotate); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeFactory##classe::AddNewIntersection(CATIAReference * iObject1, CATIAReference * iObject2, CATIAHybridShapeIntersection *& oIntersection) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,48,&_Trac2,&iObject1,&iObject2,&oIntersection); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->AddNewIntersection(iObject1,iObject2,oIntersection); \
   ExitAfterCall(this,48,_Trac2,&_ret_arg,&iObject1,&iObject2,&oIntersection); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeFactory##classe::AddNewSymmetry(CATIAReference * iObject, CATIAReference * iReference, CATIAHybridShapeSymmetry *& oSymmetry) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,49,&_Trac2,&iObject,&iReference,&oSymmetry); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->AddNewSymmetry(iObject,iReference,oSymmetry); \
   ExitAfterCall(this,49,_Trac2,&_ret_arg,&iObject,&iReference,&oSymmetry); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeFactory##classe::AddNewAxisToAxis(CATIAReference * iObject, CATIAReference * iReferenceAxis, CATIAReference * iTargetAxis, CATIAHybridShapeAxisToAxis *& oAxisToAxis) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,50,&_Trac2,&iObject,&iReferenceAxis,&iTargetAxis,&oAxisToAxis); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->AddNewAxisToAxis(iObject,iReferenceAxis,iTargetAxis,oAxisToAxis); \
   ExitAfterCall(this,50,_Trac2,&_ret_arg,&iObject,&iReferenceAxis,&iTargetAxis,&oAxisToAxis); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeFactory##classe::AddNewPointDatum(CATIAReference * iObject, CATIAHybridShapePointExplicit *& oPoint) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,51,&_Trac2,&iObject,&oPoint); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->AddNewPointDatum(iObject,oPoint); \
   ExitAfterCall(this,51,_Trac2,&_ret_arg,&iObject,&oPoint); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeFactory##classe::AddNewLineDatum(CATIAReference * iObject, CATIAHybridShapeLineExplicit *& oLine) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,52,&_Trac2,&iObject,&oLine); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->AddNewLineDatum(iObject,oLine); \
   ExitAfterCall(this,52,_Trac2,&_ret_arg,&iObject,&oLine); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeFactory##classe::AddNewPlaneDatum(CATIAReference * iObject, CATIAHybridShapePlaneExplicit *& oPlane) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,53,&_Trac2,&iObject,&oPlane); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->AddNewPlaneDatum(iObject,oPlane); \
   ExitAfterCall(this,53,_Trac2,&_ret_arg,&iObject,&oPlane); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeFactory##classe::AddNewCurveDatum(CATIAReference * iObject, CATIAHybridShapeCurveExplicit *& oCurve) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,54,&_Trac2,&iObject,&oCurve); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->AddNewCurveDatum(iObject,oCurve); \
   ExitAfterCall(this,54,_Trac2,&_ret_arg,&iObject,&oCurve); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeFactory##classe::AddNewCircleDatum(CATIAReference * iObject, CATIAHybridShapeCircleExplicit *& oCircle) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,55,&_Trac2,&iObject,&oCircle); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->AddNewCircleDatum(iObject,oCircle); \
   ExitAfterCall(this,55,_Trac2,&_ret_arg,&iObject,&oCircle); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeFactory##classe::AddNewSurfaceDatum(CATIAReference * iObject, CATIAHybridShapeSurfaceExplicit *& oSurface) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,56,&_Trac2,&iObject,&oSurface); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->AddNewSurfaceDatum(iObject,oSurface); \
   ExitAfterCall(this,56,_Trac2,&_ret_arg,&iObject,&oSurface); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeFactory##classe::AddNewVolumeDatum(CATIAReference * iObject, CATIAHybridShapeVolumeExplicit *& oVolume) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,57,&_Trac2,&iObject,&oVolume); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->AddNewVolumeDatum(iObject,oVolume); \
   ExitAfterCall(this,57,_Trac2,&_ret_arg,&iObject,&oVolume); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeFactory##classe::DeleteObjectForDatum(CATIAReference * iObject) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,58,&_Trac2,&iObject); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->DeleteObjectForDatum(iObject); \
   ExitAfterCall(this,58,_Trac2,&_ret_arg,&iObject); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeFactory##classe::AddNewFill(CATIAHybridShapeFill *& oFill) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,59,&_Trac2,&oFill); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->AddNewFill(oFill); \
   ExitAfterCall(this,59,_Trac2,&_ret_arg,&oFill); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeFactory##classe::AddNewSpline(CATIAHybridShapeSpline *& oSpline) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,60,&_Trac2,&oSpline); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->AddNewSpline(oSpline); \
   ExitAfterCall(this,60,_Trac2,&_ret_arg,&oSpline); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeFactory##classe::AddNewSpiral(CATLONG iType, CATIAReference * iSupport, CATIAReference * iCenterPoint, CATIAHybridShapeDirection * iAxis, double iStartingRadius, CAT_VARIANT_BOOL iClockwiseRevolution, CATIAHybridShapeSpiral *& oSpiral) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,61,&_Trac2,&iType,&iSupport,&iCenterPoint,&iAxis,&iStartingRadius,&iClockwiseRevolution,&oSpiral); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->AddNewSpiral(iType,iSupport,iCenterPoint,iAxis,iStartingRadius,iClockwiseRevolution,oSpiral); \
   ExitAfterCall(this,61,_Trac2,&_ret_arg,&iType,&iSupport,&iCenterPoint,&iAxis,&iStartingRadius,&iClockwiseRevolution,&oSpiral); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeFactory##classe::AddNewBoundary(CATIAReference * iInitialElement, CATIAReference * iSupport, CATLONG iTypedePropagation, CATIAHybridShapeBoundary *& oBoundary) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,62,&_Trac2,&iInitialElement,&iSupport,&iTypedePropagation,&oBoundary); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->AddNewBoundary(iInitialElement,iSupport,iTypedePropagation,oBoundary); \
   ExitAfterCall(this,62,_Trac2,&_ret_arg,&iInitialElement,&iSupport,&iTypedePropagation,&oBoundary); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeFactory##classe::AddNewBoundaryOfSurface(CATIAReference * Surface, CATIAHybridShapeBoundary *& oBoundary) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,63,&_Trac2,&Surface,&oBoundary); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->AddNewBoundaryOfSurface(Surface,oBoundary); \
   ExitAfterCall(this,63,_Trac2,&_ret_arg,&Surface,&oBoundary); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeFactory##classe::AddNewPointCoord(double iX, double iY, double iZ, CATIAHybridShapePointCoord *& oPoint) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,64,&_Trac2,&iX,&iY,&iZ,&oPoint); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->AddNewPointCoord(iX,iY,iZ,oPoint); \
   ExitAfterCall(this,64,_Trac2,&_ret_arg,&iX,&iY,&iZ,&oPoint); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeFactory##classe::AddNewPointCoordWithReference(double iX, double iY, double iZ, CATIAReference * iPt, CATIAHybridShapePointCoord *& oPoint) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,65,&_Trac2,&iX,&iY,&iZ,&iPt,&oPoint); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->AddNewPointCoordWithReference(iX,iY,iZ,iPt,oPoint); \
   ExitAfterCall(this,65,_Trac2,&_ret_arg,&iX,&iY,&iZ,&iPt,&oPoint); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeFactory##classe::AddNewPointBetween(CATIAReference * iPoint1, CATIAReference * iPoint2, double iRatio, CATLONG iOrientation, CATIAHybridShapePointBetween *& oPoint) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,66,&_Trac2,&iPoint1,&iPoint2,&iRatio,&iOrientation,&oPoint); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->AddNewPointBetween(iPoint1,iPoint2,iRatio,iOrientation,oPoint); \
   ExitAfterCall(this,66,_Trac2,&_ret_arg,&iPoint1,&iPoint2,&iRatio,&iOrientation,&oPoint); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeFactory##classe::AddNewPointOnCurveWithReferenceFromDistance(CATIAReference * iCrv, CATIAReference * iPt, double iLong, CAT_VARIANT_BOOL iOrientation, CATIAHybridShapePointOnCurve *& oPoint) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,67,&_Trac2,&iCrv,&iPt,&iLong,&iOrientation,&oPoint); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->AddNewPointOnCurveWithReferenceFromDistance(iCrv,iPt,iLong,iOrientation,oPoint); \
   ExitAfterCall(this,67,_Trac2,&_ret_arg,&iCrv,&iPt,&iLong,&iOrientation,&oPoint); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeFactory##classe::AddNewPointOnCurveFromDistance(CATIAReference * iCrv, double iLong, CAT_VARIANT_BOOL iOrientation, CATIAHybridShapePointOnCurve *& oPoint) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,68,&_Trac2,&iCrv,&iLong,&iOrientation,&oPoint); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->AddNewPointOnCurveFromDistance(iCrv,iLong,iOrientation,oPoint); \
   ExitAfterCall(this,68,_Trac2,&_ret_arg,&iCrv,&iLong,&iOrientation,&oPoint); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeFactory##classe::AddNewPointOnCurveWithReferenceFromPercent(CATIAReference * iCrv, CATIAReference * iPt, double iLong, CAT_VARIANT_BOOL iOrientation, CATIAHybridShapePointOnCurve *& oPoint) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,69,&_Trac2,&iCrv,&iPt,&iLong,&iOrientation,&oPoint); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->AddNewPointOnCurveWithReferenceFromPercent(iCrv,iPt,iLong,iOrientation,oPoint); \
   ExitAfterCall(this,69,_Trac2,&_ret_arg,&iCrv,&iPt,&iLong,&iOrientation,&oPoint); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeFactory##classe::AddNewPointOnCurveFromPercent(CATIAReference * iCrv, double iLong, CAT_VARIANT_BOOL iOrientation, CATIAHybridShapePointOnCurve *& oPoint) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,70,&_Trac2,&iCrv,&iLong,&iOrientation,&oPoint); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->AddNewPointOnCurveFromPercent(iCrv,iLong,iOrientation,oPoint); \
   ExitAfterCall(this,70,_Trac2,&_ret_arg,&iCrv,&iLong,&iOrientation,&oPoint); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeFactory##classe::AddNewPointOnPlaneWithReference(CATIAReference * iPlane, CATIAReference * iPt, double iX, double iY, CATIAHybridShapePointOnPlane *& oPoint) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,71,&_Trac2,&iPlane,&iPt,&iX,&iY,&oPoint); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->AddNewPointOnPlaneWithReference(iPlane,iPt,iX,iY,oPoint); \
   ExitAfterCall(this,71,_Trac2,&_ret_arg,&iPlane,&iPt,&iX,&iY,&oPoint); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeFactory##classe::AddNewPointOnPlane(CATIAReference * iPlane, double iX, double iY, CATIAHybridShapePointOnPlane *& oPoint) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,72,&_Trac2,&iPlane,&iX,&iY,&oPoint); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->AddNewPointOnPlane(iPlane,iX,iY,oPoint); \
   ExitAfterCall(this,72,_Trac2,&_ret_arg,&iPlane,&iX,&iY,&oPoint); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeFactory##classe::AddNewPointOnSurfaceWithReference(CATIAReference * iSurface, CATIAReference * iPt, CATIAHybridShapeDirection * iDirection, double iX, CATIAHybridShapePointOnSurface *& oPoint) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,73,&_Trac2,&iSurface,&iPt,&iDirection,&iX,&oPoint); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->AddNewPointOnSurfaceWithReference(iSurface,iPt,iDirection,iX,oPoint); \
   ExitAfterCall(this,73,_Trac2,&_ret_arg,&iSurface,&iPt,&iDirection,&iX,&oPoint); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeFactory##classe::AddNewPointOnSurface(CATIAReference * iSurface, CATIAHybridShapeDirection * iDirection, double iX, CATIAHybridShapePointOnSurface *& oPoint) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,74,&_Trac2,&iSurface,&iDirection,&iX,&oPoint); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->AddNewPointOnSurface(iSurface,iDirection,iX,oPoint); \
   ExitAfterCall(this,74,_Trac2,&_ret_arg,&iSurface,&iDirection,&iX,&oPoint); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeFactory##classe::AddNewPointCenter(CATIAReference * iCurve, CATIAHybridShapePointCenter *& oPoint) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,75,&_Trac2,&iCurve,&oPoint); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->AddNewPointCenter(iCurve,oPoint); \
   ExitAfterCall(this,75,_Trac2,&_ret_arg,&iCurve,&oPoint); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeFactory##classe::AddNewPointTangent(CATIAReference * iCurve, CATIAHybridShapeDirection * iDirection, CATIAHybridShapePointTangent *& oPoint) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,76,&_Trac2,&iCurve,&iDirection,&oPoint); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->AddNewPointTangent(iCurve,iDirection,oPoint); \
   ExitAfterCall(this,76,_Trac2,&_ret_arg,&iCurve,&iDirection,&oPoint); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeFactory##classe::AddNewLinePtPt(CATIAReference * iPtOrigine, CATIAReference * iPtExtremite, CATIAHybridShapeLinePtPt *& oLine) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,77,&_Trac2,&iPtOrigine,&iPtExtremite,&oLine); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->AddNewLinePtPt(iPtOrigine,iPtExtremite,oLine); \
   ExitAfterCall(this,77,_Trac2,&_ret_arg,&iPtOrigine,&iPtExtremite,&oLine); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeFactory##classe::AddNewLinePtPtOnSupport(CATIAReference * iPtOrigine, CATIAReference * iPtExtremite, CATIAReference * iSupport, CATIAHybridShapeLinePtPt *& oLine) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,78,&_Trac2,&iPtOrigine,&iPtExtremite,&iSupport,&oLine); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->AddNewLinePtPtOnSupport(iPtOrigine,iPtExtremite,iSupport,oLine); \
   ExitAfterCall(this,78,_Trac2,&_ret_arg,&iPtOrigine,&iPtExtremite,&iSupport,&oLine); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeFactory##classe::AddNewLinePtPtExtended(CATIAReference * iPtOrigine, CATIAReference * iPtExtremite, double iBeginOffset, double iEndOffset, CATIAHybridShapeLinePtPt *& oLine) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,79,&_Trac2,&iPtOrigine,&iPtExtremite,&iBeginOffset,&iEndOffset,&oLine); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->AddNewLinePtPtExtended(iPtOrigine,iPtExtremite,iBeginOffset,iEndOffset,oLine); \
   ExitAfterCall(this,79,_Trac2,&_ret_arg,&iPtOrigine,&iPtExtremite,&iBeginOffset,&iEndOffset,&oLine); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeFactory##classe::AddNewLinePtPtOnSupportExtended(CATIAReference * iPtOrigine, CATIAReference * iPtExtremite, CATIAReference * iSupport, double iBeginOffset, double iEndOffset, CATIAHybridShapeLinePtPt *& oLine) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,80,&_Trac2,&iPtOrigine,&iPtExtremite,&iSupport,&iBeginOffset,&iEndOffset,&oLine); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->AddNewLinePtPtOnSupportExtended(iPtOrigine,iPtExtremite,iSupport,iBeginOffset,iEndOffset,oLine); \
   ExitAfterCall(this,80,_Trac2,&_ret_arg,&iPtOrigine,&iPtExtremite,&iSupport,&iBeginOffset,&iEndOffset,&oLine); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeFactory##classe::AddNewLinePtDir(CATIAReference * iPt, CATIAHybridShapeDirection * iDirection, double iBeginOffset, double iEndOffset, CAT_VARIANT_BOOL iOrientation, CATIAHybridShapeLinePtDir *& oLine) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,81,&_Trac2,&iPt,&iDirection,&iBeginOffset,&iEndOffset,&iOrientation,&oLine); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->AddNewLinePtDir(iPt,iDirection,iBeginOffset,iEndOffset,iOrientation,oLine); \
   ExitAfterCall(this,81,_Trac2,&_ret_arg,&iPt,&iDirection,&iBeginOffset,&iEndOffset,&iOrientation,&oLine); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeFactory##classe::AddNewLinePtDirOnSupport(CATIAReference * iPt, CATIAHybridShapeDirection * iDirection, CATIAReference * iSupport, double iBeginOffset, double iEndOffset, CAT_VARIANT_BOOL iOrientation, CATIAHybridShapeLinePtDir *& oLine) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,82,&_Trac2,&iPt,&iDirection,&iSupport,&iBeginOffset,&iEndOffset,&iOrientation,&oLine); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->AddNewLinePtDirOnSupport(iPt,iDirection,iSupport,iBeginOffset,iEndOffset,iOrientation,oLine); \
   ExitAfterCall(this,82,_Trac2,&_ret_arg,&iPt,&iDirection,&iSupport,&iBeginOffset,&iEndOffset,&iOrientation,&oLine); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeFactory##classe::AddNewLineAngle(CATIAReference * iCurve, CATIAReference * iSurface, CATIAReference * iPoint, CAT_VARIANT_BOOL iGeodesic, double iBeginOffset, double iEndOffset, double iAngle, CAT_VARIANT_BOOL iOrientation, CATIAHybridShapeLineAngle *& oLine) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,83,&_Trac2,&iCurve,&iSurface,&iPoint,&iGeodesic,&iBeginOffset,&iEndOffset,&iAngle,&iOrientation,&oLine); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->AddNewLineAngle(iCurve,iSurface,iPoint,iGeodesic,iBeginOffset,iEndOffset,iAngle,iOrientation,oLine); \
   ExitAfterCall(this,83,_Trac2,&_ret_arg,&iCurve,&iSurface,&iPoint,&iGeodesic,&iBeginOffset,&iEndOffset,&iAngle,&iOrientation,&oLine); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeFactory##classe::AddNewLineTangency(CATIAReference * iCurve, CATIAReference * iPoint, double iBeginOffset, double iEndOffset, CAT_VARIANT_BOOL iOrientation, CATIAHybridShapeLineTangency *& oLine) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,84,&_Trac2,&iCurve,&iPoint,&iBeginOffset,&iEndOffset,&iOrientation,&oLine); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->AddNewLineTangency(iCurve,iPoint,iBeginOffset,iEndOffset,iOrientation,oLine); \
   ExitAfterCall(this,84,_Trac2,&_ret_arg,&iCurve,&iPoint,&iBeginOffset,&iEndOffset,&iOrientation,&oLine); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeFactory##classe::AddNewLineBiTangent(CATIAReference * iCurve1, CATIAReference * iElement2, CATIAReference * iSupport, CATIAHybridShapeLineBiTangent *& oLine) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,85,&_Trac2,&iCurve1,&iElement2,&iSupport,&oLine); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->AddNewLineBiTangent(iCurve1,iElement2,iSupport,oLine); \
   ExitAfterCall(this,85,_Trac2,&_ret_arg,&iCurve1,&iElement2,&iSupport,&oLine); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeFactory##classe::AddNewLineTangencyOnSupport(CATIAReference * iCurve, CATIAReference * iPoint, CATIAReference * iSupport, double iBeginOffset, double iEndOffset, CAT_VARIANT_BOOL iOrientation, CATIAHybridShapeLineTangency *& oLine) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,86,&_Trac2,&iCurve,&iPoint,&iSupport,&iBeginOffset,&iEndOffset,&iOrientation,&oLine); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->AddNewLineTangencyOnSupport(iCurve,iPoint,iSupport,iBeginOffset,iEndOffset,iOrientation,oLine); \
   ExitAfterCall(this,86,_Trac2,&_ret_arg,&iCurve,&iPoint,&iSupport,&iBeginOffset,&iEndOffset,&iOrientation,&oLine); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeFactory##classe::AddNewLineNormal(CATIAReference * iSurface, CATIAReference * iPoint, double iBeginOffset, double iEndOffset, CAT_VARIANT_BOOL iOrientation, CATIAHybridShapeLineNormal *& oLine) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,87,&_Trac2,&iSurface,&iPoint,&iBeginOffset,&iEndOffset,&iOrientation,&oLine); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->AddNewLineNormal(iSurface,iPoint,iBeginOffset,iEndOffset,iOrientation,oLine); \
   ExitAfterCall(this,87,_Trac2,&_ret_arg,&iSurface,&iPoint,&iBeginOffset,&iEndOffset,&iOrientation,&oLine); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeFactory##classe::AddNewLineBisecting(CATIAReference * iLine1, CATIAReference * iLine2, double iBeginOffset, double iEndOffset, CAT_VARIANT_BOOL iOrientation, CATLONG SolutionNb, CATIAHybridShapeLineBisecting *& oLine) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,88,&_Trac2,&iLine1,&iLine2,&iBeginOffset,&iEndOffset,&iOrientation,&SolutionNb,&oLine); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->AddNewLineBisecting(iLine1,iLine2,iBeginOffset,iEndOffset,iOrientation,SolutionNb,oLine); \
   ExitAfterCall(this,88,_Trac2,&_ret_arg,&iLine1,&iLine2,&iBeginOffset,&iEndOffset,&iOrientation,&SolutionNb,&oLine); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeFactory##classe::AddNewLineBisectingOnSupport(CATIAReference * iLine1, CATIAReference * iLine2, CATIAReference * iSurface, double iBeginOffset, double iEndOffset, CAT_VARIANT_BOOL iOrientation, CATLONG SolutionNb, CATIAHybridShapeLineBisecting *& oLine) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,89,&_Trac2,&iLine1,&iLine2,&iSurface,&iBeginOffset,&iEndOffset,&iOrientation,&SolutionNb,&oLine); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->AddNewLineBisectingOnSupport(iLine1,iLine2,iSurface,iBeginOffset,iEndOffset,iOrientation,SolutionNb,oLine); \
   ExitAfterCall(this,89,_Trac2,&_ret_arg,&iLine1,&iLine2,&iSurface,&iBeginOffset,&iEndOffset,&iOrientation,&SolutionNb,&oLine); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeFactory##classe::AddNewLineBisectingWithPoint(CATIAReference * iLine1, CATIAReference * iLine2, CATIAReference * iRefPoint, double iBeginOffset, double iEndOffset, CAT_VARIANT_BOOL iOrientation, CATLONG SolutionNb, CATIAHybridShapeLineBisecting *& oLine) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,90,&_Trac2,&iLine1,&iLine2,&iRefPoint,&iBeginOffset,&iEndOffset,&iOrientation,&SolutionNb,&oLine); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->AddNewLineBisectingWithPoint(iLine1,iLine2,iRefPoint,iBeginOffset,iEndOffset,iOrientation,SolutionNb,oLine); \
   ExitAfterCall(this,90,_Trac2,&_ret_arg,&iLine1,&iLine2,&iRefPoint,&iBeginOffset,&iEndOffset,&iOrientation,&SolutionNb,&oLine); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeFactory##classe::AddNewLineBisectingOnSupportWithPoint(CATIAReference * iLine1, CATIAReference * iLine2, CATIAReference * iRefPoint, CATIAReference * iSurface, double iBeginOffset, double iEndOffset, CAT_VARIANT_BOOL iOrientation, CATLONG SolutionNb, CATIAHybridShapeLineBisecting *& oLine) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,91,&_Trac2,&iLine1,&iLine2,&iRefPoint,&iSurface,&iBeginOffset,&iEndOffset,&iOrientation,&SolutionNb,&oLine); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->AddNewLineBisectingOnSupportWithPoint(iLine1,iLine2,iRefPoint,iSurface,iBeginOffset,iEndOffset,iOrientation,SolutionNb,oLine); \
   ExitAfterCall(this,91,_Trac2,&_ret_arg,&iLine1,&iLine2,&iRefPoint,&iSurface,&iBeginOffset,&iEndOffset,&iOrientation,&SolutionNb,&oLine); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeFactory##classe::AddNewPlaneEquation(double iA_Coeff, double iB_Coeff, double iC_Coeff, double iD_Coeff, CATIAHybridShapePlaneEquation *& oPlane) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,92,&_Trac2,&iA_Coeff,&iB_Coeff,&iC_Coeff,&iD_Coeff,&oPlane); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->AddNewPlaneEquation(iA_Coeff,iB_Coeff,iC_Coeff,iD_Coeff,oPlane); \
   ExitAfterCall(this,92,_Trac2,&_ret_arg,&iA_Coeff,&iB_Coeff,&iC_Coeff,&iD_Coeff,&oPlane); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeFactory##classe::AddNewPlane3Points(CATIAReference * iPt1, CATIAReference * iPt2, CATIAReference * iPt3, CATIAHybridShapePlane3Points *& oPlane) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,93,&_Trac2,&iPt1,&iPt2,&iPt3,&oPlane); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->AddNewPlane3Points(iPt1,iPt2,iPt3,oPlane); \
   ExitAfterCall(this,93,_Trac2,&_ret_arg,&iPt1,&iPt2,&iPt3,&oPlane); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeFactory##classe::AddNewPlane2Lines(CATIAReference * iLn1, CATIAReference * iLn2, CATIAHybridShapePlane2Lines *& oPlane) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,94,&_Trac2,&iLn1,&iLn2,&oPlane); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->AddNewPlane2Lines(iLn1,iLn2,oPlane); \
   ExitAfterCall(this,94,_Trac2,&_ret_arg,&iLn1,&iLn2,&oPlane); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeFactory##classe::AddNewPlane1Line1Pt(CATIAReference * iLn, CATIAReference * iPt, CATIAHybridShapePlane1Line1Pt *& oPlane) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,95,&_Trac2,&iLn,&iPt,&oPlane); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->AddNewPlane1Line1Pt(iLn,iPt,oPlane); \
   ExitAfterCall(this,95,_Trac2,&_ret_arg,&iLn,&iPt,&oPlane); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeFactory##classe::AddNewPlane1Curve(CATIAReference * iPlanarCurve, CATIAHybridShapePlane1Curve *& oPlane) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,96,&_Trac2,&iPlanarCurve,&oPlane); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->AddNewPlane1Curve(iPlanarCurve,oPlane); \
   ExitAfterCall(this,96,_Trac2,&_ret_arg,&iPlanarCurve,&oPlane); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeFactory##classe::AddNewPlaneTangent(CATIAReference * iSurface, CATIAReference * iPt, CATIAHybridShapePlaneTangent *& oPlane) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,97,&_Trac2,&iSurface,&iPt,&oPlane); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->AddNewPlaneTangent(iSurface,iPt,oPlane); \
   ExitAfterCall(this,97,_Trac2,&_ret_arg,&iSurface,&iPt,&oPlane); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeFactory##classe::AddNewPlaneNormal(CATIAReference * iCurve, CATIAReference * iPt, CATIAHybridShapePlaneNormal *& oPlane) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,98,&_Trac2,&iCurve,&iPt,&oPlane); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->AddNewPlaneNormal(iCurve,iPt,oPlane); \
   ExitAfterCall(this,98,_Trac2,&_ret_arg,&iCurve,&iPt,&oPlane); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeFactory##classe::AddNewPlaneOffset(CATIAReference * iPlane, double iOffset, CAT_VARIANT_BOOL iOrientation, CATIAHybridShapePlaneOffset *& oPlane) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,99,&_Trac2,&iPlane,&iOffset,&iOrientation,&oPlane); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->AddNewPlaneOffset(iPlane,iOffset,iOrientation,oPlane); \
   ExitAfterCall(this,99,_Trac2,&_ret_arg,&iPlane,&iOffset,&iOrientation,&oPlane); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeFactory##classe::AddNewPlaneOffsetPt(CATIAReference * iPlane, CATIAReference * iPt, CATIAHybridShapePlaneOffsetPt *& oPlane) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,100,&_Trac2,&iPlane,&iPt,&oPlane); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->AddNewPlaneOffsetPt(iPlane,iPt,oPlane); \
   ExitAfterCall(this,100,_Trac2,&_ret_arg,&iPlane,&iPt,&oPlane); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeFactory##classe::AddNewPlaneAngle(CATIAReference * iPlane, CATIAReference * iRevolAxis, double iAngle, CAT_VARIANT_BOOL iOrientation, CATIAHybridShapePlaneAngle *& oPlane) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,101,&_Trac2,&iPlane,&iRevolAxis,&iAngle,&iOrientation,&oPlane); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->AddNewPlaneAngle(iPlane,iRevolAxis,iAngle,iOrientation,oPlane); \
   ExitAfterCall(this,101,_Trac2,&_ret_arg,&iPlane,&iRevolAxis,&iAngle,&iOrientation,&oPlane); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeFactory##classe::AddNewPlaneMean(CATSafeArrayVariant & iListOfPoints, CATLONG NbPoint, CATIAHybridShapePlaneMean *& oPlane) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,102,&_Trac2,&iListOfPoints,&NbPoint,&oPlane); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->AddNewPlaneMean(iListOfPoints,NbPoint,oPlane); \
   ExitAfterCall(this,102,_Trac2,&_ret_arg,&iListOfPoints,&NbPoint,&oPlane); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeFactory##classe::AddNewExtrude(CATIAReference * iObjectToExtrude, double iOffsetDebut, double iOffsetFin, CATIAHybridShapeDirection * iDirection, CATIAHybridShapeExtrude *& oExtrudeObject) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,103,&_Trac2,&iObjectToExtrude,&iOffsetDebut,&iOffsetFin,&iDirection,&oExtrudeObject); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->AddNewExtrude(iObjectToExtrude,iOffsetDebut,iOffsetFin,iDirection,oExtrudeObject); \
   ExitAfterCall(this,103,_Trac2,&_ret_arg,&iObjectToExtrude,&iOffsetDebut,&iOffsetFin,&iDirection,&oExtrudeObject); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeFactory##classe::AddNewCylinder(CATIAReference * iCenter, double iRadius, double iFirstLength, double iSecondLength, CATIAHybridShapeDirection * iDirection, CATIAHybridShapeCylinder *& oCylinderObject) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,104,&_Trac2,&iCenter,&iRadius,&iFirstLength,&iSecondLength,&iDirection,&oCylinderObject); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->AddNewCylinder(iCenter,iRadius,iFirstLength,iSecondLength,iDirection,oCylinderObject); \
   ExitAfterCall(this,104,_Trac2,&_ret_arg,&iCenter,&iRadius,&iFirstLength,&iSecondLength,&iDirection,&oCylinderObject); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeFactory##classe::AddNewRevol(CATIAReference * iObjectToExtrude, double iOffsetDebut, double iOffsetFin, CATIAReference * iAxis, CATIAHybridShapeRevol *& oRevolObject) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,105,&_Trac2,&iObjectToExtrude,&iOffsetDebut,&iOffsetFin,&iAxis,&oRevolObject); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->AddNewRevol(iObjectToExtrude,iOffsetDebut,iOffsetFin,iAxis,oRevolObject); \
   ExitAfterCall(this,105,_Trac2,&_ret_arg,&iObjectToExtrude,&iOffsetDebut,&iOffsetFin,&iAxis,&oRevolObject); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeFactory##classe::AddNewDirection(CATIAReference * iElement, CATIAHybridShapeDirection *& oDirection) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,106,&_Trac2,&iElement,&oDirection); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->AddNewDirection(iElement,oDirection); \
   ExitAfterCall(this,106,_Trac2,&_ret_arg,&iElement,&oDirection); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeFactory##classe::AddNewDirectionByCoord(double iX, double iY, double iZ, CATIAHybridShapeDirection *& oDirection) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,107,&_Trac2,&iX,&iY,&iZ,&oDirection); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->AddNewDirectionByCoord(iX,iY,iZ,oDirection); \
   ExitAfterCall(this,107,_Trac2,&_ret_arg,&iX,&iY,&iZ,&oDirection); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeFactory##classe::AddNewOffset(CATIAReference * iObjectToOffset, double iOffset, CAT_VARIANT_BOOL iOrientation, double iPrecision, CATIAHybridShapeOffset *& oOffsetObject) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,108,&_Trac2,&iObjectToOffset,&iOffset,&iOrientation,&iPrecision,&oOffsetObject); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->AddNewOffset(iObjectToOffset,iOffset,iOrientation,iPrecision,oOffsetObject); \
   ExitAfterCall(this,108,_Trac2,&_ret_arg,&iObjectToOffset,&iOffset,&iOrientation,&iPrecision,&oOffsetObject); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeFactory##classe::AddNewHybridScaling(CATIAReference * iElemToScale, CATIAReference * iCenter, double iRatio, CATIAHybridShapeScaling *& oScaling) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,109,&_Trac2,&iElemToScale,&iCenter,&iRatio,&oScaling); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->AddNewHybridScaling(iElemToScale,iCenter,iRatio,oScaling); \
   ExitAfterCall(this,109,_Trac2,&_ret_arg,&iElemToScale,&iCenter,&iRatio,&oScaling); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeFactory##classe::AddNewHealing(CATIAReference * iBodyToheal, CATIAHybridShapeHealing *& oHealing) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,110,&_Trac2,&iBodyToheal,&oHealing); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->AddNewHealing(iBodyToheal,oHealing); \
   ExitAfterCall(this,110,_Trac2,&_ret_arg,&iBodyToheal,&oHealing); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeFactory##classe::AddNewRollingOffset(CATIAHybridShapeRollingOffset *& oRollingOffset) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,111,&_Trac2,&oRollingOffset); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->AddNewRollingOffset(oRollingOffset); \
   ExitAfterCall(this,111,_Trac2,&_ret_arg,&oRollingOffset); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeFactory##classe::AddNewReflectLine(CATIAReference * iSupport, CATIAHybridShapeDirection * iDir, double iAngle, CATLONG iOrientationSupport, CATLONG iOrientationDirection, CATIAHybridShapeReflectLine *& oReflectLine) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,112,&_Trac2,&iSupport,&iDir,&iAngle,&iOrientationSupport,&iOrientationDirection,&oReflectLine); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->AddNewReflectLine(iSupport,iDir,iAngle,iOrientationSupport,iOrientationDirection,oReflectLine); \
   ExitAfterCall(this,112,_Trac2,&_ret_arg,&iSupport,&iDir,&iAngle,&iOrientationSupport,&iOrientationDirection,&oReflectLine); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeFactory##classe::AddNewReflectLineWithType(CATIAReference * iSupport, CATIAHybridShapeDirection * iDir, double iAngle, CATLONG iOrientationSupport, CATLONG iOrientationDirection, CATLONG iType, CATIAHybridShapeReflectLine *& oReflectLine) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,113,&_Trac2,&iSupport,&iDir,&iAngle,&iOrientationSupport,&iOrientationDirection,&iType,&oReflectLine); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->AddNewReflectLineWithType(iSupport,iDir,iAngle,iOrientationSupport,iOrientationDirection,iType,oReflectLine); \
   ExitAfterCall(this,113,_Trac2,&_ret_arg,&iSupport,&iDir,&iAngle,&iOrientationSupport,&iOrientationDirection,&iType,&oReflectLine); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeFactory##classe::AddNewConicalReflectLineWithType(CATIAReference * iSupport, CATIAReference * iOrigin, double iAngle, CATLONG iOrientationSupport, CATLONG iType, CATIAHybridShapeReflectLine *& oReflectLine) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,114,&_Trac2,&iSupport,&iOrigin,&iAngle,&iOrientationSupport,&iType,&oReflectLine); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->AddNewConicalReflectLineWithType(iSupport,iOrigin,iAngle,iOrientationSupport,iType,oReflectLine); \
   ExitAfterCall(this,114,_Trac2,&_ret_arg,&iSupport,&iOrigin,&iAngle,&iOrientationSupport,&iType,&oReflectLine); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeFactory##classe::AddNewSphere(CATIAReference * iCenter, CATIAReference * iAxis, double iRadius, double iBeginParallelAngle, double iEndParallelAngle, double iBeginMeridianAngle, double iEndMeridianAngle, CATIAHybridShapeSphere *& oSphereObject) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,115,&_Trac2,&iCenter,&iAxis,&iRadius,&iBeginParallelAngle,&iEndParallelAngle,&iBeginMeridianAngle,&iEndMeridianAngle,&oSphereObject); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->AddNewSphere(iCenter,iAxis,iRadius,iBeginParallelAngle,iEndParallelAngle,iBeginMeridianAngle,iEndMeridianAngle,oSphereObject); \
   ExitAfterCall(this,115,_Trac2,&_ret_arg,&iCenter,&iAxis,&iRadius,&iBeginParallelAngle,&iEndParallelAngle,&iBeginMeridianAngle,&iEndMeridianAngle,&oSphereObject); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeFactory##classe::AddNewBump(CATIAReference * iBodyToBump, CATIAHybridShapeBump *& oBump) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,116,&_Trac2,&iBodyToBump,&oBump); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->AddNewBump(iBodyToBump,oBump); \
   ExitAfterCall(this,116,_Trac2,&_ret_arg,&iBodyToBump,&oBump); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeFactory##classe::AddNewWrapCurve(CATIAHybridShapeWrapCurve *& oWrapCurve) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,117,&_Trac2,&oWrapCurve); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->AddNewWrapCurve(oWrapCurve); \
   ExitAfterCall(this,117,_Trac2,&_ret_arg,&oWrapCurve); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeFactory##classe::AddNewWrapSurface(CATIAReference * iBodyToDeform, CATIAHybridShapeWrapSurface *& oWrapSurface) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,118,&_Trac2,&iBodyToDeform,&oWrapSurface); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->AddNewWrapSurface(iBodyToDeform,oWrapSurface); \
   ExitAfterCall(this,118,_Trac2,&_ret_arg,&iBodyToDeform,&oWrapSurface); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeFactory##classe::AddNewPolyline(CATIAHybridShapePolyline *& oPolyline) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,119,&_Trac2,&oPolyline); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->AddNewPolyline(oPolyline); \
   ExitAfterCall(this,119,_Trac2,&_ret_arg,&oPolyline); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeFactory##classe::AddNewSweepConic(CATIAReference * ipIAGuide1, CATIAHybridShapeSweepConic *& opIASweepConic) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,120,&_Trac2,&ipIAGuide1,&opIASweepConic); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->AddNewSweepConic(ipIAGuide1,opIASweepConic); \
   ExitAfterCall(this,120,_Trac2,&_ret_arg,&ipIAGuide1,&opIASweepConic); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeFactory##classe::AddNewCircleCenterTangent(CATIAReference * iCenterElem, CATIAReference * iTangentCurve, CATIAReference * iSupport, double iRadius, CATIAHybridShapeCircleCenterTangent *& oCircle) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,121,&_Trac2,&iCenterElem,&iTangentCurve,&iSupport,&iRadius,&oCircle); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->AddNewCircleCenterTangent(iCenterElem,iTangentCurve,iSupport,iRadius,oCircle); \
   ExitAfterCall(this,121,_Trac2,&_ret_arg,&iCenterElem,&iTangentCurve,&iSupport,&iRadius,&oCircle); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeFactory##classe::AddNewCircleCenterAxis(CATIAReference * iAxis, CATIAReference * iPoint, double iValue, CAT_VARIANT_BOOL iProjection, CATIAHybridShapeCircleCenterAxis *& oCircle) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,122,&_Trac2,&iAxis,&iPoint,&iValue,&iProjection,&oCircle); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->AddNewCircleCenterAxis(iAxis,iPoint,iValue,iProjection,oCircle); \
   ExitAfterCall(this,122,_Trac2,&_ret_arg,&iAxis,&iPoint,&iValue,&iProjection,&oCircle); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeFactory##classe::AddNewCircleCenterAxisWithAngles(CATIAReference * iAxis, CATIAReference * iPoint, double iValue, CAT_VARIANT_BOOL iProjection, double iStartAngle, double iEndAngle, CATIAHybridShapeCircleCenterAxis *& oCircle) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,123,&_Trac2,&iAxis,&iPoint,&iValue,&iProjection,&iStartAngle,&iEndAngle,&oCircle); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->AddNewCircleCenterAxisWithAngles(iAxis,iPoint,iValue,iProjection,iStartAngle,iEndAngle,oCircle); \
   ExitAfterCall(this,123,_Trac2,&_ret_arg,&iAxis,&iPoint,&iValue,&iProjection,&iStartAngle,&iEndAngle,&oCircle); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeFactory##classe::AddNew3DCurveOffset(CATIAReference * iCurveToOffset, CATIAHybridShapeDirection * iDirection, double iOffset, double iCornerRadius, double iCornerTension, CATIAHybridShape3DCurveOffset *& o3DCurveOffset) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,124,&_Trac2,&iCurveToOffset,&iDirection,&iOffset,&iCornerRadius,&iCornerTension,&o3DCurveOffset); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->AddNew3DCurveOffset(iCurveToOffset,iDirection,iOffset,iCornerRadius,iCornerTension,o3DCurveOffset); \
   ExitAfterCall(this,124,_Trac2,&_ret_arg,&iCurveToOffset,&iDirection,&iOffset,&iCornerRadius,&iCornerTension,&o3DCurveOffset); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeFactory##classe::AddNewSection(CATIAHybridShapeSection *& oSection) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,125,&_Trac2,&oSection); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->AddNewSection(oSection); \
   ExitAfterCall(this,125,_Trac2,&_ret_arg,&oSection); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeFactory##classe::AddNewIntegratedLaw(CATLONG iType, CATIAHybridShapeIntegratedLaw *& oLaw) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,126,&_Trac2,&iType,&oLaw); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->AddNewIntegratedLaw(iType,oLaw); \
   ExitAfterCall(this,126,_Trac2,&_ret_arg,&iType,&oLaw); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeFactory##classe::AddNewDatums(CATIAReference * iElem, CATSafeArrayVariant *& oArrayOfDatum) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,127,&_Trac2,&iElem,&oArrayOfDatum); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->AddNewDatums(iElem,oArrayOfDatum); \
   ExitAfterCall(this,127,_Trac2,&_ret_arg,&iElem,&oArrayOfDatum); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeFactory##classe::GetGeometricalFeatureType(CATIAReference * iElem, short & oType) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,128,&_Trac2,&iElem,&oType); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetGeometricalFeatureType(iElem,oType); \
   ExitAfterCall(this,128,_Trac2,&_ret_arg,&iElem,&oType); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeFactory##classe::GSMVisibility(CATIAReference * iElem, CATLONG Show) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,129,&_Trac2,&iElem,&Show); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GSMVisibility(iElem,Show); \
   ExitAfterCall(this,129,_Trac2,&_ret_arg,&iElem,&Show); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeFactory##classe::ChangeFeatureName(CATIAReference * iElem, const CATBSTR & Name) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,130,&_Trac2,&iElem,&Name); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->ChangeFeatureName(iElem,Name); \
   ExitAfterCall(this,130,_Trac2,&_ret_arg,&iElem,&Name); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeFactory##classe::AddNewTransfer(CATIAReference * iElementToTransfer, CATLONG iTypeOfTransfer, CATIAHybridShapeTransfer *& oExt) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,131,&_Trac2,&iElementToTransfer,&iTypeOfTransfer,&oExt); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->AddNewTransfer(iElementToTransfer,iTypeOfTransfer,oExt); \
   ExitAfterCall(this,131,_Trac2,&_ret_arg,&iElementToTransfer,&iTypeOfTransfer,&oExt); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeFactory##classe::GSMGetObjectFromReference(CATIAReference * iElem, CATIAHybridShape *& oObjet) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,132,&_Trac2,&iElem,&oObjet); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GSMGetObjectFromReference(iElem,oObjet); \
   ExitAfterCall(this,132,_Trac2,&_ret_arg,&iElem,&oObjet); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeFactory##classe::DuplicateGSMSpec(CATIAReference * iRef, CATIAHybridShape *& oDupSpec) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,133,&_Trac2,&iRef,&oDupSpec); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->DuplicateGSMSpec(iRef,oDupSpec); \
   ExitAfterCall(this,133,_Trac2,&_ret_arg,&iRef,&oDupSpec); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeFactory##classe::SetReferenceElemForMultiple(CATIAReference * iSpec, CATIAReference * iNewRef) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,134,&_Trac2,&iSpec,&iNewRef); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetReferenceElemForMultiple(iSpec,iNewRef); \
   ExitAfterCall(this,134,_Trac2,&_ret_arg,&iSpec,&iNewRef); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeFactory##classe::AddNewPointOnCurveWithReferenceAlongDirection(CATIAReference * iCrv, CATIAReference * iPt, double iLong, CAT_VARIANT_BOOL iOrientation, CATIAHybridShapeDirection * iDirection, CATIAHybridShapePointOnCurve *& oPoint) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,135,&_Trac2,&iCrv,&iPt,&iLong,&iOrientation,&iDirection,&oPoint); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->AddNewPointOnCurveWithReferenceAlongDirection(iCrv,iPt,iLong,iOrientation,iDirection,oPoint); \
   ExitAfterCall(this,135,_Trac2,&_ret_arg,&iCrv,&iPt,&iLong,&iOrientation,&iDirection,&oPoint); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeFactory##classe::AddNewPointOnCurveAlongDirection(CATIAReference * iCrv, double iLong, CAT_VARIANT_BOOL iOrientation, CATIAHybridShapeDirection * iDirection, CATIAHybridShapePointOnCurve *& oPoint) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,136,&_Trac2,&iCrv,&iLong,&iOrientation,&iDirection,&oPoint); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->AddNewPointOnCurveAlongDirection(iCrv,iLong,iOrientation,iDirection,oPoint); \
   ExitAfterCall(this,136,_Trac2,&_ret_arg,&iCrv,&iLong,&iOrientation,&iDirection,&oPoint); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeFactory##classe::AddNewMidSurface(CATIAReference * iSupport, CATLONG iCreationMode, double iThreshold, CATIAHybridShapeMidSurface *& oMidSurface) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,137,&_Trac2,&iSupport,&iCreationMode,&iThreshold,&oMidSurface); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->AddNewMidSurface(iSupport,iCreationMode,iThreshold,oMidSurface); \
   ExitAfterCall(this,137,_Trac2,&_ret_arg,&iSupport,&iCreationMode,&iThreshold,&oMidSurface); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeFactory##classe::AddNewMidSurfaceWithAutoThreshold(CATIAReference * iSupport, CATLONG iCreationMode, double iThreshold, CATLONG iAutoThicknessThreshold, CATIAHybridShapeMidSurface *& oMidSurface) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,138,&_Trac2,&iSupport,&iCreationMode,&iThreshold,&iAutoThicknessThreshold,&oMidSurface); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->AddNewMidSurfaceWithAutoThreshold(iSupport,iCreationMode,iThreshold,iAutoThicknessThreshold,oMidSurface); \
   ExitAfterCall(this,138,_Trac2,&_ret_arg,&iSupport,&iCreationMode,&iThreshold,&iAutoThicknessThreshold,&oMidSurface); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAHybridShapeFactory##classe::get_Application(CATIAApplication *& oApplication) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,139,&_Trac2,&oApplication); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Application(oApplication); \
   ExitAfterCall(this,139,_Trac2,&_ret_arg,&oApplication); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAHybridShapeFactory##classe::get_Parent(CATBaseDispatch *& oParent) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,140,&_Trac2,&oParent); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Parent(oParent); \
   ExitAfterCall(this,140,_Trac2,&_ret_arg,&oParent); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAHybridShapeFactory##classe::get_Name(CATBSTR & oNameBSTR) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,141,&_Trac2,&oNameBSTR); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Name(oNameBSTR); \
   ExitAfterCall(this,141,_Trac2,&_ret_arg,&oNameBSTR); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAHybridShapeFactory##classe::put_Name(const CATBSTR & iNameBSTR) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,142,&_Trac2,&iNameBSTR); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_Name(iNameBSTR); \
   ExitAfterCall(this,142,_Trac2,&_ret_arg,&iNameBSTR); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAHybridShapeFactory##classe::GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,143,&_Trac2,&IDName,&RealObj); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetItem(IDName,RealObj); \
   ExitAfterCall(this,143,_Trac2,&_ret_arg,&IDName,&RealObj); \
   return(_ret_arg); \
} \



/* Macro used to link an implementation with an interface */
#define TIE_CATIAHybridShapeFactory(classe) \
 \
 \
declare_TIE_CATIAHybridShapeFactory(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIAHybridShapeFactory##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIAHybridShapeFactory,"CATIAHybridShapeFactory",CATIAHybridShapeFactory::MetaObject(),classe::MetaObject(),TIE); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIAHybridShapeFactory(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIECreation(CATIAHybridShapeFactory, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIAHybridShapeFactory##classe(classe::MetaObject(),CATIAHybridShapeFactory::MetaObject(),(void *)CreateTIECATIAHybridShapeFactory##classe)



/* Macro used to link an implementation with an interface */
/* This TIE is chained on the implementation object */
#define TIEchain_CATIAHybridShapeFactory(classe) \
 \
 \
declare_TIE_CATIAHybridShapeFactory(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIAHybridShapeFactory##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIAHybridShapeFactory,"CATIAHybridShapeFactory",CATIAHybridShapeFactory::MetaObject(),classe::MetaObject(),TIEchain); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIAHybridShapeFactory(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIEchainCreation(CATIAHybridShapeFactory, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIAHybridShapeFactory##classe(classe::MetaObject(),CATIAHybridShapeFactory::MetaObject(),(void *)CreateTIECATIAHybridShapeFactory##classe)


/* Macro to switch between BOA and TIE at build time */ 
#ifdef CATSYS_BOA_IS_TIE
#define BOA_CATIAHybridShapeFactory(classe) TIE_CATIAHybridShapeFactory(classe)
#else
#define BOA_CATIAHybridShapeFactory(classe) CATImplementBOA(CATIAHybridShapeFactory, classe)
#endif

#endif
