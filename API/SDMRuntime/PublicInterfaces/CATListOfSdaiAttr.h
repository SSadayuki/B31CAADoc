// COPYRIGHT DASSAULT SYSTEMES  2001
#ifndef	CATListOfOfSdaiAttr_h
#define	CATListOfOfSdaiAttr_h
#include <KS0SIMPL.h>
////////////////////////////////////////////////////////////////////////////////
//
//	FrameWork SDM	--	Dassault Systems (FEB96)
//
//
//	Class :		CATListOfSdaiAttr
//	=====
//
//	Purpose :	List of pointers to instances of class SdaiAttr
//	=======
//		  
//
//	Authors : 	Philippe	BAUCHER
//	=======
//
//
//	Abstract :	1- Generate a non-template collection-class with MACROS
//	========	   (documentation on "List of Pointers")
//
//
////////////////////////////////////////////////////////////////////////////////

// class operations are required
/**
 *   @CAA2Level L1
 *   @CAA2Usage U1
 */


/**
 * @collection CATLISTP(SdaiAttr)
 * Collection class for pointers to SdaiAttr.
 * Only the following methods of collection classes are available:
 * <ul>
 * <li><tt>Append</tt></li>
 * <li><tt>AppenList</tt></li>
 * <li><tt>RemoveValue</tt></li>
 * <li><tt>Locate</tt></li>
 * <li><tt>Resize</tt></li>
 * </ul>
 * Refer to the articles dealing with collections in the encyclopedia.
 */

class SdaiAttr;

// clean previous functions requests
#include  <CATLISTP_Clean.h>

// require needed functions
//#include  <CATLISTP_AllFunct.h>
#include "CATLISTP_PublicInterface.h"
#define  CATLISTP_Append
#define  CATLISTP_AppendList
#define  CATLISTP_RemoveValue
#define  CATLISTP_Locate
#define  CATLISTP_ReSize

// get macros
#include  <CATLISTP_Declare.h>

#undef CATCOLLEC_ExportedBy
#define CATCOLLEC_ExportedBy ExportedByKS0SIMPL

//
// generate interface of collection-class
// (functions declarations)
//
CATLISTP_DECLARE( SdaiAttr )

#endif	// CATListOfOfSdaiAttr_h
