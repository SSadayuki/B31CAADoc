#ifndef CATISamInteractiveError_H
#define CATISamInteractiveError_H
// COPYRIGHT DASSAULT SYSTEMES 2000  
//===================================================================
/**
  * @CAA2Level L1
  * @CAA2Usage U5
  * @deprecated V5R17
  * This API should not be used.
  */
//===================================================================
#include "CATAnalysisInterface.h"
#include "CATBaseUnknown.h"

class CATCommand;
class CATError;

#ifndef LOCAL_DEFINITION_FOR_IID
extern ExportedByCATAnalysisInterface IID IID_CATISamInteractiveError ;
#else
extern "C" const IID IID_CATISamInteractiveError ;
#endif

//------------------------------------------------------------------

/**
 * Customizes the Error command that will be launched if an Error occurs.
 * <p>
 */
class ExportedByCATAnalysisInterface CATISamInteractiveError: public CATBaseUnknown
	{
	CATDeclareInterface;

	public:

    /**
     * Defines the command to launch.
     * @param oCommand Command associated to the error.

     */
		virtual HRESULT GetErrorCommand(CATCommand** oCommand) = 0;
  // No constructors or destructors on this pure virtual base class
  // --------------------------------------------------------------
	
	};

//------------------------------------------------------------------

CATDeclareHandler( CATISamInteractiveError, CATBaseUnknown );

#endif
