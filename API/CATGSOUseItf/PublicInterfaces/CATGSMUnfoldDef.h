#ifndef CATGSMUnfoldDef_H_
#define CATGSMUnfoldDef_H_

// COPYRIGHT DASSAULT SYSTEMES 2005
/**
  * @CAA2Level L1
  * @CAA2Usage U1
  */

/**
 * Define the type of surface to unfold.
 * <b>Role</b>:  Used to know which is the type of the surface to unfold.
 * @param CATGSMUndefinedSurfaceType
 *       The type of surface is not defined
 * @param CATGSMRuledSurfaceType
 *       The type of surface is ruled
 * @param CATGSMAnySurfaceType
 *       The type of surface is all
 * @see CATIGSMUnfold, CATIGSOFactory
 */    

enum CATGSMUnfoldSurfaceType {	CATGSMUndefinedSurfaceType = 0,
								CATGSMRuledSurfaceType = 1,
								CATGSMAnySurfaceType = 2};


/**
 * Modes for target surface orientation.
 * @param CATGSMUnfoldTargetOrientationMode_None 
 *    no axis inversion
 * @param CATGSMUnfoldTargetOrientationMode_ReverseU 
 *    U inversion axis
 * @param CATGSMUnfoldTargetOrientationMode_ReverseV 
 *    V inversion axis
 * @param CATGSMUnfoldTargetOrientationMode_ReverseUReverseV
 *    U inversion axis and V inversion axis
 * @param CATGSMUnfoldTargetOrientationMode_SwapReverseU
 *	  U inversion axis and swap U and V axis
 * @param CATGSMUnfoldTargetOrientationMode_SwapReverseV
 *	  V inversion axis and swap U and V axis
 * @param CATGSMUnfoldTargetOrientationMode_SwapReverseUReverseV
 *	  U inversion axis, V inversion axis and swap U and V axis
 * @param CATGSMUnfoldTargetOrientationMode_Swap
 *	  Swap U and V axis
 * @see CATIGSMUnfold, CATIGSOFactory
 * 
 */ 
enum CATGSMUnfoldTargetOrientationMode {CATGSMUnfoldTargetOrientationMode_None = 0,
										CATGSMUnfoldTargetOrientationMode_ReverseU = 1,
										CATGSMUnfoldTargetOrientationMode_ReverseV = 2,
										CATGSMUnfoldTargetOrientationMode_ReverseUReverseV = 3,
										CATGSMUnfoldTargetOrientationMode_SwapReverseU = 4,
										CATGSMUnfoldTargetOrientationMode_SwapReverseV = 5,
										CATGSMUnfoldTargetOrientationMode_SwapReverseUReverseV = 6,
										CATGSMUnfoldTargetOrientationMode_Swap = 7};

/**
 * Define the edge to tear positioning orientation
 * <b>Role</b>:  Used when the reference origin is located on an edge to tear
 * @param CATGSMUnfoldEdgeToTearUndefinedOrientation
 *       The orientation is undefined
 * @param CATGSMUnfoldEdgeToTearDefaultOrientation
 *       The orientation is the default one
 * @param CATGSMUnfoldEdgeToTearInversedOrientation
 *       The orientation is inversed
 * @see CATIGSMUnfold, CATIGSOFactory
 */    

enum CATGSMUnfoldEdgeToTearPositioning {	CATGSMUnfoldEdgeToTearUndefinedOrientation = 0,
								CATGSMUnfoldEdgeToTearDefaultOrientation = 1,
								CATGSMUnfoldEdgeToTearInversedOrientation = 2};

#endif 
