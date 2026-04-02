
#ifndef __CATFmEventSubscriberMethod_h__
#define __CATFmEventSubscriberMethod_h__


// COPYRIGHT DASSAULT SYSTEMES 2011

/**
 * @CAA2Level L1
 * @CAA2Usage U1
 */


// FeatureModelerExt forwards and headers.
class CATFmEvent;

// Other forwards and headers.
class CATBaseUnknown;

/**
 * Prototype of the method to call when received an event.
 * <br><b>Role</b>: Type to use to pass an argument to the event subscription method @href CATFmCatalogFacade#Subscribe .
 * <br> Note that it is absolutely forbidden to modify the data model in the user-defined method implementation.
 * @param iEvent
 *   The input event to process.
 * @see CATFmEvent .
 */
typedef void (CATBaseUnknown::*CATFmEventSubscriberMethod)(CATFmEvent & iEvent);

#endif
