// COPYRIGHT DASSAULT SYSTEMES 2003
#ifndef SWKIManikinPositionNode_h
#define SWKIManikinPositionNode_h

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
//    SWKIManikinPositionNode interface.
//    This interface offers non-IDL manikin position node services.
//
// *****************************************************************************
//  Usage:
//  ------
//
// *****************************************************************************
//  Inheritance:
//  ------------
//
//    CATBaseUnknown
//
// *****************************************************************************
//  Main Methods:
//  -------------
//
// *****************************************************************************
//  History
//  -------
//
//  Author: Julie GUEVREMONT
//  Date  : 03/10/31
//  Goal  : Creation
// *****************************************************************************
//
// --- DNBHumanModelingInterfaces
#include "SWKINode.h"

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
extern ExportedBySWKHumanModelingItf IID IID_SWKIManikinPositionNode;
#else
extern "C" const IID IID_SWKIManikinPositionNode;
#endif

/**
  * This interface is the main interface for a manikin properties node.<br>
  * It is the node that is represented in the V5 specification tree<br>
  **/

class ExportedBySWKHumanModelingItf SWKIManikinPositionNode : public SWKINode
{
	CATDeclareInterface;

 public:
};

CATDeclareHandler(SWKIManikinPositionNode, SWKINode);

#endif
