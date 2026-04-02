// COPYRIGHT DASSAULT SYSTEMES 2009

/**
 * @CAA2Level L1
 * @CAA2Usage U3
 */

#ifndef CATIMmiUseFVertexAccess_H
#define CATIMmiUseFVertexAccess_H

#include "CATMecModUseItf.h"
#include "CATBaseUnknown.h"

#ifndef LOCAL_DEFINITION_FOR_IID
extern ExportedByCATMecModUseItf IID IID_CATIMmiUseFVertexAccess;
#else
extern "C" const IID IID_CATIMmiUseFVertexAccess ;
#endif

/**
 * Interface to filter a selecting object of Vertex types.
 * <b>Role:</b> This interface allows to filter a selecting object ( @href CATIMmiUseBRepAccess )
 * of Vertex type. All vertices types derive from this interface, whatever the topologic object 
 * they belong to may be ( @href CATBody ). 
 */
class ExportedByCATMecModUseItf CATIMmiUseFVertexAccess: public CATBaseUnknown
{
  CATDeclareInterface;

  public:
};
CATDeclareHandler(CATIMmiUseFVertexAccess,CATBaseUnknown);


//------------------------------------------------------------------

#endif
