// COPYRIGHT DASSAULT SYSTEMES 2005

/** 
 * @CAA2Level L1
 * @CAA2Usage U5
 */

/**
 * @nodoc 
 */
#define ElecFilterBundleSegment     (1 << 1)
/**
 * @nodoc 
 */
#define ElecFilterDevice            (1 << 2)
/**
 * @nodoc 
 */
#define ElecFilterSupport           (1 << 3)
/**
 * @nodoc 
 */
#define ElecFilterProtection        (1 << 4)

/**
 * The filtering option during filter process.
 * Example : ElecFilterBundleSegment|ElecFilterDevice.
 */
typedef unsigned long CATEwrFilterOption;
