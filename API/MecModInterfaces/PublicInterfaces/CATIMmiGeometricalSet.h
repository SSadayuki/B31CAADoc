// COPYRIGHT Dassault Systemes 2003
//===================================================================
/**
 * @CAA2Level L1
 * @CAA2Usage U3
 */
#ifndef CATIMmiGeometricalSet_H
#define CATIMmiGeometricalSet_H

#include "MecModItfCPP.h"
#include "CATBaseUnknown.h"

#ifndef LOCAL_DEFINITION_FOR_IID
extern ExportedByMecModItfCPP IID IID_CATIMmiGeometricalSet;
#else
extern "C" const IID IID_CATIMmiGeometricalSet ;
#endif

//------------------------------------------------------------------

/**
 * Interface identifying a surfacic body.
 * <b>Role:</b>This interface is specific for surfacic sets, in other words
 * for Geometrical Set and Ordered Geometrical Set features. The Body feature
 * does not implement this interface.
 * @see CATIMmiOrderedGeometricalSet , CATIMmiNonOrderedGeometricalSet
 */

class ExportedByMecModItfCPP CATIMmiGeometricalSet: public CATBaseUnknown
{
  CATDeclareInterface;

  public:

};

CATDeclareHandler(CATIMmiGeometricalSet,CATBaseUnknown);

//------------------------------------------------------------------

#endif
