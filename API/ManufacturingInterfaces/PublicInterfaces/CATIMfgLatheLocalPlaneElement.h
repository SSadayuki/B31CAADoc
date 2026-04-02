//===================================================================
// COPYRIGHT Dassault Systemes 2004
//===================================================================

#ifndef CATIMfgLatheLocalPlaneElement_H
#define CATIMfgLatheLocalPlaneElement_H
/**
* @CAA2Level L1
* @CAA2Usage U3
*/

#include "MfgItfEnv.h"
#include "CATBaseUnknown.h"

class CATMathPoint;
class CATMathDirection;
class CATMathAxis;

#ifndef LOCAL_DEFINITION_FOR_IID
extern ExportedByMfgItfEnv IID IID_CATIMfgLatheLocalPlaneElement;
#else
extern "C" const IID IID_CATIMfgLatheLocalPlaneElement ;
#endif

//------------------------------------------------------------------

/**
* Manage Lathe Local Plane Element
*/
class ExportedByMfgItfEnv CATIMfgLatheLocalPlaneElement: public CATBaseUnknown
{
	CATDeclareInterface;

public:

	/**
	* <dl>
	* <pre>
	*       
	*   Set the Local plane on a Lathe Feature
	*   @param oLocalPlaneElement
	*      The returned local plane.
	*   @return
	*      Error code of function.
	* 
	* virtual HRESULT SetLocalPlaneElement (CATBaseUnknown_var& iLocalPlaneElement, const int& iNotif=0) = 0;
	* </pre>
	* </dl>
	*/
	virtual HRESULT SetLocalPlaneElement (CATBaseUnknown_var& iLocalPlaneElement, const int& iNotif = 0)=0;

	/**
	* <dl>
	* <pre>
	*       
	*   Get the Local plane defined on a Lathe Feature
	*   @param oLocalPlaneElement
	*      The returned local plane.
	*   @return
	*      Error code of function.
	* 
	* virtual HRESULT GetLocalPlaneElement(CATBaseUnknown_var& oLocalPlaneElement) = 0;
	* </pre>
	* </dl>
	*/
	virtual HRESULT GetLocalPlaneElement (CATBaseUnknown_var& oLocalPlaneElement)=0;

	/**
	* <dl>
	* <pre>
	*       
	*   Retrieves the Machining Axis System selected for Local Plane definition
	*   @return
	*      Error code of function.
	* 
	* virtual HRESULT GetMachiningAxis ( CATMathAxis & oMathAxis ) = 0;
	* </pre>
	* </dl>
	*/
	virtual HRESULT GetMachiningAxis ( CATMathAxis & oMathAxis )=0;    

	/**
	* <dl>
	* <pre>
	*       
	*   remove the Local plane defined on a Lathe Feature
	*   @return
	*      Error code of function.
	* 
	* virtual int MyFunction (int Arg1) = 0;
	* </pre>
	* </dl>
	*/
	virtual HRESULT RemoveLocalPlaneElement (const int& iNotif=0)=0;

	/**
	* <dl>
	* <pre>
	*       
	*   Retrieves the orthonormalized directions
	*   @return
	*      Error code of function.
	* 
	* virtual HRESULT GetDirections (CATMathPoint & ioOrigin,CATMathDirection & ioAxialDirection,CATMathDirection & ioRadialDirection) = 0;
	* </pre>
	* </dl>
	*/
	virtual HRESULT GetDirections (CATMathPoint & ioOrigin,CATMathDirection & ioAxialDirection,CATMathDirection & ioRadialDirection)=0;

	/**
	* <dl>
	* <pre>
	*       
	*   Retrieves the Machining Axis System based on Axial / Radial definition
	*   X = Axial axis
	*   Y = Radial axis
	*   Z = Axial ^ Radial
	*   @return
	*      Error code of function.
	* 
	* virtual HRESULT GetTurningMachiningAxis ( CATMathAxis & oMathAxis ) = 0;
	* </pre>
	* </dl>
	*/
	virtual HRESULT GetTurningMachiningAxis ( CATMathAxis & oMathAxis )=0;

	// No constructors or destructors on this pure virtual base class
	// --------------------------------------------------------------
};

CATDeclareHandler (CATIMfgLatheLocalPlaneElement, CATBaseUnknown) ;

//------------------------------------------------------------------

#endif
