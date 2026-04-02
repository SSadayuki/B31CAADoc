//===================================================================
// COPYRIGHT Dassault Systemes 2014
//===================================================================
// CATICciVirtualStackingImportExport.cpp
// Header definition of class CATICciVirtualStackingImportExport
//===================================================================
//
// Usage notes:
//
//===================================================================
#ifndef CATICciVirtualStackingImportExport_H
#define CATICciVirtualStackingImportExport_H

/**
* @CAA2Level L0
* @CAA2Usage U3
*/

#include "CAACompositesItf.h"
#include "CATBaseUnknown.h"
#include "CATICkeSheet.h"
class CATUnicodeString;

extern ExportedByCAACompositesItf  IID IID_CATICciVirtualStackingImportExport ;


/**
 * The Entity Level for the export.
 * <b>Role:</b> This type defines what composites entities will be export. 
 * @param CATCciVirtualStackingSequenceLevel
 *    Export the sequence.   
 * @param CATCciVirtualStackingPlyLevel
 *    Export the ply.     
 */
enum CATCciVirtualStackingEntityLevel
{
   CATCciVirtualStackingSequenceLevel          = 0,  
   CATCciVirtualStackingPlyLevel               = 1
};

/**
 * The View Mode for the export.
 * <b>Role:</b> This type defines what date type will be export. 
 * @param CATCciVirtualStackingCellMode
 *    Export all cells.
 * @param CATCciVirtualStackingStackingAreaMode
 *    Export only Stacking Area.     
 */
enum CATCciVirtualStackingViewMode
{
   CATCciVirtualStackingCellMode                  = 0,  
   CATCciVirtualStackingStackingAreaMode          = 1
};



/**
 * Interface Virtual Stacking.
 * <b>Role</b>: Allows to import or export the Virtual Stacking.
 * Virtual stacking object is a feature in the Composites GridTool 
 * <br>- The Virtual stacking is recovered thanks CATIDescendants::GetAllChildren
 *  <pre> 
 *  #include "CATICciVirtualStackingImportExport.h"
 *  #include "CATIDescendants.h" 
 *  ...
 *  CATICciVirtualStackingImportExport_var spVirtualStackingImportExport; //The interface for Import/Export
 *  CATIDescendants_var spDescendants = spPart; //spPart is the current Part
 *  if(NULL_var != spDescendants)
 *  {
 *      CATListValCATISpecObject_var spListVirtualStacking;
 *		spDescendants->GetAllChildren (CATICciVirtualStackingImportExport::ClassName(),spListVirtualStacking);
 *		...
 *	}
 *  </pre> 
 */

class ExportedByCAACompositesItf CATICciVirtualStackingImportExport: public CATBaseUnknown
{
CATDeclareInterface;

public:

    /**
	* Exports an excel or text file with all data from Virtual Stacking.
    * <br> WARNING: If export is defined by cells and excel file, there is a possibility that the result will be on Stacking Area due to the amount of cells.
	* @param ispSheet
	*    The input sheet of the file you will export the virtual stacking. <br>WARNING: Only text or excel format taking into account
    * @param iEntityLevel
	*    The entity level (CATCciVirtualStackingSequenceLevel or CATCciVirtualStackingPlyLevel).
    * @param iViewMode
	*    The view mode (CATCciVirtualStackingCellMode or CATCciVirtualStackingStackingAreaMode).
    * @param bReorder
	*    Reorder for the Export. Reorder All Cells from those which have the most entities to those wichch have the least.
    * @param oWarningMessage
	*    Message of error if any.
    *@see CATICkeSheet,CATCciVirtualStackingViewMode,CATCciVirtualStackingEntityLevel
	*/
    virtual HRESULT ExportVirtualStacking(CATICkeSheet_var &ispSheet,const CATCciVirtualStackingEntityLevel& iEntityLevel,const CATCciVirtualStackingViewMode& iViewMode, const CATBoolean& bReorder, CATUnicodeString& oWarningMessage)=0;

    /**
	* Imports an excel or text file to the Virtual Stacking.
    * @param ispSheet
	*    The input sheet of the file to import into the virtual stacking. <br>WARNING: Only text or excel format taking into account
    * @param oWarningMessage
	*    Message of error if any.
    *@see CATICkeSheet,CATCciVirtualStackingViewMode,CATCciVirtualStackingEntityLevel
	*/
    virtual HRESULT ImportVirtualStacking(const CATICkeSheet_var &ispSheet, CATUnicodeString& oWarningMessage)=0;

};

//-----------------------------------------------------------------------
CATDeclareHandler( CATICciVirtualStackingImportExport, CATBaseUnknown );


#endif
