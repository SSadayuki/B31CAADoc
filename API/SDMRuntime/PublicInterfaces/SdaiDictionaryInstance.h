// COPYRIGHT DASSAULT SYSTEMES  1996
// ------------------------------------------------------------------------------------------------
// SDAI -- C++ Language Binding -- SdaiDictionaryInstance
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
//	'SdaiDictionaryInstance' est une instance d'une entite definie dans le schema du 
//	dictionnaire SDAI : 'SDAI_dictionary_schema' (cf ISO 10303-22, par. 6)
//
//      'SdaiDictionaryInstance' est la classe de base de SdaiAttr, SdaiBaseTypeH,
//	SdaiEnumerationType, SdaiGlobalRule, SdaiNamedType, SdaiSchema, SdaiSelectType,
//	SdaiUnderlyingTypeH, SdaiUniquenessRule et SdaiWhereRule.
//
// ------------------------------------------------------------------------------------------------
// Definition EXPRESS :
//
//	ENTITY   dictionary_instance
//
//	    SUBTYPE OF (sdai_instance) ;
//
//	END_ENTITY ;
//
// ------------------------------------------------------------------------------------------------

#ifndef	_SDAI_DICTIONARY_INSTANCE_H_
#define	_SDAI_DICTIONARY_INSTANCE_H_

/**
 * @CAA2Level L1
 * @CAA2Usage U1
 */

#include <KS0SIMPL.h>
#include <SdaiInstance.h>

class CATSdaiDictionaryInstance;
class SdaiBoolean;
class SdaiString;


	//////////////////////
/** 
  * Class representing the instance of an entity defined in the SDAI dictionary schema.
  */
class ExportedByKS0SIMPL SdaiDictionaryInstance :	public SdaiInstance
	//////////////////////
{
	// ====
	// NORM
	// ====
	//
	//	cdtors
	//	------
	//
protected :
	/** @nodoc */
	SdaiDictionaryInstance ();
	~SdaiDictionaryInstance ();

private :
	SdaiDictionaryInstance ( const SdaiDictionaryInstance& );
	SdaiDictionaryInstance&		operator=( const SdaiDictionaryInstance& );


	//
	//	schema to which the instance belongs to
	//	---------------------------------------
public :
	/** @nodoc */
	virtual
	  const SdaiString&	GetInstanceSchemaName()	const;


	//
	//	type info
	//	---------
	//
public :
	/** @nodoc */
	virtual
	  const SdaiBoolean&	IsKindOf( const SdaiString& iTypeName )  const;

	/** @nodoc */
	static
	  const SdaiString&	LeType();


	// ============
	// DS EXTENSION
	// ============
	//
	//	delete a definition
	//	-------------------
public :
	/** @nodoc */
	static
	  void	Delete ( SdaiDictionaryInstanceH );

	//
	//	lock on the definition
	//	----------------------
public :
	/** @nodoc */
	const SdaiBoolean&	Lock ()	const;
	//
	/** @nodoc */
	void		LocalLock ();
	/** @nodoc */
	void		LocalUnlock ();
	//
	/** @nodoc */
	virtual
	  void		GlobalLock ();
    /** @nodoc */
	virtual
	  void		GlobalUnlock ();


	// ============
	// DATA MEMBERS
	// ============
protected :
	/** @nodoc */
	int	_Lock ;
	//CATSdaiDictionaryInstance*	  _DictionaryInstance ;


};

#endif	/* _SDAI_DICTIONARY_INSTANCE_H_ */
