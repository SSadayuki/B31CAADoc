// COPYRIGHT DASSAULT SYSTEMES  1996
// ------------------------------------------------------------------------------------------------
// SDAI -- C++ Language Binding -- SdaiConstructedType
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
//      'SdaiConstructedType' is an abstract class of 'SdaiSelectType',
//                                                    'SdaiEnumerationType',
//	that is used to simulate a select type through 'SdaiConstructedTypeH'
//									   =
//
// ------------------------------------------------------------------------------------------------

#ifndef	_SDAI_CONSTRUCTED_BASE_TYPE_
#define	_SDAI_CONSTRUCTED_BASE_TYPE_



#include "KS0SIMPL.h"
#include <SdaiMacro.h>
#include <SdaiAbstractType.h>

/**
 * @CAA2Level L1
 * @CAA2Usage U1
 */

	///////////////////
/** @nodoc */
class ExportedByKS0SIMPL SdaiConstructedType :		public SdaiAbstractType
	///////////////////
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
	SdaiConstructedType ()	{}
/** @nodoc */
	~SdaiConstructedType ()	;

	//
	//		forbidden
	//		.........
	//
private :
/** @nodoc */
	SdaiConstructedType ( const SdaiConstructedType& );
/** @nodoc */
	SdaiConstructedType&	operator= ( const SdaiConstructedType& );


	//
	//	type info
	//	---------
public :
/** @nodoc */
	virtual
	  const SdaiBoolean&	IsKindOf( const SdaiString& iTypeName )  const;

/** @nodoc */
	virtual
	  const SdaiString&	GetInstanceTypeName()   const ;

/** @nodoc */
	virtual
	  SdaiPrimitiveType  Type () const = 0 ;

/** @nodoc */
	static
	  const SdaiString&	LeType();	//	return "ConstructedType" ;


};

#endif	/* _SDAI_CONSTRUCTED_BASE_TYPE_ */
