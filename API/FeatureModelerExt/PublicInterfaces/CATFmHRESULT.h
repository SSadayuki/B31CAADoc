
#ifndef __CATFmHRESULT_h__
#define __CATFmHRESULT_h__


// COPYRIGHT DASSAULT SYSTEMES 2010

/**
 * @CAA2Level L1
 * @CAA2Usage U1
 */


// FeatureModelerExt forwards and headers.
#include "FeatureModelerExt.h" // ExportedByFeatureModelerExt

// Other forwards and headers.
class CATError;
#include "CATErrorDef.h" // MAKE_HRESULT


/** @nodoc HRESULT encoding. */
#define FM_MAKE_HRESULT(mask, id) MAKE_HRESULT(SEVERITY_ERROR, FACILITY_ITF, (mask | ((id) & 0xff)))

/** The attribute is not defined. */
#define E_FMKEYNOTFOUND FM_MAKE_HRESULT(0xAF00, 0x2)

/** Index is outside the bounds of a list. */
#define E_FMOUTOFBOUND FM_MAKE_HRESULT(0xAF00, 0x3)

/** Operation cannot be done because attribute is not a list. */
#define E_FMNOTALIST FM_MAKE_HRESULT(0xAF00, 0x4)

/** Operation cannot be done because type does not match. */
#define E_FMTYPEMISMATCH FM_MAKE_HRESULT(0xAF00 ,0x5)

/** There is no local value for a given attribute. */
#define E_FMNOLOCALVALUE FM_MAKE_HRESULT(0xAE00, 0x1)

/** The attribute is redirected to an attribute that cannot be found. */
#define E_FMREDIRECTED FM_MAKE_HRESULT(0xAE00, 0x3)

/** The target is not loaded. */
#define E_FMNOTLOADED FM_MAKE_HRESULT(0xAE00, 0x4)

/** An unexpected exception has been raised during method call. */
#define E_FMEXCEPTIONRAISED FM_MAKE_HRESULT(0xAE00, 0x5)

/** Update has failed. */
#define E_FMUPDATEERROR FM_MAKE_HRESULT(0xAE00, 0xA)

/** The feature on which method has been called is invalid, NULL or destroyed. */
#define E_FMINVALIDFEATURE FM_MAKE_HRESULT(0xAE00, 0xB)

/** The operation is not allowed. */
#define E_FMOPERATIONNOTALLOWED FM_MAKE_HRESULT(0xAE00, 0xC)

/** The operation cannot be performed because it will lead to aggregation error. */
#define E_FMAGGREGATIONERROR FM_MAKE_HRESULT(0xAE00, 0xD)

/** The value is unreachable because private to inherited feature. */
#define E_FMPRIVATEVALUE FM_MAKE_HRESULT(0xAE00, 0xE)

/**  The operation cannot be performed as it is not supported on early features. */
#define E_FMOPERATIONNOTSUPPORTED FM_MAKE_HRESULT(0xAE00, 0xF)

/** Object does not represent a knowledge parameter. */
#define E_FMNOTAPARAMETER FM_MAKE_HRESULT(0xBA00, 0x1)

/** Access is denied because object represents a knowledge parameter. */
#define E_FMPARAMETER FM_MAKE_HRESULT(0xBA00, 0x2)


/** Operation failed because object has a cardinality different from 1. */
#define E_FMNOTASINGLE FM_MAKE_HRESULT(0xBA00, 0x3)


/** Access is denied because no plm session was found. */
#define E_FMNOPLMSESSION FM_MAKE_HRESULT(0xBB00, 0x1)

/** Access is denied because of a loading mode incompatible with the application. */
#define E_FMLOADINGMODE FM_MAKE_HRESULT(0xBB00, 0x2)

/** Access is denied because object is runtime resource (for example a Feature Catalog). */
#define E_FMPROTECTEDRESOURCE FM_MAKE_HRESULT(0xBB00, 0x3)

/** Access is denied because object is read-only. */
#define E_FMREADONLY FM_MAKE_HRESULT(0xBB00, 0x4)

/**
 * Get last error raised by a feature modeler method call.
 * <br/>All feature modeler methods block exceptions.
 * <br/>However if an exception is caught during a method call, it is stored temporarily
 * and it is possible to retrieve it through this method and perform some error handling code.
 * @param iReturnCode
 *   The HRESULT returned by previous method call.
 *   <br/>Note: an error can be associated to this HRESULT only if it represents a failure.
 * @return
 *   The error raised during previous method call.
 * @see CATError .
 */
ExportedByFeatureModelerExt CATError * CATFmGetLastError(HRESULT iReturnCode);


#endif // __CATFmHRESULT_h__
