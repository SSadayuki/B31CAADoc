/*=======================================================================*/
/* COPYRIGHT DASSAULT SYSTEMES 2006                                     */
/*=======================================================================*/
/*                                                                       */
/*  CATBatchEndNotifCAA                                                  */
/*                                                                       */
/*  Usage Notes: Notification for BatchMonitoring                        */
/*                                                                       */
/*=======================================================================*/
/*  Creation Jan	2006                                   jnm             */
/*=======================================================================*/
#ifndef _CATBatchEndNotifCAA
#define _CATBatchEndNotifCAA

#include "CATBatchNotif.h"

#include "CATBatchUtils.h"

/**
 * @CAA2Level L1
 * @CAA2Usage U1
 */
 
 /**
 *  Notification for BatchMonitoring .
 * <b>Role</b>: This notification is sent each time a batch ends.
 * You can subscribe to this notification allowing you to be called back when a batch ends.
 * The method GetUUID() from CATBatchNotif allow you to know which batch has ended.
 */
 
 
class ExportedByCATBatchUtils CATBatchEndNotifCAA : public CATBatchNotif
{

 public:

   CATBatchEndNotifCAA(char* uuid);
   ~CATBatchEndNotifCAA();

  
   
   CATDeclareClass; 
   
   
   
 
};


#endif
