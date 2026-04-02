#ifndef CATIRGETopology_H
#define CATIRGETopology_H

// COPYRIGHT DASSAULT SYSTEMES 2001

/**
 * @CAA2Level L1
 * @CAA2Usage U3
 */

#include "CATTTRSItf.h"
#include "CATBaseUnknown.h"
#include "CATLISTV_CATBaseUnknown.h"
#include "CATListOfCATCells.h"
class CATMathTransformation;


#ifndef LOCAL_DEFINITION_FOR_IID
extern ExportedByCATTTRSItf IID IID_CATIRGETopology ;
#else
extern "C" const IID IID_CATIRGETopology;
#endif


/**
 * Interface that allows to retreive topological information
 * <b>Role</b>: <b>Topologiy</b> retreive topological information: Cells from a RGE
 */
class ExportedByCATTTRSItf CATIRGETopology: public CATBaseUnknown
{
  CATDeclareInterface;

  public:

    /**
     * Retreive the cells of a RGE.
     * @param opCellList 
     * List of the Cells of the RGE
     * as a explicit AddRef is done on the Cells,
     * after using opCellList, do a Release() on each its member
     * before deleting the list.
     * Example of utilisation :
     * CATLISTP (CATCell) *List;
     * RGETopology -> GetCell (&List);
     * ...
     * int CellCount = List->Size();
     * for (int CellIdx=1; CellIdx<=CellCount; CellIdx++)
     * {
     *   *List[CellIdx]->Release();
     * }
     * delete List;
     * ...
     */
    virtual HRESULT GetCells (CATLISTP (CATCell) **opCellList) const = 0;

    /**
     * Retreive the cells and their bodies of a RGE.
     * @param opCellList 
     * List of the Cells of the RGE
     *
     * @param pListBody 
     * List of the Bodies of cells.
     *
     * Example of utilisation :
     * CATLISTV(CATBaseUnknown_var)* pListCell = NULL;
     * CATLISTV(CATBaseUnknown_var)* pListBody = NULL;
     * HRESULT rc = piRGETopology -> GetCellsAndBodies (&pListCell, &pListBody);
     * if( SUCCEEDED(rc) )
     * {
     *   int CellCount = pListCell -> Size();
     *   for (int CellIdx=1; CellIdx<=CellCount; CellIdx++)
     *   {
     *      ...
     *      
     *   }
     *   delete pListCell;
     *   pListCell = NULL;
     *
     *   delete pListBody;
     *   pListBody = NULL;
     * }
     * ... 
     */
    virtual HRESULT GetCellsAndBodies (
                               CATLISTV(CATBaseUnknown_var) **opCellList,
                               CATLISTV(CATBaseUnknown_var) **opBodyList) const = 0;

    /**
     * Get the transformation to apply to the cells.
     * @param oMathTransfo
     * matrix of transformation.
     */
    virtual HRESULT GetTransformation (CATMathTransformation **oMathTransfo) const = 0;

    /**
     * Retrieves the coefficient to apply on the surface normal.
     * The result is valid when the cells returned by the GetCells method are faces.
     * @param oCoefficient
     *    1 if the orientation of material and geometry underlying the face are the same.
     *   -1 if the orientation of material and geometry underlying the face are opposite.
     *    0 if the system didn't succeed in computing the result.
     */
    virtual HRESULT GetOutsideMaterialCoefficientOnNormal (int * oCoefficient) const= 0;

};
#endif
