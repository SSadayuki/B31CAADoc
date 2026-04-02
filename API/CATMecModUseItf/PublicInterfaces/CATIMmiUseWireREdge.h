// COPYRIGHT DASSAULT SYSTEMES 2009

/**
 * @CAA2Level L1
 * @CAA2Usage U3
 */

#ifndef CATIMmiUseWireREdge_H
#define CATIMmiUseWireREdge_H

#include "CATMecModUseItf.h"
#include "CATBaseUnknown.h"

#ifndef LOCAL_DEFINITION_FOR_IID
extern ExportedByCATMecModUseItf IID IID_CATIMmiUseWireREdge;
#else
extern "C" const IID IID_CATIMmiUseWireREdge ;
#endif

/**
 * Interface to filter a selecting object of WireREdge type.
 * <b>Role:</b> This interface filters a selecting object ( @href CATIMmiUseBRepAccess )
 * of WireREdge type. A <tt>WireREdge</tt> is an edge of a wire.
 */
class ExportedByCATMecModUseItf CATIMmiUseWireREdge: public CATBaseUnknown
{
  CATDeclareInterface;

  public:

};
CATDeclareHandler(CATIMmiUseWireREdge,CATBaseUnknown);

//------------------------------------------------------------------

#endif
