/**
 * @quickReview LDI 02:06:21
 */
// COPYRIGHT DASSAULT SYSTEMES  2001
#ifndef	_SDAI_ATTR_H_
#define	_SDAI_ATTR_H_

/**
 * @CAA2Level L1
 * @CAA2Usage U1
 */

#include <KS0LATE.h>

// ------------------------------------------------------------------------------------------------
// SDAI -- C++ Language Binding -- SdaiAttr
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
//      'SdaiAttr' represente un attribut d'une entite. Cet attribut peut etre Explicite, Inverse
//	ou Derive. Un attribut possede un nom et un type.
//
// ------------------------------------------------------------------------------------------------
// Definition EXPRESS :
//
//	ENTITY   attribute
//
//		ABSTRACT SUPERTYPE OF (ONEOF	( explicit_attribute
//						, derived_attribute
//						, inverse_attribute)	);
//
//		name		: STRING ;
//			(* Nom de l'attribut *)
//
//		domain		: base_type ;
//			(* Type definissant le domaine de l'attribut *)
//
//		redeclaring	: OPTIONAL explicit_attribute ;
//			(* Attribut redeclare *)
//
//	INVERSE
//		parent_entity	: entity_definition
//					 FOR attributes ;
//			(* Entity dans laquelle est declare l'attribut *)
//
//	UNIQUE
//		UR1		: name, parent_entity ;
//			(* Le nom doit etre unique au sein de l'entite-mere *)
//
//		(* IN1	: l'attribut ne doit exister que dans une seule definition d'entite *)
//
// ------------------------------------------------------------------------------------------------

#include <SdaiMacro.h>
#include <SdaiDictionaryInstance.h>

class CATSdaiAttr;
class SdaiBaseTypeH;
class SdaiBoolean;
class SdaiEntity;
class SdaiString;

class CATSdaiAggrPrototype;

/** @nodoc */
#ifdef SDAI_MULTI_TRANS_BCC
/* when SDAI_MULTI_TRANS_BCC is on, the callback to create aggregates needs to know which kind of aggregate to create */
/** @nodoc */
typedef SdaiAggrInstanceH (*PT_CREAT_AGGR)(const CATSdaiAggrPrototype* def, SdaiRoot::COWSupport cowablep);
#else
/** @nodoc */
typedef SdaiAggrInstanceH (*PT_CREAT_AGGR)(const CATSdaiAggrPrototype* def);
#endif

	////////
/**
 * Class representing an attribute of a SDAI entity.
 */
class ExportedByKS0LATE SdaiAttr : 	public SdaiDictionaryInstance
	////////
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
	SdaiAttr ( const SdaiString&		iName
		  , const SdaiBaseTypeH&	iAttType );
	~SdaiAttr ();

protected :
/** @nodoc */
	SdaiAttr ();
/** @nodoc */
	SdaiAttr ( const SdaiAttr& );
/** @nodoc */
	SdaiAttr	operator= ( const SdaiAttr& );


	//
	//	description
	//	-----------
	//
public :

	/**
    * Gets the name of an attribute.
    */
	const SdaiString&	Name()  const;

	/**
    * Tests if an attribute has a name.
    */
	const SdaiBoolean&	TestName()  const;
	//
/** @nodoc */
	const SdaiEntityH	Parent_entity()  const;
/** @nodoc */
	const SdaiBoolean&	TestParent_entity()  const;
	//
/** @nodoc */
	const SdaiBaseTypeH&	Domain()  const;
/** @nodoc */
	const SdaiBoolean&	TestDomain()  const;


	//
	//	type info
	//	---------
	//
public :

	/**
    * Tests if an attribute is of a specified type.
    *  @param iTypeName - the type specified
    */
	virtual
	  const SdaiBoolean&	IsKindOf( const SdaiString& iTypeName )  const;

	/**
    * Gets the type of an attribute .
    *  @return
    *   The type of the instance
    */
	virtual
	  const SdaiString&	GetInstanceTypeName()   const;

/** @nodoc */
	virtual
	  SdaiPrimitiveType	Type ()  const;


	// =======================
	// D S   E X T E N S I O N
	// =======================
	//
	//	De quel sorte d'attr s'agit-il?
	//	------------------------------
public:
		
    /**
    * Tests if an attribute is a derived attribute.
    */
	virtual int IsDerivedAttr() const;

	/**
    * Tests if an attribute is a explicit attribute.
    */
	virtual int IsExplicitAttr() const;

	/**
    * Tests if an attribute is a inverse attribute.
    */
	virtual int IsInverseAttr() const;

	//
	//	aggregate creation
	//	------------------
public:
/** @nodoc */
	void InitAggrFactory(PT_CREAT_AGGR iPtr);
	//
	//	access to implementation
	//	------------------------
public :
/** @nodoc */
	inline 
	  CATSdaiAttr*	Attr() const
	    { return _Attr;}


	// ============
	// DATA MEMBERS
	// ============
private :
	CATSdaiAttr*	_Attr;


};

#endif	/* _SDAI_ATTR_H_ */

