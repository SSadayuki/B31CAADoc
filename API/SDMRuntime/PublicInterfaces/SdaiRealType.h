/** @CAA2Required */
/*---------------------------------------------------------------------*/
/* DON'T DIRECTLY INCLUDE THIS HEADER IN YOUR APPLICATION CODE. IT IS  */
/* REQUIRED TO BUILD CAA APPLICATIONS BUT IT MAY DISAPPEAR AT ANY TIME */
/*---------------------------------------------------------------------*/

// ------------------------------------------------------------------------------------------------
// COPYRIGHT DASSAULT SYSTEMES  1996
// ------------------------------------------------------------------------------------------------
// SDAI -- C++ Language Binding -- SdaiRealType
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
//      'SdaiRealType' represente le type Express REAL
//
// ------------------------------------------------------------------------------------------------
// Definition EXPRESS :
//
//	ENTITY   real_type
//
//		SUBTYPE OF (simple_type);
//
//		precision	: OPTIONAL INTEGER;	(* Nombres de chiffres significatifs *)
//
//	END_ENTITY ;
//
// ------------------------------------------------------------------------------------------------
#ifndef	_SDAI_REAL_TYPE_H_
#define	_SDAI_REAL_TYPE_H_



#include <KS0SIMPL.h>


#include <SdaiMacro.h>
#include <SdaiSimpleType.h>

class CATSdaiRealType;
class SdaiBoolean;


	////////////
class ExportedByKS0SIMPL SdaiRealType :	public SdaiSimpleType
	////////////
{
	// ===========================
	// T H E    S D A I    N O R M
	// ===========================
	//
	//	cdtors
	//	------
	//
protected :
	SdaiRealType ( SdaiInteger	Precision,
		       SdaiAttrFlag	Precision_flag = sdaiUNSET );
	~SdaiRealType ();

private:
	SdaiRealType ( const SdaiRealType& );
	SdaiRealType&	operator= ( SdaiRealType& );


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
	  SdaiPrimitiveType	Type ()  const;

	static
	  const SdaiString&	LeType();	//	return "RealType" ;

	//
	//	description
	//	-----------
	//
public :
	SdaiInteger		Precision ()  const;
	const SdaiBoolean&	TestPrecision ()  const;


	// ============
	// DS EXTENSION
	// ============
	//
	//	create a real type
	//	------------------
public :
	static
	  SdaiRealTypeH		Create ( SdaiInteger		Precision
					, SdaiAttrFlag		PrecisionFlag = sdaiUNSET );

 	//
	//	create an aggr of real
	//	----------------------
private :
	virtual
	  const PT_CREAT_AGGR  CreateAggrOfType( const AggType ) const;
	

	// ============
	// DATA MEMBERS
	// ============
protected :
	int			_Precision ;
	SdaiAttrFlag		_PrecisionFlag ;
	//CATSdaiRealType*	  _RealType ;


};

#endif	/* _SDAI_REAL_TYPE_H_ */
