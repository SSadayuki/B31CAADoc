/**
 * @quickReview LDI 02:06:21
 */
// COPYRIGHT DASSAULT SYSTEMES  1995
//=============================================================================
//
// Aggregates of SdaiBinary
// 
//
//=============================================================================
// Usage Notes:
//
// cf. ISO 10303-23
//=============================================================================
// Nov. 1995   Creation                                   P.Y. Ramee
//=============================================================================
#ifndef SdaiAggr_Of_SdaiInteger_H
#define SdaiAggr_Of_SdaiInteger_H

/**
 * @CAA2Level L1
 * @CAA2Usage U1
 */


/**
 * @collection SdaiIntegerH
 * Collection classes for SdaiIntegerH.
 * The following collection classes are available:
 * <ul>
 *  <li>SdaiUnorderedCollectionClassOfSdaiIntegerH: Unordered collection of SdaiIntegerH</li>
 *  <li>SdaiOrderedCollectionClassOfSdaiIntegerH: Ordered collection of SdaiIntegerH</li>
 *  <li>SdaiBagClassOfSdaiIntegerH: Bag of SdaiIntegerH</li>
 *  <li>SdaiSetClassOfSdaiIntegerH: Set of SdaiIntegerH</li>
 *  <li>SdaiListClassOfSdaiIntegerH: List of SdaiIntegerH</li>
 *  <li>SdaiArrayClassOfSdaiIntegerH: Array of SdaiIntegerH</li>
 * </ul>
 */

#include <KS0SIMPL.h>
#include <SdaiMacro.h>
#include <SdaiAggr.h>
#include <SdaiIterator.h>

//
//
#undef SDAI_AGGR_ExportedBy
#define SDAI_AGGR_ExportedBy ExportedByKS0SIMPL
//
//
/** @nodoc */
class SDAIAGGR(SdaiAggr,SdaiInteger);
/** @nodoc */
typedef SDAIAGGRH(SdaiAggr,SdaiInteger) SdaiAggr_Of_SdaiInteger;


/** @nodoc */
SDAIAGGR_HEADER(SdaiInteger,SIMPLE)
/** @nodoc */
SDAIITER_HEADER(SdaiInteger,SIMPLE)

#include <SdaiUnorderedCollection.h>
/** @nodoc */
class SDAIAGGR(SdaiUnorderedCollection,SdaiInteger);
/** @nodoc */
SDAIUNORDERED_HEADER(SdaiInteger,SIMPLE)	

#include <SdaiOrderedCollection.h>
/** @nodoc */
class SDAIAGGR(SdaiOrderedCollection,SdaiInteger);
/** @nodoc */
SDAIORDERED_HEADER(SdaiInteger,SIMPLE)	

#include <SdaiBag.h>
/** @nodoc */
class SDAIAGGR(SdaiBag,SdaiInteger);
/** @nodoc */
typedef SDAIAGGRH(SdaiBag,SdaiInteger) SdaiBag_Of_SdaiInteger;
/** @nodoc */
SDAIBAG_HEADER(SdaiInteger,SIMPLE)	

#include <SdaiSet.h>
/** @nodoc */
class SDAIAGGR(SdaiSet,SdaiInteger);
/** @nodoc */
typedef SDAIAGGRH(SdaiSet,SdaiInteger) SdaiSet_Of_SdaiInteger;
/** @nodoc */
SDAISET_HEADER(SdaiInteger,SIMPLE)

#include <SdaiList.h>
/** @nodoc */
class SDAIAGGR(SdaiList,SdaiInteger);
/** @nodoc */
typedef SDAIAGGRH(SdaiList,SdaiInteger) SdaiList_Of_SdaiInteger;
/** @nodoc */
SDAILIST_HEADER(SdaiInteger,SIMPLE)	

#include <SdaiArray.h>
/** @nodoc */
class SDAIAGGR(SdaiArray,SdaiInteger);
/** @nodoc */
typedef SDAIAGGRH(SdaiArray,SdaiInteger) SdaiArray_Of_SdaiInteger;
/** @nodoc */
SDAIARRAY_HEADER(SdaiInteger,SIMPLE)
	
#undef SDAI_AGGR_ExportedBy

#endif
