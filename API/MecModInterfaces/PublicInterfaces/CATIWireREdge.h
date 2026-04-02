#ifndef CATIWireREdge_h
#define CATIWireREdge_h

// COPYRIGHT DASSAULT SYSTEMES 2004

/**
 * @CAA2Level L1
 * @CAA2Usage U3 
 */

#include "CATIREdgeAccess.h"
#include "CATMfBRepDefs.h"
#include "MecModItfCPP.h"

class CATIMfWireRedge_var;
class CATIPrtContainer_var;
class CATIGeometricalElement_var;


#ifndef LOCAL_DEFINITION_FOR_IID
extern ExportedByMecModItfCPP IID IID_CATIWireREdge;
#else
extern "C" const IID IID_CATIWireREdge;
#endif

/**
 * Interface to filter a selecting object of WireREdge type.
 * <b>Role:</b> This interface filters a selecting object ( @href CATIBRepAccess )
 * of WireREdge type. A <tt>WireREdge</tt> is an edge of a wire.
 */

class ExportedByMecModItfCPP CATIWireREdge: public CATIREdgeAccess
{
  CATDeclareInterface;

public: 

};

CATDeclareHandler( CATIWireREdge, CATIREdgeAccess) ;

#endif
