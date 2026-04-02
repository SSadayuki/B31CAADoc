#ifndef CATIDrwCoordDim_H
#define CATIDrwCoordDim_H
// COPYRIGHT DASSAULT SYSTEMES 1999

/**
 * @CAA2Level L1
 * @CAA2Usage U3
 */
#include "CATIDrwSimpleText.h"

#include "DraftingItfCPP.h"
#ifndef LOCAL_DEFINITION_FOR_IID
extern ExportedByDraftingItfCPP IID IID_CATIDrwCoordDimension ;
#else
extern "C" const IID IID_CATIDrwCoordDimension ;
#endif

/**
 * Manages the coordinate dimension.
 */

class ExportedByDraftingItfCPP CATIDrwCoordDimension : public CATIDrwSimpleText
{
  CATDeclareInterface;

  public:

    /**
     * Gets dimension values.
     *   @param oXDimed
     *    X value.
     *   @param oYDimed
     *    Y value.
     */
     virtual void GetDimensionedPosition(double &oXDimed, double &oYDimed) const = 0;

    /**
     * Gets dimension values (case of 3D coordinate dimensions).
     *   @param oXDimed
     *    X value.
     *   @param oYDimed
     *    Y value.
     *   @param oZDimed
     *    Z value.
     */
     virtual void GetDimensionedPosition(double &oXDimed, double &oYDimed, double &oZDimed) const = 0;

    /**
     * To know if the dimension is a 2D or 3D coordinate dimension.
     * Returns the type of the coordinate dimension
     *   @param oType
     *    oType (0: 2D coordinate dimension, 1: 3D coordinate dimension).
     *   @return
     *    error returned code.
     */
     virtual HRESULT GetCoordDimensionType(int &oType) const = 0;
};
CATDeclareHandler(CATIDrwCoordDimension, CATIDrwSimpleText);
#endif
