/* -*-c++-*- */
#ifndef CATPrdCommonFileSelection_h
#define CATPrdCommonFileSelection_h
// COPYRIGHT DASSAULT SYSTEMES  1999

/**
  * @CAA2Level L1
  * @CAA2Usage U2
  */

#include "AS0STARTUP.h"
#include "CATBaseUnknown.h"
#include "CATListOfCATUnicodeString.h"


class CATIProduct;
class CATIContainer;
class CATListValCATBaseUnknown_var;

/**
* Base class to give basic implementation for CATIProductFileSelection.
* <b>usage:</b> To define a new kind of file recognized by ProductStructure's import,
* use C++ inheritance on CATPrdCommonFileSelection class to implement this interface on your file, 
* and in the constructor of the implementation, add the kind of file to recognize.
*
* @see CATIProductFileSelection, CATIProductSelection
*/

class ExportedByAS0STARTUP CATPrdCommonFileSelection : public CATBaseUnknown
{
public:
	/**
	* Constructs a CATPrdCommonFileSelection.
	* <br><b>usage:</b> Add the kind of file to recognize in _typesList after creating that list.
	*/
	CATPrdCommonFileSelection();

	virtual ~CATPrdCommonFileSelection();

	/** @nodoc */
	virtual HRESULT GetRecognizedPathExtensions(
		CATListOfCATUnicodeString *& ioListOfTypes );
	/** @nodoc */
	virtual HRESULT KeepRecognizedFiles(
		CATListOfCATUnicodeString *& ioListOfPaths,
		CATListOfCATUnicodeString *& ioListOfPathExtensions );
	/** @nodoc */
	virtual HRESULT GetCurrentFiles(
		CATListOfCATUnicodeString *& ioListOfPaths );
	/** 
	* Default implementation assumes that each selected file is able to generate exactly one product.
	*/
	virtual HRESULT GetSelectionCount( long & oCount );
	/** @nodoc */
	virtual HRESULT UnkeepAll ();
	/** 
	* Extracts products representing the selected files.
	* <br>Default implementation is valid for files which contain 3D information ( as vrml ).
	*/
	virtual HRESULT ExtractProducts(
		CATIContainer                *  iOptionalContainer,
		CATIProduct                  *  iTargetProduct,
		CATListValCATBaseUnknown_var *& oList );


protected:
	/**
	* @nodoc
	* current list of selected paths.
	*/
	CATListOfCATUnicodeString * _pathsList;
	/**
	* @nodoc
	* list of recognized types.
	*/
	CATListOfCATUnicodeString * _typesList;
};

#endif
