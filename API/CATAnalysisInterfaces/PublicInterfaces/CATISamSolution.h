#ifndef CATISamSolution_H
#define CATISamSolution_H
// COPYRIGHT DASSAULT SYSTEMES 1999
//===================================================================
//
// CATISamSolution.h
// Interface designed to manage CATISamSolution behavoir
//===================================================================
/**
  * @CAA2Level L1
  * @CAA2Usage U3
  */

#include "CATAnalysisInterface.h"
#include "CATBaseUnknown.h"

class CATISamAnalysisCase;

#ifndef LOCAL_DEFINITION_FOR_IID
extern ExportedByCATAnalysisInterface IID IID_CATISamSolution ;
#else
extern "C" const IID IID_CATISamSolution ;
#endif

//------------------------------------------------------------------

/**
 * Defines Analysis Solution.
 * <b>Role:</b> Interface designed to manage <b>CATISamSolution behaviour</b>.<br>
 * This behavoir allows specific capability for an analysis set defined as a solution.
 * This interface is dedicated to be used on the <font color="red">SolutionSet</font> Startup.
 * <p>
 * @see CATISamAnalysisCase,CATISamAnalysisSet
 */ class ExportedByCATAnalysisInterface CATISamSolution: public CATBaseUnknown
{
	CATDeclareInterface;

	public:

/**
 * Defines the CATISamAnalysisCase for the Solution Set.
 * @param iCase
 * CATISamAnalysisCase parent of the solution.
 */
		virtual HRESULT SetCase(const CATISamAnalysisCase* iCase) = 0;
/**
 * Retrieves the CATISamAnalysisCase for the Solution Set.
 * @param oCase  [out , CATBaseUnknown#Release]
 * CATISamAnalysisCase parent of the solution.
 */

		virtual HRESULT GetCase(CATISamAnalysisCase*& oCase) const = 0;
  // --------------------------------------------------------------
};

//------------------------------------------------------------------

CATDeclareHandler( CATISamSolution, CATBaseUnknown );

#endif
