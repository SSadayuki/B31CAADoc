// COPYRIGHT DASSAULT SYSTEMES 2009

/**
 * @CAA2Level L1
 * @CAA2Usage U3
 */

#ifndef CATIMmiUseWireFVertex_H
#define CATIMmiUseWireFVertex_H

#include "CATMecModUseItf.h"
#include "CATBaseUnknown.h"

#ifndef LOCAL_DEFINITION_FOR_IID
extern ExportedByCATMecModUseItf IID IID_CATIMmiUseWireFVertex;
#else
extern "C" const IID IID_CATIMmiUseWireFVertex ;
#endif

/**
 * Interface to filter a selecting object of WireFVertex type.
 * <b>Role:</b> This interface allows to filter a selecting object ( @href CATIMmiUseBRepAccess )
 * of WireFVertex type. A <tt>WireFVertex</tt> is a vertex internal of a 1D topological object
 * ( @href CATBody ). It is shared by two egdes of a wire.
 */
class ExportedByCATMecModUseItf CATIMmiUseWireFVertex: public CATBaseUnknown
{
  CATDeclareInterface;

  public:

};
CATDeclareHandler(CATIMmiUseWireFVertex,CATBaseUnknown);

//------------------------------------------------------------------

#endif
