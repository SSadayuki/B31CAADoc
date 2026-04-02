//  COPYRIGHT  Dassault  Systemes  2006  
  

/**
  * @CAA2Level L0
  * @CAA2Usage U3
  */

  
/**  
  *  @collection  CATLISTP(CATIMldTechRes)  
  *  Collection  class  for  pointers  to  <tt>CATIMldTechRes</tt>.  
  *  Only  the  following  methods  of  pointer  collection  classes  are  available:  
  *  <ul>  
  *  <li><tt>Append</tt></li>  
  *  <li><tt>AppendList</tt></li>
  *  <li><tt>InsertAt</tt></li>
  *  <li><tt>Locate</tt></li>
  *  <li><tt>QuickSort</tt></li>
  *  <li><tt>RemoveAll</tt></li>
  *  <li><tt>RemoveDuplicatesCount</tt></li> 
  *  <li><tt>RemoveNulls</tt></li>
  *  <li><tt>RemovePosition</tt></li>  
  *  <li><tt>RemoveValue</tt></li>		
  *  <li><tt>ReSize</tt></li>				  
  *  <li><tt>eqOP</tt></li>				
  *  <li><tt>neOP</tt></li>	
  *  </ul>  
  *  
  *  Refer  to  the  articles  dealing  with  collections  in  the  encyclopedia.
  *  @see  CATIMldTechRes  
  */  

  
#ifndef  CATLISTP_CATIMldTechRes_H  
#define  CATLISTP_CATIMldTechRes_H  
  
//      listes  de  CATIMldTechRes  
class  CATIMldTechRes;  
  
#include "CATIMldTechRes.h"
#include "CATMldTechnoResultItfCPP.h"

#include "CATLISTHand_Clean.h"

#define  CATLISTHand_Append  
#define  CATLISTHand_AppendList  
#define  CATLISTHand_InsertAt  
#define  CATLISTHand_Locate
#define  CATLISTHand_QuickSort  
#define  CATLISTHand_RemoveAll  
#define  CATLISTHand_RemoveDuplicatesCount  
#define  CATLISTHand_RemoveNulls  
#define  CATLISTHand_RemovePosition  
#define  CATLISTHand_RemoveValue  
#define  CATLISTHand_ReSize  
#define  CATLISTHand_eqOP  
#define  CATLISTHand_neOP  
  
#include  "CATLISTP_PublicInterface.h"  
  
//  --------------------------------------------------------------------------  
//                    Get  macros  
//  --------------------------------------------------------------------------  
  
#include  "CATLISTP_Declare.h"  
//  DECLARE  All  functions  for  class  CATListPtrCATIDocId  :  
//  (generate  body  of  class)  
  
  
//  --------------------------------------------------------------------------  
//                    Generate  interface  of  collection-class  
//  --------------------------------------------------------------------------  
#undef        CATCOLLEC_ExportedBy  
#define        CATCOLLEC_ExportedBy        ExportedByCATMldTechnoResultItfCPP  
  
  
CATLISTP_DECLARE(  CATIMldTechRes  )  
  
typedef  CATLISTP(CATIMldTechRes)  CATLISTP_CATIMldTechRes;  
  
#endif  
  
  
  
