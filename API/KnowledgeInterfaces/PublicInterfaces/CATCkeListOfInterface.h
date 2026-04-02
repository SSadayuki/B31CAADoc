
#ifndef CATCkeListOfInterface_H
#define CATCkeListOfInterface_H

// COPYRIGHT DASSAULT SYSTEMES 1999

/** 
 * @CAA2Level L1
 * @CAA2Usage U1 
 */

#include "CATLISTV_CATBaseUnknown.h"


/**   
 *  Define for list definition.  
 * -to create a list : CATCkeListOfXX pl = new CATCkeListOf(XX);<br>
 * -example          : CATCkeListOfParm pl = new CATCkeListOf(Parm);<br>
 * - CATCkeListOfParm is a pointer on CATLISTV(CATBaseUnknown_var)<br>
 * - CATCkeListOf(Parm) is a CATLISTV(CATBaseUnknown_var)<br>
 */

#define CATCkeListOf(x) CATLISTV(CATBaseUnknown_var)


/**   
 *  List of objects.
 */
typedef class CATLISTV(CATBaseUnknown_var)* CATCkeListOfObject;

#endif


