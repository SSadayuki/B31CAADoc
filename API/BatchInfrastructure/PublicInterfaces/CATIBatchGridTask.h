// COPYRIGHT Dassault Systemes 2005
//===================================================================
//
// CATIBatchGridTask.h
// Define the CATIBatchGridTask interface
//
//===================================================================
//
// Usage notes:
//   
//
//===================================================================
//
//  June 05 Creation:  jnm
//===================================================================
#ifndef CATIBatchGridTask_H
#define CATIBatchGridTask_H

// COPYRIGHT DASSAULT SYSTEMES 2005

/**
 * @CAA2Level L0
 * @CAA2Usage U3
 */

#include "CATBaseUnknown.h"
#include "CATBatCAAGrid.h"
#include "CATErrorDef.h"

#include "CATBatchGridDefinitions.h"


extern "C" const IID IID_CATIBatchGridTask;

class CATBatchGridCondition;

class ExportedByCATBatCAAGrid CATIBatchGridTask: public CATBaseUnknown
{
	public:
	
  CATDeclareInterface;

  virtual HRESULT  AddCondition(CATBatchGridCondition* iCond, int reset=0) =0;
  
  

};

//------------------------------------------------------------------

#endif
