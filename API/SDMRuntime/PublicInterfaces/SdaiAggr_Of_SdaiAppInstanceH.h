/**
 * @quickReview LDI 02:06:21
 */
// COPYRIGHT DASSAULT SYSTEMES  2001
#ifndef SDAIAGGR_OF_SDAIAPPINSTANCEH_H
#define SDAIAGGR_OF_SDAIAPPINSTANCEH_H

/**
 * @CAA2Level L1
 * @CAA2Usage U1
 */

#include <KS0LATE.h>


/**
 * @collection SdaiAppInstanceH
 * Collection classes for SdaiAppInstanceH.
 * The following collection classes are available:
 * <ul>
 *  <li>SdaiUnorderedCollectionClassOfSdaiAppInstanceH: Unordered collection of SdaiAppInstanceH</li>
 *  <li>SdaiOrderedCollectionClassOfSdaiAppInstanceH: Ordered collection of SdaiAppInstanceH</li>
 *  <li>SdaiBagClassOfSdaiAppInstanceH: Bag of SdaiAppInstanceH</li>
 *  <li>SdaiSetClassOfSdaiAppInstanceH: Set of SdaiAppInstanceH</li>
 *  <li>SdaiListClassOfSdaiAppInstanceH: List of SdaiAppInstanceH</li>
 *  <li>SdaiArrayClassOfSdaiAppInstanceH: Array of SdaiAppInstanceH</li>
 * </ul>
 * @see SdaiAppInstance
 */


//
//
#include <SdaiMacro.h>
#include <SdaiAggr.h>
#include <SdaiIterator.h>
//
//
#undef SDAI_AGGR_ExportedBy
#define SDAI_AGGR_ExportedBy ExportedByKS0LATE

/** @nodoc */
class SDAIAGGR(SdaiAggr,SdaiAppInstanceH);
/** @nodoc */
typedef SDAIAGGRH(SdaiAggr,SdaiAppInstanceH) SdaiAggr_Of_SdaiAppInstanceH;


/** @nodoc */
SDAIAGGR_HEADER(SdaiAppInstanceH,INSTANCE)
/** @nodoc */
SDAIITER_HEADER(SdaiAppInstanceH,INSTANCE)

#include <SdaiUnorderedCollection.h>
/** @nodoc */
class SDAIAGGR(SdaiUnorderedCollection,SdaiAppInstanceH);
/** @nodoc */
SDAIUNORDERED_HEADER(SdaiAppInstanceH,INSTANCE)

#include <SdaiOrderedCollection.h>
/** @nodoc */
class SDAIAGGR(SdaiOrderedCollection,SdaiAppInstanceH);
/** @nodoc */
SDAIORDERED_HEADER(SdaiAppInstanceH,INSTANCE)

#include <SdaiBag.h>
/** @nodoc */
class SDAIAGGR(SdaiBag,SdaiAppInstanceH);
/** @nodoc */
typedef SDAIAGGRH(SdaiBag,SdaiAppInstanceH) SdaiBag_Of_SdaiAppInstanceH;
/** @nodoc */
SDAIBAG_HEADER(SdaiAppInstanceH,INSTANCE)

#include <SdaiSet.h>
/** @nodoc */
class SDAIAGGR(SdaiSet,SdaiAppInstanceH);
/** @nodoc */
typedef SDAIAGGRH(SdaiSet,SdaiAppInstanceH) SdaiSet_Of_SdaiAppInstanceH;
/** @nodoc */
SDAISET_HEADER(SdaiAppInstanceH,INSTANCE)

#include <SdaiList.h>
/** @nodoc */
class SDAIAGGR(SdaiList,SdaiAppInstanceH);
/** @nodoc */
typedef SDAIAGGRH(SdaiList,SdaiAppInstanceH) SdaiList_Of_SdaiAppInstanceH;
/** @nodoc */
SDAILIST_HEADER(SdaiAppInstanceH,INSTANCE)

#include <SdaiArray.h>
/** @nodoc */
class SDAIAGGR(SdaiArray,SdaiAppInstanceH);
/** @nodoc */
typedef SDAIAGGRH(SdaiArray,SdaiAppInstanceH) SdaiArray_Of_SdaiAppInstanceH;
/** @nodoc */
SDAIARRAY_HEADER(SdaiAppInstanceH,INSTANCE)


#undef SDAI_AGGR_ExportedBy

#endif
