// COPYRIGHT DASSAULT SYSTEMES  1996
//=============================================================================
//
// SdaiLogical:
// type supporting a logical value in SDAI -- C++ Language Binding
//
//=============================================================================
// Usage Notes:
//
// cf. Norm ISO 10303-23
//=============================================================================
// Mar. 94   Creation                                   C. Vandaele
//=============================================================================

#ifndef SdaiLogical_H
#define SdaiLogical_H

/**
 * @CAA2Level L1
 * @CAA2Usage U1
 */

#include <KS0SIMPL.h>


#include "CATSdaiStaticGlobalData.h"

class CATSdaiLogical;
/** @c++ansi fbq 2004-08-05.10:18:26 [Replace forward declaration by #include <iosfwd.h>] **/
#ifdef _CAT_ANSI_STREAMS
#include <iosfwd.h>
#else
class ostream;
#endif

/**
 * Class representing an SDAI logical.
 */
class ExportedByKS0SIMPL SdaiLogical
{

  friend class SdaiBoolean;

public:

  /** @nodoc */
	enum LOG { SDAI_FALSE=0, SDAI_TRUE=1, SDAI_UNKNOWN=2 } ;

	// ---------------------------------------------------------------------------------------
	// Constructor declaration
	// ---------------------------------------------------------------------------------------
  /** @nodoc */
  SdaiLogical ();
  /** @nodoc */
  SdaiLogical (LOG );
  /** @nodoc */
  SdaiLogical (const SdaiLogical& );
  /** @nodoc */
  SdaiLogical (int );
  /** @nodoc */
  SdaiLogical (const SdaiBoolean& ) ;

	// ---------------------------------------------------------------------------------------
	// Destructor declaration
	// ---------------------------------------------------------------------------------------
  ~SdaiLogical ()	{}

	// ---------------------------------------------------------------------------------------
	// Operators redefinition
	// ---------------------------------------------------------------------------------------

  /** @nodoc */
  operator int () const ;
	/** 
   *  assignment operator.
   */
  SdaiLogical& operator=(const SdaiLogical& );
	/** 
   *  == operator.
   */
  const SdaiLogical&  operator==(const SdaiLogical& ) const;
	/** 
   *  != operator.
   */
  const SdaiLogical&  operator!=(const SdaiLogical& ) const;
	/** 
   *  < operator.
   */
  const SdaiLogical&  operator< (const SdaiLogical& ) const;
	/** 
   *  > operator.
   */
  const SdaiLogical&  operator> (const SdaiLogical& ) const;
	/** 
   *  <= operator.
   */
  const SdaiLogical&  operator<=(const SdaiLogical& ) const;
	/** 
   *  >= operator.
   */
  const SdaiLogical&  operator>=(const SdaiLogical& ) const;
	/** 
   *  && operator.
   */
  const SdaiLogical&  operator&&(const SdaiLogical& ) const;
	/** 
   *  || operator.
   */
  const SdaiLogical&  operator||(const SdaiLogical& ) const;
	/** 
   *  ^ operator.
   */
  const SdaiLogical&  operator^ (const SdaiLogical& ) const;

	// ---------------------------------------------------------------------------------------
	// EXPRESS XOR operator 
	// ---------------------------------------------------------------------------------------
	
  /** @nodoc */
  const SdaiLogical&  operator!() const;
	
	// ---------------------------------------------------------------------------------------
	// exists
	// ---------------------------------------------------------------------------------------

  /** @nodoc */
  int exists () const;

	// ---------------------------------------------------------------------------------------
	// nullify
	// ---------------------------------------------------------------------------------------

  /** @nodoc */
  void nullify ();

	// ---------------------------------------------------------------------------------------
	// Dump
	// ---------------------------------------------------------------------------------------
  /** @nodoc */
	friend ExportedByKS0SIMPL ostream&  operator<< (ostream&, const SdaiLogical&);
	 
					  

protected:

  //	 data
  /** @nodoc */
  unsigned char  _Logical ;



};

// replaced by #define that follow

//ExportedByKS0SIMPL
//extern	const SdaiLogical sdaiUNKNOWN ;
//
//ExportedByKS0SIMPL
//extern	const SdaiLogical sdaiLTRUE ;
//
//ExportedByKS0SIMPL
//extern	const SdaiLogical sdaiLFALSE ;

/** @nodoc */
#define	sdaiLFALSE	CATSdaiStaticGlobalData::THEsdaiLFALSE()
/** @nodoc */
#define	sdaiLTRUE	CATSdaiStaticGlobalData::THEsdaiLTRUE()
/** @nodoc */
#define	sdaiUNKNOWN	CATSdaiStaticGlobalData::THEsdaiUNKNOWN()

#endif
