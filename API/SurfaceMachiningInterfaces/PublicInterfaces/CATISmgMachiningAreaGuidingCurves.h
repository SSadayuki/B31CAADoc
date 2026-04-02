#ifndef CATISmgMachiningAreaGuidingCurves_H
#define CATISmgMachiningAreaGuidingCurves_H
//=================================================================================
// COPYRIGHT DASSAULT SYSTEMES 2002
//=================================================================================

/**
 * @CAA2Level L1
 * @CAA2Usage U3
 */

#include "SmgItfEnv.h"
#include "CATBaseUnknown.h"
#include "CATListOfCATCurves.h"

#ifndef LOCAL_DEFINITION_FOR_IID
extern ExportedBySmgItfEnv IID IID_CATISmgMachiningAreaGuidingCurves;
#else
extern "C" const IID IID_CATISmgMachiningAreaGuidingCurves;
#endif

/**
 * Interface dedicated to Guiding Curves elements of a Machining Area.
 * <br><b>Role</b>: This interface offers services to retrieve guiding curves
 * from a Machining Area.
 */

class ExportedBySmgItfEnv CATISmgMachiningAreaGuidingCurves : public CATBaseUnknown
{
	CATDeclareInterface ;  
	
	public:

/**
 * Retrieves the geometric elements from the guiding curves of a Machining Area.
 * @param oListOfCATCurves
 *   The referenced CATCurves found.
 */
	virtual HRESULT GetResultingCATCurves (CATLISTP(CATCurve)& oListOfCATCurves) = 0; 

/**
 * Modifies the geometry status of the guiding curves.
 * @param iState
 *   <br><b>Legal values</b>:
 *   <dl>
 *     <dt><tt>0</tt>   <dd> Guiding curves are optional parameters (default)
 *     <dt><tt>1</tt>   <dd> Guiding curves are mandatory parameters
 *   </dl>
 */
	virtual HRESULT SetStatus(const int iState) = 0;

/**
 * Checks if the guiding curves are mandatory.
 * @param oState
 *   <br><b>Legal values</b>:
 *   <dl>
 *     <dt><tt>0</tt>   <dd> Guiding curves are optional parameters
 *     <dt><tt>1</tt>   <dd> Guiding curves are mandatory parameters
 *   </dl>
 */
	virtual HRESULT GetStatus(int& oState) = 0;
};

CATDeclareHandler( CATISmgMachiningAreaGuidingCurves, CATBaseUnknown) ;

#endif
