/* -*-c++-*- */
#ifndef CATIProductSelection_H
#define CATIProductSelection_H

// COPYRIGHT DASSAULT SYSTEMES  1999

/**
  * @CAA2Level L1
  * @CAA2Usage U4 CATPrdCommonFileSelection
  */

#include "AS0STARTUP.h"
#include "CATBaseUnknown.h"
#include "CATCORBABoolean.h"

class CATIContainer;
class CATIProduct;
class CATListValCATBaseUnknown_var;

extern ExportedByAS0STARTUP IID IID_CATIProductSelection ;

/**
 * Interface allowing to extract products (features) from a selection.
 * <b> Role:</b>This interface doesn't describe selection, it is specific for
 * each environment by derived interfaces.
 * For file environment, implementation is done by CATPrdCommonFileSelection on
 * inherit CATIProductFileSelection interface.
 * <p><b>BOA information</b>: this interface CANNOT be implemented
 * using the BOA (Basic Object Adapter).
 * To know more about the BOA, refer to the CAA Encyclopedia home page.
 * Click Middleware at the bottom left, then click the Object Modeler tab page.
 * Several articles deal with the BOA.</p>
 *
 * @see CATIProductFileSelection, CATPrdCommonFileSelection
 */

class ExportedByAS0STARTUP CATIProductSelection: public CATBaseUnknown
{
	CATDeclareInterface;
	
  public:
	
   /**
	* Extracts products corresponding to the selection.
	* The selection can be multiple.
	* <br><b>note:</b> generally the default implementation for specific environment 
	* shouldn't be overloaded ( use provided adapters as CATPrdCommonFileSelection )
	* @param iOptionalContainer
    *     Some implementations may generate some products
	*     corresponding to the selection and need the iOptionalContainer
	*     for this purpose.
	* @param iTargetProduct
	*     Some implementation may need to know attributes of the iTargetProduct
	*     but it must be unchanged.
	* @param oList
	*     The extracted products are added to the oList; if oList is not initialized, 
	*     the implementation must create it. 
	*/	
	virtual HRESULT   ExtractProducts (  CATIContainer                *  iOptionalContainer
									   , CATIProduct                  *  iTargetProduct
									   , CATListValCATBaseUnknown_var *& oList ) = 0;
	
	
   /**
	* Count of selected objects.
	* <br><b>Role:</b> Enables to evaluate how many products are to be generated,
	* before to launch the extraction.
    * <br><b>note:</b> generally the default implementation for specific environment 
	* shouldn't be overloaded ( use provided adapters as CATPrdCommonFileSelection )
	* @param oCount
	*        number of selected products. 
	*/
	
	virtual HRESULT   GetSelectionCount( long & oCount ) = 0;

};


CATDeclareHandler( CATIProductSelection, CATBaseUnknown );

#endif
