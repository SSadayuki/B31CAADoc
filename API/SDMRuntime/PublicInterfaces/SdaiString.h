// COPYRIGHT DASSAULT SYSTEMES  1996
//=============================================================================
//
// SdaiString:
// type supporting a string in SDAI -- C++ Language Binding
//
//=============================================================================
// Usage Notes:
//
// cf. Norm ISO 10303-23
//=============================================================================
// Mar. 94   Creation                                   C. Vandaele
//=============================================================================
#ifndef SdaiString_H
#define SdaiString_H

/**
 * @CAA2Level L1
 * @CAA2Usage U1
 */


#include <KS0SIMPL.h>
#include <SdaiMacro.h>
#include <CATSdaiStaticGlobalData.h>
#include <stdlib.h>

#include "CATSmallAllocatorPerBlock.h"
#include "CATUnicodeString.h"

class CATString;
class CATSdaiString ;
class SdaiBoolean ;
/** @c++ansi fbq 2004-08-05.10:18:26 [Replace forward declaration by #include <iosfwd.h>] **/
#ifdef _CAT_ANSI_STREAMS
#include <iosfwd.h>
#else
class ostream;
#endif

//------------------------------------------------------------
/** @nodoc */
class ExportedByKS0SIMPL Size_T
{
  public:
    //------
    // 'tors
    //------
	/** @nodoc */
    Size_T()
    : val(0)
    {}

	/** @nodoc */
    Size_T (size_t n)
    : val(n)
    { }
    
	/** @nodoc */
    Size_T(const Size_T& iVal)
    : val(iVal.val)
    {}


	/** @nodoc */
    ~Size_T();
   
	// op =
	/** @nodoc */
	const Size_T& operator=(const Size_T& iVal)
	{ this->val = iVal.val; return *this;}

   // value
	/** @nodoc */
   size_t value()
   { return val; }

  private:
	// data
	size_t val;


};

class CATSysHashString ;

//------------------------------------------------------------
/** Class representing any type supporting a string in SDAI -- C++ Language Binding. */
class ExportedByKS0SIMPL SdaiString 
{
  public:
    //------
    // 'tors
    //------
   /** @nodoc */
   SdaiString ();
   /** @nodoc */
   SdaiString (Size_T ic);
   /** @nodoc */
   SdaiString (const SdaiString& iStr );
   /** @nodoc */
   SdaiString (const CATUnicodeString& iStr );
   /** @nodoc */
   SdaiString (const CATString& iStr );
   /** @nodoc */
   SdaiString (const char* iStr, size_t n = NPOS);
 
   ~SdaiString ();
   
    //------
    // Operators
    //------
    
    // assignment
	/** 
	*  = operator to construct a SdaiString from another one
	*/
    SdaiString& operator=(const SdaiString& iStr);
	/** 
	*  = operator to construct a SdaiString from a CATUnicodeString
	*/
	SdaiString& operator=(const CATUnicodeString& iStr);
	/** 
	*  = operator to construct a SdaiString from a CATString
	*/
	SdaiString& operator=(const CATString& iStr);
	/** 
	*  = operator to construct a SdaiString from a char *
	*/
	SdaiString& operator=(const char* iStr);
    
    // concatenation
	/** @nodoc */
    friend ExportedByKS0SIMPL SdaiString operator+(const SdaiString& iStr1, const SdaiString& iStr2);

    // compare
    /** @nodoc */
	int compare(const SdaiString&) const;
    /** @nodoc */
	//AIY: made the fun as inline.
	//int isEqual(const SdaiString&) const; // returns an int !
	inline int isEqual(const SdaiString& st) const
	{
		return ( _String.Compare(st._String) == 2 ) ;
	}
	/** 
	*  == operator to compare with char *
	*/
    friend ExportedByKS0SIMPL const SdaiBoolean& operator==(const SdaiString& iStr1, const char * iStr2);
	/** 
	*  != operator to compare with char *
	*/
	friend ExportedByKS0SIMPL const SdaiBoolean& operator!=(const SdaiString& iStr1, const char * iStr2);
	/** 
	*  == operator to compare with another SdaiString
	*/
	friend ExportedByKS0SIMPL const SdaiBoolean& operator==(const SdaiString& iStr1, const SdaiString& iStr2);
	/** 
	*  != operator to compare with another SdaiString
	*/
	friend ExportedByKS0SIMPL const SdaiBoolean& operator!=(const SdaiString& iStr1, const SdaiString& iStr2);
    /** @nodoc */
	const SdaiBoolean& like(const SdaiString& iStr) const;

    // modify string
    /** @nodoc */
	SdaiString& insert(size_t iPos, const SdaiString& iStr);
    /** @nodoc */
	SdaiString& remove(size_t iPos1, size_t iPos2= NPOS);
    /** @nodoc */
	SdaiString& replace(size_t iPos1, size_t iPos2, const SdaiString& iStr);

    // char by char
    /** @nodoc */
	char getAt(size_t iPos) const; 
    /** @nodoc */
	void putAt(size_t iPos, char iCh); 
    /** @nodoc */
	char getAtRaw(size_t iPos) const;   // w/o range check
    /** @nodoc */
	void putAtRaw(size_t iPos, char iCh);    // w/o range check

    // get substring
    /** @nodoc */
	SdaiString substr(size_t iPos1, size_t iPos2 = NPOS) const;

    // get length
    /** @nodoc */
	size_t length() const;
    /** @nodoc */
	size_t reserve() const;
    /** @nodoc */
	void reserve(size_t iLen);

    // convert to other formats
    /** @nodoc */
	operator const char*() const ;
	/** @nodoc */   
    operator const CATUnicodeString&() const ;
    /** @nodoc */
	operator const CATString() const ;
    /** @nodoc */
	const CATUnicodeString& ConvertToUnicode() const ;

    // STEP Dump
    /** @nodoc */
	ostream& StepDumpOfString ( ostream& ioOstr) const;
 
    // Access to data
    /** @nodoc */
	const CATUnicodeString& String() const;
 

  protected:

     CATUnicodeString _String ;

     CATSmallAllocatorPerBlockDeclare

     static CATSysHashString  _xDicoString ;

};

#if defined(_CAT_ANSI_STREAMS) && !defined(__KM0BASIC) && !defined(__KM0BOBJ) && !defined(__KM0DICO) && !defined(__KM0EVENT)
/** @nodoc */
ExportedByKS0SIMPL ostream& operator<<(ostream& io,const SdaiString & iString);
#endif

/** @nodoc */
// SdaiString NULL constant
//ExportedByKS0SIMPL
//extern const SdaiString NULL_SDAI_STRING ;
#define	NULL_SDAI_STRING	CATSdaiStaticGlobalData::TheNULL_SDAI_STRING()

#endif  /* SdaiString_H */
