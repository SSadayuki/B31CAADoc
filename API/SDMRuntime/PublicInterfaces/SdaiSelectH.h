// COPYRIGHT DASSAULT SYSTEMES  1994
//=============================================================================
//
// SdaiSelectH:
//  takes a value of type SELECT
//   (SDAI -- C++ Language Binding)
//=============================================================================
// Usage Notes:
//  can be constructed from a SdaiAttr or via SdaiSelectType::CreateSelect
//=============================================================================
// Schema EXPRESS :
//
//	ENTITY select_value
//
//		value	: primitive ;		(* valeur associee a l'attribut *)
//		type	: named_type ;		(* type de la valeur *)
//
//      END_ENTITY ;
//
// ------------------------------------------------------------------------------------------------
// References :
//      Definition de la norme SDAI ISO 10303-22, paragraphe 8.4.8, p. 39
//      Binding C++ de la norme SDAI ISO 10303-22, paragraphe D.4.2.4, p. 303 et 304
//  
//=============================================================================
// Mar. 1994   Creation                                   C. Vandaele
// Dec. 1996   Modification                               B. Marx
//=============================================================================

#ifndef SdaiSelectH_H
#define SdaiSelectH_H

/**
 * @CAA2Level L1
 * @CAA2Usage U1
 */

#include <KS0SIMPL.h>
#include <SdaiMacro.h>
#include "SdaiPrimitiveH.h"

class SdaiString ;
class SdaiBoolean ;
class SdaiLogical ;
class SdaiNamedType ;
class CATSdaiSelectH ;

//-----------------------------------------------------------------------------
/** Class representing a value of type SELECT. */
class ExportedByKS0SIMPL SdaiSelectH
{
  public:

    //------
    // 'tors
    //------
    /** @nodoc */
    SdaiSelectH(); // not typed
	
	/** @nodoc */
    SdaiSelectH (SdaiAttrH, const SdaiPrimitiveH&);
	
	/** @nodoc */
    SdaiSelectH(const SdaiSelectH&);

    // Note : to create a select with a type use
    //        SdaiSelectType::CreateSelect
    //     or SdaiSelectH (SdaiAttrH)

    virtual ~SdaiSelectH();

    //------------------
    // validity
    //------------------
    /** @nodoc */
    const SdaiBoolean& exists ()	const ;

    // ----------------------------------------------------------------------------------------
    // R.A.Z
    // ----------------------------------------------------------------------------------------
    /** @nodoc */
	void  nullify () ;

    // ----------------------------------------------------------------------------------------
    // conversion to primitiveH
    // ----------------------------------------------------------------------------------------
	/**
    * Converts a SdaiSelect into an SdaiPrimitive
    */
	const SdaiPrimitiveH& getValue()	const ;
	
    // ----------------------------------------------------------------------------------------
    // assignment to a PrimitiveH
    // ----------------------------------------------------------------------------------------
    /** @nodoc */
	SdaiSelectH& set (const SdaiPrimitiveH&) ;

    // ----------------------------------------------------------------------------------------
    // TypeName of contained object
    // ----------------------------------------------------------------------------------------
	/**
    * Gets the underlying type name of a SdaiSelect
    */
	const SdaiString&  UnderlyingTypeName ()  const ;

    // ----------------------------------------------------------------------------------------
    // Type of contained object
    // ----------------------------------------------------------------------------------------
    /** @nodoc */
	SdaiNamedTypeH   UnderlyingType ()  const ;
    
    // in case of two equivalent underlying types, solve ambiguity
    /** @nodoc */
	void SetUnderlyingType (SdaiNamedTypeH underType) ;

    // ----------------------------------------------------------------------------------------
    // IsKindOf (not in the norm)
    // ----------------------------------------------------------------------------------------
    /** @nodoc */
	const SdaiBoolean&   IsKindOf( const SdaiString& iTypeName )  const;
    /** @nodoc */
	static const SdaiString & LeType();
	
    // ----------------------------------------------------------------------------------------
    // dump (STEP) of a SELECT
    // ----------------------------------------------------------------------------------------
    /** @nodoc */
	void  DumpSelectValue ( ostream& ) const  ;
	
    // ----------------------------------------------------------------------------------------
    // type SELECT (not in the norm)
    // ----------------------------------------------------------------------------------------
    /** @nodoc */
	SdaiSelectTypeH  GetSelectType() const ;
    /** @nodoc */
	void SetSelectType(const SdaiSelectTypeH&);
    /** @nodoc */
	const SdaiString&  GetSelectTypeName() const  ;
	
    // ----------------------------------------------------------------------------------------
    // (un)equality operators (not in the norm)
    // ----------------------------------------------------------------------------------------
    /** @nodoc */
	const SdaiLogical&  operator==(const SdaiSelectH& ) const;
    /** @nodoc */
	const SdaiLogical&  operator!=(const SdaiSelectH& ) const;
	

    // ----------------------------------------------------------------------------------------
    // copy operator (not in the norm)
    // ----------------------------------------------------------------------------------------
    /** @nodoc */
	SdaiSelectH& operator= (const SdaiSelectH& );

private:
    // private : help to compute underlying type
    static
    SdaiNamedTypeH  ComputeUnderlyingType (const SdaiPrimitiveH& iVal, SdaiSelectTypeH iType);
	

  protected:
    // ----------------------------------------------------------------------------------------
    // data
    // ---------------------------------------------------------------------------------------
    //CATSdaiSelectH*  _SelectH ;
    /** @nodoc */
	SdaiPrimitiveH   _value  ;
    /** @nodoc */
	SdaiSelectTypeH  _seltype  ;
    /** @nodoc */
	SdaiNamedTypeH _undertype ; // selected type


};

// ----------------------------------------------------------------------------------------
// fonction externe permettant de retrouver le nom d'un objet de type SdaiSelectH
// ---------------------------------------------------------------------------------------- 
/** @nodoc */
ExportedByKS0SIMPL extern const SdaiString &	TypeName(SdaiSelectH&);

#endif


