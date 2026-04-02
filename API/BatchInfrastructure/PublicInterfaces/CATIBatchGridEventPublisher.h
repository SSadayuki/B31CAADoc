#ifndef CATIBatchGridEventPublisher_H
#define CATIBatchGridEventPublisher_H

// COPYRIGHT DASSAULT SYSTEMES 2005

/**
 * @CAA2Level L0
 * @CAA2Usage U3
 */

#include "CATBatCAAGrid.h"

class ExportedByCATBatCAAGrid CATIBatchGridEventPublisher
{
  
  public:
  
  virtual HRESULT OnBatchEvent (int JobId, int EventKind) = 0;
  
  virtual HRESULT OnBatchMessage(int JobId, void* buffer, size_t buffer_size) = 0;
 




};



#endif
