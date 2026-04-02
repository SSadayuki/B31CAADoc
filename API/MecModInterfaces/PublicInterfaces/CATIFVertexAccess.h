#ifndef CATIFVertexAccess_h
#define CATIFVertexAccess_h

// COPYRIGHT DASSAULT SYSTEMES 2004

/**
 * @CAA2Level L1
 * @CAA2Usage U3
 */


#include "CATIBRepAccess.h"
#include "MecModItfCPP.h"

#ifndef LOCAL_DEFINITION_FOR_IID
extern ExportedByMecModItfCPP IID IID_CATIFVertexAccess;
#else
extern "C" const IID IID_CATIFVertexAccess;
#endif

/**
 * Interface to filter a selecting object of Vertex types.
 * <b>Role:</b> This interface allows to filter a selecting object ( @href CATIBRepAccess )
 * of Vertex type. All vertices types derive from this interface, whatever the topologic object 
 * they belong to may be ( @href CATBody ). 
 */

class ExportedByMecModItfCPP CATIFVertexAccess: public CATIBRepAccess
{
  CATDeclareInterface;

public: 
};

CATDeclareHandler(CATIFVertexAccess, CATIBRepAccess);

#endif
