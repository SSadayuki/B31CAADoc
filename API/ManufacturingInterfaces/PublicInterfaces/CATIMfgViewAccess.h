/* -*-c++-*- */
// COPYRIGHT DASSAULT SYSTEMES 2001
//=============================================================================

#ifndef CATIMfgViewAccess_H
#define CATIMfgViewAccess_H

/**
* @CAA2Level L1
* @CAA2Usage U3
*/

#include "MfgItfEnv.h"
#include "CATIProduct.h"
#include "CATBaseUnknown.h"

#ifndef LOCAL_DEFINITION_FOR_IID
extern ExportedByMfgItfEnv IID IID_CATIMfgViewAccess;
#else
extern "C" const IID IID_CATIMfgViewAccess;
#endif

/**
* Interface to add a manufacturing feature to the manufacturing view.
* <br><b>Role</b>: CATIMfgViewAccess has methods to add a manufacturing feature
* to the manufacturing view.
*/

class ExportedByMfgItfEnv CATIMfgViewAccess : public CATBaseUnknown
{
	CATDeclareInterface ;  

public:  

	/**
	* Adds a manufacturing feature to the manufacturing view. 
	* @param iFeatureToAdd
	*   The manufacturing feature to add 
	*/

	virtual HRESULT AddFeature (const CATBaseUnknown_var &iFeatureToAdd) = 0; 

	/**
	* Creates Machinable feature using Technological Results of UDF.
	* <dl>
	* <dt><b>Example:</b>
	* <dd>The following example takes <tt>iFinishPartProduct</tt>  
	* and Create MAF in <tt>MfgView</tt>:
	* <pre>
	* MfgView.CreateAllMachinableAreaFeaturesFromTechResultsOfUDF(iFinishPartProduct)
	*</pre>
	* </dl>
	*/

	virtual HRESULT	CreateAllMachinableAreaFeaturesFromTechResultsOfUDF(CATIProduct_var& iFinishPartProduct)=0;
};

CATDeclareHandler(CATIMfgViewAccess, CATBaseUnknown);

#endif


