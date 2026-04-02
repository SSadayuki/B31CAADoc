//=============================================================================
// COPYRIGHT DASSAULT SYSTEMES 2013
//=============================================================================

#ifndef CATIMfgSpiralMilling3x_H
#define CATIMfgSpiralMilling3x_H

/**
* @CAA2Level L1
* @CAA2Usage U3
*/

#include "MfgItfEnv.h"
#include "CATBaseUnknown.h"
#include "CATLISTV_CATBaseUnknown.h"


// OLE iid
#ifndef LOCAL_DEFINITION_FOR_IID
extern IID ExportedByMfgItfEnv IID_CATIMfgSpiralMilling3x;
#else
extern "C" const IID IID_CATIMfgSpiralMilling3x;
#endif


/**   
* Interface dedicated to spirale milling 3x operation
*/
class ExportedByMfgItfEnv CATIMfgSpiralMilling3x : public CATBaseUnknown
{
	CATDeclareInterface ;  

public:

	/**
	* Extract the Brep list which allow to get AUTOMATIC CONTOUR from the selected PART
	* @param listBRep
	*    List of Brep extracted from selected Part
	* @param isAddToOperation
	*    TRUE : extract and return the list of Brep and also specially for Spiral Milling Cycle 
	*           add it automatically as manual contour    
	*    FALSE: extract and return the list of Brep 
	*/
	virtual HRESULT ExtractContourFromPart(CATLISTV(CATBaseUnknown_var)& listBRep, CATBoolean isAddToOperation) = 0;

};

CATDeclareHandler(CATIMfgSpiralMilling3x, CATBaseUnknown) ;

#endif
