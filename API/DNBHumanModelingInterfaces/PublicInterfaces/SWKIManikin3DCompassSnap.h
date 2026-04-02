// COPYRIGHT DASSAULT SYSTEMES 2003
#ifndef _SWKIManikin3DCompassSnap_h
#define _SWKIManikin3DCompassSnap_h

/**
 * @CAA2Level L0
 * @CAA2Usage U0
 */

// *****************************************************************************
// Framework DNBHumanModelingInterfaces
// Copyright Safework (2000) Inc.
// *****************************************************************************
//  Abstract:
//  ---------
//       SWKIManikin3DCompassSnap interface.
//       This interface offers non-IDL manikin services.
// *****************************************************************************
//  Usage:
//  ------
//
//   GetEndEffector
//   SetSnappedSegment
// *****************************************************************************
//  Inheritance:
//  ------------
//
//  CATBaseUnknown
//
// *****************************************************************************
//  Main Methods:
//  -------------
// *****************************************************************************
//  History
//  -------
//
//  Author: Jean-Guy AUGUSTIN
//  Date  : 03/10/00
//  Goal  : Creation
// *****************************************************************************
//
// --- System
#include "CATBaseUnknown.h"
//
// --- DNBHumanModelingInterfaces
class SWKISegment;
class SWKIBodyElement;


#ifdef _WINDOWS_SOURCE
#ifdef __SWKHumanModelingItf
#define ExportedBySWKHumanModelingItf __declspec(dllexport)
#else
#define ExportedBySWKHumanModelingItf __declspec(dllimport)
#endif
#else
#define ExportedBySWKHumanModelingItf
#endif

#ifndef LOCAL_DEFINITION_FOR_IID
extern ExportedBySWKHumanModelingItf IID IID_SWKIManikin3DCompassSnap;
#else
extern "C" const IID IID_SWKIManikin3DCompassSnap;
#endif


/**
  * This interface is used by when the user takes the compass
  * ans snaps it to the manikin, to move it either in forward
  * or inverse kinematics.  When a segment is snapped by the compass,
  * the <code>SetSnappedSegment()</code> method is called.
  **/

class ExportedBySWKHumanModelingItf SWKIManikin3DCompassSnap : public CATBaseUnknown
{
	CATDeclareInterface;

  public:
	
	/**
	  * @return The end effector snapped by the compass.
	  * This end effector must be either a segment or a line of sight.
	  **/
	virtual CATBaseUnknown * GetEndEffector() = 0;

	/**
	  * Set the end effector snapped by the compass.<br>
	  * This method violates the lifecycle principles.
	  * It does not <code>AddRef</code> the returning reference.
	  **/
	virtual void SetEndEffector(SWKIBodyElement * piSnappedSegment) = 0;

	/**
	  * @return The start segment, that is the beginning of the IK<br>
	  * chain, if the end effector is moved in IK.<br>
	  * This method violates the lifecycle principles.<br>
	  * It does not <code>AddRef</code> the returning reference.
	  **/
	virtual CATBaseUnknown * GetStartSegment() = 0;

	/**
	  * Set the start segment (the beginning of the IK chain).
	  **/
	virtual void SetStartSegment(SWKISegment * piSnappedSegment) = 0;
};

CATDeclareHandler(SWKIManikin3DCompassSnap, CATBaseUnknown);
#endif
