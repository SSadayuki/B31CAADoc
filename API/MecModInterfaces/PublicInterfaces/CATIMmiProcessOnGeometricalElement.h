/**
 * @CAA2Level L0
 * @CAA2Usage U0
 */

// COPYRIGHT Dassault Systemes 2003
//===================================================================
//
// CATIMmiProcessOnGeometricalElement.h
// Define the CATIMmiProcessOnGeometricalElement interface
//
//===================================================================
//
// Usage notes:
//  Very specific use,
//  do not implement on GeometricalElement !!!
//  see CATIMmiProcessOnGeometricalElement.cpp
//
//===================================================================
//
//  Nov 2003  Creation: fsa
//===================================================================
#ifndef CATIMmiProcessOnGeometricalElement_H
#define CATIMmiProcessOnGeometricalElement_H

#include "MecModItfCPP.h"
#include "CATBaseUnknown.h"

#ifndef LOCAL_DEFINITION_FOR_IID
extern ExportedByMecModItfCPP IID IID_CATIMmiProcessOnGeometricalElement;
#else
extern "C" const IID IID_CATIMmiProcessOnGeometricalElement ;
#endif

//------------------------------------------------------------------

class CATISpecObject_var;

class ExportedByMecModItfCPP CATIMmiProcessOnGeometricalElement: public CATBaseUnknown
{
  CATDeclareInterface;

  public:

/**
 * @nodoc 
 * Internal use only.
 */
    virtual HRESULT AfterCreationAndFirstBuild(CATISpecObject_var &iBuildedFeature) = 0;

};
CATDeclareHandler(CATIMmiProcessOnGeometricalElement, CATBaseUnknown);
//------------------------------------------------------------------

#endif



