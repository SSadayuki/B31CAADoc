//===================================================================
// COPYRIGHT Dassault Systemes 2015/06/01
//===================================================================
// CATICciCompositesParametersMSSImportExport.cpp
// Header definition of class CATICciCompositesParametersMSSImportExport
//===================================================================
//
// Usage notes:
//
//===================================================================
#ifndef CATICciCompositesParametersMSSImportExport_H
#define CATICciCompositesParametersMSSImportExport_H

/**
* @CAA2Level L1
* @CAA2Usage U3
*/

#include "CAACompositesItf.h"
#include "CATBaseUnknown.h"
#include "CATIProgressTaskUI.h"
#include "CATICkeSheet.h"


extern ExportedByCAACompositesItf  IID IID_CATICciCompositesParametersMSSImportExport ;

/**
 * Interface Master Stacking Sequence.
 * <b>Role</b>: Allows to import or export the Master Stacking Sequence.
 * <br>- The Master Stacking Sequence is recovered thanks CATIDescendants::GetAllChildren
 *  <pre> 
 *  #include "CATICciCompositesParametersMSSImportExport.h"
 *  #include "CATIDescendants.h" 
 *  ...
 *  CATICciCompositesParametersMSSImportExport_var spCompositesParametersMSSImportExport; //The interface for Import/Export
 *  CATIDescendants_var spDescendants = spPart; //spPart is the current Part
 *  if(NULL_var != spDescendants)
 *  {
 *      CATListValCATISpecObject_var spListCompositesParametersMSS;
 *		spDescendants->GetAllChildren (CATICciCompositesParametersMSSImportExport::ClassName(),spCompositesParametersMSS);
 *		...
 *	}
 *  </pre> 
 */

class ExportedByCAACompositesItf CATICciCompositesParametersMSSImportExport : public CATBaseUnknown
{
    CATDeclareInterface;

public:

    /**
	* Exports an excel or text file with all data from Master Stacking Sequence.
	* @param iospSheetLaminates
	*    The input sheet of the file you will export the Master Stacking Sequence. <br>WARNING: Only text or excel format taking into account
    * @param oWarningMessage
	*    Message of error if any.
    *@see CATICkeSheet
	*/
    virtual HRESULT ExportMasterStackingSequence(CATICkeSheet_var &iospSheetLaminates, CATUnicodeString &oWarningMessage)=0;

    /**
	* Imports an excel or text file to the Master Stacking Sequence.
    * @param ispSheetLaminates
	*    The input sheet of the file to import into the Master Stacking Sequence. <br>WARNING: Only text or excel format taking into account
    * @param oWarningMessage
	*    Message of error if any.
    *@see CATICkeSheet
	*/
    virtual HRESULT ImportMasterStackingSequence(const CATICkeSheet_var &ispSheetLaminates, CATUnicodeString &oWarningMessage)=0;

};

//-----------------------------------------------------------------------
CATDeclareHandler( CATICciCompositesParametersMSSImportExport, CATBaseUnknown );

#endif
