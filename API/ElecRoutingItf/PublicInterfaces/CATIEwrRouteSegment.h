// COPYRIGHT Dassault Systemes 2004
//===================================================================
//
// CATIEwrRouteSegment.h
// Define the CATIEwrRouteSegment interface
//
//===================================================================
//
// Usage notes:
//   New interface: Interface to the route segment of wires or wire groups
//
//===================================================================
//
//  Nov 2004  Creation
//===================================================================
#ifndef CATIEwrRouteSegment_H
#define CATIEwrRouteSegment_H

/**
 * @CAA2Level L1
 * @CAA2Usage U3
 */

#include "ExportedByCATEwrInterfaces.h"
#include "CATBaseUnknown.h"

class CATListValCATBaseUnknown_var;

#ifndef LOCAL_DEFINITION_FOR_IID
extern ExportedByCATEwrInterfaces IID IID_CATIEwrRouteSegment;
#else
extern "C" const IID IID_CATIEwrRouteSegment ;
#endif

/**
 * Interface on the route segment of wires or wire groups.
 */
class ExportedByCATEwrInterfaces CATIEwrRouteSegment: public CATBaseUnknown
{
  CATDeclareInterface;
  
public:
/**
 *   Fills a list of conductors going through a given network segment.
 *   @param opLConductors
 *      A pointer to a list of wires and wire groups going through a network segment.
 *   @return
 *      S_OK is returned if there were no errors (the pointer on the list might be NULL).
 *      <br>
 *      E_FAIL is returned in case of errors.
 */  
  virtual HRESULT ListConductors(CATListValCATBaseUnknown_var *& opLConductors) = 0;

};

#endif
