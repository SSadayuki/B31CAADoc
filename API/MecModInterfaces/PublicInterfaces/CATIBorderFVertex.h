#ifndef CATIBorderFVertex_h
#define CATIBorderFVertex_h

// COPYRIGHT DASSAULT SYSTEMES 2004

/**
 * @CAA2Level L1
 * @CAA2Usage U3
 */

#include "CATIFVertexAccess.h"
#include "CATMfBRepDefs.h"
#include "MecModItfCPP.h"

class CATIMfBorderFvertex_var;
class CATIPrtContainer_var;

#ifndef LOCAL_DEFINITION_FOR_IID
extern ExportedByMecModItfCPP IID IID_CATIBorderFVertex;
#else
extern "C" const IID IID_CATIBorderFVertex;
#endif

/**
 * Interface to filter a selecting object of BorderFVertex type.
 * <b>Role:</b> This interface allows to filter a selecting object ( @href CATIBRepAccess )
 * of BorderFVertex type. A <tt>BorderFVertex</tt> is a vertex border of a 1D topological object
 * ( @href CATBody ). It is the extremity of a unique egde of a wire.
 */

class ExportedByMecModItfCPP CATIBorderFVertex: public CATIFVertexAccess
{
  CATDeclareInterface;

public: 

};

CATDeclareHandler( CATIBorderFVertex, CATIFVertexAccess) ;

#endif
