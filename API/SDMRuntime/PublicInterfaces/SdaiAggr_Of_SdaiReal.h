/**
 * @quickReview LDI 02:06:21
 */
// COPYRIGHT DASSAULT SYSTEMES  1995
//=============================================================================
//
// Aggregates of SdaiReal
// 
//
//=============================================================================
// Usage Notes:
//
// cf. ISO 10303-23
//=============================================================================
// Nov. 1995   Creation                                   P.Y. Ramee
//=============================================================================

#ifndef SdaiAggr_Of_SdaiReal_H
#define SdaiAggr_Of_SdaiReal_H

/**
 * @CAA2Level L1
 * @CAA2Usage U1
 */


/**
 * @collection SdaiRealH
 * Collection classes for SdaiRealH.
 * The following collection classes are available:
 * <ul>
 *  <li>SdaiUnorderedCollectionClassOfSdaiRealH: Unordered collection of SdaiRealH</li>
 *  <li>SdaiOrderedCollectionClassOfSdaiRealH: Ordered collection of SdaiRealH</li>
 *  <li>SdaiBagClassOfSdaiRealH: Bag of SdaiRealH</li>
 *  <li>SdaiSetClassOfSdaiRealH: Set of SdaiRealH</li>
 *  <li>SdaiListClassOfSdaiRealH: List of SdaiRealH</li>
 *  <li>SdaiArrayClassOfSdaiRealH: Array of SdaiRealH</li>
 * </ul>
 */

#include <KS0SIMPL.h>
#include <SdaiMacro.h>
#include <SdaiAggr.h>
#include <SdaiIterator.h>

#undef SDAI_AGGR_ExportedBy
#define SDAI_AGGR_ExportedBy ExportedByKS0SIMPL

//
//
/** @nodoc */
class SDAIAGGR(SdaiAggr,SdaiReal);
/** @nodoc */
typedef SDAIAGGRH(SdaiAggr,SdaiReal) SdaiAggr_Of_SdaiReal;



/** @nodoc */
SDAIAGGR_HEADER(SdaiReal,SIMPLE)
/** @nodoc */
SDAIITER_HEADER(SdaiReal,SIMPLE)

#include <SdaiUnorderedCollection.h>
/** @nodoc */
class SDAIAGGR(SdaiUnorderedCollection,SdaiReal);
/** @nodoc */
SDAIUNORDERED_HEADER(SdaiReal,SIMPLE)


#include <SdaiOrderedCollection.h>
/** @nodoc */
class SDAIAGGR(SdaiOrderedCollection,SdaiReal);
/** @nodoc */
SDAIORDERED_HEADER(SdaiReal,SIMPLE)

#include <SdaiBag.h>
/** @nodoc */
class SDAIAGGR(SdaiBag,SdaiReal);
/** @nodoc */
typedef SDAIAGGRH(SdaiBag,SdaiReal) SdaiBag_Of_SdaiReal;
/** @nodoc */
SDAIBAG_HEADER(SdaiReal,SIMPLE)

#include <SdaiSet.h>
/** @nodoc */
class SDAIAGGR(SdaiSet,SdaiReal);
/** @nodoc */
typedef SDAIAGGRH(SdaiSet,SdaiReal) SdaiSet_Of_SdaiReal;
/** @nodoc */
SDAISET_HEADER(SdaiReal,SIMPLE)

#include <SdaiList.h>
/** @nodoc */
class SDAIAGGR(SdaiList,SdaiReal);
/** @nodoc */
typedef SDAIAGGRH(SdaiList,SdaiReal) SdaiList_Of_SdaiReal;
/** @nodoc */
SDAILIST_HEADER(SdaiReal,SIMPLE)

#include <SdaiArray.h>
/** @nodoc */
class SDAIAGGR(SdaiArray,SdaiReal);
/** @nodoc */
typedef SDAIAGGRH(SdaiArray,SdaiReal) SdaiArray_Of_SdaiReal;
/** @nodoc */
SDAIARRAY_HEADER(SdaiReal,SIMPLE)

#undef SDAI_AGGR_ExportedBy

#endif
