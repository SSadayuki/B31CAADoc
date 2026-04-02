#ifndef CATUnicodeString_H
#define CATUnicodeString_H

#ifdef _WINDOWS_SOURCE  
#ifdef __NS0S3STR
/** @nodoc */
#define ExportedByNS0S3STR  __declspec(dllexport) 
#else
/** @nodoc */
#define ExportedByNS0S3STR  __declspec(dllimport) 
#endif
#else
/** @nodoc */
#define ExportedByNS0S3STR
#endif 

// COPYRIGHT DASSAULT SYSTEMES 1999

/**
 * @CAA2Level L1
 * @CAA2Usage U1
 */ 

#include <stdlib.h>
#include "CATDataType.h"
#include "CxxSupport.h"
#include "CATUnicodeChar.h"
#include "CATI18NTypes.h"
#include "CATBaseUnknown.h"
#include "CATBSTR.h"
#include "CATBoolean.h"

/** @nodoc */
#define CATUSFullVsHalfWidthIgnore 0x00000001

class CATInterUnicodeString ;  
class CATString ;
#ifdef _CAT_ANSI_STREAMS
/** @c++ansi aew 2004-08-02.20:05:17 [Replace forward declaration of standard streams with iosfwd.h] **/
 #include "iosfwd.h"     
#else //!_CAT_ANSI_STREAMS 
class istream;    
#endif //_CAT_ANSI_STREAMS

/** 
 * Class to use for NLS character strings. 
 * <b>Role</b>:
 * CATUnicodeString (to compare to the @href CATString class) must 
 * be used whenever a character string is
 * needed, and that is either seen, entered, or manipulated by the 
 * end user. In this way, the client application is shielded from 
 * implementation details regarding language, locale, bytecoding
 * of characters, and so forth. Client applications thus become 
 * portable since they can handle character strings expressed in 
 * any language.
 * <p>
 * When NLS support is not required, you can use instead the
 * @href CATString class from the System framework. It does support 
 * only ISO 646, so that to supress all the problems that arise 
 * with NLS complexity. You should never use the raw char * type.
 * <p>
 * <b>Note</b>: Among the methods to manipulate instances of this class, you will find below some references to the
 * Unicode standard, to UTF-8, and to UTF-16. Unicode is a standard designed and promoted by the unicode consortium, it
 * encodes characters on two bytes. CATIA NLS strings in internalized data are encoded in Unicode 3.0 (see the code
 * charts at http://www.unicode.org ). UTF-8 is a transformation format used as a file code set, in particular for CATIA
 * persistent data. UTF-16 is used in particular by XML processors, in particular by XML parsers. The ISO 10646 standard
 * is built on the top of unicode, it includes several code sets: Unicode, known here as UCS-2 (for Universal 
 * Multiple-Octet Coded Character Set 2-byte form), UTF-8, UTF-16 and so on ...
 * <p><b>Note</b>: You will find also below some references to the STEP Standard. It is descibed in ISO 10133 .
 * <p><b>Note</b>: You will find also below some references to the SBCS acronym. SBCS is for Single Byte Character
 * Set, and MBCS for Multi Byte Character Set. They both correspond to localized character set (specific to a given
 * country langage, at the opposite of Unicode, which describes several country character sets simutaneously). In
 * internationalization history, SBCS and MBCS are anterior to Unicode. For example, the ISO 8859-1 encoding describes
 * several west european languages. It is a SBCS encoding, meaning that a char* in this encoding had to be interpreted
 * at the byte level (each byte corresponding to one and only one character in the Code Page, which could be described 
 * graphically as a 16 per 16 table, ordered trough the 4 first bits horizontally and its 4 last bits vertical, i.e. 
 * hexa code). The IBM-932 Code Page is an example of MBCS encoding, i.e. a  char * having to be interpreted in this
 * Code Page would have to be read the following way: 
 *  . read the first byte, if the dedicated columns (see the
 *    hexa code graphic representation mentionned above),
 *    i.e. the 8,9,E and F column for IBM-932, are set
 *    to zero, the byte will be interpreted alone
 *    (latin or single-width katakana)
 *  . otherwise, i.e. if one of the 8,9,E and F column is set,
 *    the byte, to be interpreted, will have to have the next
 *    byte read (consequently, it makes two bytes together). This
 *    solutions enables to give access to the several thousands
 *    of characters that the IBM-932 describes.
 *  . and so on ...
 * <p><b>CAUTION</b>: The methods manipulating char* should rarely be used. They may be used:
 * <ul>
 * <li>combined with the use of Unix MOTIF services</li>
 * <li>to display debug traces on the stdout</li>
 * </ul>
 * <p>
 * The best way to manipulate strings is to use the Unicode encoding, the char* has many limitations.
 * <br>Suppose, for example, you call the CATUnicodeString constructor from a "const char*" on Windows, and, during
 * execution, the given char* contains one byte, B1 in hexa, followed by the NULL byte which ends the string. Then, the 
 * constructor from a char* will behave the following way:
 * <ul>
 * <li>if the General\"Settings for the current user" field in the "Control Panel"\"Regional Options" window is set to
 * English, the built CATUnicodeString will contain the "PLUS-MINUS SIGN" character</li>
 * <li>if it set on Japanese, the built CATUnicodeString will contain the "HALFWIDTH KATAKANA LETTER A" character</li>
 * <li>if it set on Korean, the built CATUnicodeString will have the following behavior:
 * <ul>
 * <li>a call to @href CATUnicodeString#ConvertToUCChar onto the CATUnicodeString will give one CATUC2Bytes containing the 003F character 
 * ("QUESTION MARK", which is the default character)</li>
 * <li>a call to @href CATUnicodeString#ConvertToChar onto the CATUnicodeString will give a char* containing one byte, the B1 byte</li>
 * </ul>
 * Actually, the B1 code belongs to the range of two-bytes code representations</li>
 * </ul>
 * <p><b>CAUTION</b>: This class uses the current locale. If you changed the locale in your applicative code, using
 * the setlocale sytem call for example, you must manage so that, before calling a method of this class, the current
 * locale be the locale which was the current locale when CATIA was run:
 * <ul>
 * <li>a Japanese localized string is in the IBM 932 code page. The characters, in the IBM 932
 * code page, have a code representation on one or two bytes, depending the range of the first character</li>
 * <li>The mblen system call enables, for example when parsing a japanese localized string, to precise if the current
 * string character code representation takes one or two bytes</li>
 * <li>the CATUnicodeString constructor from a const char* calls the mblen system call</li>
 * </ul>
 * Consequently, if your applicative code calls the setlocale method, and you call a CATUnicodeString method without
 * having previously restore the locale to the one which was the current locale when CATIA was run, the
 * CATUnicodeString method will not be able to parse localized strings.
 * <br>More generally, if your applicative code changes the locale, manage so that, before calling any CAA method, the
 * current locale be the locale which was the current locale when CATIA was run. 
 */
class ExportedByNS0S3STR  CATUnicodeString  
{

   public :

	/**
	 * Constructs an empty Unicode string.
	 */
	CATUnicodeString(); 

#if defined(DS_CXX11_SUPPORT_MOVE_SEMANTIC)
    /**
     * Move constructor.
     */
    inline CATUnicodeString(CATUnicodeString &&iRValue);
#endif  // DS_CXX11_SUPPORT_MOVE_SEMANTIC

	/** 
	 * Copy constructor. 
	 * @param iString 
	 *   The Unicode string to copy 
	 */
	CATUnicodeString(const CATUnicodeString& iString);

  
	/**
	 * Constructs a CATUnicodeString instance from a char *.
	 * <br><b>CAUTION</b>: The best way to manipulate strings is to use the Unicode encoding. The use of
  * @href #BuildFromUCChar is better than the use of the current constructor. In fact, CATIA uses this method for the
  * rare conversions from the thread code page to Unicode, i.e. :
	 * <ul>
	 * <li>parsing of message catalog strings</li>
	 * <li>interactive input of strings on Unix</li>
	 * <li>reading strings in databases</li>
	 * </ul>
	 * @param iString
	 *   The pointer to the character string
	 */
	CATUnicodeString(const char* const iString); 

	/**
	 * Constructs a CATUnicodeString instance from a char * and a 
	 * number of characters.
	 * <br><b>CAUTION</b>: The best way to manipulate strings is to use the Unicode encoding. The use of
  * @href #BuildFromUCChar is better than the use of the current constructor.
	 * @param iString
	 *   The pointer to the character string
	 * @param iLength
	 *   The number of characters to be taken into account, starting at 
	 *   the first character.
	 *   <b>Legal values</b>: Must be less than or equal to the total 
	 *   number of characters contained in <tt>iString</tt> 
	 */
	CATUnicodeString(const char* const iString, size_t iLength); 
   

	/**
	 * Constructs a CATUnicodeString instance by repeating a given 
	 * character.
	 * @param iChar
	 *   The character to be repeated
	 * @param iRepeatCount
	 *   The number of times <tt>iChar</tt> is to be repeated
	 */
	CATUnicodeString(const CATUnicodeChar&    iChar,   
	                size_t iRepeatCount=1);
     
	/**
	 * Constructs a CATUnicodeString instance by repeating a given 
	 * character string.
	 * @param iString
	 *   The character string to be repeated
	 * @param iRepeatCount
	 *   The number of times <tt>iString</tt> is to be repeated
	 */
	CATUnicodeString(const CATUnicodeString&  iString, 
	                size_t iRepeatCount);

	~CATUnicodeString() ;         


	/**
	 * Converts an array of Unicode characters into the current 
	 * string. 
	 * <p>About the Unicode standard, see above.
	 * @param iUnicodeString
	 *   The table of Unicode characters
	 * @param iStringLength
	 *   The string length in unicode characters count
	 * @return
	 *   Boolean specifying the success or not of the action
	 *   <br><b>Legal values</b>: <tt>1</tt> if the string has been
	 *   successfully converted, or <tt>-1</tt> if a problem 
	 *   occured during the conversion.
	 */
	int BuildFromUCChar(const CATUC2Bytes *iUnicodeString, 
	                   int iStringLength);

	/**
	 * Converts an array of Unicode characters into the current 
	 * string. 
	 * @param iUnicodeString
	 *   The table of Unicode characters
	 * @param iNbChar
	 *   The number of Unicode characters in the table
	 * @return
	 * @return
	 *   Integer specifying the success or not of the action
	 *   <br><b>Legal values</b>: <tt>0</tt> if the string has been
	 *   successfully converted and its length equals to zero,
	 *   <tt>1</tt> if the string has been successfully converted
	 *   and its length does not equal to zero, or <tt>-1</tt> 
	 *   if a problem occured during the conversion.
	 */
	int BuildFromWChar(const wchar_t *iUnicodeString);
#if defined(DS_NATIVE_WCHAR_T_DEFINED)
    int BuildFromWChar(unsigned short const *iUnicodeString);
#endif  // DS_NATIVE_WCHAR_T_DEFINED

	/**
	 * Converts, formats and stores a specified integer, under control of the format parameter, into the current string.
	 * @param iIntegerValue
	 *   The integer value
	 * @param iCFormat
	 *   The format of the integer value, defaulted to "%d", according to the sprintf
	 *   library function base conversions
	 * @return
	 *   Output string length
	 *   <br><b>Legal values</b>: <tt>0</tt> if the conversion didn't
	 *   succeed, or <tt>Other</tt> if the conversion did succeed,
	 *   in which case the value will be the byte count of the
	 *   char * equivalent to the result string.
	 */
	int BuildFromNum(int iIntegerValue, const char *iCFormat="%d");

	/**
	 * Converts, formats and stores a specified unsigned integer, under control of the format parameter, into the current
	 * string.
	 * @param iUnsignedIntegerValue
	 *   The unsigned integer value
	 * @param iCFormat
	 *   The format of the unsigned integer value, defaulted to "%d", according 
	 *   to the sprintf library function base conversions
	 * @return
	 *   Output string length
	 *   <br><b>Legal values</b>: <tt>0</tt> if the conversion didn't
	 *   succeed, or <tt>Other</tt> if the conversion did succeed,
	 *   in which case the value will be the byte count of the
	 *   char * equivalent to the result string.
	 */
    int BuildFromNum(unsigned int iIntegerValue, const char *iCFormat="%u");

	/**
	 * Converts, formats and stores a specified long integer, under control of the format parameter, into the current
	 * string.
	 * @param iLongIntegerValue
	 *   The long integer value
	 * @param iCFormat
	 *   The format of the long integer value, defaulted to "%d", according to the
	 *   sprintf library function base conversions
	 * @return
	 *   Output string length
	 *   <br><b>Legal values</b>: <tt>0</tt> if the conversion didn't
	 *   succeed, or <tt>Other</tt> if the conversion did succeed,
	 *   in which case the value will be the byte count of the
	 *   char * equivalent to the result string. 
	 */
	int BuildFromNum(long iLongIntegerValue, const char *iCFormat="%d");

	/**
	 * Converts, formats and stores a specified unsigned long integer, under control of the format parameter, into the
	 * current string.
	 * @param iUnsLongIntegerValue
	 *   The unsigned long integer value
	 * @param iCFormat
	 *   The format of the unsigned long integer value, defaulted to 
	 *   "%u", according to the sprintf library function base 
	 *   conversions
	 * @return
	 *   Output string length
	 *   <br><b>Legal values</b>: <tt>0</tt> if the conversion didn't
	 *   succeed, or <tt>Other</tt> if the conversion did succeed,
	 *   in which case the value will be the byte count of the
	 *   char * equivalent to the result string.
	 */
	int BuildFromNum(unsigned long iUnsLongIntegerValue, 
	                const char *iCFormat="%u");

	/**
	 * Converts, formats and stores a specified double, under control of the format parameter, into the current string.
	 * <br><b>CAUTION</b>: Regarding the decimal symbol, i.e. the character separing the integer whole number portion from
	 * its decimal portion, this service consider that it is the one corresponding to the locale. For example, on Windows,
	 * if the value for the Numbers\"Decimal symbol" field of the "Control Panel"\"Regional Options" window is equal to
	 * the following string:
	 * <pre>
	 *   {
	 * </pre>
	 * then, a 1.1 number given to this service will create the following @href CATUnicodeString :
	 * <pre>
	 *   1{1
	 * </pre>
	 * @param iDoubleValue
	 *   The double value
	 * @param iCFormat
	 *   The format of the double value, defaulted to "%g", according 
	 *   to the sprintf library function base conversions
	 * @return
	 *   Output string length
	 *   <br><b>Legal values</b>: <tt>0</tt> if the conversion didn't
	 *   succeed, or <tt>Other</tt> if the conversion did succeed,
	 *   in which case the value will be the byte count of the
	 *   char * equivalent to the result string.
	 */
	int BuildFromNum(double iDoubleValue, const char *iCFormat="%g");

	/**
	 * Converts, formats and stores a specified unsigned long integer, under control of the format parameter, into the
	 * current string.
	 * <br><b>CAUTION</b>: Regarding the decimal symbol, i.e. the character separing the integer whole number portion from
	 * its decimal portion, this service consider that it is the one corresponding to the locale, See 
	 * @href CATUnicodeString#BuildFromNum , overloading version with a double.
	 * @param iLongDoubleValue
	 *   The long double value
	 * @param iCFormat
	 *   The format of the long double value, defaulted to "%Lg", 
	 *   according to the sprintf library function base conversions
	 * @return
	 *   Output string length
	 *   <br><b>Legal values</b>: <tt>0</tt> if the conversion didn't
	 *   succeed, or <tt>Other</tt> if the conversion did succeed,
	 *   in which case the value will be the byte count of the
	 *   char * equivalent to the result string.
	 */
	int BuildFromNum(long double iLongDoubleValue, 
	                const char *iCFormat="%Lg");    

	/**
	 * Converts, formats and stores a specified 64-bit signed long integer,
	 * under control of the format parameter, into the current string.
	 * Defined on 64-bits platforms only.
	 * @param iLong64Value
	 *   The 64-bit long integer value
	 * @param iCFormat
	 *   The format of the 64-bit long integer value, defaulted
	 *   to "%I64d" on 64-bit Windows, 
	 *   according to the sprintf library function base conversions
	 * @return
	 *   Output string length
	 *   <br><b>Legal values</b>: <tt>0</tt> if the conversion didn't
	 *   succeed, or <tt>Other</tt> if the conversion did succeed,
	 *   in which case the value will be the byte count of the
	 *   char * equivalent to the result string.
	 */
	int BuildFromNum(CATLONG64  iIntegerValue, const char *iCFormat=FMTLONGI64"d");
	/**
	 * Converts, formats and stores a specified 64-bit unsigned long integer,
	 * under control of the format parameter, into the current string.
	 * Defined on 64-bits platforms only.
	 * @param iLong64UnsignedValue
	 *   The 64-bit unsigned long integer value
	 * @param iCFormat
	 *   The format of the 64-bit unsigned long integer value, defaulted  
	 *   to "%I64u" on 64-bit Windows,
	 *   according to the sprintf library function base conversions
	 * @return
	 *   Output string length
	 *   <br><b>Legal values</b>: <tt>0</tt> if the conversion didn't
	 *   succeed, or <tt>Other</tt> if the conversion did succeed,
	 *   in which case the value will be the byte count of the
	 *   char * equivalent to the result string.
	 */
	int BuildFromNum(CATULONG64 iUnsIntegerValue, const char *iCFormat=FMTLONGI64"u");
	/**
	 * Converts, formats and stores a specified input stream,
	 * into the current string.
	 * @param iInputStream
	 *   The input stream
	 * @param iSkipWhite
	 *   The flag to indicate whether white lines must be skipped (!=0) or not (=0)
	 * @return
	 *   The input stream.
	 */
	istream& BuildFromStream( istream& iInputStream, 
	                         int iSkipWhite = 1); // White lines skipped if != 0

	/**
	 * Converts, formats and stores a specified STEP character string,
	 * into the current string.
	 * <p>
	 * Refer to part 21 of STEP for details about string encoding.
	 * @param iStepString
	 *   The pointer to the Step-encoded character string
	 * @return
	 *   boolean specifying the success or not of the action
	 *   <br><b>Legal values</b>: <tt>0</tt> if the conversion 
	 *   succeeded, or <tt>-1</tt> if the conversion did not succeed.
	 */
	int  BuildFromSTEP(const char *iStepString);
  
	/**
	 * Converts, formats and stores a specified UTF-8 encoded
	 * character string (about UTF-8, see above), into the current 
	 * string.
	 * @param iUTF8Data
	 *   The pointer to the UTF-8 encoded character string
	 * @param iByteCount
	 *   The length of <tt>iUTF8Data</tt> in bytes
	 * @return
	 *   boolean specifying the success or not of the action
	 *   <br><b>Legal values</b>: <tt>0</tt> if the conversion 
	 *   succeeded, or <tt>negative value</tt> if the conversion did 
	 *   not succeed.
	 */
	int  BuildFromUTF8(const char *iUTF8Data, size_t iByteCount);

	 /**
	 * Converts, formats and stores a specified UTF-16 encoded
	 * character string (about UTF-16, see above), into the current 
	 * string.
	 * @param iUTF16Data
	 *   The pointer to the UTF-16 encoded character string
	 * @param iUnsignedShortCount
	 *   The length of <tt>iUTF16Data</tt> in byte pairs count
	 * @return
	 *   boolean specifying the success or not of the action
	 *   <br><b>Legal values</b>: <tt>1</tt> if the conversion 
	 *   succeeded, or <tt>negative value</tt> if the conversion did 
	 *   not succeed.
	 */
	int  BuildFromUTF16(const unsigned short *iUTF16Data, size_t iUnsignedShortCount);

	/**
	 * Recycles an existing CATUnicodeString instance from a BSTR-encoded character
	 * string.
	 * A BSTR is a Basic string, or binary string, ie a pointer to a wide
	 * character string.
	 * @param iBSTR
	 *   The pointer to the BSTR-wide character string
	 * @return
	 *   boolean specifying the success or not of the action
	 *   <br><b>Legal values</b>: <tt>0</tt> if the conversion 
	 *   succeeded, or <tt>negative value</tt> if the conversion did 
	 *   not succeed.
	 */
	int  BuildFromBSTR(const CATBSTR &iBSTR);

	// (Re)Initializing an instance (empties it)
	// Deprecated
	/** @nodoc */
	void Reset(); 

	//----------
	// Operators
	//----------

	// Assignment
	/**
	 * Assignment operator from a char *.
	 * <br><b>CAUTION</b>: The best way to manipulate strings is to use the Unicode encoding. The use of the 
	 * @href #BuildFromUCChar method is better than the use of the current operator.
	 * @param iString
	 *   The string to be copied
	 * @return  
	 *   The string resulting from the assignment
	 */
	CATUnicodeString &operator =(const char    *iString);

	/**
	 * Assignment operator from a CATUnicodeString instance.
	 * @param iString
	 *   The provided string
	 * @return  
	 *   The string resulting from the assignment
	 */
    CATUnicodeString &operator =(const CATUnicodeString &iString);
    
#if defined(DS_CXX11_SUPPORT_MOVE_SEMANTIC)
    /**
     * Move assignment operator.
     */
    inline CATUnicodeString &operator=(CATUnicodeString &&iRValue);
#endif  // DS_CXX11_SUPPORT_MOVE_SEMANTIC

	// Comparison
	//               CAUTION: the locale is taken into account when comparing.
	//               As a consequence, comparing two instances with different
	//               locales can lead to non-significant results.         
	/**
	 * Equality operator.
	 * @param iString
	 *   The string to compare to the current one
	 * @return 
	 *   boolean
	 *   <br><b>Legal values</b>: <tt>0: False</tt> 
	 *   the condition is not fullfilled, or <tt>Other: True</tt> 
	 *   if the condition is fullfilled.
	 */
	int operator == ( const CATUnicodeString &iString ) 
	                                                      const ;
	/**
	 * Inequality operator.
	 * @param iString
	 *   The string to compare to the current one
	 * @return 
	 *   boolean
	 *   <br><b>Legal values</b>: <tt>0: False</tt> 
	 *   the condition is not fullfilled, or <tt>Other: True</tt> 
	 *   if the condition is fullfilled.
	 */
	int operator != ( const CATUnicodeString &iString ) 
	                                                      const ;
	/**
	 * Less-than operator.
	 * @param iString
	 *   The string to compare to the current one
	 * @return 
	 *   boolean
	 *   <br><b>Legal values</b>: <tt>0: False</tt> 
	 *   the condition is not fullfilled, or <tt>Other: True</tt> 
	 *   if the condition is fullfilled.
	 */
	int operator <  ( const CATUnicodeString &iString ) 
	                                                      const ;

	/**
	 * Less-than or equal operator.
	 * @param iString
	 *   The string to compare to the current one
	 * @return 
	 *   boolean
	 *   <br><b>Legal values</b>: <tt>0: False</tt> 
	 *   the condition is not fullfilled, or <tt>Other: True</tt> 
	 *   if the condition is fullfilled.
	 */
	int operator <= ( const CATUnicodeString &iString ) 
	                                                      const ;

	/**
	 * Greater-than or equal operator.
	 * @param iString
	 *   The string to compare to the current one
	 * @return 
	 *   boolean
	 *   <br><b>Legal values</b>: <tt>0: False</tt> 
	 *   the condition is not fullfilled, or <tt>Other: True</tt> 
	 *   if the condition is fullfilled.
	 */
	int operator >= ( const CATUnicodeString &iString ) 
	                                                      const ;

	/**
	 * Greater-than operator.
	 * @param iString
	 *   The string to compare to the current one
	 * @return 
	 *   boolean
	 *   <br><b>Legal values</b>: <tt>0: False</tt> 
	 *   the condition is not fullfilled, or <tt>Other: True</tt> 
	 *   if the condition is fullfilled.
	 */
	int operator >  ( const CATUnicodeString &iString ) 
	                                                      const ;

	/**
	 * Returns the character at the specified index.
	 * An index ranges from 0 to the string length - 1. 
	 * Bound checks are performed.
	 * @param iIndex
	 *   The index of the character to extract
	 */
	CATUnicodeChar operator[](size_t iIndex) const;  
    
	//-----------------
	// Pseudooperators
	//-----------------

	/**
	 * Compares CATUnicodeString instances.
	 * @return
	 *   2 if the strings are identical, 1 if only case differences are
	 *   found (<tt>"Hello" == "hello"</tt>), and 0 otherwise.
	 */
	int Compare(const CATUnicodeString &iString) const;

	/**
	 * Compares CATUnicodeString instances in a non locale specific way.
	 * The SortCompare method differs from the operators > (and <) in that the comparison is 
	 * not affected by locale, whereas the manner of operators > (and <) comparisons is determined
	 * by the LC_COLLATE category of the current locale. 
	 * @return
	 *   < 0 if the current string is less than iStringToCompare.
	 *   0 if the strings are identical.
	 *   > 0 if the current string is greater than iStringToCompare.
	 */
	int SortCompare(const CATUnicodeString &iStringToCompare) const;

         // 
	 /** @nodoc */
	int SortCompare(const CATUnicodeString &iStringToCompare , int iFlags) const;

	// Concatenation
	/**
	 * Concatenates CATUnicodeString instances.
	 * The string passed as a parameter is appended to the current string.
	 * For example:
	 * <pre>
	 * CATUnicodeString Hello("Hello");
	 * CATUnicodeString Goodbye("Goodbye");
	 * Hello.Append(Goodbye);      // Hello now contains "HelloGoodbye"
	 * </pre>
	 */
	CATUnicodeString& Append( 
	                   const CATUnicodeString &iString );

	// Capitalization
	/**
	 * Converts all of the lower characters in this String to upper 
	 * case.
	 */
   void ToUpper(); 

	/**
	 * Converts all of the upper characters in this String to lower 
	 * case.
	 */
	void ToLower();

	// Substring extraction
	/**
	 * Returns a new string that is a substring of this string.
	 * @param iSubStringFirstIndex
	 *   The first character to be extracted
	 * @param iNbCharsToExtract
	 *   The number of characters to be extracted
	 */
	CATUnicodeString SubString ( int  iSubStringFirstIndex, 
	                            int  iSubStringCharCount)const ;

   //------------------
   // Format conversion
   //------------------

	/**
	 * Read character data, supposed to describe an integer
	 * in an alphanumerical form, interpret it according to
	 * a format, and store the converted result into the output 
	 * parameter.
	 * @param oIntegerValue
	 *   The resulting integer value
	 * @param iCFormat
	 *   The format of the integer value, defaulted to "%d", according to the sprintf
	 *   library function base conversions
	 * @return
	 *   Boolean specifying the success or not of the action
	 *   <br><b>Legal values</b>: <tt>0</tt> if the conversion didn't
	 *   succeed, or <tt>1</tt> if the conversion did succeed.
	 */
	int ConvertToNum(int           *oIntegerValue, 
	                const char *iCFormat="%d")   const;

	/**
	 * Read character data, supposed to describe an unsigned 
	 * integer in an alphanumerical form, interpret it according to
	 * a format, and store the converted result into the output 
	 * parameter.
	 * @param oUnsIntegerValue
	 *   The resulting integer value
	 * @param iCFormat
	 *   The format of the integer value, defaulted to "%u", according to the sprintf
	 *   library function base conversions
	 * @return
	 *   Boolean specifying the success or not of the action
	 *   <br><b>Legal values</b>: <tt>0</tt> if the conversion didn't
	 *   succeed, or <tt>1</tt> if the conversion did succeed.
	 */
	int ConvertToNum(unsigned int *oUnsIntegerValue, 
	                const char *iCFormat="%u") const;

	/**
	 * Read character data, supposed to describe a long integer
	 * in an alphanumerical form, interpret it according to
	 * a format, and store the converted result into the output 
	 * parameter.
	 * @param olongIntegerValue
	 *   The resulting integer value
	 * @param iCFormat
	 *   The format of the integer value, defaulted to "%d", according to the sprintf
	 *   library function base conversions
	 * @return
	 *   Boolean specifying the success or not of the action
	 *   <br><b>Legal values</b>: <tt>0</tt> if the conversion didn't
	 *   succeed, or <tt>1</tt> if the conversion did succeed.
	 */
	int ConvertToNum(long          *olongIntegerValue, 
	                const char *iCFormat="%d")  const;

	/**
	 * Read character data, supposed to describe an unsigned long 
	 * integer in an alphanumerical form, interpret it according to
	 * a format, and store the converted result into the output 
	 * parameter.
	 * @param oUnslongIntegerValue
	 *   The resulting integer value
	 * @param iCFormat
	 *   The format of the integer value, defaulted to "%u", according to the sprintf
	 *   library function base conversions
	 * @return
	 *   Boolean specifying the success or not of the action
	 *   <br><b>Legal values</b>: <tt>0</tt> if the conversion didn't
	 *   succeed, or <tt>1</tt> if the conversion did succeed.
	 */
	int ConvertToNum(unsigned long *oUnslongIntegerValue, 
	                const char *iCFormat="%u") const;

	/**
	 * Read character data, supposed to describe a 64-bit long integer
	 * in an alphanumerical form, interpret it according to
	 * a format, and store the converted result into the output 
	 * parameter.
	 * @param olongIntegerValue
	 *   The resulting 64-bit long integer value
	 * @param iCFormat
	 *   The format of the integer value, defaulted to "%I64d" on 64-bit Windows, 
	 *   according to the sprintf library function base conversions
	 * @return
	 *   Boolean specifying the success or not of the action
	 *   <br><b>Legal values</b>: <tt>0</tt> if the conversion didn't
	 *   succeed, or <tt>1</tt> if the conversion did succeed.
	 */
	int ConvertToNum(CATLONG64          *olongIntegerValue, 
	                const char *iCFormat=FMTLONGI64"d")  const;

	/**
	 * Read character data, supposed to describe a 64-bit unsigned long 
	 * integer in an alphanumerical form, interpret it according to
	 * a format, and store the converted result into the output 
	 * parameter.
	 * @param oUnslongIntegerValue
	 *   The resulting 64-bit unsigned long integer value
	 * @param iCFormat
	 *   The format of the integer value, defaulted to "%I64u" on 64-bit Windows
	 *   according to the sprintf library function base conversions
	 * @return
	 *   Boolean specifying the success or not of the action
	 *   <br><b>Legal values</b>: <tt>0</tt> if the conversion didn't
	 *   succeed, or <tt>1</tt> if the conversion did succeed.
	 */
	int ConvertToNum(CATULONG64 *oUnslongIntegerValue, 
	                const char *iCFormat=FMTLONGI64"u") const;

	/**
	 * Read character data, supposed to describe an double in an 
	 * alphanumerical form, interpret it according to
	 * a format, and store the converted result into the output 
	 * parameter.
	 * <br><b>CAUTION</b>: Regarding the decimal symbol, i.e. the character separing the integer whole number portion from
	 * its decimal portion, this service consider that it is the one corresponding to the locale. For example, on Windows,
	 * if the value for the Numbers\"Decimal symbol" field of the "Control Panel"\"Regional Options" window is equal to
	 * the following string:
	 * <pre>
	 *   {
	 * </pre>
	 * then, so that the current method give the correct value, a 1.1 number must be stored the following way in the
	 * instance:
	 * <pre>
	 *   1{1
	 * </pre>
	 * @param oDouble
	 *   The resulting integer value
	 * @param iCFormat
	 *   The format of the integer value, defaulted to "%le", according to the sprintf
	 *   library function base conversions
	 * @return
	 *   Boolean specifying the success or not of the action
	 *   <br><b>Legal values</b>: <tt>0</tt> if the conversion didn't
	 *   succeed, or <tt>1</tt> if the conversion did succeed.
	 */
	int ConvertToNum(double        *oDouble, 
	                const char *iCFormat="%le")  const;

	/**
	 * Read character data, supposed to describe an long double in an alphanumerical form, interpret it according to
	 * a format, and store the converted result into the output parameter.
	 * <br><b>CAUTION</b>: Regarding the decimal symbol, i.e. the character separing the integer whole number portion from
	 * its decimal portion, this service consider that it is the one corresponding to the locale, See 
	 * @href CATUnicodeString#ConvertToNum , overloading version with a double.
	 * @param oLongDouble
	 *   The resulting integer value
	 * @param iCFormat
	 *   The format of the integer value, defaulted to "%le", according to the sprintf
	 *   library function base conversions
	 * @return
	 *   Boolean specifying the success or not of the action
	 *   <br><b>Legal values</b>: <tt>0</tt> if the conversion didn't
	 *   succeed, or <tt>1</tt> if the conversion did succeed.
	 */
	int ConvertToNum(long double   *oLongDouble, 
	                const char *iCFormat="%le")  const;
 
	/**
	 * Convert the current string into a STEP character string.
	 * @param oStepString
	 *   The resulting STEP string
	 */
	void ConvertToSTEP( char *oStepString) const;

	/**
	 * Convert the current string into a UTF-8 character string.
	 * @param oUTF8String
	 *   The resulting UTF-8 string
	 *   It should be allocated as a table of 
	 *   4*(this->GetLengthInChar()) elements
	 * @param oByteCount
	 *   String length in byte count
	 */
	void ConvertToUTF8( char *oUTF8String, size_t *oByteCount) const; 


	 /**
	 * Convert the current string into a UTF-16 character string.
	 * @param oUTF16Data
	 *   The resulting UTF-16 string
	 *   It should be allocated as a table of 
	 *   4*(this->GetLengthInChar()) bytes
	 * @param oUnsignedShortCount
	 *   String length in unsigned short count
	 */
	void ConvertToUTF16(unsigned short *oUTF16String, size_t *oUnsignedShortCount) const;
  
	/**
	 * Convert the current string into a BSTR (OLE basic string).
	 * @param oBSTR
	 *   The resulting BSTR string
	 */
	void ConvertToBSTR( CATBSTR *oBSTR) const;

	// If the CATUnicodeString was created using the constructor from a "const char* const", and the input char* was invalid
	// (i.e. it contained bytes which didn't correspond to effective characters in the current locale), the current method
	// returns the same invalid char* that the one which was given to the constructor.
	//  For example, in a korean session, if the following char* was given to the constructor:
	//    0xB1 0x00 ,
	// (which does not correspond to an effective character in korean, since a 0xB1 byte requires another byte after to form
	// a character) the method will return:
	//    0xB1 0x00
	/**
	 * Converts the string to a char *.</br>
	 * <b>Role</b>: Converts the current string to a char* in the thread locale code page. The use of this service
	 * corresponds to strings for which all characters belong to the character set of the thread locale code page.
  * <p><b>Note</b>: The length of the returned string is given by @href #GetLengthInByte.
  * If the string has been created using @href #BuildFromUCChar , @href #BuildFromWChar , @href #BuildFromUTF8 ,
  * @href #BuildFromSTEP , @href #BuildFromUTF16 or @href #BuildFromBSTR , and a character of the string does not
  * exist in the thread locale code page, the character will be replaced, in the returned C string, by the following
  * coded representation:
  * <pre>
  * +-------------------------+------------+------------+------------+------------+
  * ! thread locale code page !  Windows   !     AIX    !    HP-UX   !    SunOS   !
  * +-------------------------+------------+------------+------------+------------+
  * +-------------------------+------------+------------+------------+------------+
  * !        ISO 8859-1       !     3F     !     1A     !     1A     !     3F     !
  * +-------------------------+------------+------------+------------+------------+
  * !        ISO 8859-2       !     3F     !     1A     !     1A     !     3F     !
  * +-------------------------+------------+------------+------------+------------+
  * !        ISO 8859-5       !     3F     !     1A     !     1A     !     3F     !
  * +-------------------------+------------+------------+------------+------------+
  * !        IBM 943          !     3F     ! 7F or FCFC !     FCFC   !     3F     !
  * +-------------------------+------------+------------+------------+------------+
  * !        EUC KR           !     3F     ! 1A or AFFE !     FFFF   !    3F3F    !
  * +-------------------------+------------+------------+------------+------------+
  * !        EUC TW           !     3F     ! 1A or FDFE !     FEFE   !    3F3F    !
  * +-------------------------+------------+------------+------------+------------+
  * !        EUC CN           !     3F     ! 1A or A1A1 !     FFFF   !    3F3F    !
  * +-------------------------+------------+------------+------------+------------+
  * </pre>
	 * <br><b>CAUTION</b>: The best way to manipulate strings is to use the Unicode encoding. The use of the following method: 
  * <pre>  operator const CATUC2Bytes*() const;</pre> is better than the use of the current operator. In fact, CATIA
  * uses the current method for the rare conversions from Unicode to the thread code page, i.e. :
	 * <ul>
	 * <li>the display of message strings in dialog windows on Unix</li>
	 * <li>the edition of strings on Unix</li>
	 * <li>output traces</li>
	 * <li>storing strings in databases</li>
	 * </ul>
	 * @return 
	 *   The char*
	 */
	const char* ConvertToChar() const;

	// Deprecated since the implicit use of the cast is too dangerous
	// (very often the users don't know how to use it)
	/** @nodoc */
	operator  const char *  () const ;

	// If the CATUnicodeString was created using the constructor from a "const char* const", and the input char* was invalid
	// (i.e. it contained bytes which didn't correspond to effective characters in the current locale), the CATUC2Bytes*
	// returned by the current method has the following value:
	//   - on Windows: pointer to a nul CATUC2Bytes
	//   - on Unix:    pointer to a non representative CATUC2Bytes
	//  For example, in a korean session, if the following char* was given to the constructor:
	//    0xB1 0x00 ,
	// (which does not correspond to an effective character in korean, since a 0xB1 byte requires another byte after to form
	// a character) the method will return a pointer to a nul CATUC2Bytes on Windows and a pointer to a non representative
	// CATUC2Bytes on Unix
	/** @nodoc */
	const CATUC2Bytes *ConvertToUCChar() const;

	// If the CATUnicodeString was created using the constructor from a "const char* const", and the input char* was invalid
	// (i.e. it contained bytes which didn't correspond to effective characters in the current locale), the CATUC2Bytes*
	// returned by the current method has the following value:
	//   - on Windows: pointer to a nul CATUC2Bytes
	//   - on Unix:    pointer to a non representative CATUC2Bytes
	//  For example, in a korean session, if the following char* was given to the constructor:
	//    0xB1 0x00 ,
	// (which does not correspond to an effective character in korean, since a 0xB1 byte requires another byte after to form
	// a character) the method will return a pointer to a nul CATUC2Bytes on Windows and a pointer to a non representative
	// CATUC2Bytes on Unix
	/**
	 * Converts the current string to a CATUC2Bytes character encoded 
	 * string.
	 * The length of the returned string is given by @href #GetLengthInChar.
	 * @return
	 *   The resulting CATUC2Bytes string
	 */
	operator  const CATUC2Bytes *  () const ;

	// If the CATUnicodeString was created using the constructor from a "const char* const", and the input char* was invalid
	// (i.e. it contained bytes which didn't correspond to effective characters in the current locale), the wchar_t*
	// returned by the current method has the following value:
	//   - on Windows: pointer to a nul wchar_t
	//   - on Unix:    pointer to a non representative wchar_t
	//  For example, in a korean session, if the following char* was given to the constructor:
	//    0xB1 0x00 ,
	// (which does not correspond to an effective character in korean, since a 0xB1 byte requires another byte after to form
	// a character) the method will return a pointer to a nul wchar_t on Windows and a pointer to a non representative
	// wchar_t on Unix
	/**
	 * Converts the current string to a wchar_t character encoded 
	 * string.
	 * @return
	 *   The resulting wchar_t string
	 */
	void ConvertToWChar ( wchar_t *oString ) const;
#if defined(DS_NATIVE_WCHAR_T_DEFINED)
    void ConvertToWChar ( unsigned short *oString ) const;
#endif  // DS_NATIVE_WCHAR_T_DEFINED
 
	//--------------------
	// String manipulation
	//--------------------

	/**
	 * Extends or truncates the current string.
	 * @param iCharCountToReach
	 *   The number of characters to be assigned to the current string
	 * @param iFillingChar
	 *   The character that will be added at the end of the
	 *   current string so that to map the required length
	 * @param iTruncationAllowed
	 *   The flag allowing the truncation or refusing it.
	 *   <br><b>Legal values</b>: <tt>0</tt> to forbid truncation,
	 *   or <tt>Other</tt> to allow the possible truncation.
	 */
	void        Resize(int                   iCharCountToReach,
	                  const CATUnicodeChar& iFillingChar, 
	                  int                   iTruncationAllowed);         

	/**
	 * Extends or truncates the current string.
	 * Same as the preceeding version, except that truncation is
	 * forced to be allowed.
	 * @param iCharCountToReach
	 *   The number of characters to be assigned to the current string
	 * @param iFillingChar
	 *   The character that will be added at the end of the
	 *   current string so that to map the required length
	 */
	inline void Resize(int                   iCharCountToReach, 
	                  const CATUnicodeChar& iFillingChar) 
	 {Resize(iCharCountToReach, iFillingChar, 1);}

	/**
	 * Extends or truncates the current string.
	 * Same as the preceeding version, except that the filling
	 * character is forced to be set to the space character.
	 * @param iCharCountToReach
	 *   The number of characters to be assigned to the current string
	 */
	inline void Resize(int            iCharCountToReach)
	 {Resize(iCharCountToReach, ' ', 1);}
     
	/**
	 * Replace the first occurence of the given substring by the
	 * other given substring.
	 * @param iLookedForString
	 *   The substring whose first occurence must be replaced
	 * @param iSubstitutionString
	 *   The string to substitute to the previous one
	 * @return 
	 *   Location of the input substring occurence.
	 *   <br><b>Legal values</b>: 
	 *   <tt>-1: Not found</tt> 
	 *   <tt>Other: Location index, from 0 to the current CATString
	 *   length minus 1</tt> 
	 */  
	int  ReplaceSubString(const CATUnicodeString &iLookedForString, 
	                const CATUnicodeString &iSubstitutionString);

	/**
	 * Modify the current CATUnicodeString, supressing a given part of it
	 * and putting instead a given replacement substring.
	 * @param iModificationStartingPosition
	 *   The modification starting position
	 * @param iModificationCharCount
	 *   The modification char count
	 * @param iReplacementString
	 *   The replacement string
	 */  
	void ReplaceSubString(int   iModificationStartingPosition,
	                  int   iModificationCharCount,
	                  const CATUnicodeString &iReplacementString);

	/**
	 * Modify the current CATUnicodeString, supressing a given part of it
	 * and putting instead a given replacement substring.
	 * @param iModificationStartingPosition
	 *   The modification starting position
	 * @param iModificationCharCount
	 *   The modification char count
	 * @param iReplacementString
	 *   The replacement string
	 * @param iReplacementStringParametering
	 *   The replacement string parametering.
	 *   Enables to specify not to take the replacement string as is, 
	 *   but transformed first by a resizing action. 
	 *   This tuning specification is the character count of the
	 *   real CATUnicodeString that will be used for the substitution, 
	 *   i.e. the CATUnicodeString resized through the space filling
	 *   character. 
	 */  
	void ReplaceSubString(int   iModificationStartingPosition,
	               int   iModificationCharCount,
	               const CATUnicodeString &iReplacementString, 
	               int   iReplacementStringParametering) ; 

	/**
	 * Modify the current CATUnicodeString, replacing all the occurences of the specified substring
	 * with another substring.
	 * @param iToReplace
	 * The substring to replace
	 * @param iReplacement
	 * The replacement substring
	 */
	 void ReplaceAll(
	   const CATUnicodeString& iToReplace,
	   const CATUnicodeString& iReplacement);

	/**
	 * Modify the current CATUnicodeString, supressing a given part 
	 * of it.
	 * @param iModificationStartingPosition
	 *   The modification starting position
	 * @param iModificationCharCount
	 *   The modification char count
	 */    
	void Remove(int iModificationStartingPosition, 
	           int iModificationCharCount=1) ;

	/**
	 * Modify the current CATUnicodeString, inserting a given 
	 * substring at the middle of it.
	 * @param iInsertionStartingPosition
	 *   The insertion starting position
	 * @param iStringToInsert
	 *   The string to insert into the current CATString
	 */   
	void Insert(int iInsertionStartingPosition, 
	           const CATUnicodeString &iStringToInsert) ;

   //-----------------
   // String stripping
   //-----------------

	/** 
	 * Strip mode.
	 * <b>Role</b>: Stripping is the process consisting
	 * of removing a given character occurences from a given
	 * string. Once the character specified , you can, as you want, 
	 * use one of the following options:
	 * @param CATStripModeLeading
	 *   Remove all the consecutive occurences of the  
	 *   character from the beginning of the string 
	 *   (of course it supposes that the first character of the 
	 *   string is the specified character, if it is not the case, 
	 *   nothing is done).
	 * @param CATStripModeTrailing
	 *   Remove all the consecutive occurences from the end
	 *   of the string (It means that the first 
	 *   character of the string is really the specified 
	 *   character).
	 * @param CATStripModeBoth
	 *   Remove all the consecutive occurences both from the 
	 *   beginning of the string and from the end (this option cumulates
	 *   the two preceeding options, it does not affects the 
	 *   intermediate consecutive occurences).
	 * @param CATStripModeAll
	 *   Removes all the occurences of the character
	 *   from the string. 
	 * <p>
	 * Warning : CATStripMode is also defined in CATInternalString.cpp
	 */
	enum CATStripMode {CATStripModeLeading =  0x1, 
	                  CATStripModeTrailing = 0x2, 
	                  CATStripModeBoth =     0x3, 
	                  CATStripModeAll =      0x4};

	/** 
	 * Returns a new stripped CATUnicodeString.
	 * <b>Role</b>: Removes the specified character occurences from a 
	 * given string. Note that this method returns a new stripped string but does
	 * not modify the current CATUnicodeString.
	 * @param iMode
	 *   Option parameterizing the action.
	 *   <br><b>Legal values</b>: 
	 *   <tt>CATStripModeLeading</tt> Removes all the consecutive 
	 *   occurences of the given character from the beginning of the 
	 *   given string (of course it supposes that the first character 
	 *   of the string is the delivered character, if it is not the 
	 *   case, nothing is done).
	 *   <tt>CATStripModeTrailing</tt> Removes all the consecutive 
	 *   occurences of the given character from the end of the string 
	 *   (the same way, it means that the first character of the 
	 *   delivered string is really the delivered character).
	 *   <tt>CATStripModeBoth</tt> Removes all the consecutive 
	 *   occurences of the given character both from the beginning 
	 *   of the string and from the end (this option cumulates the 
	 *   two preceeding options, it does not affects the intermediate 
	 *   consecutive occurences).
	 *   <tt>CATStripModeAll</tt> Removes all the occurences of the 
	 *   given character from the string. 
	 * <p>
	 * @param iCharacter
	 *   The specified character whose occurences are to be removed
	 *   from the current CATUnicodeString.
	 */
	CATUnicodeString Strip(
	           CATUnicodeString::CATStripMode iMode, 
	           const CATUnicodeChar& iCharacter) const;
 
	/** 
	 * Returns a new stripped CATUnicodeString.
	 * <b>Role</b>: Removes the space character occurences from a 
	 * given string. Note that this method returns a new stripped string but does
	 * not modify the current CATUnicodeString.
	 * @param iMode
	 *   See above
	 */
	inline CATUnicodeString Strip(
	           CATUnicodeString::CATStripMode iMode) const
	 { return Strip(iMode, ' ');}
   
	/** 
	 * Returns a new stripped CATUnicodeString.
	 * <b>Role</b>: Removes the space character occurences from a 
	 * given string using the CATStripModeLeading mode (see above).
	 * Note that this method returns a new stripped string but does
	 * not modify the current CATUnicodeString.
	 */
	inline CATUnicodeString Strip() const
	 { return Strip(CATStripModeLeading, ' ');}

   //----------------
   // String analysis
   //----------------

	/** 
	 * Get the length of the CATUnicodeString, as unicode char count.
	 * <b>Role</b>: Get the length as unicode char count.
	 * This method returns the length of the string returned by @href #ConvertToUCChar.
	 * @return 
	 *   Character count.
	 */
	int GetLengthInChar() const;

	/** 
	 * Get the length of the CATUnicodeString, as byte count.
	 * <b>Role</b>: Get the length as byte count.
	 * This method returns the length of the string returned by @href #ConvertToChar.
	 * @return 
	 *   Byte count.
	 */
	int GetLengthInByte() const;
   
	/** 
	 * Search mode.
	 * <b>Role</b>: The search mode is the direction to which
	 * you search the specified substring in the current string.
	 * @param CATSearchModeForward
	 *   Starting from the specified current string character index,
	 *   the search will go forward to search the specified substring.
	 * @param CATSearchModeBackward
	 *   Starting from the specified current string character index,
	 *   the search will go backward to search the specified 
	 *   substring.
	 */
	enum CATSearchMode {CATSearchModeForward  = 0x1,  
	                   CATSearchModeBackward = 0x2}; 

	/**
	 * Search the first occurence of the specified substring in the 
	 * current string.
	 * <b>Role</b>: Search the first occurence of the specified 
	 * substring in the current string, from a specified character 
	 * index, the search following the specified direction.
	 * @param iLookedForSubString
	 *   The character string to search for
	 * @param iSearchBeginning
	 *   The character index localizing the search beginning
	 * @param iSearchMode
	 *   Direction to which you search the specified substring in the 
	 *   current string.
	 *   <br><b>Legal values</b>: <tt>CATSearchModeForward</tt> if, 
	 *   starting from the specified current string character index,
	 *   the search will go forward to search the specified substring,
	 *   or <tt>CATSearchModeBackward</tt> in the other direction.
	 *   Note that in CATSearchModeBackward mode, the <tt>
	 *   iSearchBeginning</tt> index corresponds to a count of characters
	 *   from the end of the string, not the beginning. 
	 *   <br>For instance:
	 * <pre>
	 * CATUnicodeString s = "012345678901test6789";
	 * s.SearchSubString("test", 4, CATUnicodeString::CATSearchModeBackward)) returns 12
	 * </pre>
	 * whereas
	 * <pre>
	 * s.SearchSubString("test", 5, CATUnicodeString::CATSearchModeBackward)) returns -1
	 * </pre>
	 * @return 
	 *   Location of the substring.
	 *   <br><b>Legal values</b>: 
	 *   <tt>-1: Not found</tt> 
	 *   <tt>Other: Location index, from 0 to the current CATString
	 *   length minus 1</tt> 
	 * 
	 */
	int SearchSubString(const CATUnicodeString &iLookedForSubString , 
	      int iSearchBeginning = 0,
	  CATUnicodeString::CATSearchMode iSearchMode = 
	      CATSearchModeForward) const ;

   //----------------------
   // Hash Table management
   //----------------------

	//  Returns a hashcode for this string.
	//  There is no garantee about unicity.
	/** @nodoc */
   unsigned ComputeHashKey() const; // The returned value can be used as an entry 
                                    // in hash tables provided by Collections
                                    // framework

	// Deprecated because of homogenization with the collection
	// terminology. The Append method should be used.
	/** @nodoc */
	CATUnicodeString & operator += ( 
	      const CATUnicodeString & iString );

	/**
	 * Character concatenation assignment operator.
	 * @param iChar
	 *   The character to append to the current string
	 * @return 
	 *   The class resulting from the concatenation
	 */
	CATUnicodeString & operator += ( 
	      const CATUnicodeChar & iChar );

	// Deprecated because of homogenization with the collections
	// terminology. The Append method should be used.
	/** @nodoc */
	CATUnicodeString operator + (
	      const CATUnicodeString &iString) const ;

	/**
	 * String concatenation operator.
	 * <br><b>CAUTION</b>: The best way to manipulate strings is to use the Unicode encoding. The use of the 
	 * @href CATUnicodeString#Append method (const CATUnicodeString overriding version) is better than the use of the
	 * current operator.
	 * @param iString
	 *   The string to append to the current one
	 * @return 
	 *   The class resulting from the concatenation
	 */
	CATUnicodeString operator + (
	      const char *iString) const ;

	/**
	 * String concatenation operator.
	 * @param iCString
	 *   The char *
	 * @param iString
	 *   The CATUnicodeString string
	 * @return 
	 *   The CATUnicodeString resulting from the concatenation
	 */
	ExportedByNS0S3STR friend CATUnicodeString operator + (
	      const char* iCString, const CATUnicodeString& iString);

	/** @nodoc */
	CATBoolean WildMatch(
				const CATUnicodeString& iPattern, 
        const CATUnicodeChar& iWildCardChar,
        const CATUnicodeChar& iEscapeChar);

	//  Deprecated since the implicit use of the cast is too dangerous
	//  (very often the users don't know how to use it)
	//
	// If the CATUnicodeString was created using the constructor from a "const char* const", and the input char* was invalid
	// (i.e. it contained bytes which didn't correspond to effective characters in the current locale), the current method
	// returns the same invalid char* that the one which was given to the constructor.
	//  For example, in a korean session, if the following char* was given to the constructor:
	//    0xB1 0x00 ,
	// (which does not correspond to an effective character in korean, since a 0xB1 byte requires another byte after to form
	// a character) the method will return:
	//    0xB1 0x00
	/** @nodoc */
	const char  *  CastToCharPtr() const; 

	// Deprecated since the GetLengthInChar can be used
	/** @nodoc */ 
	int IsNull() const;

	// Deprecated since the SearchSubString can be used
	/** @nodoc */
	int FindPosition(const CATUnicodeString &iLookedForSubString, 
	                 int iSearchBeginning = 0) const ;

	//  Deprecated since the homogenization to the "Build" terminology
	/** @nodoc */
    int ConvertNumToString( int iIntegerValue, const char *iCFormat="%d" );

	//  Deprecated since the homogenization to the "Build" terminology
	/** @nodoc */
	int ConvertNumToString( long iLongIntegerValue, 
                            const char *iCFormat="%d" );

	//  Deprecated since the homogenization to the "Build" terminology
	/** @nodoc */
	int ConvertNumToString( unsigned long iUnsLongIntegerValue, 
                            const char *iCFormat="%u"  );
	//  Deprecated since the homogenization to the "Build" terminology
	/** @nodoc */
	int ConvertNumToString( double iDoubleValue, 
                            const char *iCFormat="%g" );
	//  Deprecated since the homogenization to the "Build" terminology
	/** @nodoc */
	int ConvertNumToString( long double iLongDoubleValue, 
                            const char *iCFormat="%Lg");
	// Deprecated 
	/** @nodoc */
	 int operator == ( const char *iString ) const ;
	// Deprecated 
	/** @nodoc */
	 int operator != ( const char *iString ) const ; 
	/** @nodoc */
	int Marshalling ( int ibd, int iinternalused);
	/** @nodoc */ 
	CATUnicodeString*  Unmarshalling (
	              int ibd, CATUnicodeString *istr, 
	              int iinternalused);
  
	/** @nodoc */ 
	static const CLSID & ClassId();    
  
   private:

	CATInterUnicodeString  * _StringRef ;
	
	void _AllocNewRefString(
				int iCharLength, 
				CATBoolean iMakeCopy = FALSE, 
				CATBoolean iMakeDeepCopy = FALSE,
				CATBoolean iComputeBestLength = FALSE);
	
	void _UpdateCharView();
	
	void _BuildFromChar(const char* ipsz, int iLength = -1);

};

/**
 * Inline definitions.
 */
#if defined(DS_CXX11_SUPPORT_MOVE_SEMANTIC)
inline CATUnicodeString::CATUnicodeString(CATUnicodeString &&iRValue)
{
    _StringRef = iRValue._StringRef;
    iRValue._StringRef = NULL;
}
inline CATUnicodeString& CATUnicodeString::operator=(CATUnicodeString &&iRValue)
{
    CATInterUnicodeString *l_pTmp = _StringRef;
    _StringRef = iRValue._StringRef;
    iRValue._StringRef = l_pTmp;
    return *this;
}
#endif  // DS_CXX11_SUPPORT_MOVE_SEMANTIC

#endif

