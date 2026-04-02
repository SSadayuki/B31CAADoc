/* -*-c++-*- */
#ifndef CATBatchPublicDefinitions_H
#define CATBatchPublicDefinitions_H

// COPYRIGHT DASSAULT SYSTEMES 2003

//------------------------------------------------------------------
/**
 * @CAA2Level L1
 * @CAA2Usage U1
 */

/**
 * Bacth upload behaviour.
 * <b>Role</b>: Determine the behaviour of updoads when referencinf a file in your XML parameters file
 
 *   @see CATBatchParameters.
 */


#include "CATBatchUtils.h"
#include "CATLib.h"
#include "CATComFileType.h"


#define	SIZE_T_ID	33


/////////////////////////////////////////////
enum ExportedByCATBatchUtils CATBatchStatus
{
	CATBatchBeginInit,
	CATBatchStarting, 
	CATBatchEndInit, 
	CATBatchStarted, 
	CATBatchAppBegin, 
	CATBatchAppEnd, 
	CATBatchEnded, 
	CATBatchSuspended, 
	CATBatchKilled,
	CATBatchUnknownState,
	CATBatchLicFailed,
	CATBatchQueued,
	CATBatchRunning
};

/////////////////////////////////////////////////////////////////////////////////////////////////
enum ExportedByCATBatchUtils CATBatFileUploadable
{
	CATBatchRightNow,
	CATBatchYes,
	CATBatchNo,
    CATBatchClientData

};

////////////////////////////////
enum ExportedByCATBatchUtils CATBatchType
{
	CATBatStandard,
	CATBatServer,
	CATBatTask
};


////////////////////////////////////////////////////////////////////////////////////////
///////////////////////////////////////////////


#ifndef DIR_DELIMITER

#ifdef _WINDOWS_SOURCE
    #define DIR_DELIMITER		"\\"
	#define DIR_SEP				";"
	#define dir_delim	        '\\'
    #define dir_delim_external  '/' 		
#else
	#define DIR_DELIMITER		"/"
	#define DIR_SEP				":"
    #define dir_delim			'/'
    #define dir_delim_external  '\\'
#endif

#endif


#endif
