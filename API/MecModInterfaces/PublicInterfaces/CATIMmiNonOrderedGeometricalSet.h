// COPYRIGHT Dassault Systemes 2004
//===================================================================

/**
 * @CAA2Level L1
 * @CAA2Usage U3
 */
#ifndef CATIMmiNonOrderedGeometricalSet_H
#define CATIMmiNonOrderedGeometricalSet_H

#include "MecModItfCPP.h"
#include "CATBaseUnknown.h"

#ifndef LOCAL_DEFINITION_FOR_IID
extern ExportedByMecModItfCPP IID IID_CATIMmiNonOrderedGeometricalSet;
#else
extern "C" const IID IID_CATIMmiNonOrderedGeometricalSet ;
#endif

//------------------------------------------------------------------

/**
 * Interface identifying a Geometrical Set.
 * <b>Role:</b>This interface is specific for the Geometrical Set. The Ordered
 * Geometrical Set does not implement this interface. It implements the
 * @href CATIMmiOrderedGeometricalSet interface. 
 * <br>Ordered Geometrical Set and Geometrical Set are both surfacic sets,
 * in other words GSMTool features (see @href CATIGSMTool ). 
 * @see CATIMmiGeometricalSet
 */
class ExportedByMecModItfCPP CATIMmiNonOrderedGeometricalSet: public CATBaseUnknown
{
  CATDeclareInterface;

  public:
};

CATDeclareHandler(CATIMmiNonOrderedGeometricalSet,CATBaseUnknown);
//------------------------------------------------------------------

#endif
