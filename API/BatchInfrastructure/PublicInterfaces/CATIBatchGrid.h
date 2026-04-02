// COPYRIGHT Dassault Systemes 2005
//===================================================================
//
// CATIBatchGrid.h
// Define the CATIBatchGrid interface
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
#ifndef CATIBatchGrid_H
#define CATIBatchGrid_H

// COPYRIGHT DASSAULT SYSTEMES 2005

/**
 * @CAA2Level L0
 * @CAA2Usage U5
 */

#include "CATBaseUnknown.h"
#include "CATUnicodeString.h"
#include "CATListOfCATUnicodeString.h"
#include "CATBatCAAGrid.h"
#include "CATErrorDef.h"

#include "CATBatchGridDefinitions.h"
#include "CATBatchJobInfo.h"

extern "C" const IID IID_CATIBatchGrid;

#include "CATIBatchGridEventPublisher.h"
#include "CATListValOfCATBatchJobInfo.h"


class CATBatchGridCondition;
class CATIBatchGridTask;
class CATIBatchGridUI;

class ExportedByCATBatCAAGrid CATIBatchGrid: public CATBaseUnknown
{
	public:
	
  CATDeclareInterface;


  //deprecated, use CATIBatchGridUI method
  virtual HRESULT  LaunchOptionGUI(CATUnicodeString& BatchToolName) = 0;
  
  //deprecated, use CATIBatchGridUI method
  virtual HRESULT  GetResourceName(CATUnicodeString& name) = 0;
  
  virtual HRESULT  Submit(CATUnicodeString& BatchName, CATUnicodeString& CommandLine, int& JobID) = 0;
  
  virtual HRESULT  SubmitWithInfo(CATUnicodeString& BatchName, CATUnicodeString& CommandLine, CATUnicodeString& Info, int& JobID) = 0;
  
  virtual HRESULT  InterruptJob(int JobID) = 0;    
  
  virtual HRESULT  StopJob(int JobID) = 0;
  
  virtual HRESULT  ResumeJob(int JobID) = 0;
  
  virtual HRESULT  QueryJobInfo(int JobID, CATBatchJobInfo& jobInfo ) = 0;
  
  virtual HRESULT  QueryAllJobs (CATUnicodeString& user,  CATBatchJobInfo*& job_array, int& array_size) = 0;
  
  virtual HRESULT  QueryAllJobList (CATUnicodeString& user,  CATListValOfCATBatchJobInfo&  job_collection) = 0;
  
  virtual HRESULT  GetLastErrorMsg(CATUnicodeString& error_msg) = 0;
  
  virtual HRESULT  GetExecutionHost(int JobID, CATUnicodeString& host, CATListOfCATUnicodeString& mcpuhosts) = 0;
  
  virtual HRESULT  SetBatchEventPublisher(CATIBatchGridEventPublisher* publisher) = 0;
  
  virtual HRESULT  PostBatchMessage(int JobID, void* buffer, size_t size) = 0;
  
 //STEP 2
 virtual HRESULT CreateJob (CATUnicodeString& JobName,  int& JobID) = 0;  
 virtual HRESULT AddTask (int JobId, CATUnicodeString& TaskName, CATUnicodeString& CommandLine, CATIBatchGridTask* oTask, CATBatchGridCondition* iCond=NULL) = 0;
 virtual HRESULT SubmitJob (int JobID) = 0;

};

//------------------------------------------------------------------

#endif
