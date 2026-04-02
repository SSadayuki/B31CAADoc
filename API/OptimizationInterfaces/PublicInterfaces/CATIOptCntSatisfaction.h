// COPYRIGHT Dassault Systemes 2004
#ifndef CATIOptCntSatisfaction_H
#define CATIOptCntSatisfaction_H

/** 
* @CAA2Level L1
* @CAA2Usage U3
*/

#include "OptimizationItfCPP.h"

#ifndef LOCAL_DEFINITION_FOR_IID
extern ExportedByOptimizationItfCPP IID IID_CATIOptCntSatisfaction ;
#else
extern "C" const IID IID_CATIOptCntSatisfaction;
#endif  

#include "CATBaseUnknown.h"

/**
*  Interface dedicated to constraint satisfaction solving.
*/
class ExportedByOptimizationItfCPP CATIOptCntSatisfaction: public CATBaseUnknown
{
  CATDeclareInterface;

public:
	/**
	* Solves the constraint satisfaction feature.
	* @return <br><b>Legal values</b>:
	* <tt>S_OK</tt> if the constraint satisfaction feature is correctly solved.
	* <tt>E_FAIL</tt>otherwise.
	*/
	virtual HRESULT Solve() = 0;

};


CATDeclareHandler( CATIOptCntSatisfaction, CATBaseUnknown );

#endif
