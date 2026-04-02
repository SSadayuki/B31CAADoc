// COPYRIGHT DASSAULT SYSTEMES  1996
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
//      'SdaiNamedType' represente n'importe quel type Express ayant un nom
//
//      'SdaiNamedType' est le super-type de entity_definition et defined_type
//
// ------------------------------------------------------------------------------------------------
// Definition EXPRESS :
//
//	ENTITY   named_type
//
//		SUPERTYPE OF (ONEOF(entity_definition, defined_type));
//
//		name	: STRING;	(* Nom du type *)
//
//	END_ENTITY ;
//
// ------------------------------------------------------------------------------------------------

#ifndef	_SDAI_NAMED_TYPE_H_
#define	_SDAI_NAMED_TYPE_H_

/**
 * @CAA2Level L1
 * @CAA2Usage U1
 */

#include <KS0SIMPL.h>
#include <SdaiMacro.h>
#include <SdaiAbstractBaseType.h>

class CATSdaiNamedType;
class SdaiBoolean;
class SdaiString;
class SdaiSchema;
class SDAIAGGR(SdaiSet,SdaiWhereRuleH);


	/////////////
/**
 * Class representing any Express type having a name.
 */
class ExportedByKS0SIMPL SdaiNamedType :		public SdaiAbstractBaseType
	/////////////
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
	SdaiNamedType ();
	/** @nodoc */
	SdaiNamedType ( const SdaiString& );
	/** @nodoc */
	~SdaiNamedType () ;

private :
	SdaiNamedType ( const SdaiNamedType& );
	SdaiNamedType&	 operator= ( const SdaiNamedType& );


	//
	//	description
	//	-----------
	//
public :
	/** @nodoc */
	const SdaiBoolean&	TestName ()  const;
	/**
    * Gets the name of a SdaiNamedType.
    */
	const SdaiString& 	Name ()  const;
	/** @nodoc */
	//
	/** @nodoc */
	const SdaiBoolean&	TestParent_schema()	const;
	/** @nodoc */
	const SdaiSchemaH	Parent_schema()		const;

private :
	const SdaiBoolean&				TestWhere_rules ()  const;
	const SDAIAGGRH(SdaiSet,SdaiWhereRuleH)		Where_rules ()      const;
	//
	void	Name ( const SdaiString& );
	void	Parent_schema ( const SdaiSchema& );
	void	Where_rules ( SDAIAGGRH(SdaiSet,SdaiWhereRuleH)&  );


	//
	//	type info
	//	---------
	//
public :
	/** @nodoc */
	virtual
	  SdaiPrimitiveType	Type ()  const = 0;
		// may return :
		// sdaiINSTANCE,sdaiSELECT,sdaiENUMERATION, or any through defined type

	/**
    * Tests if a SdaiNamedType of a specified type or one of the subtypes of this type.
	*  @param iName - the type specified
    */
	virtual
	  const  SdaiBoolean&	IsKindOf( const SdaiString&	iName )  const;



	// =======================
	// D S   E X T E N S I O N
	// =======================
	//
	//	access to implementation
	//	------------------------
public :
	/** @nodoc */
	inline
	  CATSdaiNamedType*	NamedType() const
	  { return _NamedType; }


	// ============
	// DATA MEMBERS
	// ============
private :
	CATSdaiNamedType*	  _NamedType ;


};

#endif	/* _SDAI_NAMED_TYPE_H_ */










