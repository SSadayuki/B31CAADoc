#ifndef CATIWireFVertex_h
#define CATIWireFVertex_h

// COPYRIGHT DASSAULT SYSTEMES 2004

/**
 * @CAA2Level L1 
 * @CAA2Usage U3
 */

#include "CATIFVertexAccess.h"
#include "CATMfBRepDefs.h"
#include "MecModItfCPP.h"

class CATIWireFVertex_var;

#ifndef LOCAL_DEFINITION_FOR_IID
extern ExportedByMecModItfCPP IID IID_CATIWireFVertex;
#else
extern "C" const IID IID_CATIWireFVertex;
#endif

/**
 * Interface to filter a selecting object of WireFVertex type.
 * <b>Role:</b> This interface allows to filter a selecting object ( @href CATIBRepAccess )
 * of WireFVertex type. A <tt>WireFVertex</tt> is a vertex internal of a 1D topological object
 * ( @href CATBody ). It is shared by two egdes of a wire.
 */

class ExportedByMecModItfCPP CATIWireFVertex: public CATIFVertexAccess
{
  CATDeclareInterface;

public: 

};

CATDeclareHandler( CATIWireFVertex, CATIFVertexAccess) ;

#endif
