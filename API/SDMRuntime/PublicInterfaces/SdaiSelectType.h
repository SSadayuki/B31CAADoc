/** @CAA2Required */
/*---------------------------------------------------------------------*/
/* DON'T DIRECTLY INCLUDE THIS HEADER IN YOUR APPLICATION CODE. IT IS  */
/* REQUIRED TO BUILD CAA APPLICATIONS BUT IT MAY DISAPPEAR AT ANY TIME */
/*---------------------------------------------------------------------*/

// ------------------------------------------------------------------------------------------------
// COPYRIGHT DASSAULT SYSTEMES  1996
// ------------------------------------------------------------------------------------------------
// SDAI -- C++ Language Binding -- SdaiSelectType
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
//      'SdaiSelectType' represente le type Express SELECT
//
// ------------------------------------------------------------------------------------------------
// Definition EXPRESS :
//
//	ENTITY   select_type
//
//		selections	: SET [1:?] OF named_type;
//			(* Ensemble des types selectionnables *)
//
//	END_ENTITY ;
//
// ------------------------------------------------------------------------------------------------

#ifndef	_SDAI_SELECT_TYPE_H_
#define	_SDAI_SELECT_TYPE_H_



#include <KS0SIMPL.h>
#include <SdaiMacro.h>
#include <SdaiConstructedType.h>

// class CATSdaiSelectType;
class SdaiBoolean;
class SDAIAGGR(SdaiSet,SdaiNamedTypeH);
class SdaiSelectH;

typedef SdaiSelectH* (*PT_SELECT)();


	//////////////
class ExportedByKS0SIMPL SdaiSelectType :	public SdaiConstructedType
	//////////////
{
	// ====
	// NORM
	// ====
	//
	//	cdtors
	//	------
	//
protected :
	SdaiSelectType ( const SDAIAGGRH(SdaiSet,SdaiNamedTypeH)&  );
	~SdaiSelectType ();

private:
	SdaiSelectType ( const SdaiSelectType& );
	SdaiSelectType&	 operator= ( const SdaiSelectType& );


	//
	//	description
	//	-----------
	//
public :
	const SDAIAGGRH(SdaiSet,SdaiNamedTypeH)		Selections ()  const;
	const SdaiBoolean&				TestSelections ()  const;


	//
	//	type info
	//	---------
	//
public :
	virtual
	  const SdaiBoolean&	IsKindOf( const SdaiString& iTypeName )  const;

	virtual
	  const SdaiString&	GetInstanceTypeName()   const;

	virtual
	  SdaiPrimitiveType	Type ()  const;

	static
	  const SdaiString&	LeType();	//	return "SelectType" ;


	// ============
	// DS EXTENSION
	// ============
	//
	//	create select type
	//	------------------
public :
	static
	  SdaiSelectTypeH	Create ( const SDAIAGGRH(SdaiSet,SdaiNamedTypeH) );


	//
	//	create aggr of SelectH
	//	----------------------
private :
	virtual
	  const PT_CREAT_AGGR  CreateAggrOfType( const AggType ) const;
	
	//
	//	create select of this type
	//	--------------------------
public :
	  SdaiSelectH* CreateSelect();

	//
	//	initialize select factory
	//	-------------------------
public :
	  void InitFactory(PT_SELECT);

	// ============
	// DATA MEMBERS
	// ============
protected :
	// CATSdaiSelectType*	  _SelectType ;
	const SDAIAGGRH(SdaiSet,SdaiNamedTypeH)		_Selections ;
	// pointer to an early-binding factory
	PT_SELECT _Factory; 


};

#endif	/* _SDAI_SELECT_TYPE_H_ */

