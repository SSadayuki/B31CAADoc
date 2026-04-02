/** @CAA2Required */
/*---------------------------------------------------------------------*/
/* DON'T DIRECTLY INCLUDE THIS HEADER IN YOUR APPLICATION CODE. IT IS  */
/* REQUIRED TO BUILD CAA APPLICATIONS BUT IT MAY DISAPPEAR AT ANY TIME */
/*---------------------------------------------------------------------*/

// ------------------------------------------------------------------------------------------------
// COPYRIGHT DASSAULT SYSTEMES  1996
// ------------------------------------------------------------------------------------------------
// SDAI -- C++ Language Binding -- SdaiUnderlyingTypeH
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
//      'SdaiUnderlyingTypeH' couvre tout type utilisable comme domaine d'un defined type
//
// ------------------------------------------------------------------------------------------------
// Definition EXPRESS :
//
//      TYPE    underlying_type = SELECT (
//                                         simple_type,
//                                         aggregate_type,
//                                         defined_type,
//                                         enumeration_type,
//                                         select_type
//                                       );
//      END_TYPE ;
//
// ------------------------------------------------------------------------------------------------

#ifndef	_SDAI_UNDERLYING_TYPE_H_
#define	_SDAI_UNDERLYING_TYPE_H_



#include <KS0SIMPL.h>
#include <SdaiMacro.h>
#include <SdaiDictionaryInstance.h>

class CATSdaiUnderlyingTypeH;
class SdaiLogical;


	///////////////////
class ExportedByKS0SIMPL SdaiUnderlyingTypeH :		public SdaiDictionaryInstance
	///////////////////
{
	// =========================
	// T H E   S D A I   N O R M
	// =========================
	//
	//	cdtors
	//	------
	//
public :
	SdaiUnderlyingTypeH ();
	SdaiUnderlyingTypeH ( const SdaiUnderlyingTypeH& );
	SdaiUnderlyingTypeH ( SdaiSimpleTypeH& );
	SdaiUnderlyingTypeH ( SdaiAggrTypeH& );
	SdaiUnderlyingTypeH ( SdaiDefinedTypeH& );
	SdaiUnderlyingTypeH ( SdaiEnumerationTypeH& );
	SdaiUnderlyingTypeH ( SdaiSelectTypeH& );
	~SdaiUnderlyingTypeH ();

	//
	//	operators
	//	---------
	//
public :
	SdaiUnderlyingTypeH&  operator= ( const SdaiUnderlyingTypeH& );
	SdaiUnderlyingTypeH&  operator= ( SdaiSimpleTypeH& );
	SdaiUnderlyingTypeH&  operator= ( SdaiAggrTypeH& );
	SdaiUnderlyingTypeH&  operator= ( SdaiDefinedTypeH& );
	SdaiUnderlyingTypeH&  operator= ( SdaiEnumerationTypeH& );
	SdaiUnderlyingTypeH&  operator= ( SdaiSelectTypeH& );

//	operator SdaiSimpleTypeH ();
//	operator SdaiAggrTypeH ();
//	operator SdaiDefinedTypeH ();
//	operator SdaiEnumerationTypeH ();
//	operator SdaiSelectTypeH ();

	operator  const SdaiSimpleTypeH ()  const;
	operator  const SdaiAggrTypeH ()  const;
	operator  const SdaiDefinedTypeH ()  const;
	operator  const SdaiEnumerationTypeH ()  const;
	operator  const SdaiSelectTypeH ()  const;

	//
	//	test type
	//	---------
	//
public :
	const SdaiLogical&  _SdaiSimpleTypeH ()  const;
	const SdaiLogical&  _SdaiAggrTypeH ()  const;
	const SdaiLogical&  _SdaiDefinedTypeH ()  const;
	const SdaiLogical&  _SdaiEnumerationTypeH ()  const;
	const SdaiLogical&  _SdaiSelectTypeH ()  const;


	//
	//	type info
	//	---------
	//
public :
	virtual
	  const  SdaiBoolean&	IsKindOf( const SdaiString&	iName )  const;

	static
	  const SdaiString&	LeType();	//	return "UnderlyingTypeH" ;

	// =======================
	// D S   E X T E N S I O N
	// =======================
	//
	//	type info
	//	---------
public :
	const SdaiString&	UnderlyingTypeName ()	const ;
	SdaiPrimitiveType	Type () const ;
	SdaiAbstractType*	AbstractType() const;

	// ============
	// DATA MEMBERS
	// ============
private :
	SdaiAbstractType*	_AbstractType ;
	char			_isNamedType; // if true, must not be deleted
	//CATSdaiUnderlyingTypeH*	_UnderlyingTypeH ;


};

#endif	/* _SDAI_UNDERLYING_TYPE_H_ */
