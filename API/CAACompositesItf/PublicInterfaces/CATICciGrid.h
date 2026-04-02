// COPYRIGHT Dassault Systemes 2010
//===================================================================
//
// CATICciGrid.h
//		Interface to manage a composites grid
//
//===================================================================
//
// Usage notes:
//
//===================================================================

#ifndef CATICciGrid_H
#define CATICciGrid_H

/**
* @CAA2Level L0
* @CAA2Usage U0
*/

#include "CAACompositesItf.h"
#include "CATBaseUnknown.h"
#include "CATLISTV_CATICciGridCell.h"

#ifndef LOCAL_DEFINITION_FOR_IID
extern ExportedByCAACompositesItf IID IID_CATICciGrid;
#else
extern "C" const IID IID_CATICciGrid ;
#endif

class CATICciGridPanel_var;
class CATICciGridCell_var;
class CATBody_var;

//------------------------------------------------------------------

/**
* Interface representing a composites grid.
* <b>Role</b>: Allows to manage a Grid feature.
*/
class ExportedByCAACompositesItf CATICciGrid: public CATBaseUnknown
{
  CATDeclareInterface;

  public:

	/**
	* Gets the panel from which the grid is created.
	* @param ospPanel
	*    The grid panel from which the grid is created.
	*/
	virtual HRESULT GetPanel (CATICciGridPanel_var& ospPanel) = 0;

	/**
	* Returns the list of cells defining the grid.
	* @param oListOfCells
	*    The list of cells in the grid.
	*/
	virtual HRESULT GetCells(CATLISTV(CATICciGridCell_var) & oListOfCells) = 0;

	/**
	* Forces a visualization refresh of the grid.
	*/
	virtual void RefreshVisu ( ) = 0;

	/**
	* Creates the shell body of a grid cell.
	* @param iCellIndex
	*    Index of the cell to be returned (starting at 1).
	* @param ospBody
	*    The shell body of the cell. To be removed by caller afterward using @href CATICGMContainer#Remove method. 
	*/
	virtual HRESULT CreateCellBody(int iCellIndex, CATBody_var & ospBody) =0 ;

};

CATDeclareHandler(CATICciGrid, CATBaseUnknown);

#endif
