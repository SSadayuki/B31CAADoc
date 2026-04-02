/* -*-c++-*- */
#ifndef CATListOfCATIxPDMItem_H_
#define CATListOfCATIxPDMItem_H_
// COPYRIGHT Dassault Systemes 2004
/**
 * @CAA2Level L1
 * @CAA2Usage U1
 */

/**
 * @collection CATLISTP(CATIxPDMItem_var)
 * Collection class for pointers to <tt>CATIxPDMItem</tt>.
 * Only the following methods of pointer collection classes are available:
 * <ul>
 * <li><tt>Append</tt></li>
 * <li><tt>AppendList</tt></li>
 * <li><tt>RemoveAll</tt></li>
 * <li><tt>RemoveValue</tt></li>
 * <li><tt>RemovePosition</tt></li>
 * <li><tt>Locate</tt></li>
 * <li><tt>InsertAt</tt></li>
 * </ul>
 *
 * Refer to the articles dealing with collections in the encyclopedia.
 * @see CATIxPDMItem
 */
#include "ExportedByCATxPDMInterfaces.h"

#include "CATIxPDMItem.h"

#include "CATLISTHand_Clean.h"

#define  CATLISTHand_Append
#define  CATLISTHand_AppendList
#define  CATLISTHand_InsertAt
#define  CATLISTHand_Locate
#define  CATLISTHand_RemoveValue
#define  CATLISTHand_RemovePosition
#define  CATLISTHand_RemoveAll

#include "CATLISTHand_Declare.h"

#undef	CATCOLLEC_ExportedBy
#define	CATCOLLEC_ExportedBy	ExportedByCATxPDMInterfaces

CATLISTHand_DECLARE(CATIxPDMItem_var)

#endif
