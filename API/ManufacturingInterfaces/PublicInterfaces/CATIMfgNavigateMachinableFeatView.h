/* -*-c++-*- */
//===================================================================
// COPYRIGHT Dassault Systemes 2001
//===================================================================
//
// CATIMfgNavigateMachinableFeatView.h
// Define the CATIMfgNavigateMachinableFeatView interface
//
//===================================================================
//  Sep. 2001  Creation:                                  C.PETIT
//===================================================================
/**
 * @CAA2Level L1
 * @CAA2Usage U3
*/
#ifndef CATIMfgNavigateMachinableFeatView_H
#define CATIMfgNavigateMachinableFeatView_H

#include "MfgItfEnv.h"

// inheritance
#include "CATINavigateObject.h"//"CATBaseUnknown.h"

// System framework
#include "CATBoolean.h"

// forward declaration
class CATListValCATUnicodeString;
class CATListValCATBaseUnknown_var;

#ifndef LOCAL_DEFINITION_FOR_IID
extern ExportedByMfgItfEnv IID IID_CATIMfgNavigateMachinableFeatView ;
#else
extern "C" const IID IID_CATIMfgNavigateMachinableFeatView;
#endif

/**
 * Navigation interface dedicated to navigate through the manufacturing model 
 * when displayed by machinable features.
 */
class ExportedByMfgItfEnv CATIMfgNavigateMachinableFeatView: public CATINavigateObject//CATBaseUnknown
{
  CATDeclareInterface;

public :
  
	/**
	* Returns nodes identificators.
	*/
	//virtual CATListValCATUnicodeString* GetIdentificators()=0;
		
	/**
	* Returns list of direct children in the tree.
	*/
	//virtual CATListValCATBaseUnknown_var* GetChildren()=0;

	/**
	* Return TRUE or FALSE to display this feature in the tree.
	*/
  virtual CATBoolean IsVisible(void) = 0;
  
  // No constructors or destructors on this pure virtual base class
  // --------------------------------------------------------------
};

CATDeclareHandler(CATIMfgNavigateMachinableFeatView, CATINavigateObject) ;

#endif
