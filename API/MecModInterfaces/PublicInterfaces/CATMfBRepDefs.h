#ifndef CATMfBRepDefs_h
#define CATMfBRepDefs_h

// COPYRIGHT DASSAULT SYSTEMES 1999
/**
 * @CAA2Level L1
 * @CAA2Usage U1
 */

#include "CATIAV5Level.h"
#include "CATUnicodeString.h"
#include "MecModItfCPP.h"

/** 
 * Symbolic creation of functional surface BRep feature.
 * @param MfKeyNone
 * Empty key word.
 * @param MfKeyTop
 * Top face of a pad, a pocket, a rib, a slot, a stiffener according to the extrusion direction.
 * @param MfKeyBottom
 * Bottom face of a pad, a pocket, a rib, a slot, a stiffener according to the extrusion direction.
 * @param MfKeyExtrudedFrom
 * Side face of a pad, a pocket, a stiffener built from a sketch element.
 * Side face of a rib, a slot, built from two sketches elements each in a different sketch.
 * @param MfKeyStart
 * Start face of a revolute feature: a shaft, a groove.
 * @param MfKeyEnd
 * End face of a revolute feature: a shaft, a groove.
 * @param MfKeyOutsideThickness
 * Outside face of a shell feature.
 * @param MfKeyInsideThickness
 * Inside face of a shell feature.
 */
ExportedByMecModItfCPP extern const CATUnicodeString MfKeyNone;
ExportedByMecModItfCPP extern const CATUnicodeString MfKeyTop; 
ExportedByMecModItfCPP extern const CATUnicodeString MfKeyBottom;
ExportedByMecModItfCPP extern const CATUnicodeString MfKeyExtrudedFrom;
ExportedByMecModItfCPP extern const CATUnicodeString MfKeyStart;
ExportedByMecModItfCPP extern const CATUnicodeString MfKeyEnd;
ExportedByMecModItfCPP extern const CATUnicodeString MfKeyOutsideThickness;
ExportedByMecModItfCPP extern const CATUnicodeString MfKeyInsideThickness;
ExportedByMecModItfCPP extern const CATUnicodeString MfKeySide;
ExportedByMecModItfCPP extern const CATUnicodeString MfKeyCSSide;
ExportedByMecModItfCPP extern const CATUnicodeString MfKeyCDSide;
ExportedByMecModItfCPP extern const CATUnicodeString MfKeyCBSide;
ExportedByMecModItfCPP extern const CATUnicodeString MfKeyCBBottom;
ExportedByMecModItfCPP extern const CATUnicodeString MfKeyCDBottom;
ExportedByMecModItfCPP extern const CATUnicodeString MfKeyAbove;
ExportedByMecModItfCPP extern const CATUnicodeString MfKeyBelow;
ExportedByMecModItfCPP extern const CATUnicodeString MfKeyFront;
ExportedByMecModItfCPP extern const CATUnicodeString MfKeyRear;
ExportedByMecModItfCPP extern const CATUnicodeString MfKeyLeft;
ExportedByMecModItfCPP extern const CATUnicodeString MfKeyRight;

ExportedByMecModItfCPP extern const CATUnicodeString MfKeySeparator;
ExportedByMecModItfCPP extern const CATUnicodeString MfKeyGeometry;
ExportedByMecModItfCPP extern const CATUnicodeString MfKeyTopGeometry; 
ExportedByMecModItfCPP extern const CATUnicodeString MfKeyBottomGeometry; 

/** 
 * Decode management of an edge.
 * @param MfAll
 * The two adjacent faces of the edge are returned.
 * @param MfLeft
 * Only the left adjacent face of the edge is returned.
 * @param MfRight
 * Only the right adjacent face of the edge is returned.
 */
enum CATMfBRepSupport { MfAll, MfLeft, MfRight };
/** 
 * Decode management when the selected cell is shared by several topological domains.
 * @param MfDecodeAll
 * Returns the highest dimension topological domain.
 * @param MfDecodeWire
 * Returns the wire topological domain.
 * @param MfDecodeShell
 * Returns the shell topological domain.
 * @param MfDecodeLump
 * Returns the lump topological domain.
 */
enum CATMfBRepDecodeType { MfDecodeAll, 
                           MfDecodeWire, 
                           MfDecodeShell, 
                           MfDecodeLump };
/** 
 * Selection management.
 * @param MfForceSelect
 * If the selected edge or vertex is smooth (not sharp), 
 * the adjacent face is selected instead of the edge or vertex.
 * @param MfSimpleSelect
 * The selected object is returned, even if it is smooth.
 * @param MfForceSelectOnThisFeature
 * The selected object is returned on this feature with MfForceSelect mode.
 * @param MfForceSelectOnThisFeature
 */
enum CATMfBRepSelectType { MfForceSelect, 
                           MfSimpleSelect,
                           MfForceSelectOnThisFeature,
                           MfSimpleSelectOnThisFeature};
/** 
 * Types for selecting objects and BRep features.
 * @param MfFunctional
 * Refers to the initial shape.
 * Useful when the application does not take into account relimitations.
 * @param MfRelimited
 * Takes into account relimitations.
 * @param MfBorder
 * Either an edge with only one adjacent face, or a vertex with no adjacent face and only one adjacent edge.
 * @param MfWire
 * Either an edge with no adjacent face, or vertex with no adjacent face and at least two adjacent edges.
 * @param MfInvalidBRepType
 * Returned value for error cases.
 * @param MfDefaultBRepType
 * BRep type is managed by the system.
 */
enum CATMfBRepType { MfFunctional,
                     MfRelimited , 
                     MfBorder, 
                     MfWire, 
                     MfInvalidBRepType,
                     MfDefaultBRepType};
/**
 * Types for selecting objects.
 * @param MfRSur
 * The selecting object is associated with a face.
 * @param MfREdge
 * The selecting object is associated with an edge with two adjacent faces.
 * @param MfFVertex
 * The selecting object is associated with a vertex with at least one adjacent face.
 * @param MfBorderREdge
 * The selecting object is associated with an edge with only one adjacent face.
 * @param MfBorderFVertex
 * The selecting object is associated with a vertex with no adjacent face and only one adjacent edge.
 * @param MfWireREdge
 * The selecting object is associated with an edge with no adjacent face.
 * @param MfWireFVertex
 * The selecting object is associated with a vertex with at least two adjacent edges.
 * @param MfAxis
 * The selecting object is associated with an axis of a face.
 * @param MfExtremity
 * The selecting object is associated with the extremity of a face.
 * @param MfPlanarSubElement
 * The selecting object is associated with a planar face.
 * @param MfVolume
 * The selecting object is associated with a volume.
 * @param MfDomain
 * The selecting object is associated with a domain. 
 * @param MfUnknownElementType
 * Returned value for error cases. 
 * @param MfDefaultElementType
 * Returned default value. 
 */
enum CATMfBRepAccessElementType { MfRSur ,
                                  MfREdge,
                                  MfFVertex,
                                  MfBorderREdge,
                                  MfBorderFVertex,
                                  MfWireREdge,
                                  MfWireFVertex,
                                  MfAxis,
                                  MfExtremity,
                                  MfPlanarSubElement,
                                  MfVolume,
#if defined(CATIAV5R25) || defined(CATIAR417)
                                  MfDomain,                                  
#endif
                                  MfUnknownElementType,
                                  MfDefaultElementType };
/** 
 * Types for nodes of the generic naming graph.
 * @param MfModification
 * The object associated with the node is a modification of the object associated with the parent node.
 * @param MfGeneration
 * The object associated with the node is generated from the object associated with the parent node.
 * @param MfCovering
 * The object associated with the node covers the object associated with the parent node.
 * @param MfInvalidReportType
 * Returned value for error cases.
 */
enum CATMfNodeReportType { MfModification, MfGeneration, MfCovering, MfInvalidReportType };
/**
 * Body management of BRep features.
 * @param MfWithTemporaryBody
 * The BRep feature is built with a temporary body.
 * @param MfWithPermanentBody
 * The BRep feature is built with a permanent body.
 * @param MfWithoutBody
 * No body is built for the BRep feature.
 */
enum  CATMfBRepBuildType { MfWithTemporaryBody, MfWithPermanentBody, MfWithoutBody };

/**
 * Error management of BRep features.
 * @param MfWithError
 * An update error is created when the BRep feature building fails.
 * @param MfWithoutError
 * An update error is not created when the BRep feature building fails.
 */
enum  CATMfBRepBuildError { MfWithError, MfWithoutError };
/**
 * Support management of BRep features.
 * @param MfWithInitialFeatureSupport
 * The BRep feature support is the initial feature.
 * @param MfWithLastFeatureSupport
 * The BRep feature support is the last feature.
 * @param MfWithSelectingFeatureSupport
 * The BRep feature support is the selecting feature.
 * @param MfWithDefaultFeatureSupport
 * The BRep feature support is managed by the system.
 * @param MfWithoutFeatureSupport
 * The BRep feature support has no support.
 */
enum  CATMfBRepSupportType { MfWithInitialFeatureSupport ,
                             MfWithLastFeatureSupport,
                             MfWithSelectingFeatureSupport,
                             MfWithDefaultFeatureSupport,
                             MfWithoutFeatureSupport };
/**
 * Connectivity types.
 * @param MfNoConnex
 * The geometry associated with the BRep feature is not connected.
 * @param MfConnex
 * The geometry associated with the BRep feature is connected.
 * @param MfUnknownConnexity
 * Returned value for error cases.
 */
enum CATMfConnexityType { MfNoConnex, MfConnex, MfUnknownConnexity };
/**
 * Sharpness types.
 * @param MfNoSharp
 * The edge is not sharp.
 * @param MfSharp
 * The edge is sharp.
 * @param MfUnknownSharpness
 * Returned value for error cases.
 */ 
enum CATMfSharpnessType { MfNoSharp, MfSharp, MfUnknownSharpness };
/**
 * Modes of BRep feature creation.
 * @param MfNoDuplicateFeature
 * Do not duplicate the BRep feature.
 * @param MfDuplicateFeature
 * Duplicate the BRep feature.
 * @param MfTemporaryBody 
 * The BRep feature body is temporary.
 * @param MfPermanentBody
 * The BRep feature body is permanent.
 * @param MfInitialFeatureSupport
 * The BRep feature support is the initial feature.
 * @param MfSelectingFeatureSupport 
 * The BRep feature support is the selecting feature.
 * @param MfLastFeatureSupport
 * The BRep feature support is the last feature.
 * @param MfNoFeatureSupport
 * The BRep feature has no support.
 * @param MfFeaturizeIntersection
 * The BRep feature is defined as intersection between two lists of features.
 * @param MfFeaturizeC1Intersection
 * The BRep feature is defined as intersection between two lists of features, which is continuous in tangency.
 * @param MfFeaturizeSubElement
 * The BRep feature is defined with only selected sub-element.
 * @param MfFeaturizeFunctionalC1Intersection
 * The BRep feature is defined as intersection between two lists of features, continuous in tangency only for definition.
 * @param MfFeaturizeInitial
 * The BRep feature is defined as intersection of two faces from initial features
 * without taking into account downstream relimitations.
 * @param MfDefaultFeatureSupport
 * The BRep feature support is managed by the system.
 * @param MfWithBuildError
 * An update error is created when the BRep feature building fails.
 * @param MfWithoutBuildError
 * An update error is not created when the BRep feature building fails.
 * @param MfMonoFond
 * The different cells of the body of the BRep feature must share the same geometry.
 * @param MfNoFeaturization
 * The dialog command does not ask for BRep feature creation.
 * @param MfFunctionalFeaturization
 * The dialog command asks for a functional BRep feature creation.
 * @param MfRelimitedFeaturization
 * The dialog command asks for a relimited BRep feature creation.
 * @param MfBorderFeaturization
 * The dialog command asks for a border BRep feature creation.
 * @param MfWireFeaturization
 * The dialog command asks for a wire BRep feature creation.
 * @param MfGeometricRerouteAuthorized
 * The BRep feature can be rerouted geometrically.
 * @param MfInversed
 * The orientation of the BRep feature will be inversed in regard to its reference.
 * @see CATIFeaturize
 */
typedef unsigned long CATMfFeaturizeMode;

ExportedByMecModItfCPP extern const CATMfFeaturizeMode MfNoDuplicateFeature; 
ExportedByMecModItfCPP extern const CATMfFeaturizeMode MfDuplicateFeature; 

ExportedByMecModItfCPP extern const CATMfFeaturizeMode MfTemporaryBody; 
ExportedByMecModItfCPP extern const CATMfFeaturizeMode MfPermanentBody; 

ExportedByMecModItfCPP extern const CATMfFeaturizeMode MfInitialFeatureSupport; 
ExportedByMecModItfCPP extern const CATMfFeaturizeMode MfSelectingFeatureSupport; 
ExportedByMecModItfCPP extern const CATMfFeaturizeMode MfLastFeatureSupport; 
ExportedByMecModItfCPP extern const CATMfFeaturizeMode MfNoFeatureSupport; 
ExportedByMecModItfCPP extern const CATMfFeaturizeMode MfDefaultFeatureSupport;
ExportedByMecModItfCPP extern const CATMfFeaturizeMode MfDynamicFeatureSupport;
ExportedByMecModItfCPP extern const CATMfFeaturizeMode MfInSameToolFeatureSupport;
ExportedByMecModItfCPP extern const CATMfFeaturizeMode MfFeaturizeIntersection;
ExportedByMecModItfCPP extern const CATMfFeaturizeMode MfFeaturizeC1Intersection;
ExportedByMecModItfCPP extern const CATMfFeaturizeMode MfFeaturizeSubElement;
ExportedByMecModItfCPP extern const CATMfFeaturizeMode MfFeaturizeFunctionalC1Intersection ;
ExportedByMecModItfCPP extern const CATMfFeaturizeMode MfFeaturizeInitial;

ExportedByMecModItfCPP extern const CATMfFeaturizeMode MfWithBuildError;  
ExportedByMecModItfCPP extern const CATMfFeaturizeMode MfWithoutBuildError;
ExportedByMecModItfCPP extern const CATMfFeaturizeMode MfKoNoConnexResult;
ExportedByMecModItfCPP extern const CATMfFeaturizeMode MfMonoFond;
ExportedByMecModItfCPP extern const CATMfFeaturizeMode MfNoFeaturization;
ExportedByMecModItfCPP extern const CATMfFeaturizeMode MfFunctionalFeaturization;
ExportedByMecModItfCPP extern const CATMfFeaturizeMode MfRelimitedFeaturization;
ExportedByMecModItfCPP extern const CATMfFeaturizeMode MfBorderFeaturization;
ExportedByMecModItfCPP extern const CATMfFeaturizeMode MfWireFeaturization;
ExportedByMecModItfCPP extern const CATMfFeaturizeMode MfGeometricRerouteAuthorized;
ExportedByMecModItfCPP extern const CATMfFeaturizeMode MfInversed; 

/**
 * Update mode of BRep features.
 * @param MfStandardUpdateSupport
 * The BRep feature points to the result out of the support.
 * @param MfForceUpdateSupport
 * The support of the BRep feature is the result in of the design feature that is using the BRep feature.
 */ 
enum CATMfBRepUpdateSupport { MfStandardUpdateSupport , MfForceUpdateSupport } ;

/**
 * Management of journaling label format.
 * @param MfNamingReferenceMechanical
 * Enriched format (recommanded usage).
 * @param MfNamingReferenceGenericNanming
 * Basic format. Use <tt>MfNamingReferenceMechanical</tt>.
 */
enum CATMfTypeNamingReference { MfNamingReferenceMechanical, MfNamingReferenceGenericNanming };

#endif 



