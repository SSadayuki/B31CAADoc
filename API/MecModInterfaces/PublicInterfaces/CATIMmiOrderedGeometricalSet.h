// COPYRIGHT Dassault Systemes 2004
//===================================================================

/**
 * @CAA2Level L1
 * @CAA2Usage U3
 */
#ifndef CATIMmiOrderedGeometricalSet_H
#define CATIMmiOrderedGeometricalSet_H

#include "MecModItfCPP.h"
#include "CATBaseUnknown.h"

#ifndef LOCAL_DEFINITION_FOR_IID
extern ExportedByMecModItfCPP IID IID_CATIMmiOrderedGeometricalSet;
#else
extern "C" const IID IID_CATIMmiOrderedGeometricalSet ;
#endif

//------------------------------------------------------------------

/**
 * Interface identifying an Ordered Geometrical Set.
 * <b>Role:</b>This interface is specific for the Ordered Geometrical Set. The 
 * Geometrical Set does not implement this interface. It implements the
 * @href CATIMmiNonOrderedGeometricalSet interface. 
 * <br>Ordered Geometrical Set and Geometrical Set are both surfacic sets,
 * in other words GSMTool features (see @href CATIGSMTool ). 
 * @see CATIMmiGeometricalSet
 */
class ExportedByMecModItfCPP CATIMmiOrderedGeometricalSet: public CATBaseUnknown
{
  CATDeclareInterface;

  public:

};

CATDeclareHandler(CATIMmiOrderedGeometricalSet,CATBaseUnknown);

//------------------------------------------------------------------

#endif
