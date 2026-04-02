#ifndef	CATListValOfCATBatchJobInfo_h
#define	CATListValOfCATBatchJobInfo_h

// COPYRIGHT DASSAULT SYSTEMES 2006

/**
 * @CAA2Level L0
 * @CAA2Usage U2
 */

// To undefine all possible methods of the list of values
#include  "CATLISTV_Clean.h" 
#include "CATBatchJobInfo.h"

// Define the methods supported by the list of values
#define	CATLISTV_Append
//#define	CATLISTV_Locate
#define	CATLISTV_RemoveValue
#define	CATLISTV_RemoveAll

// For the macro CATLISTV_DECLARE
#include  "CATLISTV_Declare.h" 
#include  "CATBatchGridDefinitions.h"
typedef class CATLISTV(CATBatchJobInfo) CATListValOfCATBatchJobInfo; 


// Declare the type : list of values of class <CATBatchJobInfo>
CATLISTV_DECLARE(CATBatchJobInfo)

#endif
