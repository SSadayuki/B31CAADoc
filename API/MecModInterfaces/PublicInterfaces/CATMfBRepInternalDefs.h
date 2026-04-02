#ifndef CATMfBRepInternalDefs_h
#define CATMfBRepInternalDefs_h


/**
 * @CAA2Level L1
 * @CAA2Usage U1
 */


// COPYRIGHT DASSAULT SYSTEMES 2002



#include "CATUnicodeString.h"
#include "MecModItfCPP.h"
#include "CATIAV5Level.h"
#include "CATDataType.h"

/**
 * BRep feature type.
 * <br><b>Role:</b> Gives more specific information on the type of a BRep feature. 
 * <b>values</b>:
 * <ul><li><tt>MfSimpleBRep</tt>,
 * <li><tt>MfSuperBRep</tt>,
 * <li><tt>MfSBWithoutSecoursInit</tt>,
 * <li><tt>MfSBWithAutomaticSecoursInits</tt>,
 * <li><tt>MfSBWithAutomaticSecondaryInits</tt>,
 * <li><tt>MfSBWithMonoBody</tt>,
 * <li><tt>MfSBWithMultiBody</tt>,
 * <li><tt>MfSBWithSecondaryInits</tt>,
 * <li><tt>MfSBWithoutSecondaryInit</tt>,
 * <li><tt>MfIntersectionBRep</tt>.</ul>
 * @href CATIMfBRep.
 */
typedef unsigned long CATMfSuperBRepType;

ExportedByMecModItfCPP extern const CATMfSuperBRepType MfSimpleBRep;
ExportedByMecModItfCPP extern const CATMfSuperBRepType MfSuperBRep;
ExportedByMecModItfCPP extern const CATMfSuperBRepType MfSBWithoutSecoursInit;
ExportedByMecModItfCPP extern const CATMfSuperBRepType MfSBWithAutomaticSecoursInits;
ExportedByMecModItfCPP extern const CATMfSuperBRepType MfSBWithAutomaticSecondaryInits;
ExportedByMecModItfCPP extern const CATMfSuperBRepType MfSBWithMonoBody;
ExportedByMecModItfCPP extern const CATMfSuperBRepType MfSBWithMultiBody;
ExportedByMecModItfCPP extern const CATMfSuperBRepType MfSBWithSecondaryInits;
ExportedByMecModItfCPP extern const CATMfSuperBRepType MfSBWithoutSecondaryInit;
ExportedByMecModItfCPP extern const CATMfSuperBRepType MfIntersectionBRep;

#ifndef CATMfSuperBRepSecoursInits 
/** @nodoc */
#define CATMfSuperBRepSecoursInits CATMfSuperBRepType
#endif
#ifndef MfWithoutSecoursInit
/** @nodoc */
#define MfWithoutSecoursInit MfSBWithoutSecoursInit
#endif
#ifndef MfWithAutomaticSecoursInits 
/** @nodoc */
#define MfWithAutomaticSecoursInits MfSBWithAutomaticSecoursInits
#endif
#ifndef MfWithAutomaticSecondaryInits 
/** @nodoc */
#define MfWithAutomaticSecondaryInits MfSBWithAutomaticSecondaryInits
#endif


/** @nodoc */
#define MfInitMode_R  MfInitMode_WithoutDeleg
/** @nodoc */
#define MfInitMode_RW MfInitMode_WithDeleg
/** @nodoc */
#define MfInitMode_Connector MfInitMode_SymbolicLink

/**
 * BRep feature access mode.
 * <br><b>Role:</b> Only default mode is available: MfInitMode_Default.
 * @href CATIMfGeometryAccess. 
 */
enum CATMfBRepSelectInitMode { MfInitMode_WithoutDeleg,
                               MfInitMode_WithDeleg,
                               MfInitMode_SymbolicLink,
                               MfInitMode_Default};

/**
 * @nodoc
 * Flags on BRep features.
 * @param MfBRepFlag_Functional
 * The feature is a functional BRep feature.
 * @param MfBRepFlag_Relimited
 * The feature is a relimited BRep feature.
 * @param MfBRepFlag_Border
 * The feature is a border BRep feature.
 * @param MfBRepFlag_Wire
 * The feature is a wire BRep feature.
 * @param MfBRepFlag_WithTemporaryBody
 * The BRep feature body is temporary.
 * @param MfBRepFlag_WithPermanentBody
 * The BRep feature body is permanent.
 * @param MfBRepFlag_WithoutBody
 * The BRep feature has no body.
 * @param MfBRepFlag_WithBuildError
 * An update error is created when the BRep feature building fails.
 * @param MfBRepFlag_WithoutBuildError
 * An update error is not created when the BRep feature building fails.
 * @param MfBRepFlag_InitialFeatureSupport
 * The BRep feature support is the initial feature.
 * @param MfBRepFlag_SelectingFeatureSupport
 * The BRep feature support is the selecting feature.
 * @param MfBRepFlag_LastFeatureSupport
 * The BRep feature support is the last feature.
 * @param MfBRepFlag_NoFeatureSupport
 * The BRep feature has no support.
 * @param MfBRepFlag_DefaultFeatureSupport 
 * The BRep feature support is managed by the system.
 * @param MfBRepFlag_SBWithoutSecoursInit 
 * The BRep feature has no initiation help.
 * @param MfBRepFlag_SBWithAutomaticSecoursInits;
 * The BRep feature has initiation help.
 * @param MfBRepFlag_SBWithMonoBody
 * The BRep feature has no body.
 * @param MfBRepFlag_SBWithMultiBody
 * The BRep feature has several bodies.
 * @param MfBRepFlag_SBWithSecondaryInits
 * The BRep feature has secondary initiation help.
 * @param MfBRepFlag_Intersection
 * The BRep feature is an intersection feature.
 * @param MfBRepFlag_GeometricRerouteAuthorized
 * No Doc, internal use only.
 * @param MfBRepFlag_Inversed
 * No Doc, internal use only.
 */
typedef unsigned long CATMfBRepFlags; 

ExportedByMecModItfCPP extern const CATMfBRepFlags MfBRepFlag_Functional;
ExportedByMecModItfCPP extern const CATMfBRepFlags MfBRepFlag_Relimited;
ExportedByMecModItfCPP extern const CATMfBRepFlags MfBRepFlag_Border;
ExportedByMecModItfCPP extern const CATMfBRepFlags MfBRepFlag_Wire;
ExportedByMecModItfCPP extern const CATMfBRepFlags MfBRepFlag_WithTemporaryBody;
ExportedByMecModItfCPP extern const CATMfBRepFlags MfBRepFlag_WithPermanentBody;
ExportedByMecModItfCPP extern const CATMfBRepFlags MfBRepFlag_WithoutBody;
ExportedByMecModItfCPP extern const CATMfBRepFlags MfBRepFlag_WithBuildError;
ExportedByMecModItfCPP extern const CATMfBRepFlags MfBRepFlag_WithoutBuildError;
ExportedByMecModItfCPP extern const CATMfBRepFlags MfBRepFlag_InitialFeatureSupport;
ExportedByMecModItfCPP extern const CATMfBRepFlags MfBRepFlag_SelectingFeatureSupport; 
ExportedByMecModItfCPP extern const CATMfBRepFlags MfBRepFlag_LastFeatureSupport;
ExportedByMecModItfCPP extern const CATMfBRepFlags MfBRepFlag_DynamicFeatureSupport; 
ExportedByMecModItfCPP extern const CATMfBRepFlags MfBRepFlag_NoFeatureSupport;
ExportedByMecModItfCPP extern const CATMfBRepFlags MfBRepFlag_DefaultFeatureSupport; 
ExportedByMecModItfCPP extern const CATMfBRepFlags MfBRepFlag_KoNoConnexResult;
ExportedByMecModItfCPP extern const CATMfBRepFlags MfBRepFlag_MonoFond;
ExportedByMecModItfCPP extern const CATMfBRepFlags MfBRepFlag_SBWithoutSecoursInit ;
ExportedByMecModItfCPP extern const CATMfBRepFlags MfBRepFlag_SBWithAutomaticSecoursInits;
ExportedByMecModItfCPP extern const CATMfBRepFlags MfBRepFlag_SBWithAutomaticSecondaryInits;
ExportedByMecModItfCPP extern const CATMfBRepFlags MfBRepFlag_SBWithMonoBody;
ExportedByMecModItfCPP extern const CATMfBRepFlags MfBRepFlag_SBWithMultiBody;
ExportedByMecModItfCPP extern const CATMfBRepFlags MfBRepFlag_SBWithSecondaryInits;
ExportedByMecModItfCPP extern const CATMfBRepFlags MfBRepFlag_Intersection;
ExportedByMecModItfCPP extern const CATMfBRepFlags MfBRepFlag_GeometricRerouteAuthorized;
ExportedByMecModItfCPP extern const CATMfBRepFlags MfBRepFlag_Inversed;


/**
 * @nodoc
 * Internal use only. 
 */
enum  CATMfBRepFondType { MfBRepMonoFond, MfBRepMultiFonds };


/**
 * @nodoc
 * Internal use only. 
 */
enum  CATMfBRepConnexityResultMode { MfBRepKoNoConnexResult , MfBRepOkNoConnexResult };

/**
 * @nodoc
 * Internal use only. 
 */
enum  CATMfBRepResolutionType { MfWithDynamicResolution , MfDefaultResolution };


/**
 * @nodoc
 * Internal use only. 
 */
enum  CATMfBRepRerouteMode { MfBRepGeometricRerouteAuthorized, MfBRepGeometricRerouteNotAuthorized };

/**
 * @nodoc
 * Internal use only. 
 */
enum  CATMfBRepInverseMode { MfBRepInversed, MfBRepNotInversed };



/**
 * @nodoc
 * Internal use only. Super BRep feature.
 */
enum CATMfResolution { MfStandardResolution,
                       MfSingleBRepResolution,
                       MfSuperBRepResolution,
                       MfSuperBRepWithoutSecoursResolution,
                       MfSuperBRepWithoutMultiInitsResolution };
/**
 * @nodoc
 * Internal use only. Super BRep feature.
 */
enum CATMfInitsType { MfCompactInits, MfBRepInits };

/**
 * @nodoc
 * Internal use only. Super BRep feature.
 */
enum CATMfSelectorInfo { MfUnknownSelector, MfSelectorFirstCells, MfSelectorPropagateCells };

/**
 * @nodoc
 * Internal use only.
 */
typedef double CATMfBRepVersion;   

ExportedByMecModItfCPP extern const CATMfBRepVersion MFBRepVersion_CXR2;
ExportedByMecModItfCPP extern const CATMfBRepVersion MFBRepVersion_CXR3;
ExportedByMecModItfCPP extern const CATMfBRepVersion MFBRepVersion_CXR3_SP2;
ExportedByMecModItfCPP extern const CATMfBRepVersion MFBRepVersion_CXR9;
ExportedByMecModItfCPP extern const CATMfBRepVersion MFBRepVersion_CXR11;
ExportedByMecModItfCPP extern const CATMfBRepVersion MFBRepVersion_CXR13;
ExportedByMecModItfCPP extern const CATMfBRepVersion MFBRepVersion_CXR13_GA;
ExportedByMecModItfCPP extern const CATMfBRepVersion MFBRepVersion_CXR14;
ExportedByMecModItfCPP extern const CATMfBRepVersion MFBRepVersion_CXR15;
#if defined(CATIAV5R29) || defined(CATIAR421)
ExportedByMecModItfCPP extern const CATMfBRepVersion MFBRepVersion_CXR29;
#endif
ExportedByMecModItfCPP extern const CATMfBRepVersion MFBRepVersion_CURRENT;
ExportedByMecModItfCPP extern const CATMfBRepVersion MFBRepVersion_UNKNOWN;

/**
 * @nodoc
 * Internal use only.
 */
typedef double CATBRepAccessVersion;   

ExportedByMecModItfCPP extern const CATBRepAccessVersion BRepAccessVersion_CXR15;
ExportedByMecModItfCPP extern const CATBRepAccessVersion BRepAccessVersion_CURRENT;
ExportedByMecModItfCPP extern const CATBRepAccessVersion BRepAccessVersion_UNKNOWN;

/**
* @nodoc
* Internal use only.
*/
enum CATMfModifyMode { MfNoneOption, MfToolUnAutorize, MfNoSupportReplace, MfNoError};
/**
* @nodoc
* Internal use only.
*/
enum CATMfDimensionGeometryMode { MfDDGeometry, Mf3DGeometry, Mf2DGeometry};

/**
* @nodoc
* Internal use only.
*/
enum CATBRepAccessHTtype { MfHTVisu, MfHTSL, MfHT2, MfHTAll };


/**
* @nodoc
* Internal use only.
*/
typedef unsigned long CATMfSearchFathersOrSons; 

ExportedByMecModItfCPP extern const CATMfSearchFathersOrSons MfFathersOrSons_All;
ExportedByMecModItfCPP extern const CATMfSearchFathersOrSons MfFathersOrSons_InitialOnly;
ExportedByMecModItfCPP extern const CATMfSearchFathersOrSons MfFathersOrSons_AllInitial;
ExportedByMecModItfCPP extern const CATMfSearchFathersOrSons MfFathersOrSons_VisibleOnly;
ExportedByMecModItfCPP extern const CATMfSearchFathersOrSons MfFathersOrSons_CrossingBridge;
ExportedByMecModItfCPP extern const CATMfSearchFathersOrSons MfFathersOrSons_StopAtSimplif;
ExportedByMecModItfCPP extern const CATMfSearchFathersOrSons MfFathersOrSons_SameConnexity;

/**
* @nodoc
* Internal use only.
*/
enum CATMfCompletedMode { MfCompletedAll, MfCompletedOnlyVisu, MfCompletedForDelete, MfCompletedOnly};

/**
* @nodoc
* Internal use only.
*/
enum CATMfMasterType { CATMfMasterType_All, CATMfMasterType_VisibleOnly };

/**
* @nodoc
* Internal use only.
*/
enum CATMfGNNavigMode {CATMfGNNavigMode_Default,CATMfGNNavigMode_AllNodes,CATMfGNNavigMode_OnlyOneNode};


/**
* @nodoc
* Internal use only.
*/
ExportedByMecModItfCPP extern const CATUnicodeString Mf_Label_BRepUnresolve;

/**
* @nodoc
* Internal use only.
*/
ExportedByMecModItfCPP enum CATMfConfigStatus {MfConfigStatus_Invalid,
                                               MfConfigStatus_NotDefined,
                                               MfConfigStatus_NotAuthorized,
                                               MfConfigStatus_NotValuated,
                                               MfConfigStatus_Open,
                                               MfConfigStatus_Empty,
                                               MfConfigStatus_Valuated};
/**
* @nodoc
* Internal use only.
*/
enum CATMfTypeGeom  {MfTypeGeom_unknown,
                     MfTypeGeom_Plane,
                     MfTypeGeom_Surface,
                     MfTypeGeom_Line,
                     MfTypeGeom_Circle,
                     MfTypeGeom_Curve,
                     MfTypeGeom_Point};
#endif 



