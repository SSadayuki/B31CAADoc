//===================================================================
// COPYRIGHT DASSAULT SYSTEMES 2009
//===================================================================
//
// CATIMfgMultiAxisCurveMachiningAuxDrive.h
//
//===================================================================

#ifndef CATIMfgMultiAxisCurveMachiningAuxDrive_H
#define CATIMfgMultiAxisCurveMachiningAuxDrive_H

/**
 * @CAA2Level L1
 * @CAA2Usage U3
 */

#include "SmgItfEnv.h"
#include "CATBaseUnknown.h"

#ifndef LOCAL_DEFINITION_FOR_IID
extern ExportedBySmgItfEnv IID IID_CATIMfgMultiAxisCurveMachiningAuxDrive;
#else
extern "C" const IID IID_CATIMfgMultiAxisCurveMachiningAuxDrive ;
#endif

/**
 * Interface for multi axis curve machining operations.
 */

class ExportedBySmgItfEnv CATIMfgMultiAxisCurveMachiningAuxDrive: public CATBaseUnknown
{
    CATDeclareInterface;

    public:

	/**
	* Sets the auxiliary drive geometry of the operation (geometry shown in the strategy tab).
	*
	* @param iReference
	*		the geometry referenced as an auxiliary drive by the operation
	* @param iProduct
	*		the belonging product of the referenced geometry
	*/
	virtual HRESULT SetAuxDriveGeometry (const CATBaseUnknown_var & iReference, const CATBaseUnknown_var & iProduct) = 0;

   /**
	* Resets all the Auxiliary drive geometry of the operation.
	*/
	virtual HRESULT RemoveAuxDriveGeometries () = 0;

	/**
	* Sets the Direction to take as constraint used in case of tool axis mode equal to 4-Axis lead/lag.
	* @param iReference
	*   The geometric element to set.
	*
	* @param iProduct
	*   The associated product of the referenced geometry.
	*
	* @return
	*    <dl>
	*      <dt><tt>S_OK</tt>    <dd>if the method succeeds
	*      <dt><tt>E_FAIL</tt>  <dd>if iReference is not valid
	*    </dl>
	*/
	virtual HRESULT Set4XNormalConstraint(const CATBaseUnknown_var & iReference, const CATBaseUnknown_var & iProduct) = 0;

	
	/**
	* Removes the Direction to take as constraint used in case of tool axis mode equal to 4-Axis lead/lag.
	* @return
	*    <dl>
	*      <dt><tt>S_OK</tt>    <dd>if the method succeeds
	*    </dl>
	*/
	virtual HRESULT Remove4XNormalConstraint() = 0;
};

CATDeclareHandler( CATIMfgMultiAxisCurveMachiningAuxDrive, CATBaseUnknown) ;

#endif
