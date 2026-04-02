// COPYRIGHT DASSAULT SYSTEMES 2009

/**
 * @CAA2Level L1
 * @CAA2Usage U3
 */

#ifndef CATIMmiUseBorderFVertex_H
#define CATIMmiUseBorderFVertex_H

#include "CATMecModUseItf.h"
#include "CATBaseUnknown.h"

#ifndef LOCAL_DEFINITION_FOR_IID
extern ExportedByCATMecModUseItf IID IID_CATIMmiUseBorderFVertex;
#else
extern "C" const IID IID_CATIMmiUseBorderFVertex ;
#endif

/**
 * Interface to filter a selecting object of BorderFVertex type.
 * <b>Role:</b> This interface allows to filter a selecting object ( @href CATIMmiUseBRepAccess )
 * of BorderFVertex type. A <tt>BorderFVertex</tt> is a vertex border of a 1D topological object
 * ( @href CATBody ). It is the extremity of a unique egde of a wire.
 */
class ExportedByCATMecModUseItf CATIMmiUseBorderFVertex: public CATBaseUnknown
{
  CATDeclareInterface;

  public:
};
CATDeclareHandler(CATIMmiUseBorderFVertex,CATBaseUnknown);

//------------------------------------------------------------------

#endif
