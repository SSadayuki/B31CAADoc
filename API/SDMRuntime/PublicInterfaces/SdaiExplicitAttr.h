// COPYRIGHT DASSAULT SYSTEMES  2001
#ifndef	_SDAI_EXPLICIT_ATTR_H_
#define	_SDAI_EXPLICIT_ATTR_H_

/**
 * @CAA2Level L1
 * @CAA2Usage U1
 */

#include <KS0LATE.h>

// ------------------------------------------------------------------------------------------------
// SDAI -- C++ Language Binding -- SdaiExplicitAttr
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
//      'SdaiExplicitAttr' represente un attribut dont la valeur est directement accessible
//
// ------------------------------------------------------------------------------------------------
// Definition EXPRESS :
//
//	ENTITY   explicit_attribute
//
//		SUBTYPE OF (attribute);
//
//		optional_flag	: BOOLEAN;	(* Indique si un attribut est optionnel (TRUE)	*)
//						(* ou si sa valeur est requise (FALSE)		*)
//	END_ENTITY ;
//
// ------------------------------------------------------------------------------------------------

#include <SdaiMacro.h>
#include <SdaiAttr.h>

class CATSdaiExplicitAttr;
class SdaiString;
class SdaiBaseTypeH;
class SdaiBoolean;


	////////////////

/**
 * Class representing an SDAI attribute whose value is directly accessible.
 */
class ExportedByKS0LATE SdaiExplicitAttr :	public SdaiAttr
	////////////////
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
	SdaiExplicitAttr ( const SdaiString&		iName
			  , const SdaiBaseTypeH&	iAttType
			  , const SdaiBoolean&		iOptionalFlag );
	~SdaiExplicitAttr ();

private :
	SdaiExplicitAttr ( const SdaiExplicitAttr&	iCopy );
	SdaiExplicitAttr&	 operator= ( const SdaiExplicitAttr& );


	//
	//	description
	//	-----------
	//
public :
	/**
    * Tests if a SdaiExplicitAttr is an optional attribute.
	*/
	const SdaiBoolean&  Optional_flag ()  const;
/** @nodoc */
	const SdaiBoolean&  TestOptional_flag ()  const;



	//
	//	type info
	//	---------
	//
public :
	/**
    * Tests if an SdaiExplicitAttr is of a given type.
	*  @param iTypeName - the type to check with
	*/
	virtual
	  const SdaiBoolean&	IsKindOf( const SdaiString& iTypeName )  const;

	/**
    * Gets the type of an SdaiExplicitAttr.
    *  @return
    *   The type of the SdaiExplicitAttr
	*/
	virtual
	  const SdaiString&	GetInstanceTypeName()   const;

/** @nodoc */
	static
	  const SdaiString&	LeType();	//	return "ExplicitAttr" ;

	// ============
	// DS EXTENSION
	// ============
	//
	//	De quel sorte d'attr s'agit-il?
	//	------------------------------
public:
	/**
    * Tests if an attribute is an explicit one.
	*  @return 1
	*/
	virtual int IsExplicitAttr() const;

	// ============
	// DS PRIVATE
	// ============

	// private method used only in CATSdaiRestoreSaveForm
/** @nodoc */
	void  Optional_flag ( const SdaiBoolean& );

	//
	//	create/delete attr
	//	------------------
public :
/** @nodoc */
	static
	  SdaiExplicitAttrH	Create ( const SdaiString&	iName
					, const SdaiBaseTypeH&	iAttType
					, const SdaiBoolean&	iOptionalFlag );

	// ============
	// DATA MEMBERS
	// ============
private :
	unsigned char	_Optional ;


};

#endif	/* _SDAI_EXPLICIT_ATTR_H_ */

