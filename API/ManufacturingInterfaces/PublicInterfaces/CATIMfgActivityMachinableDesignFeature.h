/* -*-c++-*- */
// COPYRIGHT DASSAULT SYSTEMES  2001
//=============================================================================
//
// CATIMfgActivityMachinableDesignFeature :
//
/**
 * @CAA2Level L1
 * @CAA2Usage U3
*/

#ifndef CATIMfgActivityMachinableDesignFeature_H
#define CATIMfgActivityMachinableDesignFeature_H

#include "MfgItfEnv.h"
#include "CATBaseUnknown.h"
#include "CATListOfCATBaseUnknown.h"


#ifndef LOCAL_DEFINITION_FOR_IID
extern ExportedByMfgItfEnv IID IID_CATIMfgActivityMachinableDesignFeature;
#else
extern "C" const IID IID_CATIMfgActivityMachinableDesignFeature;
#endif

/**   
 * Interface dedicated to manufacturing operation management.
 * <b>Role</b>: This interface offers services mainly to manage links with the design geometry <br>
 */

class ExportedByMfgItfEnv CATIMfgActivityMachinableDesignFeature : public CATBaseUnknown
{
  CATDeclareInterface ;  

  public:
	  
  /**
	* Retrieves the list of geometric elements referenced by the ManufacturingActivity and associated products.
    * @param oListGeom 
	*       the list of geometric elements
	* @param oListProducts 
	*       the list of products
	*/
    virtual HRESULT GetMachinableReferencedGeometry(CATListValCATBaseUnknown_var& oListGeom, CATListValCATBaseUnknown_var& oListProducts) =0; 

	
};

CATDeclareHandler(CATIMfgActivityMachinableDesignFeature, CATBaseUnknown) ;
#endif







