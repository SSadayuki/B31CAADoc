// COPYRIGHT DASSAULT SYSTEMES  1996
// ------------------------------------------------------------------------------------------------
// SDAI -- C++ Language Binding -- SdaiEnumerationType
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
//      'SdaiEnumerationType' represente le type Express ENUMERATION
//
// ------------------------------------------------------------------------------------------------
// Definition EXPRESS :
//
//	ENTITY   enumeration_type
//
//		elements	: LIST [1:?] OF UNIQUE STRING;	(* Liste des valeurs de l'enumeration *)
//
//	END_ENTITY ;
//
// ------------------------------------------------------------------------------------------------

#ifndef	_SDAI_ENUMERATION_TYPE_H_
#define	_SDAI_ENUMERATION_TYPE_H_


/**
 * @CAA2Level L1
 * @CAA2Usage U1
 */

#include <KS0SIMPL.h>
#include <SdaiMacro.h>
#include <SdaiConstructedType.h>

//class CATSdaiEnumerationType;
class SdaiString;
class SdaiBoolean;
class SdaiSession;
class SdaiUnderlyingTypeH;
class SdaiEnum;

/** @nodoc */
typedef SdaiEnum* (*PT_ENUM)();

	///////////////////
/** @nodoc */
class ExportedByKS0SIMPL SdaiEnumerationType :	public SdaiConstructedType
	///////////////////
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
	SdaiEnumerationType ( const SDAIAGGRH(SdaiList,SdaiString)& );
		// the provided list becomes owned by this object (no recopy is done)
	//
/** @nodoc */
	~SdaiEnumerationType ();
		// deletes the provided list of strings

private :
/** @nodoc */
	SdaiEnumerationType ( const SdaiEnumerationType& );
/** @nodoc */
	SdaiEnumerationType&	 operator= ( const SdaiEnumerationType& );


	//
	//	description
	//	-----------
	//
public :
/** @nodoc */
	const SDAIAGGRH(SdaiList,SdaiString) Elements()  const;
/** @nodoc */
	const SdaiBoolean&			TestElements()  const;

    // access to one element
/** @nodoc */
	virtual SdaiString Element(SdaiInteger iNum)  const;

    // from string to index
/** @nodoc */
	SdaiInteger GetIndex(const SdaiString & iStr)  const;

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
	  const SdaiString&	GetInstanceTypeName()   const ;

/** @nodoc */
	virtual
	  SdaiPrimitiveType	Type ()  const;

/** @nodoc */
	static
	  const SdaiString&	LeType();	//{	return "EnumerationType" ;	      }


	// ============
	// DS EXTENSION
	// ============
	//
	//	create enumeration type
	//	----------------------
public :
/** @nodoc */
	static
	  SdaiEnumerationTypeH	Create ( const SDAIAGGRH(SdaiList,SdaiString) );


	//
	//	create aggr of Enum
	//	-------------------
private :
/** @nodoc */
	  const PT_CREAT_AGGR  CreateAggrOfType (const AggType ) const;
	
	//
	//	create enum of this type
	//	------------------------
public :
/** @nodoc */
	  SdaiEnum* CreateEnum();

	//
	//	initialize enum factory
	//	------------------------
public :
/** @nodoc */
	  void InitFactory(PT_ENUM iPtr);


	// ============
	// DATA MEMBERS
	// ============
private :
	//CATSdaiEnumerationType* _EnumerationType ;
/** @nodoc */
	const SDAIAGGRH(SdaiList,SdaiString)	_Elements ;

	// pointer to an early-binding factory
/** @nodoc */
	PT_ENUM _Factory; 


};

#endif	/* _SDAI_ENUMERATION_TYPE_H_ */

