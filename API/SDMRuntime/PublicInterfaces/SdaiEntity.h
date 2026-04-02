// COPYRIGHT DASSAULT SYSTEMES  2001
#ifndef	_SDAI_ENTITY_H_
#define	_SDAI_ENTITY_H_

/**
 * @CAA2Level L1
 * @CAA2Usage U1
 */

#include <KS0LATE.h>

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
//      'SdaiEntity' represente ?
//
//      'SdaiEntity' est le super-type de ?
//
// ------------------------------------------------------------------------------------------------
// Definition EXPRESS :
//
//	ENTITY   entity_definition
//
//		SUBTYPE OF (named_type) ;
//
//		supertypes	 : LIST OF UNIQUE entity_definition ;
//			(* super-types immediats, dans l'ordre de la declaration EXPRESS *)
//
//		attributes	 : LIST OF UNIQUE attribute ;
//			(* attributs de l'entite, dans l'ordre de la declaration EXPRESS *)
//
//		uniqueness_rules : SET OF uniqueness_rule ;
//			(* ensemble des regles d'unicite definies sur l'entite *)
//
//		where_rules	 : SET OF where_rule ;
//			(* ensemble des regles WHERE definies sur l'entite *)
//
//              complex          : BOOLEAN ;
//			(* TRUE = entite resultant de ANDOR ou de AND *)
//
//		instantiable	 : BOOLEAN ;
//			(* FALSE = ABSTRACT SUPERTYPE *)
//
//		independent	 : BOOLEAN ;
//			(* FALSE = entite definie par une clause REFERENCE *)
//
//		methods		 : LIST OF UNIQUE member_function_definition ;
//			(* methodes de l'entite, dans l'ordre de la declaration EXPRESS++ *)
//
//	INVERSE
//		parent_schema	 : schema_definition FOR entities ;
//			(* schema dans lequel est declaree l'entite *)
//
//	UNIQUE
//		(* IN1 : une definition d'entite existe dans une seule definition de schema *) 
//		UR1		 : name, parent_schema ;
//			(* le nom de l'entite est unique dans son schema pere *)
//
//	END_ENTITY ;
//
// ------------------------------------------------------------------------------------------------

#include  <SdaiMacro.h>
#include  <SdaiNamedType.h>

class CATSdaiEntity;
class SdaiString;
class SdaiBoolean;
class SdaiSchema;
class SDAIAGGR(SdaiList,SdaiEntityH);
class SDAIAGGR(SdaiList,SdaiAttrH);
class SDAIAGGR(SdaiSet,SdaiUniquenessRuleH);
class SDAIAGGR(SdaiSet,SdaiWhereRuleH);
/** @nodoc */
typedef SdaiAppInstanceH (*PTNEW)();

// boullettes-proof test 
#ifdef Complex
#undef Complex
#error "Complex has been defined(in X11 includes ?).It collides with Complex function.Please undefine it "
#endif


	//////////
/**
 * Class representing an SDAI entity.
 */
class ExportedByKS0LATE SdaiEntity :	public SdaiNamedType
	//////////
{
	// ===========================
	// T H E    S D A I    N O R M
	// ===========================
	//
	//	cdtors
	//	------
	//
protected :
/** @nodoc */
	SdaiEntity ( const SdaiString& );
	~SdaiEntity ();

private :
	SdaiEntity ( const SdaiEntity& );
	SdaiEntity	operator= ( const SdaiEntity& );

  void release();
	//
	//	instantiation (within a model)
	//	-------------
	//
public :
	/**
    * Creates an AppInstance in a SdaiModel.
    *  @param ioModel - the target SdaiModel
    *  @return
    *   The AppInstance created
    */
	SdaiAppInstanceH	CreateEntityInstance( SdaiModelH ioModel)	const ;


	//
	//	description
	//	-----------
	//
	//		on supertypes (one level search)
	//		.............
	//
public :
 	/**
    * Tests if an SdaiEntity is a sub type of another one.
    *  @param SdaiEntityH - the SdaiEntity to compare with
    */
	const SdaiBoolean&	IsSubtypeOf( const SdaiEntityH& )	const;
	//
/** @nodoc */
	const SdaiBoolean&			TestSupertypes()	const;
/** @nodoc */
	const SDAIAGGRH(SdaiList,SdaiEntityH)	Supertypes()		const; 

	//
	//		on attributes (only local ones)
	//		.............
	//
public :
/** @nodoc */
	const SdaiBoolean&				TestAttributes()	const;
	/** @nodoc
    * Gets the list of attributes defined on a SdaiEntity.
    *  @return
    *   The list of attributes
    */
	const SDAIAGGRH(SdaiList,SdaiAttrH)		Attributes()		const;

	//
	//		on uniqueness rules (only local ones)
	//		...................
	//
public :
/** @nodoc */
	const SdaiBoolean&				TestUniqueness_rules()	const;
/** @nodoc */
	const SDAIAGGRH(SdaiSet,SdaiUniquenessRuleH)	Uniqueness_rules()	const;
//private :
/** @nodoc */
	void Uniqueness_rules( SDAIAGGRH(SdaiSet,SdaiUniquenessRuleH)& );
	//
	//		on instantiability
	//		..................
	//
public :
/** @nodoc */
	const SdaiBoolean&	TestInstantiable()           const;
/** @nodoc */
	const SdaiBoolean&	Instantiable()               const;

	//
	//		on complexity (mixing several entities?)
	//		.............
	//
public :
/** @nodoc */
	const SdaiBoolean&	TestComplex()           const;
/** @nodoc */
	const SdaiBoolean&	Complex()               const;

	//
	//		on dependency (described through a REFERENCE clause?
	//		.............	==> implies restriction to instantiation)
	//
/** @nodoc */
	const SdaiBoolean&	TestIndependent()	const;
/** @nodoc */
	const SdaiBoolean&	Independent()		const;



	//
	//	type info
	//	---------
	//
public :
	/**
    * Tests if an SdaiEntity is a of a specific type.
	*  @param iTypeName - the type to check with
	*/
	virtual
	  const SdaiBoolean&	IsKindOf( const SdaiString& iTypeName )  const;

	/**
    * Gets the type of an SdaiEntity if an SdaiEntity is a of a specific type.
    *  @return
    *   The type of the SdaiEntity
	*/
	virtual
	  const SdaiString&	GetInstanceTypeName()   const;

/** @nodoc */
	virtual
	  SdaiPrimitiveType	Type ()  const;		// always sdaiINSTANCE


	// =======================
	// D S   E X T E N S I O N
	// =======================
	//
	//	create entity
	//	-------------
public :
/** @nodoc */
	static
	  SdaiEntityH	Create ( const SdaiString& );
	
	//
	// initialize factory pointer function for early binding
	//
/** @nodoc */
	void InitFactory (PTNEW iFactory);

	//
	//	add/remove supertype
	//	--------------------
public :
/** @nodoc */
	int	AddSuper ( SdaiEntityH );
/** @nodoc */
	int	RemoveSuper ( SdaiEntityH );

	//
	//	add/remove component
	//	--------------------
public :
/** @nodoc */
	int	AddComp ( SdaiEntityH );
/** @nodoc */
	int	RemoveComp ( SdaiEntityH );

	//
	//	add/remove subtypes (expression?)
	//	--------------------------------
public :
//	int	AddSubExpr ( CATSdaiHeritExpr* );
//	int	RemoveSubExpr ( CATSdaiHeritExpr* );

	//
	//	add/remove attribute
	//	---------------------
public :
/** @nodoc */
	int	Add ( SdaiAttrH	);
/** @nodoc */
	int	Remove ( SdaiAttrH );

	//
	//	description
	//	-----------
	//
	//		on supertypes (recursive search)
	//		.............
	//
public :
/** @nodoc */
	const SdaiBoolean&			TestAll_supertypes()    const;
/** @nodoc */
	const SDAIAGGRH(SdaiList,SdaiEntityH)	All_supertypes()        const;

	//
	//	description
	//	-----------
	//
	//		on subtypes
	//		.............
	//
public :
/** @nodoc */
	const SDAIAGGRH(SdaiList,SdaiEntityH)	All_subtypes()        const;


	//
	//		on attributes
	//		.............
	//
	// Retrieve an attribute by name (Scans All inherited and local Attributes)
/** @nodoc */
	const SdaiAttrH		AttrDefinition ( const SdaiString& ) const ; 
	//
/** @nodoc */
	const SdaiBoolean&			TestAll_attributes()    const;
/** @nodoc */
	const SDAIAGGRH(SdaiList,SdaiAttrH)	All_attributes()        const;

	//
	//	create aggr of AppInstance
	//	--------------------------
private :
	virtual
	  const PT_CREAT_AGGR  CreateAggrOfType( const AggType ) const;
	
	//
	//	access to implementation
	//	------------------------
public :
/** @nodoc */
	inline
	  CATSdaiEntity*	Entity () const
	    {	return _Entity;	}


	// ============
	// DATA MEMBERS
	// ============
private :
	CATSdaiEntity*		_Entity ;


};

#endif	/* _SDAI_ENTITY_H_ */


