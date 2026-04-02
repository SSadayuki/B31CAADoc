// COPYRIGHT DASSAULT SYSTEMES  1996
//=============================================================================
// ------------------------------------------------------------------------------------------------
// SDAI -- C++ Language Binding -- SdaiPrimitiveH
// ------------------------------------------------------------------------------------------------
// Auteurs :
//	Bertrand LAPLACE  (mars 1994)
//	Corinne  VANDAELE (mars 1994)
//	Michele  FLAMAND  (mars 1994)
//	Olivier  FORNER   (mars 1994)
// ------------------------------------------------------------------------------------------------
//  Historique :
//
// SdaiPrimitiveH :
//  any type of variable used in Sdai C++ Language Binding
//
//=============================================================================
// Usage Notes:
//  may be built from and converted to
//  string, logical, integer, real, binary,
//  boolean, aggr., instance, select, enum.
// (Norm ISO 10303-23)
//=============================================================================
// Mar. 94   Creation                                   Olivier  FORNER
//=============================================================================

#ifndef SdaiPrimitiveH_H
#define SdaiPrimitiveH_H

/**
 * @CAA2Level L1
 * @CAA2Usage U1
 */

#include <SdaiMacro.h> // for prim. type

#include <CATSdaiStaticGlobalData.h>

#include <KS0SIMPL.h>
// for prim. type
#include "SdaiMacro.h" 

class CATSdaiPrimitiveH ;
/** @c++ansi fbq 2004-08-05.10:18:26 [Replace forward declaration by #include <iosfwd.h>] **/
#ifdef _CAT_ANSI_STREAMS
#include <iosfwd.h>
#else
class ostream;
#endif

#include "CATSmallAllocatorPerBlock.h"

//-----------------------------------------------------------------------------
/** Class representing any type of variable used in Sdai C++ Language Binding. */
class ExportedByKS0SIMPL SdaiPrimitiveH
{
  public:
    //------
    // 'tors
    //------

	// default constructor
	/** @nodoc */
	SdaiPrimitiveH () ;

	// ----------------------------------------------------------------------------------------
	// Automatic conversion from underlying type to primitiveh
	// ----------------------------------------------------------------------------------------
	/** @nodoc */
	SdaiPrimitiveH ( const SdaiInteger );
	/** @nodoc */
	SdaiPrimitiveH ( const SdaiReal );
	/** @nodoc */
	SdaiPrimitiveH ( const SdaiBoolean& );
	/** @nodoc */
	SdaiPrimitiveH ( const SdaiLogical& );
	/** @nodoc */
	SdaiPrimitiveH ( const SdaiString& );
	/** @nodoc */
	SdaiPrimitiveH ( const SdaiBinary& );
	/** @nodoc */
	SdaiPrimitiveH ( const SdaiEnum& );
	/** @nodoc */
	SdaiPrimitiveH ( const SdaiSelectH& );
	/** @nodoc */
	SdaiPrimitiveH ( const SdaiEntityInstanceH ); 
	/** @nodoc */
	SdaiPrimitiveH ( const SdaiAggrInstanceH );

	// SdaiPrimitiveH ( const SdaiAggrInstanceH, SdaiAccessMode );

	// ----------------------------------------------------------------------------------------
	// copy constructor (not in the norm)
	// ----------------------------------------------------------------------------------------
	/** @nodoc */
	SdaiPrimitiveH (const SdaiPrimitiveH&) ;

	// ----------------------------------------------------------------------------------------
	// destructor (not in the norm)
	// ----------------------------------------------------------------------------------------
	/* virtual */ ~SdaiPrimitiveH () ;

	// ----------------------------------------------------------------------------------------
	// Automatic conversion from primitive type to underlying type
	// ----------------------------------------------------------------------------------------
	/** @nodoc */
	operator SdaiInteger ()			const ;
	/** @nodoc */
	operator SdaiReal ()			const ;
	/** @nodoc */
	operator const SdaiBoolean& ()	const ;
	/** @nodoc */
	operator const SdaiLogical& ()	const ;
	/** @nodoc */
	operator const SdaiString& ()	const ;
	/** @nodoc */
	operator const SdaiBinary& ()	const ;
	/** @nodoc */
	operator const SdaiEnum& ()		const ;
	/** @nodoc */
	operator const SdaiSelectH& ()	const ;
	/** @nodoc */
	operator SdaiEntityInstanceH ()	const ;
	/** @nodoc */
	operator SdaiAggrInstanceH ()	const ;

	// ----------------------------------------------------------------------------------------
	// Contained member functions (for SdaiEntityInstance)
	// ----------------------------------------------------------------------------------------
    /** @nodoc */
	const	SdaiModelH	FindEntityInstanceModel ()	const;
	/** @nodoc */
	const	SdaiNamedTypeH	GetInstanceType ()	const;
	/** @nodoc */
	const   SdaiBoolean&	IsInstanceOf ( const SdaiString& )	const;
	/**
    * Tests if an Primitive is of a specified type or one of the subtypes of this type.
	*  @param typeName - the type specified
    */
	const   SdaiBoolean&	IsKindOf ( const SdaiString& )	const;
	/** @nodoc */
	const   SdaiBoolean&	IsKindOf ( const SdaiEntityH )	const;

	/**
    * Gets an attribute on a Primitive.
	*  @param attName - the name of the attribute
    */
	SdaiPrimitiveH	GetAttr ( const SdaiString& )	const;
	/** @nodoc */
	SdaiPrimitiveH	GetAttr ( const SdaiAttrH );

	/**
    * Tests if an attribute on a Primitive has a valid value.
	*  @param attName - the name of the attribute
    */
	const   SdaiBoolean&	TestAttr ( const SdaiString& )	const;
	/** @nodoc */
	const   SdaiBoolean&	TestAttr ( const SdaiAttrH )	const;

	// ----------------------------------------------------------------------------------------
	// Contained member functions (for SdaiAggr)
	// ----------------------------------------------------------------------------------------
	/** @nodoc */
	SdaiInteger	GetMemberCount ()	const;

	// ----------------------------------------------------------------------------------------
	// Assignment (=) operators
	// ----------------------------------------------------------------------------------------
	/**
	* = operator for conversion into a SdaiInteger.
	*/
	SdaiPrimitiveH&	operator= ( const SdaiInteger );
	/**
	* = operator for conversion into a SdaiReal.
	*/
	SdaiPrimitiveH&	operator= ( const SdaiReal );
	/**
	* = operator for conversion into a SdaiBoolean.
	*/
	SdaiPrimitiveH&	operator= ( const SdaiBoolean& );
	/**
	* = operator for conversion into a SdaiLogical.
	*/
	SdaiPrimitiveH&	operator= ( const SdaiLogical& );
	/**
	* = operator for conversion into a SdaiString.
	*/
	SdaiPrimitiveH&	operator= ( const SdaiString& );
	/**
	* = operator for conversion into a SdaiBinary.
	*/
	SdaiPrimitiveH&	operator= ( const SdaiBinary& );
	/**
	* = operator for conversion into a SdaiEnum.
	*/
	SdaiPrimitiveH&	operator= ( const SdaiEnum& );
	/**
	* = operator for conversion into a SdaiSelectH.
	*/
	SdaiPrimitiveH&	operator= ( const SdaiSelectH& );
	/**
	* = operator for conversion into a SdaiEntityInstanceH.
	*/
	SdaiPrimitiveH&	operator= ( SdaiEntityInstanceH );
	/**
	* = operator for conversion into a SdaiAggrInstanceH.
	*/
	SdaiPrimitiveH&	operator= ( SdaiAggrInstanceH );
	/**
	* = operator for assigment of another SdaiPrimitiveH.
	*/
	SdaiPrimitiveH&	operator= (const SdaiPrimitiveH& );

	// ----------------------------------------------------------------------------------------
	// Underlying type checking
	// ----------------------------------------------------------------------------------------
	/** @nodoc */
	const SdaiLogical&	_SdaiInteger ()		const;
	/** @nodoc */
	const SdaiLogical&	_SdaiReal ()		const;
	/** @nodoc */
	const SdaiLogical&	_SdaiBoolean ()		const;
	/** @nodoc */
	const SdaiLogical&	_SdaiLogical ()		const;
	/** @nodoc */
	const SdaiLogical&	_SdaiString ()		const;
	/** @nodoc */
	const SdaiLogical&	_SdaiBinary ()		const;
	/** @nodoc */
	const SdaiLogical&	_SdaiEnum ()		const;
	/** @nodoc */
	const SdaiLogical&	_SdaiSelectH ()		const;
	/** @nodoc */
	const SdaiLogical&	_SdaiEntityInstanceH ()	const;
	/** @nodoc */
	const SdaiLogical&	_SdaiAggrInstanceH ()	const;

	// ----------------------------------------------------------------------------------------
	// Validity test
	// ----------------------------------------------------------------------------------------
	/**
    * Tests if a Primitive exists.
    */
	const SdaiBoolean&  exists ()  const;

	// ----------------------------------------------------------------------------------------
	// RAZ de la primitive
	// ----------------------------------------------------------------------------------------
	/** @nodoc */
	void  nullify ();

	// ----------------------------------------------------------------------------------------
	// Get underlying type name
	// ----------------------------------------------------------------------------------------
	/**
    * Gets the underlying type name of a Primitive.
    */
	const SdaiString& UnderlyingTypeName()  const ;

	//----------------------------------------------------------------------------------------
	// Type of the value contained in the SdaiPrimitiveH (Added to the norm)
	//----------------------------------------------------------------------------------------
	/** @nodoc */
	SdaiPrimitiveType	UnderlyingTypeCode ()	const ;

	// ----------------------------------------------------------------------------------------
	// Comparison between 2 SdaiPrimitiveH (not in the norm)
	// Return value :
	//	- sdaiTRUE	: equal
	//	- sdaiFALSE	: different
	//	- sdaiUNKNOWN	: cannot be compared
	//----------------------------------------------------------------------------------------
	/** @nodoc */
	const SdaiLogical&	operator== ( const SdaiPrimitiveH& )	const ;
	/** @nodoc */
	const SdaiLogical&     operator!= ( const SdaiPrimitiveH& )	const ;

	// ----------------------------------------------------------------------------------------
	// Dump of a SdaiPrimitiveH (not in the norm)
	// ----------------------------------------------------------------------------------------
	/** @nodoc */
	ostream& DumpPrimitiveH ( ostream& ) const ;

	// ---------------------------------------------------------------------------------------
	// Data access
	// ---------------------------------------------------------------------------------------
	/** @nodoc */
	inline CATSdaiPrimitiveH* PrimitiveH() const { return _PrimitiveH ; }

  protected :

	   /** @nodoc */ 
       CATSdaiPrimitiveH*  _PrimitiveH ;

CATSmallAllocatorPerBlockDeclare

};

// ------------------------------------------------------------------------------------------------
//ExportedByKS0SIMPL extern const SdaiPrimitiveH	NO_VALUE;
/** @nodoc */ 
#define	NO_VALUE	CATSdaiStaticGlobalData::TheNO_VALUE()
// ------------------------------------------------------------------------------------------------

#endif

