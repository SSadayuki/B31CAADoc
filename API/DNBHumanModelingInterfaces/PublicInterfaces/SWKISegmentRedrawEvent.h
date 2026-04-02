// COPYRIGHT DASSAULT SYSTEMES 2003
#ifndef _SWKISegmentRedrawEvent_h
#define _SWKISegmentRedrawEvent_h

/**
 * @CAA2Level L0
 * @CAA2Usage U0
 */

// *****************************************************************************
// Framework DNBHumanModelingInterfaces
// Copyright Safework Inc.
// *****************************************************************************
//  Abstract:
//  ---------
//   SWKISegmentRedrawEvent interface.
//   This interface is used to store the volatile attributes of a segment
//   for Undo purposes (e.g. reach envelope parameters).
//   All segments will adhere to this interface.
// *****************************************************************************
//  Usage:
//  ------
//
// *****************************************************************************
//  Inheritance:
//  ------------
//
//  CATBaseUnknown
//
// *****************************************************************************
//  Main Methods:
//  -------------
// 
//   UpdateSegment
// *****************************************************************************
//  History
//  -------
//
//  Author: Jean-Guy AUGUSTIN
//  Date  : 28/01/02
//  Goal  : Creation
// *****************************************************************************
//
// --- System
#include "CATBaseUnknown.h"


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
extern ExportedBySWKHumanModelingItf IID IID_SWKISegmentRedrawEvent;
#else
extern "C" const IID IID_SWKISegmentRedrawEvent;
#endif



/**
  * This interface is used to store the volatile attributes of a segment
  * for Undo purposes.
  **/

class ExportedBySWKHumanModelingItf SWKISegmentRedrawEvent : public CATBaseUnknown
{
	CATDeclareInterface;

  public:

	/**
	  * Store the current attributes of a segment.
	  **/
	virtual void UpdateSegment() = 0;
};

CATDeclareHandler(SWKISegmentRedrawEvent, CATBaseUnknown);

#endif
