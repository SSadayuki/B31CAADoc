#ifndef __CATOsmHRESULT_h__
#define __CATOsmHRESULT_h__

/**
 * @CAA2Level L1
 * @CAA2Usage U3
 * COPYRIGHT DASSAULT SYSTEMES 2008
 */

// System
#include "CATErrorDef.h"
// ObjectModelerCollection
#include "CATOmxHRESULT.h"


// The following HRESULT values are (now) defined in CATOmxHRESULT.h that is included by this file:
//   E_NOLOCALVALUE   There is no local value associated to this key.
//   E_KEYNOTFOUND    Key does not exist for this item.
//   E_OUTOFBOUND     Access outside the bound of the list.
//   E_NOTALIST       Invalid list operation.
//   E_TYPEMISMATCH   Incorrect type for this operation.
// Only the location of the definitions has been changed, not the value nor the semantic of the errors.


/** An attribute or feature facet cannot be found. */
#define E_FACETNOTFOUND MAKE_HRESULT(SEVERITY_ERROR, FACILITY_ITF, 0xAF00 |0x0009 )

/** The target cannot be loaded. */
#define E_CANNOTLOAD MAKE_HRESULT(SEVERITY_ERROR, FACILITY_ITF, 0xAF00 | 0x0006)

/** An intermediate attribute link cannot be solved: either an intermediate feature cannot be loaded or an intermediate key does not exist. */
#define E_ATTRLINK MAKE_HRESULT(SEVERITY_ERROR, FACILITY_ITF, 0xAF00 | 0x0007 )

/** The target is not loaded. */
#define E_NOTLOADED MAKE_HRESULT(SEVERITY_ERROR, FACILITY_ITF, 0xAF00 | 0x0008)


/** No aggregation link can exist between two Feaetures that are not in the same peristency unit. */
#define E_AGGBOUNDARYERROR MAKE_HRESULT(SEVERITY_ERROR, FACILITY_ITF, 0xAF00 | 0x0020)

/** No Feature can be aggregated more than once at any given time. */
#define E_AGGMULTIPLEOWNERERROR MAKE_HRESULT(SEVERITY_ERROR, FACILITY_ITF, 0xAF00 | 0x0021)


/** The feature on which method has been called is invalid, NULL or destroyed. */
#define E_INVALIDFEATURE MAKE_HRESULT(0xAE00, 0x000B)


/**
 * No explicit error condition has been detected during the execution of the method.
 * However, due to the reliance of the method on legacy APIs and algorithms that do not provide comprehensive error reporting,
 * no strong guaranty can be provided about a complete errorless completion of the method.
 * The methods that list this value as a potential returned value used to be void, preventing them from reporting identified error cases.
 */
#define S_NOSTATUS ((HRESULT)0x00000002L)

#endif
