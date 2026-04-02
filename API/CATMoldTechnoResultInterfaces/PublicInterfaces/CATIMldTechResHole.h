
/**
  * @CAA2Level L0
  * @CAA2Usage U3
  */

// COPYRIGHT Dassault Systemes 2007
//===================================================================
//
// CATIMldTechResHole.h
// Define the CATIMldTechResHole interface
//
//===================================================================
//
// Usage notes:
//    Interface to manage a Hole Technological Result
//
//===================================================================

#ifndef CATIMldTechResHole_H
#define CATIMldTechResHole_H

#include "CATMldTechnoResultItfCPP.h"
#include "CATBaseUnknown.h"

class CATIMldTechResThread;

#ifndef LOCAL_DEFINITION_FOR_IID
extern ExportedByCATMldTechnoResultItfCPP IID IID_CATIMldTechResHole;
#else
extern "C" const IID IID_CATIMldTechResHole ;
#endif

//------------------------------------------------------------------

/**
*  Interface representing a Hole Technological Result 
*/
class ExportedByCATMldTechnoResultItfCPP CATIMldTechResHole: public CATBaseUnknown
{
  CATDeclareInterface;

  public:

    /**   
		*	  Retrieve the associated Thread Technological Result from this Hole Technological Result
		*	  @param opiTRThread
		*				the Thread Technological Result 
		*    @return
		*    An <tt>HRESULT</tt> value.
		*    <br><b>Legal values</b>:
		*    <dl>
		*    <dt> <tt>S_OK</tt>     <dd> Retrieving parameters succeeds.
		*    <dt> <tt>S_FALSE</tt>  <dd> No parameters.
		*    <dt> <tt>E_FAIL</tt>   <dd> Failure to retrieve the parameters.
		*    </dl>
		*/
		virtual HRESULT GetAssociatedTRThread(CATIMldTechResThread **opiTRThread)  = 0;
      
		/**   
		*	  Retrieve the Type attribute of the Hole Technological Result 
		*    @param oType
		*				Hole Type (Simple, Tapered, CounterSunk CounterBored, CounterDrilled)
		*    @return
		*    An <tt>HRESULT</tt> value.
		*    <br><b>Legal values</b>:
		*    <dl>
		*    <dt> <tt>S_OK</tt>     <dd> Retrieving parameters succeeds.
		*    <dt> <tt>S_FALSE</tt>  <dd> No parameters.
		*    <dt> <tt>E_FAIL</tt>   <dd> Failure to retrieve the parameters.
		*    </dl>
		*/
      virtual HRESULT GetHoleType(int &oType)  = 0;

		/**   
		*	  Retrieve the Diameter attribute of the Hole Technological Result 
		*     @param oDiameter
		*				Hole diameter
		*     @param oDiameterUpTol
		*				Hole diameter upper tolerance
		*     @param oDiameterDownTol
		*				Hole diameter lower tolerance
		*    @return
		*    An <tt>HRESULT</tt> value.
		*    <br><b>Legal values</b>:
		*    <dl>
		*    <dt> <tt>S_OK</tt>     <dd> Retrieving parameters succeeds.
		*    <dt> <tt>S_FALSE</tt>  <dd> No parameters.
		*    <dt> <tt>E_FAIL</tt>   <dd> Failure to retrieve the parameters.
		*    </dl>
		*/
      virtual HRESULT GetHoleDiameter(double &oDiameter, 
                                      double &oDiameterUpTol, 
                                      double &oDiameterDownTol)  = 0;

		/**   
		*	  Retrieve the BottomType attribute of the Hole Technological Result 
		*    @param oBottomType
		*				Hole Bottom type (Flat, VBottom, Trimmed)
		*    @return
		*    An <tt>HRESULT</tt> value.
		*    <br><b>Legal values</b>:
		*    <dl>
		*    <dt> <tt>S_OK</tt>     <dd> Retrieving parameters succeeds.
		*    <dt> <tt>S_FALSE</tt>  <dd> No parameters.
		*    <dt> <tt>E_FAIL</tt>   <dd> Failure to retrieve the parameters.
		*    </dl>
		*/
      virtual HRESULT GetHoleBottomType(int &oBottomType)  = 0;

		/**   
		*	  Retrieve the BottomLimitLength attribute of the Hole Technological Result 
		*    @param oBottomLimitLength
		*				Hole bottom length
		*    @param oBottomLimitLengthUpTol
		*				Hole bottom length Upper Tolerance
		*    @param oBottomLimitLengthDownTol
		*				Hole bottom length Lower Tolerance
		*    @return
		*    An <tt>HRESULT</tt> value.
		*    <br><b>Legal values</b>:
		*    <dl>
		*    <dt> <tt>S_OK</tt>     <dd> Retrieving parameters succeeds.
		*    <dt> <tt>S_FALSE</tt>  <dd> No parameters.
		*    <dt> <tt>E_FAIL</tt>   <dd> Failure to retrieve the parameters.
		*    </dl>
		*/
      virtual HRESULT GetHoleBottomLimitLength(double &oBottomLimitLength,
                                               double &oBottomLimitLengthUpTol,
                                               double &oBottomLimitLengthDownTol)  = 0;

		/**   
		*	  Retrieve the Type attribute of the Hole Technological Result 
		*    @param oBottomLimitAngle
		*				Hole bottom angle
		*    @param oBottomLimitAngleUpTol
		*				Hole bottom angle Upper Tolerance
		*    @param oBottomLimitAngleDownTol
		*				Hole bottom angle Down Tolerance
		*    @return
		*    An <tt>HRESULT</tt> value.
		*    <br><b>Legal values</b>:
		*    <dl>
		*    <dt> <tt>S_OK</tt>     <dd> Retrieving parameters succeeds.
		*    <dt> <tt>S_FALSE</tt>  <dd> No parameters.
		*    <dt> <tt>E_FAIL</tt>   <dd> Failure to retrieve the parameters.
		*    </dl>
		*/
      virtual HRESULT GetHoleBottomLimitAngle(double &oBottomLimitAngle,
                                              double &oBottomLimitAngleUpTol,
                                              double &oBottomLimitAngleDownTol)  = 0;

		/**   
		*	  Retrieve the Angle attribute of the Hole Technological Result 
		*	  @param oAngle
		*				Angle (for Tapered, CounterSunk, CounterDrilled)
		*    @param oAngleUpTol
		*				Angle Upper Tolerance
		*    @param oDownAngle
		*				Angle lower tolerance
		*    @return
		*    An <tt>HRESULT</tt> value.
		*    <br><b>Legal values</b>:
		*    <dl>
		*    <dt> <tt>S_OK</tt>     <dd> Retrieving parameters succeeds.
		*    <dt> <tt>S_FALSE</tt>  <dd> No parameters.
		*    <dt> <tt>E_FAIL</tt>   <dd> Failure to retrieve the parameters.
		*    </dl>
		*/
      virtual HRESULT GetHoleAngle(double &oAngle,
                                   double &oAngleUpTol,
                                   double &oDownAngle)  = 0;

		/**   
		*	  Retrieve the CounterDepth attribute of the Hole Technological Result 
		*     @param oCounterDepth
		*				Counter Depth ( for CounterSunk, CounterDrilled, CounterBored)
		*     @param oCounterDepthUpTol
		*				Counter Depth upper tolerance
		*     @param oCounterDepthDownTol
		*				Counter Depth lower tolerance
		*     @return
		*    An <tt>HRESULT</tt> value.
		*    <br><b>Legal values</b>:
		*    <dl>
		*    <dt> <tt>S_OK</tt>     <dd> Retrieving parameters succeeds.
		*    <dt> <tt>S_FALSE</tt>  <dd> No parameters.
		*    <dt> <tt>E_FAIL</tt>   <dd> Failure to retrieve the parameters.
		*    </dl>
		*/
      virtual HRESULT GetHoleCounterDepth(double &oCounterDepth,
                                          double &oCounterDepthUpTol,
                                          double &oCounterDepthDownTol)  = 0;

		/**   
		*	  Retrieve the CounterDiameter attribute of the Hole Technological Result 
		*	  @param oCounterDiameter 
		*				Counter diameter ( for CounterSunk, CounterDrilled, CounterBored)
		*     @param oCounterDiameterUpTol
		*				Counter diameter upper tolerance
		*     @param oCounterDiameterDownTol
		*				Counter diameter lower tolerance
		*    @return
		*    An <tt>HRESULT</tt> value.
		*    <br><b>Legal values</b>:
		*    <dl>
		*    <dt> <tt>S_OK</tt>     <dd> Retrieving parameters succeeds.
		*    <dt> <tt>S_FALSE</tt>  <dd> No parameters.
		*    <dt> <tt>E_FAIL</tt>   <dd> Failure to retrieve the parameters.
		*    </dl>
		*/
      virtual HRESULT GetHoleCounterDiameter(double &oCounterDiameter,
                                             double &oCounterDiameterUpTol,
                                             double &oCounterDiameterDownTol)  = 0;

		/**   
		*	  Retrieve the AnchorType attribute of the Hole Technological Result 
		*	  @param oAnchorType
		*				Hole anchor mode (Extreme or Middle)
		*    @return
		*    An <tt>HRESULT</tt> value.
		*    <br><b>Legal values</b>:
		*    <dl>
		*    <dt> <tt>S_OK</tt>     <dd> Retrieving parameters succeeds.
		*    <dt> <tt>S_FALSE</tt>  <dd> No parameters.
		*    <dt> <tt>E_FAIL</tt>   <dd> Failure to retrieve the parameters.
		*    </dl>
		*/
      virtual HRESULT GetHoleAnchorType(int &oAnchorType)  = 0;

		/**   
		*	  Retrieve the IsThreaded attribute of the Hole Technological Result 
		*	  @param oIsThreaded 
		*				hole threaded or not
		*    @return
		*    An <tt>HRESULT</tt> value.
		*    <br><b>Legal values</b>:
		*    <dl>
		*    <dt> <tt>S_OK</tt>     <dd> Retrieving parameters succeeds.
		*    <dt> <tt>S_FALSE</tt>  <dd> No parameters.
		*    <dt> <tt>E_FAIL</tt>   <dd> Failure to retrieve the parameters.
		*    </dl>
		*/
      virtual HRESULT GetHoleIsThreaded(int &oIsThreaded)  = 0;

};
CATDeclareHandler( CATIMldTechResHole, CATBaseUnknown );
//------------------------------------------------------------------

#endif
