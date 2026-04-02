/* -*-c++-*- */
#ifndef CATBatchJobInfo_H
#define CATBatchJobInfo_H

// COPYRIGHT DASSAULT SYSTEMES 2006

//------------------------------------------------------------------
/**
 * @CAA2Level L0
 * @CAA2Usage U1
 */

#include "CATBatCAAGrid.h"
#include "CATUnicodeString.h"
#include "CATTime.h"
#include "CATBatchGridDefinitions.h"

////////////////////////////////////////////////////////////////////////////////////////
class ExportedByCATBatCAAGrid CATBatchJobInfo
{
	public :
	
	CATBatchJobInfo();
	
	int jobid; 
	CATLONG64 extendedJobId;	
	CATUnicodeString jobname;
	CATBatchJobStatus jobstatus;	
	CATTime  begin_time;
	CATTime  end_time;
	int exitcode;
	CATUnicodeString Information; 
	CATUnicodeString execution_hostname;
  CATUnicodeString commandline;

	
	 int operator==(const CATBatchJobInfo & iRef) const;
   int operator!=(const CATBatchJobInfo & iRef) const;
   
};




////////////////////////////////////////////////////////////////////////////////////////



#endif
