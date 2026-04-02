#ifndef CATListOfCATVRDeviceEvent_h
#define CATListOfCATVRDeviceEvent_h

// COPYRIGHT DASSAULT SYSTEMES 2001

/**
 * @CAA2Level L1
 * @CAA2Usage U1
 */

/**
 * @collection CATListOfCATVRDeviceEvent
 * Collection class for CATVRDeviceEvent.
 * Only the following methods of pointer collection classes are available:
 * <ul>
 * <li><tt>Append</tt></li>
 * <li><tt>RemovePosition</tt></li>
 * <li><tt>Replace</tt></li>
 * <li><tt>Swap</tt></li>
 * <li><tt>InsertAfter</tt></li>
 * <li><tt>InsertBefore</tt></li>
 * <li><tt>InsertAt</tt></li>
 * </ul>
 * Refer to the articles dealing with collections in the encyclopedia.
 */



#include "CATVRDeviceEvent.h"

#include "CATLISTV_Clean.h"

/** @nodoc */
#define CATLISTV_MinimalFunct

/** @nodoc */
#define	CATLISTV_AppendList

/** @nodoc */
#define	CATLISTV_RemovePosition

/** @nodoc */
#define	CATLISTV_Replace

/** @nodoc */
#define	CATLISTV_Swap

/** @nodoc */
#define	CATLISTV_InsertAfter

/** @nodoc */
#define	CATLISTV_InsertBefore

/** @nodoc */
#define	CATLISTV_InsertAt


#include  "CATLISTV_Declare.h"



#undef	CATCOLLEC_ExportedBy
#define	CATCOLLEC_ExportedBy	ExportedByCATVisVR


CATLISTV_DECLARE(CATVRDeviceEvent)

typedef CATLISTV(CATVRDeviceEvent) CATListOfCATVRDeviceEvent; 

#endif

