// COPYRIGHT Dassault Systemes 2005
//===================================================================

/**
 * @CAA2Level L1
 * @CAA2Usage U3
 */

#ifndef CATIDftCoordDimension_H
#define CATIDftCoordDimension_H

#include "DraftingItfCPP.h"
#include "CATBaseUnknown.h"

#ifndef LOCAL_DEFINITION_FOR_IID
extern ExportedByDraftingItfCPP IID IID_CATIDftCoordDimension;
#else
extern "C" const IID IID_CATIDftCoordDimension ;
#endif

//------------------------------------------------------------------

/**
* Manages the coordinate dimension.
*/
class ExportedByDraftingItfCPP CATIDftCoordDimension: public CATBaseUnknown
{
  CATDeclareInterface;

  public:

    /**
     * Return the dimension type (2D or 3D coordinate dimension) and gets dimension values.
     *   @param oType
     *    oType (0: 2D coordinate dimension, 1: 3D coordinate dimension).
     *   @param oXDimed
     *    X value.
     *   @param oYDimed
     *    Y value.
     *   @param oZDimed
     *    Z value (=0. if 2D coordinate dimension).
     *   @return
     *    error returned code.
     */
     virtual HRESULT GetCoordValues(int &oType, double &oXDimed, double &oYDimed, double &oZDimed)  = 0;

};
CATDeclareHandler(CATIDftCoordDimension, CATBaseUnknown);
#endif


