#ifndef CATISmgMachiningAreaForbiddenZone_H
#define CATISmgMachiningAreaForbiddenZone_H
//=================================================================================
// COPYRIGHT DASSAULT SYSTEMES 2002
//=================================================================================

/**
 * @CAA2Level L1
 * @CAA2Usage U3
 */

#include "SmgItfEnv.h"
#include "CATBaseUnknown.h"
#include "CATGeometry.h"

#ifndef LOCAL_DEFINITION_FOR_IID
extern ExportedBySmgItfEnv IID IID_CATISmgMachiningAreaForbiddenZone;
#else
extern "C" const IID IID_CATISmgMachiningAreaForbiddenZone;
#endif

/**
 * Interface dedicated to forbidden zone elements of a Machining Area.
 * <br><b>Role</b>: This interface offers services to retrieve forbidden zone elements
 * from a Machining Area.
 */

class ExportedBySmgItfEnv CATISmgMachiningAreaForbiddenZone : public CATBaseUnknown
{
	CATDeclareInterface ;  
	
	public:

/**
 * Retrieves the geometric elements from the forbidden zone of a Machining Area.
 * @param iAllGeometricElements
 *   Specifies if all geometric elements must be retrieved.
 *   <br><b>Legal values</b>: The parameter can be
 *   <dl>
 *     <dt><tt>0</tt>   <dd>Only geometric elements on the visible space are retrieved (default value)
 *     <dt><tt>1</tt>   <dd>All geometric elements are retrieved
 *   </dl>
 *
 * @param iDuplicate
 *   Specifies if the geometric elements must be duplicated
 *   <br><b>Legal values</b>: The parameter can be
 *   <dl>
 *     <dt><tt>0</tt>   <dd>Geometric elements are duplicated only if necessary in a product context (default value)
 *     <dt><tt>1</tt>   <dd>Geometric elements are duplicated
 *   </dl>
 *
 * @param oGeometricElements
 *   The geometric elements found.
 */
	virtual HRESULT GetGeometricElements (CATLISTP(CATGeometry) &oGeometricElements, int iAllGeometricElements = 0, int iDuplicate = 0) = 0; 

/**
 * Modifies the geometry status of the forbidden zone.
 * @param iState
 *   <br><b>Legal values</b>:
 *   <dl>
 *     <dt><tt>0</tt>   <dd> The forbidden zone is an optional parameter (default)
 *     <dt><tt>1</tt>   <dd> The forbidden zone is a mandatory parameter
 *   </dl>
 */
	virtual HRESULT SetStatus(const int iState) = 0;

/**
 * Checks if the forbidden zone is a mandatory parameter.
 * @param oState
 *   <br><b>Legal values</b>:
 *   <dl>
 *     <dt><tt>0</tt>   <dd> The forbidden zone is an optional parameter
 *     <dt><tt>1</tt>   <dd> The forbidden zone is a mandatory parameter
 *   </dl>
 */
	virtual HRESULT GetStatus(int& oState) = 0;

};

CATDeclareHandler( CATISmgMachiningAreaForbiddenZone, CATBaseUnknown) ;

#endif
