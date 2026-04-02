// COPYRIGHT DASSAULT SYSTEMES 2009

/**
 * @CAA2Level L1
 * @CAA2Usage U3
 */

#ifndef CATIMmiUseBorderREdge_H
#define CATIMmiUseBorderREdge_H

#include "CATMecModUseItf.h"
#include "CATBaseUnknown.h"

#ifndef LOCAL_DEFINITION_FOR_IID
extern ExportedByCATMecModUseItf IID IID_CATIMmiUseBorderREdge;
#else
extern "C" const IID IID_CATIMmiUseBorderREdge ;
#endif

/**
 * Interface to filter a selecting object of BorderREdge type.
 * <b>Role:</b> This interface allows to filter a selecting object ( @href CATIMmiUseBRepAccess )
 * of BorderREdge type. A <tt>BorderREdge</tt> is a border egde on a 2D topological object
 * ( @href CATBody ). A <tt>BorderREdge</tt> has only one adjacent face.
 */
class ExportedByCATMecModUseItf CATIMmiUseBorderREdge: public CATBaseUnknown
{
  CATDeclareInterface;

  public:

};
CATDeclareHandler(CATIMmiUseBorderREdge,CATBaseUnknown);

//------------------------------------------------------------------

#endif
