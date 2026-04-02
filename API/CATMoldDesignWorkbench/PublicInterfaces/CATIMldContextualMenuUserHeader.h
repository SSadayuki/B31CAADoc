// COPYRIGHT Dassault Systemes 2003

/**
  * @CAA2Level L0
  * @CAA2Usage U5
  */

//===================================================================
//
// CATIMldContextualMenuUserHeader.h
// Define the CATIMldContextualMenuUserHeader interface
//
//===================================================================
//
// Usage notes:
//   New interface: describe its use here
//
//===================================================================

#ifndef CATIMldContextualMenuUserHeader_H
#define CATIMldContextualMenuUserHeader_H

#include "CATMldWksConfiguration.h"
#include "CATBaseUnknown.h"

#ifndef LOCAL_DEFINITION_FOR_IID
extern ExportedByCATMldWksConfiguration IID IID_CATIMldContextualMenuUserHeader;
#else
extern "C" const IID IID_CATIMldContextualMenuUserHeader ;
#endif

class CATListValCATString;

//------------------------------------------------------------------

/**
 * Describe the functionality of your interface here
 * <p>
 * Using this prefered syntax will enable mkdoc to document your class.
 */
class ExportedByCATMldWksConfiguration CATIMldContextualMenuUserHeader: public CATBaseUnknown
{
	CATDeclareInterface;
	
	public:
		
	/**  
	*  Retrieves  the  list  of  command  headers to add to the conextual menu of Mold components 
	*  @param  ioHeadersList  
	*      The  retrieved  list  of  command  headers  
	*/
		
	virtual  HRESULT  GetHeaders(  CATListValCATString  &ioHeadersList  )=  0;  
	
	
	// No constructors or destructors on this pure virtual base class
	// --------------------------------------------------------------
};

CATDeclareHandler( CATIMldContextualMenuUserHeader, CATBaseUnknown );
//------------------------------------------------------------------

#endif
