// COPYRIGHT DASSAULT SYSTEMES  1996
// ------------------------------------------------------------------------------------------------
// SDAI -- C++ Language Binding -- SdaiAbstractType
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
//      'SdaiAbstractType' is an abstract class of 'SdaiAbstractBaseType',
//                                                 'SdaiConstructedType',
//	that is used to simulate a select type through 'SdaiUnderlyingTypeH'
//									  =
//
// ------------------------------------------------------------------------------------------------
// Definition EXPRESS :
//
//	TYPE	underlying_type = SELECT (
//	                            simple_type,	-- abstract_base_type
//	                            aggregate_type,	-- abstract_base_type
//	                            defined_type,	-- abstract_base_type
//	                            select_type,		-- constructed_type
//	                            enumenration_type		-- constructed_type
//                                  );
//	END_TYPE ;
//
// ------------------------------------------------------------------------------------------------

#ifndef	_SDAI_ABSTRACT_TYPE_
#define	_SDAI_ABSTRACT_TYPE_

/**
 * @CAA2Level L1
 * @CAA2Usage U1
 */

#include <SdaiMacro.h>
#include <SdaiDictionaryInstance.h>
// for AggType
#include <SdaiAggrInstance.h> 

#include "KS0SIMPL.h"
// typedef SdaiAggrInstanceH (*PT_CREAT_AGGR)(); defined in SdaiAttr.h
#include <SdaiAttr.h>

	////////////////
/** Class used to simulate a select type through 'SdaiUnderlyingTypeH'. */
class ExportedByKS0SIMPL SdaiAbstractType :	public SdaiDictionaryInstance
	////////////////
{
protected :
friend class SdaiArrayType;
friend class SdaiBagType;
friend class SdaiListType;
friend class SdaiSetType;
friend class SdaiDefinedType;

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
	SdaiAbstractType ()	{}
	~SdaiAbstractType ()	{}

	//
	//		forbidden
	//		.........
	//
private :
	SdaiAbstractType ( const SdaiAbstractType& );
	SdaiAbstractType&	operator= ( const SdaiAbstractType& );


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


	//
	//	Creation d'un agregat
	//	---------------------
private :
	virtual
	  const PT_CREAT_AGGR  CreateAggrOfType( const AggType ) const;


};

#endif	/* _SDAI_ABSTRACT_TYPE_ */

