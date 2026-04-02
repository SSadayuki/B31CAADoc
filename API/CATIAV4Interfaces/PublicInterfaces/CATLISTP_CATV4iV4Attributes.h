#ifndef CATLISTP_CATV4iV4ATTRIBUTES_H
#define CATLISTP_CATV4iV4ATTRIBUTES_H
///////////////////////////////////////////////////////////////////////////////
// COPYRIGHT DASSAULT SYSTEMES  2009                                         //
// ========================================================================= //
//                                                                           //
// CATLISTV :                                                                //
//                                                                           //
// Base class for CATLISTP of  CATV4iV4Attributes                               //
// ========================================================================= //
///////////////////////////////////////////////////////////////////////////////
/**
*  @CAA2Level L1  
*  @CAA2Usage U1
*/

#include "ExportedByCATV4iServices.h"

#include "CATLISTP_Clean.h"

/**  
 *  @collection  CATListPtrCATV4iV4Attributes  
 *  Collection  class  for  pointers  to  @href  CATV4iV4Attribute.  
 *  Only  the  following  methods  of  pointer  collection  classes  are  available:  
 *  <ul>  
 *  <li><tt>Append</tt></li>  
 *  <li><tt>Locate</tt></li> 
 *  <li><tt>RemoveValue</tt</li> 
 *  <li><tt>RemovePosition</tt</li> 
 *  <li><tt>RemoveAll</tt</li>  
 *  </ul>  
 *  Refer  to  the  articles  dealing  with  collections  in  the  encyclopedia.  
 */  
#define  CATLISTP_Append
#define  CATLISTP_Locate
#define  CATLISTP_RemoveValue
#define  CATLISTP_RemovePosition
#define  CATLISTP_RemoveAll

#include "CATLISTP_Declare.h"

class CATV4iV4Attribute;
 
#undef	CATCOLLEC_ExportedBy
#define	CATCOLLEC_ExportedBy	ExportedByCATV4iServices

CATLISTP_DECLARE( CATV4iV4Attribute )
typedef    CATLISTP(CATV4iV4Attribute )    CATListPtrCATV4iV4Attributes ;  
#endif
