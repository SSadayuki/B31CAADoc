#ifndef CATIFVertex_h
#define CATIFVertex_h

// COPYRIGHT DASSAULT SYSTEMES 2004

/**
 * @CAA2Level L1
 * @CAA2Usage U3
 */

#include "CATIFVertexAccess.h"
#include "CATMfBRepDefs.h"
#include "CATListOfCATIBRepAccess.h"
#include "MecModItfCPP.h"
#include "CATIAV5Level.h"
class CATLISTP(CATVertex);
class CATIFVertex_var;

#ifndef LOCAL_DEFINITION_FOR_IID
extern ExportedByMecModItfCPP IID IID_CATIFVertex;
#else
extern "C" const IID IID_CATIFVertex;
#endif

/**
 * Interface to manage a selecting object of FVertex type.
 * <b>Role:</b> This interface manages a selecting object ( @href CATIBRepAccess )
 * of FVertex type. A <tt>FVertex</tt> is a vertex on a 2D or 3D topological object
 * ( @href CATBody ). It is the extremity of at least two egdes of one or several faces.
 * These faces can be retrieved by the @href #GetRSurs method.
 */
class ExportedByMecModItfCPP CATIFVertex: public CATIFVertexAccess
{
  CATDeclareInterface;

public:
/**
 * Returns the geometrical vertices corresponding to the FVertex.
 */
  virtual CATLISTP(CATVertex) GetVertices() const = 0;

/**
 * Returns the selecting objects associated with the adjacent faces.
 */
  virtual CATLISTP(CATIBRepAccess) GetRSurs() const = 0;

};

CATDeclareHandler( CATIFVertex, CATIFVertexAccess) ;

#endif
