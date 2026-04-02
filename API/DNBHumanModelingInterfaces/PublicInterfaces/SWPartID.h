// COPYRIGHT DASSAULT SYSTEMES 2003
#ifndef _SWPartID_h
#define _SWPartID_h

/**
 * @CAA2Level L0
 * @CAA2Usage U0
 */

/**********************************************************************/
/* DON T DIRECTLY INCLUDE THIS HEADER IN YOUR APPLICATION CODE. IT IS */
/* REQUIRED TO BUILD CAA APPLICATIONS BUT IT MAY DISAPEAR AT ANY TIME */
/**********************************************************************/

// *****************************************************************************
// Framework DNBHumanModelingInterfaces
// Copyright Safework Inc.
// *****************************************************************************
//  Abstract:
//  ---------
// 
// *****************************************************************************
//  Usage:
//  ------
//
// *****************************************************************************
//  Inheritance:
//  ------------
//
//
//
// *****************************************************************************
//  Main Methods:
//  -------------
//
// *****************************************************************************
//  History
//  -------
//
//  Author: Jean-Guy AUGUSTIN
//  Date  : 00/03/27
//  Goal  : Creation
// *****************************************************************************

enum SWPartID
{
	SWPartDefault = 0,
	SWPartManikin = 1,
	SWPartLibrary = 2,
	SWPartAnthropometry = 3,
	SWPartAnthroVariable = 4,
	SWPartPosture = 5,
	SWPartPrefAngles = 6,
	SWPartPrefAngle = 7,
	SWPartJointLimits = 8,
	SWPartJointLimitsVariable = 9,
	SWPartIKConstraints = 10,
	SWPartJointLimitsDBReference = 11,
	SWPartAnthroDBReference = 12,
	SWPartMemo = 13,
	SWPartIKSpecs = 14,
	SWPartVision = 15,
	SWPartClothing = 16,
	SWPartPostureVariable = 17,
	SWPartIKConstraint = 18,
	SWPartVisualLimits = 19,
	SWPartVisualLimitsVariable = 20,
	SWPartUserDBAnthro = 21,
	SWPartUserDBAnthroVariable = 22,
	SWPartUserDBJointLimits = 23,
	SWPartUserDBJointLimitsVariable = 24,
	SWPartFrame = 25,
	SWPartSet = 26,
	SWPartJointLimitsDof1 = 27,
	SWPartJointLimitsDof2 = 28,
	SWPartJointLimitsDof3 = 29,
	SWPartPrefAnglesDof1 = 30,
	SWPartPrefAnglesDof2 = 31,
	SWPartPrefAnglesDof3 = 32,
	SWPartDisplay = 33,
	SWPartColouring = 34,
	SWPartProperties = 35,
	SWPartAttaches = 36,
	SWPartReferential = 37,
	SWPartSegmentsOffsets = 42,
	SWPartLoads = 43,
	SWPartLoad = 44,
	SWPartSettings = 45,
	SWPartReports = 46,
	SWPartReport = 47,
	SWPartAppearance = 48,
	SWPartSegmentOffset = 49
};
#endif
