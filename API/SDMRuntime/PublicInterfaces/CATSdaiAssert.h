/** @CAA2Required */
/*---------------------------------------------------------------------*/
/* DON'T DIRECTLY INCLUDE THIS HEADER IN YOUR APPLICATION CODE. IT IS  */
/* REQUIRED TO BUILD CAA APPLICATIONS BUT IT MAY DISAPPEAR AT ANY TIME */
/*---------------------------------------------------------------------*/

// ------------------------------------------------------------------------------------------------
// COPYRIGHT DASSAULT SYSTEMES  2001
#ifndef __CATSDAIASSERT_H__
#define __CATSDAIASSERT_H__

#include <assert.h>

 /****************************************************************************/
 /*									     */
 /*  On fait notre propre assert car celui de Sun ne marche pas a cause      */
 /*  de l'operateur || des SdaiBoolean. Version Sun:			     */
 /* #if defined(__STDC__)                                                    */
 /* #define assert(EX) (void)((EX) || (__assert(#EX, __FILE__, __LINE__), 0))*/
 /* #else                                                                    */
 /* #define assert(EX) (void)((EX) || (_assert("EX", __FILE__, __LINE__), 0))*/
 /* #endif	                                                             */ 
 /*									     */
 /****************************************************************************/

 /* ANSI C Notes:
 *
 * - THE IDENTIFIERS APPEARING OUTSIDE OF #ifdef __EXTENSIONS__ IN THIS
 *   standard header ARE SPECIFIED BY ANSI!  CONFORMANCE WILL BE ALTERED
 *   IF ANY NEW IDENTIFIERS ARE ADDED TO THIS AREA UNLESS THEY ARE IN ANSI's
 *   RESERVED NAMESPACE. (i.e., unless they are prefixed by __[a-z] or
 *   _[A-Z].  For external objects, identifiers with the prefix _[a-z] 
 *   are also reserved.)
 */

#ifdef NDEBUG
#undef CATSdaiAssert
#define CATSdaiAssert(EX) ((void)0)

#else
#ifdef __sun
#ifdef __ANSI_CPP__
#define CATSdaiAssert(EX)  ((EX)?((void)0):__assert( # EX , __FILE__, __LINE__))
#else
#define CATSdaiAssert(EX)  ((EX)?((void)0):__assert("EX", __FILE__, __LINE__))
#endif
#else
#define CATSdaiAssert(EX) assert(EX)
#endif

#endif /* NDEBUG */

#endif /* !__CATSDAIASSERT_H__ */
