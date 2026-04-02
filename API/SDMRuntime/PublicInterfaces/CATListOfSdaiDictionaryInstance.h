// COPYRIGHT DASSAULT SYSTEMES  2001
#ifndef	CATListOfSdaiDictionaryInstance_h
#define	CATListOfSdaiDictionaryInstance_h
#include <KS0LATE.h>

////////////////////////////////////////////////////////////////////////////////
//
//	FrameWork SDM	--	Dassault Systems (FEB96)
//
//
//	Class :		CATListOfSdaiDictionaryInstance
//	=====
//
//	Purpose :	List of pointers to instances of class SdaiDictionaryInstance
//	=======
//		  
//
//	Authors : 	Philippe BAUCHER
//	=======
//
//
//	Abstract :	1- Generate a non-template collection-class with MACROS
//	========	   (documentation on "List of Pointers")
//
//
////////////////////////////////////////////////////////////////////////////////

/**
 *   @CAA2Level L1
 *   @CAA2Usage U1
 */


/**
 * @collection CATLISTP(SdaiDictionaryInstance)
 * Collection class for pointers to SdaiDictionaryInstance.
 * Only the following methods of collection classes are available:
 * <ul>
 * <li><tt>Append</tt></li>
 * <li><tt>Locate</tt></li>
 * <li><tt>Resize</tt></li>
 * </ul>
 * Refer to the articles dealing with collections in the encyclopedia.
 */

class SdaiDictionaryInstance;

// clean previous functions requests
#include  <CATLISTP_Clean.h>

// require needed functions
//#include  <CATLISTP_AllFunct.h>
#define  CATLISTP_Append
#define  CATLISTP_ReSize
#define  CATLISTP_Locate

// get macros
#include  <CATLISTP_Declare.h>

#undef CATCOLLEC_ExportedBy
#define CATCOLLEC_ExportedBy ExportedByKS0LATE

//
// generate interface of collection-class
// (functions declarations)
//
CATLISTP_DECLARE( SdaiDictionaryInstance )

#endif	// CATListOfSdaiDictionaryInstance_h
