// COPYRIGHT DASSAULT SYSTEMES  1996
//=============================================================================
//
// SdaiBinary:
// type supporting a binary field in SDAI -- C++ Language Binding
//
//=============================================================================
// Usage Notes:
//
// cf. Norm ISO 10303-23
//=============================================================================
// Mar. 94   Creation                                   C. Vandaele
//=============================================================================

#ifndef SdaiBinary_H
#define SdaiBinary_H

/**
 * @CAA2Level L1
 * @CAA2Usage U1
 */

#include <KS0SIMPL.h>

// for size_t
#include <SdaiString.h>

class SdaiLogical ;
// class CATSdaiBinary ;
/** @c++ansi fbq 2004-08-05.10:18:26 [Replace forward declaration by #include <iosfwd.h>] **/
#ifdef _CAT_ANSI_STREAMS
#include <iosfwd.h>
#else
class ostream;
#endif

/**
 * Class representing a binary SDAI field.
 */
class ExportedByKS0SIMPL SdaiBinary
{
  public:
/** @nodoc */
    SdaiBinary();
/** @nodoc */
    SdaiBinary(Size_T ic);
/** @nodoc */
    SdaiBinary(const SdaiBinary& iBin);
/** @nodoc */
    SdaiBinary(const char* iStr, size_t n = NPOS);
    ~SdaiBinary(); 

	/** 
	*  assignment operator.
	*/
    SdaiBinary& operator=(const SdaiBinary& iBin);

	/** 
	*  assignment operator.
	*/
    SdaiBinary& operator=(const char* iStr);
 
	/** 
	*  Addition operator.
	*/
    friend ExportedByKS0SIMPL SdaiBinary operator+(const SdaiBinary&, const SdaiBinary&);

	/**
    * Compares two SdaiBinary objects.
	*  @param iBin2 - the second SdaiBinary object
    *  @return
    *   <br><b>Legal values</b>
    *   <dl>
    *     <dt>0</dt>
	*     <dd>equality between this and iBin2</dd>
	*	  <dt><0</dt>
	*     <dd>this is inferior to iBin2</dd>
	*	  <dt>>0</dt>
	*     <dd>iBin2 is inferior to this</dd>
    *   </dl>
    *
    */
    int compare(const SdaiBinary& iBin2) const;

    /** 
     * Equality operator.
     */
    friend ExportedByKS0SIMPL const SdaiBoolean& operator==(const SdaiBinary& iBin1, const SdaiBinary& iBin2);

	/** 
   *  Inequality operator.
   */
    friend ExportedByKS0SIMPL const SdaiBoolean& operator!=(const SdaiBinary& iBin1, const SdaiBinary& iBin2);
 
/** @nodoc */
    SdaiBinary& insert(size_t iStartPos, const SdaiBinary& iBin2);
/** @nodoc */
    SdaiBinary& remove(size_t iStartPos, size_t iEndPos = NPOS);
/** @nodoc */
    SdaiBinary& replace(size_t iStartPos, size_t iNbPos, const SdaiBinary&);

/** @nodoc */
    int getAt(size_t iPos) const;
/** @nodoc */
    void putAt(size_t iPos, int iBitValue);
 
/** @nodoc */
    int getAtRaw(size_t iPos) const;  // w/o range check
/** @nodoc */
    void putAtRaw(size_t iPos, int iBitValue);  // w/o range check
 

/** @nodoc */
    SdaiBinary substr(size_t, size_t n = NPOS) const;

/** @nodoc */
    size_t length() const;
/** @nodoc */
    size_t reserve() const;
/** @nodoc */
    void reserve(size_t);

/** @nodoc */
    const char* getCharString() const;

/** @nodoc */
    friend ExportedByKS0SIMPL ostream&  operator<< (ostream&, const SdaiBinary&);

  
  private :

    unsigned char*  _value ;
    size_t          _size  ;
     //CATSdaiBinary*  _Binary ;


};


#endif

