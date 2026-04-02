/**
 * @quickReview LDI 02:06:21
 */
// COPYRIGHT DASSAULT SYSTEMES  1995
//=============================================================================
//
// Aggregates of SdaiAttrH
// 
//
//=============================================================================
// Usage Notes:
//
// cf. ISO 10303-23
//=============================================================================
// Nov. 1995   Creation                                   P.Y. Ramee
//=============================================================================

#ifndef SdaiAggr_Of_SdaiAttr_H
#define SdaiAggr_Of_SdaiAttr_H

/**
 * @CAA2Level L1
 * @CAA2Usage U1
 */

#include <KS0LATE.h>


/**
 * @collection SdaiAttrH
 * Collection classes for SdaiAttrH.
 * The following collection classes are available:
 * <ul>
 *  <li>SdaiOrderedCollectionClassOfSdaiAttrH: Ordered collection of SdaiAttrH</li>
 *  <li>SdaiListClassOfSdaiAttrH: List of SdaiAttrH</li>
 * </ul>
 * @see SdaiAttr
 */

//
//
//#include <SdaiAggMacro.h>
#include <SdaiEntAggr.h>
#include <SdaiEntIterator.h>

#undef SDAI_AGGR_ExportedBy
#define SDAI_AGGR_ExportedBy ExportedByKS0LATE

//
//
/** @nodoc */
class SDAIAGGR(SdaiAggr,SdaiAttrH);

/** @nodoc */
SDAI_ENT_AGGR_HEADER(SdaiAttrH)
/** @nodoc */
SDAI_ENT_ITER_HEADER(SdaiAttrH)

/* unused
#include <SdaiUnorderedCollection.h>
class SDAIAGGR(SdaiUnorderedCollection,SdaiAttrH);
SDAI_ENT_UNORDERED_HEADER(SdaiAttrH)
*/

#include <SdaiEntOrderedCollection.h>
/** @nodoc */
class SDAIAGGR(SdaiOrderedCollection,SdaiAttrH);
/** @nodoc */
SDAI_ENT_ORDERED_HEADER(SdaiAttrH)

/* unused
#include <SdaiEntBag.h>
class SDAIAGGR(SdaiBag,SdaiAttrH);
SDAI_ENT_BAG_HEADER(SdaiAttrH)

#include <SdaiEntSet.h>
class SDAIAGGR(SdaiSet,SdaiAttrH);
SDAI_ENT_SET_HEADER(SdaiAttrH)
*/

#include <SdaiEntList.h>
/** @nodoc */
class SDAIAGGR(SdaiList,SdaiAttrH);
/** @nodoc */
SDAI_ENT_LIST_HEADER(SdaiAttrH)

/* unused
#include <SdaiEntArray.h>
class SDAIAGGR(SdaiArray,SdaiAttrH);
SDAI_ENT_ARRAY_HEADER(SdaiAttrH)
*/

#undef SDAI_AGGR_ExportedBy

#endif
