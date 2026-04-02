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
//	ENTITY enumeration_value
//	END_ENTITY ;
//
// ------------------------------------------------------------------------------------------------
// References :
//	Definition de la norme SDAI ISO 10303-22, paragraphe 8.4.9, p. 39
//	Binding C++ de la norme SDAI ISO 10303-22, paragraphe D.4.2.3, p. 299 et 300
//  
//=============================================================================
// Mar. 1994   Creation                                   C. Vandaele
// Dec. 1996   Modification                               B. Marx
//=============================================================================


#ifndef	SdaiEnum_H
#define	SdaiEnum_H

/**
 * @CAA2Level L1
 * @CAA2Usage U1
 */

#include <KS0SIMPL.h>
#include <SdaiMacro.h>
#include <SdaiBoolean.h>

class SdaiString ;
//class CATSdaiEnum ;

/**
 * Class representing an SDAI enumeration.
 */
class ExportedByKS0SIMPL SdaiEnum
{
  public :

	// ----------------------------------------------------------------------------------------
	// constructors
	// ----------------------------------------------------------------------------------------
/** @nodoc */
	SdaiEnum ();		//  UNSET
/** @nodoc */
	SdaiEnum ( const SdaiEnum& source );

/** @nodoc */
	SdaiEnum (SdaiAttrH, int val);

	// ----------------------------------------------------------------------------------------
	// copy
	// ----------------------------------------------------------------------------------------
/** @nodoc */
	SdaiEnum& operator=(const SdaiEnum&);

	// ----------------------------------------------------------------------------------------
	// destructor
	// ----------------------------------------------------------------------------------------
	virtual ~SdaiEnum ();

	// ----------------------------------------------------------------------------------------
	// validity
	// ----------------------------------------------------------------------------------------
/** @nodoc */
	int	exists	()	const;

	// ----------------------------------------------------------------------------------------
	// RAZ 
	// ----------------------------------------------------------------------------------------
/** @nodoc */
	void nullify ();

	// ----------------------------------------------------------------------------------------
	// conversion
	// ----------------------------------------------------------------------------------------
/** @nodoc */
	operator int ()	const ;
	
	// ----------------------------------------------------------------------------------------
	// assign a value (int)
	// ----------------------------------------------------------------------------------------
/** @nodoc */
	SdaiEnum& set (int) ;

	// ----------------------------------------------------------------------------------------
	// IsKindOf (not in the norm)
	// ----------------------------------------------------------------------------------------
	/**
    * Tests if an SdaiEnum is of a given type.
	*  @param iTypeName - the type to check with
	*/
	virtual const SdaiBoolean&  IsKindOf( const SdaiString& iTypeName )  const;
/** @nodoc */
	static const SdaiString& LeType();
	
	// ----------------------------------------------------------------------------------------
	// dictionary enum. type
	// ----------------------------------------------------------------------------------------
/** @nodoc */
	SdaiEnumerationTypeH  GetEnumType() const ;
/** @nodoc */
	void SetEnumType(const SdaiEnumerationTypeH&);
	
	// ---------------------------------------------------------------------------------------
	// ENUM type name
	// ---------------------------------------------------------------------------------------
	/**
    * Gets the name of the type of a SdaiEnum.
	*/
 	const SdaiString&  GetEnumTypeName() const ;

	// ---------------------------------------------------------------------------------------
	// Dump (integer value)
	// ---------------------------------------------------------------------------------------
/** @nodoc */
 	friend ExportedByKS0SIMPL  ostream&  operator<< ( ostream& , const SdaiEnum&);
 	
	// ---------------------------------------------------------------------------------------
	// dump  STEP Part21
	// ---------------------------------------------------------------------------------------
/** @nodoc */
 	void  DumpEnumValue ( ostream& )const;
    
  private :
	// data 
	int	_value ;
	int _maxval;
	SdaiEnumerationTypeH	_enum_type ;
	//CATSdaiEnum*	_Enum ;



};

#endif	/* _SDAI_ENUM_H_ */
