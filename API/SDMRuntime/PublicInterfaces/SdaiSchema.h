// COPYRIGHT DASSAULT SYSTEMES  2001
#ifndef _SDAI_SCHEMA_H_
#define _SDAI_SCHEMA_H_

/**
 * @CAA2Level L1
 * @CAA2Usage U1
 */

#include <KS0LATE.h>

// ------------------------------------------------------------------------------------------------
// SDAI -- C++ Language Binding -- SdaiSchema
// ------------------------------------------------------------------------------------------------
// Auteurs :
//	Corinne  VANDAELE 
//	Philippe BAUCHER
// ------------------------------------------------------------------------------------------------
//  Historique :
//
//	MODIFICATION	: 01
//	DATE		: fevrier 1996
//	AUTEUR		: CVE
//	NATURE		: Mise a niveau avec les types DS
//	DESCRIPTION	: Norme ISO 10303-22 (annexe D)
//
// ------------------------------------------------------------------------------------------------

#include <SdaiMacro.h>
#include <SdaiDictionaryInstance.h>

class CATSdaiSchema;
class SdaiBoolean;
class SdaiString;

/** @nodoc */
typedef		class SdaiInteroperableSchema*		SdaiInteroperableSchemaH ;
class SDAIAGGR(SdaiSet,SdaiInteroperableSchemaH);

/**
 * Class representing a SDAI schema.
 */
class ExportedByKS0LATE SdaiSchema :	public SdaiDictionaryInstance
	//////////
{
	// ===========================
	// T H E    S D A I    N O R M
	// ===========================
	//
	//	cdtors
	//	------
	//
protected :
	/** @nodoc */
	SdaiSchema ( const SdaiString& );
	/** @nodoc */
	~SdaiSchema ();

private  :
	/** @nodoc */
	SdaiSchema ( const SdaiSchema& );
	/** @nodoc */
	SdaiSchema&	 operator= ( const SdaiSchema& );


	//
	//	description
	//	-----------
	//
public :
	/**
    * Gets the name of a SdaiSchema
    */
	const SdaiString&				Name		()	const;
	/** @nodoc */
	const SdaiBoolean&				TestName	()	const;
	/** @nodoc */
	const	SDAIAGGRH(SdaiSet,SdaiInteroperableSchemaH)	Interoperation	()	const;
	/** @nodoc */
	const SdaiBoolean&					TestInteroperation()	const;
	/** @nodoc
    * Gets the set of entities in a SdaiSchema
    */
	const	SDAIAGGRH(SdaiSet,SdaiEntityH)		Entities	()	const;
	/** @nodoc */
	const SdaiBoolean&				TestEntities	()	const;
	/** @nodoc */
	const	SDAIAGGRH(SdaiSet,SdaiDefinedTypeH)	Types		()	const;
	/** @nodoc */
	const SdaiBoolean&				TestTypes	()	const;
	/** @nodoc */
	const	SDAIAGGRH(SdaiSet,SdaiGlobalRuleH)	Global_rules	()	const;
	/** @nodoc */
	const SdaiBoolean&                             TestGlobal_rules()      const;
	//
	//const	SDAIAGGRH(SdaiSet,SdaiGlobalFunctionH)	Global_functions()	const;
	//const SdaiBoolean&                             TestGlobal_functions()  const;


	//
	//	retrieve type by name
	//	---------------------
public :
	/** @nodoc */
	const SdaiNamedTypeH	Type ( const SdaiString& ) const ;
	/** @nodoc */
	const SdaiNamedTypeH	GetInteroperableType ( const SdaiString& ) const ;


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
	  const SdaiString&	GetInstanceTypeName()   const;



	// =======================
	// D S   E X T E N S I O N
	// =======================
	//
	//	create schema
	//	-------------
public :
	/** @nodoc */
	static
	  SdaiSchemaH	Create ( const SdaiString& );

	//
	//	add/remove entity
	//	-----------------
public :
	/** @nodoc */
	int	Add ( SdaiEntityH );
	/** @nodoc */
	int	Remove ( SdaiEntityH );

	//
	//	retrieve entity by name
	//	-----------------------
public :
	/** @nodoc */
	const SdaiEntityH	EntityDefinition ( const SdaiString& ) const ;

	//
	//	add/remove defined type
	//	-----------------------
public :
	/** @nodoc */
	int	Add ( SdaiDefinedTypeH );
	/** @nodoc */
	int	Remove ( SdaiDefinedTypeH );

	//
	//	retrieve defined type by name
	//	-----------------------------
public :
	/** @nodoc */
	const SdaiDefinedTypeH	GetDefinedType ( const SdaiString& ) const ;

	//
	//	add/remove global function
	//	--------------------------
//public :
    //	int	Add ( SdaiGlobalFunctionH );
    //	int	Remove ( SdaiGlobalFunctionH );
    //
	//
	//	retrieve global function by name
	//	--------------------------------
//public :
//	const SdaiGlobalFunctionH	GetGlobalFunction ( const SdaiString& ) const ;

	//
	//	add/remove interoperable schema (use or reference)
	//	--------------------------------------------------
public :
	/** @nodoc */
	int	Add ( SdaiInteroperableSchemaH );
	/** @nodoc */
	int	Remove ( SdaiInteroperableSchemaH );

	//
	//	retrieve interoperable schema by name
	//	-------------------------------------
public :
	/** @nodoc */
	const SdaiInteroperableSchemaH	GetInteroperableSchema ( const SdaiString& ) const ;

	//
	//	lock on the definition
	//	----------------------
public :
	/** @nodoc */
	virtual
	  void		GlobalLock ();
	/** @nodoc */
	virtual
	  void		GlobalUnlock ();

/*
	//
	//	add/remove schema interface (use or reference)
	//	----------------------------------------------
public :
	//
	// add use of a foreign schema
	int	AddUse ( SdaiSchemaH );
	//
	// add use of an item got from a foreign schema
	int	AddUse ( SdaiSchemaH		iSch
			, SdaiNamedTypeH	iTyp );
	//
	// add use of an item got from a foreign schema (item renamed for aliasing)
	int	AddUse ( SdaiSchemaH		iSch
			, SdaiNamedTypeH	iTyp
			, const SdaiString&	iRename );
	//
	// remove use of a foreign schema
	int	RemoveUse ( SdaiSchemaH );
	//
	// remove use of an item got from a foreign schema (might be identified thru alias)
	int	RemoveUse ( SdaiSchemaH 	iSch
			   , const SdaiString&	iNamedTypeId );
	//
	//
	// add reference to a foreign schema
	int	AddRef ( SdaiSchemaH );
	//
	// add reference to an item got from a foreign schema
	int	AddRef ( SdaiSchemaH		iSch
			, SdaiNamedTypeH	iTyp );
	//
	// add reference to an item got from a foreign schema (item renamed for aliasing)
	int	AddRef ( SdaiSchemaH		iSch
			, SdaiNamedTypeH	iTyp
			, const SdaiString&	iRename );
	//
	// remove reference to a foreign schema
	int	RemoveRef ( SdaiSchemaH );
	//
	// remove reference to an item got from a foreign schema (might be identified thru alias)
	int	RemoveRef ( SdaiSchemaH 	iSch
			   , const SdaiString&	iNamedTypeId );
*/

	//
	//	access to implementation
	//	------------------------
public :
	/** @nodoc */
	inline
	  CATSdaiSchema*	Schema() const
	    { return _Schema; }


	// ============
	// DATA MEMBERS
	// ============
private :
	/** @nodoc */
	CATSdaiSchema*	  _Schema ;


};

#endif	/* _SDAI_SCHEMA_H_ */

