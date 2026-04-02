/* -*-c++-*- */
#ifndef CATIProductFileSelection_h
#define CATIProductFileSelection_h
// COPYRIGHT DASSAULT SYSTEMES  1999

/**
  * @CAA2Level L1
  * @CAA2Usage U4 CATPrdCommonFileSelection
  */

#include "AS0STARTUP.h"
#include "CATIProductSelection.h"
#include "CATListOfCATUnicodeString.h"

extern ExportedByAS0STARTUP IID IID_CATIProductFileSelection ;

/**
 * Interface to define allowed kinds of files to be imported in a product.
 * <b>Role:</b> Each implementation is able to process selected files of a specific type.
 * A default behaviour is provided in class CATPrdCommonFileSelection.
 * Concerns file environment only.
 * <p><b>BOA information</b>: this interface CANNOT be implemented
 * using the BOA (Basic Object Adapter).
 * To know more about the BOA, refer to the CAA Encyclopedia home page.
 * Click Middleware at the bottom left, then click the Object Modeler tab page.
 * Several articles deal with the BOA.</p>
 * @see CATIProductSelection, CATPrdCommonFileSelection
*/

class ExportedByAS0STARTUP CATIProductFileSelection : public CATIProductSelection 
{
	CATDeclareInterface;
	
  public:

	/**
	 * @nodoc internal.  
	 * Gets extensions to recognise in ProductStructure import's panel.
	 * <b>Note:</b> Don't overload this method here. You have to define 
	 * that list by using CATPrdCommonFileSelection.
	 * @see CATPrdCommonFileSelection
	 * @param ioListOfTypes
	 *        Append specific types to current list( build the list if necessary ).
	 */
	virtual HRESULT GetRecognizedPathExtensions( CATListOfCATUnicodeString *& ioListOfTypes ) = 0;


	/**
	 * @nodoc internal.  
	 * Gives access to buffered paths of selected files.
	 * <b>Note:</b> Don't overload this method here. It's done in CATPrdCommonFileSelection. 
	 */
	virtual HRESULT GetCurrentFiles( CATListOfCATUnicodeString *& oListOfPaths ) = 0;

	/**
     * @nodoc internal.
     * Bufferizes paths of files which can be processed.
	 * KeepRecognizedFiles method needs two coherent lists in input
	 * and must return coherent lists composed of unrecognized types and
	 * related paths.
	 * <b>Note:</b> Don't overload this method here. It's done in CATPrdCommonFileSelection. 
	 */
	virtual HRESULT KeepRecognizedFiles( CATListOfCATUnicodeString *& ioListOfPaths,
	                                     CATListOfCATUnicodeString *& ioListOfPathExtensions ) = 0;
	/**
     * @nodoc internal.
	 * Release selected paths.
	 * <b>Note:</b> Don't overload this method here. It's done in CATPrdCommonFileSelection.
	 */
	virtual HRESULT UnkeepAll() = 0;

};

CATDeclareHandler(CATIProductFileSelection,CATIProductSelection);
	
#endif 
