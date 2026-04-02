//===================================================================
// COPYRIGHT Dassault Systemes 2002
//===================================================================
//
// CATIMfgMotionPipeUpdAct.h
// Define the CATIMfgMotionPipeUpdAct interface
//
//===================================================================
#ifndef CATIMfgMotionPipeUpdAct_H
#define CATIMfgMotionPipeUpdAct_H

/**
 * @CAA2Level L0
 * @CAA2Usage U5
*/

#include "CATMfgSimulationItfCPP.h"

// System
#include "CATBaseUnknown.h"
#include "CATListOfDouble.h"

// Mathematics 
#include "CATMathTransformation.h"


#ifndef LOCAL_DEFINITION_FOR_IID
extern ExportedByCATMfgSimulationItfCPP IID IID_CATIMfgMotionPipeUpdAct;
#else
extern "C" const IID IID_CATIMfgMotionPipeUpdAct;
#endif

//------------------------------------------------------------------

/**
* Interface to update the Machining Operation.
* <br><b>Role</b>: CATIMfgMotionPipeUpdAct has methods to 
* update Machining Operation.
*/

class ExportedByCATMfgSimulationItfCPP CATIMfgMotionPipeUpdAct : public CATBaseUnknown
{
	CATDeclareInterface;
		
	public:
		
		/**
		* Updates the Machining Operation.
		* <br><b>Role</b>: UpdateOperation updates 
		* the Machining Operation after ToolPath teaching
		*
		* @param iRank
		* The rank of the current position in the tool path. 
		*
		* @param iMode
		* The insertion mode:
		*	0 : default
		*	1 : modified position
		*	2 : new inserted position after
		*	3 : new inserted position before
		*	4 : removed position
		*
		* @param ipDOF
		* The list of modified/created DOF for current position. 
		*
		* @param iTCPTransfo
		* The modified/created TCP value for current position. 
		*/

		virtual HRESULT UpdateOperation (const int & iRank, const int & iMode, CATListOfDouble *& ipDOF, CATMathTransformation & iTCPTransfo) = 0;
		
		/**
		* Updates the Machining Operation.
		* <br><b>Role</b>: ApplySetupOnOperation apply the setup 
		* transformation on the Machining Operation specifications
		*
		* @param iSetupTransfo
		* The transformation applied during the setup
		*/

		virtual HRESULT ApplySetupOnOperation (CATMathTransformation & iSetupTransfo) = 0;

		/**
		* Updates the Machining Operation.
		* <br><b>Role</b>: GetJogClosureEvent updates 
		* the Machining Operation specifications on Jog closure
		*
		* @param iClosureEvent
		* The kind of closure :
		*	0 : Cancel button
		*	1 : OK button
		*/

		virtual HRESULT GetJogClosureEvent (const int & iClosureEvent) = 0;

		/**
		* Updates the Machining Operation.
		* <br><b>Role</b>: SimulEndOfMove is called at the end of each move 
		*
		* @param iNumberOfDOFElt
		* The number of DOF element
		*/

		virtual HRESULT SimulEndOfMove (int iNumberOfDOFElt) = 0;
};
CATDeclareHandler (CATIMfgMotionPipeUpdAct, CATBaseUnknown);
#endif
