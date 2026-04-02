#ifndef __TIE_CATIBatchGrid
#define __TIE_CATIBatchGrid

#include <string.h>
#include "CATBaseUnknown.h"
#include "CATMetaClass.h"
#include "CATMacForTie.h"
#include "CATIBatchGrid.h"
#include "JS0DSPA.h"


#ifdef _WINDOWS_SOURCE
#define Exported __declspec(dllexport)
#define Imported __declspec(dllimport)
#else
#define Exported 
#define Imported 
#endif


/* To link an implementation with the interface CATIBatchGrid */
#define declare_TIE_CATIBatchGrid(classe) \
 \
 \
class TIECATIBatchGrid##classe : public CATIBatchGrid \
{ \
   private: \
      CATDeclareCommonTIEMembers \
   public: \
      CATDeclareTIEMethods(CATIBatchGrid, classe) \
      CATDeclareIUnknownMethodsForCATBaseUnknownTIE \
      CATDeclareIDispatchMethodsForCATBaseUnknownTIE \
      CATDeclareCATBaseUnknownMethodsForTIE \
      virtual HRESULT  LaunchOptionGUI(CATUnicodeString& BatchToolName) ; \
      virtual HRESULT  GetResourceName(CATUnicodeString& name) ; \
      virtual HRESULT  Submit(CATUnicodeString& BatchName, CATUnicodeString& CommandLine, int& JobID) ; \
      virtual HRESULT  SubmitWithInfo(CATUnicodeString& BatchName, CATUnicodeString& CommandLine, CATUnicodeString& Info, int& JobID) ; \
      virtual HRESULT  InterruptJob(int JobID) ; \
      virtual HRESULT  StopJob(int JobID) ; \
      virtual HRESULT  ResumeJob(int JobID) ; \
      virtual HRESULT  QueryJobInfo(int JobID, CATBatchJobInfo& jobInfo ) ; \
      virtual HRESULT  QueryAllJobs (CATUnicodeString& user,  CATBatchJobInfo*& job_array, int& array_size) ; \
      virtual HRESULT  QueryAllJobList (CATUnicodeString& user,  CATListValOfCATBatchJobInfo&  job_collection) ; \
      virtual HRESULT  GetLastErrorMsg(CATUnicodeString& error_msg) ; \
      virtual HRESULT  GetExecutionHost(int JobID, CATUnicodeString& host, CATListOfCATUnicodeString& mcpuhosts) ; \
      virtual HRESULT  SetBatchEventPublisher(CATIBatchGridEventPublisher* publisher) ; \
      virtual HRESULT  PostBatchMessage(int JobID, void* buffer, size_t size) ; \
      virtual HRESULT CreateJob (CATUnicodeString& JobName,  int& JobID) ; \
      virtual HRESULT AddTask (int JobId, CATUnicodeString& TaskName, CATUnicodeString& CommandLine, CATIBatchGridTask* oTask, CATBatchGridCondition* iCond=0) ; \
      virtual HRESULT SubmitJob (int JobID) ; \
};



#define ENVTIEdeclare_CATIBatchGrid(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
virtual HRESULT  LaunchOptionGUI(CATUnicodeString& BatchToolName) ; \
virtual HRESULT  GetResourceName(CATUnicodeString& name) ; \
virtual HRESULT  Submit(CATUnicodeString& BatchName, CATUnicodeString& CommandLine, int& JobID) ; \
virtual HRESULT  SubmitWithInfo(CATUnicodeString& BatchName, CATUnicodeString& CommandLine, CATUnicodeString& Info, int& JobID) ; \
virtual HRESULT  InterruptJob(int JobID) ; \
virtual HRESULT  StopJob(int JobID) ; \
virtual HRESULT  ResumeJob(int JobID) ; \
virtual HRESULT  QueryJobInfo(int JobID, CATBatchJobInfo& jobInfo ) ; \
virtual HRESULT  QueryAllJobs (CATUnicodeString& user,  CATBatchJobInfo*& job_array, int& array_size) ; \
virtual HRESULT  QueryAllJobList (CATUnicodeString& user,  CATListValOfCATBatchJobInfo&  job_collection) ; \
virtual HRESULT  GetLastErrorMsg(CATUnicodeString& error_msg) ; \
virtual HRESULT  GetExecutionHost(int JobID, CATUnicodeString& host, CATListOfCATUnicodeString& mcpuhosts) ; \
virtual HRESULT  SetBatchEventPublisher(CATIBatchGridEventPublisher* publisher) ; \
virtual HRESULT  PostBatchMessage(int JobID, void* buffer, size_t size) ; \
virtual HRESULT CreateJob (CATUnicodeString& JobName,  int& JobID) ; \
virtual HRESULT AddTask (int JobId, CATUnicodeString& TaskName, CATUnicodeString& CommandLine, CATIBatchGridTask* oTask, CATBatchGridCondition* iCond=0) ; \
virtual HRESULT SubmitJob (int JobID) ; \


#define ENVTIEdefine_CATIBatchGrid(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
HRESULT   ENVTIEName::LaunchOptionGUI(CATUnicodeString& BatchToolName)  \
{ \
return (ENVTIECALL(CATIBatchGrid,ENVTIETypeLetter,ENVTIELetter)LaunchOptionGUI(BatchToolName)); \
} \
HRESULT   ENVTIEName::GetResourceName(CATUnicodeString& name)  \
{ \
return (ENVTIECALL(CATIBatchGrid,ENVTIETypeLetter,ENVTIELetter)GetResourceName(name)); \
} \
HRESULT   ENVTIEName::Submit(CATUnicodeString& BatchName, CATUnicodeString& CommandLine, int& JobID)  \
{ \
return (ENVTIECALL(CATIBatchGrid,ENVTIETypeLetter,ENVTIELetter)Submit(BatchName,CommandLine,JobID)); \
} \
HRESULT   ENVTIEName::SubmitWithInfo(CATUnicodeString& BatchName, CATUnicodeString& CommandLine, CATUnicodeString& Info, int& JobID)  \
{ \
return (ENVTIECALL(CATIBatchGrid,ENVTIETypeLetter,ENVTIELetter)SubmitWithInfo(BatchName,CommandLine,Info,JobID)); \
} \
HRESULT   ENVTIEName::InterruptJob(int JobID)  \
{ \
return (ENVTIECALL(CATIBatchGrid,ENVTIETypeLetter,ENVTIELetter)InterruptJob(JobID)); \
} \
HRESULT   ENVTIEName::StopJob(int JobID)  \
{ \
return (ENVTIECALL(CATIBatchGrid,ENVTIETypeLetter,ENVTIELetter)StopJob(JobID)); \
} \
HRESULT   ENVTIEName::ResumeJob(int JobID)  \
{ \
return (ENVTIECALL(CATIBatchGrid,ENVTIETypeLetter,ENVTIELetter)ResumeJob(JobID)); \
} \
HRESULT   ENVTIEName::QueryJobInfo(int JobID, CATBatchJobInfo& jobInfo )  \
{ \
return (ENVTIECALL(CATIBatchGrid,ENVTIETypeLetter,ENVTIELetter)QueryJobInfo(JobID,jobInfo )); \
} \
HRESULT   ENVTIEName::QueryAllJobs (CATUnicodeString& user,  CATBatchJobInfo*& job_array, int& array_size)  \
{ \
return (ENVTIECALL(CATIBatchGrid,ENVTIETypeLetter,ENVTIELetter)QueryAllJobs (user,job_array,array_size)); \
} \
HRESULT   ENVTIEName::QueryAllJobList (CATUnicodeString& user,  CATListValOfCATBatchJobInfo&  job_collection)  \
{ \
return (ENVTIECALL(CATIBatchGrid,ENVTIETypeLetter,ENVTIELetter)QueryAllJobList (user,job_collection)); \
} \
HRESULT   ENVTIEName::GetLastErrorMsg(CATUnicodeString& error_msg)  \
{ \
return (ENVTIECALL(CATIBatchGrid,ENVTIETypeLetter,ENVTIELetter)GetLastErrorMsg(error_msg)); \
} \
HRESULT   ENVTIEName::GetExecutionHost(int JobID, CATUnicodeString& host, CATListOfCATUnicodeString& mcpuhosts)  \
{ \
return (ENVTIECALL(CATIBatchGrid,ENVTIETypeLetter,ENVTIELetter)GetExecutionHost(JobID,host,mcpuhosts)); \
} \
HRESULT   ENVTIEName::SetBatchEventPublisher(CATIBatchGridEventPublisher* publisher)  \
{ \
return (ENVTIECALL(CATIBatchGrid,ENVTIETypeLetter,ENVTIELetter)SetBatchEventPublisher(publisher)); \
} \
HRESULT   ENVTIEName::PostBatchMessage(int JobID, void* buffer, size_t size)  \
{ \
return (ENVTIECALL(CATIBatchGrid,ENVTIETypeLetter,ENVTIELetter)PostBatchMessage(JobID,buffer,size)); \
} \
HRESULT  ENVTIEName::CreateJob (CATUnicodeString& JobName,  int& JobID)  \
{ \
return (ENVTIECALL(CATIBatchGrid,ENVTIETypeLetter,ENVTIELetter)CreateJob (JobName,JobID)); \
} \
HRESULT  ENVTIEName::AddTask (int JobId, CATUnicodeString& TaskName, CATUnicodeString& CommandLine, CATIBatchGridTask* oTask, CATBatchGridCondition* iCond)  \
{ \
return (ENVTIECALL(CATIBatchGrid,ENVTIETypeLetter,ENVTIELetter)AddTask (JobId,TaskName,CommandLine,oTask,iCond)); \
} \
HRESULT  ENVTIEName::SubmitJob (int JobID)  \
{ \
return (ENVTIECALL(CATIBatchGrid,ENVTIETypeLetter,ENVTIELetter)SubmitJob (JobID)); \
} \


/* Name of the TIE class */
#define class_TIE_CATIBatchGrid(classe)    TIECATIBatchGrid##classe


/* Common methods inside a TIE */
#define common_TIE_CATIBatchGrid(classe) \
 \
 \
/* Static initialization */ \
CATDefineCommonTIEMembers(CATIBatchGrid, classe) \
 \
 \
CATImplementTIEMethods(CATIBatchGrid, classe) \
CATImplementIUnknownMethodsForCATBaseUnknownTIE(CATIBatchGrid, classe, 1) \
CATImplementIDispatchMethodsForCATBaseUnknownTIE(CATIBatchGrid, classe) \
CATImplementCATBaseUnknownMethodsForTIE(CATIBatchGrid, classe) \
 \
HRESULT   TIECATIBatchGrid##classe::LaunchOptionGUI(CATUnicodeString& BatchToolName)  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->LaunchOptionGUI(BatchToolName)); \
} \
HRESULT   TIECATIBatchGrid##classe::GetResourceName(CATUnicodeString& name)  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetResourceName(name)); \
} \
HRESULT   TIECATIBatchGrid##classe::Submit(CATUnicodeString& BatchName, CATUnicodeString& CommandLine, int& JobID)  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->Submit(BatchName,CommandLine,JobID)); \
} \
HRESULT   TIECATIBatchGrid##classe::SubmitWithInfo(CATUnicodeString& BatchName, CATUnicodeString& CommandLine, CATUnicodeString& Info, int& JobID)  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SubmitWithInfo(BatchName,CommandLine,Info,JobID)); \
} \
HRESULT   TIECATIBatchGrid##classe::InterruptJob(int JobID)  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->InterruptJob(JobID)); \
} \
HRESULT   TIECATIBatchGrid##classe::StopJob(int JobID)  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->StopJob(JobID)); \
} \
HRESULT   TIECATIBatchGrid##classe::ResumeJob(int JobID)  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->ResumeJob(JobID)); \
} \
HRESULT   TIECATIBatchGrid##classe::QueryJobInfo(int JobID, CATBatchJobInfo& jobInfo )  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->QueryJobInfo(JobID,jobInfo )); \
} \
HRESULT   TIECATIBatchGrid##classe::QueryAllJobs (CATUnicodeString& user,  CATBatchJobInfo*& job_array, int& array_size)  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->QueryAllJobs (user,job_array,array_size)); \
} \
HRESULT   TIECATIBatchGrid##classe::QueryAllJobList (CATUnicodeString& user,  CATListValOfCATBatchJobInfo&  job_collection)  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->QueryAllJobList (user,job_collection)); \
} \
HRESULT   TIECATIBatchGrid##classe::GetLastErrorMsg(CATUnicodeString& error_msg)  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetLastErrorMsg(error_msg)); \
} \
HRESULT   TIECATIBatchGrid##classe::GetExecutionHost(int JobID, CATUnicodeString& host, CATListOfCATUnicodeString& mcpuhosts)  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetExecutionHost(JobID,host,mcpuhosts)); \
} \
HRESULT   TIECATIBatchGrid##classe::SetBatchEventPublisher(CATIBatchGridEventPublisher* publisher)  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetBatchEventPublisher(publisher)); \
} \
HRESULT   TIECATIBatchGrid##classe::PostBatchMessage(int JobID, void* buffer, size_t size)  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->PostBatchMessage(JobID,buffer,size)); \
} \
HRESULT  TIECATIBatchGrid##classe::CreateJob (CATUnicodeString& JobName,  int& JobID)  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->CreateJob (JobName,JobID)); \
} \
HRESULT  TIECATIBatchGrid##classe::AddTask (int JobId, CATUnicodeString& TaskName, CATUnicodeString& CommandLine, CATIBatchGridTask* oTask, CATBatchGridCondition* iCond)  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->AddTask (JobId,TaskName,CommandLine,oTask,iCond)); \
} \
HRESULT  TIECATIBatchGrid##classe::SubmitJob (int JobID)  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SubmitJob (JobID)); \
} \



/* Macro used to link an implementation with an interface */
#define TIE_CATIBatchGrid(classe) \
 \
 \
declare_TIE_CATIBatchGrid(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIBatchGrid##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIBatchGrid,"CATIBatchGrid",CATIBatchGrid::MetaObject(),classe::MetaObject(),TIE); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIBatchGrid(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIECreation(CATIBatchGrid, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIBatchGrid##classe(classe::MetaObject(),CATIBatchGrid::MetaObject(),(void *)CreateTIECATIBatchGrid##classe)



/* Macro used to link an implementation with an interface */
/* This TIE is chained on the implementation object */
#define TIEchain_CATIBatchGrid(classe) \
 \
 \
declare_TIE_CATIBatchGrid(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIBatchGrid##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIBatchGrid,"CATIBatchGrid",CATIBatchGrid::MetaObject(),classe::MetaObject(),TIEchain); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIBatchGrid(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIEchainCreation(CATIBatchGrid, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIBatchGrid##classe(classe::MetaObject(),CATIBatchGrid::MetaObject(),(void *)CreateTIECATIBatchGrid##classe)


/* Macro to switch between BOA and TIE at build time */ 
#ifdef CATSYS_BOA_IS_TIE
#define BOA_CATIBatchGrid(classe) TIE_CATIBatchGrid(classe)
#else
#define BOA_CATIBatchGrid(classe) CATImplementBOA(CATIBatchGrid, classe)
#endif

#endif
