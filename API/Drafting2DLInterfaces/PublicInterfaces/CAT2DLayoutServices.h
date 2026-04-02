// COPYRIGHT DASSAULT SYSTEMES 2007
/**
* @CAA2Level L1
* @CAA2Usage U1
*/

#ifndef CAT2DLayoutServices_H
#define CAT2DLayoutServices_H

#include "CATErrorDefs.h"
#include "CATDrafting2DLInterfaces.h"
#include "CATListOfCATUnicodeString.h"

class CATUnicodeString;
class CATI2DLayoutLayout;
class CATIPrtPart;
/**
*   This toolbox purposes services to create or Retrieve a 2D Layout Root from a Mechanical Part.
*  <br><b>Role</b>: A 2D Layout Root is the root for the 2D Layout for 3D Design application.
*/

class ExportedByCATDrafting2DLItfCPP CAT2DLayoutServices
{
public:

	/**
	* Gets list of available 2D Layout standards.
	*
	* <br><b>Role</b>: This method returns the list of available 2D Layout standard.
	* @param oListOfStandards [out]
	*   The list of the available standards
	* @return
	* <dt><tt>S_OK</tt> <dd>if the list of standard is  defined.
	* <dt><tt>E_FAIL</tt> <dd>if the operation failed.
	* </dl>
	*
	*/
	static HRESULT GetAvailable2DLayoutStandards(CATListOfCATUnicodeString &oListOfStandards);

	/**
	* Gets list of available sheet styles  for a defined standard.
	*
	* <br><b>Role</b>: This method returns the list of available sheet styles for the given standard.
	* @param iStandardName[in]
	*   The Standard name.
	* @param oListOfSheetStyles [out]
	*   The list of sheet styles 
	* @return
	* <dt><tt>S_OK</tt> <dd>if the list of standard is  defined.
	* <dt><tt>E_FAIL</tt> <dd>if the operation failed.
	* <dt><tt>E_INVALIDARG</tt> <dd>if the standard does not exist.
	* </dl>
	*
	*/
	static HRESULT GetListOfSheetStyles(CATUnicodeString iStandardName,CATListOfCATUnicodeString &oListOfSheetStyles);


	/** 
	* Creates a 2D Layout Root from a Mechanical Part.
	*
	* <br><b>Role</b>: This method creates a 2D Layour Root from a Mechanical Part. 
	* A standard and a sheet style must be informed.
	*
	* @param i2DLStandardName [in]
	*   The 2DL standard name.
	*
	* @param i2DLSheetStyleName [in]
	*   The Style of the 2DL sheet
	*
	* @param opi2DLRoot [out, CATBaseUnknown#Release]
	*   The 2DL Root.
	*
  * @param iSheetOrient [in]
  *   To override the sheet orientation defined in the sheet style.
  *   Note: The override may be not performed if the sheet orientation parameter is locked by the sheet style.
  *    <br>Legal values are:
  *    <dl>
  *    <dt><tt> = 0 </tt> <dd>The sheet orientation defined by the sheet style (Default value).</dd>
  *    <dt><tt> = 1 </tt> <dd>Portrait orientation. .</dd>
  *    <dt><tt> = 2 </tt> <dd>Landscape orientation.</dd>
  *    </dl>
	* @return
	* <dt><tt>S_OK</tt> <dd>if the 2D Layout Root is created.
	* <dt><tt>E_FAIL</tt> <dd>if the operation failed.
	* </dl>
	*/
	static HRESULT CreateLayout2DL(CATIPrtPart *ipiPrtPart, const CATUnicodeString &i2DLStandardName, const CATUnicodeString &i2DLSheetStyle, 
                                 CATI2DLayoutLayout ** opi2DLayoutRoot,int iSheetOrient = 0);

	/** 
	* Gets the 2D Layout Root Object From a Mechanical Part.
	*
	* @param ipiPrtPart [in]
	*   The Mechanical Part.
	* @param opi2DLayoutRoot [out, CATBaseUnknown#Release]
	*   The "2D Layout Root.
	*
	* @return
	* <dt><tt>S_OK</tt> <dd>if the 2DL Layout Root is found.
	* <dt><tt>S_FALSE</tt> <dd>if the 2DL Layout Root is not found.
	* <dt><tt>E_FAIL</tt> <dd>if the operation failed.
	* </dl>
	*
	*/
	static HRESULT GetLayout2DL(CATIPrtPart * ipiPrtPart, CATI2DLayoutLayout ** opi2DLayoutRoot);
};
#endif
