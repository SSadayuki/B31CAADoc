// COPYRIGHT Dassault Systemes 2007

/**
  * @CAA2Level L0
  * @CAA2Usage U3
  */

//===================================================================
//
// CATIMldBodyTechResRequest.h
// Define the CATIMldBodyTechResRequest interface
//
//===================================================================
//
// Usage notes: Interface to manage the technological results of a Body
//
//===================================================================

#ifndef CATIMldBodyTechResRequest_H
#define CATIMldBodyTechResRequest_H

#include "CATMldTechnoResultItfCPP.h"
#include "CATBaseUnknown.h"

#include "CATLISTP_CATIMldTechRes.h"

#ifndef LOCAL_DEFINITION_FOR_IID
extern ExportedByCATMldTechnoResultItfCPP IID IID_CATIMldBodyTechResRequest;
#else
extern "C" const IID IID_CATIMldBodyTechResRequest ;
#endif

//------------------------------------------------------------------

/**
* Interface to manage the technological results of a Body
*/
class ExportedByCATMldTechnoResultItfCPP CATIMldBodyTechResRequest: public CATBaseUnknown
{
  CATDeclareInterface;

  public:

	  /**
		*	Retrieves the list of all the Technological Results of the body.
		*   @param oListOfTechRes
		*      The list of Technological Results.
		*   @return
		* An <tt>HRESULT</tt> value.
		* <dl>
		* <dt> <tt>S_OK</tt>     <dd> the list is completly retrieved.
		* <dt> <tt>E_FAIL</tt>   <dd> otherwise.
		* </dl>
		*/
		virtual HRESULT GetTechnologicalResult(CATLISTP_CATIMldTechRes &oListOfTechRes)  = 0; 

	  /**
	    *	Tests if the Technological Results are available. The Technological Results are available if they are activated and up to date.
        *   @param oAvailable
        *      the CATBooleanStatus.
        *   @return
        * An <tt>HRESULT</tt> value.
	    * <dl>
		* <dt> <tt>S_OK</tt>     <dd> TR are available.
		* <dt> <tt>E_FAIL</tt>   <dd> TR aren't available.
		* </dl>
      */
		virtual HRESULT AreTRsAvailable(CATBoolean &oAvailable)  = 0;

  // No constructors or destructors on this pure virtual base class
  // --------------------------------------------------------------
};

//------------------------------------------------------------------

#endif
