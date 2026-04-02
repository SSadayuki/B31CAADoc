/** @CAA2Required */
/*---------------------------------------------------------------------*/
/* DON'T DIRECTLY INCLUDE THIS HEADER IN YOUR APPLICATION CODE. IT IS  */
/* REQUIRED TO BUILD CAA APPLICATIONS BUT IT MAY DISAPPEAR AT ANY TIME */
/*---------------------------------------------------------------------*/

// ------------------------------------------------------------------------------------------------
// COPYRIGHT DASSAULT SYSTEMES  1996
// ------------------------------------------------------------------------------------------------
// SDAI -- C++ Language Binding -- SdaiDefinedType
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
//      'SdaiDefinedType' represente le type defini Express (declaration 'TYPE xxx END_TYPE')
//
// ------------------------------------------------------------------------------------------------
// Definition EXPRESS :
//
//	ENTITY   defined_type
//
//		SUBTYPE OF (named_type);
//
//		domain		: underlying_type;
//					(* Representation du nouveau type *)
//
//		where_rules	: SET OF where_rule;
//					(* Ensemble de regles sur le nouveau type *)
//
//	INVERSE
//		parent_schema	: schema_definition FOR types;
//					(* Schema dans lequel le type est declare *)
//
//	WHERE
//		UR1		: name, parent_schema;
//					(* Le nom d'un type est unique au sein d'un schema *)
//
//	END_ENTITY ;
//
// ------------------------------------------------------------------------------------------------

#ifndef	_SDAI_DEFINED_TYPE_H_
#define	_SDAI_DEFINED_TYPE_H_



#include <KS0SIMPL.h>
#include  <SdaiMacro.h>
#include  <SdaiNamedType.h>

class CATSdaiDefinedType;
class SdaiString;
class SdaiBoolean;
class SdaiUnderlyingTypeH;
class SdaiAbstractType;

// CKM corresponding class
class	CkmDefinedType ;


	///////////////
class ExportedByKS0SIMPL SdaiDefinedType :	public SdaiNamedType
	///////////////
{
	// ===========================
	// T H E    S D A I    N O R M
	// ===========================
	//
	//	cdtors
	//	------
	//
protected :
	SdaiDefinedType ( const SdaiString&  name,
			  const SdaiUnderlyingTypeH&,
			  const SDAIAGGRH(SdaiSet,SdaiWhereRuleH)&  );
	~SdaiDefinedType ();

private :
	SdaiDefinedType ( CkmDefinedType& );
	SdaiDefinedType ( const SdaiDefinedType& );
	SdaiDefinedType&	 operator= ( const SdaiDefinedType& );


	//
	//	description
	//	-----------
	//
public :
	const SdaiUnderlyingTypeH&	Domain ()  const;
	const SdaiBoolean&		TestDomain ()  const;


	//
	//	type info
	//	---------
	//
public :
	virtual
	  const SdaiBoolean&	IsKindOf( const SdaiString& iTypeName )  const;

	virtual
	  const SdaiString&	GetInstanceTypeName()   const ;

	virtual
	  SdaiPrimitiveType	Type()  const;


	// =======================
	// D S   E X T E N S I O N
	// =======================
	//
	//	create defined type
	//	-------------------
public :
	static
	  SdaiDefinedTypeH	Create ( const SdaiString& );

	//
	//	set underlying type
	//	-------------------
public :
	void	SetUnderlyingType ( SdaiUnderlyingTypeH& );

	//
	//	create aggr of Defined
	//	----------------------
private :
	virtual
	  const PT_CREAT_AGGR  CreateAggrOfType( const AggType ) const;

	//
	//	get final abstract type (simple, aggr, constr.)
	//	-----------------------------------------------
public :
	  const SdaiAbstractType&  GetFinalType() const;
	
	//
	//	access to implementation
	//	------------------------
public :
	inline
	  CATSdaiDefinedType*	DefinedType () const
	    {	return _DefinedType;	}


	// ============
	// DATA MEMBERS
	// ============
private:
	CATSdaiDefinedType*	_DefinedType ;	


};

#endif	/* _SDAI_DEFINED_TYPE_H_ */

