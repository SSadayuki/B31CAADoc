/* -*-c++-*- */
#ifndef CATGSMMidSurfaceDef_H
#define CATGSMMidSurfaceDef_H 

// COPYRIGHT DASSAULT SYSTEMES 2019

/**
* @CAA2Level L1
* @CAA2Usage U1
*/

//------------------------------------------------------------------
/**
* Types for Mid Surface Creation Mode.
* @param CATGSMMidSurfaceFacePairs
*		Face pairs creation mode
* @param CATGSMMidSurfaceFacesToOffset
*		Faces to offset creation mode
* @param CATGSMMidSurfaceAutomatic
*		Automatic Creation mode
* @param CATGSMMidSurfaceNone
*		CATGSMMidSurfaceNone is used in panel
*
* @see CATIGSMMidSurface
*/
enum CATGSMMidSurfaceCreationMode 
{
	CATGSMMidSurfaceFacePairs = 0,
	CATGSMMidSurfaceFacesToOffset = 1,
	CATGSMMidSurfaceAutomatic = 2,
	CATGSMMidSurfaceNone = 3
};

//------------------------------------------------------------------
/**
* Types for Mid Surface Faces to Offset Computation Mode.
* @param CATGSMManual
*		Manual Computation Mode
* @param CATGSMAutomatic
*		Automatic Computation Mode
*
* @see CATIGSMMidSurface
*/
enum CATGSMMidSurfaceComputationMode 
{
	CATGSMManual = 0,
	CATGSMAutomatic =1
};


//------------------------------------------------------------------
/**
* Types for Mid Surface Faces to Offset Automatic Computation Mode.
* @param CATGSMMidSurfaceMinimum
*		Automatic Minimum
* @param CATGSMMidSurfaceMaximum
*		Automatic Maximum
* @param CATGSMMidSurfaceAverage
*		Automatic Average
*
* @see CATIGSMMidSurface
*/
enum CATGSMMidSurfaceComputationMethod 
{
	CATGSMMidSurfaceMinimum = 0,
	CATGSMMidSurfaceMaximum = 1,
	CATGSMMidSurfaceAverage = 2
};

#endif
