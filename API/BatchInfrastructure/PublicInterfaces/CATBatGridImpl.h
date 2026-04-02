#ifndef  CATBatGridImpl_H
#define  CATBatGridImpl_H

#include "CATBaseUnknown.h"
#include "CATBatCAAGrid.h"
#include "CATIBatchGrid.h"



/*
// COPYRIGHT DASSAULT SYSTEMES 2005
*/

/**
 * @CAA2Level L0
 * @CAA2Usage U2
 */



class ExportedByCATBatCAAGrid CATBatGridImpl : public CATBaseUnknown
{
	public :
  /**
   * @nodoc
   */
  CATDeclareClass;

  /**
   * Default constructor.
   */
  CATBatGridImpl();
  
  virtual ~CATBatGridImpl();
  
  
  //CATIBatchGrid methods , default implementation
  
   HRESULT  LaunchOptionGUI(CATUnicodeString& BatchToolName);
  
   HRESULT  GetResourceName(CATUnicodeString& name);
  
   HRESULT  Submit(CATUnicodeString& BatchName, CATUnicodeString& CommandLine, int& JobID);
   
   HRESULT  SubmitWithInfo(CATUnicodeString& BatchName, CATUnicodeString& CommandLine, CATUnicodeString& Info, int& JobID);
  
   HRESULT  InterruptJob(int JobID);
  
   HRESULT  StopJob(int JobID);
  
   HRESULT  ResumeJob(int JobID);
  
   HRESULT  QueryJobInfo(int JobID, CATBatchJobInfo& jobInfo );
  
   HRESULT  QueryAllJobs (CATUnicodeString& user,  CATBatchJobInfo*& job_array, int& array_size);
   
   HRESULT  QueryAllJobList (CATUnicodeString& user,  CATListValOfCATBatchJobInfo&  job_collection);
  
   HRESULT  GetLastErrorMsg(CATUnicodeString& error_msg);
  
   HRESULT  GetExecutionHost(int JobID, CATUnicodeString& host, CATListOfCATUnicodeString& mcpuhosts);
  
   HRESULT  SetBatchEventPublisher(CATIBatchGridEventPublisher* publisher);
  
   HRESULT  PostBatchMessage(int JobID, void* buffer, size_t size);

//STEP 2  

   HRESULT  CreateJob (CATUnicodeString& JobName,  int& JobID); 
   HRESULT AddTask(int JobId, CATUnicodeString& TaskName, CATUnicodeString& CommandLine, CATIBatchGridTask* oTask, CATBatchGridCondition* iCond=NULL);
   HRESULT  SubmitJob (int JobID);
  
  private :
  
  	CATBatGridImpl(CATBatGridImpl& grid) {};
  
  
};

#endif
