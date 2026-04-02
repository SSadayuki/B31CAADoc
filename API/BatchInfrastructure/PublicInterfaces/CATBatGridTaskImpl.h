#ifndef  CATBatGridTaskImpl_H
#define  CATBatGridTaskImpl_H

#include "CATBaseUnknown.h"
#include "CATIBatchGridTask.h"



/*
// COPYRIGHT DASSAULT SYSTEMES 2005
*/

/**
 * @CAA2Level L0
 * @CAA2Usage U2
 */




class ExportedByCATBatCAAGrid CATBatGridTaskImpl : public CATBaseUnknown
{
	public :
  /**
   * @nodoc
   */
  CATDeclareClass;

  /**
   * Default constructor.
   */
  CATBatGridTaskImpl();
 
  
  virtual ~CATBatGridTaskImpl();
  
  virtual HRESULT  AddCondition(CATBatchGridCondition* iCond, int reset=0);
 
 
  
  private :
  
  	CATBatGridTaskImpl(CATBatGridTaskImpl& grid) {};
  
  
};

#endif
