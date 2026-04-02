/**
 * @quickReview ldi 02:09:02
 */
// COPYRIGHT DASSAULT SYSTEMES  1996
// ------------------------------------------------------------------------------------------------
// SDAI -- C++ Language Binding -- SdaiBaseTypeH
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
//      'SdaiBaseTypeH' couvre tout type qui peut etre utilise pour la valeur d'un attribut
//	ou d'un element d'aggregat.
//
// ------------------------------------------------------------------------------------------------
// Definition EXPRESS :
//
//	TYPE	base_type = SELECT (
//	                            simple_type,
//	                            aggregate_type,
//	                            named_type
//                                  );
//	END_TYPE ;
//
// ------------------------------------------------------------------------------------------------

#ifndef	SdaiBaseTypeH_H
#define	SdaiBaseTypeH_H

/**
 * @CAA2Level L1
 * @CAA2Usage U1
 */

#include "KS0SIMPL.h"
#include "SdaiMacro.h"
#include "CATCollec.h"
#include "SdaiDictionaryInstance.h"

class SdaiLogical;
class CATLISTP(SdaiDictionaryInstance);

//------------------------------------------------------------
/**
 * Class an SDAI attribute value or aggregate element.
 */
class ExportedByKS0SIMPL SdaiBaseTypeH : public SdaiDictionaryInstance
{
  public:	
    // =========================
    // T H E   S D A I   N O R M
    // =========================
    //
    //	cdtors
    //	------
    //
/** @nodoc */
    SdaiBaseTypeH ();
/** @nodoc */
    SdaiBaseTypeH ( const SdaiBaseTypeH& );
/** @nodoc */
    SdaiBaseTypeH ( SdaiSimpleTypeH& );
/** @nodoc */
    SdaiBaseTypeH ( SdaiAggrTypeH& );
/** @nodoc */
    SdaiBaseTypeH ( SdaiNamedTypeH& );
    ~SdaiBaseTypeH ();

    //
    //	operators
    //	---------
    //
/** @nodoc */
    SdaiBaseTypeH&  operator= ( SdaiSimpleTypeH& );
/** @nodoc */
    SdaiBaseTypeH&  operator= ( SdaiAggrTypeH& );
/** @nodoc */
    SdaiBaseTypeH&  operator= ( SdaiNamedTypeH& );

    //operator SdaiSimpleTypeH ();
    //operator SdaiAggrTypeH ();
    //operator SdaiNamedTypeH ();

/** @nodoc */
    operator  const SdaiSimpleTypeH ()  const;
/** @nodoc */
    operator  const SdaiAggrTypeH ()  const;
/** @nodoc */
    operator  const SdaiNamedTypeH ()  const;

    //
    //	test type
    //	---------
    //
/** @nodoc */
    const SdaiLogical&  _SdaiSimpleTypeH ()  const;
/** @nodoc */
    const SdaiLogical&  _SdaiAggrTypeH ()  const;
/** @nodoc */
    const SdaiLogical&  _SdaiNamedTypeH ()  const;


    //
    //	type info
    //	---------
    //
/** @nodoc */
    virtual
    const  SdaiBoolean&	IsKindOf( const SdaiString&	iName )  const;
/** @nodoc */
    static
    const SdaiString&	LeType();	//	return "BaseTypeH" ;


    // =======================
    // D S   E X T E N S I O N
    // =======================
    //
    //	type info
    //	---------

	/**
    * Gets the name of the type of a SdaiBaseType.
    *  @return
    *   The type of the SdaiBaseType
    */
    const SdaiString&	UnderlyingTypeName ()	const ;
/** @nodoc */
    SdaiPrimitiveType	Type () const ;

    //
    //	access to implementation
    //	------------------------
/** @nodoc */
    SdaiAbstractBaseType* AbstractBaseType() const;

    // private utility
/** @nodoc */
    void FillListOfTypesToDelete(CATLISTP(SdaiDictionaryInstance)*) const;
 
    // ============
    // DATA MEMBERS
    // ============
  private :
    SdaiAbstractBaseType*	_AbstractBaseType ;
    char			_isNamedType : 1; // if true, must not be deleted
    char			_isSimpleType : 1; // if true, must not be deleted
    char			_isAggrType : 1; // if true, must not be deleted
    //CATSdaiBaseTypeH*	_BaseTypeH ;


};

#include "CATIAV5Level.h"
#ifdef CATIAV5R11
///////////////////////////////////////////////////////////////////////////////////////////////////
//
//	MAKE BASETYPEH
//	==============
//
#include "KS0LATE.h"
/** @nodoc */
void ExportedByKS0LATE
AbstractBaseType_2_BaseTypeH( SdaiAbstractBaseType*	AbsType
			     , SdaiBaseTypeH*&		BaseTypH );
#else
#endif

#endif	/* _SDAI_BASE_TYPE_H_ */

