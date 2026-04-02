// COPYRIGHT DASSAULT SYSTEMES  2001
#ifndef	_SDAI_AGG_TYPE_H_
#define	_SDAI_AGG_TYPE_H_


#include <KS0SIMPL.h>

// ------------------------------------------------------------------------------------------------
// SDAI -- C++ Language Binding -- SdaiAggrType
// ------------------------------------------------------------------------------------------------
// Auteurs :
//	Philippe BAUCHER  
//	Corinne  VANDAELE 
// ------------------------------------------------------------------------------------------------
//  Historique :
//
//	MODIFICATION	: 01
//	DATE		: fevrier 1996
//	AUTEUR		: PHB
//	NATURE		: Creation
//	DESCRIPTION	: Norme ISO 10303-22 (annexe D)
//
// ------------------------------------------------------------------------------------------------
// Definition :
//
//      'SdaiAggrType' est un type dont la valeur est un ensemble d'autres valeurs
//
//      'SdaiAggrType' est le super-type de set_type, bag_type, list_type et array_type.
//
// ------------------------------------------------------------------------------------------------
// Definition EXPRESS :
//
//	ENTITY   aggregate_type
//
//		ABSTRACT SUPERTYPE OF (ONEOF(set_type, bag_type, list_type, array_type));
//
//		element_type	 : base_type ;		(* Type des elements contenus dans l'agregat *)
//		lower		 : OPTIONAL INTEGER ;	(* Borne inferieure de indices de l'agregat *)
//		upper		 : OPTIONAL INTEGER ;	(* Borne superieure des indice de l'agregat *)
//
//	WHERE
//		valid_boundaries : lower <= upper;	(* La borne inf. est <= a la borne sup. *)
//
//	END_ENTITY ;
//
// ------------------------------------------------------------------------------------------------

/**
 * @CAA2Level L1
 * @CAA2Usage U1
 */

#include <SdaiMacro.h>
#include <SdaiAbstractBaseType.h>

class SdaiBaseTypeH;
class SdaiBoolean;


/** @nodoc */
class ExportedByKS0SIMPL SdaiAggrType : public SdaiAbstractBaseType
{
friend class CATSdaiAttr;

	// ===========================
	// T H E    S D A I    N O R M
	// ===========================
	//
	//	cdtors
	//	------
	//
protected :
/** @nodoc */
	SdaiAggrType ();
/** @nodoc */
	SdaiAggrType ( 	const SdaiBaseTypeH&	Element_type
		      , SdaiInteger		Lower
		      , SdaiInteger		Upper
		      , SdaiAttrFlag		LowerFlag = sdaiUNSET
		      , SdaiAttrFlag		UpperFlag = sdaiUNSET
		      );
/** @nodoc */
	~SdaiAggrType ();        

private :
/** @nodoc */
	SdaiAggrType ( const SdaiAggrType& );
/** @nodoc */
	SdaiAggrType&	operator= ( const SdaiAggrType& );


	//
	//	description
	//	-----------
	//
public :
/** @nodoc */
	const SdaiBoolean&	TestElement_type ()  const;
/** @nodoc */
	const SdaiBaseTypeH&	Element_type ()  const;

/** @nodoc */
	const SdaiBoolean&	TestLower ()  const;
/** @nodoc */
	SdaiInteger		Lower ()  const;

/** @nodoc */
	const SdaiBoolean&	TestUpper ()  const;
/** @nodoc */
	SdaiInteger		Upper ()  const;


	//
	//	type info
	//	---------
	//
public :
/** @nodoc */
	virtual
	  const SdaiBoolean&	IsKindOf( const SdaiString& iTypeName )  const;

/** @nodoc */
	virtual
	  const SdaiString&	GetInstanceTypeName()   const;

public  :
/** @nodoc */
	static
	  const SdaiString&	LeType();	//{	return "AggrType" ;      }

/** @nodoc */
	virtual
	  SdaiPrimitiveType	Type ()  const ;	// always sdaiAGGR


	// ============
	// DS EXTENSION
	// ============
	//
	//	get the function pointer to create an aggregate
	//	-----------------------------------------------
public :
/** @nodoc */
	virtual
	  const PT_CREAT_AGGR  CreateAggr() const;

 	//
	//	create an aggr of aggr.
	//	----------------------
private :
/** @nodoc */
	  const PT_CREAT_AGGR  CreateAggrOfType( const AggType ) const;

 	//
	//	create a prototype
	//	----------------------
public :
/** @nodoc */
	virtual
     CATSdaiAggrPrototype*  BuildProto () const;

	// ============
	// DATA MEMBERS
	// ============
protected :
  /** @nodoc */
	const SdaiBaseTypeH*	_ElementType ; 
  /** @nodoc */
	SdaiInteger		_Lower ;
  /** @nodoc */
	SdaiInteger		_Upper ;
  /** @nodoc */
	SdaiAttrFlag		_LowerFlag ;
  /** @nodoc */
	SdaiAttrFlag		_UpperFlag ;


};

#endif	/* _SDAI_AGG_TYPE_H_ */

