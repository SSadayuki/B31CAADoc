#ifndef CATI18NTypes_H
#define CATI18NTypes_H

#ifdef _WINDOWS_SOURCE 
#ifdef __xxxxxx
/** @nodoc */
#define ExportedByxxxxxx  __declspec(dllexport) 
#else
/** @nodoc */
#define ExportedByxxxxxx  __declspec(dllimport) 
#endif
#else
/** @nodoc */
#define ExportedByxxxxxx
#endif

// COPYRIGHT DASSAULT SYSTEMES 1999

/**
 * @CAA2Level L1
 * @CAA2Usage U1
 */

/** 
 * Definition of Internationalization Framework types.
 * <b>Role</b>:
 * Defines Internationalization Framework types.
 * <p>
 * You will find below a reference to the Unicode 
 * standard, and to UTF8. Unicode is a standard designed and
 * promoted by the unicode consortium, it encodes characters
 * on two bytes. UTF-8 is a transformation format used as a file
 * code set, in particular for persistent data. The ISO10646 
 * standard is built on the top of unicode, it includes several 
 * code sets: Unicode, known here as UCS-2 (for Universal 
 * Multiple-Octet Coded Character Set 2-byte form), UTF-8 and
 * so on ...
 * <p>
 * <b>Note</b>: You will find also below some references to the 
 * STEP Standard. It is descibed in ISO 10133 .
 */

/** 
 * CATUC2Bytes type.
 * <b>Role<b>: UCS-2 character.
 */
typedef unsigned short int CATUC2Bytes; 
#endif

