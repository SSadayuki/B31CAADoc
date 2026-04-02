#ifndef CATPrtEnum_H
#define CATPrtEnum_H
// COPYRIGHT DASSAULT SYSTEMES 1999

/**
 * @CAA2Level L1
 * @CAA2Usage U1
 */

/** @nodoc */
typedef enum CATPrtBooleanTypeEnum
{
  PrtUnion,
  PrtRemoval,
  PrtIntersection
} CATPrtBooleanType;

/** @nodoc */
typedef enum CATPrtLimitTypeEnum
{
  DIM,
  NEXT,
  LAST,
  SURF,
  SKIN
} CATPrtLimitType;

/** @nodoc */
typedef enum CATPrtExtTypeEnum
{
  PAD,
  POCKET,
  STIFFENER,
  RIB,
  SLOT,
  SHAFT,
  GROOVE
} CATPrtExtType;

/**
 * The propagation mode specifies the edges taken into account when filleting.
 * @param TANGENCY
 * CATIA continues filleting beyond the selected edge 
 * until it encounters an edge that is non continuous in tangency.
 * @param MINIMAL
 * the propagation is done up to the first natural relimitation  
 * by the geometry.
 * @param INTERSECT
 * Do not use.
 * @param FREEEDES
 * Do not use.
 * @param AGAINSTCURRENT
 * Do not use.
 * @param AGAINSTCORE
 * Do not use.
 * @param AGAINSTCAVITY
 * Do not use.
 * @param AGAINSTFEATURES
 * Do not use.
 * @param GENERATEDEDGES
 * Do not use.
 * @param C1GENERATEDEDGES
 * Do not use.
 */
typedef enum CATPrtFilletPropagation
{
  TANGENCY=0,
  MINIMAL,
  INTERSECT,
  FREEEDGES,
  AGAINSTCURRENT,
  AGAINSTCORE,
  AGAINSTCAVITY,
  AGAINSTFEATURES,
  GENERATEDEDGES,
  C1GENERATEDEDGES
} CATPrtFilletPropagation;

/**
 * Fillet variation mode.
 * <b>Precondition</b>: Only for edge fillets with a variable radius.
 * The variation mode specifies the way the fillet shape changes
 * from one radius to another.
 * @param CUBIC   
 * The fillet changes smoothly from one radius to another.
 * @param LINEAR   
 * The fillet changes straight from one radius to another.
 */
typedef enum CATPrtFilletVariation
{
  CUBIC,
  LINEAR
} CATPrtFilletVariation;

/**
 * The fillet type specifies the ways the fillet is defined.
 * @param CONSTANT   
 * The constant edge fillet is built with only one constant radius.
 * @param VARIABLE   
 * The variable edge fillet is defined by radius/vertex pairs.
 * @param CONST_BY_PIECES
 * Do not use.
 */
typedef enum CATPrtFilletType
{
  CONSTANT,
  VARIABLE,
  CONST_BY_PIECES
} CATPrtFilletType;

/** @nodoc */
typedef enum CATPrtKeepEdge
{
  RELIMIT,
  ROLLING,
  DEFAULT
} CATPrtKeepEdge;

/** @nodoc */
typedef enum CATPrtLimitNameEnum 
{
  END = 1, START
} CATPrtLimitName;

/**
 * The propagation mode specifies the edges taken into account when chamfering.
 * @param _TANGENCY
 * CATIA continues chamfering beyond the selected edge 
 * until it encounters an edge that is non continuous in tangency.
 * @param _MINIMAL
 * the propagation is done up to the first natural relimitation  
 * by the geometry.
 * @param _INTERSECTION
 * the propagation is done between the different generator features
 */
typedef enum CATPrtChamferPropagation
{
  _TANGENCY,
  _MINIMAL,
  _INTERSECTION
} CATPrtChamferPropagation;

/**
 * The chamfer parameter mode specifies both parameters required 
 * to define the chamfer.
 * @param LENGTH
 * The chamfer is defined with two lengthes (Length1/Length2).
 * @param LENGTH_ANGLE
 * The chamfer is defined with a length and an angle (Length1/Angle).
 * @param HEIGHT_ANGLE
 * The chamfer is defined with a height and an angle (Length1/Angle).
 * @param HOLDCURVE_ANGLE
 * The chamfer is defined with a hold curve and an angle (hold curve/Angle).
 * @param HOLDCURVE_LENGTH
 * The chamfer is defined with a hold curve and a length (hold curve/Length1).
 */
typedef enum CATPrtChamferMode
{
  LENGTH,
  LENGTH_ANGLE,
	CHORDAL_LENGTH_ANGLE,
  HEIGHT_ANGLE,
  HOLDCURVE_ANGLE,
  HOLDCURVE_LENGTH
} CATPrtChamferMode;

/**
 * Chamfer face used as reference to measure chamfer first or single length.
 * The first length or the single length, depending on the way the
 * chamfer is defined, is measured on the reference face from the
 * edge to be chamfered. 
 * This reference face is either the face selected or the face
 * determined by CATIA if the edge to be chamfered was selected.
 * The chamfer orientation defines whether to keep the face selected 
 * or determined by CATIA as the chamfer reference face.
 * @param NO_REVERSE
 * The chamfer reference face is the face selected or determined by CATIA.
 * @param REVERSE
 * The chamfer reference face is the other face.
 */
typedef enum CATPrtChamferReferenceFace
{
  NO_REVERSE,
  REVERSE
} CATPrtChamferReferenceFace;

/**
* Values to manage the extremities of the chamfer.
* @param SMOOTHEXT
*  The extremity is smoothly.
* @param STRAIGHTEXT
*  The extremity is straigthly.
* @param MAXIMUMEXT
*  The extremity is maximal.
* @param MINIMUMEXT
*  The extremity is minimalist.
*/
typedef enum CATPrtChamferExtremities
{
	SMOOTHEXT = 0,
	STRAIGHTEXT = 1,
	MAXIMUMEXT = 2,
	MINIMUMEXT = 3
} CATPrtChamferExtremities;

/**
 * Side to be kept for splitting or sewing operation.
 * @param PositiveSide
 *  It refers to the same orientation as the splitting or sewing surfacic 
 *  feature normal vector.
 * @param NegativeSide
 *  It refers to the opposite orientation as the splitting or sewing surfacic 
 *  feature normal vector.
 */
typedef enum CATPrtSplitType
{
  PositiveSide = 0,
  NegativeSide = 1
} CATPrtSplitType;

/** @nodoc */
typedef enum CATPrtSplitSewType
{
  PrtSplit = 0,
  PrtSewing = 1,
  PrtAlign = 2
} CATPrtSplitSewType;

/** @nodoc */
typedef enum CATPrtSewingIntersectMode
{
  NoIntersectSewing = 0,
  IntersectSewing = 1
} CATPrtSewingIntersectMode;

/** @nodoc */
typedef enum CATPrtSewingSimplificationMode
{
  NoSimplificationSewing = 0,
  SimplificationSewing = 1
} CATPrtSewingSimplificationMode;

/**
 * Tolerant modes defined in Sew feature.
 * @param CATPrtSewTolerantMode_Unknown
 *        Unknown tolerant mode.
 * @param CATPrtSewTolerantMode_None
 *        None tolerant mode. Error thrown if maximum deviation exceeds CATIA resolution.
 * @param CATPrtSewTolerantMode_Automatic
 *        Automatic tolerant mode. Error thrown if maximum deviation exceeds 100 times CATIA resolution.
 * @param CATPrtSewTolerantMode_Manual
 *        Manual tolerant mode. Error thrown if maximum deviation exceeds input user deviation.
 *
 */
typedef enum CATPrtSewTolerantMode {
    CATPrtSewTolerantMode_Unknown = 0,
	CATPrtSewTolerantMode_None = 1,
	CATPrtSewTolerantMode_Automatic = 2,
	CATPrtSewTolerantMode_Manual = 3
}CATPrtSewTolerantMode;

/**
 * Offset direction of the offset feature.
 * @param NormalSide
 *  The offset direction is the same as defined with 
 *  the surfacic feature normal vector.
 * @param InverseNormalSide
 *  The offset direction is the opposite as defined with the 
 *  the surfacic feature normal vector.
 */
typedef enum CATPrtOffsetSens
{
  NormalSide = 0,
  InverseNormalSide = 1
} CATPrtOffsetSens;

/** @nodoc */
typedef enum CATPrtHoleType
{
  Simple         = 0,
  Tapered        = 1,
  Counterbored   = 2,
  Countersunk    = 3,
  Counterdrilled = 4,
  Flat           = 0,
  VBottom        = 1,
  Trimmed		 = 2,
  Smooth         = 0,
  Threaded       = 1,
  ExtPt          = 0,
  MidPt          = 1 
} CATPrtHoleType;

/** @nodoc */
typedef enum CATPrtThreadSide
{
  Right_threaded  = 0,
  Left_threaded = 1
} CATPrtThreadSide;

/** @nodoc */
typedef enum CATPrtThreadDirection
{
	Normal_limit = 0,        
	Inverse_normal_limit=1
} CATPrtThreadDirection;

/** @nodoc */
typedef enum CATPrtDraftPropagation
{
  NONE,
  SMOOTH
} CATPrtDraftPropagation;

/** @nodoc */
typedef enum CATPrtDraftMode
{
  STANDARD=0,
  REFLECTLINEKEEPFACE=1,
  REFLECTLINEKEEPEDGE=2,
	NEUTRALSQUARE=3,
  DRAFTBOTHSIDES=4,
  DRAFTVARIABLE=5
} CATPrtDraftMode;

/** @nodoc */
typedef enum CATPrtDraftMultiselMode
{
  NOMULTISEL=0,
  BYNEUTRAL=1
} CATPrtDraftMultiselMode;

/** @nodoc */
typedef enum CATPrtBoundariesRelimitationMode
{
  AutomaticRelimitation=0,
  UVRelimitation=1,
  ConnectRelimitation=2,
  MaxRelimitation=3,
  MinRelimitation=4,
  FittedRelimitation=5
} CATPrtBoundariesRelimitationMode;

/** @nodoc */
typedef enum CATPrtTransitionalCornerMode
{
  TransitionNone=0,
  TransitionDefault=1,
  AutomaticFill=2,
  UserSelectionOrder=3
} CATPrtTransitionalCornerMode;

/**
* The trim support check button enables to obtain the surface ribbons sewed on the initial skin or not.
* @param TrimSupport
*  The trim mode is activated.
* @param NoTrimSupport
* The trim mode is not activated.
*/
typedef enum CATPrtTrimSupportMode
{
  TrimSupport=0,
  NoTrimSupport=1
} CATPrtTrimSupportMode;

/** @nodoc */
typedef enum CATPrtBitangencyType
{
  UseBitangentSphere=0,
  UseBitangentCircle=1
} CATPrtBitangencyType;

/** @nodoc */
typedef enum CATPrtTrimType
{
  NoTrim=0,
  Trim=1
} CATPrtTrimType;


/** @nodoc */
typedef enum CATPrtDraftVariation
{
  ConstantDraft=0,
  VariableDraft=1
} CATPrtDraftVariation;

/** @nodoc */
typedef enum CATPrtDraftForm
{
  CONE=0,
  SQUARE=1
} CATPrtDraftForm;

/** @nodoc */
typedef enum CATPrtDraftModeType
{
  NOMODETYPE=0,
  DRIVINGDRIVEN=1,
  INDEPENDANT=2,
  FITTED=3
} CATPrtDraftModeType;

/** @nodoc */
typedef enum CATPrtCliffEdgeMode
{
  ImplicitCliffEdge=0,
  ExplicitCliffEdge=1
} CATPrtCliffEdgeMode;

/** @nodoc */
typedef enum CATPrtInsertInAssembleFeatType
{
  OpenProfile=1,
  UpTo,
  Contextual,
  UpToBrep,
  PrtTransformationFeat,
  PrtBooleanFeat
}CATPrtInsertInAssembleFeatType;

/** @nodoc */
typedef enum CATPrtSolidCombineComponent
{
  FIRST=1,
  SECOND
}CATPrtSolidCombineComponent;

/** @nodoc */
typedef enum CATPrtSmoothing
{
  NoSmoothing=0,
  ManualSmoothing,
  AutoSmoothing
}CATPrtSmoothing;

/**
 * The propagation type specifies the way the splitting element is extrapolated.
 * @param CATPrtExtrapolation_None
 * The splitting element is not extrapolated.
 * @param CATPrtExtrapolation_Tangent
 * the propagation is done in a tangent way along the boundary of the splitting element.
 * @param CATPrtExtrapolation_Curvature
 * the propagation is done in a curvature way along the boundary of the splitting element.
 */
typedef enum CATPrtExtrapolationType
{
  CATPrtExtrapolation_None=0,
  CATPrtExtrapolation_Tangent,
  CATPrtExtrapolation_Curvature
}CATPrtExtrapolationType;

/**
 * Types for regularization option.
 * @param CATPrtRegularization_Undefined
 *        Regularization is undefined.
 * @param CATPrtRegularization_Local
 *        Regularization is local.
 * @param CATPrtRegularization_Global
 *        Regularization is global.
 */
enum CATPrtOffsetRegularisationType {CATPrtRegularization_Undefined = 0,
								CATPrtRegularization_Local = 1,
								CATPrtRegularization_Global = 2};

/**
* Types for simplification option in Boolean operations.
* @param SimplificationBoolean
*        Simplified mode.
* @param NoSimplificationBoolean
*        NoSimplified mode. 
*/

typedef enum CATPrtBooleanSimplificationMode
{
  SimplificationBoolean   = 0,
  NoSimplificationBoolean = 1
} CATPrtBooleanSimplificationMode;

/**
* Types for Assemble Result option in Volume Thickness.
* @param CATPrtNoAssembleResult
*        No Assembled Result mode.
* @param CATPrtAssembleResult
*        Assembled Result mode. (this is the default)
*/
typedef enum CATPrtAssembleResultMode
{
  CATPrtNoAssembleResult = 0,
  CATPrtAssembleResult   = 1
} CATPrtAssembleResultMode;

#endif // CATPrtEnum_H






