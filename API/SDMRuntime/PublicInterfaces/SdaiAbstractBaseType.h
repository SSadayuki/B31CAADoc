// COPYRIGHT DASSAULT SYSTEMES  2001
#ifndef	_SDAI_ABSTRACT_BASE_TYPE_
#define	_SDAI_ABSTRACT_BASE_TYPE_

// ------------------------------------------------------------------------------------------------
// SDAI -- C++ Language Binding -- SdaiAbstractBaseType
// ------------------------------------------------------------------------------------------------
// Auteurs :
//	Philippe BAUCHER  
//	Corinne  VANDAELE 
// ------------------------------------------------------------------------------------------------
//  Historique :
//
//	MODIFICATION	: 01
//	DATE		: march 1996
//	AUTEUR		: PHB
//	NATURE		: Creation
//	DESCRIPTION	: Norme ISO 10303-22 (annexe D)
//
// ------------------------------------------------------------------------------------------------
// Definition :
//
//      'SdaiAbstractBaseType' is an abstract class of 'SdaiSimpleType',
//                                                     'SdaiAggrType',
//                                                     'SdaiNamedType'
//	that is used to simulate a select type through 'SdaiBaseTypeH'
//								    =
//
// ------------------------------------------------------------------------------------------------
// Definition EXPRESS :
//
//	TYPE	base_type = SELECT (
//	                            simple_type,
//	                            aggregate_type,
//	                            named_type
//                                  );
//	END_TYPE ;
//
// ------------------------------------------------------------------------------------------------

/**
 * @CAA2Level L1
 * @CAA2Usage U1
 */

#include <SdaiMacro.h>
#include <SdaiAbstractType.h>
#include "KS0SIMPL.h"

	////////////////////
/** Class used to simulate a select type through 'SdaiBaseTypeH'. */
class ExportedByKS0SIMPL SdaiAbstractBaseType :		public SdaiAbstractType
	////////////////////
{
	// =======================
	// D S   E X T E N S I O N
	// =======================
	//
	//	cdtors
	//	------
	//
	//		usable
	//		......
	//
protected :
	/** @nodoc */
	SdaiAbstractBaseType ()		{}
	/** @nodoc */
	~SdaiAbstractBaseType ()	{}

	//
	//		forbidden
	//		.........
	//
private :
	SdaiAbstractBaseType ( const SdaiAbstractBaseType& );
	SdaiAbstractBaseType&	operator= ( const SdaiAbstractBaseType& );


	//
	//	type info
	//	---------
public :
    /** @nodoc */
	virtual
	  const SdaiBoolean&	IsKindOf( const SdaiString& iTypeName )  const;

	/** @nodoc */
	virtual
	  const SdaiString&	GetInstanceTypeName()   const;

	/** @nodoc */
	virtual
	  SdaiPrimitiveType  Type () const = 0 ;

	/** @nodoc */
	static
	  const SdaiString&	LeType();	//	return "AbstractBaseType" ;


};

#endif	/* _SDAI_ABSTRACT_BASE_TYPE_ */
