/*=======================================================================*/
/* COPYRIGHT DASSAULT SYSTEMES 2006  					                */
/*=======================================================================*/
/*                                                                       */
/*  CATBatClientMonitorCAA                                                     */
/*                                                                        */
/*  Usage Notes: Monitoring APIs for Batchs                         */
/*																		*/
/*=======================================================================*/
/*  Creation Jun	2006                                 jnm              */
/*=======================================================================*/
#ifndef _CATBatClientMonitorCAA_H
#define _CATBatClientMonitorCAA_H

// COPYRIGHT DASSAULT SYSTEMES 2006
/**
 * @CAA2Level L1
 * @CAA2Usage U3
 */


#include "CATBatCliMonitor.h"
#include "CATBaseUnknown.h"
#include "CATUnicodeString.h"
#include "CATBatchPublicDefinitions.h"

//------------------------------------------------------------------

/**
 * Batch Monitoring.
 * <b>Role</b>: This class allow you to start and monitor a batch
 * 
 */




class ExportedByCATBatCliMonitor CATBatClientMonitorCAA : public CATBaseUnknown
{


   public :
   
 
 /** 
 * Retrieves the static singleton of CATBatClientMonitorCAA class. 
 * <br><b>Role</b>: This method allows you to retrieve the static singleton of CATBatClientMonitorCAA class.
 * 
 */
   static CATBatClientMonitorCAA* GetTheClientMonitorCAA();
   
  
 /** 
 * Start a V5 Batch.
 * <br><b>Role</b>: This method allows you to launch a batch giving its XML parameter file path.
 *
 * @param iPram
 * Full path of the XML parameter file which may have been generated using CATBatchParameters API
 * @param oUuid
 * the uuid, identifying the batch.
 * @iHostname
 * hostname of the computer on which the batch must be launched (remote mode).
 * In this case you must launched 'catstart -run CATBatSrvMonitorExe BB' on the remote computer.
 * 
 */
 virtual HRESULT StartV5Batch(CATUnicodeString& iParam, char* oUuid, char* iHostname=NULL)=0;
 
 /** 
 * Kill a V5 Batch.
 * <br><b>Role</b>: This method allows you to kill the V5 Batch process giving in its uuid
 *
 * @param oUuid
 * the uuid, identifying the batch.
 * 
 */	 	 	 
 virtual HRESULT KillBatch(char* uuid)=0;
 
 /** 
 * Retrieves the status of a V5 Batch.
 * <br><b>Role</b>: This method allows you to get the status of a V5 batch
 *
 * @param oUuid
 * the uuid, identifying the batch.
 * @oStatus
 * the status of the batch
 * <b>Legal Values</b>:
 *  <ul>
 *    <li>CATBatchBeginInit</li>
 *	<li>CATBatchStarting</li>
 *	<li>CATBatchEndInit</li>
 *	<li>CATBatchStarted</li>
 *	<li>CATBatchAppBegin</li>
 *	<li>CATBatchAppEnd</li>
 *	<li>CATBatchEnded</li>
 *	<li>CATBatchSuspended</li> 
 *	<li>CATBatchKilled</li>
 *	<li>CATBatchUnknownState</li>
 *	<li>CATBatchLicFailed</li>
 *	<li>CATBatchQueued</li>
 *	<li>CATBatchRunning </li> 
 *  </ul>
 *
 * 
 */	 
 virtual HRESULT GetBatchStatus(char* uuid, CATBatchStatus& oStatus)=0;
 /** 
 * Retrieves the status of a V5 Batch.
 * <br><b>Role</b>: This method allows you to get the status of a V5 batch
 *
 * @param oUuid
 * the uuid, identifying the batch.
 * @oRC
 * the return code of the batch
 *
 */	 
 virtual HRESULT GetBatchRC(char* uuid, int& oRC)=0;
 
 /** 
 * Initialize the monitoring mechanism for V5 Batch
 * <br><b>Role</b>: This method set the callback mechanism which allow you to monitor a V5 batch.
 *
 */
virtual HRESULT InitializeV5Monitoring(int batch_mode=1, char* hostname=NULL)=0;


 /** 
 * Block  the current process to wait for incoming Batch monitoring messages
 * <br><b>Role</b>: This method make the current process wait for Batch monitoring messages until exitCond is true.
 * This method is mandatory if you want to receive notification from the Batch infrastructure.
 *
 */	 
virtual HRESULT WaitOnMessage(int& exitCond, int timeout=-1, int* reserved=NULL)=0;
	   		      
	   

 /** 
 * Allow the batch to access the graphical adapater
 * <br><b>Role</b>: This method is to be called if your computer have a graphical adapter
 * A few batches may use the graphical adapter for computation aid. You have to decide if you allow this batch to run on your computer
 * by calling this method.
 * If you don't these batches will exit with a RC=7. 
 *
 */
 virtual HRESULT AllowVisuInLocalBatchs()=0;
	 
/**
 * @nodoc
 */	   		
	   		
virtual HRESULT SetGridInfo(CATUnicodeString& batchName, CATUnicodeString& info)=0;	   		

/**
 * @nodoc
 */

CATBatClientMonitorCAA ();
/**
 * @nodoc
 */
virtual ~CATBatClientMonitorCAA();
   
    private :
/**
 * @nodoc
 */
	CATBatClientMonitorCAA(CATBatClientMonitorCAA& batch);

	static CATBatClientMonitorCAA* _caasp;
		


};


#endif

