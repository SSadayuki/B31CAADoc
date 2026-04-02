//===================================================================
// COPYRIGHT DASSAULT SYSTEMES 2013/08/05
//===================================================================
// CATCbdUserImportAdapter.cpp
// Header definition of class CATCbdUserImportAdapter
//===================================================================
//
// Usage notes: This class is used for the implementation of the interface CATIACbdUserImportIDF
//               the late type to use is  CATCbdSoftwareOpeness
//
//===================================================================
//  2013/08/05 Creation: PVN
//===================================================================
/**
  * @CAA2Level L1
  * @CAA2Usage U2
*/

#ifndef CATCbdUserImportAdapter_H
#define CATCbdUserImportAdapter_H

#include "PCBItfCPP.h"
#include "CATIACbdUserImportIDF.h"
#include "CATBaseUnknown.h"
#include "CATUnicodeString.h"
/**
  * Base class to use for the implementation of CATIACbdUserImportIDF interface.
  * The late type to use is CATCbdSoftwareOpeness.
  */




//-----------------------------------------------------------------------

class ExportedByPCBItfCPP CATCbdUserImportAdapter: public CATIACbdUserImportIDF
{

public:
// Standard constructors and destructors
// -------------------------------------
CATCbdUserImportAdapter ();
virtual ~CATCbdUserImportAdapter ();


 /**
   * Check if the license of the partner is activated on the current installation.
   * <br><b>Role:</b>
   * this method is called by the CBD import code. 
   * <br>
   * If the return value is S_OK , the new 
   * section in the dialog box is displayed and activated. 
   * <br>
   * If the return value is E_FAIL, the new new 
   * section in the dialog box is displayed and deactivated. 
   * <br>
   * @return
   *   S_OK or E_FAIL
   */
	virtual HRESULT IsLicenseAvailable () ;

	/**
   * Import an IDF file using the implementation of the partner. 
   * <br><b>Role:</b> The import IDF can be provided by a partner supporting IDF 3.0 + features. 
   * @param iRootProduct
   *  The root product of the current opened document
   * @param iBoardReference
   *  The current Board reference . Only valuated in mode Import in context. 
   * @param iPathFile
   * path of the IDF file to import
   * @param iPathLib 
   * path of  the library file to import (can be empty) 
   * @param iCatalogPath 
   *  path of  the catalog file where the components are stored potentially (can be empty) 
   * @param iWithCatalog
   * true if the catalog option is checked 
   * @param icataloginReadWrite
   * true if the catalog is in readWrite mode 
   * @param iCsvPath
   * path of the csv file (can be empty) 
   * @param iWithCsvFile
   * true if the csv file option is checked 
   * @param DrillHoles
   * true is the DrillHoles option is checked
   * @param	iImportCopperAndLayer
   * true if the import of the IDF 3.0+ features option is checked
   * @param iHoleCopperThickness,
   * The thickness of the copper holes  in USI unit.
   * @param iImportOutputPath
   * the path if the output import Report
   * @return
   *   S_OK or E_FAIL
   */

	virtual HRESULT ImportFile(
		  	const CATBaseUnknown_var & iRootProduct,
			const CATBaseUnknown_var &iBoardReference,
			const CATUnicodeString & iPathFile,
			const CATUnicodeString &iPathLib,
			const CATUnicodeString & iCatalogPath,
			boolean iWithCatalog ,
			boolean icataloginReadWrite,
			const CATUnicodeString &iCsvPath,
			boolean iWithCsvFile,
			boolean DrillHoles,
			boolean iImportCopperAndLayer,
			double iHoleCopperThickness ,
			const CATUnicodeString iImportOutputPath);
			

	/**
	 * Set the progression bar object
	 * <br><b>Role:</b> this method allows giving a pointer on the  progression bar object displayed in the Import IDF dialog box.
	 * <br>
	 * The partner will be able to manage the range and steps of the  progression bar. 
	 * <br>
	 * @param iptrProgressBar
     *  The root product of the current opened document
	 * @return
     *   S_OK or E_FAIL
	*/

	virtual HRESULT SetProgressionBar(CATDlgProgress * iptrProgressBar) ;


private:
// Copy constructor and equal operator
// -----------------------------------
CATCbdUserImportAdapter (CATCbdUserImportAdapter &);
CATCbdUserImportAdapter& operator=(CATCbdUserImportAdapter&);

};

//-----------------------------------------------------------------------

#endif
