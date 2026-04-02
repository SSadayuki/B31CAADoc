// COPYRIGHT DASSAULT SYSTEMES 2009

/**
 * @CAA2Level L1
 * @CAA2Usage U3
 */
#ifndef CATIMmiUseREdgeAccess_H
#define CATIMmiUseREdgeAccess_H

#include "CATMecModUseItf.h"
#include "CATBaseUnknown.h"

#ifndef LOCAL_DEFINITION_FOR_IID
extern ExportedByCATMecModUseItf IID IID_CATIMmiUseREdgeAccess;
#else
extern "C" const IID IID_CATIMmiUseREdgeAccess ;
#endif

//------------------------------------------------------------------

/**
 * Interface to filter a selecting object of REdge types.
 * <b>Role:</b> This interface allows to filter a selecting object ( @href CATIMmiUseBRepAccess )
 * of REdge type. All edges types implement from this interface, whatever the topologic object 
 * they belong to may be ( @href CATBody ). 
 */
class ExportedByCATMecModUseItf CATIMmiUseREdgeAccess: public CATBaseUnknown
{
  CATDeclareInterface;

  public:
};
CATDeclareHandler(CATIMmiUseREdgeAccess,CATBaseUnknown);

//------------------------------------------------------------------

#endif
