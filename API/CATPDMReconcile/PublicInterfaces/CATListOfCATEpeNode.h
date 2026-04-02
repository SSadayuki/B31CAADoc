#ifndef INCL_CATLISTPCATEpeNode_h
#define INCL_CATLISTPCATEpeNode_h
// Reconciliator
// Version 1 Release 0
// COPYRIGHT DASSAULT SYSTEMES 2004-2010
/**
  * @CAA2Level L1
  * @CAA2Usage U1
  */
// *****************************************************************
//
//   Identification :
//   ---------------
//
//      RESPONSIBLE : Jean-Luc MEDIONI
//      FUNCTION    : Reconciliator
//      USE         : CATIA & ENOVIA
//
// *****************************************************************
//
//   Description :
//   ------------
//
//    To generate code to support list of CATEpeNode pointer
//
// *****************************************************************
//
//   Remarks :
//   ---------
//
//
// ****************************************************************
//
//   Story :
//   -------
//
//    Revision 1.0  Dec 2004  Author:  Jean-Luc MEDIONI
//                            Purpose: CAA exposition
//
// ****************************************************************
//
// INSIDE class:
// -------------
//
//
//
// ****************************************************************

/**
  * @collection CATLISTP(CATEpeNode)
  * Collection class for pointers to <tt>CATEpeNode</tt>.
  * All the methods of pointer collection classes are available.
  * Refer to the articles dealing with collections in the encyclopedia.
  *
  * @see CATEpeNode
  */

// --- Clean previous functions requests

#include "CATLISTP_Clean.h"

// --- Specify the function to take into account.

//#include <CATLISTP_AllFunct.h>  // --- To include all methods

//#define   CATLISTP_CtorFromArrayPtrs
#define   CATLISTP_Append
//#define   CATLISTP_AppendList
//#define   CATLISTP_InsertAt
//#define   CATLISTP_ReSize
#define   CATLISTP_Locate
#define   CATLISTP_RemoveValue
//#define   CATLISTP_RemoveList
#define   CATLISTP_RemovePosition
#define   CATLISTP_RemoveAll
//#define   CATLISTP_RemoveNulls
//#define   CATLISTP_RemoveDuplicates
//#define   CATLISTP_Compare
//#define   CATLISTP_Swap
//#define   CATLISTP_QuickSort
//#define   CATLISTP_FillArrayPtrs
//#define   CATLISTP_NbOccur
//#define   CATLISTP_Intersection

// --- Get macros

#include "CATLISTP_Declare.h"

// --- Define the NT DLL export macro

#include "CATPDMReconcileModel.h"

#undef   CATCOLLEC_ExportedBy
#define  CATCOLLEC_ExportedBy ExportedByCATPDMReconcileModel

// --- Forward declaration of CATEpeNode class.

class CATEpeNode ;

// --- Declare the CATLISTP(CATEpeNode) type.

CATLISTP_DECLARE(CATEpeNode)

typedef  CATLISTP(CATEpeNode) CATListOfCATEpeNode ;

#endif
