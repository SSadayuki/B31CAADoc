// COPYRIGHT DASSAULT SYSTEMES 2003

#ifndef _SWKICenterOfGravity_h
#define _SWKICenterOfGravity_h

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
//
//    SWKICenterOfGravity interface.
//    This interface offers non-IDL center of gravity services.
//
// *****************************************************************************
//  Usage:
//  ------
//
// *****************************************************************************
//  Inheritance:
//  ------------
//
//    SWKIBodyElement
//
// *****************************************************************************
//  Main Methods:
//  -------------
//
//    SetInternalCenterOfGravity
// *****************************************************************************
//  History
//  -------
//
//  Author: Jean-Guy AUGUSTIN
//  Date  : 00/03/30
//  Goal  : Creation
// *****************************************************************************
//
// --- DNBHumanModelingInterfaces
#include "SWKIBodyElement.h"
//
// --- DNBHumanModeling
class SWCenterOfGravity;

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
extern ExportedBySWKHumanModelingItf IID IID_SWKICenterOfGravity;
#else
extern "C" const IID IID_SWKICenterOfGravity;
#endif

/**
  * This interface provides non-IDL center of gravity services.<br>
  * It represents the center of gravity of the manikin.
  **/

class ExportedBySWKHumanModelingItf SWKICenterOfGravity : public SWKIBodyElement
{
	CATDeclareInterface;

 public:

	/**
	  * Initialize the internal anthropometry.<br>
	  * <strong>This method is to be used by the system only.</strong>
	  **/
	virtual HRESULT SetInternalCenterOfGravity(SWCenterOfGravity * piInternalCOfG) = 0;
};

CATDeclareHandler(SWKICenterOfGravity, SWKIBodyElement);

#endif
