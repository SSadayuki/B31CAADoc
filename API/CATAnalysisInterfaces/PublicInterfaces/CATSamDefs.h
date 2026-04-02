#ifndef CATSamDefs_H
#define CATSamDefs_H
//=============================================================================
// COPYRIGHT Dassault Systemes 2000
//=============================================================================
/**
 * @CAA2Level L1
 * @CAA2Usage U1
 */

/**
 * Allowed axis usage for a basic componenent definition.
 *
 * @param GlobalAxis 
 *  if the used axis system is the global one.
 * @param UserAxis 
 *  if the used axis system is a local axis defined by the user.
 * @param ImplicitAxis 
 *  if the used axis system is defined thanks to the underling geometry.
 */
enum CATSamAxisDefinitionMode 
{ 
	CATSamGlobalAxis	= (1<<0), 
	CATSamUserAxis		= (1<<1),  
	CATSamImplicitAxis	= (1<<2)
};


/**
 * Define a local axis type.
 *
 * @param NoAxis 
 *  if no axis definition is required.
 * @param CartesianAxis 
 *  if a cartesian axis definition is required.
 * @param CylindricalAxis 
 *  if a cylindrical axis definition is required.
 * @param SphericalAxis 
 *  if a spherical axis definition is required.
 */
enum CATSamAxisType 
{ 
	NoAxis				= 0, 
	CartesianAxis		= (1<<0), 
	CylindricalAxis		= (1<<1),  
	SphericalAxis		= (1<<2)
};
/**
 * Enumerate to manage authorized support type for Analysis Entity 
 * definition. Values can be cumulated to multiple type authorized. <br> 
 * @param SupportId_NoSupport No support is required.
 * @param SupportId_Node Nodal support is required.
 * @param SupportId_Element Finite Element support is required. 
 * @param SupportId_Edge Edge support is required. 
 * @param SupportId_Surface: Surface support is required. 
 * @param SupportId_Body: Tridimentionnal Body support is required. 
 * @param SupportId_Line: Line support is required. 
 * @param SupportId_CircularLine: CircularLine support is required. 
 * @param SupportId_PlaneSurface: PlaneSurface support is required. 
 * @param SupportId_Sphere: Spherical support is required.
 * @param SupportId_Cylinder: Cylinder support is required.
 * @param SupportId_Cone: Cone support is required. 
 * @param SupportId_RevolutionSurface: RevolutionSurface support is required.
 * @param SupportId_MeshPart: MeshPart support is required. 
 * @param SupportId_DistantAsmCst: Assembly contact Constraint is required. 
 * @param SupportId_Point: Point support is required.
 * @param SupportId_CylSurfAxis: Axis of a cylindrical surface is required.  
 * @param SupportId_SingleVirtualPart: A single virtual part is required.
 * @param SupportId_CoincidenceAsmCst: An Assembly coincidence Constraint is required.
 * @param SupportId_JointBody: A joint body is allowed to define the support. 
 * @param SupportId_BidimBody: A Bidimentionnal body is allowed to define the support. 
 *  This support can be used only if the supporting feature is a global parameter (Property, Gravity...)
 * @param SupportId_MonodimBody: A Monodimentionnal body is allowed to define the support. 
 *  This support can be used only if the supporting feature is a global parameter (Property, Gravity...)
 * @param SupportId_GSMTool: An Open-Body is allowed to define the support.
 * @param SupportId_ConnectionDesign:  an AnalysisConnectionDesign entity is allowed to define the support. 
 * @param SupportId_3DAxisSystem:  an Axis system entity is allowed to define the support. 	
 * @param SupportId_FreeGroup	An Analysis feature build by derivation of SAMFreeGroup is allowed. 
 * @param SupportId_SpecifiedGroup	An Analysis feature build by derivation of SAMSpecifiedGroup is allowed. 
 * The SupportId of this feature must be defined with an homogeneous definition. 
 * @param SupportId_MechanicalFeature: Allow Mechanical Feature as support. (This choice may be
 * completed by some surface or edge type definition.
 * @param SupportId_HomogeneousDef: An Homogeneous definition (Support of the same kind) is needed for the support.
 * @param SupportId_Undefined:  Undefined support is required.
 * Notes :
 *   In case of accessing nodes and elements, use SupportId_MonodimBody, SupportId_BidimBody and SupportId_Body.
 *   In case of accessing edges or faces of elements, use SupportId_MechanicalFeature associated to the proper supportId (SupportId_Edge, SupportId_Surface...). 
 */
 typedef int SAM_SupportId;
/** @nodoc  */
#define SupportId_NoSupport				0			// =0
/** @nodoc  */
#define SupportId_Node					    (1<<0)		// =1
/** @nodoc  */
#define SupportId_Element				    (1<<1)		// =2
/** @nodoc  */
#define SupportId_Vertex				    (1<<2)		// =4
/** @nodoc  */
#define SupportId_Edge					    (1<<3)		// =8
/** @nodoc  */
#define SupportId_Surface				    (1<<4)		// =16
/** @nodoc  */
#define SupportId_Body					    (1<<5)		// =32
/** @nodoc  */
#define SupportId_Line					    (1<<6)		// =64
/** @nodoc  */
#define SupportId_CircularLine	    (1<<7)		// =128
/** @nodoc  */
#define SupportId_PlaneSurface	    (1<<8)		// =256
/** @nodoc  */
#define SupportId_Sphere				    (1<<9)		// =512
/** @nodoc  */
#define	SupportId_Cylinder				  (1<<10)		// =1024
/** @nodoc  */
#define	SupportId_Cone					    (1<<11)		// =2048
/** @nodoc  */
#define SupportId_RevolutionSurface	(1<<12)		// =4096
/** @nodoc  */
#define SupportId_MeshPart				  (1<<13)		// =8192
/** @nodoc  */
#define SupportId_DistantAsmCst			(1<<14)		// =16384
/** @nodoc  */
#define SupportId_ContactAsmCst			(1<<15)		// =32768
/** @nodoc  */
#define SupportId_Point					    (1<<16)		// =65536
/** @nodoc  */
#define SupportId_CylSurfAxis			  (1<<17)		// =131072
/** @nodoc  */
#define SupportId_SingleVirtualPart	(1<<18)		// =262144
/** @nodoc  */
#define SupportId_CoincidenceAsmCst	(1<<19)		// =524288
/** @nodoc  */
#define SupportId_JointBody				  (1<<20)		// =1048576
/** @nodoc  */
#define SupportId_BidimBody				  (1<<21)		
/** @nodoc  */
#define SupportId_MonodimBody				(1<<22)	
/** @nodoc  */
#define SupportId_GSMTool			    	(1<<23)		// Open-Body 
/** @nodoc  */
#define SupportId_ConnectionDesign  (1<<24)		// AnalysisConnectionDesign
/** @nodoc  */
#define SupportId_3DAxisSystem      (1<<25)		
/** @nodoc  */
#define SupportId_FreeGroup		      (1<<27)		
/** @nodoc  */
#define SupportId_SpecifiedGroup		(1<<28)		
/** @nodoc  */
#define SupportId_MechanicalFeature	(1<<29)		
/** @nodoc  */
#define SupportId_HomogeneousDef		(1<<30)		// =1073741824
/** @nodoc  */
#define SupportId_Undefined				  (1<<31)			

/**
 * Tensor property. 
 * @param CATSamNoSymetry  
 *  The definition for a full tensor
 * @param CATSamSymetrical 
 *  The definition for a symetrical tensor
 * @param CATSamAntiSymetrical  
 *  The definition for an anti-symetrical tensor
 */


enum CATSamSymProperty
{
	CATSamNoSymetry			= (1<<0),
	CATSamSymetrical		= (1<<1),
	CATSamAntiSymetrical	= (1<<2)
};
/**
 * Analysis Set status.
 * @param Status_Invalid 
 *  The status is not valid. Update is required.
 * @param Status_Valid 
 *  The status is valid according to the specifications.
 * @param Status_ValidPre 
 *  The status is valid according to the Finite Element view.
 * @param Status_Computed 
 *  The status is valid  according to the solver computation.
 * @param Status_Restart 
 *  The status is valid according to the solver computation.
 *  Capability to restart the computation.
 * @param Status_Singular 
 *  The status is valid according to the solver computation.
 *  Some trouble are detected (like local singularity).
 */

enum SAM_Status
{
	Status_Invalid,
	Status_Valid,
	Status_ValidPre,
	Status_Computed,
	Status_Restart,
	Status_Singular
};
/**
 * SingleEntityPtr location.<br>
 * @param Neighbourhood_Anywhere 
 *  To search Anywhere.
 * @param Neighbourhood_SameSet 
 *  To search in the SameSet.
 * @param Neighbourhood_SameCase 
 *  To search in the SameCase.
 * @param Neighbourhood_SameFemModel 
 *  To search in the SameFemModel.
 * @param Neighbourhood_SameDocument 
 *  To search in the SameDocument.
 */

enum SAM_Neighbourhood
{
	Neighbourhood_Anywhere		= 0,
	Neighbourhood_SameSet		= 1,
	Neighbourhood_SameCase		= 2,
	Neighbourhood_SameFemModel	= 3,
	Neighbourhood_SameDocument	= 4,
	Neighbourhood_InAssembly  	= 5
};

/**
 * Define if an entity definition depend on the extent of its support.
 * @param SAM_Intensive 
 *  Is not dependant.
 * @param SAM_Extensive 
 *  Is dependant.
 */

enum CATSamIntenseStatus
{
	SAM_Intensive	= (1<<0),
	SAM_Extensive	= (1<<1)
};

/**
 * Quality of a set inside a case regarding to the update capability.<br>
 * @param Sam_IN 
 *  To define an input of a Case.
 * @param Sam_OUT 
 *  To define an output of a Case.
 * @param Sam_NEUTRAL
 *  To define an Neutral behavoir. No impact in the update.
 */

enum SAM_Quality
{
	Sam_IN,
	Sam_OUT,
	Sam_NEUTRAL
};

/**
 * Filter by update quality the scan of sets inside a Case.<br>
 * @param Sam_SearchIN 
 *  To filter the sets defined with Sam_IN parameter.
 * @param Sam_SearchOUT 
 *  To filter the sets defined with Sam_OUT parameter.
 * @param Sam_SearchNEUTRAL
 *  To filter the sets defined with Sam_NEUTRAL parameter.
 * @param Sam_SearchEverywhere
 *  No filter required on the SAM_Quality parameter.
 */

enum SAM_QualitySearch
{
	Sam_SearchIN,
	Sam_SearchOUT,
	Sam_SearchNEUTRAL,
	Sam_SearchEverywhere
};
/**
 * Specify the way AnalysisEntities are collected.<br>
 * @param Sam_CollectAdd 
 *  The collect adds the collected data on the support.
 * @param Sam_CollectReplace 
 *  The collect replaces the collected data on the support.
 */


enum SAM_CollectParameter
{
	Sam_CollectAdd,
	Sam_CollectReplace
};


/**
* Specify the way entity or basic component are selected for complex basic component definition.<br> 
* @param SAM_OR 
*  In this mode, only one selection exists in an enumerated list.
* @param SAM_AND 
*  Use this mode in order to add several selections.
*/
enum CATSamSelectionMode 
{
	SAM_OR,   
	SAM_AND 		  
};

#endif

