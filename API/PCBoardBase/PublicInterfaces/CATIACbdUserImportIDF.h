#ifndef CATIACbdUserImportIDF_H
#define CATIACbdUserImportIDF_H
 // COPYRIGHT DASSAULT SYSTEMES 2013
/**
  * @CAA2Level L1
  * @CAA2Usage U4 CATCbdUserImportAdapter
*/
 

#include "PCBItfCPP.h"
#include "CATBaseUnknown.h"
#include "CATUnicodeString.h"

class CATDlgProgress;
 #ifndef LOCAL_DEFINITION_FOR_IID
 extern ExportedByPCBItfCPP IID IID_CATIACbdUserImportIDF;
 #else
  extern "C" const IID IID_CATIACbdUserImportIDF;
 #endif

/**
  * Interface to implement by late type CATCbdSoftwareOpeness.
  * <b>Role:</b> If this interface is implemented by using this late type, 
  * the main import box of Circuit Board Design is modified as following :
  * <br>
  * a path has to be selected for exporting the report test file of the import
  * <br>
  * a choice for importing or not IDF 3.0 ++ features 
  * <br>
  * a selection of thickness for the copper holes.
  *<br>
  * <b>Important notice</b>: Using the @href CATCbdUserImportAdapter as a base class
  * when implementing <tt>CATIACbdUserImportIDF</tt> is mandatory. 
  * <p><b>BOA information</b>: this interface can be implemented
  * using the BOA (Basic Object Adapter).
  * To know more about the BOA, refer to the CAA Encyclopedia home page. 
  * Click Middleware at the bottom left, then click the Object Modeler tab page.
  * Several articles deal with the BOA.</p>
  */


class ExportedByPCBItfCPP CATIACbdUserImportIDF: public CATBaseUnknown
{
CATDeclareInterface;

public:

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

	virtual HRESULT IsLicenseAvailable () = 0 ;


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
			const CATUnicodeString iImportOutputPath) = 0;


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
	virtual HRESULT SetProgressionBar(CATDlgProgress * iptrProgressBar) = 0 ;
			

};

//-----------------------------------------------------------------------

#endif
