// COPYRIGHT DASSAULT SYSTEMES  1996
//=============================================================================
//
// SdaiBoolean:
// type supporting a boolean in SDAI -- C++ Language Binding
//
//=============================================================================
// Usage Notes:
//
// cf. Norm ISO 10303-23
//=============================================================================
// Mar. 94   Creation                                   C. Vandaele
//=============================================================================
#ifndef SdaiBoolean_H
#define SdaiBoolean_H

/**
 * @CAA2Level L1
 * @CAA2Usage U1
 */

#include <KS0SIMPL.h>


#include <CATSdaiStaticGlobalData.h>

class SdaiLogical ;
class CATSdaiBoolean ;
/** @c++ansi fbq 2004-08-05.10:18:26 [Replace forward declaration by #include <iosfwd.h>] **/
#ifdef _CAT_ANSI_STREAMS
#include <iosfwd.h>
#else
class ostream;
#endif

/**
 * Class representing an SDAI boolean.
 */
class ExportedByKS0SIMPL SdaiBoolean
{

	friend class SdaiLogical;

public:

/** @nodoc */
	enum BOOL { SDAI_FALSE=0, SDAI_TRUE=1 } ;

	//----------------------------------------------------------------------------------------
	// Contructors
	//----------------------------------------------------------------------------------------
/** @nodoc */
	SdaiBoolean ();
/** @nodoc */
	SdaiBoolean (BOOL );
/** @nodoc */
	SdaiBoolean (const SdaiBoolean& );
/** @nodoc */
	SdaiBoolean (int );
/** @nodoc */
	SdaiBoolean (const SdaiLogical& );

	//----------------------------------------------------------------------------------------
	// Destructor
	//----------------------------------------------------------------------------------------
	~SdaiBoolean ()	{}

	//----------------------------------------------------------------------------------------
	// Operators
	//----------------------------------------------------------------------------------------
	/** 
   *  assignment operator.
   */
	SdaiBoolean& operator= (const SdaiLogical& );

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

	//----------------------------------------------------------------------------------------
	// NOT
	//----------------------------------------------------------------------------------------

/** @nodoc */
	const SdaiLogical&  operator!() const;

	//----------------------------------------------------------------------------------------
	// operateur de conversion
	//----------------------------------------------------------------------------------------

/** @nodoc */

	operator int () const;
/*	inline operator int () const
	{
	   if ( _Boolean == sdaiETAT_UNSET ) {
			SDAI_RAISE_ERROR(sdaiEVALNOASN,"Unassigned Boolean cannot be converted to Integer");
			return(-1) ;
	   }
   
	   if ( _Boolean == SdaiBoolean::SDAI_FALSE )   return 0;
	   return 1;
	}
*/
	//----------------------------------------------------------------------------------------
	// exists
	//----------------------------------------------------------------------------------------

/** @nodoc */
	int exists() const;
	//----------------------------------------------------------------------------------------
	// nullify
	//----------------------------------------------------------------------------------------

/** @nodoc */
	void nullify ();

	// ---------------------------------------------------------------------------------------
	// dump : hors norme
	// ---------------------------------------------------------------------------------------
/** @nodoc */
	friend ExportedByKS0SIMPL ostream&  operator<< (ostream&, const SdaiBoolean&);
	

protected:
	// data 
/** @nodoc */
	unsigned char  _Boolean ;

};

//ExportedByKS0SIMPL extern	const SdaiBoolean sdaiFALSE ;
//ExportedByKS0SIMPL extern	const SdaiBoolean sdaiTRUE ;
/** @nodoc */
#define	sdaiFALSE	CATSdaiStaticGlobalData::THEsdaiFALSE()
/** @nodoc */
#define	sdaiTRUE	CATSdaiStaticGlobalData::THEsdaiTRUE()

#endif	/* _SDAI_BOOLEAN_H_ */
