#ifndef CATIBorderREdge_h
#define CATIBorderREdge_h

// COPYRIGHT DASSAULT SYSTEMES 2004

/**
 * @CAA2Level L1
 * @CAA2Usage U3
 */

#include "CATIREdgeAccess.h"
#include "CATMfBRepDefs.h"
#include "MecModItfCPP.h"

class CATIMfBorderRedge_var;
class CATIPrtContainer_var;
class CATIGeometricalElement_var;

#ifndef LOCAL_DEFINITION_FOR_IID
extern ExportedByMecModItfCPP IID IID_CATIBorderREdge;
#else
extern "C" const IID IID_CATIBorderREdge;
#endif

/**
 * Interface to filter a selecting object of BorderREdge type.
 * <b>Role:</b> This interface allows to filter a selecting object ( @href CATIBRepAccess )
 * of BorderREdge type. A <tt>BorderREdge</tt> is a border egde on a 2D topological object
 * ( @href CATBody ). A <tt>BorderREdge</tt> has only one adjacent face.
 */

class ExportedByMecModItfCPP CATIBorderREdge: public CATIREdgeAccess
{
  CATDeclareInterface;

public: 

};

CATDeclareHandler( CATIBorderREdge, CATIREdgeAccess) ;

#endif
