
/**
  * @CAA2Level L0
  * @CAA2Usage U3
  */

// COPYRIGHT Dassault Systemes 2007
//===================================================================
//
// CATIMldTechResThread.h
// Define the CATIMldTechResThread interface
//
//===================================================================
//
// Usage notes:
//    Interface to manage a Hole Technological Result
//
//===================================================================

#ifndef CATIMldTechResThread_H
#define CATIMldTechResThread_H

#include "CATMldTechnoResultItfCPP.h"
#include "CATBaseUnknown.h"

class CATUnicodeString;

#ifndef LOCAL_DEFINITION_FOR_IID
extern ExportedByCATMldTechnoResultItfCPP IID IID_CATIMldTechResThread;
#else
extern "C" const IID IID_CATIMldTechResThread ;
#endif

//------------------------------------------------------------------

/**
*  Interface representing a Thread Technological Result
*/
class ExportedByCATMldTechnoResultItfCPP CATIMldTechResThread: public CATBaseUnknown
{
  CATDeclareInterface;

	public:

	/**   
	*	Retrieve the Diameter of the thread Technological Result 
	*	@param oDiameter
	*		Thread Diameter
	*	@param oDiameterUpTol
	*		Diameter upper tolerance
	*	@param oDiameterDownTol
	*		Diameter lower tolerance
	*	@return
	*		An <tt>HRESULT</tt> value.
	*		<br><b>Legal values</b>:
	*		<dl>
	*		<dt> <tt>S_OK</tt>     <dd> Retrieving parameters succeeds.
	*		<dt> <tt>S_FALSE</tt>  <dd> No parameters.
	*		<dt> <tt>E_FAIL</tt>   <dd> Failure to retrieve the parameters.
	*		</dl>
	*/
	virtual HRESULT GetThreadDiameter(	double &oDiameter,
													double &oDiameterUpTol,
													double &oDiameterDownTol)  = 0;
	/**   
	*	Retrieve the Nominal Diameter of the thread Technological Result 
	*	@param oDiameter
	*		Thread Nominal Diameter
	*	@return
	*		An <tt>HRESULT</tt> value.
	*		<br><b>Legal values</b>:
	*		<dl>
	*		<dt> <tt>S_OK</tt>     <dd> Retrieving parameters succeeds.
	*		<dt> <tt>S_FALSE</tt>  <dd> No parameters.
	*		<dt> <tt>E_FAIL</tt>   <dd> Failure to retrieve the parameters.
	*		</dl>
	*/
	virtual HRESULT GetThreadNominalDiameter(double &oNominalDiameter)  = 0;

	/**   
	*	Retrieve the Support Diameter of the thread Technological Result 
	*	@param oSupportDiameter
	*		Thread support Diameter
	*	@param  oSupportDiameterUpTol
	*		Support Diameter upper tolerance
	*	@param oSupportDiameterDownTol
	*		Support Diameter lower tolerance
	*	@return
	*		An <tt>HRESULT</tt> value.
	*		<br><b>Legal values</b>:
	*		<dl>
	*		<dt> <tt>S_OK</tt>     <dd> Retrieving parameters succeeds.
	*		<dt> <tt>S_FALSE</tt>  <dd> No parameters.
	*		<dt> <tt>E_FAIL</tt>   <dd> Failure to retrieve the parameters.
	*		</dl>
	*/
	virtual HRESULT GetThreadSupportDiameter(	double &oSupportDiameter,
															double &oSupportDiameterUpTol,
															double &oSupportDiameterDownTol)  = 0;

	/**   
	*	Retrieve the depth of the thread Technological Result 
	*	@param  oDepth
	*		Thread depth
	*	@param oDepthUpTol
	*		Depth upper tolerance
	*	@param oDepthDownTol
	*		depth lower tolerance
	*	@return
	*		An <tt>HRESULT</tt> value.
	*		<br><b>Legal values</b>:
	*		<dl>
	*		<dt> <tt>S_OK</tt>     <dd> Retrieving parameters succeeds.
	*		<dt> <tt>S_FALSE</tt>  <dd> No parameters.
	*		<dt> <tt>E_FAIL</tt>   <dd> Failure to retrieve the parameters.
	*		</dl>
	*/
	virtual HRESULT GetThreadDepth(	double &oDepth,
												double &oDepthUpTol,
												double &oDepthDownTol)  = 0;

	/**   
	*	Retrieve the pitch of the thread Technological Result 
	*	@param oPitch
	*		Thread pitch
	*	@param oPicthUpTol
	*		depth upper tolerance
	*	@param oPitchDownTol
	*		depth lower tolerance
	*	@return
	*		An <tt>HRESULT</tt> value.
	*		<br><b>Legal values</b>:
	*		<dl>
	*		<dt> <tt>S_OK</tt>     <dd> Retrieving parameters succeeds.
	*		<dt> <tt>S_FALSE</tt>  <dd> No parameters.
	*		<dt> <tt>E_FAIL</tt>   <dd> Failure to retrieve the parameters.
	*		</dl>
	*/
	virtual HRESULT GetThreadPitch(	double &oPitch,
												double &oPitchUpTol,
												double &oPitchDownTol)  = 0;

	/**   
	*	Retrieve the description of the thread Technological Result 
	*	@param oDescription
	*		Thread Description (eg. M10)
	*	@return
	*		An <tt>HRESULT</tt> value.
	*		<br><b>Legal values</b>:
	*		<dl>
	*		<dt> <tt>S_OK</tt>     <dd> Retrieving parameters succeeds.
	*		<dt> <tt>S_FALSE</tt>  <dd> No parameters.
	*		<dt> <tt>E_FAIL</tt>   <dd> Failure to retrieve the parameters.
	*		</dl>
	*/
	virtual HRESULT GetThreadDescription(CATUnicodeString &oDescription)  = 0;

	/**   
	*	Retrieve the key of the thread Technological Result 
	*	@param oKey
	*		Thread Key
	*	@return
	*		An <tt>HRESULT</tt> value.
	*		<br><b>Legal values</b>:
	*		<dl>
	*		<dt> <tt>S_OK</tt>     <dd> Retrieving parameters succeeds.
	*		<dt> <tt>S_FALSE</tt>  <dd> No parameters.
	*		<dt> <tt>E_FAIL</tt>   <dd> Failure to retrieve the parameters.
	*		</dl>
	*/
	virtual HRESULT GetKeyOfThread(CATUnicodeString &oKey)  = 0;

	/**   
	*	Retrieve the side of the thread Technological Result 
	*	@param oThreadSide
	*		Thread Side 
	*	@return
	*		An <tt>HRESULT</tt> value.
	*		<br><b>Legal values</b>:
	*		<dl>
	*		<dt> <tt>S_OK</tt>     <dd> Retrieving parameters succeeds.
	*		<dt> <tt>S_FALSE</tt>  <dd> No parameters.
	*		<dt> <tt>E_FAIL</tt>   <dd> Failure to retrieve the parameters.
	*		</dl>
	*/
	virtual HRESULT GetThreadSide(int &oThreadSide)  = 0;

	/**   
	*	Retrieve the type of the thread Technological Result. 
	*	@param oThreadType
	*		Thread type (0 : Thread, 1 : Tap)
	*	@return
	*		An <tt>HRESULT</tt> value.
	*		<br><b>Legal values</b>:
	*		<dl>
	*		<dt> <tt>S_OK</tt>     <dd> Retrieving parameters succeeds.
	*		<dt> <tt>S_FALSE</tt>  <dd> No parameters.
	*		<dt> <tt>E_FAIL</tt>   <dd> Failure to retrieve the parameters.
	*		</dl>
	*/
	virtual HRESULT GetThreadType(int &oThreadType)  = 0;

};
CATDeclareHandler( CATIMldTechResThread, CATBaseUnknown );
//------------------------------------------------------------------

#endif
