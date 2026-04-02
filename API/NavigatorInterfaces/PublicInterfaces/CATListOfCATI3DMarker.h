/* COPYRIGHT DASSAULT SYSTEMES 2003 */
#ifndef CATListOfCATI3DMarker_h
#define CATListOfCATI3DMarker_h
/** @CAA2Required */
/**********************************************************************/
/* DON T DIRECTLY INCLUDE THIS HEADER IN YOUR APPLICATION CODE. IT IS */
/* REQUIRED TO BUILD CAA APPLICATIONS BUT IT MAY DISAPEAR AT ANY TIME */
/**********************************************************************/
#include "CATNavigatorItf.h"

#include  <CATLISTV_Clean.h>

#define  CATLISTV_Append
#define  CATLISTV_AppendList
#define  CATLISTV_InsertAt
#define  CATLISTV_Locate
#define  CATLISTV_RemoveValue
#define  CATLISTV_RemovePosition
#define  CATLISTV_RemoveDuplicatesCount

#include  <CATLISTV_Declare.h>

#include "CATI3DMarker.h"

#undef  CATCOLLEC_ExportedBy
#define CATCOLLEC_ExportedBy ExportedByCATNavigatorItf

CATLISTV_DECLARE(CATI3DMarker_var)

#endif
