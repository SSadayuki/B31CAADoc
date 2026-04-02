/**
 * @quickReview LDI 02:06:21
 */
// COPYRIGHT DASSAULT SYSTEMES  1995
//=============================================================================
//
// Aggregates of SdaiEntityInstanceH
// 
//
//=============================================================================
// Usage Notes:
//
// cf. ISO 10303-23
//=============================================================================
// Nov. 1995   Creation                                   P.Y. Ramee
//=============================================================================
#ifndef SdaiAggr_Of_SdaiEntityInstanceH_H
#define SdaiAggr_Of_SdaiEntityInstanceH_H

/**
 * @CAA2Level L1
 * @CAA2Usage U1
 */


/**
 * @collection SdaiEntityInstanceH
 * Collection classes for SdaiEntityInstanceH.
 * The following collection classes are available:
 * <ul>
 *  <li>SdaiUnorderedCollectionClassOfSdaiEntityInstanceH: Unordered collection of SdaiEntityInstanceH</li>
 *  <li>SdaiOrderedCollectionClassOfSdaiEntityInstanceH: Ordered collection of SdaiEntityInstanceH</li>
 *  <li>SdaiBagClassOfSdaiEntityInstanceH: Bag of SdaiEntityInstanceH</li>
 *  <li>SdaiSetClassOfSdaiEntityInstanceH: Set of SdaiEntityInstanceH</li>
 *  <li>SdaiListClassOfSdaiEntityInstanceH: List of SdaiEntityInstanceH</li>
 *  <li>SdaiArrayClassOfSdaiEntityInstanceH: Array of SdaiEntityInstanceH</li>
 * </ul>
 * @see SdaiEntityInstance
 */


#include <KS0SIMPL.h>
#include <SdaiMacro.h>
#include <SdaiAggr.h>
#include <SdaiIterator.h>
//
#undef SDAI_AGGR_ExportedBy
#define SDAI_AGGR_ExportedBy ExportedByKS0SIMPL
//
/** @nodoc */
class SDAIAGGR(SdaiAggr,SdaiEntityInstanceH);



/** @nodoc */
SDAIAGGR_HEADER(SdaiEntityInstanceH,INSTANCE)
/** @nodoc */
SDAIITER_HEADER(SdaiEntityInstanceH,INSTANCE)

#include <SdaiUnorderedCollection.h>
/** @nodoc */
class SDAIAGGR(SdaiUnorderedCollection,SdaiEntityInstanceH);
/** @nodoc */
SDAIUNORDERED_HEADER(SdaiEntityInstanceH,INSTANCE)

#include <SdaiOrderedCollection.h>
/** @nodoc */
class SDAIAGGR(SdaiOrderedCollection,SdaiEntityInstanceH);
/** @nodoc */
SDAIORDERED_HEADER(SdaiEntityInstanceH,INSTANCE)

#include <SdaiBag.h>
/** @nodoc */
class SDAIAGGR(SdaiBag,SdaiEntityInstanceH);
/** @nodoc */
SDAIBAG_HEADER(SdaiEntityInstanceH,INSTANCE)

#include <SdaiSet.h>
/** @nodoc */
class SDAIAGGR(SdaiSet,SdaiEntityInstanceH);
/** @nodoc */
SDAISET_HEADER(SdaiEntityInstanceH,INSTANCE)

#include <SdaiList.h>
/** @nodoc */
class SDAIAGGR(SdaiList,SdaiEntityInstanceH);
/** @nodoc */
SDAILIST_HEADER(SdaiEntityInstanceH,INSTANCE)

#include <SdaiArray.h>
/** @nodoc */
class SDAIAGGR(SdaiArray,SdaiEntityInstanceH);
/** @nodoc */
SDAIARRAY_HEADER(SdaiEntityInstanceH,INSTANCE)


// Special price for SdaiEntityInstanceH (due to Model contents)
/** @nodoc */
int add(SDAIAGGRH(SdaiSet,SdaiEntityInstanceH),const SDAIAGGRH(SdaiSet,SdaiEntityInstanceH));

#undef SDAI_AGGR_ExportedBy

#endif
