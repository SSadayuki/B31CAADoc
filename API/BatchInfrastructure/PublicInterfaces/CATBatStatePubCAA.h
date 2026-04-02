/*=======================================================================*/
/* COPYRIGHT DASSAULT SYSTEMES 2003   					                */
/*=======================================================================*/
/*                                                                       */
/*  CATBatStatePubCAA                                                     */
/*                                                                        */
/*  Usage Notes: State Publication API for Batchs                         */
/*																		*/
/*=======================================================================*/
/*  Creation Oct	2000                                 jnm             */
/*=======================================================================*/
#ifndef _CATBatStatePubCAA_H
#define _CATBatStatePubCAA_H

// COPYRIGHT DASSAULT SYSTEMES 2003
/**
 * @CAA2Level L1
 * @CAA2Usage U1
 */


#include "CATBatProtocol.h"


//------------------------------------------------------------------

/**
 * Batch state Publishing.
 * <b>Role</b>: This class allow your batch to publish its state .
 * It can be used in your batch to send sate messages to the batch monitor.
 */




class ExportedByCATBatProtocol CATBatStatePubCAA
{


   public :

/** 
 * Retrieves the CATBatStatePubCAA singleton. Do not call the constructor.
 * 
 * <br><b>Role</b>: This method creates and/or retrieves the unique instance of CATBatStatePubCAA.
 *
 */
  static CATBatStatePubCAA* GetCAAStatePub();
	   
	   		
/** 
 * Publish the state of your batch.
 * <br><b>Role</b>: This method allows you to send to tha batch monitor a completion percentage for your batch (from 1 to 100);
 * This number will be displayed in the batch monitor UI. 
 *
 * @param state
 * percentage of completion 
 */	   
 virtual void SetBatchState(int state) = 0;

/** 
 * Publish the licencing state of your batch.
 * <br><b>Role</b>: This method allows you to send a notification to the batch monitor containing its licence status
 * 1 means the batch has the licences it needs to run
 * 0 means the taken licences does not allow to run this batch. In this case an error is displayed in the batch monitor.
 *
 * @param OK
 * licence state of the batch
 */	
 virtual void SetLicenceState(int OK) = 0;
/**
 * @nodoc
 */

CATBatStatePubCAA ();
/**
 * @nodoc
 */
virtual ~CATBatStatePubCAA();
   
    private :
/**
 * @nodoc
 */
		CATBatStatePubCAA(CATBatStatePubCAA& batch);

		static CATBatStatePubCAA* _caasp;
		
 

};


#endif

