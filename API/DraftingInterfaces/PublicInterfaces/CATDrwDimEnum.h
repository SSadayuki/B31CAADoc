#ifndef CATDrwDimEnum_H
#define CATDrwDimEnum_H
// COPYRIGHT DASSAULT SYSTEMES 1999

/**
 * @CAA2Level L1
 * @CAA2Usage U1
 */

#include "DraftingItfCPP.h"

 
/**
 * @nodoc
 * Dimension value status.
 *   @param DrwDimImpossible
 *    The value is impossible to compute.
 *   @param DrwDimFalse
 *    the value is different to the 3D specification (projected mode).
 *   @param DrwDimTrue
 *    The value is equal to the 3D specification.
 */
enum CATDrwDimStatus {
    DrwDimImpossible, 
    DrwDimFalse, 
    DrwDimTrue
};

/**
 * @nodoc
 * Dimension associativity type.
 *   @param GenStrong
 *    Automatic generated dimension from 3D.
 *   @param SketchStrong 
 *    Interactive dimension on 2D sketcher geometry.
 *   @param IntStrong 
 *    Not used.
 *   @param IntWeak 
 *    Interactive dimension on generated geometry - associative on 3D.
 *   @param GenItemWeak 
 *    Interactive dimension on generated geometry - associative on 2D.
 *   @param DimStrengthError
 *    Error.
 *   @param FeatStrong
 *    Interactive dimension from 3D on Applicative Feature.
 *   @param Furtive2DGeomWeak 
 *    Interactive dimension on furtive geometry in a 2D context - associativity at creation
 *    (isolated dimension - dimension copied from V4)
 *   @param Furtive3DGeomWeak
 *    Interactive dimension on furtive geometry in a 3D context - associativity at creation
 *    (dimension in HRV view - before view update)
 *   @param Furtive3DGeomKO
 *    Interactive dimension on furtive geometry in a 3D context - associativity lost
 *    (dimension in HRV view - after view update)
 */
enum CATDrwDimStrength {
    GenStrong, 
    SketchStrong, 
    IntStrong, 
    IntWeak, 
    GenItemWeak, 
    DimStrengthError,
    FeatStrong,
    Furtive2DGeomWeak,
    Furtive3DGeomWeak,
    Furtive3DGeomKO
};

/**
 * Generative dimension positionning mode.
 *   @param DrwDimFree  
 *    Free.
 *   @param DrwDimForced 
 *    Forced by cut/copy and paste on another view.
 */
enum CATDrwDimViewMode {
    DrwDimFree, 
    DrwDimForced
};

/**
 * Dimension type.
 *   @param DrwDimDistance
 *    Distance.
 *   @param DrwDimDistanceOffset
 *    Distance offset.
 *   @param DrwDimLength
 *    Length.
 *   @param DrwDimLengthCurvilinear
 *    Curvilinear length.
 *   @param DrwDimAngle
 *    Angle.
 *   @param DrwDimRadius
 *    Radius.
 *   @param DrwDimRadiusTangent
 *    Tangent radius.
 *   @param DrwDimRadiusCylinder
 *    Cylinder radius.
 *   @param DrwDimRadiusEdge
 *    Edge radius.
 *   @param DrwDimDiameter
 *    Diameter.
 *   @param DrwDimDiameterTangent
 *    Tangent diameter.
 *   @param DrwDimDiameterCylinder
 *    Cylinder diameter.
 *   @param DrwDimDiameterEdge
 *    Edge diameter.
 *   @param DrwDimDiameterCone
 *    Cone diameter.
 *   @param DrwDimChamfer
 *    Chamfer.
 *   @param DrwDimSlope
 *    Slope.
 *   @param DrwDimAngleArc
 *    Angle arc.
 *   @param DrwDimLengthCircular
 *    Circular length.
 *   @param DrwDimFillet
 *    Fillet.
 *   @param DrwDimRadiusTorus
 *    Torus radius.
 *   @param DrwDimDiamaterTorus
 *    Torus diameter.
 *   @param DrwDimDistanceMin
 *    Distance minimum.
 *   @param DrwDimGDT
 *    GDT (not used).
 *   @param DrwDimDatumFeature
 *    Datum feature (not used).
 *   @param DrwDimDatumTarget
 *    Datum target (not used).
 *   @param DrwDimBalloon
 *    Balloon (not used).
 *   @param DrwDimNONE
 *    None.
 */
enum CATDrwDimType
{
	DrwDimDistance,
	DrwDimDistanceOffset,
	DrwDimLength,
	DrwDimLengthCurvilinear,
	DrwDimAngle,
	DrwDimRadius,
	DrwDimRadiusTangent,
	DrwDimRadiusCylinder,
	DrwDimRadiusEdge,
	DrwDimDiameter,
	DrwDimDiameterTangent,
	DrwDimDiameterCylinder,
	DrwDimDiameterEdge,
	DrwDimDiameterCone,
	DrwDimChamfer,
	DrwDimSlope,
	DrwDimGDT,
	DrwDimDatumFeature,
	DrwDimDatumTarget,
	DrwDimBalloon,
	DrwDimNONE,
  DrwDimAngleArc,
  DrwDimLengthCircular,
  DrwDimFillet,
  DrwDimRadiusTorus,
  DrwDimDiameterTorus,
  DrwDimDistanceMin
};
 
/**
 * Dimension basic representation mode.
 *   @param DrwDimUndef
 *    Undefined.
 *   @param DrwDimHoriz
 *    Horizontal.
 *   @param DrwDimVert
 *    Vertical.
 *   @param DrwDimAuto
 *    Automatic.
 *   @param DrwDimUserDefined
 *    User defined.
 *   @param DrwDimTrueDim
 *    True dimension.
 *   @param DrwDimParallel
 *    Parallel (for curvilinear dimensions only).
 *   @param DrwDimOffset
 *    Offset (for curvilinear dimensions only).
 */
enum CATDrwDimRepresentation
{
	DrwDimUndef       = 0,
	DrwDimHoriz       = 1,
	DrwDimVert        = 2,
	DrwDimAuto        = 3,
	DrwDimUserDefined = 4,
	DrwDimTrueDim     = 5,
  DrwDimParallel    = 6,
	DrwDimOffset      = 7
};
 
/**
 * Dimension representation mode.
 *   @param DrwDimClassical
 *    Simple dimension.
 *   @param DrwDimCumulate
 *    Cumulate dimension.
 *   @param DrwDimHalfDim
 *    Half dimension.
 *   @param DrwDimChained
 *    Chained dimension.
 *   @param DrwDimStacked
 *    Stacked dimension.
 *   @param DrwDimCumulateSystem
 *    Cumulate dimension system.
 *   @param DrwDimHalfDimSystem
 *    Half dimension system.
 */
enum CATDrwDimMode
{
	DrwDimClassical,
	DrwDimCumulate,
	DrwDimHalfDim,
	DrwDimChained,
	DrwDimStacked,
	DrwDimCumulateSystem,
	DrwDimHalfDimSystem
};

/**
 * Dimension value orientation mode.
 *   @param ParallelDim
 *    Parallel to the dimension line.
 *   @param NormalDim
 *    Normal to the dimension line.
 *   @param AngleDim
 *    Oriented with a given angle to the dimension line.
 *	 @param ParallelView
 *    Parallel to the view.
 *   @param NormalView
 *    Normal to the view.
 *   @param AngleView
 *    Oriented with a given angle to the view.
 *   @param ParallelScreen
 *    Parallel to the screen.
 *   @param NormalScreen
 *    Normal to the screen.
 *   @param AngleScreen
 *    Oriented with a given angle to the screen.
 */
enum CATDrwDimDimValueOrientationMode
{
    ParallelDim, 
    NormalDim, 
    AngleDim,
	  ParallelView, 
    NormalView, 
    AngleView,
	  ParallelScreen, 
    NormalScreen, 
    AngleScreen
};

/**
 * Dimension angle sector.
 *   @param UndefinedSector
 *    Undefined.
 *   @param BasicSector
 *    Basic.
 *   @param ComplementarySector
 *    Complementary.
 *   @param SecondarySector
 *    Secondary.
 *   @param BlendedSector
 *    Blended.
 *   @param BasicSectorOpp
 *    Opposite to basic.
 *   @param ComplementarySectorOpp
 *    Opposite to complementary.
 *   @param SecondarySectorOpp
 *    Opposite to secondary.
 *   @param BlendedSectorOpp
 *    Opposite to blended.
 */
enum CATDrwDimAngleSector
{ 
    UndefinedSector = -1,
    BasicSector = 0, 
    ComplementarySector = 4, 
    SecondarySector = 1, 
    BlendedSector = 5,

    BasicSectorOpp = 2, 
    ComplementarySectorOpp = 6, 
    SecondarySectorOpp = 3, 
    BlendedSectorOpp = 7
};

/**
 * @nodoc
 * Dimension value tolerance type.
 *   @param DrwDimNumTol
 *    Numerical.
 *   @param DrwDimAlphaNumTol
 *    AlphaNumerical.
 */
enum CATToleranceType {
    DrwDimNumTol, 
    DrwDimAlphaNumTol
};

/**
 * @nodoc
 * Dimension value format type.
 *   @param DrwDimFractionnalFormat
 *    Fractionnal.
 *   @param DrwDimDecimalFormat
 *    Decimal.
 */
enum CATFormatType {
    DrwDimFractionnalFormat, 
    DrwDimDecimalFormat
};

/**
 * @nodoc
 * Dimension frame shape type.
 *   @param DrwDimRectangular
 *    Rectangular.
 *   @param DrwDimCircular
 *    Circular.
 *   @param DrwDimArrow
 *    Arrow.
 *   @param DrwDimOblong
 *    Oblong.
 */
enum CATDimFrameType {
    DrwDimRectangular, 
    DrwDimCircular, 
    DrwDimArrow, 
    DrwDimOblong
};

/**
 * Dimension positionning associativity mode.
 *   @param NoAssociativity
 *    No associativity.
 *   @param OnFirstSelElem
 *    Associative on the first extension line.
 *   @param OnSecondSelElem
 *    Associative on the second extension line.
 *   @param OnGlobalElem
 *    Associative on both extension lines.
 */
enum CATDimPositioningMode { 
    NoAssociativity, 
    OnFirstSelElem, 
    OnSecondSelElem, 
    OnGlobalElem 
};

/**
 * Dimension positionning domain.
 *   @param Inside
 *    Inside the geometry.
 *   @param Outside
 *    Outside the geometry.
 *   @param Undef
 *    Undefined.
 */
enum CATDimPositioningDomain { 
    Inside, 
    Outside, 
    Undef
};

/**
 * @nodoc
 * Dimension build context.
 *   @param boUnknown
 *    Unknown.
 *   @param boCreation
 *    Creation.
 *   @param boUpdate
 *    Update.
 *   @param boMove
 *    Move.
 *   @param boPaste
 *    Paste (CCP).
 *   @param boProperties
 *    Properties modification.
 *   @param boGenDim
 *    Generated dimension.
 *   @param boManipulate
 *    Perfo manipulate.
 *   @param boForce
 *    Force build.
 */
enum CATDrwDimBuildOrigin{
   boUnknown=0,
   boCreation=5,
   boUpdate=10, 
   boMove=15,
   boPaste=17,
   boProperties=20,
   boVisu=22,
   boGenDim=25,
   boManipulate=30,
   boForce=40
};

/**
 * Dimension analysis type.
 *   @param datDimOnGenItems
 *    At least one parent is a GenItem.
 *   @param datUnUpdatableDim
 *    Parents or constraint is no more available.
 *   @param datFakeDim
 *    Fake dimension.
 *   @param datDrivingDim
 *    Dimension which is driving some geometry.
 *   @param datBrokenDim
 *    Broken dimension which has been created from a V4 dimension.
 *   @param datTrueDim
 *    Dimension whose value is the true one.
 *   @param dat3DDrivableDim
 *    Dimension which can drive the 3D
 *   @param dat3DDrivedDim
 *    Dimension which has drived the 3D
 *   @param datIsolatedDim
 *    Isolated dimension (doens't point any geometry)
 *   @param datDimOnHideGeom
 *    Dimension which its GenItems are not present or are not visible.
 *   @param dat3DFeatureDim
 *    Dimension which measures a 3D feature
 */
enum CATDrwDimAnalysisType
{
	datDimOnGenItems = 0,
	datUnUpdatableDim = 1,
	datFakeDim = 2,
	datDrivingDim = 3,
	datBrokenDim = 4,
	datTrueDim = 5,
  datBasic = 6,
  dat3DDrivableDim = 7,
  dat3DDrivedDim = 8,
  datIsolatedDim = 9,
  datDimOnHideGeom = 10,
  dat3DFeatureDim = 11

};


/**
 * Chamfer dimension representation type.
 *   @param DistanceRep
 *    The chamfer dimension is displayed like a distance dimension.
 *   @param RadiusRep
 *    The chamfer dimension is displayed like a radius dimension.
 */
enum CATDrwDimChfRepType{
   ChfDistanceRep=3,
   ChfRadiusRep=2
};

/**
 * Chamfer dimension representation type.
 *   @param DistDist
 *    The value is displayed with two distance : dist X dist.
 *   @param DistAngle
 *    The value is displayed with a distance and an angle: dist X angle.
 *   @param AngleDist
 *    The value is displayed with a distance and an angle: angle X dist.
 *   @param Distance
 *    The value is displayed with one distance : dist. 
 *    This mode is used only when the two references are perpendicular 
 *    and the chamfer is 45 degrees.
 */
enum CATDrwDimChfValFormat{
   ChfDistDist=2,
   ChfDistAngle=3,
   ChfAngleDist=4,
   ChfDistance=1
};

/**
 * @nodoc
 * Dimension value access(for Chamfer format access).
 */
enum CATDftValueAccess{
    DftDimFirstFormat = 1, 
    DftDimSecondaryFormat = 2
};

/**
 * Dimension creation mode on circles.
 *   @param ifEdge
 *    Position dimension's extremity on circle.
 *   @param ifCenter
 *    Position dimension's extremity on circle's center.
 *   @param ifUndefined
 *    Undefined.
 */
enum CATAnnInfo {  
			ifEdge,
			ifCenter,
			ifUndefined };

#endif
