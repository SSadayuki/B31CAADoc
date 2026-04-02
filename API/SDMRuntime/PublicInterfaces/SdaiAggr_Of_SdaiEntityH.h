/**
 * @quickReview LDI 02:06:21
 */
// COPYRIGHT DASSAULT SYSTEMES  1995
//=============================================================================
//
// Aggregates of SdaiEntityH
// 
//
//=============================================================================
// Usage Notes:
//
// cf. ISO 10303-23
//=============================================================================
// Nov. 1995   Creation                                   P.Y. Ramee
//=============================================================================

#ifndef SdaiAggr_Of_SdaiEntity_H
#define SdaiAggr_Of_SdaiEntity_H

/**
 * @CAA2Level L1
 * @CAA2Usage U1
 */

#include <KS0LATE.h>


/**
 * @collection SdaiEntityH
 * Collection classes for SdaiEntityH.
 * The following collection classes are available:
 * <ul>
 *  <li>SdaiUnorderedCollectionClassOfSdaiEntityH: Unordered collection of SdaiEntityH</li>
 *  <li>SdaiOrderedCollectionClassOfSdaiEntityH: Ordered collection of SdaiEntityH</li>
 *  <li>SdaiSetClassOfSdaiEntityH: Set of SdaiEntityH</li>
 *  <li>SdaiListClassOfSdaiEntityH: List of SdaiEntityH</li>
 * </ul>
 * @see SdaiEntity
 */
//
//
#include <SdaiEntAggr.h>
#include <SdaiEntIterator.h>
//
//
#undef SDAI_AGGR_ExportedBy
#define SDAI_AGGR_ExportedBy ExportedByKS0LATE

/** @nodoc */
class SDAIAGGR(SdaiAggr,SdaiEntityH);


/** @nodoc */
SDAI_ENT_AGGR_HEADER(SdaiEntityH)
/** @nodoc */
SDAI_ENT_ITER_HEADER(SdaiEntityH)

#include <SdaiEntUnorderedCollection.h>
/** @nodoc */
class SDAIAGGR(SdaiUnorderedCollection,SdaiEntityH);
/** @nodoc */
SDAI_ENT_UNORDERED_HEADER(SdaiEntityH)

#include <SdaiEntOrderedCollection.h>
/** @nodoc */
class SDAIAGGR(SdaiOrderedCollection,SdaiEntityH);
/** @nodoc */
SDAI_ENT_ORDERED_HEADER(SdaiEntityH)

/* unused
#include <SdaiEntBag.h>
class SDAIAGGR(SdaiBag,SdaiEntityH);
SDAI_ENT_BAG_HEADER(SdaiEntityH)
*/

#include <SdaiEntSet.h>
/** @nodoc */
class SDAIAGGR(SdaiSet,SdaiEntityH);
/** @nodoc */
SDAI_ENT_SET_HEADER(SdaiEntityH)

#include <SdaiEntList.h>
/** @nodoc */
class SDAIAGGR(SdaiList,SdaiEntityH);
/** @nodoc */
SDAI_ENT_LIST_HEADER(SdaiEntityH)

/* unused
#include <SdaiEntArray.h>
class SDAIAGGR(SdaiArray,SdaiEntityH);
SDAI_ENT_ARRAY_HEADER(SdaiEntityH)
*/

#undef SDAI_AGGR_ExportedBy

#endif
