// COPYRIGHT DASSAULT SYSTEMES 2003
#ifndef _SWKIManikinSelectMove3D_h
#define _SWKIManikinSelectMove3D_h

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
//       SWKIManikinSelectMove3D interface.
//       This interface offers non-IDL manikin services.
// *****************************************************************************
//  Usage:
//  ------
//
//   IsInProcessDocument
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
//  Date  : 01/03/06
//  Goal  : Creation
// *****************************************************************************
//
// --- System
#include "CATBaseUnknown.h"
#include "CATBooleanDef.h"
//
// --- Mathematics
class CATMathTransformation;

#ifdef _WINDOWS_SOURCE
#ifdef __SWKHumanModelingItf
#define ExportedBySWKHumanModelingItf __declspec(dllexport)
#else
#define ExportedBySWKHumanModelingItf __declspec(dllimport)
#endif
#else
#define ExportedBySWKHumanModelingItf
#endif

extern ExportedBySWKHumanModelingItf IID IID_SWKIManikinSelectMove3D;


/**
  * This interface is used by when the user takes the compass
  * and snaps it onto a manikin.
  **/

class ExportedBySWKHumanModelingItf SWKIManikinSelectMove3D : public CATBaseUnknown
{
	CATDeclareInterface;

  public:
	
	/**
	  * @nodoc
	  **/
	virtual boolean IsInProcessDocument() const = 0;
};

CATDeclareHandler(SWKIManikinSelectMove3D, CATBaseUnknown);
#endif
