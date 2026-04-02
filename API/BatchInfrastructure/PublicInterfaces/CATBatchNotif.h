/*=======================================================================*/
/* COPYRIGHT DASSAULT SYSTEMES 1996                                      */
/*=======================================================================*/
/*                                                                       */
/*  CATBatchNotif                                                        */
/*                                                                       */
/*  Usage Notes: BaseClass Notification for BatchMonitoring              */
/*                                                                       */
/*=======================================================================*/
/*  Creation Jan	2002                                 jnm             */
/*=======================================================================*/
#ifndef _CATBatchNotif
#define _CATBatchNotif
#include "CATNotification.h"

#include "CATBatchUtils.h"

/**
 * @CAA2Level L1
 * @CAA2Usage U1
 */
 /**
 * BaseClass Notification for BatchMonitoring .
 * <b>Role</b>: BaseClass Notification for BatchMonitoring. Do not use directly.
 */
 
class ExportedByCATBatchUtils CATBatchNotif : public CATNotification
{

 public:

   CATBatchNotif(char* uuid);
   virtual ~CATBatchNotif();

   /**
 *  Notification for BatchMonitoring .
 * <b>Role</b>: Retrieves the uuid of the batch concerned by this notification
 * When you're called back in a notification call back, this methios allow you to know to which batch it is related to.
 * 
 */ 
   char*	GetBatchUUID() {return _uuid;}

   CATDeclareClass;


 private:

   char * _uuid;
};


#endif
