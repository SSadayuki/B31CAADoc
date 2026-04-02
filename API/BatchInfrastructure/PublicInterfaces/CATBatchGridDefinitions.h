/* -*-c++-*- */
#ifndef CATBatchGridDefinitions_H
#define CATBatchGridDefinitions_H

// COPYRIGHT DASSAULT SYSTEMES 2005

//------------------------------------------------------------------
/**
 * @CAA2Level L0
 * @CAA2Usage U1
 */

#include "CATBatCAAGrid.h"
#include "CATUnicodeString.h"

////////////////////////////////////////////////////////////////////////////////////////
enum ExportedByCATBatCAAGrid CATBatchJobStatus		
{
		CATBatchJobPending,	
		CATBatchJobSuspended,		
		CATBatchJobStopped,
		CATBatchJobRunning,		
		CATBatchJobEnded,			
		CATBatchJobFailed,
		CATBatchJobUnknown
				
};


#include "CATBatchJobInfo.h"

////////////////////////////////////////////////////////////////////////////////////////



#endif
