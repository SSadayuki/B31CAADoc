
#ifndef __CATBehaviorSpecs_h__
#define __CATBehaviorSpecs_h__


/**
 * @CAA2Level L1
 * @CAA2Usage U1
 */
// COPYRIGHT DASSAULT SYSTEMES 1999

#include "CATListPV.h"

/**
 * @deprecated V5R21
 * @collection CATBehaviorSpecs
 * Collection class for pointer on list of interfaces.
 * Only the following methods of pointer collection classes are available:
 * <ul>
 * <li><tt>CtorFromArrayPtrs</tt></li>
 * <li><tt>AppendList</tt></li>
 * <li><tt>InsertAt</tt></li>
 * <li><tt>ReSize</tt></li>
 * <li><tt>Locate</tt></li>
 * <li><tt>eqOP</tt></li>
 * <li><tt>neOP</tt></li>
 * <li><tt>RemoveValue</tt></li>
 * <li><tt>RemoveList</tt></li>
 * <li><tt>RemovePosition</tt></li>
 * <li><tt>RemoveNulls</tt></li>
 * <li><tt>RemoveAll</tt></li>
 * <li><tt>RemoveDuplicates</tt></li>
 * <li><tt>Compare</tt></li>
 * <li><tt>Swap</tt></li>
 * <li><tt>QuickSort</tt></li>
 * <li><tt>FillArrayPtrs</tt></li>
 * <li><tt>NbOccur</tt></li>
 * <li><tt>Intersection</tt></li>
 * </ul> 
 * Refer to the articles dealing with collections in the encyclopedia.
 *
 * <b> Usage: </b> 
 * <br>Elements must be created as follows :
 * 
 * <br>CATBehaviorSpecs* mySpecs = new CATBehaviorSpecs;
 *
 * <br>CATListPV* myFirstList = new CATListPV;
 * <br>myFirstList->Append(&IID_CATIHello);
 * <br>myFirstList->Append(&IID_CATIBonjour);
 * <br>mySpecs->Append(myFirstList);
 *
 * <br>CATListPV* mySecondList = new CATListPV;
 * <br>mySecondList->Append(&IID_CATIAufwiedersehen);
 * <br>mySecondList->Append(&IID_CATIArrivederci);
 * <br>mySpecs->Append(mySecondList);
 * <br>(...)
 * 
 * <br>To sum up : mySpecs = [  [ CATIHello , CATIBonjour ] , 
 * <br>                         [ CATIAufwiedersehen , CATIArrivederci ] ]
 *  
 * <br>The resulting CATBehaviorSpecs will be translated as 
 * <br>( CATIHello AND CATIBonjour ) OR ( CATIAufwiedersehen AND CATIArrivederci )
 *
 */


#include "CATLISTP_Clean.h"
#include "CATLISTP_PublicInterface.h"
#include "CATLISTP_Declare.h"

#include "AC0SPBAS.h"
#undef	CATCOLLEC_ExportedBy
#define	CATCOLLEC_ExportedBy ExportedByAC0SPBAS

#define	CATLISTP_AppendList

CATLISTP_DECLARE(CATListPV)

typedef CATLISTP(CATListPV) CATBehaviorSpecs;

#endif // __CATBehaviorSpecs_h__

