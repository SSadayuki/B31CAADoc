/** @CAA2Required */
/*---------------------------------------------------------------------*/
/* DON'T DIRECTLY INCLUDE THIS HEADER IN YOUR APPLICATION CODE. IT IS  */
/* REQUIRED TO BUILD CAA APPLICATIONS BUT IT MAY DISAPPEAR AT ANY TIME */
/*---------------------------------------------------------------------*/

// ------------------------------------------------------------------------------------------------
// COPYRIGHT DASSAULT SYSTEMES  1996
// ------------------------------------------------------------------------------------------------
// SDAI -- C++ Language Binding -- SdaiSimpleType
// ------------------------------------------------------------------------------------------------
// Auteurs :
//	Philippe BAUCHER 
//	Corinne  VANDAELE 
// ------------------------------------------------------------------------------------------------
//  Historique :
//
//	MODIFICATION	: 00
//	DATE		: fevrier 1996
//	AUTEUR		: PHB
//	NATURE		: Creation
//	DESCRIPTION	: Norme ISO 10303-22 (annexe D)
//
// ------------------------------------------------------------------------------------------------
// Definition :
//
//      'SdaiSimpleType' represente ?
//
// ------------------------------------------------------------------------------------------------
// Definition EXPRESS :
//
//	ENTITY   ?
//
//		?	(* ? *)
//
//	END_ENTITY ;
//
// ------------------------------------------------------------------------------------------------

#ifndef	_SDAI_SIMPLE_TYPE_H_
#define	_SDAI_SIMPLE_TYPE_H_


#include <KS0SIMPL.h>

#include <SdaiMacro.h>
#include <SdaiAbstractBaseType.h>

class CATSdaiSimpleType;
class SdaiBoolean;
class SdaiString;


	//////////////
class ExportedByKS0SIMPL SdaiSimpleType :	public SdaiAbstractBaseType
	//////////////
{
	// ===========================
	// T H E    S D A I    N O R M
	// ===========================
	//
	//	cdtors
	//	------
	//
protected :
	SdaiSimpleType ()	{}
	~SdaiSimpleType ()	{}


private :
	SdaiSimpleType ( const SdaiSimpleType& );
	SdaiSimpleType&	operator= ( const SdaiSimpleType& );


	//
	//	type info :
	//	---------
	//
public :
	virtual
	  const SdaiBoolean&	IsKindOf( const SdaiString& iTypeName )  const;

	virtual
	  const SdaiString&	GetInstanceTypeName()   const ;

	virtual
	  SdaiPrimitiveType	Type ()  const = 0;

	static
	  const SdaiString&	LeType();	//	return "SimpleType" ;


	// ============
	// DS EXTENSION
	// ============
	//
	//	access to implementation :
	//	------------------------
public :
	inline
	  CATSdaiSimpleType*	SimpleType() const
	    { return _SimpleType; }


protected :
	// ============
	// DATA MEMBERS
	// ============
	CATSdaiSimpleType*	  _SimpleType ;


};

#endif	/* _SDAI_SIMPLE_TYPE_H_ */

