// COPYRIGHT DASSAULT SYSTEMES 2009

/**
 * @CAA2Level L1
 * @CAA2Usage U3
 */

#ifndef CATIMmiUseFVertex_H
#define CATIMmiUseFVertex_H

#include "CATMecModUseItf.h"
#include "CATBaseUnknown.h"

#ifndef LOCAL_DEFINITION_FOR_IID
extern ExportedByCATMecModUseItf IID IID_CATIMmiUseFVertex;
#else
extern "C" const IID IID_CATIMmiUseFVertex ;
#endif

/**
 * Interface to filter a selecting object of FVertex type.
 * <b>Role:</b> This interface allows to filter selecting object ( @href CATIMmiUseBRepAccess )
 * of FVertex type. A <tt>FVertex</tt> is a vertex on a 2D or 3D topological object
 * ( @href CATBody ). It is the extremity of at least two egdes of one or several faces.
 */
class ExportedByCATMecModUseItf CATIMmiUseFVertex: public CATBaseUnknown
{
  CATDeclareInterface;

  public:
};
CATDeclareHandler(CATIMmiUseFVertex,CATBaseUnknown);

#endif
