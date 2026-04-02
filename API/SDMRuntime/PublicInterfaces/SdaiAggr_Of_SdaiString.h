/**
 * @quickReview LDI 02:06:21
 */
// COPYRIGHT DASSAULT SYSTEMES  1995
//=============================================================================
//
// Aggregates of SdaiString
// 
//
//=============================================================================
// Usage Notes:
//
// cf. ISO 10303-23
//=============================================================================
// Nov. 1995   Creation                                   P.Y. Ramee
//=============================================================================

#ifndef SdaiAggr_Of_SdaiString_H
#define SdaiAggr_Of_SdaiString_H

/**
 * @CAA2Level L1
 * @CAA2Usage U1
 */


/**
 * @collection SdaiStringH
 * Collection classes for SdaiStringH.
 * The following collection classes are available:
 * <ul>
 *  <li>SdaiUnorderedCollectionClassOfSdaiStringH: Unordered collection of SdaiStringH</li>
 *  <li>SdaiOrderedCollectionClassOfSdaiStringH: Ordered collection of SdaiStringH</li>
 *  <li>SdaiBagClassOfSdaiStringH: Bag of SdaiStringH</li>
 *  <li>SdaiSetClassOfSdaiStringH: Set of SdaiStringH</li>
 *  <li>SdaiListClassOfSdaiStringH: List of SdaiStringH</li>
 *  <li>SdaiArrayClassOfSdaiStringH: Array of SdaiStringH</li>
 * </ul>
 * @see SdaiString
 */

#include <KS0SIMPL.h>
#include <SdaiMacro.h>
#include <SdaiAggr.h>
#include <SdaiIterator.h>
#include <SdaiString.h>

#undef SDAI_AGGR_ExportedBy
#define SDAI_AGGR_ExportedBy ExportedByKS0SIMPL

//
//
/** @nodoc */
class SDAIAGGR(SdaiAggr,SdaiString);
/** @nodoc */
typedef SDAIAGGRH(SdaiAggr,SdaiString) SdaiAggr_Of_SdaiString;


/** @nodoc */
SDAIAGGR_HEADER(SdaiString,SIMPLE)
/** @nodoc */
SDAIITER_HEADER(SdaiString,SIMPLE)

#include <SdaiUnorderedCollection.h>
/** @nodoc */
class SDAIAGGR(SdaiUnorderedCollection,SdaiString);
/** @nodoc */
SDAIUNORDERED_HEADER(SdaiString,SIMPLE)

#include <SdaiOrderedCollection.h>
/** @nodoc */
class SDAIAGGR(SdaiOrderedCollection,SdaiString);
/** @nodoc */
SDAIORDERED_HEADER(SdaiString,SIMPLE)
	
#include <SdaiBag.h>
/** @nodoc */
class SDAIAGGR(SdaiBag,SdaiString);
/** @nodoc */
typedef SDAIAGGRH(SdaiBag,SdaiString) SdaiBag_Of_SdaiString;
/** @nodoc */
SDAIBAG_HEADER(SdaiString,SIMPLE)
	
#include <SdaiSet.h>
/** @nodoc */
class SDAIAGGR(SdaiSet,SdaiString);
/** @nodoc */
typedef SDAIAGGRH(SdaiSet,SdaiString) SdaiSet_Of_SdaiString;
/** @nodoc */
SDAISET_HEADER(SdaiString,SIMPLE)
	
#include <SdaiList.h>
/** @nodoc */
class SDAIAGGR(SdaiList,SdaiString);
/** @nodoc */
typedef SDAIAGGRH(SdaiList,SdaiString) SdaiList_Of_SdaiString;
/** @nodoc */
SDAILIST_HEADER(SdaiString,SIMPLE)
	
#include <SdaiArray.h>
/** @nodoc */
class SDAIAGGR(SdaiArray,SdaiString);
/** @nodoc */
typedef SDAIAGGRH(SdaiArray,SdaiString) SdaiArray_Of_SdaiString;
/** @nodoc */
SDAIARRAY_HEADER(SdaiString,SIMPLE)

// protection
#undef SDAI_AGGR_ExportedBy

#endif
