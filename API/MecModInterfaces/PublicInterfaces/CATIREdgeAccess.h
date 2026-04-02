#ifndef CATIREdgeAccess_h
#define CATIREdgeAccess_h

// COPYRIGHT DASSAULT SYSTEMES 2004

/**
 * @CAA2Level L1 
 * @CAA2Usage U3
 */

#include "CATIBRepAccess.h"
#include "MecModItfCPP.h"

#ifndef LOCAL_DEFINITION_FOR_IID
extern ExportedByMecModItfCPP IID IID_CATIREdgeAccess;
#else
extern "C" const IID IID_CATIREdgeAccess;
#endif

/**
 * Interface to filter a selecting object of REdge types.
 * <b>Role:</b> This interface allows to filter a selecting object ( @href CATIBRepAccess )
 * of REdge type. All edges types derive from this interface, whatever the topologic object 
 * they belong to may be ( @href CATBody ). 
 */
class ExportedByMecModItfCPP CATIREdgeAccess: public CATIBRepAccess
{
  CATDeclareInterface;
 public: 
};

CATDeclareHandler( CATIREdgeAccess, CATIBRepAccess) ;

#endif
